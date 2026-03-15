

from ..arg_parser import ZPlane  # assumed parsed object

from ..utils import encode_float

def build_zplane_region(zplane: ZPlane) -> bytes:

    output = bytearray()

    # Section 04401c that i cant figure out what that is => this was the portal section
    #output += bytes.fromhex("04401c000000f02374c90000000000000000f02374c90000000000000000")

    # zplane header
    output += bytes.fromhex("05400c000000")

    output += encode_float(zplane.near)
    output += encode_float(zplane.far)


    return bytes(output)


