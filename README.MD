# Pikmin 2
Pikmin 2 decompilation to C++/C

```diff
- INFORMATION! -

The ROM this repository builds can be shifted. You are able to add
and remove code as you see fit, for modding or research purposes.
```

It builds the following DOL:
pikmin2.usa.dol: `sha1: 90d328bf8f190c90472e8c19e7e53c6ad0fe0d1a`

## Building

### Required Tools
* [devkitPro](https://devkitpro.org/wiki/Getting_Started)
* gcc
* python 

### Instructions

* WINDOWS ONLY STEP:
	- Launch msys2 (provided by devkitPro) and run the following commands: 
	
	```
	pacman -S msys2-keyring
	pacman -S gcc git python
	```

1. Clone the repo using `git clone https://github.com/projectPiki/pikmin2/`

2. Download [GC_WII_COMPILERS.zip](https://cdn.discordapp.com/attachments/727918646525165659/917185027656286218/GC_WII_COMPILERS.zip) and extract the contents of the GC folder to `tools/mwcc_compiler/` - you'll have to make this folder yourself. For example, your directory structure should look like `pikmin2/tools/mwcc_compiler/2.6/` (along with the other versions).

3. Run `make -j` in a command prompt or terminal.
	- -j Allows `make` to use multiple threads, speeding up the process.
	- If just `-j` gives errors on your setup, try specifying a set number of threads, e.g. `make -j 4`.

* OPTIONAL STEPS:
	- Obtain a clean DOL of Pikmin 2 USA 1.0 and place it in the base working directory and rename it to `baserom.dol`.
	- To generate a linker map (takes a considerable amount of time), run `make MAPGENFLAG=1 -j`.
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
	1. Place `objdiff.exe` in the main directory of the `pikmin2` repo, i.e. `pikmin2/objdiff.exe`.
	2. Set:
		- Build config: `None`.
		- Select project dir: `/path/to/cloned/pikmin2`
		- Select target build dir: `/path/to/cloned/pikmin2/build/pikmin2.usa/asm`
		- Select base build dir: `/path/to/cloned/pikmin2/build/pikmin2.usa/src`
			- NB: you may have to specify a custom make path if the desired `make` version is not the default. On Windows, this is likely:
			`/path/to/devkitPro/msys2/usr/bin/make.exe`
	3. Select desired object file to diff (likely from `pikmin2/build/pikmin2.usa/asm/LIBRARY/OBJECTFILE.o`).
	4. Decomp it!

### Generating Context for decomp.me Scratches
(NB: The generator requires **Python 3** to run)

- [decomp.me](https://decomp.me/) is an online decompilation sharing hub, allowing 'scratches' of functions to be generated and collaborated on.
- Stand-alone decompilation packages and tools such as decomp.me require information on the functions and structures of the project in order to parse extracted blocks correctly. The easiest way to do this is to pass the tool just the necessary 'context' for the file, i.e. a set of all the headers used by the file that's being worked on.
- A recursive context processing script is included in the repo (<a href="https://github.com/projectPiki/pikmin2/tree/main/tools/decompctx.py">tools/decompctx.py</a>), which generates a `ctx.c` file in the root directory.
	- The contents of this can then be copied and pasted into the 'Context' section of a decomp.me scratch or similar.
- To use, call the generator via the terminal/command line from the root directory (replacing DIRECTORY and FILE as required):
    ```python3 tools/decompctx.py src/DIRECTORY/FILE.cpp```
- Credit to encounter and the [Metroid Prime decomp project](https://github.com/PrimeDecomp/prime) for the script!
