import sys
import os
from pathlib import Path
from typing import List, Tuple, Dict, Any, Optional, Callable
from dataclasses import dataclass

# Add parent directory to path for imports

from arb_builder.arg_parser import parse_arg, ARG
from arb_builder.region_builders.arb_map import build_map_region
from arb_builder.region_builders.arb_camera import build_camera_region
from arb_builder.region_builders.arb_scrinclude import build_scr_include_region
from arb_builder.region_builders.arb_mapset import build_mapset_region
from arb_builder.region_builders.arb_grasstremble_unknownblob import build_grass_tremble_unknown_blob_region
from arb_builder.region_builders.arb_grasstremble import build_grass_tremble_region
from arb_builder.region_builders.arb_glare import build_glare_region
from arb_builder.region_builders.arb_dof import build_dof_region
from arb_builder.region_builders.arb_gradation import build_gradation_region
from arb_builder.region_builders.arb_portal import build_portal_region
from arb_builder.region_builders.arb_zplane import build_zplane_region
from arb_builder.region_builders.arb_shadowbound import build_shadowbound_region
from arb_builder.region_builders.arb_shadowsoft import build_shadowsoft_region
from arb_builder.region_builders.arb_ssao import build_ssao_region
from arb_builder.region_builders.arb_volumetrics import build_volumetrics_region
from arb_builder.region_builders.arb_fogset import build_fogset_region
from arb_builder.region_builders.arb_fogsetback import build_fogsetback_region
from arb_builder.region_builders.arb_fogsetwater import build_fogsetwater_region
from arb_builder.region_builders.arb_areaflag import build_areaflag_region
from arb_builder.region_builders.arb_bgm import build_bgm_region
from arb_builder.region_builders.arb_fishcoll import build_fishcoll_region
from arb_builder.region_builders.arb_absence_of_sections import build_absence_of_sections_region
from arb_builder.region_builders.arb_motion_include import build_motioninclude_region
from arb_builder.region_builders.arb_null_section import build_nullsection_region
from arb_builder.region_builders.arb_footse import build_footse_region


from arb_builder.arb_header import ARBHeader

from arb_builder.arragements.builder import build_arrangements_region
from arb_builder.region_builders.arb_init_script import build_initscript_region

# Configuration
ARBS_DIR = Path("./arbs")
ARGS_DIR = Path("./args")


@dataclass
class SectionTest:
    """Represents a section to test in the ARB file."""
    name: str  # Display name for the section
    arg_attr: str  # Attribute name in parsed_arg (e.g., 'camera', 'maps')
    build_func: Callable  # Function to build the section data
    required: bool = False  # Whether this section is always present (like MAP)
    
    def is_present(self, parsed_arg: ARG) -> bool:
        """Check if this section exists in the parsed ARG."""
        if self.required:
            return True
        return hasattr(parsed_arg, self.arg_attr) and getattr(parsed_arg, self.arg_attr) is not None
    
    def get_data(self, parsed_arg: ARG) -> Optional[bytes]:
        """Get the section data from parsed ARG."""
        if not self.is_present(parsed_arg):
            return None
        
        arg_data = getattr(parsed_arg, self.arg_attr)
        return self.build_func(arg_data)


# Define all sections to test IN THE ORDER THEY APPEAR IN THE ARB FILE
ARB_SECTIONS = [
    SectionTest(
        name="MAP",
        arg_attr="maps",
        build_func=build_map_region,
        required=True
    ),
    SectionTest(
        name="SCR",
        arg_attr="scr_include",
        build_func=build_scr_include_region,
        required=False
    ),
    SectionTest(
        name="CAMERA",
        arg_attr="camera",
        build_func=build_camera_region,
        required=False
    ),
    SectionTest(
        name = "MAP_SET",
        arg_attr="map_set",
        build_func=build_mapset_region,
        required=False
    ),
    SectionTest(
        name = "GRASS_UNKNOWN_BLOB",
        arg_attr= "SKIP",
        build_func=build_grass_tremble_unknown_blob_region,
        required=True
    ),
    SectionTest(
        name = "GRASS_TREMBLE",
        arg_attr="grass_tremble",
        build_func=build_grass_tremble_region,
        required=False
    ),
    SectionTest(
        name = "GLARE",
        arg_attr="glare",
        build_func=build_glare_region,
        required=False
    ),
    SectionTest(
        name = "DOF",
        arg_attr = "dof",
        build_func=build_dof_region,
        required=False
    ),
    SectionTest(
        name = "GRADATION",
        arg_attr = "gradation",
        build_func=build_gradation_region,
        required=False
    ),
    SectionTest(
        name="PORTAL",
        arg_attr="portal",
        build_func=build_portal_region,
        required=True
    ),
    SectionTest(
        name="ZPLANE",
        arg_attr="zplane",
        build_func=build_zplane_region,
        required=True
    ),
    SectionTest(
        name="SHADOW_BOUND",
        arg_attr="shadow_bound",
        build_func=build_shadowbound_region,
        required=True
    ),
    SectionTest(
        name="SHADOW_SOFT",
        arg_attr="shadow_soft",
        build_func=build_shadowsoft_region,
        required=False
    ),
    SectionTest(
        name="SSAO",
        arg_attr="ssao",
        build_func=build_ssao_region,
        required=False
    ),
    SectionTest(
        name="VOLUMETRICS",
        arg_attr="volumetrics",
        build_func=build_volumetrics_region,
        required=False
    ),
    SectionTest(
        name="FOGSET",
        arg_attr="fogsets",
        build_func=build_fogset_region,
        required=False
    ),
    SectionTest(
        name="FOGSETBACK",
        arg_attr="fogsetbacks",
        build_func=build_fogsetback_region,
        required=False
    ),
    SectionTest(
        name="FOGSETWATER",
        arg_attr="fogsetwater",
        build_func=build_fogsetwater_region,
        required=False
    ),
    
    SectionTest(
        name="AREA_FLAG",
        arg_attr="area_flags",
        build_func = build_areaflag_region,
        required=True
    ),
    SectionTest(
        name="BGM",
        arg_attr="bgm",
        build_func=build_bgm_region,
        required = False,
    ),
    SectionTest(
        name="MOTION_INCLUDE",
        arg_attr="motion_includes",
        build_func=build_motioninclude_region,
        required=False
    ),
    SectionTest(
        name="NULL SECTION",
        arg_attr="fish_coll",
        build_func=build_nullsection_region,
        required=True
    ),
    SectionTest(
        name="FOOTSE",
        arg_attr="footse",
        build_func=build_footse_region,
        required=False
    ),
    SectionTest(
        name="FISH_COLL",
        arg_attr="fish_coll",
        build_func=build_fishcoll_region,
        required=False
    ),
    SectionTest(
        name="ARRANGEMENT",
        arg_attr="arrangements",
        build_func=build_arrangements_region,
        required=False,
    ),
    SectionTest(
        name="INIT_SCRIPT",
        arg_attr="init_script",
        build_func=build_initscript_region,
        required=False,
    ),
    # To add a new section, just add another SectionTest here!
    # Example:
    # SectionTest(
    #     name="NEW_SECTION",
    #     arg_attr="new_section_data",
    #     build_func=build_new_section,
    #     required=False
    # ),
]
"""
    
    
"""


def find_matching_files() -> List[Tuple[Path, Path]]:
    matching_pairs = []

    for arg_path in ARGS_DIR.glob("*.arg"):
        arb_path = ARBS_DIR / (arg_path.stem + ".arb")
        if arb_path.exists():
            matching_pairs.append((arg_path, arb_path))
        else:
            print(f"Warning: No matching .arb file for {arg_path.name}")

    return matching_pairs


def test_file_pair(arg_path: Path, arb_path: Path) -> bool:
    print(f"\n{'=' * 60}")
    print(f"Testing: {arg_path.name} -> {arb_path.name}")
    print(f"{'=' * 60}")

    all_tests_passed = True

    try:
        # 1. Parse ARG
        arg_text = arg_path.read_text(encoding="shift-jis", errors="replace")
        parsed_arg = parse_arg(arg_text)

        # 2. Header regeneration test
        original_arb = arb_path.read_bytes()
        original_header = ARBHeader.from_bytes(original_arb)
        regenerated_header = original_header.to_bytes()

        original_header_bytes = original_arb[:ARBHeader.SIZE]
        if original_header_bytes == regenerated_header:
            print("✓ Header regeneration: PASSED")
        else:
            print("✗ Header regeneration: FAILED")
            all_tests_passed = False

        # 3. Build all sections and compare
        generated_data = regenerated_header
        original_data = original_header_bytes
        offset = ARBHeader.SIZE
        section_sizes = []
        
        print("\nSection Tests:")

        for section in ARB_SECTIONS:
            section_data = None
            # If we are analyzing the unknown blob, dont do the check because it is not a arg section and its present always
            if not section.is_present(parsed_arg) and section.name != "GRASS_UNKNOWN_BLOB":
                print(f"• {section.name} section not present in ARG (skipped)")
                if section.name in ("FOGSETBACK", "FOGSETWATER"):
                    print("FOGSETWATER is not present, building the 1A4008 section")
                    section_data = build_absence_of_sections_region(section_name=section.name)
                else:
                    continue

            if section.name == "GRASS_UNKNOWN_BLOB":
                section_data = build_grass_tremble_unknown_blob_region(original_arb, offset)

                if not section_data:
                    print("• GRASS_UNKNOWN_BLOB not present")
                    continue

            elif section.name == "NULL_SECTION":
                section_data = build_nullsection_region()

            elif section_data is None:
                # Build this section's data
                section_data = section.get_data(parsed_arg)
                if section_data is None:
                    print(f"• {section.name} section data is None (skipped)")
                    continue

            # Compare with original
            original_section = original_arb[offset:offset + len(section_data)]
            
            if section_data == original_section:
                print(f"✓ {section.name} data generation: PASSED")
            else:
                print(f"✗ {section.name} data generation: FAILED")
                all_tests_passed = False
            
            # Update for next iteration
            generated_data += section_data
            original_data += original_section
            section_sizes.append((section.name, len(section_data)))
            offset += len(section_data)

        # 4. Full regeneration check
        if generated_data == original_arb[:len(generated_data)]:
            print(f"\n✓ Full data regeneration: PASSED")
        else:
            print(f"\n✗ Full data regeneration: FAILED")
            all_tests_passed = False

        # Debug info
        print("\nDebug info:")
        print(f"  Header size: {ARBHeader.SIZE}")
        total_generated = ARBHeader.SIZE

        for name, size in section_sizes:
            print(f"  {name} size: {size}")
            total_generated += size
        print(f"  Total tested size: {len(generated_data)}")
        print(f"  File size: {len(original_arb)}")

    except Exception as e:
        print(f"✗ Error processing files: {e}")
        import traceback
        traceback.print_exc()
        all_tests_passed = False

    return all_tests_passed


def run_all_tests() -> None:
    print(f"Starting ARB generation tests for {len(ARB_SECTIONS)} sections...")
    print("Sections to test:", ", ".join(s.name for s in ARB_SECTIONS))

    if not ARGS_DIR.exists() or not ARBS_DIR.exists():
        print("Error: args/arbs directory missing")
        return

    pairs = find_matching_files()
    if not pairs:
        print("No matching files found")
        return

    results = []
    for arg_path, arb_path in pairs:
        passed = test_file_pair(arg_path, arb_path)
        results.append((arg_path.name, passed))

    print(f"\n{'=' * 60}")
    print("TEST SUMMARY")
    print(f"{'=' * 60}")

    passed = sum(1 for _, ok in results if ok)
    failed = len(results) - passed

    print(f"Total: {len(results)} | Passed: {passed} | Failed: {failed}")

    if failed == 0:
        print("\n✅ All tests passed!")
        sys.exit(0)
    else:
        print("\n❌ Some tests failed!")
        for name, ok in results:
            if not ok:
                print(f"  {name}")
        sys.exit(1)


if __name__ == "__main__":
    run_all_tests()