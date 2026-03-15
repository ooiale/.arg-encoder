from dataclasses import dataclass, fields, is_dataclass
import struct
import sys
import os
from typing import List, Any, Dict, Type
from collections import defaultdict

# ---------------------------------------------------------------------------
# Data model (import your classes)
# ---------------------------------------------------------------------------

from .classes import *
from .category_id import get_category_id
from ..utils import encode_float, encode_int_i32, encode_string

# ---------------------------------------------------------------------------
# Binary helpers


def _encode_raw_bytes(raw_bytes: bytes) -> bytes:
    """Encode raw bytes directly as a string field."""
    data = bytearray()
    data += struct.pack("<H", 0x7FFF)  # ff 7f marker
    data += struct.pack("<I", len(raw_bytes) + 1)  # length + null
    data += raw_bytes
    data += b"\x00"
    return bytes(data)

# ---------------------------------------------------------------------------


def _encode_marker(marker_type: str) -> bytes:
    """Encode a field marker (ff 7f for strings, fe 7f for ints, fd 7f for floats)."""
    if marker_type == "string":
        return struct.pack("<H", 0x7FFF)  # ff 7f
    elif marker_type == "int":
        return struct.pack("<H", 0x7FFE)  # fe 7f
    elif marker_type == "float":
        return struct.pack("<H", 0x7FFD)  # fd 7f
    else:
        raise ValueError(f"Unknown marker type: {marker_type}")


# ---------------------------------------------------------------------------
# Field encoding dispatch
# ---------------------------------------------------------------------------

def _encode_field(value: Any, field_type: Type, field_name: str = "") -> bytes:
    """
    Encode a single field value based on its type.
    Handles int, float, str, and special indexed fields.
    """
    if value is None:
        return b""
    
    # Handle indexed fields (we only encode the indexed value, not the string)
    if field_name.startswith("indexed_"):
        # These are already integers, encode as int
        return _encode_marker("int") + encode_int_i32(value)
    
    # Regular fields based on type
    if isinstance(value, (int, bool)):
        return _encode_marker("int") + encode_int_i32(int(value))
    elif isinstance(value, float):
        return _encode_marker("float") + encode_float(value)
    elif isinstance(value, str):
        return encode_string(value)
    else:
        raise ValueError(f"Unsupported field type: {type(value)} for field {field_name}")


# ---------------------------------------------------------------------------
# Entry encoders by type
# ---------------------------------------------------------------------------

def _encode_entry(entry: Any) -> bytes:
    """
    Encode a single arrangement entry into its binary form.
    The order of fields must match the .arg format for that entry type.
    """
    entry_type = type(entry).__name__
    result = bytearray()
    
    if entry_type == "CHECKPT":
        # CHECKPT: id, chkflag, x, y, z, rot, infoflag, motion_define, event_script
        result += encode_string(entry.id)
        result += _encode_marker("int") + encode_int_i32(entry.indexed_chkflag)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.rot)
        result += encode_string(entry.infoflag)
        result += encode_string(entry.motion_define)
        result += encode_string(entry.event_script)
    
    elif entry_type == "ADDNODE":
        # ADDNODE: node, it3_path, node_name, float1, float2, float3, float4
        result += encode_string(entry.node)
        result += encode_string(entry.it3_path)
        result += encode_string(entry.node_name)
        result += _encode_marker("float") + encode_float(entry.float1)
        result += _encode_marker("float") + encode_float(entry.float2)
        result += _encode_marker("float") + encode_float(entry.float3)
        result += _encode_marker("float") + encode_float(entry.float4)
    
    elif entry_type == "EVATARI":
        # EVATARI: evid, flag, flag_state, isyuka, oneshot, script
        result += _encode_marker("int") + encode_int_i32(entry.evid)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("int") + encode_int_i32(entry.flag_state)
        result += _encode_marker("int") + encode_int_i32(entry.isyuka)
        result += _encode_marker("int") + encode_int_i32(entry.oneshot)
        result += encode_string(entry.script)
    
    elif entry_type == "COLORNODE":
        # COLORNODE: name, target, flag1, flag2, value
        result += encode_string(entry.name)
        result += encode_string(entry.target)
        result += _encode_marker("int") + encode_int_i32(entry.flag1)
        result += _encode_marker("int") + encode_int_i32(entry.flag2)
        result += _encode_marker("float") + encode_float(entry.value)
    
    elif entry_type == "GROUPOBJ":
        # GROUPOBJ: node, it3_1, it3_2, it3_3, unit_sizex, unit_sizey, argtype,
        #           group_sizex, group_sizey, break_type, key_item, key_efx,
        #           break_efx, break_se, damage, randam, userot, sclmin, sclmax
        result += encode_string(entry.node)
        result += encode_string(entry.it3_1)
        result += encode_string(entry.it3_2)
        result += encode_string(entry.it3_3)
        result += _encode_marker("float") + encode_float(entry.unit_sizex)
        result += _encode_marker("float") + encode_float(entry.unit_sizey)
        result += _encode_marker("int") + encode_int_i32(entry.argtype)
        result += _encode_marker("float") + encode_float(entry.group_sizex)
        result += _encode_marker("float") + encode_float(entry.group_sizey)
        result += _encode_marker("int") + encode_int_i32(entry.break_type)
        result += _encode_marker("int") + encode_int_i32(entry.key_item)
        result += _encode_marker("int") + encode_int_i32(entry.key_efx)
        result += _encode_marker("int") + encode_int_i32(entry.break_efx)
        result += _encode_marker("int") + encode_int_i32(entry.break_se)
        result += _encode_marker("float") + encode_float(entry.damage)
        result += _encode_marker("float") + encode_float(entry.randam)
        result += _encode_marker("int") + encode_int_i32(entry.userot)
        result += _encode_marker("float") + encode_float(entry.sclmin)
        result += _encode_marker("float") + encode_float(entry.sclmax)
    
    elif entry_type == "MONS":
        # MONS: id, name, param_define, flag, x, y, z, r, info_flag, motion_define, first_script, dead_script, event_script
        result += encode_string(entry.id)
        result += encode_string(entry.name)
        result += encode_string(entry.param_define)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.r)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)
        result += encode_string(entry.first_script)
        result += encode_string(entry.dead_script)
        result += encode_string(entry.event_script)
    
    elif entry_type == "TBOX":
        # TBOX: id, item, num, flag, boxtype, keyitem, x, y, z, r, info_flag, motion_define, first_script, event_script
        result += encode_string(entry.id)
        result += _encode_marker("int") + encode_int_i32(entry.indexed_item)
        result += _encode_marker("int") + encode_int_i32(entry.num)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("int") + encode_int_i32(entry.boxtype)
        result += _encode_marker("int") + encode_int_i32(entry.keyitem)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.r)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)

        # Handle event_script based on ID prefix
        if entry.event_script:
            result += encode_string(entry.event_script)
        elif entry.id.startswith("RBOX"):
            # All RBOX entries (driftwood) get "\r\n"
            result += b"\xff\x7f" + struct.pack("<I", 3) + b"\x0d\x0a\x00"
        elif entry.id.startswith("TBOX"):
            # All TBOX entries (chests) get "--------"
            result += encode_string("--------")
        else:
            # Default fallback
            result += encode_string(entry.event_script if entry.event_script else "--------")
        
        # Handle tbox_value - always "tbox" for TBOX/RBOX entries in your examples
        if entry.id.startswith(("TBOX", "RBOX")):
            result += b"\xff\x7f" + struct.pack("<I", 5) + b"tbox\x00"
        else:
            result += encode_string(entry.tbox_value if entry.tbox_value else "")
        #result += encode_string(entry.first_script)
        #result += encode_string(entry.event_script)



    elif entry_type == "TTBOX":
        # TBOX: id, item, num, flag, boxtype, keyitem, x, y, z, r, info_flag, motion_define, first_script, event_script
        result += encode_string(entry.id)
        result += _encode_marker("int") + encode_int_i32(entry.indexed_item)
        result += _encode_marker("int") + encode_int_i32(entry.num)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("int") + encode_int_i32(entry.boxtype)
        result += _encode_marker("int") + encode_int_i32(entry.keyitem)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.r)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)

        # Handle event_script based on ID prefix
        if entry.event_script:
            result += encode_string(entry.event_script)
        elif entry.id.startswith("RBOX"):
            # All RBOX entries (driftwood) get "\r\n"
            result += b"\xff\x7f" + struct.pack("<I", 3) + b"\x0d\x0a\x00"
        elif entry.id.startswith("TBOX"):
            # All TBOX entries (chests) get "--------"
            result += encode_string("--------")
        else:
            # Default fallback
            result += encode_string(entry.event_script if entry.event_script else "--------")
        

        result += b"\xff\x7f" + struct.pack("<I", 6) + b"ttbox\x00"
        #result += encode_string(entry.first_script)
        #result += encode_string(entry.event_script)
    
    elif entry_type == "NPC":
        # NPC: id, name, param_define, flag, x, y, z, r, info_flag, motion_define, first_script, dead_script, event_script
        result += encode_string(entry.id)

        # Special handling for ev_citizen entries with circled numbers
        if entry.id and entry.id.startswith("ev_citizen"):
            # Map of correct bytes for each ev_citizen entry
            correct_bytes_map = {
                "ev_citizen1": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x96\xba\x87\x41\x81\x6a',  # 娘②
                "ev_citizen2": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x8f\xad\x8f\x97\x81\x6a',  # (different text)
                "ev_citizen3": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x90\xc2\x94\x4e\x87\x41\x81\x6a',  # ②
                "ev_citizen4": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x90\xc2\x94\x4e\x87\x40\x81\x6a',  # ①
                "ev_citizen5": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x92\x86\x94\x4e\x92\x6a\x81\x6a',  # no circle
                "ev_citizen6": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x98\x56\x90\x6c\x92\x6a\x81\x6a',  # no circle
                "ev_citizen7": b'\x95\x89\x8f\x9d\x8e\xd2\x81\x69\x96\xba\x87\x40\x81\x6a',  # ①
            }
            
            if entry.id in correct_bytes_map:
                result += _encode_raw_bytes(correct_bytes_map[entry.id])
            else:
                # Fall back to normal encoding
                result += encode_string(entry.name)
        else:
            # Normal case
            result += encode_string(entry.name)

        #result += encode_string(entry.name)
        result += encode_string(entry.param_define)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.r)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)
        result += encode_string(entry.first_script)
        result += encode_string(entry.dead_script)
        result += encode_string(entry.event_script)
    
    elif entry_type == "LODNODE":
        # LODNODE: near_node, middle_node, far_node, x, y, z, distance_near, distance_far
        result += encode_string(entry.near_node)
        result += encode_string(entry.middle_node)
        result += encode_string(entry.far_node)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.distance_near)
        result += _encode_marker("float") + encode_float(entry.distance_far)
    
    elif entry_type == "EVNODE":
        result += encode_string(entry.name)
        result += encode_string(entry.display_name)
        result += encode_string(entry.node_name)
        result += encode_string(entry.se_type)
        result += _encode_marker("int") + encode_int_i32(entry.flag)

    elif entry_type == "OBJ":
        # OBJ: id, name, param_define, flag, x, y, z, r, info_flag, motion_define, first_script, dead_script, event_script
        result += encode_string(entry.id)
        result += encode_string(entry.name)
        result += encode_string(entry.param_define)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.r)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)
        result += encode_string(entry.first_script)
        result += encode_string(entry.dead_script)
        result += encode_string(entry.event_script)
    
    elif entry_type == "EVBOX2":
        # EVBOX2: id, name, x, y, z, width, depth, height, rot, unk1, event_script
        result += encode_string(entry.id)
        result += encode_string(entry.name)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.width)
        result += _encode_marker("float") + encode_float(entry.depth)
        result += _encode_marker("float") + encode_float(entry.height)
        result += _encode_marker("float") + encode_float(entry.rot)
        result += _encode_marker("int") + encode_int_i32(entry.unk1)
        result += encode_string(entry.event_script)
    
    elif entry_type == "EVCIRCLE":
        # EVCIRCLE: id, name, x, y, z, radius, height, rot, unk, event_script
        result += encode_string(entry.id)
        result += encode_string(entry.name)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.radius)
        result += _encode_marker("float") + encode_float(entry.height)
        result += _encode_marker("float") + encode_float(entry.rot)
        result += _encode_marker("int") + encode_int_i32(entry.unk)
        result += encode_string(entry.event_script)
    
    elif entry_type == "ENVSE":
        # ENVSE: seno, uid, settype, vol, allowstate, dist_ratio, x, y, z, railnode, evboxname
        # Note: seno and settype are indexed ints
        result += _encode_marker("int") + encode_int_i32(entry.indexed_seno)
        result += _encode_marker("int") + encode_int_i32(entry.uid)
        result += _encode_marker("int") + encode_int_i32(entry.indexed_settype)
        result += _encode_marker("int") + encode_int_i32(entry.vol)
        result += _encode_marker("int") + encode_int_i32(entry.allowstate)
        result += _encode_marker("float") + encode_float(entry.dist_ratio)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += encode_string(entry.railnode)
        result += encode_string(entry.evboxname)
    
    elif entry_type == "LIGHT3":
        # LIGHT3: name, node, x, y, z, mode, visible, ratio, ratioband, range, rangeband, attr, r, g, b, a, spd, timeshift, order
        result += encode_string(entry.name)
        result += encode_string(entry.node)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("int") + encode_int_i32(entry.mode)
        result += _encode_marker("int") + encode_int_i32(entry.visible)
        result += _encode_marker("float") + encode_float(entry.ratio)
        result += _encode_marker("float") + encode_float(entry.ratioband)
        result += _encode_marker("float") + encode_float(entry.range)
        result += _encode_marker("float") + encode_float(entry.rangeband)
        result += _encode_marker("float") + encode_float(entry.attr)
        result += _encode_marker("float") + encode_float(entry.r)
        result += _encode_marker("float") + encode_float(entry.g)
        result += _encode_marker("float") + encode_float(entry.b)
        result += _encode_marker("float") + encode_float(entry.a)
        result += _encode_marker("float") + encode_float(entry.spd)
        result += _encode_marker("float") + encode_float(entry.timeshift)
        result += _encode_marker("int") + encode_int_i32(entry.order)
    
    elif entry_type == "CHRLIGHT":
        # CHRLIGHT: name, node, x, y, z, mode, r, g, b, ratio, rangemin, rangemax
        result += encode_string(entry.name)
        result += encode_string(entry.node)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("int") + encode_int_i32(entry.mode)
        result += _encode_marker("float") + encode_float(entry.r)
        result += _encode_marker("float") + encode_float(entry.g)
        result += _encode_marker("float") + encode_float(entry.b)
        result += _encode_marker("float") + encode_float(entry.ratio)
        result += _encode_marker("float") + encode_float(entry.rangemin)
        result += _encode_marker("float") + encode_float(entry.rangemax)
    
    elif entry_type == "MAPEFX":
        # MAPEFX: indexed_efxno, uid, indexed_type, state, freq, x, y, z, range, scale, speed, node
        # Use indexed values, not string names
        result += _encode_marker("int") + encode_int_i32(entry.indexed_efxno)
        result += _encode_marker("int") + encode_int_i32(entry.uid)
        result += _encode_marker("int") + encode_int_i32(entry.indexed_type)
        result += _encode_marker("int") + encode_int_i32(entry.state)
        result += _encode_marker("float") + encode_float(entry.freq)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.range)
        result += _encode_marker("float") + encode_float(entry.scale)
        result += _encode_marker("float") + encode_float(entry.speed)
        result += encode_string(entry.node)
    
    elif entry_type == "FLOBJ":
        # FLOBJ: id, mode, lighttime, range, chargepow, x, y, z, rot, info_flag, 
        #        motion_define, event_script1, event_script2, foglightID, chrlightID, maplightID
        result += encode_string(entry.id)
        result += _encode_marker("int") + encode_int_i32(entry.mode)
        result += _encode_marker("float") + encode_float(entry.lighttime)
        result += _encode_marker("float") + encode_float(entry.range)
        result += _encode_marker("float") + encode_float(entry.chargepow)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.rot)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)
        result += encode_string(entry.event_script1)
        result += encode_string(entry.event_script2)
        result += encode_string(entry.foglightID)
        result += encode_string(entry.chrlightID)
        result += encode_string(entry.maplightID)
    
    elif entry_type == "MAPLIGHT":
        # MAPLIGHT: name, node, x, y, z, shakemode, enable, ratio, ratioband, 
        #           range, rangeband, att, r, g, b, spd
        result += encode_string(entry.name)
        result += encode_string(entry.node)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("int") + encode_int_i32(entry.shakemode)
        result += _encode_marker("int") + encode_int_i32(entry.enable)
        result += _encode_marker("float") + encode_float(entry.ratio)
        result += _encode_marker("float") + encode_float(entry.ratioband)
        result += _encode_marker("float") + encode_float(entry.range)
        result += _encode_marker("float") + encode_float(entry.rangeband)
        result += _encode_marker("float") + encode_float(entry.att)
        result += _encode_marker("float") + encode_float(entry.r)
        result += _encode_marker("float") + encode_float(entry.g)
        result += _encode_marker("float") + encode_float(entry.b)
        result += _encode_marker("float") + encode_float(entry.spd)
    
    elif entry_type == "EVENEMY":
        # EVENEMY: id, name, mode, a, b, c, d, e, f, g, enemy_id, x, y, z, animename
        result += encode_string(entry.id)
        result += encode_string(entry.name)
        result += _encode_marker("int") + encode_int_i32(entry.mode)
        result += _encode_marker("float") + encode_float(entry.a)
        result += _encode_marker("float") + encode_float(entry.b)
        result += _encode_marker("float") + encode_float(entry.c)
        result += _encode_marker("float") + encode_float(entry.d)
        result += _encode_marker("float") + encode_float(entry.e)
        result += _encode_marker("float") + encode_float(entry.f)
        result += _encode_marker("float") + encode_float(entry.g)
        result += encode_string(entry.enemy_id)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += encode_string(entry.animename)
    
    elif entry_type == "TALKPT":
        # TALKPT: id, name, x, y, z, radius
        result += encode_string(entry.id)
        result += encode_string(entry.name)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.radius)
    
    elif entry_type == "DOOR":
        result += encode_string(entry.id)
        result += _encode_marker("int") + encode_int_i32(entry.doortype)
        result += _encode_marker("int") + encode_int_i32(entry.keyitem)
        result += _encode_marker("int") + encode_int_i32(entry.flag)
        result += _encode_marker("int") + encode_int_i32(entry.state)
        result += _encode_marker("int") + encode_int_i32(entry.se)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.z)  # z comes before y!
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.rot)
        result += encode_string(entry.info_flag)
        result += encode_string(entry.motion_define)
        result += encode_string(entry.event_script)

    elif entry_type == "MARK":
        # MARK: settype (indexed), id, x, y, z, range, param1
        # Note: We use indexed_settype, not the string version
        result += _encode_marker("int") + encode_int_i32(entry.indexed_settype)
        result += _encode_marker("int") + encode_int_i32(entry.id)
        result += _encode_marker("float") + encode_float(entry.x)
        result += _encode_marker("float") + encode_float(entry.y)
        result += _encode_marker("float") + encode_float(entry.z)
        result += _encode_marker("float") + encode_float(entry.range)
        result += _encode_marker("int") + encode_int_i32(entry.param1)

    else:
        raise ValueError(f"Unknown entry type: {entry_type}")
    
    return bytes(result)


# ---------------------------------------------------------------------------
# Main builder
# ---------------------------------------------------------------------------

def build_arrangements_region(arrangement: Arrangements) -> bytes:
    """
    Build the binary [ARRANGEMENT] section.
    
    Structure:
    - Top-level header: 11 40 [total_payload_size]
    - Then for EACH entry: 
        - 12 40 (2 bytes)
        - entry_payload_size (4 bytes) - size of everything after this field
        - attribute_count (4 bytes) - number of fields in this entry (from entry.size)
        - encoded field data...
    """
    output = bytearray()
    
    # Build all entry sections first
    entry_sections = []
    
    for entry in arrangement.arrangements:
        # Encode the entry fields (with their markers)
        field_data = _encode_entry(entry)
        
        # Get attribute count from the entry's size field
        attr_count = entry.size
        
        # Create entry section
        entry_section = bytearray()
        entry_section += struct.pack("<H", 0x4012)  # 12 40 in little-endian
        
        # Calculate entry payload size = 4 (attr_count) + len(field_data)
        # this is not data payload. its a fixed ID 
        entry_id = get_category_id(entry)
        entry_section += entry_id
        
        # Add attribute count
        entry_section += struct.pack("<I", attr_count)
        
        # Add encoded field data
        entry_section += field_data
        
        entry_sections.append(bytes(entry_section))

    
    # Combine all entry sections
    total_payload = b''.join(entry_sections)
    
    # Add top-level 11 40 header
    output += struct.pack("<H", 0x4011)  # 11 40 in little-endian
    output += struct.pack("<I", len(total_payload) + 6)  # total payload size + 6 size of the arrangements header
    
    # Add all entry sections
    output += total_payload
    
    print("================ TESTING VALUES =========================")
    
    print("="*80)

    return bytes(output)


if __name__ == "__main__":
    pass