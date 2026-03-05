import re
import os
def parse_c_enum(filename="map_enum.h"):
    enum = {}
    current_value = None

    enum_entry = re.compile(
        r'^\s*([A-Za-z0-9_]+)(?:\s*=\s*([^,]+))?\s*,?'
    )

    script_dir = os.path.dirname(os.path.abspath(__file__))
    path = os.path.join(script_dir, filename)
    with open(path, encoding="utf-8") as f:
        for line in f:
            line = re.sub(r'//.*', '', line).strip()
            if not line or line.startswith('enum') or line in ('{', '};'):
                continue

            m = enum_entry.match(line)
            if not m:
                continue

            name, rhs = m.groups()

            if rhs is not None:
                rhs = rhs.strip()
                # Try to parse as integer (handles decimal and hex)
                try:
                    if rhs.startswith(("0x", "0X")):
                        current_value = int(rhs, 16)
                    else:
                        current_value = int(rhs)
                except ValueError:
                    # It's an identifier — look it up
                    if rhs in enum:
                        current_value = enum[rhs]
                    else:
                        print(f"Warning: {rhs} not found yet, using 0")
                        current_value = 0
            else:
                # No RHS: increment
                current_value = 0 if current_value is None else current_value + 1

            enum[name] = current_value

    return enum
"""
def parse_c_enum(filename = "map_enum.h"):
    enum = {}
    current_value = None

    enum_entry = re.compile(
        r'^\s*([A-Za-z0-9_]+)(?:\s*=\s*(-?\d+))?\s*,?'
    )

    # Get the directory where THIS script is located
    script_dir = os.path.dirname(os.path.abspath(__file__))
    # Build the full path to the enum file
    path = os.path.join(script_dir, filename)
    with open(path, encoding="utf-8") as f:
        for line in f:
            # strip comments
            line = re.sub(r'//.*', '', line).strip()
            if not line or line.startswith('enum') or line in ('{', '};'):
                continue

            m = enum_entry.match(line)
            if not m:
                continue

            name, explicit = m.groups()

            if explicit is not None:
                current_value = int(explicit)
            else:
                current_value = 0 if current_value is None else current_value + 1

            enum[name] = current_value

    return enum
"""


if __name__ == "__main__":
    from define_lookup import lookup_bgm, lookup_se
    pages = parse_c_enum()
    flags = parse_c_enum(filename="flag_enum.h")
    #musics = parse_c_enum(filename="bgm_enum.h")
    #defs = parse_c_enum(filename="def_enum.h")
    #ses = parse_c_enum(filename="se_enum.h")

    #bgm_id = lookup_bgm("SEFX_HILL")
    #se_id = lookup_se("SEFX_HILL")
    #
    print(flags.get("GF_MP1111_TBOX01", 0))