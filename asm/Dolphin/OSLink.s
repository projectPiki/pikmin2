.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __OSModuleInit
__OSModuleInit:
/* 800EF4A4 000EC3E4  3C 80 80 00 */	lis r4, 0x800030CC@ha
/* 800EF4A8 000EC3E8  38 00 00 00 */	li r0, 0
/* 800EF4AC 000EC3EC  90 04 30 CC */	stw r0, 0x800030CC@l(r4)
/* 800EF4B0 000EC3F0  90 04 30 C8 */	stw r0, 0x30c8(r4)
/* 800EF4B4 000EC3F4  90 04 30 D0 */	stw r0, 0x30d0(r4)
/* 800EF4B8 000EC3F8  4E 80 00 20 */	blr 
