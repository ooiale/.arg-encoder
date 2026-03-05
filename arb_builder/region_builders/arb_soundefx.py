from dataclasses import dataclass, fields
import struct
import sys
import os
from arb_builder.enum_helper.enum_parser import parse_c_enum
from arb_builder.enum_helper.define_lookup import parse_defines

SE_ENUM_PATH = "se_enum.h"
SE_DEFINE_PATH = "se_define.h"

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import SoundEfx  # assumed parsed object

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

def build_soundefx_region(soudefx: SoundEfx) -> bytes:

    output = bytearray()

    """
    0e40
    08000000 -> data size
    01000000
    """
    #! FIX THE CONSTANT LATER, 0E40 IS FOOTSE
    
    output += bytes.fromhex("0e40")

    define_table = parse_defines(SE_DEFINE_PATH)
    se_table = parse_c_enum(SE_ENUM_PATH)
    se_id = define_table.get(soudefx.value, 0)
    se_int = se_table.get(se_id, 38)
    encoded_se_int = _encode_int_i32(se_int)

    data_size = len(encoded_se_int) + 4
    encoded_data_size = _encode_int_i32(data_size)
    
    output += encoded_data_size
    output += encoded_se_int

    return bytes(output)


if __name__ == "__main__":
    pass