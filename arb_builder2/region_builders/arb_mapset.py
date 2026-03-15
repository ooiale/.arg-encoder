

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import MapSet
from ..utils import encode_float, encode_int_i32, encode_int_u16
from ..enum_reader import get_shared_resolver
_RESOLVER = get_shared_resolver()

def build_mapset_region(mapset: MapSet) -> bytes:
    """
    mapset.name = u16 with 2 null bytes of padding
    mapset.x = u16 with 2 null bytes of padding
    mapset.y = i32 with 2 null bytes of padding
    mapset.page = i32
    """
    output = bytearray()

    # observed constant
    output += bytes.fromhex("0000484202403000")

    # distance, fov, dip, AtMinOffset, AtMaxOffset
    map_name = _RESOLVER.parse_id(mapset.name)
    map_page = _RESOLVER.parse_id(mapset.page)

    output += encode_int_u16(map_name)
    output += encode_int_u16(mapset.x)
    output += encode_int_i32(mapset.y, padding= True)
    output += encode_int_i32(map_page, padding= False)

    # two null bytes padding between chiri and chr rgb
    #output += b'\x00\x00'

    # chr rgb
    output += encode_float(mapset.chr_rgb[0])
    output += encode_float(mapset.chr_rgb[1])
    output += encode_float(mapset.chr_rgb[2])

    # map rgb
    output += encode_float(mapset.map_rgb[0])
    output += encode_float(mapset.map_rgb[1])
    output += encode_float(mapset.map_rgb[2])

    # map light power
    output += encode_float(mapset.map_light_power)


    return bytes(output)


