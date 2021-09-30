.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global exp
exp:
/* 800CF9AC 000CC8EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF9B0 000CC8F0  7C 08 02 A6 */	mflr r0
/* 800CF9B4 000CC8F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF9B8 000CC8F8  4B FF CE C1 */	bl __ieee754_exp
/* 800CF9BC 000CC8FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF9C0 000CC900  7C 08 03 A6 */	mtlr r0
/* 800CF9C4 000CC904  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF9C8 000CC908  4E 80 00 20 */	blr 
