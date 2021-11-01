.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
	.4byte __sinit_ebiP2TitleCamera_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global lbl_804E79C8
lbl_804E79C8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global lbl_805160C0
lbl_805160C0:
	.skip 0x4
.global lbl_805160C4
lbl_805160C4:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00

.global __sinit_ebiP2TitleCamera_cpp
__sinit_ebiP2TitleCamera_cpp:
/* 803C1F30 003BEE70  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803C1F34 003BEE74  38 00 FF FF */	li r0, -1
/* 803C1F38 003BEE78  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803C1F3C 003BEE7C  3C 60 80 4E */	lis r3, lbl_804E79C8@ha
/* 803C1F40 003BEE80  90 0D 9A 40 */	stw r0, lbl_805160C0@sda21(r13)
/* 803C1F44 003BEE84  D4 03 79 C8 */	stfsu f0, lbl_804E79C8@l(r3)
/* 803C1F48 003BEE88  D0 0D 9A 44 */	stfs f0, lbl_805160C4@sda21(r13)
/* 803C1F4C 003BEE8C  D0 03 00 04 */	stfs f0, 4(r3)
/* 803C1F50 003BEE90  D0 03 00 08 */	stfs f0, 8(r3)
/* 803C1F54 003BEE94  4E 80 00 20 */	blr 
