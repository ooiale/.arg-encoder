from dataclasses import dataclass, fields
import struct
import sys
import os
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from arg_parser import Portal  # assumed parsed object

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------

def _encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_portal_region(portal: Portal) -> bytes:

    output = bytearray()

    # Portal Header
    output += bytes.fromhex("04401c000000")

    output += _encode_float(portal.ret_X)
    output += _encode_float(portal.ret_Y)
    output += _encode_float(portal.ret_Z)
    output += _encode_float(portal.portal_X)
    output += _encode_float(portal.portal_Y)
    output += _encode_float(portal.portal_Z)

    return bytes(output)


if __name__ == "__main__":
    from pathlib import Path
    argPath = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp1201.arg")
    from arg_parser import parse_arg
    arg = parse_arg(argPath.read_text(encoding="shift-jis"))
    #print(arg)
    print(arg.portal)
    if arg.portal:
        data1 = build_portal_region(arg.portal)
        print(data1)
    else:
        print('no portal')