Pikmin 2 [![Build Status]][actions] ![Code Progress] ![Data Progress]
========

[Build Status]: https://github.com/projectPiki/pikmin2/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/projectPiki/pikmin2/actions/workflows/build.yml
[Code Progress]: https://img.shields.io/endpoint?label=Code&url=https%3A%2F%2Fprogress.deco.mp%2Fdata%2Fpikmin2%2Fusa%2Fdol%2F%3Fmode%3Dshield%26measure%3Dcode
[Data Progress]: https://img.shields.io/endpoint?label=Data&url=https%3A%2F%2Fprogress.deco.mp%2Fdata%2Fpikmin2%2Fusa%2Fdol%2F%3Fmode%3Dshield%26measure%3Ddata

A decompilation of Pikmin 2.

This repository builds the following DOLs:

```
90d328bf8f190c90472e8c19e7e53c6ad0fe0d1a  build/pikmin2.usa/main.dol
3730939092688902af4866be66d4a8404ae752c7  build/pikmin2.usa.demo/main.dol
```

> **Note**
> The ROM this repository builds can be shifted. You are able to add
> and remove code as you see fit, for modding or research purposes.

## Building

### Required Tools
[Python 3.8+](https://www.python.org/downloads/)

### Instructions

1. Clone the repo using `git clone https://github.com/projectPiki/pikmin2/`

2. Run `configure.py` to automatically download/build any other necessary files for the project.

3. Enter `ninja` (recommended) or `make -j` in a command prompt or terminal.
	- `-j` Allows `make` to use multiple threads, speeding up the process.
	- `ninja` already implicitly uses the max amount of cores available, only use `-j` to *decrease* the thread count.
	- If just `-j` gives errors on your setup, try specifying a set number of threads, e.g. `make -j 4`.

* OPTIONAL STEPS:
	- Obtain a clean DOL of Pikmin 2 USA 1.0 and place it in the base working directory and rename it to `baserom.dol`.
	- To generate a linker map (takes a considerable amount of time), run `ninja -m` or  `make MAPGENFLAG=1 -j`.
	- The project uses clang-format for a consistent style. Download the [correct version](https://cdn.discordapp.com/attachments/933849922418126918/1031358615300345856/clang-format.exe) and place in the main repo directory (e.g. `pikmin2/clang-format.exe`).

* See [this video](https://youtu.be/CZXNQagqpkw) for a walkthrough of the steps on Windows (thanks Altafen for making this!).

### Decompilation workflow

- The project is compatible with [objdiff](https://github.com/encounter/objdiff), which is highly recommended for local decompilation testing. Objdiff can be built from source, or the latest stable build obtained from GitHub actions (recommended).

- To obtain the latest stable build:
	1. Navigate to the `Actions` tab of the objdiff repo.
	2. Select the latest `main` workflow.
	3. Scroll to the bottom of the page and download the `stable` release for your platform (Mac, Linux, Windows).
	4. Extract contents of `.zip` to obtain an executable version.

- To set up objdiff for this project:
	1. Run `objdiff.exe`.
	2. Set:
		- Project dir: `/path/to/cloned/pikmin2`.
		- Custom make program: `ninja` or `make`, depending on what was used to build previously.
			- If specifying the name isn't enough, it's likely the program isn't on your `PATH`; try an absolute path instead.
		- (`make` only) Build config: `None`.
		- (`make` only) Select target build dir: `/path/to/cloned/pikmin2/build/pikmin2.usa/asm`.
		- (`make` only) Select base build dir: `/path/to/cloned/pikmin2/build/pikmin2.usa/src`.
	3. Select desired object file to diff:
		- With `ninja`, an explorer viewer is provided after applying the previous settings.
		- With `make`, you must explicitly select the object each time (likely from `pikmin2/build/pikmin2.usa/asm/LIBRARY/OBJECTFILE.o`).
	4. Decomp it!

### Generating Context for decomp.me Scratches

- [decomp.me](https://decomp.me/) is an online decompilation sharing hub, allowing 'scratches' of functions to be generated and collaborated on.
- Stand-alone decompilation packages and tools such as decomp.me require information on the functions and structures of the project in order to parse extracted blocks correctly. The easiest way to do this is to pass the tool just the necessary 'context' for the file, i.e. a set of all the headers used by the file that's being worked on.
- A recursive context processing script is included in the repo ([tools/decompctx.py](https://github.com/projectPiki/pikmin2/tree/main/tools/decompctx.py)), which generates a `ctx.c` file in the root directory.
	- The contents of this can then be copied and pasted into the 'Context' section of a decomp.me scratch or similar.
- To use, call the generator via the terminal/command line from the root directory (replacing DIRECTORY and FILE as required):
	```python tools/decompctx.py src/DIRECTORY/FILE.cpp```
- Credit to encounter and the [Metroid Prime decomp project](https://github.com/PrimeDecomp/prime) for the script!
