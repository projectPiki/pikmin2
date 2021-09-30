.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global pow
pow:
/* 800CFA0C 000CC94C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CFA10 000CC950  7C 08 02 A6 */	mflr r0
/* 800CFA14 000CC954  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CFA18 000CC958  4B FF D7 4D */	bl __ieee754_pow
/* 800CFA1C 000CC95C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CFA20 000CC960  7C 08 03 A6 */	mtlr r0
/* 800CFA24 000CC964  38 21 00 10 */	addi r1, r1, 0x10
/* 800CFA28 000CC968  4E 80 00 20 */	blr 
