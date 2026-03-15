
from typing import List


# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------
from ..arg_parser import Map
from ..utils import encode_string, encode_float


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_map_region(maps: List[Map]) -> bytes:
    """
    Build the [MAP] region byte stream for one or more Map entries.

    Parameters
    ----------
    maps : List[Map]
        List of parsed Map objects, in the same order as in the .arg file.

    """

    output = bytearray()

    # MAP region prefix (observed in .arb dumps)
    # Two hardcoded null bytes before first opcode
    output += b"\x00\x00"

    for m in maps:
        # mapname string
        output += encode_string(m.mapname)

        # bgname string
        output += encode_string(m.bgname)

        # x, y, z floats
        output += encode_float(m.x)
        output += encode_float(m.y)
        output += encode_float(m.z)

    return bytes(output)

