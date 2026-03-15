from pathlib import Path
import re
from typing import Dict, Optional, List, Union
import logging
import time
# Configure logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)


"""
USAGE:
  instace = ConstantResolver() # uses default folder of ./enums
  parsed_enum = instance.parse_id(id) # parses both definea and enum ids
"""

class ConstantResolver:
    """
    Resolves symbolic constants from enum and define files.
    
    Automatically discovers files in the .enums/ folder and categorizes them
    based on filename pattern: {name}_enum.h or {name}_define.h
    """
    
    def __init__(self, enums_folder: Optional[Path] = None):
        """
        Initialize resolver by scanning for enum/define files.
        
        Args:
            enums_folder: Path to .enums folder. If None, looks for folder
                         named '.enums' in the same directory as this script.
        """
        # Determine the enums folder location
        if enums_folder is None:
            # Get the directory where THIS script is located
            script_dir = Path(__file__).parent
            self.enums_folder = script_dir / "enums"
        else:
            self.enums_folder = Path(enums_folder)
        
        logger.info(f"Looking for enum files in: {self.enums_folder}")
        
        # Verify folder exists
        if not self.enums_folder.exists():
            raise FileNotFoundError(f"Enums folder not found: {self.enums_folder}")
        
        # These will hold our loaded constants
        self._enums: Dict[str, int] = {}
        self._defines: Dict[str, str] = {}
        self._loaded = False
        
        # Automatically discover and load files
        self._discover_and_load()
    
    def _discover_and_load(self) -> None:
        """
        Scan the .enums folder and load all enum/define files.
        
        File naming convention:
        - {anything}_enum.h  → contains C enum definitions
        - {anything}_define.h → contains #define mappings
        """
        # Get all .h files in the folder
        all_files = list(self.enums_folder.glob("*.h"))
        
        # Separate into enum and define files based on name
        enum_files = []
        define_files = []
        
        for file_path in all_files:
            filename = file_path.name.lower()
            if filename.endswith("_enum.h"):
                enum_files.append(file_path)
                logger.debug(f"Found enum file: {file_path.name}")
            elif filename.endswith("_define.h"):
                define_files.append(file_path)
                logger.debug(f"Found define file: {file_path.name}")
            else:
                logger.warning(f"Ignoring unrecognized .h file: {file_path.name}")
        
        # Load all discovered files
        start = time.time()
        self._enums = self._load_all_enums(enum_files)
        self._defines = self._load_all_defines(define_files)
        self._loaded = True
        print(f"loading all files enum and defines took {time.time() - start:.2f}s")
        
        logger.info(f"Loaded {len(self._enums)} enum constants from {len(enum_files)} files")
        logger.info(f"Loaded {len(self._defines)} defines from {len(define_files)} files")
    
    def _load_all_enums(self, enum_files: List[Path]) -> Dict[str, int]:
        """Load and merge all enum files."""
        enums = {}
        for file_path in enum_files:
            try:
                file_enums = self._parse_enum_file(file_path)
                
                # Check for duplicates across files
                
                duplicates = set(file_enums.keys()) & set(enums.keys())
                if duplicates:
                    logger.warning(f"Duplicate enum constants in {file_path.name}: {duplicates}")
                
                enums.update(file_enums)
                logger.debug(f"Loaded {len(file_enums)} enums from {file_path.name}")
            except Exception as e:
                logger.error(f"Error parsing enum file {file_path}: {e}")
        
        return enums
    
    def _load_all_defines(self, define_files: List[Path]) -> Dict[str, str]:
        """Load and merge all define files."""
        defines = {}
        for file_path in define_files:
            try:
                file_defines = self._parse_define_file(file_path)
                
                # Check for duplicates across files
                
                duplicates = set(file_defines.keys()) & set(defines.keys())
                if duplicates:
                    logger.warning(f"Duplicate defines in {file_path.name}: {duplicates}")
                
                defines.update(file_defines)
                logger.debug(f"Loaded {len(file_defines)} defines from {file_path.name}")
            except Exception as e:
                logger.error(f"Error parsing define file {file_path}: {e}")
        
        return defines
    
    def _parse_enum_file(self, file_path: Path) -> Dict[str, int]:
        """
        Parse a C-style enum file.
        
        Handles:
        - Explicit values: FOO = 42
        - Auto-increment: FOO, BAR, BAZ
        - Hexadecimal: FOO = 0xFF
        - References to other enums: FOO = BAR
        - Comments (// style)
        """
        enum = {}
        current_value = None
        enum_entry = re.compile(r'^\s*([A-Za-z0-9_]+)(?:\s*=\s*([^,]+))?\s*,?')
        
        with open(file_path, 'r', encoding='utf-8') as f:
            for line in f:
                # Remove comments and strip
                line = re.sub(r'//.*', '', line).strip()
                if not line or line.startswith('enum') or line in ('{', '};'):
                    continue
                
                match = enum_entry.match(line)
                if not match:
                    continue
                
                name, rhs = match.groups()
                
                if rhs is not None:
                    rhs = rhs.strip()
                    # Check if it's a number (decimal or hex)
                    try:
                        if rhs.startswith(('0x', '0X')):
                            current_value = int(rhs, 16)
                        else:
                            current_value = int(rhs)
                    except ValueError:
                        # It's a reference to another enum constant
                        if rhs in enum:
                            current_value = enum[rhs]
                        else:
                            # Could be forward reference - we'll resolve later
                            # For now, store as string to resolve after full parse
                            current_value = rhs  # Temporary string
                else:
                    # No RHS: increment
                    if current_value is None:
                        current_value = 0
                    elif not isinstance(current_value, int):
                        # Can't increment a reference - this is a problem
                        raise ValueError(f"Cannot auto-increment after reference in {file_path}: {name}")
                    else:
                        current_value += 1
                
                enum[name] = current_value
        
        # Second pass: resolve any string references
        resolved = {}
        for name, value in enum.items():
            if isinstance(value, str):
                # This should reference an already-resolved enum
                if value in resolved:
                    resolved[name] = resolved[value]
                else:
                    raise ValueError(f"Unresolved reference: {name} = {value} in {file_path}")
            else:
                resolved[name] = value
        
        return resolved
    
    def _parse_define_file(self, file_path: Path) -> Dict[str, str]:
        """Parse a #define file."""
        defines = {}
        define_pattern = re.compile(r'^\s*#define\s+(\S+)\s+(\S+)')
        
        with open(file_path, 'r', encoding='utf-8') as f:
            for line in f:
                match = define_pattern.match(line)
                if match:
                    key, value = match.groups()
                    defines[key] = value
        
        return defines
    
    def parse_id(self, name: str) -> int:
        """
        Parse a symbolic name to its integer value.
        
        Resolution order:
        1. Check if name is a define:
        a. If define value is a number → return it
        b. If define value is another name → look that up
        2. Check if name is an enum constant
        3. Try to parse name as direct integer
        
        Args:
            name: Symbolic name (e.g., "BGM_4107" or "GF_MP1111_TBOX01")
        
        Returns:
            Integer value if found, None otherwise
        """
        if not self._loaded:
            raise RuntimeError("Constants not loaded properly")
        
        original_name = name
        logger.debug(f"🔄 Resolving: {name}")
        
        # Step 1: Handle defines (they can point to numbers or other names)
        if name in self._defines:
            define_value = self._defines[name]
            logger.debug(f"  📍 Found define: {name} -> {define_value}")
            
            # Case 1a: Define points to a number (decimal or hex)
            try:
                if define_value.startswith(('0x', '0X')):
                    value = int(define_value, 16)
                    logger.debug(f"  ✅ Define points to hex: {define_value} = {value}")
                    return value
                else:
                    value = int(define_value)
                    logger.debug(f"  ✅ Define points to number: {define_value} = {value}")
                    return value
            except ValueError:
                # Case 1b: Define points to another name
                logger.debug(f"  🔄 Define points to name: {define_value}")
                name = define_value
        
        # Step 2: Look up in enums (either original or redirected name)
        value = self._enums.get(name)
        if value is not None:
            logger.debug(f"  ✅ Found in enums: {name} = {value}")
            return value
        
        # Step 3: Try to parse as direct integer
        try:
            if name.startswith(('0x', '0X')):
                value = int(name, 16)
                logger.debug(f"  ✅ Parsed as hex: {name} = {value}")
            else:
                value = int(name)
                logger.debug(f"  ✅ Parsed as integer: {name} = {value}")
            return value
        except ValueError:
            pass
        
        logger.debug(f"  ❌ Could not resolve: {original_name}")
        return -999
    
    # Optional: Keep these as convenience methods
    def parse_many(self, names: List[str]) -> Dict[str, Optional[int]]:
        """Parse multiple names at once."""
        return {name: self.parse_id(name) for name in names}
    
    @property
    def enum_count(self) -> int:
        """Number of loaded enum constants."""
        return len(self._enums)
    
    @property
    def define_count(self) -> int:
        """Number of loaded defines."""
        return len(self._defines)
    
    def get_stats(self) -> Dict[str, int]:
        """Get statistics about loaded constants."""
        return {
            "enum_count": self.enum_count,
            "define_count": self.define_count,
            "total_constants": self.enum_count + self.define_count
        }


# ============================================================================
# Shared instance (singleton) for cross-module use
# ============================================================================

# Create a default shared instance
_shared_resolver_instance = None

def get_shared_resolver(enums_folder: Optional[Path] = None) -> ConstantResolver:
    """
    Get or create the shared ConstantResolver instance.
    
    This ensures enum/define files are loaded only once across all modules.
    
    Args:
        enums_folder: Optional custom path to enums folder (only used on first call)
    
    Returns:
        Shared ConstantResolver instance
    """
    global _shared_resolver_instance
    if _shared_resolver_instance is None:
        logger.info("Creating shared ConstantResolver instance")
        _shared_resolver_instance = ConstantResolver(enums_folder)
    return _shared_resolver_instance

# Convenience reference - uses default enums folder
shared_resolver = get_shared_resolver()


# ============================================================================
# Usage Examples
# ============================================================================

if __name__ == "__main__":
    # Create resolver - it automatically finds files in .enums/
    resolver = ConstantResolver()
    
    # Parse IDs exactly as you wanted
    test_ids = [
        "BGM_4107",           # Should be a define pointing to an enum
        "SEFX_HILL",          # Should be a define pointing to an enum
        "GF_MP1111_TBOX01",   # Direct enum constant
        "ICON3D_MT_R1_FLOWER" # Direct enum constant
    ]
    
    print("=" * 50)
    print("Testing ID Resolution")
    print("=" * 50)
    
    for test_id in test_ids:
        value = resolver.parse_id(test_id)
        if value is not None:
            print(f"✓ {test_id:20} → {value}")
        else:
            print(f"✗ {test_id:20} → NOT FOUND")
    
    print("\n" + "=" * 50)
    print("Statistics:")
    stats = resolver.get_stats()
    for key, value in stats.items():
        print(f"  {key}: {value}")