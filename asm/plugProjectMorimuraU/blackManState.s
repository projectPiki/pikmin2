.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
.4byte __sinit_blackManState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80495230
lbl_80495230:
	.4byte 0x50534D61
	.4byte 0x696E5369
	.4byte 0x64655F4F
	.4byte 0x626A536F
	.4byte 0x756E642E
	.4byte 0x68000000
.global lbl_80495248
lbl_80495248:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804E5A50
lbl_804E5A50:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game8BlackMan10StateTired
__vt__Q34Game8BlackMan10StateTired:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan10StateTiredFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan10StateTiredFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan10StateFlick
__vt__Q34Game8BlackMan10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan12StateRecover
__vt__Q34Game8BlackMan12StateRecover:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan12StateRecoverFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan12StateRecoverFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan9StateFall
__vt__Q34Game8BlackMan9StateFall:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan11StateEscape
__vt__Q34Game8BlackMan11StateEscape:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan11StateEscapeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan11StateEscapeFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan9StateBend
__vt__Q34Game8BlackMan9StateBend:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan11StateFreeze
__vt__Q34Game8BlackMan11StateFreeze:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan9StateDead
__vt__Q34Game8BlackMan9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan9StateWalk
__vt__Q34Game8BlackMan9StateWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan5State
__vt__Q34Game8BlackMan5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8BlackMan3FSM
__vt__Q34Game8BlackMan3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8BlackMan3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80516050
lbl_80516050:
	.skip 0x4
.global lbl_80516054
lbl_80516054:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051F370
lbl_8051F370:
	.4byte 0x77616C6B
	.4byte 0x00000000
.global lbl_8051F378
lbl_8051F378:
	.4byte 0x00000000
.global lbl_8051F37C
lbl_8051F37C:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051F384
lbl_8051F384:
	.4byte 0x66726565
	.4byte 0x7A650000
.global lbl_8051F38C
lbl_8051F38C:
	.4byte 0x40400000
.global lbl_8051F390
lbl_8051F390:
	.4byte 0xC3A2F983
.global lbl_8051F394
lbl_8051F394:
	.4byte 0x43A2F983
.global lbl_8051F398
lbl_8051F398:
	.4byte 0x42000000
.global lbl_8051F39C
lbl_8051F39C:
	.4byte 0x40800000
.global lbl_8051F3A0
lbl_8051F3A0:
	.4byte 0x3ED70A3D
.global lbl_8051F3A4
lbl_8051F3A4:
	.4byte 0x62656E64
	.4byte 0x00000000
.global lbl_8051F3AC
lbl_8051F3AC:
	.4byte 0x40A00000
.global lbl_8051F3B0
lbl_8051F3B0:
	.4byte 0x65736361
	.4byte 0x70650000
.global lbl_8051F3B8
lbl_8051F3B8:
	.4byte 0xC1B00000
.global lbl_8051F3BC
lbl_8051F3BC:
	.4byte 0x41F00000
.global lbl_8051F3C0
lbl_8051F3C0:
	.4byte 0x3F59999A
.global lbl_8051F3C4
lbl_8051F3C4:
	.4byte 0x66616C6C
	.4byte 0x00000000
.global lbl_8051F3CC
lbl_8051F3CC:
	.4byte 0x41A00000
.global lbl_8051F3D0
lbl_8051F3D0:
	.4byte 0x7265636F
	.4byte 0x76657200
.global lbl_8051F3D8
lbl_8051F3D8:
	.4byte 0x666C6963
	.4byte 0x6B000000
.global lbl_8051F3E0
lbl_8051F3E0:
	.4byte 0x74697265
	.4byte 0x64000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game8BlackMan3FSMFPQ24Game9EnemyBase
init__Q34Game8BlackMan3FSMFPQ24Game9EnemyBase:
/* 803A3AF0 003A0A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3AF4 003A0A34  7C 08 02 A6 */	mflr r0
/* 803A3AF8 003A0A38  38 80 00 09 */	li r4, 9
/* 803A3AFC 003A0A3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3B00 003A0A40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A3B04 003A0A44  7C 7F 1B 78 */	mr r31, r3
/* 803A3B08 003A0A48  4B D8 CD 5D */	bl create__Q24Game17EnemyStateMachineFi
/* 803A3B0C 003A0A4C  38 60 00 10 */	li r3, 0x10
/* 803A3B10 003A0A50  4B C8 03 95 */	bl __nw__FUl
/* 803A3B14 003A0A54  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3B18 003A0A58  41 82 00 10 */	beq lbl_803A3B28
/* 803A3B1C 003A0A5C  38 80 00 00 */	li r4, 0
/* 803A3B20 003A0A60  48 00 01 45 */	bl __ct__Q34Game8BlackMan9StateWalkFi
/* 803A3B24 003A0A64  7C 64 1B 78 */	mr r4, r3
lbl_803A3B28:
/* 803A3B28 003A0A68  7F E3 FB 78 */	mr r3, r31
/* 803A3B2C 003A0A6C  4B D8 CD DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3B30 003A0A70  38 60 00 14 */	li r3, 0x14
/* 803A3B34 003A0A74  4B C8 03 71 */	bl __nw__FUl
/* 803A3B38 003A0A78  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3B3C 003A0A7C  41 82 00 10 */	beq lbl_803A3B4C
/* 803A3B40 003A0A80  38 80 00 01 */	li r4, 1
/* 803A3B44 003A0A84  48 00 03 D5 */	bl __ct__Q34Game8BlackMan9StateDeadFi
/* 803A3B48 003A0A88  7C 64 1B 78 */	mr r4, r3
lbl_803A3B4C:
/* 803A3B4C 003A0A8C  7F E3 FB 78 */	mr r3, r31
/* 803A3B50 003A0A90  4B D8 CD B9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3B54 003A0A94  38 60 00 10 */	li r3, 0x10
/* 803A3B58 003A0A98  4B C8 03 4D */	bl __nw__FUl
/* 803A3B5C 003A0A9C  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3B60 003A0AA0  41 82 00 10 */	beq lbl_803A3B70
/* 803A3B64 003A0AA4  38 80 00 02 */	li r4, 2
/* 803A3B68 003A0AA8  48 00 05 4D */	bl __ct__Q34Game8BlackMan11StateFreezeFi
/* 803A3B6C 003A0AAC  7C 64 1B 78 */	mr r4, r3
lbl_803A3B70:
/* 803A3B70 003A0AB0  7F E3 FB 78 */	mr r3, r31
/* 803A3B74 003A0AB4  4B D8 CD 95 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3B78 003A0AB8  38 60 00 10 */	li r3, 0x10
/* 803A3B7C 003A0ABC  4B C8 03 29 */	bl __nw__FUl
/* 803A3B80 003A0AC0  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3B84 003A0AC4  41 82 00 10 */	beq lbl_803A3B94
/* 803A3B88 003A0AC8  38 80 00 03 */	li r4, 3
/* 803A3B8C 003A0ACC  48 00 09 0D */	bl __ct__Q34Game8BlackMan9StateBendFi
/* 803A3B90 003A0AD0  7C 64 1B 78 */	mr r4, r3
lbl_803A3B94:
/* 803A3B94 003A0AD4  7F E3 FB 78 */	mr r3, r31
/* 803A3B98 003A0AD8  4B D8 CD 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3B9C 003A0ADC  38 60 00 10 */	li r3, 0x10
/* 803A3BA0 003A0AE0  4B C8 03 05 */	bl __nw__FUl
/* 803A3BA4 003A0AE4  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3BA8 003A0AE8  41 82 00 10 */	beq lbl_803A3BB8
/* 803A3BAC 003A0AEC  38 80 00 04 */	li r4, 4
/* 803A3BB0 003A0AF0  48 00 0B A5 */	bl __ct__Q34Game8BlackMan11StateEscapeFi
/* 803A3BB4 003A0AF4  7C 64 1B 78 */	mr r4, r3
lbl_803A3BB8:
/* 803A3BB8 003A0AF8  7F E3 FB 78 */	mr r3, r31
/* 803A3BBC 003A0AFC  4B D8 CD 4D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3BC0 003A0B00  38 60 00 10 */	li r3, 0x10
/* 803A3BC4 003A0B04  4B C8 02 E1 */	bl __nw__FUl
/* 803A3BC8 003A0B08  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3BCC 003A0B0C  41 82 00 10 */	beq lbl_803A3BDC
/* 803A3BD0 003A0B10  38 80 00 05 */	li r4, 5
/* 803A3BD4 003A0B14  48 00 0F 21 */	bl __ct__Q34Game8BlackMan9StateFallFi
/* 803A3BD8 003A0B18  7C 64 1B 78 */	mr r4, r3
lbl_803A3BDC:
/* 803A3BDC 003A0B1C  7F E3 FB 78 */	mr r3, r31
/* 803A3BE0 003A0B20  4B D8 CD 29 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3BE4 003A0B24  38 60 00 10 */	li r3, 0x10
/* 803A3BE8 003A0B28  4B C8 02 BD */	bl __nw__FUl
/* 803A3BEC 003A0B2C  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3BF0 003A0B30  41 82 00 10 */	beq lbl_803A3C00
/* 803A3BF4 003A0B34  38 80 00 07 */	li r4, 7
/* 803A3BF8 003A0B38  48 00 10 FD */	bl __ct__Q34Game8BlackMan12StateRecoverFi
/* 803A3BFC 003A0B3C  7C 64 1B 78 */	mr r4, r3
lbl_803A3C00:
/* 803A3C00 003A0B40  7F E3 FB 78 */	mr r3, r31
/* 803A3C04 003A0B44  4B D8 CD 05 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3C08 003A0B48  38 60 00 10 */	li r3, 0x10
/* 803A3C0C 003A0B4C  4B C8 02 99 */	bl __nw__FUl
/* 803A3C10 003A0B50  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3C14 003A0B54  41 82 00 10 */	beq lbl_803A3C24
/* 803A3C18 003A0B58  38 80 00 06 */	li r4, 6
/* 803A3C1C 003A0B5C  48 00 13 49 */	bl __ct__Q34Game8BlackMan10StateFlickFi
/* 803A3C20 003A0B60  7C 64 1B 78 */	mr r4, r3
lbl_803A3C24:
/* 803A3C24 003A0B64  7F E3 FB 78 */	mr r3, r31
/* 803A3C28 003A0B68  4B D8 CC E1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3C2C 003A0B6C  38 60 00 14 */	li r3, 0x14
/* 803A3C30 003A0B70  4B C8 02 75 */	bl __nw__FUl
/* 803A3C34 003A0B74  7C 64 1B 79 */	or. r4, r3, r3
/* 803A3C38 003A0B78  41 82 00 10 */	beq lbl_803A3C48
/* 803A3C3C 003A0B7C  38 80 00 08 */	li r4, 8
/* 803A3C40 003A0B80  48 00 15 95 */	bl __ct__Q34Game8BlackMan10StateTiredFi
/* 803A3C44 003A0B84  7C 64 1B 78 */	mr r4, r3
lbl_803A3C48:
/* 803A3C48 003A0B88  7F E3 FB 78 */	mr r3, r31
/* 803A3C4C 003A0B8C  4B D8 CC BD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803A3C50 003A0B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3C54 003A0B94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A3C58 003A0B98  7C 08 03 A6 */	mtlr r0
/* 803A3C5C 003A0B9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3C60 003A0BA0  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan9StateWalkFi
__ct__Q34Game8BlackMan9StateWalkFi:
/* 803A3C64 003A0BA4  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A3C68 003A0BA8  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A3C6C 003A0BAC  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A3C70 003A0BB0  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan9StateWalk@ha
/* 803A3C74 003A0BB4  90 03 00 00 */	stw r0, 0(r3)
/* 803A3C78 003A0BB8  38 E0 00 00 */	li r7, 0
/* 803A3C7C 003A0BBC  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A3C80 003A0BC0  38 A5 5B 7C */	addi r5, r5, __vt__Q34Game8BlackMan9StateWalk@l
/* 803A3C84 003A0BC4  90 83 00 04 */	stw r4, 4(r3)
/* 803A3C88 003A0BC8  38 02 10 10 */	addi r0, r2, lbl_8051F370@sda21
/* 803A3C8C 003A0BCC  90 E3 00 08 */	stw r7, 8(r3)
/* 803A3C90 003A0BD0  90 C3 00 00 */	stw r6, 0(r3)
/* 803A3C94 003A0BD4  90 A3 00 00 */	stw r5, 0(r3)
/* 803A3C98 003A0BD8  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A3C9C 003A0BDC  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A3CA0 003A0BE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3CA4 003A0BE4  7C 08 02 A6 */	mflr r0
/* 803A3CA8 003A0BE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3CAC 003A0BEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A3CB0 003A0BF0  7C 9F 23 78 */	mr r31, r4
/* 803A3CB4 003A0BF4  80 04 03 64 */	lwz r0, 0x364(r4)
/* 803A3CB8 003A0BF8  28 00 00 00 */	cmplwi r0, 0
/* 803A3CBC 003A0BFC  41 82 00 10 */	beq lbl_803A3CCC
/* 803A3CC0 003A0C00  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 803A3CC4 003A0C04  2C 00 00 02 */	cmpwi r0, 2
/* 803A3CC8 003A0C08  40 82 00 0C */	bne lbl_803A3CD4
lbl_803A3CCC:
/* 803A3CCC 003A0C0C  38 00 00 00 */	li r0, 0
/* 803A3CD0 003A0C10  48 00 00 08 */	b lbl_803A3CD8
lbl_803A3CD4:
/* 803A3CD4 003A0C14  38 00 00 01 */	li r0, 1
lbl_803A3CD8:
/* 803A3CD8 003A0C18  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803A3CDC 003A0C1C  41 82 00 18 */	beq lbl_803A3CF4
/* 803A3CE0 003A0C20  7F E3 FB 78 */	mr r3, r31
/* 803A3CE4 003A0C24  38 80 00 06 */	li r4, 6
/* 803A3CE8 003A0C28  38 A0 00 00 */	li r5, 0
/* 803A3CEC 003A0C2C  4B D6 13 19 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A3CF0 003A0C30  48 00 00 14 */	b lbl_803A3D04
lbl_803A3CF4:
/* 803A3CF4 003A0C34  7F E3 FB 78 */	mr r3, r31
/* 803A3CF8 003A0C38  38 80 00 08 */	li r4, 8
/* 803A3CFC 003A0C3C  38 A0 00 00 */	li r5, 0
/* 803A3D00 003A0C40  4B D6 13 05 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
lbl_803A3D04:
/* 803A3D04 003A0C44  7F E3 FB 78 */	mr r3, r31
/* 803A3D08 003A0C48  48 00 73 21 */	bl createTraceEffect__Q34Game8BlackMan3ObjFv
/* 803A3D0C 003A0C4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3D10 003A0C50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A3D14 003A0C54  7C 08 03 A6 */	mtlr r0
/* 803A3D18 003A0C58  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3D1C 003A0C5C  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBase
exec__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBase:
/* 803A3D20 003A0C60  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803A3D24 003A0C64  7C 08 02 A6 */	mflr r0
/* 803A3D28 003A0C68  90 01 00 34 */	stw r0, 0x34(r1)
/* 803A3D2C 003A0C6C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803A3D30 003A0C70  7C 9F 23 78 */	mr r31, r4
/* 803A3D34 003A0C74  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803A3D38 003A0C78  7C 7E 1B 78 */	mr r30, r3
/* 803A3D3C 003A0C7C  7F E3 FB 78 */	mr r3, r31
/* 803A3D40 003A0C80  48 00 45 F5 */	bl walkFunc__Q34Game8BlackMan3ObjFv
/* 803A3D44 003A0C84  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 803A3D48 003A0C88  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A3D4C 003A0C8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A3D50 003A0C90  4C 40 13 82 */	cror 2, 0, 2
/* 803A3D54 003A0C94  40 82 00 28 */	bne lbl_803A3D7C
/* 803A3D58 003A0C98  7F C3 F3 78 */	mr r3, r30
/* 803A3D5C 003A0C9C  7F E4 FB 78 */	mr r4, r31
/* 803A3D60 003A0CA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A3D64 003A0CA4  38 A0 00 01 */	li r5, 1
/* 803A3D68 003A0CA8  38 C0 00 00 */	li r6, 0
/* 803A3D6C 003A0CAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A3D70 003A0CB0  7D 89 03 A6 */	mtctr r12
/* 803A3D74 003A0CB4  4E 80 04 21 */	bctrl 
/* 803A3D78 003A0CB8  48 00 01 64 */	b lbl_803A3EDC
lbl_803A3D7C:
/* 803A3D7C 003A0CBC  7F E3 FB 78 */	mr r3, r31
/* 803A3D80 003A0CC0  48 00 69 5D */	bl isTyreDead__Q34Game8BlackMan3ObjFv
/* 803A3D84 003A0CC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A3D88 003A0CC8  41 82 00 28 */	beq lbl_803A3DB0
/* 803A3D8C 003A0CCC  7F C3 F3 78 */	mr r3, r30
/* 803A3D90 003A0CD0  7F E4 FB 78 */	mr r4, r31
/* 803A3D94 003A0CD4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A3D98 003A0CD8  38 A0 00 04 */	li r5, 4
/* 803A3D9C 003A0CDC  38 C0 00 00 */	li r6, 0
/* 803A3DA0 003A0CE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A3DA4 003A0CE4  7D 89 03 A6 */	mtctr r12
/* 803A3DA8 003A0CE8  4E 80 04 21 */	bctrl 
/* 803A3DAC 003A0CEC  48 00 01 30 */	b lbl_803A3EDC
lbl_803A3DB0:
/* 803A3DB0 003A0CF0  7F E3 FB 78 */	mr r3, r31
/* 803A3DB4 003A0CF4  38 80 00 00 */	li r4, 0
/* 803A3DB8 003A0CF8  4B D7 08 A1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803A3DBC 003A0CFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A3DC0 003A0D00  41 82 00 30 */	beq lbl_803A3DF0
/* 803A3DC4 003A0D04  38 00 00 00 */	li r0, 0
/* 803A3DC8 003A0D08  7F C3 F3 78 */	mr r3, r30
/* 803A3DCC 003A0D0C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 803A3DD0 003A0D10  7F E4 FB 78 */	mr r4, r31
/* 803A3DD4 003A0D14  38 A0 00 06 */	li r5, 6
/* 803A3DD8 003A0D18  38 C0 00 00 */	li r6, 0
/* 803A3DDC 003A0D1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A3DE0 003A0D20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A3DE4 003A0D24  7D 89 03 A6 */	mtctr r12
/* 803A3DE8 003A0D28  4E 80 04 21 */	bctrl 
/* 803A3DEC 003A0D2C  48 00 00 F0 */	b lbl_803A3EDC
lbl_803A3DF0:
/* 803A3DF0 003A0D30  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803A3DF4 003A0D34  7F E3 FB 78 */	mr r3, r31
/* 803A3DF8 003A0D38  C0 24 0A 1C */	lfs f1, 0xa1c(r4)
/* 803A3DFC 003A0D3C  48 00 4D 81 */	bl isReachToGoal__Q34Game8BlackMan3ObjFf
/* 803A3E00 003A0D40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A3E04 003A0D44  41 82 00 10 */	beq lbl_803A3E14
/* 803A3E08 003A0D48  7F E3 FB 78 */	mr r3, r31
/* 803A3E0C 003A0D4C  48 00 4D A5 */	bl findNextRoutePoint__Q34Game8BlackMan3ObjFv
/* 803A3E10 003A0D50  48 00 00 CC */	b lbl_803A3EDC
lbl_803A3E14:
/* 803A3E14 003A0D54  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A3E18 003A0D58  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A3E1C 003A0D5C  28 00 00 00 */	cmplwi r0, 0
/* 803A3E20 003A0D60  41 82 00 BC */	beq lbl_803A3EDC
/* 803A3E24 003A0D64  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A3E28 003A0D68  2C 00 00 04 */	cmpwi r0, 4
/* 803A3E2C 003A0D6C  40 80 00 B0 */	bge lbl_803A3EDC
/* 803A3E30 003A0D70  2C 00 00 02 */	cmpwi r0, 2
/* 803A3E34 003A0D74  40 80 00 08 */	bge lbl_803A3E3C
/* 803A3E38 003A0D78  48 00 00 A4 */	b lbl_803A3EDC
lbl_803A3E3C:
/* 803A3E3C 003A0D7C  7F E4 FB 78 */	mr r4, r31
/* 803A3E40 003A0D80  38 61 00 08 */	addi r3, r1, 8
/* 803A3E44 003A0D84  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A3E48 003A0D88  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A3E4C 003A0D8C  7D 89 03 A6 */	mtctr r12
/* 803A3E50 003A0D90  4E 80 04 21 */	bctrl 
/* 803A3E54 003A0D94  C0 41 00 08 */	lfs f2, 8(r1)
/* 803A3E58 003A0D98  7F E3 FB 78 */	mr r3, r31
/* 803A3E5C 003A0D9C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803A3E60 003A0DA0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803A3E64 003A0DA4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803A3E68 003A0DA8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803A3E6C 003A0DAC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803A3E70 003A0DB0  4B D6 34 D9 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A3E74 003A0DB4  2C 03 00 0B */	cmpwi r3, 0xb
/* 803A3E78 003A0DB8  40 82 00 2C */	bne lbl_803A3EA4
/* 803A3E7C 003A0DBC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A3E80 003A0DC0  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A3E84 003A0DC4  38 80 00 03 */	li r4, 3
/* 803A3E88 003A0DC8  38 C0 00 02 */	li r6, 2
/* 803A3E8C 003A0DCC  4B EA E3 B1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A3E90 003A0DD0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A3E94 003A0DD4  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A3E98 003A0DD8  38 80 00 08 */	li r4, 8
/* 803A3E9C 003A0DDC  38 C0 00 02 */	li r6, 2
/* 803A3EA0 003A0DE0  4B EA F8 E1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
lbl_803A3EA4:
/* 803A3EA4 003A0DE4  7F E3 FB 78 */	mr r3, r31
/* 803A3EA8 003A0DE8  4B D6 34 A1 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A3EAC 003A0DEC  2C 03 00 08 */	cmpwi r3, 8
/* 803A3EB0 003A0DF0  40 82 00 2C */	bne lbl_803A3EDC
/* 803A3EB4 003A0DF4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A3EB8 003A0DF8  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A3EBC 003A0DFC  38 80 00 06 */	li r4, 6
/* 803A3EC0 003A0E00  38 C0 00 02 */	li r6, 2
/* 803A3EC4 003A0E04  4B EA E3 79 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A3EC8 003A0E08  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A3ECC 003A0E0C  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A3ED0 003A0E10  38 80 00 08 */	li r4, 8
/* 803A3ED4 003A0E14  38 C0 00 02 */	li r6, 2
/* 803A3ED8 003A0E18  4B EA F8 A9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
lbl_803A3EDC:
/* 803A3EDC 003A0E1C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A3EE0 003A0E20  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803A3EE4 003A0E24  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803A3EE8 003A0E28  7C 08 03 A6 */	mtlr r0
/* 803A3EEC 003A0E2C  38 21 00 30 */	addi r1, r1, 0x30
/* 803A3EF0 003A0E30  4E 80 00 20 */	blr 

.global cleanup__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBase
cleanup__Q34Game8BlackMan9StateWalkFPQ24Game9EnemyBase:
/* 803A3EF4 003A0E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3EF8 003A0E38  7C 08 02 A6 */	mflr r0
/* 803A3EFC 003A0E3C  7C 83 23 78 */	mr r3, r4
/* 803A3F00 003A0E40  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3F04 003A0E44  48 00 71 81 */	bl fadeTraceEffect__Q34Game8BlackMan3ObjFv
/* 803A3F08 003A0E48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3F0C 003A0E4C  7C 08 03 A6 */	mtlr r0
/* 803A3F10 003A0E50  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3F14 003A0E54  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan9StateDeadFi
__ct__Q34Game8BlackMan9StateDeadFi:
/* 803A3F18 003A0E58  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A3F1C 003A0E5C  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A3F20 003A0E60  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A3F24 003A0E64  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan9StateDead@ha
/* 803A3F28 003A0E68  90 03 00 00 */	stw r0, 0(r3)
/* 803A3F2C 003A0E6C  38 E0 00 00 */	li r7, 0
/* 803A3F30 003A0E70  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A3F34 003A0E74  38 A5 5B 58 */	addi r5, r5, __vt__Q34Game8BlackMan9StateDead@l
/* 803A3F38 003A0E78  90 83 00 04 */	stw r4, 4(r3)
/* 803A3F3C 003A0E7C  38 02 10 1C */	addi r0, r2, lbl_8051F37C@sda21
/* 803A3F40 003A0E80  90 E3 00 08 */	stw r7, 8(r3)
/* 803A3F44 003A0E84  90 C3 00 00 */	stw r6, 0(r3)
/* 803A3F48 003A0E88  90 A3 00 00 */	stw r5, 0(r3)
/* 803A3F4C 003A0E8C  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A3F50 003A0E90  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A3F54 003A0E94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3F58 003A0E98  7C 08 02 A6 */	mflr r0
/* 803A3F5C 003A0E9C  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A3F60 003A0EA0  38 A0 00 00 */	li r5, 0
/* 803A3F64 003A0EA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3F68 003A0EA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A3F6C 003A0EAC  7C 9F 23 78 */	mr r31, r4
/* 803A3F70 003A0EB0  7F E3 FB 78 */	mr r3, r31
/* 803A3F74 003A0EB4  38 80 00 02 */	li r4, 2
/* 803A3F78 003A0EB8  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803A3F7C 003A0EBC  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803A3F80 003A0EC0  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803A3F84 003A0EC4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803A3F88 003A0EC8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803A3F8C 003A0ECC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803A3F90 003A0ED0  4B D6 10 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A3F94 003A0ED4  7F E3 FB 78 */	mr r3, r31
/* 803A3F98 003A0ED8  48 00 6F 05 */	bl deadTraceEffect__Q34Game8BlackMan3ObjFv
/* 803A3F9C 003A0EDC  7F E3 FB 78 */	mr r3, r31
/* 803A3FA0 003A0EE0  4B D6 17 81 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 803A3FA4 003A0EE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3FA8 003A0EE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A3FAC 003A0EEC  7C 08 03 A6 */	mtlr r0
/* 803A3FB0 003A0EF0  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3FB4 003A0EF4  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan9StateDeadFPQ24Game9EnemyBase
exec__Q34Game8BlackMan9StateDeadFPQ24Game9EnemyBase:
/* 803A3FB8 003A0EF8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803A3FBC 003A0EFC  7C 08 02 A6 */	mflr r0
/* 803A3FC0 003A0F00  90 01 00 34 */	stw r0, 0x34(r1)
/* 803A3FC4 003A0F04  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803A3FC8 003A0F08  7C 9F 23 78 */	mr r31, r4
/* 803A3FCC 003A0F0C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 803A3FD0 003A0F10  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A3FD4 003A0F14  28 00 00 00 */	cmplwi r0, 0
/* 803A3FD8 003A0F18  41 82 00 C8 */	beq lbl_803A40A0
/* 803A3FDC 003A0F1C  81 84 00 00 */	lwz r12, 0(r4)
/* 803A3FE0 003A0F20  38 61 00 08 */	addi r3, r1, 8
/* 803A3FE4 003A0F24  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A3FE8 003A0F28  7D 89 03 A6 */	mtctr r12
/* 803A3FEC 003A0F2C  4E 80 04 21 */	bctrl 
/* 803A3FF0 003A0F30  C0 41 00 08 */	lfs f2, 8(r1)
/* 803A3FF4 003A0F34  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803A3FF8 003A0F38  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803A3FFC 003A0F3C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803A4000 003A0F40  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803A4004 003A0F44  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803A4008 003A0F48  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A400C 003A0F4C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A4010 003A0F50  2C 00 00 05 */	cmpwi r0, 5
/* 803A4014 003A0F54  41 82 00 4C */	beq lbl_803A4060
/* 803A4018 003A0F58  40 80 00 10 */	bge lbl_803A4028
/* 803A401C 003A0F5C  2C 00 00 02 */	cmpwi r0, 2
/* 803A4020 003A0F60  40 80 00 14 */	bge lbl_803A4034
/* 803A4024 003A0F64  48 00 00 7C */	b lbl_803A40A0
lbl_803A4028:
/* 803A4028 003A0F68  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 803A402C 003A0F6C  41 82 00 40 */	beq lbl_803A406C
/* 803A4030 003A0F70  48 00 00 70 */	b lbl_803A40A0
lbl_803A4034:
/* 803A4034 003A0F74  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A4038 003A0F78  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A403C 003A0F7C  38 80 00 0C */	li r4, 0xc
/* 803A4040 003A0F80  38 C0 00 02 */	li r6, 2
/* 803A4044 003A0F84  4B EA E1 F9 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A4048 003A0F88  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A404C 003A0F8C  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A4050 003A0F90  38 80 00 0E */	li r4, 0xe
/* 803A4054 003A0F94  38 C0 00 02 */	li r6, 2
/* 803A4058 003A0F98  4B EA F7 29 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A405C 003A0F9C  48 00 00 44 */	b lbl_803A40A0
lbl_803A4060:
/* 803A4060 003A0FA0  7F E3 FB 78 */	mr r3, r31
/* 803A4064 003A0FA4  48 00 6D 69 */	bl deadEffect__Q34Game8BlackMan3ObjFv
/* 803A4068 003A0FA8  48 00 00 38 */	b lbl_803A40A0
lbl_803A406C:
/* 803A406C 003A0FAC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A4070 003A0FB0  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A4074 003A0FB4  38 80 00 11 */	li r4, 0x11
/* 803A4078 003A0FB8  38 C0 00 02 */	li r6, 2
/* 803A407C 003A0FBC  4B EA E1 C1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A4080 003A0FC0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A4084 003A0FC4  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A4088 003A0FC8  38 80 00 0F */	li r4, 0xf
/* 803A408C 003A0FCC  38 C0 00 02 */	li r6, 2
/* 803A4090 003A0FD0  4B EA F6 F1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A4094 003A0FD4  7F E3 FB 78 */	mr r3, r31
/* 803A4098 003A0FD8  38 80 00 00 */	li r4, 0
/* 803A409C 003A0FDC  4B D9 70 55 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_803A40A0:
/* 803A40A0 003A0FE0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A40A4 003A0FE4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803A40A8 003A0FE8  7C 08 03 A6 */	mtlr r0
/* 803A40AC 003A0FEC  38 21 00 30 */	addi r1, r1, 0x30
/* 803A40B0 003A0FF0  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan11StateFreezeFi
__ct__Q34Game8BlackMan11StateFreezeFi:
/* 803A40B4 003A0FF4  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A40B8 003A0FF8  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A40BC 003A0FFC  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A40C0 003A1000  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan11StateFreeze@ha
/* 803A40C4 003A1004  90 03 00 00 */	stw r0, 0(r3)
/* 803A40C8 003A1008  38 E0 00 00 */	li r7, 0
/* 803A40CC 003A100C  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A40D0 003A1010  38 A5 5B 34 */	addi r5, r5, __vt__Q34Game8BlackMan11StateFreeze@l
/* 803A40D4 003A1014  90 83 00 04 */	stw r4, 4(r3)
/* 803A40D8 003A1018  38 02 10 24 */	addi r0, r2, lbl_8051F384@sda21
/* 803A40DC 003A101C  90 E3 00 08 */	stw r7, 8(r3)
/* 803A40E0 003A1020  90 C3 00 00 */	stw r6, 0(r3)
/* 803A40E4 003A1024  90 A3 00 00 */	stw r5, 0(r3)
/* 803A40E8 003A1028  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A40EC 003A102C  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A40F0 003A1030  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A40F4 003A1034  7C 08 02 A6 */	mflr r0
/* 803A40F8 003A1038  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A40FC 003A103C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A4100 003A1040  93 C1 00 08 */	stw r30, 8(r1)
/* 803A4104 003A1044  7C 9E 23 78 */	mr r30, r4
/* 803A4108 003A1048  7F C3 F3 78 */	mr r3, r30
/* 803A410C 003A104C  48 00 68 C9 */	bl collisionStOn__Q34Game8BlackMan3ObjFv
/* 803A4110 003A1050  7F C3 F3 78 */	mr r3, r30
/* 803A4114 003A1054  3B E0 00 00 */	li r31, 0
/* 803A4118 003A1058  4B D6 32 31 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A411C 003A105C  2C 03 00 04 */	cmpwi r3, 4
/* 803A4120 003A1060  40 82 00 08 */	bne lbl_803A4128
/* 803A4124 003A1064  3B E0 00 01 */	li r31, 1
lbl_803A4128:
/* 803A4128 003A1068  7F C3 F3 78 */	mr r3, r30
/* 803A412C 003A106C  38 80 00 01 */	li r4, 1
/* 803A4130 003A1070  38 A0 00 00 */	li r5, 0
/* 803A4134 003A1074  4B D6 0E D1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A4138 003A1078  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803A413C 003A107C  41 82 00 10 */	beq lbl_803A414C
/* 803A4140 003A1080  C0 22 10 2C */	lfs f1, lbl_8051F38C@sda21(r2)
/* 803A4144 003A1084  7F C3 F3 78 */	mr r3, r30
/* 803A4148 003A1088  4B D6 10 E1 */	bl setMotionFrame__Q24Game9EnemyBaseFf
lbl_803A414C:
/* 803A414C 003A108C  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4150 003A1090  D0 1E 01 C8 */	stfs f0, 0x1c8(r30)
/* 803A4154 003A1094  D0 1E 01 CC */	stfs f0, 0x1cc(r30)
/* 803A4158 003A1098  D0 1E 01 D0 */	stfs f0, 0x1d0(r30)
/* 803A415C 003A109C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 803A4160 003A10A0  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 803A4164 003A10A4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 803A4168 003A10A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A416C 003A10AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A4170 003A10B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4174 003A10B4  7C 08 03 A6 */	mtlr r0
/* 803A4178 003A10B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A417C 003A10BC  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBase
exec__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBase:
/* 803A4180 003A10C0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803A4184 003A10C4  7C 08 02 A6 */	mflr r0
/* 803A4188 003A10C8  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A418C 003A10CC  90 01 00 64 */	stw r0, 0x64(r1)
/* 803A4190 003A10D0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803A4194 003A10D4  7C 9F 23 78 */	mr r31, r4
/* 803A4198 003A10D8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803A419C 003A10DC  7C 7E 1B 78 */	mr r30, r3
/* 803A41A0 003A10E0  80 A4 02 CC */	lwz r5, 0x2cc(r4)
/* 803A41A4 003A10E4  38 05 00 01 */	addi r0, r5, 1
/* 803A41A8 003A10E8  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 803A41AC 003A10EC  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 803A41B0 003A10F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A41B4 003A10F4  4C 40 13 82 */	cror 2, 0, 2
/* 803A41B8 003A10F8  40 82 00 20 */	bne lbl_803A41D8
/* 803A41BC 003A10FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803A41C0 003A1100  38 A0 00 01 */	li r5, 1
/* 803A41C4 003A1104  38 C0 00 00 */	li r6, 0
/* 803A41C8 003A1108  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A41CC 003A110C  7D 89 03 A6 */	mtctr r12
/* 803A41D0 003A1110  4E 80 04 21 */	bctrl 
/* 803A41D4 003A1114  48 00 02 88 */	b lbl_803A445C
lbl_803A41D8:
/* 803A41D8 003A1118  7F E3 FB 78 */	mr r3, r31
/* 803A41DC 003A111C  38 80 00 00 */	li r4, 0
/* 803A41E0 003A1120  4B D7 04 79 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803A41E4 003A1124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A41E8 003A1128  41 82 00 30 */	beq lbl_803A4218
/* 803A41EC 003A112C  38 00 00 02 */	li r0, 2
/* 803A41F0 003A1130  7F C3 F3 78 */	mr r3, r30
/* 803A41F4 003A1134  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 803A41F8 003A1138  7F E4 FB 78 */	mr r4, r31
/* 803A41FC 003A113C  38 A0 00 06 */	li r5, 6
/* 803A4200 003A1140  38 C0 00 00 */	li r6, 0
/* 803A4204 003A1144  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A4208 003A1148  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A420C 003A114C  7D 89 03 A6 */	mtctr r12
/* 803A4210 003A1150  4E 80 04 21 */	bctrl 
/* 803A4214 003A1154  48 00 02 48 */	b lbl_803A445C
lbl_803A4218:
/* 803A4218 003A1158  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A421C 003A115C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A4220 003A1160  28 00 00 00 */	cmplwi r0, 0
/* 803A4224 003A1164  41 82 02 1C */	beq lbl_803A4440
/* 803A4228 003A1168  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A422C 003A116C  28 00 00 02 */	cmplwi r0, 2
/* 803A4230 003A1170  40 82 01 DC */	bne lbl_803A440C
/* 803A4234 003A1174  7F E4 FB 78 */	mr r4, r31
/* 803A4238 003A1178  38 61 00 08 */	addi r3, r1, 8
/* 803A423C 003A117C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A4240 003A1180  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A4244 003A1184  7D 89 03 A6 */	mtctr r12
/* 803A4248 003A1188  4E 80 04 21 */	bctrl 
/* 803A424C 003A118C  C0 41 00 08 */	lfs f2, 8(r1)
/* 803A4250 003A1190  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A4254 003A1194  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803A4258 003A1198  38 80 00 0C */	li r4, 0xc
/* 803A425C 003A119C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803A4260 003A11A0  38 C0 00 02 */	li r6, 2
/* 803A4264 003A11A4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803A4268 003A11A8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A426C 003A11AC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803A4270 003A11B0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803A4274 003A11B4  4B EA DF C9 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A4278 003A11B8  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A427C 003A11BC  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A4280 003A11C0  38 80 00 0E */	li r4, 0xe
/* 803A4284 003A11C4  38 C0 00 02 */	li r6, 2
/* 803A4288 003A11C8  4B EA F4 F9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A428C 003A11CC  7F E3 FB 78 */	mr r3, r31
/* 803A4290 003A11D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A4294 003A11D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803A4298 003A11D8  7D 89 03 A6 */	mtctr r12
/* 803A429C 003A11DC  4E 80 04 21 */	bctrl 
/* 803A42A0 003A11E0  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A42A4 003A11E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A42A8 003A11E8  40 80 00 30 */	bge lbl_803A42D8
/* 803A42AC 003A11EC  C0 02 10 30 */	lfs f0, lbl_8051F390@sda21(r2)
/* 803A42B0 003A11F0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A42B4 003A11F4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A42B8 003A11F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A42BC 003A11FC  FC 00 00 1E */	fctiwz f0, f0
/* 803A42C0 003A1200  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803A42C4 003A1204  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A42C8 003A1208  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A42CC 003A120C  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A42D0 003A1210  FC A0 00 50 */	fneg f5, f0
/* 803A42D4 003A1214  48 00 00 28 */	b lbl_803A42FC
lbl_803A42D8:
/* 803A42D8 003A1218  C0 02 10 34 */	lfs f0, lbl_8051F394@sda21(r2)
/* 803A42DC 003A121C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A42E0 003A1220  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A42E4 003A1224  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A42E8 003A1228  FC 00 00 1E */	fctiwz f0, f0
/* 803A42EC 003A122C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803A42F0 003A1230  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803A42F4 003A1234  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A42F8 003A1238  7C A3 04 2E */	lfsx f5, r3, r0
lbl_803A42FC:
/* 803A42FC 003A123C  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4300 003A1240  FC 60 08 90 */	fmr f3, f1
/* 803A4304 003A1244  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A4308 003A1248  40 80 00 08 */	bge lbl_803A4310
/* 803A430C 003A124C  FC 60 08 50 */	fneg f3, f1
lbl_803A4310:
/* 803A4310 003A1250  C0 42 10 34 */	lfs f2, lbl_8051F394@sda21(r2)
/* 803A4314 003A1254  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A4318 003A1258  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A431C 003A125C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A4320 003A1260  EC 83 00 B2 */	fmuls f4, f3, f2
/* 803A4324 003A1264  38 63 00 04 */	addi r3, r3, 4
/* 803A4328 003A1268  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A432C 003A126C  C0 42 10 3C */	lfs f2, lbl_8051F39C@sda21(r2)
/* 803A4330 003A1270  C0 62 10 38 */	lfs f3, lbl_8051F398@sda21(r2)
/* 803A4334 003A1274  FC E0 08 90 */	fmr f7, f1
/* 803A4338 003A1278  FC 00 20 1E */	fctiwz f0, f4
/* 803A433C 003A127C  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 803A4340 003A1280  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803A4344 003A1284  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A4348 003A1288  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A434C 003A128C  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A4350 003A1290  EC 02 00 32 */	fmuls f0, f2, f0
/* 803A4354 003A1294  EC 03 01 78 */	fmsubs f0, f3, f5, f0
/* 803A4358 003A1298  EC 04 00 2A */	fadds f0, f4, f0
/* 803A435C 003A129C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803A4360 003A12A0  40 80 00 08 */	bge lbl_803A4368
/* 803A4364 003A12A4  FC E0 08 50 */	fneg f7, f1
lbl_803A4368:
/* 803A4368 003A12A8  C0 C2 10 34 */	lfs f6, lbl_8051F394@sda21(r2)
/* 803A436C 003A12AC  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4370 003A12B0  EC A7 01 B2 */	fmuls f5, f7, f6
/* 803A4374 003A12B4  C0 81 00 1C */	lfs f4, 0x1c(r1)
/* 803A4378 003A12B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A437C 003A12BC  C0 62 10 38 */	lfs f3, lbl_8051F398@sda21(r2)
/* 803A4380 003A12C0  C0 42 10 3C */	lfs f2, lbl_8051F39C@sda21(r2)
/* 803A4384 003A12C4  FC 00 28 1E */	fctiwz f0, f5
/* 803A4388 003A12C8  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 803A438C 003A12CC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 803A4390 003A12D0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A4394 003A12D4  7C A3 04 2E */	lfsx f5, r3, r0
/* 803A4398 003A12D8  40 80 00 30 */	bge lbl_803A43C8
/* 803A439C 003A12DC  C0 02 10 30 */	lfs f0, lbl_8051F390@sda21(r2)
/* 803A43A0 003A12E0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A43A4 003A12E4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A43A8 003A12E8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A43AC 003A12EC  FC 00 00 1E */	fctiwz f0, f0
/* 803A43B0 003A12F0  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803A43B4 003A12F4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803A43B8 003A12F8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A43BC 003A12FC  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A43C0 003A1300  FC 00 00 50 */	fneg f0, f0
/* 803A43C4 003A1304  48 00 00 24 */	b lbl_803A43E8
lbl_803A43C8:
/* 803A43C8 003A1308  EC 01 01 B2 */	fmuls f0, f1, f6
/* 803A43CC 003A130C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A43D0 003A1310  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A43D4 003A1314  FC 00 00 1E */	fctiwz f0, f0
/* 803A43D8 003A1318  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 803A43DC 003A131C  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 803A43E0 003A1320  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A43E4 003A1324  7C 03 04 2E */	lfsx f0, r3, r0
lbl_803A43E8:
/* 803A43E8 003A1328  EC 02 00 32 */	fmuls f0, f2, f0
/* 803A43EC 003A132C  C0 22 10 40 */	lfs f1, lbl_8051F3A0@sda21(r2)
/* 803A43F0 003A1330  7F E3 FB 78 */	mr r3, r31
/* 803A43F4 003A1334  38 81 00 14 */	addi r4, r1, 0x14
/* 803A43F8 003A1338  EC 03 01 78 */	fmsubs f0, f3, f5, f0
/* 803A43FC 003A133C  EC 04 00 2A */	fadds f0, f4, f0
/* 803A4400 003A1340  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803A4404 003A1344  4B D5 F7 4D */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 803A4408 003A1348  48 00 00 54 */	b lbl_803A445C
lbl_803A440C:
/* 803A440C 003A134C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A4410 003A1350  40 82 00 4C */	bne lbl_803A445C
/* 803A4414 003A1354  7F C3 F3 78 */	mr r3, r30
/* 803A4418 003A1358  7F E4 FB 78 */	mr r4, r31
/* 803A441C 003A135C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A4420 003A1360  38 A0 00 00 */	li r5, 0
/* 803A4424 003A1364  38 C0 00 00 */	li r6, 0
/* 803A4428 003A1368  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A442C 003A136C  7D 89 03 A6 */	mtctr r12
/* 803A4430 003A1370  4E 80 04 21 */	bctrl 
/* 803A4434 003A1374  7F E3 FB 78 */	mr r3, r31
/* 803A4438 003A1378  48 00 66 3D */	bl collisionStOff__Q34Game8BlackMan3ObjFv
/* 803A443C 003A137C  48 00 00 20 */	b lbl_803A445C
lbl_803A4440:
/* 803A4440 003A1380  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A4444 003A1384  80 9F 02 CC */	lwz r4, 0x2cc(r31)
/* 803A4448 003A1388  80 03 09 AC */	lwz r0, 0x9ac(r3)
/* 803A444C 003A138C  7C 04 00 00 */	cmpw r4, r0
/* 803A4450 003A1390  40 81 00 0C */	ble lbl_803A445C
/* 803A4454 003A1394  7F E3 FB 78 */	mr r3, r31
/* 803A4458 003A1398  4B D6 0E 49 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_803A445C:
/* 803A445C 003A139C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803A4460 003A13A0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803A4464 003A13A4  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803A4468 003A13A8  7C 08 03 A6 */	mtlr r0
/* 803A446C 003A13AC  38 21 00 60 */	addi r1, r1, 0x60
/* 803A4470 003A13B0  4E 80 00 20 */	blr 

.global cleanup__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBase
cleanup__Q34Game8BlackMan11StateFreezeFPQ24Game9EnemyBase:
/* 803A4474 003A13B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4478 003A13B8  7C 08 02 A6 */	mflr r0
/* 803A447C 003A13BC  7C 83 23 78 */	mr r3, r4
/* 803A4480 003A13C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A4484 003A13C4  48 00 65 F1 */	bl collisionStOff__Q34Game8BlackMan3ObjFv
/* 803A4488 003A13C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A448C 003A13CC  7C 08 03 A6 */	mtlr r0
/* 803A4490 003A13D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803A4494 003A13D4  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan9StateBendFi
__ct__Q34Game8BlackMan9StateBendFi:
/* 803A4498 003A13D8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A449C 003A13DC  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A44A0 003A13E0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A44A4 003A13E4  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan9StateBend@ha
/* 803A44A8 003A13E8  90 03 00 00 */	stw r0, 0(r3)
/* 803A44AC 003A13EC  38 E0 00 00 */	li r7, 0
/* 803A44B0 003A13F0  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A44B4 003A13F4  38 A5 5B 10 */	addi r5, r5, __vt__Q34Game8BlackMan9StateBend@l
/* 803A44B8 003A13F8  90 83 00 04 */	stw r4, 4(r3)
/* 803A44BC 003A13FC  38 02 10 44 */	addi r0, r2, lbl_8051F3A4@sda21
/* 803A44C0 003A1400  90 E3 00 08 */	stw r7, 8(r3)
/* 803A44C4 003A1404  90 C3 00 00 */	stw r6, 0(r3)
/* 803A44C8 003A1408  90 A3 00 00 */	stw r5, 0(r3)
/* 803A44CC 003A140C  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A44D0 003A1410  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A44D4 003A1414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A44D8 003A1418  7C 08 02 A6 */	mflr r0
/* 803A44DC 003A141C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A44E0 003A1420  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A44E4 003A1424  93 C1 00 08 */	stw r30, 8(r1)
/* 803A44E8 003A1428  7C 9E 23 78 */	mr r30, r4
/* 803A44EC 003A142C  7F C3 F3 78 */	mr r3, r30
/* 803A44F0 003A1430  48 00 64 E5 */	bl collisionStOn__Q34Game8BlackMan3ObjFv
/* 803A44F4 003A1434  7F C3 F3 78 */	mr r3, r30
/* 803A44F8 003A1438  3B E0 00 00 */	li r31, 0
/* 803A44FC 003A143C  4B D6 2E 4D */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A4500 003A1440  2C 03 00 03 */	cmpwi r3, 3
/* 803A4504 003A1444  40 82 00 08 */	bne lbl_803A450C
/* 803A4508 003A1448  3B E0 00 01 */	li r31, 1
lbl_803A450C:
/* 803A450C 003A144C  7F C3 F3 78 */	mr r3, r30
/* 803A4510 003A1450  38 80 00 00 */	li r4, 0
/* 803A4514 003A1454  38 A0 00 00 */	li r5, 0
/* 803A4518 003A1458  4B D6 0A ED */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A451C 003A145C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803A4520 003A1460  41 82 00 10 */	beq lbl_803A4530
/* 803A4524 003A1464  C0 22 10 4C */	lfs f1, lbl_8051F3AC@sda21(r2)
/* 803A4528 003A1468  7F C3 F3 78 */	mr r3, r30
/* 803A452C 003A146C  4B D6 0C FD */	bl setMotionFrame__Q24Game9EnemyBaseFf
lbl_803A4530:
/* 803A4530 003A1470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4534 003A1474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A4538 003A1478  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A453C 003A147C  7C 08 03 A6 */	mtlr r0
/* 803A4540 003A1480  38 21 00 10 */	addi r1, r1, 0x10
/* 803A4544 003A1484  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBase
exec__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBase:
/* 803A4548 003A1488  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803A454C 003A148C  7C 08 02 A6 */	mflr r0
/* 803A4550 003A1490  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4554 003A1494  90 01 00 34 */	stw r0, 0x34(r1)
/* 803A4558 003A1498  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803A455C 003A149C  7C 9F 23 78 */	mr r31, r4
/* 803A4560 003A14A0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803A4564 003A14A4  7C 7E 1B 78 */	mr r30, r3
/* 803A4568 003A14A8  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 803A456C 003A14AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A4570 003A14B0  4C 40 13 82 */	cror 2, 0, 2
/* 803A4574 003A14B4  40 82 00 20 */	bne lbl_803A4594
/* 803A4578 003A14B8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A457C 003A14BC  38 A0 00 01 */	li r5, 1
/* 803A4580 003A14C0  38 C0 00 00 */	li r6, 0
/* 803A4584 003A14C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4588 003A14C8  7D 89 03 A6 */	mtctr r12
/* 803A458C 003A14CC  4E 80 04 21 */	bctrl 
/* 803A4590 003A14D0  48 00 01 88 */	b lbl_803A4718
lbl_803A4594:
/* 803A4594 003A14D4  7F E3 FB 78 */	mr r3, r31
/* 803A4598 003A14D8  48 00 61 45 */	bl isTyreDead__Q34Game8BlackMan3ObjFv
/* 803A459C 003A14DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A45A0 003A14E0  41 82 00 28 */	beq lbl_803A45C8
/* 803A45A4 003A14E4  7F C3 F3 78 */	mr r3, r30
/* 803A45A8 003A14E8  7F E4 FB 78 */	mr r4, r31
/* 803A45AC 003A14EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A45B0 003A14F0  38 A0 00 04 */	li r5, 4
/* 803A45B4 003A14F4  38 C0 00 00 */	li r6, 0
/* 803A45B8 003A14F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A45BC 003A14FC  7D 89 03 A6 */	mtctr r12
/* 803A45C0 003A1500  4E 80 04 21 */	bctrl 
/* 803A45C4 003A1504  48 00 01 54 */	b lbl_803A4718
lbl_803A45C8:
/* 803A45C8 003A1508  7F E3 FB 78 */	mr r3, r31
/* 803A45CC 003A150C  38 80 00 00 */	li r4, 0
/* 803A45D0 003A1510  4B D7 00 89 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803A45D4 003A1514  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A45D8 003A1518  41 82 00 30 */	beq lbl_803A4608
/* 803A45DC 003A151C  38 00 00 03 */	li r0, 3
/* 803A45E0 003A1520  7F C3 F3 78 */	mr r3, r30
/* 803A45E4 003A1524  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 803A45E8 003A1528  7F E4 FB 78 */	mr r4, r31
/* 803A45EC 003A152C  38 A0 00 06 */	li r5, 6
/* 803A45F0 003A1530  38 C0 00 00 */	li r6, 0
/* 803A45F4 003A1534  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A45F8 003A1538  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A45FC 003A153C  7D 89 03 A6 */	mtctr r12
/* 803A4600 003A1540  4E 80 04 21 */	bctrl 
/* 803A4604 003A1544  48 00 01 14 */	b lbl_803A4718
lbl_803A4608:
/* 803A4608 003A1548  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A460C 003A154C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A4610 003A1550  28 00 00 00 */	cmplwi r0, 0
/* 803A4614 003A1554  41 82 00 DC */	beq lbl_803A46F0
/* 803A4618 003A1558  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A461C 003A155C  28 00 00 02 */	cmplwi r0, 2
/* 803A4620 003A1560  40 82 00 68 */	bne lbl_803A4688
/* 803A4624 003A1564  7F E3 FB 78 */	mr r3, r31
/* 803A4628 003A1568  48 00 69 6D */	bl bendEffect__Q34Game8BlackMan3ObjFv
/* 803A462C 003A156C  7F E4 FB 78 */	mr r4, r31
/* 803A4630 003A1570  38 61 00 08 */	addi r3, r1, 8
/* 803A4634 003A1574  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A4638 003A1578  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A463C 003A157C  7D 89 03 A6 */	mtctr r12
/* 803A4640 003A1580  4E 80 04 21 */	bctrl 
/* 803A4644 003A1584  C0 41 00 08 */	lfs f2, 8(r1)
/* 803A4648 003A1588  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A464C 003A158C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803A4650 003A1590  38 80 00 0C */	li r4, 0xc
/* 803A4654 003A1594  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803A4658 003A1598  38 C0 00 02 */	li r6, 2
/* 803A465C 003A159C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803A4660 003A15A0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A4664 003A15A4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803A4668 003A15A8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803A466C 003A15AC  4B EA DB D1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A4670 003A15B0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A4674 003A15B4  38 A1 00 14 */	addi r5, r1, 0x14
/* 803A4678 003A15B8  38 80 00 0E */	li r4, 0xe
/* 803A467C 003A15BC  38 C0 00 02 */	li r6, 2
/* 803A4680 003A15C0  4B EA F1 01 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A4684 003A15C4  48 00 00 94 */	b lbl_803A4718
lbl_803A4688:
/* 803A4688 003A15C8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A468C 003A15CC  40 82 00 8C */	bne lbl_803A4718
/* 803A4690 003A15D0  7F E3 FB 78 */	mr r3, r31
/* 803A4694 003A15D4  48 00 63 E1 */	bl collisionStOff__Q34Game8BlackMan3ObjFv
/* 803A4698 003A15D8  7F E3 FB 78 */	mr r3, r31
/* 803A469C 003A15DC  48 00 60 41 */	bl isTyreDead__Q34Game8BlackMan3ObjFv
/* 803A46A0 003A15E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A46A4 003A15E4  41 82 00 28 */	beq lbl_803A46CC
/* 803A46A8 003A15E8  7F C3 F3 78 */	mr r3, r30
/* 803A46AC 003A15EC  7F E4 FB 78 */	mr r4, r31
/* 803A46B0 003A15F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A46B4 003A15F4  38 A0 00 04 */	li r5, 4
/* 803A46B8 003A15F8  38 C0 00 00 */	li r6, 0
/* 803A46BC 003A15FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A46C0 003A1600  7D 89 03 A6 */	mtctr r12
/* 803A46C4 003A1604  4E 80 04 21 */	bctrl 
/* 803A46C8 003A1608  48 00 00 50 */	b lbl_803A4718
lbl_803A46CC:
/* 803A46CC 003A160C  7F C3 F3 78 */	mr r3, r30
/* 803A46D0 003A1610  7F E4 FB 78 */	mr r4, r31
/* 803A46D4 003A1614  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A46D8 003A1618  38 A0 00 07 */	li r5, 7
/* 803A46DC 003A161C  38 C0 00 00 */	li r6, 0
/* 803A46E0 003A1620  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A46E4 003A1624  7D 89 03 A6 */	mtctr r12
/* 803A46E8 003A1628  4E 80 04 21 */	bctrl 
/* 803A46EC 003A162C  48 00 00 2C */	b lbl_803A4718
lbl_803A46F0:
/* 803A46F0 003A1630  80 7F 02 CC */	lwz r3, 0x2cc(r31)
/* 803A46F4 003A1634  38 03 00 01 */	addi r0, r3, 1
/* 803A46F8 003A1638  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 803A46FC 003A163C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A4700 003A1640  80 9F 02 CC */	lwz r4, 0x2cc(r31)
/* 803A4704 003A1644  80 03 09 84 */	lwz r0, 0x984(r3)
/* 803A4708 003A1648  7C 04 00 00 */	cmpw r4, r0
/* 803A470C 003A164C  40 81 00 0C */	ble lbl_803A4718
/* 803A4710 003A1650  7F E3 FB 78 */	mr r3, r31
/* 803A4714 003A1654  4B D6 0B 8D */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_803A4718:
/* 803A4718 003A1658  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A471C 003A165C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803A4720 003A1660  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803A4724 003A1664  7C 08 03 A6 */	mtlr r0
/* 803A4728 003A1668  38 21 00 30 */	addi r1, r1, 0x30
/* 803A472C 003A166C  4E 80 00 20 */	blr 

.global cleanup__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBase
cleanup__Q34Game8BlackMan9StateBendFPQ24Game9EnemyBase:
/* 803A4730 003A1670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4734 003A1674  7C 08 02 A6 */	mflr r0
/* 803A4738 003A1678  7C 83 23 78 */	mr r3, r4
/* 803A473C 003A167C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A4740 003A1680  48 00 63 35 */	bl collisionStOff__Q34Game8BlackMan3ObjFv
/* 803A4744 003A1684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4748 003A1688  7C 08 03 A6 */	mtlr r0
/* 803A474C 003A168C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A4750 003A1690  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan11StateEscapeFi
__ct__Q34Game8BlackMan11StateEscapeFi:
/* 803A4754 003A1694  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A4758 003A1698  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A475C 003A169C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A4760 003A16A0  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan11StateEscape@ha
/* 803A4764 003A16A4  90 03 00 00 */	stw r0, 0(r3)
/* 803A4768 003A16A8  38 E0 00 00 */	li r7, 0
/* 803A476C 003A16AC  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A4770 003A16B0  38 A5 5A EC */	addi r5, r5, __vt__Q34Game8BlackMan11StateEscape@l
/* 803A4774 003A16B4  90 83 00 04 */	stw r4, 4(r3)
/* 803A4778 003A16B8  38 02 10 50 */	addi r0, r2, lbl_8051F3B0@sda21
/* 803A477C 003A16BC  90 E3 00 08 */	stw r7, 8(r3)
/* 803A4780 003A16C0  90 C3 00 00 */	stw r6, 0(r3)
/* 803A4784 003A16C4  90 A3 00 00 */	stw r5, 0(r3)
/* 803A4788 003A16C8  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A478C 003A16CC  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan11StateEscapeFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan11StateEscapeFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A4790 003A16D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4794 003A16D4  7C 08 02 A6 */	mflr r0
/* 803A4798 003A16D8  38 A0 00 00 */	li r5, 0
/* 803A479C 003A16DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A47A0 003A16E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A47A4 003A16E4  7C 9F 23 78 */	mr r31, r4
/* 803A47A8 003A16E8  38 80 00 05 */	li r4, 5
/* 803A47AC 003A16EC  7F E3 FB 78 */	mr r3, r31
/* 803A47B0 003A16F0  4B D6 08 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A47B4 003A16F4  7F E3 FB 78 */	mr r3, r31
/* 803A47B8 003A16F8  48 00 62 09 */	bl escape__Q34Game8BlackMan3ObjFv
/* 803A47BC 003A16FC  7F E3 FB 78 */	mr r3, r31
/* 803A47C0 003A1700  48 00 62 B5 */	bl collisionStOff__Q34Game8BlackMan3ObjFv
/* 803A47C4 003A1704  83 FF 02 8C */	lwz r31, 0x28c(r31)
/* 803A47C8 003A1708  7F E3 FB 78 */	mr r3, r31
/* 803A47CC 003A170C  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A47D0 003A1710  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A47D4 003A1714  7D 89 03 A6 */	mtctr r12
/* 803A47D8 003A1718  4E 80 04 21 */	bctrl 
/* 803A47DC 003A171C  2C 03 00 06 */	cmpwi r3, 6
/* 803A47E0 003A1720  41 82 00 20 */	beq lbl_803A4800
/* 803A47E4 003A1724  3C 60 80 49 */	lis r3, lbl_80495230@ha
/* 803A47E8 003A1728  3C A0 80 49 */	lis r5, lbl_80495248@ha
/* 803A47EC 003A172C  38 63 52 30 */	addi r3, r3, lbl_80495230@l
/* 803A47F0 003A1730  38 80 04 5A */	li r4, 0x45a
/* 803A47F4 003A1734  38 A5 52 48 */	addi r5, r5, lbl_80495248@l
/* 803A47F8 003A1738  4C C6 31 82 */	crclr 6
/* 803A47FC 003A173C  4B C8 5E 45 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A4800:
/* 803A4800 003A1740  28 1F 00 00 */	cmplwi r31, 0
/* 803A4804 003A1744  41 82 00 28 */	beq lbl_803A482C
/* 803A4808 003A1748  88 1F 00 FC */	lbz r0, 0xfc(r31)
/* 803A480C 003A174C  28 00 00 00 */	cmplwi r0, 0
/* 803A4810 003A1750  41 82 00 1C */	beq lbl_803A482C
/* 803A4814 003A1754  7F E3 FB 78 */	mr r3, r31
/* 803A4818 003A1758  38 80 00 0B */	li r4, 0xb
/* 803A481C 003A175C  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A4820 003A1760  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 803A4824 003A1764  7D 89 03 A6 */	mtctr r12
/* 803A4828 003A1768  4E 80 04 21 */	bctrl 
lbl_803A482C:
/* 803A482C 003A176C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4830 003A1770  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A4834 003A1774  7C 08 03 A6 */	mtlr r0
/* 803A4838 003A1778  38 21 00 10 */	addi r1, r1, 0x10
/* 803A483C 003A177C  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan11StateEscapeFPQ24Game9EnemyBase
exec__Q34Game8BlackMan11StateEscapeFPQ24Game9EnemyBase:
/* 803A4840 003A1780  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803A4844 003A1784  7C 08 02 A6 */	mflr r0
/* 803A4848 003A1788  90 01 00 74 */	stw r0, 0x74(r1)
/* 803A484C 003A178C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803A4850 003A1790  7C 9F 23 78 */	mr r31, r4
/* 803A4854 003A1794  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 803A4858 003A1798  88 05 00 24 */	lbz r0, 0x24(r5)
/* 803A485C 003A179C  28 00 00 00 */	cmplwi r0, 0
/* 803A4860 003A17A0  41 82 02 80 */	beq lbl_803A4AE0
/* 803A4864 003A17A4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 803A4868 003A17A8  2C 00 00 05 */	cmpwi r0, 5
/* 803A486C 003A17AC  41 82 02 04 */	beq lbl_803A4A70
/* 803A4870 003A17B0  40 80 00 14 */	bge lbl_803A4884
/* 803A4874 003A17B4  2C 00 00 02 */	cmpwi r0, 2
/* 803A4878 003A17B8  41 82 00 18 */	beq lbl_803A4890
/* 803A487C 003A17BC  40 80 00 20 */	bge lbl_803A489C
/* 803A4880 003A17C0  48 00 02 60 */	b lbl_803A4AE0
lbl_803A4884:
/* 803A4884 003A17C4  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 803A4888 003A17C8  41 82 02 40 */	beq lbl_803A4AC8
/* 803A488C 003A17CC  48 00 02 54 */	b lbl_803A4AE0
lbl_803A4890:
/* 803A4890 003A17D0  7F E3 FB 78 */	mr r3, r31
/* 803A4894 003A17D4  48 00 62 79 */	bl flick__Q34Game8BlackMan3ObjFv
/* 803A4898 003A17D8  48 00 02 48 */	b lbl_803A4AE0
lbl_803A489C:
/* 803A489C 003A17DC  81 84 00 00 */	lwz r12, 0(r4)
/* 803A48A0 003A17E0  38 61 00 14 */	addi r3, r1, 0x14
/* 803A48A4 003A17E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A48A8 003A17E8  7D 89 03 A6 */	mtctr r12
/* 803A48AC 003A17EC  4E 80 04 21 */	bctrl 
/* 803A48B0 003A17F0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803A48B4 003A17F4  38 A1 00 20 */	addi r5, r1, 0x20
/* 803A48B8 003A17F8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803A48BC 003A17FC  38 80 00 11 */	li r4, 0x11
/* 803A48C0 003A1800  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803A48C4 003A1804  38 C0 00 02 */	li r6, 2
/* 803A48C8 003A1808  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 803A48CC 003A180C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A48D0 003A1810  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803A48D4 003A1814  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803A48D8 003A1818  4B EA D9 65 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A48DC 003A181C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A48E0 003A1820  38 A1 00 20 */	addi r5, r1, 0x20
/* 803A48E4 003A1824  38 80 00 10 */	li r4, 0x10
/* 803A48E8 003A1828  38 C0 00 02 */	li r6, 2
/* 803A48EC 003A182C  4B EA EE 95 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A48F0 003A1830  7F E3 FB 78 */	mr r3, r31
/* 803A48F4 003A1834  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A48F8 003A1838  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803A48FC 003A183C  7D 89 03 A6 */	mtctr r12
/* 803A4900 003A1840  4E 80 04 21 */	bctrl 
/* 803A4904 003A1844  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4908 003A1848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A490C 003A184C  40 80 00 30 */	bge lbl_803A493C
/* 803A4910 003A1850  C0 02 10 30 */	lfs f0, lbl_8051F390@sda21(r2)
/* 803A4914 003A1854  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A4918 003A1858  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A491C 003A185C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A4920 003A1860  FC 00 00 1E */	fctiwz f0, f0
/* 803A4924 003A1864  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803A4928 003A1868  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803A492C 003A186C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A4930 003A1870  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A4934 003A1874  FC A0 00 50 */	fneg f5, f0
/* 803A4938 003A1878  48 00 00 28 */	b lbl_803A4960
lbl_803A493C:
/* 803A493C 003A187C  C0 02 10 34 */	lfs f0, lbl_8051F394@sda21(r2)
/* 803A4940 003A1880  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A4944 003A1884  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A4948 003A1888  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A494C 003A188C  FC 00 00 1E */	fctiwz f0, f0
/* 803A4950 003A1890  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 803A4954 003A1894  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 803A4958 003A1898  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A495C 003A189C  7C A3 04 2E */	lfsx f5, r3, r0
lbl_803A4960:
/* 803A4960 003A18A0  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4964 003A18A4  FC 60 08 90 */	fmr f3, f1
/* 803A4968 003A18A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A496C 003A18AC  40 80 00 08 */	bge lbl_803A4974
/* 803A4970 003A18B0  FC 60 08 50 */	fneg f3, f1
lbl_803A4974:
/* 803A4974 003A18B4  C0 42 10 34 */	lfs f2, lbl_8051F394@sda21(r2)
/* 803A4978 003A18B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A497C 003A18BC  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A4980 003A18C0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A4984 003A18C4  EC 83 00 B2 */	fmuls f4, f3, f2
/* 803A4988 003A18C8  38 63 00 04 */	addi r3, r3, 4
/* 803A498C 003A18CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A4990 003A18D0  C0 42 10 5C */	lfs f2, lbl_8051F3BC@sda21(r2)
/* 803A4994 003A18D4  C0 62 10 58 */	lfs f3, lbl_8051F3B8@sda21(r2)
/* 803A4998 003A18D8  FC E0 08 90 */	fmr f7, f1
/* 803A499C 003A18DC  FC 00 20 1E */	fctiwz f0, f4
/* 803A49A0 003A18E0  C0 81 00 20 */	lfs f4, 0x20(r1)
/* 803A49A4 003A18E4  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803A49A8 003A18E8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803A49AC 003A18EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A49B0 003A18F0  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A49B4 003A18F4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803A49B8 003A18F8  EC 03 01 78 */	fmsubs f0, f3, f5, f0
/* 803A49BC 003A18FC  EC 04 00 2A */	fadds f0, f4, f0
/* 803A49C0 003A1900  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803A49C4 003A1904  40 80 00 08 */	bge lbl_803A49CC
/* 803A49C8 003A1908  FC E0 08 50 */	fneg f7, f1
lbl_803A49CC:
/* 803A49CC 003A190C  C0 C2 10 34 */	lfs f6, lbl_8051F394@sda21(r2)
/* 803A49D0 003A1910  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A49D4 003A1914  EC A7 01 B2 */	fmuls f5, f7, f6
/* 803A49D8 003A1918  C0 81 00 28 */	lfs f4, 0x28(r1)
/* 803A49DC 003A191C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A49E0 003A1920  C0 62 10 58 */	lfs f3, lbl_8051F3B8@sda21(r2)
/* 803A49E4 003A1924  C0 42 10 5C */	lfs f2, lbl_8051F3BC@sda21(r2)
/* 803A49E8 003A1928  FC 00 28 1E */	fctiwz f0, f5
/* 803A49EC 003A192C  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 803A49F0 003A1930  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 803A49F4 003A1934  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A49F8 003A1938  7C A3 04 2E */	lfsx f5, r3, r0
/* 803A49FC 003A193C  40 80 00 30 */	bge lbl_803A4A2C
/* 803A4A00 003A1940  C0 02 10 30 */	lfs f0, lbl_8051F390@sda21(r2)
/* 803A4A04 003A1944  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A4A08 003A1948  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A4A0C 003A194C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A4A10 003A1950  FC 00 00 1E */	fctiwz f0, f0
/* 803A4A14 003A1954  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 803A4A18 003A1958  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803A4A1C 003A195C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A4A20 003A1960  7C 03 04 2E */	lfsx f0, r3, r0
/* 803A4A24 003A1964  FC 00 00 50 */	fneg f0, f0
/* 803A4A28 003A1968  48 00 00 24 */	b lbl_803A4A4C
lbl_803A4A2C:
/* 803A4A2C 003A196C  EC 01 01 B2 */	fmuls f0, f1, f6
/* 803A4A30 003A1970  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803A4A34 003A1974  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803A4A38 003A1978  FC 00 00 1E */	fctiwz f0, f0
/* 803A4A3C 003A197C  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 803A4A40 003A1980  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 803A4A44 003A1984  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803A4A48 003A1988  7C 03 04 2E */	lfsx f0, r3, r0
lbl_803A4A4C:
/* 803A4A4C 003A198C  EC 02 00 32 */	fmuls f0, f2, f0
/* 803A4A50 003A1990  C0 22 10 60 */	lfs f1, lbl_8051F3C0@sda21(r2)
/* 803A4A54 003A1994  7F E3 FB 78 */	mr r3, r31
/* 803A4A58 003A1998  38 81 00 20 */	addi r4, r1, 0x20
/* 803A4A5C 003A199C  EC 03 01 78 */	fmsubs f0, f3, f5, f0
/* 803A4A60 003A19A0  EC 04 00 2A */	fadds f0, f4, f0
/* 803A4A64 003A19A4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803A4A68 003A19A8  4B D5 F0 E9 */	bl "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
/* 803A4A6C 003A19AC  48 00 00 74 */	b lbl_803A4AE0
lbl_803A4A70:
/* 803A4A70 003A19B0  81 84 00 00 */	lwz r12, 0(r4)
/* 803A4A74 003A19B4  38 61 00 08 */	addi r3, r1, 8
/* 803A4A78 003A19B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A4A7C 003A19BC  7D 89 03 A6 */	mtctr r12
/* 803A4A80 003A19C0  4E 80 04 21 */	bctrl 
/* 803A4A84 003A19C4  C0 41 00 08 */	lfs f2, 8(r1)
/* 803A4A88 003A19C8  38 A1 00 20 */	addi r5, r1, 0x20
/* 803A4A8C 003A19CC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803A4A90 003A19D0  38 80 00 11 */	li r4, 0x11
/* 803A4A94 003A19D4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803A4A98 003A19D8  38 C0 00 02 */	li r6, 2
/* 803A4A9C 003A19DC  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 803A4AA0 003A19E0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A4AA4 003A19E4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803A4AA8 003A19E8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803A4AAC 003A19EC  4B EA D7 91 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A4AB0 003A19F0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A4AB4 003A19F4  38 A1 00 20 */	addi r5, r1, 0x20
/* 803A4AB8 003A19F8  38 80 00 10 */	li r4, 0x10
/* 803A4ABC 003A19FC  38 C0 00 02 */	li r6, 2
/* 803A4AC0 003A1A00  4B EA EC C1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A4AC4 003A1A04  48 00 00 1C */	b lbl_803A4AE0
lbl_803A4AC8:
/* 803A4AC8 003A1A08  81 83 00 00 */	lwz r12, 0(r3)
/* 803A4ACC 003A1A0C  38 A0 00 00 */	li r5, 0
/* 803A4AD0 003A1A10  38 C0 00 00 */	li r6, 0
/* 803A4AD4 003A1A14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4AD8 003A1A18  7D 89 03 A6 */	mtctr r12
/* 803A4ADC 003A1A1C  4E 80 04 21 */	bctrl 
lbl_803A4AE0:
/* 803A4AE0 003A1A20  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803A4AE4 003A1A24  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803A4AE8 003A1A28  7C 08 03 A6 */	mtlr r0
/* 803A4AEC 003A1A2C  38 21 00 70 */	addi r1, r1, 0x70
/* 803A4AF0 003A1A30  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan9StateFallFi
__ct__Q34Game8BlackMan9StateFallFi:
/* 803A4AF4 003A1A34  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A4AF8 003A1A38  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A4AFC 003A1A3C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A4B00 003A1A40  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan9StateFall@ha
/* 803A4B04 003A1A44  90 03 00 00 */	stw r0, 0(r3)
/* 803A4B08 003A1A48  38 E0 00 00 */	li r7, 0
/* 803A4B0C 003A1A4C  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A4B10 003A1A50  38 A5 5A C8 */	addi r5, r5, __vt__Q34Game8BlackMan9StateFall@l
/* 803A4B14 003A1A54  90 83 00 04 */	stw r4, 4(r3)
/* 803A4B18 003A1A58  38 02 10 64 */	addi r0, r2, lbl_8051F3C4@sda21
/* 803A4B1C 003A1A5C  90 E3 00 08 */	stw r7, 8(r3)
/* 803A4B20 003A1A60  90 C3 00 00 */	stw r6, 0(r3)
/* 803A4B24 003A1A64  90 A3 00 00 */	stw r5, 0(r3)
/* 803A4B28 003A1A68  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A4B2C 003A1A6C  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A4B30 003A1A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4B34 003A1A74  7C 08 02 A6 */	mflr r0
/* 803A4B38 003A1A78  38 A0 00 00 */	li r5, 0
/* 803A4B3C 003A1A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A4B40 003A1A80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A4B44 003A1A84  7C 9F 23 78 */	mr r31, r4
/* 803A4B48 003A1A88  38 80 00 0D */	li r4, 0xd
/* 803A4B4C 003A1A8C  7F E3 FB 78 */	mr r3, r31
/* 803A4B50 003A1A90  4B D6 04 B5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A4B54 003A1A94  7F E3 FB 78 */	mr r3, r31
/* 803A4B58 003A1A98  4B D6 2C 25 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 803A4B5C 003A1A9C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803A4B60 003A1AA0  64 00 00 20 */	oris r0, r0, 0x20
/* 803A4B64 003A1AA4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803A4B68 003A1AA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A4B6C 003A1AAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4B70 003A1AB0  7C 08 03 A6 */	mtlr r0
/* 803A4B74 003A1AB4  38 21 00 10 */	addi r1, r1, 0x10
/* 803A4B78 003A1AB8  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan9StateFallFPQ24Game9EnemyBase
exec__Q34Game8BlackMan9StateFallFPQ24Game9EnemyBase:
/* 803A4B7C 003A1ABC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803A4B80 003A1AC0  7C 08 02 A6 */	mflr r0
/* 803A4B84 003A1AC4  90 01 00 54 */	stw r0, 0x54(r1)
/* 803A4B88 003A1AC8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803A4B8C 003A1ACC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803A4B90 003A1AD0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803A4B94 003A1AD4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803A4B98 003A1AD8  7C 9F 23 78 */	mr r31, r4
/* 803A4B9C 003A1ADC  7C 7E 1B 78 */	mr r30, r3
/* 803A4BA0 003A1AE0  80 64 01 88 */	lwz r3, 0x188(r4)
/* 803A4BA4 003A1AE4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A4BA8 003A1AE8  28 00 00 00 */	cmplwi r0, 0
/* 803A4BAC 003A1AEC  41 82 00 B8 */	beq lbl_803A4C64
/* 803A4BB0 003A1AF0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A4BB4 003A1AF4  28 00 00 02 */	cmplwi r0, 2
/* 803A4BB8 003A1AF8  40 82 00 68 */	bne lbl_803A4C20
/* 803A4BBC 003A1AFC  7F E3 FB 78 */	mr r3, r31
/* 803A4BC0 003A1B00  48 00 66 81 */	bl appearFanfare__Q34Game8BlackMan3ObjFv
/* 803A4BC4 003A1B04  7F E4 FB 78 */	mr r4, r31
/* 803A4BC8 003A1B08  38 61 00 14 */	addi r3, r1, 0x14
/* 803A4BCC 003A1B0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A4BD0 003A1B10  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A4BD4 003A1B14  7D 89 03 A6 */	mtctr r12
/* 803A4BD8 003A1B18  4E 80 04 21 */	bctrl 
/* 803A4BDC 003A1B1C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803A4BE0 003A1B20  38 A1 00 2C */	addi r5, r1, 0x2c
/* 803A4BE4 003A1B24  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803A4BE8 003A1B28  38 80 00 11 */	li r4, 0x11
/* 803A4BEC 003A1B2C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803A4BF0 003A1B30  38 C0 00 02 */	li r6, 2
/* 803A4BF4 003A1B34  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 803A4BF8 003A1B38  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803A4BFC 003A1B3C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 803A4C00 003A1B40  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803A4C04 003A1B44  4B EA D6 39 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803A4C08 003A1B48  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803A4C0C 003A1B4C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 803A4C10 003A1B50  38 80 00 0E */	li r4, 0xe
/* 803A4C14 003A1B54  38 C0 00 02 */	li r6, 2
/* 803A4C18 003A1B58  4B EA EB 69 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803A4C1C 003A1B5C  48 00 00 48 */	b lbl_803A4C64
lbl_803A4C20:
/* 803A4C20 003A1B60  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A4C24 003A1B64  40 82 00 40 */	bne lbl_803A4C64
/* 803A4C28 003A1B68  7F E3 FB 78 */	mr r3, r31
/* 803A4C2C 003A1B6C  48 00 5B 4D */	bl isFallEnd__Q34Game8BlackMan3ObjFv
/* 803A4C30 003A1B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A4C34 003A1B74  41 82 00 30 */	beq lbl_803A4C64
/* 803A4C38 003A1B78  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803A4C3C 003A1B7C  7F C3 F3 78 */	mr r3, r30
/* 803A4C40 003A1B80  7F E4 FB 78 */	mr r4, r31
/* 803A4C44 003A1B84  38 A0 00 07 */	li r5, 7
/* 803A4C48 003A1B88  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 803A4C4C 003A1B8C  38 C0 00 00 */	li r6, 0
/* 803A4C50 003A1B90  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803A4C54 003A1B94  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A4C58 003A1B98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4C5C 003A1B9C  7D 89 03 A6 */	mtctr r12
/* 803A4C60 003A1BA0  4E 80 04 21 */	bctrl 
lbl_803A4C64:
/* 803A4C64 003A1BA4  7F E4 FB 78 */	mr r4, r31
/* 803A4C68 003A1BA8  38 61 00 08 */	addi r3, r1, 8
/* 803A4C6C 003A1BAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803A4C70 003A1BB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803A4C74 003A1BB4  7D 89 03 A6 */	mtctr r12
/* 803A4C78 003A1BB8  4E 80 04 21 */	bctrl 
/* 803A4C7C 003A1BBC  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 803A4C80 003A1BC0  38 81 00 20 */	addi r4, r1, 0x20
/* 803A4C84 003A1BC4  C0 02 10 6C */	lfs f0, lbl_8051F3CC@sda21(r2)
/* 803A4C88 003A1BC8  C0 41 00 08 */	lfs f2, 8(r1)
/* 803A4C8C 003A1BCC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803A4C90 003A1BD0  EC 1F 00 2A */	fadds f0, f31, f0
/* 803A4C94 003A1BD4  D3 E1 00 24 */	stfs f31, 0x24(r1)
/* 803A4C98 003A1BD8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803A4C9C 003A1BDC  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 803A4CA0 003A1BE0  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 803A4CA4 003A1BE4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803A4CA8 003A1BE8  81 83 00 04 */	lwz r12, 4(r3)
/* 803A4CAC 003A1BEC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803A4CB0 003A1BF0  7D 89 03 A6 */	mtctr r12
/* 803A4CB4 003A1BF4  4E 80 04 21 */	bctrl 
/* 803A4CB8 003A1BF8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A4CBC 003A1BFC  C0 03 0A 48 */	lfs f0, 0xa48(r3)
/* 803A4CC0 003A1C00  EC 00 08 2A */	fadds f0, f0, f1
/* 803A4CC4 003A1C04  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803A4CC8 003A1C08  40 80 00 0C */	bge lbl_803A4CD4
/* 803A4CCC 003A1C0C  7F E3 FB 78 */	mr r3, r31
/* 803A4CD0 003A1C10  4B D6 05 D1 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_803A4CD4:
/* 803A4CD4 003A1C14  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803A4CD8 003A1C18  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803A4CDC 003A1C1C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803A4CE0 003A1C20  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803A4CE4 003A1C24  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803A4CE8 003A1C28  7C 08 03 A6 */	mtlr r0
/* 803A4CEC 003A1C2C  38 21 00 50 */	addi r1, r1, 0x50
/* 803A4CF0 003A1C30  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan12StateRecoverFi
__ct__Q34Game8BlackMan12StateRecoverFi:
/* 803A4CF4 003A1C34  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A4CF8 003A1C38  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A4CFC 003A1C3C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A4D00 003A1C40  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan12StateRecover@ha
/* 803A4D04 003A1C44  90 03 00 00 */	stw r0, 0(r3)
/* 803A4D08 003A1C48  38 E0 00 00 */	li r7, 0
/* 803A4D0C 003A1C4C  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A4D10 003A1C50  38 A5 5A A4 */	addi r5, r5, __vt__Q34Game8BlackMan12StateRecover@l
/* 803A4D14 003A1C54  90 83 00 04 */	stw r4, 4(r3)
/* 803A4D18 003A1C58  38 02 10 70 */	addi r0, r2, lbl_8051F3D0@sda21
/* 803A4D1C 003A1C5C  90 E3 00 08 */	stw r7, 8(r3)
/* 803A4D20 003A1C60  90 C3 00 00 */	stw r6, 0(r3)
/* 803A4D24 003A1C64  90 A3 00 00 */	stw r5, 0(r3)
/* 803A4D28 003A1C68  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A4D2C 003A1C6C  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan12StateRecoverFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan12StateRecoverFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A4D30 003A1C70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4D34 003A1C74  7C 08 02 A6 */	mflr r0
/* 803A4D38 003A1C78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A4D3C 003A1C7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A4D40 003A1C80  93 C1 00 08 */	stw r30, 8(r1)
/* 803A4D44 003A1C84  7C 9E 23 78 */	mr r30, r4
/* 803A4D48 003A1C88  7F C3 F3 78 */	mr r3, r30
/* 803A4D4C 003A1C8C  4B D6 25 FD */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803A4D50 003A1C90  2C 03 00 0D */	cmpwi r3, 0xd
/* 803A4D54 003A1C94  41 82 00 6C */	beq lbl_803A4DC0
/* 803A4D58 003A1C98  83 FE 02 8C */	lwz r31, 0x28c(r30)
/* 803A4D5C 003A1C9C  7F E3 FB 78 */	mr r3, r31
/* 803A4D60 003A1CA0  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A4D64 003A1CA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4D68 003A1CA8  7D 89 03 A6 */	mtctr r12
/* 803A4D6C 003A1CAC  4E 80 04 21 */	bctrl 
/* 803A4D70 003A1CB0  2C 03 00 06 */	cmpwi r3, 6
/* 803A4D74 003A1CB4  41 82 00 20 */	beq lbl_803A4D94
/* 803A4D78 003A1CB8  3C 60 80 49 */	lis r3, lbl_80495230@ha
/* 803A4D7C 003A1CBC  3C A0 80 49 */	lis r5, lbl_80495248@ha
/* 803A4D80 003A1CC0  38 63 52 30 */	addi r3, r3, lbl_80495230@l
/* 803A4D84 003A1CC4  38 80 04 5A */	li r4, 0x45a
/* 803A4D88 003A1CC8  38 A5 52 48 */	addi r5, r5, lbl_80495248@l
/* 803A4D8C 003A1CCC  4C C6 31 82 */	crclr 6
/* 803A4D90 003A1CD0  4B C8 58 B1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A4D94:
/* 803A4D94 003A1CD4  28 1F 00 00 */	cmplwi r31, 0
/* 803A4D98 003A1CD8  41 82 00 28 */	beq lbl_803A4DC0
/* 803A4D9C 003A1CDC  88 1F 00 FC */	lbz r0, 0xfc(r31)
/* 803A4DA0 003A1CE0  28 00 00 00 */	cmplwi r0, 0
/* 803A4DA4 003A1CE4  41 82 00 1C */	beq lbl_803A4DC0
/* 803A4DA8 003A1CE8  7F E3 FB 78 */	mr r3, r31
/* 803A4DAC 003A1CEC  38 80 00 03 */	li r4, 3
/* 803A4DB0 003A1CF0  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A4DB4 003A1CF4  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 803A4DB8 003A1CF8  7D 89 03 A6 */	mtctr r12
/* 803A4DBC 003A1CFC  4E 80 04 21 */	bctrl 
lbl_803A4DC0:
/* 803A4DC0 003A1D00  7F C3 F3 78 */	mr r3, r30
/* 803A4DC4 003A1D04  38 80 00 07 */	li r4, 7
/* 803A4DC8 003A1D08  38 A0 00 00 */	li r5, 0
/* 803A4DCC 003A1D0C  4B D6 02 39 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A4DD0 003A1D10  7F C3 F3 78 */	mr r3, r30
/* 803A4DD4 003A1D14  48 00 5E D5 */	bl recoverFlick__Q34Game8BlackMan3ObjFv
/* 803A4DD8 003A1D18  7F C3 F3 78 */	mr r3, r30
/* 803A4DDC 003A1D1C  48 00 60 F5 */	bl tyreUpEffect__Q34Game8BlackMan3ObjFv
/* 803A4DE0 003A1D20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4DE4 003A1D24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A4DE8 003A1D28  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A4DEC 003A1D2C  7C 08 03 A6 */	mtlr r0
/* 803A4DF0 003A1D30  38 21 00 10 */	addi r1, r1, 0x10
/* 803A4DF4 003A1D34  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan12StateRecoverFPQ24Game9EnemyBase
exec__Q34Game8BlackMan12StateRecoverFPQ24Game9EnemyBase:
/* 803A4DF8 003A1D38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4DFC 003A1D3C  7C 08 02 A6 */	mflr r0
/* 803A4E00 003A1D40  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A4E04 003A1D44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A4E08 003A1D48  7C 9F 23 78 */	mr r31, r4
/* 803A4E0C 003A1D4C  93 C1 00 08 */	stw r30, 8(r1)
/* 803A4E10 003A1D50  7C 7E 1B 78 */	mr r30, r3
/* 803A4E14 003A1D54  7F E3 FB 78 */	mr r3, r31
/* 803A4E18 003A1D58  48 00 5D 41 */	bl recover__Q34Game8BlackMan3ObjFv
/* 803A4E1C 003A1D5C  7F E3 FB 78 */	mr r3, r31
/* 803A4E20 003A1D60  48 00 58 BD */	bl isTyreDead__Q34Game8BlackMan3ObjFv
/* 803A4E24 003A1D64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A4E28 003A1D68  41 82 00 28 */	beq lbl_803A4E50
/* 803A4E2C 003A1D6C  7F C3 F3 78 */	mr r3, r30
/* 803A4E30 003A1D70  7F E4 FB 78 */	mr r4, r31
/* 803A4E34 003A1D74  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A4E38 003A1D78  38 A0 00 04 */	li r5, 4
/* 803A4E3C 003A1D7C  38 C0 00 00 */	li r6, 0
/* 803A4E40 003A1D80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4E44 003A1D84  7D 89 03 A6 */	mtctr r12
/* 803A4E48 003A1D88  4E 80 04 21 */	bctrl 
/* 803A4E4C 003A1D8C  48 00 01 00 */	b lbl_803A4F4C
lbl_803A4E50:
/* 803A4E50 003A1D90  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A4E54 003A1D94  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A4E58 003A1D98  28 00 00 00 */	cmplwi r0, 0
/* 803A4E5C 003A1D9C  41 82 00 F0 */	beq lbl_803A4F4C
/* 803A4E60 003A1DA0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A4E64 003A1DA4  2C 00 00 05 */	cmpwi r0, 5
/* 803A4E68 003A1DA8  41 82 00 58 */	beq lbl_803A4EC0
/* 803A4E6C 003A1DAC  40 80 00 1C */	bge lbl_803A4E88
/* 803A4E70 003A1DB0  2C 00 00 03 */	cmpwi r0, 3
/* 803A4E74 003A1DB4  41 82 00 2C */	beq lbl_803A4EA0
/* 803A4E78 003A1DB8  40 80 00 3C */	bge lbl_803A4EB4
/* 803A4E7C 003A1DBC  2C 00 00 02 */	cmpwi r0, 2
/* 803A4E80 003A1DC0  40 80 00 14 */	bge lbl_803A4E94
/* 803A4E84 003A1DC4  48 00 00 C8 */	b lbl_803A4F4C
lbl_803A4E88:
/* 803A4E88 003A1DC8  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 803A4E8C 003A1DCC  41 82 00 98 */	beq lbl_803A4F24
/* 803A4E90 003A1DD0  48 00 00 BC */	b lbl_803A4F4C
lbl_803A4E94:
/* 803A4E94 003A1DD4  7F E3 FB 78 */	mr r3, r31
/* 803A4E98 003A1DD8  48 00 5C 75 */	bl flick__Q34Game8BlackMan3ObjFv
/* 803A4E9C 003A1DDC  48 00 00 B0 */	b lbl_803A4F4C
lbl_803A4EA0:
/* 803A4EA0 003A1DE0  7F E3 FB 78 */	mr r3, r31
/* 803A4EA4 003A1DE4  48 00 5C 69 */	bl flick__Q34Game8BlackMan3ObjFv
/* 803A4EA8 003A1DE8  7F E3 FB 78 */	mr r3, r31
/* 803A4EAC 003A1DEC  48 00 5E F5 */	bl tyreFlick__Q34Game8BlackMan3ObjFv
/* 803A4EB0 003A1DF0  48 00 00 9C */	b lbl_803A4F4C
lbl_803A4EB4:
/* 803A4EB4 003A1DF4  7F E3 FB 78 */	mr r3, r31
/* 803A4EB8 003A1DF8  48 00 60 8D */	bl tyreDownEffect__Q34Game8BlackMan3ObjFv
/* 803A4EBC 003A1DFC  48 00 00 90 */	b lbl_803A4F4C
lbl_803A4EC0:
/* 803A4EC0 003A1E00  7F E3 FB 78 */	mr r3, r31
/* 803A4EC4 003A1E04  48 00 62 B9 */	bl isFinalFloor__Q34Game8BlackMan3ObjFv
/* 803A4EC8 003A1E08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A4ECC 003A1E0C  41 82 00 80 */	beq lbl_803A4F4C
/* 803A4ED0 003A1E10  83 FF 02 8C */	lwz r31, 0x28c(r31)
/* 803A4ED4 003A1E14  7F E3 FB 78 */	mr r3, r31
/* 803A4ED8 003A1E18  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A4EDC 003A1E1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4EE0 003A1E20  7D 89 03 A6 */	mtctr r12
/* 803A4EE4 003A1E24  4E 80 04 21 */	bctrl 
/* 803A4EE8 003A1E28  2C 03 00 06 */	cmpwi r3, 6
/* 803A4EEC 003A1E2C  41 82 00 20 */	beq lbl_803A4F0C
/* 803A4EF0 003A1E30  3C 60 80 49 */	lis r3, lbl_80495230@ha
/* 803A4EF4 003A1E34  3C A0 80 49 */	lis r5, lbl_80495248@ha
/* 803A4EF8 003A1E38  38 63 52 30 */	addi r3, r3, lbl_80495230@l
/* 803A4EFC 003A1E3C  38 80 04 5A */	li r4, 0x45a
/* 803A4F00 003A1E40  38 A5 52 48 */	addi r5, r5, lbl_80495248@l
/* 803A4F04 003A1E44  4C C6 31 82 */	crclr 6
/* 803A4F08 003A1E48  4B C8 57 39 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A4F0C:
/* 803A4F0C 003A1E4C  28 1F 00 00 */	cmplwi r31, 0
/* 803A4F10 003A1E50  41 82 00 3C */	beq lbl_803A4F4C
/* 803A4F14 003A1E54  7F E3 FB 78 */	mr r3, r31
/* 803A4F18 003A1E58  38 80 00 01 */	li r4, 1
/* 803A4F1C 003A1E5C  48 0B AA D5 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 803A4F20 003A1E60  48 00 00 2C */	b lbl_803A4F4C
lbl_803A4F24:
/* 803A4F24 003A1E64  7F E3 FB 78 */	mr r3, r31
/* 803A4F28 003A1E68  48 00 58 C5 */	bl moveRestart__Q34Game8BlackMan3ObjFv
/* 803A4F2C 003A1E6C  7F C3 F3 78 */	mr r3, r30
/* 803A4F30 003A1E70  7F E4 FB 78 */	mr r4, r31
/* 803A4F34 003A1E74  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A4F38 003A1E78  38 A0 00 00 */	li r5, 0
/* 803A4F3C 003A1E7C  38 C0 00 00 */	li r6, 0
/* 803A4F40 003A1E80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A4F44 003A1E84  7D 89 03 A6 */	mtctr r12
/* 803A4F48 003A1E88  4E 80 04 21 */	bctrl 
lbl_803A4F4C:
/* 803A4F4C 003A1E8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A4F50 003A1E90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A4F54 003A1E94  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A4F58 003A1E98  7C 08 03 A6 */	mtlr r0
/* 803A4F5C 003A1E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A4F60 003A1EA0  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan10StateFlickFi
__ct__Q34Game8BlackMan10StateFlickFi:
/* 803A4F64 003A1EA4  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A4F68 003A1EA8  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A4F6C 003A1EAC  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A4F70 003A1EB0  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan10StateFlick@ha
/* 803A4F74 003A1EB4  90 03 00 00 */	stw r0, 0(r3)
/* 803A4F78 003A1EB8  38 E0 00 00 */	li r7, 0
/* 803A4F7C 003A1EBC  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A4F80 003A1EC0  38 A5 5A 80 */	addi r5, r5, __vt__Q34Game8BlackMan10StateFlick@l
/* 803A4F84 003A1EC4  90 83 00 04 */	stw r4, 4(r3)
/* 803A4F88 003A1EC8  38 02 10 78 */	addi r0, r2, lbl_8051F3D8@sda21
/* 803A4F8C 003A1ECC  90 E3 00 08 */	stw r7, 8(r3)
/* 803A4F90 003A1ED0  90 C3 00 00 */	stw r6, 0(r3)
/* 803A4F94 003A1ED4  90 A3 00 00 */	stw r5, 0(r3)
/* 803A4F98 003A1ED8  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A4F9C 003A1EDC  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A4FA0 003A1EE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A4FA4 003A1EE4  7C 08 02 A6 */	mflr r0
/* 803A4FA8 003A1EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A4FAC 003A1EEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A4FB0 003A1EF0  93 C1 00 08 */	stw r30, 8(r1)
/* 803A4FB4 003A1EF4  7C 9E 23 78 */	mr r30, r4
/* 803A4FB8 003A1EF8  80 04 03 64 */	lwz r0, 0x364(r4)
/* 803A4FBC 003A1EFC  28 00 00 00 */	cmplwi r0, 0
/* 803A4FC0 003A1F00  41 82 00 10 */	beq lbl_803A4FD0
/* 803A4FC4 003A1F04  80 1E 02 E0 */	lwz r0, 0x2e0(r30)
/* 803A4FC8 003A1F08  2C 00 00 02 */	cmpwi r0, 2
/* 803A4FCC 003A1F0C  40 82 00 0C */	bne lbl_803A4FD8
lbl_803A4FD0:
/* 803A4FD0 003A1F10  38 00 00 00 */	li r0, 0
/* 803A4FD4 003A1F14  48 00 00 08 */	b lbl_803A4FDC
lbl_803A4FD8:
/* 803A4FD8 003A1F18  38 00 00 01 */	li r0, 1
lbl_803A4FDC:
/* 803A4FDC 003A1F1C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803A4FE0 003A1F20  41 82 00 80 */	beq lbl_803A5060
/* 803A4FE4 003A1F24  7F C3 F3 78 */	mr r3, r30
/* 803A4FE8 003A1F28  38 80 00 03 */	li r4, 3
/* 803A4FEC 003A1F2C  38 A0 00 00 */	li r5, 0
/* 803A4FF0 003A1F30  4B D6 00 15 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A4FF4 003A1F34  83 FE 02 8C */	lwz r31, 0x28c(r30)
/* 803A4FF8 003A1F38  7F E3 FB 78 */	mr r3, r31
/* 803A4FFC 003A1F3C  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A5000 003A1F40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A5004 003A1F44  7D 89 03 A6 */	mtctr r12
/* 803A5008 003A1F48  4E 80 04 21 */	bctrl 
/* 803A500C 003A1F4C  2C 03 00 06 */	cmpwi r3, 6
/* 803A5010 003A1F50  41 82 00 20 */	beq lbl_803A5030
/* 803A5014 003A1F54  3C 60 80 49 */	lis r3, lbl_80495230@ha
/* 803A5018 003A1F58  3C A0 80 49 */	lis r5, lbl_80495248@ha
/* 803A501C 003A1F5C  38 63 52 30 */	addi r3, r3, lbl_80495230@l
/* 803A5020 003A1F60  38 80 04 5A */	li r4, 0x45a
/* 803A5024 003A1F64  38 A5 52 48 */	addi r5, r5, lbl_80495248@l
/* 803A5028 003A1F68  4C C6 31 82 */	crclr 6
/* 803A502C 003A1F6C  4B C8 56 15 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A5030:
/* 803A5030 003A1F70  28 1F 00 00 */	cmplwi r31, 0
/* 803A5034 003A1F74  41 82 00 A4 */	beq lbl_803A50D8
/* 803A5038 003A1F78  88 1F 00 FC */	lbz r0, 0xfc(r31)
/* 803A503C 003A1F7C  28 00 00 00 */	cmplwi r0, 0
/* 803A5040 003A1F80  41 82 00 98 */	beq lbl_803A50D8
/* 803A5044 003A1F84  7F E3 FB 78 */	mr r3, r31
/* 803A5048 003A1F88  38 80 00 04 */	li r4, 4
/* 803A504C 003A1F8C  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A5050 003A1F90  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 803A5054 003A1F94  7D 89 03 A6 */	mtctr r12
/* 803A5058 003A1F98  4E 80 04 21 */	bctrl 
/* 803A505C 003A1F9C  48 00 00 7C */	b lbl_803A50D8
lbl_803A5060:
/* 803A5060 003A1FA0  7F C3 F3 78 */	mr r3, r30
/* 803A5064 003A1FA4  38 80 00 04 */	li r4, 4
/* 803A5068 003A1FA8  38 A0 00 00 */	li r5, 0
/* 803A506C 003A1FAC  4B D5 FF 99 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A5070 003A1FB0  83 FE 02 8C */	lwz r31, 0x28c(r30)
/* 803A5074 003A1FB4  7F E3 FB 78 */	mr r3, r31
/* 803A5078 003A1FB8  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A507C 003A1FBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A5080 003A1FC0  7D 89 03 A6 */	mtctr r12
/* 803A5084 003A1FC4  4E 80 04 21 */	bctrl 
/* 803A5088 003A1FC8  2C 03 00 06 */	cmpwi r3, 6
/* 803A508C 003A1FCC  41 82 00 20 */	beq lbl_803A50AC
/* 803A5090 003A1FD0  3C 60 80 49 */	lis r3, lbl_80495230@ha
/* 803A5094 003A1FD4  3C A0 80 49 */	lis r5, lbl_80495248@ha
/* 803A5098 003A1FD8  38 63 52 30 */	addi r3, r3, lbl_80495230@l
/* 803A509C 003A1FDC  38 80 04 5A */	li r4, 0x45a
/* 803A50A0 003A1FE0  38 A5 52 48 */	addi r5, r5, lbl_80495248@l
/* 803A50A4 003A1FE4  4C C6 31 82 */	crclr 6
/* 803A50A8 003A1FE8  4B C8 55 99 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A50AC:
/* 803A50AC 003A1FEC  28 1F 00 00 */	cmplwi r31, 0
/* 803A50B0 003A1FF0  41 82 00 28 */	beq lbl_803A50D8
/* 803A50B4 003A1FF4  88 1F 00 FC */	lbz r0, 0xfc(r31)
/* 803A50B8 003A1FF8  28 00 00 00 */	cmplwi r0, 0
/* 803A50BC 003A1FFC  41 82 00 1C */	beq lbl_803A50D8
/* 803A50C0 003A2000  7F E3 FB 78 */	mr r3, r31
/* 803A50C4 003A2004  38 80 00 0C */	li r4, 0xc
/* 803A50C8 003A2008  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 803A50CC 003A200C  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 803A50D0 003A2010  7D 89 03 A6 */	mtctr r12
/* 803A50D4 003A2014  4E 80 04 21 */	bctrl 
lbl_803A50D8:
/* 803A50D8 003A2018  7F C3 F3 78 */	mr r3, r30
/* 803A50DC 003A201C  48 00 5F F9 */	bl createFlickEffect__Q34Game8BlackMan3ObjFv
/* 803A50E0 003A2020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A50E4 003A2024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A50E8 003A2028  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A50EC 003A202C  7C 08 03 A6 */	mtlr r0
/* 803A50F0 003A2030  38 21 00 10 */	addi r1, r1, 0x10
/* 803A50F4 003A2034  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBase
exec__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBase:
/* 803A50F8 003A2038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A50FC 003A203C  7C 08 02 A6 */	mflr r0
/* 803A5100 003A2040  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5104 003A2044  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5108 003A2048  7C 9F 23 78 */	mr r31, r4
/* 803A510C 003A204C  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5110 003A2050  7C 7E 1B 78 */	mr r30, r3
/* 803A5114 003A2054  7F E3 FB 78 */	mr r3, r31
/* 803A5118 003A2058  48 00 55 C5 */	bl isTyreDead__Q34Game8BlackMan3ObjFv
/* 803A511C 003A205C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803A5120 003A2060  41 82 00 28 */	beq lbl_803A5148
/* 803A5124 003A2064  7F C3 F3 78 */	mr r3, r30
/* 803A5128 003A2068  7F E4 FB 78 */	mr r4, r31
/* 803A512C 003A206C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A5130 003A2070  38 A0 00 04 */	li r5, 4
/* 803A5134 003A2074  38 C0 00 00 */	li r6, 0
/* 803A5138 003A2078  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A513C 003A207C  7D 89 03 A6 */	mtctr r12
/* 803A5140 003A2080  4E 80 04 21 */	bctrl 
/* 803A5144 003A2084  48 00 00 54 */	b lbl_803A5198
lbl_803A5148:
/* 803A5148 003A2088  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803A514C 003A208C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A5150 003A2090  28 00 00 00 */	cmplwi r0, 0
/* 803A5154 003A2094  41 82 00 44 */	beq lbl_803A5198
/* 803A5158 003A2098  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A515C 003A209C  28 00 00 02 */	cmplwi r0, 2
/* 803A5160 003A20A0  40 82 00 10 */	bne lbl_803A5170
/* 803A5164 003A20A4  7F E3 FB 78 */	mr r3, r31
/* 803A5168 003A20A8  48 00 59 A5 */	bl flick__Q34Game8BlackMan3ObjFv
/* 803A516C 003A20AC  48 00 00 2C */	b lbl_803A5198
lbl_803A5170:
/* 803A5170 003A20B0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A5174 003A20B4  40 82 00 24 */	bne lbl_803A5198
/* 803A5178 003A20B8  7F C3 F3 78 */	mr r3, r30
/* 803A517C 003A20BC  7F E4 FB 78 */	mr r4, r31
/* 803A5180 003A20C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A5184 003A20C4  38 C0 00 00 */	li r6, 0
/* 803A5188 003A20C8  80 BF 02 DC */	lwz r5, 0x2dc(r31)
/* 803A518C 003A20CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A5190 003A20D0  7D 89 03 A6 */	mtctr r12
/* 803A5194 003A20D4  4E 80 04 21 */	bctrl 
lbl_803A5198:
/* 803A5198 003A20D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A519C 003A20DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A51A0 003A20E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A51A4 003A20E4  7C 08 03 A6 */	mtlr r0
/* 803A51A8 003A20E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A51AC 003A20EC  4E 80 00 20 */	blr 

.global cleanup__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBase
cleanup__Q34Game8BlackMan10StateFlickFPQ24Game9EnemyBase:
/* 803A51B0 003A20F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A51B4 003A20F4  7C 08 02 A6 */	mflr r0
/* 803A51B8 003A20F8  7C 83 23 78 */	mr r3, r4
/* 803A51BC 003A20FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A51C0 003A2100  48 00 5F 6D */	bl fadeFlickEffect__Q34Game8BlackMan3ObjFv
/* 803A51C4 003A2104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A51C8 003A2108  7C 08 03 A6 */	mtlr r0
/* 803A51CC 003A210C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A51D0 003A2110  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan10StateTiredFi
__ct__Q34Game8BlackMan10StateTiredFi:
/* 803A51D4 003A2114  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803A51D8 003A2118  3C C0 80 4E */	lis r6, __vt__Q34Game8BlackMan5State@ha
/* 803A51DC 003A211C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803A51E0 003A2120  3C A0 80 4E */	lis r5, __vt__Q34Game8BlackMan10StateTired@ha
/* 803A51E4 003A2124  90 03 00 00 */	stw r0, 0(r3)
/* 803A51E8 003A2128  38 E0 00 00 */	li r7, 0
/* 803A51EC 003A212C  38 C6 5B A0 */	addi r6, r6, __vt__Q34Game8BlackMan5State@l
/* 803A51F0 003A2130  38 A5 5A 5C */	addi r5, r5, __vt__Q34Game8BlackMan10StateTired@l
/* 803A51F4 003A2134  90 83 00 04 */	stw r4, 4(r3)
/* 803A51F8 003A2138  38 02 10 80 */	addi r0, r2, lbl_8051F3E0@sda21
/* 803A51FC 003A213C  90 E3 00 08 */	stw r7, 8(r3)
/* 803A5200 003A2140  90 C3 00 00 */	stw r6, 0(r3)
/* 803A5204 003A2144  90 A3 00 00 */	stw r5, 0(r3)
/* 803A5208 003A2148  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A520C 003A214C  4E 80 00 20 */	blr 

.global init__Q34Game8BlackMan10StateTiredFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8BlackMan10StateTiredFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803A5210 003A2150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5214 003A2154  7C 08 02 A6 */	mflr r0
/* 803A5218 003A2158  38 A0 00 00 */	li r5, 0
/* 803A521C 003A215C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5220 003A2160  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5224 003A2164  7C 9F 23 78 */	mr r31, r4
/* 803A5228 003A2168  38 80 00 0A */	li r4, 0xa
/* 803A522C 003A216C  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5230 003A2170  7C 7E 1B 78 */	mr r30, r3
/* 803A5234 003A2174  7F E3 FB 78 */	mr r3, r31
/* 803A5238 003A2178  4B D5 FD CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803A523C 003A217C  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A5240 003A2180  38 00 00 00 */	li r0, 0
/* 803A5244 003A2184  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803A5248 003A2188  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803A524C 003A218C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803A5250 003A2190  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803A5254 003A2194  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5258 003A2198  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A525C 003A219C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5260 003A21A0  7C 08 03 A6 */	mtlr r0
/* 803A5264 003A21A4  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5268 003A21A8  4E 80 00 20 */	blr 

.global exec__Q34Game8BlackMan10StateTiredFPQ24Game9EnemyBase
exec__Q34Game8BlackMan10StateTiredFPQ24Game9EnemyBase:
/* 803A526C 003A21AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5270 003A21B0  7C 08 02 A6 */	mflr r0
/* 803A5274 003A21B4  C0 02 10 18 */	lfs f0, lbl_8051F378@sda21(r2)
/* 803A5278 003A21B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A527C 003A21BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5280 003A21C0  7C 9F 23 78 */	mr r31, r4
/* 803A5284 003A21C4  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5288 003A21C8  7C 7E 1B 78 */	mr r30, r3
/* 803A528C 003A21CC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 803A5290 003A21D0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 803A5294 003A21D4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 803A5298 003A21D8  D0 04 01 C8 */	stfs f0, 0x1c8(r4)
/* 803A529C 003A21DC  D0 04 01 CC */	stfs f0, 0x1cc(r4)
/* 803A52A0 003A21E0  D0 04 01 D0 */	stfs f0, 0x1d0(r4)
/* 803A52A4 003A21E4  80 64 01 88 */	lwz r3, 0x188(r4)
/* 803A52A8 003A21E8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803A52AC 003A21EC  28 00 00 00 */	cmplwi r0, 0
/* 803A52B0 003A21F0  41 82 00 3C */	beq lbl_803A52EC
/* 803A52B4 003A21F4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803A52B8 003A21F8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803A52BC 003A21FC  40 82 00 58 */	bne lbl_803A5314
/* 803A52C0 003A2200  7F E3 FB 78 */	mr r3, r31
/* 803A52C4 003A2204  48 00 58 49 */	bl flick__Q34Game8BlackMan3ObjFv
/* 803A52C8 003A2208  7F C3 F3 78 */	mr r3, r30
/* 803A52CC 003A220C  7F E4 FB 78 */	mr r4, r31
/* 803A52D0 003A2210  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A52D4 003A2214  38 A0 00 00 */	li r5, 0
/* 803A52D8 003A2218  38 C0 00 00 */	li r6, 0
/* 803A52DC 003A221C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803A52E0 003A2220  7D 89 03 A6 */	mtctr r12
/* 803A52E4 003A2224  4E 80 04 21 */	bctrl 
/* 803A52E8 003A2228  48 00 00 2C */	b lbl_803A5314
lbl_803A52EC:
/* 803A52EC 003A222C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803A52F0 003A2230  38 03 00 01 */	addi r0, r3, 1
/* 803A52F4 003A2234  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803A52F8 003A2238  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803A52FC 003A223C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 803A5300 003A2240  80 03 09 FC */	lwz r0, 0x9fc(r3)
/* 803A5304 003A2244  7C 04 00 00 */	cmpw r4, r0
/* 803A5308 003A2248  40 81 00 0C */	ble lbl_803A5314
/* 803A530C 003A224C  7F E3 FB 78 */	mr r3, r31
/* 803A5310 003A2250  4B D5 FF 91 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_803A5314:
/* 803A5314 003A2254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5318 003A2258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A531C 003A225C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A5320 003A2260  7C 08 03 A6 */	mtlr r0
/* 803A5324 003A2264  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5328 003A2268  4E 80 00 20 */	blr 

.global __sinit_blackManState_cpp
__sinit_blackManState_cpp:
/* 803A532C 003A226C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803A5330 003A2270  38 00 FF FF */	li r0, -1
/* 803A5334 003A2274  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803A5338 003A2278  3C 60 80 4E */	lis r3, lbl_804E5A50@ha
/* 803A533C 003A227C  90 0D 99 D0 */	stw r0, lbl_80516050@sda21(r13)
/* 803A5340 003A2280  D4 03 5A 50 */	stfsu f0, lbl_804E5A50@l(r3)
/* 803A5344 003A2284  D0 0D 99 D4 */	stfs f0, lbl_80516054@sda21(r13)
/* 803A5348 003A2288  D0 03 00 04 */	stfs f0, 4(r3)
/* 803A534C 003A228C  D0 03 00 08 */	stfs f0, 8(r3)
/* 803A5350 003A2290  4E 80 00 20 */	blr 
