from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import ZPlane  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_zplane_region(zplane: ZPlane) -> bytes:

    output = bytearray()

    # Section 04401c that i cant figure out what that is => this was the portal section
    #output += bytes.fromhex("04401c000000f02374c90000000000000000f02374c90000000000000000")

    # zplane header
    output += bytes.fromhex("05400c000000")

    output += _encode_float(zplane.near)
    output += _encode_float(zplane.far)


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.zplane)
    if arg.zplane:
        data1 = build_zplane_region(arg.zplane)
        print(data1)
    else:
        print('no zplane')