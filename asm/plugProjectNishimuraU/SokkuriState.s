.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048CDE8:
	.asciz "246-SokkuriState"
.balign 4
lbl_8048CDFC:
	.asciz "disappear"
.balign 4
lbl_8048CE08:
	.asciz "moveground"
.balign 4
lbl_8048CE14:
	.asciz "movewater"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game7Sokkuri10StateFlick
__vt__Q34Game7Sokkuri10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri14StateMoveWater
__vt__Q34Game7Sokkuri14StateMoveWater:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri15StateMoveGround
__vt__Q34Game7Sokkuri15StateMoveGround:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri9StateWait
__vt__Q34Game7Sokkuri9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri14StateDisappear
__vt__Q34Game7Sokkuri14StateDisappear:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri11StateAppear
__vt__Q34Game7Sokkuri11StateAppear:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri9StateStay
__vt__Q34Game7Sokkuri9StateStay:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri10StatePress
__vt__Q34Game7Sokkuri10StatePress:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri9StateDead
__vt__Q34Game7Sokkuri9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri5State
__vt__Q34Game7Sokkuri5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7Sokkuri3FSM
__vt__Q34Game7Sokkuri3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7Sokkuri3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051D090:
	.asciz "dead"
.balign 4
lbl_8051D098:
	.asciz "press"
.balign 4
lbl_8051D0A0:
	.asciz "stay"
.balign 4
lbl_8051D0A8:
	.asciz "appear"
.balign 4
lbl_8051D0B0:
	.asciz "wait"
.balign 4
lbl_8051D0B8:
	.asciz "flick"
.balign 4
lbl_8051D0C0:
	.float 0.0
lbl_8051D0C4:
	.float 0.5
lbl_8051D0C8:
	.float 0.55
lbl_8051D0CC:
	.float 0.75
lbl_8051D0D0:
	.float 0.35
lbl_8051D0D4:
	.float 0.28
lbl_8051D0D8:
	.float 1.0
lbl_8051D0DC:
	.float 32768.0
.balign 8
lbl_8051D0E0:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051D0E8:
	.float 0.6
lbl_8051D0EC:
	.float -1000.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game7Sokkuri3FSMFPQ24Game9EnemyBase
init__Q34Game7Sokkuri3FSMFPQ24Game9EnemyBase:
/* 802EFA24 002EC964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFA28 002EC968  7C 08 02 A6 */	mflr r0
/* 802EFA2C 002EC96C  3C 80 80 49 */	lis r4, lbl_8048CDE8@ha
/* 802EFA30 002EC970  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFA34 002EC974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EFA38 002EC978  7C 7F 1B 78 */	mr r31, r3
/* 802EFA3C 002EC97C  93 C1 00 08 */	stw r30, 8(r1)
/* 802EFA40 002EC980  3B C4 CD E8 */	addi r30, r4, lbl_8048CDE8@l
/* 802EFA44 002EC984  38 80 00 09 */	li r4, 9
/* 802EFA48 002EC988  4B E4 0E 1D */	bl create__Q24Game17EnemyStateMachineFi
/* 802EFA4C 002EC98C  38 60 00 10 */	li r3, 0x10
/* 802EFA50 002EC990  4B D3 44 55 */	bl __nw__FUl
/* 802EFA54 002EC994  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFA58 002EC998  41 82 00 3C */	beq lbl_802EFA94
/* 802EFA5C 002EC99C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFA60 002EC9A0  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFA64 002EC9A4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFA68 002EC9A8  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri9StateDead@ha
/* 802EFA6C 002EC9AC  90 04 00 00 */	stw r0, 0(r4)
/* 802EFA70 002EC9B0  38 E0 00 00 */	li r7, 0
/* 802EFA74 002EC9B4  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFA78 002EC9B8  38 A2 ED 30 */	addi r5, r2, lbl_8051D090@sda21
/* 802EFA7C 002EC9BC  90 E4 00 04 */	stw r7, 4(r4)
/* 802EFA80 002EC9C0  38 03 4D E0 */	addi r0, r3, __vt__Q34Game7Sokkuri9StateDead@l
/* 802EFA84 002EC9C4  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFA88 002EC9C8  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFA8C 002EC9CC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFA90 002EC9D0  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFA94:
/* 802EFA94 002EC9D4  7F E3 FB 78 */	mr r3, r31
/* 802EFA98 002EC9D8  4B E4 0E 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFA9C 002EC9DC  38 60 00 10 */	li r3, 0x10
/* 802EFAA0 002EC9E0  4B D3 44 05 */	bl __nw__FUl
/* 802EFAA4 002EC9E4  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFAA8 002EC9E8  41 82 00 40 */	beq lbl_802EFAE8
/* 802EFAAC 002EC9EC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFAB0 002EC9F0  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFAB4 002EC9F4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFAB8 002EC9F8  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri10StatePress@ha
/* 802EFABC 002EC9FC  90 04 00 00 */	stw r0, 0(r4)
/* 802EFAC0 002ECA00  38 00 00 01 */	li r0, 1
/* 802EFAC4 002ECA04  38 E0 00 00 */	li r7, 0
/* 802EFAC8 002ECA08  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFACC 002ECA0C  90 04 00 04 */	stw r0, 4(r4)
/* 802EFAD0 002ECA10  38 A2 ED 38 */	addi r5, r2, lbl_8051D098@sda21
/* 802EFAD4 002ECA14  38 03 4D BC */	addi r0, r3, __vt__Q34Game7Sokkuri10StatePress@l
/* 802EFAD8 002ECA18  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFADC 002ECA1C  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFAE0 002ECA20  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFAE4 002ECA24  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFAE8:
/* 802EFAE8 002ECA28  7F E3 FB 78 */	mr r3, r31
/* 802EFAEC 002ECA2C  4B E4 0E 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFAF0 002ECA30  38 60 00 10 */	li r3, 0x10
/* 802EFAF4 002ECA34  4B D3 43 B1 */	bl __nw__FUl
/* 802EFAF8 002ECA38  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFAFC 002ECA3C  41 82 00 40 */	beq lbl_802EFB3C
/* 802EFB00 002ECA40  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFB04 002ECA44  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFB08 002ECA48  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFB0C 002ECA4C  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri9StateStay@ha
/* 802EFB10 002ECA50  90 04 00 00 */	stw r0, 0(r4)
/* 802EFB14 002ECA54  38 00 00 02 */	li r0, 2
/* 802EFB18 002ECA58  38 E0 00 00 */	li r7, 0
/* 802EFB1C 002ECA5C  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFB20 002ECA60  90 04 00 04 */	stw r0, 4(r4)
/* 802EFB24 002ECA64  38 A2 ED 40 */	addi r5, r2, lbl_8051D0A0@sda21
/* 802EFB28 002ECA68  38 03 4D 98 */	addi r0, r3, __vt__Q34Game7Sokkuri9StateStay@l
/* 802EFB2C 002ECA6C  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFB30 002ECA70  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFB34 002ECA74  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFB38 002ECA78  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFB3C:
/* 802EFB3C 002ECA7C  7F E3 FB 78 */	mr r3, r31
/* 802EFB40 002ECA80  4B E4 0D C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFB44 002ECA84  38 60 00 10 */	li r3, 0x10
/* 802EFB48 002ECA88  4B D3 43 5D */	bl __nw__FUl
/* 802EFB4C 002ECA8C  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFB50 002ECA90  41 82 00 40 */	beq lbl_802EFB90
/* 802EFB54 002ECA94  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFB58 002ECA98  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFB5C 002ECA9C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFB60 002ECAA0  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri11StateAppear@ha
/* 802EFB64 002ECAA4  90 04 00 00 */	stw r0, 0(r4)
/* 802EFB68 002ECAA8  38 00 00 03 */	li r0, 3
/* 802EFB6C 002ECAAC  38 E0 00 00 */	li r7, 0
/* 802EFB70 002ECAB0  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFB74 002ECAB4  90 04 00 04 */	stw r0, 4(r4)
/* 802EFB78 002ECAB8  38 A2 ED 48 */	addi r5, r2, lbl_8051D0A8@sda21
/* 802EFB7C 002ECABC  38 03 4D 74 */	addi r0, r3, __vt__Q34Game7Sokkuri11StateAppear@l
/* 802EFB80 002ECAC0  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFB84 002ECAC4  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFB88 002ECAC8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFB8C 002ECACC  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFB90:
/* 802EFB90 002ECAD0  7F E3 FB 78 */	mr r3, r31
/* 802EFB94 002ECAD4  4B E4 0D 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFB98 002ECAD8  38 60 00 10 */	li r3, 0x10
/* 802EFB9C 002ECADC  4B D3 43 09 */	bl __nw__FUl
/* 802EFBA0 002ECAE0  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFBA4 002ECAE4  41 82 00 40 */	beq lbl_802EFBE4
/* 802EFBA8 002ECAE8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFBAC 002ECAEC  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFBB0 002ECAF0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFBB4 002ECAF4  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri14StateDisappear@ha
/* 802EFBB8 002ECAF8  90 04 00 00 */	stw r0, 0(r4)
/* 802EFBBC 002ECAFC  38 00 00 04 */	li r0, 4
/* 802EFBC0 002ECB00  38 E0 00 00 */	li r7, 0
/* 802EFBC4 002ECB04  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFBC8 002ECB08  90 04 00 04 */	stw r0, 4(r4)
/* 802EFBCC 002ECB0C  38 BE 00 14 */	addi r5, r30, 0x14
/* 802EFBD0 002ECB10  38 03 4D 50 */	addi r0, r3, __vt__Q34Game7Sokkuri14StateDisappear@l
/* 802EFBD4 002ECB14  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFBD8 002ECB18  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFBDC 002ECB1C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFBE0 002ECB20  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFBE4:
/* 802EFBE4 002ECB24  7F E3 FB 78 */	mr r3, r31
/* 802EFBE8 002ECB28  4B E4 0D 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFBEC 002ECB2C  38 60 00 10 */	li r3, 0x10
/* 802EFBF0 002ECB30  4B D3 42 B5 */	bl __nw__FUl
/* 802EFBF4 002ECB34  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFBF8 002ECB38  41 82 00 40 */	beq lbl_802EFC38
/* 802EFBFC 002ECB3C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFC00 002ECB40  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFC04 002ECB44  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFC08 002ECB48  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri9StateWait@ha
/* 802EFC0C 002ECB4C  90 04 00 00 */	stw r0, 0(r4)
/* 802EFC10 002ECB50  38 00 00 05 */	li r0, 5
/* 802EFC14 002ECB54  38 E0 00 00 */	li r7, 0
/* 802EFC18 002ECB58  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFC1C 002ECB5C  90 04 00 04 */	stw r0, 4(r4)
/* 802EFC20 002ECB60  38 A2 ED 50 */	addi r5, r2, lbl_8051D0B0@sda21
/* 802EFC24 002ECB64  38 03 4D 2C */	addi r0, r3, __vt__Q34Game7Sokkuri9StateWait@l
/* 802EFC28 002ECB68  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFC2C 002ECB6C  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFC30 002ECB70  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFC34 002ECB74  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFC38:
/* 802EFC38 002ECB78  7F E3 FB 78 */	mr r3, r31
/* 802EFC3C 002ECB7C  4B E4 0C CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFC40 002ECB80  38 60 00 10 */	li r3, 0x10
/* 802EFC44 002ECB84  4B D3 42 61 */	bl __nw__FUl
/* 802EFC48 002ECB88  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFC4C 002ECB8C  41 82 00 40 */	beq lbl_802EFC8C
/* 802EFC50 002ECB90  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFC54 002ECB94  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFC58 002ECB98  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFC5C 002ECB9C  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri15StateMoveGround@ha
/* 802EFC60 002ECBA0  90 04 00 00 */	stw r0, 0(r4)
/* 802EFC64 002ECBA4  38 00 00 06 */	li r0, 6
/* 802EFC68 002ECBA8  38 E0 00 00 */	li r7, 0
/* 802EFC6C 002ECBAC  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFC70 002ECBB0  90 04 00 04 */	stw r0, 4(r4)
/* 802EFC74 002ECBB4  38 BE 00 20 */	addi r5, r30, 0x20
/* 802EFC78 002ECBB8  38 03 4D 08 */	addi r0, r3, __vt__Q34Game7Sokkuri15StateMoveGround@l
/* 802EFC7C 002ECBBC  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFC80 002ECBC0  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFC84 002ECBC4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFC88 002ECBC8  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFC8C:
/* 802EFC8C 002ECBCC  7F E3 FB 78 */	mr r3, r31
/* 802EFC90 002ECBD0  4B E4 0C 79 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFC94 002ECBD4  38 60 00 10 */	li r3, 0x10
/* 802EFC98 002ECBD8  4B D3 42 0D */	bl __nw__FUl
/* 802EFC9C 002ECBDC  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFCA0 002ECBE0  41 82 00 40 */	beq lbl_802EFCE0
/* 802EFCA4 002ECBE4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFCA8 002ECBE8  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFCAC 002ECBEC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFCB0 002ECBF0  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri14StateMoveWater@ha
/* 802EFCB4 002ECBF4  90 04 00 00 */	stw r0, 0(r4)
/* 802EFCB8 002ECBF8  38 00 00 07 */	li r0, 7
/* 802EFCBC 002ECBFC  38 E0 00 00 */	li r7, 0
/* 802EFCC0 002ECC00  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFCC4 002ECC04  90 04 00 04 */	stw r0, 4(r4)
/* 802EFCC8 002ECC08  38 BE 00 2C */	addi r5, r30, 0x2c
/* 802EFCCC 002ECC0C  38 03 4C E4 */	addi r0, r3, __vt__Q34Game7Sokkuri14StateMoveWater@l
/* 802EFCD0 002ECC10  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFCD4 002ECC14  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFCD8 002ECC18  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFCDC 002ECC1C  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFCE0:
/* 802EFCE0 002ECC20  7F E3 FB 78 */	mr r3, r31
/* 802EFCE4 002ECC24  4B E4 0C 25 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFCE8 002ECC28  38 60 00 10 */	li r3, 0x10
/* 802EFCEC 002ECC2C  4B D3 41 B9 */	bl __nw__FUl
/* 802EFCF0 002ECC30  7C 64 1B 79 */	or. r4, r3, r3
/* 802EFCF4 002ECC34  41 82 00 40 */	beq lbl_802EFD34
/* 802EFCF8 002ECC38  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802EFCFC 002ECC3C  3C A0 80 4D */	lis r5, __vt__Q34Game7Sokkuri5State@ha
/* 802EFD00 002ECC40  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802EFD04 002ECC44  3C 60 80 4D */	lis r3, __vt__Q34Game7Sokkuri10StateFlick@ha
/* 802EFD08 002ECC48  90 04 00 00 */	stw r0, 0(r4)
/* 802EFD0C 002ECC4C  38 00 00 08 */	li r0, 8
/* 802EFD10 002ECC50  38 E0 00 00 */	li r7, 0
/* 802EFD14 002ECC54  38 C5 4E 04 */	addi r6, r5, __vt__Q34Game7Sokkuri5State@l
/* 802EFD18 002ECC58  90 04 00 04 */	stw r0, 4(r4)
/* 802EFD1C 002ECC5C  38 A2 ED 58 */	addi r5, r2, lbl_8051D0B8@sda21
/* 802EFD20 002ECC60  38 03 4C C0 */	addi r0, r3, __vt__Q34Game7Sokkuri10StateFlick@l
/* 802EFD24 002ECC64  90 E4 00 08 */	stw r7, 8(r4)
/* 802EFD28 002ECC68  90 C4 00 00 */	stw r6, 0(r4)
/* 802EFD2C 002ECC6C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802EFD30 002ECC70  90 04 00 00 */	stw r0, 0(r4)
lbl_802EFD34:
/* 802EFD34 002ECC74  7F E3 FB 78 */	mr r3, r31
/* 802EFD38 002ECC78  4B E4 0B D1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802EFD3C 002ECC7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EFD40 002ECC80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EFD44 002ECC84  83 C1 00 08 */	lwz r30, 8(r1)
/* 802EFD48 002ECC88  7C 08 03 A6 */	mtlr r0
/* 802EFD4C 002ECC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802EFD50 002ECC90  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802EFD54 002ECC94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFD58 002ECC98  7C 08 02 A6 */	mflr r0
/* 802EFD5C 002ECC9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFD60 002ECCA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EFD64 002ECCA4  7C 9F 23 78 */	mr r31, r4
/* 802EFD68 002ECCA8  7F E3 FB 78 */	mr r3, r31
/* 802EFD6C 002ECCAC  4B E1 59 B5 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802EFD70 002ECCB0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802EFD74 002ECCB4  7F E3 FB 78 */	mr r3, r31
/* 802EFD78 002ECCB8  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802EFD7C 002ECCBC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802EFD80 002ECCC0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802EFD84 002ECCC4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EFD88 002ECCC8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EFD8C 002ECCCC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EFD90 002ECCD0  4B E1 1B ED */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802EFD94 002ECCD4  7F E3 FB 78 */	mr r3, r31
/* 802EFD98 002ECCD8  38 80 00 04 */	li r4, 4
/* 802EFD9C 002ECCDC  38 A0 00 00 */	li r5, 0
/* 802EFDA0 002ECCE0  4B E1 52 65 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EFDA4 002ECCE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EFDA8 002ECCE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EFDAC 002ECCEC  7C 08 03 A6 */	mtlr r0
/* 802EFDB0 002ECCF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802EFDB4 002ECCF4  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBase:
/* 802EFDB8 002ECCF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFDBC 002ECCFC  7C 08 02 A6 */	mflr r0
/* 802EFDC0 002ECD00  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFDC4 002ECD04  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802EFDC8 002ECD08  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EFDCC 002ECD0C  28 00 00 00 */	cmplwi r0, 0
/* 802EFDD0 002ECD10  41 82 00 38 */	beq lbl_802EFE08
/* 802EFDD4 002ECD14  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EFDD8 002ECD18  28 00 00 02 */	cmplwi r0, 2
/* 802EFDDC 002ECD1C  40 82 00 18 */	bne lbl_802EFDF4
/* 802EFDE0 002ECD20  C0 22 ED 64 */	lfs f1, lbl_8051D0C4@sda21(r2)
/* 802EFDE4 002ECD24  7C 83 23 78 */	mr r3, r4
/* 802EFDE8 002ECD28  C0 42 ED 68 */	lfs f2, lbl_8051D0C8@sda21(r2)
/* 802EFDEC 002ECD2C  48 00 20 79 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802EFDF0 002ECD30  48 00 00 18 */	b lbl_802EFE08
lbl_802EFDF4:
/* 802EFDF4 002ECD34  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EFDF8 002ECD38  40 82 00 10 */	bne lbl_802EFE08
/* 802EFDFC 002ECD3C  7C 83 23 78 */	mr r3, r4
/* 802EFE00 002ECD40  38 80 00 00 */	li r4, 0
/* 802EFE04 002ECD44  4B E4 B2 ED */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_802EFE08:
/* 802EFE08 002ECD48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EFE0C 002ECD4C  7C 08 03 A6 */	mtlr r0
/* 802EFE10 002ECD50  38 21 00 10 */	addi r1, r1, 0x10
/* 802EFE14 002ECD54  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri9StateDeadFPQ24Game9EnemyBase:
/* 802EFE18 002ECD58  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802EFE1C 002ECD5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFE20 002ECD60  7C 08 02 A6 */	mflr r0
/* 802EFE24 002ECD64  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802EFE28 002ECD68  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFE2C 002ECD6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EFE30 002ECD70  7C 9F 23 78 */	mr r31, r4
/* 802EFE34 002ECD74  7F E3 FB 78 */	mr r3, r31
/* 802EFE38 002ECD78  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 802EFE3C 002ECD7C  4B E1 58 E5 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802EFE40 002ECD80  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802EFE44 002ECD84  7F E3 FB 78 */	mr r3, r31
/* 802EFE48 002ECD88  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EFE4C 002ECD8C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EFE50 002ECD90  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EFE54 002ECD94  4B E1 1B 29 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802EFE58 002ECD98  7F E3 FB 78 */	mr r3, r31
/* 802EFE5C 002ECD9C  38 80 00 05 */	li r4, 5
/* 802EFE60 002ECDA0  38 A0 00 00 */	li r5, 0
/* 802EFE64 002ECDA4  4B E1 51 A1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EFE68 002ECDA8  C0 22 ED 6C */	lfs f1, lbl_8051D0CC@sda21(r2)
/* 802EFE6C 002ECDAC  7F E3 FB 78 */	mr r3, r31
/* 802EFE70 002ECDB0  C0 42 ED 60 */	lfs f2, lbl_8051D0C0@sda21(r2)
/* 802EFE74 002ECDB4  48 00 1F F1 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802EFE78 002ECDB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EFE7C 002ECDBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EFE80 002ECDC0  7C 08 03 A6 */	mtlr r0
/* 802EFE84 002ECDC4  38 21 00 10 */	addi r1, r1, 0x10
/* 802EFE88 002ECDC8  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBase:
/* 802EFE8C 002ECDCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFE90 002ECDD0  7C 08 02 A6 */	mflr r0
/* 802EFE94 002ECDD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFE98 002ECDD8  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802EFE9C 002ECDDC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EFEA0 002ECDE0  28 00 00 00 */	cmplwi r0, 0
/* 802EFEA4 002ECDE4  41 82 00 38 */	beq lbl_802EFEDC
/* 802EFEA8 002ECDE8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EFEAC 002ECDEC  28 00 00 02 */	cmplwi r0, 2
/* 802EFEB0 002ECDF0  40 82 00 18 */	bne lbl_802EFEC8
/* 802EFEB4 002ECDF4  C0 22 ED 60 */	lfs f1, lbl_8051D0C0@sda21(r2)
/* 802EFEB8 002ECDF8  7C 83 23 78 */	mr r3, r4
/* 802EFEBC 002ECDFC  C0 42 ED 68 */	lfs f2, lbl_8051D0C8@sda21(r2)
/* 802EFEC0 002ECE00  48 00 1F A5 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802EFEC4 002ECE04  48 00 00 18 */	b lbl_802EFEDC
lbl_802EFEC8:
/* 802EFEC8 002ECE08  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EFECC 002ECE0C  40 82 00 10 */	bne lbl_802EFEDC
/* 802EFED0 002ECE10  7C 83 23 78 */	mr r3, r4
/* 802EFED4 002ECE14  38 80 00 00 */	li r4, 0
/* 802EFED8 002ECE18  4B E4 B2 19 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_802EFEDC:
/* 802EFEDC 002ECE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EFEE0 002ECE20  7C 08 03 A6 */	mtlr r0
/* 802EFEE4 002ECE24  38 21 00 10 */	addi r1, r1, 0x10
/* 802EFEE8 002ECE28  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri10StatePressFPQ24Game9EnemyBase:
/* 802EFEEC 002ECE2C  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802EFEF0 002ECE30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFEF4 002ECE34  7C 08 02 A6 */	mflr r0
/* 802EFEF8 002ECE38  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802EFEFC 002ECE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFF00 002ECE40  38 00 FF FF */	li r0, -1
/* 802EFF04 002ECE44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EFF08 002ECE48  7C 9F 23 78 */	mr r31, r4
/* 802EFF0C 002ECE4C  7F E3 FB 78 */	mr r3, r31
/* 802EFF10 002ECE50  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802EFF14 002ECE54  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802EFF18 002ECE58  48 00 1E A9 */	bl resetMoveVelocity__Q34Game7Sokkuri3ObjFv
/* 802EFF1C 002ECE5C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802EFF20 002ECE60  38 00 00 01 */	li r0, 1
/* 802EFF24 002ECE64  7F E3 FB 78 */	mr r3, r31
/* 802EFF28 002ECE68  54 84 05 66 */	rlwinm r4, r4, 0, 0x15, 0x13
/* 802EFF2C 002ECE6C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802EFF30 002ECE70  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802EFF34 002ECE74  64 84 00 40 */	oris r4, r4, 0x40
/* 802EFF38 002ECE78  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802EFF3C 002ECE7C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802EFF40 002ECE80  4B E1 1A C9 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 802EFF44 002ECE84  7F E3 FB 78 */	mr r3, r31
/* 802EFF48 002ECE88  4B E1 78 35 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802EFF4C 002ECE8C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802EFF50 002ECE90  7F E3 FB 78 */	mr r3, r31
/* 802EFF54 002ECE94  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802EFF58 002ECE98  38 80 00 01 */	li r4, 1
/* 802EFF5C 002ECE9C  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 802EFF60 002ECEA0  38 A0 00 00 */	li r5, 0
/* 802EFF64 002ECEA4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802EFF68 002ECEA8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EFF6C 002ECEAC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EFF70 002ECEB0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EFF74 002ECEB4  4B E1 50 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EFF78 002ECEB8  7F E3 FB 78 */	mr r3, r31
/* 802EFF7C 002ECEBC  4B E1 73 65 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802EFF80 002ECEC0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802EFF84 002ECEC4  28 00 00 00 */	cmplwi r0, 0
/* 802EFF88 002ECEC8  41 82 00 18 */	beq lbl_802EFFA0
/* 802EFF8C 002ECECC  7F E3 FB 78 */	mr r3, r31
/* 802EFF90 002ECED0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EFF94 002ECED4  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 802EFF98 002ECED8  7D 89 03 A6 */	mtctr r12
/* 802EFF9C 002ECEDC  4E 80 04 21 */	bctrl 
lbl_802EFFA0:
/* 802EFFA0 002ECEE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EFFA4 002ECEE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EFFA8 002ECEE8  7C 08 03 A6 */	mtlr r0
/* 802EFFAC 002ECEEC  38 21 00 10 */	addi r1, r1, 0x10
/* 802EFFB0 002ECEF0  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBase:
/* 802EFFB4 002ECEF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EFFB8 002ECEF8  7C 08 02 A6 */	mflr r0
/* 802EFFBC 002ECEFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EFFC0 002ECF00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EFFC4 002ECF04  7C 9F 23 78 */	mr r31, r4
/* 802EFFC8 002ECF08  93 C1 00 08 */	stw r30, 8(r1)
/* 802EFFCC 002ECF0C  7C 7E 1B 78 */	mr r30, r3
/* 802EFFD0 002ECF10  7F E3 FB 78 */	mr r3, r31
/* 802EFFD4 002ECF14  48 00 19 7D */	bl isAppear__Q34Game7Sokkuri3ObjFv
/* 802EFFD8 002ECF18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EFFDC 002ECF1C  41 82 00 24 */	beq lbl_802F0000
/* 802EFFE0 002ECF20  7F C3 F3 78 */	mr r3, r30
/* 802EFFE4 002ECF24  7F E4 FB 78 */	mr r4, r31
/* 802EFFE8 002ECF28  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EFFEC 002ECF2C  38 A0 00 03 */	li r5, 3
/* 802EFFF0 002ECF30  38 C0 00 00 */	li r6, 0
/* 802EFFF4 002ECF34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EFFF8 002ECF38  7D 89 03 A6 */	mtctr r12
/* 802EFFFC 002ECF3C  4E 80 04 21 */	bctrl 
lbl_802F0000:
/* 802F0000 002ECF40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0004 002ECF44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0008 002ECF48  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F000C 002ECF4C  7C 08 03 A6 */	mtlr r0
/* 802F0010 002ECF50  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0014 002ECF54  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri9StateStayFPQ24Game9EnemyBase:
/* 802F0018 002ECF58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F001C 002ECF5C  7C 08 02 A6 */	mflr r0
/* 802F0020 002ECF60  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F0024 002ECF64  38 00 00 00 */	li r0, 0
/* 802F0028 002ECF68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F002C 002ECF6C  7C 9F 23 78 */	mr r31, r4
/* 802F0030 002ECF70  7F E3 FB 78 */	mr r3, r31
/* 802F0034 002ECF74  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802F0038 002ECF78  60 84 08 00 */	ori r4, r4, 0x800
/* 802F003C 002ECF7C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802F0040 002ECF80  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802F0044 002ECF84  54 84 02 90 */	rlwinm r4, r4, 0, 0xa, 8
/* 802F0048 002ECF88  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802F004C 002ECF8C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802F0050 002ECF90  4B E1 77 45 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802F0054 002ECF94  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F0058 002ECF98  60 00 80 00 */	ori r0, r0, 0x8000
/* 802F005C 002ECF9C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F0060 002ECFA0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F0064 002ECFA4  28 00 00 00 */	cmplwi r0, 0
/* 802F0068 002ECFA8  41 82 00 18 */	beq lbl_802F0080
/* 802F006C 002ECFAC  7F E3 FB 78 */	mr r3, r31
/* 802F0070 002ECFB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F0074 002ECFB4  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 802F0078 002ECFB8  7D 89 03 A6 */	mtctr r12
/* 802F007C 002ECFBC  4E 80 04 21 */	bctrl 
lbl_802F0080:
/* 802F0080 002ECFC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0084 002ECFC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0088 002ECFC8  7C 08 03 A6 */	mtlr r0
/* 802F008C 002ECFCC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0090 002ECFD0  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802F0094 002ECFD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F0098 002ECFD8  7C 08 02 A6 */	mflr r0
/* 802F009C 002ECFDC  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F00A0 002ECFE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F00A4 002ECFE4  38 00 FF FF */	li r0, -1
/* 802F00A8 002ECFE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F00AC 002ECFEC  7C 9F 23 78 */	mr r31, r4
/* 802F00B0 002ECFF0  7F E3 FB 78 */	mr r3, r31
/* 802F00B4 002ECFF4  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F00B8 002ECFF8  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802F00BC 002ECFFC  48 00 1D 05 */	bl resetMoveVelocity__Q34Game7Sokkuri3ObjFv
/* 802F00C0 002ED000  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F00C4 002ED004  7F E3 FB 78 */	mr r3, r31
/* 802F00C8 002ED008  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F00CC 002ED00C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F00D0 002ED010  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F00D4 002ED014  4B E1 18 F9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802F00D8 002ED018  7F E3 FB 78 */	mr r3, r31
/* 802F00DC 002ED01C  38 80 00 01 */	li r4, 1
/* 802F00E0 002ED020  38 A0 00 00 */	li r5, 0
/* 802F00E4 002ED024  4B E1 4F 21 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F00E8 002ED028  C0 22 ED 70 */	lfs f1, lbl_8051D0D0@sda21(r2)
/* 802F00EC 002ED02C  7F E3 FB 78 */	mr r3, r31
/* 802F00F0 002ED030  C0 42 ED 60 */	lfs f2, lbl_8051D0C0@sda21(r2)
/* 802F00F4 002ED034  48 00 1D 71 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802F00F8 002ED038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F00FC 002ED03C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0100 002ED040  7C 08 03 A6 */	mtlr r0
/* 802F0104 002ED044  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0108 002ED048  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBase:
/* 802F010C 002ED04C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F0110 002ED050  7C 08 02 A6 */	mflr r0
/* 802F0114 002ED054  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0118 002ED058  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F011C 002ED05C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0120 002ED060  7C 9F 23 78 */	mr r31, r4
/* 802F0124 002ED064  93 C1 00 08 */	stw r30, 8(r1)
/* 802F0128 002ED068  7C 7E 1B 78 */	mr r30, r3
/* 802F012C 002ED06C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802F0130 002ED070  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F0134 002ED074  4C 40 13 82 */	cror 2, 0, 2
/* 802F0138 002ED078  40 82 00 20 */	bne lbl_802F0158
/* 802F013C 002ED07C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F0140 002ED080  38 A0 00 00 */	li r5, 0
/* 802F0144 002ED084  38 C0 00 00 */	li r6, 0
/* 802F0148 002ED088  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F014C 002ED08C  7D 89 03 A6 */	mtctr r12
/* 802F0150 002ED090  4E 80 04 21 */	bctrl 
/* 802F0154 002ED094  48 00 00 78 */	b lbl_802F01CC
lbl_802F0158:
/* 802F0158 002ED098  7F E3 FB 78 */	mr r3, r31
/* 802F015C 002ED09C  38 80 00 00 */	li r4, 0
/* 802F0160 002ED0A0  4B E2 44 F9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802F0164 002ED0A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F0168 002ED0A8  41 82 00 28 */	beq lbl_802F0190
/* 802F016C 002ED0AC  7F C3 F3 78 */	mr r3, r30
/* 802F0170 002ED0B0  7F E4 FB 78 */	mr r4, r31
/* 802F0174 002ED0B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F0178 002ED0B8  38 A0 00 08 */	li r5, 8
/* 802F017C 002ED0BC  38 C0 00 00 */	li r6, 0
/* 802F0180 002ED0C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0184 002ED0C4  7D 89 03 A6 */	mtctr r12
/* 802F0188 002ED0C8  4E 80 04 21 */	bctrl 
/* 802F018C 002ED0CC  48 00 00 40 */	b lbl_802F01CC
lbl_802F0190:
/* 802F0190 002ED0D0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802F0194 002ED0D4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802F0198 002ED0D8  28 00 00 00 */	cmplwi r0, 0
/* 802F019C 002ED0DC  41 82 00 30 */	beq lbl_802F01CC
/* 802F01A0 002ED0E0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F01A4 002ED0E4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F01A8 002ED0E8  40 82 00 24 */	bne lbl_802F01CC
/* 802F01AC 002ED0EC  7F C3 F3 78 */	mr r3, r30
/* 802F01B0 002ED0F0  7F E4 FB 78 */	mr r4, r31
/* 802F01B4 002ED0F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F01B8 002ED0F8  38 A0 00 06 */	li r5, 6
/* 802F01BC 002ED0FC  38 C0 00 00 */	li r6, 0
/* 802F01C0 002ED100  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F01C4 002ED104  7D 89 03 A6 */	mtctr r12
/* 802F01C8 002ED108  4E 80 04 21 */	bctrl 
lbl_802F01CC:
/* 802F01CC 002ED10C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F01D0 002ED110  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F01D4 002ED114  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F01D8 002ED118  7C 08 03 A6 */	mtlr r0
/* 802F01DC 002ED11C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F01E0 002ED120  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri11StateAppearFPQ24Game9EnemyBase:
/* 802F01E4 002ED124  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802F01E8 002ED128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F01EC 002ED12C  7C 08 02 A6 */	mflr r0
/* 802F01F0 002ED130  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F01F4 002ED134  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F01F8 002ED138  38 00 FF FF */	li r0, -1
/* 802F01FC 002ED13C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0200 002ED140  7C 9F 23 78 */	mr r31, r4
/* 802F0204 002ED144  7F E3 FB 78 */	mr r3, r31
/* 802F0208 002ED148  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F020C 002ED14C  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802F0210 002ED150  48 00 1B B1 */	bl resetMoveVelocity__Q34Game7Sokkuri3ObjFv
/* 802F0214 002ED154  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0218 002ED158  7F E3 FB 78 */	mr r3, r31
/* 802F021C 002ED15C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F0220 002ED160  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F0224 002ED164  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F0228 002ED168  4B E1 17 55 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802F022C 002ED16C  7F E3 FB 78 */	mr r3, r31
/* 802F0230 002ED170  38 80 00 03 */	li r4, 3
/* 802F0234 002ED174  38 A0 00 00 */	li r5, 0
/* 802F0238 002ED178  4B E1 4D CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F023C 002ED17C  7F E3 FB 78 */	mr r3, r31
/* 802F0240 002ED180  48 00 1C E9 */	bl createBubbleEffect__Q34Game7Sokkuri3ObjFv
/* 802F0244 002ED184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0248 002ED188  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F024C 002ED18C  7C 08 03 A6 */	mtlr r0
/* 802F0250 002ED190  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0254 002ED194  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBase:
/* 802F0258 002ED198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F025C 002ED19C  7C 08 02 A6 */	mflr r0
/* 802F0260 002ED1A0  C0 42 ED 60 */	lfs f2, lbl_8051D0C0@sda21(r2)
/* 802F0264 002ED1A4  7C 86 23 78 */	mr r6, r4
/* 802F0268 002ED1A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F026C 002ED1AC  C0 04 02 00 */	lfs f0, 0x200(r4)
/* 802F0270 002ED1B0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802F0274 002ED1B4  4C 40 13 82 */	cror 2, 0, 2
/* 802F0278 002ED1B8  40 82 00 20 */	bne lbl_802F0298
/* 802F027C 002ED1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802F0280 002ED1C0  38 A0 00 00 */	li r5, 0
/* 802F0284 002ED1C4  38 C0 00 00 */	li r6, 0
/* 802F0288 002ED1C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F028C 002ED1CC  7D 89 03 A6 */	mtctr r12
/* 802F0290 002ED1D0  4E 80 04 21 */	bctrl 
/* 802F0294 002ED1D4  48 00 00 50 */	b lbl_802F02E4
lbl_802F0298:
/* 802F0298 002ED1D8  80 A6 01 88 */	lwz r5, 0x188(r6)
/* 802F029C 002ED1DC  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802F02A0 002ED1E0  28 00 00 00 */	cmplwi r0, 0
/* 802F02A4 002ED1E4  41 82 00 40 */	beq lbl_802F02E4
/* 802F02A8 002ED1E8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802F02AC 002ED1EC  28 00 00 02 */	cmplwi r0, 2
/* 802F02B0 002ED1F0  40 82 00 14 */	bne lbl_802F02C4
/* 802F02B4 002ED1F4  C0 22 ED 70 */	lfs f1, lbl_8051D0D0@sda21(r2)
/* 802F02B8 002ED1F8  7C C3 33 78 */	mr r3, r6
/* 802F02BC 002ED1FC  48 00 1B A9 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802F02C0 002ED200  48 00 00 24 */	b lbl_802F02E4
lbl_802F02C4:
/* 802F02C4 002ED204  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F02C8 002ED208  40 82 00 1C */	bne lbl_802F02E4
/* 802F02CC 002ED20C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F02D0 002ED210  38 A0 00 02 */	li r5, 2
/* 802F02D4 002ED214  38 C0 00 00 */	li r6, 0
/* 802F02D8 002ED218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F02DC 002ED21C  7D 89 03 A6 */	mtctr r12
/* 802F02E0 002ED220  4E 80 04 21 */	bctrl 
lbl_802F02E4:
/* 802F02E4 002ED224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F02E8 002ED228  7C 08 03 A6 */	mtlr r0
/* 802F02EC 002ED22C  38 21 00 10 */	addi r1, r1, 0x10
/* 802F02F0 002ED230  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri14StateDisappearFPQ24Game9EnemyBase:
/* 802F02F4 002ED234  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802F02F8 002ED238  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F02FC 002ED23C  7C 08 02 A6 */	mflr r0
/* 802F0300 002ED240  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0304 002ED244  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F0308 002ED248  38 00 FF FF */	li r0, -1
/* 802F030C 002ED24C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0310 002ED250  7C 9F 23 78 */	mr r31, r4
/* 802F0314 002ED254  7F E3 FB 78 */	mr r3, r31
/* 802F0318 002ED258  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F031C 002ED25C  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802F0320 002ED260  48 00 1A A1 */	bl resetMoveVelocity__Q34Game7Sokkuri3ObjFv
/* 802F0324 002ED264  7F E3 FB 78 */	mr r3, r31
/* 802F0328 002ED268  48 00 1A C5 */	bl setNextWaitInfo__Q34Game7Sokkuri3ObjFv
/* 802F032C 002ED26C  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0330 002ED270  7F E3 FB 78 */	mr r3, r31
/* 802F0334 002ED274  38 80 00 02 */	li r4, 2
/* 802F0338 002ED278  38 A0 00 00 */	li r5, 0
/* 802F033C 002ED27C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F0340 002ED280  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F0344 002ED284  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F0348 002ED288  4B E1 4C BD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F034C 002ED28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0350 002ED290  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0354 002ED294  7C 08 03 A6 */	mtlr r0
/* 802F0358 002ED298  38 21 00 10 */	addi r1, r1, 0x10
/* 802F035C 002ED29C  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBase:
/* 802F0360 002ED2A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F0364 002ED2A4  7C 08 02 A6 */	mflr r0
/* 802F0368 002ED2A8  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F036C 002ED2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F0370 002ED2B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0374 002ED2B4  7C 9F 23 78 */	mr r31, r4
/* 802F0378 002ED2B8  93 C1 00 08 */	stw r30, 8(r1)
/* 802F037C 002ED2BC  7C 7E 1B 78 */	mr r30, r3
/* 802F0380 002ED2C0  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802F0384 002ED2C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F0388 002ED2C8  4C 40 13 82 */	cror 2, 0, 2
/* 802F038C 002ED2CC  40 82 00 20 */	bne lbl_802F03AC
/* 802F0390 002ED2D0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F0394 002ED2D4  38 A0 00 00 */	li r5, 0
/* 802F0398 002ED2D8  38 C0 00 00 */	li r6, 0
/* 802F039C 002ED2DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F03A0 002ED2E0  7D 89 03 A6 */	mtctr r12
/* 802F03A4 002ED2E4  4E 80 04 21 */	bctrl 
/* 802F03A8 002ED2E8  48 00 00 F4 */	b lbl_802F049C
lbl_802F03AC:
/* 802F03AC 002ED2EC  7F E3 FB 78 */	mr r3, r31
/* 802F03B0 002ED2F0  38 80 00 00 */	li r4, 0
/* 802F03B4 002ED2F4  4B E2 42 A5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802F03B8 002ED2F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F03BC 002ED2FC  41 82 00 28 */	beq lbl_802F03E4
/* 802F03C0 002ED300  7F C3 F3 78 */	mr r3, r30
/* 802F03C4 002ED304  7F E4 FB 78 */	mr r4, r31
/* 802F03C8 002ED308  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F03CC 002ED30C  38 A0 00 08 */	li r5, 8
/* 802F03D0 002ED310  38 C0 00 00 */	li r6, 0
/* 802F03D4 002ED314  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F03D8 002ED318  7D 89 03 A6 */	mtctr r12
/* 802F03DC 002ED31C  4E 80 04 21 */	bctrl 
/* 802F03E0 002ED320  48 00 00 BC */	b lbl_802F049C
lbl_802F03E4:
/* 802F03E4 002ED324  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802F03E8 002ED328  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F03EC 002ED32C  C0 03 08 E4 */	lfs f0, 0x8e4(r3)
/* 802F03F0 002ED330  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F03F4 002ED334  40 81 00 58 */	ble lbl_802F044C
/* 802F03F8 002ED338  7F E3 FB 78 */	mr r3, r31
/* 802F03FC 002ED33C  48 00 15 D1 */	bl isDisappear__Q34Game7Sokkuri3ObjFv
/* 802F0400 002ED340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F0404 002ED344  41 82 00 18 */	beq lbl_802F041C
/* 802F0408 002ED348  38 00 00 04 */	li r0, 4
/* 802F040C 002ED34C  7F E3 FB 78 */	mr r3, r31
/* 802F0410 002ED350  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0414 002ED354  4B E1 4E 8D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F0418 002ED358  48 00 00 34 */	b lbl_802F044C
lbl_802F041C:
/* 802F041C 002ED35C  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F0420 002ED360  28 00 00 00 */	cmplwi r0, 0
/* 802F0424 002ED364  41 82 00 18 */	beq lbl_802F043C
/* 802F0428 002ED368  38 00 00 07 */	li r0, 7
/* 802F042C 002ED36C  7F E3 FB 78 */	mr r3, r31
/* 802F0430 002ED370  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0434 002ED374  4B E1 4E 6D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F0438 002ED378  48 00 00 14 */	b lbl_802F044C
lbl_802F043C:
/* 802F043C 002ED37C  38 00 00 06 */	li r0, 6
/* 802F0440 002ED380  7F E3 FB 78 */	mr r3, r31
/* 802F0444 002ED384  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0448 002ED388  4B E1 4E 59 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802F044C:
/* 802F044C 002ED38C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F0450 002ED390  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F0454 002ED394  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F0458 002ED398  EC 01 00 2A */	fadds f0, f1, f0
/* 802F045C 002ED39C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F0460 002ED3A0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802F0464 002ED3A4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802F0468 002ED3A8  28 00 00 00 */	cmplwi r0, 0
/* 802F046C 002ED3AC  41 82 00 30 */	beq lbl_802F049C
/* 802F0470 002ED3B0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F0474 002ED3B4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F0478 002ED3B8  40 82 00 24 */	bne lbl_802F049C
/* 802F047C 002ED3BC  7F C3 F3 78 */	mr r3, r30
/* 802F0480 002ED3C0  7F E4 FB 78 */	mr r4, r31
/* 802F0484 002ED3C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F0488 002ED3C8  38 C0 00 00 */	li r6, 0
/* 802F048C 002ED3CC  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802F0490 002ED3D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0494 002ED3D4  7D 89 03 A6 */	mtctr r12
/* 802F0498 002ED3D8  4E 80 04 21 */	bctrl 
lbl_802F049C:
/* 802F049C 002ED3DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F04A0 002ED3E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F04A4 002ED3E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F04A8 002ED3E8  7C 08 03 A6 */	mtlr r0
/* 802F04AC 002ED3EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F04B0 002ED3F0  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri9StateWaitFPQ24Game9EnemyBase:
/* 802F04B4 002ED3F4  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802F04B8 002ED3F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F04BC 002ED3FC  7C 08 02 A6 */	mflr r0
/* 802F04C0 002ED400  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F04C4 002ED404  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F04C8 002ED408  38 00 FF FF */	li r0, -1
/* 802F04CC 002ED40C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F04D0 002ED410  7C 9F 23 78 */	mr r31, r4
/* 802F04D4 002ED414  7F E3 FB 78 */	mr r3, r31
/* 802F04D8 002ED418  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F04DC 002ED41C  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802F04E0 002ED420  48 00 15 95 */	bl setNextMoveInfo__Q34Game7Sokkuri3ObjFv
/* 802F04E4 002ED424  7F E3 FB 78 */	mr r3, r31
/* 802F04E8 002ED428  38 80 00 00 */	li r4, 0
/* 802F04EC 002ED42C  38 A0 00 00 */	li r5, 0
/* 802F04F0 002ED430  4B E1 4B 15 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F04F4 002ED434  C0 22 ED 74 */	lfs f1, lbl_8051D0D4@sda21(r2)
/* 802F04F8 002ED438  7F E3 FB 78 */	mr r3, r31
/* 802F04FC 002ED43C  C0 42 ED 60 */	lfs f2, lbl_8051D0C0@sda21(r2)
/* 802F0500 002ED440  48 00 19 65 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802F0504 002ED444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0508 002ED448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F050C 002ED44C  7C 08 03 A6 */	mtlr r0
/* 802F0510 002ED450  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0514 002ED454  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBase:
/* 802F0518 002ED458  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F051C 002ED45C  7C 08 02 A6 */	mflr r0
/* 802F0520 002ED460  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F0524 002ED464  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F0528 002ED468  7C 9F 23 78 */	mr r31, r4
/* 802F052C 002ED46C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802F0530 002ED470  7C 7E 1B 78 */	mr r30, r3
/* 802F0534 002ED474  7F E3 FB 78 */	mr r3, r31
/* 802F0538 002ED478  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802F053C 002ED47C  48 00 17 19 */	bl updateMoveState__Q34Game7Sokkuri3ObjFv
/* 802F0540 002ED480  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802F0544 002ED484  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0548 002ED488  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F054C 002ED48C  4C 40 13 82 */	cror 2, 0, 2
/* 802F0550 002ED490  40 82 00 28 */	bne lbl_802F0578
/* 802F0554 002ED494  7F C3 F3 78 */	mr r3, r30
/* 802F0558 002ED498  7F E4 FB 78 */	mr r4, r31
/* 802F055C 002ED49C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F0560 002ED4A0  38 A0 00 00 */	li r5, 0
/* 802F0564 002ED4A4  38 C0 00 00 */	li r6, 0
/* 802F0568 002ED4A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F056C 002ED4AC  7D 89 03 A6 */	mtctr r12
/* 802F0570 002ED4B0  4E 80 04 21 */	bctrl 
/* 802F0574 002ED4B4  48 00 01 BC */	b lbl_802F0730
lbl_802F0578:
/* 802F0578 002ED4B8  7F E3 FB 78 */	mr r3, r31
/* 802F057C 002ED4BC  38 80 00 00 */	li r4, 0
/* 802F0580 002ED4C0  4B E2 40 D9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802F0584 002ED4C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F0588 002ED4C8  41 82 00 28 */	beq lbl_802F05B0
/* 802F058C 002ED4CC  7F C3 F3 78 */	mr r3, r30
/* 802F0590 002ED4D0  7F E4 FB 78 */	mr r4, r31
/* 802F0594 002ED4D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F0598 002ED4D8  38 A0 00 08 */	li r5, 8
/* 802F059C 002ED4DC  38 C0 00 00 */	li r6, 0
/* 802F05A0 002ED4E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F05A4 002ED4E4  7D 89 03 A6 */	mtctr r12
/* 802F05A8 002ED4E8  4E 80 04 21 */	bctrl 
/* 802F05AC 002ED4EC  48 00 01 84 */	b lbl_802F0730
lbl_802F05B0:
/* 802F05B0 002ED4F0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F05B4 002ED4F4  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F05B8 002ED4F8  C0 05 08 1C */	lfs f0, 0x81c(r5)
/* 802F05BC 002ED4FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F05C0 002ED500  40 81 00 C0 */	ble lbl_802F0680
/* 802F05C4 002ED504  7F E3 FB 78 */	mr r3, r31
/* 802F05C8 002ED508  48 00 14 05 */	bl isDisappear__Q34Game7Sokkuri3ObjFv
/* 802F05CC 002ED50C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F05D0 002ED510  41 82 00 18 */	beq lbl_802F05E8
/* 802F05D4 002ED514  38 00 00 04 */	li r0, 4
/* 802F05D8 002ED518  7F E3 FB 78 */	mr r3, r31
/* 802F05DC 002ED51C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F05E0 002ED520  4B E1 4C C1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F05E4 002ED524  48 00 00 FC */	b lbl_802F06E0
lbl_802F05E8:
/* 802F05E8 002ED528  83 BF 00 C0 */	lwz r29, 0xc0(r31)
/* 802F05EC 002ED52C  4B DD 8F B5 */	bl rand
/* 802F05F0 002ED530  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F05F4 002ED534  3C 00 43 30 */	lis r0, 0x4330
/* 802F05F8 002ED538  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802F05FC 002ED53C  C8 62 ED 80 */	lfd f3, lbl_8051D0E0@sda21(r2)
/* 802F0600 002ED540  90 01 00 18 */	stw r0, 0x18(r1)
/* 802F0604 002ED544  C0 42 ED 78 */	lfs f2, lbl_8051D0D8@sda21(r2)
/* 802F0608 002ED548  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802F060C 002ED54C  C0 22 ED 7C */	lfs f1, lbl_8051D0DC@sda21(r2)
/* 802F0610 002ED550  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F0614 002ED554  C0 1D 08 BC */	lfs f0, 0x8bc(r29)
/* 802F0618 002ED558  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F061C 002ED55C  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F0620 002ED560  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F0624 002ED564  40 80 00 18 */	bge lbl_802F063C
/* 802F0628 002ED568  38 00 00 05 */	li r0, 5
/* 802F062C 002ED56C  7F E3 FB 78 */	mr r3, r31
/* 802F0630 002ED570  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0634 002ED574  4B E1 4C 6D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F0638 002ED578  48 00 00 A8 */	b lbl_802F06E0
lbl_802F063C:
/* 802F063C 002ED57C  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F0640 002ED580  28 00 00 00 */	cmplwi r0, 0
/* 802F0644 002ED584  41 82 00 28 */	beq lbl_802F066C
/* 802F0648 002ED588  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F064C 002ED58C  38 00 00 07 */	li r0, 7
/* 802F0650 002ED590  7F E3 FB 78 */	mr r3, r31
/* 802F0654 002ED594  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F0658 002ED598  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F065C 002ED59C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F0660 002ED5A0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0664 002ED5A4  4B E1 4C 3D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F0668 002ED5A8  48 00 00 78 */	b lbl_802F06E0
lbl_802F066C:
/* 802F066C 002ED5AC  38 00 00 06 */	li r0, 6
/* 802F0670 002ED5B0  7F E3 FB 78 */	mr r3, r31
/* 802F0674 002ED5B4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0678 002ED5B8  4B E1 4C 29 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F067C 002ED5BC  48 00 00 64 */	b lbl_802F06E0
lbl_802F0680:
/* 802F0680 002ED5C0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F0684 002ED5C4  28 00 00 00 */	cmplwi r0, 0
/* 802F0688 002ED5C8  41 82 00 28 */	beq lbl_802F06B0
/* 802F068C 002ED5CC  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0690 002ED5D0  38 00 00 07 */	li r0, 7
/* 802F0694 002ED5D4  7F E3 FB 78 */	mr r3, r31
/* 802F0698 002ED5D8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F069C 002ED5DC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F06A0 002ED5E0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F06A4 002ED5E4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F06A8 002ED5E8  4B E1 4B F9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F06AC 002ED5EC  48 00 00 34 */	b lbl_802F06E0
lbl_802F06B0:
/* 802F06B0 002ED5F0  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 802F06B4 002ED5F4  7F E3 FB 78 */	mr r3, r31
/* 802F06B8 002ED5F8  C0 5F 02 D8 */	lfs f2, 0x2d8(r31)
/* 802F06BC 002ED5FC  38 81 00 08 */	addi r4, r1, 8
/* 802F06C0 002ED600  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 802F06C4 002ED604  D0 01 00 08 */	stfs f0, 8(r1)
/* 802F06C8 002ED608  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802F06CC 002ED60C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802F06D0 002ED610  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802F06D4 002ED614  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802F06D8 002ED618  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802F06DC 002ED61C  4B E2 4F 01 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
lbl_802F06E0:
/* 802F06E0 002ED620  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F06E4 002ED624  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F06E8 002ED628  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F06EC 002ED62C  EC 01 00 2A */	fadds f0, f1, f0
/* 802F06F0 002ED630  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F06F4 002ED634  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802F06F8 002ED638  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802F06FC 002ED63C  28 00 00 00 */	cmplwi r0, 0
/* 802F0700 002ED640  41 82 00 30 */	beq lbl_802F0730
/* 802F0704 002ED644  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F0708 002ED648  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F070C 002ED64C  40 82 00 24 */	bne lbl_802F0730
/* 802F0710 002ED650  7F C3 F3 78 */	mr r3, r30
/* 802F0714 002ED654  7F E4 FB 78 */	mr r4, r31
/* 802F0718 002ED658  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F071C 002ED65C  38 C0 00 00 */	li r6, 0
/* 802F0720 002ED660  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802F0724 002ED664  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0728 002ED668  7D 89 03 A6 */	mtctr r12
/* 802F072C 002ED66C  4E 80 04 21 */	bctrl 
lbl_802F0730:
/* 802F0730 002ED670  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F0734 002ED674  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F0738 002ED678  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802F073C 002ED67C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802F0740 002ED680  7C 08 03 A6 */	mtlr r0
/* 802F0744 002ED684  38 21 00 30 */	addi r1, r1, 0x30
/* 802F0748 002ED688  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri15StateMoveGroundFPQ24Game9EnemyBase:
/* 802F074C 002ED68C  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802F0750 002ED690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F0754 002ED694  7C 08 02 A6 */	mflr r0
/* 802F0758 002ED698  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F075C 002ED69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F0760 002ED6A0  38 00 FF FF */	li r0, -1
/* 802F0764 002ED6A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0768 002ED6A8  7C 9F 23 78 */	mr r31, r4
/* 802F076C 002ED6AC  7F E3 FB 78 */	mr r3, r31
/* 802F0770 002ED6B0  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F0774 002ED6B4  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802F0778 002ED6B8  48 00 12 FD */	bl setNextMoveInfo__Q34Game7Sokkuri3ObjFv
/* 802F077C 002ED6BC  7F E3 FB 78 */	mr r3, r31
/* 802F0780 002ED6C0  38 80 00 06 */	li r4, 6
/* 802F0784 002ED6C4  38 A0 00 00 */	li r5, 0
/* 802F0788 002ED6C8  4B E1 48 7D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F078C 002ED6CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0790 002ED6D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0794 002ED6D4  7C 08 03 A6 */	mtlr r0
/* 802F0798 002ED6D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802F079C 002ED6DC  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBase:
/* 802F07A0 002ED6E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F07A4 002ED6E4  7C 08 02 A6 */	mflr r0
/* 802F07A8 002ED6E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F07AC 002ED6EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F07B0 002ED6F0  7C 9F 23 78 */	mr r31, r4
/* 802F07B4 002ED6F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802F07B8 002ED6F8  7C 7E 1B 78 */	mr r30, r3
/* 802F07BC 002ED6FC  7F E3 FB 78 */	mr r3, r31
/* 802F07C0 002ED700  48 00 14 95 */	bl updateMoveState__Q34Game7Sokkuri3ObjFv
/* 802F07C4 002ED704  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802F07C8 002ED708  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F07CC 002ED70C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F07D0 002ED710  4C 40 13 82 */	cror 2, 0, 2
/* 802F07D4 002ED714  40 82 00 28 */	bne lbl_802F07FC
/* 802F07D8 002ED718  7F C3 F3 78 */	mr r3, r30
/* 802F07DC 002ED71C  7F E4 FB 78 */	mr r4, r31
/* 802F07E0 002ED720  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F07E4 002ED724  38 A0 00 00 */	li r5, 0
/* 802F07E8 002ED728  38 C0 00 00 */	li r6, 0
/* 802F07EC 002ED72C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F07F0 002ED730  7D 89 03 A6 */	mtctr r12
/* 802F07F4 002ED734  4E 80 04 21 */	bctrl 
/* 802F07F8 002ED738  48 00 01 68 */	b lbl_802F0960
lbl_802F07FC:
/* 802F07FC 002ED73C  7F E3 FB 78 */	mr r3, r31
/* 802F0800 002ED740  38 80 00 00 */	li r4, 0
/* 802F0804 002ED744  4B E2 3E 55 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802F0808 002ED748  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F080C 002ED74C  41 82 00 28 */	beq lbl_802F0834
/* 802F0810 002ED750  7F C3 F3 78 */	mr r3, r30
/* 802F0814 002ED754  7F E4 FB 78 */	mr r4, r31
/* 802F0818 002ED758  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F081C 002ED75C  38 A0 00 08 */	li r5, 8
/* 802F0820 002ED760  38 C0 00 00 */	li r6, 0
/* 802F0824 002ED764  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0828 002ED768  7D 89 03 A6 */	mtctr r12
/* 802F082C 002ED76C  4E 80 04 21 */	bctrl 
/* 802F0830 002ED770  48 00 01 30 */	b lbl_802F0960
lbl_802F0834:
/* 802F0834 002ED774  7F E3 FB 78 */	mr r3, r31
/* 802F0838 002ED778  48 00 11 95 */	bl isDisappear__Q34Game7Sokkuri3ObjFv
/* 802F083C 002ED77C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F0840 002ED780  41 82 00 18 */	beq lbl_802F0858
/* 802F0844 002ED784  38 00 00 04 */	li r0, 4
/* 802F0848 002ED788  7F E3 FB 78 */	mr r3, r31
/* 802F084C 002ED78C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0850 002ED790  4B E1 4A 51 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F0854 002ED794  48 00 00 BC */	b lbl_802F0910
lbl_802F0858:
/* 802F0858 002ED798  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F085C 002ED79C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F0860 002ED7A0  C0 05 08 1C */	lfs f0, 0x81c(r5)
/* 802F0864 002ED7A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F0868 002ED7A8  40 81 00 48 */	ble lbl_802F08B0
/* 802F086C 002ED7AC  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F0870 002ED7B0  28 00 00 00 */	cmplwi r0, 0
/* 802F0874 002ED7B4  41 82 00 18 */	beq lbl_802F088C
/* 802F0878 002ED7B8  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F087C 002ED7BC  7F E3 FB 78 */	mr r3, r31
/* 802F0880 002ED7C0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F0884 002ED7C4  48 00 11 F1 */	bl setNextMoveInfo__Q34Game7Sokkuri3ObjFv
/* 802F0888 002ED7C8  48 00 00 88 */	b lbl_802F0910
lbl_802F088C:
/* 802F088C 002ED7CC  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0890 002ED7D0  38 00 00 06 */	li r0, 6
/* 802F0894 002ED7D4  7F E3 FB 78 */	mr r3, r31
/* 802F0898 002ED7D8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F089C 002ED7DC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F08A0 002ED7E0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F08A4 002ED7E4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F08A8 002ED7E8  4B E1 49 F9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F08AC 002ED7EC  48 00 00 64 */	b lbl_802F0910
lbl_802F08B0:
/* 802F08B0 002ED7F0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F08B4 002ED7F4  28 00 00 00 */	cmplwi r0, 0
/* 802F08B8 002ED7F8  40 82 00 28 */	bne lbl_802F08E0
/* 802F08BC 002ED7FC  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F08C0 002ED800  38 00 00 06 */	li r0, 6
/* 802F08C4 002ED804  7F E3 FB 78 */	mr r3, r31
/* 802F08C8 002ED808  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F08CC 002ED80C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F08D0 002ED810  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F08D4 002ED814  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F08D8 002ED818  4B E1 49 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F08DC 002ED81C  48 00 00 34 */	b lbl_802F0910
lbl_802F08E0:
/* 802F08E0 002ED820  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 802F08E4 002ED824  7F E3 FB 78 */	mr r3, r31
/* 802F08E8 002ED828  C0 5F 02 D8 */	lfs f2, 0x2d8(r31)
/* 802F08EC 002ED82C  38 81 00 08 */	addi r4, r1, 8
/* 802F08F0 002ED830  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 802F08F4 002ED834  D0 01 00 08 */	stfs f0, 8(r1)
/* 802F08F8 002ED838  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802F08FC 002ED83C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802F0900 002ED840  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802F0904 002ED844  C0 45 09 5C */	lfs f2, 0x95c(r5)
/* 802F0908 002ED848  C0 65 09 84 */	lfs f3, 0x984(r5)
/* 802F090C 002ED84C  4B E2 4C D1 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
lbl_802F0910:
/* 802F0910 002ED850  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F0914 002ED854  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F0918 002ED858  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F091C 002ED85C  EC 01 00 2A */	fadds f0, f1, f0
/* 802F0920 002ED860  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F0924 002ED864  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802F0928 002ED868  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802F092C 002ED86C  28 00 00 00 */	cmplwi r0, 0
/* 802F0930 002ED870  41 82 00 30 */	beq lbl_802F0960
/* 802F0934 002ED874  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F0938 002ED878  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F093C 002ED87C  40 82 00 24 */	bne lbl_802F0960
/* 802F0940 002ED880  7F C3 F3 78 */	mr r3, r30
/* 802F0944 002ED884  7F E4 FB 78 */	mr r4, r31
/* 802F0948 002ED888  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F094C 002ED88C  38 C0 00 00 */	li r6, 0
/* 802F0950 002ED890  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802F0954 002ED894  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0958 002ED898  7D 89 03 A6 */	mtctr r12
/* 802F095C 002ED89C  4E 80 04 21 */	bctrl 
lbl_802F0960:
/* 802F0960 002ED8A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F0964 002ED8A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F0968 002ED8A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802F096C 002ED8AC  7C 08 03 A6 */	mtlr r0
/* 802F0970 002ED8B0  38 21 00 20 */	addi r1, r1, 0x20
/* 802F0974 002ED8B4  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri14StateMoveWaterFPQ24Game9EnemyBase:
/* 802F0978 002ED8B8  4E 80 00 20 */	blr 

.global init__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802F097C 002ED8BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F0980 002ED8C0  7C 08 02 A6 */	mflr r0
/* 802F0984 002ED8C4  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0988 002ED8C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F098C 002ED8CC  38 00 FF FF */	li r0, -1
/* 802F0990 002ED8D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F0994 002ED8D4  7C 9F 23 78 */	mr r31, r4
/* 802F0998 002ED8D8  7F E3 FB 78 */	mr r3, r31
/* 802F099C 002ED8DC  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802F09A0 002ED8E0  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802F09A4 002ED8E4  48 00 14 1D */	bl resetMoveVelocity__Q34Game7Sokkuri3ObjFv
/* 802F09A8 002ED8E8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F09AC 002ED8EC  7F E3 FB 78 */	mr r3, r31
/* 802F09B0 002ED8F0  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F09B4 002ED8F4  38 80 00 07 */	li r4, 7
/* 802F09B8 002ED8F8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802F09BC 002ED8FC  38 A0 00 00 */	li r5, 0
/* 802F09C0 002ED900  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F09C4 002ED904  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802F09C8 002ED908  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802F09CC 002ED90C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802F09D0 002ED910  4B E1 46 35 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802F09D4 002ED914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F09D8 002ED918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F09DC 002ED91C  7C 08 03 A6 */	mtlr r0
/* 802F09E0 002ED920  38 21 00 10 */	addi r1, r1, 0x10
/* 802F09E4 002ED924  4E 80 00 20 */	blr 

.global exec__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBase
exec__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBase:
/* 802F09E8 002ED928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F09EC 002ED92C  7C 08 02 A6 */	mflr r0
/* 802F09F0 002ED930  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F09F4 002ED934  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F09F8 002ED938  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F09FC 002ED93C  7C 9F 23 78 */	mr r31, r4
/* 802F0A00 002ED940  93 C1 00 08 */	stw r30, 8(r1)
/* 802F0A04 002ED944  7C 7E 1B 78 */	mr r30, r3
/* 802F0A08 002ED948  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802F0A0C 002ED94C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F0A10 002ED950  4C 40 13 82 */	cror 2, 0, 2
/* 802F0A14 002ED954  40 82 00 20 */	bne lbl_802F0A34
/* 802F0A18 002ED958  81 83 00 00 */	lwz r12, 0(r3)
/* 802F0A1C 002ED95C  38 A0 00 00 */	li r5, 0
/* 802F0A20 002ED960  38 C0 00 00 */	li r6, 0
/* 802F0A24 002ED964  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0A28 002ED968  7D 89 03 A6 */	mtctr r12
/* 802F0A2C 002ED96C  4E 80 04 21 */	bctrl 
/* 802F0A30 002ED970  48 00 01 38 */	b lbl_802F0B68
lbl_802F0A34:
/* 802F0A34 002ED974  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802F0A38 002ED978  28 00 00 00 */	cmplwi r0, 0
/* 802F0A3C 002ED97C  41 82 00 18 */	beq lbl_802F0A54
/* 802F0A40 002ED980  38 00 00 07 */	li r0, 7
/* 802F0A44 002ED984  7F E3 FB 78 */	mr r3, r31
/* 802F0A48 002ED988  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0A4C 002ED98C  4B E1 48 55 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802F0A50 002ED990  48 00 00 14 */	b lbl_802F0A64
lbl_802F0A54:
/* 802F0A54 002ED994  38 00 00 06 */	li r0, 6
/* 802F0A58 002ED998  7F E3 FB 78 */	mr r3, r31
/* 802F0A5C 002ED99C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802F0A60 002ED9A0  4B E1 48 41 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802F0A64:
/* 802F0A64 002ED9A4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F0A68 002ED9A8  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802F0A6C 002ED9AC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F0A70 002ED9B0  EC 01 00 2A */	fadds f0, f1, f0
/* 802F0A74 002ED9B4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802F0A78 002ED9B8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802F0A7C 002ED9BC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802F0A80 002ED9C0  28 00 00 00 */	cmplwi r0, 0
/* 802F0A84 002ED9C4  41 82 00 E4 */	beq lbl_802F0B68
/* 802F0A88 002ED9C8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802F0A8C 002ED9CC  28 00 00 02 */	cmplwi r0, 2
/* 802F0A90 002ED9D0  40 82 00 24 */	bne lbl_802F0AB4
/* 802F0A94 002ED9D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F0A98 002ED9D8  7F E3 FB 78 */	mr r3, r31
/* 802F0A9C 002ED9DC  C0 22 ED 88 */	lfs f1, lbl_8051D0E8@sda21(r2)
/* 802F0AA0 002ED9E0  64 00 00 20 */	oris r0, r0, 0x20
/* 802F0AA4 002ED9E4  C0 42 ED 68 */	lfs f2, lbl_8051D0C8@sda21(r2)
/* 802F0AA8 002ED9E8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F0AAC 002ED9EC  48 00 13 B9 */	bl createDownEffect__Q34Game7Sokkuri3ObjFff
/* 802F0AB0 002ED9F0  48 00 00 B8 */	b lbl_802F0B68
lbl_802F0AB4:
/* 802F0AB4 002ED9F4  28 00 00 03 */	cmplwi r0, 3
/* 802F0AB8 002ED9F8  40 82 00 70 */	bne lbl_802F0B28
/* 802F0ABC 002ED9FC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F0AC0 002EDA00  7F E3 FB 78 */	mr r3, r31
/* 802F0AC4 002EDA04  C0 82 ED 8C */	lfs f4, lbl_8051D0EC@sda21(r2)
/* 802F0AC8 002EDA08  38 80 00 00 */	li r4, 0
/* 802F0ACC 002EDA0C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802F0AD0 002EDA10  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F0AD4 002EDA14  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F0AD8 002EDA18  4B E2 2C B9 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802F0ADC 002EDA1C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F0AE0 002EDA20  7F E3 FB 78 */	mr r3, r31
/* 802F0AE4 002EDA24  C0 82 ED 8C */	lfs f4, lbl_8051D0EC@sda21(r2)
/* 802F0AE8 002EDA28  38 80 00 00 */	li r4, 0
/* 802F0AEC 002EDA2C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802F0AF0 002EDA30  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F0AF4 002EDA34  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F0AF8 002EDA38  4B E2 29 DD */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F0AFC 002EDA3C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802F0B00 002EDA40  7F E3 FB 78 */	mr r3, r31
/* 802F0B04 002EDA44  C0 82 ED 8C */	lfs f4, lbl_8051D0EC@sda21(r2)
/* 802F0B08 002EDA48  38 80 00 00 */	li r4, 0
/* 802F0B0C 002EDA4C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802F0B10 002EDA50  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802F0B14 002EDA54  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802F0B18 002EDA58  4B E2 26 05 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802F0B1C 002EDA5C  C0 02 ED 60 */	lfs f0, lbl_8051D0C0@sda21(r2)
/* 802F0B20 002EDA60  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802F0B24 002EDA64  48 00 00 44 */	b lbl_802F0B68
lbl_802F0B28:
/* 802F0B28 002EDA68  28 00 00 04 */	cmplwi r0, 4
/* 802F0B2C 002EDA6C  40 82 00 14 */	bne lbl_802F0B40
/* 802F0B30 002EDA70  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802F0B34 002EDA74  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802F0B38 002EDA78  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802F0B3C 002EDA7C  48 00 00 2C */	b lbl_802F0B68
lbl_802F0B40:
/* 802F0B40 002EDA80  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802F0B44 002EDA84  40 82 00 24 */	bne lbl_802F0B68
/* 802F0B48 002EDA88  7F C3 F3 78 */	mr r3, r30
/* 802F0B4C 002EDA8C  7F E4 FB 78 */	mr r4, r31
/* 802F0B50 002EDA90  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F0B54 002EDA94  38 C0 00 00 */	li r6, 0
/* 802F0B58 002EDA98  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802F0B5C 002EDA9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F0B60 002EDAA0  7D 89 03 A6 */	mtctr r12
/* 802F0B64 002EDAA4  4E 80 04 21 */	bctrl 
lbl_802F0B68:
/* 802F0B68 002EDAA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F0B6C 002EDAAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F0B70 002EDAB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F0B74 002EDAB4  7C 08 03 A6 */	mtlr r0
/* 802F0B78 002EDAB8  38 21 00 10 */	addi r1, r1, 0x10
/* 802F0B7C 002EDABC  4E 80 00 20 */	blr 

.global cleanup__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBase
cleanup__Q34Game7Sokkuri10StateFlickFPQ24Game9EnemyBase:
/* 802F0B80 002EDAC0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802F0B84 002EDAC4  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802F0B88 002EDAC8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802F0B8C 002EDACC  4E 80 00 20 */	blr 
