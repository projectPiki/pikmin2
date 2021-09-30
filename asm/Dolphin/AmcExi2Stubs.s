.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global EXI2_Init
EXI2_Init:
/* 800D2644 000CF584  4E 80 00 20 */	blr 

.global EXI2_EnableInterrupts
EXI2_EnableInterrupts:
/* 800D2648 000CF588  4E 80 00 20 */	blr 

.global EXI2_Poll
EXI2_Poll:
/* 800D264C 000CF58C  38 60 00 00 */	li r3, 0
/* 800D2650 000CF590  4E 80 00 20 */	blr 

.global EXI2_ReadN
EXI2_ReadN:
/* 800D2654 000CF594  38 60 00 00 */	li r3, 0
/* 800D2658 000CF598  4E 80 00 20 */	blr 

.global EXI2_WriteN
EXI2_WriteN:
/* 800D265C 000CF59C  38 60 00 00 */	li r3, 0
/* 800D2660 000CF5A0  4E 80 00 20 */	blr 

.global EXI2_Reserve
EXI2_Reserve:
/* 800D2664 000CF5A4  4E 80 00 20 */	blr 

.global EXI2_Unreserve
EXI2_Unreserve:
/* 800D2668 000CF5A8  4E 80 00 20 */	blr 

.global AMC_IsStub
AMC_IsStub:
/* 800D266C 000CF5AC  38 60 00 01 */	li r3, 1
/* 800D2670 000CF5B0  4E 80 00 20 */	blr 
