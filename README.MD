# Pikmin 2
Pikmin 2 decompilation to C++/C

```diff
- WARNING! -

The ROM this repository builds cannot be 'shifted', primarily due to some hardcoded pointers which have yet
to be dumped. Thus this repository is currently in an experimental and research phase and cannot yet be used
traditionally as a source code base for general changes.
```

It builds the following DOL:
pikmin2.usa.dol: `sha1: 90d328bf8f190c90472e8c19e7e53c6ad0fe0d1a`

## Credits
- Revo
- intns
- EpochFlame
- GibHaltmannKill
- kiwi
- shibboleet
- wowjinxy
- nerduminer
- sodium
- JHawk
- Meeo

## Building

### Required Tools
* [devkitPro](https://devkitpro.org/wiki/Getting_Started)
* gcc

### Instructions

* WINDOWS ONLY STEP:
	- Launch msys2(Provided by devkitPro) and run the command `pacman -S gcc`.
* OPTIONAL:
	- Obtain a clean DOL of Pikmin 2 USA 1.0 and place it in the base working directory and rename it to `baserom.dol`.
	
1. Download GC_WII_COMPILERS.zip from (https://cdn.discordapp.com/attachments/704241951972524063/801641758249320478/GC_WII_COMPILERS.zip) and extract it to tools/mwcc_compiler/.
2. Create a copy of the `2.7` folder in tools/mwcc_compiler/ and name it `2.7e`.
3. Run the `make` command.

## Modifications to the CW compiler
In order for a correct compile to occur, the v2.7 linker executable is modified as follows:

| Offset | From | To |
| :---: | :---: | :---: |
| 0x36510 | 0x74 | 0x75 |

The byte's value is changed from 0x74 to 0x75 at offset 0x36510 (fixes an issue regarding destructor generation)

When compiling the project, this patch is automatically applied, if it fails to patch you can also patch the executable yourself with a hex editor

## Project Organisation
- For each namespace that types and functions are contained within, create a folder. E.g. the structure `Game::GameSystem` will go in include/Game/GameSystem.h.
- The exception is only when adding extra folders becomes useless, for example having to add multiple folders that are empty, you can instead opt for creating a header file with the namespace's definitions inside.
- The project is actively formatted using .clang-format, for a consistent code style.

## Progress
### DONE
- sysGCU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysGCU/appThread.cpp">sysGCU/appThread.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysGCU/controller.cpp">sysGCU/controller.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysGCU/dvdErrorMessage.cpp">sysGCU/dvdErrorMessage.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysGCU/rootMenuSection.cpp">sysGCU/rootMenuSection.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysGCU/simpleMessage.cpp">sysGCU/simpleMessage.cpp</a>
- sysCommonU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/sysTemplates.cpp">sysCommonU/sysTemplates.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/tagparams_jank.cpp">sysCommonU/tagparams_jank.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/tagparams.cpp">sysCommonU/tagparams.cpp</a>
- utilityU
- plugProjectKonoU
- plugProjectOgawaU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectOgawaU/ogAngleMgr.cpp">plugProjectOgawaU/ogAngleMgr.cpp</a>
- plugProjectKandoU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectKandoU/gameSoundEvent.cpp">plugProjectKandoU/gameSoundEvent.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectKandoU/pelletConfig.cpp">plugProjectKandoU/pelletConfig.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectKandoU/vsCoinOtakaraName.cpp">plugProjectKandoU/vsCoinOtakaraName.cpp</a>
- plugProjectHikinoU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectHikinoU/PSCreatureMgr.cpp">plugProjectHikinoU/PSCreatureMgr.cpp</a>
- plugProjectEbisawaU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectEbisawaU/ebiScreenFramework.cpp">plugProjectEbisawaU/ebiScreenFramework.cpp</a>
- plugProjectMorimuraU
- plugProjectNishimuraU
- plugProjectYamashitaU
- JSystem
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/JSystem/JAD/JADHioNode.cpp">JSystem/JAD/JADHioNode.cpp</a>
### WIP
- sysBootupU
- sysGCU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysGCU/THPDraw.c">sysGCU/THPDraw.c</a>
- sysCommonU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/id32.cpp">sysCommonU/id32.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/node.cpp">sysCommonU/node.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/parameters.cpp">sysCommonU/parameters.cpp</a>
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/sysCommonU/sysMath.cpp">sysCommonU/sysMath.cpp</a>
- utilityU
- plugProjectKonoU
- plugProjectOgawaU
- plugProjectKandoU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectKandoU/interactBattle.cpp">plugProjectKandoU/interactBattle.cpp</a>
- plugProjectHikinoU
- plugProjectEbisawaU
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/plugProjectEbisawaU/ebiP2TitleCamera.cpp">plugProjectEbisawaU/ebiP2TitleCamera.cpp</a>
- plugProjectMorimuraU
- plugProjectNishimuraU
- plugProjectYamashitaU
- JSystem
	- <a href="https://github.com/doldecomp/pikmin2/tree/main/src/JSystem/JAL/JALCalc.cpp">JSystem/JAL/JALCalc.cpp</a>
