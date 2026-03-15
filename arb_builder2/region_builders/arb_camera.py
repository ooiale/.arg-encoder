"""
    Files without [CAMERA] section in .arg seems to have default values different from what is mentioned in the .arg files
    0000e04000007042000060410000000000000000 = 7 60 14 0 0
"""

import struct


# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import Camera  # assumed parsed object

from ..utils import encode_float

def build_camera_region(camera: Camera) -> bytes:
    """
    Build the [CAMERA] region byte stream.

    Parameters
    ----------
    camera : Camera
        Parsed Camera object.
    """

    output = bytearray()

    # CAMERA region header (observed constant)
    output += struct.pack("<I", 0x1C4019)
    output += b"\x00"
    output += b"\x00"

    # distance, fov, dip, AtMinOffset, AtMaxOffset
    output += encode_float(camera.distance)
    output += encode_float(camera.fov)
    output += encode_float(camera.dip)
    output += encode_float(camera.at_min_offset)
    output += encode_float(camera.at_max_offset)

    return bytes(output)

