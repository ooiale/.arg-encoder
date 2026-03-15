

from ..arg_parser import Portal  # assumed parsed object
from ..utils import encode_float

def build_portal_region(portal: Portal) -> bytes:

    output = bytearray()

    # Portal Header
    output += bytes.fromhex("04401c000000")

    output += encode_float(portal.ret_X)
    output += encode_float(portal.ret_Y)
    output += encode_float(portal.ret_Z)
    output += encode_float(portal.portal_X)
    output += encode_float(portal.portal_Y)
    output += encode_float(portal.portal_Z)

    return bytes(output)


