import os
from pathlib import Path
import re
from typing import Optional


def parse_defines(filename: str) -> dict:
    """
    Parses a file containing #define BGM mappings and returns a dictionary.
    """
    script_dir = os.path.dirname(os.path.abspath(__file__))
    # Build the full path to the enum file
    path = os.path.join(script_dir, filename)

    define_map = {}

    define_pattern = re.compile(r'^\s*#define\s+(\S+)\s+(\S+)')

    with open(path, "r", encoding="utf-8") as f:
        for line in f:
            match = define_pattern.match(line)
            if match:
                key, value = match.groups()
                define_map[key] = value

    return define_map


def lookup_bgm(bgm_key: str, bgm_map: Optional[dict] = None) -> Optional[str]:
    """
    Returns the mapped value for a given BGM key.
    """
    script_dir = Path(__file__).resolve().parent
    filename = "bgm_define.h"
    path = os.path.join(script_dir, filename)    
    bgm_map = parse_defines(path)
    return bgm_map.get(bgm_key, None)

def lookup_se(se_key: str, se_map: Optional[dict] = None) -> Optional[str]:
    script_dir = Path(__file__).resolve().parent
    filename = "3dicon_define.h"
    path = os.path.join(script_dir, filename)    
    bgm_map = parse_defines(path)
    return bgm_map.get(se_key, None)

if __name__ == "__main__":

    #bgm_map = parse_bgm_defines(file_path)

    #user_input = input("Enter BGM key (e.g. BGM_4107): ").strip()

    #result = lookup_bgm(user_input, bgm_map)
    result = lookup_bgm("BGM_4107")
    result2 = lookup_se("ICON3D_MT_R1_FLOWER")
    reuslt3 = "ICON3D_MT_R1_FLOWER"
    if result:
        print(f" -> {result}")
    else:
        print(f" not found.")
    if result2:
        print(f" -> {result2}")
    else:
        print(f" not found.")
