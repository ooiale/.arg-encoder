from dataclasses import dataclass, fields
import struct
import sys
import os
from typing import List
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import Volumetrics  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)



# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_volumetrics_region(volumetrics: Volumetrics) -> bytes:

    output = bytearray()

    # volumetrics header
    output += bytes.fromhex("1f401c000000")

    output += _encode_float(volumetrics.r)
    output += _encode_float(volumetrics.g)
    output += _encode_float(volumetrics.b)
    output += _encode_float(volumetrics.gamma)
    output += _encode_float(volumetrics.blend)
    output += _encode_float(volumetrics.unknown)

    


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1111.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.volumetrics)
    if arg.volumetrics:
        data1 = build_volumetrics_region(arg.volumetrics)
        print(data1)
    else:
        print('no volumetrics')