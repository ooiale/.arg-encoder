from dataclasses import dataclass, fields
import struct
import sys
import os

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import InitScript

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

def build_initscript_region(initscript: InitScript) -> bytes:
    """
    Build the binary [INIT_SCRIPT] section.
    
    Structure:
    - Header: 13 40 [4-byte size field] [data...]
    - Data: ff 7f [4-byte length] [script string + null] fc 7f
    
    Example from hex dump:
    13 40 14 40 16 00 00 00 ff 7f 0c 00 00 00 6d 70 31 32 30 31 3a 69 6e 69 74 00 fc 7f
    
    The size field (14 40 16 00) appears to be constant for init scripts.
    Based on observed data, we'll use: 14 40 16 00 00 00
    """
    output = bytearray()
    
    # Header: 13 40
    output += struct.pack("<H", 0x4013)  # 13 40 in little-endian
    
    # Size field - from observed data, this is constant: 14 40 16 00 00 00
    # This is 6 bytes total (14 40 16 00 00 00)
    output += struct.pack("<H", 0x4014)  # 14 40 in little-endian
    output += struct.pack("<I", 0x16)    # 16 00 00 00
    
    # Encode the script string
    script_data = _encode_string(initscript.script)
    output += script_data
    
    # Add terminator fc 7f
    output += struct.pack("<H", 0x7FFC)  # fc 7f in little-endian
    
    return bytes(output)


if __name__ == "__main__":
    pass