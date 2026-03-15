from dataclasses import dataclass, field
from typing import List, Optional, Tuple, Dict, TypeAlias
from .arragements.classes import *
from .arragements.parser import parse_arrangement
import shlex
import re


# ------------------------------------------------------------
# Data models
# ------------------------------------------------------------
@dataclass
class Map:
    mapname: str
    bgname: str
    x: float
    y: float
    z: float

@dataclass
class ScrInclude:
    mapname: str

@dataclass
class GrassTremble:
    node1: str
    node2: str
    node3: str
    node4: str

@dataclass
class Camera:
    distance: float
    fov: float
    dip: float
    at_min_offset: float
    at_max_offset: float

def default_camera():
    return Camera(7.0, 60.0, 14.0, 0.0, 0.0)

def default_portal():
    return Portal(-999999.0, 0.0, 0.0, -999999.0, 0.0, 0.0)

@dataclass
class Portal:
    ret_X: float
    ret_Y: float
    ret_Z: float
    portal_X: float
    portal_Y: float
    portal_Z: float

def default_ZPlane():
    return ZPlane(0.1, 600.0)

@dataclass
class ZPlane:
    near: float
    far: float

def default_shadow_bound():
    return ShadowBound(
        bound1=128.0,
        bound2=128.0,
        dist=150.0,
        near=10.0,
        far=300.0,
    )

@dataclass
class ShadowBound:
    bound1: float
    bound2: float
    dist: float
    near: float
    far: float

@dataclass
class SSAO:
    power: float
    blend: float
    soft: float

@dataclass
class MapSet:
    name: str
    x: int
    y: int
    page: str

    chr_rgb: Tuple[float, float, float]
    map_rgb: Tuple[float, float, float]
    map_light_power: float

@dataclass
class GlareParams:
    intensity: float
    blur_loop_count: int
    blur_width: float
    blur_blend: float
    original_blend: float
    composite_blend: float


@dataclass
class Glare:
    base_luminance: float
    gamma: float
    primary: GlareParams
    secondary: Optional[GlareParams] = None

@dataclass
class DOF:
    blur_scale: float
    range_ref: float
    front_blur: float
    front_blur_disable_range: float
    back_blur: float

def defaultDOF():
    return DOF(2.0, 64.0, 2.0, 0.15, 0.5)

@dataclass
class Gradation:
    vertical_rgb: Tuple[float, float, float]
    vertical_range: float
    vertical_sun_influence: float
    radial_rgb: Tuple[float, float, float]
    radial_range: float
    lens_flare_strength: float
    overlay_intensity: float


@dataclass
class FogSet:
    r: int
    g: int
    b: int
    start: float
    end: float
    intensity: float
    fog_min: float
    fog_max: float
    height: float
    height_mode: int
    blend_ratio: float

@dataclass
class ShadowSoft:
    soft_param: float

@dataclass
class Volumetrics:
    r: float
    g: float
    b: float
    gamma: float
    blend: float
    unknown: float


@dataclass
class AreaFlags:
    flags: List[str]


@dataclass
class InitScript:
    script: str


@dataclass
class SoundEfx:
    value: str

BGM: TypeAlias = str
FishColl: TypeAlias = str
FootSE: TypeAlias = str


@dataclass
class ARG:
    # --- Core map data ---
    maps: List[Map] = field(default_factory=list)
    scr_include: Optional[ScrInclude] = None
    zplane: ZPlane = field(default_factory=default_ZPlane)

    # --- Camera / view ---
    camera: Camera = field(default_factory=default_camera) # Default value
    dof: DOF = field(default_factory=defaultDOF)
    glare: Optional[Glare] = None
    gradation: Optional[Gradation] = None
    shadow_soft: Optional[ShadowSoft] = None
    shadow_bound: ShadowBound = field(default_factory=default_shadow_bound)
    ssao: Optional[SSAO] = None

    # --- Environment ---
    fogsets: List[FogSet] = field(default_factory=list) #Use this default factory so multiple classes dont share same List
    fogsetbacks: Optional[List[FogSet]] = None
    fogsetwater: Optional[List[FogSet]] = None
    grass_tremble: Optional[GrassTremble] = None
    map_set: Optional[MapSet] = None
    footse: Optional[FootSE] = None
    portal: Portal = field(default_factory=default_portal)
    volumetrics: Optional[Volumetrics] = None

    # --- Audio / scripting ---
    bgm: Optional[BGM] = None
    init_script: Optional[InitScript] = None
    fish_coll: Optional[FishColl] = None
    sound_efx: Optional[SoundEfx] = None
    motion_includes: List[str] = field(default_factory=list)
    area_flags: Optional[AreaFlags] = None

    # --- Raw / legacy ---
    arrangements: Optional[Arrangements] = None




# ------------------------------------------------------------
# Utility helpers
# ------------------------------------------------------------

_float_re = re.compile(r'([-+]?\d+(?:\.\d+)?)(?:f)?')
_QUOTED_STRING_RE = re.compile(r'"([^"]*)"') # Captures strings in between double quotes ""


def parse_float(token: str) -> float:
    """
    Converts '123.45f' → 123.45
    """
    m = _float_re.fullmatch(token)
    if not m:
        raise ValueError(f"Invalid float token: {token}")
    return float(m.group(1))


def tokenize(line: str) -> List[str]:
    """
    Tokenizes a line while respecting quoted strings.
    """
    return shlex.split(line, posix=True)

def clean_line(raw_line: str) -> str | None:
    """Clean a line, returning None if it's a comment or empty."""
    stripped = raw_line.strip()
    
    # Skip empty lines and comments
    if not stripped or stripped.startswith("//") or stripped.startswith("#"):
        return None
    
    # Remove inline comments
    line = stripped.split("//", 1)[0].strip()
    return line if line else None


# ------------------------------------------------------------
# Section parsers
# ------------------------------------------------------------

def sanitize_float_token(token: str) -> str:
    # Some files have malformatted strings like 54.5.f
    # DO NOT remove trailing 'f'

    # Separate numeric part from trailing 'f' if present
    has_f = token.endswith(('f', 'F'))
    core = token[:-1] if has_f else token

    # Fix patterns like "54.5." → "54.5"
    if core.count('.') > 1:
        first = core.find('.')
        core = core[:first + 1] + core[first + 1:].replace('.', '')

    # Remove trailing dot
    if core.endswith('.'):
        core = core[:-1]

    # Reattach 'f' if it was present
    return core + ('f' if has_f else '')


def parse_map(lines: List[str]) -> List[Map]:
    maps: List[Map] = []
    for line in lines:
        tokens = tokenize(line)
        if not tokens:
            continue

        if len(tokens) < 5:
            raise ValueError(f"[MAP] expected 5 values, got {len(tokens)}: {tokens}")

        if len(tokens) > 5:
            extra = tokens[5:]
            print(f"[MAP] had more than 5 values ({len(tokens)}). Removing the extra ones")
            # optional: log or warn
            # logger.warning(f"[MAP] ignoring extra values: {extra}")
            tokens = tokens[:5]

        mapname, bgname, x, y, z = tokens
        x = sanitize_float_token(x)
        y = sanitize_float_token(y)
        z = sanitize_float_token(z)

        maps.append(
            Map(
                mapname=mapname,
                bgname=bgname,
                x=parse_float(x),
                y=parse_float(y),
                z=parse_float(z),
            )
        )
    
    return maps

def parse_scr_include(lines) -> ScrInclude:
    data_lines = [
        line for line in lines
    ]

    if not data_lines:
        raise ValueError("[SCR INCLUDE] section has no data lines")

    if len(data_lines) != 1:
        raise ValueError(
            f"[GRASS_TREMBLE] expected exactly 1 data line, got {len(data_lines)}"
        )
    
    line = data_lines[0]

    value = _QUOTED_STRING_RE.findall(line)

    if len(value) != 1:
        raise ValueError(
            f"[SCR INCLUDE] expected 1 quoted strings, got {len(value)}: {value}"
        )

    return ScrInclude(mapname=value[0])

def parse_grass_tremble(lines) -> GrassTremble:
    """
    Parse the [GRASS_TREMBLE] section.

    Expected format:
        "node1" "node2" "node3" "node4"

    Returns:
        GrassTremble or None if section is empty
    """

    # Remove comments and empty lines
    data_lines = [
        line for line in lines
    ]

    if not data_lines:
        raise ValueError("[GRASS TREMBLE] section has no data lines")

    if len(data_lines) != 1:
        raise ValueError(
            f"[GRASS_TREMBLE] expected exactly 1 data line, got {len(data_lines)}"
        )

    line = data_lines[0]

    values = _QUOTED_STRING_RE.findall(line)

    if len(values) != 4:
        raise ValueError(
            f"[GRASS_TREMBLE] expected 4 quoted strings, got {len(values)}: {values}"
        )

    return GrassTremble(
        node1=values[0],
        node2=values[1],
        node3=values[2],
        node4=values[3],
    )

def parse_motion_include(lines: List[str]) -> List[str]:
    values: List[str] = []

    for line in lines:
        matches = _QUOTED_STRING_RE.findall(line)
        values.extend(matches)

    if not values:
        raise ValueError("[MOTION INCLUDE] section has no data lines")

    return values

def parse_camera(lines) -> Camera:
    """
    Parse the [CAMERA] section.

    Expected format:
        distance fov dip at_min_offset at_max_offset

    All values are floats, exactly one data line is allowed.
    """

    # Strip comments and empty lines
    data_lines = [
        line for line in lines
    ]

    if not data_lines:
        raise ValueError("[CAMERA] section has no data lines")


    if len(data_lines) != 1:
        raise ValueError(
            f"[CAMERA] expected exactly 1 data line, got {len(data_lines)}"
        )

    line = data_lines[0]

    # Split on whitespace
    parts = line.split()

    if len(parts) != 5:
        raise ValueError(
            f"[CAMERA] expected 5 float values, got {len(parts)}: {parts}"
        )

    try:
        values = [float(p.rstrip("f")) for p in parts]
    except ValueError as e:
        raise ValueError(f"[CAMERA] invalid float value: {e}") from None

    return Camera(
        distance=values[0],
        fov=values[1],
        dip=values[2],
        at_min_offset=values[3],
        at_max_offset=values[4],
    )


def parse_zplane(lines: List[str]) -> ZPlane:
    data = [l for l in lines if l.strip() and not l.strip().startswith("//")]

    if not data:
        raise ValueError("[ZPLANE] section has no data lines")

    if len(data) != 1:
        raise ValueError("[ZPLANE] must contain exactly one data line")

    tokens = tokenize(data[0])
    if len(tokens) != 2:
        raise ValueError("[ZPLANE] must contain exactly 2 floats")

    return ZPlane(
        near=parse_float(tokens[0]),
        far=parse_float(tokens[1]),
    )

def parse_portal(lines) -> Portal:
    data = [l for l in lines if l.strip() and not l.strip().startswith("//")]

    if not data:
        raise ValueError("[PORTAL] section has no data lines")

    if len(data) != 1:
        raise ValueError("[PORTAL] must contain exactly one data line")

    tokens = tokenize(data[0])
    if len(tokens) != 6:
        raise ValueError("[PORTAL] must contain exactly 6 floats")

    return Portal(
        ret_X=parse_float(tokens[0]),
        ret_Y=parse_float(tokens[1]),
        ret_Z=parse_float(tokens[2]),
        portal_X=parse_float(tokens[3]),
        portal_Y=parse_float(tokens[4]),
        portal_Z=parse_float(tokens[5]),
    )
    
def parse_shadow_bound(lines) -> ShadowBound:
    """
    Parse the [SHADOW_BOUND] section.

    Expected format:
        bound1 bound2 dist near far

    All values are floats.
    """

    # Strip comments and empty lines
    data_lines = [
        line for line in lines
    ]

    if not data_lines:
        raise ValueError("[SHADOW_BOUND] section has no data lines")

    if len(data_lines) != 1:
        raise ValueError(
            f"[SHADOW_BOUND] expected exactly 1 data line, got {len(data_lines)}"
        )

    parts = data_lines[0].split()

    if len(parts) != 5:
        raise ValueError(
            f"[SHADOW_BOUND] expected 5 floats, got {len(parts)}: {parts}"
        )

    try:
        values = [float(p.rstrip("f")) for p in parts]
    except ValueError:
        raise ValueError(
            f"[SHADOW_BOUND] invalid float values: {parts}"
        ) from None

    return ShadowBound(
        bound1=values[0],
        bound2=values[1],
        dist=values[2],
        near=values[3],
        far=values[4],
    )

def parse_volumetrics(lines: List[str]) -> Volumetrics:
    data = [l for l in lines if l.strip() and not l.strip().startswith("//")]

    if not data:
        raise ValueError("[VOLUMETRICS] section has no data lines")

    if len(data) != 1:
        raise ValueError("[VOLUMETRICS] must contain exactly one data line")

    tokens = tokenize(data[0])
    if len(tokens) != 6:
        raise ValueError("[VOLUMETRICS] must contain exactly 6 floats")

    return Volumetrics(
        r=parse_float(tokens[0]),
        g=parse_float(tokens[1]),
        b=parse_float(tokens[2]),
        gamma=parse_float(tokens[3]),
        blend=parse_float(tokens[4]),
        unknown=parse_float(tokens[5]),
    )


def parse_ssao(lines) -> SSAO:
    data_lines = [
        line for line in lines
    ]

    if not data_lines:
        raise ValueError("[SSAO] section has no data lines")

    if len(data_lines) != 1:
        raise ValueError(
            f"[SSAO] expected exactly 1 data line, got {len(data_lines)}"
        )

    values = data_lines[0].split()

    if len(values) != 3:
        raise ValueError(
            f"[SSAO] expected 3 floats, got {len(values)}: {values}"
        )

    return SSAO(
        power=parse_float(values[0]),
        blend=parse_float(values[1]),
        soft=parse_float(values[2]),
    )

def parse_map_set(lines) -> MapSet:
    """
    Parse the [MAP_SET] section.

    Supports two formats:

        Minimal:
            1) name X Y pageno

        Full:
            1) name X Y pageno
            2) chrR chrG chrB
            3) mapR mapG mapB power
    """

    data_lines = [line.strip() for line in lines if line.strip()]

    if not data_lines:
        raise ValueError("[MAP_SET] empty block")

    # ---- Line 1: map identity ----
    parts = data_lines[0].split()
    if len(parts) != 4:
        raise ValueError(f"[MAP_SET] invalid map header: {parts}")

    name = parts[0]
    x = int(parts[1])
    y = int(parts[2])
    page = parts[3]

    # ---- Defaults ----
    chr_rgb = (1.0, 1.0, 1.0)
    map_rgb = (1.0, 1.0, 1.0)
    power = 1.0

    # ---- Optional Line 2: character RGB ----
    if len(data_lines) >= 2:
        chr_parts = data_lines[1].split()

        try:
            if len(chr_parts) >= 1:
                r = float(chr_parts[0].rstrip("f"))
            else:
                r = chr_rgb[0]

            if len(chr_parts) >= 2:
                g = float(chr_parts[1].rstrip("f"))
            else:
                g = chr_rgb[1]

            if len(chr_parts) >= 3:
                b = float(chr_parts[2].rstrip("f"))
            else:
                b = chr_rgb[2]

            chr_rgb = (r, g, b)
        except ValueError:
            pass  # keep defaults

    # If there are chr RGB values, then make map RGB's default as that
    map_rgb = (chr_rgb[0], chr_rgb[1], chr_rgb[2])

    # ---- Optional Line 3: map RGB (+ optional power) ----
    if len(data_lines) >= 3:
        map_parts = data_lines[2].split()

        try:
            if len(map_parts) >= 1:
                r = float(map_parts[0].rstrip("f"))
            else:
                r = map_rgb[0]

            if len(map_parts) >= 2:
                g = float(map_parts[1].rstrip("f"))
            else:
                g = map_rgb[1]

            if len(map_parts) >= 3:
                b = float(map_parts[2].rstrip("f"))
            else:
                b = map_rgb[2]

            map_rgb = (r, g, b)

            if len(map_parts) >= 4:
                power = float(map_parts[3].rstrip("f"))

        except ValueError:
            pass  # keep defaults


    return MapSet(
        name=name,
        x=x,
        y=y,
        page=page,
        chr_rgb=chr_rgb,
        map_rgb=map_rgb,
        map_light_power=power,
    )


def parse_glare(lines) -> Glare:
    """
    Parse the [GLARE] section.

    Valid formats:
      - 8 values  -> single glare entry
      - 14 values -> primary + secondary (shared base_luminance & gamma)

    Any other count is invalid.
    """

    tokens = []
    for line in lines:
        line = line.strip()
        if not line or line.startswith("//"):
            continue
        tokens.extend(tokenize(line))

    def to_float(token: str) -> float:
        return float(token.rstrip("f"))

    count = len(tokens)

    if count not in (8, 14):
        raise ValueError(
            f"[GLARE] invalid token count {count} (expected 8 or 14)"
        )

    # --- common header ---
    base_luminance = to_float(tokens[0])
    gamma = to_float(tokens[1])

    # --- primary entry ---
    primary = GlareParams(
        intensity=to_float(tokens[2]),
        blur_loop_count=int(tokens[3]),
        blur_width=to_float(tokens[4]),
        blur_blend=to_float(tokens[5]),
        original_blend=to_float(tokens[6]),
        composite_blend=to_float(tokens[7]),
    )

    secondary = None

    # --- optional secondary entry ---
    if count == 14:
        secondary = GlareParams(
            intensity=to_float(tokens[8]),
            blur_loop_count=int(tokens[9]),
            blur_width=to_float(tokens[10]),
            blur_blend=to_float(tokens[11]),
            original_blend=to_float(tokens[12]),
            composite_blend=to_float(tokens[13]),
        )

    return Glare(
        base_luminance=base_luminance,
        gamma=gamma,
        primary=primary,
        secondary=secondary,
    )


def parse_dof(data_lines: list[str]) -> DOF:
    """
    Parse a [DOF] section.

    Expected format:
        5 floats:
        blur_scale, range_ref, front_blur,
        front_blur_disable_range, back_blur
    """

    if len(data_lines) != 1:
        raise ValueError("[DOF] must contain exactly one data line")

    parts = data_lines[0].split()
    if len(parts) != 5:
        raise ValueError("[DOF] must contain exactly 5 float values")

    values = [float(p.rstrip("f")) for p in parts]

    return DOF(
        blur_scale=values[0],
        range_ref=values[1],
        front_blur=values[2],
        front_blur_disable_range=values[3],
        back_blur=values[4],
    )

def parse_gradation(data_lines: list[str]) -> Gradation:
    """
    Parse a [GRADATION] section.

    Expected format:
        11 floats in a single line
    """

    if len(data_lines) != 1:
        raise ValueError("[GRADATION] must contain exactly one data line")

    parts = data_lines[0].split()
    if len(parts) != 11:
        raise ValueError("[GRADATION] must contain exactly 11 float values")

    values = [float(p.rstrip("f")) for p in parts]

    return Gradation(
        vertical_rgb=(values[0], values[1], values[2]),
        vertical_range=values[3],
        vertical_sun_influence=values[4],
        radial_rgb=(values[5], values[6], values[7]),
        radial_range=values[8],
        lens_flare_strength=values[9],
        overlay_intensity=values[10],
    )


def parse_fogset(lines: List[str]) -> List[FogSet]:
    """
    Parse the [FOGSET] section.

    Each non-comment line defines one FogSet with exactly 11 values:
        r g b start end intensity fog_min fog_max height height_mode blend_ratio
    """

    result: List[FogSet] = []

    for idx, line in enumerate(lines, start=1):
        line = line.strip()

        if not line or line.startswith("//"):
            continue

        tokens = tokenize(line)
    
        if len(tokens) != 10 and len(tokens) != 11:
            raise ValueError(
                f"[FOGSET] line {idx}: expected 10 or 11 values, got {len(tokens)}: {tokens}"
            )  


        


        try:
            if len(tokens) == 10:
                # heightmode is missing (mp4107 seems to be the only file like this)
                result.append(
                FogSet(
                    r=int(tokens[0]),
                    g=int(tokens[1]),
                    b=int(tokens[2]),
                    start=parse_float(tokens[3]),
                    end=parse_float(tokens[4]),
                    intensity=parse_float(tokens[5]),
                    fog_min=parse_float(tokens[6]),
                    fog_max=parse_float(tokens[7]),
                    height=parse_float(tokens[8]),
                    height_mode=int(0),
                    blend_ratio=parse_float(tokens[9])
                )
            )
            else:
                result.append(
                    FogSet(
                        r=int(tokens[0]),
                        g=int(tokens[1]),
                        b=int(tokens[2]),
                        start=parse_float(tokens[3]),
                        end=parse_float(tokens[4]),
                        intensity=parse_float(tokens[5]),
                        fog_min=parse_float(tokens[6]),
                        fog_max=parse_float(tokens[7]),
                        height=parse_float(tokens[8]),
                        height_mode=int(tokens[9]),
                        blend_ratio=parse_float(tokens[10])
                    )
                )
        except ValueError as e:
            raise ValueError(
                f"[FOGSET] line {idx}: invalid value: {e}"
            ) from None

    return result


def parse_shadow_soft(data_lines: list[str]) -> ShadowSoft:
    """
    Parse a [SHADOW_SOFT] section.

    Expected format:
        A single line with exactly one float.
    """

    if len(data_lines) != 1:
        raise ValueError("[SHADOW_SOFT] must contain exactly one data line")

    parts = data_lines[0].split()
    if len(parts) != 1:
        raise ValueError("[SHADOW_SOFT] must contain exactly one float")

    soft_param = float(parts[0].rstrip("f"))

    return ShadowSoft(soft_param=soft_param)

def parse_footse(data_lines: list[str]) -> FootSE:
    """
    Parse a [FOOTSE] section.

    Expected format:
        A single line containing one string identifier.
        Example:
            FA_NORMAL
    """

    if len(data_lines) < 1:
        raise ValueError("[FOOTSE] must contain at least one line")

    value = data_lines[0].strip()
    if not value:
        raise ValueError("[FOOTSE] value cannot be empty")

    return value

def parse_area_flag(data_lines: list[str]) -> AreaFlags:
    if not data_lines:
        raise ValueError("[AREA_FLAG] no values provided")

    flags = []

    for line in data_lines:
        value = line.strip()
        if not value:
            continue  # skip empty lines

        flags.append(value)

    if not flags:
        raise ValueError("[AREA_FLAG] no valid flags found")

    return AreaFlags(flags)


def parse_init_script(data_lines: list[str]) -> InitScript:
    """
    Parse an [INIT_SCRIPT] section.

    Expected format:
        One quoted string.
        Example:
            "mp1201:init"
    """

    if len(data_lines) != 1:
        raise ValueError("[INIT_SCRIPT] must contain exactly one line")

    line = data_lines[0].strip()

    if not (line.startswith('"') and line.endswith('"')):
        raise ValueError("[INIT_SCRIPT] value must be a quoted string")

    # Strip quotes
    script = line[1:-1]

    if not script:
        raise ValueError("[INIT_SCRIPT] script cannot be empty")

    return InitScript(script=script)

def parse_fish_coll(data_lines: list[str]) -> FishColl:
    if len(data_lines) < 1:
        raise ValueError("[FISH_COLL] must contain at least one line")

    value = data_lines[0].strip()

    if not value:
        raise ValueError("[FISH_COLL] value cannot be empty")

    if value.startswith('"') or value.endswith('"'):
        raise ValueError("[FISH_COLL] value must not be quoted")

    return value

def parse_bgm(data_lines: list[str]) -> BGM:
    if len(data_lines) != 1:
        raise ValueError("[BGM] must contain exactly one line")

    value = data_lines[0].strip()

    if not value:
        raise ValueError("[BGM] value cannot be empty")

    if value.startswith('"') or value.endswith('"'):
        raise ValueError("[BGM] value must not be quoted")

    return value

def parse_sound_efx(data_lines: list[str]) -> SoundEfx:
    """
    Parse a [SOUND_EFX] section.

    Expected format:
        One identifier string (unquoted)
        Example:
            SEFX_HILL
    """

    if len(data_lines) != 1:
        raise ValueError("[SOUND_EFX] must contain exactly one line")

    value = data_lines[0].strip()

    if not value:
        raise ValueError("[SOUND_EFX] value cannot be empty")

    if value.startswith('"') or value.endswith('"'):
        raise ValueError("[SOUND_EFX] value must not be quoted")

    return SoundEfx(value=value)


# ------------------------------------------------------------
# Main parser
# ------------------------------------------------------------

def parse_arg(text: str) -> ARG:
    arg = ARG()
    current_section: Optional[str] = None
    section_lines: List[str] = []
    in_commented_section = False

    def flush_section():
        nonlocal current_section, section_lines, in_commented_section
        if not current_section:
            return

        lines = section_lines
        name = current_section
        
        # Only parse if not in commented section
        if not in_commented_section:
            try:
                # ... existing parsing logic ...
                if name == "MAP":
                    arg.maps.extend(parse_map(lines))
                elif name == "SCR_INCLUDE":
                    arg.scr_include = parse_scr_include(lines)
                elif name == "CAMERA":
                    arg.camera = parse_camera(lines)
                elif name == "MAP_SET":
                    arg.map_set = parse_map_set(lines)
                elif name == "GRASS_TREMBLE":
                    arg.grass_tremble = parse_grass_tremble(lines)
                elif name == "GLARE":
                    arg.glare = parse_glare(lines)
                elif name == "DOF":
                    arg.dof = parse_dof(lines)
                elif name == "GRADATION":
                    arg.gradation = parse_gradation(lines)
                elif name == "PORTAL":
                    arg.portal = parse_portal(lines)
                elif name == "ZPLANE":
                    arg.zplane = parse_zplane(lines)
                elif name == "SHADOW_BOUND":
                    arg.shadow_bound = parse_shadow_bound(lines)
                elif name == "SSAO":
                    arg.ssao = parse_ssao(lines)
                elif name == "SHADOW_SOFT":
                    arg.shadow_soft = parse_shadow_soft(lines)
                elif name == "VOLUMETRICS":
                    arg.volumetrics = parse_volumetrics(lines)
                elif name == "FOGSET":
                    arg.fogsets.extend(parse_fogset(lines))
                elif name == "FOGSETBACK":
                    if arg.fogsetbacks is None:
                        arg.fogsetbacks = []
                    arg.fogsetbacks.extend(parse_fogset(lines)) # Yes, it uses the same structure as fogset
                elif name == "FOGSETWATER":
                    if arg.fogsetwater is None:
                        arg.fogsetwater = []
                    arg.fogsetwater.extend(parse_fogset(lines))
                elif name == "FISH_COLL":
                    arg.fish_coll = parse_fish_coll(lines)
                elif name == "AREA_FLAG":
                    arg.area_flags = parse_area_flag(lines)
                elif name == "BGM":
                    arg.bgm = parse_bgm(lines)
                elif name == "FOOTSE":
                    arg.footse = parse_footse(lines)
                elif name == "MOTION_INCLUDE":
                    arg.motion_includes.extend(parse_motion_include(lines))
                elif name == "SOUND_EFX":
                    arg.sound_efx = parse_sound_efx(lines)
                elif name == "ARRANGEMENT":
                    arg.arrangements = parse_arrangement(lines)
                elif name == "INIT_SCRIPT":
                    arg.init_script = parse_init_script(lines)
                # ... etc ...
            except Exception as e:
                print(f"  Warning: Error parsing section [{name}]: {e}")

        section_lines.clear()
        current_section = None
        in_commented_section = False

    for raw_line in text.splitlines():
        stripped = raw_line.strip()
        
        # Check for commented section BEFORE cleaning
        if stripped.startswith("//[") and stripped.endswith("]"):
            flush_section()
            current_section = stripped[3:-1]
            in_commented_section = True
            section_lines.clear()  # Clear any accumulated lines
            continue  # Skip to next line
            
        # Use your existing clean_line logic
        line = clean_line(raw_line)
        if line is None:
            continue

        if line.startswith("[") and line.endswith("]"):
            flush_section()
            current_section = line[1:-1]
            in_commented_section = False
            continue

        # CRITICAL: Only add lines if we're not in a commented section
        if not in_commented_section:
            section_lines.append(line)
        # If in_commented_section is True, we ignore this line completely

    flush_section()
    return arg
