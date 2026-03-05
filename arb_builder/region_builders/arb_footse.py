from dataclasses import dataclass, fields
import struct
import sys
import os
from arb_builder.enum_helper.enum_parser import parse_c_enum
from arb_builder.enum_helper.define_lookup import parse_defines

SE_ENUM_PATH = "def_enum.h"

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import FootSE  # assumed parsed object

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

def build_footse_region(footse: FootSE) -> bytes:

    output = bytearray()

    """
    0e40
    08000000 -> data size
    01000000
    """
    
    output += bytes.fromhex("0e40")

    se_table = parse_c_enum(SE_ENUM_PATH)
    se_int = se_table.get(footse, 0)
    encoded_se_int = _encode_int_i32(se_int)

    data_size = len(encoded_se_int) + 4
    encoded_data_size = _encode_int_i32(data_size)
    
    output += encoded_data_size
    output += encoded_se_int

    return bytes(output)


if __name__ == "__main__":
    pass