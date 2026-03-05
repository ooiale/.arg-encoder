import sys
import os
from pathlib import Path
from typing import Optional, Callable
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
from arb_builder.region_builders.arb_ssao import build_ssao_region
from arb_builder.region_builders.arb_shadowbound import build_shadowbound_region
from arb_builder.region_builders.arb_shadowsoft import build_shadowsoft_region
from arb_builder.region_builders.arb_volumetrics import build_volumetrics_region
from arb_builder.region_builders.arb_fogset import build_fogset_region
from arb_builder.region_builders.arb_fogsetback import build_fogsetback_region
from arb_builder.region_builders.arb_fogsetwater import build_fogsetwater_region
from arb_builder.region_builders.arb_areaflag import build_areaflag_region
from arb_builder.region_builders.arb_bgm import build_bgm_region
from arb_builder.region_builders.arb_absence_of_sections import build_absence_of_sections_region
from arb_builder.region_builders.arb_motion_include import build_motioninclude_region
from arb_builder.region_builders.arb_null_section import build_nullsection_region
from arb_builder.region_builders.arb_footse import build_footse_region


from arb_builder.region_builders.arb_soundefx import build_soundefx_region
from arb_builder.region_builders.arb_fishcoll import build_fishcoll_region

from arb_builder.arb_header import ARBHeader

from arb_builder.arragements.builder import build_arrangements_region
from arb_builder.region_builders.arb_init_script import build_initscript_region


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
        required=False,
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
        
    SectionTest(
        name="SOUND_EFX",
        arg_attr="sound_efx",
        build_func=build_soundefx_region,
        required=False
    )
    
"""

def test_and_generate_arb(arg_path: Path, arb_path: Path, output_path: Path = Path("test.arb")) -> bool:
    """
    Test ARG to ARB conversion and write generated output to test.arb
    
    Args:
        arg_path: Path to the input .arg file
        arb_path: Path to the original .arb file for comparison
        output_path: Path where to write the generated .arb file
    
    Returns:
        bool: True if all tests passed, False otherwise
    """
    print(f"\n{'=' * 60}")
    print(f"Testing: {arg_path.name} -> {arb_path.name}")
    print(f"Writing output to: {output_path.name}")
    print(f"{'=' * 60}")

    all_tests_passed = True
    generated_data = b""

    try:
        # 1. Parse ARG
        arg_text = arg_path.read_text(encoding="shift-jis", errors="replace")
        parsed_arg = parse_arg(arg_text)
        print(f"{'=' * 60}")
        print(f"PRINTING THE INFO FROM THE PARSED ARG:")
        for key, value in parsed_arg.__dict__.items():
            print(f"key: {key}, value: {value}")
        
        # 2. Read original ARB for comparison
        original_arb = arb_path.read_bytes()
        original_header = ARBHeader.from_bytes(original_arb)
        
        # 3. Header regeneration test
        regenerated_header = original_header.to_bytes()
        original_header_bytes = original_arb[:ARBHeader.SIZE]
        
        if original_header_bytes == regenerated_header:
            print("✓ Header regeneration: PASSED")
        else:
            print("✗ Header regeneration: FAILED")
            all_tests_passed = False
        
        # Start with header
        generated_data = regenerated_header
        offset = ARBHeader.SIZE
        section_sizes = []
        
        print("\nSection Tests:")

        # 4. Build all sections and compare
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
                print(f"  Generated size: {len(section_data)}")
                print(f"  Original size: {len(original_section)}")
                all_tests_passed = False
            
            # Add to generated data
            generated_data += section_data
            offset += len(section_data)
            section_sizes.append((section.name, len(section_data)))

        # 5. Write generated data to file
        output_path.write_bytes(generated_data)
        print(f"\n✓ Generated ARB written to: {output_path}")
        print(f"  File size: {len(generated_data)} bytes")

        # 6. Compare sizes
        print(f"\nSize comparison:")
        print(f"  Original ARB size: {len(original_arb)} bytes")
        print(f"  Generated ARB size: {len(generated_data)} bytes")
        print(f"  Difference: {len(original_arb) - len(generated_data)} bytes")
        
        # 7. Check if we generated everything
        if len(generated_data) == len(original_arb):
            print(f"\n✅ Full regeneration successful!")
            if generated_data == original_arb:
                print("  Generated file is identical to original!")
            else:
                print("  Warning: Files have same size but different content")
        else:
            print(f"\n⚠️  Partial regeneration:")
            print(f"  Original file has {len(original_arb) - len(generated_data)} more bytes")
            print(f"  This could be due to:")
            print(f"  - Sections not yet implemented")
            print(f"  - Padding or alignment bytes")
            print(f"  - Unknown data structures")

        # 8. Debug info
        print("\nDebug info:")
        print(f"  Header size: {ARBHeader.SIZE}")
        total_generated = ARBHeader.SIZE

        for name, size in section_sizes:
            print(f"  {name} size: {size}")
            total_generated += size
            
        print(f"  Total generated: {total_generated}")
        print(f"  Remaining in original: {len(original_arb) - total_generated}")
        print("Not generating the generated bytes")
        #print(f"  Generated bytes: {generated_data}")

    except Exception as e:
        print(f"✗ Error processing files: {e}")
        import traceback
        traceback.print_exc()
        all_tests_passed = False
        
        # Try to write whatever we generated before the error
        if generated_data:
            output_path.write_bytes(generated_data)
            print(f"  Partial output written to {output_path}")

    return all_tests_passed


def main() -> None:
    """Main function to test and generate ARB file from hardcoded paths."""
    # Hardcoded paths as requested
    mp_name = "mp1111"
    arg_path = Path(rf"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\args\{mp_name}.arg")
    arb_path = Path(rf"C:\Users\bxand\OneDrive\Desktop\ys 8 rando 2\ArbDecoding\arbs\{mp_name}.arb")
    output_path = Path("test.arb")
    
    print("Starting ARB generation test with hardcoded paths:")
    print(f"  Input ARG: {arg_path}")
    print(f"  Original ARB: {arb_path}")
    print(f"  Output ARB: {output_path}")
    print(f"\nTesting {len(ARB_SECTIONS)} sections:", ", ".join(s.name for s in ARB_SECTIONS))
    
    # Check if files exist
    if not arg_path.exists():
        print(f"\n❌ Error: ARG file not found: {arg_path}")
        sys.exit(1)
    
    if not arb_path.exists():
        print(f"\n❌ Error: ARB file not found: {arb_path}")
        sys.exit(1)
    
    # Run the test and generation
    passed = test_and_generate_arb(arg_path, arb_path, output_path)
    
    if passed:
        print(f"\n✅ All implemented tests passed!")
        print(f"   Output file: {output_path.absolute()}")
        sys.exit(0)
    else:
        print(f"\n❌ Some tests failed!")
        print(f"   Partial output file: {output_path.absolute()}")
        sys.exit(1)


if __name__ == "__main__":
    main()