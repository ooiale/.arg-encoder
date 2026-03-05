from dataclasses import dataclass, fields
import struct
import sys
import os
from arb_builder.enum_helper.enum_parser import parse_c_enum
from arb_builder.enum_helper.define_lookup import parse_defines

BGM_ENUM_PATH = "bgm_enum.h"
BGM_DEFINE_PATH = "bgm_define.h"

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import BGM  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def _encode_int_i32(value: int, padding: bool = False) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    
    result += struct.pack("<i", value)
    return result

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_bgm_region(bgm: BGM) -> bytes:

    output = bytearray()

    # Section 04401c that i cant figure out what that is => this was the portal section
    #output += bytes.fromhex("04401c000000f02374c90000000000000000f02374c90000000000000000")

    # bgm header
    output += bytes.fromhex("094008000000")

    define_table = parse_defines(BGM_DEFINE_PATH)
    bgm_table = parse_c_enum(BGM_ENUM_PATH)
    bgm_id = define_table.get(bgm, 0)
    bgm_int = bgm_table.get(bgm_id, 0)

    output += _encode_int_i32(bgm_int)
    
    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.bgm)
    if arg.bgm:
        print(build_bgm_region(arg.bgm))
    else:
        print('no flags')