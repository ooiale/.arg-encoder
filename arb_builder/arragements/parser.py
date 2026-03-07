import re
from typing import List, Optional, Tuple, Dict, Any, Union
from collections import defaultdict
from dataclasses import dataclass, field
import os
from .classes import *

from arb_builder.enum_helper.enum_parser import parse_c_enum
from arb_builder.enum_helper.define_lookup import parse_defines
SCR_INC_ENUM_PATH = "scr_inc_enum.h"
SCR_INC_ENUM_TABLE = parse_c_enum(SCR_INC_ENUM_PATH)

SE_ENUM_PATH = "se_enum.h"
SE_DEFINE_PATH = "se_define.h"
SE_DEFINE_TABLE = parse_defines(SE_DEFINE_PATH)
SE_ENUM_TABLE = parse_c_enum(SE_ENUM_PATH)

DEF_ENUM_PATH = "def_enum.h"
DEF_ENUM_TABLE = parse_c_enum(DEF_ENUM_PATH)

ITEM_DEFINE_PATH = "3dicon_define.h"
ITEM_DEFINE_TABLE = parse_defines(ITEM_DEFINE_PATH)

FLAG_ENUM_PATH = "flag_enum.h"
FLAG_ENUM_TABLE = parse_c_enum(FLAG_ENUM_PATH)

EFX_DEFINE_PATH = "efx_define.h"
EFX_DEFINE_TABLE = parse_defines(EFX_DEFINE_PATH)


def parse_arrangement(lines: List[str]) -> Arrangements:
    """
    Parse arrangement entries and populate the Arrangements dataclass.
    
    Args:
        lines: List of clean entry lines from the .arg [ARRANGEMENT] section
    
    Returns:
        Arrangements object containing all parsed entries
    """
    arrangements = Arrangements(arrangements=[])

    # State for handling multi-line comments
    in_multiline_comment = False
    
    for idx, line in enumerate(lines, 1):
        line = line.strip()
        if not line:
            continue

        # --- Handle multi-line comments /* ... */ ---
        if line.startswith('/*'):
            in_multiline_comment = True
            # Check if comment ends on same line
            if '*/' in line:
                in_multiline_comment = False
            continue
        
        if in_multiline_comment:
            # Check if this line ends the comment
            if '*/' in line:
                in_multiline_comment = False
            # Skip this line regardless
            continue

        # Skip single-line comments
        if line.startswith('//'):
            continue
            
        # Extract the first word (entry type)
        match = re.match(r'^(\S+)', line)
        if not match:
            print(f"Warning: Could not extract type from line {idx}: {line[:50]}...")
            continue
            
        entry_type = match.group(1)
        
        # Parse the line based on its type
        try:
            parsed_entry = parse_entry_by_type(entry_type, line, idx)
            if parsed_entry:
                arrangements.arrangements.append(parsed_entry)
        except Exception as e:
            print(f"Error parsing {entry_type} at line {idx}: {e}")
            print(f"  Line: {line[:120]}...")
            continue
    
    #print_arrangement_summary(arrangements)
    #write_arrangements_to_file(arrangements, "arrangements.txt")
    return arrangements


def parse_entry_by_type(entry_type: str, line: str, line_num: int) -> Any:
    """Parse a single line into the appropriate dataclass based on its type."""
    
    # Parse the line into tokens, respecting quoted strings
    tokens = parse_line_tokens(line)

    
    if entry_type == "CHECKPT":
        # CHECKPT id chkflag x y z rot infoflag motion_define event_script
        # Sometimes chkflag comes as -1 instead of the expected flag string
        chkflag_token = tokens[2]

        try:
            indexed_chkflag_value = int(chkflag_token)
            # It's a number, so the string version is just the number as string
        except ValueError:
            # It's a string like "CP_MP1201_01" - look it up
            indexed_chkflag_value = SCR_INC_ENUM_TABLE.get(chkflag_token, 0)

        return CHECKPT(
            size=9,
            id=strip_quotes(tokens[1]),
            chkflag=strip_quotes(tokens[2]),  # chkflag is an indexed string (int)
            indexed_chkflag=indexed_chkflag_value,
            x=parse_float(tokens[3]),
            y=parse_float(tokens[4]),
            z=parse_float(tokens[5]),
            rot=parse_float(tokens[6]),
            infoflag=tokens[7],
            motion_define=strip_quotes(tokens[8]),
            event_script=strip_quotes(tokens[9]) if len(tokens) > 9 else ""
        )
    
    elif entry_type == "ADDNODE":
        # ADDNODE node it3_path node_name float1 float2 float3 float4
        return ADDNODE(
            size=7,
            node=strip_quotes(tokens[1]),
            it3_path=strip_quotes(tokens[2]),
            node_name=strip_quotes(tokens[3]),
            float1=parse_float(tokens[4]),
            float2=parse_float(tokens[5]),
            float3=parse_float(tokens[6]),
            float4=parse_float(tokens[7]) if len(tokens) > 7 else 0.0
        )
    
    elif entry_type == "EVATARI":
        return EVATARI(
            size=6,
            evid=int(tokens[1]),
            flag=int(tokens[2]),
            flag_state=int(tokens[3]),
            isyuka=int(tokens[4]),
            oneshot=int(tokens[5]),
            script=strip_quotes(tokens[6]),
        )
    
    elif entry_type == "COLORNODE":

        return COLORNODE(
            size=5,
            name=strip_quotes(tokens[1]),
            target=strip_quotes(tokens[2]),
            flag1=int(tokens[3]),
            flag2=int(tokens[4]),
            value=parse_float(tokens[5]),
        )
        
    elif entry_type == "GROUPOBJ":
        # GROUPOBJ node it3_1 it3_2 it3_3 unit_sizex unit_sizey argtype group_sizex group_sizey break_type key_item key_efx break_efx break_se damage randam userot sclmin sclmax
        return GROUPOBJ(
            size=19,
            node=strip_quotes(tokens[1]),
            it3_1=strip_quotes(tokens[2]),
            it3_2=strip_quotes(tokens[3]),
            it3_3=strip_quotes(tokens[4]),
            unit_sizex=parse_float(tokens[5]),
            unit_sizey=parse_float(tokens[6]),
            argtype=int(tokens[7]),
            group_sizex=parse_float(tokens[8]),
            group_sizey=parse_float(tokens[9]),
            break_type=int(tokens[10]),
            key_item=int(tokens[11]),
            key_efx=int(tokens[12]),
            break_efx=int(tokens[13]),
            break_se=int(tokens[14]),
            damage=parse_float(tokens[15]),
            randam=parse_float(tokens[16]),
            userot=int(tokens[17]),
            sclmin=parse_float(tokens[18]),
            sclmax=parse_float(tokens[19])
        )
    
    elif entry_type == "MONS":
        # MONS id name param_define flag x y z r info_flag motion_define first_script dead_script event_script
        id_value = strip_quotes(tokens[1])
    
        # Skip materials that are incorrectly categorized as MONS, the game will treat them later as OBJ
        if id_value.startswith("MAT"):
            print(f"Skipping material {id_value} under MONS section (not used in binary)")
            return None  # Skip this entry entirely
        
        return MONS(
            size=13,
            id=id_value,
            name=strip_quotes(tokens[2]),
            param_define=strip_quotes(tokens[3]),
            flag=parse_flag(tokens[4]),  # Handle (1) format
            x=parse_float(tokens[5]),
            y=parse_float(tokens[6]),
            z=parse_float(tokens[7]),
            r=parse_float(tokens[8]),
            info_flag=tokens[9],
            motion_define=strip_quotes(tokens[10]),
            first_script=strip_quotes(tokens[11]),
            dead_script=strip_quotes(tokens[12]),
            event_script=strip_quotes(tokens[13]) if len(tokens) > 13 else ""
        )
    
    elif entry_type == "TBOX":
        # TBOX id item num flag boxtype keyitem x y z r info_flag motion_define first_script event_script
        # Note: TBOX has fewer fields than the 12-field layout
        key_item_token = tokens[6]

        try:
            indexed_key_item_value = int(key_item_token)
        except ValueError:
            # It's a string like "CP_MP1201_01" - look it up
            indexed_key_item_value = ITEM_DEFINE_TABLE.get(key_item_token, -1)
        
        
        return TBOX(
            size= 14,
            id=strip_quotes(tokens[1]),
            item=strip_quotes(tokens[2]),
            indexed_item=ITEM_DEFINE_TABLE.get(tokens[2], 0),
            num=int(tokens[3]),
            flag=parse_obj_flag(tokens[4], FLAG_ENUM_TABLE), # SOMETIMES NEEDS TO BE INDEXED
            boxtype=int(tokens[5]), 
            keyitem=indexed_key_item_value,
            x=parse_float(tokens[7]),
            y=parse_float(tokens[8]),
            z=parse_float(tokens[9]),
            r=parse_float(tokens[10]),
            info_flag=tokens[11],
            motion_define=strip_quotes(tokens[12]),
            event_script=strip_quotes(tokens[13]) if len(tokens) > 13 else "",
            tbox_value="", 
            # this weird field is not present in .arg but is always set to 'tbox' in the .arb
        )
    
    elif entry_type == "TTBOX":
        # TBOX id item num flag boxtype keyitem x y z r info_flag motion_define first_script event_script
        # Note: TBOX has fewer fields than the 12-field layout
        key_item_token = tokens[6]

        try:
            indexed_key_item_value = int(key_item_token)
        except ValueError:
            # It's a string like "CP_MP1201_01" - look it up
            indexed_key_item_value = ITEM_DEFINE_TABLE.get(key_item_token, -1)
        
        
        return TTBOX(
            size= 14,
            id=strip_quotes(tokens[1]),
            item=strip_quotes(tokens[2]),
            indexed_item=ITEM_DEFINE_TABLE.get(tokens[2], 0),
            num=int(tokens[3]),
            flag=parse_obj_flag(tokens[4], FLAG_ENUM_TABLE), # SOMETIMES NEEDS TO BE INDEXED
            boxtype=int(tokens[5]), 
            keyitem=indexed_key_item_value,
            x=parse_float(tokens[7]),
            y=parse_float(tokens[8]),
            z=parse_float(tokens[9]),
            r=parse_float(tokens[10]),
            info_flag=tokens[11],
            motion_define=strip_quotes(tokens[12]),
            event_script=strip_quotes(tokens[13]) if len(tokens) > 13 else "",
            tbox_value="", 
            # this weird field is not present in .arg but is always set to 'ttbox' in the .arb
        )
    
    elif entry_type == "NPC":
        # NPC id name param_define flag x y z r info_flag motion_define first_script dead_script event_script
        return NPC(
            size= 13,
            id=strip_quotes(tokens[1]),
            name=strip_quotes(tokens[2]),
            param_define=strip_quotes(tokens[3]),
            flag=parse_flag(tokens[4]),
            x=parse_float(tokens[5]),
            y=parse_float(tokens[6]),
            z=parse_float(tokens[7]),
            r=parse_float(tokens[8]),
            info_flag=tokens[9],
            motion_define=strip_quotes(tokens[10]),
            first_script=strip_quotes(tokens[11]),
            dead_script=strip_quotes(tokens[12]),
            event_script=strip_quotes(tokens[13]) if len(tokens) > 13 else ""
        )

    elif entry_type == "LODNODE":
        """
        LODNODE NearNode MiddleNode FarNode x y z DistanceNear DistanceFar
        """
        return LODNODE(
            size=8,
            near_node=strip_quotes(tokens[1]),
            middle_node=strip_quotes(tokens[2]),
            far_node=strip_quotes(tokens[3]),
            x=parse_float(tokens[4]),
            y=parse_float(tokens[5]),
            z=parse_float(tokens[6]),
            distance_near=parse_float(tokens[7]),
            distance_far=parse_float(tokens[8]),
        )
    
    elif entry_type == "EVNODE":
        """
        EVNODE name display_name node_name se_type flag
        
        Example:
        EVNODE "se_gim_lava1" "se_gim_lava1" "SE_locator1" "SE_ENV_LAVA_ONES" 1
        """
        return EVNODE(
            size=5,
            name=strip_quotes(tokens[1]),
            display_name=strip_quotes(tokens[2]),
            node_name=strip_quotes(tokens[3]),
            se_type=strip_quotes(tokens[4]),
            flag=int(tokens[5]),
        )

    elif entry_type == "OBJ":
        # OBJ id name param_define flag x y z r info_flag motion_define first_script dead_script event_script
        return OBJ(
            size=13,
            id=strip_quotes(tokens[1]),
            name=strip_quotes(tokens[2]),
            param_define=strip_quotes(tokens[3]),
            flag=parse_obj_flag(tokens[4], SCR_INC_ENUM_TABLE, FLAG_ENUM_TABLE),
            x=parse_float(tokens[5]),
            y=parse_float(tokens[6]),
            z=parse_float(tokens[7]),
            r=parse_float(tokens[8]),
            info_flag=tokens[9],
            motion_define=strip_quotes(tokens[10]),
            first_script=strip_quotes(tokens[11]),
            dead_script=strip_quotes(tokens[12]),
            event_script=strip_quotes(tokens[13]) if len(tokens) > 13 else ""
        )
    
    elif entry_type == "EVBOX2":
        # EVBOX2 id name x y z width depth height rot unk1 event_script
        cleaned_rot = re.sub(r'[^\d.-]', '', tokens[9]) # in mp4111.arg there is a ]0
        return EVBOX2(
            size=11,
            id=strip_quotes(tokens[1]),
            name=strip_quotes(tokens[2]),
            x=parse_float(tokens[3]),
            y=parse_float(tokens[4]),
            z=parse_float(tokens[5]),
            width=parse_float(tokens[6]),
            depth=parse_float(tokens[7]),
            height=parse_float(tokens[8]),
            rot=parse_float(cleaned_rot),
            unk1=int(tokens[10]),
            event_script=strip_quotes(tokens[11]) if len(tokens) > 11 else ""
        )
    
    elif entry_type == "EVCIRCLE":
        # EVCIRCLE id name x y z radius height rot unk event_script
        return EVCIRCLE(
            size=10,
            id=strip_quotes(tokens[1]),
            name=strip_quotes(tokens[2]),
            x=parse_float(tokens[3]),
            y=parse_float(tokens[4]),
            z=parse_float(tokens[5]),
            radius=parse_float(tokens[6]),
            height=parse_float(tokens[7]),
            rot=parse_float(tokens[8]),
            unk=int(tokens[9]),
            event_script=strip_quotes(tokens[10]) if len(tokens) > 10 else ""
        )
    
    elif entry_type == "ENVSE":
        # ENVSE seno uid settype vol allowstate dist_ratio x y z railnode evboxname
        return ENVSE(
            size=11,
            seno=strip_quotes(tokens[1]),
            indexed_seno=SE_ENUM_TABLE.get(SE_DEFINE_TABLE.get(tokens[1], 0), 0),
            uid=int(tokens[2]),
            settype=strip_quotes(tokens[3]),
            indexed_settype=DEF_ENUM_TABLE.get(tokens[3], 0),
            vol=int(tokens[4]),
            allowstate=int(tokens[5]),
            dist_ratio=parse_float(tokens[6]),
            x=parse_float(tokens[7]),
            y=parse_float(tokens[8]),
            z=parse_float(tokens[9]),
            railnode=strip_quotes(tokens[10]),
            evboxname=strip_quotes(tokens[11]) if len(tokens) > 11 else ""
        )
    
    elif entry_type == "MAPLIGHT":

        return MAPLIGHT(
            size=16,
            name=strip_quotes(tokens[1]),
            node=strip_quotes(tokens[2]),
            x=parse_float(tokens[3]),
            y=parse_float(tokens[4]),
            z=parse_float(tokens[5]),
            shakemode=int(tokens[6]),
            enable=int(tokens[7]),
            ratio=parse_float(tokens[8]),
            ratioband=parse_float(tokens[9]),
            range=parse_float(tokens[10]),
            rangeband=parse_float(tokens[11]),
            att=parse_float(tokens[12]),
            r=parse_float(tokens[13]),
            g=parse_float(tokens[14]),
            b=parse_float(tokens[15]),
            spd=parse_float(tokens[16]),
        )

    elif entry_type == "TALKPT":

        return TALKPT(
            size=6,
            id= strip_quotes(tokens[1]),
            name= strip_quotes(tokens[2]),
            x= parse_float(tokens[3]),
            y= parse_float(tokens[4]),
            z= parse_float(tokens[5]),
            radius= parse_float(tokens[6]),
        )

    elif entry_type == "LIGHT3":

        
        return LIGHT3(
            size=19,
            name=strip_quotes(tokens[1]),
            node=strip_quotes(tokens[2]),
            x=parse_float(tokens[3]),
            y=parse_float(tokens[4]),
            z=parse_float(tokens[5]),
            mode=int(tokens[6]),
            visible=int(tokens[7]),
            ratio=parse_float(tokens[8]),
            ratioband=parse_float(tokens[9]),
            range=parse_float(tokens[10]),
            rangeband=parse_float(tokens[11]),
            attr=parse_float(tokens[12]),
            r=parse_float(tokens[13]),
            g=parse_float(tokens[14]),
            b=parse_float(tokens[15]),
            a=parse_float(tokens[16]),
            spd=parse_float(tokens[17]),
            timeshift=parse_float(tokens[18]),
            order=int(tokens[19]) if len(tokens) > 19 else 0
        )

    elif entry_type == "CHRLIGHT":
        
        return CHRLIGHT(
            size=12,
            name=strip_quotes(tokens[1]),
            node=strip_quotes(tokens[2]),
            x=parse_float(tokens[3]),
            y=parse_float(tokens[4]),
            z=parse_float(tokens[5]),
            mode=int(tokens[6]),
            r=parse_float(tokens[7]),
            g=parse_float(tokens[8]),
            b=parse_float(tokens[9]),
            ratio=parse_float(tokens[10]),
            rangemin=parse_float(tokens[11]),
            rangemax=parse_float(tokens[12]) if len(tokens) > 12 else 0.0
        )
    
    elif entry_type == "MAPEFX":
    
        return MAPEFX(
            size=12,
            efxno=strip_quotes(tokens[1]),  # Indexed string ID
            indexed_efxno=EFX_DEFINE_TABLE[tokens[1]],
            uid=int(tokens[2]),
            type=strip_quotes(tokens[3]),   # Indexed string ID
            indexed_type=SCR_INC_ENUM_TABLE[tokens[3]],
            state=int(tokens[4]),
            freq=parse_float(tokens[5]),
            x=parse_float(tokens[6]),
            y=parse_float(tokens[7]),
            z=parse_float(tokens[8]),
            range=parse_float(tokens[9]),
            scale=parse_float(tokens[10]),
            speed=parse_float(tokens[11]),
            node=strip_quotes(tokens[12]) if len(tokens) > 12 else ""
        )
    
    elif entry_type == "FLOBJ":

        # IT SEEMS LIGHTTIME IS MULTIPLIED BY 30
        # IN MP4306 LIGHTITME = 30 BUT ITS 900 IN .ARB
        return FLOBJ(
            size=16,
            id=strip_quotes(tokens[1]),
            mode=int(tokens[2]),
            lighttime=parse_float(tokens[3]) * 30,
            range=parse_float(tokens[4]),
            chargepow=parse_float(tokens[5]),
            x=parse_float(tokens[6]),
            y=parse_float(tokens[7]),
            z=parse_float(tokens[8]),
            rot=parse_float(tokens[9]),
            info_flag=tokens[10],
            motion_define=strip_quotes(tokens[11]),
            event_script1=strip_quotes(tokens[12]),
            event_script2=strip_quotes(tokens[13]),
            foglightID=strip_quotes(tokens[14]) if len(tokens) > 14 else "",
            chrlightID=strip_quotes(tokens[15]) if len(tokens) > 15 else "",
            maplightID=strip_quotes(tokens[16]) if len(tokens) > 16 else ""
        )

    elif entry_type == "EVENEMY":
        return EVENEMY(
            size=15,
            id=strip_quotes(tokens[1]),
            name=strip_quotes(tokens[2]),
            mode=int(tokens[3]),
            a=parse_float(tokens[4]),
            b=parse_float(tokens[5]),
            c=parse_float(tokens[6]),
            d=parse_float(tokens[7]),
            e=parse_float(tokens[8]),
            f=parse_float(tokens[9]),
            g=parse_float(tokens[10]),
            enemy_id=strip_quotes(tokens[11]),
            x=parse_float(tokens[12]),
            y=parse_float(tokens[13]),
            z=parse_float(tokens[14]),
            animename=strip_quotes(tokens[15]) if len(tokens) > 15 else ""
        )
    
    elif entry_type == "DOOR":
        return DOOR(
            size=13,
            id=strip_quotes(tokens[1]),
            doortype=int(tokens[2]),
            keyitem=int(tokens[3]),
            flag=int(tokens[4]),
            state=int(tokens[5]),
            se=int(tokens[6]),
            x=parse_float(tokens[7]),
            z=parse_float(tokens[8]),   # Note: z comes before y!
            y=parse_float(tokens[9]),
            rot=parse_float(tokens[10]),
            info_flag=tokens[11],
            motion_define=strip_quotes(tokens[12]),
            event_script=strip_quotes(tokens[13]) if len(tokens) > 13 else ""
        )
    
    elif entry_type == "MARK":

        id_token = tokens[2]

        try:
            indexed_id_value = int(id_token)
        except ValueError:
            # It's a string like "CP_MP1201_01" - look it up
            indexed_id_value = SCR_INC_ENUM_TABLE.get(id_token, -1)
        return MARK(
            size = 7,
            settype = strip_quotes(tokens[1]),
            indexed_settype = SCR_INC_ENUM_TABLE.get(tokens[1], 0),
            id = indexed_id_value,
            x = parse_float(tokens[3]),
            y = parse_float(tokens[4]),
            z = parse_float(tokens[5]),
            range = parse_float(tokens[6]),
            param1 = int(tokens[7]) if len(tokens) > 7 else 0,
        )

    else:
        print(f"Warning: Unknown entry type '{entry_type}' at line {line_num}")
        return None


def parse_line_tokens(line: str) -> List[str]:
    """
    Parse a line into tokens, handling quoted strings and comma separators.
    """
    tokens = []
    current_token = ""
    in_quotes = False
    quote_char = None
    
    i = 0
    while i < len(line):
        char = line[i]
        
        # Handle quotes
        if char in ['"', "'"] and (i == 0 or line[i-1] != '\\'):
            if in_quotes and quote_char == char:
                # End quoted string
                tokens.append(current_token)
                current_token = ""
                in_quotes = False
                quote_char = None
            elif not in_quotes:
                # Start quoted string
                in_quotes = True
                quote_char = char
            else:
                current_token += char
        
        # Handle delimiters (space, tab, comma) when not in quotes
        elif (char.isspace() or char == ',') and not in_quotes:
            if current_token:
                tokens.append(current_token)
                current_token = ""
            # Skip multiple delimiters
            while i + 1 < len(line) and (line[i+1].isspace() or line[i+1] == ','):
                i += 1
        
        # Normal character
        else:
            current_token += char
        
        i += 1
    
    if current_token:
        tokens.append(current_token)
    
    return tokens


def strip_quotes(s: str) -> str:
    """Remove surrounding quotes from a string if present."""
    s = s.strip()
    if len(s) >= 2 and ((s[0] == '"' and s[-1] == '"') or (s[0] == "'" and s[-1] == "'")):
        return s[1:-1]
    return s


def parse_float(s: str) -> float:
    """Parse a float string, handling 'f' suffix."""
    s = s.strip().rstrip('fF')
    return float(s)


def parse_flag(s: str) -> int:
    """Parse a flag value like '(1)' into an integer."""
    s = s.strip().strip('()')
    return int(s)

def parse_obj_flag(flag_token: str, *enum_tables: Dict[str, int]) -> int:
    """
    Parse an OBJ flag value, which can be either:
    - A simple integer in parentheses: (1), (-1)
    - An enum reference: (COOPEVID_MP1111)
    """
    for table in enum_tables:
        if flag_token in table:
            return table[flag_token]

    flag_token = flag_token.strip()
    
    # Remove parentheses
    if flag_token.startswith('(') and flag_token.endswith(')'):
        inner = flag_token[1:-1].strip()
        
        # Check if it's an enum reference (starts with letters, not a number)
        if inner and not inner.lstrip('-').isdigit():
            # Look up in enum table
            for enum_table in enum_tables:
                if inner in enum_table:
                    return enum_table[inner]
            else:
                print(f"Warning: Unknown enum '{inner}' in flag")
                return -1  # Default fallback
        else:
            # Parse as integer
            return int(inner)
    else:
        # No parentheses? Try parsing directly (shouldn't happen)
        try:
            return int(flag_token)
        except ValueError:
            print(f"Warning: Could not parse flag '{flag_token}'")
            return -1


def print_arrangement_summary(arrangements: Arrangements) -> None:
    """Print a summary of the parsed arrangements."""
    print("\n" + "="*60)
    print("ARRANGEMENT SECTION SUMMARY")
    print("="*60)
    
    # Group by type for summary
    by_type = defaultdict(list)
    for entry in arrangements.arrangements:
        by_type[type(entry).__name__].append(entry)
    
    total_entries = len(arrangements.arrangements)
    
    for type_name in sorted(by_type.keys()):
        entries = by_type[type_name]
        count = len(entries)
        print(f"\n▶ {type_name} ({count} entries)")
        print("-" * 40)
        
        # Show first few entries as examples
        for i, entry in enumerate(entries[:3], 1):
            # Get a brief representation
            if hasattr(entry, 'id') and entry.id:
                display = f"{i}. {type_name}: id={entry.id}"
            elif hasattr(entry, 'node') and entry.node:
                display = f"{i}. {type_name}: node={entry.node}"
            else:
                display = f"{i}. {type_name}"
            print(f"  {display}")
        
        if count > 3:
            print(f"  ... and {count - 3} more")
    
    print("\n" + "="*60)
    print(f"TOTAL: {total_entries} entries across {len(by_type)} types")
    print("="*60)


def write_arrangements_to_file(arrangements: Arrangements, filename: str) -> None:
    """
    Write all arrangement entries to a text file in a readable format,
    preserving the original order they appeared in the file.
    
    Args:
        arrangements: Arrangements object containing all parsed entries
        filename: Output file path
    """
    with open(filename, 'w', encoding='utf-8') as f:
        f.write("="*80 + "\n")
        f.write("ARRANGEMENT ENTRIES (in original order)\n")
        f.write("="*80 + "\n\n")
        
        # Write entries in the exact order they were parsed (which matches file order)
        for idx, entry in enumerate(arrangements.arrangements, 1):
            type_name = type(entry).__name__
            f.write(f"\n[{idx}] {type_name}\n")
            f.write("-" * 40 + "\n")
            
            # Write all fields of the dataclass
            for field_name, field_value in entry.__dict__.items():
                if field_name.startswith('_'):  # Skip private fields
                    continue
                    
                # Format the value nicely
                if isinstance(field_value, float):
                    # Format floats consistently
                    if field_value.is_integer():
                        value_str = f"{int(field_value)}.0f"
                    else:
                        # Round to 2 decimal places for readability
                        value_str = f"{field_value:.2f}f".rstrip('0').rstrip('.') + 'f'
                        if value_str == '.f':
                            value_str = "0.0f"
                elif isinstance(field_value, str):
                    if field_value == "":
                        value_str = '""'
                    else:
                        # Check if string contains non-ASCII (Japanese)
                        if any(ord(c) > 127 for c in field_value):
                            value_str = f'"{field_value}" (Shift-JIS)'
                        else:
                            value_str = f'"{field_value}"'
                else:
                    value_str = str(field_value)
                
                f.write(f"    {field_name}: {value_str}\n")
            
            f.write("\n" + "-" * 40 + "\n")
        
        # Add summary at the end
        f.write("\n" + "="*80 + "\n")
        f.write(f"TOTAL: {len(arrangements.arrangements)} entries\n")
        f.write("="*80 + "\n")


if __name__ == "__main__":
    pass