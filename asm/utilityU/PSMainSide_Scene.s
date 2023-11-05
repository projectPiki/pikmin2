.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_PSMainSide_Scene_cpp
	
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049D908, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049D908
.balign 4
.obj lbl_8049D914, local
	.asciz "PSMainSide_Scene.cpp"
.endobj lbl_8049D914
.balign 4
.obj lbl_8049D92C, local
	.asciz "P2Assert"
.endobj lbl_8049D92C
.balign 4
.obj lbl_8049D938, local
	.asciz "PSCommon.h"
.endobj lbl_8049D938
.balign 4
.obj lbl_8049D944, local
	.asciz "PSGame.h"
.endobj lbl_8049D944
.balign 4
.obj lbl_8049D950, local
	.asciz "PSScene.h"
.endobj lbl_8049D950
.balign 4
.obj lbl_8049D95C, local
	.asciz "PSSystemIF.h"
.endobj lbl_8049D95C
.balign 4
.obj lbl_8049D96C, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_8049D96C
.balign 4
.obj lbl_8049D990, local
	.asciz "PSMainSide_Scene.h"
.endobj lbl_8049D990

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.balign 4
.obj __vt__Q23PSM15Scene_NoObjects, global
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM15Scene_NoObjectsFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q28PSSystem5SceneFv
	.4byte startMainSeq__Q28PSSystem5SceneFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte getCamDistVol__Q23PSM15Scene_NoObjectsFUc
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM9SceneBaseFv
	.4byte getSeSceneGate__Q23PSM9SceneBaseFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
.endobj __vt__Q23PSM15Scene_NoObjects
.obj __vt__Q23PSM14Scene_WorldMap, weak
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM14Scene_WorldMapFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q28PSSystem5SceneFv
	.4byte startMainSeq__Q28PSSystem5SceneFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte getCamDistVol__Q23PSM15Scene_NoObjectsFUc
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM9SceneBaseFv
	.4byte getSeSceneGate__Q23PSM9SceneBaseFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
.endobj __vt__Q23PSM14Scene_WorldMap
.obj __vt__Q23PSM11Scene_Zukan, global
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM11Scene_ZukanFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q23PSM13Scene_ObjectsFv
	.4byte startMainSeq__Q23PSM13Scene_ObjectsFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte getCamDistVol__Q23PSM11Scene_ZukanFUc
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM9SceneBaseFv
	.4byte getSeSceneGate__Q23PSM11Scene_ZukanFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
	.4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
.endobj __vt__Q23PSM11Scene_Zukan
.obj __vt__Q23PSM15Scene_Challenge, global
	.4byte 0
	.4byte 0
	.4byte init__Q23PSM15Scene_ChallengeFv
	.4byte __dt__Q23PSM15Scene_ChallengeFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q23PSM10Scene_CaveFv
	.4byte startMainSeq__Q23PSM15Scene_ChallengeFv
	.4byte stopMainSeq__Q23PSM10Scene_GameFUl
	.4byte stopAllSound__Q23PSM10Scene_GameFUl
	.4byte getCamDistVol__Q23PSM13Scene_ObjectsFUc
	.4byte getEnvSe__Q23PSM10Scene_GameFv
	.4byte getSceneFx__Q23PSM10Scene_CaveFv
	.4byte isDemoScene__Q23PSM10Scene_GameFv
	.4byte getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM10Scene_GameFv
	.4byte pauseOn_2D__Q23PSM10Scene_GameFUcUc
	.4byte pauseOff_2D__Q23PSM10Scene_GameFv
	.4byte pauseOn_Demo__Q23PSM10Scene_GameFv
	.4byte pauseOff_Demo__Q23PSM10Scene_GameFv
	.4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
	.4byte isCave__Q23PSM10Scene_CaveFv
	.4byte bossAppear__Q23PSM10Scene_CaveFPQ23PSM9EnemyBossUs
	.4byte bossKilled__Q23PSM10Scene_CaveFPQ23PSM9EnemyBoss
	.4byte isBossFloor__Q23PSM10Scene_CaveFv
	.4byte akubiOK__Q23PSM15Scene_ChallengeFv
	.4byte isPollutUp__Q23PSM10Scene_CaveFv
	.4byte getPollutUpTimer__Q23PSM10Scene_CaveCFv
.endobj __vt__Q23PSM15Scene_Challenge
.obj __vt__Q23PSM10Scene_Cave, global
	.4byte 0
	.4byte 0
	.4byte init__Q23PSM10Scene_CaveFv
	.4byte __dt__Q23PSM10Scene_CaveFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q23PSM10Scene_CaveFv
	.4byte startMainSeq__Q23PSM10Scene_CaveFv
	.4byte stopMainSeq__Q23PSM10Scene_GameFUl
	.4byte stopAllSound__Q23PSM10Scene_GameFUl
	.4byte getCamDistVol__Q23PSM13Scene_ObjectsFUc
	.4byte getEnvSe__Q23PSM10Scene_GameFv
	.4byte getSceneFx__Q23PSM10Scene_CaveFv
	.4byte isDemoScene__Q23PSM10Scene_GameFv
	.4byte getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM10Scene_GameFv
	.4byte pauseOn_2D__Q23PSM10Scene_GameFUcUc
	.4byte pauseOff_2D__Q23PSM10Scene_GameFv
	.4byte pauseOn_Demo__Q23PSM10Scene_GameFv
	.4byte pauseOff_Demo__Q23PSM10Scene_GameFv
	.4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
	.4byte isCave__Q23PSM10Scene_CaveFv
	.4byte bossAppear__Q23PSM10Scene_CaveFPQ23PSM9EnemyBossUs
	.4byte bossKilled__Q23PSM10Scene_CaveFPQ23PSM9EnemyBoss
	.4byte isBossFloor__Q23PSM10Scene_CaveFv
	.4byte akubiOK__Q23PSM10Scene_CaveFv
	.4byte isPollutUp__Q23PSM10Scene_CaveFv
	.4byte getPollutUpTimer__Q23PSM10Scene_CaveCFv
.endobj __vt__Q23PSM10Scene_Cave
.obj __vt__Q23PSM12Scene_Ground, global
	.4byte 0
	.4byte 0
	.4byte init__Q23PSM10Scene_GameFv
	.4byte __dt__Q23PSM12Scene_GroundFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q23PSM12Scene_GroundFv
	.4byte startMainSeq__Q23PSM10Scene_GameFv
	.4byte stopMainSeq__Q23PSM10Scene_GameFUl
	.4byte stopAllSound__Q23PSM10Scene_GameFUl
	.4byte getCamDistVol__Q23PSM13Scene_ObjectsFUc
	.4byte getEnvSe__Q23PSM10Scene_GameFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM10Scene_GameFv
	.4byte getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM10Scene_GameFv
	.4byte pauseOn_2D__Q23PSM10Scene_GameFUcUc
	.4byte pauseOff_2D__Q23PSM10Scene_GameFv
	.4byte pauseOn_Demo__Q23PSM10Scene_GameFv
	.4byte pauseOff_Demo__Q23PSM10Scene_GameFv
	.4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
	.4byte isCave__Q23PSM10Scene_GameFv
	.4byte bossAppear__Q23PSM10Scene_GameFPQ23PSM9EnemyBossUs
	.4byte bossKilled__Q23PSM10Scene_GameFPQ23PSM9EnemyBoss
	.4byte isBossFloor__Q23PSM10Scene_GameFv
	.4byte akubiOK__Q23PSM10Scene_GameFv
	.4byte isPollutUp__Q23PSM12Scene_GroundFv
	.4byte getPollutUpTimer__Q23PSM12Scene_GroundCFv
.endobj __vt__Q23PSM12Scene_Ground
.obj "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>Fv"
.endobj "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"
.obj __vt__Q33PSM12BossBgmFader3Mgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q33PSM12BossBgmFader3MgrFv
.endobj __vt__Q33PSM12BossBgmFader3Mgr
.obj __vt__Q23PSM10Scene_Game, global
	.4byte 0
	.4byte 0
	.4byte init__Q23PSM10Scene_GameFv
	.4byte __dt__Q23PSM10Scene_GameFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q23PSM10Scene_GameFv
	.4byte startMainSeq__Q23PSM10Scene_GameFv
	.4byte stopMainSeq__Q23PSM10Scene_GameFUl
	.4byte stopAllSound__Q23PSM10Scene_GameFUl
	.4byte getCamDistVol__Q23PSM13Scene_ObjectsFUc
	.4byte getEnvSe__Q23PSM10Scene_GameFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM10Scene_GameFv
	.4byte getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM10Scene_GameFv
	.4byte pauseOn_2D__Q23PSM10Scene_GameFUcUc
	.4byte pauseOff_2D__Q23PSM10Scene_GameFv
	.4byte pauseOn_Demo__Q23PSM10Scene_GameFv
	.4byte pauseOff_Demo__Q23PSM10Scene_GameFv
	.4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
	.4byte isCave__Q23PSM10Scene_GameFv
	.4byte bossAppear__Q23PSM10Scene_GameFPQ23PSM9EnemyBossUs
	.4byte bossKilled__Q23PSM10Scene_GameFPQ23PSM9EnemyBoss
	.4byte isBossFloor__Q23PSM10Scene_GameFv
	.4byte akubiOK__Q23PSM10Scene_GameFv
	.4byte isPollutUp__Q23PSM10Scene_GameFv
	.4byte getPollutUpTimer__Q23PSM10Scene_GameCFv
.endobj __vt__Q23PSM10Scene_Game
.obj "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>Fv"
.endobj "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"
.obj __vt__Q23PSM11ObjCalcBase, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM11ObjCalcBaseFv
	.4byte 0
	.4byte 0
	.4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
	.4byte is1PGame__Q23PSM11ObjCalcBaseFv
.endobj __vt__Q23PSM11ObjCalcBase
.obj __vt__Q23PSM13Scene_Objects, global
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM13Scene_ObjectsFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q23PSM13Scene_ObjectsFv
	.4byte startMainSeq__Q23PSM13Scene_ObjectsFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte getCamDistVol__Q23PSM13Scene_ObjectsFUc
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM9SceneBaseFv
	.4byte getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
	.4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
.endobj __vt__Q23PSM13Scene_Objects
.obj __vt__Q23PSM10Scene_Demo, global
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM10Scene_DemoFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q28PSSystem5SceneFv
	.4byte startMainSeq__Q28PSSystem5SceneFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte getCamDistVol__Q23PSM10Scene_DemoFUc
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM10Scene_DemoFv
	.4byte getSeSceneGate__Q23PSM10Scene_DemoFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
.endobj __vt__Q23PSM10Scene_Demo
.obj __vt__Q23PSM12Scene_Global, global
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM12Scene_GlobalFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q28PSSystem5SceneFv
	.4byte startMainSeq__Q28PSSystem5SceneFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte getCamDistVol__Q23PSM12Scene_GlobalFUc
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM9SceneBaseFv
	.4byte getSeSceneGate__Q23PSM12Scene_GlobalFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
.endobj __vt__Q23PSM12Scene_Global
.obj __vt__Q23PSM9SceneBase, global
	.4byte 0
	.4byte 0
	.4byte init__Q28PSSystem5SceneFv
	.4byte __dt__Q23PSM9SceneBaseFv
	.4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
	.4byte scene1stLoadSync__Q28PSSystem5SceneFv
	.4byte exec__Q28PSSystem5SceneFv
	.4byte startMainSeq__Q28PSSystem5SceneFv
	.4byte stopMainSeq__Q28PSSystem5SceneFUl
	.4byte stopAllSound__Q28PSSystem5SceneFUl
	.4byte 0
	.4byte getEnvSe__Q23PSM9SceneBaseFv
	.4byte getSceneFx__Q23PSM9SceneBaseFv
	.4byte isDemoScene__Q23PSM9SceneBaseFv
	.4byte getSeSceneGate__Q23PSM9SceneBaseFPQ23PSM7ObjBaseUl
	.4byte becomeSceneCamera__Q23PSM9SceneBaseFv
	.4byte isGameScene__Q23PSM9SceneBaseFv
	.4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
	.4byte pauseOff_2D__Q23PSM9SceneBaseFv
	.4byte pauseOn_Demo__Q23PSM9SceneBaseFv
	.4byte pauseOff_Demo__Q23PSM9SceneBaseFv
.endobj __vt__Q23PSM9SceneBase

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.balign 4
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520C98, local
	.float 0.08
.endobj lbl_80520C98
.obj lbl_80520C9C, local
	.float 0.0
.endobj lbl_80520C9C
.obj lbl_80520CA0, local
	.float 1.0
.endobj lbl_80520CA0
.obj lbl_80520CA4, local
	.float 0.3
.endobj lbl_80520CA4
.obj cEvenning_fadeOuTime__Q23PSM12Scene_Ground, global
	.4byte 0x00000096
.endobj cEvenning_fadeOuTime__Q23PSM12Scene_Ground
.obj cEvenning_fadeInTime__Q23PSM12Scene_Ground, global
	.4byte 0x00000096
.endobj cEvenning_fadeInTime__Q23PSM12Scene_Ground
.obj lbl_80520CB0, local
	.float 0.8
.endobj lbl_80520CB0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q23PSM9SceneBaseFUcPQ26PSGame9SceneInfo, global
/* 80467630 00464570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467634 00464574  7C 08 02 A6 */	mflr r0
/* 80467638 00464578  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046763C 0046457C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467640 00464580  7C BF 2B 78 */	mr r31, r5
/* 80467644 00464584  93 C1 00 08 */	stw r30, 8(r1)
/* 80467648 00464588  7C 7E 1B 78 */	mr r30, r3
/* 8046764C 0046458C  4B EC DF 99 */	bl __ct__Q26PSGame8PikSceneFUc
/* 80467650 00464590  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 80467654 00464594  28 1F 00 00 */	cmplwi r31, 0
/* 80467658 00464598  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 8046765C 0046459C  90 1E 00 00 */	stw r0, 0(r30)
/* 80467660 004645A0  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80467664 004645A4  40 82 00 20 */	bne .L_80467684
/* 80467668 004645A8  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 8046766C 004645AC  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467670 004645B0  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467674 004645B4  38 80 00 24 */	li r4, 0x24
/* 80467678 004645B8  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046767C 004645BC  4C C6 31 82 */	crclr 6
/* 80467680 004645C0  4B BC 2F C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467684:
/* 80467684 004645C4  7F C3 F3 78 */	mr r3, r30
/* 80467688 004645C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046768C 004645CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80467690 004645D0  7D 89 03 A6 */	mtctr r12
/* 80467694 004645D4  4E 80 04 21 */	bctrl 
/* 80467698 004645D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046769C 004645DC  7F C3 F3 78 */	mr r3, r30
/* 804676A0 004645E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804676A4 004645E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 804676A8 004645E8  7C 08 03 A6 */	mtlr r0
/* 804676AC 004645EC  38 21 00 10 */	addi r1, r1, 0x10
/* 804676B0 004645F0  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM9SceneBaseFUcPQ26PSGame9SceneInfo

.fn getSceneFx__Q23PSM9SceneBaseFv, global
/* 804676B4 004645F4  C0 22 29 38 */	lfs f1, lbl_80520C98@sda21(r2)
/* 804676B8 004645F8  4E 80 00 20 */	blr 
.endfn getSceneFx__Q23PSM9SceneBaseFv

.fn becomeSceneCamera__Q23PSM9SceneBaseFv, global
/* 804676BC 004645FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804676C0 00464600  7C 08 02 A6 */	mflr r0
/* 804676C4 00464604  90 01 00 14 */	stw r0, 0x14(r1)
/* 804676C8 00464608  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804676CC 0046460C  7C 7F 1B 78 */	mr r31, r3
/* 804676D0 00464610  80 03 00 24 */	lwz r0, 0x24(r3)
/* 804676D4 00464614  28 00 00 00 */	cmplwi r0, 0
/* 804676D8 00464618  40 82 00 20 */	bne .L_804676F8
/* 804676DC 0046461C  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 804676E0 00464620  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 804676E4 00464624  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 804676E8 00464628  38 80 00 31 */	li r4, 0x31
/* 804676EC 0046462C  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 804676F0 00464630  4C C6 31 82 */	crclr 6
/* 804676F4 00464634  4B BC 2F 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804676F8:
/* 804676F8 00464638  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804676FC 0046463C  4B EC DE 75 */	bl setStageCamera__Q26PSGame9SceneInfoCFv
/* 80467700 00464640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467704 00464644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467708 00464648  7C 08 03 A6 */	mtlr r0
/* 8046770C 0046464C  38 21 00 10 */	addi r1, r1, 0x10
/* 80467710 00464650  4E 80 00 20 */	blr 
.endfn becomeSceneCamera__Q23PSM9SceneBaseFv

.fn getSceneInfoA__Q23PSM9SceneBaseFv, global
/* 80467714 00464654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467718 00464658  7C 08 02 A6 */	mflr r0
/* 8046771C 0046465C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467720 00464660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467724 00464664  7C 7F 1B 78 */	mr r31, r3
/* 80467728 00464668  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8046772C 0046466C  28 00 00 00 */	cmplwi r0, 0
/* 80467730 00464670  40 82 00 20 */	bne .L_80467750
/* 80467734 00464674  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80467738 00464678  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046773C 0046467C  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467740 00464680  38 80 00 38 */	li r4, 0x38
/* 80467744 00464684  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467748 00464688  4C C6 31 82 */	crclr 6
/* 8046774C 0046468C  4B BC 2E F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467750:
/* 80467750 00464690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467754 00464694  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80467758 00464698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046775C 0046469C  7C 08 03 A6 */	mtlr r0
/* 80467760 004646A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80467764 004646A4  4E 80 00 20 */	blr 
.endfn getSceneInfoA__Q23PSM9SceneBaseFv

.fn pauseOn_2D__Q23PSM9SceneBaseFUcUc, global
/* 80467768 004646A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046776C 004646AC  7C 08 02 A6 */	mflr r0
/* 80467770 004646B0  38 63 00 10 */	addi r3, r3, 0x10
/* 80467774 004646B4  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80467778 004646B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046777C 004646BC  4B EC C3 51 */	bl pauseOnAllSeq__Q28PSSystem6SeqMgrFQ38PSSystem7SeqBase9PauseMode
/* 80467780 004646C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467784 004646C4  7C 08 03 A6 */	mtlr r0
/* 80467788 004646C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8046778C 004646CC  4E 80 00 20 */	blr 
.endfn pauseOn_2D__Q23PSM9SceneBaseFUcUc

.fn pauseOff_2D__Q23PSM9SceneBaseFv, global
/* 80467790 004646D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467794 004646D4  7C 08 02 A6 */	mflr r0
/* 80467798 004646D8  38 63 00 10 */	addi r3, r3, 0x10
/* 8046779C 004646DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804677A0 004646E0  4B EC C3 89 */	bl pauseOffAllSeq__Q28PSSystem6SeqMgrFv
/* 804677A4 004646E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804677A8 004646E8  7C 08 03 A6 */	mtlr r0
/* 804677AC 004646EC  38 21 00 10 */	addi r1, r1, 0x10
/* 804677B0 004646F0  4E 80 00 20 */	blr 
.endfn pauseOff_2D__Q23PSM9SceneBaseFv

.fn pauseOn_Demo__Q23PSM9SceneBaseFv, global
/* 804677B4 004646F4  4E 80 00 20 */	blr 
.endfn pauseOn_Demo__Q23PSM9SceneBaseFv

.fn pauseOff_Demo__Q23PSM9SceneBaseFv, global
/* 804677B8 004646F8  4E 80 00 20 */	blr 
.endfn pauseOff_Demo__Q23PSM9SceneBaseFv

.fn __ct__Q23PSM12Scene_GlobalFUcPQ26PSGame9SceneInfo, global
/* 804677BC 004646FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804677C0 00464700  7C 08 02 A6 */	mflr r0
/* 804677C4 00464704  90 01 00 14 */	stw r0, 0x14(r1)
/* 804677C8 00464708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804677CC 0046470C  7C BF 2B 78 */	mr r31, r5
/* 804677D0 00464710  93 C1 00 08 */	stw r30, 8(r1)
/* 804677D4 00464714  7C 7E 1B 78 */	mr r30, r3
/* 804677D8 00464718  4B EC DE 0D */	bl __ct__Q26PSGame8PikSceneFUc
/* 804677DC 0046471C  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 804677E0 00464720  28 1F 00 00 */	cmplwi r31, 0
/* 804677E4 00464724  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 804677E8 00464728  90 1E 00 00 */	stw r0, 0(r30)
/* 804677EC 0046472C  93 FE 00 24 */	stw r31, 0x24(r30)
/* 804677F0 00464730  40 82 00 20 */	bne .L_80467810
/* 804677F4 00464734  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 804677F8 00464738  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 804677FC 0046473C  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467800 00464740  38 80 00 24 */	li r4, 0x24
/* 80467804 00464744  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467808 00464748  4C C6 31 82 */	crclr 6
/* 8046780C 0046474C  4B BC 2E 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467810:
/* 80467810 00464750  7F C3 F3 78 */	mr r3, r30
/* 80467814 00464754  81 9E 00 00 */	lwz r12, 0(r30)
/* 80467818 00464758  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046781C 0046475C  7D 89 03 A6 */	mtctr r12
/* 80467820 00464760  4E 80 04 21 */	bctrl 
/* 80467824 00464764  3C 80 80 4F */	lis r4, __vt__Q23PSM12Scene_Global@ha
/* 80467828 00464768  7F C3 F3 78 */	mr r3, r30
/* 8046782C 0046476C  38 04 F6 30 */	addi r0, r4, __vt__Q23PSM12Scene_Global@l
/* 80467830 00464770  90 1E 00 00 */	stw r0, 0(r30)
/* 80467834 00464774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467838 00464778  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046783C 0046477C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467840 00464780  7C 08 03 A6 */	mtlr r0
/* 80467844 00464784  38 21 00 10 */	addi r1, r1, 0x10
/* 80467848 00464788  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM12Scene_GlobalFUcPQ26PSGame9SceneInfo

.fn __dt__Q23PSM12Scene_GlobalFv, global
/* 8046784C 0046478C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467850 00464790  7C 08 02 A6 */	mflr r0
/* 80467854 00464794  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467858 00464798  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046785C 0046479C  7C 9F 23 78 */	mr r31, r4
/* 80467860 004647A0  93 C1 00 08 */	stw r30, 8(r1)
/* 80467864 004647A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80467868 004647A8  41 82 00 90 */	beq .L_804678F8
/* 8046786C 004647AC  3C 60 80 4F */	lis r3, __vt__Q23PSM12Scene_Global@ha
/* 80467870 004647B0  38 03 F6 30 */	addi r0, r3, __vt__Q23PSM12Scene_Global@l
/* 80467874 004647B4  90 1E 00 00 */	stw r0, 0(r30)
/* 80467878 004647B8  80 6D 91 D0 */	lwz r3, "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
/* 8046787C 004647BC  28 03 00 00 */	cmplwi r3, 0
/* 80467880 004647C0  41 82 00 18 */	beq .L_80467898
/* 80467884 004647C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80467888 004647C8  38 80 00 01 */	li r4, 1
/* 8046788C 004647CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80467890 004647D0  7D 89 03 A6 */	mtctr r12
/* 80467894 004647D4  4E 80 04 21 */	bctrl 
.L_80467898:
/* 80467898 004647D8  80 6D 91 CC */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
/* 8046789C 004647DC  38 00 00 00 */	li r0, 0
/* 804678A0 004647E0  90 0D 91 D0 */	stw r0, "sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
/* 804678A4 004647E4  28 03 00 00 */	cmplwi r3, 0
/* 804678A8 004647E8  41 82 00 18 */	beq .L_804678C0
/* 804678AC 004647EC  81 83 00 00 */	lwz r12, 0(r3)
/* 804678B0 004647F0  38 80 00 01 */	li r4, 1
/* 804678B4 004647F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 804678B8 004647F8  7D 89 03 A6 */	mtctr r12
/* 804678BC 004647FC  4E 80 04 21 */	bctrl 
.L_804678C0:
/* 804678C0 00464800  38 00 00 00 */	li r0, 0
/* 804678C4 00464804  28 1E 00 00 */	cmplwi r30, 0
/* 804678C8 00464808  90 0D 91 CC */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
/* 804678CC 0046480C  41 82 00 1C */	beq .L_804678E8
/* 804678D0 00464810  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 804678D4 00464814  7F C3 F3 78 */	mr r3, r30
/* 804678D8 00464818  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 804678DC 0046481C  38 80 00 00 */	li r4, 0
/* 804678E0 00464820  90 1E 00 00 */	stw r0, 0(r30)
/* 804678E4 00464824  4B EC DD 3D */	bl __dt__Q26PSGame8PikSceneFv
.L_804678E8:
/* 804678E8 00464828  7F E0 07 35 */	extsh. r0, r31
/* 804678EC 0046482C  40 81 00 0C */	ble .L_804678F8
/* 804678F0 00464830  7F C3 F3 78 */	mr r3, r30
/* 804678F4 00464834  4B BB C7 C1 */	bl __dl__FPv
.L_804678F8:
/* 804678F8 00464838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804678FC 0046483C  7F C3 F3 78 */	mr r3, r30
/* 80467900 00464840  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467904 00464844  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467908 00464848  7C 08 03 A6 */	mtlr r0
/* 8046790C 0046484C  38 21 00 10 */	addi r1, r1, 0x10
/* 80467910 00464850  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM12Scene_GlobalFv

.fn getCamDistVol__Q23PSM12Scene_GlobalFUc, global
/* 80467914 00464854  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 80467918 00464858  4E 80 00 20 */	blr 
.endfn getCamDistVol__Q23PSM12Scene_GlobalFUc

.fn getGlobalStream__Q23PSM12Scene_GlobalFv, global
/* 8046791C 0046485C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467920 00464860  7C 08 02 A6 */	mflr r0
/* 80467924 00464864  38 80 00 01 */	li r4, 1
/* 80467928 00464868  38 63 00 10 */	addi r3, r3, 0x10
/* 8046792C 0046486C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467930 00464870  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467934 00464874  4B EC C5 69 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 80467938 00464878  7C 7F 1B 79 */	or. r31, r3, r3
/* 8046793C 0046487C  40 82 00 20 */	bne .L_8046795C
/* 80467940 00464880  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80467944 00464884  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467948 00464888  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 8046794C 0046488C  38 80 00 72 */	li r4, 0x72
/* 80467950 00464890  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467954 00464894  4C C6 31 82 */	crclr 6
/* 80467958 00464898  4B BC 2C E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046795C:
/* 8046795C 0046489C  7F E3 FB 78 */	mr r3, r31
/* 80467960 004648A0  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80467964 004648A4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80467968 004648A8  7D 89 03 A6 */	mtctr r12
/* 8046796C 004648AC  4E 80 04 21 */	bctrl 
/* 80467970 004648B0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80467974 004648B4  28 00 00 01 */	cmplwi r0, 1
/* 80467978 004648B8  41 82 00 20 */	beq .L_80467998
/* 8046797C 004648BC  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80467980 004648C0  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467984 004648C4  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467988 004648C8  38 80 00 73 */	li r4, 0x73
/* 8046798C 004648CC  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467990 004648D0  4C C6 31 82 */	crclr 6
/* 80467994 004648D4  4B BC 2C AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467998:
/* 80467998 004648D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046799C 004648DC  7F E3 FB 78 */	mr r3, r31
/* 804679A0 004648E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804679A4 004648E4  7C 08 03 A6 */	mtlr r0
/* 804679A8 004648E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804679AC 004648EC  4E 80 00 20 */	blr 
.endfn getGlobalStream__Q23PSM12Scene_GlobalFv

.fn startGlobalStream__Q23PSM12Scene_GlobalFUl, global
/* 804679B0 004648F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804679B4 004648F4  7C 08 02 A6 */	mflr r0
/* 804679B8 004648F8  38 63 00 10 */	addi r3, r3, 0x10
/* 804679BC 004648FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804679C0 00464900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804679C4 00464904  93 C1 00 08 */	stw r30, 8(r1)
/* 804679C8 00464908  7C 9E 23 78 */	mr r30, r4
/* 804679CC 0046490C  38 80 00 01 */	li r4, 1
/* 804679D0 00464910  4B EC C4 CD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 804679D4 00464914  7C 7F 1B 79 */	or. r31, r3, r3
/* 804679D8 00464918  40 82 00 20 */	bne .L_804679F8
/* 804679DC 0046491C  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 804679E0 00464920  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 804679E4 00464924  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 804679E8 00464928  38 80 00 72 */	li r4, 0x72
/* 804679EC 0046492C  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 804679F0 00464930  4C C6 31 82 */	crclr 6
/* 804679F4 00464934  4B BC 2C 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804679F8:
/* 804679F8 00464938  7F E3 FB 78 */	mr r3, r31
/* 804679FC 0046493C  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80467A00 00464940  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80467A04 00464944  7D 89 03 A6 */	mtctr r12
/* 80467A08 00464948  4E 80 04 21 */	bctrl 
/* 80467A0C 0046494C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80467A10 00464950  28 00 00 01 */	cmplwi r0, 1
/* 80467A14 00464954  41 82 00 20 */	beq .L_80467A34
/* 80467A18 00464958  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80467A1C 0046495C  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467A20 00464960  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467A24 00464964  38 80 00 73 */	li r4, 0x73
/* 80467A28 00464968  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467A2C 0046496C  4C C6 31 82 */	crclr 6
/* 80467A30 00464970  4B BC 2C 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467A34:
/* 80467A34 00464974  7F E3 FB 78 */	mr r3, r31
/* 80467A38 00464978  7F C4 F3 78 */	mr r4, r30
/* 80467A3C 0046497C  4B EC A9 CD */	bl setId__Q28PSSystem9StreamBgmFUl
/* 80467A40 00464980  7F E3 FB 78 */	mr r3, r31
/* 80467A44 00464984  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80467A48 00464988  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80467A4C 0046498C  7D 89 03 A6 */	mtctr r12
/* 80467A50 00464990  4E 80 04 21 */	bctrl 
/* 80467A54 00464994  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467A58 00464998  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467A5C 0046499C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467A60 004649A0  7C 08 03 A6 */	mtlr r0
/* 80467A64 004649A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80467A68 004649A8  4E 80 00 20 */	blr 
.endfn startGlobalStream__Q23PSM12Scene_GlobalFUl

.fn __ct__Q23PSM10Scene_DemoFUcPQ26PSGame9SceneInfo, global
/* 80467A6C 004649AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467A70 004649B0  7C 08 02 A6 */	mflr r0
/* 80467A74 004649B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467A78 004649B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467A7C 004649BC  7C BF 2B 78 */	mr r31, r5
/* 80467A80 004649C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80467A84 004649C4  7C 7E 1B 78 */	mr r30, r3
/* 80467A88 004649C8  4B EC DB 5D */	bl __ct__Q26PSGame8PikSceneFUc
/* 80467A8C 004649CC  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 80467A90 004649D0  28 1F 00 00 */	cmplwi r31, 0
/* 80467A94 004649D4  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 80467A98 004649D8  90 1E 00 00 */	stw r0, 0(r30)
/* 80467A9C 004649DC  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80467AA0 004649E0  40 82 00 20 */	bne .L_80467AC0
/* 80467AA4 004649E4  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80467AA8 004649E8  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467AAC 004649EC  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467AB0 004649F0  38 80 00 24 */	li r4, 0x24
/* 80467AB4 004649F4  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467AB8 004649F8  4C C6 31 82 */	crclr 6
/* 80467ABC 004649FC  4B BC 2B 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467AC0:
/* 80467AC0 00464A00  7F C3 F3 78 */	mr r3, r30
/* 80467AC4 00464A04  81 9E 00 00 */	lwz r12, 0(r30)
/* 80467AC8 00464A08  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80467ACC 00464A0C  7D 89 03 A6 */	mtctr r12
/* 80467AD0 00464A10  4E 80 04 21 */	bctrl 
/* 80467AD4 00464A14  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Demo@ha
/* 80467AD8 00464A18  38 00 00 00 */	li r0, 0
/* 80467ADC 00464A1C  38 83 F5 DC */	addi r4, r3, __vt__Q23PSM10Scene_Demo@l
/* 80467AE0 00464A20  7F C3 F3 78 */	mr r3, r30
/* 80467AE4 00464A24  90 9E 00 00 */	stw r4, 0(r30)
/* 80467AE8 00464A28  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80467AEC 00464A2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467AF0 00464A30  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467AF4 00464A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467AF8 00464A38  7C 08 03 A6 */	mtlr r0
/* 80467AFC 00464A3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80467B00 00464A40  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM10Scene_DemoFUcPQ26PSGame9SceneInfo

.fn getSeSceneGate__Q23PSM10Scene_DemoFPQ23PSM7ObjBaseUl, global
/* 80467B04 00464A44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467B08 00464A48  7C 08 02 A6 */	mflr r0
/* 80467B0C 00464A4C  28 04 00 00 */	cmplwi r4, 0
/* 80467B10 00464A50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467B14 00464A54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467B18 00464A58  93 C1 00 08 */	stw r30, 8(r1)
/* 80467B1C 00464A5C  41 82 00 50 */	beq .L_80467B6C
/* 80467B20 00464A60  83 C4 00 2C */	lwz r30, 0x2c(r4)
/* 80467B24 00464A64  3B E0 00 00 */	li r31, 0
/* 80467B28 00464A68  7F C3 F3 78 */	mr r3, r30
/* 80467B2C 00464A6C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80467B30 00464A70  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80467B34 00464A74  7D 89 03 A6 */	mtctr r12
/* 80467B38 00464A78  4E 80 04 21 */	bctrl 
/* 80467B3C 00464A7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80467B40 00464A80  40 82 00 20 */	bne .L_80467B60
/* 80467B44 00464A84  7F C3 F3 78 */	mr r3, r30
/* 80467B48 00464A88  81 9E 00 00 */	lwz r12, 0(r30)
/* 80467B4C 00464A8C  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 80467B50 00464A90  7D 89 03 A6 */	mtctr r12
/* 80467B54 00464A94  4E 80 04 21 */	bctrl 
/* 80467B58 00464A98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80467B5C 00464A9C  41 82 00 08 */	beq .L_80467B64
.L_80467B60:
/* 80467B60 00464AA0  3B E0 00 01 */	li r31, 1
.L_80467B64:
/* 80467B64 00464AA4  7F E3 FB 78 */	mr r3, r31
/* 80467B68 00464AA8  48 00 00 08 */	b .L_80467B70
.L_80467B6C:
/* 80467B6C 00464AAC  88 63 00 28 */	lbz r3, 0x28(r3)
.L_80467B70:
/* 80467B70 00464AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467B74 00464AB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467B78 00464AB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467B7C 00464ABC  7C 08 03 A6 */	mtlr r0
/* 80467B80 00464AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80467B84 00464AC4  4E 80 00 20 */	blr 
.endfn getSeSceneGate__Q23PSM10Scene_DemoFPQ23PSM7ObjBaseUl

.fn getCamDistVol__Q23PSM10Scene_DemoFUc, global
/* 80467B88 00464AC8  C0 22 FD A4 */	lfs f1, sDefaultVol__Q26PSGame9CameraMgr@sda21(r2)
/* 80467B8C 00464ACC  4E 80 00 20 */	blr 
.endfn getCamDistVol__Q23PSM10Scene_DemoFUc

.fn __ct__Q23PSM13Scene_ObjectsFUcPQ26PSGame9SceneInfo, global
/* 80467B90 00464AD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80467B94 00464AD4  7C 08 02 A6 */	mflr r0
/* 80467B98 00464AD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80467B9C 00464ADC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80467BA0 00464AE0  7C 7F 1B 78 */	mr r31, r3
/* 80467BA4 00464AE4  7F E0 FB 78 */	mr r0, r31
/* 80467BA8 00464AE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80467BAC 00464AEC  7C BE 2B 78 */	mr r30, r5
/* 80467BB0 00464AF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80467BB4 00464AF4  7C 1D 03 78 */	mr r29, r0
/* 80467BB8 00464AF8  4B EC DA 2D */	bl __ct__Q26PSGame8PikSceneFUc
/* 80467BBC 00464AFC  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 80467BC0 00464B00  28 1E 00 00 */	cmplwi r30, 0
/* 80467BC4 00464B04  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 80467BC8 00464B08  90 1D 00 00 */	stw r0, 0(r29)
/* 80467BCC 00464B0C  93 DD 00 24 */	stw r30, 0x24(r29)
/* 80467BD0 00464B10  40 82 00 20 */	bne .L_80467BF0
/* 80467BD4 00464B14  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80467BD8 00464B18  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467BDC 00464B1C  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80467BE0 00464B20  38 80 00 24 */	li r4, 0x24
/* 80467BE4 00464B24  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467BE8 00464B28  4C C6 31 82 */	crclr 6
/* 80467BEC 00464B2C  4B BC 2A 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467BF0:
/* 80467BF0 00464B30  7F A3 EB 78 */	mr r3, r29
/* 80467BF4 00464B34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80467BF8 00464B38  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80467BFC 00464B3C  7D 89 03 A6 */	mtctr r12
/* 80467C00 00464B40  4E 80 04 21 */	bctrl 
/* 80467C04 00464B44  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 80467C08 00464B48  38 80 00 00 */	li r4, 0
/* 80467C0C 00464B4C  38 63 F5 84 */	addi r3, r3, __vt__Q23PSM13Scene_Objects@l
/* 80467C10 00464B50  3C 00 F0 00 */	lis r0, 0xf000
/* 80467C14 00464B54  90 7F 00 00 */	stw r3, 0(r31)
/* 80467C18 00464B58  38 60 00 50 */	li r3, 0x50
/* 80467C1C 00464B5C  90 9F 00 28 */	stw r4, 0x28(r31)
/* 80467C20 00464B60  90 9F 00 2C */	stw r4, 0x2c(r31)
/* 80467C24 00464B64  98 9F 00 30 */	stb r4, 0x30(r31)
/* 80467C28 00464B68  90 1F 00 34 */	stw r0, 0x34(r31)
/* 80467C2C 00464B6C  4B BB C2 79 */	bl __nw__FUl
/* 80467C30 00464B70  7C 60 1B 79 */	or. r0, r3, r3
/* 80467C34 00464B74  41 82 00 0C */	beq .L_80467C40
/* 80467C38 00464B78  4B EC D0 91 */	bl __ct__Q26PSGame9CameraMgrFv
/* 80467C3C 00464B7C  7C 60 1B 78 */	mr r0, r3
.L_80467C40:
/* 80467C40 00464B80  90 1F 00 28 */	stw r0, 0x28(r31)
/* 80467C44 00464B84  7F C3 F3 78 */	mr r3, r30
/* 80467C48 00464B88  38 80 00 01 */	li r4, 1
/* 80467C4C 00464B8C  4B EC D9 15 */	bl getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
/* 80467C50 00464B90  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80467C54 00464B94  20 00 00 01 */	subfic r0, r0, 1
/* 80467C58 00464B98  7C 00 00 34 */	cntlzw r0, r0
/* 80467C5C 00464B9C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80467C60 00464BA0  40 82 00 0C */	bne .L_80467C6C
/* 80467C64 00464BA4  48 00 AC 41 */	bl newInstance_SingleGame__Q23PSM18ObjCalc_SingleGameFv
/* 80467C68 00464BA8  48 00 00 08 */	b .L_80467C70
.L_80467C6C:
/* 80467C6C 00464BAC  48 00 AC A9 */	bl newInstance_2PGame__Q23PSM14ObjCalc_2PGameFv
.L_80467C70:
/* 80467C70 00464BB0  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467C74 00464BB4  28 00 00 00 */	cmplwi r0, 0
/* 80467C78 00464BB8  41 82 00 0C */	beq .L_80467C84
/* 80467C7C 00464BBC  7F E3 FB 78 */	mr r3, r31
/* 80467C80 00464BC0  48 00 01 81 */	bl adaptObjMgr__Q23PSM13Scene_ObjectsFv
.L_80467C84:
/* 80467C84 00464BC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80467C88 00464BC8  7F E3 FB 78 */	mr r3, r31
/* 80467C8C 00464BCC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80467C90 00464BD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80467C94 00464BD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80467C98 00464BD8  7C 08 03 A6 */	mtlr r0
/* 80467C9C 00464BDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80467CA0 00464BE0  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM13Scene_ObjectsFUcPQ26PSGame9SceneInfo

.fn __dt__Q23PSM13Scene_ObjectsFv, global
/* 80467CA4 00464BE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467CA8 00464BE8  7C 08 02 A6 */	mflr r0
/* 80467CAC 00464BEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467CB0 00464BF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467CB4 00464BF4  7C 9F 23 78 */	mr r31, r4
/* 80467CB8 00464BF8  93 C1 00 08 */	stw r30, 8(r1)
/* 80467CBC 00464BFC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80467CC0 00464C00  41 82 00 C0 */	beq .L_80467D80
/* 80467CC4 00464C04  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 80467CC8 00464C08  38 03 F5 84 */	addi r0, r3, __vt__Q23PSM13Scene_Objects@l
/* 80467CCC 00464C0C  90 1E 00 00 */	stw r0, 0(r30)
/* 80467CD0 00464C10  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467CD4 00464C14  28 03 00 00 */	cmplwi r3, 0
/* 80467CD8 00464C18  41 82 00 18 */	beq .L_80467CF0
/* 80467CDC 00464C1C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80467CE0 00464C20  38 80 00 01 */	li r4, 1
/* 80467CE4 00464C24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80467CE8 00464C28  7D 89 03 A6 */	mtctr r12
/* 80467CEC 00464C2C  4E 80 04 21 */	bctrl 
.L_80467CF0:
/* 80467CF0 00464C30  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80467CF4 00464C34  38 00 00 00 */	li r0, 0
/* 80467CF8 00464C38  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467CFC 00464C3C  28 03 00 00 */	cmplwi r3, 0
/* 80467D00 00464C40  41 82 00 18 */	beq .L_80467D18
/* 80467D04 00464C44  81 83 00 00 */	lwz r12, 0(r3)
/* 80467D08 00464C48  38 80 00 01 */	li r4, 1
/* 80467D0C 00464C4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80467D10 00464C50  7D 89 03 A6 */	mtctr r12
/* 80467D14 00464C54  4E 80 04 21 */	bctrl 
.L_80467D18:
/* 80467D18 00464C58  38 00 00 00 */	li r0, 0
/* 80467D1C 00464C5C  7F C3 F3 78 */	mr r3, r30
/* 80467D20 00464C60  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80467D24 00464C64  48 00 01 3D */	bl detachObjMgr__Q23PSM13Scene_ObjectsFv
/* 80467D28 00464C68  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467D2C 00464C6C  28 03 00 00 */	cmplwi r3, 0
/* 80467D30 00464C70  41 82 00 18 */	beq .L_80467D48
/* 80467D34 00464C74  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80467D38 00464C78  38 80 00 01 */	li r4, 1
/* 80467D3C 00464C7C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80467D40 00464C80  7D 89 03 A6 */	mtctr r12
/* 80467D44 00464C84  4E 80 04 21 */	bctrl 
.L_80467D48:
/* 80467D48 00464C88  38 00 00 00 */	li r0, 0
/* 80467D4C 00464C8C  28 1E 00 00 */	cmplwi r30, 0
/* 80467D50 00464C90  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467D54 00464C94  41 82 00 1C */	beq .L_80467D70
/* 80467D58 00464C98  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 80467D5C 00464C9C  7F C3 F3 78 */	mr r3, r30
/* 80467D60 00464CA0  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 80467D64 00464CA4  38 80 00 00 */	li r4, 0
/* 80467D68 00464CA8  90 1E 00 00 */	stw r0, 0(r30)
/* 80467D6C 00464CAC  4B EC D8 B5 */	bl __dt__Q26PSGame8PikSceneFv
.L_80467D70:
/* 80467D70 00464CB0  7F E0 07 35 */	extsh. r0, r31
/* 80467D74 00464CB4  40 81 00 0C */	ble .L_80467D80
/* 80467D78 00464CB8  7F C3 F3 78 */	mr r3, r30
/* 80467D7C 00464CBC  4B BB C3 39 */	bl __dl__FPv
.L_80467D80:
/* 80467D80 00464CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467D84 00464CC4  7F C3 F3 78 */	mr r3, r30
/* 80467D88 00464CC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467D8C 00464CCC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467D90 00464CD0  7C 08 03 A6 */	mtlr r0
/* 80467D94 00464CD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80467D98 00464CD8  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM13Scene_ObjectsFv

.fn __dt__Q23PSM11ObjCalcBaseFv, weak
/* 80467D9C 00464CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467DA0 00464CE0  7C 08 02 A6 */	mflr r0
/* 80467DA4 00464CE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467DA8 00464CE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467DAC 00464CEC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80467DB0 00464CF0  41 82 00 38 */	beq .L_80467DE8
/* 80467DB4 00464CF4  3C 60 80 4F */	lis r3, __vt__Q23PSM11ObjCalcBase@ha
/* 80467DB8 00464CF8  38 03 F5 68 */	addi r0, r3, __vt__Q23PSM11ObjCalcBase@l
/* 80467DBC 00464CFC  90 1F 00 00 */	stw r0, 0(r31)
/* 80467DC0 00464D00  41 82 00 18 */	beq .L_80467DD8
/* 80467DC4 00464D04  3C 60 80 4F */	lis r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@ha
/* 80467DC8 00464D08  38 00 00 00 */	li r0, 0
/* 80467DCC 00464D0C  38 63 F5 5C */	addi r3, r3, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@l
/* 80467DD0 00464D10  90 7F 00 00 */	stw r3, 0(r31)
/* 80467DD4 00464D14  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
.L_80467DD8:
/* 80467DD8 00464D18  7C 80 07 35 */	extsh. r0, r4
/* 80467DDC 00464D1C  40 81 00 0C */	ble .L_80467DE8
/* 80467DE0 00464D20  7F E3 FB 78 */	mr r3, r31
/* 80467DE4 00464D24  4B BB C2 D1 */	bl __dl__FPv
.L_80467DE8:
/* 80467DE8 00464D28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467DEC 00464D2C  7F E3 FB 78 */	mr r3, r31
/* 80467DF0 00464D30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467DF4 00464D34  7C 08 03 A6 */	mtlr r0
/* 80467DF8 00464D38  38 21 00 10 */	addi r1, r1, 0x10
/* 80467DFC 00464D3C  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM11ObjCalcBaseFv

.fn adaptObjMgr__Q23PSM13Scene_ObjectsFv, global
/* 80467E00 00464D40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467E04 00464D44  7C 08 02 A6 */	mflr r0
/* 80467E08 00464D48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467E0C 00464D4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467E10 00464D50  7C 7F 1B 78 */	mr r31, r3
/* 80467E14 00464D54  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467E18 00464D58  28 00 00 00 */	cmplwi r0, 0
/* 80467E1C 00464D5C  40 82 00 20 */	bne .L_80467E3C
/* 80467E20 00464D60  3C 60 80 4A */	lis r3, lbl_8049D938@ha
/* 80467E24 00464D64  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80467E28 00464D68  38 63 D9 38 */	addi r3, r3, lbl_8049D938@l
/* 80467E2C 00464D6C  38 80 00 89 */	li r4, 0x89
/* 80467E30 00464D70  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80467E34 00464D74  4C C6 31 82 */	crclr 6
/* 80467E38 00464D78  4B BC 28 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80467E3C:
/* 80467E3C 00464D7C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80467E40 00464D80  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80467E44 00464D84  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80467E48 00464D88  93 E3 00 2C */	stw r31, 0x2c(r3)
/* 80467E4C 00464D8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467E50 00464D90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467E54 00464D94  7C 08 03 A6 */	mtlr r0
/* 80467E58 00464D98  38 21 00 10 */	addi r1, r1, 0x10
/* 80467E5C 00464D9C  4E 80 00 20 */	blr 
.endfn adaptObjMgr__Q23PSM13Scene_ObjectsFv

.fn detachObjMgr__Q23PSM13Scene_ObjectsFv, global
/* 80467E60 00464DA0  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80467E64 00464DA4  28 04 00 00 */	cmplwi r4, 0
/* 80467E68 00464DA8  4D 82 00 20 */	beqlr 
/* 80467E6C 00464DAC  38 00 00 00 */	li r0, 0
/* 80467E70 00464DB0  90 04 00 2C */	stw r0, 0x2c(r4)
/* 80467E74 00464DB4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80467E78 00464DB8  4E 80 00 20 */	blr 
.endfn detachObjMgr__Q23PSM13Scene_ObjectsFv

.fn startMainSeq__Q23PSM13Scene_ObjectsFv, global
/* 80467E7C 00464DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467E80 00464DC0  7C 08 02 A6 */	mflr r0
/* 80467E84 00464DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467E88 00464DC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80467E8C 00464DCC  7C 7F 1B 78 */	mr r31, r3
/* 80467E90 00464DD0  4B ED 9A 69 */	bl startMainSeq__Q28PSSystem5SceneFv
/* 80467E94 00464DD4  7F E3 FB 78 */	mr r3, r31
/* 80467E98 00464DD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80467E9C 00464DDC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80467EA0 00464DE0  7D 89 03 A6 */	mtctr r12
/* 80467EA4 00464DE4  4E 80 04 21 */	bctrl 
/* 80467EA8 00464DE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467EAC 00464DEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80467EB0 00464DF0  7C 08 03 A6 */	mtlr r0
/* 80467EB4 00464DF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80467EB8 00464DF8  4E 80 00 20 */	blr 
.endfn startMainSeq__Q23PSM13Scene_ObjectsFv

.fn onStartMainSeq__Q23PSM13Scene_ObjectsFv, global
/* 80467EBC 00464DFC  80 83 00 34 */	lwz r4, 0x34(r3)
/* 80467EC0 00464E00  3C 04 10 00 */	addis r0, r4, 0x1000
/* 80467EC4 00464E04  28 00 00 00 */	cmplwi r0, 0
/* 80467EC8 00464E08  4C 82 00 20 */	bnelr 
/* 80467ECC 00464E0C  38 80 00 01 */	li r4, 1
/* 80467ED0 00464E10  38 00 00 00 */	li r0, 0
/* 80467ED4 00464E14  98 83 00 30 */	stb r4, 0x30(r3)
/* 80467ED8 00464E18  90 03 00 34 */	stw r0, 0x34(r3)
/* 80467EDC 00464E1C  4E 80 00 20 */	blr 
.endfn onStartMainSeq__Q23PSM13Scene_ObjectsFv

.fn getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl, global
/* 80467EE0 00464E20  88 63 00 30 */	lbz r3, 0x30(r3)
/* 80467EE4 00464E24  7C 03 00 D0 */	neg r0, r3
/* 80467EE8 00464E28  7C 00 1B 78 */	or r0, r0, r3
/* 80467EEC 00464E2C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80467EF0 00464E30  4E 80 00 20 */	blr 
.endfn getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl

.fn getCamDistVol__Q23PSM13Scene_ObjectsFUc, global
/* 80467EF4 00464E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80467EF8 00464E38  7C 08 02 A6 */	mflr r0
/* 80467EFC 00464E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80467F00 00464E40  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80467F04 00464E44  4B EC CF 3D */	bl getCurrentCamDistVol__Q26PSGame9CameraMgrFUc
/* 80467F08 00464E48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467F0C 00464E4C  7C 08 03 A6 */	mtlr r0
/* 80467F10 00464E50  38 21 00 10 */	addi r1, r1, 0x10
/* 80467F14 00464E54  4E 80 00 20 */	blr 
.endfn getCamDistVol__Q23PSM13Scene_ObjectsFUc

.fn exec__Q23PSM13Scene_ObjectsFv, global
/* 80467F18 00464E58  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80467F1C 00464E5C  7C 08 02 A6 */	mflr r0
/* 80467F20 00464E60  90 01 00 84 */	stw r0, 0x84(r1)
/* 80467F24 00464E64  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80467F28 00464E68  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80467F2C 00464E6C  7C 7E 1B 78 */	mr r30, r3
/* 80467F30 00464E70  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80467F34 00464E74  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80467F38 00464E78  3C 03 10 00 */	addis r0, r3, 0x1000
/* 80467F3C 00464E7C  28 00 00 00 */	cmplwi r0, 0
/* 80467F40 00464E80  41 82 00 0C */	beq .L_80467F4C
/* 80467F44 00464E84  38 03 00 01 */	addi r0, r3, 1
/* 80467F48 00464E88  90 1E 00 34 */	stw r0, 0x34(r30)
.L_80467F4C:
/* 80467F4C 00464E8C  80 0D 96 A0 */	lwz r0, cameraMgr__4Game@sda21(r13)
/* 80467F50 00464E90  38 60 00 00 */	li r3, 0
/* 80467F54 00464E94  98 6D 9C 94 */	stb r3, sDopedPikminNum__Q23PSM4Piki@sda21(r13)
/* 80467F58 00464E98  28 00 00 00 */	cmplwi r0, 0
/* 80467F5C 00464E9C  41 82 01 98 */	beq .L_804680F4
/* 80467F60 00464EA0  3B E0 00 00 */	li r31, 0
/* 80467F64 00464EA4  48 00 01 7C */	b .L_804680E0
.L_80467F68:
/* 80467F68 00464EA8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80467F6C 00464EAC  57 E0 15 BA */	rlwinm r0, r31, 2, 0x16, 0x1d
/* 80467F70 00464EB0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80467F74 00464EB4  7F A3 00 2E */	lwzx r29, r3, r0
/* 80467F78 00464EB8  28 1D 00 00 */	cmplwi r29, 0
/* 80467F7C 00464EBC  41 82 01 60 */	beq .L_804680DC
/* 80467F80 00464EC0  7F A3 EB 78 */	mr r3, r29
/* 80467F84 00464EC4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80467F88 00464EC8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80467F8C 00464ECC  7D 89 03 A6 */	mtctr r12
/* 80467F90 00464ED0  4E 80 04 21 */	bctrl 
/* 80467F94 00464ED4  C0 43 00 00 */	lfs f2, 0(r3)
/* 80467F98 00464ED8  7F A4 EB 78 */	mr r4, r29
/* 80467F9C 00464EDC  C0 23 00 04 */	lfs f1, 4(r3)
/* 80467FA0 00464EE0  C0 03 00 08 */	lfs f0, 8(r3)
/* 80467FA4 00464EE4  38 61 00 50 */	addi r3, r1, 0x50
/* 80467FA8 00464EE8  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80467FAC 00464EEC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80467FB0 00464EF0  80 C1 00 2C */	lwz r6, 0x2c(r1)
/* 80467FB4 00464EF4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80467FB8 00464EF8  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 80467FBC 00464EFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80467FC0 00464F00  90 C1 00 44 */	stw r6, 0x44(r1)
/* 80467FC4 00464F04  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80467FC8 00464F08  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80467FCC 00464F0C  4B FB 2A CD */	bl getLookAtPosition__6CameraFv
/* 80467FD0 00464F10  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80467FD4 00464F14  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 80467FD8 00464F18  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80467FDC 00464F1C  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80467FE0 00464F20  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80467FE4 00464F24  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80467FE8 00464F28  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80467FEC 00464F2C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80467FF0 00464F30  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80467FF4 00464F34  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80467FF8 00464F38  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80467FFC 00464F3C  90 61 00 60 */	stw r3, 0x60(r1)
/* 80468000 00464F40  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 80468004 00464F44  90 01 00 64 */	stw r0, 0x64(r1)
/* 80468008 00464F48  EC 61 00 28 */	fsubs f3, f1, f0
/* 8046800C 00464F4C  C0 41 00 60 */	lfs f2, 0x60(r1)
/* 80468010 00464F50  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80468014 00464F54  C0 21 00 64 */	lfs f1, 0x64(r1)
/* 80468018 00464F58  EC 42 00 28 */	fsubs f2, f2, f0
/* 8046801C 00464F5C  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80468020 00464F60  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 80468024 00464F64  EC 21 00 28 */	fsubs f1, f1, f0
/* 80468028 00464F68  C0 02 29 3C */	lfs f0, lbl_80520C9C@sda21(r2)
/* 8046802C 00464F6C  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80468030 00464F70  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80468034 00464F74  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80468038 00464F78  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8046803C 00464F7C  90 01 00 08 */	stw r0, 8(r1)
/* 80468040 00464F80  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80468044 00464F84  90 61 00 0C */	stw r3, 0xc(r1)
/* 80468048 00464F88  C0 41 00 08 */	lfs f2, 8(r1)
/* 8046804C 00464F8C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80468050 00464F90  90 01 00 10 */	stw r0, 0x10(r1)
/* 80468054 00464F94  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80468058 00464F98  EC 41 00 72 */	fmuls f2, f1, f1
/* 8046805C 00464F9C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80468060 00464FA0  D0 61 00 08 */	stfs f3, 8(r1)
/* 80468064 00464FA4  EC 21 00 72 */	fmuls f1, f1, f1
/* 80468068 00464FA8  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8046806C 00464FAC  80 01 00 08 */	lwz r0, 8(r1)
/* 80468070 00464FB0  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80468074 00464FB4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80468078 00464FB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046807C 00464FBC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80468080 00464FC0  90 61 00 18 */	stw r3, 0x18(r1)
/* 80468084 00464FC4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80468088 00464FC8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8046808C 00464FCC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80468090 00464FD0  EC 22 08 2A */	fadds f1, f2, f1
/* 80468094 00464FD4  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80468098 00464FD8  EC 22 08 2A */	fadds f1, f2, f1
/* 8046809C 00464FDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804680A0 00464FE0  40 81 00 0C */	ble .L_804680AC
/* 804680A4 00464FE4  FC 00 08 34 */	frsqrte f0, f1
/* 804680A8 00464FE8  EC 20 00 72 */	fmuls f1, f0, f1
.L_804680AC:
/* 804680AC 00464FEC  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 804680B0 00464FF0  7F E4 FB 78 */	mr r4, r31
/* 804680B4 00464FF4  4B EC CD 41 */	bl update__Q26PSGame9CameraMgrFUcf
/* 804680B8 00464FF8  7F A3 EB 78 */	mr r3, r29
/* 804680BC 00464FFC  81 9D 00 00 */	lwz r12, 0(r29)
/* 804680C0 00465000  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 804680C4 00465004  7D 89 03 A6 */	mtctr r12
/* 804680C8 00465008  4E 80 04 21 */	bctrl 
/* 804680CC 0046500C  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 804680D0 00465010  80 BE 00 28 */	lwz r5, 0x28(r30)
/* 804680D4 00465014  38 04 00 4C */	addi r0, r4, 0x4c
/* 804680D8 00465018  7C 65 01 AE */	stbx r3, r5, r0
.L_804680DC:
/* 804680DC 0046501C  3B FF 00 01 */	addi r31, r31, 1
.L_804680E0:
/* 804680E0 00465020  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 804680E4 00465024  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 804680E8 00465028  88 03 00 07 */	lbz r0, 7(r3)
/* 804680EC 0046502C  7C 04 00 40 */	cmplw r4, r0
/* 804680F0 00465030  41 80 FE 78 */	blt .L_80467F68
.L_804680F4:
/* 804680F4 00465034  7F C3 F3 78 */	mr r3, r30
/* 804680F8 00465038  4B ED 99 81 */	bl exec__Q28PSSystem5SceneFv
/* 804680FC 0046503C  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80468100 00465040  28 03 00 00 */	cmplwi r3, 0
/* 80468104 00465044  41 82 00 08 */	beq .L_8046810C
/* 80468108 00465048  4B FF 4D DD */	bl frameEnd_onPlaySe__Q23PSM6ObjMgrFv
.L_8046810C:
/* 8046810C 0046504C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80468110 00465050  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80468114 00465054  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80468118 00465058  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8046811C 0046505C  7C 08 03 A6 */	mtlr r0
/* 80468120 00465060  38 21 00 80 */	addi r1, r1, 0x80
/* 80468124 00465064  4E 80 00 20 */	blr 
.endfn exec__Q23PSM13Scene_ObjectsFv

.fn init__Q23PSM10Scene_GameFv, global
/* 80468128 00465068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046812C 0046506C  7C 08 02 A6 */	mflr r0
/* 80468130 00465070  90 01 00 14 */	stw r0, 0x14(r1)
/* 80468134 00465074  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80468138 00465078  7C 7F 1B 78 */	mr r31, r3
/* 8046813C 0046507C  93 C1 00 08 */	stw r30, 8(r1)
/* 80468140 00465080  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80468144 00465084  28 00 00 00 */	cmplwi r0, 0
/* 80468148 00465088  40 82 00 20 */	bne .L_80468168
/* 8046814C 0046508C  3C 60 80 4A */	lis r3, lbl_8049D944@ha
/* 80468150 00465090  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80468154 00465094  38 63 D9 44 */	addi r3, r3, lbl_8049D944@l
/* 80468158 00465098  38 80 01 D3 */	li r4, 0x1d3
/* 8046815C 0046509C  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80468160 004650A0  4C C6 31 82 */	crclr 6
/* 80468164 004650A4  4B BC 24 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468168:
/* 80468168 004650A8  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046816C 004650AC  28 1E 00 00 */	cmplwi r30, 0
/* 80468170 004650B0  40 82 00 20 */	bne .L_80468190
/* 80468174 004650B4  3C 60 80 4A */	lis r3, lbl_8049D944@ha
/* 80468178 004650B8  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046817C 004650BC  38 63 D9 44 */	addi r3, r3, lbl_8049D944@l
/* 80468180 004650C0  38 80 01 DC */	li r4, 0x1dc
/* 80468184 004650C4  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80468188 004650C8  4C C6 31 82 */	crclr 6
/* 8046818C 004650CC  4B BC 24 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468190:
/* 80468190 004650D0  7F C3 F3 78 */	mr r3, r30
/* 80468194 004650D4  7F E4 FB 78 */	mr r4, r31
/* 80468198 004650D8  4B FF 25 09 */	bl initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game
/* 8046819C 004650DC  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 804681A0 004650E0  3B C0 00 01 */	li r30, 1
/* 804681A4 004650E4  28 00 00 00 */	cmplwi r0, 0
/* 804681A8 004650E8  40 82 00 68 */	bne .L_80468210
/* 804681AC 004650EC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804681B0 004650F0  88 03 00 06 */	lbz r0, 6(r3)
/* 804681B4 004650F4  28 00 00 14 */	cmplwi r0, 0x14
/* 804681B8 004650F8  41 82 00 58 */	beq .L_80468210
/* 804681BC 004650FC  81 83 00 00 */	lwz r12, 0(r3)
/* 804681C0 00465100  81 8C 00 08 */	lwz r12, 8(r12)
/* 804681C4 00465104  7D 89 03 A6 */	mtctr r12
/* 804681C8 00465108  4E 80 04 21 */	bctrl 
/* 804681CC 0046510C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804681D0 00465110  41 82 00 44 */	beq .L_80468214
/* 804681D4 00465114  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804681D8 00465118  88 03 00 06 */	lbz r0, 6(r3)
/* 804681DC 0046511C  28 00 00 03 */	cmplwi r0, 3
/* 804681E0 00465120  40 82 00 34 */	bne .L_80468214
/* 804681E4 00465124  4B EC C0 85 */	bl getCaveNoFromID__Q26PSGame13CaveFloorInfoFv
/* 804681E8 00465128  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 804681EC 0046512C  28 00 00 03 */	cmplwi r0, 3
/* 804681F0 00465130  40 82 00 24 */	bne .L_80468214
/* 804681F4 00465134  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804681F8 00465138  81 83 00 00 */	lwz r12, 0(r3)
/* 804681FC 0046513C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80468200 00465140  7D 89 03 A6 */	mtctr r12
/* 80468204 00465144  4E 80 04 21 */	bctrl 
/* 80468208 00465148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046820C 0046514C  40 82 00 08 */	bne .L_80468214
.L_80468210:
/* 80468210 00465150  3B C0 00 00 */	li r30, 0
.L_80468214:
/* 80468214 00465154  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80468218 00465158  41 82 00 0C */	beq .L_80468224
/* 8046821C 0046515C  7F E3 FB 78 */	mr r3, r31
/* 80468220 00465160  48 00 02 35 */	bl attachBossFaderMgr__Q23PSM10Scene_GameFv
.L_80468224:
/* 80468224 00465164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80468228 00465168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046822C 0046516C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80468230 00465170  7C 08 03 A6 */	mtlr r0
/* 80468234 00465174  38 21 00 10 */	addi r1, r1, 0x10
/* 80468238 00465178  4E 80 00 20 */	blr 
.endfn init__Q23PSM10Scene_GameFv

.fn __dt__Q23PSM10Scene_GameFv, global
/* 8046823C 0046517C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80468240 00465180  7C 08 02 A6 */	mflr r0
/* 80468244 00465184  90 01 00 14 */	stw r0, 0x14(r1)
/* 80468248 00465188  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046824C 0046518C  7C 9F 23 78 */	mr r31, r4
/* 80468250 00465190  93 C1 00 08 */	stw r30, 8(r1)
/* 80468254 00465194  7C 7E 1B 79 */	or. r30, r3, r3
/* 80468258 00465198  41 82 01 30 */	beq .L_80468388
/* 8046825C 0046519C  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Game@ha
/* 80468260 004651A0  38 03 F4 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Game@l
/* 80468264 004651A4  90 1E 00 00 */	stw r0, 0(r30)
/* 80468268 004651A8  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046826C 004651AC  28 03 00 00 */	cmplwi r3, 0
/* 80468270 004651B0  41 82 00 18 */	beq .L_80468288
/* 80468274 004651B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80468278 004651B8  38 80 00 01 */	li r4, 1
/* 8046827C 004651BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80468280 004651C0  7D 89 03 A6 */	mtctr r12
/* 80468284 004651C4  4E 80 04 21 */	bctrl 
.L_80468288:
/* 80468288 004651C8  38 00 00 00 */	li r0, 0
/* 8046828C 004651CC  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80468290 004651D0  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80468294 004651D4  28 03 00 00 */	cmplwi r3, 0
/* 80468298 004651D8  41 82 00 0C */	beq .L_804682A4
/* 8046829C 004651DC  38 80 00 01 */	li r4, 1
/* 804682A0 004651E0  4B ED 89 D9 */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
.L_804682A4:
/* 804682A4 004651E4  34 1E 00 38 */	addic. r0, r30, 0x38
/* 804682A8 004651E8  41 82 00 10 */	beq .L_804682B8
/* 804682AC 004651EC  38 7E 00 38 */	addi r3, r30, 0x38
/* 804682B0 004651F0  38 80 00 00 */	li r4, 0
/* 804682B4 004651F4  4B BB E5 B5 */	bl __dt__10JSUPtrListFv
.L_804682B8:
/* 804682B8 004651F8  28 1E 00 00 */	cmplwi r30, 0
/* 804682BC 004651FC  41 82 00 BC */	beq .L_80468378
/* 804682C0 00465200  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 804682C4 00465204  38 03 F5 84 */	addi r0, r3, __vt__Q23PSM13Scene_Objects@l
/* 804682C8 00465208  90 1E 00 00 */	stw r0, 0(r30)
/* 804682CC 0046520C  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 804682D0 00465210  28 03 00 00 */	cmplwi r3, 0
/* 804682D4 00465214  41 82 00 18 */	beq .L_804682EC
/* 804682D8 00465218  81 83 00 28 */	lwz r12, 0x28(r3)
/* 804682DC 0046521C  38 80 00 01 */	li r4, 1
/* 804682E0 00465220  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 804682E4 00465224  7D 89 03 A6 */	mtctr r12
/* 804682E8 00465228  4E 80 04 21 */	bctrl 
.L_804682EC:
/* 804682EC 0046522C  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 804682F0 00465230  38 00 00 00 */	li r0, 0
/* 804682F4 00465234  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 804682F8 00465238  28 03 00 00 */	cmplwi r3, 0
/* 804682FC 0046523C  41 82 00 18 */	beq .L_80468314
/* 80468300 00465240  81 83 00 00 */	lwz r12, 0(r3)
/* 80468304 00465244  38 80 00 01 */	li r4, 1
/* 80468308 00465248  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046830C 0046524C  7D 89 03 A6 */	mtctr r12
/* 80468310 00465250  4E 80 04 21 */	bctrl 
.L_80468314:
/* 80468314 00465254  38 00 00 00 */	li r0, 0
/* 80468318 00465258  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046831C 0046525C  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80468320 00465260  28 03 00 00 */	cmplwi r3, 0
/* 80468324 00465264  41 82 00 0C */	beq .L_80468330
/* 80468328 00465268  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8046832C 0046526C  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_80468330:
/* 80468330 00465270  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80468334 00465274  28 03 00 00 */	cmplwi r3, 0
/* 80468338 00465278  41 82 00 18 */	beq .L_80468350
/* 8046833C 0046527C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80468340 00465280  38 80 00 01 */	li r4, 1
/* 80468344 00465284  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80468348 00465288  7D 89 03 A6 */	mtctr r12
/* 8046834C 0046528C  4E 80 04 21 */	bctrl 
.L_80468350:
/* 80468350 00465290  38 00 00 00 */	li r0, 0
/* 80468354 00465294  28 1E 00 00 */	cmplwi r30, 0
/* 80468358 00465298  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046835C 0046529C  41 82 00 1C */	beq .L_80468378
/* 80468360 004652A0  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 80468364 004652A4  7F C3 F3 78 */	mr r3, r30
/* 80468368 004652A8  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 8046836C 004652AC  38 80 00 00 */	li r4, 0
/* 80468370 004652B0  90 1E 00 00 */	stw r0, 0(r30)
/* 80468374 004652B4  4B EC D2 AD */	bl __dt__Q26PSGame8PikSceneFv
.L_80468378:
/* 80468378 004652B8  7F E0 07 35 */	extsh. r0, r31
/* 8046837C 004652BC  40 81 00 0C */	ble .L_80468388
/* 80468380 004652C0  7F C3 F3 78 */	mr r3, r30
/* 80468384 004652C4  4B BB BD 31 */	bl __dl__FPv
.L_80468388:
/* 80468388 004652C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046838C 004652CC  7F C3 F3 78 */	mr r3, r30
/* 80468390 004652D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80468394 004652D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80468398 004652D8  7C 08 03 A6 */	mtlr r0
/* 8046839C 004652DC  38 21 00 10 */	addi r1, r1, 0x10
/* 804683A0 004652E0  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM10Scene_GameFv

.fn __dt__Q33PSM12BossBgmFader3MgrFv, weak
/* 804683A4 004652E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804683A8 004652E8  7C 08 02 A6 */	mflr r0
/* 804683AC 004652EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804683B0 004652F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804683B4 004652F4  7C 9F 23 78 */	mr r31, r4
/* 804683B8 004652F8  93 C1 00 08 */	stw r30, 8(r1)
/* 804683BC 004652FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 804683C0 00465300  41 82 00 78 */	beq .L_80468438
/* 804683C4 00465304  3C 60 80 4F */	lis r3, __vt__Q33PSM12BossBgmFader3Mgr@ha
/* 804683C8 00465308  34 1E 00 04 */	addic. r0, r30, 4
/* 804683CC 0046530C  38 03 F4 DC */	addi r0, r3, __vt__Q33PSM12BossBgmFader3Mgr@l
/* 804683D0 00465310  90 1E 00 00 */	stw r0, 0(r30)
/* 804683D4 00465314  41 82 00 38 */	beq .L_8046840C
/* 804683D8 00465318  3C 60 80 4F */	lis r3, __vt__Q33PSM12BossBgmFader17TypedProc_MidBoss@ha
/* 804683DC 0046531C  34 1E 00 04 */	addic. r0, r30, 4
/* 804683E0 00465320  38 03 F6 D8 */	addi r0, r3, __vt__Q33PSM12BossBgmFader17TypedProc_MidBoss@l
/* 804683E4 00465324  90 1E 00 10 */	stw r0, 0x10(r30)
/* 804683E8 00465328  41 82 00 24 */	beq .L_8046840C
/* 804683EC 0046532C  3C 60 80 4F */	lis r3, __vt__Q33PSM12BossBgmFader9TypedProc@ha
/* 804683F0 00465330  34 1E 00 04 */	addic. r0, r30, 4
/* 804683F4 00465334  38 03 F6 E4 */	addi r0, r3, __vt__Q33PSM12BossBgmFader9TypedProc@l
/* 804683F8 00465338  90 1E 00 10 */	stw r0, 0x10(r30)
/* 804683FC 0046533C  41 82 00 10 */	beq .L_8046840C
/* 80468400 00465340  38 7E 00 04 */	addi r3, r30, 4
/* 80468404 00465344  38 80 00 00 */	li r4, 0
/* 80468408 00465348  4B BB E4 61 */	bl __dt__10JSUPtrListFv
.L_8046840C:
/* 8046840C 0046534C  28 1E 00 00 */	cmplwi r30, 0
/* 80468410 00465350  41 82 00 18 */	beq .L_80468428
/* 80468414 00465354  3C 60 80 4F */	lis r3, "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@ha
/* 80468418 00465358  38 00 00 00 */	li r0, 0
/* 8046841C 0046535C  38 63 F4 D0 */	addi r3, r3, "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@l
/* 80468420 00465360  90 7E 00 00 */	stw r3, 0(r30)
/* 80468424 00465364  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
.L_80468428:
/* 80468428 00465368  7F E0 07 35 */	extsh. r0, r31
/* 8046842C 0046536C  40 81 00 0C */	ble .L_80468438
/* 80468430 00465370  7F C3 F3 78 */	mr r3, r30
/* 80468434 00465374  4B BB BC 81 */	bl __dl__FPv
.L_80468438:
/* 80468438 00465378  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046843C 0046537C  7F C3 F3 78 */	mr r3, r30
/* 80468440 00465380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80468444 00465384  83 C1 00 08 */	lwz r30, 8(r1)
/* 80468448 00465388  7C 08 03 A6 */	mtlr r0
/* 8046844C 0046538C  38 21 00 10 */	addi r1, r1, 0x10
/* 80468450 00465390  4E 80 00 20 */	blr 
.endfn __dt__Q33PSM12BossBgmFader3MgrFv

.fn attachBossFaderMgr__Q23PSM10Scene_GameFv, global
/* 80468454 00465394  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80468458 00465398  7C 08 02 A6 */	mflr r0
/* 8046845C 0046539C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80468460 004653A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80468464 004653A4  7C 7F 1B 78 */	mr r31, r3
/* 80468468 004653A8  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046846C 004653AC  28 00 00 00 */	cmplwi r0, 0
/* 80468470 004653B0  40 82 00 20 */	bne .L_80468490
/* 80468474 004653B4  3C 60 80 4A */	lis r3, lbl_8049D938@ha
/* 80468478 004653B8  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046847C 004653BC  38 63 D9 38 */	addi r3, r3, lbl_8049D938@l
/* 80468480 004653C0  38 80 00 89 */	li r4, 0x89
/* 80468484 004653C4  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80468488 004653C8  4C C6 31 82 */	crclr 6
/* 8046848C 004653CC  4B BC 21 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468490:
/* 80468490 004653D0  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80468494 004653D4  90 1F 00 50 */	stw r0, 0x50(r31)
/* 80468498 004653D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046849C 004653DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804684A0 004653E0  7C 08 03 A6 */	mtlr r0
/* 804684A4 004653E4  38 21 00 10 */	addi r1, r1, 0x10
/* 804684A8 004653E8  4E 80 00 20 */	blr 
.endfn attachBossFaderMgr__Q23PSM10Scene_GameFv

.fn bossKilled__Q23PSM10Scene_GameFPQ23PSM9EnemyBoss, global
/* 804684AC 004653EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804684B0 004653F0  7C 08 02 A6 */	mflr r0
/* 804684B4 004653F4  3C 60 80 4A */	lis r3, lbl_8049D908@ha
/* 804684B8 004653F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 804684BC 004653FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804684C0 00465400  7C 9F 23 78 */	mr r31, r4
/* 804684C4 00465404  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804684C8 00465408  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804684CC 0046540C  3B A3 D9 08 */	addi r29, r3, lbl_8049D908@l
/* 804684D0 00465410  93 81 00 10 */	stw r28, 0x10(r1)
/* 804684D4 00465414  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804684D8 00465418  28 00 00 00 */	cmplwi r0, 0
/* 804684DC 0046541C  40 82 00 18 */	bne .L_804684F4
/* 804684E0 00465420  38 7D 00 3C */	addi r3, r29, 0x3c
/* 804684E4 00465424  38 BD 00 24 */	addi r5, r29, 0x24
/* 804684E8 00465428  38 80 01 D3 */	li r4, 0x1d3
/* 804684EC 0046542C  4C C6 31 82 */	crclr 6
/* 804684F0 00465430  4B BC 21 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804684F4:
/* 804684F4 00465434  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 804684F8 00465438  28 1E 00 00 */	cmplwi r30, 0
/* 804684FC 0046543C  40 82 00 18 */	bne .L_80468514
/* 80468500 00465440  38 7D 00 3C */	addi r3, r29, 0x3c
/* 80468504 00465444  38 BD 00 24 */	addi r5, r29, 0x24
/* 80468508 00465448  38 80 01 DC */	li r4, 0x1dc
/* 8046850C 0046544C  4C C6 31 82 */	crclr 6
/* 80468510 00465450  4B BC 21 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468514:
/* 80468514 00465454  80 1E 00 04 */	lwz r0, 4(r30)
/* 80468518 00465458  28 00 00 00 */	cmplwi r0, 0
/* 8046851C 0046545C  40 82 00 18 */	bne .L_80468534
/* 80468520 00465460  38 7D 00 48 */	addi r3, r29, 0x48
/* 80468524 00465464  38 BD 00 24 */	addi r5, r29, 0x24
/* 80468528 00465468  38 80 00 C7 */	li r4, 0xc7
/* 8046852C 0046546C  4C C6 31 82 */	crclr 6
/* 80468530 00465470  4B BC 21 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468534:
/* 80468534 00465474  80 7E 00 04 */	lwz r3, 4(r30)
/* 80468538 00465478  80 63 00 04 */	lwz r3, 4(r3)
/* 8046853C 0046547C  28 03 00 00 */	cmplwi r3, 0
/* 80468540 00465480  40 82 00 0C */	bne .L_8046854C
/* 80468544 00465484  3B C0 00 00 */	li r30, 0
/* 80468548 00465488  48 00 00 0C */	b .L_80468554
.L_8046854C:
/* 8046854C 0046548C  4B EC D1 35 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 80468550 00465490  7C 7E 1B 78 */	mr r30, r3
.L_80468554:
/* 80468554 00465494  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 80468558 00465498  3B 80 00 01 */	li r28, 1
/* 8046855C 0046549C  28 00 00 00 */	cmplwi r0, 0
/* 80468560 004654A0  40 82 00 18 */	bne .L_80468578
/* 80468564 004654A4  38 7D 00 30 */	addi r3, r29, 0x30
/* 80468568 004654A8  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046856C 004654AC  38 80 00 89 */	li r4, 0x89
/* 80468570 004654B0  4C C6 31 82 */	crclr 6
/* 80468574 004654B4  4B BC 20 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468578:
/* 80468578 004654B8  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046857C 004654BC  80 83 00 04 */	lwz r4, 4(r3)
/* 80468580 004654C0  48 00 00 1C */	b .L_8046859C
.L_80468584:
/* 80468584 004654C4  80 64 00 00 */	lwz r3, 0(r4)
/* 80468588 004654C8  88 03 00 FE */	lbz r0, 0xfe(r3)
/* 8046858C 004654CC  28 00 00 00 */	cmplwi r0, 0
/* 80468590 004654D0  41 82 00 08 */	beq .L_80468598
/* 80468594 004654D4  3B 80 00 00 */	li r28, 0
.L_80468598:
/* 80468598 004654D8  80 84 00 0C */	lwz r4, 0xc(r4)
.L_8046859C:
/* 8046859C 004654DC  28 04 00 00 */	cmplwi r4, 0
/* 804685A0 004654E0  40 82 FF E4 */	bne .L_80468584
/* 804685A4 004654E4  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 804685A8 004654E8  40 82 00 C0 */	bne .L_80468668
/* 804685AC 004654EC  28 1E 00 00 */	cmplwi r30, 0
/* 804685B0 004654F0  41 82 00 B8 */	beq .L_80468668
/* 804685B4 004654F4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 804685B8 004654F8  28 00 00 00 */	cmplwi r0, 0
/* 804685BC 004654FC  40 82 00 18 */	bne .L_804685D4
/* 804685C0 00465500  38 7D 00 3C */	addi r3, r29, 0x3c
/* 804685C4 00465504  38 BD 00 24 */	addi r5, r29, 0x24
/* 804685C8 00465508  38 80 01 D3 */	li r4, 0x1d3
/* 804685CC 0046550C  4C C6 31 82 */	crclr 6
/* 804685D0 00465510  4B BC 20 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804685D4:
/* 804685D4 00465514  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 804685D8 00465518  28 1E 00 00 */	cmplwi r30, 0
/* 804685DC 0046551C  40 82 00 18 */	bne .L_804685F4
/* 804685E0 00465520  38 7D 00 3C */	addi r3, r29, 0x3c
/* 804685E4 00465524  38 BD 00 24 */	addi r5, r29, 0x24
/* 804685E8 00465528  38 80 01 DC */	li r4, 0x1dc
/* 804685EC 0046552C  4C C6 31 82 */	crclr 6
/* 804685F0 00465530  4B BC 20 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804685F4:
/* 804685F4 00465534  80 1E 00 04 */	lwz r0, 4(r30)
/* 804685F8 00465538  28 00 00 00 */	cmplwi r0, 0
/* 804685FC 0046553C  40 82 00 18 */	bne .L_80468614
/* 80468600 00465540  38 7D 00 48 */	addi r3, r29, 0x48
/* 80468604 00465544  38 BD 00 24 */	addi r5, r29, 0x24
/* 80468608 00465548  38 80 00 C7 */	li r4, 0xc7
/* 8046860C 0046554C  4C C6 31 82 */	crclr 6
/* 80468610 00465550  4B BC 20 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468614:
/* 80468614 00465554  80 7E 00 04 */	lwz r3, 4(r30)
/* 80468618 00465558  80 63 00 04 */	lwz r3, 4(r3)
/* 8046861C 0046555C  28 03 00 00 */	cmplwi r3, 0
/* 80468620 00465560  40 82 00 0C */	bne .L_8046862C
/* 80468624 00465564  38 60 00 00 */	li r3, 0
/* 80468628 00465568  48 00 00 08 */	b .L_80468630
.L_8046862C:
/* 8046862C 0046556C  4B EC D0 55 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
.L_80468630:
/* 80468630 00465570  28 03 00 00 */	cmplwi r3, 0
/* 80468634 00465574  41 82 00 34 */	beq .L_80468668
/* 80468638 00465578  A0 03 01 30 */	lhz r0, 0x130(r3)
/* 8046863C 0046557C  28 00 00 02 */	cmplwi r0, 2
/* 80468640 00465580  41 82 00 10 */	beq .L_80468650
/* 80468644 00465584  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 80468648 00465588  28 00 00 08 */	cmplwi r0, 8
/* 8046864C 0046558C  40 82 00 1C */	bne .L_80468668
.L_80468650:
/* 80468650 00465590  7F E3 FB 78 */	mr r3, r31
/* 80468654 00465594  38 80 00 01 */	li r4, 1
/* 80468658 00465598  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 8046865C 0046559C  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80468660 004655A0  7D 89 03 A6 */	mtctr r12
/* 80468664 004655A4  4E 80 04 21 */	bctrl 
.L_80468668:
/* 80468668 004655A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046866C 004655AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80468670 004655B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80468674 004655B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80468678 004655B8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8046867C 004655BC  7C 08 03 A6 */	mtlr r0
/* 80468680 004655C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80468684 004655C4  4E 80 00 20 */	blr 
.endfn bossKilled__Q23PSM10Scene_GameFPQ23PSM9EnemyBoss

.fn startMainSeq__Q23PSM10Scene_GameFv, global
/* 80468688 004655C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046868C 004655CC  7C 08 02 A6 */	mflr r0
/* 80468690 004655D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80468694 004655D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80468698 004655D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046869C 004655DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804686A0 004655E0  7C 7D 1B 78 */	mr r29, r3
/* 804686A4 004655E4  80 03 00 50 */	lwz r0, 0x50(r3)
/* 804686A8 004655E8  28 00 00 00 */	cmplwi r0, 0
/* 804686AC 004655EC  41 82 00 90 */	beq .L_8046873C
/* 804686B0 004655F0  83 FD 00 10 */	lwz r31, 0x10(r29)
/* 804686B4 004655F4  3B C0 00 00 */	li r30, 0
/* 804686B8 004655F8  48 00 00 64 */	b .L_8046871C
.L_804686BC:
/* 804686BC 004655FC  80 7F 00 00 */	lwz r3, 0(r31)
/* 804686C0 00465600  81 83 00 10 */	lwz r12, 0x10(r3)
/* 804686C4 00465604  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804686C8 00465608  7D 89 03 A6 */	mtctr r12
/* 804686CC 0046560C  4E 80 04 21 */	bctrl 
/* 804686D0 00465610  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 804686D4 00465614  41 82 00 40 */	beq .L_80468714
/* 804686D8 00465618  80 7F 00 00 */	lwz r3, 0(r31)
/* 804686DC 0046561C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 804686E0 00465620  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 804686E4 00465624  7D 89 03 A6 */	mtctr r12
/* 804686E8 00465628  4E 80 04 21 */	bctrl 
/* 804686EC 0046562C  80 63 00 00 */	lwz r3, 0(r3)
/* 804686F0 00465630  28 03 00 00 */	cmplwi r3, 0
/* 804686F4 00465634  41 82 00 20 */	beq .L_80468714
/* 804686F8 00465638  81 83 00 10 */	lwz r12, 0x10(r3)
/* 804686FC 0046563C  38 80 00 00 */	li r4, 0
/* 80468700 00465640  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 80468704 00465644  38 A0 00 00 */	li r5, 0
/* 80468708 00465648  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046870C 0046564C  7D 89 03 A6 */	mtctr r12
/* 80468710 00465650  4E 80 04 21 */	bctrl 
.L_80468714:
/* 80468714 00465654  83 FF 00 0C */	lwz r31, 0xc(r31)
/* 80468718 00465658  3B DE 00 01 */	addi r30, r30, 1
.L_8046871C:
/* 8046871C 0046565C  28 1F 00 00 */	cmplwi r31, 0
/* 80468720 00465660  40 82 FF 9C */	bne .L_804686BC
/* 80468724 00465664  7F A3 EB 78 */	mr r3, r29
/* 80468728 00465668  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046872C 0046566C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80468730 00465670  7D 89 03 A6 */	mtctr r12
/* 80468734 00465674  4E 80 04 21 */	bctrl 
/* 80468738 00465678  48 00 00 1C */	b .L_80468754
.L_8046873C:
/* 8046873C 0046567C  4B ED 91 BD */	bl startMainSeq__Q28PSSystem5SceneFv
/* 80468740 00465680  7F A3 EB 78 */	mr r3, r29
/* 80468744 00465684  81 9D 00 00 */	lwz r12, 0(r29)
/* 80468748 00465688  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046874C 0046568C  7D 89 03 A6 */	mtctr r12
/* 80468750 00465690  4E 80 04 21 */	bctrl 
.L_80468754:
/* 80468754 00465694  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 80468758 00465698  28 03 00 00 */	cmplwi r3, 0
/* 8046875C 0046569C  41 82 00 08 */	beq .L_80468764
/* 80468760 004656A0  4B ED 85 4D */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80468764:
/* 80468764 004656A4  38 00 00 00 */	li r0, 0
/* 80468768 004656A8  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 8046876C 004656AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80468770 004656B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80468774 004656B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80468778 004656B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046877C 004656BC  7C 08 03 A6 */	mtlr r0
/* 80468780 004656C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80468784 004656C4  4E 80 00 20 */	blr 
.endfn startMainSeq__Q23PSM10Scene_GameFv

.fn stopMainSeq__Q23PSM10Scene_GameFUl, global
/* 80468788 004656C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046878C 004656CC  7C 08 02 A6 */	mflr r0
/* 80468790 004656D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80468794 004656D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80468798 004656D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046879C 004656DC  7C 9E 23 78 */	mr r30, r4
/* 804687A0 004656E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804687A4 004656E4  7C 7D 1B 78 */	mr r29, r3
/* 804687A8 004656E8  80 03 00 50 */	lwz r0, 0x50(r3)
/* 804687AC 004656EC  28 00 00 00 */	cmplwi r0, 0
/* 804687B0 004656F0  41 82 00 34 */	beq .L_804687E4
/* 804687B4 004656F4  83 FD 00 10 */	lwz r31, 0x10(r29)
/* 804687B8 004656F8  48 00 00 20 */	b .L_804687D8
.L_804687BC:
/* 804687BC 004656FC  80 7F 00 00 */	lwz r3, 0(r31)
/* 804687C0 00465700  7F C4 F3 78 */	mr r4, r30
/* 804687C4 00465704  81 83 00 10 */	lwz r12, 0x10(r3)
/* 804687C8 00465708  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 804687CC 0046570C  7D 89 03 A6 */	mtctr r12
/* 804687D0 00465710  4E 80 04 21 */	bctrl 
/* 804687D4 00465714  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_804687D8:
/* 804687D8 00465718  28 1F 00 00 */	cmplwi r31, 0
/* 804687DC 0046571C  40 82 FF E0 */	bne .L_804687BC
/* 804687E0 00465720  48 00 00 08 */	b .L_804687E8
.L_804687E4:
/* 804687E4 00465724  4B ED 91 51 */	bl stopMainSeq__Q28PSSystem5SceneFUl
.L_804687E8:
/* 804687E8 00465728  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 804687EC 0046572C  28 03 00 00 */	cmplwi r3, 0
/* 804687F0 00465730  41 82 00 08 */	beq .L_804687F8
/* 804687F4 00465734  4B ED 85 2D */	bl off__Q28PSSystem8EnvSeMgrFv
.L_804687F8:
/* 804687F8 00465738  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804687FC 0046573C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80468800 00465740  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80468804 00465744  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80468808 00465748  7C 08 03 A6 */	mtlr r0
/* 8046880C 0046574C  38 21 00 20 */	addi r1, r1, 0x20
/* 80468810 00465750  4E 80 00 20 */	blr 
.endfn stopMainSeq__Q23PSM10Scene_GameFUl

.fn stopAllSound__Q23PSM10Scene_GameFUl, global
/* 80468814 00465754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80468818 00465758  7C 08 02 A6 */	mflr r0
/* 8046881C 0046575C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80468820 00465760  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80468824 00465764  7C 9F 23 78 */	mr r31, r4
/* 80468828 00465768  93 C1 00 08 */	stw r30, 8(r1)
/* 8046882C 0046576C  7C 7E 1B 78 */	mr r30, r3
/* 80468830 00465770  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80468834 00465774  28 03 00 00 */	cmplwi r3, 0
/* 80468838 00465778  41 82 00 08 */	beq .L_80468840
/* 8046883C 0046577C  4B ED 84 E5 */	bl off__Q28PSSystem8EnvSeMgrFv
.L_80468840:
/* 80468840 00465780  7F C3 F3 78 */	mr r3, r30
/* 80468844 00465784  7F E4 FB 78 */	mr r4, r31
/* 80468848 00465788  4B ED 91 29 */	bl stopAllSound__Q28PSSystem5SceneFUl
/* 8046884C 0046578C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80468850 00465790  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80468854 00465794  83 C1 00 08 */	lwz r30, 8(r1)
/* 80468858 00465798  7C 08 03 A6 */	mtlr r0
/* 8046885C 0046579C  38 21 00 10 */	addi r1, r1, 0x10
/* 80468860 004657A0  4E 80 00 20 */	blr 
.endfn stopAllSound__Q23PSM10Scene_GameFUl

.fn exec__Q23PSM10Scene_GameFv, global
/* 80468864 004657A4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80468868 004657A8  7C 08 02 A6 */	mflr r0
/* 8046886C 004657AC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80468870 004657B0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80468874 004657B4  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80468878 004657B8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8046887C 004657BC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80468880 004657C0  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80468884 004657C4  93 81 00 70 */	stw r28, 0x70(r1)
/* 80468888 004657C8  7C 7D 1B 78 */	mr r29, r3
/* 8046888C 004657CC  3C 80 80 4A */	lis r4, lbl_8049D908@ha
/* 80468890 004657D0  80 63 00 54 */	lwz r3, 0x54(r3)
/* 80468894 004657D4  3B E4 D9 08 */	addi r31, r4, lbl_8049D908@l
/* 80468898 004657D8  28 03 00 00 */	cmplwi r3, 0
/* 8046889C 004657DC  41 82 00 08 */	beq .L_804688A4
/* 804688A0 004657E0  48 00 51 2D */	bl exec__Q23PSM14PikiHummingMgrFv
.L_804688A4:
/* 804688A4 004657E4  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 804688A8 004657E8  28 03 00 00 */	cmplwi r3, 0
/* 804688AC 004657EC  41 82 00 08 */	beq .L_804688B4
/* 804688B0 004657F0  48 00 41 2D */	bl exec__Q33PSM12BossBgmFader3MgrFv
.L_804688B4:
/* 804688B4 004657F4  80 7D 00 58 */	lwz r3, 0x58(r29)
/* 804688B8 004657F8  28 03 00 00 */	cmplwi r3, 0
/* 804688BC 004657FC  41 82 00 08 */	beq .L_804688C4
/* 804688C0 00465800  4B FF 41 FD */	bl exec__Q23PSM14PersEnvManagerFv
.L_804688C4:
/* 804688C4 00465804  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 804688C8 00465808  28 03 00 00 */	cmplwi r3, 0
/* 804688CC 0046580C  41 82 00 08 */	beq .L_804688D4
/* 804688D0 00465810  4B ED 85 41 */	bl exec__Q28PSSystem8EnvSeMgrFv
.L_804688D4:
/* 804688D4 00465814  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 804688D8 00465818  3C 03 10 00 */	addis r0, r3, 0x1000
/* 804688DC 0046581C  28 00 00 00 */	cmplwi r0, 0
/* 804688E0 00465820  41 82 00 0C */	beq .L_804688EC
/* 804688E4 00465824  38 03 00 01 */	addi r0, r3, 1
/* 804688E8 00465828  90 1D 00 34 */	stw r0, 0x34(r29)
.L_804688EC:
/* 804688EC 0046582C  80 0D 96 A0 */	lwz r0, cameraMgr__4Game@sda21(r13)
/* 804688F0 00465830  3B C0 00 00 */	li r30, 0
/* 804688F4 00465834  9B CD 9C 94 */	stb r30, sDopedPikminNum__Q23PSM4Piki@sda21(r13)
/* 804688F8 00465838  28 00 00 00 */	cmplwi r0, 0
/* 804688FC 0046583C  41 82 01 94 */	beq .L_80468A90
/* 80468900 00465840  48 00 01 7C */	b .L_80468A7C
.L_80468904:
/* 80468904 00465844  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80468908 00465848  57 C0 15 BA */	rlwinm r0, r30, 2, 0x16, 0x1d
/* 8046890C 0046584C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80468910 00465850  7F 83 00 2E */	lwzx r28, r3, r0
/* 80468914 00465854  28 1C 00 00 */	cmplwi r28, 0
/* 80468918 00465858  41 82 01 60 */	beq .L_80468A78
/* 8046891C 0046585C  7F 83 E3 78 */	mr r3, r28
/* 80468920 00465860  81 9C 00 00 */	lwz r12, 0(r28)
/* 80468924 00465864  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80468928 00465868  7D 89 03 A6 */	mtctr r12
/* 8046892C 0046586C  4E 80 04 21 */	bctrl 
/* 80468930 00465870  C0 43 00 00 */	lfs f2, 0(r3)
/* 80468934 00465874  7F 84 E3 78 */	mr r4, r28
/* 80468938 00465878  C0 23 00 04 */	lfs f1, 4(r3)
/* 8046893C 0046587C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80468940 00465880  38 61 00 50 */	addi r3, r1, 0x50
/* 80468944 00465884  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80468948 00465888  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8046894C 0046588C  80 C1 00 2C */	lwz r6, 0x2c(r1)
/* 80468950 00465890  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80468954 00465894  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 80468958 00465898  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8046895C 0046589C  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80468960 004658A0  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80468964 004658A4  90 01 00 64 */	stw r0, 0x64(r1)
/* 80468968 004658A8  4B FB 21 31 */	bl getLookAtPosition__6CameraFv
/* 8046896C 004658AC  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80468970 004658B0  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 80468974 004658B4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80468978 004658B8  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 8046897C 004658BC  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80468980 004658C0  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80468984 004658C4  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80468988 004658C8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8046898C 004658CC  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 80468990 004658D0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80468994 004658D4  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80468998 004658D8  90 61 00 48 */	stw r3, 0x48(r1)
/* 8046899C 004658DC  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 804689A0 004658E0  90 01 00 4C */	stw r0, 0x4c(r1)
/* 804689A4 004658E4  EC 61 00 28 */	fsubs f3, f1, f0
/* 804689A8 004658E8  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 804689AC 004658EC  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 804689B0 004658F0  C0 21 00 4C */	lfs f1, 0x4c(r1)
/* 804689B4 004658F4  EC 42 00 28 */	fsubs f2, f2, f0
/* 804689B8 004658F8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 804689BC 004658FC  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 804689C0 00465900  EC 21 00 28 */	fsubs f1, f1, f0
/* 804689C4 00465904  C0 02 29 3C */	lfs f0, lbl_80520C9C@sda21(r2)
/* 804689C8 00465908  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 804689CC 0046590C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 804689D0 00465910  80 61 00 24 */	lwz r3, 0x24(r1)
/* 804689D4 00465914  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 804689D8 00465918  90 01 00 08 */	stw r0, 8(r1)
/* 804689DC 0046591C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 804689E0 00465920  90 61 00 0C */	stw r3, 0xc(r1)
/* 804689E4 00465924  C0 41 00 08 */	lfs f2, 8(r1)
/* 804689E8 00465928  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 804689EC 0046592C  90 01 00 10 */	stw r0, 0x10(r1)
/* 804689F0 00465930  EC 62 00 B2 */	fmuls f3, f2, f2
/* 804689F4 00465934  EC 41 00 72 */	fmuls f2, f1, f1
/* 804689F8 00465938  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 804689FC 0046593C  D0 61 00 08 */	stfs f3, 8(r1)
/* 80468A00 00465940  EC 21 00 72 */	fmuls f1, f1, f1
/* 80468A04 00465944  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80468A08 00465948  80 01 00 08 */	lwz r0, 8(r1)
/* 80468A0C 0046594C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80468A10 00465950  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80468A14 00465954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80468A18 00465958  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80468A1C 0046595C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80468A20 00465960  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80468A24 00465964  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80468A28 00465968  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80468A2C 0046596C  EC 22 08 2A */	fadds f1, f2, f1
/* 80468A30 00465970  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80468A34 00465974  EC 22 08 2A */	fadds f1, f2, f1
/* 80468A38 00465978  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80468A3C 0046597C  40 81 00 0C */	ble .L_80468A48
/* 80468A40 00465980  FC 00 08 34 */	frsqrte f0, f1
/* 80468A44 00465984  EC 20 00 72 */	fmuls f1, f0, f1
.L_80468A48:
/* 80468A48 00465988  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 80468A4C 0046598C  7F C4 F3 78 */	mr r4, r30
/* 80468A50 00465990  4B EC C3 A5 */	bl update__Q26PSGame9CameraMgrFUcf
/* 80468A54 00465994  7F 83 E3 78 */	mr r3, r28
/* 80468A58 00465998  81 9C 00 00 */	lwz r12, 0(r28)
/* 80468A5C 0046599C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80468A60 004659A0  7D 89 03 A6 */	mtctr r12
/* 80468A64 004659A4  4E 80 04 21 */	bctrl 
/* 80468A68 004659A8  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80468A6C 004659AC  80 BD 00 28 */	lwz r5, 0x28(r29)
/* 80468A70 004659B0  38 04 00 4C */	addi r0, r4, 0x4c
/* 80468A74 004659B4  7C 65 01 AE */	stbx r3, r5, r0
.L_80468A78:
/* 80468A78 004659B8  3B DE 00 01 */	addi r30, r30, 1
.L_80468A7C:
/* 80468A7C 004659BC  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 80468A80 004659C0  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80468A84 004659C4  88 03 00 07 */	lbz r0, 7(r3)
/* 80468A88 004659C8  7C 04 00 40 */	cmplw r4, r0
/* 80468A8C 004659CC  41 80 FE 78 */	blt .L_80468904
.L_80468A90:
/* 80468A90 004659D0  7F A3 EB 78 */	mr r3, r29
/* 80468A94 004659D4  4B ED 8F E5 */	bl exec__Q28PSSystem5SceneFv
/* 80468A98 004659D8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80468A9C 004659DC  28 03 00 00 */	cmplwi r3, 0
/* 80468AA0 004659E0  41 82 00 08 */	beq .L_80468AA8
/* 80468AA4 004659E4  4B FF 44 41 */	bl frameEnd_onPlaySe__Q23PSM6ObjMgrFv
.L_80468AA8:
/* 80468AA8 004659E8  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 80468AAC 004659EC  3C 03 00 01 */	addis r0, r3, 1
/* 80468AB0 004659F0  28 00 FF FF */	cmplwi r0, 0xffff
/* 80468AB4 004659F4  41 82 00 0C */	beq .L_80468AC0
/* 80468AB8 004659F8  38 03 00 01 */	addi r0, r3, 1
/* 80468ABC 004659FC  90 1D 00 4C */	stw r0, 0x4c(r29)
.L_80468AC0:
/* 80468AC0 00465A00  83 9D 00 38 */	lwz r28, 0x38(r29)
/* 80468AC4 00465A04  48 00 00 14 */	b .L_80468AD8
.L_80468AC8:
/* 80468AC8 00465A08  7F 83 E3 78 */	mr r3, r28
/* 80468ACC 00465A0C  83 9C 00 0C */	lwz r28, 0xc(r28)
/* 80468AD0 00465A10  80 63 00 00 */	lwz r3, 0(r3)
/* 80468AD4 00465A14  4B FF 70 5D */	bl dyingFrameWork__Q23PSM9EnemyBossFv
.L_80468AD8:
/* 80468AD8 00465A18  28 1C 00 00 */	cmplwi r28, 0
/* 80468ADC 00465A1C  40 82 FF EC */	bne .L_80468AC8
/* 80468AE0 00465A20  80 0D 91 B4 */	lwz r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80468AE4 00465A24  28 00 00 00 */	cmplwi r0, 0
/* 80468AE8 00465A28  40 82 00 18 */	bne .L_80468B00
/* 80468AEC 00465A2C  38 7F 00 30 */	addi r3, r31, 0x30
/* 80468AF0 00465A30  38 BF 00 24 */	addi r5, r31, 0x24
/* 80468AF4 00465A34  38 80 00 89 */	li r4, 0x89
/* 80468AF8 00465A38  4C C6 31 82 */	crclr 6
/* 80468AFC 00465A3C  4B BC 1B 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468B00:
/* 80468B00 00465A40  83 8D 91 B4 */	lwz r28, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80468B04 00465A44  7F 83 E3 78 */	mr r3, r28
/* 80468B08 00465A48  81 9C 00 00 */	lwz r12, 0(r28)
/* 80468B0C 00465A4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80468B10 00465A50  7D 89 03 A6 */	mtctr r12
/* 80468B14 00465A54  4E 80 04 21 */	bctrl 
/* 80468B18 00465A58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80468B1C 00465A5C  41 82 00 E4 */	beq .L_80468C00
/* 80468B20 00465A60  8B 9C 00 08 */	lbz r28, 8(r28)
/* 80468B24 00465A64  38 80 00 01 */	li r4, 1
/* 80468B28 00465A68  20 1C 00 01 */	subfic r0, r28, 1
/* 80468B2C 00465A6C  7C 83 E3 38 */	orc r3, r4, r28
/* 80468B30 00465A70  54 00 F8 7E */	srwi r0, r0, 1
/* 80468B34 00465A74  7C 00 18 50 */	subf r0, r0, r3
/* 80468B38 00465A78  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 80468B3C 00465A7C  40 82 00 08 */	bne .L_80468B44
/* 80468B40 00465A80  38 80 00 00 */	li r4, 0
.L_80468B44:
/* 80468B44 00465A84  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80468B48 00465A88  40 82 00 18 */	bne .L_80468B60
/* 80468B4C 00465A8C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80468B50 00465A90  38 BF 00 24 */	addi r5, r31, 0x24
/* 80468B54 00465A94  38 80 01 FC */	li r4, 0x1fc
/* 80468B58 00465A98  4C C6 31 82 */	crclr 6
/* 80468B5C 00465A9C  4B BC 1A E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468B60:
/* 80468B60 00465AA0  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 80468B64 00465AA4  7F 84 E3 78 */	mr r4, r28
/* 80468B68 00465AA8  4B EC C2 69 */	bl getBgmCamVol__Q26PSGame9CameraMgrFUc
/* 80468B6C 00465AAC  FF E0 08 90 */	fmr f31, f1
/* 80468B70 00465AB0  C0 02 29 3C */	lfs f0, lbl_80520C9C@sda21(r2)
/* 80468B74 00465AB4  38 00 00 00 */	li r0, 0
/* 80468B78 00465AB8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80468B7C 00465ABC  40 81 00 18 */	ble .L_80468B94
/* 80468B80 00465AC0  C0 02 29 40 */	lfs f0, lbl_80520CA0@sda21(r2)
/* 80468B84 00465AC4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80468B88 00465AC8  4C 40 13 82 */	cror 2, 0, 2
/* 80468B8C 00465ACC  40 82 00 08 */	bne .L_80468B94
/* 80468B90 00465AD0  38 00 00 01 */	li r0, 1
.L_80468B94:
/* 80468B94 00465AD4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80468B98 00465AD8  40 82 00 18 */	bne .L_80468BB0
/* 80468B9C 00465ADC  38 7F 00 0C */	addi r3, r31, 0xc
/* 80468BA0 00465AE0  38 BF 00 24 */	addi r5, r31, 0x24
/* 80468BA4 00465AE4  38 80 01 FE */	li r4, 0x1fe
/* 80468BA8 00465AE8  4C C6 31 82 */	crclr 6
/* 80468BAC 00465AEC  4B BC 1A 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468BB0:
/* 80468BB0 00465AF0  83 9D 00 10 */	lwz r28, 0x10(r29)
/* 80468BB4 00465AF4  48 00 00 44 */	b .L_80468BF8
.L_80468BB8:
/* 80468BB8 00465AF8  80 7C 00 00 */	lwz r3, 0(r28)
/* 80468BBC 00465AFC  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80468BC0 00465B00  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80468BC4 00465B04  7D 89 03 A6 */	mtctr r12
/* 80468BC8 00465B08  4E 80 04 21 */	bctrl 
/* 80468BCC 00465B0C  80 63 00 00 */	lwz r3, 0(r3)
/* 80468BD0 00465B10  28 03 00 00 */	cmplwi r3, 0
/* 80468BD4 00465B14  41 82 00 20 */	beq .L_80468BF4
/* 80468BD8 00465B18  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80468BDC 00465B1C  FC 20 F8 90 */	fmr f1, f31
/* 80468BE0 00465B20  38 80 00 05 */	li r4, 5
/* 80468BE4 00465B24  38 A0 00 05 */	li r5, 5
/* 80468BE8 00465B28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80468BEC 00465B2C  7D 89 03 A6 */	mtctr r12
/* 80468BF0 00465B30  4E 80 04 21 */	bctrl 
.L_80468BF4:
/* 80468BF4 00465B34  83 9C 00 0C */	lwz r28, 0xc(r28)
.L_80468BF8:
/* 80468BF8 00465B38  28 1C 00 00 */	cmplwi r28, 0
/* 80468BFC 00465B3C  40 82 FF BC */	bne .L_80468BB8
.L_80468C00:
/* 80468C00 00465B40  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80468C04 00465B44  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80468C08 00465B48  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80468C0C 00465B4C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80468C10 00465B50  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80468C14 00465B54  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80468C18 00465B58  83 81 00 70 */	lwz r28, 0x70(r1)
/* 80468C1C 00465B5C  7C 08 03 A6 */	mtlr r0
/* 80468C20 00465B60  38 21 00 90 */	addi r1, r1, 0x90
/* 80468C24 00465B64  4E 80 00 20 */	blr 
.endfn exec__Q23PSM10Scene_GameFv

.fn getEnvSe__Q23PSM10Scene_GameFv, global
/* 80468C28 00465B68  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80468C2C 00465B6C  4E 80 00 20 */	blr 
.endfn getEnvSe__Q23PSM10Scene_GameFv

.fn adaptEnvSe__Q23PSM10Scene_GameFPQ28PSSystem8EnvSeMgr, global
/* 80468C30 00465B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80468C34 00465B74  7C 08 02 A6 */	mflr r0
/* 80468C38 00465B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80468C3C 00465B7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80468C40 00465B80  7C 9F 23 79 */	or. r31, r4, r4
/* 80468C44 00465B84  93 C1 00 08 */	stw r30, 8(r1)
/* 80468C48 00465B88  7C 7E 1B 78 */	mr r30, r3
/* 80468C4C 00465B8C  40 82 00 20 */	bne .L_80468C6C
/* 80468C50 00465B90  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80468C54 00465B94  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80468C58 00465B98  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80468C5C 00465B9C  38 80 02 4D */	li r4, 0x24d
/* 80468C60 00465BA0  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80468C64 00465BA4  4C C6 31 82 */	crclr 6
/* 80468C68 00465BA8  4B BC 19 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468C6C:
/* 80468C6C 00465BAC  93 FE 00 44 */	stw r31, 0x44(r30)
/* 80468C70 00465BB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80468C74 00465BB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80468C78 00465BB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80468C7C 00465BBC  7C 08 03 A6 */	mtlr r0
/* 80468C80 00465BC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80468C84 00465BC4  4E 80 00 20 */	blr 
.endfn adaptEnvSe__Q23PSM10Scene_GameFPQ28PSSystem8EnvSeMgr

.fn bossAppear__Q23PSM10Scene_GameFPQ23PSM9EnemyBossUs, global
/* 80468C88 00465BC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80468C8C 00465BCC  7C 08 02 A6 */	mflr r0
/* 80468C90 00465BD0  3C C0 80 4A */	lis r6, lbl_8049D908@ha
/* 80468C94 00465BD4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80468C98 00465BD8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80468C9C 00465BDC  7C 7B 1B 78 */	mr r27, r3
/* 80468CA0 00465BE0  7C 9C 23 78 */	mr r28, r4
/* 80468CA4 00465BE4  7C BD 2B 78 */	mr r29, r5
/* 80468CA8 00465BE8  3B E6 D9 08 */	addi r31, r6, lbl_8049D908@l
/* 80468CAC 00465BEC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80468CB0 00465BF0  28 00 00 00 */	cmplwi r0, 0
/* 80468CB4 00465BF4  40 82 00 18 */	bne .L_80468CCC
/* 80468CB8 00465BF8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80468CBC 00465BFC  38 BF 00 24 */	addi r5, r31, 0x24
/* 80468CC0 00465C00  38 80 01 D3 */	li r4, 0x1d3
/* 80468CC4 00465C04  4C C6 31 82 */	crclr 6
/* 80468CC8 00465C08  4B BC 19 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468CCC:
/* 80468CCC 00465C0C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80468CD0 00465C10  28 1E 00 00 */	cmplwi r30, 0
/* 80468CD4 00465C14  40 82 00 18 */	bne .L_80468CEC
/* 80468CD8 00465C18  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80468CDC 00465C1C  38 BF 00 24 */	addi r5, r31, 0x24
/* 80468CE0 00465C20  38 80 01 DC */	li r4, 0x1dc
/* 80468CE4 00465C24  4C C6 31 82 */	crclr 6
/* 80468CE8 00465C28  4B BC 19 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468CEC:
/* 80468CEC 00465C2C  80 1E 00 04 */	lwz r0, 4(r30)
/* 80468CF0 00465C30  28 00 00 00 */	cmplwi r0, 0
/* 80468CF4 00465C34  40 82 00 18 */	bne .L_80468D0C
/* 80468CF8 00465C38  38 7F 00 48 */	addi r3, r31, 0x48
/* 80468CFC 00465C3C  38 BF 00 24 */	addi r5, r31, 0x24
/* 80468D00 00465C40  38 80 00 C7 */	li r4, 0xc7
/* 80468D04 00465C44  4C C6 31 82 */	crclr 6
/* 80468D08 00465C48  4B BC 19 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468D0C:
/* 80468D0C 00465C4C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80468D10 00465C50  80 63 00 04 */	lwz r3, 4(r3)
/* 80468D14 00465C54  28 03 00 00 */	cmplwi r3, 0
/* 80468D18 00465C58  40 82 00 0C */	bne .L_80468D24
/* 80468D1C 00465C5C  38 60 00 00 */	li r3, 0
/* 80468D20 00465C60  48 00 00 08 */	b .L_80468D28
.L_80468D24:
/* 80468D24 00465C64  4B EC C9 5D */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
.L_80468D28:
/* 80468D28 00465C68  28 03 00 00 */	cmplwi r3, 0
/* 80468D2C 00465C6C  41 82 00 48 */	beq .L_80468D74
/* 80468D30 00465C70  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 80468D34 00465C74  28 03 00 00 */	cmplwi r3, 0
/* 80468D38 00465C78  41 82 00 10 */	beq .L_80468D48
/* 80468D3C 00465C7C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80468D40 00465C80  2C 00 00 00 */	cmpwi r0, 0
/* 80468D44 00465C84  40 82 00 30 */	bne .L_80468D74
.L_80468D48:
/* 80468D48 00465C88  7F 83 E3 78 */	mr r3, r28
/* 80468D4C 00465C8C  7F A4 EB 78 */	mr r4, r29
/* 80468D50 00465C90  81 9C 00 28 */	lwz r12, 0x28(r28)
/* 80468D54 00465C94  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80468D58 00465C98  7D 89 03 A6 */	mtctr r12
/* 80468D5C 00465C9C  4E 80 04 21 */	bctrl 
/* 80468D60 00465CA0  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 80468D64 00465CA4  28 03 00 00 */	cmplwi r3, 0
/* 80468D68 00465CA8  41 82 00 0C */	beq .L_80468D74
/* 80468D6C 00465CAC  38 00 00 01 */	li r0, 1
/* 80468D70 00465CB0  98 03 00 38 */	stb r0, 0x38(r3)
.L_80468D74:
/* 80468D74 00465CB4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80468D78 00465CB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80468D7C 00465CBC  7C 08 03 A6 */	mtlr r0
/* 80468D80 00465CC0  38 21 00 20 */	addi r1, r1, 0x20
/* 80468D84 00465CC4  4E 80 00 20 */	blr 
.endfn bossAppear__Q23PSM10Scene_GameFPQ23PSM9EnemyBossUs

.fn pauseOn_2D__Q23PSM10Scene_GameFUcUc, global
/* 80468D88 00465CC8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80468D8C 00465CCC  7C 08 02 A6 */	mflr r0
/* 80468D90 00465CD0  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 80468D94 00465CD4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80468D98 00465CD8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80468D9C 00465CDC  7C 7F 1B 78 */	mr r31, r3
/* 80468DA0 00465CE0  38 7F 00 10 */	addi r3, r31, 0x10
/* 80468DA4 00465CE4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80468DA8 00465CE8  7C BE 2B 78 */	mr r30, r5
/* 80468DAC 00465CEC  4B EC AD 21 */	bl pauseOnAllSeq__Q28PSSystem6SeqMgrFQ38PSSystem7SeqBase9PauseMode
/* 80468DB0 00465CF0  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80468DB4 00465CF4  28 03 00 00 */	cmplwi r3, 0
/* 80468DB8 00465CF8  41 82 00 18 */	beq .L_80468DD0
/* 80468DBC 00465CFC  7F C4 F3 78 */	mr r4, r30
/* 80468DC0 00465D00  4B ED 7E B9 */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
/* 80468DC4 00465D04  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80468DC8 00465D08  38 00 00 00 */	li r0, 0
/* 80468DCC 00465D0C  B0 03 00 10 */	sth r0, 0x10(r3)
.L_80468DD0:
/* 80468DD0 00465D10  38 00 00 00 */	li r0, 0
/* 80468DD4 00465D14  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80468DD8 00465D18  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80468DDC 00465D1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80468DE0 00465D20  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80468DE4 00465D24  28 00 00 00 */	cmplwi r0, 0
/* 80468DE8 00465D28  90 81 00 18 */	stw r4, 0x18(r1)
/* 80468DEC 00465D2C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80468DF0 00465D30  90 61 00 20 */	stw r3, 0x20(r1)
/* 80468DF4 00465D34  40 82 00 1C */	bne .L_80468E10
/* 80468DF8 00465D38  81 83 00 00 */	lwz r12, 0(r3)
/* 80468DFC 00465D3C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80468E00 00465D40  7D 89 03 A6 */	mtctr r12
/* 80468E04 00465D44  4E 80 04 21 */	bctrl 
/* 80468E08 00465D48  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80468E0C 00465D4C  48 00 01 68 */	b .L_80468F74
.L_80468E10:
/* 80468E10 00465D50  81 83 00 00 */	lwz r12, 0(r3)
/* 80468E14 00465D54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80468E18 00465D58  7D 89 03 A6 */	mtctr r12
/* 80468E1C 00465D5C  4E 80 04 21 */	bctrl 
/* 80468E20 00465D60  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80468E24 00465D64  48 00 00 58 */	b .L_80468E7C
.L_80468E28:
/* 80468E28 00465D68  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468E2C 00465D6C  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468E30 00465D70  81 83 00 00 */	lwz r12, 0(r3)
/* 80468E34 00465D74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80468E38 00465D78  7D 89 03 A6 */	mtctr r12
/* 80468E3C 00465D7C  4E 80 04 21 */	bctrl 
/* 80468E40 00465D80  7C 64 1B 78 */	mr r4, r3
/* 80468E44 00465D84  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80468E48 00465D88  81 83 00 00 */	lwz r12, 0(r3)
/* 80468E4C 00465D8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80468E50 00465D90  7D 89 03 A6 */	mtctr r12
/* 80468E54 00465D94  4E 80 04 21 */	bctrl 
/* 80468E58 00465D98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80468E5C 00465D9C  40 82 01 18 */	bne .L_80468F74
/* 80468E60 00465DA0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468E64 00465DA4  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468E68 00465DA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80468E6C 00465DAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80468E70 00465DB0  7D 89 03 A6 */	mtctr r12
/* 80468E74 00465DB4  4E 80 04 21 */	bctrl 
/* 80468E78 00465DB8  90 61 00 1C */	stw r3, 0x1c(r1)
.L_80468E7C:
/* 80468E7C 00465DBC  81 81 00 18 */	lwz r12, 0x18(r1)
/* 80468E80 00465DC0  38 61 00 18 */	addi r3, r1, 0x18
/* 80468E84 00465DC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80468E88 00465DC8  7D 89 03 A6 */	mtctr r12
/* 80468E8C 00465DCC  4E 80 04 21 */	bctrl 
/* 80468E90 00465DD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80468E94 00465DD4  41 82 FF 94 */	beq .L_80468E28
/* 80468E98 00465DD8  48 00 00 DC */	b .L_80468F74
.L_80468E9C:
/* 80468E9C 00465DDC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468EA0 00465DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80468EA4 00465DE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80468EA8 00465DE8  7D 89 03 A6 */	mtctr r12
/* 80468EAC 00465DEC  4E 80 04 21 */	bctrl 
/* 80468EB0 00465DF0  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 80468EB4 00465DF4  4B FF 9D 91 */	bl stopWaitVoice__Q23PSM4NaviFv
/* 80468EB8 00465DF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80468EBC 00465DFC  28 00 00 00 */	cmplwi r0, 0
/* 80468EC0 00465E00  40 82 00 24 */	bne .L_80468EE4
/* 80468EC4 00465E04  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468EC8 00465E08  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468ECC 00465E0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80468ED0 00465E10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80468ED4 00465E14  7D 89 03 A6 */	mtctr r12
/* 80468ED8 00465E18  4E 80 04 21 */	bctrl 
/* 80468EDC 00465E1C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80468EE0 00465E20  48 00 00 94 */	b .L_80468F74
.L_80468EE4:
/* 80468EE4 00465E24  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468EE8 00465E28  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468EEC 00465E2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80468EF0 00465E30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80468EF4 00465E34  7D 89 03 A6 */	mtctr r12
/* 80468EF8 00465E38  4E 80 04 21 */	bctrl 
/* 80468EFC 00465E3C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80468F00 00465E40  48 00 00 58 */	b .L_80468F58
.L_80468F04:
/* 80468F04 00465E44  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468F08 00465E48  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468F0C 00465E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80468F10 00465E50  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80468F14 00465E54  7D 89 03 A6 */	mtctr r12
/* 80468F18 00465E58  4E 80 04 21 */	bctrl 
/* 80468F1C 00465E5C  7C 64 1B 78 */	mr r4, r3
/* 80468F20 00465E60  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80468F24 00465E64  81 83 00 00 */	lwz r12, 0(r3)
/* 80468F28 00465E68  81 8C 00 08 */	lwz r12, 8(r12)
/* 80468F2C 00465E6C  7D 89 03 A6 */	mtctr r12
/* 80468F30 00465E70  4E 80 04 21 */	bctrl 
/* 80468F34 00465E74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80468F38 00465E78  40 82 00 3C */	bne .L_80468F74
/* 80468F3C 00465E7C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468F40 00465E80  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468F44 00465E84  81 83 00 00 */	lwz r12, 0(r3)
/* 80468F48 00465E88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80468F4C 00465E8C  7D 89 03 A6 */	mtctr r12
/* 80468F50 00465E90  4E 80 04 21 */	bctrl 
/* 80468F54 00465E94  90 61 00 1C */	stw r3, 0x1c(r1)
.L_80468F58:
/* 80468F58 00465E98  81 81 00 18 */	lwz r12, 0x18(r1)
/* 80468F5C 00465E9C  38 61 00 18 */	addi r3, r1, 0x18
/* 80468F60 00465EA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80468F64 00465EA4  7D 89 03 A6 */	mtctr r12
/* 80468F68 00465EA8  4E 80 04 21 */	bctrl 
/* 80468F6C 00465EAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80468F70 00465EB0  41 82 FF 94 */	beq .L_80468F04
.L_80468F74:
/* 80468F74 00465EB4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80468F78 00465EB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80468F7C 00465EBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80468F80 00465EC0  7D 89 03 A6 */	mtctr r12
/* 80468F84 00465EC4  4E 80 04 21 */	bctrl 
/* 80468F88 00465EC8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80468F8C 00465ECC  7C 04 18 40 */	cmplw r4, r3
/* 80468F90 00465ED0  40 82 FF 0C */	bne .L_80468E9C
/* 80468F94 00465ED4  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80468F98 00465ED8  28 00 00 00 */	cmplwi r0, 0
/* 80468F9C 00465EDC  40 82 00 20 */	bne .L_80468FBC
/* 80468FA0 00465EE0  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80468FA4 00465EE4  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80468FA8 00465EE8  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80468FAC 00465EEC  38 80 02 91 */	li r4, 0x291
/* 80468FB0 00465EF0  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80468FB4 00465EF4  4C C6 31 82 */	crclr 6
/* 80468FB8 00465EF8  4B BC 16 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80468FBC:
/* 80468FBC 00465EFC  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80468FC0 00465F00  83 E3 00 00 */	lwz r31, 0(r3)
/* 80468FC4 00465F04  48 00 00 60 */	b .L_80469024
.L_80468FC8:
/* 80468FC8 00465F08  83 DF 00 00 */	lwz r30, 0(r31)
/* 80468FCC 00465F0C  7F C3 F3 78 */	mr r3, r30
/* 80468FD0 00465F10  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80468FD4 00465F14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80468FD8 00465F18  7D 89 03 A6 */	mtctr r12
/* 80468FDC 00465F1C  4E 80 04 21 */	bctrl 
/* 80468FE0 00465F20  2C 03 00 0F */	cmpwi r3, 0xf
/* 80468FE4 00465F24  40 82 00 3C */	bne .L_80469020
/* 80468FE8 00465F28  38 7E 00 30 */	addi r3, r30, 0x30
/* 80468FEC 00465F2C  38 80 28 6B */	li r4, 0x286b
/* 80468FF0 00465F30  81 9E 00 30 */	lwz r12, 0x30(r30)
/* 80468FF4 00465F34  38 A0 00 00 */	li r5, 0
/* 80468FF8 00465F38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80468FFC 00465F3C  7D 89 03 A6 */	mtctr r12
/* 80469000 00465F40  4E 80 04 21 */	bctrl 
/* 80469004 00465F44  38 7E 00 30 */	addi r3, r30, 0x30
/* 80469008 00465F48  38 80 28 02 */	li r4, 0x2802
/* 8046900C 00465F4C  81 9E 00 30 */	lwz r12, 0x30(r30)
/* 80469010 00465F50  38 A0 00 00 */	li r5, 0
/* 80469014 00465F54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469018 00465F58  7D 89 03 A6 */	mtctr r12
/* 8046901C 00465F5C  4E 80 04 21 */	bctrl 
.L_80469020:
/* 80469020 00465F60  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_80469024:
/* 80469024 00465F64  28 1F 00 00 */	cmplwi r31, 0
/* 80469028 00465F68  40 82 FF A0 */	bne .L_80468FC8
/* 8046902C 00465F6C  38 00 00 00 */	li r0, 0
/* 80469030 00465F70  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80469034 00465F74  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80469038 00465F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046903C 00465F7C  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80469040 00465F80  28 00 00 00 */	cmplwi r0, 0
/* 80469044 00465F84  90 81 00 08 */	stw r4, 8(r1)
/* 80469048 00465F88  90 01 00 0C */	stw r0, 0xc(r1)
/* 8046904C 00465F8C  90 61 00 10 */	stw r3, 0x10(r1)
/* 80469050 00465F90  40 82 00 1C */	bne .L_8046906C
/* 80469054 00465F94  81 83 00 00 */	lwz r12, 0(r3)
/* 80469058 00465F98  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8046905C 00465F9C  7D 89 03 A6 */	mtctr r12
/* 80469060 00465FA0  4E 80 04 21 */	bctrl 
/* 80469064 00465FA4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80469068 00465FA8  48 00 02 60 */	b .L_804692C8
.L_8046906C:
/* 8046906C 00465FAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80469070 00465FB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80469074 00465FB4  7D 89 03 A6 */	mtctr r12
/* 80469078 00465FB8  4E 80 04 21 */	bctrl 
/* 8046907C 00465FBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80469080 00465FC0  48 00 00 58 */	b .L_804690D8
.L_80469084:
/* 80469084 00465FC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80469088 00465FC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046908C 00465FCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80469090 00465FD0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80469094 00465FD4  7D 89 03 A6 */	mtctr r12
/* 80469098 00465FD8  4E 80 04 21 */	bctrl 
/* 8046909C 00465FDC  7C 64 1B 78 */	mr r4, r3
/* 804690A0 00465FE0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 804690A4 00465FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 804690A8 00465FE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 804690AC 00465FEC  7D 89 03 A6 */	mtctr r12
/* 804690B0 00465FF0  4E 80 04 21 */	bctrl 
/* 804690B4 00465FF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804690B8 00465FF8  40 82 02 10 */	bne .L_804692C8
/* 804690BC 00465FFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 804690C0 00466000  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804690C4 00466004  81 83 00 00 */	lwz r12, 0(r3)
/* 804690C8 00466008  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804690CC 0046600C  7D 89 03 A6 */	mtctr r12
/* 804690D0 00466010  4E 80 04 21 */	bctrl 
/* 804690D4 00466014  90 61 00 0C */	stw r3, 0xc(r1)
.L_804690D8:
/* 804690D8 00466018  81 81 00 08 */	lwz r12, 8(r1)
/* 804690DC 0046601C  38 61 00 08 */	addi r3, r1, 8
/* 804690E0 00466020  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804690E4 00466024  7D 89 03 A6 */	mtctr r12
/* 804690E8 00466028  4E 80 04 21 */	bctrl 
/* 804690EC 0046602C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804690F0 00466030  41 82 FF 94 */	beq .L_80469084
/* 804690F4 00466034  48 00 01 D4 */	b .L_804692C8
.L_804690F8:
/* 804690F8 00466038  80 61 00 10 */	lwz r3, 0x10(r1)
/* 804690FC 0046603C  81 83 00 00 */	lwz r12, 0(r3)
/* 80469100 00466040  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80469104 00466044  7D 89 03 A6 */	mtctr r12
/* 80469108 00466048  4E 80 04 21 */	bctrl 
/* 8046910C 0046604C  7C 7F 1B 78 */	mr r31, r3
/* 80469110 00466050  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80469114 00466054  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469118 00466058  38 80 28 7E */	li r4, 0x287e
/* 8046911C 0046605C  38 A0 00 00 */	li r5, 0
/* 80469120 00466060  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469124 00466064  7D 89 03 A6 */	mtctr r12
/* 80469128 00466068  4E 80 04 21 */	bctrl 
/* 8046912C 0046606C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80469130 00466070  38 80 28 7F */	li r4, 0x287f
/* 80469134 00466074  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469138 00466078  38 A0 00 00 */	li r5, 0
/* 8046913C 0046607C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469140 00466080  7D 89 03 A6 */	mtctr r12
/* 80469144 00466084  4E 80 04 21 */	bctrl 
/* 80469148 00466088  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8046914C 0046608C  38 80 28 80 */	li r4, 0x2880
/* 80469150 00466090  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469154 00466094  38 A0 00 00 */	li r5, 0
/* 80469158 00466098  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046915C 0046609C  7D 89 03 A6 */	mtctr r12
/* 80469160 004660A0  4E 80 04 21 */	bctrl 
/* 80469164 004660A4  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80469168 004660A8  38 80 28 81 */	li r4, 0x2881
/* 8046916C 004660AC  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469170 004660B0  38 A0 00 00 */	li r5, 0
/* 80469174 004660B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469178 004660B8  7D 89 03 A6 */	mtctr r12
/* 8046917C 004660BC  4E 80 04 21 */	bctrl 
/* 80469180 004660C0  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80469184 004660C4  38 80 28 82 */	li r4, 0x2882
/* 80469188 004660C8  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8046918C 004660CC  38 A0 00 00 */	li r5, 0
/* 80469190 004660D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469194 004660D4  7D 89 03 A6 */	mtctr r12
/* 80469198 004660D8  4E 80 04 21 */	bctrl 
/* 8046919C 004660DC  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804691A0 004660E0  38 80 28 83 */	li r4, 0x2883
/* 804691A4 004660E4  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804691A8 004660E8  38 A0 00 00 */	li r5, 0
/* 804691AC 004660EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804691B0 004660F0  7D 89 03 A6 */	mtctr r12
/* 804691B4 004660F4  4E 80 04 21 */	bctrl 
/* 804691B8 004660F8  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804691BC 004660FC  38 80 28 84 */	li r4, 0x2884
/* 804691C0 00466100  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804691C4 00466104  38 A0 00 00 */	li r5, 0
/* 804691C8 00466108  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804691CC 0046610C  7D 89 03 A6 */	mtctr r12
/* 804691D0 00466110  4E 80 04 21 */	bctrl 
/* 804691D4 00466114  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804691D8 00466118  38 80 28 85 */	li r4, 0x2885
/* 804691DC 0046611C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804691E0 00466120  38 A0 00 00 */	li r5, 0
/* 804691E4 00466124  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804691E8 00466128  7D 89 03 A6 */	mtctr r12
/* 804691EC 0046612C  4E 80 04 21 */	bctrl 
/* 804691F0 00466130  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804691F4 00466134  38 80 28 86 */	li r4, 0x2886
/* 804691F8 00466138  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804691FC 0046613C  38 A0 00 00 */	li r5, 0
/* 80469200 00466140  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469204 00466144  7D 89 03 A6 */	mtctr r12
/* 80469208 00466148  4E 80 04 21 */	bctrl 
/* 8046920C 0046614C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80469210 00466150  28 00 00 00 */	cmplwi r0, 0
/* 80469214 00466154  40 82 00 24 */	bne .L_80469238
/* 80469218 00466158  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046921C 0046615C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469220 00466160  81 83 00 00 */	lwz r12, 0(r3)
/* 80469224 00466164  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80469228 00466168  7D 89 03 A6 */	mtctr r12
/* 8046922C 0046616C  4E 80 04 21 */	bctrl 
/* 80469230 00466170  90 61 00 0C */	stw r3, 0xc(r1)
/* 80469234 00466174  48 00 00 94 */	b .L_804692C8
.L_80469238:
/* 80469238 00466178  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046923C 0046617C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469240 00466180  81 83 00 00 */	lwz r12, 0(r3)
/* 80469244 00466184  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80469248 00466188  7D 89 03 A6 */	mtctr r12
/* 8046924C 0046618C  4E 80 04 21 */	bctrl 
/* 80469250 00466190  90 61 00 0C */	stw r3, 0xc(r1)
/* 80469254 00466194  48 00 00 58 */	b .L_804692AC
.L_80469258:
/* 80469258 00466198  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046925C 0046619C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469260 004661A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80469264 004661A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80469268 004661A8  7D 89 03 A6 */	mtctr r12
/* 8046926C 004661AC  4E 80 04 21 */	bctrl 
/* 80469270 004661B0  7C 64 1B 78 */	mr r4, r3
/* 80469274 004661B4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80469278 004661B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8046927C 004661BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80469280 004661C0  7D 89 03 A6 */	mtctr r12
/* 80469284 004661C4  4E 80 04 21 */	bctrl 
/* 80469288 004661C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046928C 004661CC  40 82 00 3C */	bne .L_804692C8
/* 80469290 004661D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80469294 004661D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469298 004661D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8046929C 004661DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804692A0 004661E0  7D 89 03 A6 */	mtctr r12
/* 804692A4 004661E4  4E 80 04 21 */	bctrl 
/* 804692A8 004661E8  90 61 00 0C */	stw r3, 0xc(r1)
.L_804692AC:
/* 804692AC 004661EC  81 81 00 08 */	lwz r12, 8(r1)
/* 804692B0 004661F0  38 61 00 08 */	addi r3, r1, 8
/* 804692B4 004661F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804692B8 004661F8  7D 89 03 A6 */	mtctr r12
/* 804692BC 004661FC  4E 80 04 21 */	bctrl 
/* 804692C0 00466200  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804692C4 00466204  41 82 FF 94 */	beq .L_80469258
.L_804692C8:
/* 804692C8 00466208  80 61 00 10 */	lwz r3, 0x10(r1)
/* 804692CC 0046620C  81 83 00 00 */	lwz r12, 0(r3)
/* 804692D0 00466210  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804692D4 00466214  7D 89 03 A6 */	mtctr r12
/* 804692D8 00466218  4E 80 04 21 */	bctrl 
/* 804692DC 0046621C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804692E0 00466220  7C 04 18 40 */	cmplw r4, r3
/* 804692E4 00466224  40 82 FE 14 */	bne .L_804690F8
/* 804692E8 00466228  80 01 00 34 */	lwz r0, 0x34(r1)
/* 804692EC 0046622C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 804692F0 00466230  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 804692F4 00466234  7C 08 03 A6 */	mtlr r0
/* 804692F8 00466238  38 21 00 30 */	addi r1, r1, 0x30
/* 804692FC 0046623C  4E 80 00 20 */	blr 
.endfn pauseOn_2D__Q23PSM10Scene_GameFUcUc

.fn pauseOff_2D__Q23PSM10Scene_GameFv, global
/* 80469300 00466240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80469304 00466244  7C 08 02 A6 */	mflr r0
/* 80469308 00466248  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046930C 0046624C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80469310 00466250  7C 7F 1B 78 */	mr r31, r3
/* 80469314 00466254  38 7F 00 10 */	addi r3, r31, 0x10
/* 80469318 00466258  4B EC A8 11 */	bl pauseOffAllSeq__Q28PSSystem6SeqMgrFv
/* 8046931C 0046625C  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80469320 00466260  28 03 00 00 */	cmplwi r3, 0
/* 80469324 00466264  41 82 00 08 */	beq .L_8046932C
/* 80469328 00466268  4B ED 7A 6D */	bl reservePauseOff__Q28PSSystem8EnvSeMgrFv
.L_8046932C:
/* 8046932C 0046626C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80469330 00466270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80469334 00466274  7C 08 03 A6 */	mtlr r0
/* 80469338 00466278  38 21 00 10 */	addi r1, r1, 0x10
/* 8046933C 0046627C  4E 80 00 20 */	blr 
.endfn pauseOff_2D__Q23PSM10Scene_GameFv

.fn pauseOn_Demo__Q23PSM10Scene_GameFv, global
/* 80469340 00466280  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80469344 00466284  7C 08 02 A6 */	mflr r0
/* 80469348 00466288  90 01 00 34 */	stw r0, 0x34(r1)
/* 8046934C 0046628C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80469350 00466290  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80469354 00466294  7C 7E 1B 78 */	mr r30, r3
/* 80469358 00466298  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8046935C 0046629C  28 00 00 00 */	cmplwi r0, 0
/* 80469360 004662A0  40 82 00 20 */	bne .L_80469380
/* 80469364 004662A4  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80469368 004662A8  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046936C 004662AC  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80469370 004662B0  38 80 02 C2 */	li r4, 0x2c2
/* 80469374 004662B4  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80469378 004662B8  4C C6 31 82 */	crclr 6
/* 8046937C 004662BC  4B BC 12 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469380:
/* 80469380 004662C0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 80469384 004662C4  83 E3 00 00 */	lwz r31, 0(r3)
/* 80469388 004662C8  48 00 00 60 */	b .L_804693E8
.L_8046938C:
/* 8046938C 004662CC  83 DF 00 00 */	lwz r30, 0(r31)
/* 80469390 004662D0  7F C3 F3 78 */	mr r3, r30
/* 80469394 004662D4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80469398 004662D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046939C 004662DC  7D 89 03 A6 */	mtctr r12
/* 804693A0 004662E0  4E 80 04 21 */	bctrl 
/* 804693A4 004662E4  2C 03 00 0F */	cmpwi r3, 0xf
/* 804693A8 004662E8  40 82 00 3C */	bne .L_804693E4
/* 804693AC 004662EC  38 7E 00 30 */	addi r3, r30, 0x30
/* 804693B0 004662F0  38 80 28 6B */	li r4, 0x286b
/* 804693B4 004662F4  81 9E 00 30 */	lwz r12, 0x30(r30)
/* 804693B8 004662F8  38 A0 00 00 */	li r5, 0
/* 804693BC 004662FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804693C0 00466300  7D 89 03 A6 */	mtctr r12
/* 804693C4 00466304  4E 80 04 21 */	bctrl 
/* 804693C8 00466308  38 7E 00 30 */	addi r3, r30, 0x30
/* 804693CC 0046630C  38 80 28 02 */	li r4, 0x2802
/* 804693D0 00466310  81 9E 00 30 */	lwz r12, 0x30(r30)
/* 804693D4 00466314  38 A0 00 00 */	li r5, 0
/* 804693D8 00466318  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804693DC 0046631C  7D 89 03 A6 */	mtctr r12
/* 804693E0 00466320  4E 80 04 21 */	bctrl 
.L_804693E4:
/* 804693E4 00466324  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_804693E8:
/* 804693E8 00466328  28 1F 00 00 */	cmplwi r31, 0
/* 804693EC 0046632C  40 82 FF A0 */	bne .L_8046938C
/* 804693F0 00466330  38 00 00 00 */	li r0, 0
/* 804693F4 00466334  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 804693F8 00466338  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 804693FC 0046633C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80469400 00466340  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80469404 00466344  28 00 00 00 */	cmplwi r0, 0
/* 80469408 00466348  90 81 00 18 */	stw r4, 0x18(r1)
/* 8046940C 0046634C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80469410 00466350  90 61 00 20 */	stw r3, 0x20(r1)
/* 80469414 00466354  40 82 00 1C */	bne .L_80469430
/* 80469418 00466358  81 83 00 00 */	lwz r12, 0(r3)
/* 8046941C 0046635C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80469420 00466360  7D 89 03 A6 */	mtctr r12
/* 80469424 00466364  4E 80 04 21 */	bctrl 
/* 80469428 00466368  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8046942C 0046636C  48 00 01 68 */	b .L_80469594
.L_80469430:
/* 80469430 00466370  81 83 00 00 */	lwz r12, 0(r3)
/* 80469434 00466374  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80469438 00466378  7D 89 03 A6 */	mtctr r12
/* 8046943C 0046637C  4E 80 04 21 */	bctrl 
/* 80469440 00466380  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80469444 00466384  48 00 00 58 */	b .L_8046949C
.L_80469448:
/* 80469448 00466388  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8046944C 0046638C  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80469450 00466390  81 83 00 00 */	lwz r12, 0(r3)
/* 80469454 00466394  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80469458 00466398  7D 89 03 A6 */	mtctr r12
/* 8046945C 0046639C  4E 80 04 21 */	bctrl 
/* 80469460 004663A0  7C 64 1B 78 */	mr r4, r3
/* 80469464 004663A4  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80469468 004663A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8046946C 004663AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80469470 004663B0  7D 89 03 A6 */	mtctr r12
/* 80469474 004663B4  4E 80 04 21 */	bctrl 
/* 80469478 004663B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046947C 004663BC  40 82 01 18 */	bne .L_80469594
/* 80469480 004663C0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80469484 004663C4  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80469488 004663C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8046948C 004663CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80469490 004663D0  7D 89 03 A6 */	mtctr r12
/* 80469494 004663D4  4E 80 04 21 */	bctrl 
/* 80469498 004663D8  90 61 00 1C */	stw r3, 0x1c(r1)
.L_8046949C:
/* 8046949C 004663DC  81 81 00 18 */	lwz r12, 0x18(r1)
/* 804694A0 004663E0  38 61 00 18 */	addi r3, r1, 0x18
/* 804694A4 004663E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804694A8 004663E8  7D 89 03 A6 */	mtctr r12
/* 804694AC 004663EC  4E 80 04 21 */	bctrl 
/* 804694B0 004663F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804694B4 004663F4  41 82 FF 94 */	beq .L_80469448
/* 804694B8 004663F8  48 00 00 DC */	b .L_80469594
.L_804694BC:
/* 804694BC 004663FC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 804694C0 00466400  81 83 00 00 */	lwz r12, 0(r3)
/* 804694C4 00466404  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 804694C8 00466408  7D 89 03 A6 */	mtctr r12
/* 804694CC 0046640C  4E 80 04 21 */	bctrl 
/* 804694D0 00466410  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 804694D4 00466414  4B FF 97 71 */	bl stopWaitVoice__Q23PSM4NaviFv
/* 804694D8 00466418  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804694DC 0046641C  28 00 00 00 */	cmplwi r0, 0
/* 804694E0 00466420  40 82 00 24 */	bne .L_80469504
/* 804694E4 00466424  80 61 00 20 */	lwz r3, 0x20(r1)
/* 804694E8 00466428  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 804694EC 0046642C  81 83 00 00 */	lwz r12, 0(r3)
/* 804694F0 00466430  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804694F4 00466434  7D 89 03 A6 */	mtctr r12
/* 804694F8 00466438  4E 80 04 21 */	bctrl 
/* 804694FC 0046643C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80469500 00466440  48 00 00 94 */	b .L_80469594
.L_80469504:
/* 80469504 00466444  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80469508 00466448  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8046950C 0046644C  81 83 00 00 */	lwz r12, 0(r3)
/* 80469510 00466450  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80469514 00466454  7D 89 03 A6 */	mtctr r12
/* 80469518 00466458  4E 80 04 21 */	bctrl 
/* 8046951C 0046645C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80469520 00466460  48 00 00 58 */	b .L_80469578
.L_80469524:
/* 80469524 00466464  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80469528 00466468  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8046952C 0046646C  81 83 00 00 */	lwz r12, 0(r3)
/* 80469530 00466470  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80469534 00466474  7D 89 03 A6 */	mtctr r12
/* 80469538 00466478  4E 80 04 21 */	bctrl 
/* 8046953C 0046647C  7C 64 1B 78 */	mr r4, r3
/* 80469540 00466480  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80469544 00466484  81 83 00 00 */	lwz r12, 0(r3)
/* 80469548 00466488  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046954C 0046648C  7D 89 03 A6 */	mtctr r12
/* 80469550 00466490  4E 80 04 21 */	bctrl 
/* 80469554 00466494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80469558 00466498  40 82 00 3C */	bne .L_80469594
/* 8046955C 0046649C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80469560 004664A0  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80469564 004664A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80469568 004664A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046956C 004664AC  7D 89 03 A6 */	mtctr r12
/* 80469570 004664B0  4E 80 04 21 */	bctrl 
/* 80469574 004664B4  90 61 00 1C */	stw r3, 0x1c(r1)
.L_80469578:
/* 80469578 004664B8  81 81 00 18 */	lwz r12, 0x18(r1)
/* 8046957C 004664BC  38 61 00 18 */	addi r3, r1, 0x18
/* 80469580 004664C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80469584 004664C4  7D 89 03 A6 */	mtctr r12
/* 80469588 004664C8  4E 80 04 21 */	bctrl 
/* 8046958C 004664CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80469590 004664D0  41 82 FF 94 */	beq .L_80469524
.L_80469594:
/* 80469594 004664D4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80469598 004664D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8046959C 004664DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804695A0 004664E0  7D 89 03 A6 */	mtctr r12
/* 804695A4 004664E4  4E 80 04 21 */	bctrl 
/* 804695A8 004664E8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 804695AC 004664EC  7C 04 18 40 */	cmplw r4, r3
/* 804695B0 004664F0  40 82 FF 0C */	bne .L_804694BC
/* 804695B4 004664F4  38 00 00 00 */	li r0, 0
/* 804695B8 004664F8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 804695BC 004664FC  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 804695C0 00466500  90 01 00 14 */	stw r0, 0x14(r1)
/* 804695C4 00466504  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 804695C8 00466508  28 00 00 00 */	cmplwi r0, 0
/* 804695CC 0046650C  90 81 00 08 */	stw r4, 8(r1)
/* 804695D0 00466510  90 01 00 0C */	stw r0, 0xc(r1)
/* 804695D4 00466514  90 61 00 10 */	stw r3, 0x10(r1)
/* 804695D8 00466518  40 82 00 1C */	bne .L_804695F4
/* 804695DC 0046651C  81 83 00 00 */	lwz r12, 0(r3)
/* 804695E0 00466520  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 804695E4 00466524  7D 89 03 A6 */	mtctr r12
/* 804695E8 00466528  4E 80 04 21 */	bctrl 
/* 804695EC 0046652C  90 61 00 0C */	stw r3, 0xc(r1)
/* 804695F0 00466530  48 00 02 60 */	b .L_80469850
.L_804695F4:
/* 804695F4 00466534  81 83 00 00 */	lwz r12, 0(r3)
/* 804695F8 00466538  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 804695FC 0046653C  7D 89 03 A6 */	mtctr r12
/* 80469600 00466540  4E 80 04 21 */	bctrl 
/* 80469604 00466544  90 61 00 0C */	stw r3, 0xc(r1)
/* 80469608 00466548  48 00 00 58 */	b .L_80469660
.L_8046960C:
/* 8046960C 0046654C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80469610 00466550  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469614 00466554  81 83 00 00 */	lwz r12, 0(r3)
/* 80469618 00466558  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046961C 0046655C  7D 89 03 A6 */	mtctr r12
/* 80469620 00466560  4E 80 04 21 */	bctrl 
/* 80469624 00466564  7C 64 1B 78 */	mr r4, r3
/* 80469628 00466568  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8046962C 0046656C  81 83 00 00 */	lwz r12, 0(r3)
/* 80469630 00466570  81 8C 00 08 */	lwz r12, 8(r12)
/* 80469634 00466574  7D 89 03 A6 */	mtctr r12
/* 80469638 00466578  4E 80 04 21 */	bctrl 
/* 8046963C 0046657C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80469640 00466580  40 82 02 10 */	bne .L_80469850
/* 80469644 00466584  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80469648 00466588  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046964C 0046658C  81 83 00 00 */	lwz r12, 0(r3)
/* 80469650 00466590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80469654 00466594  7D 89 03 A6 */	mtctr r12
/* 80469658 00466598  4E 80 04 21 */	bctrl 
/* 8046965C 0046659C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80469660:
/* 80469660 004665A0  81 81 00 08 */	lwz r12, 8(r1)
/* 80469664 004665A4  38 61 00 08 */	addi r3, r1, 8
/* 80469668 004665A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8046966C 004665AC  7D 89 03 A6 */	mtctr r12
/* 80469670 004665B0  4E 80 04 21 */	bctrl 
/* 80469674 004665B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80469678 004665B8  41 82 FF 94 */	beq .L_8046960C
/* 8046967C 004665BC  48 00 01 D4 */	b .L_80469850
.L_80469680:
/* 80469680 004665C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80469684 004665C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80469688 004665C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046968C 004665CC  7D 89 03 A6 */	mtctr r12
/* 80469690 004665D0  4E 80 04 21 */	bctrl 
/* 80469694 004665D4  7C 7F 1B 78 */	mr r31, r3
/* 80469698 004665D8  80 63 02 50 */	lwz r3, 0x250(r3)
/* 8046969C 004665DC  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804696A0 004665E0  38 80 28 7E */	li r4, 0x287e
/* 804696A4 004665E4  38 A0 00 00 */	li r5, 0
/* 804696A8 004665E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804696AC 004665EC  7D 89 03 A6 */	mtctr r12
/* 804696B0 004665F0  4E 80 04 21 */	bctrl 
/* 804696B4 004665F4  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804696B8 004665F8  38 80 28 7F */	li r4, 0x287f
/* 804696BC 004665FC  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804696C0 00466600  38 A0 00 00 */	li r5, 0
/* 804696C4 00466604  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804696C8 00466608  7D 89 03 A6 */	mtctr r12
/* 804696CC 0046660C  4E 80 04 21 */	bctrl 
/* 804696D0 00466610  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804696D4 00466614  38 80 28 80 */	li r4, 0x2880
/* 804696D8 00466618  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804696DC 0046661C  38 A0 00 00 */	li r5, 0
/* 804696E0 00466620  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 804696E4 00466624  7D 89 03 A6 */	mtctr r12
/* 804696E8 00466628  4E 80 04 21 */	bctrl 
/* 804696EC 0046662C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 804696F0 00466630  38 80 28 81 */	li r4, 0x2881
/* 804696F4 00466634  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 804696F8 00466638  38 A0 00 00 */	li r5, 0
/* 804696FC 0046663C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469700 00466640  7D 89 03 A6 */	mtctr r12
/* 80469704 00466644  4E 80 04 21 */	bctrl 
/* 80469708 00466648  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8046970C 0046664C  38 80 28 82 */	li r4, 0x2882
/* 80469710 00466650  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469714 00466654  38 A0 00 00 */	li r5, 0
/* 80469718 00466658  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046971C 0046665C  7D 89 03 A6 */	mtctr r12
/* 80469720 00466660  4E 80 04 21 */	bctrl 
/* 80469724 00466664  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80469728 00466668  38 80 28 83 */	li r4, 0x2883
/* 8046972C 0046666C  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469730 00466670  38 A0 00 00 */	li r5, 0
/* 80469734 00466674  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469738 00466678  7D 89 03 A6 */	mtctr r12
/* 8046973C 0046667C  4E 80 04 21 */	bctrl 
/* 80469740 00466680  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80469744 00466684  38 80 28 84 */	li r4, 0x2884
/* 80469748 00466688  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 8046974C 0046668C  38 A0 00 00 */	li r5, 0
/* 80469750 00466690  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469754 00466694  7D 89 03 A6 */	mtctr r12
/* 80469758 00466698  4E 80 04 21 */	bctrl 
/* 8046975C 0046669C  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80469760 004666A0  38 80 28 85 */	li r4, 0x2885
/* 80469764 004666A4  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469768 004666A8  38 A0 00 00 */	li r5, 0
/* 8046976C 004666AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469770 004666B0  7D 89 03 A6 */	mtctr r12
/* 80469774 004666B4  4E 80 04 21 */	bctrl 
/* 80469778 004666B8  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8046977C 004666BC  38 80 28 86 */	li r4, 0x2886
/* 80469780 004666C0  85 83 00 30 */	lwzu r12, 0x30(r3)
/* 80469784 004666C4  38 A0 00 00 */	li r5, 0
/* 80469788 004666C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046978C 004666CC  7D 89 03 A6 */	mtctr r12
/* 80469790 004666D0  4E 80 04 21 */	bctrl 
/* 80469794 004666D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80469798 004666D8  28 00 00 00 */	cmplwi r0, 0
/* 8046979C 004666DC  40 82 00 24 */	bne .L_804697C0
/* 804697A0 004666E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 804697A4 004666E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804697A8 004666E8  81 83 00 00 */	lwz r12, 0(r3)
/* 804697AC 004666EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804697B0 004666F0  7D 89 03 A6 */	mtctr r12
/* 804697B4 004666F4  4E 80 04 21 */	bctrl 
/* 804697B8 004666F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 804697BC 004666FC  48 00 00 94 */	b .L_80469850
.L_804697C0:
/* 804697C0 00466700  80 61 00 10 */	lwz r3, 0x10(r1)
/* 804697C4 00466704  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804697C8 00466708  81 83 00 00 */	lwz r12, 0(r3)
/* 804697CC 0046670C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804697D0 00466710  7D 89 03 A6 */	mtctr r12
/* 804697D4 00466714  4E 80 04 21 */	bctrl 
/* 804697D8 00466718  90 61 00 0C */	stw r3, 0xc(r1)
/* 804697DC 0046671C  48 00 00 58 */	b .L_80469834
.L_804697E0:
/* 804697E0 00466720  80 61 00 10 */	lwz r3, 0x10(r1)
/* 804697E4 00466724  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804697E8 00466728  81 83 00 00 */	lwz r12, 0(r3)
/* 804697EC 0046672C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 804697F0 00466730  7D 89 03 A6 */	mtctr r12
/* 804697F4 00466734  4E 80 04 21 */	bctrl 
/* 804697F8 00466738  7C 64 1B 78 */	mr r4, r3
/* 804697FC 0046673C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80469800 00466740  81 83 00 00 */	lwz r12, 0(r3)
/* 80469804 00466744  81 8C 00 08 */	lwz r12, 8(r12)
/* 80469808 00466748  7D 89 03 A6 */	mtctr r12
/* 8046980C 0046674C  4E 80 04 21 */	bctrl 
/* 80469810 00466750  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80469814 00466754  40 82 00 3C */	bne .L_80469850
/* 80469818 00466758  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046981C 0046675C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469820 00466760  81 83 00 00 */	lwz r12, 0(r3)
/* 80469824 00466764  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80469828 00466768  7D 89 03 A6 */	mtctr r12
/* 8046982C 0046676C  4E 80 04 21 */	bctrl 
/* 80469830 00466770  90 61 00 0C */	stw r3, 0xc(r1)
.L_80469834:
/* 80469834 00466774  81 81 00 08 */	lwz r12, 8(r1)
/* 80469838 00466778  38 61 00 08 */	addi r3, r1, 8
/* 8046983C 0046677C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80469840 00466780  7D 89 03 A6 */	mtctr r12
/* 80469844 00466784  4E 80 04 21 */	bctrl 
/* 80469848 00466788  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046984C 0046678C  41 82 FF 94 */	beq .L_804697E0
.L_80469850:
/* 80469850 00466790  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80469854 00466794  81 83 00 00 */	lwz r12, 0(r3)
/* 80469858 00466798  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046985C 0046679C  7D 89 03 A6 */	mtctr r12
/* 80469860 004667A0  4E 80 04 21 */	bctrl 
/* 80469864 004667A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80469868 004667A8  7C 04 18 40 */	cmplw r4, r3
/* 8046986C 004667AC  40 82 FE 14 */	bne .L_80469680
/* 80469870 004667B0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80469874 004667B4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80469878 004667B8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8046987C 004667BC  7C 08 03 A6 */	mtlr r0
/* 80469880 004667C0  38 21 00 30 */	addi r1, r1, 0x30
/* 80469884 004667C4  4E 80 00 20 */	blr 
.endfn pauseOn_Demo__Q23PSM10Scene_GameFv

.fn pauseOff_Demo__Q23PSM10Scene_GameFv, global
/* 80469888 004667C8  4E 80 00 20 */	blr 
.endfn pauseOff_Demo__Q23PSM10Scene_GameFv

.fn akubiOK__Q23PSM10Scene_GameFv, global
/* 8046988C 004667CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80469890 004667D0  7C 08 02 A6 */	mflr r0
/* 80469894 004667D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80469898 004667D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046989C 004667DC  3B E0 00 00 */	li r31, 0
/* 804698A0 004667E0  93 C1 00 08 */	stw r30, 8(r1)
/* 804698A4 004667E4  7C 7E 1B 78 */	mr r30, r3
/* 804698A8 004667E8  4B C5 0C 4D */	bl getRandom_0_1__7JALCalcFv
/* 804698AC 004667EC  C0 02 29 44 */	lfs f0, lbl_80520CA4@sda21(r2)
/* 804698B0 004667F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804698B4 004667F4  40 80 00 40 */	bge .L_804698F4
/* 804698B8 004667F8  4B FE F0 45 */	bl PSMGetBattleD__Fv
/* 804698BC 004667FC  28 03 00 00 */	cmplwi r3, 0
/* 804698C0 00466800  41 82 00 14 */	beq .L_804698D4
/* 804698C4 00466804  4B FE F0 39 */	bl PSMGetBattleD__Fv
/* 804698C8 00466808  4B ED 98 01 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 804698CC 0046680C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804698D0 00466810  40 82 00 24 */	bne .L_804698F4
.L_804698D4:
/* 804698D4 00466814  4B FE EF 21 */	bl PSMGetKehaiD__Fv
/* 804698D8 00466818  28 03 00 00 */	cmplwi r3, 0
/* 804698DC 0046681C  41 82 00 14 */	beq .L_804698F0
/* 804698E0 00466820  4B FE EF 15 */	bl PSMGetKehaiD__Fv
/* 804698E4 00466824  4B ED 97 E5 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 804698E8 00466828  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804698EC 0046682C  40 82 00 08 */	bne .L_804698F4
.L_804698F0:
/* 804698F0 00466830  3B E0 00 01 */	li r31, 1
.L_804698F4:
/* 804698F4 00466834  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 804698F8 00466838  41 82 00 2C */	beq .L_80469924
/* 804698FC 0046683C  7F C3 F3 78 */	mr r3, r30
/* 80469900 00466840  4B EC BD 81 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 80469904 00466844  28 03 00 00 */	cmplwi r3, 0
/* 80469908 00466848  41 82 00 1C */	beq .L_80469924
/* 8046990C 0046684C  7F C3 F3 78 */	mr r3, r30
/* 80469910 00466850  4B EC BD 71 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 80469914 00466854  A0 03 01 30 */	lhz r0, 0x130(r3)
/* 80469918 00466858  28 00 00 00 */	cmplwi r0, 0
/* 8046991C 0046685C  41 82 00 08 */	beq .L_80469924
/* 80469920 00466860  3B E0 00 00 */	li r31, 0
.L_80469924:
/* 80469924 00466864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80469928 00466868  7F E3 FB 78 */	mr r3, r31
/* 8046992C 0046686C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80469930 00466870  83 C1 00 08 */	lwz r30, 8(r1)
/* 80469934 00466874  7C 08 03 A6 */	mtlr r0
/* 80469938 00466878  38 21 00 10 */	addi r1, r1, 0x10
/* 8046993C 0046687C  4E 80 00 20 */	blr 
.endfn akubiOK__Q23PSM10Scene_GameFv

.fn __ct__Q23PSM12Scene_GroundFUcPQ26PSGame9SceneInfo, global
/* 80469940 00466880  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80469944 00466884  7C 08 02 A6 */	mflr r0
/* 80469948 00466888  3C C0 80 4A */	lis r6, lbl_8049D908@ha
/* 8046994C 0046688C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80469950 00466890  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80469954 00466894  7C 7E 1B 78 */	mr r30, r3
/* 80469958 00466898  7C BC 2B 78 */	mr r28, r5
/* 8046995C 0046689C  3B A6 D9 08 */	addi r29, r6, lbl_8049D908@l
/* 80469960 004668A0  7F DF F3 78 */	mr r31, r30
/* 80469964 004668A4  7F DB F3 78 */	mr r27, r30
/* 80469968 004668A8  4B EC BC 7D */	bl __ct__Q26PSGame8PikSceneFUc
/* 8046996C 004668AC  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 80469970 004668B0  28 1C 00 00 */	cmplwi r28, 0
/* 80469974 004668B4  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 80469978 004668B8  90 1B 00 00 */	stw r0, 0(r27)
/* 8046997C 004668BC  93 9B 00 24 */	stw r28, 0x24(r27)
/* 80469980 004668C0  40 82 00 18 */	bne .L_80469998
/* 80469984 004668C4  38 7D 00 0C */	addi r3, r29, 0xc
/* 80469988 004668C8  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046998C 004668CC  38 80 00 24 */	li r4, 0x24
/* 80469990 004668D0  4C C6 31 82 */	crclr 6
/* 80469994 004668D4  4B BC 0C AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469998:
/* 80469998 004668D8  7F 63 DB 78 */	mr r3, r27
/* 8046999C 004668DC  81 9B 00 00 */	lwz r12, 0(r27)
/* 804699A0 004668E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 804699A4 004668E4  7D 89 03 A6 */	mtctr r12
/* 804699A8 004668E8  4E 80 04 21 */	bctrl 
/* 804699AC 004668EC  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 804699B0 004668F0  38 80 00 00 */	li r4, 0
/* 804699B4 004668F4  38 63 F5 84 */	addi r3, r3, __vt__Q23PSM13Scene_Objects@l
/* 804699B8 004668F8  3C 00 F0 00 */	lis r0, 0xf000
/* 804699BC 004668FC  90 7F 00 00 */	stw r3, 0(r31)
/* 804699C0 00466900  38 60 00 50 */	li r3, 0x50
/* 804699C4 00466904  90 9F 00 28 */	stw r4, 0x28(r31)
/* 804699C8 00466908  90 9F 00 2C */	stw r4, 0x2c(r31)
/* 804699CC 0046690C  98 9F 00 30 */	stb r4, 0x30(r31)
/* 804699D0 00466910  90 1F 00 34 */	stw r0, 0x34(r31)
/* 804699D4 00466914  4B BB A4 D1 */	bl __nw__FUl
/* 804699D8 00466918  7C 60 1B 79 */	or. r0, r3, r3
/* 804699DC 0046691C  41 82 00 0C */	beq .L_804699E8
/* 804699E0 00466920  4B EC B2 E9 */	bl __ct__Q26PSGame9CameraMgrFv
/* 804699E4 00466924  7C 60 1B 78 */	mr r0, r3
.L_804699E8:
/* 804699E8 00466928  90 1F 00 28 */	stw r0, 0x28(r31)
/* 804699EC 0046692C  7F 83 E3 78 */	mr r3, r28
/* 804699F0 00466930  38 80 00 01 */	li r4, 1
/* 804699F4 00466934  4B EC BB 6D */	bl getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
/* 804699F8 00466938  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 804699FC 0046693C  20 00 00 01 */	subfic r0, r0, 1
/* 80469A00 00466940  7C 00 00 34 */	cntlzw r0, r0
/* 80469A04 00466944  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80469A08 00466948  40 82 00 0C */	bne .L_80469A14
/* 80469A0C 0046694C  48 00 8E 99 */	bl newInstance_SingleGame__Q23PSM18ObjCalc_SingleGameFv
/* 80469A10 00466950  48 00 00 08 */	b .L_80469A18
.L_80469A14:
/* 80469A14 00466954  48 00 8F 01 */	bl newInstance_2PGame__Q23PSM14ObjCalc_2PGameFv
.L_80469A18:
/* 80469A18 00466958  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80469A1C 0046695C  28 00 00 00 */	cmplwi r0, 0
/* 80469A20 00466960  41 82 00 2C */	beq .L_80469A4C
/* 80469A24 00466964  40 82 00 18 */	bne .L_80469A3C
/* 80469A28 00466968  38 7D 00 30 */	addi r3, r29, 0x30
/* 80469A2C 0046696C  38 BD 00 24 */	addi r5, r29, 0x24
/* 80469A30 00466970  38 80 00 89 */	li r4, 0x89
/* 80469A34 00466974  4C C6 31 82 */	crclr 6
/* 80469A38 00466978  4B BC 0C 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469A3C:
/* 80469A3C 0046697C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80469A40 00466980  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80469A44 00466984  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80469A48 00466988  93 E3 00 2C */	stw r31, 0x2c(r3)
.L_80469A4C:
/* 80469A4C 0046698C  3C 80 80 4F */	lis r4, __vt__Q23PSM10Scene_Game@ha
/* 80469A50 00466990  38 7E 00 38 */	addi r3, r30, 0x38
/* 80469A54 00466994  38 04 F4 E8 */	addi r0, r4, __vt__Q23PSM10Scene_Game@l
/* 80469A58 00466998  90 1E 00 00 */	stw r0, 0(r30)
/* 80469A5C 0046699C  4B BB CE 75 */	bl initiate__10JSUPtrListFv
/* 80469A60 004669A0  38 80 00 00 */	li r4, 0
/* 80469A64 004669A4  38 00 FF FF */	li r0, -1
/* 80469A68 004669A8  90 9E 00 44 */	stw r4, 0x44(r30)
/* 80469A6C 004669AC  38 60 00 14 */	li r3, 0x14
/* 80469A70 004669B0  90 9E 00 48 */	stw r4, 0x48(r30)
/* 80469A74 004669B4  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80469A78 004669B8  90 9E 00 50 */	stw r4, 0x50(r30)
/* 80469A7C 004669BC  90 9E 00 58 */	stw r4, 0x58(r30)
/* 80469A80 004669C0  4B BB A4 25 */	bl __nw__FUl
/* 80469A84 004669C4  7C 60 1B 79 */	or. r0, r3, r3
/* 80469A88 004669C8  41 82 00 0C */	beq .L_80469A94
/* 80469A8C 004669CC  48 00 3E 45 */	bl __ct__Q23PSM14PikiHummingMgrFv
/* 80469A90 004669D0  7C 60 1B 78 */	mr r0, r3
.L_80469A94:
/* 80469A94 004669D4  3C 60 80 4F */	lis r3, __vt__Q23PSM12Scene_Ground@ha
/* 80469A98 004669D8  90 1E 00 54 */	stw r0, 0x54(r30)
/* 80469A9C 004669DC  38 63 F4 5C */	addi r3, r3, __vt__Q23PSM12Scene_Ground@l
/* 80469AA0 004669E0  38 00 FF FF */	li r0, -1
/* 80469AA4 004669E4  90 7E 00 00 */	stw r3, 0(r30)
/* 80469AA8 004669E8  7F C3 F3 78 */	mr r3, r30
/* 80469AAC 004669EC  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 80469AB0 004669F0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80469AB4 004669F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80469AB8 004669F8  7C 08 03 A6 */	mtlr r0
/* 80469ABC 004669FC  38 21 00 20 */	addi r1, r1, 0x20
/* 80469AC0 00466A00  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM12Scene_GroundFUcPQ26PSGame9SceneInfo

.fn exec__Q23PSM12Scene_GroundFv, global
/* 80469AC4 00466A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80469AC8 00466A08  7C 08 02 A6 */	mflr r0
/* 80469ACC 00466A0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80469AD0 00466A10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80469AD4 00466A14  7C 7F 1B 78 */	mr r31, r3
/* 80469AD8 00466A18  4B FF ED 8D */	bl exec__Q23PSM10Scene_GameFv
/* 80469ADC 00466A1C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 80469AE0 00466A20  3C 03 00 01 */	addis r0, r3, 1
/* 80469AE4 00466A24  28 00 FF FF */	cmplwi r0, 0xffff
/* 80469AE8 00466A28  41 82 00 0C */	beq .L_80469AF4
/* 80469AEC 00466A2C  38 03 00 01 */	addi r0, r3, 1
/* 80469AF0 00466A30  90 1F 00 5C */	stw r0, 0x5c(r31)
.L_80469AF4:
/* 80469AF4 00466A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80469AF8 00466A38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80469AFC 00466A3C  7C 08 03 A6 */	mtlr r0
/* 80469B00 00466A40  38 21 00 10 */	addi r1, r1, 0x10
/* 80469B04 00466A44  4E 80 00 20 */	blr 
.endfn exec__Q23PSM12Scene_GroundFv

.fn setPollutUp__Q23PSM12Scene_GroundFv, global
/* 80469B08 00466A48  38 00 00 00 */	li r0, 0
/* 80469B0C 00466A4C  90 03 00 5C */	stw r0, 0x5c(r3)
/* 80469B10 00466A50  4E 80 00 20 */	blr 
.endfn setPollutUp__Q23PSM12Scene_GroundFv

.fn fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time, global
/* 80469B14 00466A54  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80469B18 00466A58  7C 08 02 A6 */	mflr r0
/* 80469B1C 00466A5C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80469B20 00466A60  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80469B24 00466A64  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80469B28 00466A68  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80469B2C 00466A6C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80469B30 00466A70  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80469B34 00466A74  93 81 00 10 */	stw r28, 0x10(r1)
/* 80469B38 00466A78  7C 7C 1B 78 */	mr r28, r3
/* 80469B3C 00466A7C  FF E0 08 90 */	fmr f31, f1
/* 80469B40 00466A80  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80469B44 00466A84  7C 9D 23 78 */	mr r29, r4
/* 80469B48 00466A88  7C BE 2B 78 */	mr r30, r5
/* 80469B4C 00466A8C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80469B50 00466A90  28 1F 00 00 */	cmplwi r31, 0
/* 80469B54 00466A94  40 82 00 20 */	bne .L_80469B74
/* 80469B58 00466A98  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80469B5C 00466A9C  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80469B60 00466AA0  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80469B64 00466AA4  38 80 03 2D */	li r4, 0x32d
/* 80469B68 00466AA8  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80469B6C 00466AAC  4C C6 31 82 */	crclr 6
/* 80469B70 00466AB0  4B BC 0A D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469B74:
/* 80469B74 00466AB4  2C 1E 00 01 */	cmpwi r30, 1
/* 80469B78 00466AB8  41 82 01 08 */	beq .L_80469C80
/* 80469B7C 00466ABC  40 80 01 1C */	bge .L_80469C98
/* 80469B80 00466AC0  2C 1E 00 00 */	cmpwi r30, 0
/* 80469B84 00466AC4  40 80 00 08 */	bge .L_80469B8C
/* 80469B88 00466AC8  48 00 01 10 */	b .L_80469C98
.L_80469B8C:
/* 80469B8C 00466ACC  C0 02 29 3C */	lfs f0, lbl_80520C9C@sda21(r2)
/* 80469B90 00466AD0  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 80469B94 00466AD4  40 82 00 78 */	bne .L_80469C0C
/* 80469B98 00466AD8  7F E3 FB 78 */	mr r3, r31
/* 80469B9C 00466ADC  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80469BA0 00466AE0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80469BA4 00466AE4  7D 89 03 A6 */	mtctr r12
/* 80469BA8 00466AE8  4E 80 04 21 */	bctrl 
/* 80469BAC 00466AEC  80 03 00 00 */	lwz r0, 0(r3)
/* 80469BB0 00466AF0  28 00 00 00 */	cmplwi r0, 0
/* 80469BB4 00466AF4  41 82 00 38 */	beq .L_80469BEC
/* 80469BB8 00466AF8  7F E3 FB 78 */	mr r3, r31
/* 80469BBC 00466AFC  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80469BC0 00466B00  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80469BC4 00466B04  7D 89 03 A6 */	mtctr r12
/* 80469BC8 00466B08  4E 80 04 21 */	bctrl 
/* 80469BCC 00466B0C  80 63 00 00 */	lwz r3, 0(r3)
/* 80469BD0 00466B10  FC 20 F8 90 */	fmr f1, f31
/* 80469BD4 00466B14  7F A4 EB 78 */	mr r4, r29
/* 80469BD8 00466B18  38 A0 00 02 */	li r5, 2
/* 80469BDC 00466B1C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80469BE0 00466B20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469BE4 00466B24  7D 89 03 A6 */	mtctr r12
/* 80469BE8 00466B28  4E 80 04 21 */	bctrl 
.L_80469BEC:
/* 80469BEC 00466B2C  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80469BF0 00466B30  28 03 00 00 */	cmplwi r3, 0
/* 80469BF4 00466B34  41 82 00 A4 */	beq .L_80469C98
/* 80469BF8 00466B38  FC 20 F8 90 */	fmr f1, f31
/* 80469BFC 00466B3C  7F A4 EB 78 */	mr r4, r29
/* 80469C00 00466B40  38 A0 00 02 */	li r5, 2
/* 80469C04 00466B44  4B ED 71 9D */	bl setVolumeRequest__Q28PSSystem8EnvSeMgrFfUlUc
/* 80469C08 00466B48  48 00 00 90 */	b .L_80469C98
.L_80469C0C:
/* 80469C0C 00466B4C  7F E3 FB 78 */	mr r3, r31
/* 80469C10 00466B50  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80469C14 00466B54  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80469C18 00466B58  7D 89 03 A6 */	mtctr r12
/* 80469C1C 00466B5C  4E 80 04 21 */	bctrl 
/* 80469C20 00466B60  80 03 00 00 */	lwz r0, 0(r3)
/* 80469C24 00466B64  28 00 00 00 */	cmplwi r0, 0
/* 80469C28 00466B68  41 82 00 38 */	beq .L_80469C60
/* 80469C2C 00466B6C  7F E3 FB 78 */	mr r3, r31
/* 80469C30 00466B70  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 80469C34 00466B74  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80469C38 00466B78  7D 89 03 A6 */	mtctr r12
/* 80469C3C 00466B7C  4E 80 04 21 */	bctrl 
/* 80469C40 00466B80  80 63 00 00 */	lwz r3, 0(r3)
/* 80469C44 00466B84  FC 20 F8 90 */	fmr f1, f31
/* 80469C48 00466B88  1C 9D 00 03 */	mulli r4, r29, 3
/* 80469C4C 00466B8C  38 A0 00 02 */	li r5, 2
/* 80469C50 00466B90  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80469C54 00466B94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80469C58 00466B98  7D 89 03 A6 */	mtctr r12
/* 80469C5C 00466B9C  4E 80 04 21 */	bctrl 
.L_80469C60:
/* 80469C60 00466BA0  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 80469C64 00466BA4  28 03 00 00 */	cmplwi r3, 0
/* 80469C68 00466BA8  41 82 00 30 */	beq .L_80469C98
/* 80469C6C 00466BAC  FC 20 F8 90 */	fmr f1, f31
/* 80469C70 00466BB0  7F A4 EB 78 */	mr r4, r29
/* 80469C74 00466BB4  38 A0 00 02 */	li r5, 2
/* 80469C78 00466BB8  4B ED 71 29 */	bl setVolumeRequest__Q28PSSystem8EnvSeMgrFfUlUc
/* 80469C7C 00466BBC  48 00 00 1C */	b .L_80469C98
.L_80469C80:
/* 80469C80 00466BC0  7F 83 E3 78 */	mr r3, r28
/* 80469C84 00466BC4  38 80 00 3C */	li r4, 0x3c
/* 80469C88 00466BC8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80469C8C 00466BCC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80469C90 00466BD0  7D 89 03 A6 */	mtctr r12
/* 80469C94 00466BD4  4E 80 04 21 */	bctrl 
.L_80469C98:
/* 80469C98 00466BD8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80469C9C 00466BDC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80469CA0 00466BE0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80469CA4 00466BE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80469CA8 00466BE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80469CAC 00466BEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80469CB0 00466BF0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80469CB4 00466BF4  7C 08 03 A6 */	mtlr r0
/* 80469CB8 00466BF8  38 21 00 30 */	addi r1, r1, 0x30
/* 80469CBC 00466BFC  4E 80 00 20 */	blr 
.endfn fadeMainBgm__Q23PSM12Scene_GroundFfUlQ33PSM12Scene_Ground4Time

.fn jumpMainBgm__Q23PSM12Scene_GroundFUc, global
/* 80469CC0 00466C00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80469CC4 00466C04  7C 08 02 A6 */	mflr r0
/* 80469CC8 00466C08  90 01 00 24 */	stw r0, 0x24(r1)
/* 80469CCC 00466C0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80469CD0 00466C10  7C 7F 1B 78 */	mr r31, r3
/* 80469CD4 00466C14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80469CD8 00466C18  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80469CDC 00466C1C  7C 9D 23 78 */	mr r29, r4
/* 80469CE0 00466C20  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80469CE4 00466C24  83 C3 00 00 */	lwz r30, 0(r3)
/* 80469CE8 00466C28  28 1E 00 00 */	cmplwi r30, 0
/* 80469CEC 00466C2C  40 82 00 20 */	bne .L_80469D0C
/* 80469CF0 00466C30  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80469CF4 00466C34  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80469CF8 00466C38  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80469CFC 00466C3C  38 80 03 4E */	li r4, 0x34e
/* 80469D00 00466C40  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80469D04 00466C44  4C C6 31 82 */	crclr 6
/* 80469D08 00466C48  4B BC 09 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469D0C:
/* 80469D0C 00466C4C  7F C3 F3 78 */	mr r3, r30
/* 80469D10 00466C50  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 80469D14 00466C54  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80469D18 00466C58  7D 89 03 A6 */	mtctr r12
/* 80469D1C 00466C5C  4E 80 04 21 */	bctrl 
/* 80469D20 00466C60  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80469D24 00466C64  28 00 00 04 */	cmplwi r0, 4
/* 80469D28 00466C68  41 82 00 20 */	beq .L_80469D48
/* 80469D2C 00466C6C  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 80469D30 00466C70  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 80469D34 00466C74  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 80469D38 00466C78  38 80 03 4F */	li r4, 0x34f
/* 80469D3C 00466C7C  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 80469D40 00466C80  4C C6 31 82 */	crclr 6
/* 80469D44 00466C84  4B BC 08 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469D48:
/* 80469D48 00466C88  7F C3 F3 78 */	mr r3, r30
/* 80469D4C 00466C8C  57 A4 06 3E */	clrlwi r4, r29, 0x18
/* 80469D50 00466C90  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 80469D54 00466C94  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80469D58 00466C98  7D 89 03 A6 */	mtctr r12
/* 80469D5C 00466C9C  4E 80 04 21 */	bctrl 
/* 80469D60 00466CA0  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80469D64 00466CA4  28 03 00 00 */	cmplwi r3, 0
/* 80469D68 00466CA8  41 82 00 C0 */	beq .L_80469E28
/* 80469D6C 00466CAC  80 63 00 00 */	lwz r3, 0(r3)
/* 80469D70 00466CB0  48 00 00 9C */	b .L_80469E0C
.L_80469D74:
/* 80469D74 00466CB4  80 83 00 00 */	lwz r4, 0(r3)
/* 80469D78 00466CB8  80 04 00 24 */	lwz r0, 0x24(r4)
/* 80469D7C 00466CBC  28 00 40 39 */	cmplwi r0, 0x4039
/* 80469D80 00466CC0  41 82 00 1C */	beq .L_80469D9C
/* 80469D84 00466CC4  28 00 40 38 */	cmplwi r0, 0x4038
/* 80469D88 00466CC8  41 82 00 14 */	beq .L_80469D9C
/* 80469D8C 00466CCC  28 00 40 3A */	cmplwi r0, 0x403a
/* 80469D90 00466CD0  41 82 00 0C */	beq .L_80469D9C
/* 80469D94 00466CD4  28 00 40 3C */	cmplwi r0, 0x403c
/* 80469D98 00466CD8  40 82 00 10 */	bne .L_80469DA8
.L_80469D9C:
/* 80469D9C 00466CDC  38 00 40 14 */	li r0, 0x4014
/* 80469DA0 00466CE0  90 04 00 24 */	stw r0, 0x24(r4)
/* 80469DA4 00466CE4  48 00 00 64 */	b .L_80469E08
.L_80469DA8:
/* 80469DA8 00466CE8  28 00 40 37 */	cmplwi r0, 0x4037
/* 80469DAC 00466CEC  41 82 00 0C */	beq .L_80469DB8
/* 80469DB0 00466CF0  28 00 40 3B */	cmplwi r0, 0x403b
/* 80469DB4 00466CF4  40 82 00 10 */	bne .L_80469DC4
.L_80469DB8:
/* 80469DB8 00466CF8  38 00 40 15 */	li r0, 0x4015
/* 80469DBC 00466CFC  90 04 00 24 */	stw r0, 0x24(r4)
/* 80469DC0 00466D00  48 00 00 48 */	b .L_80469E08
.L_80469DC4:
/* 80469DC4 00466D04  28 00 40 2F */	cmplwi r0, 0x402f
/* 80469DC8 00466D08  41 82 00 14 */	beq .L_80469DDC
/* 80469DCC 00466D0C  28 00 40 33 */	cmplwi r0, 0x4033
/* 80469DD0 00466D10  41 82 00 0C */	beq .L_80469DDC
/* 80469DD4 00466D14  28 00 40 35 */	cmplwi r0, 0x4035
/* 80469DD8 00466D18  40 82 00 10 */	bne .L_80469DE8
.L_80469DDC:
/* 80469DDC 00466D1C  38 00 40 31 */	li r0, 0x4031
/* 80469DE0 00466D20  90 04 00 24 */	stw r0, 0x24(r4)
/* 80469DE4 00466D24  48 00 00 24 */	b .L_80469E08
.L_80469DE8:
/* 80469DE8 00466D28  28 00 40 30 */	cmplwi r0, 0x4030
/* 80469DEC 00466D2C  41 82 00 14 */	beq .L_80469E00
/* 80469DF0 00466D30  28 00 40 34 */	cmplwi r0, 0x4034
/* 80469DF4 00466D34  41 82 00 0C */	beq .L_80469E00
/* 80469DF8 00466D38  28 00 40 36 */	cmplwi r0, 0x4036
/* 80469DFC 00466D3C  40 82 00 0C */	bne .L_80469E08
.L_80469E00:
/* 80469E00 00466D40  38 00 40 32 */	li r0, 0x4032
/* 80469E04 00466D44  90 04 00 24 */	stw r0, 0x24(r4)
.L_80469E08:
/* 80469E08 00466D48  80 63 00 0C */	lwz r3, 0xc(r3)
.L_80469E0C:
/* 80469E0C 00466D4C  28 03 00 00 */	cmplwi r3, 0
/* 80469E10 00466D50  40 82 FF 64 */	bne .L_80469D74
/* 80469E14 00466D54  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80469E18 00466D58  38 80 00 00 */	li r4, 0
/* 80469E1C 00466D5C  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 80469E20 00466D60  38 A0 00 02 */	li r5, 2
/* 80469E24 00466D64  4B ED 6F 7D */	bl setVolumeRequest__Q28PSSystem8EnvSeMgrFfUlUc
.L_80469E28:
/* 80469E28 00466D68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80469E2C 00466D6C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80469E30 00466D70  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80469E34 00466D74  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80469E38 00466D78  7C 08 03 A6 */	mtlr r0
/* 80469E3C 00466D7C  38 21 00 20 */	addi r1, r1, 0x20
/* 80469E40 00466D80  4E 80 00 20 */	blr 
.endfn jumpMainBgm__Q23PSM12Scene_GroundFUc

.fn changeEnvSE_Noon__Q23PSM12Scene_GroundFv, global
/* 80469E44 00466D84  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80469E48 00466D88  28 03 00 00 */	cmplwi r3, 0
/* 80469E4C 00466D8C  4D 82 00 20 */	beqlr 
/* 80469E50 00466D90  80 A3 00 00 */	lwz r5, 0(r3)
/* 80469E54 00466D94  38 60 40 33 */	li r3, 0x4033
/* 80469E58 00466D98  38 00 40 34 */	li r0, 0x4034
/* 80469E5C 00466D9C  48 00 00 2C */	b .L_80469E88
.L_80469E60:
/* 80469E60 00466DA0  80 C5 00 00 */	lwz r6, 0(r5)
/* 80469E64 00466DA4  80 86 00 24 */	lwz r4, 0x24(r6)
/* 80469E68 00466DA8  28 04 40 2F */	cmplwi r4, 0x402f
/* 80469E6C 00466DAC  40 82 00 0C */	bne .L_80469E78
/* 80469E70 00466DB0  90 66 00 24 */	stw r3, 0x24(r6)
/* 80469E74 00466DB4  48 00 00 10 */	b .L_80469E84
.L_80469E78:
/* 80469E78 00466DB8  28 04 40 35 */	cmplwi r4, 0x4035
/* 80469E7C 00466DBC  40 82 00 08 */	bne .L_80469E84
/* 80469E80 00466DC0  90 06 00 24 */	stw r0, 0x24(r6)
.L_80469E84:
/* 80469E84 00466DC4  80 A5 00 0C */	lwz r5, 0xc(r5)
.L_80469E88:
/* 80469E88 00466DC8  28 05 00 00 */	cmplwi r5, 0
/* 80469E8C 00466DCC  40 82 FF D4 */	bne .L_80469E60
/* 80469E90 00466DD0  4E 80 00 20 */	blr 
.endfn changeEnvSE_Noon__Q23PSM12Scene_GroundFv

.fn __ct__Q23PSM10Scene_CaveFUcPQ26PSGame9SceneInfo, global
/* 80469E94 00466DD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80469E98 00466DD8  7C 08 02 A6 */	mflr r0
/* 80469E9C 00466DDC  3C C0 80 4A */	lis r6, lbl_8049D908@ha
/* 80469EA0 00466DE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80469EA4 00466DE4  BF 41 00 08 */	stmw r26, 8(r1)
/* 80469EA8 00466DE8  7C 7B 1B 78 */	mr r27, r3
/* 80469EAC 00466DEC  7F 60 DB 78 */	mr r0, r27
/* 80469EB0 00466DF0  7C BE 2B 78 */	mr r30, r5
/* 80469EB4 00466DF4  7C 1C 03 78 */	mr r28, r0
/* 80469EB8 00466DF8  3B E6 D9 08 */	addi r31, r6, lbl_8049D908@l
/* 80469EBC 00466DFC  7C 1D 03 78 */	mr r29, r0
/* 80469EC0 00466E00  7C 1A 03 78 */	mr r26, r0
/* 80469EC4 00466E04  4B EC B7 21 */	bl __ct__Q26PSGame8PikSceneFUc
/* 80469EC8 00466E08  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 80469ECC 00466E0C  28 1E 00 00 */	cmplwi r30, 0
/* 80469ED0 00466E10  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 80469ED4 00466E14  90 1A 00 00 */	stw r0, 0(r26)
/* 80469ED8 00466E18  93 DA 00 24 */	stw r30, 0x24(r26)
/* 80469EDC 00466E1C  40 82 00 18 */	bne .L_80469EF4
/* 80469EE0 00466E20  38 7F 00 0C */	addi r3, r31, 0xc
/* 80469EE4 00466E24  38 BF 00 24 */	addi r5, r31, 0x24
/* 80469EE8 00466E28  38 80 00 24 */	li r4, 0x24
/* 80469EEC 00466E2C  4C C6 31 82 */	crclr 6
/* 80469EF0 00466E30  4B BC 07 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469EF4:
/* 80469EF4 00466E34  7F 43 D3 78 */	mr r3, r26
/* 80469EF8 00466E38  81 9A 00 00 */	lwz r12, 0(r26)
/* 80469EFC 00466E3C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80469F00 00466E40  7D 89 03 A6 */	mtctr r12
/* 80469F04 00466E44  4E 80 04 21 */	bctrl 
/* 80469F08 00466E48  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 80469F0C 00466E4C  38 80 00 00 */	li r4, 0
/* 80469F10 00466E50  38 63 F5 84 */	addi r3, r3, __vt__Q23PSM13Scene_Objects@l
/* 80469F14 00466E54  3C 00 F0 00 */	lis r0, 0xf000
/* 80469F18 00466E58  90 7D 00 00 */	stw r3, 0(r29)
/* 80469F1C 00466E5C  38 60 00 50 */	li r3, 0x50
/* 80469F20 00466E60  90 9D 00 28 */	stw r4, 0x28(r29)
/* 80469F24 00466E64  90 9D 00 2C */	stw r4, 0x2c(r29)
/* 80469F28 00466E68  98 9D 00 30 */	stb r4, 0x30(r29)
/* 80469F2C 00466E6C  90 1D 00 34 */	stw r0, 0x34(r29)
/* 80469F30 00466E70  4B BB 9F 75 */	bl __nw__FUl
/* 80469F34 00466E74  7C 60 1B 79 */	or. r0, r3, r3
/* 80469F38 00466E78  41 82 00 0C */	beq .L_80469F44
/* 80469F3C 00466E7C  4B EC AD 8D */	bl __ct__Q26PSGame9CameraMgrFv
/* 80469F40 00466E80  7C 60 1B 78 */	mr r0, r3
.L_80469F44:
/* 80469F44 00466E84  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80469F48 00466E88  7F C3 F3 78 */	mr r3, r30
/* 80469F4C 00466E8C  38 80 00 01 */	li r4, 1
/* 80469F50 00466E90  4B EC B6 11 */	bl getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
/* 80469F54 00466E94  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80469F58 00466E98  20 00 00 01 */	subfic r0, r0, 1
/* 80469F5C 00466E9C  7C 00 00 34 */	cntlzw r0, r0
/* 80469F60 00466EA0  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80469F64 00466EA4  40 82 00 0C */	bne .L_80469F70
/* 80469F68 00466EA8  48 00 89 3D */	bl newInstance_SingleGame__Q23PSM18ObjCalc_SingleGameFv
/* 80469F6C 00466EAC  48 00 00 08 */	b .L_80469F74
.L_80469F70:
/* 80469F70 00466EB0  48 00 89 A5 */	bl newInstance_2PGame__Q23PSM14ObjCalc_2PGameFv
.L_80469F74:
/* 80469F74 00466EB4  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80469F78 00466EB8  28 00 00 00 */	cmplwi r0, 0
/* 80469F7C 00466EBC  41 82 00 2C */	beq .L_80469FA8
/* 80469F80 00466EC0  40 82 00 18 */	bne .L_80469F98
/* 80469F84 00466EC4  38 7F 00 30 */	addi r3, r31, 0x30
/* 80469F88 00466EC8  38 BF 00 24 */	addi r5, r31, 0x24
/* 80469F8C 00466ECC  38 80 00 89 */	li r4, 0x89
/* 80469F90 00466ED0  4C C6 31 82 */	crclr 6
/* 80469F94 00466ED4  4B BC 06 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80469F98:
/* 80469F98 00466ED8  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 80469F9C 00466EDC  90 1D 00 2C */	stw r0, 0x2c(r29)
/* 80469FA0 00466EE0  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80469FA4 00466EE4  93 A3 00 2C */	stw r29, 0x2c(r3)
.L_80469FA8:
/* 80469FA8 00466EE8  3C 80 80 4F */	lis r4, __vt__Q23PSM10Scene_Game@ha
/* 80469FAC 00466EEC  38 7C 00 38 */	addi r3, r28, 0x38
/* 80469FB0 00466EF0  38 04 F4 E8 */	addi r0, r4, __vt__Q23PSM10Scene_Game@l
/* 80469FB4 00466EF4  90 1C 00 00 */	stw r0, 0(r28)
/* 80469FB8 00466EF8  4B BB C9 19 */	bl initiate__10JSUPtrListFv
/* 80469FBC 00466EFC  38 80 00 00 */	li r4, 0
/* 80469FC0 00466F00  38 00 FF FF */	li r0, -1
/* 80469FC4 00466F04  90 9C 00 44 */	stw r4, 0x44(r28)
/* 80469FC8 00466F08  38 60 00 14 */	li r3, 0x14
/* 80469FCC 00466F0C  90 9C 00 48 */	stw r4, 0x48(r28)
/* 80469FD0 00466F10  90 1C 00 4C */	stw r0, 0x4c(r28)
/* 80469FD4 00466F14  90 9C 00 50 */	stw r4, 0x50(r28)
/* 80469FD8 00466F18  90 9C 00 58 */	stw r4, 0x58(r28)
/* 80469FDC 00466F1C  4B BB 9E C9 */	bl __nw__FUl
/* 80469FE0 00466F20  7C 60 1B 79 */	or. r0, r3, r3
/* 80469FE4 00466F24  41 82 00 0C */	beq .L_80469FF0
/* 80469FE8 00466F28  48 00 38 E9 */	bl __ct__Q23PSM14PikiHummingMgrFv
/* 80469FEC 00466F2C  7C 60 1B 78 */	mr r0, r3
.L_80469FF0:
/* 80469FF0 00466F30  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Cave@ha
/* 80469FF4 00466F34  90 1C 00 54 */	stw r0, 0x54(r28)
/* 80469FF8 00466F38  38 03 F3 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Cave@l
/* 80469FFC 00466F3C  38 60 00 00 */	li r3, 0
/* 8046A000 00466F40  90 1B 00 00 */	stw r0, 0(r27)
/* 8046A004 00466F44  38 00 FF FF */	li r0, -1
/* 8046A008 00466F48  98 7B 00 5C */	stb r3, 0x5c(r27)
/* 8046A00C 00466F4C  90 1B 00 64 */	stw r0, 0x64(r27)
/* 8046A010 00466F50  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8046A014 00466F54  2C 00 00 04 */	cmpwi r0, 4
/* 8046A018 00466F58  40 80 00 10 */	bge .L_8046A028
/* 8046A01C 00466F5C  2C 00 00 00 */	cmpwi r0, 0
/* 8046A020 00466F60  40 80 00 14 */	bge .L_8046A034
/* 8046A024 00466F64  48 00 00 28 */	b .L_8046A04C
.L_8046A028:
/* 8046A028 00466F68  2C 00 00 06 */	cmpwi r0, 6
/* 8046A02C 00466F6C  40 80 00 20 */	bge .L_8046A04C
/* 8046A030 00466F70  48 00 00 10 */	b .L_8046A040
.L_8046A034:
/* 8046A034 00466F74  C0 02 2A C0 */	lfs f0, cSeFxMix_cave__Q23PSM11CreaturePrm@sda21(r2)
/* 8046A038 00466F78  D0 1B 00 60 */	stfs f0, 0x60(r27)
/* 8046A03C 00466F7C  48 00 00 24 */	b .L_8046A060
.L_8046A040:
/* 8046A040 00466F80  C0 02 29 3C */	lfs f0, lbl_80520C9C@sda21(r2)
/* 8046A044 00466F84  D0 1B 00 60 */	stfs f0, 0x60(r27)
/* 8046A048 00466F88  48 00 00 18 */	b .L_8046A060
.L_8046A04C:
/* 8046A04C 00466F8C  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046A050 00466F90  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A054 00466F94  38 80 03 B9 */	li r4, 0x3b9
/* 8046A058 00466F98  4C C6 31 82 */	crclr 6
/* 8046A05C 00466F9C  4B BC 05 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A060:
/* 8046A060 00466FA0  7F 63 DB 78 */	mr r3, r27
/* 8046A064 00466FA4  BB 41 00 08 */	lmw r26, 8(r1)
/* 8046A068 00466FA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046A06C 00466FAC  7C 08 03 A6 */	mtlr r0
/* 8046A070 00466FB0  38 21 00 20 */	addi r1, r1, 0x20
/* 8046A074 00466FB4  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM10Scene_CaveFUcPQ26PSGame9SceneInfo

.fn getSceneFx__Q23PSM10Scene_CaveFv, global
/* 8046A078 00466FB8  C0 23 00 60 */	lfs f1, 0x60(r3)
/* 8046A07C 00466FBC  4E 80 00 20 */	blr 
.endfn getSceneFx__Q23PSM10Scene_CaveFv

.fn isBossFloor__Q23PSM10Scene_CaveFv, global
/* 8046A080 00466FC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046A084 00466FC4  7C 08 02 A6 */	mflr r0
/* 8046A088 00466FC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046A08C 00466FCC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8046A090 00466FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A094 00466FD4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8046A098 00466FD8  7D 89 03 A6 */	mtctr r12
/* 8046A09C 00466FDC  4E 80 04 21 */	bctrl 
/* 8046A0A0 00466FE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046A0A4 00466FE4  7C 08 03 A6 */	mtlr r0
/* 8046A0A8 00466FE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8046A0AC 00466FEC  4E 80 00 20 */	blr 
.endfn isBossFloor__Q23PSM10Scene_CaveFv

.fn exec__Q23PSM10Scene_CaveFv, global
/* 8046A0B0 00466FF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046A0B4 00466FF4  7C 08 02 A6 */	mflr r0
/* 8046A0B8 00466FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046A0BC 00466FFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046A0C0 00467000  7C 7F 1B 78 */	mr r31, r3
/* 8046A0C4 00467004  4B FF E7 A1 */	bl exec__Q23PSM10Scene_GameFv
/* 8046A0C8 00467008  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 8046A0CC 0046700C  3C 03 00 01 */	addis r0, r3, 1
/* 8046A0D0 00467010  28 00 FF FF */	cmplwi r0, 0xffff
/* 8046A0D4 00467014  41 82 00 0C */	beq .L_8046A0E0
/* 8046A0D8 00467018  38 03 00 01 */	addi r0, r3, 1
/* 8046A0DC 0046701C  90 1F 00 64 */	stw r0, 0x64(r31)
.L_8046A0E0:
/* 8046A0E0 00467020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046A0E4 00467024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046A0E8 00467028  7C 08 03 A6 */	mtlr r0
/* 8046A0EC 0046702C  38 21 00 10 */	addi r1, r1, 0x10
/* 8046A0F0 00467030  4E 80 00 20 */	blr 
.endfn exec__Q23PSM10Scene_CaveFv

.fn stopPollutionSe__Q23PSM10Scene_CaveFv, global
/* 8046A0F4 00467034  80 83 00 44 */	lwz r4, 0x44(r3)
/* 8046A0F8 00467038  28 04 00 00 */	cmplwi r4, 0
/* 8046A0FC 0046703C  41 82 00 38 */	beq .L_8046A134
/* 8046A100 00467040  80 A4 00 00 */	lwz r5, 0(r4)
/* 8046A104 00467044  38 00 00 00 */	li r0, 0
/* 8046A108 00467048  48 00 00 24 */	b .L_8046A12C
.L_8046A10C:
/* 8046A10C 0046704C  80 C5 00 00 */	lwz r6, 0(r5)
/* 8046A110 00467050  80 86 00 24 */	lwz r4, 0x24(r6)
/* 8046A114 00467054  28 04 30 79 */	cmplwi r4, 0x3079
/* 8046A118 00467058  41 82 00 0C */	beq .L_8046A124
/* 8046A11C 0046705C  28 04 30 7A */	cmplwi r4, 0x307a
/* 8046A120 00467060  40 82 00 08 */	bne .L_8046A128
.L_8046A124:
/* 8046A124 00467064  98 06 00 39 */	stb r0, 0x39(r6)
.L_8046A128:
/* 8046A128 00467068  80 A5 00 0C */	lwz r5, 0xc(r5)
.L_8046A12C:
/* 8046A12C 0046706C  28 05 00 00 */	cmplwi r5, 0
/* 8046A130 00467070  40 82 FF DC */	bne .L_8046A10C
.L_8046A134:
/* 8046A134 00467074  38 00 00 00 */	li r0, 0
/* 8046A138 00467078  90 03 00 64 */	stw r0, 0x64(r3)
/* 8046A13C 0046707C  4E 80 00 20 */	blr 
.endfn stopPollutionSe__Q23PSM10Scene_CaveFv

.fn startPollutUpSe__Q23PSM10Scene_CaveFv, global
/* 8046A140 00467080  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046A144 00467084  7C 08 02 A6 */	mflr r0
/* 8046A148 00467088  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046A14C 0046708C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046A150 00467090  93 C1 00 08 */	stw r30, 8(r1)
/* 8046A154 00467094  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8046A158 00467098  54 00 01 3E */	clrlwi r0, r0, 4
/* 8046A15C 0046709C  28 00 00 0A */	cmplwi r0, 0xa
/* 8046A160 004670A0  40 81 00 C0 */	ble .L_8046A220
/* 8046A164 004670A4  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8046A168 004670A8  38 80 38 7D */	li r4, 0x387d
/* 8046A16C 004670AC  38 A0 00 00 */	li r5, 0
/* 8046A170 004670B0  4B EC E4 C1 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8046A174 004670B4  7C 60 1B 78 */	mr r0, r3
/* 8046A178 004670B8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8046A17C 004670BC  7C 1F 03 78 */	mr r31, r0
/* 8046A180 004670C0  38 80 38 7E */	li r4, 0x387e
/* 8046A184 004670C4  38 A0 00 00 */	li r5, 0
/* 8046A188 004670C8  4B EC E4 A9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8046A18C 004670CC  28 1F 00 00 */	cmplwi r31, 0
/* 8046A190 004670D0  7C 7E 1B 78 */	mr r30, r3
/* 8046A194 004670D4  41 82 00 44 */	beq .L_8046A1D8
/* 8046A198 004670D8  7F E3 FB 78 */	mr r3, r31
/* 8046A19C 004670DC  C0 22 29 40 */	lfs f1, lbl_80520CA0@sda21(r2)
/* 8046A1A0 004670E0  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8046A1A4 004670E4  38 80 00 50 */	li r4, 0x50
/* 8046A1A8 004670E8  38 A0 00 00 */	li r5, 0
/* 8046A1AC 004670EC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8046A1B0 004670F0  7D 89 03 A6 */	mtctr r12
/* 8046A1B4 004670F4  4E 80 04 21 */	bctrl 
/* 8046A1B8 004670F8  7F E3 FB 78 */	mr r3, r31
/* 8046A1BC 004670FC  C0 22 29 40 */	lfs f1, lbl_80520CA0@sda21(r2)
/* 8046A1C0 00467100  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8046A1C4 00467104  38 80 00 50 */	li r4, 0x50
/* 8046A1C8 00467108  38 A0 00 00 */	li r5, 0
/* 8046A1CC 0046710C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046A1D0 00467110  7D 89 03 A6 */	mtctr r12
/* 8046A1D4 00467114  4E 80 04 21 */	bctrl 
.L_8046A1D8:
/* 8046A1D8 00467118  28 1E 00 00 */	cmplwi r30, 0
/* 8046A1DC 0046711C  41 82 00 44 */	beq .L_8046A220
/* 8046A1E0 00467120  7F C3 F3 78 */	mr r3, r30
/* 8046A1E4 00467124  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 8046A1E8 00467128  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046A1EC 0046712C  38 80 00 50 */	li r4, 0x50
/* 8046A1F0 00467130  38 A0 00 00 */	li r5, 0
/* 8046A1F4 00467134  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8046A1F8 00467138  7D 89 03 A6 */	mtctr r12
/* 8046A1FC 0046713C  4E 80 04 21 */	bctrl 
/* 8046A200 00467140  7F C3 F3 78 */	mr r3, r30
/* 8046A204 00467144  C0 22 29 40 */	lfs f1, lbl_80520CA0@sda21(r2)
/* 8046A208 00467148  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046A20C 0046714C  38 80 00 50 */	li r4, 0x50
/* 8046A210 00467150  38 A0 00 00 */	li r5, 0
/* 8046A214 00467154  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046A218 00467158  7D 89 03 A6 */	mtctr r12
/* 8046A21C 0046715C  4E 80 04 21 */	bctrl 
.L_8046A220:
/* 8046A220 00467160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046A224 00467164  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046A228 00467168  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046A22C 0046716C  7C 08 03 A6 */	mtlr r0
/* 8046A230 00467170  38 21 00 10 */	addi r1, r1, 0x10
/* 8046A234 00467174  4E 80 00 20 */	blr 
.endfn startPollutUpSe__Q23PSM10Scene_CaveFv

.fn startMainSeq__Q23PSM10Scene_CaveFv, global
/* 8046A238 00467178  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046A23C 0046717C  7C 08 02 A6 */	mflr r0
/* 8046A240 00467180  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046A244 00467184  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046A248 00467188  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046A24C 0046718C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046A250 00467190  7C 7D 1B 78 */	mr r29, r3
/* 8046A254 00467194  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A258 00467198  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046A25C 0046719C  7D 89 03 A6 */	mtctr r12
/* 8046A260 004671A0  4E 80 04 21 */	bctrl 
/* 8046A264 004671A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A268 004671A8  41 82 00 2C */	beq .L_8046A294
/* 8046A26C 004671AC  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8046A270 004671B0  28 03 00 00 */	cmplwi r3, 0
/* 8046A274 004671B4  41 82 00 08 */	beq .L_8046A27C
/* 8046A278 004671B8  4B ED 6A 35 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_8046A27C:
/* 8046A27C 004671BC  7F A3 EB 78 */	mr r3, r29
/* 8046A280 004671C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046A284 004671C4  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046A288 004671C8  7D 89 03 A6 */	mtctr r12
/* 8046A28C 004671CC  4E 80 04 21 */	bctrl 
/* 8046A290 004671D0  48 00 00 D0 */	b .L_8046A360
.L_8046A294:
/* 8046A294 004671D4  80 1D 00 50 */	lwz r0, 0x50(r29)
/* 8046A298 004671D8  28 00 00 00 */	cmplwi r0, 0
/* 8046A29C 004671DC  41 82 00 90 */	beq .L_8046A32C
/* 8046A2A0 004671E0  83 DD 00 10 */	lwz r30, 0x10(r29)
/* 8046A2A4 004671E4  3B E0 00 00 */	li r31, 0
/* 8046A2A8 004671E8  48 00 00 64 */	b .L_8046A30C
.L_8046A2AC:
/* 8046A2AC 004671EC  80 7E 00 00 */	lwz r3, 0(r30)
/* 8046A2B0 004671F0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046A2B4 004671F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046A2B8 004671F8  7D 89 03 A6 */	mtctr r12
/* 8046A2BC 004671FC  4E 80 04 21 */	bctrl 
/* 8046A2C0 00467200  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8046A2C4 00467204  41 82 00 40 */	beq .L_8046A304
/* 8046A2C8 00467208  80 7E 00 00 */	lwz r3, 0(r30)
/* 8046A2CC 0046720C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046A2D0 00467210  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046A2D4 00467214  7D 89 03 A6 */	mtctr r12
/* 8046A2D8 00467218  4E 80 04 21 */	bctrl 
/* 8046A2DC 0046721C  80 63 00 00 */	lwz r3, 0(r3)
/* 8046A2E0 00467220  28 03 00 00 */	cmplwi r3, 0
/* 8046A2E4 00467224  41 82 00 20 */	beq .L_8046A304
/* 8046A2E8 00467228  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046A2EC 0046722C  38 80 00 00 */	li r4, 0
/* 8046A2F0 00467230  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 8046A2F4 00467234  38 A0 00 00 */	li r5, 0
/* 8046A2F8 00467238  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046A2FC 0046723C  7D 89 03 A6 */	mtctr r12
/* 8046A300 00467240  4E 80 04 21 */	bctrl 
.L_8046A304:
/* 8046A304 00467244  83 DE 00 0C */	lwz r30, 0xc(r30)
/* 8046A308 00467248  3B FF 00 01 */	addi r31, r31, 1
.L_8046A30C:
/* 8046A30C 0046724C  28 1E 00 00 */	cmplwi r30, 0
/* 8046A310 00467250  40 82 FF 9C */	bne .L_8046A2AC
/* 8046A314 00467254  7F A3 EB 78 */	mr r3, r29
/* 8046A318 00467258  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046A31C 0046725C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046A320 00467260  7D 89 03 A6 */	mtctr r12
/* 8046A324 00467264  4E 80 04 21 */	bctrl 
/* 8046A328 00467268  48 00 00 20 */	b .L_8046A348
.L_8046A32C:
/* 8046A32C 0046726C  7F A3 EB 78 */	mr r3, r29
/* 8046A330 00467270  4B ED 75 C9 */	bl startMainSeq__Q28PSSystem5SceneFv
/* 8046A334 00467274  7F A3 EB 78 */	mr r3, r29
/* 8046A338 00467278  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046A33C 0046727C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046A340 00467280  7D 89 03 A6 */	mtctr r12
/* 8046A344 00467284  4E 80 04 21 */	bctrl 
.L_8046A348:
/* 8046A348 00467288  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8046A34C 0046728C  28 03 00 00 */	cmplwi r3, 0
/* 8046A350 00467290  41 82 00 08 */	beq .L_8046A358
/* 8046A354 00467294  4B ED 69 59 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_8046A358:
/* 8046A358 00467298  38 00 00 00 */	li r0, 0
/* 8046A35C 0046729C  90 1D 00 4C */	stw r0, 0x4c(r29)
.L_8046A360:
/* 8046A360 004672A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046A364 004672A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046A368 004672A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046A36C 004672AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046A370 004672B0  7C 08 03 A6 */	mtlr r0
/* 8046A374 004672B4  38 21 00 20 */	addi r1, r1, 0x20
/* 8046A378 004672B8  4E 80 00 20 */	blr 
.endfn startMainSeq__Q23PSM10Scene_CaveFv

.fn init__Q23PSM10Scene_CaveFv, global
/* 8046A37C 004672BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046A380 004672C0  7C 08 02 A6 */	mflr r0
/* 8046A384 004672C4  3C 80 80 4A */	lis r4, lbl_8049D908@ha
/* 8046A388 004672C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046A38C 004672CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046A390 004672D0  3B E4 D9 08 */	addi r31, r4, lbl_8049D908@l
/* 8046A394 004672D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046A398 004672D8  7C 7E 1B 78 */	mr r30, r3
/* 8046A39C 004672DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046A3A0 004672E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A3A4 004672E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046A3A8 004672E8  7D 89 03 A6 */	mtctr r12
/* 8046A3AC 004672EC  4E 80 04 21 */	bctrl 
/* 8046A3B0 004672F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A3B4 004672F4  41 82 01 04 */	beq .L_8046A4B8
/* 8046A3B8 004672F8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A3BC 004672FC  28 00 00 00 */	cmplwi r0, 0
/* 8046A3C0 00467300  40 82 00 18 */	bne .L_8046A3D8
/* 8046A3C4 00467304  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A3C8 00467308  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A3CC 0046730C  38 80 01 D3 */	li r4, 0x1d3
/* 8046A3D0 00467310  4C C6 31 82 */	crclr 6
/* 8046A3D4 00467314  4B BC 02 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A3D8:
/* 8046A3D8 00467318  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A3DC 0046731C  28 1D 00 00 */	cmplwi r29, 0
/* 8046A3E0 00467320  40 82 00 18 */	bne .L_8046A3F8
/* 8046A3E4 00467324  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A3E8 00467328  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A3EC 0046732C  38 80 01 DC */	li r4, 0x1dc
/* 8046A3F0 00467330  4C C6 31 82 */	crclr 6
/* 8046A3F4 00467334  4B BC 02 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A3F8:
/* 8046A3F8 00467338  7F A3 EB 78 */	mr r3, r29
/* 8046A3FC 0046733C  7F C4 F3 78 */	mr r4, r30
/* 8046A400 00467340  4B FF 02 A1 */	bl initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game
/* 8046A404 00467344  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 8046A408 00467348  3B A0 00 01 */	li r29, 1
/* 8046A40C 0046734C  28 00 00 00 */	cmplwi r0, 0
/* 8046A410 00467350  40 82 00 68 */	bne .L_8046A478
/* 8046A414 00467354  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046A418 00467358  88 03 00 06 */	lbz r0, 6(r3)
/* 8046A41C 0046735C  28 00 00 14 */	cmplwi r0, 0x14
/* 8046A420 00467360  41 82 00 58 */	beq .L_8046A478
/* 8046A424 00467364  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A428 00467368  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046A42C 0046736C  7D 89 03 A6 */	mtctr r12
/* 8046A430 00467370  4E 80 04 21 */	bctrl 
/* 8046A434 00467374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A438 00467378  41 82 00 44 */	beq .L_8046A47C
/* 8046A43C 0046737C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046A440 00467380  88 03 00 06 */	lbz r0, 6(r3)
/* 8046A444 00467384  28 00 00 03 */	cmplwi r0, 3
/* 8046A448 00467388  40 82 00 34 */	bne .L_8046A47C
/* 8046A44C 0046738C  4B EC 9E 1D */	bl getCaveNoFromID__Q26PSGame13CaveFloorInfoFv
/* 8046A450 00467390  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046A454 00467394  28 00 00 03 */	cmplwi r0, 3
/* 8046A458 00467398  40 82 00 24 */	bne .L_8046A47C
/* 8046A45C 0046739C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046A460 004673A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A464 004673A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8046A468 004673A8  7D 89 03 A6 */	mtctr r12
/* 8046A46C 004673AC  4E 80 04 21 */	bctrl 
/* 8046A470 004673B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A474 004673B4  40 82 00 08 */	bne .L_8046A47C
.L_8046A478:
/* 8046A478 004673B8  3B A0 00 00 */	li r29, 0
.L_8046A47C:
/* 8046A47C 004673BC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8046A480 004673C0  41 82 00 2C */	beq .L_8046A4AC
/* 8046A484 004673C4  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A488 004673C8  28 00 00 00 */	cmplwi r0, 0
/* 8046A48C 004673CC  40 82 00 18 */	bne .L_8046A4A4
/* 8046A490 004673D0  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046A494 004673D4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A498 004673D8  38 80 00 89 */	li r4, 0x89
/* 8046A49C 004673DC  4C C6 31 82 */	crclr 6
/* 8046A4A0 004673E0  4B BC 01 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A4A4:
/* 8046A4A4 004673E4  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A4A8 004673E8  90 1E 00 50 */	stw r0, 0x50(r30)
.L_8046A4AC:
/* 8046A4AC 004673EC  38 00 00 00 */	li r0, 0
/* 8046A4B0 004673F0  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8046A4B4 004673F4  48 00 00 F8 */	b .L_8046A5AC
.L_8046A4B8:
/* 8046A4B8 004673F8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A4BC 004673FC  28 00 00 00 */	cmplwi r0, 0
/* 8046A4C0 00467400  40 82 00 18 */	bne .L_8046A4D8
/* 8046A4C4 00467404  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A4C8 00467408  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A4CC 0046740C  38 80 01 D3 */	li r4, 0x1d3
/* 8046A4D0 00467410  4C C6 31 82 */	crclr 6
/* 8046A4D4 00467414  4B BC 01 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A4D8:
/* 8046A4D8 00467418  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A4DC 0046741C  28 1D 00 00 */	cmplwi r29, 0
/* 8046A4E0 00467420  40 82 00 18 */	bne .L_8046A4F8
/* 8046A4E4 00467424  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A4E8 00467428  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A4EC 0046742C  38 80 01 DC */	li r4, 0x1dc
/* 8046A4F0 00467430  4C C6 31 82 */	crclr 6
/* 8046A4F4 00467434  4B BC 01 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A4F8:
/* 8046A4F8 00467438  7F A3 EB 78 */	mr r3, r29
/* 8046A4FC 0046743C  7F C4 F3 78 */	mr r4, r30
/* 8046A500 00467440  4B FF 01 A1 */	bl initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game
/* 8046A504 00467444  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 8046A508 00467448  3B A0 00 01 */	li r29, 1
/* 8046A50C 0046744C  28 00 00 00 */	cmplwi r0, 0
/* 8046A510 00467450  40 82 00 68 */	bne .L_8046A578
/* 8046A514 00467454  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046A518 00467458  88 03 00 06 */	lbz r0, 6(r3)
/* 8046A51C 0046745C  28 00 00 14 */	cmplwi r0, 0x14
/* 8046A520 00467460  41 82 00 58 */	beq .L_8046A578
/* 8046A524 00467464  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A528 00467468  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046A52C 0046746C  7D 89 03 A6 */	mtctr r12
/* 8046A530 00467470  4E 80 04 21 */	bctrl 
/* 8046A534 00467474  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A538 00467478  41 82 00 44 */	beq .L_8046A57C
/* 8046A53C 0046747C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046A540 00467480  88 03 00 06 */	lbz r0, 6(r3)
/* 8046A544 00467484  28 00 00 03 */	cmplwi r0, 3
/* 8046A548 00467488  40 82 00 34 */	bne .L_8046A57C
/* 8046A54C 0046748C  4B EC 9D 1D */	bl getCaveNoFromID__Q26PSGame13CaveFloorInfoFv
/* 8046A550 00467490  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046A554 00467494  28 00 00 03 */	cmplwi r0, 3
/* 8046A558 00467498  40 82 00 24 */	bne .L_8046A57C
/* 8046A55C 0046749C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046A560 004674A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A564 004674A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8046A568 004674A8  7D 89 03 A6 */	mtctr r12
/* 8046A56C 004674AC  4E 80 04 21 */	bctrl 
/* 8046A570 004674B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A574 004674B4  40 82 00 08 */	bne .L_8046A57C
.L_8046A578:
/* 8046A578 004674B8  3B A0 00 00 */	li r29, 0
.L_8046A57C:
/* 8046A57C 004674BC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8046A580 004674C0  41 82 00 2C */	beq .L_8046A5AC
/* 8046A584 004674C4  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A588 004674C8  28 00 00 00 */	cmplwi r0, 0
/* 8046A58C 004674CC  40 82 00 18 */	bne .L_8046A5A4
/* 8046A590 004674D0  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046A594 004674D4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A598 004674D8  38 80 00 89 */	li r4, 0x89
/* 8046A59C 004674DC  4C C6 31 82 */	crclr 6
/* 8046A5A0 004674E0  4B BC 00 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A5A4:
/* 8046A5A4 004674E4  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A5A8 004674E8  90 1E 00 50 */	stw r0, 0x50(r30)
.L_8046A5AC:
/* 8046A5AC 004674EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046A5B0 004674F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046A5B4 004674F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046A5B8 004674F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046A5BC 004674FC  7C 08 03 A6 */	mtlr r0
/* 8046A5C0 00467500  38 21 00 20 */	addi r1, r1, 0x20
/* 8046A5C4 00467504  4E 80 00 20 */	blr 
.endfn init__Q23PSM10Scene_CaveFv

.fn bossAppear__Q23PSM10Scene_CaveFPQ23PSM9EnemyBossUs, global
/* 8046A5C8 00467508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046A5CC 0046750C  7C 08 02 A6 */	mflr r0
/* 8046A5D0 00467510  3C C0 80 4A */	lis r6, lbl_8049D908@ha
/* 8046A5D4 00467514  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046A5D8 00467518  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8046A5DC 0046751C  7C 7E 1B 78 */	mr r30, r3
/* 8046A5E0 00467520  7C 9B 23 78 */	mr r27, r4
/* 8046A5E4 00467524  7C BF 2B 78 */	mr r31, r5
/* 8046A5E8 00467528  3B A6 D9 08 */	addi r29, r6, lbl_8049D908@l
/* 8046A5EC 0046752C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A5F0 00467530  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046A5F4 00467534  7D 89 03 A6 */	mtctr r12
/* 8046A5F8 00467538  4E 80 04 21 */	bctrl 
/* 8046A5FC 0046753C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A600 00467540  41 82 00 BC */	beq .L_8046A6BC
/* 8046A604 00467544  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8046A608 00467548  28 00 00 00 */	cmplwi r0, 0
/* 8046A60C 0046754C  40 82 01 78 */	bne .L_8046A784
/* 8046A610 00467550  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A614 00467554  28 00 00 00 */	cmplwi r0, 0
/* 8046A618 00467558  40 82 00 18 */	bne .L_8046A630
/* 8046A61C 0046755C  38 7D 00 3C */	addi r3, r29, 0x3c
/* 8046A620 00467560  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046A624 00467564  38 80 01 D3 */	li r4, 0x1d3
/* 8046A628 00467568  4C C6 31 82 */	crclr 6
/* 8046A62C 0046756C  4B BC 00 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A630:
/* 8046A630 00467570  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A634 00467574  28 1C 00 00 */	cmplwi r28, 0
/* 8046A638 00467578  40 82 00 18 */	bne .L_8046A650
/* 8046A63C 0046757C  38 7D 00 3C */	addi r3, r29, 0x3c
/* 8046A640 00467580  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046A644 00467584  38 80 01 DC */	li r4, 0x1dc
/* 8046A648 00467588  4C C6 31 82 */	crclr 6
/* 8046A64C 0046758C  4B BB FF F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A650:
/* 8046A650 00467590  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046A654 00467594  28 00 00 00 */	cmplwi r0, 0
/* 8046A658 00467598  40 82 00 18 */	bne .L_8046A670
/* 8046A65C 0046759C  38 7D 00 48 */	addi r3, r29, 0x48
/* 8046A660 004675A0  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046A664 004675A4  38 80 00 C7 */	li r4, 0xc7
/* 8046A668 004675A8  4C C6 31 82 */	crclr 6
/* 8046A66C 004675AC  4B BB FF D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A670:
/* 8046A670 004675B0  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046A674 004675B4  80 63 00 04 */	lwz r3, 4(r3)
/* 8046A678 004675B8  28 03 00 00 */	cmplwi r3, 0
/* 8046A67C 004675BC  40 82 00 0C */	bne .L_8046A688
/* 8046A680 004675C0  3B A0 00 00 */	li r29, 0
/* 8046A684 004675C4  48 00 00 0C */	b .L_8046A690
.L_8046A688:
/* 8046A688 004675C8  4B EC AF F9 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 8046A68C 004675CC  7C 7D 1B 78 */	mr r29, r3
.L_8046A690:
/* 8046A690 004675D0  28 1D 00 00 */	cmplwi r29, 0
/* 8046A694 004675D4  41 82 00 1C */	beq .L_8046A6B0
/* 8046A698 004675D8  7F A3 EB 78 */	mr r3, r29
/* 8046A69C 004675DC  7F E4 FB 78 */	mr r4, r31
/* 8046A6A0 004675E0  4B EC 8F 11 */	bl startSeq__Q28PSSystem10JumpBgmSeqFUs
/* 8046A6A4 004675E4  7F A3 EB 78 */	mr r3, r29
/* 8046A6A8 004675E8  38 80 00 B4 */	li r4, 0xb4
/* 8046A6AC 004675EC  4B EC 92 E5 */	bl setAvoidJumpTimer_Checked__Q28PSSystem10JumpBgmSeqFUl
.L_8046A6B0:
/* 8046A6B0 004675F0  38 00 00 01 */	li r0, 1
/* 8046A6B4 004675F4  98 1E 00 5C */	stb r0, 0x5c(r30)
/* 8046A6B8 004675F8  48 00 00 CC */	b .L_8046A784
.L_8046A6BC:
/* 8046A6BC 004675FC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A6C0 00467600  28 00 00 00 */	cmplwi r0, 0
/* 8046A6C4 00467604  40 82 00 18 */	bne .L_8046A6DC
/* 8046A6C8 00467608  38 7D 00 3C */	addi r3, r29, 0x3c
/* 8046A6CC 0046760C  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046A6D0 00467610  38 80 01 D3 */	li r4, 0x1d3
/* 8046A6D4 00467614  4C C6 31 82 */	crclr 6
/* 8046A6D8 00467618  4B BB FF 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A6DC:
/* 8046A6DC 0046761C  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A6E0 00467620  28 1C 00 00 */	cmplwi r28, 0
/* 8046A6E4 00467624  40 82 00 18 */	bne .L_8046A6FC
/* 8046A6E8 00467628  38 7D 00 3C */	addi r3, r29, 0x3c
/* 8046A6EC 0046762C  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046A6F0 00467630  38 80 01 DC */	li r4, 0x1dc
/* 8046A6F4 00467634  4C C6 31 82 */	crclr 6
/* 8046A6F8 00467638  4B BB FF 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A6FC:
/* 8046A6FC 0046763C  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046A700 00467640  28 00 00 00 */	cmplwi r0, 0
/* 8046A704 00467644  40 82 00 18 */	bne .L_8046A71C
/* 8046A708 00467648  38 7D 00 48 */	addi r3, r29, 0x48
/* 8046A70C 0046764C  38 BD 00 24 */	addi r5, r29, 0x24
/* 8046A710 00467650  38 80 00 C7 */	li r4, 0xc7
/* 8046A714 00467654  4C C6 31 82 */	crclr 6
/* 8046A718 00467658  4B BB FF 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A71C:
/* 8046A71C 0046765C  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046A720 00467660  80 63 00 04 */	lwz r3, 4(r3)
/* 8046A724 00467664  28 03 00 00 */	cmplwi r3, 0
/* 8046A728 00467668  40 82 00 0C */	bne .L_8046A734
/* 8046A72C 0046766C  38 60 00 00 */	li r3, 0
/* 8046A730 00467670  48 00 00 08 */	b .L_8046A738
.L_8046A734:
/* 8046A734 00467674  4B EC AF 4D */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
.L_8046A738:
/* 8046A738 00467678  28 03 00 00 */	cmplwi r3, 0
/* 8046A73C 0046767C  41 82 00 48 */	beq .L_8046A784
/* 8046A740 00467680  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8046A744 00467684  28 03 00 00 */	cmplwi r3, 0
/* 8046A748 00467688  41 82 00 10 */	beq .L_8046A758
/* 8046A74C 0046768C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8046A750 00467690  2C 00 00 00 */	cmpwi r0, 0
/* 8046A754 00467694  40 82 00 30 */	bne .L_8046A784
.L_8046A758:
/* 8046A758 00467698  7F 63 DB 78 */	mr r3, r27
/* 8046A75C 0046769C  7F E4 FB 78 */	mr r4, r31
/* 8046A760 004676A0  81 9B 00 28 */	lwz r12, 0x28(r27)
/* 8046A764 004676A4  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8046A768 004676A8  7D 89 03 A6 */	mtctr r12
/* 8046A76C 004676AC  4E 80 04 21 */	bctrl 
/* 8046A770 004676B0  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8046A774 004676B4  28 03 00 00 */	cmplwi r3, 0
/* 8046A778 004676B8  41 82 00 0C */	beq .L_8046A784
/* 8046A77C 004676BC  38 00 00 01 */	li r0, 1
/* 8046A780 004676C0  98 03 00 38 */	stb r0, 0x38(r3)
.L_8046A784:
/* 8046A784 004676C4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8046A788 004676C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046A78C 004676CC  7C 08 03 A6 */	mtlr r0
/* 8046A790 004676D0  38 21 00 20 */	addi r1, r1, 0x20
/* 8046A794 004676D4  4E 80 00 20 */	blr 
.endfn bossAppear__Q23PSM10Scene_CaveFPQ23PSM9EnemyBossUs

.fn bossKilled__Q23PSM10Scene_CaveFPQ23PSM9EnemyBoss, global
/* 8046A798 004676D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046A79C 004676DC  7C 08 02 A6 */	mflr r0
/* 8046A7A0 004676E0  3C A0 80 4A */	lis r5, lbl_8049D908@ha
/* 8046A7A4 004676E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046A7A8 004676E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046A7AC 004676EC  3B E5 D9 08 */	addi r31, r5, lbl_8049D908@l
/* 8046A7B0 004676F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046A7B4 004676F4  7C 9E 23 78 */	mr r30, r4
/* 8046A7B8 004676F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046A7BC 004676FC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8046A7C0 00467700  81 83 00 00 */	lwz r12, 0(r3)
/* 8046A7C4 00467704  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046A7C8 00467708  7D 89 03 A6 */	mtctr r12
/* 8046A7CC 0046770C  4E 80 04 21 */	bctrl 
/* 8046A7D0 00467710  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046A7D4 00467714  41 82 01 2C */	beq .L_8046A900
/* 8046A7D8 00467718  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A7DC 0046771C  3B A0 00 00 */	li r29, 0
/* 8046A7E0 00467720  28 00 00 00 */	cmplwi r0, 0
/* 8046A7E4 00467724  40 82 00 18 */	bne .L_8046A7FC
/* 8046A7E8 00467728  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046A7EC 0046772C  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A7F0 00467730  38 80 00 89 */	li r4, 0x89
/* 8046A7F4 00467734  4C C6 31 82 */	crclr 6
/* 8046A7F8 00467738  4B BB FE 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A7FC:
/* 8046A7FC 0046773C  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A800 00467740  80 83 00 04 */	lwz r4, 4(r3)
/* 8046A804 00467744  48 00 00 1C */	b .L_8046A820
.L_8046A808:
/* 8046A808 00467748  80 64 00 00 */	lwz r3, 0(r4)
/* 8046A80C 0046774C  88 03 00 FE */	lbz r0, 0xfe(r3)
/* 8046A810 00467750  28 00 00 00 */	cmplwi r0, 0
/* 8046A814 00467754  41 82 00 08 */	beq .L_8046A81C
/* 8046A818 00467758  3B A0 00 01 */	li r29, 1
.L_8046A81C:
/* 8046A81C 0046775C  80 84 00 0C */	lwz r4, 0xc(r4)
.L_8046A820:
/* 8046A820 00467760  28 04 00 00 */	cmplwi r4, 0
/* 8046A824 00467764  40 82 FF E4 */	bne .L_8046A808
/* 8046A828 00467768  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A82C 0046776C  28 00 00 00 */	cmplwi r0, 0
/* 8046A830 00467770  40 82 00 18 */	bne .L_8046A848
/* 8046A834 00467774  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A838 00467778  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A83C 0046777C  38 80 01 D3 */	li r4, 0x1d3
/* 8046A840 00467780  4C C6 31 82 */	crclr 6
/* 8046A844 00467784  4B BB FD FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A848:
/* 8046A848 00467788  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A84C 0046778C  28 1C 00 00 */	cmplwi r28, 0
/* 8046A850 00467790  40 82 00 18 */	bne .L_8046A868
/* 8046A854 00467794  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A858 00467798  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A85C 0046779C  38 80 01 DC */	li r4, 0x1dc
/* 8046A860 004677A0  4C C6 31 82 */	crclr 6
/* 8046A864 004677A4  4B BB FD DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A868:
/* 8046A868 004677A8  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046A86C 004677AC  28 00 00 00 */	cmplwi r0, 0
/* 8046A870 004677B0  40 82 00 18 */	bne .L_8046A888
/* 8046A874 004677B4  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046A878 004677B8  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A87C 004677BC  38 80 00 C7 */	li r4, 0xc7
/* 8046A880 004677C0  4C C6 31 82 */	crclr 6
/* 8046A884 004677C4  4B BB FD BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A888:
/* 8046A888 004677C8  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046A88C 004677CC  80 63 00 04 */	lwz r3, 4(r3)
/* 8046A890 004677D0  28 03 00 00 */	cmplwi r3, 0
/* 8046A894 004677D4  40 82 00 0C */	bne .L_8046A8A0
/* 8046A898 004677D8  38 60 00 00 */	li r3, 0
/* 8046A89C 004677DC  48 00 00 08 */	b .L_8046A8A4
.L_8046A8A0:
/* 8046A8A0 004677E0  4B EC AD E1 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
.L_8046A8A4:
/* 8046A8A4 004677E4  28 03 00 00 */	cmplwi r3, 0
/* 8046A8A8 004677E8  41 82 01 E8 */	beq .L_8046AA90
/* 8046A8AC 004677EC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8046A8B0 004677F0  40 82 00 1C */	bne .L_8046A8CC
/* 8046A8B4 004677F4  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046A8B8 004677F8  38 80 00 28 */	li r4, 0x28
/* 8046A8BC 004677FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8046A8C0 00467800  7D 89 03 A6 */	mtctr r12
/* 8046A8C4 00467804  4E 80 04 21 */	bctrl 
/* 8046A8C8 00467808  48 00 01 C8 */	b .L_8046AA90
.L_8046A8CC:
/* 8046A8CC 0046780C  A0 03 01 30 */	lhz r0, 0x130(r3)
/* 8046A8D0 00467810  28 00 00 02 */	cmplwi r0, 2
/* 8046A8D4 00467814  41 82 00 10 */	beq .L_8046A8E4
/* 8046A8D8 00467818  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8046A8DC 0046781C  28 00 00 08 */	cmplwi r0, 8
/* 8046A8E0 00467820  40 82 01 B0 */	bne .L_8046AA90
.L_8046A8E4:
/* 8046A8E4 00467824  7F C3 F3 78 */	mr r3, r30
/* 8046A8E8 00467828  38 80 00 01 */	li r4, 1
/* 8046A8EC 0046782C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8046A8F0 00467830  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8046A8F4 00467834  7D 89 03 A6 */	mtctr r12
/* 8046A8F8 00467838  4E 80 04 21 */	bctrl 
/* 8046A8FC 0046783C  48 00 01 94 */	b .L_8046AA90
.L_8046A900:
/* 8046A900 00467840  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A904 00467844  28 00 00 00 */	cmplwi r0, 0
/* 8046A908 00467848  40 82 00 18 */	bne .L_8046A920
/* 8046A90C 0046784C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A910 00467850  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A914 00467854  38 80 01 D3 */	li r4, 0x1d3
/* 8046A918 00467858  4C C6 31 82 */	crclr 6
/* 8046A91C 0046785C  4B BB FD 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A920:
/* 8046A920 00467860  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A924 00467864  28 1C 00 00 */	cmplwi r28, 0
/* 8046A928 00467868  40 82 00 18 */	bne .L_8046A940
/* 8046A92C 0046786C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A930 00467870  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A934 00467874  38 80 01 DC */	li r4, 0x1dc
/* 8046A938 00467878  4C C6 31 82 */	crclr 6
/* 8046A93C 0046787C  4B BB FD 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A940:
/* 8046A940 00467880  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046A944 00467884  28 00 00 00 */	cmplwi r0, 0
/* 8046A948 00467888  40 82 00 18 */	bne .L_8046A960
/* 8046A94C 0046788C  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046A950 00467890  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A954 00467894  38 80 00 C7 */	li r4, 0xc7
/* 8046A958 00467898  4C C6 31 82 */	crclr 6
/* 8046A95C 0046789C  4B BB FC E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A960:
/* 8046A960 004678A0  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046A964 004678A4  80 63 00 04 */	lwz r3, 4(r3)
/* 8046A968 004678A8  28 03 00 00 */	cmplwi r3, 0
/* 8046A96C 004678AC  40 82 00 0C */	bne .L_8046A978
/* 8046A970 004678B0  3B A0 00 00 */	li r29, 0
/* 8046A974 004678B4  48 00 00 0C */	b .L_8046A980
.L_8046A978:
/* 8046A978 004678B8  4B EC AD 09 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 8046A97C 004678BC  7C 7D 1B 78 */	mr r29, r3
.L_8046A980:
/* 8046A980 004678C0  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A984 004678C4  3B 80 00 01 */	li r28, 1
/* 8046A988 004678C8  28 00 00 00 */	cmplwi r0, 0
/* 8046A98C 004678CC  40 82 00 18 */	bne .L_8046A9A4
/* 8046A990 004678D0  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046A994 004678D4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A998 004678D8  38 80 00 89 */	li r4, 0x89
/* 8046A99C 004678DC  4C C6 31 82 */	crclr 6
/* 8046A9A0 004678E0  4B BB FC A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046A9A4:
/* 8046A9A4 004678E4  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046A9A8 004678E8  80 83 00 04 */	lwz r4, 4(r3)
/* 8046A9AC 004678EC  48 00 00 1C */	b .L_8046A9C8
.L_8046A9B0:
/* 8046A9B0 004678F0  80 64 00 00 */	lwz r3, 0(r4)
/* 8046A9B4 004678F4  88 03 00 FE */	lbz r0, 0xfe(r3)
/* 8046A9B8 004678F8  28 00 00 00 */	cmplwi r0, 0
/* 8046A9BC 004678FC  41 82 00 08 */	beq .L_8046A9C4
/* 8046A9C0 00467900  3B 80 00 00 */	li r28, 0
.L_8046A9C4:
/* 8046A9C4 00467904  80 84 00 0C */	lwz r4, 0xc(r4)
.L_8046A9C8:
/* 8046A9C8 00467908  28 04 00 00 */	cmplwi r4, 0
/* 8046A9CC 0046790C  40 82 FF E4 */	bne .L_8046A9B0
/* 8046A9D0 00467910  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 8046A9D4 00467914  40 82 00 BC */	bne .L_8046AA90
/* 8046A9D8 00467918  28 1D 00 00 */	cmplwi r29, 0
/* 8046A9DC 0046791C  41 82 00 B4 */	beq .L_8046AA90
/* 8046A9E0 00467920  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046A9E4 00467924  28 00 00 00 */	cmplwi r0, 0
/* 8046A9E8 00467928  40 82 00 18 */	bne .L_8046AA00
/* 8046A9EC 0046792C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046A9F0 00467930  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046A9F4 00467934  38 80 01 D3 */	li r4, 0x1d3
/* 8046A9F8 00467938  4C C6 31 82 */	crclr 6
/* 8046A9FC 0046793C  4B BB FC 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AA00:
/* 8046AA00 00467940  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8046AA04 00467944  28 1C 00 00 */	cmplwi r28, 0
/* 8046AA08 00467948  40 82 00 18 */	bne .L_8046AA20
/* 8046AA0C 0046794C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046AA10 00467950  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046AA14 00467954  38 80 01 DC */	li r4, 0x1dc
/* 8046AA18 00467958  4C C6 31 82 */	crclr 6
/* 8046AA1C 0046795C  4B BB FC 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AA20:
/* 8046AA20 00467960  80 1C 00 04 */	lwz r0, 4(r28)
/* 8046AA24 00467964  28 00 00 00 */	cmplwi r0, 0
/* 8046AA28 00467968  40 82 00 18 */	bne .L_8046AA40
/* 8046AA2C 0046796C  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046AA30 00467970  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046AA34 00467974  38 80 00 C7 */	li r4, 0xc7
/* 8046AA38 00467978  4C C6 31 82 */	crclr 6
/* 8046AA3C 0046797C  4B BB FC 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AA40:
/* 8046AA40 00467980  80 7C 00 04 */	lwz r3, 4(r28)
/* 8046AA44 00467984  80 63 00 04 */	lwz r3, 4(r3)
/* 8046AA48 00467988  28 03 00 00 */	cmplwi r3, 0
/* 8046AA4C 0046798C  40 82 00 0C */	bne .L_8046AA58
/* 8046AA50 00467990  38 60 00 00 */	li r3, 0
/* 8046AA54 00467994  48 00 00 08 */	b .L_8046AA5C
.L_8046AA58:
/* 8046AA58 00467998  4B EC AC 29 */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
.L_8046AA5C:
/* 8046AA5C 0046799C  28 03 00 00 */	cmplwi r3, 0
/* 8046AA60 004679A0  41 82 00 30 */	beq .L_8046AA90
/* 8046AA64 004679A4  A0 03 01 30 */	lhz r0, 0x130(r3)
/* 8046AA68 004679A8  28 00 00 02 */	cmplwi r0, 2
/* 8046AA6C 004679AC  41 82 00 0C */	beq .L_8046AA78
/* 8046AA70 004679B0  28 00 00 08 */	cmplwi r0, 8
/* 8046AA74 004679B4  40 82 00 1C */	bne .L_8046AA90
.L_8046AA78:
/* 8046AA78 004679B8  7F C3 F3 78 */	mr r3, r30
/* 8046AA7C 004679BC  38 80 00 01 */	li r4, 1
/* 8046AA80 004679C0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8046AA84 004679C4  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8046AA88 004679C8  7D 89 03 A6 */	mtctr r12
/* 8046AA8C 004679CC  4E 80 04 21 */	bctrl 
.L_8046AA90:
/* 8046AA90 004679D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046AA94 004679D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046AA98 004679D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046AA9C 004679DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046AAA0 004679E0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8046AAA4 004679E4  7C 08 03 A6 */	mtlr r0
/* 8046AAA8 004679E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8046AAAC 004679EC  4E 80 00 20 */	blr 
.endfn bossKilled__Q23PSM10Scene_CaveFPQ23PSM9EnemyBoss

.fn akubiOK__Q23PSM10Scene_CaveFv, global
/* 8046AAB0 004679F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046AAB4 004679F4  7C 08 02 A6 */	mflr r0
/* 8046AAB8 004679F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046AABC 004679FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046AAC0 00467A00  93 C1 00 08 */	stw r30, 8(r1)
/* 8046AAC4 00467A04  7C 7E 1B 78 */	mr r30, r3
/* 8046AAC8 00467A08  81 83 00 00 */	lwz r12, 0(r3)
/* 8046AACC 00467A0C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046AAD0 00467A10  7D 89 03 A6 */	mtctr r12
/* 8046AAD4 00467A14  4E 80 04 21 */	bctrl 
/* 8046AAD8 00467A18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046AADC 00467A1C  41 82 00 0C */	beq .L_8046AAE8
/* 8046AAE0 00467A20  38 60 00 00 */	li r3, 0
/* 8046AAE4 00467A24  48 00 00 88 */	b .L_8046AB6C
.L_8046AAE8:
/* 8046AAE8 00467A28  3B E0 00 00 */	li r31, 0
/* 8046AAEC 00467A2C  4B C4 FA 09 */	bl getRandom_0_1__7JALCalcFv
/* 8046AAF0 00467A30  C0 02 29 44 */	lfs f0, lbl_80520CA4@sda21(r2)
/* 8046AAF4 00467A34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8046AAF8 00467A38  40 80 00 40 */	bge .L_8046AB38
/* 8046AAFC 00467A3C  4B FE DE 01 */	bl PSMGetBattleD__Fv
/* 8046AB00 00467A40  28 03 00 00 */	cmplwi r3, 0
/* 8046AB04 00467A44  41 82 00 14 */	beq .L_8046AB18
/* 8046AB08 00467A48  4B FE DD F5 */	bl PSMGetBattleD__Fv
/* 8046AB0C 00467A4C  4B ED 85 BD */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 8046AB10 00467A50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046AB14 00467A54  40 82 00 24 */	bne .L_8046AB38
.L_8046AB18:
/* 8046AB18 00467A58  4B FE DC DD */	bl PSMGetKehaiD__Fv
/* 8046AB1C 00467A5C  28 03 00 00 */	cmplwi r3, 0
/* 8046AB20 00467A60  41 82 00 14 */	beq .L_8046AB34
/* 8046AB24 00467A64  4B FE DC D1 */	bl PSMGetKehaiD__Fv
/* 8046AB28 00467A68  4B ED 85 A1 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 8046AB2C 00467A6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046AB30 00467A70  40 82 00 08 */	bne .L_8046AB38
.L_8046AB34:
/* 8046AB34 00467A74  3B E0 00 01 */	li r31, 1
.L_8046AB38:
/* 8046AB38 00467A78  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8046AB3C 00467A7C  41 82 00 2C */	beq .L_8046AB68
/* 8046AB40 00467A80  7F C3 F3 78 */	mr r3, r30
/* 8046AB44 00467A84  4B EC AB 3D */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 8046AB48 00467A88  28 03 00 00 */	cmplwi r3, 0
/* 8046AB4C 00467A8C  41 82 00 1C */	beq .L_8046AB68
/* 8046AB50 00467A90  7F C3 F3 78 */	mr r3, r30
/* 8046AB54 00467A94  4B EC AB 2D */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 8046AB58 00467A98  A0 03 01 30 */	lhz r0, 0x130(r3)
/* 8046AB5C 00467A9C  28 00 00 00 */	cmplwi r0, 0
/* 8046AB60 00467AA0  41 82 00 08 */	beq .L_8046AB68
/* 8046AB64 00467AA4  3B E0 00 00 */	li r31, 0
.L_8046AB68:
/* 8046AB68 00467AA8  7F E3 FB 78 */	mr r3, r31
.L_8046AB6C:
/* 8046AB6C 00467AAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046AB70 00467AB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046AB74 00467AB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046AB78 00467AB8  7C 08 03 A6 */	mtlr r0
/* 8046AB7C 00467ABC  38 21 00 10 */	addi r1, r1, 0x10
/* 8046AB80 00467AC0  4E 80 00 20 */	blr 
.endfn akubiOK__Q23PSM10Scene_CaveFv

.fn __ct__Q23PSM15Scene_ChallengeFUcPQ26PSGame9SceneInfo, global
/* 8046AB84 00467AC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046AB88 00467AC8  7C 08 02 A6 */	mflr r0
/* 8046AB8C 00467ACC  3C C0 80 4A */	lis r6, lbl_8049D908@ha
/* 8046AB90 00467AD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046AB94 00467AD4  BF 41 00 08 */	stmw r26, 8(r1)
/* 8046AB98 00467AD8  7C 7B 1B 78 */	mr r27, r3
/* 8046AB9C 00467ADC  7C BE 2B 78 */	mr r30, r5
/* 8046ABA0 00467AE0  3B E6 D9 08 */	addi r31, r6, lbl_8049D908@l
/* 8046ABA4 00467AE4  7F 7C DB 78 */	mr r28, r27
/* 8046ABA8 00467AE8  7F 7D DB 78 */	mr r29, r27
/* 8046ABAC 00467AEC  7F 7A DB 78 */	mr r26, r27
/* 8046ABB0 00467AF0  4B EC AA 35 */	bl __ct__Q26PSGame8PikSceneFUc
/* 8046ABB4 00467AF4  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 8046ABB8 00467AF8  28 1E 00 00 */	cmplwi r30, 0
/* 8046ABBC 00467AFC  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 8046ABC0 00467B00  90 1A 00 00 */	stw r0, 0(r26)
/* 8046ABC4 00467B04  93 DA 00 24 */	stw r30, 0x24(r26)
/* 8046ABC8 00467B08  40 82 00 18 */	bne .L_8046ABE0
/* 8046ABCC 00467B0C  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046ABD0 00467B10  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046ABD4 00467B14  38 80 00 24 */	li r4, 0x24
/* 8046ABD8 00467B18  4C C6 31 82 */	crclr 6
/* 8046ABDC 00467B1C  4B BB FA 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046ABE0:
/* 8046ABE0 00467B20  7F 43 D3 78 */	mr r3, r26
/* 8046ABE4 00467B24  81 9A 00 00 */	lwz r12, 0(r26)
/* 8046ABE8 00467B28  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046ABEC 00467B2C  7D 89 03 A6 */	mtctr r12
/* 8046ABF0 00467B30  4E 80 04 21 */	bctrl 
/* 8046ABF4 00467B34  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 8046ABF8 00467B38  38 80 00 00 */	li r4, 0
/* 8046ABFC 00467B3C  38 63 F5 84 */	addi r3, r3, __vt__Q23PSM13Scene_Objects@l
/* 8046AC00 00467B40  3C 00 F0 00 */	lis r0, 0xf000
/* 8046AC04 00467B44  90 7D 00 00 */	stw r3, 0(r29)
/* 8046AC08 00467B48  38 60 00 50 */	li r3, 0x50
/* 8046AC0C 00467B4C  90 9D 00 28 */	stw r4, 0x28(r29)
/* 8046AC10 00467B50  90 9D 00 2C */	stw r4, 0x2c(r29)
/* 8046AC14 00467B54  98 9D 00 30 */	stb r4, 0x30(r29)
/* 8046AC18 00467B58  90 1D 00 34 */	stw r0, 0x34(r29)
/* 8046AC1C 00467B5C  4B BB 92 89 */	bl __nw__FUl
/* 8046AC20 00467B60  7C 60 1B 79 */	or. r0, r3, r3
/* 8046AC24 00467B64  41 82 00 0C */	beq .L_8046AC30
/* 8046AC28 00467B68  4B EC A0 A1 */	bl __ct__Q26PSGame9CameraMgrFv
/* 8046AC2C 00467B6C  7C 60 1B 78 */	mr r0, r3
.L_8046AC30:
/* 8046AC30 00467B70  90 1D 00 28 */	stw r0, 0x28(r29)
/* 8046AC34 00467B74  7F C3 F3 78 */	mr r3, r30
/* 8046AC38 00467B78  38 80 00 01 */	li r4, 1
/* 8046AC3C 00467B7C  4B EC A9 25 */	bl getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
/* 8046AC40 00467B80  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046AC44 00467B84  20 00 00 01 */	subfic r0, r0, 1
/* 8046AC48 00467B88  7C 00 00 34 */	cntlzw r0, r0
/* 8046AC4C 00467B8C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 8046AC50 00467B90  40 82 00 0C */	bne .L_8046AC5C
/* 8046AC54 00467B94  48 00 7C 51 */	bl newInstance_SingleGame__Q23PSM18ObjCalc_SingleGameFv
/* 8046AC58 00467B98  48 00 00 08 */	b .L_8046AC60
.L_8046AC5C:
/* 8046AC5C 00467B9C  48 00 7C B9 */	bl newInstance_2PGame__Q23PSM14ObjCalc_2PGameFv
.L_8046AC60:
/* 8046AC60 00467BA0  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046AC64 00467BA4  28 00 00 00 */	cmplwi r0, 0
/* 8046AC68 00467BA8  41 82 00 2C */	beq .L_8046AC94
/* 8046AC6C 00467BAC  40 82 00 18 */	bne .L_8046AC84
/* 8046AC70 00467BB0  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046AC74 00467BB4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046AC78 00467BB8  38 80 00 89 */	li r4, 0x89
/* 8046AC7C 00467BBC  4C C6 31 82 */	crclr 6
/* 8046AC80 00467BC0  4B BB F9 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AC84:
/* 8046AC84 00467BC4  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046AC88 00467BC8  90 1D 00 2C */	stw r0, 0x2c(r29)
/* 8046AC8C 00467BCC  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8046AC90 00467BD0  93 A3 00 2C */	stw r29, 0x2c(r3)
.L_8046AC94:
/* 8046AC94 00467BD4  3C 80 80 4F */	lis r4, __vt__Q23PSM10Scene_Game@ha
/* 8046AC98 00467BD8  38 7C 00 38 */	addi r3, r28, 0x38
/* 8046AC9C 00467BDC  38 04 F4 E8 */	addi r0, r4, __vt__Q23PSM10Scene_Game@l
/* 8046ACA0 00467BE0  90 1C 00 00 */	stw r0, 0(r28)
/* 8046ACA4 00467BE4  4B BB BC 2D */	bl initiate__10JSUPtrListFv
/* 8046ACA8 00467BE8  38 80 00 00 */	li r4, 0
/* 8046ACAC 00467BEC  38 00 FF FF */	li r0, -1
/* 8046ACB0 00467BF0  90 9C 00 44 */	stw r4, 0x44(r28)
/* 8046ACB4 00467BF4  38 60 00 14 */	li r3, 0x14
/* 8046ACB8 00467BF8  90 9C 00 48 */	stw r4, 0x48(r28)
/* 8046ACBC 00467BFC  90 1C 00 4C */	stw r0, 0x4c(r28)
/* 8046ACC0 00467C00  90 9C 00 50 */	stw r4, 0x50(r28)
/* 8046ACC4 00467C04  90 9C 00 58 */	stw r4, 0x58(r28)
/* 8046ACC8 00467C08  4B BB 91 DD */	bl __nw__FUl
/* 8046ACCC 00467C0C  7C 60 1B 79 */	or. r0, r3, r3
/* 8046ACD0 00467C10  41 82 00 0C */	beq .L_8046ACDC
/* 8046ACD4 00467C14  48 00 2B FD */	bl __ct__Q23PSM14PikiHummingMgrFv
/* 8046ACD8 00467C18  7C 60 1B 78 */	mr r0, r3
.L_8046ACDC:
/* 8046ACDC 00467C1C  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Cave@ha
/* 8046ACE0 00467C20  90 1C 00 54 */	stw r0, 0x54(r28)
/* 8046ACE4 00467C24  38 03 F3 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Cave@l
/* 8046ACE8 00467C28  38 60 00 00 */	li r3, 0
/* 8046ACEC 00467C2C  90 1B 00 00 */	stw r0, 0(r27)
/* 8046ACF0 00467C30  38 00 FF FF */	li r0, -1
/* 8046ACF4 00467C34  98 7B 00 5C */	stb r3, 0x5c(r27)
/* 8046ACF8 00467C38  90 1B 00 64 */	stw r0, 0x64(r27)
/* 8046ACFC 00467C3C  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 8046AD00 00467C40  2C 00 00 04 */	cmpwi r0, 4
/* 8046AD04 00467C44  40 80 00 10 */	bge .L_8046AD14
/* 8046AD08 00467C48  2C 00 00 00 */	cmpwi r0, 0
/* 8046AD0C 00467C4C  40 80 00 14 */	bge .L_8046AD20
/* 8046AD10 00467C50  48 00 00 28 */	b .L_8046AD38
.L_8046AD14:
/* 8046AD14 00467C54  2C 00 00 06 */	cmpwi r0, 6
/* 8046AD18 00467C58  40 80 00 20 */	bge .L_8046AD38
/* 8046AD1C 00467C5C  48 00 00 10 */	b .L_8046AD2C
.L_8046AD20:
/* 8046AD20 00467C60  C0 02 2A C0 */	lfs f0, cSeFxMix_cave__Q23PSM11CreaturePrm@sda21(r2)
/* 8046AD24 00467C64  D0 1B 00 60 */	stfs f0, 0x60(r27)
/* 8046AD28 00467C68  48 00 00 24 */	b .L_8046AD4C
.L_8046AD2C:
/* 8046AD2C 00467C6C  C0 02 29 3C */	lfs f0, lbl_80520C9C@sda21(r2)
/* 8046AD30 00467C70  D0 1B 00 60 */	stfs f0, 0x60(r27)
/* 8046AD34 00467C74  48 00 00 18 */	b .L_8046AD4C
.L_8046AD38:
/* 8046AD38 00467C78  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046AD3C 00467C7C  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046AD40 00467C80  38 80 03 B9 */	li r4, 0x3b9
/* 8046AD44 00467C84  4C C6 31 82 */	crclr 6
/* 8046AD48 00467C88  4B BB F8 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AD4C:
/* 8046AD4C 00467C8C  3C 80 80 4F */	lis r4, __vt__Q23PSM15Scene_Challenge@ha
/* 8046AD50 00467C90  7F 63 DB 78 */	mr r3, r27
/* 8046AD54 00467C94  38 04 F3 74 */	addi r0, r4, __vt__Q23PSM15Scene_Challenge@l
/* 8046AD58 00467C98  90 1B 00 00 */	stw r0, 0(r27)
/* 8046AD5C 00467C9C  BB 41 00 08 */	lmw r26, 8(r1)
/* 8046AD60 00467CA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046AD64 00467CA4  7C 08 03 A6 */	mtlr r0
/* 8046AD68 00467CA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8046AD6C 00467CAC  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM15Scene_ChallengeFUcPQ26PSGame9SceneInfo

.fn __dt__Q23PSM10Scene_CaveFv, weak
/* 8046AD70 00467CB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046AD74 00467CB4  7C 08 02 A6 */	mflr r0
/* 8046AD78 00467CB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046AD7C 00467CBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046AD80 00467CC0  7C 9F 23 78 */	mr r31, r4
/* 8046AD84 00467CC4  93 C1 00 08 */	stw r30, 8(r1)
/* 8046AD88 00467CC8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046AD8C 00467CCC  41 82 01 40 */	beq .L_8046AECC
/* 8046AD90 00467CD0  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Cave@ha
/* 8046AD94 00467CD4  38 03 F3 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Cave@l
/* 8046AD98 00467CD8  90 1E 00 00 */	stw r0, 0(r30)
/* 8046AD9C 00467CDC  41 82 01 20 */	beq .L_8046AEBC
/* 8046ADA0 00467CE0  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Game@ha
/* 8046ADA4 00467CE4  38 03 F4 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Game@l
/* 8046ADA8 00467CE8  90 1E 00 00 */	stw r0, 0(r30)
/* 8046ADAC 00467CEC  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046ADB0 00467CF0  28 03 00 00 */	cmplwi r3, 0
/* 8046ADB4 00467CF4  41 82 00 18 */	beq .L_8046ADCC
/* 8046ADB8 00467CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8046ADBC 00467CFC  38 80 00 01 */	li r4, 1
/* 8046ADC0 00467D00  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046ADC4 00467D04  7D 89 03 A6 */	mtctr r12
/* 8046ADC8 00467D08  4E 80 04 21 */	bctrl 
.L_8046ADCC:
/* 8046ADCC 00467D0C  38 00 00 00 */	li r0, 0
/* 8046ADD0 00467D10  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046ADD4 00467D14  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8046ADD8 00467D18  28 03 00 00 */	cmplwi r3, 0
/* 8046ADDC 00467D1C  41 82 00 0C */	beq .L_8046ADE8
/* 8046ADE0 00467D20  38 80 00 01 */	li r4, 1
/* 8046ADE4 00467D24  4B ED 5E 95 */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
.L_8046ADE8:
/* 8046ADE8 00467D28  34 1E 00 38 */	addic. r0, r30, 0x38
/* 8046ADEC 00467D2C  41 82 00 10 */	beq .L_8046ADFC
/* 8046ADF0 00467D30  38 7E 00 38 */	addi r3, r30, 0x38
/* 8046ADF4 00467D34  38 80 00 00 */	li r4, 0
/* 8046ADF8 00467D38  4B BB BA 71 */	bl __dt__10JSUPtrListFv
.L_8046ADFC:
/* 8046ADFC 00467D3C  28 1E 00 00 */	cmplwi r30, 0
/* 8046AE00 00467D40  41 82 00 BC */	beq .L_8046AEBC
/* 8046AE04 00467D44  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 8046AE08 00467D48  38 03 F5 84 */	addi r0, r3, __vt__Q23PSM13Scene_Objects@l
/* 8046AE0C 00467D4C  90 1E 00 00 */	stw r0, 0(r30)
/* 8046AE10 00467D50  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046AE14 00467D54  28 03 00 00 */	cmplwi r3, 0
/* 8046AE18 00467D58  41 82 00 18 */	beq .L_8046AE30
/* 8046AE1C 00467D5C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046AE20 00467D60  38 80 00 01 */	li r4, 1
/* 8046AE24 00467D64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046AE28 00467D68  7D 89 03 A6 */	mtctr r12
/* 8046AE2C 00467D6C  4E 80 04 21 */	bctrl 
.L_8046AE30:
/* 8046AE30 00467D70  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046AE34 00467D74  38 00 00 00 */	li r0, 0
/* 8046AE38 00467D78  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046AE3C 00467D7C  28 03 00 00 */	cmplwi r3, 0
/* 8046AE40 00467D80  41 82 00 18 */	beq .L_8046AE58
/* 8046AE44 00467D84  81 83 00 00 */	lwz r12, 0(r3)
/* 8046AE48 00467D88  38 80 00 01 */	li r4, 1
/* 8046AE4C 00467D8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046AE50 00467D90  7D 89 03 A6 */	mtctr r12
/* 8046AE54 00467D94  4E 80 04 21 */	bctrl 
.L_8046AE58:
/* 8046AE58 00467D98  38 00 00 00 */	li r0, 0
/* 8046AE5C 00467D9C  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046AE60 00467DA0  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8046AE64 00467DA4  28 03 00 00 */	cmplwi r3, 0
/* 8046AE68 00467DA8  41 82 00 0C */	beq .L_8046AE74
/* 8046AE6C 00467DAC  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8046AE70 00467DB0  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_8046AE74:
/* 8046AE74 00467DB4  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046AE78 00467DB8  28 03 00 00 */	cmplwi r3, 0
/* 8046AE7C 00467DBC  41 82 00 18 */	beq .L_8046AE94
/* 8046AE80 00467DC0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046AE84 00467DC4  38 80 00 01 */	li r4, 1
/* 8046AE88 00467DC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046AE8C 00467DCC  7D 89 03 A6 */	mtctr r12
/* 8046AE90 00467DD0  4E 80 04 21 */	bctrl 
.L_8046AE94:
/* 8046AE94 00467DD4  38 00 00 00 */	li r0, 0
/* 8046AE98 00467DD8  28 1E 00 00 */	cmplwi r30, 0
/* 8046AE9C 00467DDC  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046AEA0 00467DE0  41 82 00 1C */	beq .L_8046AEBC
/* 8046AEA4 00467DE4  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 8046AEA8 00467DE8  7F C3 F3 78 */	mr r3, r30
/* 8046AEAC 00467DEC  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 8046AEB0 00467DF0  38 80 00 00 */	li r4, 0
/* 8046AEB4 00467DF4  90 1E 00 00 */	stw r0, 0(r30)
/* 8046AEB8 00467DF8  4B EC A7 69 */	bl __dt__Q26PSGame8PikSceneFv
.L_8046AEBC:
/* 8046AEBC 00467DFC  7F E0 07 35 */	extsh. r0, r31
/* 8046AEC0 00467E00  40 81 00 0C */	ble .L_8046AECC
/* 8046AEC4 00467E04  7F C3 F3 78 */	mr r3, r30
/* 8046AEC8 00467E08  4B BB 91 ED */	bl __dl__FPv
.L_8046AECC:
/* 8046AECC 00467E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046AED0 00467E10  7F C3 F3 78 */	mr r3, r30
/* 8046AED4 00467E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046AED8 00467E18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046AEDC 00467E1C  7C 08 03 A6 */	mtlr r0
/* 8046AEE0 00467E20  38 21 00 10 */	addi r1, r1, 0x10
/* 8046AEE4 00467E24  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM10Scene_CaveFv

.fn init__Q23PSM15Scene_ChallengeFv, global
/* 8046AEE8 00467E28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046AEEC 00467E2C  7C 08 02 A6 */	mflr r0
/* 8046AEF0 00467E30  3C 80 80 4A */	lis r4, lbl_8049D908@ha
/* 8046AEF4 00467E34  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046AEF8 00467E38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046AEFC 00467E3C  3B E4 D9 08 */	addi r31, r4, lbl_8049D908@l
/* 8046AF00 00467E40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046AF04 00467E44  7C 7E 1B 78 */	mr r30, r3
/* 8046AF08 00467E48  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046AF0C 00467E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046AF10 00467E50  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046AF14 00467E54  7D 89 03 A6 */	mtctr r12
/* 8046AF18 00467E58  4E 80 04 21 */	bctrl 
/* 8046AF1C 00467E5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046AF20 00467E60  41 82 01 04 */	beq .L_8046B024
/* 8046AF24 00467E64  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046AF28 00467E68  28 00 00 00 */	cmplwi r0, 0
/* 8046AF2C 00467E6C  40 82 00 18 */	bne .L_8046AF44
/* 8046AF30 00467E70  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046AF34 00467E74  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046AF38 00467E78  38 80 01 D3 */	li r4, 0x1d3
/* 8046AF3C 00467E7C  4C C6 31 82 */	crclr 6
/* 8046AF40 00467E80  4B BB F7 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AF44:
/* 8046AF44 00467E84  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8046AF48 00467E88  28 1D 00 00 */	cmplwi r29, 0
/* 8046AF4C 00467E8C  40 82 00 18 */	bne .L_8046AF64
/* 8046AF50 00467E90  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046AF54 00467E94  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046AF58 00467E98  38 80 01 DC */	li r4, 0x1dc
/* 8046AF5C 00467E9C  4C C6 31 82 */	crclr 6
/* 8046AF60 00467EA0  4B BB F6 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046AF64:
/* 8046AF64 00467EA4  7F A3 EB 78 */	mr r3, r29
/* 8046AF68 00467EA8  7F C4 F3 78 */	mr r4, r30
/* 8046AF6C 00467EAC  4B FE F7 35 */	bl initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game
/* 8046AF70 00467EB0  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 8046AF74 00467EB4  3B A0 00 01 */	li r29, 1
/* 8046AF78 00467EB8  28 00 00 00 */	cmplwi r0, 0
/* 8046AF7C 00467EBC  40 82 00 68 */	bne .L_8046AFE4
/* 8046AF80 00467EC0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046AF84 00467EC4  88 03 00 06 */	lbz r0, 6(r3)
/* 8046AF88 00467EC8  28 00 00 14 */	cmplwi r0, 0x14
/* 8046AF8C 00467ECC  41 82 00 58 */	beq .L_8046AFE4
/* 8046AF90 00467ED0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046AF94 00467ED4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046AF98 00467ED8  7D 89 03 A6 */	mtctr r12
/* 8046AF9C 00467EDC  4E 80 04 21 */	bctrl 
/* 8046AFA0 00467EE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046AFA4 00467EE4  41 82 00 44 */	beq .L_8046AFE8
/* 8046AFA8 00467EE8  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046AFAC 00467EEC  88 03 00 06 */	lbz r0, 6(r3)
/* 8046AFB0 00467EF0  28 00 00 03 */	cmplwi r0, 3
/* 8046AFB4 00467EF4  40 82 00 34 */	bne .L_8046AFE8
/* 8046AFB8 00467EF8  4B EC 92 B1 */	bl getCaveNoFromID__Q26PSGame13CaveFloorInfoFv
/* 8046AFBC 00467EFC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046AFC0 00467F00  28 00 00 03 */	cmplwi r0, 3
/* 8046AFC4 00467F04  40 82 00 24 */	bne .L_8046AFE8
/* 8046AFC8 00467F08  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046AFCC 00467F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046AFD0 00467F10  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8046AFD4 00467F14  7D 89 03 A6 */	mtctr r12
/* 8046AFD8 00467F18  4E 80 04 21 */	bctrl 
/* 8046AFDC 00467F1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046AFE0 00467F20  40 82 00 08 */	bne .L_8046AFE8
.L_8046AFE4:
/* 8046AFE4 00467F24  3B A0 00 00 */	li r29, 0
.L_8046AFE8:
/* 8046AFE8 00467F28  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8046AFEC 00467F2C  41 82 00 2C */	beq .L_8046B018
/* 8046AFF0 00467F30  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046AFF4 00467F34  28 00 00 00 */	cmplwi r0, 0
/* 8046AFF8 00467F38  40 82 00 18 */	bne .L_8046B010
/* 8046AFFC 00467F3C  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046B000 00467F40  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B004 00467F44  38 80 00 89 */	li r4, 0x89
/* 8046B008 00467F48  4C C6 31 82 */	crclr 6
/* 8046B00C 00467F4C  4B BB F6 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B010:
/* 8046B010 00467F50  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046B014 00467F54  90 1E 00 50 */	stw r0, 0x50(r30)
.L_8046B018:
/* 8046B018 00467F58  38 00 00 00 */	li r0, 0
/* 8046B01C 00467F5C  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8046B020 00467F60  48 00 00 F8 */	b .L_8046B118
.L_8046B024:
/* 8046B024 00467F64  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B028 00467F68  28 00 00 00 */	cmplwi r0, 0
/* 8046B02C 00467F6C  40 82 00 18 */	bne .L_8046B044
/* 8046B030 00467F70  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B034 00467F74  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B038 00467F78  38 80 01 D3 */	li r4, 0x1d3
/* 8046B03C 00467F7C  4C C6 31 82 */	crclr 6
/* 8046B040 00467F80  4B BB F6 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B044:
/* 8046B044 00467F84  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B048 00467F88  28 1D 00 00 */	cmplwi r29, 0
/* 8046B04C 00467F8C  40 82 00 18 */	bne .L_8046B064
/* 8046B050 00467F90  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B054 00467F94  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B058 00467F98  38 80 01 DC */	li r4, 0x1dc
/* 8046B05C 00467F9C  4C C6 31 82 */	crclr 6
/* 8046B060 00467FA0  4B BB F5 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B064:
/* 8046B064 00467FA4  7F A3 EB 78 */	mr r3, r29
/* 8046B068 00467FA8  7F C4 F3 78 */	mr r4, r30
/* 8046B06C 00467FAC  4B FE F6 35 */	bl initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game
/* 8046B070 00467FB0  88 0D 98 88 */	lbz r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
/* 8046B074 00467FB4  3B A0 00 01 */	li r29, 1
/* 8046B078 00467FB8  28 00 00 00 */	cmplwi r0, 0
/* 8046B07C 00467FBC  40 82 00 68 */	bne .L_8046B0E4
/* 8046B080 00467FC0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046B084 00467FC4  88 03 00 06 */	lbz r0, 6(r3)
/* 8046B088 00467FC8  28 00 00 14 */	cmplwi r0, 0x14
/* 8046B08C 00467FCC  41 82 00 58 */	beq .L_8046B0E4
/* 8046B090 00467FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B094 00467FD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046B098 00467FD8  7D 89 03 A6 */	mtctr r12
/* 8046B09C 00467FDC  4E 80 04 21 */	bctrl 
/* 8046B0A0 00467FE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046B0A4 00467FE4  41 82 00 44 */	beq .L_8046B0E8
/* 8046B0A8 00467FE8  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046B0AC 00467FEC  88 03 00 06 */	lbz r0, 6(r3)
/* 8046B0B0 00467FF0  28 00 00 03 */	cmplwi r0, 3
/* 8046B0B4 00467FF4  40 82 00 34 */	bne .L_8046B0E8
/* 8046B0B8 00467FF8  4B EC 91 B1 */	bl getCaveNoFromID__Q26PSGame13CaveFloorInfoFv
/* 8046B0BC 00467FFC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046B0C0 00468000  28 00 00 03 */	cmplwi r0, 3
/* 8046B0C4 00468004  40 82 00 24 */	bne .L_8046B0E8
/* 8046B0C8 00468008  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8046B0CC 0046800C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B0D0 00468010  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8046B0D4 00468014  7D 89 03 A6 */	mtctr r12
/* 8046B0D8 00468018  4E 80 04 21 */	bctrl 
/* 8046B0DC 0046801C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046B0E0 00468020  40 82 00 08 */	bne .L_8046B0E8
.L_8046B0E4:
/* 8046B0E4 00468024  3B A0 00 00 */	li r29, 0
.L_8046B0E8:
/* 8046B0E8 00468028  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8046B0EC 0046802C  41 82 00 2C */	beq .L_8046B118
/* 8046B0F0 00468030  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046B0F4 00468034  28 00 00 00 */	cmplwi r0, 0
/* 8046B0F8 00468038  40 82 00 18 */	bne .L_8046B110
/* 8046B0FC 0046803C  38 7F 00 30 */	addi r3, r31, 0x30
/* 8046B100 00468040  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B104 00468044  38 80 00 89 */	li r4, 0x89
/* 8046B108 00468048  4C C6 31 82 */	crclr 6
/* 8046B10C 0046804C  4B BB F5 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B110:
/* 8046B110 00468050  80 0D 91 B0 */	lwz r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046B114 00468054  90 1E 00 50 */	stw r0, 0x50(r30)
.L_8046B118:
/* 8046B118 00468058  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046B11C 0046805C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046B120 00468060  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046B124 00468064  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046B128 00468068  7C 08 03 A6 */	mtlr r0
/* 8046B12C 0046806C  38 21 00 20 */	addi r1, r1, 0x20
/* 8046B130 00468070  4E 80 00 20 */	blr 
.endfn init__Q23PSM15Scene_ChallengeFv

.fn startMainSeq__Q23PSM15Scene_ChallengeFv, global
/* 8046B134 00468074  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046B138 00468078  7C 08 02 A6 */	mflr r0
/* 8046B13C 0046807C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046B140 00468080  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046B144 00468084  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046B148 00468088  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046B14C 0046808C  7C 7D 1B 78 */	mr r29, r3
/* 8046B150 00468090  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B154 00468094  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8046B158 00468098  7D 89 03 A6 */	mtctr r12
/* 8046B15C 0046809C  4E 80 04 21 */	bctrl 
/* 8046B160 004680A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046B164 004680A4  41 82 00 2C */	beq .L_8046B190
/* 8046B168 004680A8  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8046B16C 004680AC  28 03 00 00 */	cmplwi r3, 0
/* 8046B170 004680B0  41 82 00 08 */	beq .L_8046B178
/* 8046B174 004680B4  4B ED 5B 39 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_8046B178:
/* 8046B178 004680B8  7F A3 EB 78 */	mr r3, r29
/* 8046B17C 004680BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046B180 004680C0  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046B184 004680C4  7D 89 03 A6 */	mtctr r12
/* 8046B188 004680C8  4E 80 04 21 */	bctrl 
/* 8046B18C 004680CC  48 00 00 D0 */	b .L_8046B25C
.L_8046B190:
/* 8046B190 004680D0  80 1D 00 50 */	lwz r0, 0x50(r29)
/* 8046B194 004680D4  28 00 00 00 */	cmplwi r0, 0
/* 8046B198 004680D8  41 82 00 90 */	beq .L_8046B228
/* 8046B19C 004680DC  83 DD 00 10 */	lwz r30, 0x10(r29)
/* 8046B1A0 004680E0  3B E0 00 00 */	li r31, 0
/* 8046B1A4 004680E4  48 00 00 64 */	b .L_8046B208
.L_8046B1A8:
/* 8046B1A8 004680E8  80 7E 00 00 */	lwz r3, 0(r30)
/* 8046B1AC 004680EC  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046B1B0 004680F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046B1B4 004680F4  7D 89 03 A6 */	mtctr r12
/* 8046B1B8 004680F8  4E 80 04 21 */	bctrl 
/* 8046B1BC 004680FC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8046B1C0 00468100  41 82 00 40 */	beq .L_8046B200
/* 8046B1C4 00468104  80 7E 00 00 */	lwz r3, 0(r30)
/* 8046B1C8 00468108  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046B1CC 0046810C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046B1D0 00468110  7D 89 03 A6 */	mtctr r12
/* 8046B1D4 00468114  4E 80 04 21 */	bctrl 
/* 8046B1D8 00468118  80 63 00 00 */	lwz r3, 0(r3)
/* 8046B1DC 0046811C  28 03 00 00 */	cmplwi r3, 0
/* 8046B1E0 00468120  41 82 00 20 */	beq .L_8046B200
/* 8046B1E4 00468124  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046B1E8 00468128  38 80 00 00 */	li r4, 0
/* 8046B1EC 0046812C  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 8046B1F0 00468130  38 A0 00 00 */	li r5, 0
/* 8046B1F4 00468134  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046B1F8 00468138  7D 89 03 A6 */	mtctr r12
/* 8046B1FC 0046813C  4E 80 04 21 */	bctrl 
.L_8046B200:
/* 8046B200 00468140  83 DE 00 0C */	lwz r30, 0xc(r30)
/* 8046B204 00468144  3B FF 00 01 */	addi r31, r31, 1
.L_8046B208:
/* 8046B208 00468148  28 1E 00 00 */	cmplwi r30, 0
/* 8046B20C 0046814C  40 82 FF 9C */	bne .L_8046B1A8
/* 8046B210 00468150  7F A3 EB 78 */	mr r3, r29
/* 8046B214 00468154  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046B218 00468158  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046B21C 0046815C  7D 89 03 A6 */	mtctr r12
/* 8046B220 00468160  4E 80 04 21 */	bctrl 
/* 8046B224 00468164  48 00 00 20 */	b .L_8046B244
.L_8046B228:
/* 8046B228 00468168  7F A3 EB 78 */	mr r3, r29
/* 8046B22C 0046816C  4B ED 66 CD */	bl startMainSeq__Q28PSSystem5SceneFv
/* 8046B230 00468170  7F A3 EB 78 */	mr r3, r29
/* 8046B234 00468174  81 9D 00 00 */	lwz r12, 0(r29)
/* 8046B238 00468178  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8046B23C 0046817C  7D 89 03 A6 */	mtctr r12
/* 8046B240 00468180  4E 80 04 21 */	bctrl 
.L_8046B244:
/* 8046B244 00468184  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8046B248 00468188  28 03 00 00 */	cmplwi r3, 0
/* 8046B24C 0046818C  41 82 00 08 */	beq .L_8046B254
/* 8046B250 00468190  4B ED 5A 5D */	bl on__Q28PSSystem8EnvSeMgrFv
.L_8046B254:
/* 8046B254 00468194  38 00 00 00 */	li r0, 0
/* 8046B258 00468198  90 1D 00 4C */	stw r0, 0x4c(r29)
.L_8046B25C:
/* 8046B25C 0046819C  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8046B260 004681A0  88 03 00 06 */	lbz r0, 6(r3)
/* 8046B264 004681A4  28 00 00 06 */	cmplwi r0, 6
/* 8046B268 004681A8  40 82 00 AC */	bne .L_8046B314
/* 8046B26C 004681AC  38 7D 00 10 */	addi r3, r29, 0x10
/* 8046B270 004681B0  38 80 00 02 */	li r4, 2
/* 8046B274 004681B4  4B BB BA 61 */	bl getNthLink__10JSUPtrListCFUl
/* 8046B278 004681B8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8046B27C 004681BC  40 82 00 20 */	bne .L_8046B29C
/* 8046B280 004681C0  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 8046B284 004681C4  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046B288 004681C8  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 8046B28C 004681CC  38 80 04 8A */	li r4, 0x48a
/* 8046B290 004681D0  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046B294 004681D4  4C C6 31 82 */	crclr 6
/* 8046B298 004681D8  4B BB F3 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B29C:
/* 8046B29C 004681DC  83 FF 00 00 */	lwz r31, 0(r31)
/* 8046B2A0 004681E0  28 1F 00 00 */	cmplwi r31, 0
/* 8046B2A4 004681E4  40 82 00 20 */	bne .L_8046B2C4
/* 8046B2A8 004681E8  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 8046B2AC 004681EC  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046B2B0 004681F0  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 8046B2B4 004681F4  38 80 04 8D */	li r4, 0x48d
/* 8046B2B8 004681F8  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046B2BC 004681FC  4C C6 31 82 */	crclr 6
/* 8046B2C0 00468200  4B BB F3 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B2C4:
/* 8046B2C4 00468204  7F E3 FB 78 */	mr r3, r31
/* 8046B2C8 00468208  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8046B2CC 0046820C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046B2D0 00468210  7D 89 03 A6 */	mtctr r12
/* 8046B2D4 00468214  4E 80 04 21 */	bctrl 
/* 8046B2D8 00468218  7F E3 FB 78 */	mr r3, r31
/* 8046B2DC 0046821C  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8046B2E0 00468220  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046B2E4 00468224  7D 89 03 A6 */	mtctr r12
/* 8046B2E8 00468228  4E 80 04 21 */	bctrl 
/* 8046B2EC 0046822C  80 63 00 00 */	lwz r3, 0(r3)
/* 8046B2F0 00468230  28 03 00 00 */	cmplwi r3, 0
/* 8046B2F4 00468234  41 82 00 20 */	beq .L_8046B314
/* 8046B2F8 00468238  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046B2FC 0046823C  38 80 00 00 */	li r4, 0
/* 8046B300 00468240  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 8046B304 00468244  38 A0 00 02 */	li r5, 2
/* 8046B308 00468248  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046B30C 0046824C  7D 89 03 A6 */	mtctr r12
/* 8046B310 00468250  4E 80 04 21 */	bctrl 
.L_8046B314:
/* 8046B314 00468254  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046B318 00468258  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046B31C 0046825C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046B320 00468260  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046B324 00468264  7C 08 03 A6 */	mtlr r0
/* 8046B328 00468268  38 21 00 20 */	addi r1, r1, 0x20
/* 8046B32C 0046826C  4E 80 00 20 */	blr 
.endfn startMainSeq__Q23PSM15Scene_ChallengeFv

.fn akubiOK__Q23PSM15Scene_ChallengeFv, global
/* 8046B330 00468270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046B334 00468274  7C 08 02 A6 */	mflr r0
/* 8046B338 00468278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046B33C 0046827C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046B340 00468280  3B E0 00 00 */	li r31, 0
/* 8046B344 00468284  4B C4 F1 B1 */	bl getRandom_0_1__7JALCalcFv
/* 8046B348 00468288  C0 02 29 44 */	lfs f0, lbl_80520CA4@sda21(r2)
/* 8046B34C 0046828C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8046B350 00468290  40 80 00 40 */	bge .L_8046B390
/* 8046B354 00468294  4B FE D5 A9 */	bl PSMGetBattleD__Fv
/* 8046B358 00468298  28 03 00 00 */	cmplwi r3, 0
/* 8046B35C 0046829C  41 82 00 14 */	beq .L_8046B370
/* 8046B360 004682A0  4B FE D5 9D */	bl PSMGetBattleD__Fv
/* 8046B364 004682A4  4B ED 7D 65 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 8046B368 004682A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046B36C 004682AC  40 82 00 24 */	bne .L_8046B390
.L_8046B370:
/* 8046B370 004682B0  4B FE D4 85 */	bl PSMGetKehaiD__Fv
/* 8046B374 004682B4  28 03 00 00 */	cmplwi r3, 0
/* 8046B378 004682B8  41 82 00 14 */	beq .L_8046B38C
/* 8046B37C 004682BC  4B FE D4 79 */	bl PSMGetKehaiD__Fv
/* 8046B380 004682C0  4B ED 7D 49 */	bl isUnderDirection__Q28PSSystem12DirectorBaseFv
/* 8046B384 004682C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046B388 004682C8  40 82 00 08 */	bne .L_8046B390
.L_8046B38C:
/* 8046B38C 004682CC  3B E0 00 01 */	li r31, 1
.L_8046B390:
/* 8046B390 004682D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046B394 004682D4  7F E3 FB 78 */	mr r3, r31
/* 8046B398 004682D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046B39C 004682DC  7C 08 03 A6 */	mtlr r0
/* 8046B3A0 004682E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8046B3A4 004682E4  4E 80 00 20 */	blr 
.endfn akubiOK__Q23PSM15Scene_ChallengeFv

.fn getCamDistVol__Q23PSM11Scene_ZukanFUc, global
/* 8046B3A8 004682E8  C0 22 29 50 */	lfs f1, lbl_80520CB0@sda21(r2)
/* 8046B3AC 004682EC  4E 80 00 20 */	blr 
.endfn getCamDistVol__Q23PSM11Scene_ZukanFUc

.fn getSeSceneGate__Q23PSM11Scene_ZukanFPQ23PSM7ObjBaseUl, global
/* 8046B3B0 004682F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046B3B4 004682F4  7C 08 02 A6 */	mflr r0
/* 8046B3B8 004682F8  54 A3 17 BF */	rlwinm. r3, r5, 2, 0x1e, 0x1f
/* 8046B3BC 004682FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046B3C0 00468300  54 A0 A7 3E */	rlwinm r0, r5, 0x14, 0x1c, 0x1f
/* 8046B3C4 00468304  40 82 00 08 */	bne .L_8046B3CC
/* 8046B3C8 00468308  48 00 00 70 */	b .L_8046B438
.L_8046B3CC:
/* 8046B3CC 0046830C  28 03 00 02 */	cmplwi r3, 2
/* 8046B3D0 00468310  40 82 00 24 */	bne .L_8046B3F4
/* 8046B3D4 00468314  3C 60 80 4A */	lis r3, lbl_8049D95C@ha
/* 8046B3D8 00468318  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046B3DC 0046831C  38 63 D9 5C */	addi r3, r3, lbl_8049D95C@l
/* 8046B3E0 00468320  38 80 00 1F */	li r4, 0x1f
/* 8046B3E4 00468324  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046B3E8 00468328  4C C6 31 82 */	crclr 6
/* 8046B3EC 0046832C  4B BB F2 55 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8046B3F0 00468330  48 00 00 28 */	b .L_8046B418
.L_8046B3F4:
/* 8046B3F4 00468334  28 03 00 03 */	cmplwi r3, 3
/* 8046B3F8 00468338  40 82 00 20 */	bne .L_8046B418
/* 8046B3FC 0046833C  3C 60 80 4A */	lis r3, lbl_8049D95C@ha
/* 8046B400 00468340  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046B404 00468344  38 63 D9 5C */	addi r3, r3, lbl_8049D95C@l
/* 8046B408 00468348  38 80 00 23 */	li r4, 0x23
/* 8046B40C 0046834C  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046B410 00468350  4C C6 31 82 */	crclr 6
/* 8046B414 00468354  4B BB F2 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B418:
/* 8046B418 00468358  3C 60 80 4A */	lis r3, lbl_8049D95C@ha
/* 8046B41C 0046835C  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046B420 00468360  38 63 D9 5C */	addi r3, r3, lbl_8049D95C@l
/* 8046B424 00468364  38 80 00 25 */	li r4, 0x25
/* 8046B428 00468368  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046B42C 0046836C  4C C6 31 82 */	crclr 6
/* 8046B430 00468370  4B BB F2 11 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8046B434 00468374  38 00 00 00 */	li r0, 0
.L_8046B438:
/* 8046B438 00468378  28 00 00 01 */	cmplwi r0, 1
/* 8046B43C 0046837C  41 82 00 14 */	beq .L_8046B450
/* 8046B440 00468380  28 00 00 05 */	cmplwi r0, 5
/* 8046B444 00468384  41 82 00 0C */	beq .L_8046B450
/* 8046B448 00468388  28 00 00 03 */	cmplwi r0, 3
/* 8046B44C 0046838C  40 82 00 0C */	bne .L_8046B458
.L_8046B450:
/* 8046B450 00468390  38 60 00 01 */	li r3, 1
/* 8046B454 00468394  48 00 00 08 */	b .L_8046B45C
.L_8046B458:
/* 8046B458 00468398  38 60 00 00 */	li r3, 0
.L_8046B45C:
/* 8046B45C 0046839C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046B460 004683A0  7C 08 03 A6 */	mtlr r0
/* 8046B464 004683A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8046B468 004683A8  4E 80 00 20 */	blr 
.endfn getSeSceneGate__Q23PSM11Scene_ZukanFPQ23PSM7ObjBaseUl

.fn __ct__Q23PSM14Scene_WorldMapFUcPQ26PSGame9SceneInfo, global
/* 8046B46C 004683AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046B470 004683B0  7C 08 02 A6 */	mflr r0
/* 8046B474 004683B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046B478 004683B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046B47C 004683BC  7C BF 2B 78 */	mr r31, r5
/* 8046B480 004683C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046B484 004683C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046B488 004683C8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8046B48C 004683CC  7C 7C 1B 78 */	mr r28, r3
/* 8046B490 004683D0  7F 80 E3 78 */	mr r0, r28
/* 8046B494 004683D4  7C 1D 03 78 */	mr r29, r0
/* 8046B498 004683D8  7C 1E 03 78 */	mr r30, r0
/* 8046B49C 004683DC  4B EC A1 49 */	bl __ct__Q26PSGame8PikSceneFUc
/* 8046B4A0 004683E0  3C 60 80 4F */	lis r3, __vt__Q23PSM9SceneBase@ha
/* 8046B4A4 004683E4  28 1F 00 00 */	cmplwi r31, 0
/* 8046B4A8 004683E8  38 03 F6 84 */	addi r0, r3, __vt__Q23PSM9SceneBase@l
/* 8046B4AC 004683EC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046B4B0 004683F0  93 FE 00 24 */	stw r31, 0x24(r30)
/* 8046B4B4 004683F4  40 82 00 20 */	bne .L_8046B4D4
/* 8046B4B8 004683F8  3C 60 80 4A */	lis r3, lbl_8049D914@ha
/* 8046B4BC 004683FC  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046B4C0 00468400  38 63 D9 14 */	addi r3, r3, lbl_8049D914@l
/* 8046B4C4 00468404  38 80 00 24 */	li r4, 0x24
/* 8046B4C8 00468408  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046B4CC 0046840C  4C C6 31 82 */	crclr 6
/* 8046B4D0 00468410  4B BB F1 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B4D4:
/* 8046B4D4 00468414  7F C3 F3 78 */	mr r3, r30
/* 8046B4D8 00468418  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046B4DC 0046841C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046B4E0 00468420  7D 89 03 A6 */	mtctr r12
/* 8046B4E4 00468424  4E 80 04 21 */	bctrl 
/* 8046B4E8 00468428  3C 60 80 4F */	lis r3, __vt__Q23PSM15Scene_NoObjects@ha
/* 8046B4EC 0046842C  3C 80 80 4F */	lis r4, __vt__Q23PSM14Scene_WorldMap@ha
/* 8046B4F0 00468430  38 03 F2 74 */	addi r0, r3, __vt__Q23PSM15Scene_NoObjects@l
/* 8046B4F4 00468434  38 60 00 20 */	li r3, 0x20
/* 8046B4F8 00468438  90 1D 00 00 */	stw r0, 0(r29)
/* 8046B4FC 0046843C  38 04 F2 C8 */	addi r0, r4, __vt__Q23PSM14Scene_WorldMap@l
/* 8046B500 00468440  90 1C 00 00 */	stw r0, 0(r28)
/* 8046B504 00468444  4B BB 89 A1 */	bl __nw__FUl
/* 8046B508 00468448  7C 60 1B 79 */	or. r0, r3, r3
/* 8046B50C 0046844C  41 82 00 0C */	beq .L_8046B518
/* 8046B510 00468450  48 00 1E 51 */	bl __ct__Q23PSM14WorldMapRocketFv
/* 8046B514 00468454  7C 60 1B 78 */	mr r0, r3
.L_8046B518:
/* 8046B518 00468458  90 1C 00 28 */	stw r0, 0x28(r28)
/* 8046B51C 0046845C  7F 83 E3 78 */	mr r3, r28
/* 8046B520 00468460  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046B524 00468464  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046B528 00468468  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046B52C 0046846C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046B530 00468470  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8046B534 00468474  7C 08 03 A6 */	mtlr r0
/* 8046B538 00468478  38 21 00 20 */	addi r1, r1, 0x20
/* 8046B53C 0046847C  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM14Scene_WorldMapFUcPQ26PSGame9SceneInfo

.fn __dt__Q23PSM15Scene_NoObjectsFv, weak
/* 8046B540 00468480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046B544 00468484  7C 08 02 A6 */	mflr r0
/* 8046B548 00468488  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046B54C 0046848C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046B550 00468490  7C 9F 23 78 */	mr r31, r4
/* 8046B554 00468494  93 C1 00 08 */	stw r30, 8(r1)
/* 8046B558 00468498  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046B55C 0046849C  41 82 00 38 */	beq .L_8046B594
/* 8046B560 004684A0  3C 80 80 4F */	lis r4, __vt__Q23PSM15Scene_NoObjects@ha
/* 8046B564 004684A4  38 04 F2 74 */	addi r0, r4, __vt__Q23PSM15Scene_NoObjects@l
/* 8046B568 004684A8  90 1E 00 00 */	stw r0, 0(r30)
/* 8046B56C 004684AC  41 82 00 18 */	beq .L_8046B584
/* 8046B570 004684B0  3C A0 80 4F */	lis r5, __vt__Q23PSM9SceneBase@ha
/* 8046B574 004684B4  38 80 00 00 */	li r4, 0
/* 8046B578 004684B8  38 05 F6 84 */	addi r0, r5, __vt__Q23PSM9SceneBase@l
/* 8046B57C 004684BC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046B580 004684C0  4B EC A0 A1 */	bl __dt__Q26PSGame8PikSceneFv
.L_8046B584:
/* 8046B584 004684C4  7F E0 07 35 */	extsh. r0, r31
/* 8046B588 004684C8  40 81 00 0C */	ble .L_8046B594
/* 8046B58C 004684CC  7F C3 F3 78 */	mr r3, r30
/* 8046B590 004684D0  4B BB 8B 25 */	bl __dl__FPv
.L_8046B594:
/* 8046B594 004684D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046B598 004684D8  7F C3 F3 78 */	mr r3, r30
/* 8046B59C 004684DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046B5A0 004684E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046B5A4 004684E4  7C 08 03 A6 */	mtlr r0
/* 8046B5A8 004684E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8046B5AC 004684EC  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM15Scene_NoObjectsFv

.fn getCamDistVol__Q23PSM15Scene_NoObjectsFUc, global
/* 8046B5B0 004684F0  C0 22 FD A4 */	lfs f1, sDefaultVol__Q26PSGame9CameraMgr@sda21(r2)
/* 8046B5B4 004684F4  4E 80 00 20 */	blr 
.endfn getCamDistVol__Q23PSM15Scene_NoObjectsFUc

.fn PSChangeBgm_ChallengeGame__Fv, global
/* 8046B5B8 004684F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046B5BC 004684FC  7C 08 02 A6 */	mflr r0
/* 8046B5C0 00468500  3C 60 80 4A */	lis r3, lbl_8049D908@ha
/* 8046B5C4 00468504  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046B5C8 00468508  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046B5CC 0046850C  3B E3 D9 08 */	addi r31, r3, lbl_8049D908@l
/* 8046B5D0 00468510  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046B5D4 00468514  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046B5D8 00468518  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B5DC 0046851C  28 00 00 00 */	cmplwi r0, 0
/* 8046B5E0 00468520  40 82 00 18 */	bne .L_8046B5F8
/* 8046B5E4 00468524  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B5E8 00468528  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B5EC 0046852C  38 80 01 D3 */	li r4, 0x1d3
/* 8046B5F0 00468530  4C C6 31 82 */	crclr 6
/* 8046B5F4 00468534  4B BB F0 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B5F8:
/* 8046B5F8 00468538  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B5FC 0046853C  28 1E 00 00 */	cmplwi r30, 0
/* 8046B600 00468540  40 82 00 18 */	bne .L_8046B618
/* 8046B604 00468544  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B608 00468548  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B60C 0046854C  38 80 01 DC */	li r4, 0x1dc
/* 8046B610 00468550  4C C6 31 82 */	crclr 6
/* 8046B614 00468554  4B BB F0 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B618:
/* 8046B618 00468558  80 1E 00 04 */	lwz r0, 4(r30)
/* 8046B61C 0046855C  28 00 00 00 */	cmplwi r0, 0
/* 8046B620 00468560  40 82 00 18 */	bne .L_8046B638
/* 8046B624 00468564  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046B628 00468568  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B62C 0046856C  38 80 00 CF */	li r4, 0xcf
/* 8046B630 00468570  4C C6 31 82 */	crclr 6
/* 8046B634 00468574  4B BB F0 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B638:
/* 8046B638 00468578  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046B63C 0046857C  83 C3 00 04 */	lwz r30, 4(r3)
/* 8046B640 00468580  28 1E 00 00 */	cmplwi r30, 0
/* 8046B644 00468584  40 82 00 18 */	bne .L_8046B65C
/* 8046B648 00468588  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046B64C 0046858C  38 BF 00 64 */	addi r5, r31, 0x64
/* 8046B650 00468590  38 80 00 D1 */	li r4, 0xd1
/* 8046B654 00468594  4C C6 31 82 */	crclr 6
/* 8046B658 00468598  4B BB EF E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B65C:
/* 8046B65C 0046859C  7F C3 F3 78 */	mr r3, r30
/* 8046B660 004685A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046B664 004685A4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8046B668 004685A8  7D 89 03 A6 */	mtctr r12
/* 8046B66C 004685AC  4E 80 04 21 */	bctrl 
/* 8046B670 004685B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046B674 004685B4  41 82 00 08 */	beq .L_8046B67C
/* 8046B678 004685B8  48 00 00 08 */	b .L_8046B680
.L_8046B67C:
/* 8046B67C 004685BC  3B C0 00 00 */	li r30, 0
.L_8046B680:
/* 8046B680 004685C0  28 1E 00 00 */	cmplwi r30, 0
/* 8046B684 004685C4  41 82 00 D0 */	beq .L_8046B754
/* 8046B688 004685C8  3B BE 00 10 */	addi r29, r30, 0x10
/* 8046B68C 004685CC  38 80 00 00 */	li r4, 0
/* 8046B690 004685D0  7F A3 EB 78 */	mr r3, r29
/* 8046B694 004685D4  4B EC 88 09 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046B698 004685D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046B69C 004685DC  40 82 00 18 */	bne .L_8046B6B4
/* 8046B6A0 004685E0  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046B6A4 004685E4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B6A8 004685E8  38 80 04 9D */	li r4, 0x49d
/* 8046B6AC 004685EC  4C C6 31 82 */	crclr 6
/* 8046B6B0 004685F0  4B BB EF 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B6B4:
/* 8046B6B4 004685F4  7F C3 F3 78 */	mr r3, r30
/* 8046B6B8 004685F8  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046B6BC 004685FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046B6C0 00468600  7D 89 03 A6 */	mtctr r12
/* 8046B6C4 00468604  4E 80 04 21 */	bctrl 
/* 8046B6C8 00468608  80 63 00 00 */	lwz r3, 0(r3)
/* 8046B6CC 0046860C  28 03 00 00 */	cmplwi r3, 0
/* 8046B6D0 00468610  41 82 00 20 */	beq .L_8046B6F0
/* 8046B6D4 00468614  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046B6D8 00468618  38 80 00 00 */	li r4, 0
/* 8046B6DC 0046861C  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 8046B6E0 00468620  38 A0 00 01 */	li r5, 1
/* 8046B6E4 00468624  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046B6E8 00468628  7D 89 03 A6 */	mtctr r12
/* 8046B6EC 0046862C  4E 80 04 21 */	bctrl 
.L_8046B6F0:
/* 8046B6F0 00468630  7F A3 EB 78 */	mr r3, r29
/* 8046B6F4 00468634  38 80 00 02 */	li r4, 2
/* 8046B6F8 00468638  4B EC 87 A5 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046B6FC 0046863C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8046B700 00468640  40 82 00 18 */	bne .L_8046B718
/* 8046B704 00468644  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046B708 00468648  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B70C 0046864C  38 80 04 A6 */	li r4, 0x4a6
/* 8046B710 00468650  4C C6 31 82 */	crclr 6
/* 8046B714 00468654  4B BB EF 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B718:
/* 8046B718 00468658  7F A3 EB 78 */	mr r3, r29
/* 8046B71C 0046865C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8046B720 00468660  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046B724 00468664  7D 89 03 A6 */	mtctr r12
/* 8046B728 00468668  4E 80 04 21 */	bctrl 
/* 8046B72C 0046866C  80 63 00 00 */	lwz r3, 0(r3)
/* 8046B730 00468670  28 03 00 00 */	cmplwi r3, 0
/* 8046B734 00468674  41 82 00 20 */	beq .L_8046B754
/* 8046B738 00468678  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046B73C 0046867C  38 80 00 1E */	li r4, 0x1e
/* 8046B740 00468680  C0 22 29 40 */	lfs f1, lbl_80520CA0@sda21(r2)
/* 8046B744 00468684  38 A0 00 02 */	li r5, 2
/* 8046B748 00468688  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046B74C 0046868C  7D 89 03 A6 */	mtctr r12
/* 8046B750 00468690  4E 80 04 21 */	bctrl 
.L_8046B754:
/* 8046B754 00468694  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046B758 00468698  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046B75C 0046869C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046B760 004686A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046B764 004686A4  7C 08 03 A6 */	mtlr r0
/* 8046B768 004686A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8046B76C 004686AC  4E 80 00 20 */	blr 
.endfn PSChangeBgm_ChallengeGame__Fv

.fn PSStart2DStream__FUl, global
/* 8046B770 004686B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046B774 004686B4  7C 08 02 A6 */	mflr r0
/* 8046B778 004686B8  3C 80 80 4A */	lis r4, lbl_8049D908@ha
/* 8046B77C 004686BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046B780 004686C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046B784 004686C4  3B E4 D9 08 */	addi r31, r4, lbl_8049D908@l
/* 8046B788 004686C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046B78C 004686CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046B790 004686D0  7C 7D 1B 78 */	mr r29, r3
/* 8046B794 004686D4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B798 004686D8  28 00 00 00 */	cmplwi r0, 0
/* 8046B79C 004686DC  40 82 00 18 */	bne .L_8046B7B4
/* 8046B7A0 004686E0  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B7A4 004686E4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B7A8 004686E8  38 80 01 D3 */	li r4, 0x1d3
/* 8046B7AC 004686EC  4C C6 31 82 */	crclr 6
/* 8046B7B0 004686F0  4B BB EE 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B7B4:
/* 8046B7B4 004686F4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B7B8 004686F8  28 1E 00 00 */	cmplwi r30, 0
/* 8046B7BC 004686FC  40 82 00 18 */	bne .L_8046B7D4
/* 8046B7C0 00468700  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B7C4 00468704  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B7C8 00468708  38 80 01 DC */	li r4, 0x1dc
/* 8046B7CC 0046870C  4C C6 31 82 */	crclr 6
/* 8046B7D0 00468710  4B BB EE 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B7D4:
/* 8046B7D4 00468714  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046B7D8 00468718  38 80 00 01 */	li r4, 1
/* 8046B7DC 0046871C  38 63 00 10 */	addi r3, r3, 0x10
/* 8046B7E0 00468720  4B EC 86 BD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046B7E4 00468724  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046B7E8 00468728  40 82 00 18 */	bne .L_8046B800
/* 8046B7EC 0046872C  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046B7F0 00468730  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B7F4 00468734  38 80 00 72 */	li r4, 0x72
/* 8046B7F8 00468738  4C C6 31 82 */	crclr 6
/* 8046B7FC 0046873C  4B BB EE 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B800:
/* 8046B800 00468740  7F C3 F3 78 */	mr r3, r30
/* 8046B804 00468744  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046B808 00468748  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8046B80C 0046874C  7D 89 03 A6 */	mtctr r12
/* 8046B810 00468750  4E 80 04 21 */	bctrl 
/* 8046B814 00468754  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046B818 00468758  28 00 00 01 */	cmplwi r0, 1
/* 8046B81C 0046875C  41 82 00 18 */	beq .L_8046B834
/* 8046B820 00468760  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046B824 00468764  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B828 00468768  38 80 00 73 */	li r4, 0x73
/* 8046B82C 0046876C  4C C6 31 82 */	crclr 6
/* 8046B830 00468770  4B BB EE 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B834:
/* 8046B834 00468774  7F C3 F3 78 */	mr r3, r30
/* 8046B838 00468778  7F A4 EB 78 */	mr r4, r29
/* 8046B83C 0046877C  4B EC 6B CD */	bl setId__Q28PSSystem9StreamBgmFUl
/* 8046B840 00468780  7F C3 F3 78 */	mr r3, r30
/* 8046B844 00468784  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046B848 00468788  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046B84C 0046878C  7D 89 03 A6 */	mtctr r12
/* 8046B850 00468790  4E 80 04 21 */	bctrl 
/* 8046B854 00468794  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046B858 00468798  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046B85C 0046879C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046B860 004687A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046B864 004687A4  7C 08 03 A6 */	mtlr r0
/* 8046B868 004687A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8046B86C 004687AC  4E 80 00 20 */	blr 
.endfn PSStart2DStream__FUl

.fn PSStop2DStream__Fv, global
/* 8046B870 004687B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046B874 004687B4  7C 08 02 A6 */	mflr r0
/* 8046B878 004687B8  3C 60 80 4A */	lis r3, lbl_8049D908@ha
/* 8046B87C 004687BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046B880 004687C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046B884 004687C4  3B E3 D9 08 */	addi r31, r3, lbl_8049D908@l
/* 8046B888 004687C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8046B88C 004687CC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B890 004687D0  28 00 00 00 */	cmplwi r0, 0
/* 8046B894 004687D4  40 82 00 18 */	bne .L_8046B8AC
/* 8046B898 004687D8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B89C 004687DC  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B8A0 004687E0  38 80 01 D3 */	li r4, 0x1d3
/* 8046B8A4 004687E4  4C C6 31 82 */	crclr 6
/* 8046B8A8 004687E8  4B BB ED 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B8AC:
/* 8046B8AC 004687EC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046B8B0 004687F0  28 1E 00 00 */	cmplwi r30, 0
/* 8046B8B4 004687F4  40 82 00 18 */	bne .L_8046B8CC
/* 8046B8B8 004687F8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046B8BC 004687FC  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B8C0 00468800  38 80 01 DC */	li r4, 0x1dc
/* 8046B8C4 00468804  4C C6 31 82 */	crclr 6
/* 8046B8C8 00468808  4B BB ED 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B8CC:
/* 8046B8CC 0046880C  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046B8D0 00468810  38 80 00 01 */	li r4, 1
/* 8046B8D4 00468814  38 63 00 10 */	addi r3, r3, 0x10
/* 8046B8D8 00468818  4B EC 85 C5 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046B8DC 0046881C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046B8E0 00468820  40 82 00 18 */	bne .L_8046B8F8
/* 8046B8E4 00468824  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046B8E8 00468828  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B8EC 0046882C  38 80 00 72 */	li r4, 0x72
/* 8046B8F0 00468830  4C C6 31 82 */	crclr 6
/* 8046B8F4 00468834  4B BB ED 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B8F8:
/* 8046B8F8 00468838  7F C3 F3 78 */	mr r3, r30
/* 8046B8FC 0046883C  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046B900 00468840  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8046B904 00468844  7D 89 03 A6 */	mtctr r12
/* 8046B908 00468848  4E 80 04 21 */	bctrl 
/* 8046B90C 0046884C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046B910 00468850  28 00 00 01 */	cmplwi r0, 1
/* 8046B914 00468854  41 82 00 18 */	beq .L_8046B92C
/* 8046B918 00468858  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046B91C 0046885C  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046B920 00468860  38 80 00 73 */	li r4, 0x73
/* 8046B924 00468864  4C C6 31 82 */	crclr 6
/* 8046B928 00468868  4B BB ED 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046B92C:
/* 8046B92C 0046886C  7F C3 F3 78 */	mr r3, r30
/* 8046B930 00468870  38 80 00 1E */	li r4, 0x1e
/* 8046B934 00468874  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046B938 00468878  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8046B93C 0046887C  7D 89 03 A6 */	mtctr r12
/* 8046B940 00468880  4E 80 04 21 */	bctrl 
/* 8046B944 00468884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046B948 00468888  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046B94C 0046888C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046B950 00468890  7C 08 03 A6 */	mtlr r0
/* 8046B954 00468894  38 21 00 10 */	addi r1, r1, 0x10
/* 8046B958 00468898  4E 80 00 20 */	blr 
.endfn PSStop2DStream__Fv

.fn PSPause_StartMenuOn__Fv, global
/* 8046B95C 0046889C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046B960 004688A0  7C 08 02 A6 */	mflr r0
/* 8046B964 004688A4  38 60 00 02 */	li r3, 2
/* 8046B968 004688A8  38 80 00 02 */	li r4, 2
/* 8046B96C 004688AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046B970 004688B0  48 00 01 F9 */	bl PSPauseOn__FUcUc
/* 8046B974 004688B4  38 00 00 00 */	li r0, 0
/* 8046B978 004688B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8046B97C 004688BC  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 8046B980 004688C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046B984 004688C4  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8046B988 004688C8  28 00 00 00 */	cmplwi r0, 0
/* 8046B98C 004688CC  90 81 00 08 */	stw r4, 8(r1)
/* 8046B990 004688D0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8046B994 004688D4  90 61 00 10 */	stw r3, 0x10(r1)
/* 8046B998 004688D8  40 82 00 1C */	bne .L_8046B9B4
/* 8046B99C 004688DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B9A0 004688E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8046B9A4 004688E4  7D 89 03 A6 */	mtctr r12
/* 8046B9A8 004688E8  4E 80 04 21 */	bctrl 
/* 8046B9AC 004688EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8046B9B0 004688F0  48 00 01 68 */	b .L_8046BB18
.L_8046B9B4:
/* 8046B9B4 004688F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B9B8 004688F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8046B9BC 004688FC  7D 89 03 A6 */	mtctr r12
/* 8046B9C0 00468900  4E 80 04 21 */	bctrl 
/* 8046B9C4 00468904  90 61 00 0C */	stw r3, 0xc(r1)
/* 8046B9C8 00468908  48 00 00 58 */	b .L_8046BA20
.L_8046B9CC:
/* 8046B9CC 0046890C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046B9D0 00468910  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046B9D4 00468914  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B9D8 00468918  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046B9DC 0046891C  7D 89 03 A6 */	mtctr r12
/* 8046B9E0 00468920  4E 80 04 21 */	bctrl 
/* 8046B9E4 00468924  7C 64 1B 78 */	mr r4, r3
/* 8046B9E8 00468928  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8046B9EC 0046892C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046B9F0 00468930  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046B9F4 00468934  7D 89 03 A6 */	mtctr r12
/* 8046B9F8 00468938  4E 80 04 21 */	bctrl 
/* 8046B9FC 0046893C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046BA00 00468940  40 82 01 18 */	bne .L_8046BB18
/* 8046BA04 00468944  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BA08 00468948  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046BA0C 0046894C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BA10 00468950  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046BA14 00468954  7D 89 03 A6 */	mtctr r12
/* 8046BA18 00468958  4E 80 04 21 */	bctrl 
/* 8046BA1C 0046895C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8046BA20:
/* 8046BA20 00468960  81 81 00 08 */	lwz r12, 8(r1)
/* 8046BA24 00468964  38 61 00 08 */	addi r3, r1, 8
/* 8046BA28 00468968  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8046BA2C 0046896C  7D 89 03 A6 */	mtctr r12
/* 8046BA30 00468970  4E 80 04 21 */	bctrl 
/* 8046BA34 00468974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046BA38 00468978  41 82 FF 94 */	beq .L_8046B9CC
/* 8046BA3C 0046897C  48 00 00 DC */	b .L_8046BB18
.L_8046BA40:
/* 8046BA40 00468980  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BA44 00468984  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BA48 00468988  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046BA4C 0046898C  7D 89 03 A6 */	mtctr r12
/* 8046BA50 00468990  4E 80 04 21 */	bctrl 
/* 8046BA54 00468994  80 63 02 6C */	lwz r3, 0x26c(r3)
/* 8046BA58 00468998  4B FF 71 ED */	bl stopWaitVoice__Q23PSM4NaviFv
/* 8046BA5C 0046899C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046BA60 004689A0  28 00 00 00 */	cmplwi r0, 0
/* 8046BA64 004689A4  40 82 00 24 */	bne .L_8046BA88
/* 8046BA68 004689A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BA6C 004689AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046BA70 004689B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BA74 004689B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046BA78 004689B8  7D 89 03 A6 */	mtctr r12
/* 8046BA7C 004689BC  4E 80 04 21 */	bctrl 
/* 8046BA80 004689C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8046BA84 004689C4  48 00 00 94 */	b .L_8046BB18
.L_8046BA88:
/* 8046BA88 004689C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BA8C 004689CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046BA90 004689D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BA94 004689D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046BA98 004689D8  7D 89 03 A6 */	mtctr r12
/* 8046BA9C 004689DC  4E 80 04 21 */	bctrl 
/* 8046BAA0 004689E0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8046BAA4 004689E4  48 00 00 58 */	b .L_8046BAFC
.L_8046BAA8:
/* 8046BAA8 004689E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BAAC 004689EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046BAB0 004689F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BAB4 004689F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046BAB8 004689F8  7D 89 03 A6 */	mtctr r12
/* 8046BABC 004689FC  4E 80 04 21 */	bctrl 
/* 8046BAC0 00468A00  7C 64 1B 78 */	mr r4, r3
/* 8046BAC4 00468A04  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8046BAC8 00468A08  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BACC 00468A0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046BAD0 00468A10  7D 89 03 A6 */	mtctr r12
/* 8046BAD4 00468A14  4E 80 04 21 */	bctrl 
/* 8046BAD8 00468A18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046BADC 00468A1C  40 82 00 3C */	bne .L_8046BB18
/* 8046BAE0 00468A20  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BAE4 00468A24  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046BAE8 00468A28  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BAEC 00468A2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046BAF0 00468A30  7D 89 03 A6 */	mtctr r12
/* 8046BAF4 00468A34  4E 80 04 21 */	bctrl 
/* 8046BAF8 00468A38  90 61 00 0C */	stw r3, 0xc(r1)
.L_8046BAFC:
/* 8046BAFC 00468A3C  81 81 00 08 */	lwz r12, 8(r1)
/* 8046BB00 00468A40  38 61 00 08 */	addi r3, r1, 8
/* 8046BB04 00468A44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8046BB08 00468A48  7D 89 03 A6 */	mtctr r12
/* 8046BB0C 00468A4C  4E 80 04 21 */	bctrl 
/* 8046BB10 00468A50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046BB14 00468A54  41 82 FF 94 */	beq .L_8046BAA8
.L_8046BB18:
/* 8046BB18 00468A58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8046BB1C 00468A5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046BB20 00468A60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046BB24 00468A64  7D 89 03 A6 */	mtctr r12
/* 8046BB28 00468A68  4E 80 04 21 */	bctrl 
/* 8046BB2C 00468A6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8046BB30 00468A70  7C 04 18 40 */	cmplw r4, r3
/* 8046BB34 00468A74  40 82 FF 0C */	bne .L_8046BA40
/* 8046BB38 00468A78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046BB3C 00468A7C  7C 08 03 A6 */	mtlr r0
/* 8046BB40 00468A80  38 21 00 20 */	addi r1, r1, 0x20
/* 8046BB44 00468A84  4E 80 00 20 */	blr 
.endfn PSPause_StartMenuOn__Fv

.fn PSPause_StartMenuOff__Fv, global
/* 8046BB48 00468A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046BB4C 00468A8C  7C 08 02 A6 */	mflr r0
/* 8046BB50 00468A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046BB54 00468A94  48 00 01 01 */	bl PSPauseOff__Fv
/* 8046BB58 00468A98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046BB5C 00468A9C  7C 08 03 A6 */	mtlr r0
/* 8046BB60 00468AA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8046BB64 00468AA4  4E 80 00 20 */	blr 
.endfn PSPause_StartMenuOff__Fv

.fn PSPauseOn__FUcUc, global
/* 8046BB68 00468AA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046BB6C 00468AAC  7C 08 02 A6 */	mflr r0
/* 8046BB70 00468AB0  3C A0 80 4A */	lis r5, lbl_8049D908@ha
/* 8046BB74 00468AB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8046BB78 00468AB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8046BB7C 00468ABC  3B E5 D9 08 */	addi r31, r5, lbl_8049D908@l
/* 8046BB80 00468AC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8046BB84 00468AC4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8046BB88 00468AC8  7C 9D 23 78 */	mr r29, r4
/* 8046BB8C 00468ACC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8046BB90 00468AD0  7C 7C 1B 78 */	mr r28, r3
/* 8046BB94 00468AD4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BB98 00468AD8  28 00 00 00 */	cmplwi r0, 0
/* 8046BB9C 00468ADC  40 82 00 18 */	bne .L_8046BBB4
/* 8046BBA0 00468AE0  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BBA4 00468AE4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BBA8 00468AE8  38 80 01 D3 */	li r4, 0x1d3
/* 8046BBAC 00468AEC  4C C6 31 82 */	crclr 6
/* 8046BBB0 00468AF0  4B BB EA 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BBB4:
/* 8046BBB4 00468AF4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BBB8 00468AF8  28 1E 00 00 */	cmplwi r30, 0
/* 8046BBBC 00468AFC  40 82 00 18 */	bne .L_8046BBD4
/* 8046BBC0 00468B00  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BBC4 00468B04  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BBC8 00468B08  38 80 01 DC */	li r4, 0x1dc
/* 8046BBCC 00468B0C  4C C6 31 82 */	crclr 6
/* 8046BBD0 00468B10  4B BB EA 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BBD4:
/* 8046BBD4 00468B14  80 1E 00 04 */	lwz r0, 4(r30)
/* 8046BBD8 00468B18  28 00 00 00 */	cmplwi r0, 0
/* 8046BBDC 00468B1C  40 82 00 18 */	bne .L_8046BBF4
/* 8046BBE0 00468B20  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046BBE4 00468B24  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BBE8 00468B28  38 80 00 CF */	li r4, 0xcf
/* 8046BBEC 00468B2C  4C C6 31 82 */	crclr 6
/* 8046BBF0 00468B30  4B BB EA 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BBF4:
/* 8046BBF4 00468B34  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046BBF8 00468B38  83 C3 00 04 */	lwz r30, 4(r3)
/* 8046BBFC 00468B3C  28 1E 00 00 */	cmplwi r30, 0
/* 8046BC00 00468B40  40 82 00 18 */	bne .L_8046BC18
/* 8046BC04 00468B44  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046BC08 00468B48  38 BF 00 64 */	addi r5, r31, 0x64
/* 8046BC0C 00468B4C  38 80 00 D1 */	li r4, 0xd1
/* 8046BC10 00468B50  4C C6 31 82 */	crclr 6
/* 8046BC14 00468B54  4B BB EA 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BC18:
/* 8046BC18 00468B58  7F C3 F3 78 */	mr r3, r30
/* 8046BC1C 00468B5C  7F 84 E3 78 */	mr r4, r28
/* 8046BC20 00468B60  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046BC24 00468B64  7F A5 EB 78 */	mr r5, r29
/* 8046BC28 00468B68  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8046BC2C 00468B6C  7D 89 03 A6 */	mtctr r12
/* 8046BC30 00468B70  4E 80 04 21 */	bctrl 
/* 8046BC34 00468B74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8046BC38 00468B78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8046BC3C 00468B7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8046BC40 00468B80  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8046BC44 00468B84  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8046BC48 00468B88  7C 08 03 A6 */	mtlr r0
/* 8046BC4C 00468B8C  38 21 00 20 */	addi r1, r1, 0x20
/* 8046BC50 00468B90  4E 80 00 20 */	blr 
.endfn PSPauseOn__FUcUc

.fn PSPauseOff__Fv, global
/* 8046BC54 00468B94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046BC58 00468B98  7C 08 02 A6 */	mflr r0
/* 8046BC5C 00468B9C  3C 60 80 4A */	lis r3, lbl_8049D908@ha
/* 8046BC60 00468BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046BC64 00468BA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046BC68 00468BA8  3B E3 D9 08 */	addi r31, r3, lbl_8049D908@l
/* 8046BC6C 00468BAC  93 C1 00 08 */	stw r30, 8(r1)
/* 8046BC70 00468BB0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BC74 00468BB4  28 00 00 00 */	cmplwi r0, 0
/* 8046BC78 00468BB8  40 82 00 18 */	bne .L_8046BC90
/* 8046BC7C 00468BBC  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BC80 00468BC0  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BC84 00468BC4  38 80 01 D3 */	li r4, 0x1d3
/* 8046BC88 00468BC8  4C C6 31 82 */	crclr 6
/* 8046BC8C 00468BCC  4B BB E9 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BC90:
/* 8046BC90 00468BD0  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BC94 00468BD4  28 1E 00 00 */	cmplwi r30, 0
/* 8046BC98 00468BD8  40 82 00 18 */	bne .L_8046BCB0
/* 8046BC9C 00468BDC  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BCA0 00468BE0  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BCA4 00468BE4  38 80 01 DC */	li r4, 0x1dc
/* 8046BCA8 00468BE8  4C C6 31 82 */	crclr 6
/* 8046BCAC 00468BEC  4B BB E9 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BCB0:
/* 8046BCB0 00468BF0  80 1E 00 04 */	lwz r0, 4(r30)
/* 8046BCB4 00468BF4  28 00 00 00 */	cmplwi r0, 0
/* 8046BCB8 00468BF8  40 82 00 18 */	bne .L_8046BCD0
/* 8046BCBC 00468BFC  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046BCC0 00468C00  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BCC4 00468C04  38 80 00 CF */	li r4, 0xcf
/* 8046BCC8 00468C08  4C C6 31 82 */	crclr 6
/* 8046BCCC 00468C0C  4B BB E9 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BCD0:
/* 8046BCD0 00468C10  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046BCD4 00468C14  83 C3 00 04 */	lwz r30, 4(r3)
/* 8046BCD8 00468C18  28 1E 00 00 */	cmplwi r30, 0
/* 8046BCDC 00468C1C  40 82 00 18 */	bne .L_8046BCF4
/* 8046BCE0 00468C20  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046BCE4 00468C24  38 BF 00 64 */	addi r5, r31, 0x64
/* 8046BCE8 00468C28  38 80 00 D1 */	li r4, 0xd1
/* 8046BCEC 00468C2C  4C C6 31 82 */	crclr 6
/* 8046BCF0 00468C30  4B BB E9 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BCF4:
/* 8046BCF4 00468C34  7F C3 F3 78 */	mr r3, r30
/* 8046BCF8 00468C38  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046BCFC 00468C3C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8046BD00 00468C40  7D 89 03 A6 */	mtctr r12
/* 8046BD04 00468C44  4E 80 04 21 */	bctrl 
/* 8046BD08 00468C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046BD0C 00468C4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046BD10 00468C50  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046BD14 00468C54  7C 08 03 A6 */	mtlr r0
/* 8046BD18 00468C58  38 21 00 10 */	addi r1, r1, 0x10
/* 8046BD1C 00468C5C  4E 80 00 20 */	blr 
.endfn PSPauseOff__Fv

.fn PSStartChallengeTimeUpStream__Fv, global
/* 8046BD20 00468C60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046BD24 00468C64  7C 08 02 A6 */	mflr r0
/* 8046BD28 00468C68  3C 60 80 4A */	lis r3, lbl_8049D908@ha
/* 8046BD2C 00468C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046BD30 00468C70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046BD34 00468C74  3B E3 D9 08 */	addi r31, r3, lbl_8049D908@l
/* 8046BD38 00468C78  93 C1 00 08 */	stw r30, 8(r1)
/* 8046BD3C 00468C7C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BD40 00468C80  28 00 00 00 */	cmplwi r0, 0
/* 8046BD44 00468C84  40 82 00 18 */	bne .L_8046BD5C
/* 8046BD48 00468C88  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BD4C 00468C8C  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BD50 00468C90  38 80 01 D3 */	li r4, 0x1d3
/* 8046BD54 00468C94  4C C6 31 82 */	crclr 6
/* 8046BD58 00468C98  4B BB E8 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BD5C:
/* 8046BD5C 00468C9C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BD60 00468CA0  28 1E 00 00 */	cmplwi r30, 0
/* 8046BD64 00468CA4  40 82 00 18 */	bne .L_8046BD7C
/* 8046BD68 00468CA8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BD6C 00468CAC  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BD70 00468CB0  38 80 01 DC */	li r4, 0x1dc
/* 8046BD74 00468CB4  4C C6 31 82 */	crclr 6
/* 8046BD78 00468CB8  4B BB E8 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BD7C:
/* 8046BD7C 00468CBC  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046BD80 00468CC0  38 80 00 01 */	li r4, 1
/* 8046BD84 00468CC4  38 63 00 10 */	addi r3, r3, 0x10
/* 8046BD88 00468CC8  4B EC 81 15 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046BD8C 00468CCC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046BD90 00468CD0  40 82 00 18 */	bne .L_8046BDA8
/* 8046BD94 00468CD4  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046BD98 00468CD8  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BD9C 00468CDC  38 80 00 72 */	li r4, 0x72
/* 8046BDA0 00468CE0  4C C6 31 82 */	crclr 6
/* 8046BDA4 00468CE4  4B BB E8 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BDA8:
/* 8046BDA8 00468CE8  7F C3 F3 78 */	mr r3, r30
/* 8046BDAC 00468CEC  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046BDB0 00468CF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8046BDB4 00468CF4  7D 89 03 A6 */	mtctr r12
/* 8046BDB8 00468CF8  4E 80 04 21 */	bctrl 
/* 8046BDBC 00468CFC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8046BDC0 00468D00  28 00 00 01 */	cmplwi r0, 1
/* 8046BDC4 00468D04  41 82 00 18 */	beq .L_8046BDDC
/* 8046BDC8 00468D08  38 7F 00 0C */	addi r3, r31, 0xc
/* 8046BDCC 00468D0C  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BDD0 00468D10  38 80 00 73 */	li r4, 0x73
/* 8046BDD4 00468D14  4C C6 31 82 */	crclr 6
/* 8046BDD8 00468D18  4B BB E8 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BDDC:
/* 8046BDDC 00468D1C  3C 80 C0 01 */	lis r4, 0xC0011016@ha
/* 8046BDE0 00468D20  7F C3 F3 78 */	mr r3, r30
/* 8046BDE4 00468D24  38 84 10 16 */	addi r4, r4, 0xC0011016@l
/* 8046BDE8 00468D28  4B EC 66 21 */	bl setId__Q28PSSystem9StreamBgmFUl
/* 8046BDEC 00468D2C  7F C3 F3 78 */	mr r3, r30
/* 8046BDF0 00468D30  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8046BDF4 00468D34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8046BDF8 00468D38  7D 89 03 A6 */	mtctr r12
/* 8046BDFC 00468D3C  4E 80 04 21 */	bctrl 
/* 8046BE00 00468D40  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BE04 00468D44  28 00 00 00 */	cmplwi r0, 0
/* 8046BE08 00468D48  40 82 00 18 */	bne .L_8046BE20
/* 8046BE0C 00468D4C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BE10 00468D50  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BE14 00468D54  38 80 01 D3 */	li r4, 0x1d3
/* 8046BE18 00468D58  4C C6 31 82 */	crclr 6
/* 8046BE1C 00468D5C  4B BB E8 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BE20:
/* 8046BE20 00468D60  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BE24 00468D64  28 1E 00 00 */	cmplwi r30, 0
/* 8046BE28 00468D68  40 82 00 18 */	bne .L_8046BE40
/* 8046BE2C 00468D6C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8046BE30 00468D70  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BE34 00468D74  38 80 01 DC */	li r4, 0x1dc
/* 8046BE38 00468D78  4C C6 31 82 */	crclr 6
/* 8046BE3C 00468D7C  4B BB E8 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BE40:
/* 8046BE40 00468D80  80 1E 00 04 */	lwz r0, 4(r30)
/* 8046BE44 00468D84  28 00 00 00 */	cmplwi r0, 0
/* 8046BE48 00468D88  40 82 00 18 */	bne .L_8046BE60
/* 8046BE4C 00468D8C  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046BE50 00468D90  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BE54 00468D94  38 80 00 CF */	li r4, 0xcf
/* 8046BE58 00468D98  4C C6 31 82 */	crclr 6
/* 8046BE5C 00468D9C  4B BB E7 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BE60:
/* 8046BE60 00468DA0  80 7E 00 04 */	lwz r3, 4(r30)
/* 8046BE64 00468DA4  83 C3 00 04 */	lwz r30, 4(r3)
/* 8046BE68 00468DA8  28 1E 00 00 */	cmplwi r30, 0
/* 8046BE6C 00468DAC  40 82 00 18 */	bne .L_8046BE84
/* 8046BE70 00468DB0  38 7F 00 48 */	addi r3, r31, 0x48
/* 8046BE74 00468DB4  38 BF 00 64 */	addi r5, r31, 0x64
/* 8046BE78 00468DB8  38 80 00 D1 */	li r4, 0xd1
/* 8046BE7C 00468DBC  4C C6 31 82 */	crclr 6
/* 8046BE80 00468DC0  4B BB E7 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BE84:
/* 8046BE84 00468DC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046BE88 00468DC8  7F C3 F3 78 */	mr r3, r30
/* 8046BE8C 00468DCC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8046BE90 00468DD0  7D 89 03 A6 */	mtctr r12
/* 8046BE94 00468DD4  4E 80 04 21 */	bctrl 
/* 8046BE98 00468DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8046BE9C 00468DDC  40 82 00 18 */	bne .L_8046BEB4
/* 8046BEA0 00468DE0  38 7F 00 88 */	addi r3, r31, 0x88
/* 8046BEA4 00468DE4  38 BF 00 24 */	addi r5, r31, 0x24
/* 8046BEA8 00468DE8  38 80 01 77 */	li r4, 0x177
/* 8046BEAC 00468DEC  4C C6 31 82 */	crclr 6
/* 8046BEB0 00468DF0  4B BB E7 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BEB4:
/* 8046BEB4 00468DF4  7F C3 F3 78 */	mr r3, r30
/* 8046BEB8 00468DF8  38 80 00 02 */	li r4, 2
/* 8046BEBC 00468DFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8046BEC0 00468E00  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8046BEC4 00468E04  7D 89 03 A6 */	mtctr r12
/* 8046BEC8 00468E08  4E 80 04 21 */	bctrl 
/* 8046BECC 00468E0C  48 00 00 1D */	bl PSMuteSE_on2D__Fv
/* 8046BED0 00468E10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046BED4 00468E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046BED8 00468E18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046BEDC 00468E1C  7C 08 03 A6 */	mtlr r0
/* 8046BEE0 00468E20  38 21 00 10 */	addi r1, r1, 0x10
/* 8046BEE4 00468E24  4E 80 00 20 */	blr 
.endfn PSStartChallengeTimeUpStream__Fv

.fn PSMuteSE_on2D__Fv, global
/* 8046BEE8 00468E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046BEEC 00468E2C  7C 08 02 A6 */	mflr r0
/* 8046BEF0 00468E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046BEF4 00468E34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046BEF8 00468E38  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BEFC 00468E3C  28 00 00 00 */	cmplwi r0, 0
/* 8046BF00 00468E40  40 82 00 20 */	bne .L_8046BF20
/* 8046BF04 00468E44  3C 60 80 4A */	lis r3, lbl_8049D944@ha
/* 8046BF08 00468E48  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046BF0C 00468E4C  38 63 D9 44 */	addi r3, r3, lbl_8049D944@l
/* 8046BF10 00468E50  38 80 01 D3 */	li r4, 0x1d3
/* 8046BF14 00468E54  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046BF18 00468E58  4C C6 31 82 */	crclr 6
/* 8046BF1C 00468E5C  4B BB E7 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BF20:
/* 8046BF20 00468E60  83 ED 98 80 */	lwz r31, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BF24 00468E64  28 1F 00 00 */	cmplwi r31, 0
/* 8046BF28 00468E68  40 82 00 20 */	bne .L_8046BF48
/* 8046BF2C 00468E6C  3C 60 80 4A */	lis r3, lbl_8049D944@ha
/* 8046BF30 00468E70  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046BF34 00468E74  38 63 D9 44 */	addi r3, r3, lbl_8049D944@l
/* 8046BF38 00468E78  38 80 01 DC */	li r4, 0x1dc
/* 8046BF3C 00468E7C  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046BF40 00468E80  4C C6 31 82 */	crclr 6
/* 8046BF44 00468E84  4B BB E6 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BF48:
/* 8046BF48 00468E88  80 7F 00 04 */	lwz r3, 4(r31)
/* 8046BF4C 00468E8C  38 80 00 00 */	li r4, 0
/* 8046BF50 00468E90  38 63 00 10 */	addi r3, r3, 0x10
/* 8046BF54 00468E94  4B EC 7F 49 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046BF58 00468E98  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046BF5C 00468E9C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046BF60 00468EA0  7D 89 03 A6 */	mtctr r12
/* 8046BF64 00468EA4  4E 80 04 21 */	bctrl 
/* 8046BF68 00468EA8  80 63 00 00 */	lwz r3, 0(r3)
/* 8046BF6C 00468EAC  38 80 00 00 */	li r4, 0
/* 8046BF70 00468EB0  C0 22 29 3C */	lfs f1, lbl_80520C9C@sda21(r2)
/* 8046BF74 00468EB4  38 A0 00 00 */	li r5, 0
/* 8046BF78 00468EB8  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046BF7C 00468EBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046BF80 00468EC0  7D 89 03 A6 */	mtctr r12
/* 8046BF84 00468EC4  4E 80 04 21 */	bctrl 
/* 8046BF88 00468EC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046BF8C 00468ECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046BF90 00468ED0  7C 08 03 A6 */	mtlr r0
/* 8046BF94 00468ED4  38 21 00 10 */	addi r1, r1, 0x10
/* 8046BF98 00468ED8  4E 80 00 20 */	blr 
.endfn PSMuteSE_on2D__Fv

.fn PSMuteOffSE_on2D__Fv, global
/* 8046BF9C 00468EDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046BFA0 00468EE0  7C 08 02 A6 */	mflr r0
/* 8046BFA4 00468EE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046BFA8 00468EE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046BFAC 00468EEC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BFB0 00468EF0  28 00 00 00 */	cmplwi r0, 0
/* 8046BFB4 00468EF4  40 82 00 20 */	bne .L_8046BFD4
/* 8046BFB8 00468EF8  3C 60 80 4A */	lis r3, lbl_8049D944@ha
/* 8046BFBC 00468EFC  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046BFC0 00468F00  38 63 D9 44 */	addi r3, r3, lbl_8049D944@l
/* 8046BFC4 00468F04  38 80 01 D3 */	li r4, 0x1d3
/* 8046BFC8 00468F08  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046BFCC 00468F0C  4C C6 31 82 */	crclr 6
/* 8046BFD0 00468F10  4B BB E6 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BFD4:
/* 8046BFD4 00468F14  83 ED 98 80 */	lwz r31, spSceneMgr__8PSSystem@sda21(r13)
/* 8046BFD8 00468F18  28 1F 00 00 */	cmplwi r31, 0
/* 8046BFDC 00468F1C  40 82 00 20 */	bne .L_8046BFFC
/* 8046BFE0 00468F20  3C 60 80 4A */	lis r3, lbl_8049D944@ha
/* 8046BFE4 00468F24  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046BFE8 00468F28  38 63 D9 44 */	addi r3, r3, lbl_8049D944@l
/* 8046BFEC 00468F2C  38 80 01 DC */	li r4, 0x1dc
/* 8046BFF0 00468F30  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046BFF4 00468F34  4C C6 31 82 */	crclr 6
/* 8046BFF8 00468F38  4B BB E6 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8046BFFC:
/* 8046BFFC 00468F3C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8046C000 00468F40  38 80 00 00 */	li r4, 0
/* 8046C004 00468F44  38 63 00 10 */	addi r3, r3, 0x10
/* 8046C008 00468F48  4B EC 7E 95 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8046C00C 00468F4C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046C010 00468F50  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8046C014 00468F54  7D 89 03 A6 */	mtctr r12
/* 8046C018 00468F58  4E 80 04 21 */	bctrl 
/* 8046C01C 00468F5C  80 63 00 00 */	lwz r3, 0(r3)
/* 8046C020 00468F60  38 80 00 00 */	li r4, 0
/* 8046C024 00468F64  C0 22 29 40 */	lfs f1, lbl_80520CA0@sda21(r2)
/* 8046C028 00468F68  38 A0 00 00 */	li r5, 0
/* 8046C02C 00468F6C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8046C030 00468F70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8046C034 00468F74  7D 89 03 A6 */	mtctr r12
/* 8046C038 00468F78  4E 80 04 21 */	bctrl 
/* 8046C03C 00468F7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C040 00468F80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C044 00468F84  7C 08 03 A6 */	mtlr r0
/* 8046C048 00468F88  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C04C 00468F8C  4E 80 00 20 */	blr 
.endfn PSMuteOffSE_on2D__Fv

.section .text, "ax", unique, 1
.fn __dt__Q23PSM10Scene_DemoFv, weak
/* 8046C050 00468F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C054 00468F94  7C 08 02 A6 */	mflr r0
/* 8046C058 00468F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C05C 00468F9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C060 00468FA0  7C 9F 23 78 */	mr r31, r4
/* 8046C064 00468FA4  93 C1 00 08 */	stw r30, 8(r1)
/* 8046C068 00468FA8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046C06C 00468FAC  41 82 00 38 */	beq .L_8046C0A4
/* 8046C070 00468FB0  3C 80 80 4F */	lis r4, __vt__Q23PSM10Scene_Demo@ha
/* 8046C074 00468FB4  38 04 F5 DC */	addi r0, r4, __vt__Q23PSM10Scene_Demo@l
/* 8046C078 00468FB8  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C07C 00468FBC  41 82 00 18 */	beq .L_8046C094
/* 8046C080 00468FC0  3C A0 80 4F */	lis r5, __vt__Q23PSM9SceneBase@ha
/* 8046C084 00468FC4  38 80 00 00 */	li r4, 0
/* 8046C088 00468FC8  38 05 F6 84 */	addi r0, r5, __vt__Q23PSM9SceneBase@l
/* 8046C08C 00468FCC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C090 00468FD0  4B EC 95 91 */	bl __dt__Q26PSGame8PikSceneFv
.L_8046C094:
/* 8046C094 00468FD4  7F E0 07 35 */	extsh. r0, r31
/* 8046C098 00468FD8  40 81 00 0C */	ble .L_8046C0A4
/* 8046C09C 00468FDC  7F C3 F3 78 */	mr r3, r30
/* 8046C0A0 00468FE0  4B BB 80 15 */	bl __dl__FPv
.L_8046C0A4:
/* 8046C0A4 00468FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C0A8 00468FE8  7F C3 F3 78 */	mr r3, r30
/* 8046C0AC 00468FEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C0B0 00468FF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046C0B4 00468FF4  7C 08 03 A6 */	mtlr r0
/* 8046C0B8 00468FF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C0BC 00468FFC  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM10Scene_DemoFv

.section .text, "ax", unique, 2
.fn isCave__Q23PSM10Scene_CaveFv, weak
/* 8046C0C0 00469000  38 60 00 01 */	li r3, 1
/* 8046C0C4 00469004  4E 80 00 20 */	blr 
.endfn isCave__Q23PSM10Scene_CaveFv

.fn getPollutUpTimer__Q23PSM10Scene_CaveCFv, weak
/* 8046C0C8 00469008  80 63 00 64 */	lwz r3, 0x64(r3)
/* 8046C0CC 0046900C  4E 80 00 20 */	blr 
.endfn getPollutUpTimer__Q23PSM10Scene_CaveCFv

.fn isDemoScene__Q23PSM10Scene_GameFv, weak
/* 8046C0D0 00469010  38 60 00 00 */	li r3, 0
/* 8046C0D4 00469014  4E 80 00 20 */	blr 
.endfn isDemoScene__Q23PSM10Scene_GameFv

.fn isGameScene__Q23PSM10Scene_GameFv, weak
/* 8046C0D8 00469018  38 60 00 01 */	li r3, 1
/* 8046C0DC 0046901C  4E 80 00 20 */	blr 
.endfn isGameScene__Q23PSM10Scene_GameFv

.fn __dt__Q23PSM12Scene_GroundFv, weak
/* 8046C0E0 00469020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C0E4 00469024  7C 08 02 A6 */	mflr r0
/* 8046C0E8 00469028  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C0EC 0046902C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C0F0 00469030  7C 9F 23 78 */	mr r31, r4
/* 8046C0F4 00469034  93 C1 00 08 */	stw r30, 8(r1)
/* 8046C0F8 00469038  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046C0FC 0046903C  41 82 01 40 */	beq .L_8046C23C
/* 8046C100 00469040  3C 60 80 4F */	lis r3, __vt__Q23PSM12Scene_Ground@ha
/* 8046C104 00469044  38 03 F4 5C */	addi r0, r3, __vt__Q23PSM12Scene_Ground@l
/* 8046C108 00469048  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C10C 0046904C  41 82 01 20 */	beq .L_8046C22C
/* 8046C110 00469050  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Game@ha
/* 8046C114 00469054  38 03 F4 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Game@l
/* 8046C118 00469058  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C11C 0046905C  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046C120 00469060  28 03 00 00 */	cmplwi r3, 0
/* 8046C124 00469064  41 82 00 18 */	beq .L_8046C13C
/* 8046C128 00469068  81 83 00 00 */	lwz r12, 0(r3)
/* 8046C12C 0046906C  38 80 00 01 */	li r4, 1
/* 8046C130 00469070  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046C134 00469074  7D 89 03 A6 */	mtctr r12
/* 8046C138 00469078  4E 80 04 21 */	bctrl 
.L_8046C13C:
/* 8046C13C 0046907C  38 00 00 00 */	li r0, 0
/* 8046C140 00469080  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046C144 00469084  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8046C148 00469088  28 03 00 00 */	cmplwi r3, 0
/* 8046C14C 0046908C  41 82 00 0C */	beq .L_8046C158
/* 8046C150 00469090  38 80 00 01 */	li r4, 1
/* 8046C154 00469094  4B ED 4B 25 */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
.L_8046C158:
/* 8046C158 00469098  34 1E 00 38 */	addic. r0, r30, 0x38
/* 8046C15C 0046909C  41 82 00 10 */	beq .L_8046C16C
/* 8046C160 004690A0  38 7E 00 38 */	addi r3, r30, 0x38
/* 8046C164 004690A4  38 80 00 00 */	li r4, 0
/* 8046C168 004690A8  4B BB A7 01 */	bl __dt__10JSUPtrListFv
.L_8046C16C:
/* 8046C16C 004690AC  28 1E 00 00 */	cmplwi r30, 0
/* 8046C170 004690B0  41 82 00 BC */	beq .L_8046C22C
/* 8046C174 004690B4  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 8046C178 004690B8  38 03 F5 84 */	addi r0, r3, __vt__Q23PSM13Scene_Objects@l
/* 8046C17C 004690BC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C180 004690C0  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C184 004690C4  28 03 00 00 */	cmplwi r3, 0
/* 8046C188 004690C8  41 82 00 18 */	beq .L_8046C1A0
/* 8046C18C 004690CC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046C190 004690D0  38 80 00 01 */	li r4, 1
/* 8046C194 004690D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046C198 004690D8  7D 89 03 A6 */	mtctr r12
/* 8046C19C 004690DC  4E 80 04 21 */	bctrl 
.L_8046C1A0:
/* 8046C1A0 004690E0  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C1A4 004690E4  38 00 00 00 */	li r0, 0
/* 8046C1A8 004690E8  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C1AC 004690EC  28 03 00 00 */	cmplwi r3, 0
/* 8046C1B0 004690F0  41 82 00 18 */	beq .L_8046C1C8
/* 8046C1B4 004690F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8046C1B8 004690F8  38 80 00 01 */	li r4, 1
/* 8046C1BC 004690FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046C1C0 00469100  7D 89 03 A6 */	mtctr r12
/* 8046C1C4 00469104  4E 80 04 21 */	bctrl 
.L_8046C1C8:
/* 8046C1C8 00469108  38 00 00 00 */	li r0, 0
/* 8046C1CC 0046910C  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C1D0 00469110  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8046C1D4 00469114  28 03 00 00 */	cmplwi r3, 0
/* 8046C1D8 00469118  41 82 00 0C */	beq .L_8046C1E4
/* 8046C1DC 0046911C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8046C1E0 00469120  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_8046C1E4:
/* 8046C1E4 00469124  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C1E8 00469128  28 03 00 00 */	cmplwi r3, 0
/* 8046C1EC 0046912C  41 82 00 18 */	beq .L_8046C204
/* 8046C1F0 00469130  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046C1F4 00469134  38 80 00 01 */	li r4, 1
/* 8046C1F8 00469138  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046C1FC 0046913C  7D 89 03 A6 */	mtctr r12
/* 8046C200 00469140  4E 80 04 21 */	bctrl 
.L_8046C204:
/* 8046C204 00469144  38 00 00 00 */	li r0, 0
/* 8046C208 00469148  28 1E 00 00 */	cmplwi r30, 0
/* 8046C20C 0046914C  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C210 00469150  41 82 00 1C */	beq .L_8046C22C
/* 8046C214 00469154  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 8046C218 00469158  7F C3 F3 78 */	mr r3, r30
/* 8046C21C 0046915C  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 8046C220 00469160  38 80 00 00 */	li r4, 0
/* 8046C224 00469164  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C228 00469168  4B EC 93 F9 */	bl __dt__Q26PSGame8PikSceneFv
.L_8046C22C:
/* 8046C22C 0046916C  7F E0 07 35 */	extsh. r0, r31
/* 8046C230 00469170  40 81 00 0C */	ble .L_8046C23C
/* 8046C234 00469174  7F C3 F3 78 */	mr r3, r30
/* 8046C238 00469178  4B BB 7E 7D */	bl __dl__FPv
.L_8046C23C:
/* 8046C23C 0046917C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C240 00469180  7F C3 F3 78 */	mr r3, r30
/* 8046C244 00469184  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C248 00469188  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046C24C 0046918C  7C 08 03 A6 */	mtlr r0
/* 8046C250 00469190  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C254 00469194  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM12Scene_GroundFv

.fn isPollutUp__Q23PSM12Scene_GroundFv, weak
/* 8046C258 00469198  80 83 00 5C */	lwz r4, 0x5c(r3)
/* 8046C25C 0046919C  20 64 FF FF */	subfic r3, r4, -1
/* 8046C260 004691A0  38 04 00 01 */	addi r0, r4, 1
/* 8046C264 004691A4  7C 60 03 78 */	or r0, r3, r0
/* 8046C268 004691A8  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8046C26C 004691AC  4E 80 00 20 */	blr 
.endfn isPollutUp__Q23PSM12Scene_GroundFv

.fn getPollutUpTimer__Q23PSM12Scene_GroundCFv, weak
/* 8046C270 004691B0  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8046C274 004691B4  4E 80 00 20 */	blr 
.endfn getPollutUpTimer__Q23PSM12Scene_GroundCFv

.fn isBossFloor__Q23PSM10Scene_GameFv, weak
/* 8046C278 004691B8  38 60 00 00 */	li r3, 0
/* 8046C27C 004691BC  4E 80 00 20 */	blr 
.endfn isBossFloor__Q23PSM10Scene_GameFv

.fn isPollutUp__Q23PSM10Scene_GameFv, weak
/* 8046C280 004691C0  38 60 00 00 */	li r3, 0
/* 8046C284 004691C4  4E 80 00 20 */	blr 
.endfn isPollutUp__Q23PSM10Scene_GameFv

.fn getPollutUpTimer__Q23PSM10Scene_GameCFv, weak
/* 8046C288 004691C8  38 60 FF FF */	li r3, -1
/* 8046C28C 004691CC  4E 80 00 20 */	blr 
.endfn getPollutUpTimer__Q23PSM10Scene_GameCFv

.fn isDemoScene__Q23PSM10Scene_DemoFv, weak
/* 8046C290 004691D0  38 60 00 01 */	li r3, 1
/* 8046C294 004691D4  4E 80 00 20 */	blr 
.endfn isDemoScene__Q23PSM10Scene_DemoFv

.fn getSeSceneGate__Q23PSM12Scene_GlobalFPQ23PSM7ObjBaseUl, weak
/* 8046C298 004691D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C29C 004691DC  7C 08 02 A6 */	mflr r0
/* 8046C2A0 004691E0  3C 60 80 4A */	lis r3, lbl_8049D990@ha
/* 8046C2A4 004691E4  3C A0 80 4A */	lis r5, lbl_8049D92C@ha
/* 8046C2A8 004691E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C2AC 004691EC  38 63 D9 90 */	addi r3, r3, lbl_8049D990@l
/* 8046C2B0 004691F0  38 80 00 3F */	li r4, 0x3f
/* 8046C2B4 004691F4  38 A5 D9 2C */	addi r5, r5, lbl_8049D92C@l
/* 8046C2B8 004691F8  4C C6 31 82 */	crclr 6
/* 8046C2BC 004691FC  4B BB E3 85 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8046C2C0 00469200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C2C4 00469204  38 60 00 00 */	li r3, 0
/* 8046C2C8 00469208  7C 08 03 A6 */	mtlr r0
/* 8046C2CC 0046920C  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C2D0 00469210  4E 80 00 20 */	blr 
.endfn getSeSceneGate__Q23PSM12Scene_GlobalFPQ23PSM7ObjBaseUl

.section .text, "ax", unique, 3
.fn __dt__Q23PSM14Scene_WorldMapFv, weak
/* 8046C2D4 00469214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C2D8 00469218  7C 08 02 A6 */	mflr r0
/* 8046C2DC 0046921C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C2E0 00469220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C2E4 00469224  7C 9F 23 78 */	mr r31, r4
/* 8046C2E8 00469228  93 C1 00 08 */	stw r30, 8(r1)
/* 8046C2EC 0046922C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046C2F0 00469230  41 82 00 48 */	beq .L_8046C338
/* 8046C2F4 00469234  3C 80 80 4F */	lis r4, __vt__Q23PSM14Scene_WorldMap@ha
/* 8046C2F8 00469238  38 04 F2 C8 */	addi r0, r4, __vt__Q23PSM14Scene_WorldMap@l
/* 8046C2FC 0046923C  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C300 00469240  41 82 00 28 */	beq .L_8046C328
/* 8046C304 00469244  3C 80 80 4F */	lis r4, __vt__Q23PSM15Scene_NoObjects@ha
/* 8046C308 00469248  38 04 F2 74 */	addi r0, r4, __vt__Q23PSM15Scene_NoObjects@l
/* 8046C30C 0046924C  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C310 00469250  41 82 00 18 */	beq .L_8046C328
/* 8046C314 00469254  3C A0 80 4F */	lis r5, __vt__Q23PSM9SceneBase@ha
/* 8046C318 00469258  38 80 00 00 */	li r4, 0
/* 8046C31C 0046925C  38 05 F6 84 */	addi r0, r5, __vt__Q23PSM9SceneBase@l
/* 8046C320 00469260  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C324 00469264  4B EC 92 FD */	bl __dt__Q26PSGame8PikSceneFv
.L_8046C328:
/* 8046C328 00469268  7F E0 07 35 */	extsh. r0, r31
/* 8046C32C 0046926C  40 81 00 0C */	ble .L_8046C338
/* 8046C330 00469270  7F C3 F3 78 */	mr r3, r30
/* 8046C334 00469274  4B BB 7D 81 */	bl __dl__FPv
.L_8046C338:
/* 8046C338 00469278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C33C 0046927C  7F C3 F3 78 */	mr r3, r30
/* 8046C340 00469280  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C344 00469284  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046C348 00469288  7C 08 03 A6 */	mtlr r0
/* 8046C34C 0046928C  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C350 00469290  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM14Scene_WorldMapFv

.fn __dt__Q23PSM11Scene_ZukanFv, weak
/* 8046C354 00469294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C358 00469298  7C 08 02 A6 */	mflr r0
/* 8046C35C 0046929C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C360 004692A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C364 004692A4  7C 9F 23 78 */	mr r31, r4
/* 8046C368 004692A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8046C36C 004692AC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046C370 004692B0  41 82 00 DC */	beq .L_8046C44C
/* 8046C374 004692B4  3C 60 80 4F */	lis r3, __vt__Q23PSM11Scene_Zukan@ha
/* 8046C378 004692B8  38 03 F3 1C */	addi r0, r3, __vt__Q23PSM11Scene_Zukan@l
/* 8046C37C 004692BC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C380 004692C0  41 82 00 BC */	beq .L_8046C43C
/* 8046C384 004692C4  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 8046C388 004692C8  38 03 F5 84 */	addi r0, r3, __vt__Q23PSM13Scene_Objects@l
/* 8046C38C 004692CC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C390 004692D0  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C394 004692D4  28 03 00 00 */	cmplwi r3, 0
/* 8046C398 004692D8  41 82 00 18 */	beq .L_8046C3B0
/* 8046C39C 004692DC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046C3A0 004692E0  38 80 00 01 */	li r4, 1
/* 8046C3A4 004692E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046C3A8 004692E8  7D 89 03 A6 */	mtctr r12
/* 8046C3AC 004692EC  4E 80 04 21 */	bctrl 
.L_8046C3B0:
/* 8046C3B0 004692F0  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C3B4 004692F4  38 00 00 00 */	li r0, 0
/* 8046C3B8 004692F8  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C3BC 004692FC  28 03 00 00 */	cmplwi r3, 0
/* 8046C3C0 00469300  41 82 00 18 */	beq .L_8046C3D8
/* 8046C3C4 00469304  81 83 00 00 */	lwz r12, 0(r3)
/* 8046C3C8 00469308  38 80 00 01 */	li r4, 1
/* 8046C3CC 0046930C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046C3D0 00469310  7D 89 03 A6 */	mtctr r12
/* 8046C3D4 00469314  4E 80 04 21 */	bctrl 
.L_8046C3D8:
/* 8046C3D8 00469318  38 00 00 00 */	li r0, 0
/* 8046C3DC 0046931C  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C3E0 00469320  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8046C3E4 00469324  28 03 00 00 */	cmplwi r3, 0
/* 8046C3E8 00469328  41 82 00 0C */	beq .L_8046C3F4
/* 8046C3EC 0046932C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8046C3F0 00469330  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_8046C3F4:
/* 8046C3F4 00469334  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C3F8 00469338  28 03 00 00 */	cmplwi r3, 0
/* 8046C3FC 0046933C  41 82 00 18 */	beq .L_8046C414
/* 8046C400 00469340  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046C404 00469344  38 80 00 01 */	li r4, 1
/* 8046C408 00469348  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046C40C 0046934C  7D 89 03 A6 */	mtctr r12
/* 8046C410 00469350  4E 80 04 21 */	bctrl 
.L_8046C414:
/* 8046C414 00469354  38 00 00 00 */	li r0, 0
/* 8046C418 00469358  28 1E 00 00 */	cmplwi r30, 0
/* 8046C41C 0046935C  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C420 00469360  41 82 00 1C */	beq .L_8046C43C
/* 8046C424 00469364  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 8046C428 00469368  7F C3 F3 78 */	mr r3, r30
/* 8046C42C 0046936C  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 8046C430 00469370  38 80 00 00 */	li r4, 0
/* 8046C434 00469374  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C438 00469378  4B EC 91 E9 */	bl __dt__Q26PSGame8PikSceneFv
.L_8046C43C:
/* 8046C43C 0046937C  7F E0 07 35 */	extsh. r0, r31
/* 8046C440 00469380  40 81 00 0C */	ble .L_8046C44C
/* 8046C444 00469384  7F C3 F3 78 */	mr r3, r30
/* 8046C448 00469388  4B BB 7C 6D */	bl __dl__FPv
.L_8046C44C:
/* 8046C44C 0046938C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C450 00469390  7F C3 F3 78 */	mr r3, r30
/* 8046C454 00469394  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C458 00469398  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046C45C 0046939C  7C 08 03 A6 */	mtlr r0
/* 8046C460 004693A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C464 004693A4  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM11Scene_ZukanFv

.fn __dt__Q23PSM15Scene_ChallengeFv, weak
/* 8046C468 004693A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C46C 004693AC  7C 08 02 A6 */	mflr r0
/* 8046C470 004693B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C474 004693B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C478 004693B8  7C 9F 23 78 */	mr r31, r4
/* 8046C47C 004693BC  93 C1 00 08 */	stw r30, 8(r1)
/* 8046C480 004693C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8046C484 004693C4  41 82 01 50 */	beq .L_8046C5D4
/* 8046C488 004693C8  3C 60 80 4F */	lis r3, __vt__Q23PSM15Scene_Challenge@ha
/* 8046C48C 004693CC  38 03 F3 74 */	addi r0, r3, __vt__Q23PSM15Scene_Challenge@l
/* 8046C490 004693D0  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C494 004693D4  41 82 01 30 */	beq .L_8046C5C4
/* 8046C498 004693D8  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Cave@ha
/* 8046C49C 004693DC  38 03 F3 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Cave@l
/* 8046C4A0 004693E0  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C4A4 004693E4  41 82 01 20 */	beq .L_8046C5C4
/* 8046C4A8 004693E8  3C 60 80 4F */	lis r3, __vt__Q23PSM10Scene_Game@ha
/* 8046C4AC 004693EC  38 03 F4 E8 */	addi r0, r3, __vt__Q23PSM10Scene_Game@l
/* 8046C4B0 004693F0  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C4B4 004693F4  80 6D 91 B0 */	lwz r3, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046C4B8 004693F8  28 03 00 00 */	cmplwi r3, 0
/* 8046C4BC 004693FC  41 82 00 18 */	beq .L_8046C4D4
/* 8046C4C0 00469400  81 83 00 00 */	lwz r12, 0(r3)
/* 8046C4C4 00469404  38 80 00 01 */	li r4, 1
/* 8046C4C8 00469408  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046C4CC 0046940C  7D 89 03 A6 */	mtctr r12
/* 8046C4D0 00469410  4E 80 04 21 */	bctrl 
.L_8046C4D4:
/* 8046C4D4 00469414  38 00 00 00 */	li r0, 0
/* 8046C4D8 00469418  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046C4DC 0046941C  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8046C4E0 00469420  28 03 00 00 */	cmplwi r3, 0
/* 8046C4E4 00469424  41 82 00 0C */	beq .L_8046C4F0
/* 8046C4E8 00469428  38 80 00 01 */	li r4, 1
/* 8046C4EC 0046942C  4B ED 47 8D */	bl setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc
.L_8046C4F0:
/* 8046C4F0 00469430  34 1E 00 38 */	addic. r0, r30, 0x38
/* 8046C4F4 00469434  41 82 00 10 */	beq .L_8046C504
/* 8046C4F8 00469438  38 7E 00 38 */	addi r3, r30, 0x38
/* 8046C4FC 0046943C  38 80 00 00 */	li r4, 0
/* 8046C500 00469440  4B BB A3 69 */	bl __dt__10JSUPtrListFv
.L_8046C504:
/* 8046C504 00469444  28 1E 00 00 */	cmplwi r30, 0
/* 8046C508 00469448  41 82 00 BC */	beq .L_8046C5C4
/* 8046C50C 0046944C  3C 60 80 4F */	lis r3, __vt__Q23PSM13Scene_Objects@ha
/* 8046C510 00469450  38 03 F5 84 */	addi r0, r3, __vt__Q23PSM13Scene_Objects@l
/* 8046C514 00469454  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C518 00469458  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C51C 0046945C  28 03 00 00 */	cmplwi r3, 0
/* 8046C520 00469460  41 82 00 18 */	beq .L_8046C538
/* 8046C524 00469464  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046C528 00469468  38 80 00 01 */	li r4, 1
/* 8046C52C 0046946C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046C530 00469470  7D 89 03 A6 */	mtctr r12
/* 8046C534 00469474  4E 80 04 21 */	bctrl 
.L_8046C538:
/* 8046C538 00469478  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C53C 0046947C  38 00 00 00 */	li r0, 0
/* 8046C540 00469480  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C544 00469484  28 03 00 00 */	cmplwi r3, 0
/* 8046C548 00469488  41 82 00 18 */	beq .L_8046C560
/* 8046C54C 0046948C  81 83 00 00 */	lwz r12, 0(r3)
/* 8046C550 00469490  38 80 00 01 */	li r4, 1
/* 8046C554 00469494  81 8C 00 08 */	lwz r12, 8(r12)
/* 8046C558 00469498  7D 89 03 A6 */	mtctr r12
/* 8046C55C 0046949C  4E 80 04 21 */	bctrl 
.L_8046C560:
/* 8046C560 004694A0  38 00 00 00 */	li r0, 0
/* 8046C564 004694A4  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C568 004694A8  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8046C56C 004694AC  28 03 00 00 */	cmplwi r3, 0
/* 8046C570 004694B0  41 82 00 0C */	beq .L_8046C57C
/* 8046C574 004694B4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8046C578 004694B8  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_8046C57C:
/* 8046C57C 004694BC  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C580 004694C0  28 03 00 00 */	cmplwi r3, 0
/* 8046C584 004694C4  41 82 00 18 */	beq .L_8046C59C
/* 8046C588 004694C8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8046C58C 004694CC  38 80 00 01 */	li r4, 1
/* 8046C590 004694D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8046C594 004694D4  7D 89 03 A6 */	mtctr r12
/* 8046C598 004694D8  4E 80 04 21 */	bctrl 
.L_8046C59C:
/* 8046C59C 004694DC  38 00 00 00 */	li r0, 0
/* 8046C5A0 004694E0  28 1E 00 00 */	cmplwi r30, 0
/* 8046C5A4 004694E4  90 0D 91 BC */	stw r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8046C5A8 004694E8  41 82 00 1C */	beq .L_8046C5C4
/* 8046C5AC 004694EC  3C 80 80 4F */	lis r4, __vt__Q23PSM9SceneBase@ha
/* 8046C5B0 004694F0  7F C3 F3 78 */	mr r3, r30
/* 8046C5B4 004694F4  38 04 F6 84 */	addi r0, r4, __vt__Q23PSM9SceneBase@l
/* 8046C5B8 004694F8  38 80 00 00 */	li r4, 0
/* 8046C5BC 004694FC  90 1E 00 00 */	stw r0, 0(r30)
/* 8046C5C0 00469500  4B EC 90 61 */	bl __dt__Q26PSGame8PikSceneFv
.L_8046C5C4:
/* 8046C5C4 00469504  7F E0 07 35 */	extsh. r0, r31
/* 8046C5C8 00469508  40 81 00 0C */	ble .L_8046C5D4
/* 8046C5CC 0046950C  7F C3 F3 78 */	mr r3, r30
/* 8046C5D0 00469510  4B BB 7A E5 */	bl __dl__FPv
.L_8046C5D4:
/* 8046C5D4 00469514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C5D8 00469518  7F C3 F3 78 */	mr r3, r30
/* 8046C5DC 0046951C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C5E0 00469520  83 C1 00 08 */	lwz r30, 8(r1)
/* 8046C5E4 00469524  7C 08 03 A6 */	mtlr r0
/* 8046C5E8 00469528  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C5EC 0046952C  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM15Scene_ChallengeFv

.section .text, "ax", unique, 4
.fn "__dt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>Fv", weak
/* 8046C5F0 00469530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C5F4 00469534  7C 08 02 A6 */	mflr r0
/* 8046C5F8 00469538  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C5FC 0046953C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C600 00469540  7C 7F 1B 79 */	or. r31, r3, r3
/* 8046C604 00469544  41 82 00 24 */	beq .L_8046C628
/* 8046C608 00469548  3C A0 80 4F */	lis r5, "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@ha
/* 8046C60C 0046954C  7C 80 07 35 */	extsh. r0, r4
/* 8046C610 00469550  38 85 F4 D0 */	addi r4, r5, "__vt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@l
/* 8046C614 00469554  38 00 00 00 */	li r0, 0
/* 8046C618 00469558  90 9F 00 00 */	stw r4, 0(r31)
/* 8046C61C 0046955C  90 0D 91 B0 */	stw r0, "sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
/* 8046C620 00469560  40 81 00 08 */	ble .L_8046C628
/* 8046C624 00469564  4B BB 7A 91 */	bl __dl__FPv
.L_8046C628:
/* 8046C628 00469568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C62C 0046956C  7F E3 FB 78 */	mr r3, r31
/* 8046C630 00469570  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C634 00469574  7C 08 03 A6 */	mtlr r0
/* 8046C638 00469578  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C63C 0046957C  4E 80 00 20 */	blr 
.endfn "__dt__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>Fv"

.fn "__dt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>Fv", weak
/* 8046C640 00469580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8046C644 00469584  7C 08 02 A6 */	mflr r0
/* 8046C648 00469588  90 01 00 14 */	stw r0, 0x14(r1)
/* 8046C64C 0046958C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8046C650 00469590  7C 7F 1B 79 */	or. r31, r3, r3
/* 8046C654 00469594  41 82 00 24 */	beq .L_8046C678
/* 8046C658 00469598  3C A0 80 4F */	lis r5, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@ha
/* 8046C65C 0046959C  7C 80 07 35 */	extsh. r0, r4
/* 8046C660 004695A0  38 85 F5 5C */	addi r4, r5, "__vt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@l
/* 8046C664 004695A4  38 00 00 00 */	li r0, 0
/* 8046C668 004695A8  90 9F 00 00 */	stw r4, 0(r31)
/* 8046C66C 004695AC  90 0D 91 B4 */	stw r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8046C670 004695B0  40 81 00 08 */	ble .L_8046C678
/* 8046C674 004695B4  4B BB 7A 41 */	bl __dl__FPv
.L_8046C678:
/* 8046C678 004695B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8046C67C 004695BC  7F E3 FB 78 */	mr r3, r31
/* 8046C680 004695C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046C684 004695C4  7C 08 03 A6 */	mtlr r0
/* 8046C688 004695C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8046C68C 004695CC  4E 80 00 20 */	blr 
.endfn "__dt__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>Fv"

.fn __sinit_PSMainSide_Scene_cpp, local
/* 8046C690 004695D0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8046C694 004695D4  38 00 FF FF */	li r0, -1
/* 8046C698 004695D8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8046C69C 004695DC  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8046C6A0 004695E0  90 0D 9C 98 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8046C6A4 004695E4  D4 03 F2 68 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8046C6A8 004695E8  D0 0D 9C 9C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8046C6AC 004695EC  D0 03 00 04 */	stfs f0, 4(r3)
/* 8046C6B0 004695F0  D0 03 00 08 */	stfs f0, 8(r3)
/* 8046C6B4 004695F4  4E 80 00 20 */	blr 
.endfn __sinit_PSMainSide_Scene_cpp
