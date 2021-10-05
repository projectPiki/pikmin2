# Pikmin 2
Pikmin 2 disassembly/decompilation to C++/C

## Modifying the CW compiler
More specifically, you need to modify the v2.7 linker as follows:

| Offset | From | To |
| :---: | :---: | :---: |
| 0x36510 | 0x74 | 0x75 |

Change 0x74 to 0x75 (fixes an issue regarding destructor generation)

## Project Organisation
For each namespace that types and functions are contained within, create a folder. E.g. the structure `Game::GameSystem` will go in include/Game/GameSystem.h.

## Progress Check (CPP Files)
Some of this progress may be outdated, or a branch other than main (workshop or workshop-unfinished). In this list we will not include library code (Dolphin, JSystem) and game code only.

### DONE
- sysBootupU/sysBootup.cpp
- sysCommonU/id32.cpp
- sysGCU/appThread.cpp
- sysGCU/controller.cpp
- sysGCU/simpleMessage.cpp
- plugProjectKandoU/TSoundEvent.cpp
- plugProjectHikinoU/PSCreatureMgr.cpp

### WIP
- sysGCU/system.cpp
- plugProjectKandoU/interactBattle.cpp
- plugProjectMorimuraU/eggAnimator.cpp
