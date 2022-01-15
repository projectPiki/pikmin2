.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game4Cave8GateNode
__vt__Q34Game4Cave8GateNode:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave8GateNodeFv
	.4byte getChildCount__5CNodeFv
	.4byte getObjectId__Q34Game4Cave8GateNodeFv
	.4byte getObjectType__Q34Game4Cave8GateNodeFv
	.4byte getBirthCount__Q34Game4Cave8GateNodeFv
	.4byte getDirection__Q34Game4Cave8GateNodeFv
	.4byte getBirthDoorIndex__Q34Game4Cave8GateNodeFv
	.4byte getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf
	.4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
	.4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051A868
lbl_8051A868:
	.4byte 0x00000000
.global lbl_8051A86C
lbl_8051A86C:
	.4byte 0xBFC90FDB
.global lbl_8051A870
lbl_8051A870:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Cave8GateNodeFv
__ct__Q34Game4Cave8GateNodeFv:
/* 8024FCC8 0024CC08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024FCCC 0024CC0C  7C 08 02 A6 */	mflr r0
/* 8024FCD0 0024CC10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024FCD4 0024CC14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024FCD8 0024CC18  7C 7F 1B 78 */	mr r31, r3
/* 8024FCDC 0024CC1C  48 1C 16 B5 */	bl __ct__5CNodeFv
/* 8024FCE0 0024CC20  3C 80 80 4C */	lis r4, __vt__Q24Game16ObjectLayoutNode@ha
/* 8024FCE4 0024CC24  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8GateNode@ha
/* 8024FCE8 0024CC28  38 84 1A A8 */	addi r4, r4, __vt__Q24Game16ObjectLayoutNode@l
/* 8024FCEC 0024CC2C  38 00 00 00 */	li r0, 0
/* 8024FCF0 0024CC30  90 9F 00 00 */	stw r4, 0(r31)
/* 8024FCF4 0024CC34  38 83 1B 78 */	addi r4, r3, __vt__Q34Game4Cave8GateNode@l
/* 8024FCF8 0024CC38  C0 02 C5 08 */	lfs f0, lbl_8051A868@sda21(r2)
/* 8024FCFC 0024CC3C  7F E3 FB 78 */	mr r3, r31
/* 8024FD00 0024CC40  90 9F 00 00 */	stw r4, 0(r31)
/* 8024FD04 0024CC44  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8024FD08 0024CC48  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8024FD0C 0024CC4C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8024FD10 0024CC50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024FD14 0024CC54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024FD18 0024CC58  7C 08 03 A6 */	mtlr r0
/* 8024FD1C 0024CC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8024FD20 0024CC60  4E 80 00 20 */	blr 

.global __ct__Q34Game4Cave8GateNodeFPQ34Game4Cave8GateUnitii
__ct__Q34Game4Cave8GateNodeFPQ34Game4Cave8GateUnitii:
/* 8024FD24 0024CC64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024FD28 0024CC68  7C 08 02 A6 */	mflr r0
/* 8024FD2C 0024CC6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024FD30 0024CC70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8024FD34 0024CC74  7C DF 33 78 */	mr r31, r6
/* 8024FD38 0024CC78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8024FD3C 0024CC7C  7C BE 2B 78 */	mr r30, r5
/* 8024FD40 0024CC80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8024FD44 0024CC84  7C 9D 23 78 */	mr r29, r4
/* 8024FD48 0024CC88  93 81 00 10 */	stw r28, 0x10(r1)
/* 8024FD4C 0024CC8C  7C 7C 1B 78 */	mr r28, r3
/* 8024FD50 0024CC90  48 1C 16 41 */	bl __ct__5CNodeFv
/* 8024FD54 0024CC94  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 8024FD58 0024CC98  3C 00 43 30 */	lis r0, 0x4330
/* 8024FD5C 0024CC9C  3C 80 80 4C */	lis r4, __vt__Q24Game16ObjectLayoutNode@ha
/* 8024FD60 0024CCA0  90 61 00 0C */	stw r3, 0xc(r1)
/* 8024FD64 0024CCA4  38 84 1A A8 */	addi r4, r4, __vt__Q24Game16ObjectLayoutNode@l
/* 8024FD68 0024CCA8  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8GateNode@ha
/* 8024FD6C 0024CCAC  90 01 00 08 */	stw r0, 8(r1)
/* 8024FD70 0024CCB0  38 03 1B 78 */	addi r0, r3, __vt__Q34Game4Cave8GateNode@l
/* 8024FD74 0024CCB4  C8 22 C5 10 */	lfd f1, lbl_8051A870@sda21(r2)
/* 8024FD78 0024CCB8  7F 83 E3 78 */	mr r3, r28
/* 8024FD7C 0024CCBC  90 9C 00 00 */	stw r4, 0(r28)
/* 8024FD80 0024CCC0  C8 01 00 08 */	lfd f0, 8(r1)
/* 8024FD84 0024CCC4  90 1C 00 00 */	stw r0, 0(r28)
/* 8024FD88 0024CCC8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8024FD8C 0024CCCC  C0 22 C5 0C */	lfs f1, lbl_8051A86C@sda21(r2)
/* 8024FD90 0024CCD0  93 BC 00 18 */	stw r29, 0x18(r28)
/* 8024FD94 0024CCD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8024FD98 0024CCD8  93 DC 00 20 */	stw r30, 0x20(r28)
/* 8024FD9C 0024CCDC  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8024FDA0 0024CCE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8024FDA4 0024CCE4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8024FDA8 0024CCE8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8024FDAC 0024CCEC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8024FDB0 0024CCF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024FDB4 0024CCF4  7C 08 03 A6 */	mtlr r0
/* 8024FDB8 0024CCF8  38 21 00 20 */	addi r1, r1, 0x20
/* 8024FDBC 0024CCFC  4E 80 00 20 */	blr 

.global getObjectId__Q34Game4Cave8GateNodeFv
getObjectId__Q34Game4Cave8GateNodeFv:
/* 8024FDC0 0024CD00  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8024FDC4 0024CD04  80 63 00 00 */	lwz r3, 0(r3)
/* 8024FDC8 0024CD08  28 03 00 00 */	cmplwi r3, 0
/* 8024FDCC 0024CD0C  41 82 00 0C */	beq lbl_8024FDD8
/* 8024FDD0 0024CD10  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8024FDD4 0024CD14  4E 80 00 20 */	blr 
lbl_8024FDD8:
/* 8024FDD8 0024CD18  38 60 FF FF */	li r3, -1
/* 8024FDDC 0024CD1C  4E 80 00 20 */	blr 

.global getObjectType__Q34Game4Cave8GateNodeFv
getObjectType__Q34Game4Cave8GateNodeFv:
/* 8024FDE0 0024CD20  38 60 00 02 */	li r3, 2
/* 8024FDE4 0024CD24  4E 80 00 20 */	blr 

.global getBirthCount__Q34Game4Cave8GateNodeFv
getBirthCount__Q34Game4Cave8GateNodeFv:
/* 8024FDE8 0024CD28  38 60 00 01 */	li r3, 1
/* 8024FDEC 0024CD2C  4E 80 00 20 */	blr 

.global getDirection__Q34Game4Cave8GateNodeFv
getDirection__Q34Game4Cave8GateNodeFv:
/* 8024FDF0 0024CD30  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8024FDF4 0024CD34  4E 80 00 20 */	blr 

.global getBirthDoorIndex__Q34Game4Cave8GateNodeFv
getBirthDoorIndex__Q34Game4Cave8GateNodeFv:
/* 8024FDF8 0024CD38  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8024FDFC 0024CD3C  4E 80 00 20 */	blr 

.global __dt__Q34Game4Cave8GateNodeFv
__dt__Q34Game4Cave8GateNodeFv:
/* 8024FE00 0024CD40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024FE04 0024CD44  7C 08 02 A6 */	mflr r0
/* 8024FE08 0024CD48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024FE0C 0024CD4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024FE10 0024CD50  7C 9F 23 78 */	mr r31, r4
/* 8024FE14 0024CD54  93 C1 00 08 */	stw r30, 8(r1)
/* 8024FE18 0024CD58  7C 7E 1B 79 */	or. r30, r3, r3
/* 8024FE1C 0024CD5C  41 82 00 38 */	beq lbl_8024FE54
/* 8024FE20 0024CD60  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8GateNode@ha
/* 8024FE24 0024CD64  38 04 1B 78 */	addi r0, r4, __vt__Q34Game4Cave8GateNode@l
/* 8024FE28 0024CD68  90 1E 00 00 */	stw r0, 0(r30)
/* 8024FE2C 0024CD6C  41 82 00 18 */	beq lbl_8024FE44
/* 8024FE30 0024CD70  3C A0 80 4C */	lis r5, __vt__Q24Game16ObjectLayoutNode@ha
/* 8024FE34 0024CD74  38 80 00 00 */	li r4, 0
/* 8024FE38 0024CD78  38 05 1A A8 */	addi r0, r5, __vt__Q24Game16ObjectLayoutNode@l
/* 8024FE3C 0024CD7C  90 1E 00 00 */	stw r0, 0(r30)
/* 8024FE40 0024CD80  48 1C 17 49 */	bl __dt__5CNodeFv
lbl_8024FE44:
/* 8024FE44 0024CD84  7F E0 07 35 */	extsh. r0, r31
/* 8024FE48 0024CD88  40 81 00 0C */	ble lbl_8024FE54
/* 8024FE4C 0024CD8C  7F C3 F3 78 */	mr r3, r30
/* 8024FE50 0024CD90  4B DD 42 65 */	bl __dl__FPv
lbl_8024FE54:
/* 8024FE54 0024CD94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024FE58 0024CD98  7F C3 F3 78 */	mr r3, r30
/* 8024FE5C 0024CD9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024FE60 0024CDA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8024FE64 0024CDA4  7C 08 03 A6 */	mtlr r0
/* 8024FE68 0024CDA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8024FE6C 0024CDAC  4E 80 00 20 */	blr 
