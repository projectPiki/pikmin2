.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global asin
asin:
/* 800CF96C 000CC8AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF970 000CC8B0  7C 08 02 A6 */	mflr r0
/* 800CF974 000CC8B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF978 000CC8B8  4B FF CA 39 */	bl __ieee754_asin
/* 800CF97C 000CC8BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF980 000CC8C0  7C 08 03 A6 */	mtlr r0
/* 800CF984 000CC8C4  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF988 000CC8C8  4E 80 00 20 */	blr 
