import struct

# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

from ..arg_parser import InitScript

from ..utils import encode_string

def build_initscript_region(initscript: InitScript) -> bytes:
    """
    Build the binary [INIT_SCRIPT] section.
    
    Structure:
    - Header: 13 40 [4-byte size field] [data...]
    - Data: ff 7f [4-byte length] [script string + null] fc 7f
    
    Example from hex dump:
    13 40 14 40 16 00 00 00 ff 7f 0c 00 00 00 6d 70 31 32 30 31 3a 69 6e 69 74 00 fc 7f
    
    The size field (14 40 16 00) appears to be constant for init scripts.
    Based on observed data, we'll use: 14 40 16 00 00 00
    """
    output = bytearray()
    
    # Header: 13 40
    output += struct.pack("<H", 0x4013)  # 13 40 in little-endian
    
    # Size field - from observed data, this is constant: 14 40 16 00 00 00
    # This is 6 bytes total (14 40 16 00 00 00)
    output += struct.pack("<H", 0x4014)  # 14 40 in little-endian

    
    #output += struct.pack("<I", 0x16)    # 16 00 00 00
    
    # Encode the script string
    script_data = encode_string(initscript.script)

    # data lenght = data length field + string data
    output += struct.pack("<I", 4 + len(script_data))

    output += script_data
    
    # Add terminator fc 7f
    output += struct.pack("<H", 0x7FFC)  # fc 7f in little-endian
    
    return bytes(output)


if __name__ == "__main__":
    pass