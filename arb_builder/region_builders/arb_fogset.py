from dataclasses import dataclass, fields
import struct
import sys
import os
from typing import List
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import FogSet  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def _encode_rgb_component(value: int) -> bytes:
    return struct.pack("<f", value / 255.0)

def _encode_int_i32(value: int, padding: bool = False) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    
    result += struct.pack("<i", value)
    return result

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_fogset_region(fogsets: List[FogSet]) -> bytes:
    output = bytearray()

    # fogset header
    output += bytes.fromhex("074060000000")
    output += bytes.fromhex("01000000") # might be related to number of entries -1 ? idk let it constant for now

    # only in fogset that the rgb seems to be encoded different (value / 255)

    for fogset in fogsets:
        output += _encode_rgb_component(fogset.r)
        output += _encode_rgb_component(fogset.g)
        output += _encode_rgb_component(fogset.b)
        output += _encode_float(fogset.start)
        output += _encode_float(fogset.end)
        output += _encode_float(fogset.intensity)
        output += _encode_float(fogset.fog_min)
        output += _encode_float(fogset.fog_max)
        output += _encode_float(fogset.height)
        output += _encode_int_i32(fogset.height_mode, padding=False)
        output += _encode_float(fogset.blend_ratio)

    


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1111.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.fogsets)
    if arg.fogsets:
        data1 = build_fogset_region(arg.fogsets)
        print(data1)
    else:
        print('no fogsets')