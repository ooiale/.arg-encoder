#! SCR_INCLUDE comes after MAP and before CAMERA

"""
arb_scrinclude.py

Responsible for emitting the binary (.arb) representation of [SCR_INCLUDE] entries.

This module does NOT:
- parse .arg files
- write files to disk
- handle any section other than [SCR_INCLUDE]

It ONLY converts already-parsed SCR_INCLUDE objects into the exact byte sequence
observed in .arb files.
"""


import struct


# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------
from ..arg_parser import ScrInclude
from ..utils import encode_string


def build_scr_include_region(scr: ScrInclude) -> bytes:

    output = bytearray()

    # Section opcode (SCR_INCLUDE)
    output += struct.pack("<I", 0x00154020)

    # Flags / padding
    output += struct.pack("<H", 0x0000)

    # Entry count
    #output += struct.pack("<I", len(names))
    output += struct.pack("<I", 1)

    output += encode_string(scr.mapname)

    
    return bytes(output)


        