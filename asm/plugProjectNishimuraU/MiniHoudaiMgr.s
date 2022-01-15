.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048CDC0
lbl_8048CDC0:
	.4byte 0x83608372
	.4byte 0x837A8345
	.4byte 0x835F8343
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game10MiniHoudai3Mgr
__vt__Q34Game10MiniHoudai3Mgr:
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
	.4byte "@4@__dt__Q34Game10MiniHoudai3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game10MiniHoudai3MgrFv
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
	.4byte 0
	.4byte 0
	.4byte doAlloc__Q24Game12EnemyMgrBaseFv
	.4byte getEnemyTypeID__Q34Game10MiniHoudai3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game10MiniHoudai3MgrFv
	.4byte loadAnimData__Q34Game10MiniHoudai3MgrFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game10MiniHoudai3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051CF78
lbl_8051CF78:
	.4byte 0x0000004E
.global lbl_8051CF7C
lbl_8051CF7C:
	.4byte 0x00000061
.global lbl_8051CF80
lbl_8051CF80:
	.4byte 0x0000004E
.global lbl_8051CF84
lbl_8051CF84:
	.4byte 0x00000061

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10MiniHoudai3MgrFiUc
__ct__Q34Game10MiniHoudai3MgrFiUc:
/* 802EBD54 002E8C94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EBD58 002E8C98  7C 08 02 A6 */	mflr r0
/* 802EBD5C 002E8C9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EBD60 002E8CA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EBD64 002E8CA4  7C 7F 1B 78 */	mr r31, r3
/* 802EBD68 002E8CA8  4B E4 2F 2D */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 802EBD6C 002E8CAC  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3Mgr@ha
/* 802EBD70 002E8CB0  3C 80 80 49 */	lis r4, lbl_8048CDC0@ha
/* 802EBD74 002E8CB4  38 A3 47 50 */	addi r5, r3, __vt__Q34Game10MiniHoudai3Mgr@l
/* 802EBD78 002E8CB8  7F E3 FB 78 */	mr r3, r31
/* 802EBD7C 002E8CBC  90 BF 00 00 */	stw r5, 0(r31)
/* 802EBD80 002E8CC0  38 A5 00 38 */	addi r5, r5, 0x38
/* 802EBD84 002E8CC4  38 04 CD C0 */	addi r0, r4, lbl_8048CDC0@l
/* 802EBD88 002E8CC8  90 BF 00 04 */	stw r5, 4(r31)
/* 802EBD8C 002E8CCC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802EBD90 002E8CD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EBD94 002E8CD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EBD98 002E8CD8  7C 08 03 A6 */	mtlr r0
/* 802EBD9C 002E8CDC  38 21 00 10 */	addi r1, r1, 0x10
/* 802EBDA0 002E8CE0  4E 80 00 20 */	blr 

.global loadModelData__Q34Game10MiniHoudai3MgrFv
loadModelData__Q34Game10MiniHoudai3MgrFv:
/* 802EBDA4 002E8CE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802EBDA8 002E8CE8  7C 08 02 A6 */	mflr r0
/* 802EBDAC 002E8CEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802EBDB0 002E8CF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802EBDB4 002E8CF4  3B E1 00 08 */	addi r31, r1, 8
/* 802EBDB8 002E8CF8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802EBDBC 002E8CFC  3B C0 00 00 */	li r30, 0
/* 802EBDC0 002E8D00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802EBDC4 002E8D04  7C 7D 1B 78 */	mr r29, r3
/* 802EBDC8 002E8D08  80 82 EC 18 */	lwz r4, lbl_8051CF78@sda21(r2)
/* 802EBDCC 002E8D0C  80 02 EC 1C */	lwz r0, lbl_8051CF7C@sda21(r2)
/* 802EBDD0 002E8D10  90 81 00 08 */	stw r4, 8(r1)
/* 802EBDD4 002E8D14  90 01 00 0C */	stw r0, 0xc(r1)
lbl_802EBDD8:
/* 802EBDD8 002E8D18  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802EBDDC 002E8D1C  80 9F 00 00 */	lwz r4, 0(r31)
/* 802EBDE0 002E8D20  4B E2 1E C5 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802EBDE4 002E8D24  28 03 00 00 */	cmplwi r3, 0
/* 802EBDE8 002E8D28  41 82 00 24 */	beq lbl_802EBE0C
/* 802EBDEC 002E8D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 802EBDF0 002E8D30  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 802EBDF4 002E8D34  7D 89 03 A6 */	mtctr r12
/* 802EBDF8 002E8D38  4E 80 04 21 */	bctrl 
/* 802EBDFC 002E8D3C  28 03 00 00 */	cmplwi r3, 0
/* 802EBE00 002E8D40  41 82 00 0C */	beq lbl_802EBE0C
/* 802EBE04 002E8D44  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 802EBE08 002E8D48  48 00 00 58 */	b lbl_802EBE60
lbl_802EBE0C:
/* 802EBE0C 002E8D4C  3B DE 00 01 */	addi r30, r30, 1
/* 802EBE10 002E8D50  3B FF 00 04 */	addi r31, r31, 4
/* 802EBE14 002E8D54  2C 1E 00 02 */	cmpwi r30, 2
/* 802EBE18 002E8D58  41 80 FF C0 */	blt lbl_802EBDD8
/* 802EBE1C 002E8D5C  7F A3 EB 78 */	mr r3, r29
/* 802EBE20 002E8D60  4B E4 42 ED */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 802EBE24 002E8D64  38 A0 00 00 */	li r5, 0
/* 802EBE28 002E8D68  48 00 00 24 */	b lbl_802EBE4C
lbl_802EBE2C:
/* 802EBE2C 002E8D6C  80 64 00 80 */	lwz r3, 0x80(r4)
/* 802EBE30 002E8D70  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 802EBE34 002E8D74  38 A5 00 01 */	addi r5, r5, 1
/* 802EBE38 002E8D78  7C 63 00 2E */	lwzx r3, r3, r0
/* 802EBE3C 002E8D7C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802EBE40 002E8D80  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 802EBE44 002E8D84  60 00 20 00 */	ori r0, r0, 0x2000
/* 802EBE48 002E8D88  90 03 00 0C */	stw r0, 0xc(r3)
lbl_802EBE4C:
/* 802EBE4C 002E8D8C  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 802EBE50 002E8D90  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 802EBE54 002E8D94  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 802EBE58 002E8D98  7C 00 18 40 */	cmplw r0, r3
/* 802EBE5C 002E8D9C  41 80 FF D0 */	blt lbl_802EBE2C
lbl_802EBE60:
/* 802EBE60 002E8DA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802EBE64 002E8DA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802EBE68 002E8DA8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802EBE6C 002E8DAC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802EBE70 002E8DB0  7C 08 03 A6 */	mtlr r0
/* 802EBE74 002E8DB4  38 21 00 20 */	addi r1, r1, 0x20
/* 802EBE78 002E8DB8  4E 80 00 20 */	blr 

.global loadAnimData__Q34Game10MiniHoudai3MgrFv
loadAnimData__Q34Game10MiniHoudai3MgrFv:
/* 802EBE7C 002E8DBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802EBE80 002E8DC0  7C 08 02 A6 */	mflr r0
/* 802EBE84 002E8DC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802EBE88 002E8DC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802EBE8C 002E8DCC  3B E1 00 08 */	addi r31, r1, 8
/* 802EBE90 002E8DD0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802EBE94 002E8DD4  3B C0 00 00 */	li r30, 0
/* 802EBE98 002E8DD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802EBE9C 002E8DDC  7C 7D 1B 78 */	mr r29, r3
/* 802EBEA0 002E8DE0  80 82 EC 20 */	lwz r4, lbl_8051CF80@sda21(r2)
/* 802EBEA4 002E8DE4  80 02 EC 24 */	lwz r0, lbl_8051CF84@sda21(r2)
/* 802EBEA8 002E8DE8  90 81 00 08 */	stw r4, 8(r1)
/* 802EBEAC 002E8DEC  90 01 00 0C */	stw r0, 0xc(r1)
lbl_802EBEB0:
/* 802EBEB0 002E8DF0  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802EBEB4 002E8DF4  80 9F 00 00 */	lwz r4, 0(r31)
/* 802EBEB8 002E8DF8  4B E2 1D ED */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802EBEBC 002E8DFC  28 03 00 00 */	cmplwi r3, 0
/* 802EBEC0 002E8E00  41 82 00 18 */	beq lbl_802EBED8
/* 802EBEC4 002E8E04  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802EBEC8 002E8E08  28 00 00 00 */	cmplwi r0, 0
/* 802EBECC 002E8E0C  41 82 00 0C */	beq lbl_802EBED8
/* 802EBED0 002E8E10  90 1D 00 20 */	stw r0, 0x20(r29)
/* 802EBED4 002E8E14  48 00 00 1C */	b lbl_802EBEF0
lbl_802EBED8:
/* 802EBED8 002E8E18  3B DE 00 01 */	addi r30, r30, 1
/* 802EBEDC 002E8E1C  3B FF 00 04 */	addi r31, r31, 4
/* 802EBEE0 002E8E20  2C 1E 00 02 */	cmpwi r30, 2
/* 802EBEE4 002E8E24  41 80 FF CC */	blt lbl_802EBEB0
/* 802EBEE8 002E8E28  7F A3 EB 78 */	mr r3, r29
/* 802EBEEC 002E8E2C  4B E4 42 E1 */	bl loadAnimData__Q24Game12EnemyMgrBaseFv
lbl_802EBEF0:
/* 802EBEF0 002E8E30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802EBEF4 002E8E34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802EBEF8 002E8E38  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802EBEFC 002E8E3C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802EBF00 002E8E40  7C 08 03 A6 */	mtlr r0
/* 802EBF04 002E8E44  38 21 00 20 */	addi r1, r1, 0x20
/* 802EBF08 002E8E48  4E 80 00 20 */	blr 

.global __dt__Q34Game10MiniHoudai3MgrFv
__dt__Q34Game10MiniHoudai3MgrFv:
/* 802EBF0C 002E8E4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EBF10 002E8E50  7C 08 02 A6 */	mflr r0
/* 802EBF14 002E8E54  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EBF18 002E8E58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EBF1C 002E8E5C  7C 9F 23 78 */	mr r31, r4
/* 802EBF20 002E8E60  93 C1 00 08 */	stw r30, 8(r1)
/* 802EBF24 002E8E64  7C 7E 1B 79 */	or. r30, r3, r3
/* 802EBF28 002E8E68  41 82 00 78 */	beq lbl_802EBFA0
/* 802EBF2C 002E8E6C  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai3Mgr@ha
/* 802EBF30 002E8E70  38 63 47 50 */	addi r3, r3, __vt__Q34Game10MiniHoudai3Mgr@l
/* 802EBF34 002E8E74  90 7E 00 00 */	stw r3, 0(r30)
/* 802EBF38 002E8E78  38 03 00 38 */	addi r0, r3, 0x38
/* 802EBF3C 002E8E7C  90 1E 00 04 */	stw r0, 4(r30)
/* 802EBF40 002E8E80  41 82 00 50 */	beq lbl_802EBF90
/* 802EBF44 002E8E84  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802EBF48 002E8E88  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802EBF4C 002E8E8C  90 7E 00 00 */	stw r3, 0(r30)
/* 802EBF50 002E8E90  38 03 00 38 */	addi r0, r3, 0x38
/* 802EBF54 002E8E94  90 1E 00 04 */	stw r0, 4(r30)
/* 802EBF58 002E8E98  41 82 00 38 */	beq lbl_802EBF90
/* 802EBF5C 002E8E9C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802EBF60 002E8EA0  34 1E 00 04 */	addic. r0, r30, 4
/* 802EBF64 002E8EA4  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802EBF68 002E8EA8  90 7E 00 00 */	stw r3, 0(r30)
/* 802EBF6C 002E8EAC  38 03 00 38 */	addi r0, r3, 0x38
/* 802EBF70 002E8EB0  90 1E 00 04 */	stw r0, 4(r30)
/* 802EBF74 002E8EB4  41 82 00 1C */	beq lbl_802EBF90
/* 802EBF78 002E8EB8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802EBF7C 002E8EBC  38 7E 00 04 */	addi r3, r30, 4
/* 802EBF80 002E8EC0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802EBF84 002E8EC4  38 80 00 00 */	li r4, 0
/* 802EBF88 002E8EC8  90 1E 00 04 */	stw r0, 4(r30)
/* 802EBF8C 002E8ECC  48 12 55 FD */	bl __dt__5CNodeFv
lbl_802EBF90:
/* 802EBF90 002E8ED0  7F E0 07 35 */	extsh. r0, r31
/* 802EBF94 002E8ED4  40 81 00 0C */	ble lbl_802EBFA0
/* 802EBF98 002E8ED8  7F C3 F3 78 */	mr r3, r30
/* 802EBF9C 002E8EDC  4B D3 81 19 */	bl __dl__FPv
lbl_802EBFA0:
/* 802EBFA0 002E8EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EBFA4 002E8EE4  7F C3 F3 78 */	mr r3, r30
/* 802EBFA8 002E8EE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EBFAC 002E8EEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EBFB0 002E8EF0  7C 08 03 A6 */	mtlr r0
/* 802EBFB4 002E8EF4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EBFB8 002E8EF8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10MiniHoudai3MgrFv
getEnemyTypeID__Q34Game10MiniHoudai3MgrFv:
/* 802EBFBC 002E8EFC  38 60 00 4E */	li r3, 0x4e
/* 802EBFC0 002E8F00  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game10MiniHoudai3MgrFPv
doLoadBmd__Q34Game10MiniHoudai3MgrFPv:
/* 802EBFC4 002E8F04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EBFC8 002E8F08  7C 08 02 A6 */	mflr r0
/* 802EBFCC 002E8F0C  3C A0 01 24 */	lis r5, 0x01240030@ha
/* 802EBFD0 002E8F10  7C 83 23 78 */	mr r3, r4
/* 802EBFD4 002E8F14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EBFD8 002E8F18  38 85 00 30 */	addi r4, r5, 0x01240030@l
/* 802EBFDC 002E8F1C  4B D8 38 B9 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 802EBFE0 002E8F20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EBFE4 002E8F24  7C 08 03 A6 */	mtlr r0
/* 802EBFE8 002E8F28  38 21 00 10 */	addi r1, r1, 0x10
/* 802EBFEC 002E8F2C  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game10MiniHoudai3MgrFv"
"@4@__dt__Q34Game10MiniHoudai3MgrFv":
/* 802EBFF0 002E8F30  38 63 FF FC */	addi r3, r3, -4
/* 802EBFF4 002E8F34  4B FF FF 18 */	b __dt__Q34Game10MiniHoudai3MgrFv
