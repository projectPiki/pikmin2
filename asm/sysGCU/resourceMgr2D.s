.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8049A680
lbl_8049A680:
	.asciz "resourceMgr2D.cpp"
	.skip 2
.global lbl_8049A694
lbl_8049A694:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q28Resource5Mgr2D
__vt__Q28Resource5Mgr2D:
	.4byte 0
	.4byte 0
	.4byte drawDump__Q28Resource3MgrFR8Graphicsii
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global gResMgr2D
gResMgr2D:
	.skip 0x8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q28Resource5Mgr2DFP7JKRHeap
init__Q28Resource5Mgr2DFP7JKRHeap:
/* 80433F70 00430EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80433F74 00430EB4  7C 08 02 A6 */	mflr r0
/* 80433F78 00430EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80433F7C 00430EBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80433F80 00430EC0  7C 7F 1B 78 */	mr r31, r3
/* 80433F84 00430EC4  38 60 00 44 */	li r3, 0x44
/* 80433F88 00430EC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80433F8C 00430ECC  4B BE FF 19 */	bl __nw__FUl
/* 80433F90 00430ED0  7C 60 1B 79 */	or. r0, r3, r3
/* 80433F94 00430ED4  41 82 00 74 */	beq lbl_80434008
/* 80433F98 00430ED8  3C A0 00 0D */	lis r5, 0x000D4800@ha
/* 80433F9C 00430EDC  7C 1E 03 78 */	mr r30, r0
/* 80433FA0 00430EE0  7F E4 FB 78 */	mr r4, r31
/* 80433FA4 00430EE4  38 A5 48 00 */	addi r5, r5, 0x000D4800@l
/* 80433FA8 00430EE8  4B FF F7 29 */	bl __ct__Q28Resource3MgrFP7JKRHeapUl
/* 80433FAC 00430EEC  3C 60 80 4F */	lis r3, __vt__Q28Resource5Mgr2D@ha
/* 80433FB0 00430EF0  28 1F 00 00 */	cmplwi r31, 0
/* 80433FB4 00430EF4  38 03 C4 68 */	addi r0, r3, __vt__Q28Resource5Mgr2D@l
/* 80433FB8 00430EF8  90 1E 00 00 */	stw r0, 0(r30)
/* 80433FBC 00430EFC  40 82 00 20 */	bne lbl_80433FDC
/* 80433FC0 00430F00  3C 60 80 4A */	lis r3, lbl_8049A680@ha
/* 80433FC4 00430F04  3C A0 80 4A */	lis r5, lbl_8049A694@ha
/* 80433FC8 00430F08  38 63 A6 80 */	addi r3, r3, lbl_8049A680@l
/* 80433FCC 00430F0C  38 80 00 22 */	li r4, 0x22
/* 80433FD0 00430F10  38 A5 A6 94 */	addi r5, r5, lbl_8049A694@l
/* 80433FD4 00430F14  4C C6 31 82 */	crclr 6
/* 80433FD8 00430F18  4B BF 66 69 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80433FDC:
/* 80433FDC 00430F1C  80 0D 9B B0 */	lwz r0, gResMgr2D@sda21(r13)
/* 80433FE0 00430F20  28 00 00 00 */	cmplwi r0, 0
/* 80433FE4 00430F24  41 82 00 20 */	beq lbl_80434004
/* 80433FE8 00430F28  3C 60 80 4A */	lis r3, lbl_8049A680@ha
/* 80433FEC 00430F2C  3C A0 80 4A */	lis r5, lbl_8049A694@ha
/* 80433FF0 00430F30  38 63 A6 80 */	addi r3, r3, lbl_8049A680@l
/* 80433FF4 00430F34  38 80 00 24 */	li r4, 0x24
/* 80433FF8 00430F38  38 A5 A6 94 */	addi r5, r5, lbl_8049A694@l
/* 80433FFC 00430F3C  4C C6 31 82 */	crclr 6
/* 80434000 00430F40  4B BF 66 41 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80434004:
/* 80434004 00430F44  93 CD 9B B0 */	stw r30, gResMgr2D@sda21(r13)
lbl_80434008:
/* 80434008 00430F48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043400C 00430F4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80434010 00430F50  83 C1 00 08 */	lwz r30, 8(r1)
/* 80434014 00430F54  7C 08 03 A6 */	mtlr r0
/* 80434018 00430F58  38 21 00 10 */	addi r1, r1, 0x10
/* 8043401C 00430F5C  4E 80 00 20 */	blr 
