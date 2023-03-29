.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048A8B0, local
	.asciz "246-ImomushiState"
.endobj lbl_8048A8B0
.balign 4
.obj lbl_8048A8C4, local
	.asciz "falldive"
.endobj lbl_8048A8C4
.balign 4
.obj lbl_8048A8D0, local
	.asciz "fallmove"
.endobj lbl_8048A8D0
.balign 4
.obj lbl_8048A8DC, local
	.asciz "zukanstay"
.endobj lbl_8048A8DC
.balign 4
.obj lbl_8048A8E8, local
	.asciz "zukanappear"
.endobj lbl_8048A8E8
.balign 4
.obj lbl_8048A8F4, local
	.asciz "zukanmove"
.endobj lbl_8048A8F4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game8Imomushi14StateZukanMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi14StateZukanMove
.obj __vt__Q34Game8Imomushi16StateZukanAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi16StateZukanAppear
.obj __vt__Q34Game8Imomushi14StateZukanStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi14StateZukanStay
.obj __vt__Q34Game8Imomushi9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi9StateWait
.obj __vt__Q34Game8Imomushi11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi11StateAttack
.obj __vt__Q34Game8Imomushi10StateClimb, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi10StateClimb
.obj __vt__Q34Game8Imomushi11StateGoHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi11StateGoHome
.obj __vt__Q34Game8Imomushi9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi9StateMove
.obj __vt__Q34Game8Imomushi9StateDive, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi9StateDive
.obj __vt__Q34Game8Imomushi11StateAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi11StateAppear
.obj __vt__Q34Game8Imomushi9StateStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi9StateStay
.obj __vt__Q34Game8Imomushi13StateFallMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi13StateFallMove
.obj __vt__Q34Game8Imomushi13StateFallDive, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi13StateFallDive
.obj __vt__Q34Game8Imomushi9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi9StateDead
.obj __vt__Q34Game8Imomushi5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game8Imomushi5State
.obj __vt__Q34Game8Imomushi3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game8Imomushi3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game8Imomushi3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051C330, local
	.asciz "dead"
.endobj lbl_8051C330
.balign 4
.obj lbl_8051C338, local
	.asciz "stay"
.endobj lbl_8051C338
.balign 4
.obj lbl_8051C340, local
	.asciz "appear"
.endobj lbl_8051C340
.balign 4
.obj lbl_8051C348, local
	.asciz "dive"
.endobj lbl_8051C348
.balign 4
.obj lbl_8051C350, local
	.asciz "move"
.endobj lbl_8051C350
.balign 4
.obj lbl_8051C358, local
	.asciz "gohome"
.endobj lbl_8051C358
.balign 4
.obj lbl_8051C360, local
	.asciz "climb"
.endobj lbl_8051C360
.balign 4
.obj lbl_8051C368, local
	.asciz "attack"
.endobj lbl_8051C368
.balign 4
.obj lbl_8051C370, local
	.asciz "wait"
.endobj lbl_8051C370
.balign 4
.obj lbl_8051C378, local
	.float 0.0
.endobj lbl_8051C378
.obj lbl_8051C37C, local
	.float 25.0
.endobj lbl_8051C37C
.obj lbl_8051C380, local
	.float 6.0
.endobj lbl_8051C380
.obj lbl_8051C384, local
	.float 900.0
.endobj lbl_8051C384
.obj lbl_8051C388, local
	.float 325.9493
.endobj lbl_8051C388
.obj lbl_8051C38C, local
	.float -325.9493
.endobj lbl_8051C38C
.obj lbl_8051C390, local
	.float 0.01
.endobj lbl_8051C390
.obj lbl_8051C394, local
	.float 1.0
.endobj lbl_8051C394
.obj lbl_8051C398, local
	.float 5.0
.endobj lbl_8051C398

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game8Imomushi3FSMFPQ24Game9EnemyBase, global
/* 802BA0D8 002B7018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA0DC 002B701C  7C 08 02 A6 */	mflr r0
/* 802BA0E0 002B7020  3C 80 80 49 */	lis r4, lbl_8048A8B0@ha
/* 802BA0E4 002B7024  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA0E8 002B7028  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BA0EC 002B702C  7C 7F 1B 78 */	mr r31, r3
/* 802BA0F0 002B7030  93 C1 00 08 */	stw r30, 8(r1)
/* 802BA0F4 002B7034  3B C4 A8 B0 */	addi r30, r4, lbl_8048A8B0@l
/* 802BA0F8 002B7038  38 80 00 0E */	li r4, 0xe
/* 802BA0FC 002B703C  4B E7 67 69 */	bl create__Q24Game17EnemyStateMachineFi
/* 802BA100 002B7040  38 60 00 10 */	li r3, 0x10
/* 802BA104 002B7044  4B D6 9D A1 */	bl __nw__FUl
/* 802BA108 002B7048  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA10C 002B704C  41 82 00 3C */	beq .L_802BA148
/* 802BA110 002B7050  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA114 002B7054  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA118 002B7058  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA11C 002B705C  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi9StateDead@ha
/* 802BA120 002B7060  90 04 00 00 */	stw r0, 0(r4)
/* 802BA124 002B7064  38 E0 00 00 */	li r7, 0
/* 802BA128 002B7068  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA12C 002B706C  38 A2 DF D0 */	addi r5, r2, lbl_8051C330@sda21
/* 802BA130 002B7070  90 E4 00 04 */	stw r7, 4(r4)
/* 802BA134 002B7074  38 03 07 74 */	addi r0, r3, __vt__Q34Game8Imomushi9StateDead@l
/* 802BA138 002B7078  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA13C 002B707C  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA140 002B7080  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA144 002B7084  90 04 00 00 */	stw r0, 0(r4)
.L_802BA148:
/* 802BA148 002B7088  7F E3 FB 78 */	mr r3, r31
/* 802BA14C 002B708C  4B E7 67 BD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA150 002B7090  38 60 00 10 */	li r3, 0x10
/* 802BA154 002B7094  4B D6 9D 51 */	bl __nw__FUl
/* 802BA158 002B7098  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA15C 002B709C  41 82 00 40 */	beq .L_802BA19C
/* 802BA160 002B70A0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA164 002B70A4  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA168 002B70A8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA16C 002B70AC  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi13StateFallDive@ha
/* 802BA170 002B70B0  90 04 00 00 */	stw r0, 0(r4)
/* 802BA174 002B70B4  38 00 00 02 */	li r0, 2
/* 802BA178 002B70B8  38 E0 00 00 */	li r7, 0
/* 802BA17C 002B70BC  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA180 002B70C0  90 04 00 04 */	stw r0, 4(r4)
/* 802BA184 002B70C4  38 BE 00 14 */	addi r5, r30, 0x14
/* 802BA188 002B70C8  38 03 07 50 */	addi r0, r3, __vt__Q34Game8Imomushi13StateFallDive@l
/* 802BA18C 002B70CC  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA190 002B70D0  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA194 002B70D4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA198 002B70D8  90 04 00 00 */	stw r0, 0(r4)
.L_802BA19C:
/* 802BA19C 002B70DC  7F E3 FB 78 */	mr r3, r31
/* 802BA1A0 002B70E0  4B E7 67 69 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA1A4 002B70E4  38 60 00 10 */	li r3, 0x10
/* 802BA1A8 002B70E8  4B D6 9C FD */	bl __nw__FUl
/* 802BA1AC 002B70EC  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA1B0 002B70F0  41 82 00 40 */	beq .L_802BA1F0
/* 802BA1B4 002B70F4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA1B8 002B70F8  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA1BC 002B70FC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA1C0 002B7100  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi13StateFallMove@ha
/* 802BA1C4 002B7104  90 04 00 00 */	stw r0, 0(r4)
/* 802BA1C8 002B7108  38 00 00 03 */	li r0, 3
/* 802BA1CC 002B710C  38 E0 00 00 */	li r7, 0
/* 802BA1D0 002B7110  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA1D4 002B7114  90 04 00 04 */	stw r0, 4(r4)
/* 802BA1D8 002B7118  38 BE 00 20 */	addi r5, r30, 0x20
/* 802BA1DC 002B711C  38 03 07 2C */	addi r0, r3, __vt__Q34Game8Imomushi13StateFallMove@l
/* 802BA1E0 002B7120  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA1E4 002B7124  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA1E8 002B7128  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA1EC 002B712C  90 04 00 00 */	stw r0, 0(r4)
.L_802BA1F0:
/* 802BA1F0 002B7130  7F E3 FB 78 */	mr r3, r31
/* 802BA1F4 002B7134  4B E7 67 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA1F8 002B7138  38 60 00 10 */	li r3, 0x10
/* 802BA1FC 002B713C  4B D6 9C A9 */	bl __nw__FUl
/* 802BA200 002B7140  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA204 002B7144  41 82 00 40 */	beq .L_802BA244
/* 802BA208 002B7148  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA20C 002B714C  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA210 002B7150  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA214 002B7154  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi9StateStay@ha
/* 802BA218 002B7158  90 04 00 00 */	stw r0, 0(r4)
/* 802BA21C 002B715C  38 00 00 04 */	li r0, 4
/* 802BA220 002B7160  38 E0 00 00 */	li r7, 0
/* 802BA224 002B7164  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA228 002B7168  90 04 00 04 */	stw r0, 4(r4)
/* 802BA22C 002B716C  38 A2 DF D8 */	addi r5, r2, lbl_8051C338@sda21
/* 802BA230 002B7170  38 03 07 08 */	addi r0, r3, __vt__Q34Game8Imomushi9StateStay@l
/* 802BA234 002B7174  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA238 002B7178  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA23C 002B717C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA240 002B7180  90 04 00 00 */	stw r0, 0(r4)
.L_802BA244:
/* 802BA244 002B7184  7F E3 FB 78 */	mr r3, r31
/* 802BA248 002B7188  4B E7 66 C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA24C 002B718C  38 60 00 10 */	li r3, 0x10
/* 802BA250 002B7190  4B D6 9C 55 */	bl __nw__FUl
/* 802BA254 002B7194  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA258 002B7198  41 82 00 40 */	beq .L_802BA298
/* 802BA25C 002B719C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA260 002B71A0  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA264 002B71A4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA268 002B71A8  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi11StateAppear@ha
/* 802BA26C 002B71AC  90 04 00 00 */	stw r0, 0(r4)
/* 802BA270 002B71B0  38 00 00 05 */	li r0, 5
/* 802BA274 002B71B4  38 E0 00 00 */	li r7, 0
/* 802BA278 002B71B8  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA27C 002B71BC  90 04 00 04 */	stw r0, 4(r4)
/* 802BA280 002B71C0  38 A2 DF E0 */	addi r5, r2, lbl_8051C340@sda21
/* 802BA284 002B71C4  38 03 06 E4 */	addi r0, r3, __vt__Q34Game8Imomushi11StateAppear@l
/* 802BA288 002B71C8  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA28C 002B71CC  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA290 002B71D0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA294 002B71D4  90 04 00 00 */	stw r0, 0(r4)
.L_802BA298:
/* 802BA298 002B71D8  7F E3 FB 78 */	mr r3, r31
/* 802BA29C 002B71DC  4B E7 66 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA2A0 002B71E0  38 60 00 10 */	li r3, 0x10
/* 802BA2A4 002B71E4  4B D6 9C 01 */	bl __nw__FUl
/* 802BA2A8 002B71E8  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA2AC 002B71EC  41 82 00 40 */	beq .L_802BA2EC
/* 802BA2B0 002B71F0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA2B4 002B71F4  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA2B8 002B71F8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA2BC 002B71FC  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi9StateDive@ha
/* 802BA2C0 002B7200  90 04 00 00 */	stw r0, 0(r4)
/* 802BA2C4 002B7204  38 00 00 06 */	li r0, 6
/* 802BA2C8 002B7208  38 E0 00 00 */	li r7, 0
/* 802BA2CC 002B720C  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA2D0 002B7210  90 04 00 04 */	stw r0, 4(r4)
/* 802BA2D4 002B7214  38 A2 DF E8 */	addi r5, r2, lbl_8051C348@sda21
/* 802BA2D8 002B7218  38 03 06 C0 */	addi r0, r3, __vt__Q34Game8Imomushi9StateDive@l
/* 802BA2DC 002B721C  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA2E0 002B7220  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA2E4 002B7224  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA2E8 002B7228  90 04 00 00 */	stw r0, 0(r4)
.L_802BA2EC:
/* 802BA2EC 002B722C  7F E3 FB 78 */	mr r3, r31
/* 802BA2F0 002B7230  4B E7 66 19 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA2F4 002B7234  38 60 00 10 */	li r3, 0x10
/* 802BA2F8 002B7238  4B D6 9B AD */	bl __nw__FUl
/* 802BA2FC 002B723C  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA300 002B7240  41 82 00 40 */	beq .L_802BA340
/* 802BA304 002B7244  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA308 002B7248  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA30C 002B724C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA310 002B7250  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi9StateMove@ha
/* 802BA314 002B7254  90 04 00 00 */	stw r0, 0(r4)
/* 802BA318 002B7258  38 00 00 07 */	li r0, 7
/* 802BA31C 002B725C  38 E0 00 00 */	li r7, 0
/* 802BA320 002B7260  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA324 002B7264  90 04 00 04 */	stw r0, 4(r4)
/* 802BA328 002B7268  38 A2 DF F0 */	addi r5, r2, lbl_8051C350@sda21
/* 802BA32C 002B726C  38 03 06 9C */	addi r0, r3, __vt__Q34Game8Imomushi9StateMove@l
/* 802BA330 002B7270  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA334 002B7274  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA338 002B7278  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA33C 002B727C  90 04 00 00 */	stw r0, 0(r4)
.L_802BA340:
/* 802BA340 002B7280  7F E3 FB 78 */	mr r3, r31
/* 802BA344 002B7284  4B E7 65 C5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA348 002B7288  38 60 00 10 */	li r3, 0x10
/* 802BA34C 002B728C  4B D6 9B 59 */	bl __nw__FUl
/* 802BA350 002B7290  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA354 002B7294  41 82 00 40 */	beq .L_802BA394
/* 802BA358 002B7298  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA35C 002B729C  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA360 002B72A0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA364 002B72A4  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi11StateGoHome@ha
/* 802BA368 002B72A8  90 04 00 00 */	stw r0, 0(r4)
/* 802BA36C 002B72AC  38 00 00 08 */	li r0, 8
/* 802BA370 002B72B0  38 E0 00 00 */	li r7, 0
/* 802BA374 002B72B4  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA378 002B72B8  90 04 00 04 */	stw r0, 4(r4)
/* 802BA37C 002B72BC  38 A2 DF F8 */	addi r5, r2, lbl_8051C358@sda21
/* 802BA380 002B72C0  38 03 06 78 */	addi r0, r3, __vt__Q34Game8Imomushi11StateGoHome@l
/* 802BA384 002B72C4  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA388 002B72C8  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA38C 002B72CC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA390 002B72D0  90 04 00 00 */	stw r0, 0(r4)
.L_802BA394:
/* 802BA394 002B72D4  7F E3 FB 78 */	mr r3, r31
/* 802BA398 002B72D8  4B E7 65 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA39C 002B72DC  38 60 00 10 */	li r3, 0x10
/* 802BA3A0 002B72E0  4B D6 9B 05 */	bl __nw__FUl
/* 802BA3A4 002B72E4  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA3A8 002B72E8  41 82 00 40 */	beq .L_802BA3E8
/* 802BA3AC 002B72EC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA3B0 002B72F0  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA3B4 002B72F4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA3B8 002B72F8  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi10StateClimb@ha
/* 802BA3BC 002B72FC  90 04 00 00 */	stw r0, 0(r4)
/* 802BA3C0 002B7300  38 00 00 0A */	li r0, 0xa
/* 802BA3C4 002B7304  38 E0 00 00 */	li r7, 0
/* 802BA3C8 002B7308  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA3CC 002B730C  90 04 00 04 */	stw r0, 4(r4)
/* 802BA3D0 002B7310  38 A2 E0 00 */	addi r5, r2, lbl_8051C360@sda21
/* 802BA3D4 002B7314  38 03 06 54 */	addi r0, r3, __vt__Q34Game8Imomushi10StateClimb@l
/* 802BA3D8 002B7318  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA3DC 002B731C  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA3E0 002B7320  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA3E4 002B7324  90 04 00 00 */	stw r0, 0(r4)
.L_802BA3E8:
/* 802BA3E8 002B7328  7F E3 FB 78 */	mr r3, r31
/* 802BA3EC 002B732C  4B E7 65 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA3F0 002B7330  38 60 00 10 */	li r3, 0x10
/* 802BA3F4 002B7334  4B D6 9A B1 */	bl __nw__FUl
/* 802BA3F8 002B7338  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA3FC 002B733C  41 82 00 40 */	beq .L_802BA43C
/* 802BA400 002B7340  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA404 002B7344  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA408 002B7348  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA40C 002B734C  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi11StateAttack@ha
/* 802BA410 002B7350  90 04 00 00 */	stw r0, 0(r4)
/* 802BA414 002B7354  38 00 00 09 */	li r0, 9
/* 802BA418 002B7358  38 E0 00 00 */	li r7, 0
/* 802BA41C 002B735C  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA420 002B7360  90 04 00 04 */	stw r0, 4(r4)
/* 802BA424 002B7364  38 A2 E0 08 */	addi r5, r2, lbl_8051C368@sda21
/* 802BA428 002B7368  38 03 06 30 */	addi r0, r3, __vt__Q34Game8Imomushi11StateAttack@l
/* 802BA42C 002B736C  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA430 002B7370  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA434 002B7374  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA438 002B7378  90 04 00 00 */	stw r0, 0(r4)
.L_802BA43C:
/* 802BA43C 002B737C  7F E3 FB 78 */	mr r3, r31
/* 802BA440 002B7380  4B E7 64 C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA444 002B7384  38 60 00 10 */	li r3, 0x10
/* 802BA448 002B7388  4B D6 9A 5D */	bl __nw__FUl
/* 802BA44C 002B738C  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA450 002B7390  41 82 00 40 */	beq .L_802BA490
/* 802BA454 002B7394  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA458 002B7398  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA45C 002B739C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA460 002B73A0  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi9StateWait@ha
/* 802BA464 002B73A4  90 04 00 00 */	stw r0, 0(r4)
/* 802BA468 002B73A8  38 00 00 01 */	li r0, 1
/* 802BA46C 002B73AC  38 E0 00 00 */	li r7, 0
/* 802BA470 002B73B0  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA474 002B73B4  90 04 00 04 */	stw r0, 4(r4)
/* 802BA478 002B73B8  38 A2 E0 10 */	addi r5, r2, lbl_8051C370@sda21
/* 802BA47C 002B73BC  38 03 06 0C */	addi r0, r3, __vt__Q34Game8Imomushi9StateWait@l
/* 802BA480 002B73C0  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA484 002B73C4  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA488 002B73C8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA48C 002B73CC  90 04 00 00 */	stw r0, 0(r4)
.L_802BA490:
/* 802BA490 002B73D0  7F E3 FB 78 */	mr r3, r31
/* 802BA494 002B73D4  4B E7 64 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA498 002B73D8  38 60 00 10 */	li r3, 0x10
/* 802BA49C 002B73DC  4B D6 9A 09 */	bl __nw__FUl
/* 802BA4A0 002B73E0  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA4A4 002B73E4  41 82 00 40 */	beq .L_802BA4E4
/* 802BA4A8 002B73E8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA4AC 002B73EC  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA4B0 002B73F0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA4B4 002B73F4  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi14StateZukanStay@ha
/* 802BA4B8 002B73F8  90 04 00 00 */	stw r0, 0(r4)
/* 802BA4BC 002B73FC  38 00 00 0B */	li r0, 0xb
/* 802BA4C0 002B7400  38 E0 00 00 */	li r7, 0
/* 802BA4C4 002B7404  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA4C8 002B7408  90 04 00 04 */	stw r0, 4(r4)
/* 802BA4CC 002B740C  38 BE 00 2C */	addi r5, r30, 0x2c
/* 802BA4D0 002B7410  38 03 05 E8 */	addi r0, r3, __vt__Q34Game8Imomushi14StateZukanStay@l
/* 802BA4D4 002B7414  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA4D8 002B7418  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA4DC 002B741C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA4E0 002B7420  90 04 00 00 */	stw r0, 0(r4)
.L_802BA4E4:
/* 802BA4E4 002B7424  7F E3 FB 78 */	mr r3, r31
/* 802BA4E8 002B7428  4B E7 64 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA4EC 002B742C  38 60 00 10 */	li r3, 0x10
/* 802BA4F0 002B7430  4B D6 99 B5 */	bl __nw__FUl
/* 802BA4F4 002B7434  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA4F8 002B7438  41 82 00 40 */	beq .L_802BA538
/* 802BA4FC 002B743C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA500 002B7440  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA504 002B7444  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA508 002B7448  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi16StateZukanAppear@ha
/* 802BA50C 002B744C  90 04 00 00 */	stw r0, 0(r4)
/* 802BA510 002B7450  38 00 00 0C */	li r0, 0xc
/* 802BA514 002B7454  38 E0 00 00 */	li r7, 0
/* 802BA518 002B7458  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA51C 002B745C  90 04 00 04 */	stw r0, 4(r4)
/* 802BA520 002B7460  38 BE 00 38 */	addi r5, r30, 0x38
/* 802BA524 002B7464  38 03 05 C4 */	addi r0, r3, __vt__Q34Game8Imomushi16StateZukanAppear@l
/* 802BA528 002B7468  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA52C 002B746C  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA530 002B7470  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA534 002B7474  90 04 00 00 */	stw r0, 0(r4)
.L_802BA538:
/* 802BA538 002B7478  7F E3 FB 78 */	mr r3, r31
/* 802BA53C 002B747C  4B E7 63 CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA540 002B7480  38 60 00 10 */	li r3, 0x10
/* 802BA544 002B7484  4B D6 99 61 */	bl __nw__FUl
/* 802BA548 002B7488  7C 64 1B 79 */	or. r4, r3, r3
/* 802BA54C 002B748C  41 82 00 40 */	beq .L_802BA58C
/* 802BA550 002B7490  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BA554 002B7494  3C A0 80 4D */	lis r5, __vt__Q34Game8Imomushi5State@ha
/* 802BA558 002B7498  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BA55C 002B749C  3C 60 80 4D */	lis r3, __vt__Q34Game8Imomushi14StateZukanMove@ha
/* 802BA560 002B74A0  90 04 00 00 */	stw r0, 0(r4)
/* 802BA564 002B74A4  38 00 00 0D */	li r0, 0xd
/* 802BA568 002B74A8  38 E0 00 00 */	li r7, 0
/* 802BA56C 002B74AC  38 C5 07 98 */	addi r6, r5, __vt__Q34Game8Imomushi5State@l
/* 802BA570 002B74B0  90 04 00 04 */	stw r0, 4(r4)
/* 802BA574 002B74B4  38 BE 00 44 */	addi r5, r30, 0x44
/* 802BA578 002B74B8  38 03 05 A0 */	addi r0, r3, __vt__Q34Game8Imomushi14StateZukanMove@l
/* 802BA57C 002B74BC  90 E4 00 08 */	stw r7, 8(r4)
/* 802BA580 002B74C0  90 C4 00 00 */	stw r6, 0(r4)
/* 802BA584 002B74C4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BA588 002B74C8  90 04 00 00 */	stw r0, 0(r4)
.L_802BA58C:
/* 802BA58C 002B74CC  7F E3 FB 78 */	mr r3, r31
/* 802BA590 002B74D0  4B E7 63 79 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BA594 002B74D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA598 002B74D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BA59C 002B74DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BA5A0 002B74E0  7C 08 03 A6 */	mtlr r0
/* 802BA5A4 002B74E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA5A8 002B74E8  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi3FSMFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BA5AC 002B74EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA5B0 002B74F0  7C 08 02 A6 */	mflr r0
/* 802BA5B4 002B74F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA5B8 002B74F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BA5BC 002B74FC  7C 9F 23 78 */	mr r31, r4
/* 802BA5C0 002B7500  7F E3 FB 78 */	mr r3, r31
/* 802BA5C4 002B7504  4B E4 B1 5D */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802BA5C8 002B7508  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA5CC 002B750C  7F E3 FB 78 */	mr r3, r31
/* 802BA5D0 002B7510  38 80 00 00 */	li r4, 0
/* 802BA5D4 002B7514  38 A0 00 00 */	li r5, 0
/* 802BA5D8 002B7518  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BA5DC 002B751C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BA5E0 002B7520  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BA5E4 002B7524  4B E4 AA 21 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BA5E8 002B7528  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA5EC 002B752C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BA5F0 002B7530  7C 08 03 A6 */	mtlr r0
/* 802BA5F4 002B7534  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA5F8 002B7538  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBase, global
/* 802BA5FC 002B753C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA600 002B7540  7C 08 02 A6 */	mflr r0
/* 802BA604 002B7544  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA608 002B7548  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802BA60C 002B754C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BA610 002B7550  28 00 00 00 */	cmplwi r0, 0
/* 802BA614 002B7554  41 82 00 1C */	beq .L_802BA630
/* 802BA618 002B7558  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BA61C 002B755C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BA620 002B7560  40 82 00 10 */	bne .L_802BA630
/* 802BA624 002B7564  7C 83 23 78 */	mr r3, r4
/* 802BA628 002B7568  38 80 00 00 */	li r4, 0
/* 802BA62C 002B756C  4B E8 0A C5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_802BA630:
/* 802BA630 002B7570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA634 002B7574  7C 08 03 A6 */	mtlr r0
/* 802BA638 002B7578  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA63C 002B757C  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBase, global
/* 802BA640 002B7580  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BA644 002B7584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA648 002B7588  7C 08 02 A6 */	mflr r0
/* 802BA64C 002B758C  38 A0 FF FF */	li r5, -1
/* 802BA650 002B7590  7C 83 23 78 */	mr r3, r4
/* 802BA654 002B7594  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA658 002B7598  38 00 00 00 */	li r0, 0
/* 802BA65C 002B759C  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA660 002B75A0  90 A4 02 C4 */	stw r5, 0x2c4(r4)
/* 802BA664 002B75A4  38 80 00 06 */	li r4, 6
/* 802BA668 002B75A8  38 A0 00 00 */	li r5, 0
/* 802BA66C 002B75AC  90 03 02 30 */	stw r0, 0x230(r3)
/* 802BA670 002B75B0  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802BA674 002B75B4  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802BA678 002B75B8  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802BA67C 002B75BC  4B E4 A9 89 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BA680 002B75C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA684 002B75C4  7C 08 03 A6 */	mtlr r0
/* 802BA688 002B75C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA68C 002B75CC  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBase, global
/* 802BA690 002B75D0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802BA694 002B75D4  7C 08 02 A6 */	mflr r0
/* 802BA698 002B75D8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802BA69C 002B75DC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802BA6A0 002B75E0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802BA6A4 002B75E4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802BA6A8 002B75E8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802BA6AC 002B75EC  81 84 00 00 */	lwz r12, 0(r4)
/* 802BA6B0 002B75F0  7C 7E 1B 78 */	mr r30, r3
/* 802BA6B4 002B75F4  38 61 00 14 */	addi r3, r1, 0x14
/* 802BA6B8 002B75F8  7C 9F 23 78 */	mr r31, r4
/* 802BA6BC 002B75FC  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802BA6C0 002B7600  7D 89 03 A6 */	mtctr r12
/* 802BA6C4 002B7604  4E 80 04 21 */	bctrl 
/* 802BA6C8 002B7608  7F E4 FB 78 */	mr r4, r31
/* 802BA6CC 002B760C  38 61 00 08 */	addi r3, r1, 8
/* 802BA6D0 002B7610  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BA6D4 002B7614  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 802BA6D8 002B7618  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BA6DC 002B761C  7D 89 03 A6 */	mtctr r12
/* 802BA6E0 002B7620  4E 80 04 21 */	bctrl 
/* 802BA6E4 002B7624  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BA6E8 002B7628  38 81 00 20 */	addi r4, r1, 0x20
/* 802BA6EC 002B762C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BA6F0 002B7630  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BA6F4 002B7634  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802BA6F8 002B7638  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802BA6FC 002B763C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802BA700 002B7640  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802BA704 002B7644  81 83 00 04 */	lwz r12, 4(r3)
/* 802BA708 002B7648  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802BA70C 002B764C  7D 89 03 A6 */	mtctr r12
/* 802BA710 002B7650  4E 80 04 21 */	bctrl 
/* 802BA714 002B7654  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA718 002B7658  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802BA71C 002B765C  41 81 00 18 */	bgt .L_802BA734
/* 802BA720 002B7660  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 802BA724 002B7664  C0 02 E0 1C */	lfs f0, lbl_8051C37C@sda21(r2)
/* 802BA728 002B7668  EC 22 08 28 */	fsubs f1, f2, f1
/* 802BA72C 002B766C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BA730 002B7670  40 80 00 0C */	bge .L_802BA73C
.L_802BA734:
/* 802BA734 002B7674  7F E3 FB 78 */	mr r3, r31
/* 802BA738 002B7678  4B E4 AB 69 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BA73C:
/* 802BA73C 002B767C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BA740 002B7680  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BA744 002B7684  28 00 00 00 */	cmplwi r0, 0
/* 802BA748 002B7688  41 82 00 68 */	beq .L_802BA7B0
/* 802BA74C 002B768C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BA750 002B7690  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BA754 002B7694  40 82 00 5C */	bne .L_802BA7B0
/* 802BA758 002B7698  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BA75C 002B769C  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA760 002B76A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BA764 002B76A4  4C 40 13 82 */	cror 2, 0, 2
/* 802BA768 002B76A8  40 82 00 28 */	bne .L_802BA790
/* 802BA76C 002B76AC  7F C3 F3 78 */	mr r3, r30
/* 802BA770 002B76B0  7F E4 FB 78 */	mr r4, r31
/* 802BA774 002B76B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BA778 002B76B8  38 A0 00 00 */	li r5, 0
/* 802BA77C 002B76BC  38 C0 00 00 */	li r6, 0
/* 802BA780 002B76C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BA784 002B76C4  7D 89 03 A6 */	mtctr r12
/* 802BA788 002B76C8  4E 80 04 21 */	bctrl 
/* 802BA78C 002B76CC  48 00 00 24 */	b .L_802BA7B0
.L_802BA790:
/* 802BA790 002B76D0  7F C3 F3 78 */	mr r3, r30
/* 802BA794 002B76D4  7F E4 FB 78 */	mr r4, r31
/* 802BA798 002B76D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BA79C 002B76DC  38 A0 00 08 */	li r5, 8
/* 802BA7A0 002B76E0  38 C0 00 00 */	li r6, 0
/* 802BA7A4 002B76E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BA7A8 002B76E8  7D 89 03 A6 */	mtctr r12
/* 802BA7AC 002B76EC  4E 80 04 21 */	bctrl 
.L_802BA7B0:
/* 802BA7B0 002B76F0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802BA7B4 002B76F4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802BA7B8 002B76F8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802BA7BC 002B76FC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802BA7C0 002B7700  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802BA7C4 002B7704  7C 08 03 A6 */	mtlr r0
/* 802BA7C8 002B7708  38 21 00 50 */	addi r1, r1, 0x50
/* 802BA7CC 002B770C  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBase, global
/* 802BA7D0 002B7710  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi13StateFallDiveFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BA7D4 002B7714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA7D8 002B7718  7C 08 02 A6 */	mflr r0
/* 802BA7DC 002B771C  38 A0 FF FF */	li r5, -1
/* 802BA7E0 002B7720  7C 83 23 78 */	mr r3, r4
/* 802BA7E4 002B7724  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA7E8 002B7728  38 00 00 00 */	li r0, 0
/* 802BA7EC 002B772C  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA7F0 002B7730  90 A4 02 C4 */	stw r5, 0x2c4(r4)
/* 802BA7F4 002B7734  38 80 00 05 */	li r4, 5
/* 802BA7F8 002B7738  38 A0 00 00 */	li r5, 0
/* 802BA7FC 002B773C  90 03 02 30 */	stw r0, 0x230(r3)
/* 802BA800 002B7740  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802BA804 002B7744  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802BA808 002B7748  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802BA80C 002B774C  4B E4 A7 F9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BA810 002B7750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BA814 002B7754  7C 08 03 A6 */	mtlr r0
/* 802BA818 002B7758  38 21 00 10 */	addi r1, r1, 0x10
/* 802BA81C 002B775C  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBase, global
/* 802BA820 002B7760  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802BA824 002B7764  7C 08 02 A6 */	mflr r0
/* 802BA828 002B7768  90 01 00 54 */	stw r0, 0x54(r1)
/* 802BA82C 002B776C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802BA830 002B7770  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802BA834 002B7774  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802BA838 002B7778  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802BA83C 002B777C  81 84 00 00 */	lwz r12, 0(r4)
/* 802BA840 002B7780  7C 7E 1B 78 */	mr r30, r3
/* 802BA844 002B7784  38 61 00 14 */	addi r3, r1, 0x14
/* 802BA848 002B7788  7C 9F 23 78 */	mr r31, r4
/* 802BA84C 002B778C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802BA850 002B7790  7D 89 03 A6 */	mtctr r12
/* 802BA854 002B7794  4E 80 04 21 */	bctrl 
/* 802BA858 002B7798  7F E4 FB 78 */	mr r4, r31
/* 802BA85C 002B779C  38 61 00 08 */	addi r3, r1, 8
/* 802BA860 002B77A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BA864 002B77A4  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 802BA868 002B77A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BA86C 002B77AC  7D 89 03 A6 */	mtctr r12
/* 802BA870 002B77B0  4E 80 04 21 */	bctrl 
/* 802BA874 002B77B4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BA878 002B77B8  38 81 00 20 */	addi r4, r1, 0x20
/* 802BA87C 002B77BC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BA880 002B77C0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BA884 002B77C4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802BA888 002B77C8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802BA88C 002B77CC  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802BA890 002B77D0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802BA894 002B77D4  81 83 00 04 */	lwz r12, 4(r3)
/* 802BA898 002B77D8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802BA89C 002B77DC  7D 89 03 A6 */	mtctr r12
/* 802BA8A0 002B77E0  4E 80 04 21 */	bctrl 
/* 802BA8A4 002B77E4  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA8A8 002B77E8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802BA8AC 002B77EC  41 81 00 18 */	bgt .L_802BA8C4
/* 802BA8B0 002B77F0  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 802BA8B4 002B77F4  C0 02 E0 1C */	lfs f0, lbl_8051C37C@sda21(r2)
/* 802BA8B8 002B77F8  EC 22 08 28 */	fsubs f1, f2, f1
/* 802BA8BC 002B77FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BA8C0 002B7800  40 80 00 0C */	bge .L_802BA8CC
.L_802BA8C4:
/* 802BA8C4 002B7804  7F E3 FB 78 */	mr r3, r31
/* 802BA8C8 002B7808  4B E4 A9 D9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BA8CC:
/* 802BA8CC 002B780C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BA8D0 002B7810  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BA8D4 002B7814  28 00 00 00 */	cmplwi r0, 0
/* 802BA8D8 002B7818  41 82 00 A0 */	beq .L_802BA978
/* 802BA8DC 002B781C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BA8E0 002B7820  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BA8E4 002B7824  40 82 00 94 */	bne .L_802BA978
/* 802BA8E8 002B7828  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BA8EC 002B782C  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BA8F0 002B7830  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BA8F4 002B7834  4C 40 13 82 */	cror 2, 0, 2
/* 802BA8F8 002B7838  40 82 00 28 */	bne .L_802BA920
/* 802BA8FC 002B783C  7F C3 F3 78 */	mr r3, r30
/* 802BA900 002B7840  7F E4 FB 78 */	mr r4, r31
/* 802BA904 002B7844  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BA908 002B7848  38 A0 00 00 */	li r5, 0
/* 802BA90C 002B784C  38 C0 00 00 */	li r6, 0
/* 802BA910 002B7850  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BA914 002B7854  7D 89 03 A6 */	mtctr r12
/* 802BA918 002B7858  4E 80 04 21 */	bctrl 
/* 802BA91C 002B785C  48 00 00 5C */	b .L_802BA978
.L_802BA920:
/* 802BA920 002B7860  7F E3 FB 78 */	mr r3, r31
/* 802BA924 002B7864  48 00 24 89 */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BA928 002B7868  28 03 00 00 */	cmplwi r3, 0
/* 802BA92C 002B786C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802BA930 002B7870  41 82 00 28 */	beq .L_802BA958
/* 802BA934 002B7874  7F C3 F3 78 */	mr r3, r30
/* 802BA938 002B7878  7F E4 FB 78 */	mr r4, r31
/* 802BA93C 002B787C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BA940 002B7880  38 A0 00 07 */	li r5, 7
/* 802BA944 002B7884  38 C0 00 00 */	li r6, 0
/* 802BA948 002B7888  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BA94C 002B788C  7D 89 03 A6 */	mtctr r12
/* 802BA950 002B7890  4E 80 04 21 */	bctrl 
/* 802BA954 002B7894  48 00 00 24 */	b .L_802BA978
.L_802BA958:
/* 802BA958 002B7898  7F C3 F3 78 */	mr r3, r30
/* 802BA95C 002B789C  7F E4 FB 78 */	mr r4, r31
/* 802BA960 002B78A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BA964 002B78A4  38 A0 00 08 */	li r5, 8
/* 802BA968 002B78A8  38 C0 00 00 */	li r6, 0
/* 802BA96C 002B78AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BA970 002B78B0  7D 89 03 A6 */	mtctr r12
/* 802BA974 002B78B4  4E 80 04 21 */	bctrl 
.L_802BA978:
/* 802BA978 002B78B8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802BA97C 002B78BC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802BA980 002B78C0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802BA984 002B78C4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802BA988 002B78C8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802BA98C 002B78CC  7C 08 03 A6 */	mtlr r0
/* 802BA990 002B78D0  38 21 00 50 */	addi r1, r1, 0x50
/* 802BA994 002B78D4  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBase, global
/* 802BA998 002B78D8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi13StateFallMoveFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BA99C 002B78DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BA9A0 002B78E0  7C 08 02 A6 */	mflr r0
/* 802BA9A4 002B78E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BA9A8 002B78E8  7C 80 23 78 */	mr r0, r4
/* 802BA9AC 002B78EC  38 80 00 00 */	li r4, 0
/* 802BA9B0 002B78F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BA9B4 002B78F4  7C 1F 03 78 */	mr r31, r0
/* 802BA9B8 002B78F8  7F E3 FB 78 */	mr r3, r31
/* 802BA9BC 002B78FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BA9C0 002B7900  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802BA9C4 002B7904  7D 89 03 A6 */	mtctr r12
/* 802BA9C8 002B7908  4E 80 04 21 */	bctrl 
/* 802BA9CC 002B790C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802BA9D0 002B7910  38 00 00 01 */	li r0, 1
/* 802BA9D4 002B7914  7F E3 FB 78 */	mr r3, r31
/* 802BA9D8 002B7918  60 84 00 01 */	ori r4, r4, 1
/* 802BA9DC 002B791C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802BA9E0 002B7920  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802BA9E4 002B7924  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BA9E8 002B7928  64 00 00 40 */	oris r0, r0, 0x40
/* 802BA9EC 002B792C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BA9F0 002B7930  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BA9F4 002B7934  60 00 20 00 */	ori r0, r0, 0x2000
/* 802BA9F8 002B7938  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BA9FC 002B793C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAA00 002B7940  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 802BAA04 002B7944  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAA08 002B7948  4B E4 CD 75 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802BAA0C 002B794C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAA10 002B7950  7F E3 FB 78 */	mr r3, r31
/* 802BAA14 002B7954  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BAA18 002B7958  38 80 00 01 */	li r4, 1
/* 802BAA1C 002B795C  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 802BAA20 002B7960  38 A0 00 00 */	li r5, 0
/* 802BAA24 002B7964  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAA28 002B7968  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAA2C 002B796C  64 00 40 00 */	oris r0, r0, 0x4000
/* 802BAA30 002B7970  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAA34 002B7974  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BAA38 002B7978  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BAA3C 002B797C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BAA40 002B7980  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802BAA44 002B7984  4B E4 A5 C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BAA48 002B7988  7F E3 FB 78 */	mr r3, r31
/* 802BAA4C 002B798C  4B E4 C8 95 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802BAA50 002B7990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAA54 002B7994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAA58 002B7998  7C 08 03 A6 */	mtlr r0
/* 802BAA5C 002B799C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAA60 002B79A0  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBase, global
/* 802BAA64 002B79A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BAA68 002B79A8  7C 08 02 A6 */	mflr r0
/* 802BAA6C 002B79AC  C0 02 E0 20 */	lfs f0, lbl_8051C380@sda21(r2)
/* 802BAA70 002B79B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAA74 002B79B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAA78 002B79B8  7C 9F 23 78 */	mr r31, r4
/* 802BAA7C 002B79BC  93 C1 00 08 */	stw r30, 8(r1)
/* 802BAA80 002B79C0  7C 7E 1B 78 */	mr r30, r3
/* 802BAA84 002B79C4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802BAA88 002B79C8  C0 44 02 C8 */	lfs f2, 0x2c8(r4)
/* 802BAA8C 002B79CC  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802BAA90 002B79D0  EC 22 08 2A */	fadds f1, f2, f1
/* 802BAA94 002B79D4  D0 24 02 C8 */	stfs f1, 0x2c8(r4)
/* 802BAA98 002B79D8  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 802BAA9C 002B79DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BAAA0 002B79E0  40 81 00 54 */	ble .L_802BAAF4
/* 802BAAA4 002B79E4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BAAA8 002B79E8  7F E3 FB 78 */	mr r3, r31
/* 802BAAAC 002B79EC  38 80 00 00 */	li r4, 0
/* 802BAAB0 002B79F0  C0 25 03 AC */	lfs f1, 0x3ac(r5)
/* 802BAAB4 002B79F4  4B E5 9C 81 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802BAAB8 002B79F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BAABC 002B79FC  40 82 00 38 */	bne .L_802BAAF4
/* 802BAAC0 002B7A00  7F E3 FB 78 */	mr r3, r31
/* 802BAAC4 002B7A04  48 00 22 E9 */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BAAC8 002B7A08  28 03 00 00 */	cmplwi r3, 0
/* 802BAACC 002B7A0C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802BAAD0 002B7A10  41 82 00 24 */	beq .L_802BAAF4
/* 802BAAD4 002B7A14  7F C3 F3 78 */	mr r3, r30
/* 802BAAD8 002B7A18  7F E4 FB 78 */	mr r4, r31
/* 802BAADC 002B7A1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BAAE0 002B7A20  38 A0 00 05 */	li r5, 5
/* 802BAAE4 002B7A24  38 C0 00 00 */	li r6, 0
/* 802BAAE8 002B7A28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BAAEC 002B7A2C  7D 89 03 A6 */	mtctr r12
/* 802BAAF0 002B7A30  4E 80 04 21 */	bctrl 
.L_802BAAF4:
/* 802BAAF4 002B7A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAAF8 002B7A38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAAFC 002B7A3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BAB00 002B7A40  7C 08 03 A6 */	mtlr r0
/* 802BAB04 002B7A44  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAB08 002B7A48  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBase, global
/* 802BAB0C 002B7A4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BAB10 002B7A50  7C 08 02 A6 */	mflr r0
/* 802BAB14 002B7A54  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAB18 002B7A58  7C 80 23 78 */	mr r0, r4
/* 802BAB1C 002B7A5C  38 80 00 01 */	li r4, 1
/* 802BAB20 002B7A60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAB24 002B7A64  7C 1F 03 78 */	mr r31, r0
/* 802BAB28 002B7A68  7F E3 FB 78 */	mr r3, r31
/* 802BAB2C 002B7A6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BAB30 002B7A70  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802BAB34 002B7A74  7D 89 03 A6 */	mtctr r12
/* 802BAB38 002B7A78  4E 80 04 21 */	bctrl 
/* 802BAB3C 002B7A7C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802BAB40 002B7A80  38 00 00 00 */	li r0, 0
/* 802BAB44 002B7A84  7F E3 FB 78 */	mr r3, r31
/* 802BAB48 002B7A88  54 84 00 3C */	rlwinm r4, r4, 0, 0, 0x1e
/* 802BAB4C 002B7A8C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802BAB50 002B7A90  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802BAB54 002B7A94  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAB58 002B7A98  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802BAB5C 002B7A9C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAB60 002B7AA0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAB64 002B7AA4  54 00 04 E2 */	rlwinm r0, r0, 0, 0x13, 0x11
/* 802BAB68 002B7AA8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAB6C 002B7AAC  4B E4 CC 29 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802BAB70 002B7AB0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAB74 002B7AB4  60 00 80 00 */	ori r0, r0, 0x8000
/* 802BAB78 002B7AB8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAB7C 002B7ABC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAB80 002B7AC0  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 802BAB84 002B7AC4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAB88 002B7AC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAB8C 002B7ACC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAB90 002B7AD0  7C 08 03 A6 */	mtlr r0
/* 802BAB94 002B7AD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAB98 002B7AD8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi9StateStayFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BAB9C 002B7ADC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BABA0 002B7AE0  7C 08 02 A6 */	mflr r0
/* 802BABA4 002B7AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BABA8 002B7AE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BABAC 002B7AEC  7C 9F 23 78 */	mr r31, r4
/* 802BABB0 002B7AF0  7F E3 FB 78 */	mr r3, r31
/* 802BABB4 002B7AF4  48 00 20 FD */	bl lifeIncrement__Q34Game8Imomushi3ObjFv
/* 802BABB8 002B7AF8  7F E3 FB 78 */	mr r3, r31
/* 802BABBC 002B7AFC  4B E4 CB C1 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802BABC0 002B7B00  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BABC4 002B7B04  7F E3 FB 78 */	mr r3, r31
/* 802BABC8 002B7B08  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BABCC 002B7B0C  64 00 00 20 */	oris r0, r0, 0x20
/* 802BABD0 002B7B10  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BABD4 002B7B14  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BABD8 002B7B18  60 00 08 00 */	ori r0, r0, 0x800
/* 802BABDC 002B7B1C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BABE0 002B7B20  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BABE4 002B7B24  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BABE8 002B7B28  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BABEC 002B7B2C  4B E4 6D E1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802BABF0 002B7B30  7F E3 FB 78 */	mr r3, r31
/* 802BABF4 002B7B34  38 80 00 01 */	li r4, 1
/* 802BABF8 002B7B38  38 A0 00 00 */	li r5, 0
/* 802BABFC 002B7B3C  4B E4 A4 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BAC00 002B7B40  7F E3 FB 78 */	mr r3, r31
/* 802BAC04 002B7B44  48 00 2C 1D */	bl createAppearEffect__Q34Game8Imomushi3ObjFv
/* 802BAC08 002B7B48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAC0C 002B7B4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAC10 002B7B50  7C 08 03 A6 */	mtlr r0
/* 802BAC14 002B7B54  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAC18 002B7B58  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBase, global
/* 802BAC1C 002B7B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BAC20 002B7B60  7C 08 02 A6 */	mflr r0
/* 802BAC24 002B7B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAC28 002B7B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAC2C 002B7B6C  7C 9F 23 78 */	mr r31, r4
/* 802BAC30 002B7B70  93 C1 00 08 */	stw r30, 8(r1)
/* 802BAC34 002B7B74  7C 7E 1B 78 */	mr r30, r3
/* 802BAC38 002B7B78  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802BAC3C 002B7B7C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802BAC40 002B7B80  28 00 00 00 */	cmplwi r0, 0
/* 802BAC44 002B7B84  41 82 00 98 */	beq .L_802BACDC
/* 802BAC48 002B7B88  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802BAC4C 002B7B8C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BAC50 002B7B90  40 82 00 8C */	bne .L_802BACDC
/* 802BAC54 002B7B94  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BAC58 002B7B98  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BAC5C 002B7B9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BAC60 002B7BA0  4C 40 13 82 */	cror 2, 0, 2
/* 802BAC64 002B7BA4  40 82 00 20 */	bne .L_802BAC84
/* 802BAC68 002B7BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802BAC6C 002B7BAC  38 A0 00 00 */	li r5, 0
/* 802BAC70 002B7BB0  38 C0 00 00 */	li r6, 0
/* 802BAC74 002B7BB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BAC78 002B7BB8  7D 89 03 A6 */	mtctr r12
/* 802BAC7C 002B7BBC  4E 80 04 21 */	bctrl 
/* 802BAC80 002B7BC0  48 00 00 5C */	b .L_802BACDC
.L_802BAC84:
/* 802BAC84 002B7BC4  7F E3 FB 78 */	mr r3, r31
/* 802BAC88 002B7BC8  48 00 21 25 */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BAC8C 002B7BCC  28 03 00 00 */	cmplwi r3, 0
/* 802BAC90 002B7BD0  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802BAC94 002B7BD4  41 82 00 28 */	beq .L_802BACBC
/* 802BAC98 002B7BD8  7F C3 F3 78 */	mr r3, r30
/* 802BAC9C 002B7BDC  7F E4 FB 78 */	mr r4, r31
/* 802BACA0 002B7BE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BACA4 002B7BE4  38 A0 00 07 */	li r5, 7
/* 802BACA8 002B7BE8  38 C0 00 00 */	li r6, 0
/* 802BACAC 002B7BEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BACB0 002B7BF0  7D 89 03 A6 */	mtctr r12
/* 802BACB4 002B7BF4  4E 80 04 21 */	bctrl 
/* 802BACB8 002B7BF8  48 00 00 24 */	b .L_802BACDC
.L_802BACBC:
/* 802BACBC 002B7BFC  7F C3 F3 78 */	mr r3, r30
/* 802BACC0 002B7C00  7F E4 FB 78 */	mr r4, r31
/* 802BACC4 002B7C04  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BACC8 002B7C08  38 A0 00 06 */	li r5, 6
/* 802BACCC 002B7C0C  38 C0 00 00 */	li r6, 0
/* 802BACD0 002B7C10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BACD4 002B7C14  7D 89 03 A6 */	mtctr r12
/* 802BACD8 002B7C18  4E 80 04 21 */	bctrl 
.L_802BACDC:
/* 802BACDC 002B7C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BACE0 002B7C20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BACE4 002B7C24  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BACE8 002B7C28  7C 08 03 A6 */	mtlr r0
/* 802BACEC 002B7C2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BACF0 002B7C30  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBase, global
/* 802BACF4 002B7C34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BACF8 002B7C38  7C 08 02 A6 */	mflr r0
/* 802BACFC 002B7C3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAD00 002B7C40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAD04 002B7C44  7C 9F 23 78 */	mr r31, r4
/* 802BAD08 002B7C48  7F E3 FB 78 */	mr r3, r31
/* 802BAD0C 002B7C4C  4B E4 CA 89 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802BAD10 002B7C50  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAD14 002B7C54  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802BAD18 002B7C58  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAD1C 002B7C5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAD20 002B7C60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAD24 002B7C64  7C 08 03 A6 */	mtlr r0
/* 802BAD28 002B7C68  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAD2C 002B7C6C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi11StateAppearFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BAD30 002B7C70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BAD34 002B7C74  7C 08 02 A6 */	mflr r0
/* 802BAD38 002B7C78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAD3C 002B7C7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAD40 002B7C80  7C 9F 23 78 */	mr r31, r4
/* 802BAD44 002B7C84  7F E3 FB 78 */	mr r3, r31
/* 802BAD48 002B7C88  4B E4 CA 35 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802BAD4C 002B7C8C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802BAD50 002B7C90  38 00 00 00 */	li r0, 0
/* 802BAD54 002B7C94  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BAD58 002B7C98  7F E3 FB 78 */	mr r3, r31
/* 802BAD5C 002B7C9C  64 84 00 40 */	oris r4, r4, 0x40
/* 802BAD60 002B7CA0  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802BAD64 002B7CA4  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BAD68 002B7CA8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BAD6C 002B7CAC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BAD70 002B7CB0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BAD74 002B7CB4  4B E4 6C 09 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802BAD78 002B7CB8  7F E3 FB 78 */	mr r3, r31
/* 802BAD7C 002B7CBC  38 80 00 02 */	li r4, 2
/* 802BAD80 002B7CC0  38 A0 00 00 */	li r5, 0
/* 802BAD84 002B7CC4  4B E4 A2 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BAD88 002B7CC8  7F E3 FB 78 */	mr r3, r31
/* 802BAD8C 002B7CCC  48 00 2B 21 */	bl createDisAppearEffect__Q34Game8Imomushi3ObjFv
/* 802BAD90 002B7CD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAD94 002B7CD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAD98 002B7CD8  7C 08 03 A6 */	mtlr r0
/* 802BAD9C 002B7CDC  38 21 00 10 */	addi r1, r1, 0x10
/* 802BADA0 002B7CE0  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBase, global
/* 802BADA4 002B7CE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BADA8 002B7CE8  7C 08 02 A6 */	mflr r0
/* 802BADAC 002B7CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BADB0 002B7CF0  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802BADB4 002B7CF4  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802BADB8 002B7CF8  28 00 00 00 */	cmplwi r0, 0
/* 802BADBC 002B7CFC  41 82 00 28 */	beq .L_802BADE4
/* 802BADC0 002B7D00  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802BADC4 002B7D04  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BADC8 002B7D08  40 82 00 1C */	bne .L_802BADE4
/* 802BADCC 002B7D0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BADD0 002B7D10  38 A0 00 04 */	li r5, 4
/* 802BADD4 002B7D14  38 C0 00 00 */	li r6, 0
/* 802BADD8 002B7D18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BADDC 002B7D1C  7D 89 03 A6 */	mtctr r12
/* 802BADE0 002B7D20  4E 80 04 21 */	bctrl 
.L_802BADE4:
/* 802BADE4 002B7D24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BADE8 002B7D28  7C 08 03 A6 */	mtlr r0
/* 802BADEC 002B7D2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BADF0 002B7D30  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBase, global
/* 802BADF4 002B7D34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BADF8 002B7D38  7C 08 02 A6 */	mflr r0
/* 802BADFC 002B7D3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAE00 002B7D40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAE04 002B7D44  7C 9F 23 78 */	mr r31, r4
/* 802BAE08 002B7D48  7F E3 FB 78 */	mr r3, r31
/* 802BAE0C 002B7D4C  4B E4 C9 89 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802BAE10 002B7D50  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BAE14 002B7D54  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802BAE18 002B7D58  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BAE1C 002B7D5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAE20 002B7D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAE24 002B7D64  7C 08 03 A6 */	mtlr r0
/* 802BAE28 002B7D68  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAE2C 002B7D6C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi9StateDiveFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BAE30 002B7D70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BAE34 002B7D74  7C 08 02 A6 */	mflr r0
/* 802BAE38 002B7D78  38 A0 00 00 */	li r5, 0
/* 802BAE3C 002B7D7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BAE40 002B7D80  38 00 FF FF */	li r0, -1
/* 802BAE44 002B7D84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BAE48 002B7D88  7C 9F 23 78 */	mr r31, r4
/* 802BAE4C 002B7D8C  38 80 00 03 */	li r4, 3
/* 802BAE50 002B7D90  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BAE54 002B7D94  7F E3 FB 78 */	mr r3, r31
/* 802BAE58 002B7D98  4B E4 A1 AD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BAE5C 002B7D9C  7F E3 FB 78 */	mr r3, r31
/* 802BAE60 002B7DA0  48 00 2A D9 */	bl startMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BAE64 002B7DA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BAE68 002B7DA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BAE6C 002B7DAC  7C 08 03 A6 */	mtlr r0
/* 802BAE70 002B7DB0  38 21 00 10 */	addi r1, r1, 0x10
/* 802BAE74 002B7DB4  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBase, global
/* 802BAE78 002B7DB8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802BAE7C 002B7DBC  7C 08 02 A6 */	mflr r0
/* 802BAE80 002B7DC0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802BAE84 002B7DC4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802BAE88 002B7DC8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802BAE8C 002B7DCC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802BAE90 002B7DD0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802BAE94 002B7DD4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802BAE98 002B7DD8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802BAE9C 002B7DDC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802BAEA0 002B7DE0  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BAEA4 002B7DE4  7C 9E 23 78 */	mr r30, r4
/* 802BAEA8 002B7DE8  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802BAEAC 002B7DEC  7C 7D 1B 78 */	mr r29, r3
/* 802BAEB0 002B7DF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BAEB4 002B7DF4  4C 40 13 82 */	cror 2, 0, 2
/* 802BAEB8 002B7DF8  40 82 00 20 */	bne .L_802BAED8
/* 802BAEBC 002B7DFC  81 83 00 00 */	lwz r12, 0(r3)
/* 802BAEC0 002B7E00  38 A0 00 00 */	li r5, 0
/* 802BAEC4 002B7E04  38 C0 00 00 */	li r6, 0
/* 802BAEC8 002B7E08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BAECC 002B7E0C  7D 89 03 A6 */	mtctr r12
/* 802BAED0 002B7E10  4E 80 04 21 */	bctrl 
/* 802BAED4 002B7E14  48 00 01 B0 */	b .L_802BB084
.L_802BAED8:
/* 802BAED8 002B7E18  83 FE 02 30 */	lwz r31, 0x230(r30)
/* 802BAEDC 002B7E1C  28 1F 00 00 */	cmplwi r31, 0
/* 802BAEE0 002B7E20  41 82 00 EC */	beq .L_802BAFCC
/* 802BAEE4 002B7E24  7F C3 F3 78 */	mr r3, r30
/* 802BAEE8 002B7E28  4B E4 C4 19 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BAEEC 002B7E2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BAEF0 002B7E30  41 82 00 18 */	beq .L_802BAF08
/* 802BAEF4 002B7E34  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BAEF8 002B7E38  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802BAEFC 002B7E3C  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 802BAF00 002B7E40  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 802BAF04 002B7E44  48 00 00 D8 */	b .L_802BAFDC
.L_802BAF08:
/* 802BAF08 002B7E48  7F C4 F3 78 */	mr r4, r30
/* 802BAF0C 002B7E4C  38 61 00 14 */	addi r3, r1, 0x14
/* 802BAF10 002B7E50  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BAF14 002B7E54  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BAF18 002B7E58  7D 89 03 A6 */	mtctr r12
/* 802BAF1C 002B7E5C  4E 80 04 21 */	bctrl 
/* 802BAF20 002B7E60  7F E4 FB 78 */	mr r4, r31
/* 802BAF24 002B7E64  38 61 00 08 */	addi r3, r1, 8
/* 802BAF28 002B7E68  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BAF2C 002B7E6C  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 802BAF30 002B7E70  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BAF34 002B7E74  C3 C1 00 1C */	lfs f30, 0x1c(r1)
/* 802BAF38 002B7E78  7D 89 03 A6 */	mtctr r12
/* 802BAF3C 002B7E7C  4E 80 04 21 */	bctrl 
/* 802BAF40 002B7E80  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BAF44 002B7E84  7F C3 F3 78 */	mr r3, r30
/* 802BAF48 002B7E88  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BAF4C 002B7E8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BAF50 002B7E90  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802BAF54 002B7E94  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802BAF58 002B7E98  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802BAF5C 002B7E9C  48 00 24 CD */	bl isAttackable__Q34Game8Imomushi3ObjFv
/* 802BAF60 002B7EA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BAF64 002B7EA4  40 82 00 14 */	bne .L_802BAF78
/* 802BAF68 002B7EA8  7F C3 F3 78 */	mr r3, r30
/* 802BAF6C 002B7EAC  48 00 1E 41 */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BAF70 002B7EB0  90 7E 02 30 */	stw r3, 0x230(r30)
/* 802BAF74 002B7EB4  48 00 00 38 */	b .L_802BAFAC
.L_802BAF78:
/* 802BAF78 002B7EB8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802BAF7C 002B7EBC  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 802BAF80 002B7EC0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802BAF84 002B7EC4  C0 02 E0 24 */	lfs f0, lbl_8051C384@sda21(r2)
/* 802BAF88 002B7EC8  EC 7F 08 28 */	fsubs f3, f31, f1
/* 802BAF8C 002B7ECC  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802BAF90 002B7ED0  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802BAF94 002B7ED4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BAF98 002B7ED8  40 80 00 14 */	bge .L_802BAFAC
/* 802BAF9C 002B7EDC  38 00 00 0A */	li r0, 0xa
/* 802BAFA0 002B7EE0  7F C3 F3 78 */	mr r3, r30
/* 802BAFA4 002B7EE4  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 802BAFA8 002B7EE8  4B E4 A2 F9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BAFAC:
/* 802BAFAC 002B7EEC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 802BAFB0 002B7EF0  7F C3 F3 78 */	mr r3, r30
/* 802BAFB4 002B7EF4  38 81 00 20 */	addi r4, r1, 0x20
/* 802BAFB8 002B7EF8  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802BAFBC 002B7EFC  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802BAFC0 002B7F00  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802BAFC4 002B7F04  4B E5 A6 19 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 802BAFC8 002B7F08  48 00 00 14 */	b .L_802BAFDC
.L_802BAFCC:
/* 802BAFCC 002B7F0C  38 00 00 08 */	li r0, 8
/* 802BAFD0 002B7F10  7F C3 F3 78 */	mr r3, r30
/* 802BAFD4 002B7F14  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 802BAFD8 002B7F18  4B E4 A2 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BAFDC:
/* 802BAFDC 002B7F1C  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 802BAFE0 002B7F20  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BAFE4 002B7F24  28 00 00 00 */	cmplwi r0, 0
/* 802BAFE8 002B7F28  41 82 00 9C */	beq .L_802BB084
/* 802BAFEC 002B7F2C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BAFF0 002B7F30  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BAFF4 002B7F34  40 82 00 90 */	bne .L_802BB084
/* 802BAFF8 002B7F38  80 BE 02 C4 */	lwz r5, 0x2c4(r30)
/* 802BAFFC 002B7F3C  2C 05 00 0A */	cmpwi r5, 0xa
/* 802BB000 002B7F40  40 82 00 68 */	bne .L_802BB068
/* 802BB004 002B7F44  7F C3 F3 78 */	mr r3, r30
/* 802BB008 002B7F48  48 00 24 21 */	bl isAttackable__Q34Game8Imomushi3ObjFv
/* 802BB00C 002B7F4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB010 002B7F50  41 82 00 28 */	beq .L_802BB038
/* 802BB014 002B7F54  7F A3 EB 78 */	mr r3, r29
/* 802BB018 002B7F58  7F C4 F3 78 */	mr r4, r30
/* 802BB01C 002B7F5C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802BB020 002B7F60  38 A0 00 0A */	li r5, 0xa
/* 802BB024 002B7F64  38 C0 00 00 */	li r6, 0
/* 802BB028 002B7F68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB02C 002B7F6C  7D 89 03 A6 */	mtctr r12
/* 802BB030 002B7F70  4E 80 04 21 */	bctrl 
/* 802BB034 002B7F74  48 00 00 50 */	b .L_802BB084
.L_802BB038:
/* 802BB038 002B7F78  7F C3 F3 78 */	mr r3, r30
/* 802BB03C 002B7F7C  48 00 1D 71 */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BB040 002B7F80  90 7E 02 30 */	stw r3, 0x230(r30)
/* 802BB044 002B7F84  7F A3 EB 78 */	mr r3, r29
/* 802BB048 002B7F88  7F C4 F3 78 */	mr r4, r30
/* 802BB04C 002B7F8C  38 A0 00 07 */	li r5, 7
/* 802BB050 002B7F90  81 9D 00 00 */	lwz r12, 0(r29)
/* 802BB054 002B7F94  38 C0 00 00 */	li r6, 0
/* 802BB058 002B7F98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB05C 002B7F9C  7D 89 03 A6 */	mtctr r12
/* 802BB060 002B7FA0  4E 80 04 21 */	bctrl 
/* 802BB064 002B7FA4  48 00 00 20 */	b .L_802BB084
.L_802BB068:
/* 802BB068 002B7FA8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802BB06C 002B7FAC  7F A3 EB 78 */	mr r3, r29
/* 802BB070 002B7FB0  7F C4 F3 78 */	mr r4, r30
/* 802BB074 002B7FB4  38 C0 00 00 */	li r6, 0
/* 802BB078 002B7FB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB07C 002B7FBC  7D 89 03 A6 */	mtctr r12
/* 802BB080 002B7FC0  4E 80 04 21 */	bctrl 
.L_802BB084:
/* 802BB084 002B7FC4  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802BB088 002B7FC8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802BB08C 002B7FCC  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802BB090 002B7FD0  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802BB094 002B7FD4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802BB098 002B7FD8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802BB09C 002B7FDC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802BB0A0 002B7FE0  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802BB0A4 002B7FE4  7C 08 03 A6 */	mtlr r0
/* 802BB0A8 002B7FE8  38 21 00 60 */	addi r1, r1, 0x60
/* 802BB0AC 002B7FEC  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBase, global
/* 802BB0B0 002B7FF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB0B4 002B7FF4  7C 08 02 A6 */	mflr r0
/* 802BB0B8 002B7FF8  7C 83 23 78 */	mr r3, r4
/* 802BB0BC 002B7FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB0C0 002B8000  48 00 28 FD */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BB0C4 002B8004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB0C8 002B8008  7C 08 03 A6 */	mtlr r0
/* 802BB0CC 002B800C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB0D0 002B8010  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BB0D4 002B8014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB0D8 002B8018  7C 08 02 A6 */	mflr r0
/* 802BB0DC 002B801C  38 A0 00 00 */	li r5, 0
/* 802BB0E0 002B8020  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB0E4 002B8024  38 00 FF FF */	li r0, -1
/* 802BB0E8 002B8028  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BB0EC 002B802C  7C 9F 23 78 */	mr r31, r4
/* 802BB0F0 002B8030  38 80 00 03 */	li r4, 3
/* 802BB0F4 002B8034  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BB0F8 002B8038  7F E3 FB 78 */	mr r3, r31
/* 802BB0FC 002B803C  4B E4 9F 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BB100 002B8040  7F E3 FB 78 */	mr r3, r31
/* 802BB104 002B8044  48 00 28 35 */	bl startMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BB108 002B8048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB10C 002B804C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BB110 002B8050  7C 08 03 A6 */	mtlr r0
/* 802BB114 002B8054  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB118 002B8058  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBase, global
/* 802BB11C 002B805C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BB120 002B8060  7C 08 02 A6 */	mflr r0
/* 802BB124 002B8064  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB128 002B8068  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BB12C 002B806C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802BB130 002B8070  7C 9F 23 78 */	mr r31, r4
/* 802BB134 002B8074  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802BB138 002B8078  7C 7E 1B 78 */	mr r30, r3
/* 802BB13C 002B807C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802BB140 002B8080  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BB144 002B8084  4C 40 13 82 */	cror 2, 0, 2
/* 802BB148 002B8088  40 82 00 20 */	bne .L_802BB168
/* 802BB14C 002B808C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BB150 002B8090  38 A0 00 00 */	li r5, 0
/* 802BB154 002B8094  38 C0 00 00 */	li r6, 0
/* 802BB158 002B8098  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB15C 002B809C  7D 89 03 A6 */	mtctr r12
/* 802BB160 002B80A0  4E 80 04 21 */	bctrl 
/* 802BB164 002B80A4  48 00 00 EC */	b .L_802BB250
.L_802BB168:
/* 802BB168 002B80A8  7F E3 FB 78 */	mr r3, r31
/* 802BB16C 002B80AC  4B E4 C1 95 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BB170 002B80B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB174 002B80B4  41 82 00 18 */	beq .L_802BB18C
/* 802BB178 002B80B8  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB17C 002B80BC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BB180 002B80C0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BB184 002B80C4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BB188 002B80C8  48 00 00 8C */	b .L_802BB214
.L_802BB18C:
/* 802BB18C 002B80CC  7F E4 FB 78 */	mr r4, r31
/* 802BB190 002B80D0  38 61 00 08 */	addi r3, r1, 8
/* 802BB194 002B80D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BB198 002B80D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BB19C 002B80DC  7D 89 03 A6 */	mtctr r12
/* 802BB1A0 002B80E0  4E 80 04 21 */	bctrl 
/* 802BB1A4 002B80E4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BB1A8 002B80E8  C0 9F 01 A0 */	lfs f4, 0x1a0(r31)
/* 802BB1AC 002B80EC  C0 7F 01 9C */	lfs f3, 0x19c(r31)
/* 802BB1B0 002B80F0  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802BB1B4 002B80F4  EC 40 20 28 */	fsubs f2, f0, f4
/* 802BB1B8 002B80F8  C0 01 00 08 */	lfs f0, 8(r1)
/* 802BB1BC 002B80FC  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802BB1C0 002B8100  EC 20 08 28 */	fsubs f1, f0, f1
/* 802BB1C4 002B8104  EC 02 00 B2 */	fmuls f0, f2, f2
/* 802BB1C8 002B8108  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 802BB1CC 002B810C  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 802BB1D0 002B8110  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 802BB1D4 002B8114  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BB1D8 002B8118  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802BB1DC 002B811C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802BB1E0 002B8120  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BB1E4 002B8124  40 80 00 14 */	bge .L_802BB1F8
/* 802BB1E8 002B8128  38 00 00 06 */	li r0, 6
/* 802BB1EC 002B812C  7F E3 FB 78 */	mr r3, r31
/* 802BB1F0 002B8130  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BB1F4 002B8134  4B E4 A0 AD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BB1F8:
/* 802BB1F8 002B8138  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BB1FC 002B813C  7F E3 FB 78 */	mr r3, r31
/* 802BB200 002B8140  38 81 00 14 */	addi r4, r1, 0x14
/* 802BB204 002B8144  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802BB208 002B8148  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802BB20C 002B814C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802BB210 002B8150  4B E5 A3 CD */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_802BB214:
/* 802BB214 002B8154  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BB218 002B8158  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BB21C 002B815C  28 00 00 00 */	cmplwi r0, 0
/* 802BB220 002B8160  41 82 00 30 */	beq .L_802BB250
/* 802BB224 002B8164  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BB228 002B8168  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BB22C 002B816C  40 82 00 24 */	bne .L_802BB250
/* 802BB230 002B8170  7F C3 F3 78 */	mr r3, r30
/* 802BB234 002B8174  7F E4 FB 78 */	mr r4, r31
/* 802BB238 002B8178  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BB23C 002B817C  38 C0 00 00 */	li r6, 0
/* 802BB240 002B8180  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 802BB244 002B8184  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB248 002B8188  7D 89 03 A6 */	mtctr r12
/* 802BB24C 002B818C  4E 80 04 21 */	bctrl 
.L_802BB250:
/* 802BB250 002B8190  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BB254 002B8194  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802BB258 002B8198  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802BB25C 002B819C  7C 08 03 A6 */	mtlr r0
/* 802BB260 002B81A0  38 21 00 30 */	addi r1, r1, 0x30
/* 802BB264 002B81A4  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBase, global
/* 802BB268 002B81A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB26C 002B81AC  7C 08 02 A6 */	mflr r0
/* 802BB270 002B81B0  7C 83 23 78 */	mr r3, r4
/* 802BB274 002B81B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB278 002B81B8  48 00 27 45 */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BB27C 002B81BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB280 002B81C0  7C 08 03 A6 */	mtlr r0
/* 802BB284 002B81C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB288 002B81C8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi11StateGoHomeFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BB28C 002B81CC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802BB290 002B81D0  7C 08 02 A6 */	mflr r0
/* 802BB294 002B81D4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802BB298 002B81D8  38 00 FF FF */	li r0, -1
/* 802BB29C 002B81DC  38 61 00 08 */	addi r3, r1, 8
/* 802BB2A0 002B81E0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802BB2A4 002B81E4  7C 9F 23 78 */	mr r31, r4
/* 802BB2A8 002B81E8  90 04 02 C4 */	stw r0, 0x2c4(r4)
/* 802BB2AC 002B81EC  81 84 00 00 */	lwz r12, 0(r4)
/* 802BB2B0 002B81F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BB2B4 002B81F4  7D 89 03 A6 */	mtctr r12
/* 802BB2B8 002B81F8  4E 80 04 21 */	bctrl 
/* 802BB2BC 002B81FC  C0 21 00 08 */	lfs f1, 8(r1)
/* 802BB2C0 002B8200  7F E3 FB 78 */	mr r3, r31
/* 802BB2C4 002B8204  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802BB2C8 002B8208  48 00 1A C9 */	bl setStickDiff__Q34Game8Imomushi3ObjFff
/* 802BB2CC 002B820C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 802BB2D0 002B8210  7F E3 FB 78 */	mr r3, r31
/* 802BB2D4 002B8214  80 84 01 14 */	lwz r4, 0x114(r4)
/* 802BB2D8 002B8218  80 84 00 00 */	lwz r4, 0(r4)
/* 802BB2DC 002B821C  80 84 00 10 */	lwz r4, 0x10(r4)
/* 802BB2E0 002B8220  48 00 1D E9 */	bl startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart
/* 802BB2E4 002B8224  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB2E8 002B8228  7F E3 FB 78 */	mr r3, r31
/* 802BB2EC 002B822C  38 80 00 04 */	li r4, 4
/* 802BB2F0 002B8230  38 A0 00 00 */	li r5, 0
/* 802BB2F4 002B8234  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BB2F8 002B8238  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BB2FC 002B823C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BB300 002B8240  4B E4 9D 05 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BB304 002B8244  7F E3 FB 78 */	mr r3, r31
/* 802BB308 002B8248  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BB30C 002B824C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802BB310 002B8250  7D 89 03 A6 */	mtctr r12
/* 802BB314 002B8254  4E 80 04 21 */	bctrl 
/* 802BB318 002B8258  FC 40 08 90 */	fmr f2, f1
/* 802BB31C 002B825C  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB320 002B8260  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802BB324 002B8264  40 80 00 08 */	bge .L_802BB32C
/* 802BB328 002B8268  FC 40 10 50 */	fneg f2, f2
.L_802BB32C:
/* 802BB32C 002B826C  C0 62 E0 28 */	lfs f3, lbl_8051C388@sda21(r2)
/* 802BB330 002B8270  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802BB334 002B8274  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB338 002B8278  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802BB33C 002B827C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802BB340 002B8280  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BB344 002B8284  FC 00 10 1E */	fctiwz f0, f2
/* 802BB348 002B8288  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802BB34C 002B828C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802BB350 002B8290  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802BB354 002B8294  7C 64 02 14 */	add r3, r4, r0
/* 802BB358 002B8298  C0 83 00 04 */	lfs f4, 4(r3)
/* 802BB35C 002B829C  40 80 00 28 */	bge .L_802BB384
/* 802BB360 002B82A0  C0 02 E0 2C */	lfs f0, lbl_8051C38C@sda21(r2)
/* 802BB364 002B82A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 802BB368 002B82A8  FC 00 00 1E */	fctiwz f0, f0
/* 802BB36C 002B82AC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802BB370 002B82B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BB374 002B82B4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802BB378 002B82B8  7C 04 04 2E */	lfsx f0, r4, r0
/* 802BB37C 002B82BC  FC 00 00 50 */	fneg f0, f0
/* 802BB380 002B82C0  48 00 00 1C */	b .L_802BB39C
.L_802BB384:
/* 802BB384 002B82C4  EC 01 00 F2 */	fmuls f0, f1, f3
/* 802BB388 002B82C8  FC 00 00 1E */	fctiwz f0, f0
/* 802BB38C 002B82CC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802BB390 002B82D0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802BB394 002B82D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802BB398 002B82D8  7C 04 04 2E */	lfsx f0, r4, r0
.L_802BB39C:
/* 802BB39C 002B82DC  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802BB3A0 002B82E0  FC 40 00 50 */	fneg f2, f0
/* 802BB3A4 002B82E4  C0 62 E0 30 */	lfs f3, lbl_8051C390@sda21(r2)
/* 802BB3A8 002B82E8  FC 00 20 50 */	fneg f0, f4
/* 802BB3AC 002B82EC  C0 22 E0 18 */	lfs f1, lbl_8051C378@sda21(r2)
/* 802BB3B0 002B82F0  D0 7F 02 DC */	stfs f3, 0x2dc(r31)
/* 802BB3B4 002B82F4  D0 9F 02 E0 */	stfs f4, 0x2e0(r31)
/* 802BB3B8 002B82F8  D0 5F 02 E4 */	stfs f2, 0x2e4(r31)
/* 802BB3BC 002B82FC  D0 3F 02 E8 */	stfs f1, 0x2e8(r31)
/* 802BB3C0 002B8300  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 802BB3C4 002B8304  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802BB3C8 002B8308  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802BB3CC 002B830C  7C 08 03 A6 */	mtlr r0
/* 802BB3D0 002B8310  38 21 00 40 */	addi r1, r1, 0x40
/* 802BB3D4 002B8314  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBase, global
/* 802BB3D8 002B8318  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB3DC 002B831C  7C 08 02 A6 */	mflr r0
/* 802BB3E0 002B8320  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB3E4 002B8324  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB3E8 002B8328  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BB3EC 002B832C  7C 9F 23 78 */	mr r31, r4
/* 802BB3F0 002B8330  93 C1 00 08 */	stw r30, 8(r1)
/* 802BB3F4 002B8334  7C 7E 1B 78 */	mr r30, r3
/* 802BB3F8 002B8338  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802BB3FC 002B833C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BB400 002B8340  4C 40 13 82 */	cror 2, 0, 2
/* 802BB404 002B8344  40 82 00 20 */	bne .L_802BB424
/* 802BB408 002B8348  81 83 00 00 */	lwz r12, 0(r3)
/* 802BB40C 002B834C  38 A0 00 02 */	li r5, 2
/* 802BB410 002B8350  38 C0 00 00 */	li r6, 0
/* 802BB414 002B8354  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB418 002B8358  7D 89 03 A6 */	mtctr r12
/* 802BB41C 002B835C  4E 80 04 21 */	bctrl 
/* 802BB420 002B8360  48 00 01 10 */	b .L_802BB530
.L_802BB424:
/* 802BB424 002B8364  7F E3 FB 78 */	mr r3, r31
/* 802BB428 002B8368  48 00 20 75 */	bl isStickToFall__Q34Game8Imomushi3ObjFv
/* 802BB42C 002B836C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB430 002B8370  41 82 00 28 */	beq .L_802BB458
/* 802BB434 002B8374  7F C3 F3 78 */	mr r3, r30
/* 802BB438 002B8378  7F E4 FB 78 */	mr r4, r31
/* 802BB43C 002B837C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BB440 002B8380  38 A0 00 03 */	li r5, 3
/* 802BB444 002B8384  38 C0 00 00 */	li r6, 0
/* 802BB448 002B8388  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB44C 002B838C  7D 89 03 A6 */	mtctr r12
/* 802BB450 002B8390  4E 80 04 21 */	bctrl 
/* 802BB454 002B8394  48 00 00 DC */	b .L_802BB530
.L_802BB458:
/* 802BB458 002B8398  7F E3 FB 78 */	mr r3, r31
/* 802BB45C 002B839C  4B E4 BE A5 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BB460 002B83A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB464 002B83A4  40 82 00 90 */	bne .L_802BB4F4
/* 802BB468 002B83A8  7F E3 FB 78 */	mr r3, r31
/* 802BB46C 002B83AC  48 00 1D 25 */	bl moveStickTube__Q34Game8Imomushi3ObjFv
/* 802BB470 002B83B0  C0 3F 02 FC */	lfs f1, 0x2fc(r31)
/* 802BB474 002B83B4  C0 02 E0 34 */	lfs f0, lbl_8051C394@sda21(r2)
/* 802BB478 002B83B8  C0 5F 01 08 */	lfs f2, 0x108(r31)
/* 802BB47C 002B83BC  EC 00 08 28 */	fsubs f0, f0, f1
/* 802BB480 002B83C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802BB484 002B83C4  40 81 00 40 */	ble .L_802BB4C4
/* 802BB488 002B83C8  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 802BB48C 002B83CC  80 83 00 10 */	lwz r4, 0x10(r3)
/* 802BB490 002B83D0  28 04 00 00 */	cmplwi r4, 0
/* 802BB494 002B83D4  41 82 00 1C */	beq .L_802BB4B0
/* 802BB498 002B83D8  88 04 00 58 */	lbz r0, 0x58(r4)
/* 802BB49C 002B83DC  28 00 00 02 */	cmplwi r0, 2
/* 802BB4A0 002B83E0  40 82 00 10 */	bne .L_802BB4B0
/* 802BB4A4 002B83E4  7F E3 FB 78 */	mr r3, r31
/* 802BB4A8 002B83E8  48 00 1C 21 */	bl startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart
/* 802BB4AC 002B83EC  48 00 00 48 */	b .L_802BB4F4
.L_802BB4B0:
/* 802BB4B0 002B83F0  38 00 00 09 */	li r0, 9
/* 802BB4B4 002B83F4  7F E3 FB 78 */	mr r3, r31
/* 802BB4B8 002B83F8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BB4BC 002B83FC  4B E4 9D E5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802BB4C0 002B8400  48 00 00 34 */	b .L_802BB4F4
.L_802BB4C4:
/* 802BB4C4 002B8404  FC 00 08 50 */	fneg f0, f1
/* 802BB4C8 002B8408  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802BB4CC 002B840C  40 80 00 28 */	bge .L_802BB4F4
/* 802BB4D0 002B8410  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 802BB4D4 002B8414  80 83 00 0C */	lwz r4, 0xc(r3)
/* 802BB4D8 002B8418  28 04 00 00 */	cmplwi r4, 0
/* 802BB4DC 002B841C  41 82 00 18 */	beq .L_802BB4F4
/* 802BB4E0 002B8420  88 04 00 58 */	lbz r0, 0x58(r4)
/* 802BB4E4 002B8424  28 00 00 02 */	cmplwi r0, 2
/* 802BB4E8 002B8428  40 82 00 0C */	bne .L_802BB4F4
/* 802BB4EC 002B842C  7F E3 FB 78 */	mr r3, r31
/* 802BB4F0 002B8430  48 00 1B D9 */	bl startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart
.L_802BB4F4:
/* 802BB4F4 002B8434  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BB4F8 002B8438  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BB4FC 002B843C  28 00 00 00 */	cmplwi r0, 0
/* 802BB500 002B8440  41 82 00 30 */	beq .L_802BB530
/* 802BB504 002B8444  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BB508 002B8448  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BB50C 002B844C  40 82 00 24 */	bne .L_802BB530
/* 802BB510 002B8450  7F C3 F3 78 */	mr r3, r30
/* 802BB514 002B8454  7F E4 FB 78 */	mr r4, r31
/* 802BB518 002B8458  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BB51C 002B845C  38 C0 00 00 */	li r6, 0
/* 802BB520 002B8460  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 802BB524 002B8464  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB528 002B8468  7D 89 03 A6 */	mtctr r12
/* 802BB52C 002B846C  4E 80 04 21 */	bctrl 
.L_802BB530:
/* 802BB530 002B8470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB534 002B8474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BB538 002B8478  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BB53C 002B847C  7C 08 03 A6 */	mtlr r0
/* 802BB540 002B8480  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB544 002B8484  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBase, global
/* 802BB548 002B8488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB54C 002B848C  7C 08 02 A6 */	mflr r0
/* 802BB550 002B8490  7C 83 23 78 */	mr r3, r4
/* 802BB554 002B8494  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB558 002B8498  4B EE 3E CD */	bl endStick__Q24Game8CreatureFv
/* 802BB55C 002B849C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB560 002B84A0  7C 08 03 A6 */	mtlr r0
/* 802BB564 002B84A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB568 002B84A8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi10StateClimbFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BB56C 002B84AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BB570 002B84B0  7C 08 02 A6 */	mflr r0
/* 802BB574 002B84B4  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB578 002B84B8  3C 60 74 6F */	lis r3, 0x746F7073@ha
/* 802BB57C 002B84BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BB580 002B84C0  38 00 FF FF */	li r0, -1
/* 802BB584 002B84C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BB588 002B84C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802BB58C 002B84CC  7C 9E 23 78 */	mr r30, r4
/* 802BB590 002B84D0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802BB594 002B84D4  90 04 02 C4 */	stw r0, 0x2c4(r4)
/* 802BB598 002B84D8  38 83 70 73 */	addi r4, r3, 0x746F7073@l
/* 802BB59C 002B84DC  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 802BB5A0 002B84E0  83 FE 02 30 */	lwz r31, 0x230(r30)
/* 802BB5A4 002B84E4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802BB5A8 002B84E8  4B E7 A8 9D */	bl getCollPart__8CollTreeFUl
/* 802BB5AC 002B84EC  7C 60 1B 78 */	mr r0, r3
/* 802BB5B0 002B84F0  7F C3 F3 78 */	mr r3, r30
/* 802BB5B4 002B84F4  7C 1D 03 78 */	mr r29, r0
/* 802BB5B8 002B84F8  4B EE 3E 6D */	bl endStick__Q24Game8CreatureFv
/* 802BB5BC 002B84FC  7F C3 F3 78 */	mr r3, r30
/* 802BB5C0 002B8500  7F E4 FB 78 */	mr r4, r31
/* 802BB5C4 002B8504  7F A5 EB 78 */	mr r5, r29
/* 802BB5C8 002B8508  4B EE 39 2D */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 802BB5CC 002B850C  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB5D0 002B8510  7F C3 F3 78 */	mr r3, r30
/* 802BB5D4 002B8514  38 80 00 07 */	li r4, 7
/* 802BB5D8 002B8518  38 A0 00 00 */	li r5, 0
/* 802BB5DC 002B851C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802BB5E0 002B8520  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 802BB5E4 002B8524  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 802BB5E8 002B8528  4B E4 9A 1D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BB5EC 002B852C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BB5F0 002B8530  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BB5F4 002B8534  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802BB5F8 002B8538  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802BB5FC 002B853C  7C 08 03 A6 */	mtlr r0
/* 802BB600 002B8540  38 21 00 20 */	addi r1, r1, 0x20
/* 802BB604 002B8544  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBase, global
/* 802BB608 002B8548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB60C 002B854C  7C 08 02 A6 */	mflr r0
/* 802BB610 002B8550  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB614 002B8554  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB618 002B8558  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BB61C 002B855C  7C 9F 23 78 */	mr r31, r4
/* 802BB620 002B8560  93 C1 00 08 */	stw r30, 8(r1)
/* 802BB624 002B8564  7C 7E 1B 78 */	mr r30, r3
/* 802BB628 002B8568  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802BB62C 002B856C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BB630 002B8570  4C 40 13 82 */	cror 2, 0, 2
/* 802BB634 002B8574  40 82 00 20 */	bne .L_802BB654
/* 802BB638 002B8578  81 83 00 00 */	lwz r12, 0(r3)
/* 802BB63C 002B857C  38 A0 00 02 */	li r5, 2
/* 802BB640 002B8580  38 C0 00 00 */	li r6, 0
/* 802BB644 002B8584  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB648 002B8588  7D 89 03 A6 */	mtctr r12
/* 802BB64C 002B858C  4E 80 04 21 */	bctrl 
/* 802BB650 002B8590  48 00 00 FC */	b .L_802BB74C
.L_802BB654:
/* 802BB654 002B8594  7F E3 FB 78 */	mr r3, r31
/* 802BB658 002B8598  48 00 1E 45 */	bl isStickToFall__Q34Game8Imomushi3ObjFv
/* 802BB65C 002B859C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB660 002B85A0  41 82 00 28 */	beq .L_802BB688
/* 802BB664 002B85A4  7F C3 F3 78 */	mr r3, r30
/* 802BB668 002B85A8  7F E4 FB 78 */	mr r4, r31
/* 802BB66C 002B85AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BB670 002B85B0  38 A0 00 03 */	li r5, 3
/* 802BB674 002B85B4  38 C0 00 00 */	li r6, 0
/* 802BB678 002B85B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB67C 002B85BC  7D 89 03 A6 */	mtctr r12
/* 802BB680 002B85C0  4E 80 04 21 */	bctrl 
/* 802BB684 002B85C4  48 00 00 C8 */	b .L_802BB74C
.L_802BB688:
/* 802BB688 002B85C8  7F E3 FB 78 */	mr r3, r31
/* 802BB68C 002B85CC  4B E4 BC 75 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BB690 002B85D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB694 002B85D4  40 82 00 54 */	bne .L_802BB6E8
/* 802BB698 002B85D8  7F E3 FB 78 */	mr r3, r31
/* 802BB69C 002B85DC  48 00 1B 25 */	bl moveStickSphere__Q34Game8Imomushi3ObjFv
/* 802BB6A0 002B85E0  7F E3 FB 78 */	mr r3, r31
/* 802BB6A4 002B85E4  48 00 1D 85 */	bl isAttackable__Q34Game8Imomushi3ObjFv
/* 802BB6A8 002B85E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB6AC 002B85EC  40 82 00 3C */	bne .L_802BB6E8
/* 802BB6B0 002B85F0  7F E3 FB 78 */	mr r3, r31
/* 802BB6B4 002B85F4  48 00 16 F9 */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BB6B8 002B85F8  28 03 00 00 */	cmplwi r3, 0
/* 802BB6BC 002B85FC  41 82 00 1C */	beq .L_802BB6D8
/* 802BB6C0 002B8600  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802BB6C4 002B8604  38 00 00 03 */	li r0, 3
/* 802BB6C8 002B8608  7F E3 FB 78 */	mr r3, r31
/* 802BB6CC 002B860C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BB6D0 002B8610  4B E4 9B D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802BB6D4 002B8614  48 00 00 14 */	b .L_802BB6E8
.L_802BB6D8:
/* 802BB6D8 002B8618  38 00 00 01 */	li r0, 1
/* 802BB6DC 002B861C  7F E3 FB 78 */	mr r3, r31
/* 802BB6E0 002B8620  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802BB6E4 002B8624  4B E4 9B BD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BB6E8:
/* 802BB6E8 002B8628  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802BB6EC 002B862C  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802BB6F0 002B8630  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802BB6F4 002B8634  EC 01 00 2A */	fadds f0, f1, f0
/* 802BB6F8 002B8638  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802BB6FC 002B863C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BB700 002B8640  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BB704 002B8644  28 00 00 00 */	cmplwi r0, 0
/* 802BB708 002B8648  41 82 00 44 */	beq .L_802BB74C
/* 802BB70C 002B864C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BB710 002B8650  28 00 00 02 */	cmplwi r0, 2
/* 802BB714 002B8654  40 82 00 10 */	bne .L_802BB724
/* 802BB718 002B8658  7F E3 FB 78 */	mr r3, r31
/* 802BB71C 002B865C  48 00 1B 71 */	bl eatTsuyukusa__Q34Game8Imomushi3ObjFv
/* 802BB720 002B8660  48 00 00 2C */	b .L_802BB74C
.L_802BB724:
/* 802BB724 002B8664  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BB728 002B8668  40 82 00 24 */	bne .L_802BB74C
/* 802BB72C 002B866C  7F C3 F3 78 */	mr r3, r30
/* 802BB730 002B8670  7F E4 FB 78 */	mr r4, r31
/* 802BB734 002B8674  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BB738 002B8678  38 C0 00 00 */	li r6, 0
/* 802BB73C 002B867C  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 802BB740 002B8680  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB744 002B8684  7D 89 03 A6 */	mtctr r12
/* 802BB748 002B8688  4E 80 04 21 */	bctrl 
.L_802BB74C:
/* 802BB74C 002B868C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB750 002B8690  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BB754 002B8694  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BB758 002B8698  7C 08 03 A6 */	mtlr r0
/* 802BB75C 002B869C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB760 002B86A0  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBase, global
/* 802BB764 002B86A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB768 002B86A8  7C 08 02 A6 */	mflr r0
/* 802BB76C 002B86AC  7C 83 23 78 */	mr r3, r4
/* 802BB770 002B86B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB774 002B86B4  4B EE 3C B1 */	bl endStick__Q24Game8CreatureFv
/* 802BB778 002B86B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB77C 002B86BC  7C 08 03 A6 */	mtlr r0
/* 802BB780 002B86C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB784 002B86C4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BB788 002B86C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BB78C 002B86CC  7C 08 02 A6 */	mflr r0
/* 802BB790 002B86D0  3C 60 74 6F */	lis r3, 0x746F7073@ha
/* 802BB794 002B86D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BB798 002B86D8  38 00 FF FF */	li r0, -1
/* 802BB79C 002B86DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BB7A0 002B86E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802BB7A4 002B86E4  7C 9E 23 78 */	mr r30, r4
/* 802BB7A8 002B86E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802BB7AC 002B86EC  90 04 02 C4 */	stw r0, 0x2c4(r4)
/* 802BB7B0 002B86F0  38 83 70 73 */	addi r4, r3, 0x746F7073@l
/* 802BB7B4 002B86F4  83 FE 02 30 */	lwz r31, 0x230(r30)
/* 802BB7B8 002B86F8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802BB7BC 002B86FC  4B E7 A6 89 */	bl getCollPart__8CollTreeFUl
/* 802BB7C0 002B8700  7C 60 1B 78 */	mr r0, r3
/* 802BB7C4 002B8704  7F C3 F3 78 */	mr r3, r30
/* 802BB7C8 002B8708  7C 1D 03 78 */	mr r29, r0
/* 802BB7CC 002B870C  4B EE 3C 59 */	bl endStick__Q24Game8CreatureFv
/* 802BB7D0 002B8710  7F C3 F3 78 */	mr r3, r30
/* 802BB7D4 002B8714  7F E4 FB 78 */	mr r4, r31
/* 802BB7D8 002B8718  7F A5 EB 78 */	mr r5, r29
/* 802BB7DC 002B871C  4B EE 37 19 */	bl startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 802BB7E0 002B8720  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB7E4 002B8724  7F C3 F3 78 */	mr r3, r30
/* 802BB7E8 002B8728  38 80 00 04 */	li r4, 4
/* 802BB7EC 002B872C  38 A0 00 00 */	li r5, 0
/* 802BB7F0 002B8730  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 802BB7F4 002B8734  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 802BB7F8 002B8738  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 802BB7FC 002B873C  4B E4 98 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BB800 002B8740  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BB804 002B8744  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BB808 002B8748  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802BB80C 002B874C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802BB810 002B8750  7C 08 03 A6 */	mtlr r0
/* 802BB814 002B8754  38 21 00 20 */	addi r1, r1, 0x20
/* 802BB818 002B8758  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBase, global
/* 802BB81C 002B875C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BB820 002B8760  7C 08 02 A6 */	mflr r0
/* 802BB824 002B8764  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB828 002B8768  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BB82C 002B876C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BB830 002B8770  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802BB834 002B8774  7C 9E 23 78 */	mr r30, r4
/* 802BB838 002B8778  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802BB83C 002B877C  7C 7D 1B 78 */	mr r29, r3
/* 802BB840 002B8780  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802BB844 002B8784  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BB848 002B8788  4C 40 13 82 */	cror 2, 0, 2
/* 802BB84C 002B878C  40 82 00 20 */	bne .L_802BB86C
/* 802BB850 002B8790  81 83 00 00 */	lwz r12, 0(r3)
/* 802BB854 002B8794  38 A0 00 02 */	li r5, 2
/* 802BB858 002B8798  38 C0 00 00 */	li r6, 0
/* 802BB85C 002B879C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB860 002B87A0  7D 89 03 A6 */	mtctr r12
/* 802BB864 002B87A4  4E 80 04 21 */	bctrl 
/* 802BB868 002B87A8  48 00 00 D0 */	b .L_802BB938
.L_802BB86C:
/* 802BB86C 002B87AC  7F C3 F3 78 */	mr r3, r30
/* 802BB870 002B87B0  48 00 1C 2D */	bl isStickToFall__Q34Game8Imomushi3ObjFv
/* 802BB874 002B87B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB878 002B87B8  41 82 00 28 */	beq .L_802BB8A0
/* 802BB87C 002B87BC  7F A3 EB 78 */	mr r3, r29
/* 802BB880 002B87C0  7F C4 F3 78 */	mr r4, r30
/* 802BB884 002B87C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802BB888 002B87C8  38 A0 00 03 */	li r5, 3
/* 802BB88C 002B87CC  38 C0 00 00 */	li r6, 0
/* 802BB890 002B87D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB894 002B87D4  7D 89 03 A6 */	mtctr r12
/* 802BB898 002B87D8  4E 80 04 21 */	bctrl 
/* 802BB89C 002B87DC  48 00 00 9C */	b .L_802BB938
.L_802BB8A0:
/* 802BB8A0 002B87E0  7F C3 F3 78 */	mr r3, r30
/* 802BB8A4 002B87E4  4B E4 BA 5D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BB8A8 002B87E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BB8AC 002B87EC  40 82 00 50 */	bne .L_802BB8FC
/* 802BB8B0 002B87F0  7F C3 F3 78 */	mr r3, r30
/* 802BB8B4 002B87F4  48 00 19 0D */	bl moveStickSphere__Q34Game8Imomushi3ObjFv
/* 802BB8B8 002B87F8  83 FE 00 F4 */	lwz r31, 0xf4(r30)
/* 802BB8BC 002B87FC  7F C3 F3 78 */	mr r3, r30
/* 802BB8C0 002B8800  48 00 14 ED */	bl getRandFruitsPlant__Q34Game8Imomushi3ObjFv
/* 802BB8C4 002B8804  28 03 00 00 */	cmplwi r3, 0
/* 802BB8C8 002B8808  41 82 00 34 */	beq .L_802BB8FC
/* 802BB8CC 002B880C  7C 1F 18 40 */	cmplw r31, r3
/* 802BB8D0 002B8810  90 7E 02 30 */	stw r3, 0x230(r30)
/* 802BB8D4 002B8814  40 82 00 18 */	bne .L_802BB8EC
/* 802BB8D8 002B8818  38 00 00 09 */	li r0, 9
/* 802BB8DC 002B881C  7F C3 F3 78 */	mr r3, r30
/* 802BB8E0 002B8820  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 802BB8E4 002B8824  4B E4 99 BD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802BB8E8 002B8828  48 00 00 14 */	b .L_802BB8FC
.L_802BB8EC:
/* 802BB8EC 002B882C  38 00 00 03 */	li r0, 3
/* 802BB8F0 002B8830  7F C3 F3 78 */	mr r3, r30
/* 802BB8F4 002B8834  90 1E 02 C4 */	stw r0, 0x2c4(r30)
/* 802BB8F8 002B8838  4B E4 99 A9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802BB8FC:
/* 802BB8FC 002B883C  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 802BB900 002B8840  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BB904 002B8844  28 00 00 00 */	cmplwi r0, 0
/* 802BB908 002B8848  41 82 00 30 */	beq .L_802BB938
/* 802BB90C 002B884C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BB910 002B8850  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BB914 002B8854  40 82 00 24 */	bne .L_802BB938
/* 802BB918 002B8858  7F A3 EB 78 */	mr r3, r29
/* 802BB91C 002B885C  7F C4 F3 78 */	mr r4, r30
/* 802BB920 002B8860  81 9D 00 00 */	lwz r12, 0(r29)
/* 802BB924 002B8864  38 C0 00 00 */	li r6, 0
/* 802BB928 002B8868  80 BE 02 C4 */	lwz r5, 0x2c4(r30)
/* 802BB92C 002B886C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BB930 002B8870  7D 89 03 A6 */	mtctr r12
/* 802BB934 002B8874  4E 80 04 21 */	bctrl 
.L_802BB938:
/* 802BB938 002B8878  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BB93C 002B887C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BB940 002B8880  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802BB944 002B8884  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802BB948 002B8888  7C 08 03 A6 */	mtlr r0
/* 802BB94C 002B888C  38 21 00 20 */	addi r1, r1, 0x20
/* 802BB950 002B8890  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBase, global
/* 802BB954 002B8894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB958 002B8898  7C 08 02 A6 */	mflr r0
/* 802BB95C 002B889C  7C 83 23 78 */	mr r3, r4
/* 802BB960 002B88A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB964 002B88A4  4B EE 3A C1 */	bl endStick__Q24Game8CreatureFv
/* 802BB968 002B88A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB96C 002B88AC  7C 08 03 A6 */	mtlr r0
/* 802BB970 002B88B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB974 002B88B4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BB978 002B88B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB97C 002B88BC  7C 08 02 A6 */	mflr r0
/* 802BB980 002B88C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB984 002B88C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BB988 002B88C8  7C 9F 23 78 */	mr r31, r4
/* 802BB98C 002B88CC  7F E3 FB 78 */	mr r3, r31
/* 802BB990 002B88D0  48 00 13 45 */	bl resetZukanStateTimer__Q34Game8Imomushi3ObjFv
/* 802BB994 002B88D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BB998 002B88D8  7F E3 FB 78 */	mr r3, r31
/* 802BB99C 002B88DC  64 00 00 40 */	oris r0, r0, 0x40
/* 802BB9A0 002B88E0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BB9A4 002B88E4  4B E4 BD D9 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802BB9A8 002B88E8  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BB9AC 002B88EC  7F E3 FB 78 */	mr r3, r31
/* 802BB9B0 002B88F0  38 80 00 01 */	li r4, 1
/* 802BB9B4 002B88F4  38 A0 00 00 */	li r5, 0
/* 802BB9B8 002B88F8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BB9BC 002B88FC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BB9C0 002B8900  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BB9C4 002B8904  4B E4 96 41 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BB9C8 002B8908  7F E3 FB 78 */	mr r3, r31
/* 802BB9CC 002B890C  4B E4 B9 15 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802BB9D0 002B8910  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BB9D4 002B8914  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BB9D8 002B8918  7C 08 03 A6 */	mtlr r0
/* 802BB9DC 002B891C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BB9E0 002B8920  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBase, global
/* 802BB9E4 002B8924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BB9E8 002B8928  7C 08 02 A6 */	mflr r0
/* 802BB9EC 002B892C  C0 02 E0 38 */	lfs f0, lbl_8051C398@sda21(r2)
/* 802BB9F0 002B8930  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BB9F4 002B8934  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802BB9F8 002B8938  C0 44 02 C8 */	lfs f2, 0x2c8(r4)
/* 802BB9FC 002B893C  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802BBA00 002B8940  EC 22 08 2A */	fadds f1, f2, f1
/* 802BBA04 002B8944  D0 24 02 C8 */	stfs f1, 0x2c8(r4)
/* 802BBA08 002B8948  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 802BBA0C 002B894C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BBA10 002B8950  40 81 00 1C */	ble .L_802BBA2C
/* 802BBA14 002B8954  81 83 00 00 */	lwz r12, 0(r3)
/* 802BBA18 002B8958  38 A0 00 0C */	li r5, 0xc
/* 802BBA1C 002B895C  38 C0 00 00 */	li r6, 0
/* 802BBA20 002B8960  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BBA24 002B8964  7D 89 03 A6 */	mtctr r12
/* 802BBA28 002B8968  4E 80 04 21 */	bctrl 
.L_802BBA2C:
/* 802BBA2C 002B896C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBA30 002B8970  7C 08 03 A6 */	mtlr r0
/* 802BBA34 002B8974  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBA38 002B8978  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBase, global
/* 802BBA3C 002B897C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BBA40 002B8980  7C 08 02 A6 */	mflr r0
/* 802BBA44 002B8984  7C 83 23 78 */	mr r3, r4
/* 802BBA48 002B8988  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BBA4C 002B898C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802BBA50 002B8990  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802BBA54 002B8994  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802BBA58 002B8998  4B E4 BD 3D */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802BBA5C 002B899C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBA60 002B89A0  7C 08 03 A6 */	mtlr r0
/* 802BBA64 002B89A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBA68 002B89A8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi14StateZukanStayFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BBA6C 002B89AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BBA70 002B89B0  7C 08 02 A6 */	mflr r0
/* 802BBA74 002B89B4  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BBA78 002B89B8  38 A0 00 00 */	li r5, 0
/* 802BBA7C 002B89BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BBA80 002B89C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BBA84 002B89C4  7C 9F 23 78 */	mr r31, r4
/* 802BBA88 002B89C8  38 80 00 01 */	li r4, 1
/* 802BBA8C 002B89CC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802BBA90 002B89D0  7F E3 FB 78 */	mr r3, r31
/* 802BBA94 002B89D4  64 00 00 20 */	oris r0, r0, 0x20
/* 802BBA98 002B89D8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802BBA9C 002B89DC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BBAA0 002B89E0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BBAA4 002B89E4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BBAA8 002B89E8  4B E4 95 5D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BBAAC 002B89EC  7F E3 FB 78 */	mr r3, r31
/* 802BBAB0 002B89F0  48 00 1D 71 */	bl createAppearEffect__Q34Game8Imomushi3ObjFv
/* 802BBAB4 002B89F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBAB8 002B89F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BBABC 002B89FC  7C 08 03 A6 */	mtlr r0
/* 802BBAC0 002B8A00  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBAC4 002B8A04  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBase, global
/* 802BBAC8 002B8A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BBACC 002B8A0C  7C 08 02 A6 */	mflr r0
/* 802BBAD0 002B8A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BBAD4 002B8A14  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802BBAD8 002B8A18  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802BBADC 002B8A1C  28 00 00 00 */	cmplwi r0, 0
/* 802BBAE0 002B8A20  41 82 00 28 */	beq .L_802BBB08
/* 802BBAE4 002B8A24  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802BBAE8 002B8A28  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BBAEC 002B8A2C  40 82 00 1C */	bne .L_802BBB08
/* 802BBAF0 002B8A30  81 83 00 00 */	lwz r12, 0(r3)
/* 802BBAF4 002B8A34  38 A0 00 0D */	li r5, 0xd
/* 802BBAF8 002B8A38  38 C0 00 00 */	li r6, 0
/* 802BBAFC 002B8A3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BBB00 002B8A40  7D 89 03 A6 */	mtctr r12
/* 802BBB04 002B8A44  4E 80 04 21 */	bctrl 
.L_802BBB08:
/* 802BBB08 002B8A48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBB0C 002B8A4C  7C 08 03 A6 */	mtlr r0
/* 802BBB10 002B8A50  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBB14 002B8A54  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBase, global
/* 802BBB18 002B8A58  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802BBB1C 002B8A5C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802BBB20 002B8A60  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802BBB24 002B8A64  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi16StateZukanAppearFPQ24Game9EnemyBase

.fn init__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802BBB28 002B8A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BBB2C 002B8A6C  7C 08 02 A6 */	mflr r0
/* 802BBB30 002B8A70  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BBB34 002B8A74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BBB38 002B8A78  7C 9F 23 78 */	mr r31, r4
/* 802BBB3C 002B8A7C  7F E3 FB 78 */	mr r3, r31
/* 802BBB40 002B8A80  48 00 19 A9 */	bl setZukanTargetPosition__Q34Game8Imomushi3ObjFv
/* 802BBB44 002B8A84  C0 02 E0 18 */	lfs f0, lbl_8051C378@sda21(r2)
/* 802BBB48 002B8A88  7F E3 FB 78 */	mr r3, r31
/* 802BBB4C 002B8A8C  38 80 00 03 */	li r4, 3
/* 802BBB50 002B8A90  38 A0 00 00 */	li r5, 0
/* 802BBB54 002B8A94  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BBB58 002B8A98  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BBB5C 002B8A9C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BBB60 002B8AA0  4B E4 94 A5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BBB64 002B8AA4  7F E3 FB 78 */	mr r3, r31
/* 802BBB68 002B8AA8  48 00 1D D1 */	bl startMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BBB6C 002B8AAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBB70 002B8AB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BBB74 002B8AB4  7C 08 03 A6 */	mtlr r0
/* 802BBB78 002B8AB8  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBB7C 002B8ABC  4E 80 00 20 */	blr 
.endfn init__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBase, global
/* 802BBB80 002B8AC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BBB84 002B8AC4  7C 08 02 A6 */	mflr r0
/* 802BBB88 002B8AC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BBB8C 002B8ACC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BBB90 002B8AD0  7C 9F 23 78 */	mr r31, r4
/* 802BBB94 002B8AD4  38 81 00 08 */	addi r4, r1, 8
/* 802BBB98 002B8AD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802BBB9C 002B8ADC  7C 7E 1B 78 */	mr r30, r3
/* 802BBBA0 002B8AE0  7F E3 FB 78 */	mr r3, r31
/* 802BBBA4 002B8AE4  C0 3F 02 F4 */	lfs f1, 0x2f4(r31)
/* 802BBBA8 002B8AE8  C0 5F 02 F8 */	lfs f2, 0x2f8(r31)
/* 802BBBAC 002B8AEC  C0 1F 02 F0 */	lfs f0, 0x2f0(r31)
/* 802BBBB0 002B8AF0  D0 01 00 08 */	stfs f0, 8(r1)
/* 802BBBB4 002B8AF4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802BBBB8 002B8AF8  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802BBBBC 002B8AFC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BBBC0 002B8B00  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802BBBC4 002B8B04  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802BBBC8 002B8B08  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802BBBCC 002B8B0C  4B E5 9A 11 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 802BBBD0 002B8B10  7F E3 FB 78 */	mr r3, r31
/* 802BBBD4 002B8B14  48 00 1A 9D */	bl isInZukanTargetArea__Q34Game8Imomushi3ObjFv
/* 802BBBD8 002B8B18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BBBDC 002B8B1C  41 82 00 0C */	beq .L_802BBBE8
/* 802BBBE0 002B8B20  7F E3 FB 78 */	mr r3, r31
/* 802BBBE4 002B8B24  48 00 19 05 */	bl setZukanTargetPosition__Q34Game8Imomushi3ObjFv
.L_802BBBE8:
/* 802BBBE8 002B8B28  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BBBEC 002B8B2C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BBBF0 002B8B30  28 00 00 00 */	cmplwi r0, 0
/* 802BBBF4 002B8B34  41 82 00 30 */	beq .L_802BBC24
/* 802BBBF8 002B8B38  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BBBFC 002B8B3C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BBC00 002B8B40  40 82 00 24 */	bne .L_802BBC24
/* 802BBC04 002B8B44  7F C3 F3 78 */	mr r3, r30
/* 802BBC08 002B8B48  7F E4 FB 78 */	mr r4, r31
/* 802BBC0C 002B8B4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BBC10 002B8B50  38 A0 00 0D */	li r5, 0xd
/* 802BBC14 002B8B54  38 C0 00 00 */	li r6, 0
/* 802BBC18 002B8B58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BBC1C 002B8B5C  7D 89 03 A6 */	mtctr r12
/* 802BBC20 002B8B60  4E 80 04 21 */	bctrl 
.L_802BBC24:
/* 802BBC24 002B8B64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BBC28 002B8B68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BBC2C 002B8B6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802BBC30 002B8B70  7C 08 03 A6 */	mtlr r0
/* 802BBC34 002B8B74  38 21 00 20 */	addi r1, r1, 0x20
/* 802BBC38 002B8B78  4E 80 00 20 */	blr 
.endfn exec__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBase, global
/* 802BBC3C 002B8B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BBC40 002B8B80  7C 08 02 A6 */	mflr r0
/* 802BBC44 002B8B84  7C 83 23 78 */	mr r3, r4
/* 802BBC48 002B8B88  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BBC4C 002B8B8C  48 00 1D 71 */	bl finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
/* 802BBC50 002B8B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BBC54 002B8B94  7C 08 03 A6 */	mtlr r0
/* 802BBC58 002B8B98  38 21 00 10 */	addi r1, r1, 0x10
/* 802BBC5C 002B8B9C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game8Imomushi14StateZukanMoveFPQ24Game9EnemyBase
