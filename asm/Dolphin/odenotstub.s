.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global Hu_IsStub
Hu_IsStub:
/* 800EAFC0 000E7F00  38 60 00 00 */	li r3, 0
/* 800EAFC4 000E7F04  4E 80 00 20 */	blr 
