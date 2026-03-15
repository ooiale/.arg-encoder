


# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import FishColl  # assumed parsed object

FISHCOLL_MAP = {
    "FC_CF":1,
    "FC_CAMERA":2,
    "FC_CA":3,
}

from ..utils import encode_int_i32

def build_fishcoll_region(fishcoll: FishColl) -> bytes:

    """
    1c400800000002000000

    FC_CAMERA 02 00 00 00
    FC_CF 01 00 00 00
    FC_CA 03 00 00 00
    """

    output = bytearray()

    # aaa header
    output += bytes.fromhex("1c4008000000")

    fishcoll_id = FISHCOLL_MAP.get(fishcoll, 0)
    output += encode_int_i32(fishcoll_id) # not sure where fish coll appears?


    return bytes(output)

