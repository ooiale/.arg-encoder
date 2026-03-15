

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import ShadowSoft  # assumed parsed object
from ..utils import encode_float



# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_shadowsoft_region(shadowsoft: ShadowSoft) -> bytes:

    output = bytearray()

    # shadowsoft header
    output += bytes.fromhex("1d4008000000")

    output += encode_float(shadowsoft.soft_param)


    return bytes(output)

