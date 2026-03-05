"""
    Files without [CAMERA] section in .arg seems to have default values different from what is mentioned in the .arg files
    0000e04000007042000060410000000000000000 = 7 60 14 0 0
"""

from dataclasses import dataclass
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import Camera  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

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
    output += _encode_float(camera.distance)
    output += _encode_float(camera.fov)
    output += _encode_float(camera.dip)
    output += _encode_float(camera.at_min_offset)
    output += _encode_float(camera.at_max_offset)

    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp6409v2.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.camera)
    if arg.camera:
        data1 = build_camera_region(arg.camera)
        print(data1)
    else:
        print('no camera')