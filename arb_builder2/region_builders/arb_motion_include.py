from ..utils import encode_int_i32, encode_string

from typing import List



# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_motioninclude_region(motion_include: List[str]) -> bytes:
    """
    Header example
    0a40
    3a040000 => 1082 => number of bytes
    26000000 = 38 => number of entries
    """
    output = bytearray()

    output += bytes.fromhex("0a40")

    entryNumber = len(motion_include)
    encodedEntryNumber = encode_int_i32(entryNumber)

    payload = bytearray()
    for motion in motion_include:
        payload += encode_string(motion)

    dumpSize = len(payload) + len(encodedEntryNumber) + 4 # 4 comes from this own byte sequence
    encodedDumpSize = encode_int_i32(dumpSize)

    output += encodedDumpSize
    output += encodedEntryNumber
    output += payload

    return bytes(output)


