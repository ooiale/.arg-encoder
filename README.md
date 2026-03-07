[COMMANDS]
python -m arb_builder.tests.manual_test
python -m arb_builder.tests.builder_test
Get-ChildItem -Path ./arb_builder/region1/ -Recurse | Select-String "1A4008" 

These two maps seems to have some different way of generating the .arb data... my guess is that they have some default value for their [MAP]

mp130x.arg
mp430x.arg
mp9999.arg - test map so I won't bother (some default field between 19401c and 164018)
mp_9999.arg - test map so I won't bother (some default field between 19401c and 164018)


[mp4301.arg&mp4301c.arg] - MAPLIGHT	"clystal"		""		-134.11f	-88.51f		34.34f	0			1		1.2f	0.0f		120.0f	0.0f		1.2f	0.15f	0.25f	1.0f	0.0f
MAPLIGHT	"clystal"		""		-143.24f	-139.16f	22.36f	0			1		0.8f	0.0f		120.0f	0.0f		1.0f	0.05f	0.15f	1.0f	0.0f
These two lines end with 0.0f but in .arb is 1.0f so also another case of patching before.


# MAYBE THE UNKNOWN GRASS TREMBLE BLOB IS ALSO AN ABSENCE OF A SECTION?
# MAYBE THESE EXCEPTION FILES ARE ALSO AN ABSENCE OF A SECTION PRESENT IN ALL OTHER 380 FILES

[FISH_COLL] has not been used yet.
[FOOTSE] has not been used yet
[SOUND_FX] has not been used yet
[INIT_SCRIPT] will be the last thing in the file

[ARRANGEMENTS]
some files have the chest event script altered from the randomizer. needs to uninstall the rando to properly test against all files

[TODO]
ok all tests are passing except for
mp130x - problems on region before arrangements... not sure what it is but shouldnt be an issue as these arent map specific 
mp430x - problems on region before arrangements... not sure what it is but shouldnt be an issue as these arent map specific 
mp4301c.arg - the .arg file simply has the wrong data... creating a parser and correcting this value is probably the way
mp4301.arg - the .arg file simply has the wrong data... creating a parser and correcting this value is probably the way

** make a safety check to make sure the encoder never touches mp130x.arg, mp430x.arg **

1- I think it would be nice to create a code that receives the path of the map folder from root, and then it will parse the .arg file.
since that file is not used by the .exe i think modifying the user's file will not cause any issues.

2- Create a method that receives the folder with the .arg and a list with the data to modify, then it will write/ re-place this new data and encode this new file without modifying the existing .arg and save this new encoded .arb. since we keep the .arg files unmodified returning the .arb files to their original state is a matter of running that method without changes to the .arg

3- to make encoding easier, I should write a cleaner file that just does the encoding without unnecessary stuff and a file that also parses without unnecessary stuff given a file path.

4- once all is done write a proper documentation.