.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__12J3DShapeDraw
__vt__12J3DShapeDraw:
	.4byte 0
	.4byte 0
	.4byte __dt__12J3DShapeDrawFv
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__12J3DShapeDrawFPCUcUl
__ct__12J3DShapeDrawFPCUcUl:
/* 8008884C 0008578C  3C C0 80 4A */	lis r6, __vt__12J3DShapeDraw@ha
/* 80088850 00085790  38 06 2F E0 */	addi r0, r6, __vt__12J3DShapeDraw@l
/* 80088854 00085794  90 03 00 00 */	stw r0, 0(r3)
/* 80088858 00085798  90 83 00 08 */	stw r4, 8(r3)
/* 8008885C 0008579C  90 A3 00 04 */	stw r5, 4(r3)
/* 80088860 000857A0  4E 80 00 20 */	blr 

.global draw__12J3DShapeDrawCFv
draw__12J3DShapeDrawCFv:
/* 80088864 000857A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80088868 000857A8  7C 08 02 A6 */	mflr r0
/* 8008886C 000857AC  7C 64 1B 78 */	mr r4, r3
/* 80088870 000857B0  80 63 00 08 */	lwz r3, 8(r3)
/* 80088874 000857B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80088878 000857B8  80 84 00 04 */	lwz r4, 4(r4)
/* 8008887C 000857BC  48 06 0B 5D */	bl GXCallDisplayList
/* 80088880 000857C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80088884 000857C4  7C 08 03 A6 */	mtlr r0
/* 80088888 000857C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8008888C 000857CC  4E 80 00 20 */	blr 

.global __dt__12J3DShapeDrawFv
__dt__12J3DShapeDrawFv:
/* 80088890 000857D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80088894 000857D4  7C 08 02 A6 */	mflr r0
/* 80088898 000857D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008889C 000857DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800888A0 000857E0  7C 7F 1B 79 */	or. r31, r3, r3
/* 800888A4 000857E4  41 82 00 1C */	beq lbl_800888C0
/* 800888A8 000857E8  3C A0 80 4A */	lis r5, __vt__12J3DShapeDraw@ha
/* 800888AC 000857EC  7C 80 07 35 */	extsh. r0, r4
/* 800888B0 000857F0  38 05 2F E0 */	addi r0, r5, __vt__12J3DShapeDraw@l
/* 800888B4 000857F4  90 1F 00 00 */	stw r0, 0(r31)
/* 800888B8 000857F8  40 81 00 08 */	ble lbl_800888C0
/* 800888BC 000857FC  4B F9 B7 F9 */	bl __dl__FPv
lbl_800888C0:
/* 800888C0 00085800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800888C4 00085804  7F E3 FB 78 */	mr r3, r31
/* 800888C8 00085808  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800888CC 0008580C  7C 08 03 A6 */	mtlr r0
/* 800888D0 00085810  38 21 00 10 */	addi r1, r1, 0x10
/* 800888D4 00085814  4E 80 00 20 */	blr 
