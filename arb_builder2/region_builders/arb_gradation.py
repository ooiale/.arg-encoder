

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import Gradation  # assumed parsed object
from ..utils import encode_float


def build_gradation_region(gradation: Gradation) -> bytes:
    output = bytearray()

    # CONSTANT? 
    output += bytes.fromhex("174030000000")

    output += encode_float(gradation.vertical_rgb[0])
    output += encode_float(gradation.vertical_rgb[1])
    output += encode_float(gradation.vertical_rgb[2])
    output += encode_float(gradation.vertical_range)
    output += encode_float(gradation.vertical_sun_influence)
    output += encode_float(gradation.radial_rgb[0])
    output += encode_float(gradation.radial_rgb[1])
    output += encode_float(gradation.radial_rgb[2])
    output += encode_float(gradation.radial_range)
    output += encode_float(gradation.lens_flare_strength)
    output += encode_float(gradation.overlay_intensity)
    

    return bytes(output)

