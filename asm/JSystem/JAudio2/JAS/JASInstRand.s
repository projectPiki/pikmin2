.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__11JASInstRand
__vt__11JASInstRand:
	.4byte 0
	.4byte 0
	.4byte getY__11JASInstRandCFii

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
init$644:
	.skip 0x1
.balign 4
oRandom$643:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516CF0:
	.float 2.0
lbl_80516CF4:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getY__11JASInstRandCFii
getY__11JASInstRandCFii:
/* 8009B4E8 00098428  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009B4EC 0009842C  7C 08 02 A6 */	mflr r0
/* 8009B4F0 00098430  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009B4F4 00098434  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009B4F8 00098438  7C 7F 1B 78 */	mr r31, r3
/* 8009B4FC 0009843C  88 0D 8A 38 */	lbz r0, init$644@sda21(r13)
/* 8009B500 00098440  7C 00 07 75 */	extsb. r0, r0
/* 8009B504 00098444  40 82 00 18 */	bne .L_8009B51C
/* 8009B508 00098448  38 6D 8A 3C */	addi r3, r13, oRandom$643@sda21
/* 8009B50C 0009844C  38 80 00 00 */	li r4, 0
/* 8009B510 00098450  4B F9 9B F1 */	bl __ct__Q25JMath13TRandom_fast_FUl
/* 8009B514 00098454  38 00 00 01 */	li r0, 1
/* 8009B518 00098458  98 0D 8A 38 */	stb r0, init$644@sda21(r13)
.L_8009B51C:
/* 8009B51C 0009845C  3C 60 00 19 */	lis r3, 0x0019660D@ha
/* 8009B520 00098460  80 8D 8A 3C */	lwz r4, oRandom$643@sda21(r13)
/* 8009B524 00098464  38 03 66 0D */	addi r0, r3, 0x0019660D@l
/* 8009B528 00098468  3C A0 80 51 */	lis r5, __float_epsilon@ha
/* 8009B52C 0009846C  7C 64 01 D6 */	mullw r3, r4, r0
/* 8009B530 00098470  C0 A2 89 94 */	lfs f5, lbl_80516CF4@sda21(r2)
/* 8009B534 00098474  C0 05 48 DC */	lfs f0, __float_epsilon@l(r5)
/* 8009B538 00098478  C0 62 89 90 */	lfs f3, lbl_80516CF0@sda21(r2)
/* 8009B53C 0009847C  EC 85 00 28 */	fsubs f4, f5, f0
/* 8009B540 00098480  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8009B544 00098484  3C 63 3C 6F */	addis r3, r3, 0x3c6f
/* 8009B548 00098488  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8009B54C 0009848C  38 63 F3 5F */	addi r3, r3, -3233
/* 8009B550 00098490  54 60 BA 7E */	srwi r0, r3, 9
/* 8009B554 00098494  90 6D 8A 3C */	stw r3, oRandom$643@sda21(r13)
/* 8009B558 00098498  64 00 3F 80 */	oris r0, r0, 0x3f80
/* 8009B55C 0009849C  90 01 00 08 */	stw r0, 8(r1)
/* 8009B560 000984A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009B564 000984A4  C0 21 00 08 */	lfs f1, 8(r1)
/* 8009B568 000984A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009B56C 000984AC  EC 21 28 28 */	fsubs f1, f1, f5
/* 8009B570 000984B0  EC 23 00 72 */	fmuls f1, f3, f1
/* 8009B574 000984B4  EC 25 09 3C */	fnmsubs f1, f5, f4, f1
/* 8009B578 000984B8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8009B57C 000984BC  EC 21 00 2A */	fadds f1, f1, f0
/* 8009B580 000984C0  7C 08 03 A6 */	mtlr r0
/* 8009B584 000984C4  38 21 00 20 */	addi r1, r1, 0x20
/* 8009B588 000984C8  4E 80 00 20 */	blr 
