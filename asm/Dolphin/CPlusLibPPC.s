.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __copy
__copy:
/* 800C1718 000BE658  28 03 00 00 */	cmplwi r3, 0
/* 800C171C 000BE65C  4D 82 00 20 */	beqlr 
/* 800C1720 000BE660  28 05 00 00 */	cmplwi r5, 0
/* 800C1724 000BE664  4D 82 00 20 */	beqlr 
/* 800C1728 000BE668  7C 66 1B 78 */	mr r6, r3
lbl_800C172C:
/* 800C172C 000BE66C  88 04 00 00 */	lbz r0, 0(r4)
/* 800C1730 000BE670  34 A5 FF FF */	addic. r5, r5, -1
/* 800C1734 000BE674  38 84 00 01 */	addi r4, r4, 1
/* 800C1738 000BE678  98 06 00 00 */	stb r0, 0(r6)
/* 800C173C 000BE67C  38 C6 00 01 */	addi r6, r6, 1
/* 800C1740 000BE680  40 82 FF EC */	bne lbl_800C172C
/* 800C1744 000BE684  4E 80 00 20 */	blr 
