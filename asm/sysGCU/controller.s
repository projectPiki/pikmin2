.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__10ControllerFQ210JUTGamePad8EPadPort
__ct__10ControllerFQ210JUTGamePad8EPadPort:
/* 80424E54 00421D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80424E58 00421D98  7C 08 02 A6 */	mflr r0
/* 80424E5C 00421D9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80424E60 00421DA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80424E64 00421DA4  7C 7F 1B 78 */	mr r31, r3
/* 80424E68 00421DA8  4B C0 85 F1 */	bl __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
/* 80424E6C 00421DAC  3C 80 80 4B */	lis r4, __vt__10Controller@ha
/* 80424E70 00421DB0  7F E3 FB 78 */	mr r3, r31
/* 80424E74 00421DB4  38 04 0D 08 */	addi r0, r4, __vt__10Controller@l
/* 80424E78 00421DB8  90 1F 00 00 */	stw r0, 0(r31)
/* 80424E7C 00421DBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80424E80 00421DC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80424E84 00421DC4  7C 08 03 A6 */	mtlr r0
/* 80424E88 00421DC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80424E8C 00421DCC  4E 80 00 20 */	blr 
