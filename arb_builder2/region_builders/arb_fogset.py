
# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------
from typing import List
from ..arg_parser import FogSet  # assumed parsed object
from ..utils import encode_float, encode_rgb_component, encode_int_i32

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_fogset_region(fogsets: List[FogSet]) -> bytes:
    output = bytearray()

    # fogset header
    output += bytes.fromhex("074060000000")
    output += bytes.fromhex("01000000") # might be related to number of entries -1 ? idk let it constant for now

    # only in fogset that the rgb seems to be encoded different (value / 255)

    for fogset in fogsets:
        output += encode_rgb_component(fogset.r)
        output += encode_rgb_component(fogset.g)
        output += encode_rgb_component(fogset.b)
        output += encode_float(fogset.start)
        output += encode_float(fogset.end)
        output += encode_float(fogset.intensity)
        output += encode_float(fogset.fog_min)
        output += encode_float(fogset.fog_max)
        output += encode_float(fogset.height)
        output += encode_int_i32(fogset.height_mode, padding=False)
        output += encode_float(fogset.blend_ratio)

    


    return bytes(output)

