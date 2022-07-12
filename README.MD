# Pikmin 2
Pikmin 2 decompilation to C++/C

```diff
- INFORMATION! -

The ROM this repository builds can be shifted! Meaning you are able to now
add and remove code as you see fit, for modding or research purposes.
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
	- -j Allows make to use multiple threads, speeding up the process.

* OPTIONAL:
	- Obtain a clean DOL of Pikmin 2 USA 1.0 and place it in the base working directory and rename it to `baserom.dol`.
	- To generate a linker map (takes a considerable amount of time), run `make MAPGENFLAG=1 -j`

## Project Organisation
- For each namespace that types and functions are contained within, create a folder. E.g. the structure `Game::GameSystem` will go in include/Game/GameSystem.h.
- The exception is only when adding extra folders becomes useless, for example having to add multiple folders that are empty, you can instead opt for creating a header file with the namespace's definitions inside.
- The project is actively formatted using .clang-format, for a consistent code style.

## Progress
### DONE
- sysGCU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/appThread.cpp">sysGCU/appThread.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/controller.cpp">sysGCU/controller.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/dvdErrorMessage.cpp">sysGCU/dvdErrorMessage.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/fogMgr.cpp">sysGCU/fogMgr.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/message.cpp">sysGCU/message.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/messageReference.cpp">sysGCU/messageReference.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/modelMgr.cpp">sysGCU/modelMgr.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/rootMenuSection.cpp">sysGCU/rootMenuSection.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/simpleMessage.cpp">sysGCU/simpleMessage.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysGCU/THPDraw.c">sysGCU/THPDraw.c</a>
- sysCommonU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/mapCollision.cpp">sysCommonU/mapCollision.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/node.cpp">sysCommonU/node.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/parameters.cpp">sysCommonU/parameters.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/sysTemplates.cpp">sysCommonU/sysTemplates.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/tagparams.cpp">sysCommonU/tagparams.cpp</a>
- utilityU
- plugProjectKonoU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKonoU/khMailSaveData.cpp">plugProjectKonoU/khMailSaveData.cpp</a>
- plugProjectOgawaU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogAngleMgr.cpp">plugProjectOgawaU/ogAngleMgr.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogCounter.cpp">plugProjectOgawaU/ogCounter.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogLib2D.cpp">plugProjectOgawaU/ogLib2D.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogSceneChallengeBase.cpp">plugProjectOgawaU/ogSceneChallengeBase.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogSceneSMenuPauseVs.cpp">plugProjectOgawaU/ogSceneSMenuPauseVs.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogSceneWorldMapInfoWindow0.cpp">plugProjectOgawaU/ogSceneWorldMapInfoWindow0.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogUtil.cpp">plugProjectOgawaU/ogUtil.cpp</a>
- plugProjectKandoU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/aiConstants.cpp">plugProjectKandoU/aiConstants.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/baseHIOparms.cpp">plugProjectKandoU/baseHIOparms.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/gameChallenge2D.cpp">plugProjectKandoU/gameChallenge2D.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/gameHighscore.cpp">plugProjectKandoU/gameHighscore.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/gameIconTexture.cpp">plugProjectKandoU/gameIconTexture.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/gameSoundEvent.cpp">plugProjectKandoU/gameSoundEvent.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/interactBattle.cpp">plugProjectKandoU/interactBattle.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/kandoLib.cpp">plugProjectKandoU/kandoLib.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/objectTypes.cpp">plugProjectKandoU/objectTypes.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/pelletCarry.cpp">plugProjectKandoU/pelletCarry.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/pelletConfig.cpp">plugProjectKandoU/pelletConfig.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/pikiAnimator.cpp">plugProjectKandoU/pikiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/pikiContainer.cpp">plugProjectKandoU/pikiContainer.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/sweepPrune.cpp">plugProjectKandoU/sweepPrune.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/vsCoinOtakaraName.cpp">plugProjectKandoU/vsCoinOtakaraName.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/vsFifo.cpp">plugProjectKandoU/vsFifo.cpp</a>
- plugProjectHikinoU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectHikinoU/PSCreatureMgr.cpp">plugProjectHikinoU/PSCreatureMgr.cpp</a>
- plugProjectEbisawaU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectEbisawaU/ebi3DGraph.cpp">plugProjectEbisawaU/ebi3DGraph.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectEbisawaU/ebiP2TitleCamera.cpp">plugProjectEbisawaU/ebiP2TitleCamera.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectEbisawaU/ebiScreenFramework.cpp">plugProjectEbisawaU/ebiScreenFramework.cpp</a>
- plugProjectMorimuraU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/blackManAnimator.cpp">plugProjectMorimuraU/blackManAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/bombAnimator.cpp">plugProjectMorimuraU/bombAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/eggAnimator.cpp">plugProjectMorimuraU/eggAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/jigumoAnimator.cpp">plugProjectMorimuraU/jigumoAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/miulinAnimator.cpp">plugProjectMorimuraU/miulinAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/panModokiAnimator.cpp">plugProjectMorimuraU/panModokiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/plantsAnimator.cpp">plugProjectMorimuraU/plantsAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/shijimiChouAnimator.cpp">plugProjectMorimuraU/shijimiChouAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/tamagoMushiAnimator.cpp">plugProjectMorimuraU/tamagoMushiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/testBase.cpp">plugProjectMorimuraU/testBase.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/tyreAnimator.cpp">plugProjectMorimuraU/tyreAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectMorimuraU/umiMushiAnimator.cpp">plugProjectMorimuraU/umiMushiAnimator.cpp</a>
- plugProjectNishimuraU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/ArmorAnimator.cpp">plugProjectNishimuraU/ArmorAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/BabyAnimator.cpp">plugProjectNishimuraU/BabyAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/BigFootAnimator.cpp">plugProjectNishimuraU/BigFootAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/BombSaraiAnimator.cpp">plugProjectNishimuraU/BombSaraiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/DamagumoAnimator.cpp">plugProjectNishimuraU/DamagumoAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/DoorNode.cpp">plugProjectNishimuraU/DoorNode.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/ElecBugAnimator.cpp">plugProjectNishimuraU/ElecBugAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/ElecHibaAnimator.cpp">plugProjectNishimuraU/ElecHibaAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/FrogAnimator.cpp">plugProjectNishimuraU/FrogAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/FuefukiAnimator.cpp">plugProjectNishimuraU/FuefukiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/GasHibaAnimator.cpp">plugProjectNishimuraU/GasHibaAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/GateUnit.cpp">plugProjectNishimuraU/GateUnit.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/HanachirashiAnimator.cpp">plugProjectNishimuraU/HanachirashiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/HibaAnimator.cpp">plugProjectNishimuraU/HibaAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/HoudaiAnimator.cpp">plugProjectNishimuraU/HoudaiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/ImomushiAnimator.cpp">plugProjectNishimuraU/ImomushiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/ItemUnit.cpp">plugProjectNishimuraU/ItemUnit.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/KabutoAnimator.cpp">plugProjectNishimuraU/KabutoAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/KoganeAnimator.cpp">plugProjectNishimuraU/KoganeAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/KumaChappyAnimator.cpp">plugProjectNishimuraU/KumaChappyAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/KumaKochappyAnimator.cpp">plugProjectNishimuraU/KumaKochappyAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/KurageAnimator.cpp">plugProjectNishimuraU/KurageAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/MapCreator.cpp">plugProjectNishimuraU/MapCreator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/MarAnimator.cpp">plugProjectNishimuraU/MarAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/MiniHoudaiAnimator.cpp">plugProjectNishimuraU/MiniHoudaiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/ObjectLayout.cpp">plugProjectNishimuraU/ObjectLayout.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/OniKurageAnimator.cpp">plugProjectNishimuraU/OniKurageAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/OtakaraBaseAnimator.cpp">plugProjectNishimuraU/OtakaraBaseAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/PomAnimator.cpp">plugProjectNishimuraU/PomAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/QueenAnimator.cpp">plugProjectNishimuraU/QueenAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/QurioneAnimator.cpp">plugProjectNishimuraU/QurioneAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/RandMapChecker.cpp">plugProjectNishimuraU/RandMapChecker.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/RandMapDraw.cpp">plugProjectNishimuraU/RandMapDraw.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/RandPlantUnit.cpp">plugProjectNishimuraU/RandPlantUnit.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/RockAnimator.cpp">plugProjectNishimuraU/RockAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/RumbleData.cpp">plugProjectNishimuraU/RumbleData.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/SaraiAnimator.cpp">plugProjectNishimuraU/SaraiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/SnakeCrowAnimator.cpp">plugProjectNishimuraU/SnakeCrowAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/SnakeWholeAnimator.cpp">plugProjectNishimuraU/SnakeWholeAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/SokkuriAnimator.cpp">plugProjectNishimuraU/SokkuriAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/TadpoleAnimator.cpp">plugProjectNishimuraU/TadpoleAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/TankAnimator.cpp">plugProjectNishimuraU/TankAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/TobiAnimator.cpp">plugProjectNishimuraU/TobiAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/UjiaAnimator.cpp">plugProjectNishimuraU/UjiaAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectNishimuraU/UjibAnimator.cpp">plugProjectNishimuraU/UjibAnimator.cpp</a>
- plugProjectYamashitaU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/chappyAnimator.cpp">plugProjectYamashitaU/chappyAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/enemyAnimatorBase.cpp">plugProjectYamashitaU/enemyAnimatorBase.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/enemyInfo.cpp">plugProjectYamashitaU/enemyInfo.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/enemyInteractActions.cpp">plugProjectYamashitaU/enemyInteractActions.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/enemyParmsBase.cpp">plugProjectYamashitaU/enemyParmsBase.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/enemyPelletInfo.cpp">plugProjectYamashitaU/enemyPelletInfo.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/enemyStoenInfo.cpp">plugProjectYamashitaU/enemyStoenInfo.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/kochappyAnimator.cpp">plugProjectYamashitaU/kochappyAnimator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/pelplantGenerator.cpp">plugProjectYamashitaU/pelplantGenerator.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/treasureLightMgr.cpp">plugProjectYamashitaU/treasureLightMgr.cpp</a>
- JSystem
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/data.cpp">JSystem/data.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/J3D/J3DBinaryFormat.cpp">JSystem/J3D/J3DBinaryFormat.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/J3D/J3DModelSaver.cpp">JSystem/J3D/J3DModelSaver.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/J3D/J3DShapeDraw.cpp">JSystem/J3D/J3DShapeDraw.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/J3D/J3DUDL.cpp">JSystem/J3D/J3DUDL.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/J3D/J3DUShadow.cpp">JSystem/J3D/J3DUShadow.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JAD/JADHioNode.cpp">JSystem/JAD/JADHioNode.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JAS/JASBank.cpp">JSystem/JAS/JASBank.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JAS/JASInstEffect.cpp">JSystem/JAS/JASInstEffect.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JAS/JASWaveBank.cpp">JSystem/JAS/JASWaveBank.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JKR/JKRAramStream.cpp">JSystem/JKR/JKRAramStream.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JKR/JKRDisposer.cpp">JSystem/JKR/JKRDisposer.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JKR/JKRFile.cpp">JSystem/JKR/JKRFile.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JMath/random.cpp">JSystem/JMath/random.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JPA/JPAKeyBlock.cpp">JSystem/JPA/JPAKeyBlock.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JPA/JPATexture.cpp">JSystem/JPA/JPATexture.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSG/JSGActor.cpp">JSystem/JSG/JSGActor.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSG/JSGCamera.cpp">JSystem/JSG/JSGCamera.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSG/JSGObject.cpp">JSystem/JSG/JSGObject.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSG/JSGSystem.cpp">JSystem/JSG/JSGSystem.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JStudio/data/jstudio-data.cpp">JSystem/JStudio/data/jstudio-data.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JStudio/fvb/data/fvb-data-parse.cpp">JSystem/JStudio/fvb/data/fvb-data-parse.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JStudio/fvb/data/fvb-data.cpp">JSystem/JStudio/fvb/data/fvb-data.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JStudio/stb/data/stb-data-parse.cpp">JSystem/JStudio/stb/data/stb-data-parse.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JStudio/stb/data/stb-data.cpp">JSystem/JStudio/stb/data/stb-data.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSupport/JSUFileStream.cpp">JSystem/JSupport/JSUFileStream.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSupport/JSUInputStream.cpp">JSystem/JSupport/JSUInputStream.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSupport/JSUList.cpp">JSystem/JSupport/JSUList.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSupport/JSUMemoryStream.cpp">JSystem/JSupport/JSUMemoryStream.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JSupport/JSUOutputStream.cpp">JSystem/JSupport/JSUOutputStream.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JUT/JUTFont.cpp">JSystem/JUT/JUTFont.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JUT/JUTFontData_Ascfont_fix12.cpp">JSystem/JUT/JUTFontData_Ascfont_fix12.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JUT/JUTNameTab.cpp">JSystem/JUT/JUTNameTab.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JUT/JUTResFont.cpp">JSystem/JUT/JUTResFont.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JUT/JUTRomFont.cpp">JSystem/JUT/JUTRomFont.cpp</a>
### WIP
- sysBootupU
- sysGCU
- sysCommonU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/id32.cpp" >sysCommonU/id32.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/sysCommonU/sysMath.cpp" >sysCommonU/sysMath.cpp</a>
- utilityU
- plugProjectKonoU
- plugProjectOgawaU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/DispMemberBase.cpp" >plugProjectOgawaU/DispMemberBase.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectOgawaU/ogObjAnaDemo.cpp" >plugProjectOgawaU/ogObjAnaDemo.cpp</a>
- plugProjectKandoU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/gamePlatMgr.cpp" >plugProjectKandoU/gamePlatMgr.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/routeMgr.cpp" >plugProjectKandoU/routeMgr.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectKandoU/updateMgr.cpp" >plugProjectKandoU/updateMgr.cpp</a>
- plugProjectHikinoU
- plugProjectEbisawaU
- plugProjectMorimuraU
- plugProjectNishimuraU
- plugProjectYamashitaU
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/plugProjectYamashitaU/carryInfoMgr.cpp" >plugProjectYamashitaU/carryInfoMgr.cpp</a>
- JSystem
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/J2D/J2DManage.cpp" >JSystem/J2D/J2DManage.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JAI/JAIConst.cpp" >JSystem/JAI/JAIConst.cpp</a>
	- <a href="https://github.com/projectPiki/pikmin2/tree/main/src/JSystem/JAL/JALCalc.cpp" >JSystem/JAL/JALCalc.cpp</a>
