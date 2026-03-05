from dataclasses import dataclass, fields
import struct
import sys
import os

from arb_builder.enum_helper.enum_parser import parse_c_enum
FLAGS_ENUM_PATH = "flag_enum.h"

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import AreaFlags  # assumed parsed object

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

def build_areaflag_region(areaflag: AreaFlags) -> bytes:

    output = bytearray()

    if areaflag is None:
        output += bytes.fromhex("08400800000000000000")
        return bytes(output)

    # areaflag header
    # first 2 bytes: 0840
    # followed by the data's size: 10 00 00 00 = 16
    # or 1c 00 00 00 = 12
    data_payload = bytearray()

    flag_qnt = len(areaflag.flags)
    data_payload += _encode_int_i32(flag_qnt)

    flags_table = parse_c_enum(FLAGS_ENUM_PATH)
    for flag in areaflag.flags:
        flag_index = flags_table.get(flag, 0)
        data_payload += _encode_int_i32(flag_index)

    # Step 2: Write header with correct size
    output += bytes.fromhex("0840")                # section type
    output += _encode_int_i32(len(data_payload) + 4)   # size of data + 4 bytes of this own "sequence of bytes for the data"

    # Step 3: Write the actual data
    output += data_payload
    

    

    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.area_flags)
    if arg.area_flags and arg.area_flags.flags:
        print(build_areaflag_region(arg.area_flags))
    else:
        print('no flags')