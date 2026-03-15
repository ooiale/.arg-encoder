

from ..arg_parser import SSAO  # assumed parsed object

from ..utils import encode_float

def build_ssao_region(ssao: SSAO) -> bytes:

    output = bytearray()

    # Section 04401c that i cant figure out what that is => this was the portal section
    #output += bytes.fromhex("04401c000000f02374c90000000000000000f02374c90000000000000000")

    # ssao header
    output += bytes.fromhex("1e4010000000")

    output += encode_float(ssao.power)
    output += encode_float(ssao.blend)
    output += encode_float(ssao.soft)


    return bytes(output)


