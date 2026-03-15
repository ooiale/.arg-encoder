

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import Glare  # assumed parsed object
from ..utils import encode_float, encode_int_i32

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

    output += encode_float(glare.base_luminance)
    output += encode_float(glare.gamma)
    
    # primary glare params
    output += encode_float(glare.primary.intensity)
    output += encode_int_i32(glare.primary.blur_loop_count)
    output += encode_float(glare.primary.blur_width)
    output += encode_float(glare.primary.blur_blend)
    output += encode_float(glare.primary.original_blend)
    output += encode_float(glare.primary.composite_blend)

    # seconday params ?


    return bytes(output)

