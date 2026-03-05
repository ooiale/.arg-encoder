"""
arg_parser_test.py

Simple manual test runner for arg_parser.py.

Usage:
    python arg_parser_test.py path/to/file.arg

What this does:
- Reads the .arg file as text
- Parses it using parse_arg(...)
- Prints the parsed structure in a human-readable way
"""

import sys
import os

from arb_builder.arg_parser import parse_arg
from arb_builder.arragements import Arrangements

def print_header(title: str):
    print("\n" + "=" * 60)
    print(title)
    print("=" * 60)


def print_optional(name: str, obj):
    print(f"\n---- {name} ----")
    if obj is None:
        print("(none)")
        return
    for k, v in vars(obj).items():
        print(f"{k} = {v}")


def main():
    # Hardcoded path for manual testing
    arg_path = r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\mp4308.arg"

    try:
        with open(arg_path, "r", encoding="shift_jis", errors="ignore") as f:
            text = f.read()
    except OSError as e:
        print(f"Failed to read file: {e}")
        sys.exit(1)

    arg = parse_arg(text)

    print_header("PARSED ARG FILE")
    
    
    # -------------------------------------------------
    # Core map data
    # -------------------------------------------------

    print("\n---- MAPS ----")
    if not arg.maps:
        print("(none)")
    else:
        for i, m in enumerate(arg.maps):
            print(f"[{i}]")
            print(f"  mapname = {m.mapname}")
            print(f"  bgname  = {m.bgname}")
            print(f"  x = {m.x}, y = {m.y}, z = {m.z}")

    print_optional("SCR_INCLUDE", arg.scr_include)
    print_optional("ZPLANE", arg.zplane)

    # -------------------------------------------------
    # Camera / view
    # -------------------------------------------------

    print_optional("CAMERA", arg.camera)
    print_optional("DOF", arg.dof)
    print_optional("GRADATION", arg.gradation)
    print_optional("SHADOW_SOFT", arg.shadow_soft)
    print_optional("SHADOW_BOUND", arg.shadow_bound)

    # -------------------------------------------------
    # Environment
    # -------------------------------------------------

    print("\n---- FOGSET ----")
    if not arg.fogsets:
        print("(none)")
    else:
        for i, f in enumerate(arg.fogsets):
            print(f"[{i}]")
            for k, v in vars(f).items():
                print(f"  {k} = {v}")

    print("\n---- FOGSETBACK ----")
    if not arg.fogsetbacks:
        print("(none)")
    else:
        for i, f in enumerate(arg.fogsetbacks):
            print(f"[{i}]")
            for k, v in vars(f).items():
                print(f"  {k} = {v}")

    print_optional("GRASS_TREMBLE", arg.grass_tremble)
    print_optional("MAP_SET", arg.map_set)
    print("\n---- FOOTSE ----")
    print(arg.footse if arg.footse else "(none)")
    print_optional("GLARE", arg.glare)
    print_optional("PORTAL", arg.portal)
    print_optional("SSAO", arg.ssao)
    print_optional("VOLUMETRICS", arg.volumetrics)


    # -------------------------------------------------
    # Audio / scripting
    # -------------------------------------------------

    print("\n---- BGM ----")
    print(arg.bgm if arg.bgm else "(none)")

    print_optional("INIT_SCRIPT", arg.init_script)
    print("\n---- FISH_COLL ----")
    print(arg.fish_coll if arg.fish_coll else "(none)")
    print_optional("SOUND_EFX", arg.sound_efx)

    print("\n---- MOTION_INCLUDES ----")
    if not arg.motion_includes:
        print("(none)")
    else:
        for m in arg.motion_includes:
            print(m)

    print("\n---- AREA_FLAGS ----")
    if not arg.area_flags:
        print("(none)")
    else:
        for flag in arg.area_flags.flags:
            print(flag)

    # -------------------------------------------------
    # Raw / legacy
    # -------------------------------------------------

    # -------------------------------------------------
    # ARRANGEMENTS (Structured)
    # -------------------------------------------------

    print("\n---- ARRANGEMENTS ----")

    if not arg.arrangements:
        print("(none)")
    else:
        pass
        #print(Arrangements.arrangements)

    print("\n---- UNKNOWN SECTIONS ----")
    if not arg.unknown_sections:
        print("(none)")
    else:
        for section, lines in arg.unknown_sections.items():
            print(f"[{section}] ({len(lines)} lines)")

    print("\n" + "=" * 60)
    print("END")
    print("=" * 60)


if __name__ == "__main__":
    main()
