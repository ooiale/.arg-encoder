from typing import Tuple, Optional


GRASS_PREAMBLE_SIGNATURE = b'\x1B\x40\x08\x00'
STRING_SENTINEL = b'\xFF\x7F'
NEXT_SECTION_SENTINEL = b'\x03\x40\x24\x00\x00\x00'


def extract_grass_tremble_unknown_blob_region(
    arb_bytes: bytes,
    offset: int,
    max_scan: Optional[int] = None
) -> Tuple[bytes, int]:
    """
    Extracts the GRASS_TREMBLE unknown blob preamble region.

    Structure:
        1B 40 08 00
        + unknown variable-length blob

    Termination conditions:
        - FF 7F (start of encoded string), OR
        - 03 40 24 00 00 00 (next section header)

    Returns:
        (region_bytes, region_size)

    If signature is not found at offset:
        Returns (b'', 0)
    """
    #print('TROLOLOLOLOLO', offset)
    file_size = len(arb_bytes)

    # Validate offset bounds
    if offset < 0 or offset + 4 > file_size:
        return b'', 0

    # Check signature
    if arb_bytes[offset:offset + 4] != GRASS_PREAMBLE_SIGNATURE:
        return b'', 0

    cursor = offset + 4

    # Optional scan limit for safety
    if max_scan is not None:
        scan_limit = min(offset + max_scan, file_size)
    else:
        scan_limit = file_size

    while cursor < scan_limit:

        # Stop at start of encoded string
        if arb_bytes[cursor:cursor + 2] == STRING_SENTINEL:
            break

        # Stop at next section header
        if arb_bytes[cursor:cursor + 6] == NEXT_SECTION_SENTINEL:
            break

        cursor += 1

    region = arb_bytes[offset:cursor]
    size = cursor - offset

    return region, size


def build_grass_tremble_unknown_blob_region(
    arb_bytes: bytes,
    offset: int
) -> bytes:
    """
    Public builder wrapper.
    Returns the exact opaque region to preserve in regeneration.
    """

    region, _ = extract_grass_tremble_unknown_blob_region(arb_bytes, offset)
    return region
