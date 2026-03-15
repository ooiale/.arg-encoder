

from ..arg_parser import ShadowBound  # assumed parsed object
from ..utils import encode_float

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_shadowbound_region(shadowbound: ShadowBound) -> bytes:

    output = bytearray()

    # Section 04401c that i cant figure out what that is => this was the portal section
    #output += bytes.fromhex("04401c000000f02374c90000000000000000f02374c90000000000000000")

    # shadowbound header
    output += bytes.fromhex("064018000000")

    output += encode_float(shadowbound.bound1)
    output += encode_float(shadowbound.bound2)
    output += encode_float(shadowbound.dist)
    output += encode_float(shadowbound.near)
    output += encode_float(shadowbound.far)


    return bytes(output)
