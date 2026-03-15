'''
  example usage

'''
from pathlib import Path



from .arb_builder import test_and_generate_arb
from .arg_parser import parse_arg

def main():
    # Hardcoded paths - change these as needed
    mp_name = "mp1111"
    arg_path = Path()
    arb_path = Path()
    output_path = Path("test.arb")
    
    # 1. Parse
    print("Parsing ARG...")
    arg_text = arg_path.read_text(encoding="shift-jis", errors="replace")
    parsed_arg = parse_arg(arg_text)
    
    
    # 2. Modify (example)
    print("Modifying...")
    parsed_arg.motion_includes.append("chr/enemy/b005/b005.mtd")
    if parsed_arg.arrangements:
        all_mons = parsed_arg.arrangements.MONS
        for mons in all_mons:
            # Pick a random monster from the test data
            
            # Assign new values
            mons.id = "B005"
            mons.param_define = "B005"
            mons.motion_define = "b005:b005"
            
    # parsed_arg.bgm = "new_value"
    
    # 3. Build
    print("Building ARB...")
    arb_bytes = test_and_generate_arb(parsed_arg, arb_path)
    
    # 4. Save
    print("Saving...")
    output_path.write_bytes(arb_bytes)
    print(f"Done! Saved to {output_path}")

if __name__ == "__main__":
    main()