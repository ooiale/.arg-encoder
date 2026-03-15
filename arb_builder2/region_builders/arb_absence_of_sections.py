# ---------------------------------------------------------------------------
# Data model
# ---------------------------------------------------------------------------

# ---------------------------------------------------------------------------
# Binary helpers
# ---------------------------------------------------------------------------


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------

def build_absence_of_sections_region(section_name: str) -> bytes:

    # when the section FOGSETWATER is absent we have the 1a4008 section
    # when the section FOGSETBACK is absent we have the 154008 section

    output = bytearray()

    if section_name == "FOGSETWATER":
        output += bytes.fromhex("1a400800000000000000")
    
    elif section_name == "FOGSETBACK":
        output += bytes.fromhex("15400800000000000000")
    
    

    return bytes(output)


if __name__ == "__main__":
    pass