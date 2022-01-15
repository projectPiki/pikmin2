.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048D1D8
lbl_8048D1D8:
	.4byte 0x836E8369
	.4byte 0x83688362
	.4byte 0x834E838A
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game4Hana3Mgr
__vt__Q34Game4Hana3Mgr:
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
	.4byte "@4@__dt__Q34Game4Hana3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game4Hana3MgrFv
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
	.4byte createObj__Q34Game4Hana3MgrFi
	.4byte getEnemy__Q34Game4Hana3MgrFi
	.4byte doAlloc__Q34Game4Hana3MgrFv
	.4byte getEnemyTypeID__Q34Game4Hana3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game4Hana3MgrFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game4Hana3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Hana3MgrFiUc
__ct__Q34Game4Hana3MgrFiUc:
/* 802F2DEC 002EFD2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F2DF0 002EFD30  7C 08 02 A6 */	mflr r0
/* 802F2DF4 002EFD34  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F2DF8 002EFD38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F2DFC 002EFD3C  7C 7F 1B 78 */	mr r31, r3
/* 802F2E00 002EFD40  4B E3 BE 95 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 802F2E04 002EFD44  3C 60 80 4D */	lis r3, __vt__Q34Game4Hana3Mgr@ha
/* 802F2E08 002EFD48  3C 80 80 49 */	lis r4, lbl_8048D1D8@ha
/* 802F2E0C 002EFD4C  38 A3 52 C8 */	addi r5, r3, __vt__Q34Game4Hana3Mgr@l
/* 802F2E10 002EFD50  7F E3 FB 78 */	mr r3, r31
/* 802F2E14 002EFD54  90 BF 00 00 */	stw r5, 0(r31)
/* 802F2E18 002EFD58  38 A5 00 38 */	addi r5, r5, 0x38
/* 802F2E1C 002EFD5C  38 04 D1 D8 */	addi r0, r4, lbl_8048D1D8@l
/* 802F2E20 002EFD60  90 BF 00 04 */	stw r5, 4(r31)
/* 802F2E24 002EFD64  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802F2E28 002EFD68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F2E2C 002EFD6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F2E30 002EFD70  7C 08 03 A6 */	mtlr r0
/* 802F2E34 002EFD74  38 21 00 10 */	addi r1, r1, 0x10
/* 802F2E38 002EFD78  4E 80 00 20 */	blr 

.global doAlloc__Q34Game4Hana3MgrFv
doAlloc__Q34Game4Hana3MgrFv:
/* 802F2E3C 002EFD7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F2E40 002EFD80  7C 08 02 A6 */	mflr r0
/* 802F2E44 002EFD84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F2E48 002EFD88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F2E4C 002EFD8C  7C 7F 1B 78 */	mr r31, r3
/* 802F2E50 002EFD90  38 60 08 84 */	li r3, 0x884
/* 802F2E54 002EFD94  4B D3 10 51 */	bl __nw__FUl
/* 802F2E58 002EFD98  7C 64 1B 79 */	or. r4, r3, r3
/* 802F2E5C 002EFD9C  41 82 00 0C */	beq lbl_802F2E68
/* 802F2E60 002EFDA0  4B E2 6A D9 */	bl __ct__Q34Game10ChappyBase5ParmsFv
/* 802F2E64 002EFDA4  7C 64 1B 78 */	mr r4, r3
lbl_802F2E68:
/* 802F2E68 002EFDA8  7F E3 FB 78 */	mr r3, r31
/* 802F2E6C 002EFDAC  4B E3 CA 31 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 802F2E70 002EFDB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F2E74 002EFDB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F2E78 002EFDB8  7C 08 03 A6 */	mtlr r0
/* 802F2E7C 002EFDBC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F2E80 002EFDC0  4E 80 00 20 */	blr 

.global createObj__Q34Game4Hana3MgrFi
createObj__Q34Game4Hana3MgrFi:
/* 802F2E84 002EFDC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F2E88 002EFDC8  7C 08 02 A6 */	mflr r0
/* 802F2E8C 002EFDCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F2E90 002EFDD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F2E94 002EFDD4  7C 9F 23 78 */	mr r31, r4
/* 802F2E98 002EFDD8  93 C1 00 08 */	stw r30, 8(r1)
/* 802F2E9C 002EFDDC  7C 7E 1B 78 */	mr r30, r3
/* 802F2EA0 002EFDE0  1C 7F 02 F8 */	mulli r3, r31, 0x2f8
/* 802F2EA4 002EFDE4  38 63 00 10 */	addi r3, r3, 0x10
/* 802F2EA8 002EFDE8  4B D3 11 05 */	bl __nwa__FUl
/* 802F2EAC 002EFDEC  3C 80 80 2F */	lis r4, __ct__Q34Game4Hana3ObjFv@ha
/* 802F2EB0 002EFDF0  3C A0 80 2F */	lis r5, __dt__Q34Game4Hana3ObjFv@ha
/* 802F2EB4 002EFDF4  38 84 31 38 */	addi r4, r4, __ct__Q34Game4Hana3ObjFv@l
/* 802F2EB8 002EFDF8  7F E7 FB 78 */	mr r7, r31
/* 802F2EBC 002EFDFC  38 A5 2E E4 */	addi r5, r5, __dt__Q34Game4Hana3ObjFv@l
/* 802F2EC0 002EFE00  38 C0 02 F8 */	li r6, 0x2f8
/* 802F2EC4 002EFE04  4B DC EB 2D */	bl __construct_new_array
/* 802F2EC8 002EFE08  90 7E 00 44 */	stw r3, 0x44(r30)
/* 802F2ECC 002EFE0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F2ED0 002EFE10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F2ED4 002EFE14  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F2ED8 002EFE18  7C 08 03 A6 */	mtlr r0
/* 802F2EDC 002EFE1C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F2EE0 002EFE20  4E 80 00 20 */	blr 

.global __dt__Q34Game4Hana3ObjFv
__dt__Q34Game4Hana3ObjFv:
/* 802F2EE4 002EFE24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F2EE8 002EFE28  7C 08 02 A6 */	mflr r0
/* 802F2EEC 002EFE2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F2EF0 002EFE30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F2EF4 002EFE34  7C 9F 23 78 */	mr r31, r4
/* 802F2EF8 002EFE38  93 C1 00 08 */	stw r30, 8(r1)
/* 802F2EFC 002EFE3C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F2F00 002EFE40  41 82 00 B8 */	beq lbl_802F2FB8
/* 802F2F04 002EFE44  3C 60 80 4D */	lis r3, __vt__Q34Game4Hana3Obj@ha
/* 802F2F08 002EFE48  38 1E 02 E8 */	addi r0, r30, 0x2e8
/* 802F2F0C 002EFE4C  38 83 53 D4 */	addi r4, r3, __vt__Q34Game4Hana3Obj@l
/* 802F2F10 002EFE50  90 9E 00 00 */	stw r4, 0(r30)
/* 802F2F14 002EFE54  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802F2F18 002EFE58  38 84 03 34 */	addi r4, r4, 0x334
/* 802F2F1C 002EFE5C  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802F2F20 002EFE60  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F2F24 002EFE64  90 83 00 00 */	stw r4, 0(r3)
/* 802F2F28 002EFE68  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F2F2C 002EFE6C  7C 03 00 50 */	subf r0, r3, r0
/* 802F2F30 002EFE70  90 03 00 0C */	stw r0, 0xc(r3)
/* 802F2F34 002EFE74  41 82 00 74 */	beq lbl_802F2FA8
/* 802F2F38 002EFE78  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Obj@ha
/* 802F2F3C 002EFE7C  38 1E 02 E4 */	addi r0, r30, 0x2e4
/* 802F2F40 002EFE80  38 83 DF 4C */	addi r4, r3, __vt__Q34Game10ChappyBase3Obj@l
/* 802F2F44 002EFE84  90 9E 00 00 */	stw r4, 0(r30)
/* 802F2F48 002EFE88  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802F2F4C 002EFE8C  38 84 03 34 */	addi r4, r4, 0x334
/* 802F2F50 002EFE90  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802F2F54 002EFE94  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F2F58 002EFE98  90 83 00 00 */	stw r4, 0(r3)
/* 802F2F5C 002EFE9C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F2F60 002EFEA0  7C 03 00 50 */	subf r0, r3, r0
/* 802F2F64 002EFEA4  90 03 00 0C */	stw r0, 0xc(r3)
/* 802F2F68 002EFEA8  41 82 00 40 */	beq lbl_802F2FA8
/* 802F2F6C 002EFEAC  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802F2F70 002EFEB0  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 802F2F74 002EFEB4  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802F2F78 002EFEB8  38 7E 02 90 */	addi r3, r30, 0x290
/* 802F2F7C 002EFEBC  90 9E 00 00 */	stw r4, 0(r30)
/* 802F2F80 002EFEC0  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802F2F84 002EFEC4  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802F2F88 002EFEC8  38 80 FF FF */	li r4, -1
/* 802F2F8C 002EFECC  90 BE 01 78 */	stw r5, 0x178(r30)
/* 802F2F90 002EFED0  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802F2F94 002EFED4  90 C5 00 00 */	stw r6, 0(r5)
/* 802F2F98 002EFED8  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802F2F9C 002EFEDC  7C 05 00 50 */	subf r0, r5, r0
/* 802F2FA0 002EFEE0  90 05 00 0C */	stw r0, 0xc(r5)
/* 802F2FA4 002EFEE4  48 11 E5 E5 */	bl __dt__5CNodeFv
lbl_802F2FA8:
/* 802F2FA8 002EFEE8  7F E0 07 35 */	extsh. r0, r31
/* 802F2FAC 002EFEEC  40 81 00 0C */	ble lbl_802F2FB8
/* 802F2FB0 002EFEF0  7F C3 F3 78 */	mr r3, r30
/* 802F2FB4 002EFEF4  4B D3 11 01 */	bl __dl__FPv
lbl_802F2FB8:
/* 802F2FB8 002EFEF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F2FBC 002EFEFC  7F C3 F3 78 */	mr r3, r30
/* 802F2FC0 002EFF00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F2FC4 002EFF04  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F2FC8 002EFF08  7C 08 03 A6 */	mtlr r0
/* 802F2FCC 002EFF0C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F2FD0 002EFF10  4E 80 00 20 */	blr 

.global getEnemy__Q34Game4Hana3MgrFi
getEnemy__Q34Game4Hana3MgrFi:
/* 802F2FD4 002EFF14  1C 04 02 F8 */	mulli r0, r4, 0x2f8
/* 802F2FD8 002EFF18  80 63 00 44 */	lwz r3, 0x44(r3)
/* 802F2FDC 002EFF1C  7C 63 02 14 */	add r3, r3, r0
/* 802F2FE0 002EFF20  4E 80 00 20 */	blr 

.global loadModelData__Q34Game4Hana3MgrFv
loadModelData__Q34Game4Hana3MgrFv:
/* 802F2FE4 002EFF24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F2FE8 002EFF28  7C 08 02 A6 */	mflr r0
/* 802F2FEC 002EFF2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F2FF0 002EFF30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F2FF4 002EFF34  7C 7F 1B 78 */	mr r31, r3
/* 802F2FF8 002EFF38  4B E3 D1 15 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 802F2FFC 002EFF3C  38 A0 00 00 */	li r5, 0
/* 802F3000 002EFF40  48 00 00 24 */	b lbl_802F3024
lbl_802F3004:
/* 802F3004 002EFF44  80 64 00 80 */	lwz r3, 0x80(r4)
/* 802F3008 002EFF48  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 802F300C 002EFF4C  38 A5 00 01 */	addi r5, r5, 1
/* 802F3010 002EFF50  7C 63 00 2E */	lwzx r3, r3, r0
/* 802F3014 002EFF54  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802F3018 002EFF58  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 802F301C 002EFF5C  60 00 20 00 */	ori r0, r0, 0x2000
/* 802F3020 002EFF60  90 03 00 0C */	stw r0, 0xc(r3)
lbl_802F3024:
/* 802F3024 002EFF64  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 802F3028 002EFF68  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 802F302C 002EFF6C  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 802F3030 002EFF70  7C 00 18 40 */	cmplw r0, r3
/* 802F3034 002EFF74  41 80 FF D0 */	blt lbl_802F3004
/* 802F3038 002EFF78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F303C 002EFF7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F3040 002EFF80  7C 08 03 A6 */	mtlr r0
/* 802F3044 002EFF84  38 21 00 10 */	addi r1, r1, 0x10
/* 802F3048 002EFF88  4E 80 00 20 */	blr 

.global __dt__Q34Game4Hana3MgrFv
__dt__Q34Game4Hana3MgrFv:
/* 802F304C 002EFF8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F3050 002EFF90  7C 08 02 A6 */	mflr r0
/* 802F3054 002EFF94  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3058 002EFF98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F305C 002EFF9C  7C 9F 23 78 */	mr r31, r4
/* 802F3060 002EFFA0  93 C1 00 08 */	stw r30, 8(r1)
/* 802F3064 002EFFA4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F3068 002EFFA8  41 82 00 78 */	beq lbl_802F30E0
/* 802F306C 002EFFAC  3C 60 80 4D */	lis r3, __vt__Q34Game4Hana3Mgr@ha
/* 802F3070 002EFFB0  38 63 52 C8 */	addi r3, r3, __vt__Q34Game4Hana3Mgr@l
/* 802F3074 002EFFB4  90 7E 00 00 */	stw r3, 0(r30)
/* 802F3078 002EFFB8  38 03 00 38 */	addi r0, r3, 0x38
/* 802F307C 002EFFBC  90 1E 00 04 */	stw r0, 4(r30)
/* 802F3080 002EFFC0  41 82 00 50 */	beq lbl_802F30D0
/* 802F3084 002EFFC4  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802F3088 002EFFC8  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802F308C 002EFFCC  90 7E 00 00 */	stw r3, 0(r30)
/* 802F3090 002EFFD0  38 03 00 38 */	addi r0, r3, 0x38
/* 802F3094 002EFFD4  90 1E 00 04 */	stw r0, 4(r30)
/* 802F3098 002EFFD8  41 82 00 38 */	beq lbl_802F30D0
/* 802F309C 002EFFDC  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802F30A0 002EFFE0  34 1E 00 04 */	addic. r0, r30, 4
/* 802F30A4 002EFFE4  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802F30A8 002EFFE8  90 7E 00 00 */	stw r3, 0(r30)
/* 802F30AC 002EFFEC  38 03 00 38 */	addi r0, r3, 0x38
/* 802F30B0 002EFFF0  90 1E 00 04 */	stw r0, 4(r30)
/* 802F30B4 002EFFF4  41 82 00 1C */	beq lbl_802F30D0
/* 802F30B8 002EFFF8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802F30BC 002EFFFC  38 7E 00 04 */	addi r3, r30, 4
/* 802F30C0 002F0000  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802F30C4 002F0004  38 80 00 00 */	li r4, 0
/* 802F30C8 002F0008  90 1E 00 04 */	stw r0, 4(r30)
/* 802F30CC 002F000C  48 11 E4 BD */	bl __dt__5CNodeFv
lbl_802F30D0:
/* 802F30D0 002F0010  7F E0 07 35 */	extsh. r0, r31
/* 802F30D4 002F0014  40 81 00 0C */	ble lbl_802F30E0
/* 802F30D8 002F0018  7F C3 F3 78 */	mr r3, r30
/* 802F30DC 002F001C  4B D3 0F D9 */	bl __dl__FPv
lbl_802F30E0:
/* 802F30E0 002F0020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F30E4 002F0024  7F C3 F3 78 */	mr r3, r30
/* 802F30E8 002F0028  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F30EC 002F002C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F30F0 002F0030  7C 08 03 A6 */	mtlr r0
/* 802F30F4 002F0034  38 21 00 10 */	addi r1, r1, 0x10
/* 802F30F8 002F0038  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Hana3MgrFv
getEnemyTypeID__Q34Game4Hana3MgrFv:
/* 802F30FC 002F003C  38 60 00 54 */	li r3, 0x54
/* 802F3100 002F0040  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game4Hana3MgrFPv
doLoadBmd__Q34Game4Hana3MgrFPv:
/* 802F3104 002F0044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F3108 002F0048  7C 08 02 A6 */	mflr r0
/* 802F310C 002F004C  3C A0 21 24 */	lis r5, 0x21240030@ha
/* 802F3110 002F0050  7C 83 23 78 */	mr r3, r4
/* 802F3114 002F0054  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3118 002F0058  38 85 00 30 */	addi r4, r5, 0x21240030@l
/* 802F311C 002F005C  4B D7 C7 79 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 802F3120 002F0060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F3124 002F0064  7C 08 03 A6 */	mtlr r0
/* 802F3128 002F0068  38 21 00 10 */	addi r1, r1, 0x10
/* 802F312C 002F006C  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game4Hana3MgrFv"
"@4@__dt__Q34Game4Hana3MgrFv":
/* 802F3130 002F0070  38 63 FF FC */	addi r3, r3, -4
/* 802F3134 002F0074  4B FF FF 18 */	b __dt__Q34Game4Hana3MgrFv
