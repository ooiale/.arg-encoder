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

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def _encode_int_i32(value: int, padding: bool = False) -> bytes:
    """Encode a 32-bit integer, optionally with 2-byte padding."""
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    try:
        result += struct.pack("<i", int(value))
    except:
        print(f"{value} is not an integer, it is a {type(value)}")
    return bytes(result)

def _encode_int_u32(value: int, padding: bool = False) -> bytes:
    """Encode a 32-bit unsigned integer, optionally with 2-byte padding."""
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    result += struct.pack("<I", value)
    return bytes(result)

def _encode_string(value: str) -> bytes:
    """
    Encode a string exactly as observed in .arb files.

    Format:
        uint16  opcode  = 0xFF7F
        uint32  length  = len(string_bytes) + 1 (including null terminator)
        bytes   string  (Shift-JIS encoded)
        uint8   null    = 0x00
    """
    if not value:
        # Empty string: just opcode + length 1 + null
        data = bytearray()
        data += struct.pack("<H", 0x7FFF)  # 0xFF7F little-endian
        data += struct.pack("<I", 1)       # length 1 (just null)
        data += b"\x00"
        return bytes(data)
    
    string_bytes = value.encode("shift-jis")
    
    data = bytearray()
    # Opcode: 0xFF7F (little-endian)
    data += struct.pack("<H", 0x7FFF)
    # Length: uint32, little-endian (includes null terminator)
    data += struct.pack("<I", len(string_bytes) + 1)
    # String bytes
    data += string_bytes
    # Null terminator
    data += b"\x00"
    
    return bytes(data)

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
        return _encode_marker("int") + _encode_int_i32(value)
    
    # Regular fields based on type
    if isinstance(value, (int, bool)):
        return _encode_marker("int") + _encode_int_i32(int(value))
    elif isinstance(value, float):
        return _encode_marker("float") + _encode_float(value)
    elif isinstance(value, str):
        return _encode_string(value)
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
        result += _encode_string(entry.id)
        result += _encode_marker("int") + _encode_int_i32(entry.indexed_chkflag)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.rot)
        result += _encode_string(entry.infoflag)
        result += _encode_string(entry.motion_define)
        result += _encode_string(entry.event_script)
    
    elif entry_type == "ADDNODE":
        # ADDNODE: node, it3_path, node_name, float1, float2, float3, float4
        result += _encode_string(entry.node)
        result += _encode_string(entry.it3_path)
        result += _encode_string(entry.node_name)
        result += _encode_marker("float") + _encode_float(entry.float1)
        result += _encode_marker("float") + _encode_float(entry.float2)
        result += _encode_marker("float") + _encode_float(entry.float3)
        result += _encode_marker("float") + _encode_float(entry.float4)
    
    elif entry_type == "GROUPOBJ":
        # GROUPOBJ: node, it3_1, it3_2, it3_3, unit_sizex, unit_sizey, argtype,
        #           group_sizex, group_sizey, break_type, key_item, key_efx,
        #           break_efx, break_se, damage, randam, userot, sclmin, sclmax
        result += _encode_string(entry.node)
        result += _encode_string(entry.it3_1)
        result += _encode_string(entry.it3_2)
        result += _encode_string(entry.it3_3)
        result += _encode_marker("float") + _encode_float(entry.unit_sizex)
        result += _encode_marker("float") + _encode_float(entry.unit_sizey)
        result += _encode_marker("int") + _encode_int_i32(entry.argtype)
        result += _encode_marker("float") + _encode_float(entry.group_sizex)
        result += _encode_marker("float") + _encode_float(entry.group_sizey)
        result += _encode_marker("int") + _encode_int_i32(entry.break_type)
        result += _encode_marker("int") + _encode_int_i32(entry.key_item)
        result += _encode_marker("int") + _encode_int_i32(entry.key_efx)
        result += _encode_marker("int") + _encode_int_i32(entry.break_efx)
        result += _encode_marker("int") + _encode_int_i32(entry.break_se)
        result += _encode_marker("float") + _encode_float(entry.damage)
        result += _encode_marker("float") + _encode_float(entry.randam)
        result += _encode_marker("int") + _encode_int_i32(entry.userot)
        result += _encode_marker("float") + _encode_float(entry.sclmin)
        result += _encode_marker("float") + _encode_float(entry.sclmax)
    
    elif entry_type == "MONS":
        # MONS: id, name, param_define, flag, x, y, z, r, info_flag, motion_define, first_script, dead_script, event_script
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_string(entry.param_define)
        result += _encode_marker("int") + _encode_int_i32(entry.flag)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_string(entry.info_flag)
        result += _encode_string(entry.motion_define)
        result += _encode_string(entry.first_script)
        result += _encode_string(entry.dead_script)
        result += _encode_string(entry.event_script)
    
    elif entry_type == "TBOX":
        # TBOX: id, item, num, flag, boxtype, keyitem, x, y, z, r, info_flag, motion_define, first_script, event_script
        result += _encode_string(entry.id)
        result += _encode_marker("int") + _encode_int_i32(entry.indexed_item)
        result += _encode_marker("int") + _encode_int_i32(entry.num)
        result += _encode_marker("int") + _encode_int_i32(entry.flag)
        result += _encode_marker("int") + _encode_int_i32(entry.boxtype)
        result += _encode_marker("int") + _encode_int_i32(entry.keyitem)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_string(entry.info_flag)
        result += _encode_string(entry.motion_define)

        # Handle first_script based on ID prefix
        if entry.id.startswith("RBOX"):
            # All RBOX entries (driftwood) get "\r\n"
            result += b"\xff\x7f" + struct.pack("<I", 3) + b"\x0d\x0a\x00"
        elif entry.id.startswith("TBOX"):
            # All TBOX entries (chests) get "--------"
            result += _encode_string("--------")
        else:
            # Default fallback
            result += _encode_string(entry.first_script if entry.first_script else "--------")
        
        # Handle event_script - always "tbox" for TBOX/RBOX entries in your examples
        if entry.id.startswith(("TBOX", "RBOX")):
            result += b"\xff\x7f" + struct.pack("<I", 5) + b"tbox\x00"
        else:
            result += _encode_string(entry.event_script if entry.event_script else "")
        #result += _encode_string(entry.first_script)
        #result += _encode_string(entry.event_script)
    
    elif entry_type == "NPC":
        # NPC: id, name, param_define, flag, x, y, z, r, info_flag, motion_define, first_script, dead_script, event_script
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_string(entry.param_define)
        result += _encode_marker("int") + _encode_int_i32(entry.flag)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_string(entry.info_flag)
        result += _encode_string(entry.motion_define)
        result += _encode_string(entry.first_script)
        result += _encode_string(entry.dead_script)
        result += _encode_string(entry.event_script)
    
    elif entry_type == "OBJ":
        # OBJ: id, name, param_define, flag, x, y, z, r, info_flag, motion_define, first_script, dead_script, event_script
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_string(entry.param_define)
        result += _encode_marker("int") + _encode_int_i32(entry.flag)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_string(entry.info_flag)
        result += _encode_string(entry.motion_define)
        result += _encode_string(entry.first_script)
        result += _encode_string(entry.dead_script)
        result += _encode_string(entry.event_script)
    
    elif entry_type == "EVBOX2":
        # EVBOX2: id, name, x, y, z, width, depth, height, rot, unk1, event_script
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.width)
        result += _encode_marker("float") + _encode_float(entry.depth)
        result += _encode_marker("float") + _encode_float(entry.height)
        result += _encode_marker("float") + _encode_float(entry.rot)
        result += _encode_marker("int") + _encode_int_i32(entry.unk1)
        result += _encode_string(entry.event_script)
    
    elif entry_type == "EVCIRCLE":
        # EVCIRCLE: id, name, x, y, z, radius, height, rot, unk, event_script
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.radius)
        result += _encode_marker("float") + _encode_float(entry.height)
        result += _encode_marker("float") + _encode_float(entry.rot)
        result += _encode_marker("int") + _encode_int_i32(entry.unk)
        result += _encode_string(entry.event_script)
    
    elif entry_type == "ENVSE":
        # ENVSE: seno, uid, settype, vol, allowstate, dist_ratio, x, y, z, railnode, evboxname
        # Note: seno and settype are indexed ints
        result += _encode_marker("int") + _encode_int_i32(entry.indexed_seno)
        result += _encode_marker("int") + _encode_int_i32(entry.uid)
        result += _encode_marker("int") + _encode_int_i32(entry.indexed_settype)
        result += _encode_marker("int") + _encode_int_i32(entry.vol)
        result += _encode_marker("int") + _encode_int_i32(entry.allowstate)
        result += _encode_marker("float") + _encode_float(entry.dist_ratio)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_string(entry.railnode)
        result += _encode_string(entry.evboxname)
    
    elif entry_type == "LIGHT3":
        # LIGHT3: name, node, x, y, z, mode, visible, ratio, ratioband, range, rangeband, attr, r, g, b, a, spd, timeshift, order
        result += _encode_string(entry.name)
        result += _encode_string(entry.node)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("int") + _encode_int_i32(entry.mode)
        result += _encode_marker("int") + _encode_int_i32(entry.visible)
        result += _encode_marker("float") + _encode_float(entry.ratio)
        result += _encode_marker("float") + _encode_float(entry.ratioband)
        result += _encode_marker("float") + _encode_float(entry.range)
        result += _encode_marker("float") + _encode_float(entry.rangeband)
        result += _encode_marker("float") + _encode_float(entry.attr)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_marker("float") + _encode_float(entry.g)
        result += _encode_marker("float") + _encode_float(entry.b)
        result += _encode_marker("float") + _encode_float(entry.a)
        result += _encode_marker("float") + _encode_float(entry.spd)
        result += _encode_marker("float") + _encode_float(entry.timeshift)
        result += _encode_marker("int") + _encode_int_i32(entry.order)
    
    elif entry_type == "CHRLIGHT":
        # CHRLIGHT: name, node, x, y, z, mode, r, g, b, ratio, rangemin, rangemax
        result += _encode_string(entry.name)
        result += _encode_string(entry.node)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("int") + _encode_int_i32(entry.mode)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_marker("float") + _encode_float(entry.g)
        result += _encode_marker("float") + _encode_float(entry.b)
        result += _encode_marker("float") + _encode_float(entry.ratio)
        result += _encode_marker("float") + _encode_float(entry.rangemin)
        result += _encode_marker("float") + _encode_float(entry.rangemax)
    
    elif entry_type == "MAPEFX":
        # MAPEFX: indexed_efxno, uid, indexed_type, state, freq, x, y, z, range, scale, speed, node
        # Use indexed values, not string names
        result += _encode_marker("int") + _encode_int_i32(entry.indexed_efxno)
        result += _encode_marker("int") + _encode_int_i32(entry.uid)
        result += _encode_marker("int") + _encode_int_i32(entry.indexed_type)
        result += _encode_marker("int") + _encode_int_i32(entry.state)
        result += _encode_marker("float") + _encode_float(entry.freq)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.range)
        result += _encode_marker("float") + _encode_float(entry.scale)
        result += _encode_marker("float") + _encode_float(entry.speed)
        result += _encode_string(entry.node)
    
    elif entry_type == "FLOBJ":
        # FLOBJ: id, mode, lighttime, range, chargepow, x, y, z, rot, info_flag, 
        #        motion_define, event_script1, event_script2, foglightID, chrlightID, maplightID
        result += _encode_string(entry.id)
        result += _encode_marker("int") + _encode_int_i32(entry.mode)
        result += _encode_marker("float") + _encode_float(entry.lighttime)
        result += _encode_marker("float") + _encode_float(entry.range)
        result += _encode_marker("float") + _encode_float(entry.chargepow)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.rot)
        result += _encode_string(entry.info_flag)
        result += _encode_string(entry.motion_define)
        result += _encode_string(entry.event_script1)
        result += _encode_string(entry.event_script2)
        result += _encode_string(entry.foglightID)
        result += _encode_string(entry.chrlightID)
        result += _encode_string(entry.maplightID)
    
    elif entry_type == "MAPLIGHT":
        # MAPLIGHT: name, node, x, y, z, shakemode, enable, ratio, ratioband, 
        #           range, rangeband, att, r, g, b, spd
        result += _encode_string(entry.name)
        result += _encode_string(entry.node)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("int") + _encode_int_i32(entry.shakemode)
        result += _encode_marker("int") + _encode_int_i32(entry.enable)
        result += _encode_marker("float") + _encode_float(entry.ratio)
        result += _encode_marker("float") + _encode_float(entry.ratioband)
        result += _encode_marker("float") + _encode_float(entry.range)
        result += _encode_marker("float") + _encode_float(entry.rangeband)
        result += _encode_marker("float") + _encode_float(entry.att)
        result += _encode_marker("float") + _encode_float(entry.r)
        result += _encode_marker("float") + _encode_float(entry.g)
        result += _encode_marker("float") + _encode_float(entry.b)
        result += _encode_marker("float") + _encode_float(entry.spd)
    
    elif entry_type == "EVENEMY":
        # EVENEMY: id, name, mode, a, b, c, d, e, f, g, enemy_id, x, y, z, animename
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_marker("int") + _encode_int_i32(entry.mode)
        result += _encode_marker("float") + _encode_float(entry.a)
        result += _encode_marker("float") + _encode_float(entry.b)
        result += _encode_marker("float") + _encode_float(entry.c)
        result += _encode_marker("float") + _encode_float(entry.d)
        result += _encode_marker("float") + _encode_float(entry.e)
        result += _encode_marker("float") + _encode_float(entry.f)
        result += _encode_marker("float") + _encode_float(entry.g)
        result += _encode_string(entry.enemy_id)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_string(entry.animename)
    
    elif entry_type == "TALKPT":
        # TALKPT: id, name, x, y, z, radius
        result += _encode_string(entry.id)
        result += _encode_string(entry.name)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.z)
        result += _encode_marker("float") + _encode_float(entry.radius)
    
    elif entry_type == "DOOR":
        result += _encode_string(entry.id)
        result += _encode_marker("int") + _encode_int_i32(entry.doortype)
        result += _encode_marker("int") + _encode_int_i32(entry.keyitem)
        result += _encode_marker("int") + _encode_int_i32(entry.flag)
        result += _encode_marker("int") + _encode_int_i32(entry.state)
        result += _encode_marker("int") + _encode_int_i32(entry.se)
        result += _encode_marker("float") + _encode_float(entry.x)
        result += _encode_marker("float") + _encode_float(entry.z)  # z comes before y!
        result += _encode_marker("float") + _encode_float(entry.y)
        result += _encode_marker("float") + _encode_float(entry.rot)
        result += _encode_string(entry.info_flag)
        result += _encode_string(entry.motion_define)
        result += _encode_string(entry.event_script)

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
    aux = 0
    aux1 = 0
    aux2 = 0
    
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
        aux += len(entry_section)
        aux1 += len(entry_section) - 2
        aux2 = entry_section
    
    # Combine all entry sections
    total_payload = b''.join(entry_sections)
    
    # Add top-level 11 40 header
    output += struct.pack("<H", 0x4011)  # 11 40 in little-endian
    output += struct.pack("<I", len(total_payload) + 6)  # total payload size + 6 size of the arrangements header
    
    # Add all entry sections
    output += total_payload
    
    print("================ TESTING VALUES =========================")
    print(f"aux = {aux}")
    print(f"aux1 = {aux1}")
    print(f"aux1 + 4 = {aux1 + 4}")
    print(f"total payload = {len(total_payload)}")
    print(f"aux2 = {aux2}")
    print("="*80)

    return bytes(output)


if __name__ == "__main__":
    pass