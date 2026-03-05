# arb_builder/binwriter.py

import struct


class BinWriter:
    """
    Deterministic little-endian binary writer.
    No game logic, no assumptions.
    """

    def __init__(self):
        self.buf = bytearray()

    # --------------------
    # Primitive writers
    # --------------------

    def u8(self, v: int):
        self.buf += struct.pack("<B", v)

    def u16(self, v: int):
        self.buf += struct.pack("<H", v)

    def u32(self, v: int):
        self.buf += struct.pack("<I", v)

    def f32(self, v: float):
        self.buf += struct.pack("<f", v)

    # --------------------
    # Raw / utility
    # --------------------

    def write_bytes(self, b: bytes):
        self.buf += b

    def raw(self, hexstr: str):
        self.buf += bytes.fromhex(hexstr)

    def align(self, n: int):
        while len(self.buf) % n != 0:
            self.buf += b"\x00"

    # --------------------
    # Strings
    # --------------------

    def sjis(self, s: str):
        """
        Shift-JIS, null-terminated.
        """
        if s is None:
            self.buf += b"\x00"
        else:
            self.buf += s.encode("shift_jis") + b"\x00"

    # --------------------
    # Output
    # --------------------

    def tell(self) -> int:
        return len(self.buf)

    def get(self) -> bytes:
        return bytes(self.buf)
