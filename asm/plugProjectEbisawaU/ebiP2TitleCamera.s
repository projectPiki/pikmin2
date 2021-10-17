.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global lbl_804E79C8
lbl_804E79C8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global update__Q33ebi5title15TTitleCameraMgrFv
update__Q33ebi5title15TTitleCameraMgrFv:
/* 803C1EBC 003BEDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803C1EC0 003BEE00  7C 08 02 A6 */	mflr r0
/* 803C1EC4 003BEE04  C0 42 15 30 */	lfs f2, lbl_8051F890@sda21(r2)
/* 803C1EC8 003BEE08  90 01 00 14 */	stw r0, 0x14(r1)
/* 803C1ECC 003BEE0C  C0 23 01 78 */	lfs f1, 0x178(r3)
/* 803C1ED0 003BEE10  C0 03 01 BC */	lfs f0, 0x1bc(r3)
/* 803C1ED4 003BEE14  EC 61 00 2A */	fadds f3, f1, f0
/* 803C1ED8 003BEE18  C0 22 15 34 */	lfs f1, lbl_8051F894@sda21(r2)
/* 803C1EDC 003BEE1C  C0 02 15 38 */	lfs f0, lbl_8051F898@sda21(r2)
/* 803C1EE0 003BEE20  D0 63 01 78 */	stfs f3, 0x178(r3)
/* 803C1EE4 003BEE24  D0 43 01 8C */	stfs f2, 0x18c(r3)
/* 803C1EE8 003BEE28  D0 43 01 90 */	stfs f2, 0x190(r3)
/* 803C1EEC 003BEE2C  D0 23 01 94 */	stfs f1, 0x194(r3)
/* 803C1EF0 003BEE30  C0 23 01 74 */	lfs f1, 0x174(r3)
/* 803C1EF4 003BEE34  D0 23 01 80 */	stfs f1, 0x180(r3)
/* 803C1EF8 003BEE38  C0 23 01 78 */	lfs f1, 0x178(r3)
/* 803C1EFC 003BEE3C  D0 23 01 84 */	stfs f1, 0x184(r3)
/* 803C1F00 003BEE40  C0 23 01 7C */	lfs f1, 0x17c(r3)
/* 803C1F04 003BEE44  D0 23 01 88 */	stfs f1, 0x188(r3)
/* 803C1F08 003BEE48  C0 23 01 84 */	lfs f1, 0x184(r3)
/* 803C1F0C 003BEE4C  EC 01 00 28 */	fsubs f0, f1, f0
/* 803C1F10 003BEE50  D0 03 01 84 */	stfs f0, 0x184(r3)
/* 803C1F14 003BEE54  C0 03 01 E4 */	lfs f0, 0x1e4(r3)
/* 803C1F18 003BEE58  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 803C1F1C 003BEE5C  48 05 8E 99 */	bl update__6CameraFv
/* 803C1F20 003BEE60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803C1F24 003BEE64  7C 08 03 A6 */	mtlr r0
/* 803C1F28 003BEE68  38 21 00 10 */	addi r1, r1, 0x10
/* 803C1F2C 003BEE6C  4E 80 00 20 */	blr 

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
