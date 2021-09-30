.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global sqrt
sqrt:
/* 800CFCBC 000CCBFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CFCC0 000CCC00  7C 08 02 A6 */	mflr r0
/* 800CFCC4 000CCC04  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CFCC8 000CCC08  4B FF FD 65 */	bl __ieee754_sqrt
/* 800CFCCC 000CCC0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CFCD0 000CCC10  7C 08 03 A6 */	mtlr r0
/* 800CFCD4 000CCC14  38 21 00 10 */	addi r1, r1, 0x10
/* 800CFCD8 000CCC18  4E 80 00 20 */	blr 
