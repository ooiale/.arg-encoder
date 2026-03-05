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

from dataclasses import dataclass
from typing import List
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------
from arg_parser import ScrInclude

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_string(value: str) -> bytes:
    """
    Encode a string exactly as observed in .arb files.

    Format:
        uint16  opcode  = 0xFF7F
        uint32  length  = len(string_bytes)
        bytes   string  (ASCII / UTF-8)
        uint8   null    = 0x00

    Notes:
    - Length does NOT include the null terminator.
    - Strings are ASCII-compatible paths in all observed samples.
    """

    string_bytes = value.encode("shift-jis")

    data = bytearray()

    # Opcode: 0xFF7F (little-endian)
    data += struct.pack("<H", 0x7FFF)

    # Length: uint32, little-endian
    data += struct.pack("<I", len(string_bytes) + 1) # + 1 comes from the null terminator

    # String bytes
    data += string_bytes

    # Null terminator
    data += b"\x00"

    return bytes(data)


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_scr_include_region(scr: ScrInclude) -> bytes:

    output = bytearray()

    # Section opcode (SCR_INCLUDE)
    output += struct.pack("<I", 0x00154020)

    # Flags / padding
    output += struct.pack("<H", 0x0000)

    # Entry count
    #output += struct.pack("<I", len(names))
    output += struct.pack("<I", 1)

    output += _encode_string(scr.mapname)

    
    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201t1.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    print(arg.scr_include)
    if arg.scr_include:
        data1 = build_scr_include_region(arg.scr_include)
        print(data1)
        