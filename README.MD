# Pikmin 2
Pikmin 2 decompilation to C++/C

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

## Modifying the CW compiler
In order for a correct compile to occur, you need to modify the binary of the v2.7 linker executable as follows:

| Offset | From | To |
| :---: | :---: | :---: |
| 0x36510 | 0x74 | 0x75 |

Change the byte of value 0x74 to 0x75 at offset 0x36510 (fixes an issue regarding destructor generation)

## Project Organisation
For each namespace that types and functions are contained within, create a folder. E.g. the structure `Game::GameSystem` will go in include/Game/GameSystem.h.
The project is actively formatted using .clang-format, for a consistent style.

## Progress
This list is not absolute and may become outdated as the project progresses. In this list we will not include library code (Dolphin, JSystem) and game code only.

### DONE
- sysBootupU/sysBootup.cpp
- sysGCU/appThread.cpp
- sysGCU/controller.cpp
- sysGCU/simpleMessage.cpp
- sysCommonU/id32.cpp
- plugProjectKandoU/gameSoundEvent.cpp
- plugProjectHikinoU/PSCreatureMgr.cpp

### WIP
- sysGCU/THPDraw.c
- sysGCU/system.cpp
- sysGCU/sysTemplates.cpp
- sysGCU/pikmin2MemoryCardMgr.cpp
- sysCommonU/tagparams.cpp
- sysCommonU/node.cpp
- sysCommonU/sysMath.cpp
- plugProjectKandoU/interactBattle.cpp
- plugProjectKandoU/pikiAnimator.cpp
- plugProjectMorimuraU/eggAnimator.cpp
