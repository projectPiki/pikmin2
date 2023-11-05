.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_PSMainSide_Factory_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049CE68, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049CE68
.balign 4
.obj lbl_8049CE74, local
	.asciz "PSMainSide_Factory.cpp"
.endobj lbl_8049CE74
.balign 4
.obj lbl_8049CE8C, local
	.asciz "P2Assert"
.endobj lbl_8049CE8C
.balign 4
.obj lbl_8049CE98, local
	.asciz "PSGame.h"
.endobj lbl_8049CE98
.balign 4
.obj lbl_8049CEA4, local
	.asciz "PSScene.h"
.endobj lbl_8049CEA4
.balign 4
.obj lbl_8049CEB0, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_8049CEB0
.balign 4
.obj lbl_8049CED4, local
	.asciz "PSMainSide_Scene.h"
.endobj lbl_8049CED4
.balign 4
.obj lbl_8049CEE8, local
	.asciz "kuro_post.bms"
.endobj lbl_8049CEE8
.balign 4
.obj lbl_8049CEF8, local
	.asciz "PSCommon.h"
.endobj lbl_8049CEF8
.balign 4
.obj lbl_8049CF04, local
	.asciz "m_boss.bms"
.endobj lbl_8049CF04
.balign 4
.obj lbl_8049CF10, local
	.asciz "l_boss.bms"
.endobj lbl_8049CF10
.balign 4
.obj lbl_8049CF1C, local
	.asciz "battle_t.bms"
.endobj lbl_8049CF1C
.balign 4
.obj lbl_8049CF2C, local # these are structs of five floats
	.float 1500.0
	.float 479.0
	.float 707.0
	.float 808.0
	.float 1.0
.endobj lbl_8049CF2C
.obj lbl_8049CF40, local
	.float 1500.0
	.float 479.0
	.float 707.0
	.float 808.0
	.float 1.0
.endobj lbl_8049CF40
.obj lbl_8049CF54, local
	.float 1500.0
	.float 379.0
	.float 579.0
	.float 1031.0
	.float 0.9
.endobj lbl_8049CF54
.obj lbl_8049CF68, local
	.float 1500.0
	.float 479.0
	.float 707.0
	.float 808.0
	.float 1.0
.endobj lbl_8049CF68
.obj lbl_8049CF7C, local
	.float 1500.0
	.float 379.0
	.float 479.0
	.float 1131.0
	.float 1.0
.endobj lbl_8049CF7C
.balign 4
.obj lbl_8049CF90, local
	.4byte 0x97909094
	.4byte 0x88CA9275
	.4byte 0x41766F69
	.2byte 0x6400
.endobj lbl_8049CF90 # Shift-JIS "乱数位置Avoid"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804EE164, local
	.4byte .L_8045A578
	.4byte .L_8045A5CC
	.4byte .L_8045A5CC
	.4byte .L_8045A5CC
	.4byte .L_8045A5CC
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A5F4
	.4byte .L_8045A5F4
	.4byte .L_8045A5A0
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A618
	.4byte .L_8045A5CC
.endobj lbl_804EE164
.obj lbl_804EE1B8, local
	.4byte .L_8045AB94
	.4byte .L_8045AC24
	.4byte .L_8045ACB4
	.4byte .L_8045AD88
	.4byte .L_8045AE5C
	.4byte .L_8045AF30
	.4byte .L_8045B004
	.4byte .L_8045B0D8
	.4byte .L_8045B1AC
	.4byte .L_8045B280
	.4byte .L_8045B354
	.4byte .L_8045B428
	.4byte .L_8045B4FC
	.4byte .L_8045B5D0
	.4byte .L_8045B6A4
.endobj lbl_804EE1B8
.obj lbl_804EE1F4, local
	.4byte .L_8045C8C8
	.4byte .L_8045C820
	.4byte .L_8045C8C8
	.4byte .L_8045C898
	.4byte .L_8045C8C8
	.4byte .L_8045C898
	.4byte .L_8045C898
	.4byte .L_8045C898
	.4byte .L_8045C838
	.4byte .L_8045C850
	.4byte .L_8045C868
	.4byte .L_8045C880
	.4byte .L_8045C8C8
.endobj lbl_804EE1F4
.obj __vt__Q23PSM10BigBossSeq, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM10BigBossSeqFv
	.4byte init__Q28PSSystem11DirectedBgmFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem10JumpBgmSeqFv
	.4byte stopSeq__Q28PSSystem11DirectedBgmFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem10JumpBgmSeqFv
	.4byte getSeqType__Q28PSSystem6BgmSeqFv
	.4byte exec__Q23PSM13MiddleBossSeqFv
	.4byte onPlayingFrame__Q28PSSystem10JumpBgmSeqFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem6BgmSeqFv
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
	.4byte newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv
	.4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
	.4byte getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv
	.4byte requestJumpBgmQuickly__Q23PSM13MiddleBossSeqFUs
	.4byte requestJumpBgmOnBeat__Q23PSM13MiddleBossSeqFUs
	.4byte requestJumpBgmEveryBeat__Q23PSM13MiddleBossSeqFUs
	.4byte outputJumpRequest__Q28PSSystem10JumpBgmSeqFv
	.4byte onJump__Q23PSM10BigBossSeqFUs
	.4byte jumpCheck__Q23PSM10BigBossSeqFUs
.endobj __vt__Q23PSM10BigBossSeq
.obj __vt__Q23PSM13MiddleBossSeq, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM13MiddleBossSeqFv
	.4byte init__Q28PSSystem11DirectedBgmFv
	.4byte scene1st__Q28PSSystem7SeqBaseFPQ28PSSystem11TaskChecker
	.4byte startSeq__Q28PSSystem10JumpBgmSeqFv
	.4byte stopSeq__Q28PSSystem11DirectedBgmFUl
	.4byte pauseOn__Q28PSSystem7SeqBaseFQ38PSSystem7SeqBase9PauseMode
	.4byte pauseOff__Q28PSSystem7SeqBaseFv
	.4byte getCastType__Q28PSSystem10JumpBgmSeqFv
	.4byte getSeqType__Q28PSSystem6BgmSeqFv
	.4byte exec__Q23PSM13MiddleBossSeqFv
	.4byte onPlayingFrame__Q28PSSystem10JumpBgmSeqFv
	.4byte isPlaying__Q28PSSystem7SeqBaseFv
	.4byte seqLoadAfter__Q28PSSystem7SeqBaseFv
	.4byte getHandleP__Q28PSSystem6BgmSeqFv
	.4byte setConfigVolume__Q28PSSystem7SeqBaseFv
	.4byte newSeqTrackRoot__Q28PSSystem10JumpBgmSeqFv
	.4byte newSeqTrackChild__Q28PSSystem11DirectedBgmFUcRQ28PSSystem12SeqTrackRoot
	.4byte getSeqStartPoint__Q28PSSystem10JumpBgmSeqFv
	.4byte requestJumpBgmQuickly__Q23PSM13MiddleBossSeqFUs
	.4byte requestJumpBgmOnBeat__Q23PSM13MiddleBossSeqFUs
	.4byte requestJumpBgmEveryBeat__Q23PSM13MiddleBossSeqFUs
	.4byte outputJumpRequest__Q28PSSystem10JumpBgmSeqFv
	.4byte onJump__Q23PSM13MiddleBossSeqFUs
	.4byte jumpCheck__Q23PSM13MiddleBossSeqFUs
.endobj __vt__Q23PSM13MiddleBossSeq
.obj __vt__Q23PSM8SceneMgr, global
	.4byte 0
	.4byte 0
	.4byte exec__Q28PSSystem8SceneMgrFv
	.4byte newAndSetCurrentScene__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfo
	.4byte newAndSetGlobalScene__Q26PSGame11PikSceneMgrFv
	.4byte newMainBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo
	.4byte newDirectedBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo
	.4byte newAutoBgm__Q23PSM8SceneMgrFPCcPCcRQ27JAInter9SoundInfoQ210JADUtility10AccessModeRQ26PSGame9SceneInfoPQ28PSSystem15DirectorMgrBase
	.4byte curSceneIsBigBossFloor__Q23PSM8SceneMgrFv
	.4byte newGameScene__Q23PSM8SceneMgrFUcPQ26PSGame9SceneInfo
.endobj __vt__Q23PSM8SceneMgr
.obj __vt__Q28PSSystem8SceneMgr, weak
	.4byte 0
	.4byte 0
	.4byte exec__Q28PSSystem8SceneMgrFv
.endobj __vt__Q28PSSystem8SceneMgr
.obj __vt__Q23PSM15EnvSeObjBuilder, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23PSM15EnvSeObjBuilderFv
	.4byte onBuild__Q23PSM15EnvSeObjBuilderFPQ28PSSystem9EnvSeBase
	.4byte newSeObj__Q23PSM15EnvSeObjBuilderFUlf3Vec
.endobj __vt__Q23PSM15EnvSeObjBuilder
.obj __vt__Q23PSM24EnvSe_Perspective_AvoidY, global
	.4byte 0
	.4byte 0
	.4byte exec__Q28PSSystem9EnvSeBaseFv
	.4byte play__Q23PSM24EnvSe_Perspective_AvoidYFv
	.4byte getCastType__Q23PSM24EnvSe_Perspective_AvoidYFv
	.4byte setPanAndDolby__Q28PSSystem9EnvSeBaseFP8JAISound
.endobj __vt__Q23PSM24EnvSe_Perspective_AvoidY
.obj __vt__Q23PSM12Env_Pollutin, global
	.4byte 0
	.4byte 0
	.4byte exec__Q28PSSystem9EnvSeBaseFv
	.4byte play__Q23PSM12Env_PollutinFv
	.4byte getCastType__Q23PSM12Env_PollutinFv
	.4byte setPanAndDolby__Q26PSGame13EnvSe_AutoPanFP8JAISound
.endobj __vt__Q23PSM12Env_Pollutin

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520C20, local
	.float 1.0
.endobj lbl_80520C20
.obj lbl_80520C24, local
	.float 0.0
.endobj lbl_80520C24
.obj lbl_80520C28, local
	.float 400.0
.endobj lbl_80520C28
.obj lbl_80520C2C, local
	.float 479.0
.endobj lbl_80520C2C
.obj lbl_80520C30, local
	.float 0.0018554
.endobj lbl_80520C30
.obj lbl_80520C34, local
	.float 8.554E-4
.endobj lbl_80520C34
.obj lbl_80520C38, local
	.float 0.5
.endobj lbl_80520C38
.obj lbl_80520C3C, local
	.float 379.0
.endobj lbl_80520C3C
.obj lbl_80520C40, local
	.float 0.28
.endobj lbl_80520C40
.obj lbl_80520C44, local
	.float 0.6
.endobj lbl_80520C44
.obj lbl_80520C48, local
	.float 10000.0
.endobj lbl_80520C48

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn play__Q23PSM12Env_PollutinFv, global
/* 80459BD4 00456B14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80459BD8 00456B18  7C 08 02 A6 */	mflr r0
/* 80459BDC 00456B1C  3C 80 80 4A */	lis r4, lbl_8049CE68@ha
/* 80459BE0 00456B20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80459BE4 00456B24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80459BE8 00456B28  7C 7F 1B 78 */	mr r31, r3
/* 80459BEC 00456B2C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80459BF0 00456B30  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80459BF4 00456B34  3B A4 CE 68 */	addi r29, r4, lbl_8049CE68@l
/* 80459BF8 00456B38  4B EE 70 41 */	bl play__Q28PSSystem9EnvSeBaseFv
/* 80459BFC 00456B3C  C0 02 28 C0 */	lfs f0, lbl_80520C20@sda21(r2)
/* 80459C00 00456B40  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80459C04 00456B44  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80459C08 00456B48  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80459C0C 00456B4C  41 82 02 1C */	beq .L_80459E28
/* 80459C10 00456B50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80459C14 00456B54  41 80 00 18 */	blt .L_80459C2C
/* 80459C18 00456B58  38 7D 00 0C */	addi r3, r29, 0xc
/* 80459C1C 00456B5C  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459C20 00456B60  38 80 00 4F */	li r4, 0x4f
/* 80459C24 00456B64  4C C6 31 82 */	crclr 6
/* 80459C28 00456B68  4B BD 0A 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459C2C:
/* 80459C2C 00456B6C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459C30 00456B70  28 00 00 00 */	cmplwi r0, 0
/* 80459C34 00456B74  40 82 00 18 */	bne .L_80459C4C
/* 80459C38 00456B78  38 7D 00 30 */	addi r3, r29, 0x30
/* 80459C3C 00456B7C  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459C40 00456B80  38 80 01 D3 */	li r4, 0x1d3
/* 80459C44 00456B84  4C C6 31 82 */	crclr 6
/* 80459C48 00456B88  4B BD 09 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459C4C:
/* 80459C4C 00456B8C  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80459C50 00456B90  28 1E 00 00 */	cmplwi r30, 0
/* 80459C54 00456B94  40 82 00 18 */	bne .L_80459C6C
/* 80459C58 00456B98  38 7D 00 30 */	addi r3, r29, 0x30
/* 80459C5C 00456B9C  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459C60 00456BA0  38 80 01 DC */	li r4, 0x1dc
/* 80459C64 00456BA4  4C C6 31 82 */	crclr 6
/* 80459C68 00456BA8  4B BD 09 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459C6C:
/* 80459C6C 00456BAC  80 1E 00 04 */	lwz r0, 4(r30)
/* 80459C70 00456BB0  28 00 00 00 */	cmplwi r0, 0
/* 80459C74 00456BB4  40 82 00 18 */	bne .L_80459C8C
/* 80459C78 00456BB8  38 7D 00 3C */	addi r3, r29, 0x3c
/* 80459C7C 00456BBC  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459C80 00456BC0  38 80 00 C7 */	li r4, 0xc7
/* 80459C84 00456BC4  4C C6 31 82 */	crclr 6
/* 80459C88 00456BC8  4B BD 09 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459C8C:
/* 80459C8C 00456BCC  80 7E 00 04 */	lwz r3, 4(r30)
/* 80459C90 00456BD0  80 63 00 04 */	lwz r3, 4(r3)
/* 80459C94 00456BD4  28 03 00 00 */	cmplwi r3, 0
/* 80459C98 00456BD8  40 82 00 0C */	bne .L_80459CA4
/* 80459C9C 00456BDC  3B C0 00 00 */	li r30, 0
/* 80459CA0 00456BE0  48 00 00 0C */	b .L_80459CAC
.L_80459CA4:
/* 80459CA4 00456BE4  4B ED B9 DD */	bl getMiddleBossBgm__Q26PSGame8PikSceneFv
/* 80459CA8 00456BE8  7C 7E 1B 78 */	mr r30, r3
.L_80459CAC:
/* 80459CAC 00456BEC  28 1E 00 00 */	cmplwi r30, 0
/* 80459CB0 00456BF0  41 82 00 78 */	beq .L_80459D28
/* 80459CB4 00456BF4  7F C3 F3 78 */	mr r3, r30
/* 80459CB8 00456BF8  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 80459CBC 00456BFC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80459CC0 00456C00  7D 89 03 A6 */	mtctr r12
/* 80459CC4 00456C04  4E 80 04 21 */	bctrl 
/* 80459CC8 00456C08  80 03 00 00 */	lwz r0, 0(r3)
/* 80459CCC 00456C0C  28 00 00 00 */	cmplwi r0, 0
/* 80459CD0 00456C10  41 82 00 58 */	beq .L_80459D28
/* 80459CD4 00456C14  7F C3 F3 78 */	mr r3, r30
/* 80459CD8 00456C18  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 80459CDC 00456C1C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80459CE0 00456C20  7D 89 03 A6 */	mtctr r12
/* 80459CE4 00456C24  4E 80 04 21 */	bctrl 
/* 80459CE8 00456C28  80 63 00 00 */	lwz r3, 0(r3)
/* 80459CEC 00456C2C  38 80 00 00 */	li r4, 0
/* 80459CF0 00456C30  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80459CF4 00456C34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80459CF8 00456C38  7D 89 03 A6 */	mtctr r12
/* 80459CFC 00456C3C  4E 80 04 21 */	bctrl 
/* 80459D00 00456C40  C0 42 28 C4 */	lfs f2, lbl_80520C24@sda21(r2)
/* 80459D04 00456C44  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80459D08 00456C48  40 81 01 20 */	ble .L_80459E28
/* 80459D0C 00456C4C  C0 62 28 C0 */	lfs f3, lbl_80520C20@sda21(r2)
/* 80459D10 00456C50  38 60 00 01 */	li r3, 1
/* 80459D14 00456C54  C0 BF 00 50 */	lfs f5, 0x50(r31)
/* 80459D18 00456C58  FC 80 18 90 */	fmr f4, f3
/* 80459D1C 00456C5C  4B C6 05 29 */	bl linearTransform__7JALCalcFfffffb
/* 80459D20 00456C60  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 80459D24 00456C64  48 00 01 04 */	b .L_80459E28
.L_80459D28:
/* 80459D28 00456C68  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459D2C 00456C6C  28 00 00 00 */	cmplwi r0, 0
/* 80459D30 00456C70  40 82 00 18 */	bne .L_80459D48
/* 80459D34 00456C74  38 7D 00 30 */	addi r3, r29, 0x30
/* 80459D38 00456C78  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459D3C 00456C7C  38 80 01 D3 */	li r4, 0x1d3
/* 80459D40 00456C80  4C C6 31 82 */	crclr 6
/* 80459D44 00456C84  4B BD 08 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459D48:
/* 80459D48 00456C88  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80459D4C 00456C8C  28 1E 00 00 */	cmplwi r30, 0
/* 80459D50 00456C90  40 82 00 18 */	bne .L_80459D68
/* 80459D54 00456C94  38 7D 00 30 */	addi r3, r29, 0x30
/* 80459D58 00456C98  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459D5C 00456C9C  38 80 01 DC */	li r4, 0x1dc
/* 80459D60 00456CA0  4C C6 31 82 */	crclr 6
/* 80459D64 00456CA4  4B BD 08 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459D68:
/* 80459D68 00456CA8  80 1E 00 04 */	lwz r0, 4(r30)
/* 80459D6C 00456CAC  28 00 00 00 */	cmplwi r0, 0
/* 80459D70 00456CB0  40 82 00 18 */	bne .L_80459D88
/* 80459D74 00456CB4  38 7D 00 3C */	addi r3, r29, 0x3c
/* 80459D78 00456CB8  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459D7C 00456CBC  38 80 00 CF */	li r4, 0xcf
/* 80459D80 00456CC0  4C C6 31 82 */	crclr 6
/* 80459D84 00456CC4  4B BD 08 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459D88:
/* 80459D88 00456CC8  80 7E 00 04 */	lwz r3, 4(r30)
/* 80459D8C 00456CCC  83 C3 00 04 */	lwz r30, 4(r3)
/* 80459D90 00456CD0  28 1E 00 00 */	cmplwi r30, 0
/* 80459D94 00456CD4  40 82 00 18 */	bne .L_80459DAC
/* 80459D98 00456CD8  38 7D 00 3C */	addi r3, r29, 0x3c
/* 80459D9C 00456CDC  38 BD 00 48 */	addi r5, r29, 0x48
/* 80459DA0 00456CE0  38 80 00 D1 */	li r4, 0xd1
/* 80459DA4 00456CE4  4C C6 31 82 */	crclr 6
/* 80459DA8 00456CE8  4B BD 08 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459DAC:
/* 80459DAC 00456CEC  7F C3 F3 78 */	mr r3, r30
/* 80459DB0 00456CF0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80459DB4 00456CF4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80459DB8 00456CF8  7D 89 03 A6 */	mtctr r12
/* 80459DBC 00456CFC  4E 80 04 21 */	bctrl 
/* 80459DC0 00456D00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80459DC4 00456D04  40 82 00 18 */	bne .L_80459DDC
/* 80459DC8 00456D08  38 7D 00 6C */	addi r3, r29, 0x6c
/* 80459DCC 00456D0C  38 BD 00 24 */	addi r5, r29, 0x24
/* 80459DD0 00456D10  38 80 01 77 */	li r4, 0x177
/* 80459DD4 00456D14  4C C6 31 82 */	crclr 6
/* 80459DD8 00456D18  4B BD 08 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459DDC:
/* 80459DDC 00456D1C  38 7E 00 10 */	addi r3, r30, 0x10
/* 80459DE0 00456D20  38 80 00 01 */	li r4, 1
/* 80459DE4 00456D24  4B ED A0 B9 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 80459DE8 00456D28  7C 7E 1B 79 */	or. r30, r3, r3
/* 80459DEC 00456D2C  41 82 00 3C */	beq .L_80459E28
/* 80459DF0 00456D30  81 83 00 10 */	lwz r12, 0x10(r3)
/* 80459DF4 00456D34  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80459DF8 00456D38  7D 89 03 A6 */	mtctr r12
/* 80459DFC 00456D3C  4E 80 04 21 */	bctrl 
/* 80459E00 00456D40  80 03 00 00 */	lwz r0, 0(r3)
/* 80459E04 00456D44  28 00 00 00 */	cmplwi r0, 0
/* 80459E08 00456D48  41 82 00 20 */	beq .L_80459E28
/* 80459E0C 00456D4C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80459E10 00456D50  38 9D 00 80 */	addi r4, r29, 0x80
/* 80459E14 00456D54  4B C7 08 AD */	bl strcmp
/* 80459E18 00456D58  2C 03 00 00 */	cmpwi r3, 0
/* 80459E1C 00456D5C  40 82 00 0C */	bne .L_80459E28
/* 80459E20 00456D60  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80459E24 00456D64  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_80459E28:
/* 80459E28 00456D68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80459E2C 00456D6C  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 80459E30 00456D70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80459E34 00456D74  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80459E38 00456D78  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80459E3C 00456D7C  7C 08 03 A6 */	mtlr r0
/* 80459E40 00456D80  38 21 00 20 */	addi r1, r1, 0x20
/* 80459E44 00456D84  4E 80 00 20 */	blr 
.endfn play__Q23PSM12Env_PollutinFv

.fn play__Q23PSM24EnvSe_Perspective_AvoidYFv, global
/* 80459E48 00456D88  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80459E4C 00456D8C  7C 08 02 A6 */	mflr r0
/* 80459E50 00456D90  90 01 00 64 */	stw r0, 0x64(r1)
/* 80459E54 00456D94  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80459E58 00456D98  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80459E5C 00456D9C  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80459E60 00456DA0  7C 7F 1B 78 */	mr r31, r3
/* 80459E64 00456DA4  3C 80 80 4A */	lis r4, lbl_8049CE68@ha
/* 80459E68 00456DA8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80459E6C 00456DAC  3B C4 CE 68 */	addi r30, r4, lbl_8049CE68@l
/* 80459E70 00456DB0  3B 80 00 01 */	li r28, 1
/* 80459E74 00456DB4  4B D0 0D AD */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80459E78 00456DB8  7C 7B 1B 79 */	or. r27, r3, r3
/* 80459E7C 00456DBC  40 82 00 08 */	bne .L_80459E84
/* 80459E80 00456DC0  3B 80 00 00 */	li r28, 0
.L_80459E84:
/* 80459E84 00456DC4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80459E88 00456DC8  28 00 00 00 */	cmplwi r0, 0
/* 80459E8C 00456DCC  40 82 00 18 */	bne .L_80459EA4
/* 80459E90 00456DD0  38 7E 00 30 */	addi r3, r30, 0x30
/* 80459E94 00456DD4  38 BE 00 24 */	addi r5, r30, 0x24
/* 80459E98 00456DD8  38 80 01 D3 */	li r4, 0x1d3
/* 80459E9C 00456DDC  4C C6 31 82 */	crclr 6
/* 80459EA0 00456DE0  4B BD 07 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459EA4:
/* 80459EA4 00456DE4  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 80459EA8 00456DE8  28 1D 00 00 */	cmplwi r29, 0
/* 80459EAC 00456DEC  40 82 00 18 */	bne .L_80459EC4
/* 80459EB0 00456DF0  38 7E 00 30 */	addi r3, r30, 0x30
/* 80459EB4 00456DF4  38 BE 00 24 */	addi r5, r30, 0x24
/* 80459EB8 00456DF8  38 80 01 DC */	li r4, 0x1dc
/* 80459EBC 00456DFC  4C C6 31 82 */	crclr 6
/* 80459EC0 00456E00  4B BD 07 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459EC4:
/* 80459EC4 00456E04  80 1D 00 04 */	lwz r0, 4(r29)
/* 80459EC8 00456E08  28 00 00 00 */	cmplwi r0, 0
/* 80459ECC 00456E0C  40 82 00 18 */	bne .L_80459EE4
/* 80459ED0 00456E10  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80459ED4 00456E14  38 BE 00 24 */	addi r5, r30, 0x24
/* 80459ED8 00456E18  38 80 00 CF */	li r4, 0xcf
/* 80459EDC 00456E1C  4C C6 31 82 */	crclr 6
/* 80459EE0 00456E20  4B BD 07 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459EE4:
/* 80459EE4 00456E24  80 7D 00 04 */	lwz r3, 4(r29)
/* 80459EE8 00456E28  83 A3 00 04 */	lwz r29, 4(r3)
/* 80459EEC 00456E2C  28 1D 00 00 */	cmplwi r29, 0
/* 80459EF0 00456E30  40 82 00 18 */	bne .L_80459F08
/* 80459EF4 00456E34  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80459EF8 00456E38  38 BE 00 48 */	addi r5, r30, 0x48
/* 80459EFC 00456E3C  38 80 00 D1 */	li r4, 0xd1
/* 80459F00 00456E40  4C C6 31 82 */	crclr 6
/* 80459F04 00456E44  4B BD 07 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80459F08:
/* 80459F08 00456E48  7F A3 EB 78 */	mr r3, r29
/* 80459F0C 00456E4C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80459F10 00456E50  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80459F14 00456E54  7D 89 03 A6 */	mtctr r12
/* 80459F18 00456E58  4E 80 04 21 */	bctrl 
/* 80459F1C 00456E5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80459F20 00456E60  41 82 00 08 */	beq .L_80459F28
/* 80459F24 00456E64  48 00 00 08 */	b .L_80459F2C
.L_80459F28:
/* 80459F28 00456E68  3B A0 00 00 */	li r29, 0
.L_80459F2C:
/* 80459F2C 00456E6C  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80459F30 00456E70  80 7D 00 58 */	lwz r3, 0x58(r29)
/* 80459F34 00456E74  41 82 01 74 */	beq .L_8045A0A8
/* 80459F38 00456E78  28 03 00 00 */	cmplwi r3, 0
/* 80459F3C 00456E7C  41 82 01 6C */	beq .L_8045A0A8
/* 80459F40 00456E80  7F E4 FB 78 */	mr r4, r31
/* 80459F44 00456E84  48 00 2B 39 */	bl playOk__Q23PSM14PersEnvManagerFPQ23PSM24EnvSe_Perspective_AvoidY
/* 80459F48 00456E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80459F4C 00456E8C  41 82 01 5C */	beq .L_8045A0A8
/* 80459F50 00456E90  7F 64 DB 78 */	mr r4, r27
/* 80459F54 00456E94  38 61 00 20 */	addi r3, r1, 0x20
/* 80459F58 00456E98  81 9B 00 00 */	lwz r12, 0(r27)
/* 80459F5C 00456E9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80459F60 00456EA0  7D 89 03 A6 */	mtctr r12
/* 80459F64 00456EA4  4E 80 04 21 */	bctrl 
/* 80459F68 00456EA8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80459F6C 00456EAC  7F 64 DB 78 */	mr r4, r27
/* 80459F70 00456EB0  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 80459F74 00456EB4  38 61 00 14 */	addi r3, r1, 0x14
/* 80459F78 00456EB8  EC 00 08 2A */	fadds f0, f0, f1
/* 80459F7C 00456EBC  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 80459F80 00456EC0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80459F84 00456EC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80459F88 00456EC8  7D 89 03 A6 */	mtctr r12
/* 80459F8C 00456ECC  4E 80 04 21 */	bctrl 
/* 80459F90 00456ED0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80459F94 00456ED4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80459F98 00456ED8  D0 21 00 08 */	stfs f1, 8(r1)
/* 80459F9C 00456EDC  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 80459FA0 00456EE0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80459FA4 00456EE4  80 61 00 08 */	lwz r3, 8(r1)
/* 80459FA8 00456EE8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80459FAC 00456EEC  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80459FB0 00456EF0  C0 7F 00 3C */	lfs f3, 0x3c(r31)
/* 80459FB4 00456EF4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80459FB8 00456EF8  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80459FBC 00456EFC  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 80459FC0 00456F00  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80459FC4 00456F04  EC 43 10 28 */	fsubs f2, f3, f2
/* 80459FC8 00456F08  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80459FCC 00456F0C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80459FD0 00456F10  C0 02 28 C4 */	lfs f0, lbl_80520C24@sda21(r2)
/* 80459FD4 00456F14  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80459FD8 00456F18  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80459FDC 00456F1C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80459FE0 00456F20  90 01 00 30 */	stw r0, 0x30(r1)
/* 80459FE4 00456F24  EF E2 08 2A */	fadds f31, f2, f1
/* 80459FE8 00456F28  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80459FEC 00456F2C  40 81 00 0C */	ble .L_80459FF8
/* 80459FF0 00456F30  FC 00 F8 34 */	frsqrte f0, f31
/* 80459FF4 00456F34  EF E0 07 F2 */	fmuls f31, f0, f31
.L_80459FF8:
/* 80459FF8 00456F38  80 0D 91 B4 */	lwz r0, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 80459FFC 00456F3C  28 00 00 00 */	cmplwi r0, 0
/* 8045A000 00456F40  40 82 00 18 */	bne .L_8045A018
/* 8045A004 00456F44  38 7E 00 90 */	addi r3, r30, 0x90
/* 8045A008 00456F48  38 BE 00 24 */	addi r5, r30, 0x24
/* 8045A00C 00456F4C  38 80 00 89 */	li r4, 0x89
/* 8045A010 00456F50  4C C6 31 82 */	crclr 6
/* 8045A014 00456F54  4B BD 06 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045A018:
/* 8045A018 00456F58  80 6D 91 B4 */	lwz r3, "sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13)
/* 8045A01C 00456F5C  38 9F 00 3C */	addi r4, r31, 0x3c
/* 8045A020 00456F60  81 83 00 00 */	lwz r12, 0(r3)
/* 8045A024 00456F64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8045A028 00456F68  7D 89 03 A6 */	mtctr r12
/* 8045A02C 00456F6C  4E 80 04 21 */	bctrl 
/* 8045A030 00456F70  7C 69 1B 78 */	mr r9, r3
/* 8045A034 00456F74  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8045A038 00456F78  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8045A03C 00456F7C  38 BF 00 34 */	addi r5, r31, 0x34
/* 8045A040 00456F80  38 DF 00 3C */	addi r6, r31, 0x3c
/* 8045A044 00456F84  38 E0 00 00 */	li r7, 0
/* 8045A048 00456F88  39 00 00 00 */	li r8, 0
/* 8045A04C 00456F8C  4B BB B8 21 */	bl "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
/* 8045A050 00456F90  C0 7F 00 54 */	lfs f3, 0x54(r31)
/* 8045A054 00456F94  FC 1F 18 40 */	fcmpo cr0, f31, f3
/* 8045A058 00456F98  40 80 00 20 */	bge .L_8045A078
/* 8045A05C 00456F9C  FC 20 F8 90 */	fmr f1, f31
/* 8045A060 00456FA0  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 8045A064 00456FA4  C0 82 28 C4 */	lfs f4, lbl_80520C24@sda21(r2)
/* 8045A068 00456FA8  38 60 00 01 */	li r3, 1
/* 8045A06C 00456FAC  C0 BF 00 5C */	lfs f5, 0x5c(r31)
/* 8045A070 00456FB0  4B C6 01 D5 */	bl linearTransform__7JALCalcFfffffb
/* 8045A074 00456FB4  48 00 00 30 */	b .L_8045A0A4
.L_8045A078:
/* 8045A078 00456FB8  C0 5F 00 58 */	lfs f2, 0x58(r31)
/* 8045A07C 00456FBC  FC 1F 10 40 */	fcmpo cr0, f31, f2
/* 8045A080 00456FC0  40 80 00 0C */	bge .L_8045A08C
/* 8045A084 00456FC4  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 8045A088 00456FC8  48 00 00 1C */	b .L_8045A0A4
.L_8045A08C:
/* 8045A08C 00456FCC  FC 20 F8 90 */	fmr f1, f31
/* 8045A090 00456FD0  C0 7F 00 4C */	lfs f3, 0x4c(r31)
/* 8045A094 00456FD4  C0 9F 00 5C */	lfs f4, 0x5c(r31)
/* 8045A098 00456FD8  38 60 00 01 */	li r3, 1
/* 8045A09C 00456FDC  C0 A2 28 C4 */	lfs f5, lbl_80520C24@sda21(r2)
/* 8045A0A0 00456FE0  4B C6 01 A5 */	bl linearTransform__7JALCalcFfffffb
.L_8045A0A4:
/* 8045A0A4 00456FE4  D0 3F 00 28 */	stfs f1, 0x28(r31)
.L_8045A0A8:
/* 8045A0A8 00456FE8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8045A0AC 00456FEC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8045A0B0 00456FF0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8045A0B4 00456FF4  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8045A0B8 00456FF8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8045A0BC 00456FFC  7C 08 03 A6 */	mtlr r0
/* 8045A0C0 00457000  38 21 00 60 */	addi r1, r1, 0x60
/* 8045A0C4 00457004  4E 80 00 20 */	blr 
.endfn play__Q23PSM24EnvSe_Perspective_AvoidYFv

.fn newSeObj__Q23PSM15EnvSeObjBuilderFUlf3Vec, global
/* 8045A0C8 00457008  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8045A0CC 0045700C  7C 08 02 A6 */	mflr r0
/* 8045A0D0 00457010  90 01 00 44 */	stw r0, 0x44(r1)
/* 8045A0D4 00457014  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8045A0D8 00457018  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8045A0DC 0045701C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8045A0E0 00457020  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8045A0E4 00457024  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8045A0E8 00457028  FF E0 08 90 */	fmr f31, f1
/* 8045A0EC 0045702C  7C 9D 23 78 */	mr r29, r4
/* 8045A0F0 00457030  7C BE 2B 78 */	mr r30, r5
/* 8045A0F4 00457034  38 60 00 60 */	li r3, 0x60
/* 8045A0F8 00457038  4B BC 9D AD */	bl __nw__FUl
/* 8045A0FC 0045703C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8045A100 00457040  41 82 00 40 */	beq .L_8045A140
/* 8045A104 00457044  80 FE 00 00 */	lwz r7, 0(r30)
/* 8045A108 00457048  FC 20 F8 90 */	fmr f1, f31
/* 8045A10C 0045704C  80 DE 00 04 */	lwz r6, 4(r30)
/* 8045A110 00457050  7F A4 EB 78 */	mr r4, r29
/* 8045A114 00457054  80 1E 00 08 */	lwz r0, 8(r30)
/* 8045A118 00457058  38 A1 00 08 */	addi r5, r1, 8
/* 8045A11C 0045705C  90 E1 00 08 */	stw r7, 8(r1)
/* 8045A120 00457060  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8045A124 00457064  90 01 00 10 */	stw r0, 0x10(r1)
/* 8045A128 00457068  4B EE 5D 8D */	bl __ct__Q26PSGame17EnvSe_PerspectiveFUlf3Vec
/* 8045A12C 0045706C  3C 60 80 4F */	lis r3, __vt__Q23PSM24EnvSe_Perspective_AvoidY@ha
/* 8045A130 00457070  C0 02 28 C8 */	lfs f0, lbl_80520C28@sda21(r2)
/* 8045A134 00457074  38 03 E3 40 */	addi r0, r3, __vt__Q23PSM24EnvSe_Perspective_AvoidY@l
/* 8045A138 00457078  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8045A13C 0045707C  D0 1F 00 48 */	stfs f0, 0x48(r31)
.L_8045A140:
/* 8045A140 00457080  7F E3 FB 78 */	mr r3, r31
/* 8045A144 00457084  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8045A148 00457088  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8045A14C 0045708C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8045A150 00457090  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8045A154 00457094  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8045A158 00457098  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8045A15C 0045709C  7C 08 03 A6 */	mtlr r0
/* 8045A160 004570A0  38 21 00 40 */	addi r1, r1, 0x40
/* 8045A164 004570A4  4E 80 00 20 */	blr 
.endfn newSeObj__Q23PSM15EnvSeObjBuilderFUlf3Vec

.fn onBuild__Q23PSM15EnvSeObjBuilderFPQ28PSSystem9EnvSeBase, global
/* 8045A168 004570A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045A16C 004570AC  80 A3 00 50 */	lwz r5, 0x50(r3)
/* 8045A170 004570B0  80 03 00 54 */	lwz r0, 0x54(r3)
/* 8045A174 004570B4  90 A1 00 08 */	stw r5, 8(r1)
/* 8045A178 004570B8  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 8045A17C 004570BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8045A180 004570C0  80 A3 00 5C */	lwz r5, 0x5c(r3)
/* 8045A184 004570C4  80 03 00 60 */	lwz r0, 0x60(r3)
/* 8045A188 004570C8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8045A18C 004570CC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8045A190 004570D0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8045A194 004570D4  D0 04 00 4C */	stfs f0, 0x4c(r4)
/* 8045A198 004570D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8045A19C 004570DC  D0 24 00 50 */	stfs f1, 0x50(r4)
/* 8045A1A0 004570E0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8045A1A4 004570E4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8045A1A8 004570E8  D0 04 00 54 */	stfs f0, 0x54(r4)
/* 8045A1AC 004570EC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8045A1B0 004570F0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8045A1B4 004570F4  D0 24 00 58 */	stfs f1, 0x58(r4)
/* 8045A1B8 004570F8  D0 04 00 5C */	stfs f0, 0x5c(r4)
/* 8045A1BC 004570FC  38 21 00 20 */	addi r1, r1, 0x20
/* 8045A1C0 00457100  4E 80 00 20 */	blr 
.endfn onBuild__Q23PSM15EnvSeObjBuilderFPQ28PSSystem9EnvSeBase

.fn __ct__Q23PSM8SceneMgrFv, global
/* 8045A1C4 00457104  3C 80 80 4F */	lis r4, __vt__Q28PSSystem8SceneMgr@ha
/* 8045A1C8 00457108  3C A0 80 4E */	lis r5, __vt__Q26PSGame11PikSceneMgr@ha
/* 8045A1CC 0045710C  38 04 E3 20 */	addi r0, r4, __vt__Q28PSSystem8SceneMgr@l
/* 8045A1D0 00457110  3C 80 80 4F */	lis r4, __vt__Q23PSM8SceneMgr@ha
/* 8045A1D4 00457114  90 03 00 00 */	stw r0, 0(r3)
/* 8045A1D8 00457118  38 C0 00 00 */	li r6, 0
/* 8045A1DC 0045711C  38 A5 A9 C8 */	addi r5, r5, __vt__Q26PSGame11PikSceneMgr@l
/* 8045A1E0 00457120  38 04 E2 F8 */	addi r0, r4, __vt__Q23PSM8SceneMgr@l
/* 8045A1E4 00457124  90 C3 00 04 */	stw r6, 4(r3)
/* 8045A1E8 00457128  90 C3 00 08 */	stw r6, 8(r3)
/* 8045A1EC 0045712C  98 C3 00 0C */	stb r6, 0xc(r3)
/* 8045A1F0 00457130  90 A3 00 00 */	stw r5, 0(r3)
/* 8045A1F4 00457134  98 C3 00 10 */	stb r6, 0x10(r3)
/* 8045A1F8 00457138  90 03 00 00 */	stw r0, 0(r3)
/* 8045A1FC 0045713C  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM8SceneMgrFv

.fn newMainBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo, global
/* 8045A200 00457140  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045A204 00457144  7C 08 02 A6 */	mflr r0
/* 8045A208 00457148  38 60 00 88 */	li r3, 0x88
/* 8045A20C 0045714C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045A210 00457150  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8045A214 00457154  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8045A218 00457158  7C BE 2B 78 */	mr r30, r5
/* 8045A21C 0045715C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8045A220 00457160  7C 9D 23 78 */	mr r29, r4
/* 8045A224 00457164  4B BC 9C 81 */	bl __nw__FUl
/* 8045A228 00457168  7C 7F 1B 79 */	or. r31, r3, r3
/* 8045A22C 0045716C  41 82 00 14 */	beq .L_8045A240
/* 8045A230 00457170  38 80 00 00 */	li r4, 0
/* 8045A234 00457174  38 A0 00 08 */	li r5, 8
/* 8045A238 00457178  48 01 50 85 */	bl __ct__Q23PSM17DirectorMgr_SceneFPQ23PSM17DirectorMgr_SceneUc
/* 8045A23C 0045717C  7C 7F 1B 78 */	mr r31, r3
.L_8045A240:
/* 8045A240 00457180  38 60 01 34 */	li r3, 0x134
/* 8045A244 00457184  4B BC 9C 61 */	bl __nw__FUl
/* 8045A248 00457188  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A24C 0045718C  41 82 00 18 */	beq .L_8045A264
/* 8045A250 00457190  7F A4 EB 78 */	mr r4, r29
/* 8045A254 00457194  7F C5 F3 78 */	mr r5, r30
/* 8045A258 00457198  7F E6 FB 78 */	mr r6, r31
/* 8045A25C 0045719C  4B ED 8F D5 */	bl __ct__Q28PSSystem10JumpBgmSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8045A260 004571A0  7C 60 1B 78 */	mr r0, r3
.L_8045A264:
/* 8045A264 004571A4  28 00 00 00 */	cmplwi r0, 0
/* 8045A268 004571A8  7C 1E 03 78 */	mr r30, r0
/* 8045A26C 004571AC  40 82 00 20 */	bne .L_8045A28C
/* 8045A270 004571B0  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045A274 004571B4  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045A278 004571B8  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045A27C 004571BC  38 80 01 5D */	li r4, 0x15d
/* 8045A280 004571C0  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045A284 004571C4  4C C6 31 82 */	crclr 6
/* 8045A288 004571C8  4B BD 03 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045A28C:
/* 8045A28C 004571CC  7F C3 F3 78 */	mr r3, r30
/* 8045A290 004571D0  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 8045A294 004571D4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8045A298 004571D8  7D 89 03 A6 */	mtctr r12
/* 8045A29C 004571DC  4E 80 04 21 */	bctrl 
/* 8045A2A0 004571E0  7F E3 FB 78 */	mr r3, r31
/* 8045A2A4 004571E4  7F C4 F3 78 */	mr r4, r30
/* 8045A2A8 004571E8  48 01 53 79 */	bl initTrackMap__Q23PSM17DirectorMgr_SceneFRQ28PSSystem11DirectedBgm
/* 8045A2AC 004571EC  7F E3 FB 78 */	mr r3, r31
/* 8045A2B0 004571F0  7F C4 F3 78 */	mr r4, r30
/* 8045A2B4 004571F4  4B EE 96 1D */	bl initAndAdaptToBgm__Q28PSSystem15DirectorMgrBaseFRQ28PSSystem11DirectedBgm
/* 8045A2B8 004571F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045A2BC 004571FC  7F C3 F3 78 */	mr r3, r30
/* 8045A2C0 00457200  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8045A2C4 00457204  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8045A2C8 00457208  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8045A2CC 0045720C  7C 08 03 A6 */	mtlr r0
/* 8045A2D0 00457210  38 21 00 20 */	addi r1, r1, 0x20
/* 8045A2D4 00457214  4E 80 00 20 */	blr 
.endfn newMainBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo

.fn curSceneIsBigBossFloor__Q23PSM8SceneMgrFv, global
/* 8045A2D8 00457218  80 6D 9C 90 */	lwz r3, sBigBoss__Q23PSM12EnemyBigBoss@sda21(r13)
/* 8045A2DC 0045721C  7C 03 00 D0 */	neg r0, r3
/* 8045A2E0 00457220  7C 00 1B 78 */	or r0, r0, r3
/* 8045A2E4 00457224  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8045A2E8 00457228  4E 80 00 20 */	blr 
.endfn curSceneIsBigBossFloor__Q23PSM8SceneMgrFv

.fn newDirectedBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo, global
/* 8045A2EC 0045722C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045A2F0 00457230  7C 08 02 A6 */	mflr r0
/* 8045A2F4 00457234  3C 60 80 4A */	lis r3, lbl_8049CE68@ha
/* 8045A2F8 00457238  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045A2FC 0045723C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8045A300 00457240  7C 9E 23 78 */	mr r30, r4
/* 8045A304 00457244  3B A3 CE 68 */	addi r29, r3, lbl_8049CE68@l
/* 8045A308 00457248  7C BF 2B 78 */	mr r31, r5
/* 8045A30C 0045724C  7F C3 F3 78 */	mr r3, r30
/* 8045A310 00457250  3B 80 00 00 */	li r28, 0
/* 8045A314 00457254  38 9D 00 9C */	addi r4, r29, 0x9c
/* 8045A318 00457258  3B 60 00 00 */	li r27, 0
/* 8045A31C 0045725C  4B C7 03 A5 */	bl strcmp
/* 8045A320 00457260  2C 03 00 00 */	cmpwi r3, 0
/* 8045A324 00457264  40 82 00 4C */	bne .L_8045A370
/* 8045A328 00457268  38 60 00 24 */	li r3, 0x24
/* 8045A32C 0045726C  4B BC 9B 79 */	bl __nw__FUl
/* 8045A330 00457270  7C 7C 1B 79 */	or. r28, r3, r3
/* 8045A334 00457274  41 82 00 0C */	beq .L_8045A340
/* 8045A338 00457278  48 01 5E B9 */	bl __ct__Q23PSM18DirectorMgr_BattleFv
/* 8045A33C 0045727C  7C 7C 1B 78 */	mr r28, r3
.L_8045A340:
/* 8045A340 00457280  7F 9B E3 78 */	mr r27, r28
/* 8045A344 00457284  38 60 01 44 */	li r3, 0x144
/* 8045A348 00457288  4B BC 9B 5D */	bl __nw__FUl
/* 8045A34C 0045728C  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A350 00457290  41 82 00 18 */	beq .L_8045A368
/* 8045A354 00457294  7F C4 F3 78 */	mr r4, r30
/* 8045A358 00457298  7F E5 FB 78 */	mr r5, r31
/* 8045A35C 0045729C  7F 86 E3 78 */	mr r6, r28
/* 8045A360 004572A0  48 00 1F 31 */	bl __ct__Q23PSM13MiddleBossSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8045A364 004572A4  7C 60 1B 78 */	mr r0, r3
.L_8045A368:
/* 8045A368 004572A8  7C 1C 03 78 */	mr r28, r0
/* 8045A36C 004572AC  48 00 00 D0 */	b .L_8045A43C
.L_8045A370:
/* 8045A370 004572B0  7F C3 F3 78 */	mr r3, r30
/* 8045A374 004572B4  38 9D 00 A8 */	addi r4, r29, 0xa8
/* 8045A378 004572B8  4B C7 03 49 */	bl strcmp
/* 8045A37C 004572BC  2C 03 00 00 */	cmpwi r3, 0
/* 8045A380 004572C0  40 82 00 4C */	bne .L_8045A3CC
/* 8045A384 004572C4  38 60 00 24 */	li r3, 0x24
/* 8045A388 004572C8  4B BC 9B 1D */	bl __nw__FUl
/* 8045A38C 004572CC  7C 7C 1B 79 */	or. r28, r3, r3
/* 8045A390 004572D0  41 82 00 0C */	beq .L_8045A39C
/* 8045A394 004572D4  48 01 5E 5D */	bl __ct__Q23PSM18DirectorMgr_BattleFv
/* 8045A398 004572D8  7C 7C 1B 78 */	mr r28, r3
.L_8045A39C:
/* 8045A39C 004572DC  7F 9B E3 78 */	mr r27, r28
/* 8045A3A0 004572E0  38 60 01 44 */	li r3, 0x144
/* 8045A3A4 004572E4  4B BC 9B 01 */	bl __nw__FUl
/* 8045A3A8 004572E8  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A3AC 004572EC  41 82 00 18 */	beq .L_8045A3C4
/* 8045A3B0 004572F0  7F C4 F3 78 */	mr r4, r30
/* 8045A3B4 004572F4  7F E5 FB 78 */	mr r5, r31
/* 8045A3B8 004572F8  7F 86 E3 78 */	mr r6, r28
/* 8045A3BC 004572FC  48 00 23 31 */	bl __ct__Q23PSM10BigBossSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8045A3C0 00457300  7C 60 1B 78 */	mr r0, r3
.L_8045A3C4:
/* 8045A3C4 00457304  7C 1C 03 78 */	mr r28, r0
/* 8045A3C8 00457308  48 00 00 74 */	b .L_8045A43C
.L_8045A3CC:
/* 8045A3CC 0045730C  7F C3 F3 78 */	mr r3, r30
/* 8045A3D0 00457310  38 9D 00 B4 */	addi r4, r29, 0xb4
/* 8045A3D4 00457314  4B C7 02 ED */	bl strcmp
/* 8045A3D8 00457318  2C 03 00 00 */	cmpwi r3, 0
/* 8045A3DC 0045731C  40 82 00 4C */	bne .L_8045A428
/* 8045A3E0 00457320  38 60 00 24 */	li r3, 0x24
/* 8045A3E4 00457324  4B BC 9A C1 */	bl __nw__FUl
/* 8045A3E8 00457328  7C 7C 1B 79 */	or. r28, r3, r3
/* 8045A3EC 0045732C  41 82 00 0C */	beq .L_8045A3F8
/* 8045A3F0 00457330  48 01 60 95 */	bl __ct__Q23PSM20DirectorMgr_2PBattleFv
/* 8045A3F4 00457334  7C 7C 1B 78 */	mr r28, r3
.L_8045A3F8:
/* 8045A3F8 00457338  7F 9B E3 78 */	mr r27, r28
/* 8045A3FC 0045733C  38 60 00 B8 */	li r3, 0xb8
/* 8045A400 00457340  4B BC 9A A5 */	bl __nw__FUl
/* 8045A404 00457344  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A408 00457348  41 82 00 18 */	beq .L_8045A420
/* 8045A40C 0045734C  7F C4 F3 78 */	mr r4, r30
/* 8045A410 00457350  7F E5 FB 78 */	mr r5, r31
/* 8045A414 00457354  7F 86 E3 78 */	mr r6, r28
/* 8045A418 00457358  4B ED 84 99 */	bl __ct__Q28PSSystem11DirectedBgmFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8045A41C 0045735C  7C 60 1B 78 */	mr r0, r3
.L_8045A420:
/* 8045A420 00457360  7C 1C 03 78 */	mr r28, r0
/* 8045A424 00457364  48 00 00 18 */	b .L_8045A43C
.L_8045A428:
/* 8045A428 00457368  38 7D 00 0C */	addi r3, r29, 0xc
/* 8045A42C 0045736C  38 BD 00 24 */	addi r5, r29, 0x24
/* 8045A430 00457370  38 80 01 93 */	li r4, 0x193
/* 8045A434 00457374  4C C6 31 82 */	crclr 6
/* 8045A438 00457378  4B BD 02 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045A43C:
/* 8045A43C 0045737C  28 1B 00 00 */	cmplwi r27, 0
/* 8045A440 00457380  40 82 00 18 */	bne .L_8045A458
/* 8045A444 00457384  38 7D 00 0C */	addi r3, r29, 0xc
/* 8045A448 00457388  38 BD 00 24 */	addi r5, r29, 0x24
/* 8045A44C 0045738C  38 80 01 96 */	li r4, 0x196
/* 8045A450 00457390  4C C6 31 82 */	crclr 6
/* 8045A454 00457394  4B BD 01 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045A458:
/* 8045A458 00457398  28 1C 00 00 */	cmplwi r28, 0
/* 8045A45C 0045739C  40 82 00 18 */	bne .L_8045A474
/* 8045A460 004573A0  38 7D 00 0C */	addi r3, r29, 0xc
/* 8045A464 004573A4  38 BD 00 24 */	addi r5, r29, 0x24
/* 8045A468 004573A8  38 80 01 97 */	li r4, 0x197
/* 8045A46C 004573AC  4C C6 31 82 */	crclr 6
/* 8045A470 004573B0  4B BD 01 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045A474:
/* 8045A474 004573B4  7F 83 E3 78 */	mr r3, r28
/* 8045A478 004573B8  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8045A47C 004573BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8045A480 004573C0  7D 89 03 A6 */	mtctr r12
/* 8045A484 004573C4  4E 80 04 21 */	bctrl 
/* 8045A488 004573C8  7F 63 DB 78 */	mr r3, r27
/* 8045A48C 004573CC  7F 84 E3 78 */	mr r4, r28
/* 8045A490 004573D0  4B EE 94 41 */	bl initAndAdaptToBgm__Q28PSSystem15DirectorMgrBaseFRQ28PSSystem11DirectedBgm
/* 8045A494 004573D4  7F 83 E3 78 */	mr r3, r28
/* 8045A498 004573D8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8045A49C 004573DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045A4A0 004573E0  7C 08 03 A6 */	mtlr r0
/* 8045A4A4 004573E4  38 21 00 20 */	addi r1, r1, 0x20
/* 8045A4A8 004573E8  4E 80 00 20 */	blr 
.endfn newDirectedBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo

.fn newGameScene__Q23PSM8SceneMgrFUcPQ26PSGame9SceneInfo, global
/* 8045A4AC 004573EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045A4B0 004573F0  7C 08 02 A6 */	mflr r0
/* 8045A4B4 004573F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045A4B8 004573F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8045A4BC 004573FC  7C BF 2B 78 */	mr r31, r5
/* 8045A4C0 00457400  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8045A4C4 00457404  7C 9E 23 78 */	mr r30, r4
/* 8045A4C8 00457408  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8045A4CC 0045740C  3B A0 00 00 */	li r29, 0
/* 8045A4D0 00457410  88 05 00 06 */	lbz r0, 6(r5)
/* 8045A4D4 00457414  28 00 00 06 */	cmplwi r0, 6
/* 8045A4D8 00457418  41 82 00 10 */	beq .L_8045A4E8
/* 8045A4DC 0045741C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8045A4E0 00457420  28 00 00 07 */	cmplwi r0, 7
/* 8045A4E4 00457424  40 82 00 2C */	bne .L_8045A510
.L_8045A4E8:
/* 8045A4E8 00457428  38 60 00 68 */	li r3, 0x68
/* 8045A4EC 0045742C  4B BC 99 B9 */	bl __nw__FUl
/* 8045A4F0 00457430  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A4F4 00457434  41 82 00 14 */	beq .L_8045A508
/* 8045A4F8 00457438  7F C4 F3 78 */	mr r4, r30
/* 8045A4FC 0045743C  7F E5 FB 78 */	mr r5, r31
/* 8045A500 00457440  48 01 06 85 */	bl __ct__Q23PSM15Scene_ChallengeFUcPQ26PSGame9SceneInfo
/* 8045A504 00457444  7C 60 1B 78 */	mr r0, r3
.L_8045A508:
/* 8045A508 00457448  7C 1D 03 78 */	mr r29, r0
/* 8045A50C 0045744C  48 00 01 0C */	b .L_8045A618
.L_8045A510:
/* 8045A510 00457450  7F E3 FB 78 */	mr r3, r31
/* 8045A514 00457454  81 9F 00 00 */	lwz r12, 0(r31)
/* 8045A518 00457458  81 8C 00 08 */	lwz r12, 8(r12)
/* 8045A51C 0045745C  7D 89 03 A6 */	mtctr r12
/* 8045A520 00457460  4E 80 04 21 */	bctrl 
/* 8045A524 00457464  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8045A528 00457468  41 82 00 2C */	beq .L_8045A554
/* 8045A52C 0045746C  38 60 00 68 */	li r3, 0x68
/* 8045A530 00457470  4B BC 99 75 */	bl __nw__FUl
/* 8045A534 00457474  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A538 00457478  41 82 00 14 */	beq .L_8045A54C
/* 8045A53C 0045747C  7F C4 F3 78 */	mr r4, r30
/* 8045A540 00457480  7F E5 FB 78 */	mr r5, r31
/* 8045A544 00457484  48 00 F9 51 */	bl __ct__Q23PSM10Scene_CaveFUcPQ26PSGame9SceneInfo
/* 8045A548 00457488  7C 60 1B 78 */	mr r0, r3
.L_8045A54C:
/* 8045A54C 0045748C  7C 1D 03 78 */	mr r29, r0
/* 8045A550 00457490  48 00 00 C8 */	b .L_8045A618
.L_8045A554:
/* 8045A554 00457494  88 1F 00 06 */	lbz r0, 6(r31)
/* 8045A558 00457498  28 00 00 14 */	cmplwi r0, 0x14
/* 8045A55C 0045749C  41 81 00 BC */	bgt .L_8045A618
/* 8045A560 004574A0  3C 60 80 4F */	lis r3, lbl_804EE164@ha
/* 8045A564 004574A4  54 00 10 3A */	slwi r0, r0, 2
/* 8045A568 004574A8  38 63 E1 64 */	addi r3, r3, lbl_804EE164@l
/* 8045A56C 004574AC  7C 03 00 2E */	lwzx r0, r3, r0
/* 8045A570 004574B0  7C 09 03 A6 */	mtctr r0
/* 8045A574 004574B4  4E 80 04 20 */	bctr 
.L_8045A578:
/* 8045A578 004574B8  38 60 00 28 */	li r3, 0x28
/* 8045A57C 004574BC  4B BC 99 29 */	bl __nw__FUl
/* 8045A580 004574C0  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A584 004574C4  41 82 00 14 */	beq .L_8045A598
/* 8045A588 004574C8  7F C4 F3 78 */	mr r4, r30
/* 8045A58C 004574CC  7F E5 FB 78 */	mr r5, r31
/* 8045A590 004574D0  48 00 D2 2D */	bl __ct__Q23PSM12Scene_GlobalFUcPQ26PSGame9SceneInfo
/* 8045A594 004574D4  7C 60 1B 78 */	mr r0, r3
.L_8045A598:
/* 8045A598 004574D8  7C 1D 03 78 */	mr r29, r0
/* 8045A59C 004574DC  48 00 00 7C */	b .L_8045A618
.L_8045A5A0:
/* 8045A5A0 004574E0  38 60 00 38 */	li r3, 0x38
/* 8045A5A4 004574E4  4B BC 99 01 */	bl __nw__FUl
/* 8045A5A8 004574E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 8045A5AC 004574EC  41 82 00 6C */	beq .L_8045A618
/* 8045A5B0 004574F0  7F C4 F3 78 */	mr r4, r30
/* 8045A5B4 004574F4  7F E5 FB 78 */	mr r5, r31
/* 8045A5B8 004574F8  48 00 D5 D9 */	bl __ct__Q23PSM13Scene_ObjectsFUcPQ26PSGame9SceneInfo
/* 8045A5BC 004574FC  3C 60 80 4F */	lis r3, __vt__Q23PSM11Scene_Zukan@ha
/* 8045A5C0 00457500  38 03 F3 1C */	addi r0, r3, __vt__Q23PSM11Scene_Zukan@l
/* 8045A5C4 00457504  90 1D 00 00 */	stw r0, 0(r29)
/* 8045A5C8 00457508  48 00 00 50 */	b .L_8045A618
.L_8045A5CC:
/* 8045A5CC 0045750C  38 60 00 60 */	li r3, 0x60
/* 8045A5D0 00457510  4B BC 98 D5 */	bl __nw__FUl
/* 8045A5D4 00457514  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A5D8 00457518  41 82 00 14 */	beq .L_8045A5EC
/* 8045A5DC 0045751C  7F C4 F3 78 */	mr r4, r30
/* 8045A5E0 00457520  7F E5 FB 78 */	mr r5, r31
/* 8045A5E4 00457524  48 00 F3 5D */	bl __ct__Q23PSM12Scene_GroundFUcPQ26PSGame9SceneInfo
/* 8045A5E8 00457528  7C 60 1B 78 */	mr r0, r3
.L_8045A5EC:
/* 8045A5EC 0045752C  7C 1D 03 78 */	mr r29, r0
/* 8045A5F0 00457530  48 00 00 28 */	b .L_8045A618
.L_8045A5F4:
/* 8045A5F4 00457534  38 60 00 2C */	li r3, 0x2c
/* 8045A5F8 00457538  4B BC 98 AD */	bl __nw__FUl
/* 8045A5FC 0045753C  7C 60 1B 79 */	or. r0, r3, r3
/* 8045A600 00457540  41 82 00 14 */	beq .L_8045A614
/* 8045A604 00457544  7F C4 F3 78 */	mr r4, r30
/* 8045A608 00457548  7F E5 FB 78 */	mr r5, r31
/* 8045A60C 0045754C  48 01 0E 61 */	bl __ct__Q23PSM14Scene_WorldMapFUcPQ26PSGame9SceneInfo
/* 8045A610 00457550  7C 60 1B 78 */	mr r0, r3
.L_8045A614:
/* 8045A614 00457554  7C 1D 03 78 */	mr r29, r0
.L_8045A618:
/* 8045A618 00457558  28 1D 00 00 */	cmplwi r29, 0
/* 8045A61C 0045755C  40 82 00 2C */	bne .L_8045A648
/* 8045A620 00457560  38 60 00 28 */	li r3, 0x28
/* 8045A624 00457564  4B BC 98 81 */	bl __nw__FUl
/* 8045A628 00457568  7C 7D 1B 79 */	or. r29, r3, r3
/* 8045A62C 0045756C  41 82 00 1C */	beq .L_8045A648
/* 8045A630 00457570  7F C4 F3 78 */	mr r4, r30
/* 8045A634 00457574  7F E5 FB 78 */	mr r5, r31
/* 8045A638 00457578  48 00 CF F9 */	bl __ct__Q23PSM9SceneBaseFUcPQ26PSGame9SceneInfo
/* 8045A63C 0045757C  3C 60 80 4F */	lis r3, __vt__Q23PSM15Scene_NoObjects@ha
/* 8045A640 00457580  38 03 F2 74 */	addi r0, r3, __vt__Q23PSM15Scene_NoObjects@l
/* 8045A644 00457584  90 1D 00 00 */	stw r0, 0(r29)
.L_8045A648:
/* 8045A648 00457588  28 1D 00 00 */	cmplwi r29, 0
/* 8045A64C 0045758C  40 82 00 20 */	bne .L_8045A66C
/* 8045A650 00457590  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045A654 00457594  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045A658 00457598  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045A65C 0045759C  38 80 01 D4 */	li r4, 0x1d4
/* 8045A660 004575A0  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045A664 004575A4  4C C6 31 82 */	crclr 6
/* 8045A668 004575A8  4B BC FF D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045A66C:
/* 8045A66C 004575AC  7F A3 EB 78 */	mr r3, r29
/* 8045A670 004575B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8045A674 004575B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8045A678 004575B8  7D 89 03 A6 */	mtctr r12
/* 8045A67C 004575BC  4E 80 04 21 */	bctrl 
/* 8045A680 004575C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045A684 004575C4  7F A3 EB 78 */	mr r3, r29
/* 8045A688 004575C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8045A68C 004575CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8045A690 004575D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8045A694 004575D4  7C 08 03 A6 */	mtlr r0
/* 8045A698 004575D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8045A69C 004575DC  4E 80 00 20 */	blr 
.endfn newGameScene__Q23PSM8SceneMgrFUcPQ26PSGame9SceneInfo

.fn initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game, global
/* 8045A6A0 004575E0  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 8045A6A4 004575E4  7C 08 02 A6 */	mflr r0
/* 8045A6A8 004575E8  90 01 01 74 */	stw r0, 0x174(r1)
/* 8045A6AC 004575EC  BF 01 01 50 */	stmw r24, 0x150(r1)
/* 8045A6B0 004575F0  7C 9B 23 78 */	mr r27, r4
/* 8045A6B4 004575F4  3C 80 80 4A */	lis r4, lbl_8049CE68@ha
/* 8045A6B8 004575F8  7F 63 DB 78 */	mr r3, r27
/* 8045A6BC 004575FC  3B E4 CE 68 */	addi r31, r4, lbl_8049CE68@l
/* 8045A6C0 00457600  48 00 D0 55 */	bl getSceneInfoA__Q23PSM9SceneBaseFv
/* 8045A6C4 00457604  7C 60 1B 78 */	mr r0, r3
/* 8045A6C8 00457608  38 61 00 6C */	addi r3, r1, 0x6c
/* 8045A6CC 0045760C  7C 1C 03 78 */	mr r28, r0
/* 8045A6D0 00457610  3B A0 00 00 */	li r29, 0
/* 8045A6D4 00457614  8B 3C 00 06 */	lbz r25, 6(r28)
/* 8045A6D8 00457618  38 9C 00 20 */	addi r4, r28, 0x20
/* 8045A6DC 0045761C  48 00 1A 1D */	bl "__ct__Q29JGeometry8TBox3<f>FRCQ29JGeometry8TBox3<f>"
/* 8045A6E0 00457620  7C 64 1B 78 */	mr r4, r3
/* 8045A6E4 00457624  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045A6E8 00457628  48 00 19 A1 */	bl "__ct__Q23PSM15EnvSeObjBuilderFQ29JGeometry8TBox3<f>"
/* 8045A6EC 0045762C  57 3E 06 3E */	clrlwi r30, r25, 0x18
/* 8045A6F0 00457630  2C 1E 00 07 */	cmpwi r30, 7
/* 8045A6F4 00457634  41 82 04 00 */	beq .L_8045AAF4
/* 8045A6F8 00457638  40 80 03 FC */	bge .L_8045AAF4
/* 8045A6FC 0045763C  2C 1E 00 06 */	cmpwi r30, 6
/* 8045A700 00457640  40 80 00 08 */	bge .L_8045A708
/* 8045A704 00457644  48 00 03 F0 */	b .L_8045AAF4
.L_8045A708:
/* 8045A708 00457648  38 60 00 18 */	li r3, 0x18
/* 8045A70C 0045764C  4B BC 97 99 */	bl __nw__FUl
/* 8045A710 00457650  7C 7D 1B 79 */	or. r29, r3, r3
/* 8045A714 00457654  41 82 00 0C */	beq .L_8045A720
/* 8045A718 00457658  48 00 26 71 */	bl __ct__Q28PSSystem8EnvSeMgrFv
/* 8045A71C 0045765C  7C 7D 1B 78 */	mr r29, r3
.L_8045A720:
/* 8045A720 00457660  38 60 00 14 */	li r3, 0x14
/* 8045A724 00457664  4B BC 97 81 */	bl __nw__FUl
/* 8045A728 00457668  7C 7A 1B 79 */	or. r26, r3, r3
/* 8045A72C 0045766C  41 82 00 10 */	beq .L_8045A73C
/* 8045A730 00457670  7F A4 EB 78 */	mr r4, r29
/* 8045A734 00457674  48 00 22 F1 */	bl __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
/* 8045A738 00457678  7C 7A 1B 78 */	mr r26, r3
.L_8045A73C:
/* 8045A73C 0045767C  93 5B 00 58 */	stw r26, 0x58(r27)
/* 8045A740 00457680  38 60 00 14 */	li r3, 0x14
/* 8045A744 00457684  38 A0 FF FC */	li r5, -4
/* 8045A748 00457688  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A74C 0045768C  4B BC 97 F5 */	bl __nw__FUlP7JKRHeapi
/* 8045A750 00457690  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A754 00457694  41 82 00 14 */	beq .L_8045A768
/* 8045A758 00457698  7F 04 C3 78 */	mr r4, r24
/* 8045A75C 0045769C  4B BC C0 5D */	bl __ct__10JSUPtrLinkFPv
/* 8045A760 004576A0  38 00 40 16 */	li r0, 0x4016
/* 8045A764 004576A4  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A768:
/* 8045A768 004576A8  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A76C 004576AC  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045A770 004576B0  28 00 00 00 */	cmplwi r0, 0
/* 8045A774 004576B4  40 82 00 08 */	bne .L_8045A77C
/* 8045A778 004576B8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A77C:
/* 8045A77C 004576BC  7F 23 CB 78 */	mr r3, r25
/* 8045A780 004576C0  7F 04 C3 78 */	mr r4, r24
/* 8045A784 004576C4  4B BC C1 61 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A788 004576C8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A78C 004576CC  38 60 00 14 */	li r3, 0x14
/* 8045A790 004576D0  38 A0 FF FC */	li r5, -4
/* 8045A794 004576D4  4B BC 97 AD */	bl __nw__FUlP7JKRHeapi
/* 8045A798 004576D8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A79C 004576DC  41 82 00 14 */	beq .L_8045A7B0
/* 8045A7A0 004576E0  7F 04 C3 78 */	mr r4, r24
/* 8045A7A4 004576E4  4B BC C0 15 */	bl __ct__10JSUPtrLinkFPv
/* 8045A7A8 004576E8  38 00 40 18 */	li r0, 0x4018
/* 8045A7AC 004576EC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A7B0:
/* 8045A7B0 004576F0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A7B4 004576F4  28 00 00 00 */	cmplwi r0, 0
/* 8045A7B8 004576F8  40 82 00 08 */	bne .L_8045A7C0
/* 8045A7BC 004576FC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A7C0:
/* 8045A7C0 00457700  7F 23 CB 78 */	mr r3, r25
/* 8045A7C4 00457704  7F 04 C3 78 */	mr r4, r24
/* 8045A7C8 00457708  4B BC C1 1D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A7CC 0045770C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A7D0 00457710  38 60 00 14 */	li r3, 0x14
/* 8045A7D4 00457714  38 A0 FF FC */	li r5, -4
/* 8045A7D8 00457718  4B BC 97 69 */	bl __nw__FUlP7JKRHeapi
/* 8045A7DC 0045771C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A7E0 00457720  41 82 00 14 */	beq .L_8045A7F4
/* 8045A7E4 00457724  7F 04 C3 78 */	mr r4, r24
/* 8045A7E8 00457728  4B BC BF D1 */	bl __ct__10JSUPtrLinkFPv
/* 8045A7EC 0045772C  38 00 40 1A */	li r0, 0x401a
/* 8045A7F0 00457730  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A7F4:
/* 8045A7F4 00457734  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A7F8 00457738  28 00 00 00 */	cmplwi r0, 0
/* 8045A7FC 0045773C  40 82 00 08 */	bne .L_8045A804
/* 8045A800 00457740  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A804:
/* 8045A804 00457744  7F 23 CB 78 */	mr r3, r25
/* 8045A808 00457748  7F 04 C3 78 */	mr r4, r24
/* 8045A80C 0045774C  4B BC C0 D9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A810 00457750  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A814 00457754  38 60 00 14 */	li r3, 0x14
/* 8045A818 00457758  38 A0 FF FC */	li r5, -4
/* 8045A81C 0045775C  4B BC 97 25 */	bl __nw__FUlP7JKRHeapi
/* 8045A820 00457760  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A824 00457764  41 82 00 14 */	beq .L_8045A838
/* 8045A828 00457768  7F 04 C3 78 */	mr r4, r24
/* 8045A82C 0045776C  4B BC BF 8D */	bl __ct__10JSUPtrLinkFPv
/* 8045A830 00457770  38 00 40 1C */	li r0, 0x401c
/* 8045A834 00457774  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A838:
/* 8045A838 00457778  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A83C 0045777C  28 00 00 00 */	cmplwi r0, 0
/* 8045A840 00457780  40 82 00 08 */	bne .L_8045A848
/* 8045A844 00457784  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A848:
/* 8045A848 00457788  7F 23 CB 78 */	mr r3, r25
/* 8045A84C 0045778C  7F 04 C3 78 */	mr r4, r24
/* 8045A850 00457790  4B BC C0 95 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A854 00457794  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A858 00457798  38 60 00 14 */	li r3, 0x14
/* 8045A85C 0045779C  38 A0 FF FC */	li r5, -4
/* 8045A860 004577A0  4B BC 96 E1 */	bl __nw__FUlP7JKRHeapi
/* 8045A864 004577A4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A868 004577A8  41 82 00 14 */	beq .L_8045A87C
/* 8045A86C 004577AC  7F 04 C3 78 */	mr r4, r24
/* 8045A870 004577B0  4B BC BF 49 */	bl __ct__10JSUPtrLinkFPv
/* 8045A874 004577B4  38 00 40 1E */	li r0, 0x401e
/* 8045A878 004577B8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A87C:
/* 8045A87C 004577BC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A880 004577C0  28 00 00 00 */	cmplwi r0, 0
/* 8045A884 004577C4  40 82 00 08 */	bne .L_8045A88C
/* 8045A888 004577C8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A88C:
/* 8045A88C 004577CC  7F 23 CB 78 */	mr r3, r25
/* 8045A890 004577D0  7F 04 C3 78 */	mr r4, r24
/* 8045A894 004577D4  4B BC C0 51 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A898 004577D8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A89C 004577DC  38 60 00 14 */	li r3, 0x14
/* 8045A8A0 004577E0  38 A0 FF FC */	li r5, -4
/* 8045A8A4 004577E4  4B BC 96 9D */	bl __nw__FUlP7JKRHeapi
/* 8045A8A8 004577E8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A8AC 004577EC  41 82 00 14 */	beq .L_8045A8C0
/* 8045A8B0 004577F0  7F 04 C3 78 */	mr r4, r24
/* 8045A8B4 004577F4  4B BC BF 05 */	bl __ct__10JSUPtrLinkFPv
/* 8045A8B8 004577F8  38 00 40 17 */	li r0, 0x4017
/* 8045A8BC 004577FC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A8C0:
/* 8045A8C0 00457800  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A8C4 00457804  28 00 00 00 */	cmplwi r0, 0
/* 8045A8C8 00457808  40 82 00 08 */	bne .L_8045A8D0
/* 8045A8CC 0045780C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A8D0:
/* 8045A8D0 00457810  7F 23 CB 78 */	mr r3, r25
/* 8045A8D4 00457814  7F 04 C3 78 */	mr r4, r24
/* 8045A8D8 00457818  4B BC C0 0D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A8DC 0045781C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A8E0 00457820  38 60 00 14 */	li r3, 0x14
/* 8045A8E4 00457824  38 A0 FF FC */	li r5, -4
/* 8045A8E8 00457828  4B BC 96 59 */	bl __nw__FUlP7JKRHeapi
/* 8045A8EC 0045782C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A8F0 00457830  41 82 00 14 */	beq .L_8045A904
/* 8045A8F4 00457834  7F 04 C3 78 */	mr r4, r24
/* 8045A8F8 00457838  4B BC BE C1 */	bl __ct__10JSUPtrLinkFPv
/* 8045A8FC 0045783C  38 00 40 19 */	li r0, 0x4019
/* 8045A900 00457840  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A904:
/* 8045A904 00457844  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A908 00457848  28 00 00 00 */	cmplwi r0, 0
/* 8045A90C 0045784C  40 82 00 08 */	bne .L_8045A914
/* 8045A910 00457850  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A914:
/* 8045A914 00457854  7F 23 CB 78 */	mr r3, r25
/* 8045A918 00457858  7F 04 C3 78 */	mr r4, r24
/* 8045A91C 0045785C  4B BC BF C9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A920 00457860  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A924 00457864  38 60 00 14 */	li r3, 0x14
/* 8045A928 00457868  38 A0 FF FC */	li r5, -4
/* 8045A92C 0045786C  4B BC 96 15 */	bl __nw__FUlP7JKRHeapi
/* 8045A930 00457870  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A934 00457874  41 82 00 14 */	beq .L_8045A948
/* 8045A938 00457878  7F 04 C3 78 */	mr r4, r24
/* 8045A93C 0045787C  4B BC BE 7D */	bl __ct__10JSUPtrLinkFPv
/* 8045A940 00457880  38 00 40 1B */	li r0, 0x401b
/* 8045A944 00457884  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A948:
/* 8045A948 00457888  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A94C 0045788C  28 00 00 00 */	cmplwi r0, 0
/* 8045A950 00457890  40 82 00 08 */	bne .L_8045A958
/* 8045A954 00457894  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A958:
/* 8045A958 00457898  7F 23 CB 78 */	mr r3, r25
/* 8045A95C 0045789C  7F 04 C3 78 */	mr r4, r24
/* 8045A960 004578A0  4B BC BF 85 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A964 004578A4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A968 004578A8  38 60 00 14 */	li r3, 0x14
/* 8045A96C 004578AC  38 A0 FF FC */	li r5, -4
/* 8045A970 004578B0  4B BC 95 D1 */	bl __nw__FUlP7JKRHeapi
/* 8045A974 004578B4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A978 004578B8  41 82 00 14 */	beq .L_8045A98C
/* 8045A97C 004578BC  7F 04 C3 78 */	mr r4, r24
/* 8045A980 004578C0  4B BC BE 39 */	bl __ct__10JSUPtrLinkFPv
/* 8045A984 004578C4  38 00 40 1D */	li r0, 0x401d
/* 8045A988 004578C8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A98C:
/* 8045A98C 004578CC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A990 004578D0  28 00 00 00 */	cmplwi r0, 0
/* 8045A994 004578D4  40 82 00 08 */	bne .L_8045A99C
/* 8045A998 004578D8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A99C:
/* 8045A99C 004578DC  7F 23 CB 78 */	mr r3, r25
/* 8045A9A0 004578E0  7F 04 C3 78 */	mr r4, r24
/* 8045A9A4 004578E4  4B BC BF 41 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A9A8 004578E8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045A9AC 004578EC  38 60 00 14 */	li r3, 0x14
/* 8045A9B0 004578F0  38 A0 FF FC */	li r5, -4
/* 8045A9B4 004578F4  4B BC 95 8D */	bl __nw__FUlP7JKRHeapi
/* 8045A9B8 004578F8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045A9BC 004578FC  41 82 00 14 */	beq .L_8045A9D0
/* 8045A9C0 00457900  7F 04 C3 78 */	mr r4, r24
/* 8045A9C4 00457904  4B BC BD F5 */	bl __ct__10JSUPtrLinkFPv
/* 8045A9C8 00457908  38 00 40 1F */	li r0, 0x401f
/* 8045A9CC 0045790C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045A9D0:
/* 8045A9D0 00457910  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045A9D4 00457914  28 00 00 00 */	cmplwi r0, 0
/* 8045A9D8 00457918  40 82 00 08 */	bne .L_8045A9E0
/* 8045A9DC 0045791C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045A9E0:
/* 8045A9E0 00457920  7F 23 CB 78 */	mr r3, r25
/* 8045A9E4 00457924  7F 04 C3 78 */	mr r4, r24
/* 8045A9E8 00457928  4B BC BE FD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045A9EC 0045792C  81 1F 00 C4 */	lwz r8, 0xc4(r31)
/* 8045A9F0 00457930  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045A9F4 00457934  80 FF 00 C8 */	lwz r7, 0xc8(r31)
/* 8045A9F8 00457938  38 81 00 58 */	addi r4, r1, 0x58
/* 8045A9FC 0045793C  80 DF 00 CC */	lwz r6, 0xcc(r31)
/* 8045AA00 00457940  80 BF 00 D0 */	lwz r5, 0xd0(r31)
/* 8045AA04 00457944  80 1F 00 D4 */	lwz r0, 0xd4(r31)
/* 8045AA08 00457948  C0 02 28 CC */	lfs f0, lbl_80520C2C@sda21(r2)
/* 8045AA0C 0045794C  91 01 00 D4 */	stw r8, 0xd4(r1)
/* 8045AA10 00457950  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 8045AA14 00457954  90 E1 00 D8 */	stw r7, 0xd8(r1)
/* 8045AA18 00457958  90 C1 00 DC */	stw r6, 0xdc(r1)
/* 8045AA1C 0045795C  90 A1 00 E0 */	stw r5, 0xe0(r1)
/* 8045AA20 00457960  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8045AA24 00457964  91 01 00 58 */	stw r8, 0x58(r1)
/* 8045AA28 00457968  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 8045AA2C 0045796C  90 C1 00 60 */	stw r6, 0x60(r1)
/* 8045AA30 00457970  90 A1 00 64 */	stw r5, 0x64(r1)
/* 8045AA34 00457974  90 01 00 68 */	stw r0, 0x68(r1)
/* 8045AA38 00457978  48 00 16 25 */	bl setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
/* 8045AA3C 0045797C  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045AA40 00457980  7F A4 EB 78 */	mr r4, r29
/* 8045AA44 00457984  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045AA48 00457988  4B EE 58 E5 */	bl build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
/* 8045AA4C 0045798C  7F A3 EB 78 */	mr r3, r29
/* 8045AA50 00457990  48 00 15 99 */	bl SetNoYOfset__3PSMFPQ28PSSystem8EnvSeMgr
/* 8045AA54 00457994  38 60 00 54 */	li r3, 0x54
/* 8045AA58 00457998  4B BC 94 4D */	bl __nw__FUl
/* 8045AA5C 0045799C  7C 79 1B 79 */	or. r25, r3, r3
/* 8045AA60 004579A0  41 82 00 38 */	beq .L_8045AA98
/* 8045AA64 004579A4  C0 42 28 C0 */	lfs f2, lbl_80520C20@sda21(r2)
/* 8045AA68 004579A8  7F 38 CB 78 */	mr r24, r25
/* 8045AA6C 004579AC  C0 22 28 C4 */	lfs f1, lbl_80520C24@sda21(r2)
/* 8045AA70 004579B0  38 80 30 79 */	li r4, 0x3079
/* 8045AA74 004579B4  FC 60 10 90 */	fmr f3, f2
/* 8045AA78 004579B8  C0 82 28 D0 */	lfs f4, lbl_80520C30@sda21(r2)
/* 8045AA7C 004579BC  C0 A2 28 D4 */	lfs f5, lbl_80520C34@sda21(r2)
/* 8045AA80 004579C0  4B EE 54 E1 */	bl __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
/* 8045AA84 004579C4  3C 60 80 4F */	lis r3, __vt__Q23PSM12Env_Pollutin@ha
/* 8045AA88 004579C8  C0 02 28 C0 */	lfs f0, lbl_80520C20@sda21(r2)
/* 8045AA8C 004579CC  38 03 E3 58 */	addi r0, r3, __vt__Q23PSM12Env_Pollutin@l
/* 8045AA90 004579D0  90 18 00 10 */	stw r0, 0x10(r24)
/* 8045AA94 004579D4  D0 18 00 50 */	stfs f0, 0x50(r24)
.L_8045AA98:
/* 8045AA98 004579D8  7F A3 EB 78 */	mr r3, r29
/* 8045AA9C 004579DC  7F 24 CB 78 */	mr r4, r25
/* 8045AAA0 004579E0  4B BC BE 45 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AAA4 004579E4  38 60 00 54 */	li r3, 0x54
/* 8045AAA8 004579E8  4B BC 93 FD */	bl __nw__FUl
/* 8045AAAC 004579EC  7C 79 1B 79 */	or. r25, r3, r3
/* 8045AAB0 004579F0  41 82 00 38 */	beq .L_8045AAE8
/* 8045AAB4 004579F4  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045AAB8 004579F8  7F 38 CB 78 */	mr r24, r25
/* 8045AABC 004579FC  C0 42 28 C4 */	lfs f2, lbl_80520C24@sda21(r2)
/* 8045AAC0 00457A00  38 80 30 7A */	li r4, 0x307a
/* 8045AAC4 00457A04  FC 60 08 90 */	fmr f3, f1
/* 8045AAC8 00457A08  C0 82 28 D0 */	lfs f4, lbl_80520C30@sda21(r2)
/* 8045AACC 00457A0C  C0 A2 28 D4 */	lfs f5, lbl_80520C34@sda21(r2)
/* 8045AAD0 00457A10  4B EE 54 91 */	bl __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
/* 8045AAD4 00457A14  3C 60 80 4F */	lis r3, __vt__Q23PSM12Env_Pollutin@ha
/* 8045AAD8 00457A18  C0 02 28 C0 */	lfs f0, lbl_80520C20@sda21(r2)
/* 8045AADC 00457A1C  38 03 E3 58 */	addi r0, r3, __vt__Q23PSM12Env_Pollutin@l
/* 8045AAE0 00457A20  90 18 00 10 */	stw r0, 0x10(r24)
/* 8045AAE4 00457A24  D0 18 00 50 */	stfs f0, 0x50(r24)
.L_8045AAE8:
/* 8045AAE8 00457A28  7F A3 EB 78 */	mr r3, r29
/* 8045AAEC 00457A2C  7F 24 CB 78 */	mr r4, r25
/* 8045AAF0 00457A30  4B BC BD F5 */	bl append__10JSUPtrListFP10JSUPtrLink
.L_8045AAF4:
/* 8045AAF4 00457A34  28 1D 00 00 */	cmplwi r29, 0
/* 8045AAF8 00457A38  40 82 14 04 */	bne .L_8045BEFC
/* 8045AAFC 00457A3C  7F 83 E3 78 */	mr r3, r28
/* 8045AB00 00457A40  38 80 00 01 */	li r4, 1
/* 8045AB04 00457A44  4B ED AA 5D */	bl getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
/* 8045AB08 00457A48  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8045AB0C 00457A4C  20 00 00 01 */	subfic r0, r0, 1
/* 8045AB10 00457A50  7C 00 00 34 */	cntlzw r0, r0
/* 8045AB14 00457A54  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 8045AB18 00457A58  40 82 13 E4 */	bne .L_8045BEFC
/* 8045AB1C 00457A5C  7F 83 E3 78 */	mr r3, r28
/* 8045AB20 00457A60  81 9C 00 00 */	lwz r12, 0(r28)
/* 8045AB24 00457A64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8045AB28 00457A68  7D 89 03 A6 */	mtctr r12
/* 8045AB2C 00457A6C  4E 80 04 21 */	bctrl 
/* 8045AB30 00457A70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8045AB34 00457A74  41 82 0D 4C */	beq .L_8045B880
/* 8045AB38 00457A78  38 60 00 18 */	li r3, 0x18
/* 8045AB3C 00457A7C  4B BC 93 69 */	bl __nw__FUl
/* 8045AB40 00457A80  7C 7D 1B 79 */	or. r29, r3, r3
/* 8045AB44 00457A84  41 82 00 0C */	beq .L_8045AB50
/* 8045AB48 00457A88  48 00 22 41 */	bl __ct__Q28PSSystem8EnvSeMgrFv
/* 8045AB4C 00457A8C  7C 7D 1B 78 */	mr r29, r3
.L_8045AB50:
/* 8045AB50 00457A90  38 60 00 14 */	li r3, 0x14
/* 8045AB54 00457A94  4B BC 93 51 */	bl __nw__FUl
/* 8045AB58 00457A98  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045AB5C 00457A9C  41 82 00 10 */	beq .L_8045AB6C
/* 8045AB60 00457AA0  7F A4 EB 78 */	mr r4, r29
/* 8045AB64 00457AA4  48 00 1E C1 */	bl __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
/* 8045AB68 00457AA8  7C 7E 1B 78 */	mr r30, r3
.L_8045AB6C:
/* 8045AB6C 00457AAC  93 DB 00 58 */	stw r30, 0x58(r27)
/* 8045AB70 00457AB0  88 1C 00 40 */	lbz r0, 0x40(r28)
/* 8045AB74 00457AB4  28 00 00 0E */	cmplwi r0, 0xe
/* 8045AB78 00457AB8  41 81 0B 2C */	bgt .L_8045B6A4
/* 8045AB7C 00457ABC  3C 60 80 4F */	lis r3, lbl_804EE1B8@ha
/* 8045AB80 00457AC0  54 00 10 3A */	slwi r0, r0, 2
/* 8045AB84 00457AC4  38 63 E1 B8 */	addi r3, r3, lbl_804EE1B8@l
/* 8045AB88 00457AC8  7C 03 00 2E */	lwzx r0, r3, r0
/* 8045AB8C 00457ACC  7C 09 03 A6 */	mtctr r0
/* 8045AB90 00457AD0  4E 80 04 20 */	bctr 
.L_8045AB94:
/* 8045AB94 00457AD4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AB98 00457AD8  38 60 00 14 */	li r3, 0x14
/* 8045AB9C 00457ADC  38 A0 FF FC */	li r5, -4
/* 8045ABA0 00457AE0  4B BC 93 A1 */	bl __nw__FUlP7JKRHeapi
/* 8045ABA4 00457AE4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045ABA8 00457AE8  41 82 00 14 */	beq .L_8045ABBC
/* 8045ABAC 00457AEC  7F 04 C3 78 */	mr r4, r24
/* 8045ABB0 00457AF0  4B BC BC 09 */	bl __ct__10JSUPtrLinkFPv
/* 8045ABB4 00457AF4  38 00 40 18 */	li r0, 0x4018
/* 8045ABB8 00457AF8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045ABBC:
/* 8045ABBC 00457AFC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045ABC0 00457B00  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045ABC4 00457B04  28 00 00 00 */	cmplwi r0, 0
/* 8045ABC8 00457B08  40 82 00 08 */	bne .L_8045ABD0
/* 8045ABCC 00457B0C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045ABD0:
/* 8045ABD0 00457B10  7F 23 CB 78 */	mr r3, r25
/* 8045ABD4 00457B14  7F 04 C3 78 */	mr r4, r24
/* 8045ABD8 00457B18  4B BC BD 0D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045ABDC 00457B1C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045ABE0 00457B20  38 60 00 14 */	li r3, 0x14
/* 8045ABE4 00457B24  38 A0 FF FC */	li r5, -4
/* 8045ABE8 00457B28  4B BC 93 59 */	bl __nw__FUlP7JKRHeapi
/* 8045ABEC 00457B2C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045ABF0 00457B30  41 82 00 14 */	beq .L_8045AC04
/* 8045ABF4 00457B34  7F 04 C3 78 */	mr r4, r24
/* 8045ABF8 00457B38  4B BC BB C1 */	bl __ct__10JSUPtrLinkFPv
/* 8045ABFC 00457B3C  38 00 40 1A */	li r0, 0x401a
/* 8045AC00 00457B40  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AC04:
/* 8045AC04 00457B44  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AC08 00457B48  28 00 00 00 */	cmplwi r0, 0
/* 8045AC0C 00457B4C  40 82 00 08 */	bne .L_8045AC14
/* 8045AC10 00457B50  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AC14:
/* 8045AC14 00457B54  7F 23 CB 78 */	mr r3, r25
/* 8045AC18 00457B58  7F 04 C3 78 */	mr r4, r24
/* 8045AC1C 00457B5C  4B BC BC C9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AC20 00457B60  48 00 0B 54 */	b .L_8045B774
.L_8045AC24:
/* 8045AC24 00457B64  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AC28 00457B68  38 60 00 14 */	li r3, 0x14
/* 8045AC2C 00457B6C  38 A0 FF FC */	li r5, -4
/* 8045AC30 00457B70  4B BC 93 11 */	bl __nw__FUlP7JKRHeapi
/* 8045AC34 00457B74  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AC38 00457B78  41 82 00 14 */	beq .L_8045AC4C
/* 8045AC3C 00457B7C  7F 04 C3 78 */	mr r4, r24
/* 8045AC40 00457B80  4B BC BB 79 */	bl __ct__10JSUPtrLinkFPv
/* 8045AC44 00457B84  38 00 40 19 */	li r0, 0x4019
/* 8045AC48 00457B88  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AC4C:
/* 8045AC4C 00457B8C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AC50 00457B90  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045AC54 00457B94  28 00 00 00 */	cmplwi r0, 0
/* 8045AC58 00457B98  40 82 00 08 */	bne .L_8045AC60
/* 8045AC5C 00457B9C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AC60:
/* 8045AC60 00457BA0  7F 23 CB 78 */	mr r3, r25
/* 8045AC64 00457BA4  7F 04 C3 78 */	mr r4, r24
/* 8045AC68 00457BA8  4B BC BC 7D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AC6C 00457BAC  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AC70 00457BB0  38 60 00 14 */	li r3, 0x14
/* 8045AC74 00457BB4  38 A0 FF FC */	li r5, -4
/* 8045AC78 00457BB8  4B BC 92 C9 */	bl __nw__FUlP7JKRHeapi
/* 8045AC7C 00457BBC  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AC80 00457BC0  41 82 00 14 */	beq .L_8045AC94
/* 8045AC84 00457BC4  7F 04 C3 78 */	mr r4, r24
/* 8045AC88 00457BC8  4B BC BB 31 */	bl __ct__10JSUPtrLinkFPv
/* 8045AC8C 00457BCC  38 00 40 1B */	li r0, 0x401b
/* 8045AC90 00457BD0  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AC94:
/* 8045AC94 00457BD4  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AC98 00457BD8  28 00 00 00 */	cmplwi r0, 0
/* 8045AC9C 00457BDC  40 82 00 08 */	bne .L_8045ACA4
/* 8045ACA0 00457BE0  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045ACA4:
/* 8045ACA4 00457BE4  7F 23 CB 78 */	mr r3, r25
/* 8045ACA8 00457BE8  7F 04 C3 78 */	mr r4, r24
/* 8045ACAC 00457BEC  4B BC BC 39 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045ACB0 00457BF0  48 00 0A C4 */	b .L_8045B774
.L_8045ACB4:
/* 8045ACB4 00457BF4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045ACB8 00457BF8  38 60 00 14 */	li r3, 0x14
/* 8045ACBC 00457BFC  38 A0 FF FC */	li r5, -4
/* 8045ACC0 00457C00  4B BC 92 81 */	bl __nw__FUlP7JKRHeapi
/* 8045ACC4 00457C04  7C 78 1B 79 */	or. r24, r3, r3
/* 8045ACC8 00457C08  41 82 00 14 */	beq .L_8045ACDC
/* 8045ACCC 00457C0C  7F 04 C3 78 */	mr r4, r24
/* 8045ACD0 00457C10  4B BC BA E9 */	bl __ct__10JSUPtrLinkFPv
/* 8045ACD4 00457C14  38 00 40 18 */	li r0, 0x4018
/* 8045ACD8 00457C18  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045ACDC:
/* 8045ACDC 00457C1C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045ACE0 00457C20  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045ACE4 00457C24  28 00 00 00 */	cmplwi r0, 0
/* 8045ACE8 00457C28  40 82 00 08 */	bne .L_8045ACF0
/* 8045ACEC 00457C2C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045ACF0:
/* 8045ACF0 00457C30  7F 23 CB 78 */	mr r3, r25
/* 8045ACF4 00457C34  7F 04 C3 78 */	mr r4, r24
/* 8045ACF8 00457C38  4B BC BB ED */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045ACFC 00457C3C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AD00 00457C40  38 60 00 14 */	li r3, 0x14
/* 8045AD04 00457C44  38 A0 FF FC */	li r5, -4
/* 8045AD08 00457C48  4B BC 92 39 */	bl __nw__FUlP7JKRHeapi
/* 8045AD0C 00457C4C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AD10 00457C50  41 82 00 14 */	beq .L_8045AD24
/* 8045AD14 00457C54  7F 04 C3 78 */	mr r4, r24
/* 8045AD18 00457C58  4B BC BA A1 */	bl __ct__10JSUPtrLinkFPv
/* 8045AD1C 00457C5C  38 00 40 1B */	li r0, 0x401b
/* 8045AD20 00457C60  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AD24:
/* 8045AD24 00457C64  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AD28 00457C68  28 00 00 00 */	cmplwi r0, 0
/* 8045AD2C 00457C6C  40 82 00 08 */	bne .L_8045AD34
/* 8045AD30 00457C70  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AD34:
/* 8045AD34 00457C74  7F 23 CB 78 */	mr r3, r25
/* 8045AD38 00457C78  7F 04 C3 78 */	mr r4, r24
/* 8045AD3C 00457C7C  4B BC BB A9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AD40 00457C80  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AD44 00457C84  38 60 00 14 */	li r3, 0x14
/* 8045AD48 00457C88  38 A0 FF FC */	li r5, -4
/* 8045AD4C 00457C8C  4B BC 91 F5 */	bl __nw__FUlP7JKRHeapi
/* 8045AD50 00457C90  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AD54 00457C94  41 82 00 14 */	beq .L_8045AD68
/* 8045AD58 00457C98  7F 04 C3 78 */	mr r4, r24
/* 8045AD5C 00457C9C  4B BC BA 5D */	bl __ct__10JSUPtrLinkFPv
/* 8045AD60 00457CA0  38 00 40 1C */	li r0, 0x401c
/* 8045AD64 00457CA4  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AD68:
/* 8045AD68 00457CA8  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AD6C 00457CAC  28 00 00 00 */	cmplwi r0, 0
/* 8045AD70 00457CB0  40 82 00 08 */	bne .L_8045AD78
/* 8045AD74 00457CB4  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AD78:
/* 8045AD78 00457CB8  7F 23 CB 78 */	mr r3, r25
/* 8045AD7C 00457CBC  7F 04 C3 78 */	mr r4, r24
/* 8045AD80 00457CC0  4B BC BB 65 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AD84 00457CC4  48 00 09 F0 */	b .L_8045B774
.L_8045AD88:
/* 8045AD88 00457CC8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AD8C 00457CCC  38 60 00 14 */	li r3, 0x14
/* 8045AD90 00457CD0  38 A0 FF FC */	li r5, -4
/* 8045AD94 00457CD4  4B BC 91 AD */	bl __nw__FUlP7JKRHeapi
/* 8045AD98 00457CD8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AD9C 00457CDC  41 82 00 14 */	beq .L_8045ADB0
/* 8045ADA0 00457CE0  7F 04 C3 78 */	mr r4, r24
/* 8045ADA4 00457CE4  4B BC BA 15 */	bl __ct__10JSUPtrLinkFPv
/* 8045ADA8 00457CE8  38 00 40 1A */	li r0, 0x401a
/* 8045ADAC 00457CEC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045ADB0:
/* 8045ADB0 00457CF0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045ADB4 00457CF4  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045ADB8 00457CF8  28 00 00 00 */	cmplwi r0, 0
/* 8045ADBC 00457CFC  40 82 00 08 */	bne .L_8045ADC4
/* 8045ADC0 00457D00  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045ADC4:
/* 8045ADC4 00457D04  7F 23 CB 78 */	mr r3, r25
/* 8045ADC8 00457D08  7F 04 C3 78 */	mr r4, r24
/* 8045ADCC 00457D0C  4B BC BB 19 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045ADD0 00457D10  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045ADD4 00457D14  38 60 00 14 */	li r3, 0x14
/* 8045ADD8 00457D18  38 A0 FF FC */	li r5, -4
/* 8045ADDC 00457D1C  4B BC 91 65 */	bl __nw__FUlP7JKRHeapi
/* 8045ADE0 00457D20  7C 78 1B 79 */	or. r24, r3, r3
/* 8045ADE4 00457D24  41 82 00 14 */	beq .L_8045ADF8
/* 8045ADE8 00457D28  7F 04 C3 78 */	mr r4, r24
/* 8045ADEC 00457D2C  4B BC B9 CD */	bl __ct__10JSUPtrLinkFPv
/* 8045ADF0 00457D30  38 00 40 1D */	li r0, 0x401d
/* 8045ADF4 00457D34  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045ADF8:
/* 8045ADF8 00457D38  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045ADFC 00457D3C  28 00 00 00 */	cmplwi r0, 0
/* 8045AE00 00457D40  40 82 00 08 */	bne .L_8045AE08
/* 8045AE04 00457D44  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AE08:
/* 8045AE08 00457D48  7F 23 CB 78 */	mr r3, r25
/* 8045AE0C 00457D4C  7F 04 C3 78 */	mr r4, r24
/* 8045AE10 00457D50  4B BC BA D5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AE14 00457D54  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AE18 00457D58  38 60 00 14 */	li r3, 0x14
/* 8045AE1C 00457D5C  38 A0 FF FC */	li r5, -4
/* 8045AE20 00457D60  4B BC 91 21 */	bl __nw__FUlP7JKRHeapi
/* 8045AE24 00457D64  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AE28 00457D68  41 82 00 14 */	beq .L_8045AE3C
/* 8045AE2C 00457D6C  7F 04 C3 78 */	mr r4, r24
/* 8045AE30 00457D70  4B BC B9 89 */	bl __ct__10JSUPtrLinkFPv
/* 8045AE34 00457D74  38 00 40 16 */	li r0, 0x4016
/* 8045AE38 00457D78  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AE3C:
/* 8045AE3C 00457D7C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AE40 00457D80  28 00 00 00 */	cmplwi r0, 0
/* 8045AE44 00457D84  40 82 00 08 */	bne .L_8045AE4C
/* 8045AE48 00457D88  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AE4C:
/* 8045AE4C 00457D8C  7F 23 CB 78 */	mr r3, r25
/* 8045AE50 00457D90  7F 04 C3 78 */	mr r4, r24
/* 8045AE54 00457D94  4B BC BA 91 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AE58 00457D98  48 00 09 1C */	b .L_8045B774
.L_8045AE5C:
/* 8045AE5C 00457D9C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AE60 00457DA0  38 60 00 14 */	li r3, 0x14
/* 8045AE64 00457DA4  38 A0 FF FC */	li r5, -4
/* 8045AE68 00457DA8  4B BC 90 D9 */	bl __nw__FUlP7JKRHeapi
/* 8045AE6C 00457DAC  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AE70 00457DB0  41 82 00 14 */	beq .L_8045AE84
/* 8045AE74 00457DB4  7F 04 C3 78 */	mr r4, r24
/* 8045AE78 00457DB8  4B BC B9 41 */	bl __ct__10JSUPtrLinkFPv
/* 8045AE7C 00457DBC  38 00 40 1C */	li r0, 0x401c
/* 8045AE80 00457DC0  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AE84:
/* 8045AE84 00457DC4  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AE88 00457DC8  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045AE8C 00457DCC  28 00 00 00 */	cmplwi r0, 0
/* 8045AE90 00457DD0  40 82 00 08 */	bne .L_8045AE98
/* 8045AE94 00457DD4  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AE98:
/* 8045AE98 00457DD8  7F 23 CB 78 */	mr r3, r25
/* 8045AE9C 00457DDC  7F 04 C3 78 */	mr r4, r24
/* 8045AEA0 00457DE0  4B BC BA 45 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AEA4 00457DE4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AEA8 00457DE8  38 60 00 14 */	li r3, 0x14
/* 8045AEAC 00457DEC  38 A0 FF FC */	li r5, -4
/* 8045AEB0 00457DF0  4B BC 90 91 */	bl __nw__FUlP7JKRHeapi
/* 8045AEB4 00457DF4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AEB8 00457DF8  41 82 00 14 */	beq .L_8045AECC
/* 8045AEBC 00457DFC  7F 04 C3 78 */	mr r4, r24
/* 8045AEC0 00457E00  4B BC B8 F9 */	bl __ct__10JSUPtrLinkFPv
/* 8045AEC4 00457E04  38 00 40 17 */	li r0, 0x4017
/* 8045AEC8 00457E08  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AECC:
/* 8045AECC 00457E0C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AED0 00457E10  28 00 00 00 */	cmplwi r0, 0
/* 8045AED4 00457E14  40 82 00 08 */	bne .L_8045AEDC
/* 8045AED8 00457E18  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AEDC:
/* 8045AEDC 00457E1C  7F 23 CB 78 */	mr r3, r25
/* 8045AEE0 00457E20  7F 04 C3 78 */	mr r4, r24
/* 8045AEE4 00457E24  4B BC BA 01 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AEE8 00457E28  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AEEC 00457E2C  38 60 00 14 */	li r3, 0x14
/* 8045AEF0 00457E30  38 A0 FF FC */	li r5, -4
/* 8045AEF4 00457E34  4B BC 90 4D */	bl __nw__FUlP7JKRHeapi
/* 8045AEF8 00457E38  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AEFC 00457E3C  41 82 00 14 */	beq .L_8045AF10
/* 8045AF00 00457E40  7F 04 C3 78 */	mr r4, r24
/* 8045AF04 00457E44  4B BC B8 B5 */	bl __ct__10JSUPtrLinkFPv
/* 8045AF08 00457E48  38 00 40 1E */	li r0, 0x401e
/* 8045AF0C 00457E4C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AF10:
/* 8045AF10 00457E50  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AF14 00457E54  28 00 00 00 */	cmplwi r0, 0
/* 8045AF18 00457E58  40 82 00 08 */	bne .L_8045AF20
/* 8045AF1C 00457E5C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AF20:
/* 8045AF20 00457E60  7F 23 CB 78 */	mr r3, r25
/* 8045AF24 00457E64  7F 04 C3 78 */	mr r4, r24
/* 8045AF28 00457E68  4B BC B9 BD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AF2C 00457E6C  48 00 08 48 */	b .L_8045B774
.L_8045AF30:
/* 8045AF30 00457E70  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AF34 00457E74  38 60 00 14 */	li r3, 0x14
/* 8045AF38 00457E78  38 A0 FF FC */	li r5, -4
/* 8045AF3C 00457E7C  4B BC 90 05 */	bl __nw__FUlP7JKRHeapi
/* 8045AF40 00457E80  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AF44 00457E84  41 82 00 14 */	beq .L_8045AF58
/* 8045AF48 00457E88  7F 04 C3 78 */	mr r4, r24
/* 8045AF4C 00457E8C  4B BC B8 6D */	bl __ct__10JSUPtrLinkFPv
/* 8045AF50 00457E90  38 00 40 16 */	li r0, 0x4016
/* 8045AF54 00457E94  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AF58:
/* 8045AF58 00457E98  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AF5C 00457E9C  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045AF60 00457EA0  28 00 00 00 */	cmplwi r0, 0
/* 8045AF64 00457EA4  40 82 00 08 */	bne .L_8045AF6C
/* 8045AF68 00457EA8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AF6C:
/* 8045AF6C 00457EAC  7F 23 CB 78 */	mr r3, r25
/* 8045AF70 00457EB0  7F 04 C3 78 */	mr r4, r24
/* 8045AF74 00457EB4  4B BC B9 71 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AF78 00457EB8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AF7C 00457EBC  38 60 00 14 */	li r3, 0x14
/* 8045AF80 00457EC0  38 A0 FF FC */	li r5, -4
/* 8045AF84 00457EC4  4B BC 8F BD */	bl __nw__FUlP7JKRHeapi
/* 8045AF88 00457EC8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AF8C 00457ECC  41 82 00 14 */	beq .L_8045AFA0
/* 8045AF90 00457ED0  7F 04 C3 78 */	mr r4, r24
/* 8045AF94 00457ED4  4B BC B8 25 */	bl __ct__10JSUPtrLinkFPv
/* 8045AF98 00457ED8  38 00 40 1F */	li r0, 0x401f
/* 8045AF9C 00457EDC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AFA0:
/* 8045AFA0 00457EE0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AFA4 00457EE4  28 00 00 00 */	cmplwi r0, 0
/* 8045AFA8 00457EE8  40 82 00 08 */	bne .L_8045AFB0
/* 8045AFAC 00457EEC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AFB0:
/* 8045AFB0 00457EF0  7F 23 CB 78 */	mr r3, r25
/* 8045AFB4 00457EF4  7F 04 C3 78 */	mr r4, r24
/* 8045AFB8 00457EF8  4B BC B9 2D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045AFBC 00457EFC  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045AFC0 00457F00  38 60 00 14 */	li r3, 0x14
/* 8045AFC4 00457F04  38 A0 FF FC */	li r5, -4
/* 8045AFC8 00457F08  4B BC 8F 79 */	bl __nw__FUlP7JKRHeapi
/* 8045AFCC 00457F0C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045AFD0 00457F10  41 82 00 14 */	beq .L_8045AFE4
/* 8045AFD4 00457F14  7F 04 C3 78 */	mr r4, r24
/* 8045AFD8 00457F18  4B BC B7 E1 */	bl __ct__10JSUPtrLinkFPv
/* 8045AFDC 00457F1C  38 00 40 20 */	li r0, 0x4020
/* 8045AFE0 00457F20  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045AFE4:
/* 8045AFE4 00457F24  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045AFE8 00457F28  28 00 00 00 */	cmplwi r0, 0
/* 8045AFEC 00457F2C  40 82 00 08 */	bne .L_8045AFF4
/* 8045AFF0 00457F30  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045AFF4:
/* 8045AFF4 00457F34  7F 23 CB 78 */	mr r3, r25
/* 8045AFF8 00457F38  7F 04 C3 78 */	mr r4, r24
/* 8045AFFC 00457F3C  4B BC B8 E9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B000 00457F40  48 00 07 74 */	b .L_8045B774
.L_8045B004:
/* 8045B004 00457F44  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B008 00457F48  38 60 00 14 */	li r3, 0x14
/* 8045B00C 00457F4C  38 A0 FF FC */	li r5, -4
/* 8045B010 00457F50  4B BC 8F 31 */	bl __nw__FUlP7JKRHeapi
/* 8045B014 00457F54  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B018 00457F58  41 82 00 14 */	beq .L_8045B02C
/* 8045B01C 00457F5C  7F 04 C3 78 */	mr r4, r24
/* 8045B020 00457F60  4B BC B7 99 */	bl __ct__10JSUPtrLinkFPv
/* 8045B024 00457F64  38 00 40 1E */	li r0, 0x401e
/* 8045B028 00457F68  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B02C:
/* 8045B02C 00457F6C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B030 00457F70  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B034 00457F74  28 00 00 00 */	cmplwi r0, 0
/* 8045B038 00457F78  40 82 00 08 */	bne .L_8045B040
/* 8045B03C 00457F7C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B040:
/* 8045B040 00457F80  7F 23 CB 78 */	mr r3, r25
/* 8045B044 00457F84  7F 04 C3 78 */	mr r4, r24
/* 8045B048 00457F88  4B BC B8 9D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B04C 00457F8C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B050 00457F90  38 60 00 14 */	li r3, 0x14
/* 8045B054 00457F94  38 A0 FF FC */	li r5, -4
/* 8045B058 00457F98  4B BC 8E E9 */	bl __nw__FUlP7JKRHeapi
/* 8045B05C 00457F9C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B060 00457FA0  41 82 00 14 */	beq .L_8045B074
/* 8045B064 00457FA4  7F 04 C3 78 */	mr r4, r24
/* 8045B068 00457FA8  4B BC B7 51 */	bl __ct__10JSUPtrLinkFPv
/* 8045B06C 00457FAC  38 00 40 21 */	li r0, 0x4021
/* 8045B070 00457FB0  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B074:
/* 8045B074 00457FB4  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B078 00457FB8  28 00 00 00 */	cmplwi r0, 0
/* 8045B07C 00457FBC  40 82 00 08 */	bne .L_8045B084
/* 8045B080 00457FC0  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B084:
/* 8045B084 00457FC4  7F 23 CB 78 */	mr r3, r25
/* 8045B088 00457FC8  7F 04 C3 78 */	mr r4, r24
/* 8045B08C 00457FCC  4B BC B8 59 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B090 00457FD0  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B094 00457FD4  38 60 00 14 */	li r3, 0x14
/* 8045B098 00457FD8  38 A0 FF FC */	li r5, -4
/* 8045B09C 00457FDC  4B BC 8E A5 */	bl __nw__FUlP7JKRHeapi
/* 8045B0A0 00457FE0  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B0A4 00457FE4  41 82 00 14 */	beq .L_8045B0B8
/* 8045B0A8 00457FE8  7F 04 C3 78 */	mr r4, r24
/* 8045B0AC 00457FEC  4B BC B7 0D */	bl __ct__10JSUPtrLinkFPv
/* 8045B0B0 00457FF0  38 00 40 2A */	li r0, 0x402a
/* 8045B0B4 00457FF4  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B0B8:
/* 8045B0B8 00457FF8  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B0BC 00457FFC  28 00 00 00 */	cmplwi r0, 0
/* 8045B0C0 00458000  40 82 00 08 */	bne .L_8045B0C8
/* 8045B0C4 00458004  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B0C8:
/* 8045B0C8 00458008  7F 23 CB 78 */	mr r3, r25
/* 8045B0CC 0045800C  7F 04 C3 78 */	mr r4, r24
/* 8045B0D0 00458010  4B BC B8 15 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B0D4 00458014  48 00 06 A0 */	b .L_8045B774
.L_8045B0D8:
/* 8045B0D8 00458018  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B0DC 0045801C  38 60 00 14 */	li r3, 0x14
/* 8045B0E0 00458020  38 A0 FF FC */	li r5, -4
/* 8045B0E4 00458024  4B BC 8E 5D */	bl __nw__FUlP7JKRHeapi
/* 8045B0E8 00458028  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B0EC 0045802C  41 82 00 14 */	beq .L_8045B100
/* 8045B0F0 00458030  7F 04 C3 78 */	mr r4, r24
/* 8045B0F4 00458034  4B BC B6 C5 */	bl __ct__10JSUPtrLinkFPv
/* 8045B0F8 00458038  38 00 40 20 */	li r0, 0x4020
/* 8045B0FC 0045803C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B100:
/* 8045B100 00458040  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B104 00458044  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B108 00458048  28 00 00 00 */	cmplwi r0, 0
/* 8045B10C 0045804C  40 82 00 08 */	bne .L_8045B114
/* 8045B110 00458050  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B114:
/* 8045B114 00458054  7F 23 CB 78 */	mr r3, r25
/* 8045B118 00458058  7F 04 C3 78 */	mr r4, r24
/* 8045B11C 0045805C  4B BC B7 C9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B120 00458060  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B124 00458064  38 60 00 14 */	li r3, 0x14
/* 8045B128 00458068  38 A0 FF FC */	li r5, -4
/* 8045B12C 0045806C  4B BC 8E 15 */	bl __nw__FUlP7JKRHeapi
/* 8045B130 00458070  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B134 00458074  41 82 00 14 */	beq .L_8045B148
/* 8045B138 00458078  7F 04 C3 78 */	mr r4, r24
/* 8045B13C 0045807C  4B BC B6 7D */	bl __ct__10JSUPtrLinkFPv
/* 8045B140 00458080  38 00 40 2B */	li r0, 0x402b
/* 8045B144 00458084  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B148:
/* 8045B148 00458088  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B14C 0045808C  28 00 00 00 */	cmplwi r0, 0
/* 8045B150 00458090  40 82 00 08 */	bne .L_8045B158
/* 8045B154 00458094  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B158:
/* 8045B158 00458098  7F 23 CB 78 */	mr r3, r25
/* 8045B15C 0045809C  7F 04 C3 78 */	mr r4, r24
/* 8045B160 004580A0  4B BC B7 85 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B164 004580A4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B168 004580A8  38 60 00 14 */	li r3, 0x14
/* 8045B16C 004580AC  38 A0 FF FC */	li r5, -4
/* 8045B170 004580B0  4B BC 8D D1 */	bl __nw__FUlP7JKRHeapi
/* 8045B174 004580B4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B178 004580B8  41 82 00 14 */	beq .L_8045B18C
/* 8045B17C 004580BC  7F 04 C3 78 */	mr r4, r24
/* 8045B180 004580C0  4B BC B6 39 */	bl __ct__10JSUPtrLinkFPv
/* 8045B184 004580C4  38 00 40 22 */	li r0, 0x4022
/* 8045B188 004580C8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B18C:
/* 8045B18C 004580CC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B190 004580D0  28 00 00 00 */	cmplwi r0, 0
/* 8045B194 004580D4  40 82 00 08 */	bne .L_8045B19C
/* 8045B198 004580D8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B19C:
/* 8045B19C 004580DC  7F 23 CB 78 */	mr r3, r25
/* 8045B1A0 004580E0  7F 04 C3 78 */	mr r4, r24
/* 8045B1A4 004580E4  4B BC B7 41 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B1A8 004580E8  48 00 05 CC */	b .L_8045B774
.L_8045B1AC:
/* 8045B1AC 004580EC  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B1B0 004580F0  38 60 00 14 */	li r3, 0x14
/* 8045B1B4 004580F4  38 A0 FF FC */	li r5, -4
/* 8045B1B8 004580F8  4B BC 8D 89 */	bl __nw__FUlP7JKRHeapi
/* 8045B1BC 004580FC  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B1C0 00458100  41 82 00 14 */	beq .L_8045B1D4
/* 8045B1C4 00458104  7F 04 C3 78 */	mr r4, r24
/* 8045B1C8 00458108  4B BC B5 F1 */	bl __ct__10JSUPtrLinkFPv
/* 8045B1CC 0045810C  38 00 40 2A */	li r0, 0x402a
/* 8045B1D0 00458110  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B1D4:
/* 8045B1D4 00458114  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B1D8 00458118  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B1DC 0045811C  28 00 00 00 */	cmplwi r0, 0
/* 8045B1E0 00458120  40 82 00 08 */	bne .L_8045B1E8
/* 8045B1E4 00458124  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B1E8:
/* 8045B1E8 00458128  7F 23 CB 78 */	mr r3, r25
/* 8045B1EC 0045812C  7F 04 C3 78 */	mr r4, r24
/* 8045B1F0 00458130  4B BC B6 F5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B1F4 00458134  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B1F8 00458138  38 60 00 14 */	li r3, 0x14
/* 8045B1FC 0045813C  38 A0 FF FC */	li r5, -4
/* 8045B200 00458140  4B BC 8D 41 */	bl __nw__FUlP7JKRHeapi
/* 8045B204 00458144  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B208 00458148  41 82 00 14 */	beq .L_8045B21C
/* 8045B20C 0045814C  7F 04 C3 78 */	mr r4, r24
/* 8045B210 00458150  4B BC B5 A9 */	bl __ct__10JSUPtrLinkFPv
/* 8045B214 00458154  38 00 40 23 */	li r0, 0x4023
/* 8045B218 00458158  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B21C:
/* 8045B21C 0045815C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B220 00458160  28 00 00 00 */	cmplwi r0, 0
/* 8045B224 00458164  40 82 00 08 */	bne .L_8045B22C
/* 8045B228 00458168  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B22C:
/* 8045B22C 0045816C  7F 23 CB 78 */	mr r3, r25
/* 8045B230 00458170  7F 04 C3 78 */	mr r4, r24
/* 8045B234 00458174  4B BC B6 B1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B238 00458178  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B23C 0045817C  38 60 00 14 */	li r3, 0x14
/* 8045B240 00458180  38 A0 FF FC */	li r5, -4
/* 8045B244 00458184  4B BC 8C FD */	bl __nw__FUlP7JKRHeapi
/* 8045B248 00458188  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B24C 0045818C  41 82 00 14 */	beq .L_8045B260
/* 8045B250 00458190  7F 04 C3 78 */	mr r4, r24
/* 8045B254 00458194  4B BC B5 65 */	bl __ct__10JSUPtrLinkFPv
/* 8045B258 00458198  38 00 40 28 */	li r0, 0x4028
/* 8045B25C 0045819C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B260:
/* 8045B260 004581A0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B264 004581A4  28 00 00 00 */	cmplwi r0, 0
/* 8045B268 004581A8  40 82 00 08 */	bne .L_8045B270
/* 8045B26C 004581AC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B270:
/* 8045B270 004581B0  7F 23 CB 78 */	mr r3, r25
/* 8045B274 004581B4  7F 04 C3 78 */	mr r4, r24
/* 8045B278 004581B8  4B BC B6 6D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B27C 004581BC  48 00 04 F8 */	b .L_8045B774
.L_8045B280:
/* 8045B280 004581C0  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B284 004581C4  38 60 00 14 */	li r3, 0x14
/* 8045B288 004581C8  38 A0 FF FC */	li r5, -4
/* 8045B28C 004581CC  4B BC 8C B5 */	bl __nw__FUlP7JKRHeapi
/* 8045B290 004581D0  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B294 004581D4  41 82 00 14 */	beq .L_8045B2A8
/* 8045B298 004581D8  7F 04 C3 78 */	mr r4, r24
/* 8045B29C 004581DC  4B BC B5 1D */	bl __ct__10JSUPtrLinkFPv
/* 8045B2A0 004581E0  38 00 40 22 */	li r0, 0x4022
/* 8045B2A4 004581E4  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B2A8:
/* 8045B2A8 004581E8  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B2AC 004581EC  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B2B0 004581F0  28 00 00 00 */	cmplwi r0, 0
/* 8045B2B4 004581F4  40 82 00 08 */	bne .L_8045B2BC
/* 8045B2B8 004581F8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B2BC:
/* 8045B2BC 004581FC  7F 23 CB 78 */	mr r3, r25
/* 8045B2C0 00458200  7F 04 C3 78 */	mr r4, r24
/* 8045B2C4 00458204  4B BC B6 21 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B2C8 00458208  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B2CC 0045820C  38 60 00 14 */	li r3, 0x14
/* 8045B2D0 00458210  38 A0 FF FC */	li r5, -4
/* 8045B2D4 00458214  4B BC 8C 6D */	bl __nw__FUlP7JKRHeapi
/* 8045B2D8 00458218  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B2DC 0045821C  41 82 00 14 */	beq .L_8045B2F0
/* 8045B2E0 00458220  7F 04 C3 78 */	mr r4, r24
/* 8045B2E4 00458224  4B BC B4 D5 */	bl __ct__10JSUPtrLinkFPv
/* 8045B2E8 00458228  38 00 40 29 */	li r0, 0x4029
/* 8045B2EC 0045822C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B2F0:
/* 8045B2F0 00458230  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B2F4 00458234  28 00 00 00 */	cmplwi r0, 0
/* 8045B2F8 00458238  40 82 00 08 */	bne .L_8045B300
/* 8045B2FC 0045823C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B300:
/* 8045B300 00458240  7F 23 CB 78 */	mr r3, r25
/* 8045B304 00458244  7F 04 C3 78 */	mr r4, r24
/* 8045B308 00458248  4B BC B5 DD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B30C 0045824C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B310 00458250  38 60 00 14 */	li r3, 0x14
/* 8045B314 00458254  38 A0 FF FC */	li r5, -4
/* 8045B318 00458258  4B BC 8C 29 */	bl __nw__FUlP7JKRHeapi
/* 8045B31C 0045825C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B320 00458260  41 82 00 14 */	beq .L_8045B334
/* 8045B324 00458264  7F 04 C3 78 */	mr r4, r24
/* 8045B328 00458268  4B BC B4 91 */	bl __ct__10JSUPtrLinkFPv
/* 8045B32C 0045826C  38 00 40 26 */	li r0, 0x4026
/* 8045B330 00458270  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B334:
/* 8045B334 00458274  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B338 00458278  28 00 00 00 */	cmplwi r0, 0
/* 8045B33C 0045827C  40 82 00 08 */	bne .L_8045B344
/* 8045B340 00458280  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B344:
/* 8045B344 00458284  7F 23 CB 78 */	mr r3, r25
/* 8045B348 00458288  7F 04 C3 78 */	mr r4, r24
/* 8045B34C 0045828C  4B BC B5 99 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B350 00458290  48 00 04 24 */	b .L_8045B774
.L_8045B354:
/* 8045B354 00458294  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B358 00458298  38 60 00 14 */	li r3, 0x14
/* 8045B35C 0045829C  38 A0 FF FC */	li r5, -4
/* 8045B360 004582A0  4B BC 8B E1 */	bl __nw__FUlP7JKRHeapi
/* 8045B364 004582A4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B368 004582A8  41 82 00 14 */	beq .L_8045B37C
/* 8045B36C 004582AC  7F 04 C3 78 */	mr r4, r24
/* 8045B370 004582B0  4B BC B4 49 */	bl __ct__10JSUPtrLinkFPv
/* 8045B374 004582B4  38 00 40 29 */	li r0, 0x4029
/* 8045B378 004582B8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B37C:
/* 8045B37C 004582BC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B380 004582C0  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B384 004582C4  28 00 00 00 */	cmplwi r0, 0
/* 8045B388 004582C8  40 82 00 08 */	bne .L_8045B390
/* 8045B38C 004582CC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B390:
/* 8045B390 004582D0  7F 23 CB 78 */	mr r3, r25
/* 8045B394 004582D4  7F 04 C3 78 */	mr r4, r24
/* 8045B398 004582D8  4B BC B5 4D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B39C 004582DC  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B3A0 004582E0  38 60 00 14 */	li r3, 0x14
/* 8045B3A4 004582E4  38 A0 FF FC */	li r5, -4
/* 8045B3A8 004582E8  4B BC 8B 99 */	bl __nw__FUlP7JKRHeapi
/* 8045B3AC 004582EC  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B3B0 004582F0  41 82 00 14 */	beq .L_8045B3C4
/* 8045B3B4 004582F4  7F 04 C3 78 */	mr r4, r24
/* 8045B3B8 004582F8  4B BC B4 01 */	bl __ct__10JSUPtrLinkFPv
/* 8045B3BC 004582FC  38 00 40 27 */	li r0, 0x4027
/* 8045B3C0 00458300  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B3C4:
/* 8045B3C4 00458304  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B3C8 00458308  28 00 00 00 */	cmplwi r0, 0
/* 8045B3CC 0045830C  40 82 00 08 */	bne .L_8045B3D4
/* 8045B3D0 00458310  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B3D4:
/* 8045B3D4 00458314  7F 23 CB 78 */	mr r3, r25
/* 8045B3D8 00458318  7F 04 C3 78 */	mr r4, r24
/* 8045B3DC 0045831C  4B BC B5 09 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B3E0 00458320  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B3E4 00458324  38 60 00 14 */	li r3, 0x14
/* 8045B3E8 00458328  38 A0 FF FC */	li r5, -4
/* 8045B3EC 0045832C  4B BC 8B 55 */	bl __nw__FUlP7JKRHeapi
/* 8045B3F0 00458330  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B3F4 00458334  41 82 00 14 */	beq .L_8045B408
/* 8045B3F8 00458338  7F 04 C3 78 */	mr r4, r24
/* 8045B3FC 0045833C  4B BC B3 BD */	bl __ct__10JSUPtrLinkFPv
/* 8045B400 00458340  38 00 40 24 */	li r0, 0x4024
/* 8045B404 00458344  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B408:
/* 8045B408 00458348  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B40C 0045834C  28 00 00 00 */	cmplwi r0, 0
/* 8045B410 00458350  40 82 00 08 */	bne .L_8045B418
/* 8045B414 00458354  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B418:
/* 8045B418 00458358  7F 23 CB 78 */	mr r3, r25
/* 8045B41C 0045835C  7F 04 C3 78 */	mr r4, r24
/* 8045B420 00458360  4B BC B4 C5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B424 00458364  48 00 03 50 */	b .L_8045B774
.L_8045B428:
/* 8045B428 00458368  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B42C 0045836C  38 60 00 14 */	li r3, 0x14
/* 8045B430 00458370  38 A0 FF FC */	li r5, -4
/* 8045B434 00458374  4B BC 8B 0D */	bl __nw__FUlP7JKRHeapi
/* 8045B438 00458378  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B43C 0045837C  41 82 00 14 */	beq .L_8045B450
/* 8045B440 00458380  7F 04 C3 78 */	mr r4, r24
/* 8045B444 00458384  4B BC B3 75 */	bl __ct__10JSUPtrLinkFPv
/* 8045B448 00458388  38 00 40 29 */	li r0, 0x4029
/* 8045B44C 0045838C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B450:
/* 8045B450 00458390  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B454 00458394  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B458 00458398  28 00 00 00 */	cmplwi r0, 0
/* 8045B45C 0045839C  40 82 00 08 */	bne .L_8045B464
/* 8045B460 004583A0  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B464:
/* 8045B464 004583A4  7F 23 CB 78 */	mr r3, r25
/* 8045B468 004583A8  7F 04 C3 78 */	mr r4, r24
/* 8045B46C 004583AC  4B BC B4 79 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B470 004583B0  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B474 004583B4  38 60 00 14 */	li r3, 0x14
/* 8045B478 004583B8  38 A0 FF FC */	li r5, -4
/* 8045B47C 004583BC  4B BC 8A C5 */	bl __nw__FUlP7JKRHeapi
/* 8045B480 004583C0  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B484 004583C4  41 82 00 14 */	beq .L_8045B498
/* 8045B488 004583C8  7F 04 C3 78 */	mr r4, r24
/* 8045B48C 004583CC  4B BC B3 2D */	bl __ct__10JSUPtrLinkFPv
/* 8045B490 004583D0  38 00 40 27 */	li r0, 0x4027
/* 8045B494 004583D4  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B498:
/* 8045B498 004583D8  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B49C 004583DC  28 00 00 00 */	cmplwi r0, 0
/* 8045B4A0 004583E0  40 82 00 08 */	bne .L_8045B4A8
/* 8045B4A4 004583E4  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B4A8:
/* 8045B4A8 004583E8  7F 23 CB 78 */	mr r3, r25
/* 8045B4AC 004583EC  7F 04 C3 78 */	mr r4, r24
/* 8045B4B0 004583F0  4B BC B4 35 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B4B4 004583F4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B4B8 004583F8  38 60 00 14 */	li r3, 0x14
/* 8045B4BC 004583FC  38 A0 FF FC */	li r5, -4
/* 8045B4C0 00458400  4B BC 8A 81 */	bl __nw__FUlP7JKRHeapi
/* 8045B4C4 00458404  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B4C8 00458408  41 82 00 14 */	beq .L_8045B4DC
/* 8045B4CC 0045840C  7F 04 C3 78 */	mr r4, r24
/* 8045B4D0 00458410  4B BC B2 E9 */	bl __ct__10JSUPtrLinkFPv
/* 8045B4D4 00458414  38 00 40 25 */	li r0, 0x4025
/* 8045B4D8 00458418  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B4DC:
/* 8045B4DC 0045841C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B4E0 00458420  28 00 00 00 */	cmplwi r0, 0
/* 8045B4E4 00458424  40 82 00 08 */	bne .L_8045B4EC
/* 8045B4E8 00458428  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B4EC:
/* 8045B4EC 0045842C  7F 23 CB 78 */	mr r3, r25
/* 8045B4F0 00458430  7F 04 C3 78 */	mr r4, r24
/* 8045B4F4 00458434  4B BC B3 F1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B4F8 00458438  48 00 02 7C */	b .L_8045B774
.L_8045B4FC:
/* 8045B4FC 0045843C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B500 00458440  38 60 00 14 */	li r3, 0x14
/* 8045B504 00458444  38 A0 FF FC */	li r5, -4
/* 8045B508 00458448  4B BC 8A 39 */	bl __nw__FUlP7JKRHeapi
/* 8045B50C 0045844C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B510 00458450  41 82 00 14 */	beq .L_8045B524
/* 8045B514 00458454  7F 04 C3 78 */	mr r4, r24
/* 8045B518 00458458  4B BC B2 A1 */	bl __ct__10JSUPtrLinkFPv
/* 8045B51C 0045845C  38 00 40 29 */	li r0, 0x4029
/* 8045B520 00458460  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B524:
/* 8045B524 00458464  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B528 00458468  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B52C 0045846C  28 00 00 00 */	cmplwi r0, 0
/* 8045B530 00458470  40 82 00 08 */	bne .L_8045B538
/* 8045B534 00458474  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B538:
/* 8045B538 00458478  7F 23 CB 78 */	mr r3, r25
/* 8045B53C 0045847C  7F 04 C3 78 */	mr r4, r24
/* 8045B540 00458480  4B BC B3 A5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B544 00458484  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B548 00458488  38 60 00 14 */	li r3, 0x14
/* 8045B54C 0045848C  38 A0 FF FC */	li r5, -4
/* 8045B550 00458490  4B BC 89 F1 */	bl __nw__FUlP7JKRHeapi
/* 8045B554 00458494  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B558 00458498  41 82 00 14 */	beq .L_8045B56C
/* 8045B55C 0045849C  7F 04 C3 78 */	mr r4, r24
/* 8045B560 004584A0  4B BC B2 59 */	bl __ct__10JSUPtrLinkFPv
/* 8045B564 004584A4  38 00 40 27 */	li r0, 0x4027
/* 8045B568 004584A8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B56C:
/* 8045B56C 004584AC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B570 004584B0  28 00 00 00 */	cmplwi r0, 0
/* 8045B574 004584B4  40 82 00 08 */	bne .L_8045B57C
/* 8045B578 004584B8  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B57C:
/* 8045B57C 004584BC  7F 23 CB 78 */	mr r3, r25
/* 8045B580 004584C0  7F 04 C3 78 */	mr r4, r24
/* 8045B584 004584C4  4B BC B3 61 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B588 004584C8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B58C 004584CC  38 60 00 14 */	li r3, 0x14
/* 8045B590 004584D0  38 A0 FF FC */	li r5, -4
/* 8045B594 004584D4  4B BC 89 AD */	bl __nw__FUlP7JKRHeapi
/* 8045B598 004584D8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B59C 004584DC  41 82 00 14 */	beq .L_8045B5B0
/* 8045B5A0 004584E0  7F 04 C3 78 */	mr r4, r24
/* 8045B5A4 004584E4  4B BC B2 15 */	bl __ct__10JSUPtrLinkFPv
/* 8045B5A8 004584E8  38 00 40 25 */	li r0, 0x4025
/* 8045B5AC 004584EC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B5B0:
/* 8045B5B0 004584F0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B5B4 004584F4  28 00 00 00 */	cmplwi r0, 0
/* 8045B5B8 004584F8  40 82 00 08 */	bne .L_8045B5C0
/* 8045B5BC 004584FC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B5C0:
/* 8045B5C0 00458500  7F 23 CB 78 */	mr r3, r25
/* 8045B5C4 00458504  7F 04 C3 78 */	mr r4, r24
/* 8045B5C8 00458508  4B BC B3 1D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B5CC 0045850C  48 00 01 A8 */	b .L_8045B774
.L_8045B5D0:
/* 8045B5D0 00458510  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B5D4 00458514  38 60 00 14 */	li r3, 0x14
/* 8045B5D8 00458518  38 A0 FF FC */	li r5, -4
/* 8045B5DC 0045851C  4B BC 89 65 */	bl __nw__FUlP7JKRHeapi
/* 8045B5E0 00458520  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B5E4 00458524  41 82 00 14 */	beq .L_8045B5F8
/* 8045B5E8 00458528  7F 04 C3 78 */	mr r4, r24
/* 8045B5EC 0045852C  4B BC B1 CD */	bl __ct__10JSUPtrLinkFPv
/* 8045B5F0 00458530  38 00 40 29 */	li r0, 0x4029
/* 8045B5F4 00458534  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B5F8:
/* 8045B5F8 00458538  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B5FC 0045853C  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B600 00458540  28 00 00 00 */	cmplwi r0, 0
/* 8045B604 00458544  40 82 00 08 */	bne .L_8045B60C
/* 8045B608 00458548  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B60C:
/* 8045B60C 0045854C  7F 23 CB 78 */	mr r3, r25
/* 8045B610 00458550  7F 04 C3 78 */	mr r4, r24
/* 8045B614 00458554  4B BC B2 D1 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B618 00458558  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B61C 0045855C  38 60 00 14 */	li r3, 0x14
/* 8045B620 00458560  38 A0 FF FC */	li r5, -4
/* 8045B624 00458564  4B BC 89 1D */	bl __nw__FUlP7JKRHeapi
/* 8045B628 00458568  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B62C 0045856C  41 82 00 14 */	beq .L_8045B640
/* 8045B630 00458570  7F 04 C3 78 */	mr r4, r24
/* 8045B634 00458574  4B BC B1 85 */	bl __ct__10JSUPtrLinkFPv
/* 8045B638 00458578  38 00 40 27 */	li r0, 0x4027
/* 8045B63C 0045857C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B640:
/* 8045B640 00458580  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B644 00458584  28 00 00 00 */	cmplwi r0, 0
/* 8045B648 00458588  40 82 00 08 */	bne .L_8045B650
/* 8045B64C 0045858C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B650:
/* 8045B650 00458590  7F 23 CB 78 */	mr r3, r25
/* 8045B654 00458594  7F 04 C3 78 */	mr r4, r24
/* 8045B658 00458598  4B BC B2 8D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B65C 0045859C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B660 004585A0  38 60 00 14 */	li r3, 0x14
/* 8045B664 004585A4  38 A0 FF FC */	li r5, -4
/* 8045B668 004585A8  4B BC 88 D9 */	bl __nw__FUlP7JKRHeapi
/* 8045B66C 004585AC  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B670 004585B0  41 82 00 14 */	beq .L_8045B684
/* 8045B674 004585B4  7F 04 C3 78 */	mr r4, r24
/* 8045B678 004585B8  4B BC B1 41 */	bl __ct__10JSUPtrLinkFPv
/* 8045B67C 004585BC  38 00 40 25 */	li r0, 0x4025
/* 8045B680 004585C0  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B684:
/* 8045B684 004585C4  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B688 004585C8  28 00 00 00 */	cmplwi r0, 0
/* 8045B68C 004585CC  40 82 00 08 */	bne .L_8045B694
/* 8045B690 004585D0  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B694:
/* 8045B694 004585D4  7F 23 CB 78 */	mr r3, r25
/* 8045B698 004585D8  7F 04 C3 78 */	mr r4, r24
/* 8045B69C 004585DC  4B BC B2 49 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B6A0 004585E0  48 00 00 D4 */	b .L_8045B774
.L_8045B6A4:
/* 8045B6A4 004585E4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B6A8 004585E8  38 60 00 14 */	li r3, 0x14
/* 8045B6AC 004585EC  38 A0 FF FC */	li r5, -4
/* 8045B6B0 004585F0  4B BC 88 91 */	bl __nw__FUlP7JKRHeapi
/* 8045B6B4 004585F4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B6B8 004585F8  41 82 00 14 */	beq .L_8045B6CC
/* 8045B6BC 004585FC  7F 04 C3 78 */	mr r4, r24
/* 8045B6C0 00458600  4B BC B0 F9 */	bl __ct__10JSUPtrLinkFPv
/* 8045B6C4 00458604  38 00 40 29 */	li r0, 0x4029
/* 8045B6C8 00458608  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B6CC:
/* 8045B6CC 0045860C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B6D0 00458610  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045B6D4 00458614  28 00 00 00 */	cmplwi r0, 0
/* 8045B6D8 00458618  40 82 00 08 */	bne .L_8045B6E0
/* 8045B6DC 0045861C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B6E0:
/* 8045B6E0 00458620  7F 23 CB 78 */	mr r3, r25
/* 8045B6E4 00458624  7F 04 C3 78 */	mr r4, r24
/* 8045B6E8 00458628  4B BC B1 FD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B6EC 0045862C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B6F0 00458630  38 60 00 14 */	li r3, 0x14
/* 8045B6F4 00458634  38 A0 FF FC */	li r5, -4
/* 8045B6F8 00458638  4B BC 88 49 */	bl __nw__FUlP7JKRHeapi
/* 8045B6FC 0045863C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B700 00458640  41 82 00 14 */	beq .L_8045B714
/* 8045B704 00458644  7F 04 C3 78 */	mr r4, r24
/* 8045B708 00458648  4B BC B0 B1 */	bl __ct__10JSUPtrLinkFPv
/* 8045B70C 0045864C  38 00 40 27 */	li r0, 0x4027
/* 8045B710 00458650  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B714:
/* 8045B714 00458654  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B718 00458658  28 00 00 00 */	cmplwi r0, 0
/* 8045B71C 0045865C  40 82 00 08 */	bne .L_8045B724
/* 8045B720 00458660  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B724:
/* 8045B724 00458664  7F 23 CB 78 */	mr r3, r25
/* 8045B728 00458668  7F 04 C3 78 */	mr r4, r24
/* 8045B72C 0045866C  4B BC B1 B9 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B730 00458670  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B734 00458674  38 60 00 14 */	li r3, 0x14
/* 8045B738 00458678  38 A0 FF FC */	li r5, -4
/* 8045B73C 0045867C  4B BC 88 05 */	bl __nw__FUlP7JKRHeapi
/* 8045B740 00458680  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B744 00458684  41 82 00 14 */	beq .L_8045B758
/* 8045B748 00458688  7F 04 C3 78 */	mr r4, r24
/* 8045B74C 0045868C  4B BC B0 6D */	bl __ct__10JSUPtrLinkFPv
/* 8045B750 00458690  38 00 40 25 */	li r0, 0x4025
/* 8045B754 00458694  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045B758:
/* 8045B758 00458698  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045B75C 0045869C  28 00 00 00 */	cmplwi r0, 0
/* 8045B760 004586A0  40 82 00 08 */	bne .L_8045B768
/* 8045B764 004586A4  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045B768:
/* 8045B768 004586A8  7F 23 CB 78 */	mr r3, r25
/* 8045B76C 004586AC  7F 04 C3 78 */	mr r4, r24
/* 8045B770 004586B0  4B BC B1 75 */	bl append__10JSUPtrListFP10JSUPtrLink
.L_8045B774:
/* 8045B774 004586B4  81 1F 00 D8 */	lwz r8, 0xd8(r31)
/* 8045B778 004586B8  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045B77C 004586BC  80 FF 00 DC */	lwz r7, 0xdc(r31)
/* 8045B780 004586C0  38 81 00 44 */	addi r4, r1, 0x44
/* 8045B784 004586C4  80 DF 00 E0 */	lwz r6, 0xe0(r31)
/* 8045B788 004586C8  80 BF 00 E4 */	lwz r5, 0xe4(r31)
/* 8045B78C 004586CC  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 8045B790 004586D0  C0 02 28 CC */	lfs f0, lbl_80520C2C@sda21(r2)
/* 8045B794 004586D4  91 01 00 C0 */	stw r8, 0xc0(r1)
/* 8045B798 004586D8  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8045B79C 004586DC  90 E1 00 C4 */	stw r7, 0xc4(r1)
/* 8045B7A0 004586E0  90 C1 00 C8 */	stw r6, 0xc8(r1)
/* 8045B7A4 004586E4  90 A1 00 CC */	stw r5, 0xcc(r1)
/* 8045B7A8 004586E8  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8045B7AC 004586EC  91 01 00 44 */	stw r8, 0x44(r1)
/* 8045B7B0 004586F0  90 E1 00 48 */	stw r7, 0x48(r1)
/* 8045B7B4 004586F4  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 8045B7B8 004586F8  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8045B7BC 004586FC  90 01 00 54 */	stw r0, 0x54(r1)
/* 8045B7C0 00458700  48 00 08 9D */	bl setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
/* 8045B7C4 00458704  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045B7C8 00458708  7F A4 EB 78 */	mr r4, r29
/* 8045B7CC 0045870C  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045B7D0 00458710  4B EE 4B 5D */	bl build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
/* 8045B7D4 00458714  7F A3 EB 78 */	mr r3, r29
/* 8045B7D8 00458718  48 00 08 11 */	bl SetNoYOfset__3PSMFPQ28PSSystem8EnvSeMgr
/* 8045B7DC 0045871C  38 60 00 54 */	li r3, 0x54
/* 8045B7E0 00458720  4B BC 86 C5 */	bl __nw__FUl
/* 8045B7E4 00458724  7C 79 1B 79 */	or. r25, r3, r3
/* 8045B7E8 00458728  41 82 00 38 */	beq .L_8045B820
/* 8045B7EC 0045872C  C0 42 28 C0 */	lfs f2, lbl_80520C20@sda21(r2)
/* 8045B7F0 00458730  7F 38 CB 78 */	mr r24, r25
/* 8045B7F4 00458734  C0 22 28 C4 */	lfs f1, lbl_80520C24@sda21(r2)
/* 8045B7F8 00458738  38 80 30 79 */	li r4, 0x3079
/* 8045B7FC 0045873C  FC 60 10 90 */	fmr f3, f2
/* 8045B800 00458740  C0 82 28 D0 */	lfs f4, lbl_80520C30@sda21(r2)
/* 8045B804 00458744  C0 A2 28 D4 */	lfs f5, lbl_80520C34@sda21(r2)
/* 8045B808 00458748  4B EE 47 59 */	bl __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
/* 8045B80C 0045874C  3C 60 80 4F */	lis r3, __vt__Q23PSM12Env_Pollutin@ha
/* 8045B810 00458750  C0 02 28 C0 */	lfs f0, lbl_80520C20@sda21(r2)
/* 8045B814 00458754  38 03 E3 58 */	addi r0, r3, __vt__Q23PSM12Env_Pollutin@l
/* 8045B818 00458758  90 18 00 10 */	stw r0, 0x10(r24)
/* 8045B81C 0045875C  D0 18 00 50 */	stfs f0, 0x50(r24)
.L_8045B820:
/* 8045B820 00458760  7F A3 EB 78 */	mr r3, r29
/* 8045B824 00458764  7F 24 CB 78 */	mr r4, r25
/* 8045B828 00458768  4B BC B0 BD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B82C 0045876C  38 60 00 54 */	li r3, 0x54
/* 8045B830 00458770  4B BC 86 75 */	bl __nw__FUl
/* 8045B834 00458774  7C 79 1B 79 */	or. r25, r3, r3
/* 8045B838 00458778  41 82 00 38 */	beq .L_8045B870
/* 8045B83C 0045877C  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045B840 00458780  7F 38 CB 78 */	mr r24, r25
/* 8045B844 00458784  C0 42 28 C4 */	lfs f2, lbl_80520C24@sda21(r2)
/* 8045B848 00458788  38 80 30 7A */	li r4, 0x307a
/* 8045B84C 0045878C  FC 60 08 90 */	fmr f3, f1
/* 8045B850 00458790  C0 82 28 D0 */	lfs f4, lbl_80520C30@sda21(r2)
/* 8045B854 00458794  C0 A2 28 D4 */	lfs f5, lbl_80520C34@sda21(r2)
/* 8045B858 00458798  4B EE 47 09 */	bl __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
/* 8045B85C 0045879C  3C 60 80 4F */	lis r3, __vt__Q23PSM12Env_Pollutin@ha
/* 8045B860 004587A0  C0 02 28 C0 */	lfs f0, lbl_80520C20@sda21(r2)
/* 8045B864 004587A4  38 03 E3 58 */	addi r0, r3, __vt__Q23PSM12Env_Pollutin@l
/* 8045B868 004587A8  90 18 00 10 */	stw r0, 0x10(r24)
/* 8045B86C 004587AC  D0 18 00 50 */	stfs f0, 0x50(r24)
.L_8045B870:
/* 8045B870 004587B0  7F A3 EB 78 */	mr r3, r29
/* 8045B874 004587B4  7F 24 CB 78 */	mr r4, r25
/* 8045B878 004587B8  4B BC B0 6D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B87C 004587BC  48 00 06 80 */	b .L_8045BEFC
.L_8045B880:
/* 8045B880 004587C0  2C 1E 00 04 */	cmpwi r30, 4
/* 8045B884 004587C4  41 82 04 C8 */	beq .L_8045BD4C
/* 8045B888 004587C8  40 80 00 1C */	bge .L_8045B8A4
/* 8045B88C 004587CC  2C 1E 00 02 */	cmpwi r30, 2
/* 8045B890 004587D0  41 82 01 10 */	beq .L_8045B9A0
/* 8045B894 004587D4  40 80 02 7C */	bge .L_8045BB10
/* 8045B898 004587D8  2C 1E 00 01 */	cmpwi r30, 1
/* 8045B89C 004587DC  40 80 00 14 */	bge .L_8045B8B0
/* 8045B8A0 004587E0  48 00 06 5C */	b .L_8045BEFC
.L_8045B8A4:
/* 8045B8A4 004587E4  2C 1E 00 14 */	cmpwi r30, 0x14
/* 8045B8A8 004587E8  41 82 00 08 */	beq .L_8045B8B0
/* 8045B8AC 004587EC  48 00 06 50 */	b .L_8045BEFC
.L_8045B8B0:
/* 8045B8B0 004587F0  38 60 00 18 */	li r3, 0x18
/* 8045B8B4 004587F4  4B BC 85 F1 */	bl __nw__FUl
/* 8045B8B8 004587F8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B8BC 004587FC  41 82 00 0C */	beq .L_8045B8C8
/* 8045B8C0 00458800  48 00 14 C9 */	bl __ct__Q28PSSystem8EnvSeMgrFv
/* 8045B8C4 00458804  7C 78 1B 78 */	mr r24, r3
.L_8045B8C8:
/* 8045B8C8 00458808  7F 1D C3 78 */	mr r29, r24
/* 8045B8CC 0045880C  38 60 00 50 */	li r3, 0x50
/* 8045B8D0 00458810  4B BC 85 D5 */	bl __nw__FUl
/* 8045B8D4 00458814  7C 79 1B 79 */	or. r25, r3, r3
/* 8045B8D8 00458818  41 82 00 24 */	beq .L_8045B8FC
/* 8045B8DC 0045881C  C0 22 28 C4 */	lfs f1, lbl_80520C24@sda21(r2)
/* 8045B8E0 00458820  38 80 40 2D */	li r4, 0x402d
/* 8045B8E4 00458824  C0 42 28 D8 */	lfs f2, lbl_80520C38@sda21(r2)
/* 8045B8E8 00458828  C0 62 28 C0 */	lfs f3, lbl_80520C20@sda21(r2)
/* 8045B8EC 0045882C  C0 82 28 D0 */	lfs f4, lbl_80520C30@sda21(r2)
/* 8045B8F0 00458830  C0 A2 28 D4 */	lfs f5, lbl_80520C34@sda21(r2)
/* 8045B8F4 00458834  4B EE 46 6D */	bl __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
/* 8045B8F8 00458838  7C 79 1B 78 */	mr r25, r3
.L_8045B8FC:
/* 8045B8FC 0045883C  28 19 00 00 */	cmplwi r25, 0
/* 8045B900 00458840  40 82 00 18 */	bne .L_8045B918
/* 8045B904 00458844  38 7F 00 0C */	addi r3, r31, 0xc
/* 8045B908 00458848  38 BF 00 24 */	addi r5, r31, 0x24
/* 8045B90C 0045884C  38 80 03 0A */	li r4, 0x30a
/* 8045B910 00458850  4C C6 31 82 */	crclr 6
/* 8045B914 00458854  4B BC ED 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045B918:
/* 8045B918 00458858  7F 23 CB 78 */	mr r3, r25
/* 8045B91C 0045885C  38 80 00 01 */	li r4, 1
/* 8045B920 00458860  38 A0 00 00 */	li r5, 0
/* 8045B924 00458864  4B EE 46 C5 */	bl setDirection__Q26PSGame13EnvSe_AutoPanFbb
/* 8045B928 00458868  7F 03 C3 78 */	mr r3, r24
/* 8045B92C 0045886C  7F 24 CB 78 */	mr r4, r25
/* 8045B930 00458870  4B BC AF B5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B934 00458874  38 60 00 50 */	li r3, 0x50
/* 8045B938 00458878  4B BC 85 6D */	bl __nw__FUl
/* 8045B93C 0045887C  7C 79 1B 79 */	or. r25, r3, r3
/* 8045B940 00458880  41 82 00 24 */	beq .L_8045B964
/* 8045B944 00458884  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045B948 00458888  38 80 40 2D */	li r4, 0x402d
/* 8045B94C 0045888C  C0 42 28 D8 */	lfs f2, lbl_80520C38@sda21(r2)
/* 8045B950 00458890  FC 60 08 90 */	fmr f3, f1
/* 8045B954 00458894  C0 82 28 D0 */	lfs f4, lbl_80520C30@sda21(r2)
/* 8045B958 00458898  C0 A2 28 D4 */	lfs f5, lbl_80520C34@sda21(r2)
/* 8045B95C 0045889C  4B EE 46 05 */	bl __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
/* 8045B960 004588A0  7C 79 1B 78 */	mr r25, r3
.L_8045B964:
/* 8045B964 004588A4  28 19 00 00 */	cmplwi r25, 0
/* 8045B968 004588A8  40 82 00 18 */	bne .L_8045B980
/* 8045B96C 004588AC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8045B970 004588B0  38 BF 00 24 */	addi r5, r31, 0x24
/* 8045B974 004588B4  38 80 03 11 */	li r4, 0x311
/* 8045B978 004588B8  4C C6 31 82 */	crclr 6
/* 8045B97C 004588BC  4B BC EC C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045B980:
/* 8045B980 004588C0  7F 23 CB 78 */	mr r3, r25
/* 8045B984 004588C4  38 80 00 00 */	li r4, 0
/* 8045B988 004588C8  38 A0 00 01 */	li r5, 1
/* 8045B98C 004588CC  4B EE 46 5D */	bl setDirection__Q26PSGame13EnvSe_AutoPanFbb
/* 8045B990 004588D0  7F 03 C3 78 */	mr r3, r24
/* 8045B994 004588D4  7F 24 CB 78 */	mr r4, r25
/* 8045B998 004588D8  4B BC AF 4D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045B99C 004588DC  48 00 05 60 */	b .L_8045BEFC
.L_8045B9A0:
/* 8045B9A0 004588E0  38 60 00 18 */	li r3, 0x18
/* 8045B9A4 004588E4  4B BC 85 01 */	bl __nw__FUl
/* 8045B9A8 004588E8  7C 7A 1B 79 */	or. r26, r3, r3
/* 8045B9AC 004588EC  41 82 00 0C */	beq .L_8045B9B8
/* 8045B9B0 004588F0  48 00 13 D9 */	bl __ct__Q28PSSystem8EnvSeMgrFv
/* 8045B9B4 004588F4  7C 7A 1B 78 */	mr r26, r3
.L_8045B9B8:
/* 8045B9B8 004588F8  7F 5D D3 78 */	mr r29, r26
/* 8045B9BC 004588FC  38 60 00 14 */	li r3, 0x14
/* 8045B9C0 00458900  4B BC 84 E5 */	bl __nw__FUl
/* 8045B9C4 00458904  7C 7C 1B 79 */	or. r28, r3, r3
/* 8045B9C8 00458908  41 82 00 10 */	beq .L_8045B9D8
/* 8045B9CC 0045890C  7F 44 D3 78 */	mr r4, r26
/* 8045B9D0 00458910  48 00 10 55 */	bl __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
/* 8045B9D4 00458914  7C 7C 1B 78 */	mr r28, r3
.L_8045B9D8:
/* 8045B9D8 00458918  93 9B 00 58 */	stw r28, 0x58(r27)
/* 8045B9DC 0045891C  38 60 00 14 */	li r3, 0x14
/* 8045B9E0 00458920  38 A0 FF FC */	li r5, -4
/* 8045B9E4 00458924  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045B9E8 00458928  4B BC 85 59 */	bl __nw__FUlP7JKRHeapi
/* 8045B9EC 0045892C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045B9F0 00458930  41 82 00 14 */	beq .L_8045BA04
/* 8045B9F4 00458934  7F 04 C3 78 */	mr r4, r24
/* 8045B9F8 00458938  4B BC AD C1 */	bl __ct__10JSUPtrLinkFPv
/* 8045B9FC 0045893C  38 00 40 37 */	li r0, 0x4037
/* 8045BA00 00458940  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BA04:
/* 8045BA04 00458944  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BA08 00458948  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045BA0C 0045894C  28 00 00 00 */	cmplwi r0, 0
/* 8045BA10 00458950  40 82 00 08 */	bne .L_8045BA18
/* 8045BA14 00458954  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BA18:
/* 8045BA18 00458958  7F 23 CB 78 */	mr r3, r25
/* 8045BA1C 0045895C  7F 04 C3 78 */	mr r4, r24
/* 8045BA20 00458960  4B BC AE C5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BA24 00458964  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BA28 00458968  38 60 00 14 */	li r3, 0x14
/* 8045BA2C 0045896C  38 A0 FF FC */	li r5, -4
/* 8045BA30 00458970  4B BC 85 11 */	bl __nw__FUlP7JKRHeapi
/* 8045BA34 00458974  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BA38 00458978  41 82 00 14 */	beq .L_8045BA4C
/* 8045BA3C 0045897C  7F 04 C3 78 */	mr r4, r24
/* 8045BA40 00458980  4B BC AD 79 */	bl __ct__10JSUPtrLinkFPv
/* 8045BA44 00458984  38 00 40 38 */	li r0, 0x4038
/* 8045BA48 00458988  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BA4C:
/* 8045BA4C 0045898C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BA50 00458990  28 00 00 00 */	cmplwi r0, 0
/* 8045BA54 00458994  40 82 00 08 */	bne .L_8045BA5C
/* 8045BA58 00458998  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BA5C:
/* 8045BA5C 0045899C  7F 23 CB 78 */	mr r3, r25
/* 8045BA60 004589A0  7F 04 C3 78 */	mr r4, r24
/* 8045BA64 004589A4  4B BC AE 81 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BA68 004589A8  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BA6C 004589AC  38 60 00 14 */	li r3, 0x14
/* 8045BA70 004589B0  38 A0 FF FC */	li r5, -4
/* 8045BA74 004589B4  4B BC 84 CD */	bl __nw__FUlP7JKRHeapi
/* 8045BA78 004589B8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BA7C 004589BC  41 82 00 14 */	beq .L_8045BA90
/* 8045BA80 004589C0  7F 04 C3 78 */	mr r4, r24
/* 8045BA84 004589C4  4B BC AD 35 */	bl __ct__10JSUPtrLinkFPv
/* 8045BA88 004589C8  38 00 40 39 */	li r0, 0x4039
/* 8045BA8C 004589CC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BA90:
/* 8045BA90 004589D0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BA94 004589D4  28 00 00 00 */	cmplwi r0, 0
/* 8045BA98 004589D8  40 82 00 08 */	bne .L_8045BAA0
/* 8045BA9C 004589DC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BAA0:
/* 8045BAA0 004589E0  7F 23 CB 78 */	mr r3, r25
/* 8045BAA4 004589E4  7F 04 C3 78 */	mr r4, r24
/* 8045BAA8 004589E8  4B BC AE 3D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BAAC 004589EC  81 1F 00 EC */	lwz r8, 0xec(r31)
/* 8045BAB0 004589F0  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BAB4 004589F4  80 FF 00 F0 */	lwz r7, 0xf0(r31)
/* 8045BAB8 004589F8  38 81 00 30 */	addi r4, r1, 0x30
/* 8045BABC 004589FC  80 DF 00 F4 */	lwz r6, 0xf4(r31)
/* 8045BAC0 00458A00  80 BF 00 F8 */	lwz r5, 0xf8(r31)
/* 8045BAC4 00458A04  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 8045BAC8 00458A08  C0 02 28 DC */	lfs f0, lbl_80520C3C@sda21(r2)
/* 8045BACC 00458A0C  91 01 00 AC */	stw r8, 0xac(r1)
/* 8045BAD0 00458A10  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8045BAD4 00458A14  90 E1 00 B0 */	stw r7, 0xb0(r1)
/* 8045BAD8 00458A18  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 8045BADC 00458A1C  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 8045BAE0 00458A20  90 01 00 BC */	stw r0, 0xbc(r1)
/* 8045BAE4 00458A24  91 01 00 30 */	stw r8, 0x30(r1)
/* 8045BAE8 00458A28  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8045BAEC 00458A2C  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8045BAF0 00458A30  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8045BAF4 00458A34  90 01 00 40 */	stw r0, 0x40(r1)
/* 8045BAF8 00458A38  48 00 05 65 */	bl setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
/* 8045BAFC 00458A3C  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045BB00 00458A40  7F 44 D3 78 */	mr r4, r26
/* 8045BB04 00458A44  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BB08 00458A48  4B EE 48 25 */	bl build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
/* 8045BB0C 00458A4C  48 00 03 F0 */	b .L_8045BEFC
.L_8045BB10:
/* 8045BB10 00458A50  38 60 00 18 */	li r3, 0x18
/* 8045BB14 00458A54  4B BC 83 91 */	bl __nw__FUl
/* 8045BB18 00458A58  7C 7A 1B 79 */	or. r26, r3, r3
/* 8045BB1C 00458A5C  41 82 00 0C */	beq .L_8045BB28
/* 8045BB20 00458A60  48 00 12 69 */	bl __ct__Q28PSSystem8EnvSeMgrFv
/* 8045BB24 00458A64  7C 7A 1B 78 */	mr r26, r3
.L_8045BB28:
/* 8045BB28 00458A68  7F 5D D3 78 */	mr r29, r26
/* 8045BB2C 00458A6C  38 60 00 14 */	li r3, 0x14
/* 8045BB30 00458A70  4B BC 83 75 */	bl __nw__FUl
/* 8045BB34 00458A74  7C 7C 1B 79 */	or. r28, r3, r3
/* 8045BB38 00458A78  41 82 00 10 */	beq .L_8045BB48
/* 8045BB3C 00458A7C  7F 44 D3 78 */	mr r4, r26
/* 8045BB40 00458A80  48 00 0E E5 */	bl __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
/* 8045BB44 00458A84  7C 7C 1B 78 */	mr r28, r3
.L_8045BB48:
/* 8045BB48 00458A88  93 9B 00 58 */	stw r28, 0x58(r27)
/* 8045BB4C 00458A8C  38 60 00 14 */	li r3, 0x14
/* 8045BB50 00458A90  38 A0 FF FC */	li r5, -4
/* 8045BB54 00458A94  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BB58 00458A98  4B BC 83 E9 */	bl __nw__FUlP7JKRHeapi
/* 8045BB5C 00458A9C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BB60 00458AA0  41 82 00 14 */	beq .L_8045BB74
/* 8045BB64 00458AA4  7F 04 C3 78 */	mr r4, r24
/* 8045BB68 00458AA8  4B BC AC 51 */	bl __ct__10JSUPtrLinkFPv
/* 8045BB6C 00458AAC  38 00 40 2F */	li r0, 0x402f
/* 8045BB70 00458AB0  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BB74:
/* 8045BB74 00458AB4  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BB78 00458AB8  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045BB7C 00458ABC  28 00 00 00 */	cmplwi r0, 0
/* 8045BB80 00458AC0  40 82 00 08 */	bne .L_8045BB88
/* 8045BB84 00458AC4  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BB88:
/* 8045BB88 00458AC8  7F 23 CB 78 */	mr r3, r25
/* 8045BB8C 00458ACC  7F 04 C3 78 */	mr r4, r24
/* 8045BB90 00458AD0  4B BC AD 55 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BB94 00458AD4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BB98 00458AD8  38 60 00 14 */	li r3, 0x14
/* 8045BB9C 00458ADC  38 A0 FF FC */	li r5, -4
/* 8045BBA0 00458AE0  4B BC 83 A1 */	bl __nw__FUlP7JKRHeapi
/* 8045BBA4 00458AE4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BBA8 00458AE8  41 82 00 14 */	beq .L_8045BBBC
/* 8045BBAC 00458AEC  7F 04 C3 78 */	mr r4, r24
/* 8045BBB0 00458AF0  4B BC AC 09 */	bl __ct__10JSUPtrLinkFPv
/* 8045BBB4 00458AF4  38 00 40 33 */	li r0, 0x4033
/* 8045BBB8 00458AF8  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BBBC:
/* 8045BBBC 00458AFC  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BBC0 00458B00  28 00 00 00 */	cmplwi r0, 0
/* 8045BBC4 00458B04  40 82 00 08 */	bne .L_8045BBCC
/* 8045BBC8 00458B08  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BBCC:
/* 8045BBCC 00458B0C  7F 23 CB 78 */	mr r3, r25
/* 8045BBD0 00458B10  7F 04 C3 78 */	mr r4, r24
/* 8045BBD4 00458B14  4B BC AD 11 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BBD8 00458B18  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BBDC 00458B1C  38 60 00 14 */	li r3, 0x14
/* 8045BBE0 00458B20  38 A0 FF FC */	li r5, -4
/* 8045BBE4 00458B24  4B BC 83 5D */	bl __nw__FUlP7JKRHeapi
/* 8045BBE8 00458B28  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BBEC 00458B2C  41 82 00 14 */	beq .L_8045BC00
/* 8045BBF0 00458B30  7F 04 C3 78 */	mr r4, r24
/* 8045BBF4 00458B34  4B BC AB C5 */	bl __ct__10JSUPtrLinkFPv
/* 8045BBF8 00458B38  38 00 40 35 */	li r0, 0x4035
/* 8045BBFC 00458B3C  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BC00:
/* 8045BC00 00458B40  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BC04 00458B44  28 00 00 00 */	cmplwi r0, 0
/* 8045BC08 00458B48  40 82 00 08 */	bne .L_8045BC10
/* 8045BC0C 00458B4C  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BC10:
/* 8045BC10 00458B50  7F 23 CB 78 */	mr r3, r25
/* 8045BC14 00458B54  7F 04 C3 78 */	mr r4, r24
/* 8045BC18 00458B58  4B BC AC CD */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BC1C 00458B5C  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BC20 00458B60  38 60 00 14 */	li r3, 0x14
/* 8045BC24 00458B64  38 A0 FF FC */	li r5, -4
/* 8045BC28 00458B68  4B BC 83 19 */	bl __nw__FUlP7JKRHeapi
/* 8045BC2C 00458B6C  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BC30 00458B70  41 82 00 14 */	beq .L_8045BC44
/* 8045BC34 00458B74  7F 04 C3 78 */	mr r4, r24
/* 8045BC38 00458B78  4B BC AB 81 */	bl __ct__10JSUPtrLinkFPv
/* 8045BC3C 00458B7C  38 00 40 30 */	li r0, 0x4030
/* 8045BC40 00458B80  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BC44:
/* 8045BC44 00458B84  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BC48 00458B88  28 00 00 00 */	cmplwi r0, 0
/* 8045BC4C 00458B8C  40 82 00 08 */	bne .L_8045BC54
/* 8045BC50 00458B90  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BC54:
/* 8045BC54 00458B94  7F 23 CB 78 */	mr r3, r25
/* 8045BC58 00458B98  7F 04 C3 78 */	mr r4, r24
/* 8045BC5C 00458B9C  4B BC AC 89 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BC60 00458BA0  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BC64 00458BA4  38 60 00 14 */	li r3, 0x14
/* 8045BC68 00458BA8  38 A0 FF FC */	li r5, -4
/* 8045BC6C 00458BAC  4B BC 82 D5 */	bl __nw__FUlP7JKRHeapi
/* 8045BC70 00458BB0  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BC74 00458BB4  41 82 00 14 */	beq .L_8045BC88
/* 8045BC78 00458BB8  7F 04 C3 78 */	mr r4, r24
/* 8045BC7C 00458BBC  4B BC AB 3D */	bl __ct__10JSUPtrLinkFPv
/* 8045BC80 00458BC0  38 00 40 34 */	li r0, 0x4034
/* 8045BC84 00458BC4  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BC88:
/* 8045BC88 00458BC8  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BC8C 00458BCC  28 00 00 00 */	cmplwi r0, 0
/* 8045BC90 00458BD0  40 82 00 08 */	bne .L_8045BC98
/* 8045BC94 00458BD4  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BC98:
/* 8045BC98 00458BD8  7F 23 CB 78 */	mr r3, r25
/* 8045BC9C 00458BDC  7F 04 C3 78 */	mr r4, r24
/* 8045BCA0 00458BE0  4B BC AC 45 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BCA4 00458BE4  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BCA8 00458BE8  38 60 00 14 */	li r3, 0x14
/* 8045BCAC 00458BEC  38 A0 FF FC */	li r5, -4
/* 8045BCB0 00458BF0  4B BC 82 91 */	bl __nw__FUlP7JKRHeapi
/* 8045BCB4 00458BF4  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BCB8 00458BF8  41 82 00 14 */	beq .L_8045BCCC
/* 8045BCBC 00458BFC  7F 04 C3 78 */	mr r4, r24
/* 8045BCC0 00458C00  4B BC AA F9 */	bl __ct__10JSUPtrLinkFPv
/* 8045BCC4 00458C04  38 00 40 36 */	li r0, 0x4036
/* 8045BCC8 00458C08  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BCCC:
/* 8045BCCC 00458C0C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BCD0 00458C10  28 00 00 00 */	cmplwi r0, 0
/* 8045BCD4 00458C14  40 82 00 08 */	bne .L_8045BCDC
/* 8045BCD8 00458C18  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BCDC:
/* 8045BCDC 00458C1C  7F 23 CB 78 */	mr r3, r25
/* 8045BCE0 00458C20  7F 04 C3 78 */	mr r4, r24
/* 8045BCE4 00458C24  4B BC AC 01 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BCE8 00458C28  81 1F 01 00 */	lwz r8, 0x100(r31)
/* 8045BCEC 00458C2C  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BCF0 00458C30  80 FF 01 04 */	lwz r7, 0x104(r31)
/* 8045BCF4 00458C34  38 81 00 1C */	addi r4, r1, 0x1c
/* 8045BCF8 00458C38  80 DF 01 08 */	lwz r6, 0x108(r31)
/* 8045BCFC 00458C3C  80 BF 01 0C */	lwz r5, 0x10c(r31)
/* 8045BD00 00458C40  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 8045BD04 00458C44  C0 02 28 CC */	lfs f0, lbl_80520C2C@sda21(r2)
/* 8045BD08 00458C48  91 01 00 98 */	stw r8, 0x98(r1)
/* 8045BD0C 00458C4C  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8045BD10 00458C50  90 E1 00 9C */	stw r7, 0x9c(r1)
/* 8045BD14 00458C54  90 C1 00 A0 */	stw r6, 0xa0(r1)
/* 8045BD18 00458C58  90 A1 00 A4 */	stw r5, 0xa4(r1)
/* 8045BD1C 00458C5C  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 8045BD20 00458C60  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8045BD24 00458C64  90 E1 00 20 */	stw r7, 0x20(r1)
/* 8045BD28 00458C68  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8045BD2C 00458C6C  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8045BD30 00458C70  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8045BD34 00458C74  48 00 03 29 */	bl setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
/* 8045BD38 00458C78  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045BD3C 00458C7C  7F 44 D3 78 */	mr r4, r26
/* 8045BD40 00458C80  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BD44 00458C84  4B EE 45 E9 */	bl build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
/* 8045BD48 00458C88  48 00 01 B4 */	b .L_8045BEFC
.L_8045BD4C:
/* 8045BD4C 00458C8C  38 60 00 18 */	li r3, 0x18
/* 8045BD50 00458C90  4B BC 81 55 */	bl __nw__FUl
/* 8045BD54 00458C94  7C 7A 1B 79 */	or. r26, r3, r3
/* 8045BD58 00458C98  41 82 00 0C */	beq .L_8045BD64
/* 8045BD5C 00458C9C  48 00 10 2D */	bl __ct__Q28PSSystem8EnvSeMgrFv
/* 8045BD60 00458CA0  7C 7A 1B 78 */	mr r26, r3
.L_8045BD64:
/* 8045BD64 00458CA4  7F 5D D3 78 */	mr r29, r26
/* 8045BD68 00458CA8  38 60 00 14 */	li r3, 0x14
/* 8045BD6C 00458CAC  4B BC 81 39 */	bl __nw__FUl
/* 8045BD70 00458CB0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8045BD74 00458CB4  41 82 00 10 */	beq .L_8045BD84
/* 8045BD78 00458CB8  7F 44 D3 78 */	mr r4, r26
/* 8045BD7C 00458CBC  48 00 0C A9 */	bl __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
/* 8045BD80 00458CC0  7C 7C 1B 78 */	mr r28, r3
.L_8045BD84:
/* 8045BD84 00458CC4  93 9B 00 58 */	stw r28, 0x58(r27)
/* 8045BD88 00458CC8  38 60 00 14 */	li r3, 0x14
/* 8045BD8C 00458CCC  38 A0 FF FC */	li r5, -4
/* 8045BD90 00458CD0  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BD94 00458CD4  4B BC 81 AD */	bl __nw__FUlP7JKRHeapi
/* 8045BD98 00458CD8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BD9C 00458CDC  41 82 00 14 */	beq .L_8045BDB0
/* 8045BDA0 00458CE0  7F 04 C3 78 */	mr r4, r24
/* 8045BDA4 00458CE4  4B BC AA 15 */	bl __ct__10JSUPtrLinkFPv
/* 8045BDA8 00458CE8  38 00 40 3A */	li r0, 0x403a
/* 8045BDAC 00458CEC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BDB0:
/* 8045BDB0 00458CF0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BDB4 00458CF4  3B 21 01 28 */	addi r25, r1, 0x128
/* 8045BDB8 00458CF8  28 00 00 00 */	cmplwi r0, 0
/* 8045BDBC 00458CFC  40 82 00 08 */	bne .L_8045BDC4
/* 8045BDC0 00458D00  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BDC4:
/* 8045BDC4 00458D04  7F 23 CB 78 */	mr r3, r25
/* 8045BDC8 00458D08  7F 04 C3 78 */	mr r4, r24
/* 8045BDCC 00458D0C  4B BC AB 19 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BDD0 00458D10  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BDD4 00458D14  38 60 00 14 */	li r3, 0x14
/* 8045BDD8 00458D18  38 A0 FF FC */	li r5, -4
/* 8045BDDC 00458D1C  4B BC 81 65 */	bl __nw__FUlP7JKRHeapi
/* 8045BDE0 00458D20  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BDE4 00458D24  41 82 00 14 */	beq .L_8045BDF8
/* 8045BDE8 00458D28  7F 04 C3 78 */	mr r4, r24
/* 8045BDEC 00458D2C  4B BC A9 CD */	bl __ct__10JSUPtrLinkFPv
/* 8045BDF0 00458D30  38 00 40 3B */	li r0, 0x403b
/* 8045BDF4 00458D34  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BDF8:
/* 8045BDF8 00458D38  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BDFC 00458D3C  28 00 00 00 */	cmplwi r0, 0
/* 8045BE00 00458D40  40 82 00 08 */	bne .L_8045BE08
/* 8045BE04 00458D44  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BE08:
/* 8045BE08 00458D48  7F 23 CB 78 */	mr r3, r25
/* 8045BE0C 00458D4C  7F 04 C3 78 */	mr r4, r24
/* 8045BE10 00458D50  4B BC AA D5 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BE14 00458D54  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BE18 00458D58  38 60 00 14 */	li r3, 0x14
/* 8045BE1C 00458D5C  38 A0 FF FC */	li r5, -4
/* 8045BE20 00458D60  4B BC 81 21 */	bl __nw__FUlP7JKRHeapi
/* 8045BE24 00458D64  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BE28 00458D68  41 82 00 14 */	beq .L_8045BE3C
/* 8045BE2C 00458D6C  7F 04 C3 78 */	mr r4, r24
/* 8045BE30 00458D70  4B BC A9 89 */	bl __ct__10JSUPtrLinkFPv
/* 8045BE34 00458D74  38 00 40 3A */	li r0, 0x403a
/* 8045BE38 00458D78  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BE3C:
/* 8045BE3C 00458D7C  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BE40 00458D80  28 00 00 00 */	cmplwi r0, 0
/* 8045BE44 00458D84  40 82 00 08 */	bne .L_8045BE4C
/* 8045BE48 00458D88  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BE4C:
/* 8045BE4C 00458D8C  7F 23 CB 78 */	mr r3, r25
/* 8045BE50 00458D90  7F 04 C3 78 */	mr r4, r24
/* 8045BE54 00458D94  4B BC AA 91 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BE58 00458D98  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8045BE5C 00458D9C  38 60 00 14 */	li r3, 0x14
/* 8045BE60 00458DA0  38 A0 FF FC */	li r5, -4
/* 8045BE64 00458DA4  4B BC 80 DD */	bl __nw__FUlP7JKRHeapi
/* 8045BE68 00458DA8  7C 78 1B 79 */	or. r24, r3, r3
/* 8045BE6C 00458DAC  41 82 00 14 */	beq .L_8045BE80
/* 8045BE70 00458DB0  7F 04 C3 78 */	mr r4, r24
/* 8045BE74 00458DB4  4B BC A9 45 */	bl __ct__10JSUPtrLinkFPv
/* 8045BE78 00458DB8  38 00 40 3C */	li r0, 0x403c
/* 8045BE7C 00458DBC  90 18 00 10 */	stw r0, 0x10(r24)
.L_8045BE80:
/* 8045BE80 00458DC0  80 01 01 28 */	lwz r0, 0x128(r1)
/* 8045BE84 00458DC4  28 00 00 00 */	cmplwi r0, 0
/* 8045BE88 00458DC8  40 82 00 08 */	bne .L_8045BE90
/* 8045BE8C 00458DCC  93 01 01 34 */	stw r24, 0x134(r1)
.L_8045BE90:
/* 8045BE90 00458DD0  7F 23 CB 78 */	mr r3, r25
/* 8045BE94 00458DD4  7F 04 C3 78 */	mr r4, r24
/* 8045BE98 00458DD8  4B BC AA 4D */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045BE9C 00458DDC  81 1F 01 14 */	lwz r8, 0x114(r31)
/* 8045BEA0 00458DE0  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BEA4 00458DE4  80 FF 01 18 */	lwz r7, 0x118(r31)
/* 8045BEA8 00458DE8  38 81 00 08 */	addi r4, r1, 8
/* 8045BEAC 00458DEC  80 DF 01 1C */	lwz r6, 0x11c(r31)
/* 8045BEB0 00458DF0  80 BF 01 20 */	lwz r5, 0x120(r31)
/* 8045BEB4 00458DF4  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 8045BEB8 00458DF8  C0 02 28 DC */	lfs f0, lbl_80520C3C@sda21(r2)
/* 8045BEBC 00458DFC  91 01 00 84 */	stw r8, 0x84(r1)
/* 8045BEC0 00458E00  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8045BEC4 00458E04  90 E1 00 88 */	stw r7, 0x88(r1)
/* 8045BEC8 00458E08  90 C1 00 8C */	stw r6, 0x8c(r1)
/* 8045BECC 00458E0C  90 A1 00 90 */	stw r5, 0x90(r1)
/* 8045BED0 00458E10  90 01 00 94 */	stw r0, 0x94(r1)
/* 8045BED4 00458E14  91 01 00 08 */	stw r8, 8(r1)
/* 8045BED8 00458E18  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8045BEDC 00458E1C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8045BEE0 00458E20  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8045BEE4 00458E24  90 01 00 18 */	stw r0, 0x18(r1)
/* 8045BEE8 00458E28  48 00 01 75 */	bl setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
/* 8045BEEC 00458E2C  C0 22 28 C0 */	lfs f1, lbl_80520C20@sda21(r2)
/* 8045BEF0 00458E30  7F 44 D3 78 */	mr r4, r26
/* 8045BEF4 00458E34  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BEF8 00458E38  4B EE 44 35 */	bl build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
.L_8045BEFC:
/* 8045BEFC 00458E3C  28 1D 00 00 */	cmplwi r29, 0
/* 8045BF00 00458E40  41 82 00 30 */	beq .L_8045BF30
/* 8045BF04 00458E44  C0 22 28 E0 */	lfs f1, lbl_80520C40@sda21(r2)
/* 8045BF08 00458E48  7F A3 EB 78 */	mr r3, r29
/* 8045BF0C 00458E4C  38 80 30 79 */	li r4, 0x3079
/* 8045BF10 00458E50  48 00 00 4D */	bl SetBossBgmMuteVol__3PSMFPQ28PSSystem8EnvSeMgrUlf
/* 8045BF14 00458E54  C0 22 28 E0 */	lfs f1, lbl_80520C40@sda21(r2)
/* 8045BF18 00458E58  7F A3 EB 78 */	mr r3, r29
/* 8045BF1C 00458E5C  38 80 30 7A */	li r4, 0x307a
/* 8045BF20 00458E60  48 00 00 3D */	bl SetBossBgmMuteVol__3PSMFPQ28PSSystem8EnvSeMgrUlf
/* 8045BF24 00458E64  7F 63 DB 78 */	mr r3, r27
/* 8045BF28 00458E68  7F A4 EB 78 */	mr r4, r29
/* 8045BF2C 00458E6C  48 00 CD 05 */	bl adaptEnvSe__Q23PSM10Scene_GameFPQ28PSSystem8EnvSeMgr
.L_8045BF30:
/* 8045BF30 00458E70  3C 80 80 4F */	lis r4, __vt__Q23PSM15EnvSeObjBuilder@ha
/* 8045BF34 00458E74  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8045BF38 00458E78  38 04 E3 2C */	addi r0, r4, __vt__Q23PSM15EnvSeObjBuilder@l
/* 8045BF3C 00458E7C  38 80 00 00 */	li r4, 0
/* 8045BF40 00458E80  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 8045BF44 00458E84  4B EE 47 65 */	bl __dt__Q26PSGame25Builder_EvnSe_PerspectiveFv
/* 8045BF48 00458E88  BB 01 01 50 */	lmw r24, 0x150(r1)
/* 8045BF4C 00458E8C  80 01 01 74 */	lwz r0, 0x174(r1)
/* 8045BF50 00458E90  7C 08 03 A6 */	mtlr r0
/* 8045BF54 00458E94  38 21 01 70 */	addi r1, r1, 0x170
/* 8045BF58 00458E98  4E 80 00 20 */	blr 
.endfn initEnvironmentSe__Q23PSM8SceneMgrFPQ23PSM10Scene_Game

.fn SetBossBgmMuteVol__3PSMFPQ28PSSystem8EnvSeMgrUlf, weak
/* 8045BF5C 00458E9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045BF60 00458EA0  7C 08 02 A6 */	mflr r0
/* 8045BF64 00458EA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045BF68 00458EA8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8045BF6C 00458EAC  FF E0 08 90 */	fmr f31, f1
/* 8045BF70 00458EB0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8045BF74 00458EB4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8045BF78 00458EB8  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8045BF7C 00458EBC  7C 9D 23 78 */	mr r29, r4
/* 8045BF80 00458EC0  83 C3 00 00 */	lwz r30, 0(r3)
/* 8045BF84 00458EC4  48 00 00 3C */	b .L_8045BFC0
.L_8045BF88:
/* 8045BF88 00458EC8  83 FE 00 00 */	lwz r31, 0(r30)
/* 8045BF8C 00458ECC  7F E3 FB 78 */	mr r3, r31
/* 8045BF90 00458ED0  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8045BF94 00458ED4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8045BF98 00458ED8  7D 89 03 A6 */	mtctr r12
/* 8045BF9C 00458EDC  4E 80 04 21 */	bctrl 
/* 8045BFA0 00458EE0  3C 03 8F 91 */	subis r0, r3, 0x706f
/* 8045BFA4 00458EE4  28 00 6C 6C */	cmplwi r0, 0x6c6c
/* 8045BFA8 00458EE8  40 82 00 14 */	bne .L_8045BFBC
/* 8045BFAC 00458EEC  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8045BFB0 00458EF0  7C 1D 00 40 */	cmplw r29, r0
/* 8045BFB4 00458EF4  40 82 00 08 */	bne .L_8045BFBC
/* 8045BFB8 00458EF8  D3 FF 00 50 */	stfs f31, 0x50(r31)
.L_8045BFBC:
/* 8045BFBC 00458EFC  83 DE 00 0C */	lwz r30, 0xc(r30)
.L_8045BFC0:
/* 8045BFC0 00458F00  28 1E 00 00 */	cmplwi r30, 0
/* 8045BFC4 00458F04  40 82 FF C4 */	bne .L_8045BF88
/* 8045BFC8 00458F08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045BFCC 00458F0C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8045BFD0 00458F10  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8045BFD4 00458F14  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8045BFD8 00458F18  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8045BFDC 00458F1C  7C 08 03 A6 */	mtlr r0
/* 8045BFE0 00458F20  38 21 00 20 */	addi r1, r1, 0x20
/* 8045BFE4 00458F24  4E 80 00 20 */	blr 
.endfn SetBossBgmMuteVol__3PSMFPQ28PSSystem8EnvSeMgrUlf

.fn SetNoYOfset__3PSMFPQ28PSSystem8EnvSeMgr, weak
/* 8045BFE8 00458F28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045BFEC 00458F2C  7C 08 02 A6 */	mflr r0
/* 8045BFF0 00458F30  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045BFF4 00458F34  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8045BFF8 00458F38  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8045BFFC 00458F3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C000 00458F40  83 E3 00 00 */	lwz r31, 0(r3)
/* 8045C004 00458F44  C3 E2 28 C4 */	lfs f31, lbl_80520C24@sda21(r2)
/* 8045C008 00458F48  48 00 00 30 */	b .L_8045C038
.L_8045C00C:
/* 8045C00C 00458F4C  80 7F 00 00 */	lwz r3, 0(r31)
/* 8045C010 00458F50  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8045C014 00458F54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8045C018 00458F58  7D 89 03 A6 */	mtctr r12
/* 8045C01C 00458F5C  4E 80 04 21 */	bctrl 
/* 8045C020 00458F60  3C 03 8F 9B */	subis r0, r3, 0x7065
/* 8045C024 00458F64  28 00 72 73 */	cmplwi r0, 0x7273
/* 8045C028 00458F68  40 82 00 0C */	bne .L_8045C034
/* 8045C02C 00458F6C  80 7F 00 00 */	lwz r3, 0(r31)
/* 8045C030 00458F70  D3 E3 00 48 */	stfs f31, 0x48(r3)
.L_8045C034:
/* 8045C034 00458F74  83 FF 00 0C */	lwz r31, 0xc(r31)
.L_8045C038:
/* 8045C038 00458F78  28 1F 00 00 */	cmplwi r31, 0
/* 8045C03C 00458F7C  40 82 FF D0 */	bne .L_8045C00C
/* 8045C040 00458F80  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8045C044 00458F84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045C048 00458F88  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8045C04C 00458F8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C050 00458F90  7C 08 03 A6 */	mtlr r0
/* 8045C054 00458F94  38 21 00 20 */	addi r1, r1, 0x20
/* 8045C058 00458F98  4E 80 00 20 */	blr 
.endfn SetNoYOfset__3PSMFPQ28PSSystem8EnvSeMgr

.fn setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo, weak
/* 8045C05C 00458F9C  C0 04 00 00 */	lfs f0, 0(r4)
/* 8045C060 00458FA0  C0 24 00 04 */	lfs f1, 4(r4)
/* 8045C064 00458FA4  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 8045C068 00458FA8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8045C06C 00458FAC  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 8045C070 00458FB0  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 8045C074 00458FB4  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 8045C078 00458FB8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8045C07C 00458FBC  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 8045C080 00458FC0  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8045C084 00458FC4  4E 80 00 20 */	blr 
.endfn setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo

.fn "__ct__Q23PSM15EnvSeObjBuilderFQ29JGeometry8TBox3<f>", weak
/* 8045C088 00458FC8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8045C08C 00458FCC  7C 08 02 A6 */	mflr r0
/* 8045C090 00458FD0  C0 A4 00 00 */	lfs f5, 0(r4)
/* 8045C094 00458FD4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8045C098 00458FD8  C0 84 00 04 */	lfs f4, 4(r4)
/* 8045C09C 00458FDC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8045C0A0 00458FE0  7C 7F 1B 78 */	mr r31, r3
/* 8045C0A4 00458FE4  C0 64 00 08 */	lfs f3, 8(r4)
/* 8045C0A8 00458FE8  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 8045C0AC 00458FEC  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8045C0B0 00458FF0  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8045C0B4 00458FF4  38 81 00 08 */	addi r4, r1, 8
/* 8045C0B8 00458FF8  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8045C0BC 00458FFC  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8045C0C0 00459000  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8045C0C4 00459004  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8045C0C8 00459008  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8045C0CC 0045900C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8045C0D0 00459010  4B EE 40 41 */	bl "__ct__Q26PSGame25Builder_EvnSe_PerspectiveFQ29JGeometry8TBox3<f>"
/* 8045C0D4 00459014  3C 80 80 4F */	lis r4, __vt__Q23PSM15EnvSeObjBuilder@ha
/* 8045C0D8 00459018  7F E3 FB 78 */	mr r3, r31
/* 8045C0DC 0045901C  38 04 E3 2C */	addi r0, r4, __vt__Q23PSM15EnvSeObjBuilder@l
/* 8045C0E0 00459020  90 1F 00 00 */	stw r0, 0(r31)
/* 8045C0E4 00459024  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8045C0E8 00459028  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8045C0EC 0045902C  7C 08 03 A6 */	mtlr r0
/* 8045C0F0 00459030  38 21 00 30 */	addi r1, r1, 0x30
/* 8045C0F4 00459034  4E 80 00 20 */	blr 
.endfn "__ct__Q23PSM15EnvSeObjBuilderFQ29JGeometry8TBox3<f>"

.fn "__ct__Q29JGeometry8TBox3<f>FRCQ29JGeometry8TBox3<f>", weak
/* 8045C0F8 00459038  C0 24 00 00 */	lfs f1, 0(r4)
/* 8045C0FC 0045903C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8045C100 00459040  D0 23 00 00 */	stfs f1, 0(r3)
/* 8045C104 00459044  C0 24 00 08 */	lfs f1, 8(r4)
/* 8045C108 00459048  D0 03 00 04 */	stfs f0, 4(r3)
/* 8045C10C 0045904C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8045C110 00459050  D0 23 00 08 */	stfs f1, 8(r3)
/* 8045C114 00459054  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8045C118 00459058  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8045C11C 0045905C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8045C120 00459060  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8045C124 00459064  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8045C128 00459068  4E 80 00 20 */	blr 
.endfn "__ct__Q29JGeometry8TBox3<f>FRCQ29JGeometry8TBox3<f>"

.fn newAutoBgm__Q23PSM8SceneMgrFPCcPCcRQ27JAInter9SoundInfoQ210JADUtility10AccessModeRQ26PSGame9SceneInfoPQ28PSSystem15DirectorMgrBase, global
/* 8045C12C 0045906C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8045C130 00459070  7C 08 02 A6 */	mflr r0
/* 8045C134 00459074  3C 60 80 4A */	lis r3, lbl_8049CE68@ha
/* 8045C138 00459078  90 01 00 34 */	stw r0, 0x34(r1)
/* 8045C13C 0045907C  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8045C140 00459080  3B E3 CE 68 */	addi r31, r3, lbl_8049CE68@l
/* 8045C144 00459084  7C 99 23 78 */	mr r25, r4
/* 8045C148 00459088  7C BA 2B 78 */	mr r26, r5
/* 8045C14C 0045908C  7C DB 33 78 */	mr r27, r6
/* 8045C150 00459090  7C FC 3B 78 */	mr r28, r7
/* 8045C154 00459094  7D 3D 4B 78 */	mr r29, r9
/* 8045C158 00459098  38 60 00 88 */	li r3, 0x88
/* 8045C15C 0045909C  4B BC 7D 49 */	bl __nw__FUl
/* 8045C160 004590A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045C164 004590A4  41 82 00 24 */	beq .L_8045C188
/* 8045C168 004590A8  7F A4 EB 78 */	mr r4, r29
/* 8045C16C 004590AC  38 A0 00 08 */	li r5, 8
/* 8045C170 004590B0  48 01 31 4D */	bl __ct__Q23PSM17DirectorMgr_SceneFPQ23PSM17DirectorMgr_SceneUc
/* 8045C174 004590B4  3C 60 80 4F */	lis r3, __vt__Q23PSM25DirectorMgr_Scene_AutoBgm@ha
/* 8045C178 004590B8  38 63 F9 18 */	addi r3, r3, __vt__Q23PSM25DirectorMgr_Scene_AutoBgm@l
/* 8045C17C 004590BC  90 7E 00 00 */	stw r3, 0(r30)
/* 8045C180 004590C0  38 03 00 10 */	addi r0, r3, 0x10
/* 8045C184 004590C4  90 1E 00 0C */	stw r0, 0xc(r30)
.L_8045C188:
/* 8045C188 004590C8  38 60 03 50 */	li r3, 0x350
/* 8045C18C 004590CC  4B BC 7D 19 */	bl __nw__FUl
/* 8045C190 004590D0  7C 7D 1B 79 */	or. r29, r3, r3
/* 8045C194 004590D4  41 82 00 20 */	beq .L_8045C1B4
/* 8045C198 004590D8  7F 24 CB 78 */	mr r4, r25
/* 8045C19C 004590DC  7F 45 D3 78 */	mr r5, r26
/* 8045C1A0 004590E0  7F 66 DB 78 */	mr r6, r27
/* 8045C1A4 004590E4  7F 87 E3 78 */	mr r7, r28
/* 8045C1A8 004590E8  7F C8 F3 78 */	mr r8, r30
/* 8045C1AC 004590EC  4B ED FA 59 */	bl __ct__Q29PSAutoBgm7AutoBgmFPCcPCcRCQ27JAInter9SoundInfoQ210JADUtility10AccessModePQ28PSSystem15DirectorMgrBase
/* 8045C1B0 004590F0  7C 7D 1B 78 */	mr r29, r3
.L_8045C1B4:
/* 8045C1B4 004590F4  28 1D 00 00 */	cmplwi r29, 0
/* 8045C1B8 004590F8  40 82 00 18 */	bne .L_8045C1D0
/* 8045C1BC 004590FC  38 7F 00 0C */	addi r3, r31, 0xc
/* 8045C1C0 00459100  38 BF 00 24 */	addi r5, r31, 0x24
/* 8045C1C4 00459104  38 80 03 F7 */	li r4, 0x3f7
/* 8045C1C8 00459108  4C C6 31 82 */	crclr 6
/* 8045C1CC 0045910C  4B BC E4 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045C1D0:
/* 8045C1D0 00459110  7F A3 EB 78 */	mr r3, r29
/* 8045C1D4 00459114  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8045C1D8 00459118  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8045C1DC 0045911C  7D 89 03 A6 */	mtctr r12
/* 8045C1E0 00459120  4E 80 04 21 */	bctrl 
/* 8045C1E4 00459124  7F C3 F3 78 */	mr r3, r30
/* 8045C1E8 00459128  7F A4 EB 78 */	mr r4, r29
/* 8045C1EC 0045912C  48 01 34 35 */	bl initTrackMap__Q23PSM17DirectorMgr_SceneFRQ28PSSystem11DirectedBgm
/* 8045C1F0 00459130  7F C3 F3 78 */	mr r3, r30
/* 8045C1F4 00459134  7F A4 EB 78 */	mr r4, r29
/* 8045C1F8 00459138  4B EE 76 D9 */	bl initAndAdaptToBgm__Q28PSSystem15DirectorMgrBaseFRQ28PSSystem11DirectedBgm
/* 8045C1FC 0045913C  38 60 00 20 */	li r3, 0x20
/* 8045C200 00459140  4B BC 7C A5 */	bl __nw__FUl
/* 8045C204 00459144  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045C208 00459148  41 82 00 5C */	beq .L_8045C264
/* 8045C20C 0045914C  7F D9 F3 78 */	mr r25, r30
/* 8045C210 00459150  7F C4 F3 78 */	mr r4, r30
/* 8045C214 00459154  4B BC A5 A5 */	bl __ct__10JSUPtrLinkFPv
/* 8045C218 00459158  38 79 00 10 */	addi r3, r25, 0x10
/* 8045C21C 0045915C  38 9F 01 28 */	addi r4, r31, 0x128
/* 8045C220 00459160  4B C5 DF CD */	bl __ct__10JADHioNodeFPCc
/* 8045C224 00459164  3C 80 80 4E */	lis r4, __vt__Q29PSAutoBgm11MeloArrBase@ha
/* 8045C228 00459168  3C 60 80 4E */	lis r3, __vt__Q29PSAutoBgm19MeloArr_RandomAvoid@ha
/* 8045C22C 0045916C  38 84 AD E8 */	addi r4, r4, __vt__Q29PSAutoBgm11MeloArrBase@l
/* 8045C230 00459170  38 A0 00 01 */	li r5, 1
/* 8045C234 00459174  90 99 00 14 */	stw r4, 0x14(r25)
/* 8045C238 00459178  38 04 00 08 */	addi r0, r4, 8
/* 8045C23C 0045917C  38 63 AE 14 */	addi r3, r3, __vt__Q29PSAutoBgm19MeloArr_RandomAvoid@l
/* 8045C240 00459180  38 80 00 00 */	li r4, 0
/* 8045C244 00459184  90 19 00 10 */	stw r0, 0x10(r25)
/* 8045C248 00459188  38 03 00 08 */	addi r0, r3, 8
/* 8045C24C 0045918C  C0 02 28 E4 */	lfs f0, lbl_80520C44@sda21(r2)
/* 8045C250 00459190  98 B9 00 18 */	stb r5, 0x18(r25)
/* 8045C254 00459194  98 99 00 19 */	stb r4, 0x19(r25)
/* 8045C258 00459198  90 7E 00 14 */	stw r3, 0x14(r30)
/* 8045C25C 0045919C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045C260 004591A0  D0 1E 00 1C */	stfs f0, 0x1c(r30)
.L_8045C264:
/* 8045C264 004591A4  38 00 00 01 */	li r0, 1
/* 8045C268 004591A8  7F C4 F3 78 */	mr r4, r30
/* 8045C26C 004591AC  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8045C270 004591B0  38 7D 03 40 */	addi r3, r29, 0x340
/* 8045C274 004591B4  4B BC A6 71 */	bl append__10JSUPtrListFP10JSUPtrLink
/* 8045C278 004591B8  7F A3 EB 78 */	mr r3, r29
/* 8045C27C 004591BC  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8045C280 004591C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8045C284 004591C4  7C 08 03 A6 */	mtlr r0
/* 8045C288 004591C8  38 21 00 30 */	addi r1, r1, 0x30
/* 8045C28C 004591CC  4E 80 00 20 */	blr 
.endfn newAutoBgm__Q23PSM8SceneMgrFPCcPCcRQ27JAInter9SoundInfoQ210JADUtility10AccessModeRQ26PSGame9SceneInfoPQ28PSSystem15DirectorMgrBase

.fn __ct__Q23PSM13MiddleBossSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase, global
/* 8045C290 004591D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C294 004591D4  7C 08 02 A6 */	mflr r0
/* 8045C298 004591D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C29C 004591DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C2A0 004591E0  7C 7F 1B 78 */	mr r31, r3
/* 8045C2A4 004591E4  4B ED 6F 8D */	bl __ct__Q28PSSystem10JumpBgmSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8045C2A8 004591E8  3C 80 80 4F */	lis r4, __vt__Q23PSM13MiddleBossSeq@ha
/* 8045C2AC 004591EC  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C2B0 004591F0  38 04 E2 90 */	addi r0, r4, __vt__Q23PSM13MiddleBossSeq@l
/* 8045C2B4 004591F4  38 A0 00 00 */	li r5, 0
/* 8045C2B8 004591F8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8045C2BC 004591FC  38 80 00 03 */	li r4, 3
/* 8045C2C0 00459200  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8045C2C4 00459204  7F E3 FB 78 */	mr r3, r31
/* 8045C2C8 00459208  90 BF 01 34 */	stw r5, 0x134(r31)
/* 8045C2CC 0045920C  90 BF 01 38 */	stw r5, 0x138(r31)
/* 8045C2D0 00459210  B0 9F 01 3C */	sth r4, 0x13c(r31)
/* 8045C2D4 00459214  B0 1F 01 3E */	sth r0, 0x13e(r31)
/* 8045C2D8 00459218  98 BF 01 40 */	stb r5, 0x140(r31)
/* 8045C2DC 0045921C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C2E0 00459220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C2E4 00459224  7C 08 03 A6 */	mtlr r0
/* 8045C2E8 00459228  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C2EC 0045922C  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM13MiddleBossSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase

.fn onJump__Q23PSM13MiddleBossSeqFUs, global
/* 8045C2F0 00459230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C2F4 00459234  7C 08 02 A6 */	mflr r0
/* 8045C2F8 00459238  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C2FC 0045923C  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 8045C300 00459240  2C 00 00 04 */	cmpwi r0, 4
/* 8045C304 00459244  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C308 00459248  7C 7F 1B 78 */	mr r31, r3
/* 8045C30C 0045924C  41 82 00 64 */	beq .L_8045C370
/* 8045C310 00459250  40 80 00 10 */	bge .L_8045C320
/* 8045C314 00459254  2C 00 00 03 */	cmpwi r0, 3
/* 8045C318 00459258  40 80 00 24 */	bge .L_8045C33C
/* 8045C31C 0045925C  48 00 00 54 */	b .L_8045C370
.L_8045C320:
/* 8045C320 00459260  2C 00 00 09 */	cmpwi r0, 9
/* 8045C324 00459264  41 82 00 0C */	beq .L_8045C330
/* 8045C328 00459268  40 80 00 48 */	bge .L_8045C370
/* 8045C32C 0045926C  48 00 00 10 */	b .L_8045C33C
.L_8045C330:
/* 8045C330 00459270  38 00 00 00 */	li r0, 0
/* 8045C334 00459274  B0 1F 01 3E */	sth r0, 0x13e(r31)
/* 8045C338 00459278  48 00 00 38 */	b .L_8045C370
.L_8045C33C:
/* 8045C33C 0045927C  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 8045C340 00459280  28 00 00 00 */	cmplwi r0, 0
/* 8045C344 00459284  40 82 00 20 */	bne .L_8045C364
/* 8045C348 00459288  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045C34C 0045928C  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045C350 00459290  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045C354 00459294  38 80 04 36 */	li r4, 0x436
/* 8045C358 00459298  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045C35C 0045929C  4C C6 31 82 */	crclr 6
/* 8045C360 004592A0  4B BC E2 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045C364:
/* 8045C364 004592A4  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 8045C368 004592A8  38 00 00 01 */	li r0, 1
/* 8045C36C 004592AC  98 03 00 FF */	stb r0, 0xff(r3)
.L_8045C370:
/* 8045C370 004592B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C374 004592B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C378 004592B8  7C 08 03 A6 */	mtlr r0
/* 8045C37C 004592BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C380 004592C0  4E 80 00 20 */	blr 
.endfn onJump__Q23PSM13MiddleBossSeqFUs

.fn exec__Q23PSM13MiddleBossSeqFv, global
/* 8045C384 004592C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C388 004592C8  7C 08 02 A6 */	mflr r0
/* 8045C38C 004592CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C390 004592D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C394 004592D4  7C 7F 1B 78 */	mr r31, r3
/* 8045C398 004592D8  4B ED 59 19 */	bl exec__Q28PSSystem7SeqBaseFv
/* 8045C39C 004592DC  A0 7F 01 3E */	lhz r3, 0x13e(r31)
/* 8045C3A0 004592E0  28 03 FF FF */	cmplwi r3, 0xffff
/* 8045C3A4 004592E4  41 82 00 0C */	beq .L_8045C3B0
/* 8045C3A8 004592E8  38 03 00 01 */	addi r0, r3, 1
/* 8045C3AC 004592EC  B0 1F 01 3E */	sth r0, 0x13e(r31)
.L_8045C3B0:
/* 8045C3B0 004592F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C3B4 004592F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C3B8 004592F8  7C 08 03 A6 */	mtlr r0
/* 8045C3BC 004592FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C3C0 00459300  4E 80 00 20 */	blr 
.endfn exec__Q23PSM13MiddleBossSeqFv

.fn requestJumpBgmQuickly__Q23PSM13MiddleBossSeqFUs, global
/* 8045C3C4 00459304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C3C8 00459308  7C 08 02 A6 */	mflr r0
/* 8045C3CC 0045930C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C3D0 00459310  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C3D4 00459314  7C 7F 1B 78 */	mr r31, r3
/* 8045C3D8 00459318  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8045C3DC 0045931C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8045C3E0 00459320  7D 89 03 A6 */	mtctr r12
/* 8045C3E4 00459324  4E 80 04 21 */	bctrl 
/* 8045C3E8 00459328  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8045C3EC 0045932C  7C 64 1B 78 */	mr r4, r3
/* 8045C3F0 00459330  28 00 FF FF */	cmplwi r0, 0xffff
/* 8045C3F4 00459334  41 82 00 18 */	beq .L_8045C40C
/* 8045C3F8 00459338  7F E3 FB 78 */	mr r3, r31
/* 8045C3FC 0045933C  4B ED 73 2D */	bl requestJumpBgmQuickly__Q28PSSystem10JumpBgmSeqFUs
/* 8045C400 00459340  80 9F 01 38 */	lwz r4, 0x138(r31)
/* 8045C404 00459344  7F E3 FB 78 */	mr r3, r31
/* 8045C408 00459348  4B ED 75 89 */	bl setAvoidJumpTimer_Checked__Q28PSSystem10JumpBgmSeqFUl
.L_8045C40C:
/* 8045C40C 0045934C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C410 00459350  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C414 00459354  7C 08 03 A6 */	mtlr r0
/* 8045C418 00459358  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C41C 0045935C  4E 80 00 20 */	blr 
.endfn requestJumpBgmQuickly__Q23PSM13MiddleBossSeqFUs

.fn requestJumpBgmOnBeat__Q23PSM13MiddleBossSeqFUs, global
/* 8045C420 00459360  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C424 00459364  7C 08 02 A6 */	mflr r0
/* 8045C428 00459368  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C42C 0045936C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C430 00459370  7C 7F 1B 78 */	mr r31, r3
/* 8045C434 00459374  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8045C438 00459378  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8045C43C 0045937C  7D 89 03 A6 */	mtctr r12
/* 8045C440 00459380  4E 80 04 21 */	bctrl 
/* 8045C444 00459384  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8045C448 00459388  7C 64 1B 78 */	mr r4, r3
/* 8045C44C 0045938C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8045C450 00459390  41 82 00 18 */	beq .L_8045C468
/* 8045C454 00459394  7F E3 FB 78 */	mr r3, r31
/* 8045C458 00459398  4B ED 73 31 */	bl requestJumpBgmOnBeat__Q28PSSystem10JumpBgmSeqFUs
/* 8045C45C 0045939C  80 9F 01 38 */	lwz r4, 0x138(r31)
/* 8045C460 004593A0  7F E3 FB 78 */	mr r3, r31
/* 8045C464 004593A4  4B ED 75 2D */	bl setAvoidJumpTimer_Checked__Q28PSSystem10JumpBgmSeqFUl
.L_8045C468:
/* 8045C468 004593A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C46C 004593AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C470 004593B0  7C 08 03 A6 */	mtlr r0
/* 8045C474 004593B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C478 004593B8  4E 80 00 20 */	blr 
.endfn requestJumpBgmOnBeat__Q23PSM13MiddleBossSeqFUs

.fn requestJumpBgmEveryBeat__Q23PSM13MiddleBossSeqFUs, global
/* 8045C47C 004593BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C480 004593C0  7C 08 02 A6 */	mflr r0
/* 8045C484 004593C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C488 004593C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C48C 004593CC  7C 7F 1B 78 */	mr r31, r3
/* 8045C490 004593D0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8045C494 004593D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8045C498 004593D8  7D 89 03 A6 */	mtctr r12
/* 8045C49C 004593DC  4E 80 04 21 */	bctrl 
/* 8045C4A0 004593E0  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8045C4A4 004593E4  7C 64 1B 78 */	mr r4, r3
/* 8045C4A8 004593E8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8045C4AC 004593EC  41 82 00 18 */	beq .L_8045C4C4
/* 8045C4B0 004593F0  7F E3 FB 78 */	mr r3, r31
/* 8045C4B4 004593F4  4B ED 73 35 */	bl requestJumpBgmEveryBeat__Q28PSSystem10JumpBgmSeqFUs
/* 8045C4B8 004593F8  80 9F 01 38 */	lwz r4, 0x138(r31)
/* 8045C4BC 004593FC  7F E3 FB 78 */	mr r3, r31
/* 8045C4C0 00459400  4B ED 74 D1 */	bl setAvoidJumpTimer_Checked__Q28PSSystem10JumpBgmSeqFUl
.L_8045C4C4:
/* 8045C4C4 00459404  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C4C8 00459408  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C4CC 0045940C  7C 08 03 A6 */	mtlr r0
/* 8045C4D0 00459410  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C4D4 00459414  4E 80 00 20 */	blr 
.endfn requestJumpBgmEveryBeat__Q23PSM13MiddleBossSeqFUs

.fn jumpCheck__Q23PSM13MiddleBossSeqFUs, global
/* 8045C4D8 00459418  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C4DC 0045941C  7C 08 02 A6 */	mflr r0
/* 8045C4E0 00459420  38 A0 00 01 */	li r5, 1
/* 8045C4E4 00459424  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C4E8 00459428  7C A6 2B 78 */	mr r6, r5
/* 8045C4EC 0045942C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C4F0 00459430  7C 9F 23 78 */	mr r31, r4
/* 8045C4F4 00459434  38 1F FF FB */	addi r0, r31, -5
/* 8045C4F8 00459438  38 80 00 00 */	li r4, 0
/* 8045C4FC 0045943C  93 C1 00 08 */	stw r30, 8(r1)
/* 8045C500 00459440  7C 7E 1B 78 */	mr r30, r3
/* 8045C504 00459444  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 8045C508 00459448  20 03 00 01 */	subfic r0, r3, 1
/* 8045C50C 0045944C  90 9E 01 38 */	stw r4, 0x138(r30)
/* 8045C510 00459450  7C A3 1B 38 */	orc r3, r5, r3
/* 8045C514 00459454  54 00 F8 7E */	srwi r0, r0, 1
/* 8045C518 00459458  7C 00 18 50 */	subf r0, r0, r3
/* 8045C51C 0045945C  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 8045C520 00459460  40 82 00 08 */	bne .L_8045C528
/* 8045C524 00459464  7C 86 23 78 */	mr r6, r4
.L_8045C528:
/* 8045C528 00459468  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8045C52C 0045946C  40 82 00 14 */	bne .L_8045C540
/* 8045C530 00459470  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C534 00459474  28 00 00 07 */	cmplwi r0, 7
/* 8045C538 00459478  41 82 00 08 */	beq .L_8045C540
/* 8045C53C 0045947C  38 A0 00 00 */	li r5, 0
.L_8045C540:
/* 8045C540 00459480  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8045C544 00459484  41 82 00 20 */	beq .L_8045C564
/* 8045C548 00459488  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045C54C 0045948C  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045C550 00459490  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045C554 00459494  38 80 04 70 */	li r4, 0x470
/* 8045C558 00459498  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045C55C 0045949C  4C C6 31 82 */	crclr 6
/* 8045C560 004594A0  4B BC E0 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045C564:
/* 8045C564 004594A4  A0 1E 01 30 */	lhz r0, 0x130(r30)
/* 8045C568 004594A8  2C 00 00 05 */	cmpwi r0, 5
/* 8045C56C 004594AC  40 80 00 14 */	bge .L_8045C580
/* 8045C570 004594B0  2C 00 00 01 */	cmpwi r0, 1
/* 8045C574 004594B4  41 82 00 24 */	beq .L_8045C598
/* 8045C578 004594B8  40 80 00 58 */	bge .L_8045C5D0
/* 8045C57C 004594BC  48 00 00 54 */	b .L_8045C5D0
.L_8045C580:
/* 8045C580 004594C0  2C 00 00 09 */	cmpwi r0, 9
/* 8045C584 004594C4  41 82 00 4C */	beq .L_8045C5D0
/* 8045C588 004594C8  40 80 00 48 */	bge .L_8045C5D0
/* 8045C58C 004594CC  2C 00 00 08 */	cmpwi r0, 8
/* 8045C590 004594D0  40 80 00 20 */	bge .L_8045C5B0
/* 8045C594 004594D4  48 00 00 3C */	b .L_8045C5D0
.L_8045C598:
/* 8045C598 004594D8  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C59C 004594DC  28 00 00 01 */	cmplwi r0, 1
/* 8045C5A0 004594E0  40 82 00 30 */	bne .L_8045C5D0
/* 8045C5A4 004594E4  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C5A8 004594E8  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C5AC 004594EC  48 00 01 28 */	b .L_8045C6D4
.L_8045C5B0:
/* 8045C5B0 004594F0  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C5B4 004594F4  28 00 00 01 */	cmplwi r0, 1
/* 8045C5B8 004594F8  41 82 00 18 */	beq .L_8045C5D0
/* 8045C5BC 004594FC  28 00 00 0A */	cmplwi r0, 0xa
/* 8045C5C0 00459500  41 82 00 10 */	beq .L_8045C5D0
/* 8045C5C4 00459504  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C5C8 00459508  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C5CC 0045950C  48 00 01 08 */	b .L_8045C6D4
.L_8045C5D0:
/* 8045C5D0 00459510  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C5D4 00459514  2C 00 00 09 */	cmpwi r0, 9
/* 8045C5D8 00459518  41 82 00 D0 */	beq .L_8045C6A8
/* 8045C5DC 0045951C  40 80 00 1C */	bge .L_8045C5F8
/* 8045C5E0 00459520  2C 00 00 04 */	cmpwi r0, 4
/* 8045C5E4 00459524  41 82 00 68 */	beq .L_8045C64C
/* 8045C5E8 00459528  40 80 00 E8 */	bge .L_8045C6D0
/* 8045C5EC 0045952C  2C 00 00 03 */	cmpwi r0, 3
/* 8045C5F0 00459530  40 80 00 18 */	bge .L_8045C608
/* 8045C5F4 00459534  48 00 00 DC */	b .L_8045C6D0
.L_8045C5F8:
/* 8045C5F8 00459538  2C 00 00 0B */	cmpwi r0, 0xb
/* 8045C5FC 0045953C  41 82 00 CC */	beq .L_8045C6C8
/* 8045C600 00459540  40 80 00 D0 */	bge .L_8045C6D0
/* 8045C604 00459544  48 00 00 B0 */	b .L_8045C6B4
.L_8045C608:
/* 8045C608 00459548  A0 7E 01 3C */	lhz r3, 0x13c(r30)
/* 8045C60C 0045954C  38 03 00 01 */	addi r0, r3, 1
/* 8045C610 00459550  B0 1E 01 3C */	sth r0, 0x13c(r30)
/* 8045C614 00459554  A0 1E 01 3C */	lhz r0, 0x13c(r30)
/* 8045C618 00459558  28 00 00 04 */	cmplwi r0, 4
/* 8045C61C 0045955C  40 82 00 10 */	bne .L_8045C62C
/* 8045C620 00459560  38 00 00 05 */	li r0, 5
/* 8045C624 00459564  B0 1E 01 3C */	sth r0, 0x13c(r30)
/* 8045C628 00459568  48 00 00 14 */	b .L_8045C63C
.L_8045C62C:
/* 8045C62C 0045956C  28 00 00 08 */	cmplwi r0, 8
/* 8045C630 00459570  40 82 00 0C */	bne .L_8045C63C
/* 8045C634 00459574  38 00 00 03 */	li r0, 3
/* 8045C638 00459578  B0 1E 01 3C */	sth r0, 0x13c(r30)
.L_8045C63C:
/* 8045C63C 0045957C  A3 FE 01 3C */	lhz r31, 0x13c(r30)
/* 8045C640 00459580  38 00 00 32 */	li r0, 0x32
/* 8045C644 00459584  90 1E 01 38 */	stw r0, 0x138(r30)
/* 8045C648 00459588  48 00 00 88 */	b .L_8045C6D0
.L_8045C64C:
/* 8045C64C 0045958C  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 8045C650 00459590  28 00 00 00 */	cmplwi r0, 0
/* 8045C654 00459594  40 82 00 20 */	bne .L_8045C674
/* 8045C658 00459598  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045C65C 0045959C  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045C660 004595A0  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045C664 004595A4  38 80 04 B5 */	li r4, 0x4b5
/* 8045C668 004595A8  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045C66C 004595AC  4C C6 31 82 */	crclr 6
/* 8045C670 004595B0  4B BC DF D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045C674:
/* 8045C674 004595B4  A0 1E 01 3E */	lhz r0, 0x13e(r30)
/* 8045C678 004595B8  28 00 01 90 */	cmplwi r0, 0x190
/* 8045C67C 004595BC  41 80 00 14 */	blt .L_8045C690
/* 8045C680 004595C0  80 7E 01 34 */	lwz r3, 0x134(r30)
/* 8045C684 004595C4  88 03 00 FF */	lbz r0, 0xff(r3)
/* 8045C688 004595C8  28 00 00 00 */	cmplwi r0, 0
/* 8045C68C 004595CC  40 82 00 10 */	bne .L_8045C69C
.L_8045C690:
/* 8045C690 004595D0  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C694 004595D4  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C698 004595D8  48 00 00 3C */	b .L_8045C6D4
.L_8045C69C:
/* 8045C69C 004595DC  38 00 00 5A */	li r0, 0x5a
/* 8045C6A0 004595E0  90 1E 01 38 */	stw r0, 0x138(r30)
/* 8045C6A4 004595E4  48 00 00 2C */	b .L_8045C6D0
.L_8045C6A8:
/* 8045C6A8 004595E8  38 00 00 B4 */	li r0, 0xb4
/* 8045C6AC 004595EC  90 1E 01 38 */	stw r0, 0x138(r30)
/* 8045C6B0 004595F0  48 00 00 20 */	b .L_8045C6D0
.L_8045C6B4:
/* 8045C6B4 004595F4  38 60 00 B4 */	li r3, 0xb4
/* 8045C6B8 004595F8  38 00 00 00 */	li r0, 0
/* 8045C6BC 004595FC  90 7E 01 38 */	stw r3, 0x138(r30)
/* 8045C6C0 00459600  90 1E 01 2C */	stw r0, 0x12c(r30)
/* 8045C6C4 00459604  48 00 00 0C */	b .L_8045C6D0
.L_8045C6C8:
/* 8045C6C8 00459608  38 00 00 00 */	li r0, 0
/* 8045C6CC 0045960C  90 1E 01 2C */	stw r0, 0x12c(r30)
.L_8045C6D0:
/* 8045C6D0 00459610  7F E3 FB 78 */	mr r3, r31
.L_8045C6D4:
/* 8045C6D4 00459614  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C6D8 00459618  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C6DC 0045961C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045C6E0 00459620  7C 08 03 A6 */	mtlr r0
/* 8045C6E4 00459624  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C6E8 00459628  4E 80 00 20 */	blr 
.endfn jumpCheck__Q23PSM13MiddleBossSeqFUs

.fn __ct__Q23PSM10BigBossSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase, global
/* 8045C6EC 0045962C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C6F0 00459630  7C 08 02 A6 */	mflr r0
/* 8045C6F4 00459634  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C6F8 00459638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C6FC 0045963C  7C 7F 1B 78 */	mr r31, r3
/* 8045C700 00459640  4B ED 6B 31 */	bl __ct__Q28PSSystem10JumpBgmSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase
/* 8045C704 00459644  3C 60 80 4F */	lis r3, __vt__Q23PSM13MiddleBossSeq@ha
/* 8045C708 00459648  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8045C70C 0045964C  38 03 E2 90 */	addi r0, r3, __vt__Q23PSM13MiddleBossSeq@l
/* 8045C710 00459650  3C 60 80 4F */	lis r3, __vt__Q23PSM10BigBossSeq@ha
/* 8045C714 00459654  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8045C718 00459658  38 C0 00 00 */	li r6, 0
/* 8045C71C 0045965C  38 A0 00 03 */	li r5, 3
/* 8045C720 00459660  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 8045C724 00459664  90 DF 01 34 */	stw r6, 0x134(r31)
/* 8045C728 00459668  38 03 E2 28 */	addi r0, r3, __vt__Q23PSM10BigBossSeq@l
/* 8045C72C 0045966C  7F E3 FB 78 */	mr r3, r31
/* 8045C730 00459670  90 DF 01 38 */	stw r6, 0x138(r31)
/* 8045C734 00459674  B0 BF 01 3C */	sth r5, 0x13c(r31)
/* 8045C738 00459678  B0 9F 01 3E */	sth r4, 0x13e(r31)
/* 8045C73C 0045967C  98 DF 01 40 */	stb r6, 0x140(r31)
/* 8045C740 00459680  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8045C744 00459684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C748 00459688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C74C 0045968C  7C 08 03 A6 */	mtlr r0
/* 8045C750 00459690  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C754 00459694  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM10BigBossSeqFPCcRCQ27JAInter9SoundInfoPQ28PSSystem15DirectorMgrBase

.fn __dt__Q23PSM13MiddleBossSeqFv, weak
/* 8045C758 00459698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C75C 0045969C  7C 08 02 A6 */	mflr r0
/* 8045C760 004596A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C764 004596A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C768 004596A8  7C 9F 23 78 */	mr r31, r4
/* 8045C76C 004596AC  93 C1 00 08 */	stw r30, 8(r1)
/* 8045C770 004596B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045C774 004596B4  41 82 00 48 */	beq .L_8045C7BC
/* 8045C778 004596B8  3C 80 80 4F */	lis r4, __vt__Q23PSM13MiddleBossSeq@ha
/* 8045C77C 004596BC  38 04 E2 90 */	addi r0, r4, __vt__Q23PSM13MiddleBossSeq@l
/* 8045C780 004596C0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045C784 004596C4  41 82 00 28 */	beq .L_8045C7AC
/* 8045C788 004596C8  3C 80 80 4E */	lis r4, __vt__Q28PSSystem10JumpBgmSeq@ha
/* 8045C78C 004596CC  38 04 A4 8C */	addi r0, r4, __vt__Q28PSSystem10JumpBgmSeq@l
/* 8045C790 004596D0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045C794 004596D4  41 82 00 18 */	beq .L_8045C7AC
/* 8045C798 004596D8  3C A0 80 4E */	lis r5, __vt__Q28PSSystem11DirectedBgm@ha
/* 8045C79C 004596DC  38 80 00 00 */	li r4, 0
/* 8045C7A0 004596E0  38 05 A5 5C */	addi r0, r5, __vt__Q28PSSystem11DirectedBgm@l
/* 8045C7A4 004596E4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045C7A8 004596E8  4B ED 59 B1 */	bl __dt__Q28PSSystem6BgmSeqFv
.L_8045C7AC:
/* 8045C7AC 004596EC  7F E0 07 35 */	extsh. r0, r31
/* 8045C7B0 004596F0  40 81 00 0C */	ble .L_8045C7BC
/* 8045C7B4 004596F4  7F C3 F3 78 */	mr r3, r30
/* 8045C7B8 004596F8  4B BC 78 FD */	bl __dl__FPv
.L_8045C7BC:
/* 8045C7BC 004596FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C7C0 00459700  7F C3 F3 78 */	mr r3, r30
/* 8045C7C4 00459704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C7C8 00459708  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045C7CC 0045970C  7C 08 03 A6 */	mtlr r0
/* 8045C7D0 00459710  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C7D4 00459714  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM13MiddleBossSeqFv

.fn jumpCheck__Q23PSM10BigBossSeqFUs, global
/* 8045C7D8 00459718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C7DC 0045971C  7C 08 02 A6 */	mflr r0
/* 8045C7E0 00459720  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C7E4 00459724  38 00 00 00 */	li r0, 0
/* 8045C7E8 00459728  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C7EC 0045972C  7C 9F 23 78 */	mr r31, r4
/* 8045C7F0 00459730  93 C1 00 08 */	stw r30, 8(r1)
/* 8045C7F4 00459734  7C 7E 1B 78 */	mr r30, r3
/* 8045C7F8 00459738  90 03 01 38 */	stw r0, 0x138(r3)
/* 8045C7FC 0045973C  A0 03 01 30 */	lhz r0, 0x130(r3)
/* 8045C800 00459740  28 00 00 0C */	cmplwi r0, 0xc
/* 8045C804 00459744  41 81 00 C4 */	bgt .L_8045C8C8
/* 8045C808 00459748  3C 60 80 4F */	lis r3, lbl_804EE1F4@ha
/* 8045C80C 0045974C  54 00 10 3A */	slwi r0, r0, 2
/* 8045C810 00459750  38 63 E1 F4 */	addi r3, r3, lbl_804EE1F4@l
/* 8045C814 00459754  7C 03 00 2E */	lwzx r0, r3, r0
/* 8045C818 00459758  7C 09 03 A6 */	mtctr r0
/* 8045C81C 0045975C  4E 80 04 20 */	bctr 
.L_8045C820:
/* 8045C820 00459760  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C824 00459764  28 00 00 01 */	cmplwi r0, 1
/* 8045C828 00459768  40 82 00 A0 */	bne .L_8045C8C8
/* 8045C82C 0045976C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C830 00459770  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C834 00459774  48 00 01 40 */	b .L_8045C974
.L_8045C838:
/* 8045C838 00459778  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C83C 0045977C  28 00 00 08 */	cmplwi r0, 8
/* 8045C840 00459780  40 82 00 88 */	bne .L_8045C8C8
/* 8045C844 00459784  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C848 00459788  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C84C 0045978C  48 00 01 28 */	b .L_8045C974
.L_8045C850:
/* 8045C850 00459790  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C854 00459794  28 00 00 09 */	cmplwi r0, 9
/* 8045C858 00459798  40 82 00 70 */	bne .L_8045C8C8
/* 8045C85C 0045979C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C860 004597A0  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C864 004597A4  48 00 01 10 */	b .L_8045C974
.L_8045C868:
/* 8045C868 004597A8  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C86C 004597AC  28 00 00 0A */	cmplwi r0, 0xa
/* 8045C870 004597B0  40 82 00 58 */	bne .L_8045C8C8
/* 8045C874 004597B4  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C878 004597B8  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C87C 004597BC  48 00 00 F8 */	b .L_8045C974
.L_8045C880:
/* 8045C880 004597C0  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C884 004597C4  28 00 00 0B */	cmplwi r0, 0xb
/* 8045C888 004597C8  40 82 00 40 */	bne .L_8045C8C8
/* 8045C88C 004597CC  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C890 004597D0  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C894 004597D4  48 00 00 E0 */	b .L_8045C974
.L_8045C898:
/* 8045C898 004597D8  57 E3 04 3E */	clrlwi r3, r31, 0x10
/* 8045C89C 004597DC  28 03 00 01 */	cmplwi r3, 1
/* 8045C8A0 004597E0  41 82 00 28 */	beq .L_8045C8C8
/* 8045C8A4 004597E4  38 1F FF F8 */	addi r0, r31, -8
/* 8045C8A8 004597E8  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8045C8AC 004597EC  28 00 00 03 */	cmplwi r0, 3
/* 8045C8B0 004597F0  40 81 00 18 */	ble .L_8045C8C8
/* 8045C8B4 004597F4  28 03 00 0D */	cmplwi r3, 0xd
/* 8045C8B8 004597F8  41 82 00 10 */	beq .L_8045C8C8
/* 8045C8BC 004597FC  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C8C0 00459800  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C8C4 00459804  48 00 00 B0 */	b .L_8045C974
.L_8045C8C8:
/* 8045C8C8 00459808  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 8045C8CC 0045980C  2C 00 00 0C */	cmpwi r0, 0xc
/* 8045C8D0 00459810  41 82 00 7C */	beq .L_8045C94C
/* 8045C8D4 00459814  40 80 00 10 */	bge .L_8045C8E4
/* 8045C8D8 00459818  2C 00 00 04 */	cmpwi r0, 4
/* 8045C8DC 0045981C  41 82 00 14 */	beq .L_8045C8F0
/* 8045C8E0 00459820  48 00 00 90 */	b .L_8045C970
.L_8045C8E4:
/* 8045C8E4 00459824  2C 00 00 0E */	cmpwi r0, 0xe
/* 8045C8E8 00459828  40 80 00 88 */	bge .L_8045C970
/* 8045C8EC 0045982C  48 00 00 74 */	b .L_8045C960
.L_8045C8F0:
/* 8045C8F0 00459830  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 8045C8F4 00459834  28 00 00 00 */	cmplwi r0, 0
/* 8045C8F8 00459838  40 82 00 20 */	bne .L_8045C918
/* 8045C8FC 0045983C  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045C900 00459840  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045C904 00459844  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045C908 00459848  38 80 05 34 */	li r4, 0x534
/* 8045C90C 0045984C  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045C910 00459850  4C C6 31 82 */	crclr 6
/* 8045C914 00459854  4B BC DD 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045C918:
/* 8045C918 00459858  A0 1E 01 3E */	lhz r0, 0x13e(r30)
/* 8045C91C 0045985C  28 00 03 20 */	cmplwi r0, 0x320
/* 8045C920 00459860  41 80 00 14 */	blt .L_8045C934
/* 8045C924 00459864  80 7E 01 34 */	lwz r3, 0x134(r30)
/* 8045C928 00459868  88 03 00 FF */	lbz r0, 0xff(r3)
/* 8045C92C 0045986C  28 00 00 00 */	cmplwi r0, 0
/* 8045C930 00459870  40 82 00 10 */	bne .L_8045C940
.L_8045C934:
/* 8045C934 00459874  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8045C938 00459878  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8045C93C 0045987C  48 00 00 38 */	b .L_8045C974
.L_8045C940:
/* 8045C940 00459880  38 00 00 5A */	li r0, 0x5a
/* 8045C944 00459884  90 1E 01 38 */	stw r0, 0x138(r30)
/* 8045C948 00459888  48 00 00 28 */	b .L_8045C970
.L_8045C94C:
/* 8045C94C 0045988C  38 60 00 B4 */	li r3, 0xb4
/* 8045C950 00459890  38 00 00 00 */	li r0, 0
/* 8045C954 00459894  90 7E 01 38 */	stw r3, 0x138(r30)
/* 8045C958 00459898  90 1E 01 2C */	stw r0, 0x12c(r30)
/* 8045C95C 0045989C  48 00 00 14 */	b .L_8045C970
.L_8045C960:
/* 8045C960 004598A0  38 60 00 B4 */	li r3, 0xb4
/* 8045C964 004598A4  38 00 00 00 */	li r0, 0
/* 8045C968 004598A8  90 7E 01 38 */	stw r3, 0x138(r30)
/* 8045C96C 004598AC  90 1E 01 2C */	stw r0, 0x12c(r30)
.L_8045C970:
/* 8045C970 004598B0  7F E3 FB 78 */	mr r3, r31
.L_8045C974:
/* 8045C974 004598B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045C978 004598B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045C97C 004598BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045C980 004598C0  7C 08 03 A6 */	mtlr r0
/* 8045C984 004598C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8045C988 004598C8  4E 80 00 20 */	blr 
.endfn jumpCheck__Q23PSM10BigBossSeqFUs

.fn onJump__Q23PSM10BigBossSeqFUs, global
/* 8045C98C 004598CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045C990 004598D0  7C 08 02 A6 */	mflr r0
/* 8045C994 004598D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045C998 004598D8  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 8045C99C 004598DC  2C 00 00 08 */	cmpwi r0, 8
/* 8045C9A0 004598E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045C9A4 004598E4  7C 7F 1B 78 */	mr r31, r3
/* 8045C9A8 004598E8  40 80 00 1C */	bge .L_8045C9C4
/* 8045C9AC 004598EC  2C 00 00 04 */	cmpwi r0, 4
/* 8045C9B0 004598F0  41 82 00 60 */	beq .L_8045CA10
/* 8045C9B4 004598F4  40 80 00 28 */	bge .L_8045C9DC
/* 8045C9B8 004598F8  2C 00 00 03 */	cmpwi r0, 3
/* 8045C9BC 004598FC  40 80 00 20 */	bge .L_8045C9DC
/* 8045C9C0 00459900  48 00 00 50 */	b .L_8045CA10
.L_8045C9C4:
/* 8045C9C4 00459904  2C 00 00 0C */	cmpwi r0, 0xc
/* 8045C9C8 00459908  41 82 00 08 */	beq .L_8045C9D0
/* 8045C9CC 0045990C  48 00 00 44 */	b .L_8045CA10
.L_8045C9D0:
/* 8045C9D0 00459910  38 00 00 00 */	li r0, 0
/* 8045C9D4 00459914  B0 1F 01 3E */	sth r0, 0x13e(r31)
/* 8045C9D8 00459918  48 00 00 38 */	b .L_8045CA10
.L_8045C9DC:
/* 8045C9DC 0045991C  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 8045C9E0 00459920  28 00 00 00 */	cmplwi r0, 0
/* 8045C9E4 00459924  40 82 00 20 */	bne .L_8045CA04
/* 8045C9E8 00459928  3C 60 80 4A */	lis r3, lbl_8049CE74@ha
/* 8045C9EC 0045992C  3C A0 80 4A */	lis r5, lbl_8049CE8C@ha
/* 8045C9F0 00459930  38 63 CE 74 */	addi r3, r3, lbl_8049CE74@l
/* 8045C9F4 00459934  38 80 05 62 */	li r4, 0x562
/* 8045C9F8 00459938  38 A5 CE 8C */	addi r5, r5, lbl_8049CE8C@l
/* 8045C9FC 0045993C  4C C6 31 82 */	crclr 6
/* 8045CA00 00459940  4B BC DC 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045CA04:
/* 8045CA04 00459944  80 7F 01 34 */	lwz r3, 0x134(r31)
/* 8045CA08 00459948  38 00 00 01 */	li r0, 1
/* 8045CA0C 0045994C  98 03 00 FF */	stb r0, 0xff(r3)
.L_8045CA10:
/* 8045CA10 00459950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045CA14 00459954  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045CA18 00459958  7C 08 03 A6 */	mtlr r0
/* 8045CA1C 0045995C  38 21 00 10 */	addi r1, r1, 0x10
/* 8045CA20 00459960  4E 80 00 20 */	blr 
.endfn onJump__Q23PSM10BigBossSeqFUs

.fn __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr, global
/* 8045CA24 00459964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045CA28 00459968  7C 08 02 A6 */	mflr r0
/* 8045CA2C 0045996C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045CA30 00459970  38 00 00 03 */	li r0, 3
/* 8045CA34 00459974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045CA38 00459978  7C 7F 1B 78 */	mr r31, r3
/* 8045CA3C 0045997C  90 83 00 00 */	stw r4, 0(r3)
/* 8045CA40 00459980  38 60 00 0C */	li r3, 0xc
/* 8045CA44 00459984  98 1F 00 04 */	stb r0, 4(r31)
/* 8045CA48 00459988  4B BC 75 65 */	bl __nwa__FUl
/* 8045CA4C 0045998C  90 7F 00 08 */	stw r3, 8(r31)
/* 8045CA50 00459990  38 60 00 0C */	li r3, 0xc
/* 8045CA54 00459994  4B BC 75 59 */	bl __nwa__FUl
/* 8045CA58 00459998  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8045CA5C 0045999C  7F E3 FB 78 */	mr r3, r31
/* 8045CA60 004599A0  C0 02 28 C4 */	lfs f0, lbl_80520C24@sda21(r2)
/* 8045CA64 004599A4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8045CA68 004599A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045CA6C 004599AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045CA70 004599B0  7C 08 03 A6 */	mtlr r0
/* 8045CA74 004599B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8045CA78 004599B8  4E 80 00 20 */	blr 
.endfn __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr

.fn playOk__Q23PSM14PersEnvManagerFPQ23PSM24EnvSe_Perspective_AvoidY, global
/* 8045CA7C 004599BC  88 C3 00 04 */	lbz r6, 4(r3)
/* 8045CA80 004599C0  38 E0 00 00 */	li r7, 0
/* 8045CA84 004599C4  48 00 00 24 */	b .L_8045CAA8
.L_8045CA88:
/* 8045CA88 004599C8  80 A3 00 08 */	lwz r5, 8(r3)
/* 8045CA8C 004599CC  54 E0 15 BA */	rlwinm r0, r7, 2, 0x16, 0x1d
/* 8045CA90 004599D0  7C 05 00 2E */	lwzx r0, r5, r0
/* 8045CA94 004599D4  7C 00 20 40 */	cmplw r0, r4
/* 8045CA98 004599D8  40 82 00 0C */	bne .L_8045CAA4
/* 8045CA9C 004599DC  38 60 00 01 */	li r3, 1
/* 8045CAA0 004599E0  4E 80 00 20 */	blr 
.L_8045CAA4:
/* 8045CAA4 004599E4  38 E7 00 01 */	addi r7, r7, 1
.L_8045CAA8:
/* 8045CAA8 004599E8  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 8045CAAC 004599EC  7C 00 30 40 */	cmplw r0, r6
/* 8045CAB0 004599F0  41 80 FF D8 */	blt .L_8045CA88
/* 8045CAB4 004599F4  38 60 00 00 */	li r3, 0
/* 8045CAB8 004599F8  4E 80 00 20 */	blr 
.endfn playOk__Q23PSM14PersEnvManagerFPQ23PSM24EnvSe_Perspective_AvoidY

.fn exec__Q23PSM14PersEnvManagerFv, global
/* 8045CABC 004599FC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8045CAC0 00459A00  7C 08 02 A6 */	mflr r0
/* 8045CAC4 00459A04  90 01 00 54 */	stw r0, 0x54(r1)
/* 8045CAC8 00459A08  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 8045CACC 00459A0C  7C 7A 1B 78 */	mr r26, r3
/* 8045CAD0 00459A10  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8045CAD4 00459A14  4B CF E1 4D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8045CAD8 00459A18  7C 7D 1B 79 */	or. r29, r3, r3
/* 8045CADC 00459A1C  41 82 01 90 */	beq .L_8045CC6C
/* 8045CAE0 00459A20  C0 02 28 E8 */	lfs f0, lbl_80520C48@sda21(r2)
/* 8045CAE4 00459A24  38 A0 00 00 */	li r5, 0
/* 8045CAE8 00459A28  38 80 00 00 */	li r4, 0
/* 8045CAEC 00459A2C  48 00 00 1C */	b .L_8045CB08
.L_8045CAF0:
/* 8045CAF0 00459A30  80 7A 00 08 */	lwz r3, 8(r26)
/* 8045CAF4 00459A34  54 A0 15 BA */	rlwinm r0, r5, 2, 0x16, 0x1d
/* 8045CAF8 00459A38  38 A5 00 01 */	addi r5, r5, 1
/* 8045CAFC 00459A3C  7C 83 01 2E */	stwx r4, r3, r0
/* 8045CB00 00459A40  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 8045CB04 00459A44  7C 03 05 2E */	stfsx f0, r3, r0
.L_8045CB08:
/* 8045CB08 00459A48  88 1A 00 04 */	lbz r0, 4(r26)
/* 8045CB0C 00459A4C  54 A3 06 3E */	clrlwi r3, r5, 0x18
/* 8045CB10 00459A50  7C 03 00 40 */	cmplw r3, r0
/* 8045CB14 00459A54  41 80 FF DC */	blt .L_8045CAF0
/* 8045CB18 00459A58  3B 80 00 00 */	li r28, 0
/* 8045CB1C 00459A5C  48 00 01 40 */	b .L_8045CC5C
.L_8045CB20:
/* 8045CB20 00459A60  80 7A 00 00 */	lwz r3, 0(r26)
/* 8045CB24 00459A64  57 9E 15 BA */	rlwinm r30, r28, 2, 0x16, 0x1d
/* 8045CB28 00459A68  83 63 00 00 */	lwz r27, 0(r3)
/* 8045CB2C 00459A6C  48 00 01 24 */	b .L_8045CC50
.L_8045CB30:
/* 8045CB30 00459A70  83 FB 00 00 */	lwz r31, 0(r27)
/* 8045CB34 00459A74  7F E3 FB 78 */	mr r3, r31
/* 8045CB38 00459A78  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 8045CB3C 00459A7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8045CB40 00459A80  7D 89 03 A6 */	mtctr r12
/* 8045CB44 00459A84  4E 80 04 21 */	bctrl 
/* 8045CB48 00459A88  3C 03 8F 9B */	subis r0, r3, 0x7065
/* 8045CB4C 00459A8C  28 00 72 73 */	cmplwi r0, 0x7273
/* 8045CB50 00459A90  40 82 00 FC */	bne .L_8045CC4C
/* 8045CB54 00459A94  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 8045CB58 00459A98  38 A0 00 00 */	li r5, 0
/* 8045CB5C 00459A9C  38 C0 00 00 */	li r6, 0
/* 8045CB60 00459AA0  48 00 00 24 */	b .L_8045CB84
.L_8045CB64:
/* 8045CB64 00459AA4  80 9A 00 08 */	lwz r4, 8(r26)
/* 8045CB68 00459AA8  54 C3 15 BA */	rlwinm r3, r6, 2, 0x16, 0x1d
/* 8045CB6C 00459AAC  7C 64 18 2E */	lwzx r3, r4, r3
/* 8045CB70 00459AB0  7C 03 F8 40 */	cmplw r3, r31
/* 8045CB74 00459AB4  40 82 00 0C */	bne .L_8045CB80
/* 8045CB78 00459AB8  38 A0 00 01 */	li r5, 1
/* 8045CB7C 00459ABC  48 00 00 14 */	b .L_8045CB90
.L_8045CB80:
/* 8045CB80 00459AC0  38 C6 00 01 */	addi r6, r6, 1
.L_8045CB84:
/* 8045CB84 00459AC4  54 C3 06 3E */	clrlwi r3, r6, 0x18
/* 8045CB88 00459AC8  7C 03 00 40 */	cmplw r3, r0
/* 8045CB8C 00459ACC  41 80 FF D8 */	blt .L_8045CB64
.L_8045CB90:
/* 8045CB90 00459AD0  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8045CB94 00459AD4  40 82 00 B8 */	bne .L_8045CC4C
/* 8045CB98 00459AD8  7F A4 EB 78 */	mr r4, r29
/* 8045CB9C 00459ADC  80 DF 00 3C */	lwz r6, 0x3c(r31)
/* 8045CBA0 00459AE0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8045CBA4 00459AE4  38 61 00 14 */	addi r3, r1, 0x14
/* 8045CBA8 00459AE8  80 BF 00 40 */	lwz r5, 0x40(r31)
/* 8045CBAC 00459AEC  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8045CBB0 00459AF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8045CBB4 00459AF4  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8045CBB8 00459AF8  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8045CBBC 00459AFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8045CBC0 00459B00  7D 89 03 A6 */	mtctr r12
/* 8045CBC4 00459B04  4E 80 04 21 */	bctrl 
/* 8045CBC8 00459B08  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8045CBCC 00459B0C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8045CBD0 00459B10  D0 21 00 08 */	stfs f1, 8(r1)
/* 8045CBD4 00459B14  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8045CBD8 00459B18  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8045CBDC 00459B1C  80 61 00 08 */	lwz r3, 8(r1)
/* 8045CBE0 00459B20  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8045CBE4 00459B24  90 61 00 20 */	stw r3, 0x20(r1)
/* 8045CBE8 00459B28  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8045CBEC 00459B2C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8045CBF0 00459B30  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8045CBF4 00459B34  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8045CBF8 00459B38  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8045CBFC 00459B3C  EC 43 10 28 */	fsubs f2, f3, f2
/* 8045CC00 00459B40  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 8045CC04 00459B44  EC 21 00 28 */	fsubs f1, f1, f0
/* 8045CC08 00459B48  C0 02 28 C4 */	lfs f0, lbl_80520C24@sda21(r2)
/* 8045CC0C 00459B4C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8045CC10 00459B50  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8045CC14 00459B54  EC 21 00 72 */	fmuls f1, f1, f1
/* 8045CC18 00459B58  90 01 00 24 */	stw r0, 0x24(r1)
/* 8045CC1C 00459B5C  EC 22 08 2A */	fadds f1, f2, f1
/* 8045CC20 00459B60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8045CC24 00459B64  40 81 00 0C */	ble .L_8045CC30
/* 8045CC28 00459B68  FC 00 08 34 */	frsqrte f0, f1
/* 8045CC2C 00459B6C  EC 20 00 72 */	fmuls f1, f0, f1
.L_8045CC30:
/* 8045CC30 00459B70  80 1A 00 0C */	lwz r0, 0xc(r26)
/* 8045CC34 00459B74  7C 1E 04 2E */	lfsx f0, r30, r0
/* 8045CC38 00459B78  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8045CC3C 00459B7C  40 81 00 10 */	ble .L_8045CC4C
/* 8045CC40 00459B80  7C 3E 05 2E */	stfsx f1, r30, r0
/* 8045CC44 00459B84  80 1A 00 08 */	lwz r0, 8(r26)
/* 8045CC48 00459B88  7F FE 01 2E */	stwx r31, r30, r0
.L_8045CC4C:
/* 8045CC4C 00459B8C  83 7B 00 0C */	lwz r27, 0xc(r27)
.L_8045CC50:
/* 8045CC50 00459B90  28 1B 00 00 */	cmplwi r27, 0
/* 8045CC54 00459B94  40 82 FE DC */	bne .L_8045CB30
/* 8045CC58 00459B98  3B 9C 00 01 */	addi r28, r28, 1
.L_8045CC5C:
/* 8045CC5C 00459B9C  88 1A 00 04 */	lbz r0, 4(r26)
/* 8045CC60 00459BA0  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 8045CC64 00459BA4  7C 03 00 40 */	cmplw r3, r0
/* 8045CC68 00459BA8  41 80 FE B8 */	blt .L_8045CB20
.L_8045CC6C:
/* 8045CC6C 00459BAC  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 8045CC70 00459BB0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8045CC74 00459BB4  7C 08 03 A6 */	mtlr r0
/* 8045CC78 00459BB8  38 21 00 50 */	addi r1, r1, 0x50
/* 8045CC7C 00459BBC  4E 80 00 20 */	blr 
.endfn exec__Q23PSM14PersEnvManagerFv

.fn __dt__Q23PSM10BigBossSeqFv, weak
/* 8045CC80 00459BC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045CC84 00459BC4  7C 08 02 A6 */	mflr r0
/* 8045CC88 00459BC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045CC8C 00459BCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045CC90 00459BD0  7C 9F 23 78 */	mr r31, r4
/* 8045CC94 00459BD4  93 C1 00 08 */	stw r30, 8(r1)
/* 8045CC98 00459BD8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045CC9C 00459BDC  41 82 00 58 */	beq .L_8045CCF4
/* 8045CCA0 00459BE0  3C 80 80 4F */	lis r4, __vt__Q23PSM10BigBossSeq@ha
/* 8045CCA4 00459BE4  38 04 E2 28 */	addi r0, r4, __vt__Q23PSM10BigBossSeq@l
/* 8045CCA8 00459BE8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045CCAC 00459BEC  41 82 00 38 */	beq .L_8045CCE4
/* 8045CCB0 00459BF0  3C 80 80 4F */	lis r4, __vt__Q23PSM13MiddleBossSeq@ha
/* 8045CCB4 00459BF4  38 04 E2 90 */	addi r0, r4, __vt__Q23PSM13MiddleBossSeq@l
/* 8045CCB8 00459BF8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045CCBC 00459BFC  41 82 00 28 */	beq .L_8045CCE4
/* 8045CCC0 00459C00  3C 80 80 4E */	lis r4, __vt__Q28PSSystem10JumpBgmSeq@ha
/* 8045CCC4 00459C04  38 04 A4 8C */	addi r0, r4, __vt__Q28PSSystem10JumpBgmSeq@l
/* 8045CCC8 00459C08  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045CCCC 00459C0C  41 82 00 18 */	beq .L_8045CCE4
/* 8045CCD0 00459C10  3C A0 80 4E */	lis r5, __vt__Q28PSSystem11DirectedBgm@ha
/* 8045CCD4 00459C14  38 80 00 00 */	li r4, 0
/* 8045CCD8 00459C18  38 05 A5 5C */	addi r0, r5, __vt__Q28PSSystem11DirectedBgm@l
/* 8045CCDC 00459C1C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8045CCE0 00459C20  4B ED 54 79 */	bl __dt__Q28PSSystem6BgmSeqFv
.L_8045CCE4:
/* 8045CCE4 00459C24  7F E0 07 35 */	extsh. r0, r31
/* 8045CCE8 00459C28  40 81 00 0C */	ble .L_8045CCF4
/* 8045CCEC 00459C2C  7F C3 F3 78 */	mr r3, r30
/* 8045CCF0 00459C30  4B BC 73 C5 */	bl __dl__FPv
.L_8045CCF4:
/* 8045CCF4 00459C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045CCF8 00459C38  7F C3 F3 78 */	mr r3, r30
/* 8045CCFC 00459C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045CD00 00459C40  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045CD04 00459C44  7C 08 03 A6 */	mtlr r0
/* 8045CD08 00459C48  38 21 00 10 */	addi r1, r1, 0x10
/* 8045CD0C 00459C4C  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM10BigBossSeqFv

.fn getCastType__Q23PSM24EnvSe_Perspective_AvoidYFv, weak
/* 8045CD10 00459C50  3C 60 70 65 */	lis r3, 0x70657273@ha
/* 8045CD14 00459C54  38 63 72 73 */	addi r3, r3, 0x70657273@l
/* 8045CD18 00459C58  4E 80 00 20 */	blr 
.endfn getCastType__Q23PSM24EnvSe_Perspective_AvoidYFv

.fn getCastType__Q23PSM12Env_PollutinFv, weak
/* 8045CD1C 00459C5C  3C 60 70 6F */	lis r3, 0x706F6C6C@ha
/* 8045CD20 00459C60  38 63 6C 6C */	addi r3, r3, 0x706F6C6C@l
/* 8045CD24 00459C64  4E 80 00 20 */	blr 
.endfn getCastType__Q23PSM12Env_PollutinFv

.section .text, "ax", unique, 1
.fn __dt__Q23PSM9SceneBaseFv, weak
/* 8045CD28 00459C68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045CD2C 00459C6C  7C 08 02 A6 */	mflr r0
/* 8045CD30 00459C70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045CD34 00459C74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045CD38 00459C78  7C 9F 23 78 */	mr r31, r4
/* 8045CD3C 00459C7C  93 C1 00 08 */	stw r30, 8(r1)
/* 8045CD40 00459C80  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045CD44 00459C84  41 82 00 28 */	beq .L_8045CD6C
/* 8045CD48 00459C88  3C A0 80 4F */	lis r5, __vt__Q23PSM9SceneBase@ha
/* 8045CD4C 00459C8C  38 80 00 00 */	li r4, 0
/* 8045CD50 00459C90  38 05 F6 84 */	addi r0, r5, __vt__Q23PSM9SceneBase@l
/* 8045CD54 00459C94  90 1E 00 00 */	stw r0, 0(r30)
/* 8045CD58 00459C98  4B ED 88 C9 */	bl __dt__Q26PSGame8PikSceneFv
/* 8045CD5C 00459C9C  7F E0 07 35 */	extsh. r0, r31
/* 8045CD60 00459CA0  40 81 00 0C */	ble .L_8045CD6C
/* 8045CD64 00459CA4  7F C3 F3 78 */	mr r3, r30
/* 8045CD68 00459CA8  4B BC 73 4D */	bl __dl__FPv
.L_8045CD6C:
/* 8045CD6C 00459CAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045CD70 00459CB0  7F C3 F3 78 */	mr r3, r30
/* 8045CD74 00459CB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045CD78 00459CB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045CD7C 00459CBC  7C 08 03 A6 */	mtlr r0
/* 8045CD80 00459CC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8045CD84 00459CC4  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM9SceneBaseFv

.section .text, "ax", unique, 2
.fn __ct__Q28PSSystem8EnvSeMgrFv, weak
/* 8045CD88 00459CC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045CD8C 00459CCC  7C 08 02 A6 */	mflr r0
/* 8045CD90 00459CD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045CD94 00459CD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045CD98 00459CD8  7C 7F 1B 78 */	mr r31, r3
/* 8045CD9C 00459CDC  4B BC 9B 35 */	bl initiate__10JSUPtrListFv
/* 8045CDA0 00459CE0  3C 80 80 4E */	lis r4, __vt__Q28PSSystem10Reservator@ha
/* 8045CDA4 00459CE4  3C 60 80 4E */	lis r3, __vt__Q28PSSystem24EnvSe_PauseOffReservator@ha
/* 8045CDA8 00459CE8  38 04 A6 B8 */	addi r0, r4, __vt__Q28PSSystem10Reservator@l
/* 8045CDAC 00459CEC  38 80 00 00 */	li r4, 0
/* 8045CDB0 00459CF0  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8045CDB4 00459CF4  38 03 AE DC */	addi r0, r3, __vt__Q28PSSystem24EnvSe_PauseOffReservator@l
/* 8045CDB8 00459CF8  7F E3 FB 78 */	mr r3, r31
/* 8045CDBC 00459CFC  B0 9F 00 10 */	sth r4, 0x10(r31)
/* 8045CDC0 00459D00  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8045CDC4 00459D04  93 FF 00 14 */	stw r31, 0x14(r31)
/* 8045CDC8 00459D08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045CDCC 00459D0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045CDD0 00459D10  7C 08 03 A6 */	mtlr r0
/* 8045CDD4 00459D14  38 21 00 10 */	addi r1, r1, 0x10
/* 8045CDD8 00459D18  4E 80 00 20 */	blr 
.endfn __ct__Q28PSSystem8EnvSeMgrFv

.fn __dt__Q23PSM15EnvSeObjBuilderFv, weak
/* 8045CDDC 00459D1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045CDE0 00459D20  7C 08 02 A6 */	mflr r0
/* 8045CDE4 00459D24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045CDE8 00459D28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8045CDEC 00459D2C  7C 9F 23 78 */	mr r31, r4
/* 8045CDF0 00459D30  93 C1 00 08 */	stw r30, 8(r1)
/* 8045CDF4 00459D34  7C 7E 1B 79 */	or. r30, r3, r3
/* 8045CDF8 00459D38  41 82 00 28 */	beq .L_8045CE20
/* 8045CDFC 00459D3C  3C A0 80 4F */	lis r5, __vt__Q23PSM15EnvSeObjBuilder@ha
/* 8045CE00 00459D40  38 80 00 00 */	li r4, 0
/* 8045CE04 00459D44  38 05 E3 2C */	addi r0, r5, __vt__Q23PSM15EnvSeObjBuilder@l
/* 8045CE08 00459D48  90 1E 00 00 */	stw r0, 0(r30)
/* 8045CE0C 00459D4C  4B EE 38 9D */	bl __dt__Q26PSGame25Builder_EvnSe_PerspectiveFv
/* 8045CE10 00459D50  7F E0 07 35 */	extsh. r0, r31
/* 8045CE14 00459D54  40 81 00 0C */	ble .L_8045CE20
/* 8045CE18 00459D58  7F C3 F3 78 */	mr r3, r30
/* 8045CE1C 00459D5C  4B BC 72 99 */	bl __dl__FPv
.L_8045CE20:
/* 8045CE20 00459D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045CE24 00459D64  7F C3 F3 78 */	mr r3, r30
/* 8045CE28 00459D68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045CE2C 00459D6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8045CE30 00459D70  7C 08 03 A6 */	mtlr r0
/* 8045CE34 00459D74  38 21 00 10 */	addi r1, r1, 0x10
/* 8045CE38 00459D78  4E 80 00 20 */	blr 
.endfn __dt__Q23PSM15EnvSeObjBuilderFv

.section .text, "ax", unique, 3
.fn __sinit_PSMainSide_Factory_cpp, local
/* 8045CE3C 00459D7C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8045CE40 00459D80  38 00 FF FF */	li r0, -1
/* 8045CE44 00459D84  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8045CE48 00459D88  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8045CE4C 00459D8C  90 0D 9C 88 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8045CE50 00459D90  D4 03 E1 58 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8045CE54 00459D94  D0 0D 9C 8C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8045CE58 00459D98  D0 03 00 04 */	stfs f0, 4(r3)
/* 8045CE5C 00459D9C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8045CE60 00459DA0  4E 80 00 20 */	blr 
.endfn __sinit_PSMainSide_Factory_cpp
