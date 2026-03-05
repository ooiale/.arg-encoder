[COMMANDS]
python -m arb_builder.tests.manual_test
python -m arb_builder.tests.builder_test
Get-ChildItem -Path ./arb_builder/region1/ -Recurse | Select-String "1A4008" 

These two maps seems to have some different way of generating the .arb data... my guess is that they have some default value for their [MAP]

mp130x.arg
mp430x.arg
mp9999.arg - test map so I won't bother (some default field between 19401c and 164018)
mp_9999.arg - test map so I won't bother (some default field between 19401c and 164018)
[mp6159.arg] - This file references b0161 in the .arg but b0151 is in the .arb - probably need to make a patching method to modify that line in the .arg (.arbs are not a direct compilation of .args)


# MAYBE THE UNKNOWN GRASS TREMBLE BLOB IS ALSO AN ABSENCE OF A SECTION?
# MAYBE THESE EXCEPTION FILES ARE ALSO AN ABSENCE OF A SECTION PRESENT IN ALL OTHER 380 FILES

[FISH_COLL] has not been used yet.
[FOOTSE] has not been used yet
[SOUND_FX] has not been used yet
[INIT_SCRIPT] will be the last thing in the file

[ARRANGEMENTS]
some files have the chest event script altered from the randomizer. needs to uninstall the rando to properly test against all files

