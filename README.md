# arb_builder2: arg -> arb encoder


This tool is used to encode data from `.arg` files into the `.arb` binary format. I have made this one specifically with Ys VIII files but maybe it can be used for other Nihon Falcom games


For some arg files the tool does not encode correctly. It appears some files contain sections that are either placeholders for absent sections or sections that are not represented in the `.arg` input in a straightforward way. `.arb` files are **not** a direct, byte-for-byte encoding of `.arg` files: in some files data are missing or are different from the encoded value stored in `.arb`.

Because of that some weird sections like `grass_tremble_unknown_blob` or `null_section` exist in the code. They were just constants across files but I do not know their meaning


### Files this code could not encode exactly like the original

* `mp130x.arg`
* `mp430x.arg`
* `mp9999.arg`
* `mp_9999.arg`
* all other test maps


Two files that have different data from their .arb counterpart are `mp4301.arg` and `mp4301c.arg`. They both contain two `MAPLIGHT` entries like this:

```
MAPLIGHT	"clystal"		""		-134.11f	-88.51f		34.34f	0			1		1.2f	0.0f		120.0f	0.0f		1.2f	0.15f	0.25f	1.0f	0.0f
MAPLIGHT	"clystal"		""		-143.24f	-139.16f	22.36f	0			1		0.8f	0.0f		120.0f	0.0f		1.0f	0.05f	0.15f	1.0f	0.0f
```

In the corresponding `.arb` file that last numeric value (`0.0f`) is set to `1.0f` for both entries. As a workaround I just hardcoded an if statement when parsing the .arg files

## For future reference maybe... i think?

* **maybe the unknown `grass_tremble_unknown_blob` is actually an absence of a section.**
* **maybe these exception files also have some absent sections (in the .arg) that in the .arb end up being some default values.**

## Unused sections

* `[SOUND_FX]` has not been used yet — seems to not be present in .arb?


## [COMMANDS]

To run the encoder locally:

1. Add the path for the `.arg` file you want to encode into `main.py`
2. Run:

```bash
python -m arb_builder2.main
```

### My bad for leaving the code so messy lol

