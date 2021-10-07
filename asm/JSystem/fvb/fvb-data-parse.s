.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getData__Q47JStudio3fvb4data17TParse_TParagraphCFPQ57JStudio3fvb4data17TParse_TParagraph5TData
getData__Q47JStudio3fvb4data17TParse_TParagraphCFPQ57JStudio3fvb4data17TParse_TParagraph5TData:
/* 8000CA3C 0000997C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000CA40 00009980  7C 08 02 A6 */	mflr r0
/* 8000CA44 00009984  80 63 00 00 */	lwz r3, 0(r3)
/* 8000CA48 00009988  38 C0 00 00 */	li r6, 0
/* 8000CA4C 0000998C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000CA50 00009990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000CA54 00009994  7C 9F 23 78 */	mr r31, r4
/* 8000CA58 00009998  38 BF 00 04 */	addi r5, r31, 4
/* 8000CA5C 0000999C  48 01 A6 CD */	bl parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit
/* 8000CA60 000099A0  80 9F 00 00 */	lwz r4, 0(r31)
/* 8000CA64 000099A4  28 04 00 00 */	cmplwi r4, 0
/* 8000CA68 000099A8  40 82 00 14 */	bne lbl_8000CA7C
/* 8000CA6C 000099AC  38 00 00 00 */	li r0, 0
/* 8000CA70 000099B0  90 1F 00 08 */	stw r0, 8(r31)
/* 8000CA74 000099B4  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8000CA78 000099B8  48 00 00 18 */	b lbl_8000CA90
lbl_8000CA7C:
/* 8000CA7C 000099BC  38 04 00 03 */	addi r0, r4, 3
/* 8000CA80 000099C0  90 7F 00 08 */	stw r3, 8(r31)
/* 8000CA84 000099C4  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 8000CA88 000099C8  7C 03 02 14 */	add r0, r3, r0
/* 8000CA8C 000099CC  90 1F 00 0C */	stw r0, 0xc(r31)
lbl_8000CA90:
/* 8000CA90 000099D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000CA94 000099D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000CA98 000099D8  7C 08 03 A6 */	mtlr r0
/* 8000CA9C 000099DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8000CAA0 000099E0  4E 80 00 20 */	blr 
