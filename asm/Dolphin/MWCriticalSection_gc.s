.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global MWExitCriticalSection
MWExitCriticalSection:
/* 800C1598 000BE4D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C159C 000BE4DC  7C 08 02 A6 */	mflr r0
/* 800C15A0 000BE4E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C15A4 000BE4E4  80 63 00 00 */	lwz r3, 0(r3)
/* 800C15A8 000BE4E8  48 02 D6 B9 */	bl OSRestoreInterrupts
/* 800C15AC 000BE4EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C15B0 000BE4F0  7C 08 03 A6 */	mtlr r0
/* 800C15B4 000BE4F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800C15B8 000BE4F8  4E 80 00 20 */	blr 

.global MWEnterCriticalSection
MWEnterCriticalSection:
/* 800C15BC 000BE4FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C15C0 000BE500  7C 08 02 A6 */	mflr r0
/* 800C15C4 000BE504  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C15C8 000BE508  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C15CC 000BE50C  7C 7F 1B 78 */	mr r31, r3
/* 800C15D0 000BE510  48 02 D6 69 */	bl OSDisableInterrupts
/* 800C15D4 000BE514  90 7F 00 00 */	stw r3, 0(r31)
/* 800C15D8 000BE518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C15DC 000BE51C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C15E0 000BE520  7C 08 03 A6 */	mtlr r0
/* 800C15E4 000BE524  38 21 00 10 */	addi r1, r1, 0x10
/* 800C15E8 000BE528  4E 80 00 20 */	blr 

.global MWInitializeCriticalSection
MWInitializeCriticalSection:
/* 800C15EC 000BE52C  4E 80 00 20 */	blr 
