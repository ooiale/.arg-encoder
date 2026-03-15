

from ..arg_parser import Volumetrics  # assumed parsed object

from ..utils import encode_float



def build_volumetrics_region(volumetrics: Volumetrics) -> bytes:

    output = bytearray()

    # volumetrics header
    output += bytes.fromhex("1f401c000000")

    output += encode_float(volumetrics.r)
    output += encode_float(volumetrics.g)
    output += encode_float(volumetrics.b)
    output += encode_float(volumetrics.gamma)
    output += encode_float(volumetrics.blend)
    output += encode_float(volumetrics.unknown)

    


    return bytes(output)


