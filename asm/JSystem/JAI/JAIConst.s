.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_JAIConst_cpp

.section .bss  # 0x804EFC20 - 0x8051467C
.global nullCamera__Q27JAInter5Const
nullCamera__Q27JAInter5Const:
	.skip 0x68
.global nullActor__Q27JAInter5Const
nullActor__Q27JAInter5Const:
	.skip 0x14
.global camMtx__Q27JAInter5Const
camMtx__Q27JAInter5Const:
	.skip 0x30
.global camTrans__Q27JAInter5Const
camTrans__Q27JAInter5Const:
	.skip 0xC
.global camPreTrans__Q27JAInter5Const
camPreTrans__Q27JAInter5Const:
	.skip 0xC

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global random__Q27JAInter5Const
random__Q27JAInter5Const:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
__sinit_JAIConst_cpp: # local func
/* 800AD40C 000AA34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD410 000AA350  7C 08 02 A6 */	mflr r0
/* 800AD414 000AA354  3C E0 80 51 */	lis r7, camTrans__Q27JAInter5Const@ha
/* 800AD418 000AA358  3C A0 80 51 */	lis r5, camPreTrans__Q27JAInter5Const@ha
/* 800AD41C 000AA35C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD420 000AA360  38 00 00 00 */	li r0, 0
/* 800AD424 000AA364  38 E7 22 5C */	addi r7, r7, camTrans__Q27JAInter5Const@l
/* 800AD428 000AA368  3C C0 80 51 */	lis r6, nullCamera__Q27JAInter5Const@ha
/* 800AD42C 000AA36C  3C 80 80 51 */	lis r4, camMtx__Q27JAInter5Const@ha
/* 800AD430 000AA370  3C 60 80 51 */	lis r3, nullActor__Q27JAInter5Const@ha
/* 800AD434 000AA374  94 03 22 18 */	stwu r0, nullActor__Q27JAInter5Const@l(r3)
/* 800AD438 000AA378  38 A5 22 68 */	addi r5, r5, camPreTrans__Q27JAInter5Const@l
/* 800AD43C 000AA37C  38 84 22 2C */	addi r4, r4, camMtx__Q27JAInter5Const@l
/* 800AD440 000AA380  28 00 00 00 */	cmplwi r0, 0
/* 800AD444 000AA384  94 E6 21 B0 */	stwu r7, nullCamera__Q27JAInter5Const@l(r6)
/* 800AD448 000AA388  90 A6 00 04 */	stw r5, 4(r6)
/* 800AD44C 000AA38C  90 86 00 08 */	stw r4, 8(r6)
/* 800AD450 000AA390  90 03 00 04 */	stw r0, 4(r3)
/* 800AD454 000AA394  90 03 00 08 */	stw r0, 8(r3)
/* 800AD458 000AA398  90 03 00 0C */	stw r0, 0xc(r3)
/* 800AD45C 000AA39C  40 82 00 10 */	bne lbl_800AD46C
/* 800AD460 000AA3A0  38 00 00 01 */	li r0, 1
/* 800AD464 000AA3A4  98 03 00 10 */	stb r0, 0x10(r3)
/* 800AD468 000AA3A8  48 00 00 0C */	b lbl_800AD474
lbl_800AD46C:
/* 800AD46C 000AA3AC  38 00 00 01 */	li r0, 1
/* 800AD470 000AA3B0  98 03 00 10 */	stb r0, 0x10(r3)
lbl_800AD474:
/* 800AD474 000AA3B4  38 6D 8B 88 */	addi r3, r13, random__Q27JAInter5Const@sda21
/* 800AD478 000AA3B8  38 80 00 00 */	li r4, 0
/* 800AD47C 000AA3BC  4B F8 7C 85 */	bl __ct__Q25JMath13TRandom_fast_FUl
/* 800AD480 000AA3C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD484 000AA3C4  7C 08 03 A6 */	mtlr r0
/* 800AD488 000AA3C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD48C 000AA3CC  4E 80 00 20 */	blr 
