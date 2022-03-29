.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__10JSUIosBase
__vt__10JSUIosBase:
	.4byte 0
	.4byte 0
	.4byte __dt__10JSUIosBaseFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00

__dt__10JSUIosBaseFv: # weak function
/* 80026330 00023270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80026334 00023274  7C 08 02 A6 */	mflr r0
/* 80026338 00023278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002633C 0002327C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80026340 00023280  7C 7F 1B 79 */	or. r31, r3, r3
/* 80026344 00023284  41 82 00 1C */	beq lbl_80026360
/* 80026348 00023288  3C A0 80 4A */	lis r5, __vt__10JSUIosBase@ha
/* 8002634C 0002328C  7C 80 07 35 */	extsh. r0, r4
/* 80026350 00023290  38 05 00 30 */	addi r0, r5, __vt__10JSUIosBase@l
/* 80026354 00023294  90 1F 00 00 */	stw r0, 0(r31)
/* 80026358 00023298  40 81 00 08 */	ble lbl_80026360
/* 8002635C 0002329C  4B FF DD 59 */	bl __dl__FPv
lbl_80026360:
/* 80026360 000232A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80026364 000232A4  7F E3 FB 78 */	mr r3, r31
/* 80026368 000232A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002636C 000232AC  7C 08 03 A6 */	mtlr r0
/* 80026370 000232B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80026374 000232B4  4E 80 00 20 */	blr 
