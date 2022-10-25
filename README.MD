# Pikmin 2
Pikmin 2 decompilation to C++/C

```diff
- INFORMATION! -

The ROM this repository builds can be shifted. You are able to add
and remove code as you see fit, for modding or research purposes.
```

It builds the following DOL:
pikmin2.usa.dol: `sha1: 90d328bf8f190c90472e8c19e7e53c6ad0fe0d1a`

## Credits
- intns
- EpochFlame
- SodiumChlorideLogic
- GibHaltmannKill
- kiwi
- shibboleet
- wowjinxy
- nerduminer
- JHawk
- Minty-Meeo
- Revo
- ShadowLugia
- HeartPiece
- DroughtEnder

## Building

### Required Tools
* [devkitPro](https://devkitpro.org/wiki/Getting_Started)
* gcc

### Instructions

* WINDOWS ONLY STEP:
	- Launch msys2(Provided by devkitPro) and run the command `pacman -S gcc`.
	
1. Download GC_WII_COMPILERS.zip from (https://cdn.discordapp.com/attachments/727918646525165659/917185027656286218/GC_WII_COMPILERS.zip) and extract the GC folder to tools/mwcc_compiler/. 
	- This folder should be made by the user.
2. Run `make -j` in a command prompt or terminal.
	- -j Allows `make` to use multiple threads, speeding up the process.

* OPTIONAL:
	- Obtain a clean DOL of Pikmin 2 USA 1.0 and place it in the base working directory and rename it to `baserom.dol`.
	- To generate a linker map (takes a considerable amount of time), run `make MAPGENFLAG=1 -j`
	
### Generating Context for decomp.me Scratches
(NB: The generator requires **Python 3** to run)

- Stand-alone decompilation packages and tools require information on the functions and structures of the project in order to parse extracted blocks correctly. The easiest way to do this is to pass the tool just the necessary 'context' for the file, i.e. a set of all the headers used by the file that's being worked on.
- A recursive context processing script is included in the repo (<a href="https://github.com/projectPiki/pikmin2/tree/main/tools/decompctx.py">tools/decompctx.py</a>), which generates a `ctx.c` file in the root directory.
	- The contents of this can then be copied and pasted into the 'Context' section of a decomp.me scratch or similar.
- To use, call the generator via the terminal/command line from the root directory (replacing DIRECTORY and FILE as required):
    ```python3 tools/decompctx.py src/DIRECTORY/FILE.cpp```
- Credit to encounter and the [Metroid Prime decomp project](https://github.com/PrimeDecomp/prime) for the script!
