
# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import DOF  # assumed parsed object

from ..utils import encode_float

def build_dof_region(dof: DOF) -> bytes:
    output = bytearray()

    """
      maps without DOF have a default value of
      2.0, 64.0, 2.0, 0.15, 0.5
    """

    # CONSTANT? 
    output += bytes.fromhex("164018000000")

    output += encode_float(dof.blur_scale)
    output += encode_float(dof.range_ref)
    output += encode_float(dof.front_blur)
    output += encode_float(dof.front_blur_disable_range)
    output += encode_float(dof.back_blur)
    

    return bytes(output)

