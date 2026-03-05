from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import DOF  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def _encode_int_i32(value: int) -> bytes:
    return struct.pack("<i", value)

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_dof_region(dof: DOF) -> bytes:
    output = bytearray()

    """
      maps without DOF have a default value of
      2.0, 64.0, 2.0, 0.15, 0.5
    """

    # CONSTANT? 
    output += bytes.fromhex("164018000000")

    output += _encode_float(dof.blur_scale)
    output += _encode_float(dof.range_ref)
    output += _encode_float(dof.front_blur)
    output += _encode_float(dof.front_blur_disable_range)
    output += _encode_float(dof.back_blur)
    

    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.dof)
    if arg.dof:
        data1 = build_dof_region(arg.dof)
        print(data1)
    else:
        print('no dof')