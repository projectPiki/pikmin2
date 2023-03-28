.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_DangoMushiState_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game10DangoMushi10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi10StateFlick
.obj __vt__Q34Game10DangoMushi12StateRecover, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi12StateRecover
.obj __vt__Q34Game10DangoMushi9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi9StateTurn
.obj __vt__Q34Game10DangoMushi11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi11StateAttack
.obj __vt__Q34Game10DangoMushi9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi9StateMove
.obj __vt__Q34Game10DangoMushi9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi9StateWait
.obj __vt__Q34Game10DangoMushi11StateAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi11StateAppear
.obj __vt__Q34Game10DangoMushi9StateStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi9StateStay
.obj __vt__Q34Game10DangoMushi9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi9StateDead
.obj __vt__Q34Game10DangoMushi5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10DangoMushi5State
.obj __vt__Q34Game10DangoMushi3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10DangoMushi3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game10DangoMushi3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051D2F8, local
	.asciz "dead"
.endobj lbl_8051D2F8
.balign 4
.obj lbl_8051D300, local
	.asciz "stay"
.endobj lbl_8051D300
.balign 4
.obj lbl_8051D308, local
	.asciz "appear"
.endobj lbl_8051D308
.balign 4
.obj lbl_8051D310, local
	.asciz "wait"
.endobj lbl_8051D310
.balign 4
.obj lbl_8051D318, local
	.asciz "move"
.endobj lbl_8051D318
.balign 4
.obj lbl_8051D320, local
	.asciz "attack"
.endobj lbl_8051D320
.balign 4
.obj lbl_8051D328, local
	.asciz "turn"
.endobj lbl_8051D328
.balign 4
.obj lbl_8051D330, local
	.asciz "recover"
.endobj lbl_8051D330
.balign 4
.obj lbl_8051D338, local
	.asciz "flick"
.endobj lbl_8051D338
.balign 4
.obj lbl_8051D340, local
	.float 0.0
.endobj lbl_8051D340
.obj lbl_8051D344, local
	.float 50.0
.endobj lbl_8051D344
.obj lbl_8051D348, local # pi
	.float 3.1415927
.endobj lbl_8051D348
.obj lbl_8051D34C, local
	.float 0.0055555557
.endobj lbl_8051D34C
.balign 4
.obj lbl_8051D350, local
	.asciz "blend"
.endobj lbl_8051D350
.balign 4
.obj lbl_8051D358, local
	.float 3.0
.endobj lbl_8051D358
.obj lbl_8051D35C, local
	.float 10.0
.endobj lbl_8051D35C
.obj lbl_8051D360, local
	.float 0.5235988
.endobj lbl_8051D360
.obj lbl_8051D364, local
	.float 15.0
.endobj lbl_8051D364
.obj lbl_8051D368, local
	.float 1.0
.endobj lbl_8051D368
.obj lbl_8051D36C, local
	.float -1000.0
.endobj lbl_8051D36C
.obj lbl_8051D370, local
	.float 30.0
.endobj lbl_8051D370

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game10DangoMushi3FSMFPQ24Game9EnemyBase, global
/* 802F9A8C 002F69CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9A90 002F69D0  7C 08 02 A6 */	mflr r0
/* 802F9A94 002F69D4  38 80 00 09 */	li r4, 9
/* 802F9A98 002F69D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9A9C 002F69DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9AA0 002F69E0  7C 7F 1B 78 */	mr r31, r3
/* 802F9AA4 002F69E4  4B E3 6D C1 */	bl create__Q24Game17EnemyStateMachineFi
/* 802F9AA8 002F69E8  38 60 00 10 */	li r3, 0x10
/* 802F9AAC 002F69EC  4B D2 A3 F9 */	bl __nw__FUl
/* 802F9AB0 002F69F0  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9AB4 002F69F4  41 82 00 3C */	beq .L_802F9AF0
/* 802F9AB8 002F69F8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9ABC 002F69FC  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9AC0 002F6A00  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9AC4 002F6A04  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi9StateDead@ha
/* 802F9AC8 002F6A08  90 04 00 00 */	stw r0, 0(r4)
/* 802F9ACC 002F6A0C  38 E0 00 00 */	li r7, 0
/* 802F9AD0 002F6A10  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9AD4 002F6A14  38 A2 EF 98 */	addi r5, r2, lbl_8051D2F8@sda21
/* 802F9AD8 002F6A18  90 E4 00 04 */	stw r7, 4(r4)
/* 802F9ADC 002F6A1C  38 03 5F 8C */	addi r0, r3, __vt__Q34Game10DangoMushi9StateDead@l
/* 802F9AE0 002F6A20  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9AE4 002F6A24  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9AE8 002F6A28  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9AEC 002F6A2C  90 04 00 00 */	stw r0, 0(r4)
.L_802F9AF0:
/* 802F9AF0 002F6A30  7F E3 FB 78 */	mr r3, r31
/* 802F9AF4 002F6A34  4B E3 6E 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9AF8 002F6A38  38 60 00 10 */	li r3, 0x10
/* 802F9AFC 002F6A3C  4B D2 A3 A9 */	bl __nw__FUl
/* 802F9B00 002F6A40  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9B04 002F6A44  41 82 00 40 */	beq .L_802F9B44
/* 802F9B08 002F6A48  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9B0C 002F6A4C  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9B10 002F6A50  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9B14 002F6A54  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi9StateStay@ha
/* 802F9B18 002F6A58  90 04 00 00 */	stw r0, 0(r4)
/* 802F9B1C 002F6A5C  38 00 00 01 */	li r0, 1
/* 802F9B20 002F6A60  38 E0 00 00 */	li r7, 0
/* 802F9B24 002F6A64  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9B28 002F6A68  90 04 00 04 */	stw r0, 4(r4)
/* 802F9B2C 002F6A6C  38 A2 EF A0 */	addi r5, r2, lbl_8051D300@sda21
/* 802F9B30 002F6A70  38 03 5F 68 */	addi r0, r3, __vt__Q34Game10DangoMushi9StateStay@l
/* 802F9B34 002F6A74  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9B38 002F6A78  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9B3C 002F6A7C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9B40 002F6A80  90 04 00 00 */	stw r0, 0(r4)
.L_802F9B44:
/* 802F9B44 002F6A84  7F E3 FB 78 */	mr r3, r31
/* 802F9B48 002F6A88  4B E3 6D C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9B4C 002F6A8C  38 60 00 10 */	li r3, 0x10
/* 802F9B50 002F6A90  4B D2 A3 55 */	bl __nw__FUl
/* 802F9B54 002F6A94  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9B58 002F6A98  41 82 00 40 */	beq .L_802F9B98
/* 802F9B5C 002F6A9C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9B60 002F6AA0  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9B64 002F6AA4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9B68 002F6AA8  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi11StateAppear@ha
/* 802F9B6C 002F6AAC  90 04 00 00 */	stw r0, 0(r4)
/* 802F9B70 002F6AB0  38 00 00 02 */	li r0, 2
/* 802F9B74 002F6AB4  38 E0 00 00 */	li r7, 0
/* 802F9B78 002F6AB8  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9B7C 002F6ABC  90 04 00 04 */	stw r0, 4(r4)
/* 802F9B80 002F6AC0  38 A2 EF A8 */	addi r5, r2, lbl_8051D308@sda21
/* 802F9B84 002F6AC4  38 03 5F 44 */	addi r0, r3, __vt__Q34Game10DangoMushi11StateAppear@l
/* 802F9B88 002F6AC8  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9B8C 002F6ACC  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9B90 002F6AD0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9B94 002F6AD4  90 04 00 00 */	stw r0, 0(r4)
.L_802F9B98:
/* 802F9B98 002F6AD8  7F E3 FB 78 */	mr r3, r31
/* 802F9B9C 002F6ADC  4B E3 6D 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9BA0 002F6AE0  38 60 00 10 */	li r3, 0x10
/* 802F9BA4 002F6AE4  4B D2 A3 01 */	bl __nw__FUl
/* 802F9BA8 002F6AE8  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9BAC 002F6AEC  41 82 00 40 */	beq .L_802F9BEC
/* 802F9BB0 002F6AF0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9BB4 002F6AF4  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9BB8 002F6AF8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9BBC 002F6AFC  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi9StateWait@ha
/* 802F9BC0 002F6B00  90 04 00 00 */	stw r0, 0(r4)
/* 802F9BC4 002F6B04  38 00 00 03 */	li r0, 3
/* 802F9BC8 002F6B08  38 E0 00 00 */	li r7, 0
/* 802F9BCC 002F6B0C  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9BD0 002F6B10  90 04 00 04 */	stw r0, 4(r4)
/* 802F9BD4 002F6B14  38 A2 EF B0 */	addi r5, r2, lbl_8051D310@sda21
/* 802F9BD8 002F6B18  38 03 5F 20 */	addi r0, r3, __vt__Q34Game10DangoMushi9StateWait@l
/* 802F9BDC 002F6B1C  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9BE0 002F6B20  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9BE4 002F6B24  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9BE8 002F6B28  90 04 00 00 */	stw r0, 0(r4)
.L_802F9BEC:
/* 802F9BEC 002F6B2C  7F E3 FB 78 */	mr r3, r31
/* 802F9BF0 002F6B30  4B E3 6D 19 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9BF4 002F6B34  38 60 00 10 */	li r3, 0x10
/* 802F9BF8 002F6B38  4B D2 A2 AD */	bl __nw__FUl
/* 802F9BFC 002F6B3C  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9C00 002F6B40  41 82 00 40 */	beq .L_802F9C40
/* 802F9C04 002F6B44  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9C08 002F6B48  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9C0C 002F6B4C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9C10 002F6B50  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi9StateMove@ha
/* 802F9C14 002F6B54  90 04 00 00 */	stw r0, 0(r4)
/* 802F9C18 002F6B58  38 00 00 04 */	li r0, 4
/* 802F9C1C 002F6B5C  38 E0 00 00 */	li r7, 0
/* 802F9C20 002F6B60  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9C24 002F6B64  90 04 00 04 */	stw r0, 4(r4)
/* 802F9C28 002F6B68  38 A2 EF B8 */	addi r5, r2, lbl_8051D318@sda21
/* 802F9C2C 002F6B6C  38 03 5E FC */	addi r0, r3, __vt__Q34Game10DangoMushi9StateMove@l
/* 802F9C30 002F6B70  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9C34 002F6B74  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9C38 002F6B78  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9C3C 002F6B7C  90 04 00 00 */	stw r0, 0(r4)
.L_802F9C40:
/* 802F9C40 002F6B80  7F E3 FB 78 */	mr r3, r31
/* 802F9C44 002F6B84  4B E3 6C C5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9C48 002F6B88  38 60 00 10 */	li r3, 0x10
/* 802F9C4C 002F6B8C  4B D2 A2 59 */	bl __nw__FUl
/* 802F9C50 002F6B90  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9C54 002F6B94  41 82 00 40 */	beq .L_802F9C94
/* 802F9C58 002F6B98  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9C5C 002F6B9C  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9C60 002F6BA0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9C64 002F6BA4  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi11StateAttack@ha
/* 802F9C68 002F6BA8  90 04 00 00 */	stw r0, 0(r4)
/* 802F9C6C 002F6BAC  38 00 00 05 */	li r0, 5
/* 802F9C70 002F6BB0  38 E0 00 00 */	li r7, 0
/* 802F9C74 002F6BB4  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9C78 002F6BB8  90 04 00 04 */	stw r0, 4(r4)
/* 802F9C7C 002F6BBC  38 A2 EF C0 */	addi r5, r2, lbl_8051D320@sda21
/* 802F9C80 002F6BC0  38 03 5E D8 */	addi r0, r3, __vt__Q34Game10DangoMushi11StateAttack@l
/* 802F9C84 002F6BC4  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9C88 002F6BC8  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9C8C 002F6BCC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9C90 002F6BD0  90 04 00 00 */	stw r0, 0(r4)
.L_802F9C94:
/* 802F9C94 002F6BD4  7F E3 FB 78 */	mr r3, r31
/* 802F9C98 002F6BD8  4B E3 6C 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9C9C 002F6BDC  38 60 00 10 */	li r3, 0x10
/* 802F9CA0 002F6BE0  4B D2 A2 05 */	bl __nw__FUl
/* 802F9CA4 002F6BE4  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9CA8 002F6BE8  41 82 00 40 */	beq .L_802F9CE8
/* 802F9CAC 002F6BEC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9CB0 002F6BF0  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9CB4 002F6BF4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9CB8 002F6BF8  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi9StateTurn@ha
/* 802F9CBC 002F6BFC  90 04 00 00 */	stw r0, 0(r4)
/* 802F9CC0 002F6C00  38 00 00 06 */	li r0, 6
/* 802F9CC4 002F6C04  38 E0 00 00 */	li r7, 0
/* 802F9CC8 002F6C08  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9CCC 002F6C0C  90 04 00 04 */	stw r0, 4(r4)
/* 802F9CD0 002F6C10  38 A2 EF C8 */	addi r5, r2, lbl_8051D328@sda21
/* 802F9CD4 002F6C14  38 03 5E B4 */	addi r0, r3, __vt__Q34Game10DangoMushi9StateTurn@l
/* 802F9CD8 002F6C18  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9CDC 002F6C1C  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9CE0 002F6C20  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9CE4 002F6C24  90 04 00 00 */	stw r0, 0(r4)
.L_802F9CE8:
/* 802F9CE8 002F6C28  7F E3 FB 78 */	mr r3, r31
/* 802F9CEC 002F6C2C  4B E3 6C 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9CF0 002F6C30  38 60 00 10 */	li r3, 0x10
/* 802F9CF4 002F6C34  4B D2 A1 B1 */	bl __nw__FUl
/* 802F9CF8 002F6C38  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9CFC 002F6C3C  41 82 00 40 */	beq .L_802F9D3C
/* 802F9D00 002F6C40  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9D04 002F6C44  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9D08 002F6C48  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9D0C 002F6C4C  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi12StateRecover@ha
/* 802F9D10 002F6C50  90 04 00 00 */	stw r0, 0(r4)
/* 802F9D14 002F6C54  38 00 00 07 */	li r0, 7
/* 802F9D18 002F6C58  38 E0 00 00 */	li r7, 0
/* 802F9D1C 002F6C5C  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9D20 002F6C60  90 04 00 04 */	stw r0, 4(r4)
/* 802F9D24 002F6C64  38 A2 EF D0 */	addi r5, r2, lbl_8051D330@sda21
/* 802F9D28 002F6C68  38 03 5E 90 */	addi r0, r3, __vt__Q34Game10DangoMushi12StateRecover@l
/* 802F9D2C 002F6C6C  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9D30 002F6C70  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9D34 002F6C74  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9D38 002F6C78  90 04 00 00 */	stw r0, 0(r4)
.L_802F9D3C:
/* 802F9D3C 002F6C7C  7F E3 FB 78 */	mr r3, r31
/* 802F9D40 002F6C80  4B E3 6B C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9D44 002F6C84  38 60 00 10 */	li r3, 0x10
/* 802F9D48 002F6C88  4B D2 A1 5D */	bl __nw__FUl
/* 802F9D4C 002F6C8C  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9D50 002F6C90  41 82 00 40 */	beq .L_802F9D90
/* 802F9D54 002F6C94  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802F9D58 002F6C98  3C A0 80 4D */	lis r5, __vt__Q34Game10DangoMushi5State@ha
/* 802F9D5C 002F6C9C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802F9D60 002F6CA0  3C 60 80 4D */	lis r3, __vt__Q34Game10DangoMushi10StateFlick@ha
/* 802F9D64 002F6CA4  90 04 00 00 */	stw r0, 0(r4)
/* 802F9D68 002F6CA8  38 00 00 08 */	li r0, 8
/* 802F9D6C 002F6CAC  38 E0 00 00 */	li r7, 0
/* 802F9D70 002F6CB0  38 C5 5F B0 */	addi r6, r5, __vt__Q34Game10DangoMushi5State@l
/* 802F9D74 002F6CB4  90 04 00 04 */	stw r0, 4(r4)
/* 802F9D78 002F6CB8  38 A2 EF D8 */	addi r5, r2, lbl_8051D338@sda21
/* 802F9D7C 002F6CBC  38 03 5E 6C */	addi r0, r3, __vt__Q34Game10DangoMushi10StateFlick@l
/* 802F9D80 002F6CC0  90 E4 00 08 */	stw r7, 8(r4)
/* 802F9D84 002F6CC4  90 C4 00 00 */	stw r6, 0(r4)
/* 802F9D88 002F6CC8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802F9D8C 002F6CCC  90 04 00 00 */	stw r0, 0(r4)
.L_802F9D90:
/* 802F9D90 002F6CD0  7F E3 FB 78 */	mr r3, r31
/* 802F9D94 002F6CD4  4B E3 6B 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802F9D98 002F6CD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9D9C 002F6CDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F9DA0 002F6CE0  7C 08 03 A6 */	mtlr r0
/* 802F9DA4 002F6CE4  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9DA8 002F6CE8  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi3FSMFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802F9DAC 002F6CEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9DB0 002F6CF0  7C 08 02 A6 */	mflr r0
/* 802F9DB4 002F6CF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9DB8 002F6CF8  38 00 00 00 */	li r0, 0
/* 802F9DBC 002F6CFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9DC0 002F6D00  7C 9F 23 78 */	mr r31, r4
/* 802F9DC4 002F6D04  7F E3 FB 78 */	mr r3, r31
/* 802F9DC8 002F6D08  93 C1 00 08 */	stw r30, 8(r1)
/* 802F9DCC 002F6D0C  7C BE 2B 78 */	mr r30, r5
/* 802F9DD0 002F6D10  98 04 02 C2 */	stb r0, 0x2c2(r4)
/* 802F9DD4 002F6D14  4B E0 B9 4D */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802F9DD8 002F6D18  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802F9DDC 002F6D1C  7F E3 FB 78 */	mr r3, r31
/* 802F9DE0 002F6D20  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F9DE4 002F6D24  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F9DE8 002F6D28  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F9DEC 002F6D2C  4B E0 7B 91 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802F9DF0 002F6D30  28 1E 00 00 */	cmplwi r30, 0
/* 802F9DF4 002F6D34  41 82 00 18 */	beq .L_802F9E0C
/* 802F9DF8 002F6D38  7F E3 FB 78 */	mr r3, r31
/* 802F9DFC 002F6D3C  38 80 00 07 */	li r4, 7
/* 802F9E00 002F6D40  38 A0 00 01 */	li r5, 1
/* 802F9E04 002F6D44  48 00 48 45 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802F9E08 002F6D48  48 00 00 14 */	b .L_802F9E1C
.L_802F9E0C:
/* 802F9E0C 002F6D4C  7F E3 FB 78 */	mr r3, r31
/* 802F9E10 002F6D50  38 80 00 07 */	li r4, 7
/* 802F9E14 002F6D54  38 A0 00 00 */	li r5, 0
/* 802F9E18 002F6D58  48 00 48 31 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
.L_802F9E1C:
/* 802F9E1C 002F6D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9E20 002F6D60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F9E24 002F6D64  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F9E28 002F6D68  7C 08 03 A6 */	mtlr r0
/* 802F9E2C 002F6D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9E30 002F6D70  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBase, global
/* 802F9E34 002F6D74  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F9E38 002F6D78  7C 08 02 A6 */	mflr r0
/* 802F9E3C 002F6D7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F9E40 002F6D80  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F9E44 002F6D84  7C 9F 23 78 */	mr r31, r4
/* 802F9E48 002F6D88  7F E3 FB 78 */	mr r3, r31
/* 802F9E4C 002F6D8C  4B E0 B4 21 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802F9E50 002F6D90  C0 02 EF E4 */	lfs f0, lbl_8051D344@sda21(r2)
/* 802F9E54 002F6D94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F9E58 002F6D98  40 81 00 48 */	ble .L_802F9EA0
/* 802F9E5C 002F6D9C  7F E4 FB 78 */	mr r4, r31
/* 802F9E60 002F6DA0  38 61 00 14 */	addi r3, r1, 0x14
/* 802F9E64 002F6DA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F9E68 002F6DA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F9E6C 002F6DAC  7D 89 03 A6 */	mtctr r12
/* 802F9E70 002F6DB0  4E 80 04 21 */	bctrl 
/* 802F9E74 002F6DB4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802F9E78 002F6DB8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802F9E7C 002F6DBC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802F9E80 002F6DC0  38 80 00 06 */	li r4, 6
/* 802F9E84 002F6DC4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802F9E88 002F6DC8  38 C0 00 02 */	li r6, 2
/* 802F9E8C 002F6DCC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802F9E90 002F6DD0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802F9E94 002F6DD4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802F9E98 002F6DD8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802F9E9C 002F6DDC  4B F5 83 A1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
.L_802F9EA0:
/* 802F9EA0 002F6DE0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802F9EA4 002F6DE4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802F9EA8 002F6DE8  28 00 00 00 */	cmplwi r0, 0
/* 802F9EAC 002F6DEC  41 82 00 B0 */	beq .L_802F9F5C
/* 802F9EB0 002F6DF0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F9EB4 002F6DF4  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802F9EB8 002F6DF8  40 82 00 10 */	bne .L_802F9EC8
/* 802F9EBC 002F6DFC  7F E3 FB 78 */	mr r3, r31
/* 802F9EC0 002F6E00  48 00 48 A5 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802F9EC4 002F6E04  48 00 00 98 */	b .L_802F9F5C
.L_802F9EC8:
/* 802F9EC8 002F6E08  28 00 00 02 */	cmplwi r0, 2
/* 802F9ECC 002F6E0C  40 82 00 10 */	bne .L_802F9EDC
/* 802F9ED0 002F6E10  7F E3 FB 78 */	mr r3, r31
/* 802F9ED4 002F6E14  48 00 4F C9 */	bl createDeadSmokeEffect__Q34Game10DangoMushi3ObjFv
/* 802F9ED8 002F6E18  48 00 00 84 */	b .L_802F9F5C
.L_802F9EDC:
/* 802F9EDC 002F6E1C  28 00 00 03 */	cmplwi r0, 3
/* 802F9EE0 002F6E20  40 82 00 68 */	bne .L_802F9F48
/* 802F9EE4 002F6E24  7F E3 FB 78 */	mr r3, r31
/* 802F9EE8 002F6E28  48 00 50 31 */	bl createDeadBombEffect__Q34Game10DangoMushi3ObjFv
/* 802F9EEC 002F6E2C  7F E4 FB 78 */	mr r4, r31
/* 802F9EF0 002F6E30  38 61 00 08 */	addi r3, r1, 8
/* 802F9EF4 002F6E34  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F9EF8 002F6E38  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F9EFC 002F6E3C  7D 89 03 A6 */	mtctr r12
/* 802F9F00 002F6E40  4E 80 04 21 */	bctrl 
/* 802F9F04 002F6E44  C0 41 00 08 */	lfs f2, 8(r1)
/* 802F9F08 002F6E48  38 A1 00 20 */	addi r5, r1, 0x20
/* 802F9F0C 002F6E4C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802F9F10 002F6E50  38 80 00 1A */	li r4, 0x1a
/* 802F9F14 002F6E54  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802F9F18 002F6E58  38 C0 00 02 */	li r6, 2
/* 802F9F1C 002F6E5C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802F9F20 002F6E60  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802F9F24 002F6E64  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802F9F28 002F6E68  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802F9F2C 002F6E6C  4B F5 83 11 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802F9F30 002F6E70  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802F9F34 002F6E74  38 A1 00 20 */	addi r5, r1, 0x20
/* 802F9F38 002F6E78  38 80 00 0E */	li r4, 0xe
/* 802F9F3C 002F6E7C  38 C0 00 02 */	li r6, 2
/* 802F9F40 002F6E80  4B F5 98 41 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802F9F44 002F6E84  48 00 00 18 */	b .L_802F9F5C
.L_802F9F48:
/* 802F9F48 002F6E88  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F9F4C 002F6E8C  40 82 00 10 */	bne .L_802F9F5C
/* 802F9F50 002F6E90  7F E3 FB 78 */	mr r3, r31
/* 802F9F54 002F6E94  38 80 00 00 */	li r4, 0
/* 802F9F58 002F6E98  4B E4 11 99 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_802F9F5C:
/* 802F9F5C 002F6E9C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F9F60 002F6EA0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F9F64 002F6EA4  7C 08 03 A6 */	mtlr r0
/* 802F9F68 002F6EA8  38 21 00 40 */	addi r1, r1, 0x40
/* 802F9F6C 002F6EAC  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBase, global
/* 802F9F70 002F6EB0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802F9F74 002F6EB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9F78 002F6EB8  7C 08 02 A6 */	mflr r0
/* 802F9F7C 002F6EBC  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802F9F80 002F6EC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9F84 002F6EC4  38 00 FF FF */	li r0, -1
/* 802F9F88 002F6EC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9F8C 002F6ECC  7C 9F 23 78 */	mr r31, r4
/* 802F9F90 002F6ED0  7F E3 FB 78 */	mr r3, r31
/* 802F9F94 002F6ED4  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802F9F98 002F6ED8  38 00 00 00 */	li r0, 0
/* 802F9F9C 002F6EDC  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F9FA0 002F6EE0  98 04 02 C2 */	stb r0, 0x2c2(r4)
/* 802F9FA4 002F6EE4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802F9FA8 002F6EE8  60 00 00 01 */	ori r0, r0, 1
/* 802F9FAC 002F6EEC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802F9FB0 002F6EF0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802F9FB4 002F6EF4  64 00 00 40 */	oris r0, r0, 0x40
/* 802F9FB8 002F6EF8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802F9FBC 002F6EFC  4B E0 D7 C1 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802F9FC0 002F6F00  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F9FC4 002F6F04  7F E3 FB 78 */	mr r3, r31
/* 802F9FC8 002F6F08  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802F9FCC 002F6F0C  38 80 00 00 */	li r4, 0
/* 802F9FD0 002F6F10  64 00 40 00 */	oris r0, r0, 0x4000
/* 802F9FD4 002F6F14  38 A0 00 00 */	li r5, 0
/* 802F9FD8 002F6F18  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F9FDC 002F6F1C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F9FE0 002F6F20  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F9FE4 002F6F24  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F9FE8 002F6F28  48 00 46 61 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802F9FEC 002F6F2C  7F E3 FB 78 */	mr r3, r31
/* 802F9FF0 002F6F30  4B E0 D2 F1 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802F9FF4 002F6F34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9FF8 002F6F38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F9FFC 002F6F3C  7C 08 03 A6 */	mtlr r0
/* 802FA000 002F6F40  38 21 00 10 */	addi r1, r1, 0x10
/* 802FA004 002F6F44  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBase, global
/* 802FA008 002F6F48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802FA00C 002F6F4C  7C 08 02 A6 */	mflr r0
/* 802FA010 002F6F50  90 01 00 24 */	stw r0, 0x24(r1)
/* 802FA014 002F6F54  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802FA018 002F6F58  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802FA01C 002F6F5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FA020 002F6F60  93 C1 00 08 */	stw r30, 8(r1)
/* 802FA024 002F6F64  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FA028 002F6F68  7C 9F 23 78 */	mr r31, r4
/* 802FA02C 002F6F6C  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 802FA030 002F6F70  7C 7E 1B 78 */	mr r30, r3
/* 802FA034 002F6F74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FA038 002F6F78  40 81 00 38 */	ble .L_802FA070
/* 802FA03C 002F6F7C  7F E3 FB 78 */	mr r3, r31
/* 802FA040 002F6F80  48 00 2E 3D */	bl addShadowScale__Q34Game10DangoMushi3ObjFv
/* 802FA044 002F6F84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FA048 002F6F88  41 82 00 E4 */	beq .L_802FA12C
/* 802FA04C 002F6F8C  7F C3 F3 78 */	mr r3, r30
/* 802FA050 002F6F90  7F E4 FB 78 */	mr r4, r31
/* 802FA054 002F6F94  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA058 002F6F98  38 A0 00 02 */	li r5, 2
/* 802FA05C 002F6F9C  38 C0 00 00 */	li r6, 0
/* 802FA060 002F6FA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA064 002F6FA4  7D 89 03 A6 */	mtctr r12
/* 802FA068 002F6FA8  4E 80 04 21 */	bctrl 
/* 802FA06C 002F6FAC  48 00 00 C0 */	b .L_802FA12C
.L_802FA070:
/* 802FA070 002F6FB0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FA074 002F6FB4  7F E3 FB 78 */	mr r3, r31
/* 802FA078 002F6FB8  38 80 00 00 */	li r4, 0
/* 802FA07C 002F6FBC  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802FA080 002F6FC0  FC 20 F8 90 */	fmr f1, f31
/* 802FA084 002F6FC4  4B E1 AA 3D */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 802FA088 002F6FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FA08C 002F6FCC  41 82 00 0C */	beq .L_802FA098
/* 802FA090 002F6FD0  38 00 00 01 */	li r0, 1
/* 802FA094 002F6FD4  48 00 00 28 */	b .L_802FA0BC
.L_802FA098:
/* 802FA098 002F6FD8  FC 20 F8 90 */	fmr f1, f31
/* 802FA09C 002F6FDC  7F E3 FB 78 */	mr r3, r31
/* 802FA0A0 002F6FE0  38 80 00 00 */	li r4, 0
/* 802FA0A4 002F6FE4  4B E1 A6 91 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802FA0A8 002F6FE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FA0AC 002F6FEC  41 82 00 0C */	beq .L_802FA0B8
/* 802FA0B0 002F6FF0  38 00 00 01 */	li r0, 1
/* 802FA0B4 002F6FF4  48 00 00 08 */	b .L_802FA0BC
.L_802FA0B8:
/* 802FA0B8 002F6FF8  38 00 00 00 */	li r0, 0
.L_802FA0BC:
/* 802FA0BC 002F6FFC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802FA0C0 002F7000  41 82 00 6C */	beq .L_802FA12C
/* 802FA0C4 002F7004  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802FA0C8 002F7008  7F E4 FB 78 */	mr r4, r31
/* 802FA0CC 002F700C  4B F4 7B E1 */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802FA0D0 002F7010  7F E3 FB 78 */	mr r3, r31
/* 802FA0D4 002F7014  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FA0D8 002F7018  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802FA0DC 002F701C  7D 89 03 A6 */	mtctr r12
/* 802FA0E0 002F7020  4E 80 04 21 */	bctrl 
/* 802FA0E4 002F7024  81 83 00 00 */	lwz r12, 0(r3)
/* 802FA0E8 002F7028  38 80 59 7D */	li r4, 0x597d
/* 802FA0EC 002F702C  38 A0 00 00 */	li r5, 0
/* 802FA0F0 002F7030  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802FA0F4 002F7034  7D 89 03 A6 */	mtctr r12
/* 802FA0F8 002F7038  4E 80 04 21 */	bctrl 
/* 802FA0FC 002F703C  7F E3 FB 78 */	mr r3, r31
/* 802FA100 002F7040  48 00 2D 7D */	bl addShadowScale__Q34Game10DangoMushi3ObjFv
/* 802FA104 002F7044  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FA108 002F7048  41 82 00 24 */	beq .L_802FA12C
/* 802FA10C 002F704C  7F C3 F3 78 */	mr r3, r30
/* 802FA110 002F7050  7F E4 FB 78 */	mr r4, r31
/* 802FA114 002F7054  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA118 002F7058  38 A0 00 02 */	li r5, 2
/* 802FA11C 002F705C  38 C0 00 00 */	li r6, 0
/* 802FA120 002F7060  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA124 002F7064  7D 89 03 A6 */	mtctr r12
/* 802FA128 002F7068  4E 80 04 21 */	bctrl 
.L_802FA12C:
/* 802FA12C 002F706C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802FA130 002F7070  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802FA134 002F7074  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802FA138 002F7078  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FA13C 002F707C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FA140 002F7080  7C 08 03 A6 */	mtlr r0
/* 802FA144 002F7084  38 21 00 20 */	addi r1, r1, 0x20
/* 802FA148 002F7088  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBase, global
/* 802FA14C 002F708C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi9StateStayFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FA150 002F7090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FA154 002F7094  7C 08 02 A6 */	mflr r0
/* 802FA158 002F7098  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FA15C 002F709C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FA160 002F70A0  38 00 FF FF */	li r0, -1
/* 802FA164 002F70A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FA168 002F70A8  7C 9F 23 78 */	mr r31, r4
/* 802FA16C 002F70AC  7F E3 FB 78 */	mr r3, r31
/* 802FA170 002F70B0  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802FA174 002F70B4  38 00 00 00 */	li r0, 0
/* 802FA178 002F70B8  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802FA17C 002F70BC  98 04 02 C2 */	stb r0, 0x2c2(r4)
/* 802FA180 002F70C0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802FA184 002F70C4  60 00 00 01 */	ori r0, r0, 1
/* 802FA188 002F70C8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802FA18C 002F70CC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802FA190 002F70D0  64 00 00 40 */	oris r0, r0, 0x40
/* 802FA194 002F70D4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802FA198 002F70D8  4B E0 D5 E5 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802FA19C 002F70DC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FA1A0 002F70E0  7F E3 FB 78 */	mr r3, r31
/* 802FA1A4 002F70E4  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FA1A8 002F70E8  38 80 00 00 */	li r4, 0
/* 802FA1AC 002F70EC  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 802FA1B0 002F70F0  38 A0 00 00 */	li r5, 0
/* 802FA1B4 002F70F4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FA1B8 002F70F8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FA1BC 002F70FC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FA1C0 002F7100  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FA1C4 002F7104  48 00 44 85 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FA1C8 002F7108  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FA1CC 002F710C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FA1D0 002F7110  7C 08 03 A6 */	mtlr r0
/* 802FA1D4 002F7114  38 21 00 10 */	addi r1, r1, 0x10
/* 802FA1D8 002F7118  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBase, global
/* 802FA1DC 002F711C  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 802FA1E0 002F7120  7C 08 02 A6 */	mflr r0
/* 802FA1E4 002F7124  90 01 01 24 */	stw r0, 0x124(r1)
/* 802FA1E8 002F7128  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 802FA1EC 002F712C  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 802FA1F0 002F7130  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 802FA1F4 002F7134  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 802FA1F8 002F7138  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 802FA1FC 002F713C  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 802FA200 002F7140  DB 81 00 E0 */	stfd f28, 0xe0(r1)
/* 802FA204 002F7144  F3 81 00 E8 */	psq_st f28, 232(r1), 0, qr0
/* 802FA208 002F7148  DB 61 00 D0 */	stfd f27, 0xd0(r1)
/* 802FA20C 002F714C  F3 61 00 D8 */	psq_st f27, 216(r1), 0, qr0
/* 802FA210 002F7150  DB 41 00 C0 */	stfd f26, 0xc0(r1)
/* 802FA214 002F7154  F3 41 00 C8 */	psq_st f26, 200(r1), 0, qr0
/* 802FA218 002F7158  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 802FA21C 002F715C  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 802FA220 002F7160  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 802FA224 002F7164  93 81 00 B0 */	stw r28, 0xb0(r1)
/* 802FA228 002F7168  7C 7C 1B 78 */	mr r28, r3
/* 802FA22C 002F716C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802FA230 002F7170  7C 9E 23 78 */	mr r30, r4
/* 802FA234 002F7174  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802FA238 002F7178  28 00 00 00 */	cmplwi r0, 0
/* 802FA23C 002F717C  41 82 03 50 */	beq .L_802FA58C
/* 802FA240 002F7180  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FA244 002F7184  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FA248 002F7188  40 82 00 10 */	bne .L_802FA258
/* 802FA24C 002F718C  7F C3 F3 78 */	mr r3, r30
/* 802FA250 002F7190  48 00 45 15 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FA254 002F7194  48 00 03 38 */	b .L_802FA58C
.L_802FA258:
/* 802FA258 002F7198  28 00 00 02 */	cmplwi r0, 2
/* 802FA25C 002F719C  40 82 00 68 */	bne .L_802FA2C4
/* 802FA260 002F71A0  7F C3 F3 78 */	mr r3, r30
/* 802FA264 002F71A4  48 00 52 45 */	bl createAppearSmokeEffect__Q34Game10DangoMushi3ObjFv
/* 802FA268 002F71A8  7F C4 F3 78 */	mr r4, r30
/* 802FA26C 002F71AC  38 61 00 8C */	addi r3, r1, 0x8c
/* 802FA270 002F71B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA274 002F71B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA278 002F71B8  7D 89 03 A6 */	mtctr r12
/* 802FA27C 002F71BC  4E 80 04 21 */	bctrl 
/* 802FA280 002F71C0  C0 41 00 8C */	lfs f2, 0x8c(r1)
/* 802FA284 002F71C4  38 A1 00 A4 */	addi r5, r1, 0xa4
/* 802FA288 002F71C8  C0 21 00 90 */	lfs f1, 0x90(r1)
/* 802FA28C 002F71CC  38 80 00 1B */	li r4, 0x1b
/* 802FA290 002F71D0  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 802FA294 002F71D4  38 C0 00 02 */	li r6, 2
/* 802FA298 002F71D8  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 802FA29C 002F71DC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FA2A0 002F71E0  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 802FA2A4 002F71E4  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 802FA2A8 002F71E8  4B F5 7F 95 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FA2AC 002F71EC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FA2B0 002F71F0  38 A1 00 A4 */	addi r5, r1, 0xa4
/* 802FA2B4 002F71F4  38 80 00 0F */	li r4, 0xf
/* 802FA2B8 002F71F8  38 C0 00 02 */	li r6, 2
/* 802FA2BC 002F71FC  4B F5 94 C5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FA2C0 002F7200  48 00 02 CC */	b .L_802FA58C
.L_802FA2C4:
/* 802FA2C4 002F7204  28 00 00 03 */	cmplwi r0, 3
/* 802FA2C8 002F7208  40 82 00 10 */	bne .L_802FA2D8
/* 802FA2CC 002F720C  7F C3 F3 78 */	mr r3, r30
/* 802FA2D0 002F7210  48 00 49 3D */	bl setBossAppearBGM__Q34Game10DangoMushi3ObjFv
/* 802FA2D4 002F7214  48 00 02 B8 */	b .L_802FA58C
.L_802FA2D8:
/* 802FA2D8 002F7218  28 00 00 04 */	cmplwi r0, 4
/* 802FA2DC 002F721C  40 82 00 5C */	bne .L_802FA338
/* 802FA2E0 002F7220  81 84 00 00 */	lwz r12, 0(r4)
/* 802FA2E4 002F7224  38 61 00 80 */	addi r3, r1, 0x80
/* 802FA2E8 002F7228  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA2EC 002F722C  7D 89 03 A6 */	mtctr r12
/* 802FA2F0 002F7230  4E 80 04 21 */	bctrl 
/* 802FA2F4 002F7234  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 802FA2F8 002F7238  38 A1 00 98 */	addi r5, r1, 0x98
/* 802FA2FC 002F723C  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 802FA300 002F7240  38 80 00 0F */	li r4, 0xf
/* 802FA304 002F7244  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802FA308 002F7248  38 C0 00 02 */	li r6, 2
/* 802FA30C 002F724C  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 802FA310 002F7250  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FA314 002F7254  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 802FA318 002F7258  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 802FA31C 002F725C  4B F5 7F 21 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FA320 002F7260  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FA324 002F7264  38 A1 00 98 */	addi r5, r1, 0x98
/* 802FA328 002F7268  38 80 00 0B */	li r4, 0xb
/* 802FA32C 002F726C  38 C0 00 02 */	li r6, 2
/* 802FA330 002F7270  4B F5 94 51 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FA334 002F7274  48 00 02 58 */	b .L_802FA58C
.L_802FA338:
/* 802FA338 002F7278  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FA33C 002F727C  40 82 02 50 */	bne .L_802FA58C
/* 802FA340 002F7280  7F C3 F3 78 */	mr r3, r30
/* 802FA344 002F7284  48 00 2D 55 */	bl getSearchedTarget__Q34Game10DangoMushi3ObjFv
/* 802FA348 002F7288  7C 7D 1B 79 */	or. r29, r3, r3
/* 802FA34C 002F728C  41 82 02 20 */	beq .L_802FA56C
/* 802FA350 002F7290  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802FA354 002F7294  28 03 00 00 */	cmplwi r3, 0
/* 802FA358 002F7298  41 82 02 14 */	beq .L_802FA56C
/* 802FA35C 002F729C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802FA360 002F72A0  2C 00 00 04 */	cmpwi r0, 4
/* 802FA364 002F72A4  41 82 02 08 */	beq .L_802FA56C
/* 802FA368 002F72A8  7F A4 EB 78 */	mr r4, r29
/* 802FA36C 002F72AC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802FA370 002F72B0  81 9D 00 00 */	lwz r12, 0(r29)
/* 802FA374 002F72B4  38 61 00 68 */	addi r3, r1, 0x68
/* 802FA378 002F72B8  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 802FA37C 002F72BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA380 002F72C0  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 802FA384 002F72C4  7D 89 03 A6 */	mtctr r12
/* 802FA388 002F72C8  4E 80 04 21 */	bctrl 
/* 802FA38C 002F72CC  7F C4 F3 78 */	mr r4, r30
/* 802FA390 002F72D0  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 802FA394 002F72D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA398 002F72D8  38 61 00 74 */	addi r3, r1, 0x74
/* 802FA39C 002F72DC  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 802FA3A0 002F72E0  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802FA3A4 002F72E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA3A8 002F72E8  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 802FA3AC 002F72EC  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802FA3B0 002F72F0  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802FA3B4 002F72F4  7D 89 03 A6 */	mtctr r12
/* 802FA3B8 002F72F8  4E 80 04 21 */	bctrl 
/* 802FA3BC 002F72FC  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 802FA3C0 002F7300  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FA3C4 002F7304  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 802FA3C8 002F7308  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FA3CC 002F730C  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802FA3D0 002F7310  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802FA3D4 002F7314  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 802FA3D8 002F7318  EC 21 28 28 */	fsubs f1, f1, f5
/* 802FA3DC 002F731C  EC 40 18 28 */	fsubs f2, f0, f3
/* 802FA3E0 002F7320  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 802FA3E4 002F7324  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 802FA3E8 002F7328  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 802FA3EC 002F732C  4B D3 AD 1D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FA3F0 002F7330  48 11 77 E1 */	bl roundAng__Ff
/* 802FA3F4 002F7334  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA3F8 002F7338  FF 40 08 90 */	fmr f26, f1
/* 802FA3FC 002F733C  7F C3 F3 78 */	mr r3, r30
/* 802FA400 002F7340  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FA404 002F7344  7D 89 03 A6 */	mtctr r12
/* 802FA408 002F7348  4E 80 04 21 */	bctrl 
/* 802FA40C 002F734C  FC 40 08 90 */	fmr f2, f1
/* 802FA410 002F7350  FC 20 D0 90 */	fmr f1, f26
/* 802FA414 002F7354  48 11 77 E9 */	bl angDist__Fff
/* 802FA418 002F7358  7F C4 F3 78 */	mr r4, r30
/* 802FA41C 002F735C  FF 80 08 90 */	fmr f28, f1
/* 802FA420 002F7360  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA424 002F7364  38 61 00 14 */	addi r3, r1, 0x14
/* 802FA428 002F7368  3B E0 00 00 */	li r31, 0
/* 802FA42C 002F736C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA430 002F7370  7D 89 03 A6 */	mtctr r12
/* 802FA434 002F7374  4E 80 04 21 */	bctrl 
/* 802FA438 002F7378  7F A4 EB 78 */	mr r4, r29
/* 802FA43C 002F737C  38 61 00 08 */	addi r3, r1, 8
/* 802FA440 002F7380  81 9D 00 00 */	lwz r12, 0(r29)
/* 802FA444 002F7384  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 802FA448 002F7388  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA44C 002F738C  7D 89 03 A6 */	mtctr r12
/* 802FA450 002F7390  4E 80 04 21 */	bctrl 
/* 802FA454 002F7394  7F C4 F3 78 */	mr r4, r30
/* 802FA458 002F7398  C0 01 00 08 */	lfs f0, 8(r1)
/* 802FA45C 002F739C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA460 002F73A0  38 61 00 2C */	addi r3, r1, 0x2c
/* 802FA464 002F73A4  EF 40 E8 28 */	fsubs f26, f0, f29
/* 802FA468 002F73A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA46C 002F73AC  7D 89 03 A6 */	mtctr r12
/* 802FA470 002F73B0  4E 80 04 21 */	bctrl 
/* 802FA474 002F73B4  7F A4 EB 78 */	mr r4, r29
/* 802FA478 002F73B8  38 61 00 20 */	addi r3, r1, 0x20
/* 802FA47C 002F73BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802FA480 002F73C0  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 802FA484 002F73C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA488 002F73C8  7D 89 03 A6 */	mtctr r12
/* 802FA48C 002F73CC  4E 80 04 21 */	bctrl 
/* 802FA490 002F73D0  7F C4 F3 78 */	mr r4, r30
/* 802FA494 002F73D4  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802FA498 002F73D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA49C 002F73DC  38 61 00 44 */	addi r3, r1, 0x44
/* 802FA4A0 002F73E0  EF 60 E8 28 */	fsubs f27, f0, f29
/* 802FA4A4 002F73E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA4A8 002F73E8  7D 89 03 A6 */	mtctr r12
/* 802FA4AC 002F73EC  4E 80 04 21 */	bctrl 
/* 802FA4B0 002F73F0  7F A4 EB 78 */	mr r4, r29
/* 802FA4B4 002F73F4  38 61 00 38 */	addi r3, r1, 0x38
/* 802FA4B8 002F73F8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802FA4BC 002F73FC  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 802FA4C0 002F7400  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA4C4 002F7404  7D 89 03 A6 */	mtctr r12
/* 802FA4C8 002F7408  4E 80 04 21 */	bctrl 
/* 802FA4CC 002F740C  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 802FA4D0 002F7410  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 802FA4D4 002F7414  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 802FA4D8 002F7418  EC 42 E8 28 */	fsubs f2, f2, f29
/* 802FA4DC 002F741C  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 802FA4E0 002F7420  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802FA4E4 002F7424  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FA4E8 002F7428  40 80 00 2C */	bge .L_802FA514
/* 802FA4EC 002F742C  C0 02 EF EC */	lfs f0, lbl_8051D34C@sda21(r2)
/* 802FA4F0 002F7430  FC 40 E2 10 */	fabs f2, f28
/* 802FA4F4 002F7434  C0 22 EF E8 */	lfs f1, lbl_8051D348@sda21(r2)
/* 802FA4F8 002F7438  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802FA4FC 002F743C  FC 40 10 18 */	frsp f2, f2
/* 802FA500 002F7440  EC 01 00 32 */	fmuls f0, f1, f0
/* 802FA504 002F7444  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FA508 002F7448  4C 40 13 82 */	cror 2, 0, 2
/* 802FA50C 002F744C  40 82 00 08 */	bne .L_802FA514
/* 802FA510 002F7450  3B E0 00 01 */	li r31, 1
.L_802FA514:
/* 802FA514 002F7454  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802FA518 002F7458  41 82 00 28 */	beq .L_802FA540
/* 802FA51C 002F745C  7F 83 E3 78 */	mr r3, r28
/* 802FA520 002F7460  7F C4 F3 78 */	mr r4, r30
/* 802FA524 002F7464  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA528 002F7468  38 A0 00 05 */	li r5, 5
/* 802FA52C 002F746C  38 C0 00 00 */	li r6, 0
/* 802FA530 002F7470  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA534 002F7474  7D 89 03 A6 */	mtctr r12
/* 802FA538 002F7478  4E 80 04 21 */	bctrl 
/* 802FA53C 002F747C  48 00 00 50 */	b .L_802FA58C
.L_802FA540:
/* 802FA540 002F7480  7F C3 F3 78 */	mr r3, r30
/* 802FA544 002F7484  48 00 29 89 */	bl setRandTarget__Q34Game10DangoMushi3ObjFv
/* 802FA548 002F7488  7F 83 E3 78 */	mr r3, r28
/* 802FA54C 002F748C  7F C4 F3 78 */	mr r4, r30
/* 802FA550 002F7490  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA554 002F7494  38 A0 00 04 */	li r5, 4
/* 802FA558 002F7498  38 C0 00 00 */	li r6, 0
/* 802FA55C 002F749C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA560 002F74A0  7D 89 03 A6 */	mtctr r12
/* 802FA564 002F74A4  4E 80 04 21 */	bctrl 
/* 802FA568 002F74A8  48 00 00 24 */	b .L_802FA58C
.L_802FA56C:
/* 802FA56C 002F74AC  7F 83 E3 78 */	mr r3, r28
/* 802FA570 002F74B0  7F C4 F3 78 */	mr r4, r30
/* 802FA574 002F74B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA578 002F74B8  38 A0 00 03 */	li r5, 3
/* 802FA57C 002F74BC  38 C0 00 00 */	li r6, 0
/* 802FA580 002F74C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA584 002F74C4  7D 89 03 A6 */	mtctr r12
/* 802FA588 002F74C8  4E 80 04 21 */	bctrl 
.L_802FA58C:
/* 802FA58C 002F74CC  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 802FA590 002F74D0  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 802FA594 002F74D4  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 802FA598 002F74D8  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 802FA59C 002F74DC  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 802FA5A0 002F74E0  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 802FA5A4 002F74E4  E3 81 00 E8 */	psq_l f28, 232(r1), 0, qr0
/* 802FA5A8 002F74E8  CB 81 00 E0 */	lfd f28, 0xe0(r1)
/* 802FA5AC 002F74EC  E3 61 00 D8 */	psq_l f27, 216(r1), 0, qr0
/* 802FA5B0 002F74F0  CB 61 00 D0 */	lfd f27, 0xd0(r1)
/* 802FA5B4 002F74F4  E3 41 00 C8 */	psq_l f26, 200(r1), 0, qr0
/* 802FA5B8 002F74F8  CB 41 00 C0 */	lfd f26, 0xc0(r1)
/* 802FA5BC 002F74FC  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 802FA5C0 002F7500  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 802FA5C4 002F7504  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 802FA5C8 002F7508  80 01 01 24 */	lwz r0, 0x124(r1)
/* 802FA5CC 002F750C  83 81 00 B0 */	lwz r28, 0xb0(r1)
/* 802FA5D0 002F7510  7C 08 03 A6 */	mtlr r0
/* 802FA5D4 002F7514  38 21 01 20 */	addi r1, r1, 0x120
/* 802FA5D8 002F7518  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBase, global
/* 802FA5DC 002F751C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FA5E0 002F7520  7C 08 02 A6 */	mflr r0
/* 802FA5E4 002F7524  7C 83 23 78 */	mr r3, r4
/* 802FA5E8 002F7528  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FA5EC 002F752C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802FA5F0 002F7530  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802FA5F4 002F7534  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802FA5F8 002F7538  4B E0 D1 9D */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802FA5FC 002F753C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FA600 002F7540  7C 08 03 A6 */	mtlr r0
/* 802FA604 002F7544  38 21 00 10 */	addi r1, r1, 0x10
/* 802FA608 002F7548  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi11StateAppearFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FA60C 002F754C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FA610 002F7550  7C 08 02 A6 */	mflr r0
/* 802FA614 002F7554  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FA618 002F7558  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FA61C 002F755C  38 00 FF FF */	li r0, -1
/* 802FA620 002F7560  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FA624 002F7564  7C 9F 23 78 */	mr r31, r4
/* 802FA628 002F7568  7F E3 FB 78 */	mr r3, r31
/* 802FA62C 002F756C  93 C1 00 08 */	stw r30, 8(r1)
/* 802FA630 002F7570  7C BE 2B 78 */	mr r30, r5
/* 802FA634 002F7574  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802FA638 002F7578  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802FA63C 002F757C  48 00 28 91 */	bl setRandTarget__Q34Game10DangoMushi3ObjFv
/* 802FA640 002F7580  38 00 00 00 */	li r0, 0
/* 802FA644 002F7584  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FA648 002F7588  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 802FA64C 002F758C  28 1E 00 00 */	cmplwi r30, 0
/* 802FA650 002F7590  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FA654 002F7594  60 00 00 01 */	ori r0, r0, 1
/* 802FA658 002F7598  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FA65C 002F759C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FA660 002F75A0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FA664 002F75A4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FA668 002F75A8  41 82 00 18 */	beq .L_802FA680
/* 802FA66C 002F75AC  7F E3 FB 78 */	mr r3, r31
/* 802FA670 002F75B0  38 80 00 01 */	li r4, 1
/* 802FA674 002F75B4  38 A0 00 01 */	li r5, 1
/* 802FA678 002F75B8  48 00 3F D1 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FA67C 002F75BC  48 00 00 14 */	b .L_802FA690
.L_802FA680:
/* 802FA680 002F75C0  7F E3 FB 78 */	mr r3, r31
/* 802FA684 002F75C4  38 80 00 01 */	li r4, 1
/* 802FA688 002F75C8  38 A0 00 00 */	li r5, 0
/* 802FA68C 002F75CC  48 00 3F BD */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
.L_802FA690:
/* 802FA690 002F75D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FA694 002F75D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FA698 002F75D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802FA69C 002F75DC  7C 08 03 A6 */	mtlr r0
/* 802FA6A0 002F75E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802FA6A4 002F75E4  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBase, global
/* 802FA6A8 002F75E8  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 802FA6AC 002F75EC  7C 08 02 A6 */	mflr r0
/* 802FA6B0 002F75F0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 802FA6B4 002F75F4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 802FA6B8 002F75F8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 802FA6BC 002F75FC  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 802FA6C0 002F7600  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 802FA6C4 002F7604  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 802FA6C8 002F7608  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 802FA6CC 002F760C  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 802FA6D0 002F7610  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 802FA6D4 002F7614  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 802FA6D8 002F7618  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 802FA6DC 002F761C  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 802FA6E0 002F7620  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 802FA6E4 002F7624  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 802FA6E8 002F7628  93 C1 00 88 */	stw r30, 0x88(r1)
/* 802FA6EC 002F762C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 802FA6F0 002F7630  93 81 00 80 */	stw r28, 0x80(r1)
/* 802FA6F4 002F7634  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FA6F8 002F7638  7C 9F 23 78 */	mr r31, r4
/* 802FA6FC 002F763C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802FA700 002F7640  7C 7E 1B 78 */	mr r30, r3
/* 802FA704 002F7644  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FA708 002F7648  4C 40 13 82 */	cror 2, 0, 2
/* 802FA70C 002F764C  40 82 00 28 */	bne .L_802FA734
/* 802FA710 002F7650  38 00 00 00 */	li r0, 0
/* 802FA714 002F7654  38 A0 00 00 */	li r5, 0
/* 802FA718 002F7658  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FA71C 002F765C  38 C2 EF F0 */	addi r6, r2, lbl_8051D350@sda21
/* 802FA720 002F7660  81 83 00 00 */	lwz r12, 0(r3)
/* 802FA724 002F7664  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA728 002F7668  7D 89 03 A6 */	mtctr r12
/* 802FA72C 002F766C  4E 80 04 21 */	bctrl 
/* 802FA730 002F7670  48 00 02 8C */	b .L_802FA9BC
.L_802FA734:
/* 802FA734 002F7674  7F E3 FB 78 */	mr r3, r31
/* 802FA738 002F7678  48 00 29 61 */	bl getSearchedTarget__Q34Game10DangoMushi3ObjFv
/* 802FA73C 002F767C  7C 7C 1B 79 */	or. r28, r3, r3
/* 802FA740 002F7680  41 82 01 F8 */	beq .L_802FA938
/* 802FA744 002F7684  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802FA748 002F7688  28 03 00 00 */	cmplwi r3, 0
/* 802FA74C 002F768C  41 82 01 EC */	beq .L_802FA938
/* 802FA750 002F7690  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802FA754 002F7694  2C 00 00 04 */	cmpwi r0, 4
/* 802FA758 002F7698  41 82 01 E0 */	beq .L_802FA938
/* 802FA75C 002F769C  7F 84 E3 78 */	mr r4, r28
/* 802FA760 002F76A0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FA764 002F76A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA768 002F76A8  38 61 00 68 */	addi r3, r1, 0x68
/* 802FA76C 002F76AC  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 802FA770 002F76B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA774 002F76B4  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 802FA778 002F76B8  7D 89 03 A6 */	mtctr r12
/* 802FA77C 002F76BC  4E 80 04 21 */	bctrl 
/* 802FA780 002F76C0  7F E4 FB 78 */	mr r4, r31
/* 802FA784 002F76C4  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 802FA788 002F76C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FA78C 002F76CC  38 61 00 74 */	addi r3, r1, 0x74
/* 802FA790 002F76D0  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 802FA794 002F76D4  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802FA798 002F76D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA79C 002F76DC  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 802FA7A0 002F76E0  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802FA7A4 002F76E4  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802FA7A8 002F76E8  7D 89 03 A6 */	mtctr r12
/* 802FA7AC 002F76EC  4E 80 04 21 */	bctrl 
/* 802FA7B0 002F76F0  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 802FA7B4 002F76F4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FA7B8 002F76F8  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 802FA7BC 002F76FC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FA7C0 002F7700  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802FA7C4 002F7704  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802FA7C8 002F7708  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 802FA7CC 002F770C  EC 21 28 28 */	fsubs f1, f1, f5
/* 802FA7D0 002F7710  EC 40 18 28 */	fsubs f2, f0, f3
/* 802FA7D4 002F7714  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 802FA7D8 002F7718  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 802FA7DC 002F771C  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 802FA7E0 002F7720  4B D3 A9 29 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FA7E4 002F7724  48 11 73 ED */	bl roundAng__Ff
/* 802FA7E8 002F7728  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FA7EC 002F772C  FF 40 08 90 */	fmr f26, f1
/* 802FA7F0 002F7730  7F E3 FB 78 */	mr r3, r31
/* 802FA7F4 002F7734  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FA7F8 002F7738  7D 89 03 A6 */	mtctr r12
/* 802FA7FC 002F773C  4E 80 04 21 */	bctrl 
/* 802FA800 002F7740  FC 40 08 90 */	fmr f2, f1
/* 802FA804 002F7744  FC 20 D0 90 */	fmr f1, f26
/* 802FA808 002F7748  48 11 73 F5 */	bl angDist__Fff
/* 802FA80C 002F774C  7F E4 FB 78 */	mr r4, r31
/* 802FA810 002F7750  FF 80 08 90 */	fmr f28, f1
/* 802FA814 002F7754  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FA818 002F7758  38 61 00 14 */	addi r3, r1, 0x14
/* 802FA81C 002F775C  3B A0 00 00 */	li r29, 0
/* 802FA820 002F7760  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA824 002F7764  7D 89 03 A6 */	mtctr r12
/* 802FA828 002F7768  4E 80 04 21 */	bctrl 
/* 802FA82C 002F776C  7F 84 E3 78 */	mr r4, r28
/* 802FA830 002F7770  38 61 00 08 */	addi r3, r1, 8
/* 802FA834 002F7774  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA838 002F7778  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 802FA83C 002F777C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA840 002F7780  7D 89 03 A6 */	mtctr r12
/* 802FA844 002F7784  4E 80 04 21 */	bctrl 
/* 802FA848 002F7788  7F E4 FB 78 */	mr r4, r31
/* 802FA84C 002F778C  C0 01 00 08 */	lfs f0, 8(r1)
/* 802FA850 002F7790  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FA854 002F7794  38 61 00 2C */	addi r3, r1, 0x2c
/* 802FA858 002F7798  EF 40 E8 28 */	fsubs f26, f0, f29
/* 802FA85C 002F779C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA860 002F77A0  7D 89 03 A6 */	mtctr r12
/* 802FA864 002F77A4  4E 80 04 21 */	bctrl 
/* 802FA868 002F77A8  7F 84 E3 78 */	mr r4, r28
/* 802FA86C 002F77AC  38 61 00 20 */	addi r3, r1, 0x20
/* 802FA870 002F77B0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA874 002F77B4  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 802FA878 002F77B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA87C 002F77BC  7D 89 03 A6 */	mtctr r12
/* 802FA880 002F77C0  4E 80 04 21 */	bctrl 
/* 802FA884 002F77C4  7F E4 FB 78 */	mr r4, r31
/* 802FA888 002F77C8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802FA88C 002F77CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FA890 002F77D0  38 61 00 44 */	addi r3, r1, 0x44
/* 802FA894 002F77D4  EF 60 E8 28 */	fsubs f27, f0, f29
/* 802FA898 002F77D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA89C 002F77DC  7D 89 03 A6 */	mtctr r12
/* 802FA8A0 002F77E0  4E 80 04 21 */	bctrl 
/* 802FA8A4 002F77E4  7F 84 E3 78 */	mr r4, r28
/* 802FA8A8 002F77E8  38 61 00 38 */	addi r3, r1, 0x38
/* 802FA8AC 002F77EC  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FA8B0 002F77F0  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 802FA8B4 002F77F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FA8B8 002F77F8  7D 89 03 A6 */	mtctr r12
/* 802FA8BC 002F77FC  4E 80 04 21 */	bctrl 
/* 802FA8C0 002F7800  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 802FA8C4 002F7804  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 802FA8C8 002F7808  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 802FA8CC 002F780C  EC 42 E8 28 */	fsubs f2, f2, f29
/* 802FA8D0 002F7810  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 802FA8D4 002F7814  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802FA8D8 002F7818  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FA8DC 002F781C  40 80 00 2C */	bge .L_802FA908
/* 802FA8E0 002F7820  C0 02 EF EC */	lfs f0, lbl_8051D34C@sda21(r2)
/* 802FA8E4 002F7824  FC 40 E2 10 */	fabs f2, f28
/* 802FA8E8 002F7828  C0 22 EF E8 */	lfs f1, lbl_8051D348@sda21(r2)
/* 802FA8EC 002F782C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802FA8F0 002F7830  FC 40 10 18 */	frsp f2, f2
/* 802FA8F4 002F7834  EC 01 00 32 */	fmuls f0, f1, f0
/* 802FA8F8 002F7838  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FA8FC 002F783C  4C 40 13 82 */	cror 2, 0, 2
/* 802FA900 002F7840  40 82 00 08 */	bne .L_802FA908
/* 802FA904 002F7844  3B A0 00 01 */	li r29, 1
.L_802FA908:
/* 802FA908 002F7848  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802FA90C 002F784C  41 82 00 18 */	beq .L_802FA924
/* 802FA910 002F7850  38 00 00 05 */	li r0, 5
/* 802FA914 002F7854  7F E3 FB 78 */	mr r3, r31
/* 802FA918 002F7858  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FA91C 002F785C  4B E0 A9 85 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802FA920 002F7860  48 00 00 38 */	b .L_802FA958
.L_802FA924:
/* 802FA924 002F7864  38 00 00 04 */	li r0, 4
/* 802FA928 002F7868  7F E3 FB 78 */	mr r3, r31
/* 802FA92C 002F786C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FA930 002F7870  4B E0 A9 71 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802FA934 002F7874  48 00 00 24 */	b .L_802FA958
.L_802FA938:
/* 802FA938 002F7878  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FA93C 002F787C  C0 02 EF F8 */	lfs f0, lbl_8051D358@sda21(r2)
/* 802FA940 002F7880  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FA944 002F7884  40 81 00 14 */	ble .L_802FA958
/* 802FA948 002F7888  38 00 00 04 */	li r0, 4
/* 802FA94C 002F788C  7F E3 FB 78 */	mr r3, r31
/* 802FA950 002F7890  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FA954 002F7894  4B E0 A9 4D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802FA958:
/* 802FA958 002F7898  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802FA95C 002F789C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FA960 002F78A0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802FA964 002F78A4  EC 01 00 2A */	fadds f0, f1, f0
/* 802FA968 002F78A8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FA96C 002F78AC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802FA970 002F78B0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802FA974 002F78B4  28 00 00 00 */	cmplwi r0, 0
/* 802FA978 002F78B8  41 82 00 44 */	beq .L_802FA9BC
/* 802FA97C 002F78BC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FA980 002F78C0  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FA984 002F78C4  40 82 00 10 */	bne .L_802FA994
/* 802FA988 002F78C8  7F E3 FB 78 */	mr r3, r31
/* 802FA98C 002F78CC  48 00 3D D9 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FA990 002F78D0  48 00 00 2C */	b .L_802FA9BC
.L_802FA994:
/* 802FA994 002F78D4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FA998 002F78D8  40 82 00 24 */	bne .L_802FA9BC
/* 802FA99C 002F78DC  7F C3 F3 78 */	mr r3, r30
/* 802FA9A0 002F78E0  7F E4 FB 78 */	mr r4, r31
/* 802FA9A4 002F78E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FA9A8 002F78E8  38 C0 00 00 */	li r6, 0
/* 802FA9AC 002F78EC  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802FA9B0 002F78F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FA9B4 002F78F4  7D 89 03 A6 */	mtctr r12
/* 802FA9B8 002F78F8  4E 80 04 21 */	bctrl 
.L_802FA9BC:
/* 802FA9BC 002F78FC  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 802FA9C0 002F7900  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 802FA9C4 002F7904  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 802FA9C8 002F7908  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 802FA9CC 002F790C  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 802FA9D0 002F7910  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 802FA9D4 002F7914  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 802FA9D8 002F7918  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 802FA9DC 002F791C  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 802FA9E0 002F7920  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 802FA9E4 002F7924  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 802FA9E8 002F7928  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 802FA9EC 002F792C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802FA9F0 002F7930  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802FA9F4 002F7934  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 802FA9F8 002F7938  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 802FA9FC 002F793C  83 81 00 80 */	lwz r28, 0x80(r1)
/* 802FAA00 002F7940  7C 08 03 A6 */	mtlr r0
/* 802FAA04 002F7944  38 21 00 F0 */	addi r1, r1, 0xf0
/* 802FAA08 002F7948  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBase, global
/* 802FAA0C 002F794C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FAA10 002F7950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FAA14 002F7954  7C 08 02 A6 */	mflr r0
/* 802FAA18 002F7958  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FAA1C 002F795C  7C 83 23 78 */	mr r3, r4
/* 802FAA20 002F7960  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FAA24 002F7964  38 A0 FF FF */	li r5, -1
/* 802FAA28 002F7968  38 00 00 00 */	li r0, 0
/* 802FAA2C 002F796C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802FAA30 002F7970  38 80 00 02 */	li r4, 2
/* 802FAA34 002F7974  90 A3 02 CC */	stw r5, 0x2cc(r3)
/* 802FAA38 002F7978  38 A0 00 00 */	li r5, 0
/* 802FAA3C 002F797C  98 03 02 C2 */	stb r0, 0x2c2(r3)
/* 802FAA40 002F7980  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802FAA44 002F7984  60 00 00 01 */	ori r0, r0, 1
/* 802FAA48 002F7988  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802FAA4C 002F798C  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802FAA50 002F7990  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802FAA54 002F7994  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802FAA58 002F7998  48 00 3B F1 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FAA5C 002F799C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FAA60 002F79A0  7C 08 03 A6 */	mtlr r0
/* 802FAA64 002F79A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FAA68 002F79A8  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBase, global
/* 802FAA6C 002F79AC  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 802FAA70 002F79B0  7C 08 02 A6 */	mflr r0
/* 802FAA74 002F79B4  90 01 01 84 */	stw r0, 0x184(r1)
/* 802FAA78 002F79B8  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 802FAA7C 002F79BC  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 802FAA80 002F79C0  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 802FAA84 002F79C4  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 802FAA88 002F79C8  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 802FAA8C 002F79CC  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 802FAA90 002F79D0  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 802FAA94 002F79D4  F3 81 01 48 */	psq_st f28, 328(r1), 0, qr0
/* 802FAA98 002F79D8  DB 61 01 30 */	stfd f27, 0x130(r1)
/* 802FAA9C 002F79DC  F3 61 01 38 */	psq_st f27, 312(r1), 0, qr0
/* 802FAAA0 002F79E0  DB 41 01 20 */	stfd f26, 0x120(r1)
/* 802FAAA4 002F79E4  F3 41 01 28 */	psq_st f26, 296(r1), 0, qr0
/* 802FAAA8 002F79E8  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 802FAAAC 002F79EC  93 C1 01 18 */	stw r30, 0x118(r1)
/* 802FAAB0 002F79F0  93 A1 01 14 */	stw r29, 0x114(r1)
/* 802FAAB4 002F79F4  93 81 01 10 */	stw r28, 0x110(r1)
/* 802FAAB8 002F79F8  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FAABC 002F79FC  7C 9F 23 78 */	mr r31, r4
/* 802FAAC0 002F7A00  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802FAAC4 002F7A04  7C 7E 1B 78 */	mr r30, r3
/* 802FAAC8 002F7A08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FAACC 002F7A0C  4C 40 13 82 */	cror 2, 0, 2
/* 802FAAD0 002F7A10  40 82 00 28 */	bne .L_802FAAF8
/* 802FAAD4 002F7A14  38 00 00 00 */	li r0, 0
/* 802FAAD8 002F7A18  38 A0 00 00 */	li r5, 0
/* 802FAADC 002F7A1C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FAAE0 002F7A20  38 C2 EF F0 */	addi r6, r2, lbl_8051D350@sda21
/* 802FAAE4 002F7A24  81 83 00 00 */	lwz r12, 0(r3)
/* 802FAAE8 002F7A28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FAAEC 002F7A2C  7D 89 03 A6 */	mtctr r12
/* 802FAAF0 002F7A30  4E 80 04 21 */	bctrl 
/* 802FAAF4 002F7A34  48 00 06 D0 */	b .L_802FB1C4
.L_802FAAF8:
/* 802FAAF8 002F7A38  7F E3 FB 78 */	mr r3, r31
/* 802FAAFC 002F7A3C  48 00 25 9D */	bl getSearchedTarget__Q34Game10DangoMushi3ObjFv
/* 802FAB00 002F7A40  7C 7C 1B 79 */	or. r28, r3, r3
/* 802FAB04 002F7A44  41 82 03 A4 */	beq .L_802FAEA8
/* 802FAB08 002F7A48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802FAB0C 002F7A4C  28 03 00 00 */	cmplwi r3, 0
/* 802FAB10 002F7A50  41 82 03 98 */	beq .L_802FAEA8
/* 802FAB14 002F7A54  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802FAB18 002F7A58  2C 00 00 04 */	cmpwi r0, 4
/* 802FAB1C 002F7A5C  41 82 03 8C */	beq .L_802FAEA8
/* 802FAB20 002F7A60  7F 84 E3 78 */	mr r4, r28
/* 802FAB24 002F7A64  38 61 00 E0 */	addi r3, r1, 0xe0
/* 802FAB28 002F7A68  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FAB2C 002F7A6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAB30 002F7A70  7D 89 03 A6 */	mtctr r12
/* 802FAB34 002F7A74  4E 80 04 21 */	bctrl 
/* 802FAB38 002F7A78  7F E4 FB 78 */	mr r4, r31
/* 802FAB3C 002F7A7C  C0 41 00 E0 */	lfs f2, 0xe0(r1)
/* 802FAB40 002F7A80  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAB44 002F7A84  38 61 00 EC */	addi r3, r1, 0xec
/* 802FAB48 002F7A88  C0 21 00 E4 */	lfs f1, 0xe4(r1)
/* 802FAB4C 002F7A8C  C0 01 00 E8 */	lfs f0, 0xe8(r1)
/* 802FAB50 002F7A90  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAB54 002F7A94  D0 41 00 C8 */	stfs f2, 0xc8(r1)
/* 802FAB58 002F7A98  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 802FAB5C 002F7A9C  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 802FAB60 002F7AA0  7D 89 03 A6 */	mtctr r12
/* 802FAB64 002F7AA4  4E 80 04 21 */	bctrl 
/* 802FAB68 002F7AA8  C0 A1 00 EC */	lfs f5, 0xec(r1)
/* 802FAB6C 002F7AAC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FAB70 002F7AB0  C0 61 00 F4 */	lfs f3, 0xf4(r1)
/* 802FAB74 002F7AB4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FAB78 002F7AB8  C0 21 00 C8 */	lfs f1, 0xc8(r1)
/* 802FAB7C 002F7ABC  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 802FAB80 002F7AC0  C0 81 00 F0 */	lfs f4, 0xf0(r1)
/* 802FAB84 002F7AC4  EC 21 28 28 */	fsubs f1, f1, f5
/* 802FAB88 002F7AC8  EC 40 18 28 */	fsubs f2, f0, f3
/* 802FAB8C 002F7ACC  D0 A1 00 D4 */	stfs f5, 0xd4(r1)
/* 802FAB90 002F7AD0  D0 81 00 D8 */	stfs f4, 0xd8(r1)
/* 802FAB94 002F7AD4  D0 61 00 DC */	stfs f3, 0xdc(r1)
/* 802FAB98 002F7AD8  4B D3 A5 71 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FAB9C 002F7ADC  48 11 70 35 */	bl roundAng__Ff
/* 802FABA0 002F7AE0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FABA4 002F7AE4  FF 40 08 90 */	fmr f26, f1
/* 802FABA8 002F7AE8  7F E3 FB 78 */	mr r3, r31
/* 802FABAC 002F7AEC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FABB0 002F7AF0  7D 89 03 A6 */	mtctr r12
/* 802FABB4 002F7AF4  4E 80 04 21 */	bctrl 
/* 802FABB8 002F7AF8  FC 40 08 90 */	fmr f2, f1
/* 802FABBC 002F7AFC  FC 20 D0 90 */	fmr f1, f26
/* 802FABC0 002F7B00  48 11 70 3D */	bl angDist__Fff
/* 802FABC4 002F7B04  7F E4 FB 78 */	mr r4, r31
/* 802FABC8 002F7B08  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FABCC 002F7B0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FABD0 002F7B10  FF E0 08 90 */	fmr f31, f1
/* 802FABD4 002F7B14  38 61 00 5C */	addi r3, r1, 0x5c
/* 802FABD8 002F7B18  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 802FABDC 002F7B1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FABE0 002F7B20  3B A0 00 00 */	li r29, 0
/* 802FABE4 002F7B24  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 802FABE8 002F7B28  7D 89 03 A6 */	mtctr r12
/* 802FABEC 002F7B2C  4E 80 04 21 */	bctrl 
/* 802FABF0 002F7B30  7F 84 E3 78 */	mr r4, r28
/* 802FABF4 002F7B34  38 61 00 50 */	addi r3, r1, 0x50
/* 802FABF8 002F7B38  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FABFC 002F7B3C  C3 C1 00 5C */	lfs f30, 0x5c(r1)
/* 802FAC00 002F7B40  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAC04 002F7B44  7D 89 03 A6 */	mtctr r12
/* 802FAC08 002F7B48  4E 80 04 21 */	bctrl 
/* 802FAC0C 002F7B4C  7F E4 FB 78 */	mr r4, r31
/* 802FAC10 002F7B50  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 802FAC14 002F7B54  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAC18 002F7B58  38 61 00 74 */	addi r3, r1, 0x74
/* 802FAC1C 002F7B5C  EF 40 F0 28 */	fsubs f26, f0, f30
/* 802FAC20 002F7B60  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAC24 002F7B64  7D 89 03 A6 */	mtctr r12
/* 802FAC28 002F7B68  4E 80 04 21 */	bctrl 
/* 802FAC2C 002F7B6C  7F 84 E3 78 */	mr r4, r28
/* 802FAC30 002F7B70  38 61 00 68 */	addi r3, r1, 0x68
/* 802FAC34 002F7B74  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FAC38 002F7B78  C3 C1 00 78 */	lfs f30, 0x78(r1)
/* 802FAC3C 002F7B7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAC40 002F7B80  7D 89 03 A6 */	mtctr r12
/* 802FAC44 002F7B84  4E 80 04 21 */	bctrl 
/* 802FAC48 002F7B88  7F E4 FB 78 */	mr r4, r31
/* 802FAC4C 002F7B8C  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 802FAC50 002F7B90  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAC54 002F7B94  38 61 00 8C */	addi r3, r1, 0x8c
/* 802FAC58 002F7B98  EF 60 F0 28 */	fsubs f27, f0, f30
/* 802FAC5C 002F7B9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAC60 002F7BA0  7D 89 03 A6 */	mtctr r12
/* 802FAC64 002F7BA4  4E 80 04 21 */	bctrl 
/* 802FAC68 002F7BA8  7F 84 E3 78 */	mr r4, r28
/* 802FAC6C 002F7BAC  38 61 00 80 */	addi r3, r1, 0x80
/* 802FAC70 002F7BB0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FAC74 002F7BB4  C3 C1 00 94 */	lfs f30, 0x94(r1)
/* 802FAC78 002F7BB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAC7C 002F7BBC  7D 89 03 A6 */	mtctr r12
/* 802FAC80 002F7BC0  4E 80 04 21 */	bctrl 
/* 802FAC84 002F7BC4  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 802FAC88 002F7BC8  C0 41 00 88 */	lfs f2, 0x88(r1)
/* 802FAC8C 002F7BCC  EC 1D 07 72 */	fmuls f0, f29, f29
/* 802FAC90 002F7BD0  EC 42 F0 28 */	fsubs f2, f2, f30
/* 802FAC94 002F7BD4  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 802FAC98 002F7BD8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802FAC9C 002F7BDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FACA0 002F7BE0  40 80 00 2C */	bge .L_802FACCC
/* 802FACA4 002F7BE4  C0 02 EF EC */	lfs f0, lbl_8051D34C@sda21(r2)
/* 802FACA8 002F7BE8  FC 40 FA 10 */	fabs f2, f31
/* 802FACAC 002F7BEC  C0 22 EF E8 */	lfs f1, lbl_8051D348@sda21(r2)
/* 802FACB0 002F7BF0  EC 00 07 32 */	fmuls f0, f0, f28
/* 802FACB4 002F7BF4  FC 40 10 18 */	frsp f2, f2
/* 802FACB8 002F7BF8  EC 01 00 32 */	fmuls f0, f1, f0
/* 802FACBC 002F7BFC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FACC0 002F7C00  4C 40 13 82 */	cror 2, 0, 2
/* 802FACC4 002F7C04  40 82 00 08 */	bne .L_802FACCC
/* 802FACC8 002F7C08  3B A0 00 01 */	li r29, 1
.L_802FACCC:
/* 802FACCC 002F7C0C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802FACD0 002F7C10  41 82 00 18 */	beq .L_802FACE8
/* 802FACD4 002F7C14  38 00 00 05 */	li r0, 5
/* 802FACD8 002F7C18  7F E3 FB 78 */	mr r3, r31
/* 802FACDC 002F7C1C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FACE0 002F7C20  4B E0 A5 C1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802FACE4 002F7C24  48 00 03 F8 */	b .L_802FB0DC
.L_802FACE8:
/* 802FACE8 002F7C28  7F 84 E3 78 */	mr r4, r28
/* 802FACEC 002F7C2C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FACF0 002F7C30  81 9C 00 00 */	lwz r12, 0(r28)
/* 802FACF4 002F7C34  38 61 00 38 */	addi r3, r1, 0x38
/* 802FACF8 002F7C38  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802FACFC 002F7C3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAD00 002F7C40  C3 85 03 0C */	lfs f28, 0x30c(r5)
/* 802FAD04 002F7C44  7D 89 03 A6 */	mtctr r12
/* 802FAD08 002F7C48  4E 80 04 21 */	bctrl 
/* 802FAD0C 002F7C4C  7F E4 FB 78 */	mr r4, r31
/* 802FAD10 002F7C50  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 802FAD14 002F7C54  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAD18 002F7C58  38 61 00 44 */	addi r3, r1, 0x44
/* 802FAD1C 002F7C5C  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 802FAD20 002F7C60  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802FAD24 002F7C64  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAD28 002F7C68  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802FAD2C 002F7C6C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802FAD30 002F7C70  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802FAD34 002F7C74  7D 89 03 A6 */	mtctr r12
/* 802FAD38 002F7C78  4E 80 04 21 */	bctrl 
/* 802FAD3C 002F7C7C  C0 A1 00 44 */	lfs f5, 0x44(r1)
/* 802FAD40 002F7C80  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FAD44 002F7C84  C0 61 00 4C */	lfs f3, 0x4c(r1)
/* 802FAD48 002F7C88  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FAD4C 002F7C8C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 802FAD50 002F7C90  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802FAD54 002F7C94  C0 81 00 48 */	lfs f4, 0x48(r1)
/* 802FAD58 002F7C98  EC 21 28 28 */	fsubs f1, f1, f5
/* 802FAD5C 002F7C9C  EC 40 18 28 */	fsubs f2, f0, f3
/* 802FAD60 002F7CA0  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 802FAD64 002F7CA4  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 802FAD68 002F7CA8  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 802FAD6C 002F7CAC  4B D3 A3 9D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FAD70 002F7CB0  48 11 6E 61 */	bl roundAng__Ff
/* 802FAD74 002F7CB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAD78 002F7CB8  FF 40 08 90 */	fmr f26, f1
/* 802FAD7C 002F7CBC  7F E3 FB 78 */	mr r3, r31
/* 802FAD80 002F7CC0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FAD84 002F7CC4  7D 89 03 A6 */	mtctr r12
/* 802FAD88 002F7CC8  4E 80 04 21 */	bctrl 
/* 802FAD8C 002F7CCC  FC 40 08 90 */	fmr f2, f1
/* 802FAD90 002F7CD0  FC 20 D0 90 */	fmr f1, f26
/* 802FAD94 002F7CD4  48 11 6E 69 */	bl angDist__Fff
/* 802FAD98 002F7CD8  EF 41 07 32 */	fmuls f26, f1, f28
/* 802FAD9C 002F7CDC  C0 02 EF EC */	lfs f0, lbl_8051D34C@sda21(r2)
/* 802FADA0 002F7CE0  C0 22 EF E8 */	lfs f1, lbl_8051D348@sda21(r2)
/* 802FADA4 002F7CE4  EC 00 07 72 */	fmuls f0, f0, f29
/* 802FADA8 002F7CE8  FC 40 D2 10 */	fabs f2, f26
/* 802FADAC 002F7CEC  EC 21 00 32 */	fmuls f1, f1, f0
/* 802FADB0 002F7CF0  FC 00 10 18 */	frsp f0, f2
/* 802FADB4 002F7CF4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802FADB8 002F7CF8  40 81 00 1C */	ble .L_802FADD4
/* 802FADBC 002F7CFC  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FADC0 002F7D00  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 802FADC4 002F7D04  40 81 00 0C */	ble .L_802FADD0
/* 802FADC8 002F7D08  FF 40 08 90 */	fmr f26, f1
/* 802FADCC 002F7D0C  48 00 00 08 */	b .L_802FADD4
.L_802FADD0:
/* 802FADD0 002F7D10  FF 40 08 50 */	fneg f26, f1
.L_802FADD4:
/* 802FADD4 002F7D14  7F E3 FB 78 */	mr r3, r31
/* 802FADD8 002F7D18  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FADDC 002F7D1C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FADE0 002F7D20  7D 89 03 A6 */	mtctr r12
/* 802FADE4 002F7D24  4E 80 04 21 */	bctrl 
/* 802FADE8 002F7D28  EC 3A 08 2A */	fadds f1, f26, f1
/* 802FADEC 002F7D2C  48 11 6D E5 */	bl roundAng__Ff
/* 802FADF0 002F7D30  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802FADF4 002F7D34  FC 40 FA 10 */	fabs f2, f31
/* 802FADF8 002F7D38  C0 02 EF EC */	lfs f0, lbl_8051D34C@sda21(r2)
/* 802FADFC 002F7D3C  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 802FAE00 002F7D40  C0 22 EF E8 */	lfs f1, lbl_8051D348@sda21(r2)
/* 802FAE04 002F7D44  FC 40 10 18 */	frsp f2, f2
/* 802FAE08 002F7D48  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 802FAE0C 002F7D4C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802FAE10 002F7D50  C0 64 05 8C */	lfs f3, 0x58c(r4)
/* 802FAE14 002F7D54  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802FAE18 002F7D58  EC 01 00 32 */	fmuls f0, f1, f0
/* 802FAE1C 002F7D5C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802FAE20 002F7D60  4C 40 13 82 */	cror 2, 0, 2
/* 802FAE24 002F7D64  40 82 00 70 */	bne .L_802FAE94
/* 802FAE28 002F7D68  7F E3 FB 78 */	mr r3, r31
/* 802FAE2C 002F7D6C  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 802FAE30 002F7D70  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAE34 002F7D74  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FAE38 002F7D78  7D 89 03 A6 */	mtctr r12
/* 802FAE3C 002F7D7C  4E 80 04 21 */	bctrl 
/* 802FAE40 002F7D80  4B DD 49 DD */	bl sin
/* 802FAE44 002F7D84  7F E3 FB 78 */	mr r3, r31
/* 802FAE48 002F7D88  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802FAE4C 002F7D8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAE50 002F7D90  FF 40 08 18 */	frsp f26, f1
/* 802FAE54 002F7D94  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 802FAE58 002F7D98  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802FAE5C 002F7D9C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FAE60 002F7DA0  D0 41 00 BC */	stfs f2, 0xbc(r1)
/* 802FAE64 002F7DA4  D3 E1 00 C0 */	stfs f31, 0xc0(r1)
/* 802FAE68 002F7DA8  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 802FAE6C 002F7DAC  7D 89 03 A6 */	mtctr r12
/* 802FAE70 002F7DB0  4E 80 04 21 */	bctrl 
/* 802FAE74 002F7DB4  4B DD 44 41 */	bl cos
/* 802FAE78 002F7DB8  EC 1C 06 B2 */	fmuls f0, f28, f26
/* 802FAE7C 002F7DBC  FC 20 08 18 */	frsp f1, f1
/* 802FAE80 002F7DC0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FAE84 002F7DC4  EC 1C 00 72 */	fmuls f0, f28, f1
/* 802FAE88 002F7DC8  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 802FAE8C 002F7DCC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FAE90 002F7DD0  48 00 02 4C */	b .L_802FB0DC
.L_802FAE94:
/* 802FAE94 002F7DD4  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FAE98 002F7DD8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FAE9C 002F7DDC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FAEA0 002F7DE0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FAEA4 002F7DE4  48 00 02 38 */	b .L_802FB0DC
.L_802FAEA8:
/* 802FAEA8 002F7DE8  7F E3 FB 78 */	mr r3, r31
/* 802FAEAC 002F7DEC  48 00 21 B9 */	bl isReachedTarget__Q34Game10DangoMushi3ObjFv
/* 802FAEB0 002F7DF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FAEB4 002F7DF4  41 82 00 18 */	beq .L_802FAECC
/* 802FAEB8 002F7DF8  38 00 00 03 */	li r0, 3
/* 802FAEBC 002F7DFC  7F E3 FB 78 */	mr r3, r31
/* 802FAEC0 002F7E00  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FAEC4 002F7E04  4B E0 A3 DD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802FAEC8 002F7E08  48 00 02 14 */	b .L_802FB0DC
.L_802FAECC:
/* 802FAECC 002F7E0C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FAED0 002F7E10  C0 02 EF FC */	lfs f0, lbl_8051D35C@sda21(r2)
/* 802FAED4 002F7E14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FAED8 002F7E18  40 81 00 18 */	ble .L_802FAEF0
/* 802FAEDC 002F7E1C  38 00 00 03 */	li r0, 3
/* 802FAEE0 002F7E20  7F E3 FB 78 */	mr r3, r31
/* 802FAEE4 002F7E24  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FAEE8 002F7E28  4B E0 A3 B9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802FAEEC 002F7E2C  48 00 01 F0 */	b .L_802FB0DC
.L_802FAEF0:
/* 802FAEF0 002F7E30  7F E4 FB 78 */	mr r4, r31
/* 802FAEF4 002F7E34  38 61 00 B0 */	addi r3, r1, 0xb0
/* 802FAEF8 002F7E38  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAEFC 002F7E3C  C3 7F 02 D0 */	lfs f27, 0x2d0(r31)
/* 802FAF00 002F7E40  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAF04 002F7E44  C3 DF 02 D8 */	lfs f30, 0x2d8(r31)
/* 802FAF08 002F7E48  7D 89 03 A6 */	mtctr r12
/* 802FAF0C 002F7E4C  4E 80 04 21 */	bctrl 
/* 802FAF10 002F7E50  C0 81 00 B0 */	lfs f4, 0xb0(r1)
/* 802FAF14 002F7E54  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FAF18 002F7E58  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 802FAF1C 002F7E5C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FAF20 002F7E60  C0 61 00 B4 */	lfs f3, 0xb4(r1)
/* 802FAF24 002F7E64  EC 3B 20 28 */	fsubs f1, f27, f4
/* 802FAF28 002F7E68  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802FAF2C 002F7E6C  D0 81 00 A4 */	stfs f4, 0xa4(r1)
/* 802FAF30 002F7E70  D0 61 00 A8 */	stfs f3, 0xa8(r1)
/* 802FAF34 002F7E74  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 802FAF38 002F7E78  4B D3 A1 D1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FAF3C 002F7E7C  48 11 6C 95 */	bl roundAng__Ff
/* 802FAF40 002F7E80  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAF44 002F7E84  FF 40 08 90 */	fmr f26, f1
/* 802FAF48 002F7E88  7F E3 FB 78 */	mr r3, r31
/* 802FAF4C 002F7E8C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FAF50 002F7E90  7D 89 03 A6 */	mtctr r12
/* 802FAF54 002F7E94  4E 80 04 21 */	bctrl 
/* 802FAF58 002F7E98  FC 40 08 90 */	fmr f2, f1
/* 802FAF5C 002F7E9C  FC 20 D0 90 */	fmr f1, f26
/* 802FAF60 002F7EA0  48 11 6C 9D */	bl angDist__Fff
/* 802FAF64 002F7EA4  7F E4 FB 78 */	mr r4, r31
/* 802FAF68 002F7EA8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802FAF6C 002F7EAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAF70 002F7EB0  FF E0 08 90 */	fmr f31, f1
/* 802FAF74 002F7EB4  38 61 00 14 */	addi r3, r1, 0x14
/* 802FAF78 002F7EB8  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802FAF7C 002F7EBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FAF80 002F7EC0  C3 85 03 0C */	lfs f28, 0x30c(r5)
/* 802FAF84 002F7EC4  7D 89 03 A6 */	mtctr r12
/* 802FAF88 002F7EC8  4E 80 04 21 */	bctrl 
/* 802FAF8C 002F7ECC  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802FAF90 002F7ED0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802FAF94 002F7ED4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802FAF98 002F7ED8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802FAF9C 002F7EDC  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802FAFA0 002F7EE0  EC 3B 20 28 */	fsubs f1, f27, f4
/* 802FAFA4 002F7EE4  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802FAFA8 002F7EE8  D0 81 00 08 */	stfs f4, 8(r1)
/* 802FAFAC 002F7EEC  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802FAFB0 002F7EF0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802FAFB4 002F7EF4  4B D3 A1 55 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802FAFB8 002F7EF8  48 11 6C 19 */	bl roundAng__Ff
/* 802FAFBC 002F7EFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FAFC0 002F7F00  FF 40 08 90 */	fmr f26, f1
/* 802FAFC4 002F7F04  7F E3 FB 78 */	mr r3, r31
/* 802FAFC8 002F7F08  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FAFCC 002F7F0C  7D 89 03 A6 */	mtctr r12
/* 802FAFD0 002F7F10  4E 80 04 21 */	bctrl 
/* 802FAFD4 002F7F14  FC 40 08 90 */	fmr f2, f1
/* 802FAFD8 002F7F18  FC 20 D0 90 */	fmr f1, f26
/* 802FAFDC 002F7F1C  48 11 6C 21 */	bl angDist__Fff
/* 802FAFE0 002F7F20  EF 41 07 32 */	fmuls f26, f1, f28
/* 802FAFE4 002F7F24  C0 02 EF EC */	lfs f0, lbl_8051D34C@sda21(r2)
/* 802FAFE8 002F7F28  C0 22 EF E8 */	lfs f1, lbl_8051D348@sda21(r2)
/* 802FAFEC 002F7F2C  EC 00 07 72 */	fmuls f0, f0, f29
/* 802FAFF0 002F7F30  FC 40 D2 10 */	fabs f2, f26
/* 802FAFF4 002F7F34  EC 21 00 32 */	fmuls f1, f1, f0
/* 802FAFF8 002F7F38  FC 00 10 18 */	frsp f0, f2
/* 802FAFFC 002F7F3C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802FB000 002F7F40  40 81 00 1C */	ble .L_802FB01C
/* 802FB004 002F7F44  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB008 002F7F48  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 802FB00C 002F7F4C  40 81 00 0C */	ble .L_802FB018
/* 802FB010 002F7F50  FF 40 08 90 */	fmr f26, f1
/* 802FB014 002F7F54  48 00 00 08 */	b .L_802FB01C
.L_802FB018:
/* 802FB018 002F7F58  FF 40 08 50 */	fneg f26, f1
.L_802FB01C:
/* 802FB01C 002F7F5C  7F E3 FB 78 */	mr r3, r31
/* 802FB020 002F7F60  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB024 002F7F64  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FB028 002F7F68  7D 89 03 A6 */	mtctr r12
/* 802FB02C 002F7F6C  4E 80 04 21 */	bctrl 
/* 802FB030 002F7F70  EC 3A 08 2A */	fadds f1, f26, f1
/* 802FB034 002F7F74  48 11 6B 9D */	bl roundAng__Ff
/* 802FB038 002F7F78  FC 60 FA 10 */	fabs f3, f31
/* 802FB03C 002F7F7C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802FB040 002F7F80  C0 02 F0 00 */	lfs f0, lbl_8051D360@sda21(r2)
/* 802FB044 002F7F84  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802FB048 002F7F88  FC 20 18 18 */	frsp f1, f3
/* 802FB04C 002F7F8C  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802FB050 002F7F90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FB054 002F7F94  4C 40 13 82 */	cror 2, 0, 2
/* 802FB058 002F7F98  40 82 00 74 */	bne .L_802FB0CC
/* 802FB05C 002F7F9C  7F E3 FB 78 */	mr r3, r31
/* 802FB060 002F7FA0  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802FB064 002F7FA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB068 002F7FA8  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 802FB06C 002F7FAC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FB070 002F7FB0  7D 89 03 A6 */	mtctr r12
/* 802FB074 002F7FB4  4E 80 04 21 */	bctrl 
/* 802FB078 002F7FB8  4B DD 47 A5 */	bl sin
/* 802FB07C 002F7FBC  7F E3 FB 78 */	mr r3, r31
/* 802FB080 002F7FC0  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802FB084 002F7FC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB088 002F7FC8  FF 40 08 18 */	frsp f26, f1
/* 802FB08C 002F7FCC  C3 FF 01 D8 */	lfs f31, 0x1d8(r31)
/* 802FB090 002F7FD0  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802FB094 002F7FD4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802FB098 002F7FD8  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 802FB09C 002F7FDC  D3 E1 00 9C */	stfs f31, 0x9c(r1)
/* 802FB0A0 002F7FE0  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 802FB0A4 002F7FE4  7D 89 03 A6 */	mtctr r12
/* 802FB0A8 002F7FE8  4E 80 04 21 */	bctrl 
/* 802FB0AC 002F7FEC  4B DD 42 09 */	bl cos
/* 802FB0B0 002F7FF0  EC 1C 06 B2 */	fmuls f0, f28, f26
/* 802FB0B4 002F7FF4  FC 20 08 18 */	frsp f1, f1
/* 802FB0B8 002F7FF8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FB0BC 002F7FFC  EC 1C 00 72 */	fmuls f0, f28, f1
/* 802FB0C0 002F8000  D3 FF 01 D8 */	stfs f31, 0x1d8(r31)
/* 802FB0C4 002F8004  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FB0C8 002F8008  48 00 00 14 */	b .L_802FB0DC
.L_802FB0CC:
/* 802FB0CC 002F800C  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB0D0 002F8010  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FB0D4 002F8014  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FB0D8 002F8018  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802FB0DC:
/* 802FB0DC 002F801C  7F E3 FB 78 */	mr r3, r31
/* 802FB0E0 002F8020  4B E0 C2 21 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802FB0E4 002F8024  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FB0E8 002F8028  41 82 00 14 */	beq .L_802FB0FC
/* 802FB0EC 002F802C  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB0F0 002F8030  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FB0F4 002F8034  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FB0F8 002F8038  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802FB0FC:
/* 802FB0FC 002F803C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802FB100 002F8040  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FB104 002F8044  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802FB108 002F8048  EC 01 00 2A */	fadds f0, f1, f0
/* 802FB10C 002F804C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FB110 002F8050  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802FB114 002F8054  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802FB118 002F8058  28 00 00 00 */	cmplwi r0, 0
/* 802FB11C 002F805C  41 82 00 A8 */	beq .L_802FB1C4
/* 802FB120 002F8060  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FB124 002F8064  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FB128 002F8068  40 82 00 10 */	bne .L_802FB138
/* 802FB12C 002F806C  7F E3 FB 78 */	mr r3, r31
/* 802FB130 002F8070  48 00 36 35 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FB134 002F8074  48 00 00 90 */	b .L_802FB1C4
.L_802FB138:
/* 802FB138 002F8078  28 00 00 02 */	cmplwi r0, 2
/* 802FB13C 002F807C  40 82 00 60 */	bne .L_802FB19C
/* 802FB140 002F8080  7F E4 FB 78 */	mr r4, r31
/* 802FB144 002F8084  38 61 00 F8 */	addi r3, r1, 0xf8
/* 802FB148 002F8088  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB14C 002F808C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB150 002F8090  7D 89 03 A6 */	mtctr r12
/* 802FB154 002F8094  4E 80 04 21 */	bctrl 
/* 802FB158 002F8098  C0 41 00 F8 */	lfs f2, 0xf8(r1)
/* 802FB15C 002F809C  38 A1 01 04 */	addi r5, r1, 0x104
/* 802FB160 002F80A0  C0 21 00 FC */	lfs f1, 0xfc(r1)
/* 802FB164 002F80A4  38 80 00 03 */	li r4, 3
/* 802FB168 002F80A8  C0 01 01 00 */	lfs f0, 0x100(r1)
/* 802FB16C 002F80AC  38 C0 00 02 */	li r6, 2
/* 802FB170 002F80B0  D0 41 01 04 */	stfs f2, 0x104(r1)
/* 802FB174 002F80B4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB178 002F80B8  D0 21 01 08 */	stfs f1, 0x108(r1)
/* 802FB17C 002F80BC  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 802FB180 002F80C0  4B F5 70 BD */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB184 002F80C4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB188 002F80C8  38 A1 01 04 */	addi r5, r1, 0x104
/* 802FB18C 002F80CC  38 80 00 0B */	li r4, 0xb
/* 802FB190 002F80D0  38 C0 00 02 */	li r6, 2
/* 802FB194 002F80D4  4B F5 85 ED */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB198 002F80D8  48 00 00 2C */	b .L_802FB1C4
.L_802FB19C:
/* 802FB19C 002F80DC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FB1A0 002F80E0  40 82 00 24 */	bne .L_802FB1C4
/* 802FB1A4 002F80E4  7F C3 F3 78 */	mr r3, r30
/* 802FB1A8 002F80E8  7F E4 FB 78 */	mr r4, r31
/* 802FB1AC 002F80EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FB1B0 002F80F0  38 C0 00 00 */	li r6, 0
/* 802FB1B4 002F80F4  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802FB1B8 002F80F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FB1BC 002F80FC  7D 89 03 A6 */	mtctr r12
/* 802FB1C0 002F8100  4E 80 04 21 */	bctrl 
.L_802FB1C4:
/* 802FB1C4 002F8104  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 802FB1C8 002F8108  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 802FB1CC 002F810C  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 802FB1D0 002F8110  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 802FB1D4 002F8114  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 802FB1D8 002F8118  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 802FB1DC 002F811C  E3 81 01 48 */	psq_l f28, 328(r1), 0, qr0
/* 802FB1E0 002F8120  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 802FB1E4 002F8124  E3 61 01 38 */	psq_l f27, 312(r1), 0, qr0
/* 802FB1E8 002F8128  CB 61 01 30 */	lfd f27, 0x130(r1)
/* 802FB1EC 002F812C  E3 41 01 28 */	psq_l f26, 296(r1), 0, qr0
/* 802FB1F0 002F8130  CB 41 01 20 */	lfd f26, 0x120(r1)
/* 802FB1F4 002F8134  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 802FB1F8 002F8138  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 802FB1FC 002F813C  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 802FB200 002F8140  80 01 01 84 */	lwz r0, 0x184(r1)
/* 802FB204 002F8144  83 81 01 10 */	lwz r28, 0x110(r1)
/* 802FB208 002F8148  7C 08 03 A6 */	mtlr r0
/* 802FB20C 002F814C  38 21 01 80 */	addi r1, r1, 0x180
/* 802FB210 002F8150  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBase, global
/* 802FB214 002F8154  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FB218 002F8158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FB21C 002F815C  7C 08 02 A6 */	mflr r0
/* 802FB220 002F8160  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB224 002F8164  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FB228 002F8168  38 00 FF FF */	li r0, -1
/* 802FB22C 002F816C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FB230 002F8170  7C 9F 23 78 */	mr r31, r4
/* 802FB234 002F8174  7F E3 FB 78 */	mr r3, r31
/* 802FB238 002F8178  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802FB23C 002F817C  38 80 00 00 */	li r4, 0
/* 802FB240 002F8180  38 00 00 01 */	li r0, 1
/* 802FB244 002F8184  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FB248 002F8188  98 9F 02 C0 */	stb r4, 0x2c0(r31)
/* 802FB24C 002F818C  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 802FB250 002F8190  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB254 002F8194  60 00 00 01 */	ori r0, r0, 1
/* 802FB258 002F8198  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB25C 002F819C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB260 002F81A0  64 00 00 40 */	oris r0, r0, 0x40
/* 802FB264 002F81A4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB268 002F81A8  4B E0 67 65 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802FB26C 002F81AC  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB270 002F81B0  7F E3 FB 78 */	mr r3, r31
/* 802FB274 002F81B4  38 80 00 03 */	li r4, 3
/* 802FB278 002F81B8  38 A0 00 00 */	li r5, 0
/* 802FB27C 002F81BC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FB280 002F81C0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FB284 002F81C4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FB288 002F81C8  48 00 33 C1 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FB28C 002F81CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FB290 002F81D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FB294 002F81D4  7C 08 03 A6 */	mtlr r0
/* 802FB298 002F81D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802FB29C 002F81DC  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBase, global
/* 802FB2A0 002F81E0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802FB2A4 002F81E4  7C 08 02 A6 */	mflr r0
/* 802FB2A8 002F81E8  C0 02 F0 04 */	lfs f0, lbl_8051D364@sda21(r2)
/* 802FB2AC 002F81EC  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FB2B0 002F81F0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802FB2B4 002F81F4  7C 9F 23 78 */	mr r31, r4
/* 802FB2B8 002F81F8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802FB2BC 002F81FC  7C 7E 1B 78 */	mr r30, r3
/* 802FB2C0 002F8200  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 802FB2C4 002F8204  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FB2C8 002F8208  40 81 00 14 */	ble .L_802FB2DC
/* 802FB2CC 002F820C  38 00 00 03 */	li r0, 3
/* 802FB2D0 002F8210  7F E3 FB 78 */	mr r3, r31
/* 802FB2D4 002F8214  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FB2D8 002F8218  4B E0 9F C9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802FB2DC:
/* 802FB2DC 002F821C  88 1F 02 C0 */	lbz r0, 0x2c0(r31)
/* 802FB2E0 002F8220  28 00 00 00 */	cmplwi r0, 0
/* 802FB2E4 002F8224  41 82 00 80 */	beq .L_802FB364
/* 802FB2E8 002F8228  7F E3 FB 78 */	mr r3, r31
/* 802FB2EC 002F822C  48 00 1D E5 */	bl rollingMove__Q34Game10DangoMushi3ObjFv
/* 802FB2F0 002F8230  7F E4 FB 78 */	mr r4, r31
/* 802FB2F4 002F8234  38 61 00 20 */	addi r3, r1, 0x20
/* 802FB2F8 002F8238  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB2FC 002F823C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB300 002F8240  7D 89 03 A6 */	mtctr r12
/* 802FB304 002F8244  4E 80 04 21 */	bctrl 
/* 802FB308 002F8248  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802FB30C 002F824C  38 A1 00 44 */	addi r5, r1, 0x44
/* 802FB310 002F8250  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802FB314 002F8254  38 80 00 19 */	li r4, 0x19
/* 802FB318 002F8258  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802FB31C 002F825C  38 C0 00 02 */	li r6, 2
/* 802FB320 002F8260  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802FB324 002F8264  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB328 002F8268  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802FB32C 002F826C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802FB330 002F8270  4B F5 6F 0D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB334 002F8274  7F E3 FB 78 */	mr r3, r31
/* 802FB338 002F8278  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB33C 002F827C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802FB340 002F8280  7D 89 03 A6 */	mtctr r12
/* 802FB344 002F8284  4E 80 04 21 */	bctrl 
/* 802FB348 002F8288  81 83 00 00 */	lwz r12, 0(r3)
/* 802FB34C 002F828C  38 80 51 80 */	li r4, 0x5180
/* 802FB350 002F8290  38 A0 00 00 */	li r5, 0
/* 802FB354 002F8294  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802FB358 002F8298  7D 89 03 A6 */	mtctr r12
/* 802FB35C 002F829C  4E 80 04 21 */	bctrl 
/* 802FB360 002F82A0  48 00 00 14 */	b .L_802FB374
.L_802FB364:
/* 802FB364 002F82A4  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB368 002F82A8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FB36C 002F82AC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FB370 002F82B0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802FB374:
/* 802FB374 002F82B4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802FB378 002F82B8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802FB37C 002F82BC  28 00 00 00 */	cmplwi r0, 0
/* 802FB380 002F82C0  41 82 01 90 */	beq .L_802FB510
/* 802FB384 002F82C4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FB388 002F82C8  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FB38C 002F82CC  40 82 00 10 */	bne .L_802FB39C
/* 802FB390 002F82D0  7F E3 FB 78 */	mr r3, r31
/* 802FB394 002F82D4  48 00 33 D1 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FB398 002F82D8  48 00 01 78 */	b .L_802FB510
.L_802FB39C:
/* 802FB39C 002F82DC  28 00 00 02 */	cmplwi r0, 2
/* 802FB3A0 002F82E0  40 82 00 10 */	bne .L_802FB3B0
/* 802FB3A4 002F82E4  7F E3 FB 78 */	mr r3, r31
/* 802FB3A8 002F82E8  48 00 3E CD */	bl createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
/* 802FB3AC 002F82EC  48 00 01 64 */	b .L_802FB510
.L_802FB3B0:
/* 802FB3B0 002F82F0  28 00 00 03 */	cmplwi r0, 3
/* 802FB3B4 002F82F4  40 82 00 70 */	bne .L_802FB424
/* 802FB3B8 002F82F8  7F E3 FB 78 */	mr r3, r31
/* 802FB3BC 002F82FC  48 00 35 09 */	bl startBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv
/* 802FB3C0 002F8300  7F E3 FB 78 */	mr r3, r31
/* 802FB3C4 002F8304  48 00 3E B1 */	bl createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
/* 802FB3C8 002F8308  7F E4 FB 78 */	mr r4, r31
/* 802FB3CC 002F830C  38 61 00 14 */	addi r3, r1, 0x14
/* 802FB3D0 002F8310  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB3D4 002F8314  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB3D8 002F8318  7D 89 03 A6 */	mtctr r12
/* 802FB3DC 002F831C  4E 80 04 21 */	bctrl 
/* 802FB3E0 002F8320  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802FB3E4 002F8324  38 A1 00 38 */	addi r5, r1, 0x38
/* 802FB3E8 002F8328  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802FB3EC 002F832C  38 80 00 0F */	li r4, 0xf
/* 802FB3F0 002F8330  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802FB3F4 002F8334  38 C0 00 02 */	li r6, 2
/* 802FB3F8 002F8338  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802FB3FC 002F833C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB400 002F8340  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802FB404 002F8344  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802FB408 002F8348  4B F5 6E 35 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB40C 002F834C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB410 002F8350  38 A1 00 38 */	addi r5, r1, 0x38
/* 802FB414 002F8354  38 80 00 0E */	li r4, 0xe
/* 802FB418 002F8358  38 C0 00 02 */	li r6, 2
/* 802FB41C 002F835C  4B F5 83 65 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB420 002F8360  48 00 00 F0 */	b .L_802FB510
.L_802FB424:
/* 802FB424 002F8364  28 00 00 04 */	cmplwi r0, 4
/* 802FB428 002F8368  40 82 00 24 */	bne .L_802FB44C
/* 802FB42C 002F836C  88 1F 02 C0 */	lbz r0, 0x2c0(r31)
/* 802FB430 002F8370  28 00 00 00 */	cmplwi r0, 0
/* 802FB434 002F8374  40 82 00 DC */	bne .L_802FB510
/* 802FB438 002F8378  38 00 00 01 */	li r0, 1
/* 802FB43C 002F837C  7F E3 FB 78 */	mr r3, r31
/* 802FB440 002F8380  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802FB444 002F8384  48 00 3D CD */	bl startRollingMoveEffect__Q34Game10DangoMushi3ObjFv
/* 802FB448 002F8388  48 00 00 C8 */	b .L_802FB510
.L_802FB44C:
/* 802FB44C 002F838C  28 00 00 01 */	cmplwi r0, 1
/* 802FB450 002F8390  40 82 00 2C */	bne .L_802FB47C
/* 802FB454 002F8394  7F E3 FB 78 */	mr r3, r31
/* 802FB458 002F8398  4B E0 BE A9 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802FB45C 002F839C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FB460 002F83A0  41 82 00 B0 */	beq .L_802FB510
/* 802FB464 002F83A4  38 00 00 00 */	li r0, 0
/* 802FB468 002F83A8  7F E3 FB 78 */	mr r3, r31
/* 802FB46C 002F83AC  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802FB470 002F83B0  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 802FB474 002F83B4  48 00 3D D1 */	bl finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv
/* 802FB478 002F83B8  48 00 00 98 */	b .L_802FB510
.L_802FB47C:
/* 802FB47C 002F83BC  28 00 00 05 */	cmplwi r0, 5
/* 802FB480 002F83C0  40 82 00 68 */	bne .L_802FB4E8
/* 802FB484 002F83C4  7F E3 FB 78 */	mr r3, r31
/* 802FB488 002F83C8  48 00 3D ED */	bl createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
/* 802FB48C 002F83CC  7F E4 FB 78 */	mr r4, r31
/* 802FB490 002F83D0  38 61 00 08 */	addi r3, r1, 8
/* 802FB494 002F83D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB498 002F83D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB49C 002F83DC  7D 89 03 A6 */	mtctr r12
/* 802FB4A0 002F83E0  4E 80 04 21 */	bctrl 
/* 802FB4A4 002F83E4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802FB4A8 002F83E8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802FB4AC 002F83EC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802FB4B0 002F83F0  38 80 00 19 */	li r4, 0x19
/* 802FB4B4 002F83F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802FB4B8 002F83F8  38 C0 00 02 */	li r6, 2
/* 802FB4BC 002F83FC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802FB4C0 002F8400  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB4C4 002F8404  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802FB4C8 002F8408  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802FB4CC 002F840C  4B F5 6D 71 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB4D0 002F8410  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB4D4 002F8414  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802FB4D8 002F8418  38 80 00 0E */	li r4, 0xe
/* 802FB4DC 002F841C  38 C0 00 02 */	li r6, 2
/* 802FB4E0 002F8420  4B F5 82 A1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB4E4 002F8424  48 00 00 2C */	b .L_802FB510
.L_802FB4E8:
/* 802FB4E8 002F8428  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FB4EC 002F842C  40 82 00 24 */	bne .L_802FB510
/* 802FB4F0 002F8430  7F C3 F3 78 */	mr r3, r30
/* 802FB4F4 002F8434  7F E4 FB 78 */	mr r4, r31
/* 802FB4F8 002F8438  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FB4FC 002F843C  38 C0 00 00 */	li r6, 0
/* 802FB500 002F8440  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802FB504 002F8444  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FB508 002F8448  7D 89 03 A6 */	mtctr r12
/* 802FB50C 002F844C  4E 80 04 21 */	bctrl 
.L_802FB510:
/* 802FB510 002F8450  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802FB514 002F8454  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802FB518 002F8458  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802FB51C 002F845C  7C 08 03 A6 */	mtlr r0
/* 802FB520 002F8460  38 21 00 60 */	addi r1, r1, 0x60
/* 802FB524 002F8464  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBase, global
/* 802FB528 002F8468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FB52C 002F846C  7C 08 02 A6 */	mflr r0
/* 802FB530 002F8470  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FB534 002F8474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FB538 002F8478  7C 9F 23 78 */	mr r31, r4
/* 802FB53C 002F847C  7F E3 FB 78 */	mr r3, r31
/* 802FB540 002F8480  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802FB544 002F8484  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802FB548 002F8488  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802FB54C 002F848C  4B E0 64 31 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802FB550 002F8490  38 00 00 00 */	li r0, 0
/* 802FB554 002F8494  7F E3 FB 78 */	mr r3, r31
/* 802FB558 002F8498  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802FB55C 002F849C  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 802FB560 002F84A0  48 00 3C E5 */	bl finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv
/* 802FB564 002F84A4  7F E3 FB 78 */	mr r3, r31
/* 802FB568 002F84A8  48 00 34 25 */	bl finishBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv
/* 802FB56C 002F84AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FB570 002F84B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FB574 002F84B4  7C 08 03 A6 */	mtlr r0
/* 802FB578 002F84B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802FB57C 002F84BC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FB580 002F84C0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802FB584 002F84C4  7C 08 02 A6 */	mflr r0
/* 802FB588 002F84C8  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB58C 002F84CC  38 A0 00 00 */	li r5, 0
/* 802FB590 002F84D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802FB594 002F84D4  38 00 FF FF */	li r0, -1
/* 802FB598 002F84D8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802FB59C 002F84DC  7C 9F 23 78 */	mr r31, r4
/* 802FB5A0 002F84E0  7F E3 FB 78 */	mr r3, r31
/* 802FB5A4 002F84E4  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802FB5A8 002F84E8  38 00 00 00 */	li r0, 0
/* 802FB5AC 002F84EC  38 80 00 05 */	li r4, 5
/* 802FB5B0 002F84F0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FB5B4 002F84F4  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 802FB5B8 002F84F8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB5BC 002F84FC  64 00 00 20 */	oris r0, r0, 0x20
/* 802FB5C0 002F8500  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB5C4 002F8504  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB5C8 002F8508  60 00 00 01 */	ori r0, r0, 1
/* 802FB5CC 002F850C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB5D0 002F8510  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FB5D4 002F8514  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FB5D8 002F8518  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FB5DC 002F851C  48 00 30 6D */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FB5E0 002F8520  7F E3 FB 78 */	mr r3, r31
/* 802FB5E4 002F8524  48 00 1D A9 */	bl createCrashEnemy__Q34Game10DangoMushi3ObjFv
/* 802FB5E8 002F8528  7F E4 FB 78 */	mr r4, r31
/* 802FB5EC 002F852C  38 61 00 08 */	addi r3, r1, 8
/* 802FB5F0 002F8530  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB5F4 002F8534  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB5F8 002F8538  7D 89 03 A6 */	mtctr r12
/* 802FB5FC 002F853C  4E 80 04 21 */	bctrl 
/* 802FB600 002F8540  C0 41 00 08 */	lfs f2, 8(r1)
/* 802FB604 002F8544  38 A1 00 14 */	addi r5, r1, 0x14
/* 802FB608 002F8548  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802FB60C 002F854C  38 80 00 1B */	li r4, 0x1b
/* 802FB610 002F8550  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802FB614 002F8554  38 C0 00 02 */	li r6, 2
/* 802FB618 002F8558  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802FB61C 002F855C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB620 002F8560  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802FB624 002F8564  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802FB628 002F8568  4B F5 6C 15 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB62C 002F856C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB630 002F8570  38 A1 00 14 */	addi r5, r1, 0x14
/* 802FB634 002F8574  38 80 00 0F */	li r4, 0xf
/* 802FB638 002F8578  38 C0 00 02 */	li r6, 2
/* 802FB63C 002F857C  4B F5 81 45 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB640 002F8580  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802FB644 002F8584  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802FB648 002F8588  7C 08 03 A6 */	mtlr r0
/* 802FB64C 002F858C  38 21 00 30 */	addi r1, r1, 0x30
/* 802FB650 002F8590  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBase, global
/* 802FB654 002F8594  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802FB658 002F8598  7C 08 02 A6 */	mflr r0
/* 802FB65C 002F859C  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB660 002F85A0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802FB664 002F85A4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802FB668 002F85A8  7C 9F 23 78 */	mr r31, r4
/* 802FB66C 002F85AC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802FB670 002F85B0  7C 7E 1B 78 */	mr r30, r3
/* 802FB674 002F85B4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802FB678 002F85B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FB67C 002F85BC  4C 40 13 82 */	cror 2, 0, 2
/* 802FB680 002F85C0  40 82 00 18 */	bne .L_802FB698
/* 802FB684 002F85C4  38 00 00 00 */	li r0, 0
/* 802FB688 002F85C8  7F E3 FB 78 */	mr r3, r31
/* 802FB68C 002F85CC  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FB690 002F85D0  4B E0 9C 11 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802FB694 002F85D4  48 00 00 28 */	b .L_802FB6BC
.L_802FB698:
/* 802FB698 002F85D8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802FB69C 002F85DC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FB6A0 002F85E0  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802FB6A4 002F85E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FB6A8 002F85E8  40 81 00 14 */	ble .L_802FB6BC
/* 802FB6AC 002F85EC  38 00 00 07 */	li r0, 7
/* 802FB6B0 002F85F0  7F E3 FB 78 */	mr r3, r31
/* 802FB6B4 002F85F4  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802FB6B8 002F85F8  4B E0 9B E9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802FB6BC:
/* 802FB6BC 002F85FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802FB6C0 002F8600  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802FB6C4 002F8604  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802FB6C8 002F8608  EC 01 00 2A */	fadds f0, f1, f0
/* 802FB6CC 002F860C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802FB6D0 002F8610  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802FB6D4 002F8614  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802FB6D8 002F8618  28 00 00 00 */	cmplwi r0, 0
/* 802FB6DC 002F861C  41 82 01 D0 */	beq .L_802FB8AC
/* 802FB6E0 002F8620  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FB6E4 002F8624  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FB6E8 002F8628  40 82 00 10 */	bne .L_802FB6F8
/* 802FB6EC 002F862C  7F E3 FB 78 */	mr r3, r31
/* 802FB6F0 002F8630  48 00 30 75 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FB6F4 002F8634  48 00 01 B8 */	b .L_802FB8AC
.L_802FB6F8:
/* 802FB6F8 002F8638  28 00 00 02 */	cmplwi r0, 2
/* 802FB6FC 002F863C  40 82 00 68 */	bne .L_802FB764
/* 802FB700 002F8640  7F E3 FB 78 */	mr r3, r31
/* 802FB704 002F8644  48 00 3B 71 */	bl createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
/* 802FB708 002F8648  7F E4 FB 78 */	mr r4, r31
/* 802FB70C 002F864C  38 61 00 20 */	addi r3, r1, 0x20
/* 802FB710 002F8650  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB714 002F8654  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB718 002F8658  7D 89 03 A6 */	mtctr r12
/* 802FB71C 002F865C  4E 80 04 21 */	bctrl 
/* 802FB720 002F8660  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802FB724 002F8664  38 A1 00 44 */	addi r5, r1, 0x44
/* 802FB728 002F8668  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802FB72C 002F866C  38 80 00 15 */	li r4, 0x15
/* 802FB730 002F8670  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802FB734 002F8674  38 C0 00 02 */	li r6, 2
/* 802FB738 002F8678  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802FB73C 002F867C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB740 002F8680  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802FB744 002F8684  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802FB748 002F8688  4B F5 6A F5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB74C 002F868C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB750 002F8690  38 A1 00 44 */	addi r5, r1, 0x44
/* 802FB754 002F8694  38 80 00 0E */	li r4, 0xe
/* 802FB758 002F8698  38 C0 00 02 */	li r6, 2
/* 802FB75C 002F869C  4B F5 80 25 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB760 002F86A0  48 00 01 4C */	b .L_802FB8AC
.L_802FB764:
/* 802FB764 002F86A4  28 00 00 00 */	cmplwi r0, 0
/* 802FB768 002F86A8  40 82 00 34 */	bne .L_802FB79C
/* 802FB76C 002F86AC  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802FB770 002F86B0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 802FB774 002F86B4  41 82 01 38 */	beq .L_802FB8AC
/* 802FB778 002F86B8  54 60 02 D2 */	rlwinm r0, r3, 0, 0xb, 9
/* 802FB77C 002F86BC  7F E3 FB 78 */	mr r3, r31
/* 802FB780 002F86C0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB784 002F86C4  38 80 00 00 */	li r4, 0
/* 802FB788 002F86C8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB78C 002F86CC  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 802FB790 002F86D0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB794 002F86D4  48 00 23 09 */	bl setBodyCollision__Q34Game10DangoMushi3ObjFb
/* 802FB798 002F86D8  48 00 01 14 */	b .L_802FB8AC
.L_802FB79C:
/* 802FB79C 002F86DC  28 00 00 03 */	cmplwi r0, 3
/* 802FB7A0 002F86E0  40 82 00 78 */	bne .L_802FB818
/* 802FB7A4 002F86E4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB7A8 002F86E8  7F E3 FB 78 */	mr r3, r31
/* 802FB7AC 002F86EC  38 80 00 01 */	li r4, 1
/* 802FB7B0 002F86F0  60 00 00 01 */	ori r0, r0, 1
/* 802FB7B4 002F86F4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB7B8 002F86F8  48 00 22 E5 */	bl setBodyCollision__Q34Game10DangoMushi3ObjFb
/* 802FB7BC 002F86FC  7F E4 FB 78 */	mr r4, r31
/* 802FB7C0 002F8700  38 61 00 14 */	addi r3, r1, 0x14
/* 802FB7C4 002F8704  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB7C8 002F8708  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB7CC 002F870C  7D 89 03 A6 */	mtctr r12
/* 802FB7D0 002F8710  4E 80 04 21 */	bctrl 
/* 802FB7D4 002F8714  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802FB7D8 002F8718  38 A1 00 38 */	addi r5, r1, 0x38
/* 802FB7DC 002F871C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802FB7E0 002F8720  38 80 00 0F */	li r4, 0xf
/* 802FB7E4 002F8724  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802FB7E8 002F8728  38 C0 00 02 */	li r6, 2
/* 802FB7EC 002F872C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802FB7F0 002F8730  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB7F4 002F8734  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802FB7F8 002F8738  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802FB7FC 002F873C  4B F5 6A 41 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB800 002F8740  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB804 002F8744  38 A1 00 38 */	addi r5, r1, 0x38
/* 802FB808 002F8748  38 80 00 0B */	li r4, 0xb
/* 802FB80C 002F874C  38 C0 00 02 */	li r6, 2
/* 802FB810 002F8750  4B F5 7F 71 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB814 002F8754  48 00 00 98 */	b .L_802FB8AC
.L_802FB818:
/* 802FB818 002F8758  28 00 00 04 */	cmplwi r0, 4
/* 802FB81C 002F875C  40 82 00 68 */	bne .L_802FB884
/* 802FB820 002F8760  7F E3 FB 78 */	mr r3, r31
/* 802FB824 002F8764  48 00 37 7D */	bl createBodyTurnEffect__Q34Game10DangoMushi3ObjFv
/* 802FB828 002F8768  7F E4 FB 78 */	mr r4, r31
/* 802FB82C 002F876C  38 61 00 08 */	addi r3, r1, 8
/* 802FB830 002F8770  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB834 002F8774  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB838 002F8778  7D 89 03 A6 */	mtctr r12
/* 802FB83C 002F877C  4E 80 04 21 */	bctrl 
/* 802FB840 002F8780  C0 41 00 08 */	lfs f2, 8(r1)
/* 802FB844 002F8784  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802FB848 002F8788  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802FB84C 002F878C  38 80 00 19 */	li r4, 0x19
/* 802FB850 002F8790  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802FB854 002F8794  38 C0 00 02 */	li r6, 2
/* 802FB858 002F8798  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802FB85C 002F879C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FB860 002F87A0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802FB864 002F87A4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802FB868 002F87A8  4B F5 69 D5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FB86C 002F87AC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FB870 002F87B0  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802FB874 002F87B4  38 80 00 0E */	li r4, 0xe
/* 802FB878 002F87B8  38 C0 00 02 */	li r6, 2
/* 802FB87C 002F87BC  4B F5 7F 05 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FB880 002F87C0  48 00 00 2C */	b .L_802FB8AC
.L_802FB884:
/* 802FB884 002F87C4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FB888 002F87C8  40 82 00 24 */	bne .L_802FB8AC
/* 802FB88C 002F87CC  7F C3 F3 78 */	mr r3, r30
/* 802FB890 002F87D0  7F E4 FB 78 */	mr r4, r31
/* 802FB894 002F87D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FB898 002F87D8  38 C0 00 00 */	li r6, 0
/* 802FB89C 002F87DC  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802FB8A0 002F87E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FB8A4 002F87E4  7D 89 03 A6 */	mtctr r12
/* 802FB8A8 002F87E8  4E 80 04 21 */	bctrl 
.L_802FB8AC:
/* 802FB8AC 002F87EC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802FB8B0 002F87F0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802FB8B4 002F87F4  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802FB8B8 002F87F8  7C 08 03 A6 */	mtlr r0
/* 802FB8BC 002F87FC  38 21 00 60 */	addi r1, r1, 0x60
/* 802FB8C0 002F8800  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBase, global
/* 802FB8C4 002F8804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FB8C8 002F8808  7C 08 02 A6 */	mflr r0
/* 802FB8CC 002F880C  C0 22 F0 08 */	lfs f1, lbl_8051D368@sda21(r2)
/* 802FB8D0 002F8810  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FB8D4 002F8814  C0 42 EF FC */	lfs f2, lbl_8051D35C@sda21(r2)
/* 802FB8D8 002F8818  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FB8DC 002F881C  7C 9F 23 78 */	mr r31, r4
/* 802FB8E0 002F8820  C0 62 EF E0 */	lfs f3, lbl_8051D340@sda21(r2)
/* 802FB8E4 002F8824  7F E3 FB 78 */	mr r3, r31
/* 802FB8E8 002F8828  C0 82 F0 0C */	lfs f4, lbl_8051D36C@sda21(r2)
/* 802FB8EC 002F882C  38 80 00 00 */	li r4, 0
/* 802FB8F0 002F8830  4B E1 78 2D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802FB8F4 002F8834  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB8F8 002F8838  7F E3 FB 78 */	mr r3, r31
/* 802FB8FC 002F883C  38 80 00 01 */	li r4, 1
/* 802FB900 002F8840  60 00 00 01 */	ori r0, r0, 1
/* 802FB904 002F8844  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB908 002F8848  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802FB90C 002F884C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802FB910 002F8850  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802FB914 002F8854  48 00 21 89 */	bl setBodyCollision__Q34Game10DangoMushi3ObjFb
/* 802FB918 002F8858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FB91C 002F885C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FB920 002F8860  7C 08 03 A6 */	mtlr r0
/* 802FB924 002F8864  38 21 00 10 */	addi r1, r1, 0x10
/* 802FB928 002F8868  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi9StateTurnFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FB92C 002F886C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FB930 002F8870  7C 08 02 A6 */	mflr r0
/* 802FB934 002F8874  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FB938 002F8878  7C 83 23 78 */	mr r3, r4
/* 802FB93C 002F887C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FB940 002F8880  38 00 FF FF */	li r0, -1
/* 802FB944 002F8884  38 A0 00 00 */	li r5, 0
/* 802FB948 002F8888  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802FB94C 002F888C  38 00 00 00 */	li r0, 0
/* 802FB950 002F8890  38 80 00 06 */	li r4, 6
/* 802FB954 002F8894  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 802FB958 002F8898  98 03 02 C2 */	stb r0, 0x2c2(r3)
/* 802FB95C 002F889C  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802FB960 002F88A0  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802FB964 002F88A4  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802FB968 002F88A8  48 00 2C E1 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FB96C 002F88AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FB970 002F88B0  7C 08 03 A6 */	mtlr r0
/* 802FB974 002F88B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802FB978 002F88B8  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBase, global
/* 802FB97C 002F88BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802FB980 002F88C0  7C 08 02 A6 */	mflr r0
/* 802FB984 002F88C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802FB988 002F88C8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802FB98C 002F88CC  7C 9F 23 78 */	mr r31, r4
/* 802FB990 002F88D0  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802FB994 002F88D4  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802FB998 002F88D8  28 00 00 00 */	cmplwi r0, 0
/* 802FB99C 002F88DC  41 82 00 C8 */	beq .L_802FBA64
/* 802FB9A0 002F88E0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802FB9A4 002F88E4  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FB9A8 002F88E8  40 82 00 10 */	bne .L_802FB9B8
/* 802FB9AC 002F88EC  7F E3 FB 78 */	mr r3, r31
/* 802FB9B0 002F88F0  48 00 2D B5 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FB9B4 002F88F4  48 00 00 B0 */	b .L_802FBA64
.L_802FB9B8:
/* 802FB9B8 002F88F8  28 00 00 02 */	cmplwi r0, 2
/* 802FB9BC 002F88FC  40 82 00 70 */	bne .L_802FBA2C
/* 802FB9C0 002F8900  7F E3 FB 78 */	mr r3, r31
/* 802FB9C4 002F8904  48 00 38 B1 */	bl createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
/* 802FB9C8 002F8908  7F E4 FB 78 */	mr r4, r31
/* 802FB9CC 002F890C  38 61 00 08 */	addi r3, r1, 8
/* 802FB9D0 002F8910  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FB9D4 002F8914  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FB9D8 002F8918  7D 89 03 A6 */	mtctr r12
/* 802FB9DC 002F891C  4E 80 04 21 */	bctrl 
/* 802FB9E0 002F8920  C0 41 00 08 */	lfs f2, 8(r1)
/* 802FB9E4 002F8924  38 A1 00 14 */	addi r5, r1, 0x14
/* 802FB9E8 002F8928  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802FB9EC 002F892C  38 80 00 0F */	li r4, 0xf
/* 802FB9F0 002F8930  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802FB9F4 002F8934  38 C0 00 02 */	li r6, 2
/* 802FB9F8 002F8938  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802FB9FC 002F893C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FBA00 002F8940  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802FBA04 002F8944  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802FBA08 002F8948  4B F5 68 35 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FBA0C 002F894C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FBA10 002F8950  38 A1 00 14 */	addi r5, r1, 0x14
/* 802FBA14 002F8954  38 80 00 0B */	li r4, 0xb
/* 802FBA18 002F8958  38 C0 00 02 */	li r6, 2
/* 802FBA1C 002F895C  4B F5 7D 65 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FBA20 002F8960  7F E3 FB 78 */	mr r3, r31
/* 802FBA24 002F8964  48 00 2D D9 */	bl startBossFlickBGM__Q34Game10DangoMushi3ObjFv
/* 802FBA28 002F8968  48 00 00 3C */	b .L_802FBA64
.L_802FBA2C:
/* 802FBA2C 002F896C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FBA30 002F8970  40 82 00 34 */	bne .L_802FBA64
/* 802FBA34 002F8974  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 802FBA38 002F8978  38 A0 00 08 */	li r5, 8
/* 802FBA3C 002F897C  C0 02 EF E8 */	lfs f0, lbl_8051D348@sda21(r2)
/* 802FBA40 002F8980  38 C0 00 00 */	li r6, 0
/* 802FBA44 002F8984  EC 01 00 2A */	fadds f0, f1, f0
/* 802FBA48 002F8988  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 802FBA4C 002F898C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802FBA50 002F8990  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802FBA54 002F8994  81 83 00 00 */	lwz r12, 0(r3)
/* 802FBA58 002F8998  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FBA5C 002F899C  7D 89 03 A6 */	mtctr r12
/* 802FBA60 002F89A0  4E 80 04 21 */	bctrl 
.L_802FBA64:
/* 802FBA64 002F89A4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802FBA68 002F89A8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802FBA6C 002F89AC  7C 08 03 A6 */	mtlr r0
/* 802FBA70 002F89B0  38 21 00 30 */	addi r1, r1, 0x30
/* 802FBA74 002F89B4  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBase, global
/* 802FBA78 002F89B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi12StateRecoverFPQ24Game9EnemyBase

.fn init__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802FBA7C 002F89BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FBA80 002F89C0  7C 08 02 A6 */	mflr r0
/* 802FBA84 002F89C4  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FBA88 002F89C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FBA8C 002F89CC  38 00 FF FF */	li r0, -1
/* 802FBA90 002F89D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802FBA94 002F89D4  7C 9F 23 78 */	mr r31, r4
/* 802FBA98 002F89D8  7F E3 FB 78 */	mr r3, r31
/* 802FBA9C 002F89DC  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802FBAA0 002F89E0  38 00 00 00 */	li r0, 0
/* 802FBAA4 002F89E4  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802FBAA8 002F89E8  98 04 02 C1 */	stb r0, 0x2c1(r4)
/* 802FBAAC 002F89EC  98 04 02 C2 */	stb r0, 0x2c2(r4)
/* 802FBAB0 002F89F0  4B E0 5F 1D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802FBAB4 002F89F4  C0 02 EF E0 */	lfs f0, lbl_8051D340@sda21(r2)
/* 802FBAB8 002F89F8  7F E3 FB 78 */	mr r3, r31
/* 802FBABC 002F89FC  38 80 00 04 */	li r4, 4
/* 802FBAC0 002F8A00  38 A0 00 00 */	li r5, 0
/* 802FBAC4 002F8A04  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802FBAC8 002F8A08  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802FBACC 002F8A0C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802FBAD0 002F8A10  48 00 2B 79 */	bl startBlendAnimation__Q34Game10DangoMushi3ObjFib
/* 802FBAD4 002F8A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FBAD8 002F8A18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802FBADC 002F8A1C  7C 08 03 A6 */	mtlr r0
/* 802FBAE0 002F8A20  38 21 00 10 */	addi r1, r1, 0x10
/* 802FBAE4 002F8A24  4E 80 00 20 */	blr 
.endfn init__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBase, global
/* 802FBAE8 002F8A28  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802FBAEC 002F8A2C  7C 08 02 A6 */	mflr r0
/* 802FBAF0 002F8A30  90 01 00 44 */	stw r0, 0x44(r1)
/* 802FBAF4 002F8A34  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802FBAF8 002F8A38  7C 9F 23 78 */	mr r31, r4
/* 802FBAFC 002F8A3C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802FBB00 002F8A40  7C 7E 1B 78 */	mr r30, r3
/* 802FBB04 002F8A44  7F E3 FB 78 */	mr r3, r31
/* 802FBB08 002F8A48  48 00 27 95 */	bl flickHandCollision__Q34Game10DangoMushi3ObjFv
/* 802FBB0C 002F8A4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802FBB10 002F8A50  41 82 00 B4 */	beq .L_802FBBC4
/* 802FBB14 002F8A54  7F E3 FB 78 */	mr r3, r31
/* 802FBB18 002F8A58  48 00 35 29 */	bl createWallBreakEffect__Q34Game10DangoMushi3ObjFv
/* 802FBB1C 002F8A5C  7F E3 FB 78 */	mr r3, r31
/* 802FBB20 002F8A60  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FBB24 002F8A64  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802FBB28 002F8A68  7D 89 03 A6 */	mtctr r12
/* 802FBB2C 002F8A6C  4E 80 04 21 */	bctrl 
/* 802FBB30 002F8A70  81 83 00 00 */	lwz r12, 0(r3)
/* 802FBB34 002F8A74  38 80 59 82 */	li r4, 0x5982
/* 802FBB38 002F8A78  38 A0 00 00 */	li r5, 0
/* 802FBB3C 002F8A7C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802FBB40 002F8A80  7D 89 03 A6 */	mtctr r12
/* 802FBB44 002F8A84  4E 80 04 21 */	bctrl 
/* 802FBB48 002F8A88  7F E4 FB 78 */	mr r4, r31
/* 802FBB4C 002F8A8C  38 61 00 14 */	addi r3, r1, 0x14
/* 802FBB50 002F8A90  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FBB54 002F8A94  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FBB58 002F8A98  7D 89 03 A6 */	mtctr r12
/* 802FBB5C 002F8A9C  4E 80 04 21 */	bctrl 
/* 802FBB60 002F8AA0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802FBB64 002F8AA4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802FBB68 002F8AA8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802FBB6C 002F8AAC  38 80 00 19 */	li r4, 0x19
/* 802FBB70 002F8AB0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802FBB74 002F8AB4  38 C0 00 02 */	li r6, 2
/* 802FBB78 002F8AB8  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802FBB7C 002F8ABC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FBB80 002F8AC0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802FBB84 002F8AC4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802FBB88 002F8AC8  4B F5 66 B5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FBB8C 002F8ACC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FBB90 002F8AD0  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802FBB94 002F8AD4  38 80 00 0E */	li r4, 0xe
/* 802FBB98 002F8AD8  38 C0 00 02 */	li r6, 2
/* 802FBB9C 002F8ADC  4B F5 7B E5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FBBA0 002F8AE0  7F C3 F3 78 */	mr r3, r30
/* 802FBBA4 002F8AE4  7F E4 FB 78 */	mr r4, r31
/* 802FBBA8 002F8AE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FBBAC 002F8AEC  38 A0 00 03 */	li r5, 3
/* 802FBBB0 002F8AF0  38 C2 EF F0 */	addi r6, r2, lbl_8051D350@sda21
/* 802FBBB4 002F8AF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FBBB8 002F8AF8  7D 89 03 A6 */	mtctr r12
/* 802FBBBC 002F8AFC  4E 80 04 21 */	bctrl 
/* 802FBBC0 002F8B00  48 00 00 F0 */	b .L_802FBCB0
.L_802FBBC4:
/* 802FBBC4 002F8B04  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802FBBC8 002F8B08  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802FBBCC 002F8B0C  28 00 00 00 */	cmplwi r0, 0
/* 802FBBD0 002F8B10  41 82 00 E0 */	beq .L_802FBCB0
/* 802FBBD4 002F8B14  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802FBBD8 002F8B18  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802FBBDC 002F8B1C  40 82 00 10 */	bne .L_802FBBEC
/* 802FBBE0 002F8B20  7F E3 FB 78 */	mr r3, r31
/* 802FBBE4 002F8B24  48 00 2B 81 */	bl endBlendAnimation__Q34Game10DangoMushi3ObjFv
/* 802FBBE8 002F8B28  48 00 00 C8 */	b .L_802FBCB0
.L_802FBBEC:
/* 802FBBEC 002F8B2C  28 00 00 02 */	cmplwi r0, 2
/* 802FBBF0 002F8B30  40 82 00 2C */	bne .L_802FBC1C
/* 802FBBF4 002F8B34  38 00 00 01 */	li r0, 1
/* 802FBBF8 002F8B38  7F E3 FB 78 */	mr r3, r31
/* 802FBBFC 002F8B3C  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802FBC00 002F8B40  4B E0 96 6D */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802FBC04 002F8B44  C0 02 F0 10 */	lfs f0, lbl_8051D370@sda21(r2)
/* 802FBC08 002F8B48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802FBC0C 002F8B4C  40 80 00 A4 */	bge .L_802FBCB0
/* 802FBC10 002F8B50  7F E3 FB 78 */	mr r3, r31
/* 802FBC14 002F8B54  48 00 34 81 */	bl createFlickAttackEffect__Q34Game10DangoMushi3ObjFv
/* 802FBC18 002F8B58  48 00 00 98 */	b .L_802FBCB0
.L_802FBC1C:
/* 802FBC1C 002F8B5C  28 00 00 03 */	cmplwi r0, 3
/* 802FBC20 002F8B60  40 82 00 68 */	bne .L_802FBC88
/* 802FBC24 002F8B64  38 00 00 00 */	li r0, 0
/* 802FBC28 002F8B68  7F E4 FB 78 */	mr r4, r31
/* 802FBC2C 002F8B6C  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802FBC30 002F8B70  38 61 00 08 */	addi r3, r1, 8
/* 802FBC34 002F8B74  81 9F 00 00 */	lwz r12, 0(r31)
/* 802FBC38 002F8B78  81 8C 00 08 */	lwz r12, 8(r12)
/* 802FBC3C 002F8B7C  7D 89 03 A6 */	mtctr r12
/* 802FBC40 002F8B80  4E 80 04 21 */	bctrl 
/* 802FBC44 002F8B84  C0 41 00 08 */	lfs f2, 8(r1)
/* 802FBC48 002F8B88  38 A1 00 20 */	addi r5, r1, 0x20
/* 802FBC4C 002F8B8C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802FBC50 002F8B90  38 80 00 0F */	li r4, 0xf
/* 802FBC54 002F8B94  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802FBC58 002F8B98  38 C0 00 02 */	li r6, 2
/* 802FBC5C 002F8B9C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802FBC60 002F8BA0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802FBC64 002F8BA4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802FBC68 002F8BA8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802FBC6C 002F8BAC  4B F5 65 D1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802FBC70 002F8BB0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802FBC74 002F8BB4  38 A1 00 20 */	addi r5, r1, 0x20
/* 802FBC78 002F8BB8  38 80 00 0B */	li r4, 0xb
/* 802FBC7C 002F8BBC  38 C0 00 02 */	li r6, 2
/* 802FBC80 002F8BC0  4B F5 7B 01 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802FBC84 002F8BC4  48 00 00 2C */	b .L_802FBCB0
.L_802FBC88:
/* 802FBC88 002F8BC8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802FBC8C 002F8BCC  40 82 00 24 */	bne .L_802FBCB0
/* 802FBC90 002F8BD0  7F C3 F3 78 */	mr r3, r30
/* 802FBC94 002F8BD4  7F E4 FB 78 */	mr r4, r31
/* 802FBC98 002F8BD8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802FBC9C 002F8BDC  38 A0 00 03 */	li r5, 3
/* 802FBCA0 002F8BE0  38 C0 00 00 */	li r6, 0
/* 802FBCA4 002F8BE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802FBCA8 002F8BE8  7D 89 03 A6 */	mtctr r12
/* 802FBCAC 002F8BEC  4E 80 04 21 */	bctrl 
.L_802FBCB0:
/* 802FBCB0 002F8BF0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802FBCB4 002F8BF4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802FBCB8 002F8BF8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802FBCBC 002F8BFC  7C 08 03 A6 */	mtlr r0
/* 802FBCC0 002F8C00  38 21 00 40 */	addi r1, r1, 0x40
/* 802FBCC4 002F8C04  4E 80 00 20 */	blr 
.endfn exec__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBase, global
/* 802FBCC8 002F8C08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FBCCC 002F8C0C  7C 08 02 A6 */	mflr r0
/* 802FBCD0 002F8C10  7C 83 23 78 */	mr r3, r4
/* 802FBCD4 002F8C14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FBCD8 002F8C18  38 00 00 00 */	li r0, 0
/* 802FBCDC 002F8C1C  98 04 02 C1 */	stb r0, 0x2c1(r4)
/* 802FBCE0 002F8C20  4B E0 5C 9D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802FBCE4 002F8C24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FBCE8 002F8C28  7C 08 03 A6 */	mtlr r0
/* 802FBCEC 002F8C2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802FBCF0 002F8C30  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10DangoMushi10StateFlickFPQ24Game9EnemyBase

.fn __sinit_DangoMushiState_cpp, local
/* 802FBCF4 002F8C34  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802FBCF8 002F8C38  38 00 FF FF */	li r0, -1
/* 802FBCFC 002F8C3C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802FBD00 002F8C40  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802FBD04 002F8C44  90 0D 97 88 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802FBD08 002F8C48  D4 03 5E 60 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802FBD0C 002F8C4C  D0 0D 97 8C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802FBD10 002F8C50  D0 03 00 04 */	stfs f0, 4(r3)
/* 802FBD14 002F8C54  D0 03 00 08 */	stfs f0, 8(r3)
/* 802FBD18 002F8C58  4E 80 00 20 */	blr 
.endfn __sinit_DangoMushiState_cpp
