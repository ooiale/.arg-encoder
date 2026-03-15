

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import BGM
from ..enum_reader import get_shared_resolver
_RESOLVER = get_shared_resolver()

from ..utils import encode_int_i32



def build_bgm_region(bgm: BGM) -> bytes:

    output = bytearray()

    # Section 04401c that i cant figure out what that is => this was the portal section
    #output += bytes.fromhex("04401c000000f02374c90000000000000000f02374c90000000000000000")

    # bgm header
    output += bytes.fromhex("094008000000")

    bgm_int = _RESOLVER.parse_id(bgm)

    output += encode_int_i32(bgm_int)
    
    return bytes(output)

