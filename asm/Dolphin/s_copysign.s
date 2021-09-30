.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global copysign
copysign:
/* 800CF28C 000CC1CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800CF290 000CC1D0  D8 21 00 08 */	stfd f1, 8(r1)
/* 800CF294 000CC1D4  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 800CF298 000CC1D8  80 61 00 08 */	lwz r3, 8(r1)
/* 800CF29C 000CC1DC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 800CF2A0 000CC1E0  50 60 00 7E */	rlwimi r0, r3, 0, 1, 0x1f
/* 800CF2A4 000CC1E4  90 01 00 08 */	stw r0, 8(r1)
/* 800CF2A8 000CC1E8  C8 21 00 08 */	lfd f1, 8(r1)
/* 800CF2AC 000CC1EC  38 21 00 20 */	addi r1, r1, 0x20
/* 800CF2B0 000CC1F0  4E 80 00 20 */	blr 
