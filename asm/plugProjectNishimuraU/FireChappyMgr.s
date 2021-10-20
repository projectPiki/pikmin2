.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_80488348
lbl_80488348:
	.asciz "/enemy/data/FireChappy/yakichappy.btk"
	.skip 2
.global lbl_80488370
lbl_80488370:
	.asciz "/enemy/data/FireChappy/yakichappy.brk"
	.skip 2
.global lbl_80488398
lbl_80488398:
	.4byte 0x8384834C
	.4byte 0x83608383
	.4byte 0x83628373
	.4byte 0x815B837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.global lbl_804883B4
lbl_804883B4:
	.asciz "FireChappyMgr.cpp"
	.skip 2
.global lbl_804883C8
lbl_804883C8:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game10FireChappy3Mgr
__vt__Q34Game10FireChappy3Mgr:
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game12EnemyMgrBaseFv
	.4byte doEntry__Q24Game12EnemyMgrBaseFv
	.4byte doSetView__Q24Game12EnemyMgrBaseFi
	.4byte doViewCalc__Q24Game12EnemyMgrBaseFv
	.4byte doSimulation__Q24Game12EnemyMgrBaseFf
	.4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q34Game10FireChappy3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game10FireChappy3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	.4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
	.4byte getGenerator__Q24Game12EnemyMgrBaseCFv
	.4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
	.4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
	.4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
	.4byte startMovie__Q24Game12EnemyMgrBaseFv
	.4byte endMovie__Q24Game12EnemyMgrBaseFv
	.4byte get__Q24Game12EnemyMgrBaseFPv
	.4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
	.4byte createObj__Q34Game10FireChappy3MgrFi
	.4byte getEnemy__Q34Game10FireChappy3MgrFi
	.4byte doAlloc__Q34Game10FireChappy3MgrFv
	.4byte getEnemyTypeID__Q34Game10FireChappy3MgrFv
	.4byte createModel__Q34Game10FireChappy3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game10FireChappy3MgrFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q34Game10FireChappy3MgrFv
	.4byte doLoadBmd__Q34Game10FireChappy3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global "cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"
"cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@":
	.4byte lbl_80488348
.global "cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"
"cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@":
	.4byte lbl_80488370

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10FireChappy3MgrFiUc
__ct__Q34Game10FireChappy3MgrFiUc:
/* 8028F138 0028C078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F13C 0028C07C  7C 08 02 A6 */	mflr r0
/* 8028F140 0028C080  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F144 0028C084  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F148 0028C088  7C 7F 1B 78 */	mr r31, r3
/* 8028F14C 0028C08C  4B E9 FB 49 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 8028F150 0028C090  3C 60 80 4D */	lis r3, __vt__Q34Game10FireChappy3Mgr@ha
/* 8028F154 0028C094  3C 80 80 49 */	lis r4, lbl_80488398@ha
/* 8028F158 0028C098  38 A3 AD 18 */	addi r5, r3, __vt__Q34Game10FireChappy3Mgr@l
/* 8028F15C 0028C09C  7F E3 FB 78 */	mr r3, r31
/* 8028F160 0028C0A0  90 BF 00 00 */	stw r5, 0(r31)
/* 8028F164 0028C0A4  38 A5 00 38 */	addi r5, r5, 0x38
/* 8028F168 0028C0A8  38 04 83 98 */	addi r0, r4, lbl_80488398@l
/* 8028F16C 0028C0AC  90 BF 00 04 */	stw r5, 4(r31)
/* 8028F170 0028C0B0  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8028F174 0028C0B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F178 0028C0B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F17C 0028C0BC  7C 08 03 A6 */	mtlr r0
/* 8028F180 0028C0C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F184 0028C0C4  4E 80 00 20 */	blr 

.global doAlloc__Q34Game10FireChappy3MgrFv
doAlloc__Q34Game10FireChappy3MgrFv:
/* 8028F188 0028C0C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F18C 0028C0CC  7C 08 02 A6 */	mflr r0
/* 8028F190 0028C0D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F194 0028C0D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F198 0028C0D8  7C 7F 1B 78 */	mr r31, r3
/* 8028F19C 0028C0DC  38 60 08 84 */	li r3, 0x884
/* 8028F1A0 0028C0E0  4B D9 4D 05 */	bl __nw__FUl
/* 8028F1A4 0028C0E4  7C 64 1B 79 */	or. r4, r3, r3
/* 8028F1A8 0028C0E8  41 82 00 0C */	beq lbl_8028F1B4
/* 8028F1AC 0028C0EC  4B E8 A7 8D */	bl __ct__Q34Game10ChappyBase5ParmsFv
/* 8028F1B0 0028C0F0  7C 64 1B 78 */	mr r4, r3
lbl_8028F1B4:
/* 8028F1B4 0028C0F4  7F E3 FB 78 */	mr r3, r31
/* 8028F1B8 0028C0F8  4B EA 06 E5 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8028F1BC 0028C0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F1C0 0028C100  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F1C4 0028C104  7C 08 03 A6 */	mtlr r0
/* 8028F1C8 0028C108  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F1CC 0028C10C  4E 80 00 20 */	blr 

.global createObj__Q34Game10FireChappy3MgrFi
createObj__Q34Game10FireChappy3MgrFi:
/* 8028F1D0 0028C110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F1D4 0028C114  7C 08 02 A6 */	mflr r0
/* 8028F1D8 0028C118  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F1DC 0028C11C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F1E0 0028C120  7C 9F 23 78 */	mr r31, r4
/* 8028F1E4 0028C124  93 C1 00 08 */	stw r30, 8(r1)
/* 8028F1E8 0028C128  7C 7E 1B 78 */	mr r30, r3
/* 8028F1EC 0028C12C  1C 7F 03 10 */	mulli r3, r31, 0x310
/* 8028F1F0 0028C130  38 63 00 10 */	addi r3, r3, 0x10
/* 8028F1F4 0028C134  4B D9 4D B9 */	bl __nwa__FUl
/* 8028F1F8 0028C138  3C 80 80 29 */	lis r4, __ct__Q34Game10FireChappy3ObjFv@ha
/* 8028F1FC 0028C13C  3C A0 80 29 */	lis r5, __dt__Q34Game10FireChappy3ObjFv@ha
/* 8028F200 0028C140  38 84 F6 2C */	addi r4, r4, __ct__Q34Game10FireChappy3ObjFv@l
/* 8028F204 0028C144  7F E7 FB 78 */	mr r7, r31
/* 8028F208 0028C148  38 A5 F2 30 */	addi r5, r5, __dt__Q34Game10FireChappy3ObjFv@l
/* 8028F20C 0028C14C  38 C0 03 10 */	li r6, 0x310
/* 8028F210 0028C150  4B E3 27 E1 */	bl __construct_new_array
/* 8028F214 0028C154  90 7E 00 44 */	stw r3, 0x44(r30)
/* 8028F218 0028C158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F21C 0028C15C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F220 0028C160  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028F224 0028C164  7C 08 03 A6 */	mtlr r0
/* 8028F228 0028C168  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F22C 0028C16C  4E 80 00 20 */	blr 

.global __dt__Q34Game10FireChappy3ObjFv
__dt__Q34Game10FireChappy3ObjFv:
/* 8028F230 0028C170  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F234 0028C174  7C 08 02 A6 */	mflr r0
/* 8028F238 0028C178  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F23C 0028C17C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F240 0028C180  7C 9F 23 78 */	mr r31, r4
/* 8028F244 0028C184  93 C1 00 08 */	stw r30, 8(r1)
/* 8028F248 0028C188  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028F24C 0028C18C  41 82 00 B8 */	beq lbl_8028F304
/* 8028F250 0028C190  3C 60 80 4D */	lis r3, __vt__Q34Game10FireChappy3Obj@ha
/* 8028F254 0028C194  38 1E 03 00 */	addi r0, r30, 0x300
/* 8028F258 0028C198  38 83 AF 44 */	addi r4, r3, __vt__Q34Game10FireChappy3Obj@l
/* 8028F25C 0028C19C  90 9E 00 00 */	stw r4, 0(r30)
/* 8028F260 0028C1A0  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8028F264 0028C1A4  38 84 03 34 */	addi r4, r4, 0x334
/* 8028F268 0028C1A8  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8028F26C 0028C1AC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8028F270 0028C1B0  90 83 00 00 */	stw r4, 0(r3)
/* 8028F274 0028C1B4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8028F278 0028C1B8  7C 03 00 50 */	subf r0, r3, r0
/* 8028F27C 0028C1BC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8028F280 0028C1C0  41 82 00 74 */	beq lbl_8028F2F4
/* 8028F284 0028C1C4  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Obj@ha
/* 8028F288 0028C1C8  38 1E 02 E4 */	addi r0, r30, 0x2e4
/* 8028F28C 0028C1CC  38 83 DF 4C */	addi r4, r3, __vt__Q34Game10ChappyBase3Obj@l
/* 8028F290 0028C1D0  90 9E 00 00 */	stw r4, 0(r30)
/* 8028F294 0028C1D4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8028F298 0028C1D8  38 84 03 34 */	addi r4, r4, 0x334
/* 8028F29C 0028C1DC  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8028F2A0 0028C1E0  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8028F2A4 0028C1E4  90 83 00 00 */	stw r4, 0(r3)
/* 8028F2A8 0028C1E8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8028F2AC 0028C1EC  7C 03 00 50 */	subf r0, r3, r0
/* 8028F2B0 0028C1F0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8028F2B4 0028C1F4  41 82 00 40 */	beq lbl_8028F2F4
/* 8028F2B8 0028C1F8  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8028F2BC 0028C1FC  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8028F2C0 0028C200  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8028F2C4 0028C204  38 7E 02 90 */	addi r3, r30, 0x290
/* 8028F2C8 0028C208  90 9E 00 00 */	stw r4, 0(r30)
/* 8028F2CC 0028C20C  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8028F2D0 0028C210  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8028F2D4 0028C214  38 80 FF FF */	li r4, -1
/* 8028F2D8 0028C218  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8028F2DC 0028C21C  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8028F2E0 0028C220  90 C5 00 00 */	stw r6, 0(r5)
/* 8028F2E4 0028C224  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8028F2E8 0028C228  7C 05 00 50 */	subf r0, r5, r0
/* 8028F2EC 0028C22C  90 05 00 0C */	stw r0, 0xc(r5)
/* 8028F2F0 0028C230  48 18 22 99 */	bl __dt__5CNodeFv
lbl_8028F2F4:
/* 8028F2F4 0028C234  7F E0 07 35 */	extsh. r0, r31
/* 8028F2F8 0028C238  40 81 00 0C */	ble lbl_8028F304
/* 8028F2FC 0028C23C  7F C3 F3 78 */	mr r3, r30
/* 8028F300 0028C240  4B D9 4D B5 */	bl __dl__FPv
lbl_8028F304:
/* 8028F304 0028C244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F308 0028C248  7F C3 F3 78 */	mr r3, r30
/* 8028F30C 0028C24C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F310 0028C250  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028F314 0028C254  7C 08 03 A6 */	mtlr r0
/* 8028F318 0028C258  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F31C 0028C25C  4E 80 00 20 */	blr 

.global getEnemy__Q34Game10FireChappy3MgrFi
getEnemy__Q34Game10FireChappy3MgrFi:
/* 8028F320 0028C260  1C 04 03 10 */	mulli r0, r4, 0x310
/* 8028F324 0028C264  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8028F328 0028C268  7C 63 02 14 */	add r3, r3, r0
/* 8028F32C 0028C26C  4E 80 00 20 */	blr 

.global loadModelData__Q34Game10FireChappy3MgrFv
loadModelData__Q34Game10FireChappy3MgrFv:
/* 8028F330 0028C270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F334 0028C274  7C 08 02 A6 */	mflr r0
/* 8028F338 0028C278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F33C 0028C27C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F340 0028C280  7C 7F 1B 78 */	mr r31, r3
/* 8028F344 0028C284  4B EA 0D C9 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 8028F348 0028C288  38 A0 00 00 */	li r5, 0
/* 8028F34C 0028C28C  48 00 00 24 */	b lbl_8028F370
lbl_8028F350:
/* 8028F350 0028C290  80 64 00 80 */	lwz r3, 0x80(r4)
/* 8028F354 0028C294  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 8028F358 0028C298  38 A5 00 01 */	addi r5, r5, 1
/* 8028F35C 0028C29C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8028F360 0028C2A0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8028F364 0028C2A4  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 8028F368 0028C2A8  60 00 20 00 */	ori r0, r0, 0x2000
/* 8028F36C 0028C2AC  90 03 00 0C */	stw r0, 0xc(r3)
lbl_8028F370:
/* 8028F370 0028C2B0  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8028F374 0028C2B4  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 8028F378 0028C2B8  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 8028F37C 0028C2BC  7C 00 18 40 */	cmplw r0, r3
/* 8028F380 0028C2C0  41 80 FF D0 */	blt lbl_8028F350
/* 8028F384 0028C2C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F388 0028C2C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F38C 0028C2CC  7C 08 03 A6 */	mtlr r0
/* 8028F390 0028C2D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F394 0028C2D4  4E 80 00 20 */	blr 

.global loadTexData__Q34Game10FireChappy3MgrFv
loadTexData__Q34Game10FireChappy3MgrFv:
/* 8028F398 0028C2D8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8028F39C 0028C2DC  7C 08 02 A6 */	mflr r0
/* 8028F3A0 0028C2E0  38 80 00 00 */	li r4, 0
/* 8028F3A4 0028C2E4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8028F3A8 0028C2E8  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8028F3AC 0028C2EC  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8028F3B0 0028C2F0  7C 7E 1B 78 */	mr r30, r3
/* 8028F3B4 0028C2F4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8028F3B8 0028C2F8  48 1A EE E5 */	bl enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
/* 8028F3BC 0028C2FC  80 8D 84 B8 */	lwz r4, "cMatAnimBtkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"@sda21(r13)
/* 8028F3C0 0028C300  38 61 00 38 */	addi r3, r1, 0x38
/* 8028F3C4 0028C304  3B E0 00 00 */	li r31, 0
/* 8028F3C8 0028C308  48 1B D2 11 */	bl __ct__Q212LoadResource3ArgFPCc
/* 8028F3CC 0028C30C  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8028F3D0 0028C310  38 81 00 38 */	addi r4, r1, 0x38
/* 8028F3D4 0028C314  48 1B D3 CD */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8028F3D8 0028C318  28 03 00 00 */	cmplwi r3, 0
/* 8028F3DC 0028C31C  41 82 00 08 */	beq lbl_8028F3E4
/* 8028F3E0 0028C320  83 E3 00 30 */	lwz r31, 0x30(r3)
lbl_8028F3E4:
/* 8028F3E4 0028C324  28 1F 00 00 */	cmplwi r31, 0
/* 8028F3E8 0028C328  40 82 00 20 */	bne lbl_8028F408
/* 8028F3EC 0028C32C  3C 60 80 49 */	lis r3, lbl_804883B4@ha
/* 8028F3F0 0028C330  3C A0 80 49 */	lis r5, lbl_804883C8@ha
/* 8028F3F4 0028C334  38 63 83 B4 */	addi r3, r3, lbl_804883B4@l
/* 8028F3F8 0028C338  38 80 00 6E */	li r4, 0x6e
/* 8028F3FC 0028C33C  38 A5 83 C8 */	addi r5, r5, lbl_804883C8@l
/* 8028F400 0028C340  4C C6 31 82 */	crclr 6
/* 8028F404 0028C344  4B D9 B2 3D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8028F408:
/* 8028F408 0028C348  38 60 00 10 */	li r3, 0x10
/* 8028F40C 0028C34C  4B D9 4A 99 */	bl __nw__FUl
/* 8028F410 0028C350  7C 60 1B 79 */	or. r0, r3, r3
/* 8028F414 0028C354  41 82 00 0C */	beq lbl_8028F420
/* 8028F418 0028C358  48 1A 4D 1D */	bl __ct__Q23Sys15MatTexAnimationFv
/* 8028F41C 0028C35C  7C 60 1B 78 */	mr r0, r3
lbl_8028F420:
/* 8028F420 0028C360  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8028F424 0028C364  7F E4 FB 78 */	mr r4, r31
/* 8028F428 0028C368  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 8028F42C 0028C36C  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 8028F430 0028C370  48 1A 4B F1 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 8028F434 0028C374  80 8D 84 BC */	lwz r4, "cMatAnimBrkTexName__Q34Game10FireChappy27@unnamed@FireChappyMgr_cpp@"@sda21(r13)
/* 8028F438 0028C378  38 61 00 08 */	addi r3, r1, 8
/* 8028F43C 0028C37C  3B E0 00 00 */	li r31, 0
/* 8028F440 0028C380  48 1B D1 99 */	bl __ct__Q212LoadResource3ArgFPCc
/* 8028F444 0028C384  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8028F448 0028C388  38 81 00 08 */	addi r4, r1, 8
/* 8028F44C 0028C38C  48 1B D3 55 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8028F450 0028C390  28 03 00 00 */	cmplwi r3, 0
/* 8028F454 0028C394  41 82 00 08 */	beq lbl_8028F45C
/* 8028F458 0028C398  83 E3 00 30 */	lwz r31, 0x30(r3)
lbl_8028F45C:
/* 8028F45C 0028C39C  28 1F 00 00 */	cmplwi r31, 0
/* 8028F460 0028C3A0  40 82 00 20 */	bne lbl_8028F480
/* 8028F464 0028C3A4  3C 60 80 49 */	lis r3, lbl_804883B4@ha
/* 8028F468 0028C3A8  3C A0 80 49 */	lis r5, lbl_804883C8@ha
/* 8028F46C 0028C3AC  38 63 83 B4 */	addi r3, r3, lbl_804883B4@l
/* 8028F470 0028C3B0  38 80 00 76 */	li r4, 0x76
/* 8028F474 0028C3B4  38 A5 83 C8 */	addi r5, r5, lbl_804883C8@l
/* 8028F478 0028C3B8  4C C6 31 82 */	crclr 6
/* 8028F47C 0028C3BC  4B D9 B1 C5 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8028F480:
/* 8028F480 0028C3C0  38 60 00 14 */	li r3, 0x14
/* 8028F484 0028C3C4  4B D9 4A 21 */	bl __nw__FUl
/* 8028F488 0028C3C8  7C 60 1B 79 */	or. r0, r3, r3
/* 8028F48C 0028C3CC  41 82 00 0C */	beq lbl_8028F498
/* 8028F490 0028C3D0  48 1A 4D B1 */	bl __ct__Q23Sys18MatTevRegAnimationFv
/* 8028F494 0028C3D4  7C 60 1B 78 */	mr r0, r3
lbl_8028F498:
/* 8028F498 0028C3D8  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8028F49C 0028C3DC  7F E4 FB 78 */	mr r4, r31
/* 8028F4A0 0028C3E0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8028F4A4 0028C3E4  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 8028F4A8 0028C3E8  48 1A 4B 79 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 8028F4AC 0028C3EC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8028F4B0 0028C3F0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8028F4B4 0028C3F4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8028F4B8 0028C3F8  7C 08 03 A6 */	mtlr r0
/* 8028F4BC 0028C3FC  38 21 00 70 */	addi r1, r1, 0x70
/* 8028F4C0 0028C400  4E 80 00 20 */	blr 

.global createModel__Q34Game10FireChappy3MgrFv
createModel__Q34Game10FireChappy3MgrFv:
/* 8028F4C4 0028C404  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F4C8 0028C408  7C 08 02 A6 */	mflr r0
/* 8028F4CC 0028C40C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F4D0 0028C410  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F4D4 0028C414  93 C1 00 08 */	stw r30, 8(r1)
/* 8028F4D8 0028C418  7C 7E 1B 78 */	mr r30, r3
/* 8028F4DC 0028C41C  38 60 00 14 */	li r3, 0x14
/* 8028F4E0 0028C420  4B D9 49 C5 */	bl __nw__FUl
/* 8028F4E4 0028C424  7C 7F 1B 79 */	or. r31, r3, r3
/* 8028F4E8 0028C428  41 82 00 18 */	beq lbl_8028F500
/* 8028F4EC 0028C42C  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8028F4F0 0028C430  3C A0 00 04 */	lis r5, 4
/* 8028F4F4 0028C434  88 DE 00 24 */	lbz r6, 0x24(r30)
/* 8028F4F8 0028C438  48 1A EC E1 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 8028F4FC 0028C43C  7C 7F 1B 78 */	mr r31, r3
lbl_8028F500:
/* 8028F500 0028C440  28 1F 00 00 */	cmplwi r31, 0
/* 8028F504 0028C444  40 82 00 20 */	bne lbl_8028F524
/* 8028F508 0028C448  3C 60 80 49 */	lis r3, lbl_804883B4@ha
/* 8028F50C 0028C44C  3C A0 80 49 */	lis r5, lbl_804883C8@ha
/* 8028F510 0028C450  38 63 83 B4 */	addi r3, r3, lbl_804883B4@l
/* 8028F514 0028C454  38 80 00 90 */	li r4, 0x90
/* 8028F518 0028C458  38 A5 83 C8 */	addi r5, r5, lbl_804883C8@l
/* 8028F51C 0028C45C  4C C6 31 82 */	crclr 6
/* 8028F520 0028C460  4B D9 B1 21 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8028F524:
/* 8028F524 0028C464  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F528 0028C468  7F E3 FB 78 */	mr r3, r31
/* 8028F52C 0028C46C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F530 0028C470  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028F534 0028C474  7C 08 03 A6 */	mtlr r0
/* 8028F538 0028C478  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F53C 0028C47C  4E 80 00 20 */	blr 

.global __dt__Q34Game10FireChappy3MgrFv
__dt__Q34Game10FireChappy3MgrFv:
/* 8028F540 0028C480  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F544 0028C484  7C 08 02 A6 */	mflr r0
/* 8028F548 0028C488  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F54C 0028C48C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028F550 0028C490  7C 9F 23 78 */	mr r31, r4
/* 8028F554 0028C494  93 C1 00 08 */	stw r30, 8(r1)
/* 8028F558 0028C498  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028F55C 0028C49C  41 82 00 78 */	beq lbl_8028F5D4
/* 8028F560 0028C4A0  3C 60 80 4D */	lis r3, __vt__Q34Game10FireChappy3Mgr@ha
/* 8028F564 0028C4A4  38 63 AD 18 */	addi r3, r3, __vt__Q34Game10FireChappy3Mgr@l
/* 8028F568 0028C4A8  90 7E 00 00 */	stw r3, 0(r30)
/* 8028F56C 0028C4AC  38 03 00 38 */	addi r0, r3, 0x38
/* 8028F570 0028C4B0  90 1E 00 04 */	stw r0, 4(r30)
/* 8028F574 0028C4B4  41 82 00 50 */	beq lbl_8028F5C4
/* 8028F578 0028C4B8  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8028F57C 0028C4BC  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8028F580 0028C4C0  90 7E 00 00 */	stw r3, 0(r30)
/* 8028F584 0028C4C4  38 03 00 38 */	addi r0, r3, 0x38
/* 8028F588 0028C4C8  90 1E 00 04 */	stw r0, 4(r30)
/* 8028F58C 0028C4CC  41 82 00 38 */	beq lbl_8028F5C4
/* 8028F590 0028C4D0  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8028F594 0028C4D4  34 1E 00 04 */	addic. r0, r30, 4
/* 8028F598 0028C4D8  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8028F59C 0028C4DC  90 7E 00 00 */	stw r3, 0(r30)
/* 8028F5A0 0028C4E0  38 03 00 38 */	addi r0, r3, 0x38
/* 8028F5A4 0028C4E4  90 1E 00 04 */	stw r0, 4(r30)
/* 8028F5A8 0028C4E8  41 82 00 1C */	beq lbl_8028F5C4
/* 8028F5AC 0028C4EC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8028F5B0 0028C4F0  38 7E 00 04 */	addi r3, r30, 4
/* 8028F5B4 0028C4F4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8028F5B8 0028C4F8  38 80 00 00 */	li r4, 0
/* 8028F5BC 0028C4FC  90 1E 00 04 */	stw r0, 4(r30)
/* 8028F5C0 0028C500  48 18 1F C9 */	bl __dt__5CNodeFv
lbl_8028F5C4:
/* 8028F5C4 0028C504  7F E0 07 35 */	extsh. r0, r31
/* 8028F5C8 0028C508  40 81 00 0C */	ble lbl_8028F5D4
/* 8028F5CC 0028C50C  7F C3 F3 78 */	mr r3, r30
/* 8028F5D0 0028C510  4B D9 4A E5 */	bl __dl__FPv
lbl_8028F5D4:
/* 8028F5D4 0028C514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F5D8 0028C518  7F C3 F3 78 */	mr r3, r30
/* 8028F5DC 0028C51C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028F5E0 0028C520  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028F5E4 0028C524  7C 08 03 A6 */	mtlr r0
/* 8028F5E8 0028C528  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F5EC 0028C52C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10FireChappy3MgrFv
getEnemyTypeID__Q34Game10FireChappy3MgrFv:
/* 8028F5F0 0028C530  38 60 00 21 */	li r3, 0x21
/* 8028F5F4 0028C534  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game10FireChappy3MgrFPv
doLoadBmd__Q34Game10FireChappy3MgrFPv:
/* 8028F5F8 0028C538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028F5FC 0028C53C  7C 08 02 A6 */	mflr r0
/* 8028F600 0028C540  3C A0 01 24 */	lis r5, 0x01240030@ha
/* 8028F604 0028C544  7C 83 23 78 */	mr r3, r4
/* 8028F608 0028C548  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028F60C 0028C54C  38 85 00 30 */	addi r4, r5, 0x01240030@l
/* 8028F610 0028C550  4B DE 02 85 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 8028F614 0028C554  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028F618 0028C558  7C 08 03 A6 */	mtlr r0
/* 8028F61C 0028C55C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028F620 0028C560  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game10FireChappy3MgrFv"
"@4@__dt__Q34Game10FireChappy3MgrFv":
/* 8028F624 0028C564  38 63 FF FC */	addi r3, r3, -4
/* 8028F628 0028C568  4B FF FF 18 */	b __dt__Q34Game10FireChappy3MgrFv
