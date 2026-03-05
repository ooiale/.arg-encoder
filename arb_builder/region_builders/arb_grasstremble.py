
from dataclasses import dataclass
from typing import List
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------
from arg_parser import GrassTremble

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

def build_grass_tremble_region(grass: GrassTremble) -> bytes:
    output = bytearray()

    # need to check this constant again as it appears in 27.9% of files
    # the 06 byte may appear as 02 (and other values i havent seen yet)
    # 06 - mp1201 (217/384)
    # 02 - mp0011 (115/384)
    # 04 - mp0011 (121/384)
    # 08 - mp0011b (158/384)
    # 00 - (113/384)
    # 01 - (110/384)
    # 03 - (124/384)
    # 05 - (121/384)
    # 07 - (134/384)
    # 09 - (112/384)
    """
    could this be? probably not but will keep it here
    In mp0011, probably only [ZPLANE] and [GLARE] were actually serialized.

    [DOF], [GRADATION], [FOGSET], [FOGSETBACK] may have default values, skipped in binary.

    example of a file without grass tremble: 1b400800000003000000

    1b 40 08 00 seems to be constant

    # Will probably copy this chunk from the .arb itself just like the header although for this part maybe the answer lies in the map's geometry (it3 files)?

    03 40 24 00 00 00 is the constant that starts the next section
    
    """
    # Dealing with this sequence in the grasstremble_unknown_blob file
    #output += bytes.fromhex("1b400800000006000000184048000000")


    output += _encode_string(grass.node1)
    output += _encode_string(grass.node2)
    output += _encode_string(grass.node3)
    output += _encode_string(grass.node4)

    return bytes(output)

if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    print(arg.grass_tremble)
    if arg.grass_tremble:
        data1 = build_grass_tremble_region(arg.grass_tremble)
    print(data1)