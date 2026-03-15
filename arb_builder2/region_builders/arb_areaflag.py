
# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import AreaFlags  # assumed parsed object
from ..utils import encode_int_i32
from ..enum_reader import get_shared_resolver
_RESOLVER = get_shared_resolver()

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_areaflag_region(areaflag: AreaFlags) -> bytes:

    output = bytearray()

    if areaflag is None:
        output += bytes.fromhex("08400800000000000000")
        return bytes(output)

    # areaflag header
    # first 2 bytes: 0840
    # followed by the data's size: 10 00 00 00 = 16
    # or 1c 00 00 00 = 12
    data_payload = bytearray()

    flag_qnt = len(areaflag.flags)
    data_payload += encode_int_i32(flag_qnt)

    for flag in areaflag.flags:
        flag_index = _RESOLVER.parse_id(flag)
        data_payload += encode_int_i32(flag_index)

    # Step 2: Write header with correct size
    output += bytes.fromhex("0840")                # section type
    output += encode_int_i32(len(data_payload) + 4)   # size of data + 4 bytes of this own "sequence of bytes for the data"

    # Step 3: Write the actual data
    output += data_payload
    

    

    return bytes(output)

