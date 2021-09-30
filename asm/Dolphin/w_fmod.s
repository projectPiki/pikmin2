.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global fmod
fmod:
/* 800CF9CC 000CC90C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF9D0 000CC910  7C 08 02 A6 */	mflr r0
/* 800CF9D4 000CC914  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF9D8 000CC918  4B FF D0 C5 */	bl __ieee754_fmod
/* 800CF9DC 000CC91C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF9E0 000CC920  7C 08 03 A6 */	mtlr r0
/* 800CF9E4 000CC924  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF9E8 000CC928  4E 80 00 20 */	blr 
