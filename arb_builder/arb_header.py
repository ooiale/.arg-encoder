from __future__ import annotations

from dataclasses import dataclass
from typing import ClassVar

from binwriter import BinWriter

'''
Container metadata (magic + version) → big-endian

Payload / numeric data → little-endian
'''


@dataclass(slots=True)
class ARBHeader:
    """
    Represents the fixed-size header of a Ys VIII .arb file.

    Layout (little-endian):

        0x00  char[8]   Magic string: b"YS7_ARG\\0"
        0x08  u32       Format version (always 6)
        0x0C  u64       Opaque per-map value (hash / GUID / build ID)
        0x14  u32       Flags / mode word

    Total size: 0x18 (24 bytes)

    Notes:
    - Only MAGIC and VERSION are constants.
    - opaque_id and flags MUST be preserved from an original file
      unless their generation logic is fully understood.
    """

    # ---- constants ----

    MAGIC: ClassVar[bytes] = b"YS7_ARG\x00"
    VERSION: ClassVar[int] = 6
    SIZE: ClassVar[int] = 0x18

    # ---- fields ----

    opaque_id: bytes
    """8-byte opaque value unique per map (must be preserved)."""

    flags: int
    """32-bit flags / mode word (must be preserved)."""

    # ---- construction helpers ----

    @classmethod
    def from_bytes(cls, data: bytes) -> ARBHeader:
        """
        Parse an ARBHeader from the first 24 bytes of a .arb file.

        Raises:
            ValueError: if the data does not start with a valid ARB header.
        """
        if len(data) < cls.SIZE:
            raise ValueError("Data too small to contain ARB header")

        if data[0:8] != cls.MAGIC:
            raise ValueError("Invalid ARB magic")

        version = int.from_bytes(data[0x08:0x0C], "big")
        if version != cls.VERSION:
            raise ValueError(
                f"Unsupported ARB version: {version} (expected {cls.VERSION})"
            )

        opaque_id = data[0x0C:0x14]
        flags = int.from_bytes(data[0x14:0x18], "little")

        return cls(
            opaque_id=opaque_id,
            flags=flags,
        )

    # ---- serialization ----

    def write(self, w: BinWriter) -> None:
        """
        Write this header to a BinWriter.

        This must be the first data written to the .arb file.
        """
        if len(self.opaque_id) != 8:
            raise ValueError("opaque_id must be exactly 8 bytes")

        w.write_bytes(self.MAGIC)
        w.write_bytes(self.VERSION.to_bytes(4, "big"))

        w.write_bytes(self.opaque_id)
        w.u32(self.flags)

    def to_bytes(self) -> bytes:
        """
        Serialize this ARBHeader to a bytearray.

        Returns:
            bytearray: The serialized header data (always 24 bytes).
        """
        if len(self.opaque_id) != 8:
            raise ValueError("opaque_id must be exactly 8 bytes")

        # Create a bytearray with the fixed size
        result = bytearray(self.SIZE)
        
        # Write magic bytes (big-endian)
        result[0:8] = self.MAGIC
        
        # Write version (big-endian)
        result[8:12] = self.VERSION.to_bytes(4, "big")
        
        # Write opaque_id (8 bytes)
        result[12:20] = self.opaque_id
        
        # Write flags (little-endian)
        result[20:24] = self.flags.to_bytes(4, "little")
        
        return bytes(result)

    # ---- convenience methods ----

    def __bytes__(self) -> bytes:
        """Return the header as bytes (immutable version)."""
        return bytes(self.to_bytes())

    def __len__(self) -> int:
        """Return the size of the header in bytes."""
        return self.SIZE

if __name__ == "__main__":
    from pathlib import Path
    path = Path(r"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\arbs\mp1201.arb")

    data = path.read_bytes()
    data0 = data[0:24]
    print(data0)

    data1 = ARBHeader.from_bytes(data)
    print(data1)

    data2 = data1.to_bytes()
    print(data2)
    
    print(data0 == data2)