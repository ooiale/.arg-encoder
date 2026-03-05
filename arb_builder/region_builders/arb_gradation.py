from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import Gradation  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_gradation_region(gradation: Gradation) -> bytes:
    output = bytearray()

    # CONSTANT? 
    output += bytes.fromhex("174030000000")

    output += _encode_float(gradation.vertical_rgb[0])
    output += _encode_float(gradation.vertical_rgb[1])
    output += _encode_float(gradation.vertical_rgb[2])
    output += _encode_float(gradation.vertical_range)
    output += _encode_float(gradation.vertical_sun_influence)
    output += _encode_float(gradation.radial_rgb[0])
    output += _encode_float(gradation.radial_rgb[1])
    output += _encode_float(gradation.radial_rgb[2])
    output += _encode_float(gradation.radial_range)
    output += _encode_float(gradation.lens_flare_strength)
    output += _encode_float(gradation.overlay_intensity)
    

    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.gradation)
    if arg.gradation:
        data1 = build_gradation_region(arg.gradation)
        print(data1)
    else:
        print('no gradation')