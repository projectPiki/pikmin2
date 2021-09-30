.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global log10
log10:
/* 800CF9EC 000CC92C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF9F0 000CC930  7C 08 02 A6 */	mflr r0
/* 800CF9F4 000CC934  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF9F8 000CC938  4B FF D6 5D */	bl __ieee754_log10
/* 800CF9FC 000CC93C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CFA00 000CC940  7C 08 03 A6 */	mtlr r0
/* 800CFA04 000CC944  38 21 00 10 */	addi r1, r1, 0x10
/* 800CFA08 000CC948  4E 80 00 20 */	blr 
