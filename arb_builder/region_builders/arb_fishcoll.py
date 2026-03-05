from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))


# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import FishColl  # assumed parsed object

FISHCOLL_MAP = {
    "FC_CF":1,
    "FC_CAMERA":2,
    "FC_CA":3,
}

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def _encode_int_i32(value: int, padding: bool = False) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    
    result += struct.pack("<i", value)
    return result

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_fishcoll_region(fishcoll: FishColl) -> bytes:

    """
    1c400800000002000000

    FC_CAMERA 02 00 00 00
    FC_CF 01 00 00 00
    FC_CA 03 00 00 00
    """

    output = bytearray()

    # aaa header
    output += bytes.fromhex("1c4008000000")

    fishcoll_id = FISHCOLL_MAP.get(fishcoll, 0)
    output += _encode_int_i32(fishcoll_id) # not sure where fish coll appears?


    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1101.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.fish_coll)
    if arg.fish_coll:
        data1 = build_fishcoll_region(arg.fish_coll)
        print(data1)
    else:
        print('no zplane')