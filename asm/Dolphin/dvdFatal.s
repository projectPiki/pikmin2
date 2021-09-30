.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __DVDPrintFatalMessage
__DVDPrintFatalMessage:
/* 800DF8E4 000DC824  7C 08 02 A6 */	mflr r0
/* 800DF8E8 000DC828  90 01 00 04 */	stw r0, 4(r1)
/* 800DF8EC 000DC82C  94 21 FF F8 */	stwu r1, -8(r1)
/* 800DF8F0 000DC830  81 8D 8E 78 */	lwz r12, FatalFunc@sda21(r13)
/* 800DF8F4 000DC834  28 0C 00 00 */	cmplwi r12, 0
/* 800DF8F8 000DC838  41 82 00 0C */	beq lbl_800DF904
/* 800DF8FC 000DC83C  7D 88 03 A6 */	mtlr r12
/* 800DF900 000DC840  4E 80 00 21 */	blrl 
lbl_800DF904:
/* 800DF904 000DC844  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800DF908 000DC848  38 21 00 08 */	addi r1, r1, 8
/* 800DF90C 000DC84C  7C 08 03 A6 */	mtlr r0
/* 800DF910 000DC850  4E 80 00 20 */	blr 
