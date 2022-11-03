.include "macros.inc"

.section .bss  # 0x804EFC20 - 0x8051467C
.global fragmentinfo
fragmentinfo:
	.skip 0x10

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __unregister_fragment
__unregister_fragment:
/* 800C2340 000BF280  2C 03 00 00 */	cmpwi r3, 0
/* 800C2344 000BF284  4D 80 00 20 */	bltlr 
/* 800C2348 000BF288  2C 03 00 01 */	cmpwi r3, 1
/* 800C234C 000BF28C  4C 80 00 20 */	bgelr 
/* 800C2350 000BF290  1C 83 00 0C */	mulli r4, r3, 0xc
/* 800C2354 000BF294  3C 60 80 4F */	lis r3, fragmentinfo@ha
/* 800C2358 000BF298  38 00 00 00 */	li r0, 0
/* 800C235C 000BF29C  38 63 55 60 */	addi r3, r3, fragmentinfo@l
/* 800C2360 000BF2A0  7C 63 22 14 */	add r3, r3, r4
/* 800C2364 000BF2A4  90 03 00 00 */	stw r0, 0(r3)
/* 800C2368 000BF2A8  90 03 00 04 */	stw r0, 4(r3)
/* 800C236C 000BF2AC  90 03 00 08 */	stw r0, 8(r3)
/* 800C2370 000BF2B0  4E 80 00 20 */	blr 

.global __register_fragment
__register_fragment:
/* 800C2374 000BF2B4  3C A0 80 4F */	lis r5, fragmentinfo@ha
/* 800C2378 000BF2B8  38 A5 55 60 */	addi r5, r5, fragmentinfo@l
/* 800C237C 000BF2BC  80 05 00 08 */	lwz r0, 8(r5)
/* 800C2380 000BF2C0  2C 00 00 00 */	cmpwi r0, 0
/* 800C2384 000BF2C4  40 82 00 1C */	bne .L_800C23A0
/* 800C2388 000BF2C8  90 65 00 00 */	stw r3, 0(r5)
/* 800C238C 000BF2CC  38 00 00 01 */	li r0, 1
/* 800C2390 000BF2D0  38 60 00 00 */	li r3, 0
/* 800C2394 000BF2D4  90 85 00 04 */	stw r4, 4(r5)
/* 800C2398 000BF2D8  90 05 00 08 */	stw r0, 8(r5)
/* 800C239C 000BF2DC  4E 80 00 20 */	blr 
.L_800C23A0:
/* 800C23A0 000BF2E0  38 60 FF FF */	li r3, -1
/* 800C23A4 000BF2E4  4E 80 00 20 */	blr 
