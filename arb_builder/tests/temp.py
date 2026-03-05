"""
test_arb_generation.py

Comprehensive test suite to compare generated .arb data against original .arb files.
Tests all .arg/.arb file pairs in the specified directories.
"""

import sys
import os
from pathlib import Path
from typing import List, Tuple, Optional
import argparse

# Add parent directory to path for imports
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from arg_parser import parse_arg
from region_builders.arb_map import build_map_region
from arb_header import ARBHeader

# Configuration
ARBS_DIR = Path("./arbs")
ARGS_DIR = Path("./args")
OUTPUT_DIR = Path("./generated")

# ------------------------------------------------------------------------------
# TEST MODE 1: Compare against all original .arb files (your existing test)
# ------------------------------------------------------------------------------

def find_matching_files() -> List[Tuple[Path, Path]]:
    """
    Find all matching .arg/.arb file pairs.
    
    Returns:
        List of tuples (arg_path, arb_path) for files with matching names
    """
    matching_pairs = []
    
    # Get all .arg files
    arg_files = list(ARGS_DIR.glob("*.arg"))
    
    for arg_path in arg_files:
        # Derive expected .arb filename
        arb_filename = arg_path.stem + ".arb"
        arb_path = ARBS_DIR / arb_filename
        
        # Check if corresponding .arb exists
        if arb_path.exists():
            matching_pairs.append((arg_path, arb_path))
        else:
            print(f"Warning: No matching .arb file for {arg_path.name}")
    
    return matching_pairs
    

def test_file_pair(arg_path: Path, arb_path: Path) -> bool:
    """
    Test a single .arg/.arb file pair.
    
    Returns:
        True if all tests pass, False otherwise
    """
    print(f"\n{'='*60}")
    print(f"Testing: {arg_path.name} -> {arb_path.name}")
    print(f"{'='*60}")
    
    all_tests_passed = True
    
    try:
        # 1. Parse the .arg file
        arg_text = arg_path.read_text(encoding="shift-jis", errors="replace") # Some files have ■ which is not valid
        parsed_arg = parse_arg(arg_text)
        
        print(f"✓ Parsed {len(parsed_arg.maps)} map entries")
        
        # 2. Generate MAP region data
        generated_map_data = build_map_region(parsed_arg.maps)
        print(f"✓ Generated {len(generated_map_data)} bytes of MAP data")
        
        # 3. Read original .arb file
        original_arb_data = arb_path.read_bytes()
        print(f"✓ Read {len(original_arb_data)} bytes from original .arb")
        
        # 4. Parse and regenerate header
        original_header = ARBHeader.from_bytes(original_arb_data)
        regenerated_header_bytes = original_header.to_bytes()
        
        # Test 1: Header regeneration
        original_header_bytes = original_arb_data[0:ARBHeader.SIZE]
        if original_header_bytes == regenerated_header_bytes:
            print("✓ Header regeneration: PASSED")
        else:
            print("✗ Header regeneration: FAILED")
            print(f"  Original header length: {len(original_header_bytes)}")
            print(f"  Regenerated header length: {len(regenerated_header_bytes)}")
            
            # Find differences
            for i in range(min(len(original_header_bytes), len(regenerated_header_bytes))):
                if original_header_bytes[i] != regenerated_header_bytes[i]:
                    print(f"  Difference at byte {i}: "
                          f"original={original_header_bytes[i]:02x}, "
                          f"regenerated={regenerated_header_bytes[i]:02x}")
                    break
            all_tests_passed = False
        
        # Test 2: Header + MAP data comparison
        # Calculate expected MAP data position
        map_data_start = ARBHeader.SIZE
        map_data_end = map_data_start + len(generated_map_data)
        
        # Extract MAP data from original file
        if map_data_end <= len(original_arb_data):
            original_map_data = original_arb_data[map_data_start:map_data_end]
            
            if generated_map_data == original_map_data:
                pass
                print(f"✓ MAP data generation: PASSED")
            else:
                print("✗ MAP data generation: FAILED")
                print(f"  Generated MAP data length: {len(generated_map_data)}")
                print(f"  Original MAP data length: {len(original_map_data)}")
                
                # Find first difference
                min_len = min(len(generated_map_data), len(original_map_data))
                for i in range(min_len):
                    if generated_map_data[i] != original_map_data[i]:
                        print(f"  First difference at byte {i} (offset {map_data_start + i} in file):")
                        print(f"    Generated: {generated_map_data[i]:02x}")
                        print(f"    Original:  {original_map_data[i]:02x}")
                        
                        # Show context around the difference
                        start = max(0, i - 8)
                        end = min(min_len, i + 9)
                        print(f"  Context (bytes {start}-{end}):")
                        print(f"    Generated: {generated_map_data[start:end].hex()}")
                        print(f"    Original:  {original_map_data[start:end].hex()}")
                        break
                
                if len(generated_map_data) != len(original_map_data):
                    print(f"  Length mismatch! Generated has {len(generated_map_data)} bytes, "
                          f"original has {len(original_map_data)} bytes")
                
                all_tests_passed = False
        else:
            print("✗ MAP data comparison: Cannot extract - file too short")
            all_tests_passed = False
        
        # Test 3: Full header + MAP data comparison
        generated_full_data = regenerated_header_bytes + generated_map_data
        original_full_data = original_arb_data[0:map_data_end]
        
        if generated_full_data == original_full_data:
            print("✓ Full data (header + MAP) regeneration: PASSED")
        else:
            print("✗ Full data regeneration: FAILED")
            all_tests_passed = False
        
        # Additional debug info
        print(f"\nDebug info:")
        print(f"  Header size: {ARBHeader.SIZE} bytes")
        print(f"  MAP data size: {len(generated_map_data)} bytes")
        print(f"  Total generated: {len(generated_full_data)} bytes")
        print(f"  File size: {len(original_arb_data)} bytes")
        
        # Show first few bytes of MAP data for inspection
        if len(generated_map_data) > 0:
            print(f"  First 32 bytes of generated MAP data: {generated_map_data[:32].hex()}")
        
    except Exception as e:
        print(f"✗ Error processing files: {e}")
        import traceback
        traceback.print_exc()
        all_tests_passed = False
    
    return all_tests_passed

def run_comparison_tests() -> None:
    """Run tests on all matching .arg/.arb file pairs."""
    print("Starting ARB generation tests...")
    print(f"ARGS directory: {ARGS_DIR.absolute()}")
    print(f"ARBS directory: {ARBS_DIR.absolute()}")
    
    # Check if directories exist
    if not ARGS_DIR.exists():
        print(f"Error: ARGS directory not found: {ARGS_DIR}")
        return
    if not ARBS_DIR.exists():
        print(f"Error: ARBS directory not found: {ARBS_DIR}")
        return
    
    # Find matching files
    matching_pairs = find_matching_files()
    
    if not matching_pairs:
        print("No matching .arg/.arb file pairs found!")
        return
    
    print(f"\nFound {len(matching_pairs)} matching file pairs to test")
    
    # Run tests
    results = []
    for arg_path, arb_path in matching_pairs:
        passed = test_file_pair(arg_path, arb_path)
        results.append((arg_path.name, passed))
    
    # Summary
    print(f"\n{'='*60}")
    print("TEST SUMMARY")
    print(f"{'='*60}")
    
    passed_count = sum(1 for _, passed in results if passed)
    failed_count = len(results) - passed_count
    
    print(f"Total files tested: {len(results)}")
    print(f"Passed: {passed_count}")
    print(f"Failed: {failed_count}")
    
    if failed_count > 0:
        print("\nFailed files:")
        for filename, passed in results:
            if not passed:
                print(f"  {filename}")
    
    # Exit with appropriate code
    if failed_count == 0:
        print("\n✅ All tests passed!")
        sys.exit(0)
    else:
        print("\n❌ Some tests failed!")
        sys.exit(1)

# ------------------------------------------------------------------------------
# TEST MODE 2: Generate .arb from single .arg file
# ------------------------------------------------------------------------------

def generate_arb_from_arg(arg_path: Path, output_dir: Optional[Path] = None) -> None:
    """
    Generate a .arb file from a single .arg file and save it.
    
    Args:
        arg_path: Path to the .arg file
        output_dir: Directory to save the generated .arb (defaults to OUTPUT_DIR)
    """
    if output_dir is None:
        output_dir = OUTPUT_DIR
    
    # Create output directory if it doesn't exist
    output_dir.mkdir(parents=True, exist_ok=True)
    
    print(f"\n{'='*60}")
    print(f"Generating .arb from: {arg_path.name}")
    print(f"{'='*60}")
    arg_stem = arg_path.stem
    arb_filename = arg_path.stem + ".arb"  # e.g., "mp7101.arb"
    
    # Create new path in the ARBS_DIR
    arb_path = ARBS_DIR / arb_filename
    
    try:
        # 1. Parse the .arg file
        arg_text = arg_path.read_text(encoding="shift-jis", errors="replace")
        parsed_arg = parse_arg(arg_text)
        
        print(f"✓ Parsed {len(parsed_arg.maps)} map entries")
        
        # 2. Generate MAP region data
        generated_map_data = build_map_region(parsed_arg.maps)
        print(f"✓ Generated {len(generated_map_data)} bytes of MAP data")
        
        # 3. Create a default header
        # Note: You'll need to fill in proper header values
        # For now, creating a minimal header
        header = ARBHeader.from_bytes(arb_path.read_bytes())
        # Set some basic header values (you'll need to adjust these based on your ARBHeader class)
        # header.magic = "YS7_ARG"
        # header.version = 1
        # ... etc
        
        regenerated_header_bytes = header.to_bytes()
        print(f"✓ Generated {len(regenerated_header_bytes)} bytes of header data")
        
        # 4. Combine header + MAP data
        generated_full_data = regenerated_header_bytes + generated_map_data
        
        # 5. Save to file
        output_filename = f"generated_{arg_path.stem}.arb"
        output_path = output_dir / output_filename
        
        with open(output_path, 'wb') as f:
            f.write(generated_full_data)
        
        print(f"✓ Saved generated .arb to: {output_path}")
        print(f"  Total file size: {len(generated_full_data)} bytes")
        
        # Show hex preview
        print(f"\nFirst 64 bytes (hex):")
        hex_data = generated_full_data[:64].hex()
        for i in range(0, len(hex_data), 32):
            print(f"  {hex_data[i:i+32]}")
            
    except Exception as e:
        print(f"✗ Error generating .arb: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)

# ------------------------------------------------------------------------------
# COMMAND LINE INTERFACE
# ------------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(description='ARB file generator and tester')
    
    # Create mutually exclusive group for test modes
    mode_group = parser.add_mutually_exclusive_group(required=True)
    mode_group.add_argument('--test-all', action='store_true',
                          help='Run comparison tests against all original .arb files (default mode)')
    mode_group.add_argument('--generate', metavar='ARG_FILE',
                          help='Generate .arb from a single .arg file')
    
    parser.add_argument('--output-dir', metavar='DIR', default='./generated',
                      help='Output directory for generated files (default: ./generated)')
    
    args = parser.parse_args()
    
    if args.test_all:
        print("Running in TEST MODE: Comparing against all original .arb files")
        run_comparison_tests()
    elif args.generate:
        print("Running in GENERATE MODE: Creating .arb from single .arg file")
        arg_path = Path(args.generate)
        if not arg_path.exists():
            print(f"Error: .arg file not found: {arg_path}")
            sys.exit(1)
        
        output_dir = Path(args.output_dir)
        generate_arb_from_arg(arg_path, output_dir)

if __name__ == "__main__":
    # --------------------------------------------------------------------------
    # MANUAL MODE SWITCH (for quick testing without command line args)
    # --------------------------------------------------------------------------
    # Set this variable to choose the mode manually:
    # 0 = Run comparison tests against all files (default)
    # 1 = Generate .arb from a specific .arg file
    # --------------------------------------------------------------------------
    MANUAL_MODE = 1  # <-- CHANGE THIS TO SWITCH MODES
    
    if MANUAL_MODE == 0:
        # Mode 0: Run all comparison tests
        print("Running in MANUAL MODE 0: Comparison tests")
        run_comparison_tests()
    elif MANUAL_MODE == 1:
        # Mode 1: Generate single .arb file
        print("Running in MANUAL MODE 1: Single file generation")
        
        # <-- SET YOUR .arg FILE PATH HERE
        ARG_FILE_TO_GENERATE = "./args/mp7101.arg"  # <-- CHANGE THIS
        
        arg_path = Path(ARG_FILE_TO_GENERATE)
        if not arg_path.exists():
            print(f"Error: .arg file not found: {arg_path}")
            sys.exit(1)
        
        generate_arb_from_arg(arg_path)
    else:
        # If you want command line interface, uncomment:
        # main()
        
        # Or default to comparison tests:
        print(f"Unknown MANUAL_MODE value: {MANUAL_MODE}")
        print("Defaulting to comparison tests...")
        run_comparison_tests()