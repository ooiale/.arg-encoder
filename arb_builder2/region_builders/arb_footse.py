
# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import FootSE  # assumed parsed object
from ..enum_reader import get_shared_resolver
_RESOLVER = get_shared_resolver()
from ..utils import encode_int_i32

def build_footse_region(footse: FootSE) -> bytes:

    output = bytearray()

    """
    0e40
    08000000 -> data size
    01000000
    """
    
    output += bytes.fromhex("0e40")

    se_int = _RESOLVER.parse_id(footse)
    encoded_se_int = encode_int_i32(se_int)

    data_size = len(encoded_se_int) + 4
    encoded_data_size = encode_int_i32(data_size)
    
    output += encoded_data_size
    output += encoded_se_int

    return bytes(output)


if __name__ == "__main__":
    pass