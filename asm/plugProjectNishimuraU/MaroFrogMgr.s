.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80485770
lbl_80485770:
	.4byte 0x837D838D
	.4byte 0x834B8347
	.4byte 0x838B837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game8MaroFrog3Mgr
__vt__Q34Game8MaroFrog3Mgr:
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
	.4byte "@4@__dt__Q34Game8MaroFrog3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game8MaroFrog3MgrFv
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
	.4byte createObj__Q34Game8MaroFrog3MgrFi
	.4byte getEnemy__Q34Game8MaroFrog3MgrFi
	.4byte doAlloc__Q34Game8MaroFrog3MgrFv
	.4byte getEnemyTypeID__Q34Game8MaroFrog3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q24Game12EnemyMgrBaseFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game8MaroFrog3MgrFiUc
__ct__Q34Game8MaroFrog3MgrFiUc:
/* 8026152C 0025E46C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261530 0025E470  7C 08 02 A6 */	mflr r0
/* 80261534 0025E474  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261538 0025E478  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026153C 0025E47C  7C 7F 1B 78 */	mr r31, r3
/* 80261540 0025E480  4B EC D7 55 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 80261544 0025E484  3C 60 80 4C */	lis r3, __vt__Q34Game8MaroFrog3Mgr@ha
/* 80261548 0025E488  3C 80 80 48 */	lis r4, lbl_80485770@ha
/* 8026154C 0025E48C  38 A3 3A A0 */	addi r5, r3, __vt__Q34Game8MaroFrog3Mgr@l
/* 80261550 0025E490  7F E3 FB 78 */	mr r3, r31
/* 80261554 0025E494  90 BF 00 00 */	stw r5, 0(r31)
/* 80261558 0025E498  38 A5 00 38 */	addi r5, r5, 0x38
/* 8026155C 0025E49C  38 04 57 70 */	addi r0, r4, lbl_80485770@l
/* 80261560 0025E4A0  90 BF 00 04 */	stw r5, 4(r31)
/* 80261564 0025E4A4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80261568 0025E4A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026156C 0025E4AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261570 0025E4B0  7C 08 03 A6 */	mtlr r0
/* 80261574 0025E4B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80261578 0025E4B8  4E 80 00 20 */	blr 

.global doAlloc__Q34Game8MaroFrog3MgrFv
doAlloc__Q34Game8MaroFrog3MgrFv:
/* 8026157C 0025E4BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261580 0025E4C0  7C 08 02 A6 */	mflr r0
/* 80261584 0025E4C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261588 0025E4C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026158C 0025E4CC  7C 7F 1B 78 */	mr r31, r3
/* 80261590 0025E4D0  38 60 08 A8 */	li r3, 0x8a8
/* 80261594 0025E4D4  4B DC 29 11 */	bl __nw__FUl
/* 80261598 0025E4D8  7C 64 1B 79 */	or. r4, r3, r3
/* 8026159C 0025E4DC  41 82 00 0C */	beq lbl_802615A8
/* 802615A0 0025E4E0  4B FF 6C 19 */	bl __ct__Q34Game4Frog5ParmsFv
/* 802615A4 0025E4E4  7C 64 1B 78 */	mr r4, r3
lbl_802615A8:
/* 802615A8 0025E4E8  7F E3 FB 78 */	mr r3, r31
/* 802615AC 0025E4EC  4B EC E2 F1 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 802615B0 0025E4F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802615B4 0025E4F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802615B8 0025E4F8  7C 08 03 A6 */	mtlr r0
/* 802615BC 0025E4FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802615C0 0025E500  4E 80 00 20 */	blr 

.global createObj__Q34Game8MaroFrog3MgrFi
createObj__Q34Game8MaroFrog3MgrFi:
/* 802615C4 0025E504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802615C8 0025E508  7C 08 02 A6 */	mflr r0
/* 802615CC 0025E50C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802615D0 0025E510  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802615D4 0025E514  7C 9F 23 78 */	mr r31, r4
/* 802615D8 0025E518  93 C1 00 08 */	stw r30, 8(r1)
/* 802615DC 0025E51C  7C 7E 1B 78 */	mr r30, r3
/* 802615E0 0025E520  1C 7F 02 F0 */	mulli r3, r31, 0x2f0
/* 802615E4 0025E524  38 63 00 10 */	addi r3, r3, 0x10
/* 802615E8 0025E528  4B DC 29 C5 */	bl __nwa__FUl
/* 802615EC 0025E52C  3C 80 80 26 */	lis r4, __ct__Q34Game8MaroFrog3ObjFv@ha
/* 802615F0 0025E530  3C A0 80 26 */	lis r5, __dt__Q34Game8MaroFrog3ObjFv@ha
/* 802615F4 0025E534  38 84 17 E0 */	addi r4, r4, __ct__Q34Game8MaroFrog3ObjFv@l
/* 802615F8 0025E538  7F E7 FB 78 */	mr r7, r31
/* 802615FC 0025E53C  38 A5 16 24 */	addi r5, r5, __dt__Q34Game8MaroFrog3ObjFv@l
/* 80261600 0025E540  38 C0 02 F0 */	li r6, 0x2f0
/* 80261604 0025E544  4B E6 03 ED */	bl __construct_new_array
/* 80261608 0025E548  90 7E 00 44 */	stw r3, 0x44(r30)
/* 8026160C 0025E54C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261610 0025E550  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261614 0025E554  83 C1 00 08 */	lwz r30, 8(r1)
/* 80261618 0025E558  7C 08 03 A6 */	mtlr r0
/* 8026161C 0025E55C  38 21 00 10 */	addi r1, r1, 0x10
/* 80261620 0025E560  4E 80 00 20 */	blr 

.global __dt__Q34Game8MaroFrog3ObjFv
__dt__Q34Game8MaroFrog3ObjFv:
/* 80261624 0025E564  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261628 0025E568  7C 08 02 A6 */	mflr r0
/* 8026162C 0025E56C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261630 0025E570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261634 0025E574  7C 9F 23 78 */	mr r31, r4
/* 80261638 0025E578  93 C1 00 08 */	stw r30, 8(r1)
/* 8026163C 0025E57C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80261640 0025E580  41 82 00 B4 */	beq lbl_802616F4
/* 80261644 0025E584  3C 60 80 4C */	lis r3, __vt__Q34Game8MaroFrog3Obj@ha
/* 80261648 0025E588  38 BE 02 E0 */	addi r5, r30, 0x2e0
/* 8026164C 0025E58C  38 83 3B 80 */	addi r4, r3, __vt__Q34Game8MaroFrog3Obj@l
/* 80261650 0025E590  90 9E 00 00 */	stw r4, 0(r30)
/* 80261654 0025E594  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80261658 0025E598  38 04 03 04 */	addi r0, r4, 0x304
/* 8026165C 0025E59C  90 7E 01 78 */	stw r3, 0x178(r30)
/* 80261660 0025E5A0  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 80261664 0025E5A4  90 03 00 00 */	stw r0, 0(r3)
/* 80261668 0025E5A8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8026166C 0025E5AC  7C 03 28 50 */	subf r0, r3, r5
/* 80261670 0025E5B0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80261674 0025E5B4  41 82 00 70 */	beq lbl_802616E4
/* 80261678 0025E5B8  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog3Obj@ha
/* 8026167C 0025E5BC  38 83 24 D0 */	addi r4, r3, __vt__Q34Game4Frog3Obj@l
/* 80261680 0025E5C0  90 9E 00 00 */	stw r4, 0(r30)
/* 80261684 0025E5C4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80261688 0025E5C8  38 04 03 04 */	addi r0, r4, 0x304
/* 8026168C 0025E5CC  90 7E 01 78 */	stw r3, 0x178(r30)
/* 80261690 0025E5D0  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 80261694 0025E5D4  90 03 00 00 */	stw r0, 0(r3)
/* 80261698 0025E5D8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8026169C 0025E5DC  7C 03 28 50 */	subf r0, r3, r5
/* 802616A0 0025E5E0  90 03 00 0C */	stw r0, 0xc(r3)
/* 802616A4 0025E5E4  41 82 00 40 */	beq lbl_802616E4
/* 802616A8 0025E5E8  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802616AC 0025E5EC  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 802616B0 0025E5F0  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802616B4 0025E5F4  38 7E 02 90 */	addi r3, r30, 0x290
/* 802616B8 0025E5F8  90 9E 00 00 */	stw r4, 0(r30)
/* 802616BC 0025E5FC  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802616C0 0025E600  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802616C4 0025E604  38 80 FF FF */	li r4, -1
/* 802616C8 0025E608  90 BE 01 78 */	stw r5, 0x178(r30)
/* 802616CC 0025E60C  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802616D0 0025E610  90 C5 00 00 */	stw r6, 0(r5)
/* 802616D4 0025E614  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802616D8 0025E618  7C 05 00 50 */	subf r0, r5, r0
/* 802616DC 0025E61C  90 05 00 0C */	stw r0, 0xc(r5)
/* 802616E0 0025E620  48 1A FE A9 */	bl __dt__5CNodeFv
lbl_802616E4:
/* 802616E4 0025E624  7F E0 07 35 */	extsh. r0, r31
/* 802616E8 0025E628  40 81 00 0C */	ble lbl_802616F4
/* 802616EC 0025E62C  7F C3 F3 78 */	mr r3, r30
/* 802616F0 0025E630  4B DC 29 C5 */	bl __dl__FPv
lbl_802616F4:
/* 802616F4 0025E634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802616F8 0025E638  7F C3 F3 78 */	mr r3, r30
/* 802616FC 0025E63C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261700 0025E640  83 C1 00 08 */	lwz r30, 8(r1)
/* 80261704 0025E644  7C 08 03 A6 */	mtlr r0
/* 80261708 0025E648  38 21 00 10 */	addi r1, r1, 0x10
/* 8026170C 0025E64C  4E 80 00 20 */	blr 

.global getEnemy__Q34Game8MaroFrog3MgrFi
getEnemy__Q34Game8MaroFrog3MgrFi:
/* 80261710 0025E650  1C 04 02 F0 */	mulli r0, r4, 0x2f0
/* 80261714 0025E654  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80261718 0025E658  7C 63 02 14 */	add r3, r3, r0
/* 8026171C 0025E65C  4E 80 00 20 */	blr 

.global __dt__Q34Game8MaroFrog3MgrFv
__dt__Q34Game8MaroFrog3MgrFv:
/* 80261720 0025E660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261724 0025E664  7C 08 02 A6 */	mflr r0
/* 80261728 0025E668  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026172C 0025E66C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261730 0025E670  7C 9F 23 78 */	mr r31, r4
/* 80261734 0025E674  93 C1 00 08 */	stw r30, 8(r1)
/* 80261738 0025E678  7C 7E 1B 79 */	or. r30, r3, r3
/* 8026173C 0025E67C  41 82 00 78 */	beq lbl_802617B4
/* 80261740 0025E680  3C 60 80 4C */	lis r3, __vt__Q34Game8MaroFrog3Mgr@ha
/* 80261744 0025E684  38 63 3A A0 */	addi r3, r3, __vt__Q34Game8MaroFrog3Mgr@l
/* 80261748 0025E688  90 7E 00 00 */	stw r3, 0(r30)
/* 8026174C 0025E68C  38 03 00 38 */	addi r0, r3, 0x38
/* 80261750 0025E690  90 1E 00 04 */	stw r0, 4(r30)
/* 80261754 0025E694  41 82 00 50 */	beq lbl_802617A4
/* 80261758 0025E698  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8026175C 0025E69C  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 80261760 0025E6A0  90 7E 00 00 */	stw r3, 0(r30)
/* 80261764 0025E6A4  38 03 00 38 */	addi r0, r3, 0x38
/* 80261768 0025E6A8  90 1E 00 04 */	stw r0, 4(r30)
/* 8026176C 0025E6AC  41 82 00 38 */	beq lbl_802617A4
/* 80261770 0025E6B0  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 80261774 0025E6B4  34 1E 00 04 */	addic. r0, r30, 4
/* 80261778 0025E6B8  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8026177C 0025E6BC  90 7E 00 00 */	stw r3, 0(r30)
/* 80261780 0025E6C0  38 03 00 38 */	addi r0, r3, 0x38
/* 80261784 0025E6C4  90 1E 00 04 */	stw r0, 4(r30)
/* 80261788 0025E6C8  41 82 00 1C */	beq lbl_802617A4
/* 8026178C 0025E6CC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80261790 0025E6D0  38 7E 00 04 */	addi r3, r30, 4
/* 80261794 0025E6D4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80261798 0025E6D8  38 80 00 00 */	li r4, 0
/* 8026179C 0025E6DC  90 1E 00 04 */	stw r0, 4(r30)
/* 802617A0 0025E6E0  48 1A FD E9 */	bl __dt__5CNodeFv
lbl_802617A4:
/* 802617A4 0025E6E4  7F E0 07 35 */	extsh. r0, r31
/* 802617A8 0025E6E8  40 81 00 0C */	ble lbl_802617B4
/* 802617AC 0025E6EC  7F C3 F3 78 */	mr r3, r30
/* 802617B0 0025E6F0  4B DC 29 05 */	bl __dl__FPv
lbl_802617B4:
/* 802617B4 0025E6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802617B8 0025E6F8  7F C3 F3 78 */	mr r3, r30
/* 802617BC 0025E6FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802617C0 0025E700  83 C1 00 08 */	lwz r30, 8(r1)
/* 802617C4 0025E704  7C 08 03 A6 */	mtlr r0
/* 802617C8 0025E708  38 21 00 10 */	addi r1, r1, 0x10
/* 802617CC 0025E70C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game8MaroFrog3MgrFv
getEnemyTypeID__Q34Game8MaroFrog3MgrFv:
/* 802617D0 0025E710  38 60 00 12 */	li r3, 0x12
/* 802617D4 0025E714  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game8MaroFrog3MgrFv"
"@4@__dt__Q34Game8MaroFrog3MgrFv":
/* 802617D8 0025E718  38 63 FF FC */	addi r3, r3, -4
/* 802617DC 0025E71C  4B FF FF 44 */	b __dt__Q34Game8MaroFrog3MgrFv
