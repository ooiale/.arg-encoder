from dataclasses import dataclass
import struct
import sys
import os

from arb_builder.enum_helper.enum_parser import parse_c_enum
MAPS_ENUM_PATH = "map_enum.h"

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import MapSet

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def _encode_int_u16(value: int, padding: bool = True) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"

    result += struct.pack("<H", value)
    return result

def _encode_int_i32(value: int, padding: bool) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    
    result += struct.pack("<i", value)
    return result

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_mapset_region(mapset: MapSet) -> bytes:
    """
    mapset.name = u16 with 2 null bytes of padding
    mapset.x = u16 with 2 null bytes of padding
    mapset.y = i32 with 2 null bytes of padding
    mapset.page = i32
    """
    output = bytearray()

    # observed constant
    output += bytes.fromhex("0000484202403000")

    # distance, fov, dip, AtMinOffset, AtMaxOffset
    maps_enum = parse_c_enum()
    map_name = maps_enum.get(mapset.name, 0)
    map_page = maps_enum.get(mapset.page, 0)

    output += _encode_int_u16(map_name)
    output += _encode_int_u16(mapset.x)
    output += _encode_int_i32(mapset.y, padding= True)
    output += _encode_int_i32(map_page, padding= False)

    # two null bytes padding between chiri and chr rgb
    #output += b'\x00\x00'

    # chr rgb
    output += _encode_float(mapset.chr_rgb[0])
    output += _encode_float(mapset.chr_rgb[1])
    output += _encode_float(mapset.chr_rgb[2])

    # map rgb
    output += _encode_float(mapset.map_rgb[0])
    output += _encode_float(mapset.map_rgb[1])
    output += _encode_float(mapset.map_rgb[2])

    # map light power
    output += _encode_float(mapset.map_light_power)


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.map_set)
    if arg.map_set:
        data1 = build_mapset_region(arg.map_set)
        print(data1)
    else:
        print('no map set')