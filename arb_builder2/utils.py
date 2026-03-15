import re
import shlex
import struct
from typing import List



_float_re = re.compile(r'([-+]?\d+(?:\.\d+)?)(?:f)?')
_QUOTED_STRING_RE = re.compile(r'"([^"]*)"') # Captures strings in between double quotes ""

def extract_quoted_strings(line: str) -> List[str]:
    """Public function to extract quoted strings."""
    return _QUOTED_STRING_RE.findall(line)


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


def parse_float_safe(token: str, section: str = "", desc: str = "value") -> float:
    """
    Convert a token to float, handling:
      - trailing 'f' or 'F'
      - multiple dots (e.g. "54.5." → "54.5")
      - trailing dot
    Raises ValueError with a descriptive message on failure.
    """
    original = token
    # 1. handle trailing 'f' (keep it for later reattachment, but we'll strip for cleaning)
    has_f = token.endswith(('f', 'F'))
    core = token[:-1] if has_f else token

    # 2. fix multiple dots (keep only the first)
    if core.count('.') > 1:
        first = core.find('.')
        core = core[:first + 1] + core[first + 1:].replace('.', '')

    # 3. remove trailing dot
    if core.endswith('.'):
        core = core[:-1]

    # 4. reattach 'f' if originally present
    cleaned = core + ('f' if has_f else '')

    # 5. convert using parse_float (which expects a possibly 'f'-suffixed token)
    try:
        return parse_float(cleaned)
    except ValueError:
        # enhance error with context
        ctx = f"[{section}] " if section else ""
        raise ValueError(f"{ctx}invalid float {desc}: {original!r}") from None
    


def encode_float(value: float) -> bytes:
    return struct.pack("<f", value)

def encode_int_i32(value: int, padding: bool = False) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"
    
    result += struct.pack("<i", value)
    return result

def encode_raw_bytes(raw_bytes: bytes) -> bytes:
    """Encode raw bytes directly as a string field."""
    data = bytearray()
    data += struct.pack("<H", 0x7FFF)  # ff 7f marker
    data += struct.pack("<I", len(raw_bytes) + 1)  # length + null
    data += raw_bytes
    data += b"\x00"
    return bytes(data)

def encode_string(value: str) -> bytes:
    """
    Encode a string exactly as observed in .arb files.

    Format:
        uint16  opcode  = 0xFF7F
        uint32  length  = len(string_bytes) + 1 (including null terminator)
        bytes   string  (Shift-JIS encoded)
        uint8   null    = 0x00
    """
    if not value:
        # Empty string: just opcode + length 1 + null
        data = bytearray()
        data += struct.pack("<H", 0x7FFF)  # 0xFF7F little-endian
        data += struct.pack("<I", 1)       # length 1 (just null)
        data += b"\x00"
        return bytes(data)
    
    string_bytes = value.encode("shift-jis", errors="replace")
    
    data = bytearray()
    # Opcode: 0xFF7F (little-endian)
    data += struct.pack("<H", 0x7FFF)
    # Length: uint32, little-endian (includes null terminator)
    data += struct.pack("<I", len(string_bytes) + 1)
    # String bytes
    data += string_bytes
    # Null terminator
    data += b"\x00"
    
    return bytes(data)

def encode_rgb_component(value: int) -> bytes:
    return struct.pack("<f", value / 255.0)

def encode_int_u16(value: int, padding: bool = True) -> bytes:
    result = bytearray()
    if padding:
        result += b"\x00\x00"

    result += struct.pack("<H", value)
    return result