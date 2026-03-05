from dataclasses import dataclass
import struct
import sys
import os
from typing import List


# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------


# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

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

def _encode_int_i32(value: int, padding: bool = False) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    
    result += struct.pack("<i", value)
    return result

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_motioninclude_region(motion_include: List[str]) -> bytes:
    """
    Header example
    0a40
    3a040000 => 1082 => number of bytes
    26000000 = 38 => number of entries
    """
    output = bytearray()

    output += bytes.fromhex("0a40")

    entryNumber = len(motion_include)
    encodedEntryNumber = _encode_int_i32(entryNumber)

    payload = bytearray()
    for motion in motion_include:
        payload += _encode_string(motion)

    dumpSize = len(payload) + len(encodedEntryNumber) + 4 # 4 comes from this own byte sequence
    encodedDumpSize = _encode_int_i32(dumpSize)

    output += encodedDumpSize
    output += encodedEntryNumber
    output += payload

    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.map_set)
    if arg.map_set:
        data1 = build_motioninclude_region(arg.motion_includes)
        print(data1)
    else:
        print('no motion include set')