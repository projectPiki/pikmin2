.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_umiMushiState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_804936A0
lbl_804936A0:
	.4byte 0x756D694D
	.4byte 0x75736869
	.4byte 0x53746174
	.4byte 0x652E6370
	.4byte 0x70000000
.global lbl_804936B4
lbl_804936B4:
	.4byte 0x50534D61
	.4byte 0x696E5369
	.4byte 0x64655F4F
	.4byte 0x626A536F
	.4byte 0x756E642E
	.4byte 0x68000000
.global lbl_804936CC
lbl_804936CC:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804E4380
lbl_804E4380:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game8UmiMushi9StateLost
__vt__Q34Game8UmiMushi9StateLost:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi9StateLostFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi9StateLostFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi9StateDead
__vt__Q34Game8UmiMushi9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi8StateEat
__vt__Q34Game8UmiMushi8StateEat:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi8StateEatFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi11StateAttack
__vt__Q34Game8UmiMushi11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi10StateFlick
__vt__Q34Game8UmiMushi10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi9StateTurn
__vt__Q34Game8UmiMushi9StateTurn:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi11StateSearch
__vt__Q34Game8UmiMushi11StateSearch:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi11StateSearchFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi11StateSearchFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi9StateFind
__vt__Q34Game8UmiMushi9StateFind:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi9StateFindFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi9StateFindFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi9StateWalk
__vt__Q34Game8UmiMushi9StateWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi9StateWait
__vt__Q34Game8UmiMushi9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8UmiMushi9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi5State
__vt__Q34Game8UmiMushi5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game8UmiMushi3FSM
__vt__Q34Game8UmiMushi3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8UmiMushi3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515FC0
lbl_80515FC0:
	.skip 0x4
.global lbl_80515FC4
lbl_80515FC4:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051ECC8
lbl_8051ECC8:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051ECD0
lbl_8051ECD0:
	.4byte 0x00000000
.global lbl_8051ECD4
lbl_8051ECD4:
	.4byte 0x77616C6B
	.4byte 0x00000000
.global lbl_8051ECDC
lbl_8051ECDC:
	.4byte 0x42480000
.global lbl_8051ECE0
lbl_8051ECE0:
	.float 1.0
	.4byte 0x00000000
.global lbl_8051ECE8
lbl_8051ECE8:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051ECF0
lbl_8051ECF0:
	.4byte 0x66696E64
	.4byte 0x00000000
.global lbl_8051ECF8
lbl_8051ECF8:
	.4byte 0x73656172
	.4byte 0x63680000
.global lbl_8051ED00
lbl_8051ED00:
	.4byte 0x7475726E
	.4byte 0x00000000
.global lbl_8051ED08
lbl_8051ED08:
	.4byte 0x40490FDB
.global lbl_8051ED0C
lbl_8051ED0C:
	.4byte 0x3BB60B61
.global lbl_8051ED10
lbl_8051ED10:
	.4byte 0x666C6963
	.4byte 0x6B000000
.global lbl_8051ED18
lbl_8051ED18:
	.4byte 0xC47A0000
.global lbl_8051ED1C
lbl_8051ED1C:
	.4byte 0x61747461
	.4byte 0x636B0000
.global lbl_8051ED24
lbl_8051ED24:
	.4byte 0x65617400
.global lbl_8051ED28
lbl_8051ED28:
	.4byte 0x43960000
.global lbl_8051ED2C
lbl_8051ED2C:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051ED34
lbl_8051ED34:
	.4byte 0x6C6F7374
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game8UmiMushi3FSMFPQ24Game9EnemyBase
init__Q34Game8UmiMushi3FSMFPQ24Game9EnemyBase:
/* 80380A2C 0037D96C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380A30 0037D970  7C 08 02 A6 */	mflr r0
/* 80380A34 0037D974  38 80 00 0A */	li r4, 0xa
/* 80380A38 0037D978  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380A3C 0037D97C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80380A40 0037D980  7C 7F 1B 78 */	mr r31, r3
/* 80380A44 0037D984  4B DA FE 21 */	bl create__Q24Game17EnemyStateMachineFi
/* 80380A48 0037D988  38 60 00 14 */	li r3, 0x14
/* 80380A4C 0037D98C  4B CA 34 59 */	bl __nw__FUl
/* 80380A50 0037D990  7C 64 1B 79 */	or. r4, r3, r3
/* 80380A54 0037D994  41 82 00 10 */	beq .L_80380A64
/* 80380A58 0037D998  38 80 00 00 */	li r4, 0
/* 80380A5C 0037D99C  48 00 01 69 */	bl __ct__Q34Game8UmiMushi9StateWaitFi
/* 80380A60 0037D9A0  7C 64 1B 78 */	mr r4, r3
.L_80380A64:
/* 80380A64 0037D9A4  7F E3 FB 78 */	mr r3, r31
/* 80380A68 0037D9A8  4B DA FE A1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380A6C 0037D9AC  38 60 00 18 */	li r3, 0x18
/* 80380A70 0037D9B0  4B CA 34 35 */	bl __nw__FUl
/* 80380A74 0037D9B4  7C 64 1B 79 */	or. r4, r3, r3
/* 80380A78 0037D9B8  41 82 00 10 */	beq .L_80380A88
/* 80380A7C 0037D9BC  38 80 00 01 */	li r4, 1
/* 80380A80 0037D9C0  48 00 03 E9 */	bl __ct__Q34Game8UmiMushi9StateWalkFi
/* 80380A84 0037D9C4  7C 64 1B 78 */	mr r4, r3
.L_80380A88:
/* 80380A88 0037D9C8  7F E3 FB 78 */	mr r3, r31
/* 80380A8C 0037D9CC  4B DA FE 7D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380A90 0037D9D0  38 60 00 10 */	li r3, 0x10
/* 80380A94 0037D9D4  4B CA 34 11 */	bl __nw__FUl
/* 80380A98 0037D9D8  7C 64 1B 79 */	or. r4, r3, r3
/* 80380A9C 0037D9DC  41 82 00 10 */	beq .L_80380AAC
/* 80380AA0 0037D9E0  38 80 00 02 */	li r4, 2
/* 80380AA4 0037D9E4  48 00 07 21 */	bl __ct__Q34Game8UmiMushi9StateFindFi
/* 80380AA8 0037D9E8  7C 64 1B 78 */	mr r4, r3
.L_80380AAC:
/* 80380AAC 0037D9EC  7F E3 FB 78 */	mr r3, r31
/* 80380AB0 0037D9F0  4B DA FE 59 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380AB4 0037D9F4  38 60 00 10 */	li r3, 0x10
/* 80380AB8 0037D9F8  4B CA 33 ED */	bl __nw__FUl
/* 80380ABC 0037D9FC  7C 64 1B 79 */	or. r4, r3, r3
/* 80380AC0 0037DA00  41 82 00 10 */	beq .L_80380AD0
/* 80380AC4 0037DA04  38 80 00 03 */	li r4, 3
/* 80380AC8 0037DA08  48 00 08 F1 */	bl __ct__Q34Game8UmiMushi11StateSearchFi
/* 80380ACC 0037DA0C  7C 64 1B 78 */	mr r4, r3
.L_80380AD0:
/* 80380AD0 0037DA10  7F E3 FB 78 */	mr r3, r31
/* 80380AD4 0037DA14  4B DA FE 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380AD8 0037DA18  38 60 00 10 */	li r3, 0x10
/* 80380ADC 0037DA1C  4B CA 33 C9 */	bl __nw__FUl
/* 80380AE0 0037DA20  7C 64 1B 79 */	or. r4, r3, r3
/* 80380AE4 0037DA24  41 82 00 10 */	beq .L_80380AF4
/* 80380AE8 0037DA28  38 80 00 04 */	li r4, 4
/* 80380AEC 0037DA2C  48 00 0B DD */	bl __ct__Q34Game8UmiMushi9StateTurnFi
/* 80380AF0 0037DA30  7C 64 1B 78 */	mr r4, r3
.L_80380AF4:
/* 80380AF4 0037DA34  7F E3 FB 78 */	mr r3, r31
/* 80380AF8 0037DA38  4B DA FE 11 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380AFC 0037DA3C  38 60 00 10 */	li r3, 0x10
/* 80380B00 0037DA40  4B CA 33 A5 */	bl __nw__FUl
/* 80380B04 0037DA44  7C 64 1B 79 */	or. r4, r3, r3
/* 80380B08 0037DA48  41 82 00 10 */	beq .L_80380B18
/* 80380B0C 0037DA4C  38 80 00 05 */	li r4, 5
/* 80380B10 0037DA50  48 00 0E 21 */	bl __ct__Q34Game8UmiMushi10StateFlickFi
/* 80380B14 0037DA54  7C 64 1B 78 */	mr r4, r3
.L_80380B18:
/* 80380B18 0037DA58  7F E3 FB 78 */	mr r3, r31
/* 80380B1C 0037DA5C  4B DA FD ED */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380B20 0037DA60  38 60 00 14 */	li r3, 0x14
/* 80380B24 0037DA64  4B CA 33 81 */	bl __nw__FUl
/* 80380B28 0037DA68  7C 64 1B 79 */	or. r4, r3, r3
/* 80380B2C 0037DA6C  41 82 00 10 */	beq .L_80380B3C
/* 80380B30 0037DA70  38 80 00 06 */	li r4, 6
/* 80380B34 0037DA74  48 00 11 29 */	bl __ct__Q34Game8UmiMushi11StateAttackFi
/* 80380B38 0037DA78  7C 64 1B 78 */	mr r4, r3
.L_80380B3C:
/* 80380B3C 0037DA7C  7F E3 FB 78 */	mr r3, r31
/* 80380B40 0037DA80  4B DA FD C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380B44 0037DA84  38 60 00 10 */	li r3, 0x10
/* 80380B48 0037DA88  4B CA 33 5D */	bl __nw__FUl
/* 80380B4C 0037DA8C  7C 64 1B 79 */	or. r4, r3, r3
/* 80380B50 0037DA90  41 82 00 10 */	beq .L_80380B60
/* 80380B54 0037DA94  38 80 00 07 */	li r4, 7
/* 80380B58 0037DA98  48 00 17 79 */	bl __ct__Q34Game8UmiMushi8StateEatFi
/* 80380B5C 0037DA9C  7C 64 1B 78 */	mr r4, r3
.L_80380B60:
/* 80380B60 0037DAA0  7F E3 FB 78 */	mr r3, r31
/* 80380B64 0037DAA4  4B DA FD A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380B68 0037DAA8  38 60 00 10 */	li r3, 0x10
/* 80380B6C 0037DAAC  4B CA 33 39 */	bl __nw__FUl
/* 80380B70 0037DAB0  7C 64 1B 79 */	or. r4, r3, r3
/* 80380B74 0037DAB4  41 82 00 10 */	beq .L_80380B84
/* 80380B78 0037DAB8  38 80 00 08 */	li r4, 8
/* 80380B7C 0037DABC  48 00 18 89 */	bl __ct__Q34Game8UmiMushi9StateDeadFi
/* 80380B80 0037DAC0  7C 64 1B 78 */	mr r4, r3
.L_80380B84:
/* 80380B84 0037DAC4  7F E3 FB 78 */	mr r3, r31
/* 80380B88 0037DAC8  4B DA FD 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380B8C 0037DACC  38 60 00 10 */	li r3, 0x10
/* 80380B90 0037DAD0  4B CA 33 15 */	bl __nw__FUl
/* 80380B94 0037DAD4  7C 64 1B 79 */	or. r4, r3, r3
/* 80380B98 0037DAD8  41 82 00 10 */	beq .L_80380BA8
/* 80380B9C 0037DADC  38 80 00 09 */	li r4, 9
/* 80380BA0 0037DAE0  48 00 19 E1 */	bl __ct__Q34Game8UmiMushi9StateLostFi
/* 80380BA4 0037DAE4  7C 64 1B 78 */	mr r4, r3
.L_80380BA8:
/* 80380BA8 0037DAE8  7F E3 FB 78 */	mr r3, r31
/* 80380BAC 0037DAEC  4B DA FD 5D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80380BB0 0037DAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80380BB4 0037DAF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80380BB8 0037DAF8  7C 08 03 A6 */	mtlr r0
/* 80380BBC 0037DAFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80380BC0 0037DB00  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi9StateWaitFi
__ct__Q34Game8UmiMushi9StateWaitFi:
/* 80380BC4 0037DB04  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80380BC8 0037DB08  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 80380BCC 0037DB0C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80380BD0 0037DB10  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi9StateWait@ha
/* 80380BD4 0037DB14  90 03 00 00 */	stw r0, 0(r3)
/* 80380BD8 0037DB18  38 E0 00 00 */	li r7, 0
/* 80380BDC 0037DB1C  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 80380BE0 0037DB20  38 A5 44 D0 */	addi r5, r5, __vt__Q34Game8UmiMushi9StateWait@l
/* 80380BE4 0037DB24  90 83 00 04 */	stw r4, 4(r3)
/* 80380BE8 0037DB28  38 02 09 68 */	addi r0, r2, lbl_8051ECC8@sda21
/* 80380BEC 0037DB2C  90 E3 00 08 */	stw r7, 8(r3)
/* 80380BF0 0037DB30  90 C3 00 00 */	stw r6, 0(r3)
/* 80380BF4 0037DB34  90 A3 00 00 */	stw r5, 0(r3)
/* 80380BF8 0037DB38  90 03 00 0C */	stw r0, 0xc(r3)
/* 80380BFC 0037DB3C  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80380C00 0037DB40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380C04 0037DB44  7C 08 02 A6 */	mflr r0
/* 80380C08 0037DB48  38 A0 00 00 */	li r5, 0
/* 80380C0C 0037DB4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380C10 0037DB50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80380C14 0037DB54  7C 9F 23 78 */	mr r31, r4
/* 80380C18 0037DB58  38 80 00 06 */	li r4, 6
/* 80380C1C 0037DB5C  93 C1 00 08 */	stw r30, 8(r1)
/* 80380C20 0037DB60  7C 7E 1B 78 */	mr r30, r3
/* 80380C24 0037DB64  7F E3 FB 78 */	mr r3, r31
/* 80380C28 0037DB68  4B D8 43 DD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80380C2C 0037DB6C  38 60 FF FF */	li r3, -1
/* 80380C30 0037DB70  38 00 00 00 */	li r0, 0
/* 80380C34 0037DB74  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 80380C38 0037DB78  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80380C3C 0037DB7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80380C40 0037DB80  83 C1 00 08 */	lwz r30, 8(r1)
/* 80380C44 0037DB84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80380C48 0037DB88  7C 08 03 A6 */	mtlr r0
/* 80380C4C 0037DB8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80380C50 0037DB90  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi9StateWaitFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi9StateWaitFPQ24Game9EnemyBase:
/* 80380C54 0037DB94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380C58 0037DB98  7C 08 02 A6 */	mflr r0
/* 80380C5C 0037DB9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380C60 0037DBA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80380C64 0037DBA4  7C 9F 23 78 */	mr r31, r4
/* 80380C68 0037DBA8  93 C1 00 08 */	stw r30, 8(r1)
/* 80380C6C 0037DBAC  7C 7E 1B 78 */	mr r30, r3
/* 80380C70 0037DBB0  7F E3 FB 78 */	mr r3, r31
/* 80380C74 0037DBB4  4B D8 66 8D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80380C78 0037DBB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380C7C 0037DBBC  40 82 00 2C */	bne .L_80380CA8
/* 80380C80 0037DBC0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80380C84 0037DBC4  38 03 00 01 */	addi r0, r3, 1
/* 80380C88 0037DBC8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80380C8C 0037DBCC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80380C90 0037DBD0  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80380C94 0037DBD4  80 03 09 FC */	lwz r0, 0x9fc(r3)
/* 80380C98 0037DBD8  7C 04 00 00 */	cmpw r4, r0
/* 80380C9C 0037DBDC  40 81 00 0C */	ble .L_80380CA8
/* 80380CA0 0037DBE0  7F E3 FB 78 */	mr r3, r31
/* 80380CA4 0037DBE4  4B D8 45 FD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80380CA8:
/* 80380CA8 0037DBE8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80380CAC 0037DBEC  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80380CB0 0037DBF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80380CB4 0037DBF4  4C 40 13 82 */	cror 2, 0, 2
/* 80380CB8 0037DBF8  40 82 00 14 */	bne .L_80380CCC
/* 80380CBC 0037DBFC  7F E3 FB 78 */	mr r3, r31
/* 80380CC0 0037DC00  4B D8 45 E1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80380CC4 0037DC04  38 00 00 08 */	li r0, 8
/* 80380CC8 0037DC08  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80380CCC:
/* 80380CCC 0037DC0C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80380CD0 0037DC10  88 03 0A 11 */	lbz r0, 0xa11(r3)
/* 80380CD4 0037DC14  28 00 00 00 */	cmplwi r0, 0
/* 80380CD8 0037DC18  40 82 00 20 */	bne .L_80380CF8
/* 80380CDC 0037DC1C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80380CE0 0037DC20  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80380CE4 0037DC24  28 00 00 00 */	cmplwi r0, 0
/* 80380CE8 0037DC28  41 82 01 68 */	beq .L_80380E50
/* 80380CEC 0037DC2C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80380CF0 0037DC30  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80380CF4 0037DC34  40 82 01 5C */	bne .L_80380E50
.L_80380CF8:
/* 80380CF8 0037DC38  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 80380CFC 0037DC3C  2C 05 00 00 */	cmpwi r5, 0
/* 80380D00 0037DC40  40 80 01 34 */	bge .L_80380E34
/* 80380D04 0037DC44  7F E3 FB 78 */	mr r3, r31
/* 80380D08 0037DC48  38 80 00 00 */	li r4, 0
/* 80380D0C 0037DC4C  4B D9 39 4D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80380D10 0037DC50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380D14 0037DC54  41 82 00 30 */	beq .L_80380D44
/* 80380D18 0037DC58  7F C3 F3 78 */	mr r3, r30
/* 80380D1C 0037DC5C  7F E4 FB 78 */	mr r4, r31
/* 80380D20 0037DC60  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380D24 0037DC64  38 A0 00 05 */	li r5, 5
/* 80380D28 0037DC68  38 C0 00 00 */	li r6, 0
/* 80380D2C 0037DC6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380D30 0037DC70  7D 89 03 A6 */	mtctr r12
/* 80380D34 0037DC74  4E 80 04 21 */	bctrl 
/* 80380D38 0037DC78  38 00 00 03 */	li r0, 3
/* 80380D3C 0037DC7C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80380D40 0037DC80  48 00 01 10 */	b .L_80380E50
.L_80380D44:
/* 80380D44 0037DC84  7F E3 FB 78 */	mr r3, r31
/* 80380D48 0037DC88  48 00 4F 41 */	bl isChangeNavi__Q34Game8UmiMushi3ObjFv
/* 80380D4C 0037DC8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380D50 0037DC90  41 82 00 28 */	beq .L_80380D78
/* 80380D54 0037DC94  7F C3 F3 78 */	mr r3, r30
/* 80380D58 0037DC98  7F E4 FB 78 */	mr r4, r31
/* 80380D5C 0037DC9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380D60 0037DCA0  38 A0 00 02 */	li r5, 2
/* 80380D64 0037DCA4  38 C0 00 00 */	li r6, 0
/* 80380D68 0037DCA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380D6C 0037DCAC  7D 89 03 A6 */	mtctr r12
/* 80380D70 0037DCB0  4E 80 04 21 */	bctrl 
/* 80380D74 0037DCB4  48 00 00 DC */	b .L_80380E50
.L_80380D78:
/* 80380D78 0037DCB8  7F E3 FB 78 */	mr r3, r31
/* 80380D7C 0037DCBC  48 00 53 2D */	bl isAttackStart__Q34Game8UmiMushi3ObjFv
/* 80380D80 0037DCC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380D84 0037DCC4  41 82 00 28 */	beq .L_80380DAC
/* 80380D88 0037DCC8  7F C3 F3 78 */	mr r3, r30
/* 80380D8C 0037DCCC  7F E4 FB 78 */	mr r4, r31
/* 80380D90 0037DCD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380D94 0037DCD4  38 A0 00 06 */	li r5, 6
/* 80380D98 0037DCD8  38 C0 00 00 */	li r6, 0
/* 80380D9C 0037DCDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380DA0 0037DCE0  7D 89 03 A6 */	mtctr r12
/* 80380DA4 0037DCE4  4E 80 04 21 */	bctrl 
/* 80380DA8 0037DCE8  48 00 00 A8 */	b .L_80380E50
.L_80380DAC:
/* 80380DAC 0037DCEC  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80380DB0 0037DCF0  28 00 00 00 */	cmplwi r0, 0
/* 80380DB4 0037DCF4  41 82 00 5C */	beq .L_80380E10
/* 80380DB8 0037DCF8  7F E3 FB 78 */	mr r3, r31
/* 80380DBC 0037DCFC  48 00 55 2D */	bl isNeedTurn__Q34Game8UmiMushi3ObjFv
/* 80380DC0 0037DD00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380DC4 0037DD04  41 82 00 28 */	beq .L_80380DEC
/* 80380DC8 0037DD08  7F C3 F3 78 */	mr r3, r30
/* 80380DCC 0037DD0C  7F E4 FB 78 */	mr r4, r31
/* 80380DD0 0037DD10  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380DD4 0037DD14  38 A0 00 04 */	li r5, 4
/* 80380DD8 0037DD18  38 C0 00 00 */	li r6, 0
/* 80380DDC 0037DD1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380DE0 0037DD20  7D 89 03 A6 */	mtctr r12
/* 80380DE4 0037DD24  4E 80 04 21 */	bctrl 
/* 80380DE8 0037DD28  48 00 00 68 */	b .L_80380E50
.L_80380DEC:
/* 80380DEC 0037DD2C  7F C3 F3 78 */	mr r3, r30
/* 80380DF0 0037DD30  7F E4 FB 78 */	mr r4, r31
/* 80380DF4 0037DD34  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380DF8 0037DD38  38 A0 00 03 */	li r5, 3
/* 80380DFC 0037DD3C  38 C0 00 00 */	li r6, 0
/* 80380E00 0037DD40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380E04 0037DD44  7D 89 03 A6 */	mtctr r12
/* 80380E08 0037DD48  4E 80 04 21 */	bctrl 
/* 80380E0C 0037DD4C  48 00 00 44 */	b .L_80380E50
.L_80380E10:
/* 80380E10 0037DD50  7F C3 F3 78 */	mr r3, r30
/* 80380E14 0037DD54  7F E4 FB 78 */	mr r4, r31
/* 80380E18 0037DD58  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380E1C 0037DD5C  38 A0 00 01 */	li r5, 1
/* 80380E20 0037DD60  38 C0 00 00 */	li r6, 0
/* 80380E24 0037DD64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380E28 0037DD68  7D 89 03 A6 */	mtctr r12
/* 80380E2C 0037DD6C  4E 80 04 21 */	bctrl 
/* 80380E30 0037DD70  48 00 00 20 */	b .L_80380E50
.L_80380E34:
/* 80380E34 0037DD74  81 9E 00 00 */	lwz r12, 0(r30)
/* 80380E38 0037DD78  7F C3 F3 78 */	mr r3, r30
/* 80380E3C 0037DD7C  7F E4 FB 78 */	mr r4, r31
/* 80380E40 0037DD80  38 C0 00 00 */	li r6, 0
/* 80380E44 0037DD84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80380E48 0037DD88  7D 89 03 A6 */	mtctr r12
/* 80380E4C 0037DD8C  4E 80 04 21 */	bctrl 
.L_80380E50:
/* 80380E50 0037DD90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80380E54 0037DD94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80380E58 0037DD98  83 C1 00 08 */	lwz r30, 8(r1)
/* 80380E5C 0037DD9C  7C 08 03 A6 */	mtlr r0
/* 80380E60 0037DDA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80380E64 0037DDA4  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi9StateWalkFi
__ct__Q34Game8UmiMushi9StateWalkFi:
/* 80380E68 0037DDA8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80380E6C 0037DDAC  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 80380E70 0037DDB0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80380E74 0037DDB4  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi9StateWalk@ha
/* 80380E78 0037DDB8  90 03 00 00 */	stw r0, 0(r3)
/* 80380E7C 0037DDBC  38 E0 00 00 */	li r7, 0
/* 80380E80 0037DDC0  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 80380E84 0037DDC4  38 A5 44 AC */	addi r5, r5, __vt__Q34Game8UmiMushi9StateWalk@l
/* 80380E88 0037DDC8  90 83 00 04 */	stw r4, 4(r3)
/* 80380E8C 0037DDCC  38 02 09 74 */	addi r0, r2, lbl_8051ECD4@sda21
/* 80380E90 0037DDD0  90 E3 00 08 */	stw r7, 8(r3)
/* 80380E94 0037DDD4  90 C3 00 00 */	stw r6, 0(r3)
/* 80380E98 0037DDD8  90 A3 00 00 */	stw r5, 0(r3)
/* 80380E9C 0037DDDC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80380EA0 0037DDE0  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80380EA4 0037DDE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80380EA8 0037DDE8  7C 08 02 A6 */	mflr r0
/* 80380EAC 0037DDEC  38 A0 00 00 */	li r5, 0
/* 80380EB0 0037DDF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80380EB4 0037DDF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80380EB8 0037DDF8  7C 9F 23 78 */	mr r31, r4
/* 80380EBC 0037DDFC  38 80 00 04 */	li r4, 4
/* 80380EC0 0037DE00  93 C1 00 08 */	stw r30, 8(r1)
/* 80380EC4 0037DE04  7C 7E 1B 78 */	mr r30, r3
/* 80380EC8 0037DE08  7F E3 FB 78 */	mr r3, r31
/* 80380ECC 0037DE0C  4B D8 41 39 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80380ED0 0037DE10  38 00 FF FF */	li r0, -1
/* 80380ED4 0037DE14  7F E3 FB 78 */	mr r3, r31
/* 80380ED8 0037DE18  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80380EDC 0037DE1C  48 00 4D 99 */	bl resetWalkParm__Q34Game8UmiMushi3ObjFv
/* 80380EE0 0037DE20  38 00 00 00 */	li r0, 0
/* 80380EE4 0037DE24  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80380EE8 0037DE28  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80380EEC 0037DE2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80380EF0 0037DE30  83 C1 00 08 */	lwz r30, 8(r1)
/* 80380EF4 0037DE34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80380EF8 0037DE38  7C 08 03 A6 */	mtlr r0
/* 80380EFC 0037DE3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80380F00 0037DE40  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi9StateWalkFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi9StateWalkFPQ24Game9EnemyBase:
/* 80380F04 0037DE44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80380F08 0037DE48  7C 08 02 A6 */	mflr r0
/* 80380F0C 0037DE4C  C0 22 09 7C */	lfs f1, lbl_8051ECDC@sda21(r2)
/* 80380F10 0037DE50  90 01 00 24 */	stw r0, 0x24(r1)
/* 80380F14 0037DE54  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80380F18 0037DE58  7C 9F 23 78 */	mr r31, r4
/* 80380F1C 0037DE5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80380F20 0037DE60  7C 7E 1B 78 */	mr r30, r3
/* 80380F24 0037DE64  7F E3 FB 78 */	mr r3, r31
/* 80380F28 0037DE68  48 00 3C BD */	bl isReachToGoal__Q34Game8UmiMushi3ObjFf
/* 80380F2C 0037DE6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380F30 0037DE70  41 82 00 3C */	beq .L_80380F6C
/* 80380F34 0037DE74  C0 22 09 80 */	lfs f1, lbl_8051ECE0@sda21(r2)
/* 80380F38 0037DE78  7F E3 FB 78 */	mr r3, r31
/* 80380F3C 0037DE7C  48 00 55 61 */	bl isOutOfTerritory__Q34Game8UmiMushi3ObjFf
/* 80380F40 0037DE80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380F44 0037DE84  41 82 00 10 */	beq .L_80380F54
/* 80380F48 0037DE88  7F E3 FB 78 */	mr r3, r31
/* 80380F4C 0037DE8C  48 00 40 4D */	bl setNextGoal__Q34Game8UmiMushi3ObjFv
/* 80380F50 0037DE90  48 00 00 1C */	b .L_80380F6C
.L_80380F54:
/* 80380F54 0037DE94  7F E3 FB 78 */	mr r3, r31
/* 80380F58 0037DE98  48 00 4F 79 */	bl isFindTarget__Q34Game8UmiMushi3ObjFv
/* 80380F5C 0037DE9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80380F60 0037DEA0  40 82 00 0C */	bne .L_80380F6C
/* 80380F64 0037DEA4  7F E3 FB 78 */	mr r3, r31
/* 80380F68 0037DEA8  48 00 40 31 */	bl setNextGoal__Q34Game8UmiMushi3ObjFv
.L_80380F6C:
/* 80380F6C 0037DEAC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80380F70 0037DEB0  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80380F74 0037DEB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80380F78 0037DEB8  4C 40 13 82 */	cror 2, 0, 2
/* 80380F7C 0037DEBC  40 82 00 28 */	bne .L_80380FA4
/* 80380F80 0037DEC0  7F E3 FB 78 */	mr r3, r31
/* 80380F84 0037DEC4  4B D8 43 1D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80380F88 0037DEC8  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80380F8C 0037DECC  38 00 00 08 */	li r0, 8
/* 80380F90 0037DED0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80380F94 0037DED4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80380F98 0037DED8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80380F9C 0037DEDC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80380FA0 0037DEE0  48 00 01 AC */	b .L_8038114C
.L_80380FA4:
/* 80380FA4 0037DEE4  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 80380FA8 0037DEE8  2C 00 00 00 */	cmpwi r0, 0
/* 80380FAC 0037DEEC  40 80 01 A0 */	bge .L_8038114C
/* 80380FB0 0037DEF0  7F E3 FB 78 */	mr r3, r31
/* 80380FB4 0037DEF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80380FB8 0037DEF8  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80380FBC 0037DEFC  7D 89 03 A6 */	mtctr r12
/* 80380FC0 0037DF00  4E 80 04 21 */	bctrl 
/* 80380FC4 0037DF04  2C 03 00 47 */	cmpwi r3, 0x47
/* 80380FC8 0037DF08  40 82 00 10 */	bne .L_80380FD8
/* 80380FCC 0037DF0C  7F E3 FB 78 */	mr r3, r31
/* 80380FD0 0037DF10  48 00 3C 71 */	bl walkFunc__Q34Game8UmiMushi3ObjFv
/* 80380FD4 0037DF14  48 00 00 C0 */	b .L_80381094
.L_80380FD8:
/* 80380FD8 0037DF18  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80380FDC 0037DF1C  2C 00 00 00 */	cmpwi r0, 0
/* 80380FE0 0037DF20  40 81 00 60 */	ble .L_80381040
/* 80380FE4 0037DF24  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80380FE8 0037DF28  3C 00 43 30 */	lis r0, 0x4330
/* 80380FEC 0037DF2C  90 01 00 08 */	stw r0, 8(r1)
/* 80380FF0 0037DF30  C8 42 09 88 */	lfd f2, lbl_8051ECE8@sda21(r2)
/* 80380FF4 0037DF34  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80380FF8 0037DF38  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80380FFC 0037DF3C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80381000 0037DF40  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80381004 0037DF44  38 03 00 01 */	addi r0, r3, 1
/* 80381008 0037DF48  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8038100C 0037DF4C  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80381010 0037DF50  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80381014 0037DF54  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80381018 0037DF58  90 01 00 0C */	stw r0, 0xc(r1)
/* 8038101C 0037DF5C  C0 03 09 AC */	lfs f0, 0x9ac(r3)
/* 80381020 0037DF60  C8 21 00 08 */	lfd f1, 8(r1)
/* 80381024 0037DF64  EC 21 10 28 */	fsubs f1, f1, f2
/* 80381028 0037DF68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038102C 0037DF6C  40 81 00 68 */	ble .L_80381094
/* 80381030 0037DF70  38 00 00 00 */	li r0, 0
/* 80381034 0037DF74  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80381038 0037DF78  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8038103C 0037DF7C  48 00 00 58 */	b .L_80381094
.L_80381040:
/* 80381040 0037DF80  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80381044 0037DF84  7F E3 FB 78 */	mr r3, r31
/* 80381048 0037DF88  38 04 00 01 */	addi r0, r4, 1
/* 8038104C 0037DF8C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80381050 0037DF90  48 00 3B F1 */	bl walkFunc__Q34Game8UmiMushi3ObjFv
/* 80381054 0037DF94  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80381058 0037DF98  3C 00 43 30 */	lis r0, 0x4330
/* 8038105C 0037DF9C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80381060 0037DFA0  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 80381064 0037DFA4  90 01 00 08 */	stw r0, 8(r1)
/* 80381068 0037DFA8  C8 42 09 88 */	lfd f2, lbl_8051ECE8@sda21(r2)
/* 8038106C 0037DFAC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80381070 0037DFB0  C0 03 09 D4 */	lfs f0, 0x9d4(r3)
/* 80381074 0037DFB4  C8 21 00 08 */	lfd f1, 8(r1)
/* 80381078 0037DFB8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8038107C 0037DFBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80381080 0037DFC0  40 81 00 14 */	ble .L_80381094
/* 80381084 0037DFC4  38 60 00 00 */	li r3, 0
/* 80381088 0037DFC8  38 00 00 01 */	li r0, 1
/* 8038108C 0037DFCC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 80381090 0037DFD0  90 1E 00 14 */	stw r0, 0x14(r30)
.L_80381094:
/* 80381094 0037DFD4  7F E3 FB 78 */	mr r3, r31
/* 80381098 0037DFD8  38 80 00 00 */	li r4, 0
/* 8038109C 0037DFDC  4B D9 35 BD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803810A0 0037DFE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803810A4 0037DFE4  41 82 00 28 */	beq .L_803810CC
/* 803810A8 0037DFE8  7F E3 FB 78 */	mr r3, r31
/* 803810AC 0037DFEC  4B D8 41 F5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803810B0 0037DFF0  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 803810B4 0037DFF4  38 00 00 05 */	li r0, 5
/* 803810B8 0037DFF8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803810BC 0037DFFC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803810C0 0037E000  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803810C4 0037E004  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803810C8 0037E008  48 00 00 84 */	b .L_8038114C
.L_803810CC:
/* 803810CC 0037E00C  7F E3 FB 78 */	mr r3, r31
/* 803810D0 0037E010  48 00 4F D9 */	bl isAttackStart__Q34Game8UmiMushi3ObjFv
/* 803810D4 0037E014  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803810D8 0037E018  41 82 00 28 */	beq .L_80381100
/* 803810DC 0037E01C  7F E3 FB 78 */	mr r3, r31
/* 803810E0 0037E020  4B D8 41 C1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803810E4 0037E024  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 803810E8 0037E028  38 00 00 06 */	li r0, 6
/* 803810EC 0037E02C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803810F0 0037E030  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803810F4 0037E034  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803810F8 0037E038  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803810FC 0037E03C  48 00 00 50 */	b .L_8038114C
.L_80381100:
/* 80381100 0037E040  7F E3 FB 78 */	mr r3, r31
/* 80381104 0037E044  48 00 4B 85 */	bl isChangeNavi__Q34Game8UmiMushi3ObjFv
/* 80381108 0037E048  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038110C 0037E04C  41 82 00 40 */	beq .L_8038114C
/* 80381110 0037E050  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80381114 0037E054  7F C3 F3 78 */	mr r3, r30
/* 80381118 0037E058  7F E4 FB 78 */	mr r4, r31
/* 8038111C 0037E05C  38 A0 00 02 */	li r5, 2
/* 80381120 0037E060  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80381124 0037E064  38 C0 00 00 */	li r6, 0
/* 80381128 0037E068  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8038112C 0037E06C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80381130 0037E070  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80381134 0037E074  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80381138 0037E078  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8038113C 0037E07C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381140 0037E080  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381144 0037E084  7D 89 03 A6 */	mtctr r12
/* 80381148 0037E088  4E 80 04 21 */	bctrl 
.L_8038114C:
/* 8038114C 0037E08C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80381150 0037E090  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80381154 0037E094  28 00 00 00 */	cmplwi r0, 0
/* 80381158 0037E098  41 82 00 54 */	beq .L_803811AC
/* 8038115C 0037E09C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80381160 0037E0A0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80381164 0037E0A4  40 82 00 48 */	bne .L_803811AC
/* 80381168 0037E0A8  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 8038116C 0037E0AC  7F C3 F3 78 */	mr r3, r30
/* 80381170 0037E0B0  7F E4 FB 78 */	mr r4, r31
/* 80381174 0037E0B4  38 C0 00 00 */	li r6, 0
/* 80381178 0037E0B8  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 8038117C 0037E0BC  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80381180 0037E0C0  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80381184 0037E0C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381188 0037E0C8  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 8038118C 0037E0CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381190 0037E0D0  7D 89 03 A6 */	mtctr r12
/* 80381194 0037E0D4  4E 80 04 21 */	bctrl 
/* 80381198 0037E0D8  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 8038119C 0037E0DC  2C 00 00 05 */	cmpwi r0, 5
/* 803811A0 0037E0E0  40 82 00 0C */	bne .L_803811AC
/* 803811A4 0037E0E4  38 00 00 01 */	li r0, 1
/* 803811A8 0037E0E8  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_803811AC:
/* 803811AC 0037E0EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803811B0 0037E0F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803811B4 0037E0F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803811B8 0037E0F8  7C 08 03 A6 */	mtlr r0
/* 803811BC 0037E0FC  38 21 00 20 */	addi r1, r1, 0x20
/* 803811C0 0037E100  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi9StateFindFi
__ct__Q34Game8UmiMushi9StateFindFi:
/* 803811C4 0037E104  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803811C8 0037E108  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 803811CC 0037E10C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803811D0 0037E110  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi9StateFind@ha
/* 803811D4 0037E114  90 03 00 00 */	stw r0, 0(r3)
/* 803811D8 0037E118  38 E0 00 00 */	li r7, 0
/* 803811DC 0037E11C  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 803811E0 0037E120  38 A5 44 88 */	addi r5, r5, __vt__Q34Game8UmiMushi9StateFind@l
/* 803811E4 0037E124  90 83 00 04 */	stw r4, 4(r3)
/* 803811E8 0037E128  38 02 09 90 */	addi r0, r2, lbl_8051ECF0@sda21
/* 803811EC 0037E12C  90 E3 00 08 */	stw r7, 8(r3)
/* 803811F0 0037E130  90 C3 00 00 */	stw r6, 0(r3)
/* 803811F4 0037E134  90 A3 00 00 */	stw r5, 0(r3)
/* 803811F8 0037E138  90 03 00 0C */	stw r0, 0xc(r3)
/* 803811FC 0037E13C  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi9StateFindFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi9StateFindFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80381200 0037E140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80381204 0037E144  7C 08 02 A6 */	mflr r0
/* 80381208 0037E148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038120C 0037E14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80381210 0037E150  7C 9F 23 78 */	mr r31, r4
/* 80381214 0037E154  93 C1 00 08 */	stw r30, 8(r1)
/* 80381218 0037E158  7C 7E 1B 78 */	mr r30, r3
/* 8038121C 0037E15C  80 04 02 D8 */	lwz r0, 0x2d8(r4)
/* 80381220 0037E160  28 00 00 00 */	cmplwi r0, 0
/* 80381224 0037E164  41 82 00 20 */	beq .L_80381244
/* 80381228 0037E168  7F E3 FB 78 */	mr r3, r31
/* 8038122C 0037E16C  4B D8 07 A1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80381230 0037E170  7F E3 FB 78 */	mr r3, r31
/* 80381234 0037E174  48 00 58 81 */	bl setFindAnim__Q34Game8UmiMushi3ObjFv
/* 80381238 0037E178  38 00 FF FF */	li r0, -1
/* 8038123C 0037E17C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80381240 0037E180  48 00 00 34 */	b .L_80381274
.L_80381244:
/* 80381244 0037E184  7F E3 FB 78 */	mr r3, r31
/* 80381248 0037E188  4B D8 07 35 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8038124C 0037E18C  7F E3 FB 78 */	mr r3, r31
/* 80381250 0037E190  48 00 59 29 */	bl fadeColorEffect__Q34Game8UmiMushi3ObjFv
/* 80381254 0037E194  7F C3 F3 78 */	mr r3, r30
/* 80381258 0037E198  7F E4 FB 78 */	mr r4, r31
/* 8038125C 0037E19C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381260 0037E1A0  38 A0 00 09 */	li r5, 9
/* 80381264 0037E1A4  38 C0 00 00 */	li r6, 0
/* 80381268 0037E1A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8038126C 0037E1AC  7D 89 03 A6 */	mtctr r12
/* 80381270 0037E1B0  4E 80 04 21 */	bctrl 
.L_80381274:
/* 80381274 0037E1B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80381278 0037E1B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8038127C 0037E1BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80381280 0037E1C0  7C 08 03 A6 */	mtlr r0
/* 80381284 0037E1C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80381288 0037E1C8  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi9StateFindFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi9StateFindFPQ24Game9EnemyBase:
/* 8038128C 0037E1CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80381290 0037E1D0  7C 08 02 A6 */	mflr r0
/* 80381294 0037E1D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80381298 0037E1D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038129C 0037E1DC  7C 9F 23 78 */	mr r31, r4
/* 803812A0 0037E1E0  93 C1 00 08 */	stw r30, 8(r1)
/* 803812A4 0037E1E4  7C 7E 1B 78 */	mr r30, r3
/* 803812A8 0037E1E8  7F E3 FB 78 */	mr r3, r31
/* 803812AC 0037E1EC  48 00 3E 3D */	bl changeColor__Q34Game8UmiMushi3ObjFv
/* 803812B0 0037E1F0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803812B4 0037E1F4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803812B8 0037E1F8  28 00 00 00 */	cmplwi r0, 0
/* 803812BC 0037E1FC  41 82 00 E4 */	beq .L_803813A0
/* 803812C0 0037E200  7F E3 FB 78 */	mr r3, r31
/* 803812C4 0037E204  4B D8 60 85 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 803812C8 0037E208  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803812CC 0037E20C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803812D0 0037E210  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803812D4 0037E214  40 82 00 CC */	bne .L_803813A0
/* 803812D8 0037E218  7F E3 FB 78 */	mr r3, r31
/* 803812DC 0037E21C  48 00 59 45 */	bl createColorEffect__Q34Game8UmiMushi3ObjFv
/* 803812E0 0037E220  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 803812E4 0037E224  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 803812E8 0037E228  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803812EC 0037E22C  4C 40 13 82 */	cror 2, 0, 2
/* 803812F0 0037E230  40 82 00 28 */	bne .L_80381318
/* 803812F4 0037E234  7F C3 F3 78 */	mr r3, r30
/* 803812F8 0037E238  7F E4 FB 78 */	mr r4, r31
/* 803812FC 0037E23C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381300 0037E240  38 A0 00 08 */	li r5, 8
/* 80381304 0037E244  38 C0 00 00 */	li r6, 0
/* 80381308 0037E248  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8038130C 0037E24C  7D 89 03 A6 */	mtctr r12
/* 80381310 0037E250  4E 80 04 21 */	bctrl 
/* 80381314 0037E254  48 00 00 8C */	b .L_803813A0
.L_80381318:
/* 80381318 0037E258  7F E3 FB 78 */	mr r3, r31
/* 8038131C 0037E25C  48 00 4F CD */	bl isNeedTurn__Q34Game8UmiMushi3ObjFv
/* 80381320 0037E260  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381324 0037E264  41 82 00 28 */	beq .L_8038134C
/* 80381328 0037E268  7F C3 F3 78 */	mr r3, r30
/* 8038132C 0037E26C  7F E4 FB 78 */	mr r4, r31
/* 80381330 0037E270  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381334 0037E274  38 A0 00 04 */	li r5, 4
/* 80381338 0037E278  38 C0 00 00 */	li r6, 0
/* 8038133C 0037E27C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381340 0037E280  7D 89 03 A6 */	mtctr r12
/* 80381344 0037E284  4E 80 04 21 */	bctrl 
/* 80381348 0037E288  48 00 00 58 */	b .L_803813A0
.L_8038134C:
/* 8038134C 0037E28C  7F E3 FB 78 */	mr r3, r31
/* 80381350 0037E290  48 00 4D 59 */	bl isAttackStart__Q34Game8UmiMushi3ObjFv
/* 80381354 0037E294  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381358 0037E298  41 82 00 28 */	beq .L_80381380
/* 8038135C 0037E29C  7F C3 F3 78 */	mr r3, r30
/* 80381360 0037E2A0  7F E4 FB 78 */	mr r4, r31
/* 80381364 0037E2A4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381368 0037E2A8  38 A0 00 06 */	li r5, 6
/* 8038136C 0037E2AC  38 C0 00 00 */	li r6, 0
/* 80381370 0037E2B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381374 0037E2B4  7D 89 03 A6 */	mtctr r12
/* 80381378 0037E2B8  4E 80 04 21 */	bctrl 
/* 8038137C 0037E2BC  48 00 00 24 */	b .L_803813A0
.L_80381380:
/* 80381380 0037E2C0  7F C3 F3 78 */	mr r3, r30
/* 80381384 0037E2C4  7F E4 FB 78 */	mr r4, r31
/* 80381388 0037E2C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038138C 0037E2CC  38 A0 00 03 */	li r5, 3
/* 80381390 0037E2D0  38 C0 00 00 */	li r6, 0
/* 80381394 0037E2D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381398 0037E2D8  7D 89 03 A6 */	mtctr r12
/* 8038139C 0037E2DC  4E 80 04 21 */	bctrl 
.L_803813A0:
/* 803813A0 0037E2E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803813A4 0037E2E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803813A8 0037E2E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803813AC 0037E2EC  7C 08 03 A6 */	mtlr r0
/* 803813B0 0037E2F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803813B4 0037E2F4  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi11StateSearchFi
__ct__Q34Game8UmiMushi11StateSearchFi:
/* 803813B8 0037E2F8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803813BC 0037E2FC  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 803813C0 0037E300  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803813C4 0037E304  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi11StateSearch@ha
/* 803813C8 0037E308  90 03 00 00 */	stw r0, 0(r3)
/* 803813CC 0037E30C  38 E0 00 00 */	li r7, 0
/* 803813D0 0037E310  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 803813D4 0037E314  38 A5 44 64 */	addi r5, r5, __vt__Q34Game8UmiMushi11StateSearch@l
/* 803813D8 0037E318  90 83 00 04 */	stw r4, 4(r3)
/* 803813DC 0037E31C  38 02 09 98 */	addi r0, r2, lbl_8051ECF8@sda21
/* 803813E0 0037E320  90 E3 00 08 */	stw r7, 8(r3)
/* 803813E4 0037E324  90 C3 00 00 */	stw r6, 0(r3)
/* 803813E8 0037E328  90 A3 00 00 */	stw r5, 0(r3)
/* 803813EC 0037E32C  90 03 00 0C */	stw r0, 0xc(r3)
/* 803813F0 0037E330  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi11StateSearchFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi11StateSearchFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803813F4 0037E334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803813F8 0037E338  7C 08 02 A6 */	mflr r0
/* 803813FC 0037E33C  38 A0 00 00 */	li r5, 0
/* 80381400 0037E340  90 01 00 14 */	stw r0, 0x14(r1)
/* 80381404 0037E344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80381408 0037E348  7C 9F 23 78 */	mr r31, r4
/* 8038140C 0037E34C  38 80 00 06 */	li r4, 6
/* 80381410 0037E350  7F E3 FB 78 */	mr r3, r31
/* 80381414 0037E354  4B D8 3B F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80381418 0037E358  38 00 FF FF */	li r0, -1
/* 8038141C 0037E35C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80381420 0037E360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80381424 0037E364  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80381428 0037E368  7C 08 03 A6 */	mtlr r0
/* 8038142C 0037E36C  38 21 00 10 */	addi r1, r1, 0x10
/* 80381430 0037E370  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi11StateSearchFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi11StateSearchFPQ24Game9EnemyBase:
/* 80381434 0037E374  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80381438 0037E378  7C 08 02 A6 */	mflr r0
/* 8038143C 0037E37C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80381440 0037E380  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80381444 0037E384  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80381448 0037E388  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8038144C 0037E38C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80381450 0037E390  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80381454 0037E394  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80381458 0037E398  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8038145C 0037E39C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80381460 0037E3A0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80381464 0037E3A4  7C 9F 23 78 */	mr r31, r4
/* 80381468 0037E3A8  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 8038146C 0037E3AC  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80381470 0037E3B0  7C 7E 1B 78 */	mr r30, r3
/* 80381474 0037E3B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80381478 0037E3B8  4C 40 13 82 */	cror 2, 0, 2
/* 8038147C 0037E3BC  40 82 00 28 */	bne .L_803814A4
/* 80381480 0037E3C0  7F E3 FB 78 */	mr r3, r31
/* 80381484 0037E3C4  4B D8 3E 1D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80381488 0037E3C8  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 8038148C 0037E3CC  38 00 00 08 */	li r0, 8
/* 80381490 0037E3D0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80381494 0037E3D4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80381498 0037E3D8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8038149C 0037E3DC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803814A0 0037E3E0  48 00 01 94 */	b .L_80381634
.L_803814A4:
/* 803814A4 0037E3E4  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 803814A8 0037E3E8  2C 00 00 00 */	cmpwi r0, 0
/* 803814AC 0037E3EC  40 80 01 88 */	bge .L_80381634
/* 803814B0 0037E3F0  7F E3 FB 78 */	mr r3, r31
/* 803814B4 0037E3F4  3B A0 00 01 */	li r29, 1
/* 803814B8 0037E3F8  48 00 50 41 */	bl canMove__Q34Game8UmiMushi3ObjFv
/* 803814BC 0037E3FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803814C0 0037E400  41 82 00 90 */	beq .L_80381550
/* 803814C4 0037E404  7F E3 FB 78 */	mr r3, r31
/* 803814C8 0037E408  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 803814CC 0037E40C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803814D0 0037E410  C3 C4 08 94 */	lfs f30, 0x894(r4)
/* 803814D4 0037E414  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803814D8 0037E418  7D 89 03 A6 */	mtctr r12
/* 803814DC 0037E41C  4E 80 04 21 */	bctrl 
/* 803814E0 0037E420  4B D4 E3 3D */	bl sin
/* 803814E4 0037E424  7F E3 FB 78 */	mr r3, r31
/* 803814E8 0037E428  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 803814EC 0037E42C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803814F0 0037E430  FF A0 08 18 */	frsp f29, f1
/* 803814F4 0037E434  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 803814F8 0037E438  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 803814FC 0037E43C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80381500 0037E440  D0 41 00 08 */	stfs f2, 8(r1)
/* 80381504 0037E444  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 80381508 0037E448  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8038150C 0037E44C  7D 89 03 A6 */	mtctr r12
/* 80381510 0037E450  4E 80 04 21 */	bctrl 
/* 80381514 0037E454  4B D4 DD A1 */	bl cos
/* 80381518 0037E458  EC 1E 07 72 */	fmuls f0, f30, f29
/* 8038151C 0037E45C  38 80 51 3C */	li r4, 0x513c
/* 80381520 0037E460  FC 20 08 18 */	frsp f1, f1
/* 80381524 0037E464  38 A0 00 00 */	li r5, 0
/* 80381528 0037E468  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8038152C 0037E46C  EC 1E 00 72 */	fmuls f0, f30, f1
/* 80381530 0037E470  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 80381534 0037E474  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80381538 0037E478  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8038153C 0037E47C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80381540 0037E480  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80381544 0037E484  7D 89 03 A6 */	mtctr r12
/* 80381548 0037E488  4E 80 04 21 */	bctrl 
/* 8038154C 0037E48C  48 00 00 10 */	b .L_8038155C
.L_80381550:
/* 80381550 0037E490  7F E3 FB 78 */	mr r3, r31
/* 80381554 0037E494  48 00 50 D1 */	bl outMove__Q34Game8UmiMushi3ObjFv
/* 80381558 0037E498  7C 7D 1B 78 */	mr r29, r3
.L_8038155C:
/* 8038155C 0037E49C  7F E3 FB 78 */	mr r3, r31
/* 80381560 0037E4A0  38 80 00 00 */	li r4, 0
/* 80381564 0037E4A4  4B D9 30 F5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80381568 0037E4A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038156C 0037E4AC  41 82 00 28 */	beq .L_80381594
/* 80381570 0037E4B0  7F E3 FB 78 */	mr r3, r31
/* 80381574 0037E4B4  4B D8 3D 2D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80381578 0037E4B8  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 8038157C 0037E4BC  38 00 00 05 */	li r0, 5
/* 80381580 0037E4C0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80381584 0037E4C4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80381588 0037E4C8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8038158C 0037E4CC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80381590 0037E4D0  48 00 00 A4 */	b .L_80381634
.L_80381594:
/* 80381594 0037E4D4  7F E3 FB 78 */	mr r3, r31
/* 80381598 0037E4D8  48 00 46 F1 */	bl isChangeNavi__Q34Game8UmiMushi3ObjFv
/* 8038159C 0037E4DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803815A0 0037E4E0  41 82 00 28 */	beq .L_803815C8
/* 803815A4 0037E4E4  7F E3 FB 78 */	mr r3, r31
/* 803815A8 0037E4E8  4B D8 3C F9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803815AC 0037E4EC  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 803815B0 0037E4F0  38 00 00 02 */	li r0, 2
/* 803815B4 0037E4F4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803815B8 0037E4F8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803815BC 0037E4FC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803815C0 0037E500  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803815C4 0037E504  48 00 00 70 */	b .L_80381634
.L_803815C8:
/* 803815C8 0037E508  7F E3 FB 78 */	mr r3, r31
/* 803815CC 0037E50C  48 00 4A DD */	bl isAttackStart__Q34Game8UmiMushi3ObjFv
/* 803815D0 0037E510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803815D4 0037E514  41 82 00 28 */	beq .L_803815FC
/* 803815D8 0037E518  7F E3 FB 78 */	mr r3, r31
/* 803815DC 0037E51C  4B D8 3C C5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803815E0 0037E520  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 803815E4 0037E524  38 00 00 06 */	li r0, 6
/* 803815E8 0037E528  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803815EC 0037E52C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803815F0 0037E530  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803815F4 0037E534  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803815F8 0037E538  48 00 00 3C */	b .L_80381634
.L_803815FC:
/* 803815FC 0037E53C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80381600 0037E540  41 82 00 34 */	beq .L_80381634
/* 80381604 0037E544  7F E3 FB 78 */	mr r3, r31
/* 80381608 0037E548  48 00 4C E1 */	bl isNeedTurn__Q34Game8UmiMushi3ObjFv
/* 8038160C 0037E54C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381610 0037E550  41 82 00 24 */	beq .L_80381634
/* 80381614 0037E554  7F E3 FB 78 */	mr r3, r31
/* 80381618 0037E558  4B D8 3C 89 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8038161C 0037E55C  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80381620 0037E560  38 00 00 04 */	li r0, 4
/* 80381624 0037E564  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80381628 0037E568  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8038162C 0037E56C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80381630 0037E570  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80381634:
/* 80381634 0037E574  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80381638 0037E578  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8038163C 0037E57C  28 00 00 00 */	cmplwi r0, 0
/* 80381640 0037E580  41 82 00 54 */	beq .L_80381694
/* 80381644 0037E584  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80381648 0037E588  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8038164C 0037E58C  40 82 00 48 */	bne .L_80381694
/* 80381650 0037E590  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80381654 0037E594  7F C3 F3 78 */	mr r3, r30
/* 80381658 0037E598  7F E4 FB 78 */	mr r4, r31
/* 8038165C 0037E59C  38 C0 00 00 */	li r6, 0
/* 80381660 0037E5A0  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80381664 0037E5A4  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80381668 0037E5A8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 8038166C 0037E5AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381670 0037E5B0  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 80381674 0037E5B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381678 0037E5B8  7D 89 03 A6 */	mtctr r12
/* 8038167C 0037E5BC  4E 80 04 21 */	bctrl 
/* 80381680 0037E5C0  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 80381684 0037E5C4  2C 00 00 05 */	cmpwi r0, 5
/* 80381688 0037E5C8  40 82 00 0C */	bne .L_80381694
/* 8038168C 0037E5CC  38 00 00 03 */	li r0, 3
/* 80381690 0037E5D0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80381694:
/* 80381694 0037E5D4  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80381698 0037E5D8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8038169C 0037E5DC  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 803816A0 0037E5E0  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 803816A4 0037E5E4  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 803816A8 0037E5E8  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 803816AC 0037E5EC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803816B0 0037E5F0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803816B4 0037E5F4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803816B8 0037E5F8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803816BC 0037E5FC  7C 08 03 A6 */	mtlr r0
/* 803816C0 0037E600  38 21 00 60 */	addi r1, r1, 0x60
/* 803816C4 0037E604  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi9StateTurnFi
__ct__Q34Game8UmiMushi9StateTurnFi:
/* 803816C8 0037E608  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803816CC 0037E60C  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 803816D0 0037E610  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803816D4 0037E614  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi9StateTurn@ha
/* 803816D8 0037E618  90 03 00 00 */	stw r0, 0(r3)
/* 803816DC 0037E61C  38 E0 00 00 */	li r7, 0
/* 803816E0 0037E620  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 803816E4 0037E624  38 A5 44 40 */	addi r5, r5, __vt__Q34Game8UmiMushi9StateTurn@l
/* 803816E8 0037E628  90 83 00 04 */	stw r4, 4(r3)
/* 803816EC 0037E62C  38 02 09 A0 */	addi r0, r2, lbl_8051ED00@sda21
/* 803816F0 0037E630  90 E3 00 08 */	stw r7, 8(r3)
/* 803816F4 0037E634  90 C3 00 00 */	stw r6, 0(r3)
/* 803816F8 0037E638  90 A3 00 00 */	stw r5, 0(r3)
/* 803816FC 0037E63C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80381700 0037E640  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80381704 0037E644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80381708 0037E648  7C 08 02 A6 */	mflr r0
/* 8038170C 0037E64C  38 A0 00 00 */	li r5, 0
/* 80381710 0037E650  90 01 00 14 */	stw r0, 0x14(r1)
/* 80381714 0037E654  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80381718 0037E658  7C 9F 23 78 */	mr r31, r4
/* 8038171C 0037E65C  38 80 00 07 */	li r4, 7
/* 80381720 0037E660  7F E3 FB 78 */	mr r3, r31
/* 80381724 0037E664  4B D8 38 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80381728 0037E668  38 00 FF FF */	li r0, -1
/* 8038172C 0037E66C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80381730 0037E670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80381734 0037E674  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80381738 0037E678  7C 08 03 A6 */	mtlr r0
/* 8038173C 0037E67C  38 21 00 10 */	addi r1, r1, 0x10
/* 80381740 0037E680  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi9StateTurnFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi9StateTurnFPQ24Game9EnemyBase:
/* 80381744 0037E684  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80381748 0037E688  7C 08 02 A6 */	mflr r0
/* 8038174C 0037E68C  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80381750 0037E690  90 01 00 14 */	stw r0, 0x14(r1)
/* 80381754 0037E694  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80381758 0037E698  7C 9F 23 78 */	mr r31, r4
/* 8038175C 0037E69C  93 C1 00 08 */	stw r30, 8(r1)
/* 80381760 0037E6A0  7C 7E 1B 78 */	mr r30, r3
/* 80381764 0037E6A4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80381768 0037E6A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8038176C 0037E6AC  4C 40 13 82 */	cror 2, 0, 2
/* 80381770 0037E6B0  40 82 00 18 */	bne .L_80381788
/* 80381774 0037E6B4  7F E3 FB 78 */	mr r3, r31
/* 80381778 0037E6B8  4B D8 3B 29 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8038177C 0037E6BC  38 00 00 08 */	li r0, 8
/* 80381780 0037E6C0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80381784 0037E6C4  48 00 01 20 */	b .L_803818A4
.L_80381788:
/* 80381788 0037E6C8  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 8038178C 0037E6CC  2C 00 00 00 */	cmpwi r0, 0
/* 80381790 0037E6D0  40 80 00 B0 */	bge .L_80381840
/* 80381794 0037E6D4  7F E3 FB 78 */	mr r3, r31
/* 80381798 0037E6D8  38 80 00 00 */	li r4, 0
/* 8038179C 0037E6DC  4B D9 2E BD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803817A0 0037E6E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803817A4 0037E6E4  41 82 00 18 */	beq .L_803817BC
/* 803817A8 0037E6E8  7F E3 FB 78 */	mr r3, r31
/* 803817AC 0037E6EC  4B D8 3A F5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803817B0 0037E6F0  38 00 00 05 */	li r0, 5
/* 803817B4 0037E6F4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803817B8 0037E6F8  48 00 00 EC */	b .L_803818A4
.L_803817BC:
/* 803817BC 0037E6FC  7F E3 FB 78 */	mr r3, r31
/* 803817C0 0037E700  48 00 44 C9 */	bl isChangeNavi__Q34Game8UmiMushi3ObjFv
/* 803817C4 0037E704  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803817C8 0037E708  41 82 00 18 */	beq .L_803817E0
/* 803817CC 0037E70C  7F E3 FB 78 */	mr r3, r31
/* 803817D0 0037E710  4B D8 3A D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803817D4 0037E714  38 00 00 02 */	li r0, 2
/* 803817D8 0037E718  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803817DC 0037E71C  48 00 00 C8 */	b .L_803818A4
.L_803817E0:
/* 803817E0 0037E720  7F E3 FB 78 */	mr r3, r31
/* 803817E4 0037E724  48 00 42 D5 */	bl turnFunc__Q34Game8UmiMushi3ObjFv
/* 803817E8 0037E728  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803817EC 0037E72C  C0 42 09 AC */	lfs f2, lbl_8051ED0C@sda21(r2)
/* 803817F0 0037E730  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 803817F4 0037E734  C0 62 09 A8 */	lfs f3, lbl_8051ED08@sda21(r2)
/* 803817F8 0037E738  EC 02 00 32 */	fmuls f0, f2, f0
/* 803817FC 0037E73C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80381800 0037E740  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80381804 0037E744  40 80 00 A0 */	bge .L_803818A4
/* 80381808 0037E748  7F E3 FB 78 */	mr r3, r31
/* 8038180C 0037E74C  48 00 48 9D */	bl isAttackStart__Q34Game8UmiMushi3ObjFv
/* 80381810 0037E750  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381814 0037E754  41 82 00 18 */	beq .L_8038182C
/* 80381818 0037E758  7F E3 FB 78 */	mr r3, r31
/* 8038181C 0037E75C  4B D8 3A 85 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80381820 0037E760  38 00 00 06 */	li r0, 6
/* 80381824 0037E764  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80381828 0037E768  48 00 00 7C */	b .L_803818A4
.L_8038182C:
/* 8038182C 0037E76C  7F E3 FB 78 */	mr r3, r31
/* 80381830 0037E770  4B D8 3A 71 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80381834 0037E774  38 00 00 03 */	li r0, 3
/* 80381838 0037E778  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 8038183C 0037E77C  48 00 00 68 */	b .L_803818A4
.L_80381840:
/* 80381840 0037E780  2C 00 00 02 */	cmpwi r0, 2
/* 80381844 0037E784  41 82 00 3C */	beq .L_80381880
/* 80381848 0037E788  2C 00 00 05 */	cmpwi r0, 5
/* 8038184C 0037E78C  41 82 00 34 */	beq .L_80381880
/* 80381850 0037E790  7F E3 FB 78 */	mr r3, r31
/* 80381854 0037E794  48 00 42 65 */	bl turnFunc__Q34Game8UmiMushi3ObjFv
/* 80381858 0037E798  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8038185C 0037E79C  88 03 0A 12 */	lbz r0, 0xa12(r3)
/* 80381860 0037E7A0  28 00 00 00 */	cmplwi r0, 0
/* 80381864 0037E7A4  41 82 00 1C */	beq .L_80381880
/* 80381868 0037E7A8  7F E3 FB 78 */	mr r3, r31
/* 8038186C 0037E7AC  48 00 44 1D */	bl isChangeNavi__Q34Game8UmiMushi3ObjFv
/* 80381870 0037E7B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381874 0037E7B4  41 82 00 0C */	beq .L_80381880
/* 80381878 0037E7B8  38 00 00 02 */	li r0, 2
/* 8038187C 0037E7BC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80381880:
/* 80381880 0037E7C0  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 80381884 0037E7C4  2C 00 00 06 */	cmpwi r0, 6
/* 80381888 0037E7C8  40 82 00 1C */	bne .L_803818A4
/* 8038188C 0037E7CC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80381890 0037E7D0  4B DD 93 91 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80381894 0037E7D4  28 03 00 00 */	cmplwi r3, 0
/* 80381898 0037E7D8  40 82 00 0C */	bne .L_803818A4
/* 8038189C 0037E7DC  38 00 00 04 */	li r0, 4
/* 803818A0 0037E7E0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_803818A4:
/* 803818A4 0037E7E4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803818A8 0037E7E8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803818AC 0037E7EC  28 00 00 00 */	cmplwi r0, 0
/* 803818B0 0037E7F0  41 82 00 68 */	beq .L_80381918
/* 803818B4 0037E7F4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803818B8 0037E7F8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803818BC 0037E7FC  40 82 00 5C */	bne .L_80381918
/* 803818C0 0037E800  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 803818C4 0037E804  2C 00 00 00 */	cmpwi r0, 0
/* 803818C8 0037E808  40 80 00 1C */	bge .L_803818E4
/* 803818CC 0037E80C  3C 60 80 49 */	lis r3, lbl_804936A0@ha
/* 803818D0 0037E810  38 80 01 96 */	li r4, 0x196
/* 803818D4 0037E814  38 63 36 A0 */	addi r3, r3, lbl_804936A0@l
/* 803818D8 0037E818  38 A0 00 00 */	li r5, 0
/* 803818DC 0037E81C  4C C6 31 82 */	crclr 6
/* 803818E0 0037E820  4B CA 8D 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803818E4:
/* 803818E4 0037E824  7F C3 F3 78 */	mr r3, r30
/* 803818E8 0037E828  7F E4 FB 78 */	mr r4, r31
/* 803818EC 0037E82C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803818F0 0037E830  38 C0 00 00 */	li r6, 0
/* 803818F4 0037E834  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 803818F8 0037E838  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803818FC 0037E83C  7D 89 03 A6 */	mtctr r12
/* 80381900 0037E840  4E 80 04 21 */	bctrl 
/* 80381904 0037E844  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 80381908 0037E848  2C 00 00 05 */	cmpwi r0, 5
/* 8038190C 0037E84C  40 82 00 0C */	bne .L_80381918
/* 80381910 0037E850  38 00 00 04 */	li r0, 4
/* 80381914 0037E854  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80381918:
/* 80381918 0037E858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038191C 0037E85C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80381920 0037E860  83 C1 00 08 */	lwz r30, 8(r1)
/* 80381924 0037E864  7C 08 03 A6 */	mtlr r0
/* 80381928 0037E868  38 21 00 10 */	addi r1, r1, 0x10
/* 8038192C 0037E86C  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi10StateFlickFi
__ct__Q34Game8UmiMushi10StateFlickFi:
/* 80381930 0037E870  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80381934 0037E874  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 80381938 0037E878  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8038193C 0037E87C  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi10StateFlick@ha
/* 80381940 0037E880  90 03 00 00 */	stw r0, 0(r3)
/* 80381944 0037E884  38 E0 00 00 */	li r7, 0
/* 80381948 0037E888  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 8038194C 0037E88C  38 A5 44 1C */	addi r5, r5, __vt__Q34Game8UmiMushi10StateFlick@l
/* 80381950 0037E890  90 83 00 04 */	stw r4, 4(r3)
/* 80381954 0037E894  38 02 09 B0 */	addi r0, r2, lbl_8051ED10@sda21
/* 80381958 0037E898  90 E3 00 08 */	stw r7, 8(r3)
/* 8038195C 0037E89C  90 C3 00 00 */	stw r6, 0(r3)
/* 80381960 0037E8A0  90 A3 00 00 */	stw r5, 0(r3)
/* 80381964 0037E8A4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80381968 0037E8A8  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8038196C 0037E8AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80381970 0037E8B0  7C 08 02 A6 */	mflr r0
/* 80381974 0037E8B4  38 A0 00 00 */	li r5, 0
/* 80381978 0037E8B8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8038197C 0037E8BC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80381980 0037E8C0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80381984 0037E8C4  7C 9E 23 78 */	mr r30, r4
/* 80381988 0037E8C8  38 80 00 03 */	li r4, 3
/* 8038198C 0037E8CC  7F C3 F3 78 */	mr r3, r30
/* 80381990 0037E8D0  4B D8 36 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80381994 0037E8D4  7F C3 F3 78 */	mr r3, r30
/* 80381998 0037E8D8  48 00 55 15 */	bl flickEffect__Q34Game8UmiMushi3ObjFv
/* 8038199C 0037E8DC  7F C3 F3 78 */	mr r3, r30
/* 803819A0 0037E8E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803819A4 0037E8E4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 803819A8 0037E8E8  7D 89 03 A6 */	mtctr r12
/* 803819AC 0037E8EC  4E 80 04 21 */	bctrl 
/* 803819B0 0037E8F0  2C 03 00 47 */	cmpwi r3, 0x47
/* 803819B4 0037E8F4  40 82 01 00 */	bne .L_80381AB4
/* 803819B8 0037E8F8  7F C4 F3 78 */	mr r4, r30
/* 803819BC 0037E8FC  38 61 00 08 */	addi r3, r1, 8
/* 803819C0 0037E900  81 9E 00 00 */	lwz r12, 0(r30)
/* 803819C4 0037E904  81 8C 00 08 */	lwz r12, 8(r12)
/* 803819C8 0037E908  7D 89 03 A6 */	mtctr r12
/* 803819CC 0037E90C  4E 80 04 21 */	bctrl 
/* 803819D0 0037E910  C0 41 00 08 */	lfs f2, 8(r1)
/* 803819D4 0037E914  38 A1 00 14 */	addi r5, r1, 0x14
/* 803819D8 0037E918  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803819DC 0037E91C  38 80 00 09 */	li r4, 9
/* 803819E0 0037E920  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803819E4 0037E924  38 C0 00 02 */	li r6, 2
/* 803819E8 0037E928  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803819EC 0037E92C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803819F0 0037E930  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803819F4 0037E934  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803819F8 0037E938  4B ED 08 45 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803819FC 0037E93C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80381A00 0037E940  38 A1 00 14 */	addi r5, r1, 0x14
/* 80381A04 0037E944  38 80 00 0D */	li r4, 0xd
/* 80381A08 0037E948  38 C0 00 02 */	li r6, 2
/* 80381A0C 0037E94C  4B ED 1D 75 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80381A10 0037E950  83 DE 02 8C */	lwz r30, 0x28c(r30)
/* 80381A14 0037E954  3B E0 00 00 */	li r31, 0
/* 80381A18 0037E958  7F C3 F3 78 */	mr r3, r30
/* 80381A1C 0037E95C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381A20 0037E960  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381A24 0037E964  7D 89 03 A6 */	mtctr r12
/* 80381A28 0037E968  4E 80 04 21 */	bctrl 
/* 80381A2C 0037E96C  2C 03 00 05 */	cmpwi r3, 5
/* 80381A30 0037E970  41 82 00 3C */	beq .L_80381A6C
/* 80381A34 0037E974  7F C3 F3 78 */	mr r3, r30
/* 80381A38 0037E978  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381A3C 0037E97C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381A40 0037E980  7D 89 03 A6 */	mtctr r12
/* 80381A44 0037E984  4E 80 04 21 */	bctrl 
/* 80381A48 0037E988  2C 03 00 06 */	cmpwi r3, 6
/* 80381A4C 0037E98C  41 82 00 20 */	beq .L_80381A6C
/* 80381A50 0037E990  7F C3 F3 78 */	mr r3, r30
/* 80381A54 0037E994  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381A58 0037E998  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381A5C 0037E99C  7D 89 03 A6 */	mtctr r12
/* 80381A60 0037E9A0  4E 80 04 21 */	bctrl 
/* 80381A64 0037E9A4  2C 03 00 07 */	cmpwi r3, 7
/* 80381A68 0037E9A8  40 82 00 08 */	bne .L_80381A70
.L_80381A6C:
/* 80381A6C 0037E9AC  3B E0 00 01 */	li r31, 1
.L_80381A70:
/* 80381A70 0037E9B0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80381A74 0037E9B4  40 82 00 20 */	bne .L_80381A94
/* 80381A78 0037E9B8  3C 60 80 49 */	lis r3, lbl_804936B4@ha
/* 80381A7C 0037E9BC  3C A0 80 49 */	lis r5, lbl_804936CC@ha
/* 80381A80 0037E9C0  38 63 36 B4 */	addi r3, r3, lbl_804936B4@l
/* 80381A84 0037E9C4  38 80 04 54 */	li r4, 0x454
/* 80381A88 0037E9C8  38 A5 36 CC */	addi r5, r5, lbl_804936CC@l
/* 80381A8C 0037E9CC  4C C6 31 82 */	crclr 6
/* 80381A90 0037E9D0  4B CA 8B B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80381A94:
/* 80381A94 0037E9D4  28 1E 00 00 */	cmplwi r30, 0
/* 80381A98 0037E9D8  41 82 00 1C */	beq .L_80381AB4
/* 80381A9C 0037E9DC  7F C3 F3 78 */	mr r3, r30
/* 80381AA0 0037E9E0  38 80 00 04 */	li r4, 4
/* 80381AA4 0037E9E4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381AA8 0037E9E8  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80381AAC 0037E9EC  7D 89 03 A6 */	mtctr r12
/* 80381AB0 0037E9F0  4E 80 04 21 */	bctrl 
.L_80381AB4:
/* 80381AB4 0037E9F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80381AB8 0037E9F8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80381ABC 0037E9FC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80381AC0 0037EA00  7C 08 03 A6 */	mtlr r0
/* 80381AC4 0037EA04  38 21 00 30 */	addi r1, r1, 0x30
/* 80381AC8 0037EA08  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi10StateFlickFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi10StateFlickFPQ24Game9EnemyBase:
/* 80381ACC 0037EA0C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80381AD0 0037EA10  7C 08 02 A6 */	mflr r0
/* 80381AD4 0037EA14  90 01 00 54 */	stw r0, 0x54(r1)
/* 80381AD8 0037EA18  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80381ADC 0037EA1C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80381AE0 0037EA20  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80381AE4 0037EA24  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80381AE8 0037EA28  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80381AEC 0037EA2C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80381AF0 0037EA30  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 80381AF4 0037EA34  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 80381AF8 0037EA38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80381AFC 0037EA3C  93 C1 00 08 */	stw r30, 8(r1)
/* 80381B00 0037EA40  7C 9F 23 78 */	mr r31, r4
/* 80381B04 0037EA44  7C 7E 1B 78 */	mr r30, r3
/* 80381B08 0037EA48  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80381B0C 0037EA4C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80381B10 0037EA50  28 00 00 00 */	cmplwi r0, 0
/* 80381B14 0037EA54  41 82 01 10 */	beq .L_80381C24
/* 80381B18 0037EA58  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80381B1C 0037EA5C  28 00 00 02 */	cmplwi r0, 2
/* 80381B20 0037EA60  40 82 00 78 */	bne .L_80381B98
/* 80381B24 0037EA64  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80381B28 0037EA68  7F E3 FB 78 */	mr r3, r31
/* 80381B2C 0037EA6C  C0 82 09 B8 */	lfs f4, lbl_8051ED18@sda21(r2)
/* 80381B30 0037EA70  38 80 00 00 */	li r4, 0
/* 80381B34 0037EA74  C3 C5 04 C4 */	lfs f30, 0x4c4(r5)
/* 80381B38 0037EA78  C3 A5 04 EC */	lfs f29, 0x4ec(r5)
/* 80381B3C 0037EA7C  C3 85 05 14 */	lfs f28, 0x514(r5)
/* 80381B40 0037EA80  FC 40 F0 90 */	fmr f2, f30
/* 80381B44 0037EA84  FC 60 E8 90 */	fmr f3, f29
/* 80381B48 0037EA88  C3 E5 05 3C */	lfs f31, 0x53c(r5)
/* 80381B4C 0037EA8C  FC 20 E0 90 */	fmr f1, f28
/* 80381B50 0037EA90  4B D9 19 85 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80381B54 0037EA94  FC 20 F8 90 */	fmr f1, f31
/* 80381B58 0037EA98  C0 82 09 B8 */	lfs f4, lbl_8051ED18@sda21(r2)
/* 80381B5C 0037EA9C  FC 40 F0 90 */	fmr f2, f30
/* 80381B60 0037EAA0  7F E3 FB 78 */	mr r3, r31
/* 80381B64 0037EAA4  FC 60 E8 90 */	fmr f3, f29
/* 80381B68 0037EAA8  38 80 00 00 */	li r4, 0
/* 80381B6C 0037EAAC  4B D9 15 B1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80381B70 0037EAB0  FC 20 E0 90 */	fmr f1, f28
/* 80381B74 0037EAB4  C0 82 09 B8 */	lfs f4, lbl_8051ED18@sda21(r2)
/* 80381B78 0037EAB8  FC 40 F0 90 */	fmr f2, f30
/* 80381B7C 0037EABC  7F E3 FB 78 */	mr r3, r31
/* 80381B80 0037EAC0  FC 60 E8 90 */	fmr f3, f29
/* 80381B84 0037EAC4  38 80 00 00 */	li r4, 0
/* 80381B88 0037EAC8  4B D9 1C 09 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 80381B8C 0037EACC  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80381B90 0037EAD0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80381B94 0037EAD4  48 00 00 90 */	b .L_80381C24
.L_80381B98:
/* 80381B98 0037EAD8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80381B9C 0037EADC  40 82 00 88 */	bne .L_80381C24
/* 80381BA0 0037EAE0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80381BA4 0037EAE4  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80381BA8 0037EAE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80381BAC 0037EAEC  4C 40 13 82 */	cror 2, 0, 2
/* 80381BB0 0037EAF0  40 82 00 20 */	bne .L_80381BD0
/* 80381BB4 0037EAF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80381BB8 0037EAF8  38 A0 00 08 */	li r5, 8
/* 80381BBC 0037EAFC  38 C0 00 00 */	li r6, 0
/* 80381BC0 0037EB00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381BC4 0037EB04  7D 89 03 A6 */	mtctr r12
/* 80381BC8 0037EB08  4E 80 04 21 */	bctrl 
/* 80381BCC 0037EB0C  48 00 00 58 */	b .L_80381C24
.L_80381BD0:
/* 80381BD0 0037EB10  7F E3 FB 78 */	mr r3, r31
/* 80381BD4 0037EB14  48 00 40 B5 */	bl isChangeNavi__Q34Game8UmiMushi3ObjFv
/* 80381BD8 0037EB18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381BDC 0037EB1C  41 82 00 28 */	beq .L_80381C04
/* 80381BE0 0037EB20  7F C3 F3 78 */	mr r3, r30
/* 80381BE4 0037EB24  7F E4 FB 78 */	mr r4, r31
/* 80381BE8 0037EB28  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381BEC 0037EB2C  38 A0 00 02 */	li r5, 2
/* 80381BF0 0037EB30  38 C0 00 00 */	li r6, 0
/* 80381BF4 0037EB34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381BF8 0037EB38  7D 89 03 A6 */	mtctr r12
/* 80381BFC 0037EB3C  4E 80 04 21 */	bctrl 
/* 80381C00 0037EB40  48 00 00 24 */	b .L_80381C24
.L_80381C04:
/* 80381C04 0037EB44  7F C3 F3 78 */	mr r3, r30
/* 80381C08 0037EB48  7F E4 FB 78 */	mr r4, r31
/* 80381C0C 0037EB4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381C10 0037EB50  38 C0 00 00 */	li r6, 0
/* 80381C14 0037EB54  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 80381C18 0037EB58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381C1C 0037EB5C  7D 89 03 A6 */	mtctr r12
/* 80381C20 0037EB60  4E 80 04 21 */	bctrl 
.L_80381C24:
/* 80381C24 0037EB64  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80381C28 0037EB68  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80381C2C 0037EB6C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80381C30 0037EB70  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80381C34 0037EB74  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80381C38 0037EB78  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80381C3C 0037EB7C  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 80381C40 0037EB80  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 80381C44 0037EB84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80381C48 0037EB88  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80381C4C 0037EB8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80381C50 0037EB90  7C 08 03 A6 */	mtlr r0
/* 80381C54 0037EB94  38 21 00 50 */	addi r1, r1, 0x50
/* 80381C58 0037EB98  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi11StateAttackFi
__ct__Q34Game8UmiMushi11StateAttackFi:
/* 80381C5C 0037EB9C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80381C60 0037EBA0  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 80381C64 0037EBA4  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80381C68 0037EBA8  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi11StateAttack@ha
/* 80381C6C 0037EBAC  90 03 00 00 */	stw r0, 0(r3)
/* 80381C70 0037EBB0  38 E0 00 00 */	li r7, 0
/* 80381C74 0037EBB4  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 80381C78 0037EBB8  38 A5 43 F8 */	addi r5, r5, __vt__Q34Game8UmiMushi11StateAttack@l
/* 80381C7C 0037EBBC  90 83 00 04 */	stw r4, 4(r3)
/* 80381C80 0037EBC0  38 02 09 BC */	addi r0, r2, lbl_8051ED1C@sda21
/* 80381C84 0037EBC4  90 E3 00 08 */	stw r7, 8(r3)
/* 80381C88 0037EBC8  90 C3 00 00 */	stw r6, 0(r3)
/* 80381C8C 0037EBCC  90 A3 00 00 */	stw r5, 0(r3)
/* 80381C90 0037EBD0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80381C94 0037EBD4  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80381C98 0037EBD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80381C9C 0037EBDC  7C 08 02 A6 */	mflr r0
/* 80381CA0 0037EBE0  38 A0 00 00 */	li r5, 0
/* 80381CA4 0037EBE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80381CA8 0037EBE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80381CAC 0037EBEC  7C 7F 1B 78 */	mr r31, r3
/* 80381CB0 0037EBF0  93 C1 00 08 */	stw r30, 8(r1)
/* 80381CB4 0037EBF4  7C 9E 23 78 */	mr r30, r4
/* 80381CB8 0037EBF8  7F C3 F3 78 */	mr r3, r30
/* 80381CBC 0037EBFC  38 80 00 00 */	li r4, 0
/* 80381CC0 0037EC00  4B D8 33 45 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80381CC4 0037EC04  38 60 FF FF */	li r3, -1
/* 80381CC8 0037EC08  38 00 00 00 */	li r0, 0
/* 80381CCC 0037EC0C  90 7E 02 C8 */	stw r3, 0x2c8(r30)
/* 80381CD0 0037EC10  7F C3 F3 78 */	mr r3, r30
/* 80381CD4 0037EC14  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80381CD8 0037EC18  98 1F 00 11 */	stb r0, 0x11(r31)
/* 80381CDC 0037EC1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80381CE0 0037EC20  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80381CE4 0037EC24  7D 89 03 A6 */	mtctr r12
/* 80381CE8 0037EC28  4E 80 04 21 */	bctrl 
/* 80381CEC 0037EC2C  2C 03 00 47 */	cmpwi r3, 0x47
/* 80381CF0 0037EC30  40 82 00 A8 */	bne .L_80381D98
/* 80381CF4 0037EC34  83 DE 02 8C */	lwz r30, 0x28c(r30)
/* 80381CF8 0037EC38  3B E0 00 00 */	li r31, 0
/* 80381CFC 0037EC3C  7F C3 F3 78 */	mr r3, r30
/* 80381D00 0037EC40  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381D04 0037EC44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381D08 0037EC48  7D 89 03 A6 */	mtctr r12
/* 80381D0C 0037EC4C  4E 80 04 21 */	bctrl 
/* 80381D10 0037EC50  2C 03 00 05 */	cmpwi r3, 5
/* 80381D14 0037EC54  41 82 00 3C */	beq .L_80381D50
/* 80381D18 0037EC58  7F C3 F3 78 */	mr r3, r30
/* 80381D1C 0037EC5C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381D20 0037EC60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381D24 0037EC64  7D 89 03 A6 */	mtctr r12
/* 80381D28 0037EC68  4E 80 04 21 */	bctrl 
/* 80381D2C 0037EC6C  2C 03 00 06 */	cmpwi r3, 6
/* 80381D30 0037EC70  41 82 00 20 */	beq .L_80381D50
/* 80381D34 0037EC74  7F C3 F3 78 */	mr r3, r30
/* 80381D38 0037EC78  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381D3C 0037EC7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80381D40 0037EC80  7D 89 03 A6 */	mtctr r12
/* 80381D44 0037EC84  4E 80 04 21 */	bctrl 
/* 80381D48 0037EC88  2C 03 00 07 */	cmpwi r3, 7
/* 80381D4C 0037EC8C  40 82 00 08 */	bne .L_80381D54
.L_80381D50:
/* 80381D50 0037EC90  3B E0 00 01 */	li r31, 1
.L_80381D54:
/* 80381D54 0037EC94  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80381D58 0037EC98  40 82 00 20 */	bne .L_80381D78
/* 80381D5C 0037EC9C  3C 60 80 49 */	lis r3, lbl_804936B4@ha
/* 80381D60 0037ECA0  3C A0 80 49 */	lis r5, lbl_804936CC@ha
/* 80381D64 0037ECA4  38 63 36 B4 */	addi r3, r3, lbl_804936B4@l
/* 80381D68 0037ECA8  38 80 04 54 */	li r4, 0x454
/* 80381D6C 0037ECAC  38 A5 36 CC */	addi r5, r5, lbl_804936CC@l
/* 80381D70 0037ECB0  4C C6 31 82 */	crclr 6
/* 80381D74 0037ECB4  4B CA 88 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80381D78:
/* 80381D78 0037ECB8  28 1E 00 00 */	cmplwi r30, 0
/* 80381D7C 0037ECBC  41 82 00 1C */	beq .L_80381D98
/* 80381D80 0037ECC0  7F C3 F3 78 */	mr r3, r30
/* 80381D84 0037ECC4  38 80 00 03 */	li r4, 3
/* 80381D88 0037ECC8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 80381D8C 0037ECCC  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80381D90 0037ECD0  7D 89 03 A6 */	mtctr r12
/* 80381D94 0037ECD4  4E 80 04 21 */	bctrl 
.L_80381D98:
/* 80381D98 0037ECD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80381D9C 0037ECDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80381DA0 0037ECE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80381DA4 0037ECE4  7C 08 03 A6 */	mtlr r0
/* 80381DA8 0037ECE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80381DAC 0037ECEC  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi11StateAttackFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi11StateAttackFPQ24Game9EnemyBase:
/* 80381DB0 0037ECF0  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80381DB4 0037ECF4  7C 08 02 A6 */	mflr r0
/* 80381DB8 0037ECF8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80381DBC 0037ECFC  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80381DC0 0037ED00  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80381DC4 0037ED04  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80381DC8 0037ED08  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80381DCC 0037ED0C  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80381DD0 0037ED10  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 80381DD4 0037ED14  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80381DD8 0037ED18  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80381DDC 0037ED1C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80381DE0 0037ED20  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80381DE4 0037ED24  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80381DE8 0037ED28  93 81 00 60 */	stw r28, 0x60(r1)
/* 80381DEC 0037ED2C  7C 7C 1B 78 */	mr r28, r3
/* 80381DF0 0037ED30  7C 9F 23 78 */	mr r31, r4
/* 80381DF4 0037ED34  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80381DF8 0037ED38  28 00 00 00 */	cmplwi r0, 0
/* 80381DFC 0037ED3C  41 82 00 20 */	beq .L_80381E1C
/* 80381E00 0037ED40  7F E3 FB 78 */	mr r3, r31
/* 80381E04 0037ED44  38 80 00 00 */	li r4, 0
/* 80381E08 0037ED48  4B D9 1D 2D */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 80381E0C 0037ED4C  2C 03 00 00 */	cmpwi r3, 0
/* 80381E10 0037ED50  40 81 00 0C */	ble .L_80381E1C
/* 80381E14 0037ED54  38 00 00 01 */	li r0, 1
/* 80381E18 0037ED58  98 1C 00 11 */	stb r0, 0x11(r28)
.L_80381E1C:
/* 80381E1C 0037ED5C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80381E20 0037ED60  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80381E24 0037ED64  28 00 00 00 */	cmplwi r0, 0
/* 80381E28 0037ED68  41 82 04 68 */	beq .L_80382290
/* 80381E2C 0037ED6C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80381E30 0037ED70  2C 00 00 05 */	cmpwi r0, 5
/* 80381E34 0037ED74  41 82 00 A8 */	beq .L_80381EDC
/* 80381E38 0037ED78  40 80 00 14 */	bge .L_80381E4C
/* 80381E3C 0037ED7C  2C 00 00 03 */	cmpwi r0, 3
/* 80381E40 0037ED80  41 82 00 24 */	beq .L_80381E64
/* 80381E44 0037ED84  40 80 00 2C */	bge .L_80381E70
/* 80381E48 0037ED88  48 00 04 48 */	b .L_80382290
.L_80381E4C:
/* 80381E4C 0037ED8C  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80381E50 0037ED90  41 82 03 F0 */	beq .L_80382240
/* 80381E54 0037ED94  40 80 04 3C */	bge .L_80382290
/* 80381E58 0037ED98  2C 00 00 07 */	cmpwi r0, 7
/* 80381E5C 0037ED9C  40 80 04 34 */	bge .L_80382290
/* 80381E60 0037EDA0  48 00 03 64 */	b .L_803821C4
.L_80381E64:
/* 80381E64 0037EDA4  38 00 00 01 */	li r0, 1
/* 80381E68 0037EDA8  98 1C 00 10 */	stb r0, 0x10(r28)
/* 80381E6C 0037EDAC  48 00 04 24 */	b .L_80382290
.L_80381E70:
/* 80381E70 0037EDB0  7F E3 FB 78 */	mr r3, r31
/* 80381E74 0037EDB4  48 00 4E B9 */	bl attackEffect__Q34Game8UmiMushi3ObjFv
/* 80381E78 0037EDB8  7F E3 FB 78 */	mr r3, r31
/* 80381E7C 0037EDBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80381E80 0037EDC0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80381E84 0037EDC4  7D 89 03 A6 */	mtctr r12
/* 80381E88 0037EDC8  4E 80 04 21 */	bctrl 
/* 80381E8C 0037EDCC  2C 03 00 47 */	cmpwi r3, 0x47
/* 80381E90 0037EDD0  40 82 04 00 */	bne .L_80382290
/* 80381E94 0037EDD4  7F E4 FB 78 */	mr r4, r31
/* 80381E98 0037EDD8  38 61 00 14 */	addi r3, r1, 0x14
/* 80381E9C 0037EDDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80381EA0 0037EDE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80381EA4 0037EDE4  7D 89 03 A6 */	mtctr r12
/* 80381EA8 0037EDE8  4E 80 04 21 */	bctrl 
/* 80381EAC 0037EDEC  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80381EB0 0037EDF0  38 A1 00 4C */	addi r5, r1, 0x4c
/* 80381EB4 0037EDF4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80381EB8 0037EDF8  38 80 00 0C */	li r4, 0xc
/* 80381EBC 0037EDFC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80381EC0 0037EE00  38 C0 00 02 */	li r6, 2
/* 80381EC4 0037EE04  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 80381EC8 0037EE08  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80381ECC 0037EE0C  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80381ED0 0037EE10  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80381ED4 0037EE14  4B ED 18 AD */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80381ED8 0037EE18  48 00 03 B8 */	b .L_80382290
.L_80381EDC:
/* 80381EDC 0037EE1C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80381EE0 0037EE20  88 03 0A 13 */	lbz r0, 0xa13(r3)
/* 80381EE4 0037EE24  28 00 00 00 */	cmplwi r0, 0
/* 80381EE8 0037EE28  41 82 03 A8 */	beq .L_80382290
/* 80381EEC 0037EE2C  38 00 00 00 */	li r0, 0
/* 80381EF0 0037EE30  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80381EF4 0037EE34  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80381EF8 0037EE38  90 01 00 48 */	stw r0, 0x48(r1)
/* 80381EFC 0037EE3C  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80381F00 0037EE40  28 00 00 00 */	cmplwi r0, 0
/* 80381F04 0037EE44  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80381F08 0037EE48  90 01 00 40 */	stw r0, 0x40(r1)
/* 80381F0C 0037EE4C  90 61 00 44 */	stw r3, 0x44(r1)
/* 80381F10 0037EE50  40 82 00 1C */	bne .L_80381F2C
/* 80381F14 0037EE54  81 83 00 00 */	lwz r12, 0(r3)
/* 80381F18 0037EE58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80381F1C 0037EE5C  7D 89 03 A6 */	mtctr r12
/* 80381F20 0037EE60  4E 80 04 21 */	bctrl 
/* 80381F24 0037EE64  90 61 00 40 */	stw r3, 0x40(r1)
/* 80381F28 0037EE68  48 00 00 8C */	b .L_80381FB4
.L_80381F2C:
/* 80381F2C 0037EE6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80381F30 0037EE70  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80381F34 0037EE74  7D 89 03 A6 */	mtctr r12
/* 80381F38 0037EE78  4E 80 04 21 */	bctrl 
/* 80381F3C 0037EE7C  90 61 00 40 */	stw r3, 0x40(r1)
/* 80381F40 0037EE80  48 00 00 58 */	b .L_80381F98
.L_80381F44:
/* 80381F44 0037EE84  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80381F48 0037EE88  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80381F4C 0037EE8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80381F50 0037EE90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80381F54 0037EE94  7D 89 03 A6 */	mtctr r12
/* 80381F58 0037EE98  4E 80 04 21 */	bctrl 
/* 80381F5C 0037EE9C  7C 64 1B 78 */	mr r4, r3
/* 80381F60 0037EEA0  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80381F64 0037EEA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80381F68 0037EEA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80381F6C 0037EEAC  7D 89 03 A6 */	mtctr r12
/* 80381F70 0037EEB0  4E 80 04 21 */	bctrl 
/* 80381F74 0037EEB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381F78 0037EEB8  40 82 00 3C */	bne .L_80381FB4
/* 80381F7C 0037EEBC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80381F80 0037EEC0  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80381F84 0037EEC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80381F88 0037EEC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80381F8C 0037EECC  7D 89 03 A6 */	mtctr r12
/* 80381F90 0037EED0  4E 80 04 21 */	bctrl 
/* 80381F94 0037EED4  90 61 00 40 */	stw r3, 0x40(r1)
.L_80381F98:
/* 80381F98 0037EED8  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 80381F9C 0037EEDC  38 61 00 3C */	addi r3, r1, 0x3c
/* 80381FA0 0037EEE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80381FA4 0037EEE4  7D 89 03 A6 */	mtctr r12
/* 80381FA8 0037EEE8  4E 80 04 21 */	bctrl 
/* 80381FAC 0037EEEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80381FB0 0037EEF0  41 82 FF 94 */	beq .L_80381F44
.L_80381FB4:
/* 80381FB4 0037EEF4  C3 E2 09 70 */	lfs f31, lbl_8051ECD0@sda21(r2)
/* 80381FB8 0037EEF8  48 00 01 E8 */	b .L_803821A0
.L_80381FBC:
/* 80381FBC 0037EEFC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80381FC0 0037EF00  81 83 00 00 */	lwz r12, 0(r3)
/* 80381FC4 0037EF04  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80381FC8 0037EF08  7D 89 03 A6 */	mtctr r12
/* 80381FCC 0037EF0C  4E 80 04 21 */	bctrl 
/* 80381FD0 0037EF10  3B 80 00 00 */	li r28, 0
/* 80381FD4 0037EF14  7C 7D 1B 78 */	mr r29, r3
/* 80381FD8 0037EF18  48 00 00 EC */	b .L_803820C4
.L_80381FDC:
/* 80381FDC 0037EF1C  7F E3 FB 78 */	mr r3, r31
/* 80381FE0 0037EF20  81 9F 00 00 */	lwz r12, 0(r31)
/* 80381FE4 0037EF24  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 80381FE8 0037EF28  7D 89 03 A6 */	mtctr r12
/* 80381FEC 0037EF2C  4E 80 04 21 */	bctrl 
/* 80381FF0 0037EF30  7F 84 E3 78 */	mr r4, r28
/* 80381FF4 0037EF34  4B DB 67 85 */	bl getSlot__10MouthSlotsFi
/* 80381FF8 0037EF38  7C 7E 1B 78 */	mr r30, r3
/* 80381FFC 0037EF3C  38 81 00 30 */	addi r4, r1, 0x30
/* 80382000 0037EF40  4B DB 64 C9 */	bl "getPosition__13MouthCollPartFR10Vector3<f>"
/* 80382004 0037EF44  7F A4 EB 78 */	mr r4, r29
/* 80382008 0037EF48  38 61 00 08 */	addi r3, r1, 8
/* 8038200C 0037EF4C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80382010 0037EF50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80382014 0037EF54  7D 89 03 A6 */	mtctr r12
/* 80382018 0037EF58  4E 80 04 21 */	bctrl 
/* 8038201C 0037EF5C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80382020 0037EF60  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80382024 0037EF64  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 80382028 0037EF68  EC 81 00 28 */	fsubs f4, f1, f0
/* 8038202C 0037EF6C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80382030 0037EF70  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80382034 0037EF74  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80382038 0037EF78  EC 43 10 28 */	fsubs f2, f3, f2
/* 8038203C 0037EF7C  EC 64 01 32 */	fmuls f3, f4, f4
/* 80382040 0037EF80  EC 21 00 28 */	fsubs f1, f1, f0
/* 80382044 0037EF84  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 80382048 0037EF88  EC 21 00 72 */	fmuls f1, f1, f1
/* 8038204C 0037EF8C  EC 21 00 2A */	fadds f1, f1, f0
/* 80382050 0037EF90  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80382054 0037EF94  40 81 00 14 */	ble .L_80382068
/* 80382058 0037EF98  40 81 00 14 */	ble .L_8038206C
/* 8038205C 0037EF9C  FC 00 08 34 */	frsqrte f0, f1
/* 80382060 0037EFA0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80382064 0037EFA4  48 00 00 08 */	b .L_8038206C
.L_80382068:
/* 80382068 0037EFA8  FC 20 F8 90 */	fmr f1, f31
.L_8038206C:
/* 8038206C 0037EFAC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 80382070 0037EFB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80382074 0037EFB4  40 80 00 4C */	bge .L_803820C0
/* 80382078 0037EFB8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8038207C 0037EFBC  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80382080 0037EFC0  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 80382084 0037EFC4  38 00 00 00 */	li r0, 0
/* 80382088 0037EFC8  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 8038208C 0037EFCC  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 80382090 0037EFD0  38 A3 4D E0 */	addi r5, r3, __vt__Q24Game14InteractAttack@l
/* 80382094 0037EFD4  7F A3 EB 78 */	mr r3, r29
/* 80382098 0037EFD8  90 81 00 20 */	stw r4, 0x20(r1)
/* 8038209C 0037EFDC  38 81 00 20 */	addi r4, r1, 0x20
/* 803820A0 0037EFE0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 803820A4 0037EFE4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803820A8 0037EFE8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803820AC 0037EFEC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 803820B0 0037EFF0  81 9D 00 00 */	lwz r12, 0(r29)
/* 803820B4 0037EFF4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803820B8 0037EFF8  7D 89 03 A6 */	mtctr r12
/* 803820BC 0037EFFC  4E 80 04 21 */	bctrl 
.L_803820C0:
/* 803820C0 0037F000  3B 9C 00 01 */	addi r28, r28, 1
.L_803820C4:
/* 803820C4 0037F004  7F E3 FB 78 */	mr r3, r31
/* 803820C8 0037F008  81 9F 00 00 */	lwz r12, 0(r31)
/* 803820CC 0037F00C  81 8C 02 5C */	lwz r12, 0x25c(r12)
/* 803820D0 0037F010  7D 89 03 A6 */	mtctr r12
/* 803820D4 0037F014  4E 80 04 21 */	bctrl 
/* 803820D8 0037F018  80 03 00 00 */	lwz r0, 0(r3)
/* 803820DC 0037F01C  7C 1C 00 00 */	cmpw r28, r0
/* 803820E0 0037F020  41 80 FE FC */	blt .L_80381FDC
/* 803820E4 0037F024  80 01 00 48 */	lwz r0, 0x48(r1)
/* 803820E8 0037F028  28 00 00 00 */	cmplwi r0, 0
/* 803820EC 0037F02C  40 82 00 24 */	bne .L_80382110
/* 803820F0 0037F030  80 61 00 44 */	lwz r3, 0x44(r1)
/* 803820F4 0037F034  80 81 00 40 */	lwz r4, 0x40(r1)
/* 803820F8 0037F038  81 83 00 00 */	lwz r12, 0(r3)
/* 803820FC 0037F03C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80382100 0037F040  7D 89 03 A6 */	mtctr r12
/* 80382104 0037F044  4E 80 04 21 */	bctrl 
/* 80382108 0037F048  90 61 00 40 */	stw r3, 0x40(r1)
/* 8038210C 0037F04C  48 00 00 94 */	b .L_803821A0
.L_80382110:
/* 80382110 0037F050  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80382114 0037F054  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80382118 0037F058  81 83 00 00 */	lwz r12, 0(r3)
/* 8038211C 0037F05C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80382120 0037F060  7D 89 03 A6 */	mtctr r12
/* 80382124 0037F064  4E 80 04 21 */	bctrl 
/* 80382128 0037F068  90 61 00 40 */	stw r3, 0x40(r1)
/* 8038212C 0037F06C  48 00 00 58 */	b .L_80382184
.L_80382130:
/* 80382130 0037F070  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80382134 0037F074  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80382138 0037F078  81 83 00 00 */	lwz r12, 0(r3)
/* 8038213C 0037F07C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80382140 0037F080  7D 89 03 A6 */	mtctr r12
/* 80382144 0037F084  4E 80 04 21 */	bctrl 
/* 80382148 0037F088  7C 64 1B 78 */	mr r4, r3
/* 8038214C 0037F08C  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80382150 0037F090  81 83 00 00 */	lwz r12, 0(r3)
/* 80382154 0037F094  81 8C 00 08 */	lwz r12, 8(r12)
/* 80382158 0037F098  7D 89 03 A6 */	mtctr r12
/* 8038215C 0037F09C  4E 80 04 21 */	bctrl 
/* 80382160 0037F0A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80382164 0037F0A4  40 82 00 3C */	bne .L_803821A0
/* 80382168 0037F0A8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8038216C 0037F0AC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80382170 0037F0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80382174 0037F0B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80382178 0037F0B8  7D 89 03 A6 */	mtctr r12
/* 8038217C 0037F0BC  4E 80 04 21 */	bctrl 
/* 80382180 0037F0C0  90 61 00 40 */	stw r3, 0x40(r1)
.L_80382184:
/* 80382184 0037F0C4  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 80382188 0037F0C8  38 61 00 3C */	addi r3, r1, 0x3c
/* 8038218C 0037F0CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80382190 0037F0D0  7D 89 03 A6 */	mtctr r12
/* 80382194 0037F0D4  4E 80 04 21 */	bctrl 
/* 80382198 0037F0D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8038219C 0037F0DC  41 82 FF 94 */	beq .L_80382130
.L_803821A0:
/* 803821A0 0037F0E0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 803821A4 0037F0E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803821A8 0037F0E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803821AC 0037F0EC  7D 89 03 A6 */	mtctr r12
/* 803821B0 0037F0F0  4E 80 04 21 */	bctrl 
/* 803821B4 0037F0F4  80 81 00 40 */	lwz r4, 0x40(r1)
/* 803821B8 0037F0F8  7C 04 18 40 */	cmplw r4, r3
/* 803821BC 0037F0FC  40 82 FE 00 */	bne .L_80381FBC
/* 803821C0 0037F100  48 00 00 D0 */	b .L_80382290
.L_803821C4:
/* 803821C4 0037F104  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 803821C8 0037F108  7F E3 FB 78 */	mr r3, r31
/* 803821CC 0037F10C  C0 82 09 B8 */	lfs f4, lbl_8051ED18@sda21(r2)
/* 803821D0 0037F110  38 80 00 00 */	li r4, 0
/* 803821D4 0037F114  C3 C5 04 C4 */	lfs f30, 0x4c4(r5)
/* 803821D8 0037F118  C3 A5 04 EC */	lfs f29, 0x4ec(r5)
/* 803821DC 0037F11C  C3 85 05 14 */	lfs f28, 0x514(r5)
/* 803821E0 0037F120  FC 40 F0 90 */	fmr f2, f30
/* 803821E4 0037F124  FC 60 E8 90 */	fmr f3, f29
/* 803821E8 0037F128  C3 E5 05 3C */	lfs f31, 0x53c(r5)
/* 803821EC 0037F12C  FC 20 E0 90 */	fmr f1, f28
/* 803821F0 0037F130  4B D9 12 E5 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803821F4 0037F134  FC 20 F8 90 */	fmr f1, f31
/* 803821F8 0037F138  C0 82 09 B8 */	lfs f4, lbl_8051ED18@sda21(r2)
/* 803821FC 0037F13C  FC 40 F0 90 */	fmr f2, f30
/* 80382200 0037F140  7F E3 FB 78 */	mr r3, r31
/* 80382204 0037F144  FC 60 E8 90 */	fmr f3, f29
/* 80382208 0037F148  38 80 00 00 */	li r4, 0
/* 8038220C 0037F14C  4B D9 0F 11 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80382210 0037F150  FC 20 E0 90 */	fmr f1, f28
/* 80382214 0037F154  C0 82 09 B8 */	lfs f4, lbl_8051ED18@sda21(r2)
/* 80382218 0037F158  FC 40 F0 90 */	fmr f2, f30
/* 8038221C 0037F15C  7F E3 FB 78 */	mr r3, r31
/* 80382220 0037F160  FC 60 E8 90 */	fmr f3, f29
/* 80382224 0037F164  38 80 00 00 */	li r4, 0
/* 80382228 0037F168  4B D9 15 69 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 8038222C 0037F16C  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80382230 0037F170  38 00 00 00 */	li r0, 0
/* 80382234 0037F174  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80382238 0037F178  98 1C 00 10 */	stb r0, 0x10(r28)
/* 8038223C 0037F17C  48 00 00 54 */	b .L_80382290
.L_80382240:
/* 80382240 0037F180  88 1C 00 11 */	lbz r0, 0x11(r28)
/* 80382244 0037F184  28 00 00 00 */	cmplwi r0, 0
/* 80382248 0037F188  41 82 00 28 */	beq .L_80382270
/* 8038224C 0037F18C  7F 83 E3 78 */	mr r3, r28
/* 80382250 0037F190  7F E4 FB 78 */	mr r4, r31
/* 80382254 0037F194  81 9C 00 00 */	lwz r12, 0(r28)
/* 80382258 0037F198  38 A0 00 07 */	li r5, 7
/* 8038225C 0037F19C  38 C0 00 00 */	li r6, 0
/* 80382260 0037F1A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80382264 0037F1A4  7D 89 03 A6 */	mtctr r12
/* 80382268 0037F1A8  4E 80 04 21 */	bctrl 
/* 8038226C 0037F1AC  48 00 00 24 */	b .L_80382290
.L_80382270:
/* 80382270 0037F1B0  7F 83 E3 78 */	mr r3, r28
/* 80382274 0037F1B4  7F E4 FB 78 */	mr r4, r31
/* 80382278 0037F1B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8038227C 0037F1BC  38 A0 00 00 */	li r5, 0
/* 80382280 0037F1C0  38 C0 00 00 */	li r6, 0
/* 80382284 0037F1C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80382288 0037F1C8  7D 89 03 A6 */	mtctr r12
/* 8038228C 0037F1CC  4E 80 04 21 */	bctrl 
.L_80382290:
/* 80382290 0037F1D0  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80382294 0037F1D4  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80382298 0037F1D8  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 8038229C 0037F1DC  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 803822A0 0037F1E0  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 803822A4 0037F1E4  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 803822A8 0037F1E8  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 803822AC 0037F1EC  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 803822B0 0037F1F0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803822B4 0037F1F4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803822B8 0037F1F8  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 803822BC 0037F1FC  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 803822C0 0037F200  83 81 00 60 */	lwz r28, 0x60(r1)
/* 803822C4 0037F204  7C 08 03 A6 */	mtlr r0
/* 803822C8 0037F208  38 21 00 B0 */	addi r1, r1, 0xb0
/* 803822CC 0037F20C  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi8StateEatFi
__ct__Q34Game8UmiMushi8StateEatFi:
/* 803822D0 0037F210  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803822D4 0037F214  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 803822D8 0037F218  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803822DC 0037F21C  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi8StateEat@ha
/* 803822E0 0037F220  90 03 00 00 */	stw r0, 0(r3)
/* 803822E4 0037F224  38 E0 00 00 */	li r7, 0
/* 803822E8 0037F228  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 803822EC 0037F22C  38 A5 43 D4 */	addi r5, r5, __vt__Q34Game8UmiMushi8StateEat@l
/* 803822F0 0037F230  90 83 00 04 */	stw r4, 4(r3)
/* 803822F4 0037F234  38 02 09 C4 */	addi r0, r2, lbl_8051ED24@sda21
/* 803822F8 0037F238  90 E3 00 08 */	stw r7, 8(r3)
/* 803822FC 0037F23C  90 C3 00 00 */	stw r6, 0(r3)
/* 80382300 0037F240  90 A3 00 00 */	stw r5, 0(r3)
/* 80382304 0037F244  90 03 00 0C */	stw r0, 0xc(r3)
/* 80382308 0037F248  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8038230C 0037F24C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80382310 0037F250  7C 08 02 A6 */	mflr r0
/* 80382314 0037F254  38 A0 00 00 */	li r5, 0
/* 80382318 0037F258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038231C 0037F25C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80382320 0037F260  7C 9F 23 78 */	mr r31, r4
/* 80382324 0037F264  38 80 00 02 */	li r4, 2
/* 80382328 0037F268  7F E3 FB 78 */	mr r3, r31
/* 8038232C 0037F26C  4B D8 2C D9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80382330 0037F270  7F E3 FB 78 */	mr r3, r31
/* 80382334 0037F274  48 00 4C 85 */	bl eatEffect__Q34Game8UmiMushi3ObjFv
/* 80382338 0037F278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038233C 0037F27C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80382340 0037F280  7C 08 03 A6 */	mtlr r0
/* 80382344 0037F284  38 21 00 10 */	addi r1, r1, 0x10
/* 80382348 0037F288  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi8StateEatFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi8StateEatFPQ24Game9EnemyBase:
/* 8038234C 0037F28C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80382350 0037F290  7C 08 02 A6 */	mflr r0
/* 80382354 0037F294  90 01 00 14 */	stw r0, 0x14(r1)
/* 80382358 0037F298  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8038235C 0037F29C  7C 9F 23 78 */	mr r31, r4
/* 80382360 0037F2A0  93 C1 00 08 */	stw r30, 8(r1)
/* 80382364 0037F2A4  7C 7E 1B 78 */	mr r30, r3
/* 80382368 0037F2A8  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8038236C 0037F2AC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80382370 0037F2B0  28 00 00 00 */	cmplwi r0, 0
/* 80382374 0037F2B4  41 82 00 78 */	beq .L_803823EC
/* 80382378 0037F2B8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8038237C 0037F2BC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80382380 0037F2C0  40 82 00 6C */	bne .L_803823EC
/* 80382384 0037F2C4  C0 22 09 C8 */	lfs f1, lbl_8051ED28@sda21(r2)
/* 80382388 0037F2C8  7F E3 FB 78 */	mr r3, r31
/* 8038238C 0037F2CC  38 80 00 00 */	li r4, 0
/* 80382390 0037F2D0  4B D9 1A F5 */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80382394 0037F2D4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80382398 0037F2D8  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 8038239C 0037F2DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803823A0 0037F2E0  4C 40 13 82 */	cror 2, 0, 2
/* 803823A4 0037F2E4  40 82 00 28 */	bne .L_803823CC
/* 803823A8 0037F2E8  7F C3 F3 78 */	mr r3, r30
/* 803823AC 0037F2EC  7F E4 FB 78 */	mr r4, r31
/* 803823B0 0037F2F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803823B4 0037F2F4  38 A0 00 08 */	li r5, 8
/* 803823B8 0037F2F8  38 C0 00 00 */	li r6, 0
/* 803823BC 0037F2FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803823C0 0037F300  7D 89 03 A6 */	mtctr r12
/* 803823C4 0037F304  4E 80 04 21 */	bctrl 
/* 803823C8 0037F308  48 00 00 24 */	b .L_803823EC
.L_803823CC:
/* 803823CC 0037F30C  7F C3 F3 78 */	mr r3, r30
/* 803823D0 0037F310  7F E4 FB 78 */	mr r4, r31
/* 803823D4 0037F314  81 9E 00 00 */	lwz r12, 0(r30)
/* 803823D8 0037F318  38 A0 00 00 */	li r5, 0
/* 803823DC 0037F31C  38 C0 00 00 */	li r6, 0
/* 803823E0 0037F320  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803823E4 0037F324  7D 89 03 A6 */	mtctr r12
/* 803823E8 0037F328  4E 80 04 21 */	bctrl 
.L_803823EC:
/* 803823EC 0037F32C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803823F0 0037F330  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803823F4 0037F334  83 C1 00 08 */	lwz r30, 8(r1)
/* 803823F8 0037F338  7C 08 03 A6 */	mtlr r0
/* 803823FC 0037F33C  38 21 00 10 */	addi r1, r1, 0x10
/* 80382400 0037F340  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi9StateDeadFi
__ct__Q34Game8UmiMushi9StateDeadFi:
/* 80382404 0037F344  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80382408 0037F348  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 8038240C 0037F34C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80382410 0037F350  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi9StateDead@ha
/* 80382414 0037F354  90 03 00 00 */	stw r0, 0(r3)
/* 80382418 0037F358  38 E0 00 00 */	li r7, 0
/* 8038241C 0037F35C  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 80382420 0037F360  38 A5 43 B0 */	addi r5, r5, __vt__Q34Game8UmiMushi9StateDead@l
/* 80382424 0037F364  90 83 00 04 */	stw r4, 4(r3)
/* 80382428 0037F368  38 02 09 CC */	addi r0, r2, lbl_8051ED2C@sda21
/* 8038242C 0037F36C  90 E3 00 08 */	stw r7, 8(r3)
/* 80382430 0037F370  90 C3 00 00 */	stw r6, 0(r3)
/* 80382434 0037F374  90 A3 00 00 */	stw r5, 0(r3)
/* 80382438 0037F378  90 03 00 0C */	stw r0, 0xc(r3)
/* 8038243C 0037F37C  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80382440 0037F380  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80382444 0037F384  7C 08 02 A6 */	mflr r0
/* 80382448 0037F388  38 A0 00 00 */	li r5, 0
/* 8038244C 0037F38C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80382450 0037F390  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80382454 0037F394  7C 9F 23 78 */	mr r31, r4
/* 80382458 0037F398  38 80 00 01 */	li r4, 1
/* 8038245C 0037F39C  7F E3 FB 78 */	mr r3, r31
/* 80382460 0037F3A0  4B D8 2B A5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80382464 0037F3A4  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 80382468 0037F3A8  7F E3 FB 78 */	mr r3, r31
/* 8038246C 0037F3AC  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80382470 0037F3B0  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80382474 0037F3B4  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80382478 0037F3B8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8038247C 0037F3BC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80382480 0037F3C0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80382484 0037F3C4  4B D8 32 9D */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80382488 0037F3C8  7F E3 FB 78 */	mr r3, r31
/* 8038248C 0037F3CC  48 00 46 A9 */	bl fadeAllEffect__Q34Game8UmiMushi3ObjFv
/* 80382490 0037F3D0  7F E3 FB 78 */	mr r3, r31
/* 80382494 0037F3D4  48 00 4B 95 */	bl bubbleEffect__Q34Game8UmiMushi3ObjFv
/* 80382498 0037F3D8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8038249C 0037F3DC  38 80 59 3D */	li r4, 0x593d
/* 803824A0 0037F3E0  38 A0 00 00 */	li r5, 0
/* 803824A4 0037F3E4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 803824A8 0037F3E8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 803824AC 0037F3EC  7D 89 03 A6 */	mtctr r12
/* 803824B0 0037F3F0  4E 80 04 21 */	bctrl 
/* 803824B4 0037F3F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803824B8 0037F3F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803824BC 0037F3FC  7C 08 03 A6 */	mtlr r0
/* 803824C0 0037F400  38 21 00 10 */	addi r1, r1, 0x10
/* 803824C4 0037F404  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi9StateDeadFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi9StateDeadFPQ24Game9EnemyBase:
/* 803824C8 0037F408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803824CC 0037F40C  7C 08 02 A6 */	mflr r0
/* 803824D0 0037F410  90 01 00 14 */	stw r0, 0x14(r1)
/* 803824D4 0037F414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803824D8 0037F418  7C 9F 23 78 */	mr r31, r4
/* 803824DC 0037F41C  7F E3 FB 78 */	mr r3, r31
/* 803824E0 0037F420  48 00 2C 09 */	bl changeColor__Q34Game8UmiMushi3ObjFv
/* 803824E4 0037F424  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803824E8 0037F428  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803824EC 0037F42C  28 00 00 00 */	cmplwi r0, 0
/* 803824F0 0037F430  41 82 00 7C */	beq .L_8038256C
/* 803824F4 0037F434  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803824F8 0037F438  2C 00 00 04 */	cmpwi r0, 4
/* 803824FC 0037F43C  41 82 00 58 */	beq .L_80382554
/* 80382500 0037F440  40 80 00 14 */	bge .L_80382514
/* 80382504 0037F444  2C 00 00 02 */	cmpwi r0, 2
/* 80382508 0037F448  41 82 00 18 */	beq .L_80382520
/* 8038250C 0037F44C  40 80 00 20 */	bge .L_8038252C
/* 80382510 0037F450  48 00 00 5C */	b .L_8038256C
.L_80382514:
/* 80382514 0037F454  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80382518 0037F458  41 82 00 48 */	beq .L_80382560
/* 8038251C 0037F45C  48 00 00 50 */	b .L_8038256C
.L_80382520:
/* 80382520 0037F460  7F E3 FB 78 */	mr r3, r31
/* 80382524 0037F464  48 00 49 89 */	bl flickEffect__Q34Game8UmiMushi3ObjFv
/* 80382528 0037F468  48 00 00 44 */	b .L_8038256C
.L_8038252C:
/* 8038252C 0037F46C  7F E3 FB 78 */	mr r3, r31
/* 80382530 0037F470  48 00 48 BD */	bl meltEffect__Q34Game8UmiMushi3ObjFv
/* 80382534 0037F474  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80382538 0037F478  38 80 59 3E */	li r4, 0x593e
/* 8038253C 0037F47C  38 A0 00 00 */	li r5, 0
/* 80382540 0037F480  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80382544 0037F484  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80382548 0037F488  7D 89 03 A6 */	mtctr r12
/* 8038254C 0037F48C  4E 80 04 21 */	bctrl 
/* 80382550 0037F490  48 00 00 1C */	b .L_8038256C
.L_80382554:
/* 80382554 0037F494  7F E3 FB 78 */	mr r3, r31
/* 80382558 0037F498  48 00 4B 41 */	bl delShadow__Q34Game8UmiMushi3ObjFv
/* 8038255C 0037F49C  48 00 00 10 */	b .L_8038256C
.L_80382560:
/* 80382560 0037F4A0  7F E3 FB 78 */	mr r3, r31
/* 80382564 0037F4A4  38 80 00 00 */	li r4, 0
/* 80382568 0037F4A8  4B DB 8B 89 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8038256C:
/* 8038256C 0037F4AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80382570 0037F4B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80382574 0037F4B4  7C 08 03 A6 */	mtlr r0
/* 80382578 0037F4B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8038257C 0037F4BC  4E 80 00 20 */	blr 

.global __ct__Q34Game8UmiMushi9StateLostFi
__ct__Q34Game8UmiMushi9StateLostFi:
/* 80382580 0037F4C0  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80382584 0037F4C4  3C C0 80 4E */	lis r6, __vt__Q34Game8UmiMushi5State@ha
/* 80382588 0037F4C8  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8038258C 0037F4CC  3C A0 80 4E */	lis r5, __vt__Q34Game8UmiMushi9StateLost@ha
/* 80382590 0037F4D0  90 03 00 00 */	stw r0, 0(r3)
/* 80382594 0037F4D4  38 E0 00 00 */	li r7, 0
/* 80382598 0037F4D8  38 C6 44 F4 */	addi r6, r6, __vt__Q34Game8UmiMushi5State@l
/* 8038259C 0037F4DC  38 A5 43 8C */	addi r5, r5, __vt__Q34Game8UmiMushi9StateLost@l
/* 803825A0 0037F4E0  90 83 00 04 */	stw r4, 4(r3)
/* 803825A4 0037F4E4  38 02 09 D4 */	addi r0, r2, lbl_8051ED34@sda21
/* 803825A8 0037F4E8  90 E3 00 08 */	stw r7, 8(r3)
/* 803825AC 0037F4EC  90 C3 00 00 */	stw r6, 0(r3)
/* 803825B0 0037F4F0  90 A3 00 00 */	stw r5, 0(r3)
/* 803825B4 0037F4F4  90 03 00 0C */	stw r0, 0xc(r3)
/* 803825B8 0037F4F8  4E 80 00 20 */	blr 

.global init__Q34Game8UmiMushi9StateLostFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game8UmiMushi9StateLostFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803825BC 0037F4FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803825C0 0037F500  7C 08 02 A6 */	mflr r0
/* 803825C4 0037F504  38 A0 00 00 */	li r5, 0
/* 803825C8 0037F508  90 01 00 14 */	stw r0, 0x14(r1)
/* 803825CC 0037F50C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803825D0 0037F510  7C 9F 23 78 */	mr r31, r4
/* 803825D4 0037F514  38 80 00 09 */	li r4, 9
/* 803825D8 0037F518  7F E3 FB 78 */	mr r3, r31
/* 803825DC 0037F51C  4B D8 2A 29 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803825E0 0037F520  C0 02 09 70 */	lfs f0, lbl_8051ECD0@sda21(r2)
/* 803825E4 0037F524  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803825E8 0037F528  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803825EC 0037F52C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803825F0 0037F530  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803825F4 0037F534  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803825F8 0037F538  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803825FC 0037F53C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80382600 0037F540  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80382604 0037F544  7C 08 03 A6 */	mtlr r0
/* 80382608 0037F548  38 21 00 10 */	addi r1, r1, 0x10
/* 8038260C 0037F54C  4E 80 00 20 */	blr 

.global exec__Q34Game8UmiMushi9StateLostFPQ24Game9EnemyBase
exec__Q34Game8UmiMushi9StateLostFPQ24Game9EnemyBase:
/* 80382610 0037F550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80382614 0037F554  7C 08 02 A6 */	mflr r0
/* 80382618 0037F558  90 01 00 14 */	stw r0, 0x14(r1)
/* 8038261C 0037F55C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80382620 0037F560  7C 9F 23 78 */	mr r31, r4
/* 80382624 0037F564  93 C1 00 08 */	stw r30, 8(r1)
/* 80382628 0037F568  7C 7E 1B 78 */	mr r30, r3
/* 8038262C 0037F56C  7F E3 FB 78 */	mr r3, r31
/* 80382630 0037F570  48 00 32 C9 */	bl resetColor__Q34Game8UmiMushi3ObjFv
/* 80382634 0037F574  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80382638 0037F578  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8038263C 0037F57C  28 00 00 00 */	cmplwi r0, 0
/* 80382640 0037F580  41 82 00 48 */	beq .L_80382688
/* 80382644 0037F584  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80382648 0037F588  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8038264C 0037F58C  40 82 00 3C */	bne .L_80382688
/* 80382650 0037F590  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80382654 0037F594  7F C3 F3 78 */	mr r3, r30
/* 80382658 0037F598  7F E4 FB 78 */	mr r4, r31
/* 8038265C 0037F59C  38 A0 00 01 */	li r5, 1
/* 80382660 0037F5A0  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80382664 0037F5A4  38 C0 00 00 */	li r6, 0
/* 80382668 0037F5A8  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8038266C 0037F5AC  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80382670 0037F5B0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80382674 0037F5B4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80382678 0037F5B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8038267C 0037F5BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80382680 0037F5C0  7D 89 03 A6 */	mtctr r12
/* 80382684 0037F5C4  4E 80 04 21 */	bctrl 
.L_80382688:
/* 80382688 0037F5C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8038268C 0037F5CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80382690 0037F5D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80382694 0037F5D4  7C 08 03 A6 */	mtlr r0
/* 80382698 0037F5D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8038269C 0037F5DC  4E 80 00 20 */	blr 

.global __sinit_umiMushiState_cpp
__sinit_umiMushiState_cpp:
/* 803826A0 0037F5E0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803826A4 0037F5E4  38 00 FF FF */	li r0, -1
/* 803826A8 0037F5E8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803826AC 0037F5EC  3C 60 80 4E */	lis r3, lbl_804E4380@ha
/* 803826B0 0037F5F0  90 0D 99 40 */	stw r0, lbl_80515FC0@sda21(r13)
/* 803826B4 0037F5F4  D4 03 43 80 */	stfsu f0, lbl_804E4380@l(r3)
/* 803826B8 0037F5F8  D0 0D 99 44 */	stfs f0, lbl_80515FC4@sda21(r13)
/* 803826BC 0037F5FC  D0 03 00 04 */	stfs f0, 4(r3)
/* 803826C0 0037F600  D0 03 00 08 */	stfs f0, 8(r3)
/* 803826C4 0037F604  4E 80 00 20 */	blr 
