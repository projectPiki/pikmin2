.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global TRKTargetContinue
TRKTargetContinue:
/* 800C09BC 000BD8FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C09C0 000BD900  7C 08 02 A6 */	mflr r0
/* 800C09C4 000BD904  38 60 00 00 */	li r3, 0
/* 800C09C8 000BD908  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C09CC 000BD90C  4B FF D9 A5 */	bl TRKTargetSetStopped
/* 800C09D0 000BD910  4B FF FB A9 */	bl UnreserveEXI2Port
/* 800C09D4 000BD914  4B FF D7 51 */	bl TRKSwapAndGo
/* 800C09D8 000BD918  4B FF FB D1 */	bl ReserveEXI2Port
/* 800C09DC 000BD91C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C09E0 000BD920  38 60 00 00 */	li r3, 0
/* 800C09E4 000BD924  7C 08 03 A6 */	mtlr r0
/* 800C09E8 000BD928  38 21 00 10 */	addi r1, r1, 0x10
/* 800C09EC 000BD92C  4E 80 00 20 */	blr 
