from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import SSAO  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_nullsection_region(_ = None) -> bytes:

    output = bytearray()
    """
    0c40
    08000000
    00000000

    This section appears after Motion_Include and it seems all files have it set at null
    """
    output += bytes.fromhex("0c400800000000000000")


    return bytes(output)


if __name__ == "__main__":
    pass