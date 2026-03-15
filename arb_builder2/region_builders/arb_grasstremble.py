

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------
from ..arg_parser import GrassTremble
from ..utils import encode_string



def build_grass_tremble_region(grass: GrassTremble) -> bytes:
    output = bytearray()

    # need to check this constant again as it appears in 27.9% of files
    # the 06 byte may appear as 02 (and other values i havent seen yet)
    # 06 - mp1201 (217/384)
    # 02 - mp0011 (115/384)
    # 04 - mp0011 (121/384)
    # 08 - mp0011b (158/384)
    # 00 - (113/384)
    # 01 - (110/384)
    # 03 - (124/384)
    # 05 - (121/384)
    # 07 - (134/384)
    # 09 - (112/384)
    """
    could this be? probably not but will keep it here
    In mp0011, probably only [ZPLANE] and [GLARE] were actually serialized.

    [DOF], [GRADATION], [FOGSET], [FOGSETBACK] may have default values, skipped in binary.

    example of a file without grass tremble: 1b400800000003000000

    1b 40 08 00 seems to be constant

    # Will probably copy this chunk from the .arb itself just like the header although for this part maybe the answer lies in the map's geometry (it3 files)?

    03 40 24 00 00 00 is the constant that starts the next section
    
    """
    # Dealing with this sequence in the grasstremble_unknown_blob file
    #output += bytes.fromhex("1b400800000006000000184048000000")


    output += encode_string(grass.node1)
    output += encode_string(grass.node2)
    output += encode_string(grass.node3)
    output += encode_string(grass.node4)

    return bytes(output)
