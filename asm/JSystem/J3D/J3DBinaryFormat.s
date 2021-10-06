.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getType__11J3DShapeMtxCFv
getType__11J3DShapeMtxCFv:
/* 8006F888 0006C7C8  3C 60 53 4D */	lis r3, 0x534D5458@ha
/* 8006F88C 0006C7CC  38 63 54 58 */	addi r3, r3, 0x534D5458@l
/* 8006F890 0006C7D0  4E 80 00 20 */	blr 
