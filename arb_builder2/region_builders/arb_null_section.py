
def build_nullsection_region(_ = None) -> bytes:

    output = bytearray()
    """
    0c40
    08000000
    00000000

    This section appears after Motion_Include and it seems all files have it set at null
    """
    output += bytes.fromhex("0c400800000000000000")


    return bytes(output)


if __name__ == "__main__":
    pass