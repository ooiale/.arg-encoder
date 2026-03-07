from dataclasses import dataclass, field
from typing import List, Optional, Tuple, Dict, TypeAlias, Union


@dataclass
class OBJ:
    size: int
    id: str
    name: str
    param_define: str 
    flag: int #  Sometimes appears indexed
    x: float
    y: float
    z: float
    r: float
    info_flag: str
    motion_define: str
    first_script: str
    dead_script: str
    event_script: str

@dataclass
class MAPEFX:
    size: int
    efxno: Optional[str]  # Indexed string ID for effect name
    indexed_efxno: int
    uid: int
    type: Optional[str]  # Indexed string ID for effect type (MAPEFX_CAMERA, etc.)
    indexed_type: int
    state: int
    freq: float
    x: float
    y: float
    z: float
    range: float
    scale: float
    speed: float
    node: str

@dataclass
class FLOBJ:
    size: int
    """Floor object definition"""
    id: str
    mode: int
    lighttime: float
    range: float
    chargepow: float
    x: float
    y: float
    z: float
    rot: float
    info_flag: str
    motion_define: str
    event_script1: str
    event_script2: str
    foglightID: str
    chrlightID: str
    maplightID: str

@dataclass
class EVENEMY:
    size: int
    id: str
    name: str
    mode: int
    a: float  # Parameter A
    b: float  # Parameter B
    c: float  # Parameter C
    d: float  # Parameter D
    e: float  # Parameter E
    f: float  # Parameter F
    g: float  # Parameter G
    enemy_id: str
    x: float
    y: float
    z: float
    animename: str

@dataclass
class MAPLIGHT:
    size: int
    name: str
    node: str
    x: float
    y: float
    z: float
    shakemode: int
    enable: int
    ratio: float
    ratioband: float
    range: float      
    rangeband: float  
    att: float
    r: float
    g: float
    b: float
    spd: float

@dataclass
class TALKPT:
    size: int
    id: str
    name: str
    x: float
    y: float
    z: float
    radius: float

@dataclass
class LIGHT3:
    size: int
    """3D light source definition"""
    name: str
    node: str
    x: float
    y: float
    z: float
    mode: int
    visible: int
    ratio: float
    ratioband: float
    range: float
    rangeband: float
    attr: float
    r: float
    g: float
    b: float
    a: float
    spd: float
    timeshift: float
    order: int

@dataclass
class CHRLIGHT:
    size: int
    """Character light definition - attaches to characters/NPCs"""
    name: str
    node: str
    x: float
    y: float
    z: float
    mode: int
    r: float
    g: float
    b: float
    ratio: float
    rangemin: float
    rangemax: float

@dataclass
class CHECKPT:
    size: int
    id: str
    chkflag: Optional[str] # indexed string
    indexed_chkflag: int
    x: float
    y: float
    z: float
    rot: float
    infoflag: str
    motion_define: str
    event_script: str

@dataclass
class EVATARI:
    """Event atari (collision/hitbox) definition"""
    size: int
    evid: int
    flag: int
    flag_state: int
    isyuka: int
    oneshot: int
    script: str

@dataclass
class COLORNODE:
    """Color node definition for mist/atmospheric effects"""
    size: int
    name: str           # "pori_mist2"
    target: str         # "mist_alpha"
    flag1: int          # 0
    flag2: int          # 0
    value: float        # 1.0f

@dataclass
class GROUPOBJ:
    size: int
    node: str
    it3_1: str
    it3_2: str
    it3_3: str
    unit_sizex: float
    unit_sizey: float
    argtype: int
    group_sizex: float
    group_sizey: float
    break_type: int #SIGNED
    key_item: int #SIGNED
    key_efx: int #SIGNED
    break_efx: int #SIGNED
    break_se: int #SIGNED
    damage: float
    randam: float
    userot: int
    sclmin: float
    sclmax: float

@dataclass
class MONS:
    size: int
    id: str
    name: str
    param_define: str
    flag: int
    x: float
    y: float
    z: float
    r: float
    info_flag: str
    motion_define: str
    first_script: str
    dead_script: str
    event_script: str

@dataclass
class TBOX:
    size: int
    id: str
    item: Optional[str] # INDEXED
    indexed_item: int
    num: int
    flag: int
    boxtype: int
    keyitem: int # SIGNED
    x: float
    y: float
    z: float
    r: float
    info_flag: str
    motion_define: str
    event_script: str
    tbox_value: str

@dataclass
class TTBOX(TBOX):
    """TTBOX entry (same as TBOX but with tbox_value = ttbox instead of tbox...)"""
    pass
    
@dataclass
class MARK:
    size: int
    settype: str
    indexed_settype: int
    id: int
    x: float
    y: float
    z: float
    range: float
    param1: int


@dataclass
class NPC:
    size: int
    id: str
    name: str #SHIFT-JIS
    param_define: str
    flag: int
    x: float
    y: float
    z:float
    r: float
    info_flag: str
    motion_define: str
    first_script: str
    dead_script: str
    event_script: str

@dataclass
class LODNODE:
    """Level of Detail node definition"""
    size: int
    near_node: str
    middle_node: str
    far_node: str
    x: float
    y: float
    z: float
    distance_near: float
    distance_far: float

@dataclass
class EVNODE:
    # There is no name for the attributes in the .arg file I looked so these names it is
    size: int
    name: str                # "se_gim_lava1"
    display_name: str        # "se_gim_lava1"
    node_name: str           # "SE_locator1"
    se_type: str             # "SE_ENV_LAVA_ONES"
    flag: int

@dataclass
class DOOR:
    size: int
    id: str
    doortype: int
    keyitem: int  # SIGNED (-1 = no key required)
    flag: int     # SIGNED
    state: int
    se: int       # SIGNED (-1 = default)
    x: float
    z: float      # Note: z comes before y in the format!
    y: float
    rot: float
    info_flag: str
    motion_define: str
    event_script: str

# there is no documentation of the actual attribute names
@dataclass
class EVBOX2:
    size: int
    id: str
    name: str
    x: float
    y: float
    z: float
    width: float
    depth: float
    height: float 
    rot: float # SIGNED
    unk1: int
    event_script: str

@dataclass
class EVCIRCLE:
    size: int
    id: str
    name: str
    x: float
    y: float
    z: float
    radius: float
    height: float
    rot: float
    unk: int
    event_script: str

@dataclass
class ADDNODE:
    size: int
    node: str
    it3_path: str
    node_name: str
    float1: float
    float2: float
    float3: float
    float4: float

@dataclass
class ENVSE:
    size: int
    seno: Optional[str] # INDEXED INTEGER
    indexed_seno: int
    uid: int
    settype: Optional[str] # INDEXED INTEGER
    indexed_settype: int
    vol: int
    allowstate: int
    dist_ratio: float
    x: float
    y: float
    z: float
    railnode: str
    evboxname: str



ArrangementType: TypeAlias = (
    OBJ | MAPEFX | FLOBJ | EVENEMY | MAPLIGHT | TALKPT |
    LIGHT3 | CHRLIGHT | CHECKPT | GROUPOBJ | MONS |
    TBOX | NPC | EVBOX2 | EVCIRCLE | ADDNODE | ENVSE
)
@dataclass
class Arrangements:
    arrangements: list[ArrangementType]
