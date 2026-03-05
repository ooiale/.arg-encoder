from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import Glare  # assumed parsed object

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

def build_glare_region(glare: Glare) -> bytes:
    """
    all are i32 little endian
        @dataclass
    class GlareParams:
        intensity: float
        blur_loop_count: int
        blur_width: float
        blur_blend: float
        original_blend: float
        composite_blend: float


    @dataclass
    class Glare:
        base_luminance: float
        gamma: float
        primary: GlareParams
        secondary: Optional[GlareParams] = None
    
        Apparently, only the primary glare parameters are used.
    """

    output = bytearray()

    # CONSTANT? 
    output += bytes.fromhex("034024000000")

    output += _encode_float(glare.base_luminance)
    output += _encode_float(glare.gamma)
    
    # primary glare params
    output += _encode_float(glare.primary.intensity)
    output += _encode_int_i32(glare.primary.blur_loop_count)
    output += _encode_float(glare.primary.blur_width)
    output += _encode_float(glare.primary.blur_blend)
    output += _encode_float(glare.primary.original_blend)
    output += _encode_float(glare.primary.composite_blend)

    # seconday params ?


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.glare)
    if arg.glare:
        data1 = build_glare_region(arg.glare)
        print(data1)
    else:
        print('no glare')