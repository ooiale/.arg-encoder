'''
Every arrangement entry seems to follow the pattern
1240
4 bytes that seems to be some sort of ID depending on the data
4 bytes of number of attributes of that specific entry
entry data
'''
from .classes import *

CATEGORY_IDS = {
    "MONS": b"\x04\x00\x00\x00", # 04 00 00 00
    "CHECKPT": b"\x40\x00\x00\x00", # 40 00 00 00
    "ADDNODE": b"\x00\x00\xd0\x00", # 00 00 d0 00
    "GROUPOBJ": b"\x00\x00\x10\x00", # 00 00 10 00
    "MAPLIGHT": b"\x00\x00\x00\x03", # 00 00 00 03
    "NPC": b"\x02\x00\x00\x00", # 02 00 00 00
    "OBJ": b"\x08\x00\x00\x00", # 08 00 00 00
    "TALKPT":  b"\x80\x00\x00\x00", # 80 00 00 00
    "EVBOX2": b"\x00\x08\x00\x00", # 00 08 00 00
    "EVCIRCLE": b"\x00\x02\x00\x00", # 00 02 00 00
    "ENVSE": b"\x00\x00\x90\x00", # 00 00 90 00
    "TBOX": b"\x10\x00\x00\x00", # 10 00 00 00
    "MAPEFX": b"\x00\x00\x00\x04", # 00 00 00 04
    "FLOBJ": b"\x12\x00\x00\x00", # 12 00 00 00
    "LIGHT3": b"\x00\x00\x60\x00", # 00 00 60 00
    "CHRLIGHT": b"\x00\x00\xf0\x00", # 00 00 f0 00
    "EVENEMY": b"\x00\x20\x00\x00", # 00 20 00 00
    "DOOR": b"\x20\x00\x00\x00", # 20 00 00 00
}

def get_category_id(entry):
    if isinstance(entry, MONS):
        return CATEGORY_IDS["MONS"]
    elif isinstance(entry, CHECKPT):
        return CATEGORY_IDS["CHECKPT"]
    elif isinstance(entry, ADDNODE):
        return CATEGORY_IDS["ADDNODE"]
    elif isinstance(entry, GROUPOBJ):
        return CATEGORY_IDS["GROUPOBJ"]
    elif isinstance(entry, MAPLIGHT):
        return CATEGORY_IDS["MAPLIGHT"]
    elif isinstance(entry, NPC):
        return CATEGORY_IDS["NPC"]
    elif isinstance(entry, OBJ):
        return CATEGORY_IDS["OBJ"]
    elif isinstance(entry, TALKPT):
        return CATEGORY_IDS["TALKPT"]
    elif isinstance(entry, EVBOX2):
        return CATEGORY_IDS["EVBOX2"]
    elif isinstance(entry, EVCIRCLE):
        return CATEGORY_IDS["EVCIRCLE"]
    elif isinstance(entry, ENVSE):
        return CATEGORY_IDS["ENVSE"]
    elif isinstance(entry, TBOX):
        return CATEGORY_IDS["TBOX"]
    elif isinstance(entry, MAPEFX):
        return CATEGORY_IDS["MAPEFX"]
    elif isinstance(entry, FLOBJ):
        return CATEGORY_IDS["FLOBJ"]
    elif isinstance(entry, LIGHT3):
        return CATEGORY_IDS["LIGHT3"]
    elif isinstance(entry, CHRLIGHT):
        return CATEGORY_IDS["CHRLIGHT"]
    elif isinstance(entry, EVENEMY):
        return CATEGORY_IDS["EVENEMY"]
    elif isinstance(entry, DOOR):
        return CATEGORY_IDS["DOOR"]
    else:
        raise ValueError(f"Unknown entry type: {type(entry).__name__}")