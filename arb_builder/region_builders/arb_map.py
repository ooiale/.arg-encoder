"""
arb_map.py

Responsible for emitting the binary (.arb) representation of [MAP] entries.

This module does NOT:
- parse .arg files
- write files to disk
- handle any section other than [MAP]

It ONLY converts already-parsed MAP objects into the exact byte sequence
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
from arg_parser import Map

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


def _encode_float(value: float) -> bytes:
    """
    Encode a 32-bit float, little-endian.

    This matches all observed numeric values in .arb MAP blocks.
    """
    return struct.pack("<f", value)


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_map_region(maps: List[Map]) -> bytes:
    """
    Build the [MAP] region byte stream for one or more Map entries.

    Parameters
    ----------
    maps : List[Map]
        List of parsed Map objects, in the same order as in the .arg file.

    """

    output = bytearray()

    # MAP region prefix (observed in .arb dumps)
    # Two hardcoded null bytes before first opcode
    output += b"\x00\x00"

    for m in maps:
        # mapname string
        output += _encode_string(m.mapname)

        # bgname string
        output += _encode_string(m.bgname)

        # x, y, z floats
        output += _encode_float(m.x)
        output += _encode_float(m.y)
        output += _encode_float(m.z)

    return bytes(output)

if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    print(arg.maps)
    data1 = build_map_region(arg.maps)
    print(data1)