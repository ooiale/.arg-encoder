from dataclasses import dataclass, fields
import struct
import sys
import os
from typing import List
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import ShadowSoft  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)



# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_shadowsoft_region(shadowsoft: ShadowSoft) -> bytes:

    output = bytearray()

    # shadowsoft header
    output += bytes.fromhex("1d4008000000")

    output += _encode_float(shadowsoft.soft_param)


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1111.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.shadow_soft)
    if arg.shadow_soft:
        data1 = build_shadowsoft_region(arg.shadow_soft)
        print(data1)
    else:
        print('no shadowsoft')