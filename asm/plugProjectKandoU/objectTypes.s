.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8047EA80
lbl_8047EA80:
	.asciz "pikihead"
	.skip 0x3
.global lbl_8047EA8C
lbl_8047EA8C:
	.asciz "fountain"
	.skip 0x3
.global lbl_8047EA98
lbl_8047EA98:
	.asciz "bigfountain"
.global lbl_8047EAA4
lbl_8047EAA4:
	.asciz "treasure"
	.skip 0x3
.global lbl_8047EAB0
lbl_8047EAB0:
	.asciz "downfloor"
	.skip 0x2
.global lbl_8047EABC
lbl_8047EABC:
	.asciz "ujamushi"
	.skip 0x3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global infos
infos:
	.4byte 0x00000000
	.4byte lbl_80518B60
	.4byte 0x00010000
	.4byte lbl_80518B68
	.4byte 0x00020000
	.4byte lbl_80518B70
	.4byte 0x04010000
	.4byte lbl_80518B78
	.4byte 0x04020000
	.4byte lbl_80518B80
	.4byte 0x04030000
	.4byte lbl_80518B88
	.4byte 0x04040000
	.4byte lbl_80518B8C
	.4byte 0x04050000
	.4byte lbl_80518B94
	.4byte 0x04060000
	.4byte lbl_80518B9C
	.4byte 0x04070000
	.4byte lbl_8047EA80
	.4byte 0x04080000
	.4byte lbl_80518BA4
	.4byte 0x04090000
	.4byte lbl_80518BAC
	.4byte 0x040A0000
	.4byte lbl_80518BB4
	.4byte 0x040B0000
	.4byte lbl_8047EA8C
	.4byte 0x040C0000
	.4byte lbl_8047EA98
	.4byte 0x040D0000
	.4byte lbl_80518BBC
	.4byte 0x040E0000
	.4byte lbl_8047EAA4
	.4byte 0x040F0000
	.4byte lbl_8047EAB0
	.4byte 0x04110000
	.4byte lbl_8047EABC
	.4byte 0x04120000
	.4byte lbl_80518BC4
	.4byte 0x04130000
	.4byte lbl_80518BCC
	.4byte 0xFFFE0000
	.4byte lbl_80518BD4
	.4byte 0xFFFF0000
	.4byte lbl_80518BDC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getName__Q24Game7ObjTypeFUs
getName__Q24Game7ObjTypeFUs:
/* 8017D3F8 0017A338  3C 80 80 4B */	lis r4, infos@ha
/* 8017D3FC 0017A33C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8017D400 0017A340  38 64 2C 88 */	addi r3, r4, infos@l
/* 8017D404 0017A344  38 A0 00 00 */	li r5, 0
lbl_8017D408:
/* 8017D408 0017A348  A0 83 00 00 */	lhz r4, 0(r3)
/* 8017D40C 0017A34C  28 04 FF FF */	cmplwi r4, 0xffff
/* 8017D410 0017A350  40 82 00 0C */	bne lbl_8017D41C
/* 8017D414 0017A354  38 60 00 00 */	li r3, 0
/* 8017D418 0017A358  4E 80 00 20 */	blr 
lbl_8017D41C:
/* 8017D41C 0017A35C  7C 00 20 40 */	cmplw r0, r4
/* 8017D420 0017A360  40 82 00 1C */	bne lbl_8017D43C
/* 8017D424 0017A364  3C 60 80 4B */	lis r3, infos@ha
/* 8017D428 0017A368  54 A0 18 38 */	slwi r0, r5, 3
/* 8017D42C 0017A36C  38 63 2C 88 */	addi r3, r3, infos@l
/* 8017D430 0017A370  7C 63 02 14 */	add r3, r3, r0
/* 8017D434 0017A374  80 63 00 04 */	lwz r3, 4(r3)
/* 8017D438 0017A378  4E 80 00 20 */	blr 
lbl_8017D43C:
/* 8017D43C 0017A37C  38 63 00 08 */	addi r3, r3, 8
/* 8017D440 0017A380  38 A5 00 01 */	addi r5, r5, 1
/* 8017D444 0017A384  4B FF FF C4 */	b lbl_8017D408
/* 8017D448 0017A388  4E 80 00 20 */	blr 
