.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_BigTreasureState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048C198:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_8048C1A4:
	.asciz "246-BigTreasureState"
.balign 4
lbl_8048C1BC:
	.asciz "itemwait"
.balign 4
lbl_8048C1C8:
	.asciz "preattack"
.balign 4
lbl_8048C1D4:
	.asciz "dropitem"
.balign 4
lbl_8048C1E0:
	.asciz "itemwalk"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q34Game11BigTreasure13StateItemWalk
__vt__Q34Game11BigTreasure13StateItemWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure9StateWalk
__vt__Q34Game11BigTreasure9StateWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure13StateDropItem
__vt__Q34Game11BigTreasure13StateDropItem:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure12StatePutItem
__vt__Q34Game11BigTreasure12StatePutItem:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure11StateAttack
__vt__Q34Game11BigTreasure11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure14StatePreAttack
__vt__Q34Game11BigTreasure14StatePreAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure10StateFlick
__vt__Q34Game11BigTreasure10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure13StateItemWait
__vt__Q34Game11BigTreasure13StateItemWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure9StateWait
__vt__Q34Game11BigTreasure9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure9StateLand
__vt__Q34Game11BigTreasure9StateLand:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure9StateStay
__vt__Q34Game11BigTreasure9StateStay:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure9StateDead
__vt__Q34Game11BigTreasure9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure5State
__vt__Q34Game11BigTreasure5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game11BigTreasure3FSM
__vt__Q34Game11BigTreasure3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game11BigTreasure3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051CA40:
	.asciz "dead"
.balign 4
lbl_8051CA48:
	.asciz "stay"
.balign 4
lbl_8051CA50:
	.asciz "land"
.balign 4
lbl_8051CA58:
	.asciz "wait"
.balign 4
lbl_8051CA60:
	.asciz "flick"
.balign 4
lbl_8051CA68:
	.asciz "attack"
.balign 4
lbl_8051CA70:
	.asciz "putitem"
.balign 4
lbl_8051CA78:
	.asciz "walk"
.balign 4
lbl_8051CA80:
	.float 0.0
lbl_8051CA84:
	.float 280.0
lbl_8051CA88:
	.float 0.01
lbl_8051CA8C:
	.float 4.0
lbl_8051CA90:
	.float -1000.0
lbl_8051CA94:
	.float 5.0
lbl_8051CA98:
	.float 32768.0
.balign 8
lbl_8051CAA0:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051CAA8:
	.float 10.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game11BigTreasure3FSMFPQ24Game9EnemyBase
init__Q34Game11BigTreasure3FSMFPQ24Game9EnemyBase:
/* 802D72CC 002D420C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D72D0 002D4210  7C 08 02 A6 */	mflr r0
/* 802D72D4 002D4214  3C 80 80 49 */	lis r4, lbl_8048C198@ha
/* 802D72D8 002D4218  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D72DC 002D421C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D72E0 002D4220  7C 7F 1B 78 */	mr r31, r3
/* 802D72E4 002D4224  93 C1 00 08 */	stw r30, 8(r1)
/* 802D72E8 002D4228  3B C4 C1 98 */	addi r30, r4, lbl_8048C198@l
/* 802D72EC 002D422C  38 80 00 0C */	li r4, 0xc
/* 802D72F0 002D4230  4B E5 95 75 */	bl create__Q24Game17EnemyStateMachineFi
/* 802D72F4 002D4234  38 60 00 10 */	li r3, 0x10
/* 802D72F8 002D4238  4B D4 CB AD */	bl __nw__FUl
/* 802D72FC 002D423C  7C 64 1B 79 */	or. r4, r3, r3
/* 802D7300 002D4240  41 82 00 3C */	beq lbl_802D733C
/* 802D7304 002D4244  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D7308 002D4248  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D730C 002D424C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7310 002D4250  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure9StateDead@ha
/* 802D7314 002D4254  90 04 00 00 */	stw r0, 0(r4)
/* 802D7318 002D4258  38 E0 00 00 */	li r7, 0
/* 802D731C 002D425C  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D7320 002D4260  38 A2 E6 E0 */	addi r5, r2, lbl_8051CA40@sda21
/* 802D7324 002D4264  90 E4 00 04 */	stw r7, 4(r4)
/* 802D7328 002D4268  38 03 31 28 */	addi r0, r3, __vt__Q34Game11BigTreasure9StateDead@l
/* 802D732C 002D426C  90 E4 00 08 */	stw r7, 8(r4)
/* 802D7330 002D4270  90 C4 00 00 */	stw r6, 0(r4)
/* 802D7334 002D4274  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D7338 002D4278  90 04 00 00 */	stw r0, 0(r4)
lbl_802D733C:
/* 802D733C 002D427C  7F E3 FB 78 */	mr r3, r31
/* 802D7340 002D4280  4B E5 95 C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D7344 002D4284  38 60 00 10 */	li r3, 0x10
/* 802D7348 002D4288  4B D4 CB 5D */	bl __nw__FUl
/* 802D734C 002D428C  7C 64 1B 79 */	or. r4, r3, r3
/* 802D7350 002D4290  41 82 00 40 */	beq lbl_802D7390
/* 802D7354 002D4294  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D7358 002D4298  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D735C 002D429C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7360 002D42A0  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure9StateStay@ha
/* 802D7364 002D42A4  90 04 00 00 */	stw r0, 0(r4)
/* 802D7368 002D42A8  38 00 00 01 */	li r0, 1
/* 802D736C 002D42AC  38 E0 00 00 */	li r7, 0
/* 802D7370 002D42B0  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D7374 002D42B4  90 04 00 04 */	stw r0, 4(r4)
/* 802D7378 002D42B8  38 A2 E6 E8 */	addi r5, r2, lbl_8051CA48@sda21
/* 802D737C 002D42BC  38 03 31 04 */	addi r0, r3, __vt__Q34Game11BigTreasure9StateStay@l
/* 802D7380 002D42C0  90 E4 00 08 */	stw r7, 8(r4)
/* 802D7384 002D42C4  90 C4 00 00 */	stw r6, 0(r4)
/* 802D7388 002D42C8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D738C 002D42CC  90 04 00 00 */	stw r0, 0(r4)
lbl_802D7390:
/* 802D7390 002D42D0  7F E3 FB 78 */	mr r3, r31
/* 802D7394 002D42D4  4B E5 95 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D7398 002D42D8  38 60 00 10 */	li r3, 0x10
/* 802D739C 002D42DC  4B D4 CB 09 */	bl __nw__FUl
/* 802D73A0 002D42E0  7C 64 1B 79 */	or. r4, r3, r3
/* 802D73A4 002D42E4  41 82 00 40 */	beq lbl_802D73E4
/* 802D73A8 002D42E8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D73AC 002D42EC  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D73B0 002D42F0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D73B4 002D42F4  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure9StateLand@ha
/* 802D73B8 002D42F8  90 04 00 00 */	stw r0, 0(r4)
/* 802D73BC 002D42FC  38 00 00 02 */	li r0, 2
/* 802D73C0 002D4300  38 E0 00 00 */	li r7, 0
/* 802D73C4 002D4304  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D73C8 002D4308  90 04 00 04 */	stw r0, 4(r4)
/* 802D73CC 002D430C  38 A2 E6 F0 */	addi r5, r2, lbl_8051CA50@sda21
/* 802D73D0 002D4310  38 03 30 E0 */	addi r0, r3, __vt__Q34Game11BigTreasure9StateLand@l
/* 802D73D4 002D4314  90 E4 00 08 */	stw r7, 8(r4)
/* 802D73D8 002D4318  90 C4 00 00 */	stw r6, 0(r4)
/* 802D73DC 002D431C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D73E0 002D4320  90 04 00 00 */	stw r0, 0(r4)
lbl_802D73E4:
/* 802D73E4 002D4324  7F E3 FB 78 */	mr r3, r31
/* 802D73E8 002D4328  4B E5 95 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D73EC 002D432C  38 60 00 10 */	li r3, 0x10
/* 802D73F0 002D4330  4B D4 CA B5 */	bl __nw__FUl
/* 802D73F4 002D4334  7C 64 1B 79 */	or. r4, r3, r3
/* 802D73F8 002D4338  41 82 00 40 */	beq lbl_802D7438
/* 802D73FC 002D433C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D7400 002D4340  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D7404 002D4344  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7408 002D4348  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure9StateWait@ha
/* 802D740C 002D434C  90 04 00 00 */	stw r0, 0(r4)
/* 802D7410 002D4350  38 00 00 03 */	li r0, 3
/* 802D7414 002D4354  38 E0 00 00 */	li r7, 0
/* 802D7418 002D4358  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D741C 002D435C  90 04 00 04 */	stw r0, 4(r4)
/* 802D7420 002D4360  38 A2 E6 F8 */	addi r5, r2, lbl_8051CA58@sda21
/* 802D7424 002D4364  38 03 30 BC */	addi r0, r3, __vt__Q34Game11BigTreasure9StateWait@l
/* 802D7428 002D4368  90 E4 00 08 */	stw r7, 8(r4)
/* 802D742C 002D436C  90 C4 00 00 */	stw r6, 0(r4)
/* 802D7430 002D4370  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D7434 002D4374  90 04 00 00 */	stw r0, 0(r4)
lbl_802D7438:
/* 802D7438 002D4378  7F E3 FB 78 */	mr r3, r31
/* 802D743C 002D437C  4B E5 94 CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D7440 002D4380  38 60 00 10 */	li r3, 0x10
/* 802D7444 002D4384  4B D4 CA 61 */	bl __nw__FUl
/* 802D7448 002D4388  7C 64 1B 79 */	or. r4, r3, r3
/* 802D744C 002D438C  41 82 00 40 */	beq lbl_802D748C
/* 802D7450 002D4390  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D7454 002D4394  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D7458 002D4398  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D745C 002D439C  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure13StateItemWait@ha
/* 802D7460 002D43A0  90 04 00 00 */	stw r0, 0(r4)
/* 802D7464 002D43A4  38 00 00 04 */	li r0, 4
/* 802D7468 002D43A8  38 E0 00 00 */	li r7, 0
/* 802D746C 002D43AC  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D7470 002D43B0  90 04 00 04 */	stw r0, 4(r4)
/* 802D7474 002D43B4  38 BE 00 24 */	addi r5, r30, 0x24
/* 802D7478 002D43B8  38 03 30 98 */	addi r0, r3, __vt__Q34Game11BigTreasure13StateItemWait@l
/* 802D747C 002D43BC  90 E4 00 08 */	stw r7, 8(r4)
/* 802D7480 002D43C0  90 C4 00 00 */	stw r6, 0(r4)
/* 802D7484 002D43C4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D7488 002D43C8  90 04 00 00 */	stw r0, 0(r4)
lbl_802D748C:
/* 802D748C 002D43CC  7F E3 FB 78 */	mr r3, r31
/* 802D7490 002D43D0  4B E5 94 79 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D7494 002D43D4  38 60 00 10 */	li r3, 0x10
/* 802D7498 002D43D8  4B D4 CA 0D */	bl __nw__FUl
/* 802D749C 002D43DC  7C 64 1B 79 */	or. r4, r3, r3
/* 802D74A0 002D43E0  41 82 00 40 */	beq lbl_802D74E0
/* 802D74A4 002D43E4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D74A8 002D43E8  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D74AC 002D43EC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D74B0 002D43F0  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure10StateFlick@ha
/* 802D74B4 002D43F4  90 04 00 00 */	stw r0, 0(r4)
/* 802D74B8 002D43F8  38 00 00 05 */	li r0, 5
/* 802D74BC 002D43FC  38 E0 00 00 */	li r7, 0
/* 802D74C0 002D4400  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D74C4 002D4404  90 04 00 04 */	stw r0, 4(r4)
/* 802D74C8 002D4408  38 A2 E7 00 */	addi r5, r2, lbl_8051CA60@sda21
/* 802D74CC 002D440C  38 03 30 74 */	addi r0, r3, __vt__Q34Game11BigTreasure10StateFlick@l
/* 802D74D0 002D4410  90 E4 00 08 */	stw r7, 8(r4)
/* 802D74D4 002D4414  90 C4 00 00 */	stw r6, 0(r4)
/* 802D74D8 002D4418  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D74DC 002D441C  90 04 00 00 */	stw r0, 0(r4)
lbl_802D74E0:
/* 802D74E0 002D4420  7F E3 FB 78 */	mr r3, r31
/* 802D74E4 002D4424  4B E5 94 25 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D74E8 002D4428  38 60 00 10 */	li r3, 0x10
/* 802D74EC 002D442C  4B D4 C9 B9 */	bl __nw__FUl
/* 802D74F0 002D4430  7C 64 1B 79 */	or. r4, r3, r3
/* 802D74F4 002D4434  41 82 00 40 */	beq lbl_802D7534
/* 802D74F8 002D4438  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D74FC 002D443C  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D7500 002D4440  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7504 002D4444  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure14StatePreAttack@ha
/* 802D7508 002D4448  90 04 00 00 */	stw r0, 0(r4)
/* 802D750C 002D444C  38 00 00 06 */	li r0, 6
/* 802D7510 002D4450  38 E0 00 00 */	li r7, 0
/* 802D7514 002D4454  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D7518 002D4458  90 04 00 04 */	stw r0, 4(r4)
/* 802D751C 002D445C  38 BE 00 30 */	addi r5, r30, 0x30
/* 802D7520 002D4460  38 03 30 50 */	addi r0, r3, __vt__Q34Game11BigTreasure14StatePreAttack@l
/* 802D7524 002D4464  90 E4 00 08 */	stw r7, 8(r4)
/* 802D7528 002D4468  90 C4 00 00 */	stw r6, 0(r4)
/* 802D752C 002D446C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D7530 002D4470  90 04 00 00 */	stw r0, 0(r4)
lbl_802D7534:
/* 802D7534 002D4474  7F E3 FB 78 */	mr r3, r31
/* 802D7538 002D4478  4B E5 93 D1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D753C 002D447C  38 60 00 10 */	li r3, 0x10
/* 802D7540 002D4480  4B D4 C9 65 */	bl __nw__FUl
/* 802D7544 002D4484  7C 64 1B 79 */	or. r4, r3, r3
/* 802D7548 002D4488  41 82 00 40 */	beq lbl_802D7588
/* 802D754C 002D448C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D7550 002D4490  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D7554 002D4494  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7558 002D4498  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure11StateAttack@ha
/* 802D755C 002D449C  90 04 00 00 */	stw r0, 0(r4)
/* 802D7560 002D44A0  38 00 00 07 */	li r0, 7
/* 802D7564 002D44A4  38 E0 00 00 */	li r7, 0
/* 802D7568 002D44A8  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D756C 002D44AC  90 04 00 04 */	stw r0, 4(r4)
/* 802D7570 002D44B0  38 A2 E7 08 */	addi r5, r2, lbl_8051CA68@sda21
/* 802D7574 002D44B4  38 03 30 2C */	addi r0, r3, __vt__Q34Game11BigTreasure11StateAttack@l
/* 802D7578 002D44B8  90 E4 00 08 */	stw r7, 8(r4)
/* 802D757C 002D44BC  90 C4 00 00 */	stw r6, 0(r4)
/* 802D7580 002D44C0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D7584 002D44C4  90 04 00 00 */	stw r0, 0(r4)
lbl_802D7588:
/* 802D7588 002D44C8  7F E3 FB 78 */	mr r3, r31
/* 802D758C 002D44CC  4B E5 93 7D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D7590 002D44D0  38 60 00 10 */	li r3, 0x10
/* 802D7594 002D44D4  4B D4 C9 11 */	bl __nw__FUl
/* 802D7598 002D44D8  7C 64 1B 79 */	or. r4, r3, r3
/* 802D759C 002D44DC  41 82 00 40 */	beq lbl_802D75DC
/* 802D75A0 002D44E0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D75A4 002D44E4  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D75A8 002D44E8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D75AC 002D44EC  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure12StatePutItem@ha
/* 802D75B0 002D44F0  90 04 00 00 */	stw r0, 0(r4)
/* 802D75B4 002D44F4  38 00 00 08 */	li r0, 8
/* 802D75B8 002D44F8  38 E0 00 00 */	li r7, 0
/* 802D75BC 002D44FC  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D75C0 002D4500  90 04 00 04 */	stw r0, 4(r4)
/* 802D75C4 002D4504  38 A2 E7 10 */	addi r5, r2, lbl_8051CA70@sda21
/* 802D75C8 002D4508  38 03 30 08 */	addi r0, r3, __vt__Q34Game11BigTreasure12StatePutItem@l
/* 802D75CC 002D450C  90 E4 00 08 */	stw r7, 8(r4)
/* 802D75D0 002D4510  90 C4 00 00 */	stw r6, 0(r4)
/* 802D75D4 002D4514  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D75D8 002D4518  90 04 00 00 */	stw r0, 0(r4)
lbl_802D75DC:
/* 802D75DC 002D451C  7F E3 FB 78 */	mr r3, r31
/* 802D75E0 002D4520  4B E5 93 29 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D75E4 002D4524  38 60 00 10 */	li r3, 0x10
/* 802D75E8 002D4528  4B D4 C8 BD */	bl __nw__FUl
/* 802D75EC 002D452C  7C 64 1B 79 */	or. r4, r3, r3
/* 802D75F0 002D4530  41 82 00 40 */	beq lbl_802D7630
/* 802D75F4 002D4534  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D75F8 002D4538  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D75FC 002D453C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7600 002D4540  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure13StateDropItem@ha
/* 802D7604 002D4544  90 04 00 00 */	stw r0, 0(r4)
/* 802D7608 002D4548  38 00 00 09 */	li r0, 9
/* 802D760C 002D454C  38 E0 00 00 */	li r7, 0
/* 802D7610 002D4550  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D7614 002D4554  90 04 00 04 */	stw r0, 4(r4)
/* 802D7618 002D4558  38 BE 00 3C */	addi r5, r30, 0x3c
/* 802D761C 002D455C  38 03 2F E4 */	addi r0, r3, __vt__Q34Game11BigTreasure13StateDropItem@l
/* 802D7620 002D4560  90 E4 00 08 */	stw r7, 8(r4)
/* 802D7624 002D4564  90 C4 00 00 */	stw r6, 0(r4)
/* 802D7628 002D4568  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D762C 002D456C  90 04 00 00 */	stw r0, 0(r4)
lbl_802D7630:
/* 802D7630 002D4570  7F E3 FB 78 */	mr r3, r31
/* 802D7634 002D4574  4B E5 92 D5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D7638 002D4578  38 60 00 10 */	li r3, 0x10
/* 802D763C 002D457C  4B D4 C8 69 */	bl __nw__FUl
/* 802D7640 002D4580  7C 64 1B 79 */	or. r4, r3, r3
/* 802D7644 002D4584  41 82 00 40 */	beq lbl_802D7684
/* 802D7648 002D4588  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D764C 002D458C  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D7650 002D4590  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D7654 002D4594  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure9StateWalk@ha
/* 802D7658 002D4598  90 04 00 00 */	stw r0, 0(r4)
/* 802D765C 002D459C  38 00 00 0A */	li r0, 0xa
/* 802D7660 002D45A0  38 E0 00 00 */	li r7, 0
/* 802D7664 002D45A4  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D7668 002D45A8  90 04 00 04 */	stw r0, 4(r4)
/* 802D766C 002D45AC  38 A2 E7 18 */	addi r5, r2, lbl_8051CA78@sda21
/* 802D7670 002D45B0  38 03 2F C0 */	addi r0, r3, __vt__Q34Game11BigTreasure9StateWalk@l
/* 802D7674 002D45B4  90 E4 00 08 */	stw r7, 8(r4)
/* 802D7678 002D45B8  90 C4 00 00 */	stw r6, 0(r4)
/* 802D767C 002D45BC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D7680 002D45C0  90 04 00 00 */	stw r0, 0(r4)
lbl_802D7684:
/* 802D7684 002D45C4  7F E3 FB 78 */	mr r3, r31
/* 802D7688 002D45C8  4B E5 92 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D768C 002D45CC  38 60 00 10 */	li r3, 0x10
/* 802D7690 002D45D0  4B D4 C8 15 */	bl __nw__FUl
/* 802D7694 002D45D4  7C 64 1B 79 */	or. r4, r3, r3
/* 802D7698 002D45D8  41 82 00 40 */	beq lbl_802D76D8
/* 802D769C 002D45DC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D76A0 002D45E0  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure5State@ha
/* 802D76A4 002D45E4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D76A8 002D45E8  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure13StateItemWalk@ha
/* 802D76AC 002D45EC  90 04 00 00 */	stw r0, 0(r4)
/* 802D76B0 002D45F0  38 00 00 0B */	li r0, 0xb
/* 802D76B4 002D45F4  38 E0 00 00 */	li r7, 0
/* 802D76B8 002D45F8  38 C5 31 4C */	addi r6, r5, __vt__Q34Game11BigTreasure5State@l
/* 802D76BC 002D45FC  90 04 00 04 */	stw r0, 4(r4)
/* 802D76C0 002D4600  38 BE 00 48 */	addi r5, r30, 0x48
/* 802D76C4 002D4604  38 03 2F 9C */	addi r0, r3, __vt__Q34Game11BigTreasure13StateItemWalk@l
/* 802D76C8 002D4608  90 E4 00 08 */	stw r7, 8(r4)
/* 802D76CC 002D460C  90 C4 00 00 */	stw r6, 0(r4)
/* 802D76D0 002D4610  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D76D4 002D4614  90 04 00 00 */	stw r0, 0(r4)
lbl_802D76D8:
/* 802D76D8 002D4618  7F E3 FB 78 */	mr r3, r31
/* 802D76DC 002D461C  4B E5 92 2D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D76E0 002D4620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D76E4 002D4624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D76E8 002D4628  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D76EC 002D462C  7C 08 03 A6 */	mtlr r0
/* 802D76F0 002D4630  38 21 00 10 */	addi r1, r1, 0x10
/* 802D76F4 002D4634  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D76F8 002D4638  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D76FC 002D463C  7C 08 02 A6 */	mflr r0
/* 802D7700 002D4640  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D7704 002D4644  7C 80 23 78 */	mr r0, r4
/* 802D7708 002D4648  38 80 00 00 */	li r4, 0
/* 802D770C 002D464C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D7710 002D4650  7C 1F 03 78 */	mr r31, r0
/* 802D7714 002D4654  7F E3 FB 78 */	mr r3, r31
/* 802D7718 002D4658  48 00 6E A9 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D771C 002D465C  7F E3 FB 78 */	mr r3, r31
/* 802D7720 002D4660  48 00 57 41 */	bl forceFinishIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D7724 002D4664  7F E3 FB 78 */	mr r3, r31
/* 802D7728 002D4668  48 00 57 C9 */	bl checkJointScaleOn__Q34Game11BigTreasure3ObjFv
/* 802D772C 002D466C  7F E3 FB 78 */	mr r3, r31
/* 802D7730 002D4670  4B E2 DF F1 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802D7734 002D4674  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D7738 002D4678  7F E3 FB 78 */	mr r3, r31
/* 802D773C 002D467C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D7740 002D4680  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D7744 002D4684  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D7748 002D4688  4B E2 A2 35 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D774C 002D468C  7F E3 FB 78 */	mr r3, r31
/* 802D7750 002D4690  38 80 00 1B */	li r4, 0x1b
/* 802D7754 002D4694  38 A0 00 01 */	li r5, 1
/* 802D7758 002D4698  48 00 77 F9 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D775C 002D469C  7F E3 FB 78 */	mr r3, r31
/* 802D7760 002D46A0  48 00 95 65 */	bl createDeadBombFootEffect__Q34Game11BigTreasure3ObjFv
/* 802D7764 002D46A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7768 002D46A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D776C 002D46AC  7C 08 03 A6 */	mtlr r0
/* 802D7770 002D46B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7774 002D46B4  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBase:
/* 802D7778 002D46B8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D777C 002D46BC  7C 08 02 A6 */	mflr r0
/* 802D7780 002D46C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D7784 002D46C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D7788 002D46C8  7C 9F 23 78 */	mr r31, r4
/* 802D778C 002D46CC  7F E3 FB 78 */	mr r3, r31
/* 802D7790 002D46D0  4B E2 DA DD */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D7794 002D46D4  C0 02 E7 24 */	lfs f0, lbl_8051CA84@sda21(r2)
/* 802D7798 002D46D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D779C 002D46DC  40 81 00 0C */	ble lbl_802D77A8
/* 802D77A0 002D46E0  7F E3 FB 78 */	mr r3, r31
/* 802D77A4 002D46E4  48 00 99 C5 */	bl subShadowScale__Q34Game11BigTreasure3ObjFv
lbl_802D77A8:
/* 802D77A8 002D46E8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D77AC 002D46EC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D77B0 002D46F0  28 00 00 00 */	cmplwi r0, 0
/* 802D77B4 002D46F4  41 82 01 E0 */	beq lbl_802D7994
/* 802D77B8 002D46F8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D77BC 002D46FC  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D77C0 002D4700  40 82 00 10 */	bne lbl_802D77D0
/* 802D77C4 002D4704  7F E3 FB 78 */	mr r3, r31
/* 802D77C8 002D4708  48 00 78 A5 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D77CC 002D470C  48 00 01 C8 */	b lbl_802D7994
lbl_802D77D0:
/* 802D77D0 002D4710  28 00 00 02 */	cmplwi r0, 2
/* 802D77D4 002D4714  40 82 00 10 */	bne lbl_802D77E4
/* 802D77D8 002D4718  7F E3 FB 78 */	mr r3, r31
/* 802D77DC 002D471C  48 00 93 E5 */	bl startDeadBubbleMouthEffect__Q34Game11BigTreasure3ObjFv
/* 802D77E0 002D4720  48 00 01 B4 */	b lbl_802D7994
lbl_802D77E4:
/* 802D77E4 002D4724  28 00 00 03 */	cmplwi r0, 3
/* 802D77E8 002D4728  40 82 00 10 */	bne lbl_802D77F8
/* 802D77EC 002D472C  7F E3 FB 78 */	mr r3, r31
/* 802D77F0 002D4730  48 00 93 6D */	bl startDeadBubbleBodyEffect__Q34Game11BigTreasure3ObjFv
/* 802D77F4 002D4734  48 00 01 A0 */	b lbl_802D7994
lbl_802D77F8:
/* 802D77F8 002D4738  28 00 00 04 */	cmplwi r0, 4
/* 802D77FC 002D473C  40 82 00 14 */	bne lbl_802D7810
/* 802D7800 002D4740  7F E3 FB 78 */	mr r3, r31
/* 802D7804 002D4744  38 80 00 00 */	li r4, 0
/* 802D7808 002D4748  48 00 92 99 */	bl startDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D780C 002D474C  48 00 01 88 */	b lbl_802D7994
lbl_802D7810:
/* 802D7810 002D4750  28 00 00 05 */	cmplwi r0, 5
/* 802D7814 002D4754  40 82 00 14 */	bne lbl_802D7828
/* 802D7818 002D4758  7F E3 FB 78 */	mr r3, r31
/* 802D781C 002D475C  38 80 00 01 */	li r4, 1
/* 802D7820 002D4760  48 00 92 81 */	bl startDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7824 002D4764  48 00 01 70 */	b lbl_802D7994
lbl_802D7828:
/* 802D7828 002D4768  28 00 00 06 */	cmplwi r0, 6
/* 802D782C 002D476C  40 82 00 14 */	bne lbl_802D7840
/* 802D7830 002D4770  7F E3 FB 78 */	mr r3, r31
/* 802D7834 002D4774  38 80 00 02 */	li r4, 2
/* 802D7838 002D4778  48 00 92 69 */	bl startDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D783C 002D477C  48 00 01 58 */	b lbl_802D7994
lbl_802D7840:
/* 802D7840 002D4780  28 00 00 07 */	cmplwi r0, 7
/* 802D7844 002D4784  40 82 00 14 */	bne lbl_802D7858
/* 802D7848 002D4788  7F E3 FB 78 */	mr r3, r31
/* 802D784C 002D478C  38 80 00 03 */	li r4, 3
/* 802D7850 002D4790  48 00 92 51 */	bl startDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7854 002D4794  48 00 01 40 */	b lbl_802D7994
lbl_802D7858:
/* 802D7858 002D4798  28 00 00 08 */	cmplwi r0, 8
/* 802D785C 002D479C  40 82 00 20 */	bne lbl_802D787C
/* 802D7860 002D47A0  7F E3 FB 78 */	mr r3, r31
/* 802D7864 002D47A4  38 80 00 00 */	li r4, 0
/* 802D7868 002D47A8  48 00 8F 8D */	bl createDeadBombLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D786C 002D47AC  7F E3 FB 78 */	mr r3, r31
/* 802D7870 002D47B0  38 80 00 00 */	li r4, 0
/* 802D7874 002D47B4  48 00 92 8D */	bl finishDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7878 002D47B8  48 00 01 1C */	b lbl_802D7994
lbl_802D787C:
/* 802D787C 002D47BC  28 00 00 09 */	cmplwi r0, 9
/* 802D7880 002D47C0  40 82 00 20 */	bne lbl_802D78A0
/* 802D7884 002D47C4  7F E3 FB 78 */	mr r3, r31
/* 802D7888 002D47C8  38 80 00 01 */	li r4, 1
/* 802D788C 002D47CC  48 00 8F 69 */	bl createDeadBombLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7890 002D47D0  7F E3 FB 78 */	mr r3, r31
/* 802D7894 002D47D4  38 80 00 01 */	li r4, 1
/* 802D7898 002D47D8  48 00 92 69 */	bl finishDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D789C 002D47DC  48 00 00 F8 */	b lbl_802D7994
lbl_802D78A0:
/* 802D78A0 002D47E0  28 00 00 0A */	cmplwi r0, 0xa
/* 802D78A4 002D47E4  40 82 00 80 */	bne lbl_802D7924
/* 802D78A8 002D47E8  7F E3 FB 78 */	mr r3, r31
/* 802D78AC 002D47EC  38 80 00 02 */	li r4, 2
/* 802D78B0 002D47F0  48 00 8F 45 */	bl createDeadBombLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D78B4 002D47F4  7F E3 FB 78 */	mr r3, r31
/* 802D78B8 002D47F8  38 80 00 02 */	li r4, 2
/* 802D78BC 002D47FC  48 00 92 45 */	bl finishDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D78C0 002D4800  7F E3 FB 78 */	mr r3, r31
/* 802D78C4 002D4804  48 00 93 31 */	bl finishDeadBubbleMouthEffect__Q34Game11BigTreasure3ObjFv
/* 802D78C8 002D4808  7F E4 FB 78 */	mr r4, r31
/* 802D78CC 002D480C  38 61 00 08 */	addi r3, r1, 8
/* 802D78D0 002D4810  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D78D4 002D4814  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D78D8 002D4818  7D 89 03 A6 */	mtctr r12
/* 802D78DC 002D481C  4E 80 04 21 */	bctrl 
/* 802D78E0 002D4820  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D78E4 002D4824  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D78E8 002D4828  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D78EC 002D482C  38 80 00 15 */	li r4, 0x15
/* 802D78F0 002D4830  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D78F4 002D4834  38 C0 00 02 */	li r6, 2
/* 802D78F8 002D4838  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D78FC 002D483C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802D7900 002D4840  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D7904 002D4844  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D7908 002D4848  4B F7 A9 35 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802D790C 002D484C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D7910 002D4850  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D7914 002D4854  38 80 00 0C */	li r4, 0xc
/* 802D7918 002D4858  38 C0 00 02 */	li r6, 2
/* 802D791C 002D485C  4B F7 BE 65 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D7920 002D4860  48 00 00 74 */	b lbl_802D7994
lbl_802D7924:
/* 802D7924 002D4864  28 00 00 0B */	cmplwi r0, 0xb
/* 802D7928 002D4868  40 82 00 20 */	bne lbl_802D7948
/* 802D792C 002D486C  7F E3 FB 78 */	mr r3, r31
/* 802D7930 002D4870  38 80 00 03 */	li r4, 3
/* 802D7934 002D4874  48 00 8E C1 */	bl createDeadBombLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7938 002D4878  7F E3 FB 78 */	mr r3, r31
/* 802D793C 002D487C  38 80 00 03 */	li r4, 3
/* 802D7940 002D4880  48 00 91 C1 */	bl finishDeadBubbleLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7944 002D4884  48 00 00 50 */	b lbl_802D7994
lbl_802D7948:
/* 802D7948 002D4888  28 00 00 64 */	cmplwi r0, 0x64
/* 802D794C 002D488C  40 82 00 34 */	bne lbl_802D7980
/* 802D7950 002D4890  7F E3 FB 78 */	mr r3, r31
/* 802D7954 002D4894  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D7958 002D4898  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 802D795C 002D489C  7D 89 03 A6 */	mtctr r12
/* 802D7960 002D48A0  4E 80 04 21 */	bctrl 
/* 802D7964 002D48A4  7F E3 FB 78 */	mr r3, r31
/* 802D7968 002D48A8  48 00 62 59 */	bl releaseItemLoozy__Q34Game11BigTreasure3ObjFv
/* 802D796C 002D48AC  7F E3 FB 78 */	mr r3, r31
/* 802D7970 002D48B0  48 00 90 A1 */	bl createDeadBombBodyEffect__Q34Game11BigTreasure3ObjFv
/* 802D7974 002D48B4  7F E3 FB 78 */	mr r3, r31
/* 802D7978 002D48B8  48 00 92 19 */	bl finishDeadBubbleBodyEffect__Q34Game11BigTreasure3ObjFv
/* 802D797C 002D48BC  48 00 00 18 */	b lbl_802D7994
lbl_802D7980:
/* 802D7980 002D48C0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D7984 002D48C4  40 82 00 10 */	bne lbl_802D7994
/* 802D7988 002D48C8  7F E3 FB 78 */	mr r3, r31
/* 802D798C 002D48CC  38 80 00 00 */	li r4, 0
/* 802D7990 002D48D0  4B E6 37 61 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_802D7994:
/* 802D7994 002D48D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D7998 002D48D8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D799C 002D48DC  7C 08 03 A6 */	mtlr r0
/* 802D79A0 002D48E0  38 21 00 30 */	addi r1, r1, 0x30
/* 802D79A4 002D48E4  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure9StateDeadFPQ24Game9EnemyBase:
/* 802D79A8 002D48E8  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D79AC 002D48EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D79B0 002D48F0  7C 08 02 A6 */	mflr r0
/* 802D79B4 002D48F4  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D79B8 002D48F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D79BC 002D48FC  38 00 FF FF */	li r0, -1
/* 802D79C0 002D4900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D79C4 002D4904  7C 9F 23 78 */	mr r31, r4
/* 802D79C8 002D4908  7F E3 FB 78 */	mr r3, r31
/* 802D79CC 002D490C  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D79D0 002D4910  38 80 00 00 */	li r4, 0
/* 802D79D4 002D4914  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D79D8 002D4918  48 00 6B E9 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D79DC 002D491C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802D79E0 002D4920  38 00 00 00 */	li r0, 0
/* 802D79E4 002D4924  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D79E8 002D4928  7F E3 FB 78 */	mr r3, r31
/* 802D79EC 002D492C  64 85 00 40 */	oris r5, r4, 0x40
/* 802D79F0 002D4930  38 80 00 00 */	li r4, 0
/* 802D79F4 002D4934  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802D79F8 002D4938  38 A0 00 00 */	li r5, 0
/* 802D79FC 002D493C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D7A00 002D4940  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D7A04 002D4944  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D7A08 002D4948  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D7A0C 002D494C  48 00 75 45 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D7A10 002D4950  7F E3 FB 78 */	mr r3, r31
/* 802D7A14 002D4954  4B E2 F8 CD */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802D7A18 002D4958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7A1C 002D495C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D7A20 002D4960  7C 08 03 A6 */	mtlr r0
/* 802D7A24 002D4964  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7A28 002D4968  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBase:
/* 802D7A2C 002D496C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D7A30 002D4970  7C 08 02 A6 */	mflr r0
/* 802D7A34 002D4974  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D7A38 002D4978  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802D7A3C 002D497C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802D7A40 002D4980  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D7A44 002D4984  C0 02 E7 28 */	lfs f0, lbl_8051CA88@sda21(r2)
/* 802D7A48 002D4988  7C 9F 23 78 */	mr r31, r4
/* 802D7A4C 002D498C  C0 44 02 C0 */	lfs f2, 0x2c0(r4)
/* 802D7A50 002D4990  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802D7A54 002D4994  40 80 00 80 */	bge lbl_802D7AD4
/* 802D7A58 002D4998  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7A5C 002D499C  7F E3 FB 78 */	mr r3, r31
/* 802D7A60 002D49A0  38 80 00 00 */	li r4, 0
/* 802D7A64 002D49A4  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802D7A68 002D49A8  FC 20 F8 90 */	fmr f1, f31
/* 802D7A6C 002D49AC  4B E3 D0 55 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 802D7A70 002D49B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7A74 002D49B4  41 82 00 0C */	beq lbl_802D7A80
/* 802D7A78 002D49B8  38 00 00 01 */	li r0, 1
/* 802D7A7C 002D49BC  48 00 00 28 */	b lbl_802D7AA4
lbl_802D7A80:
/* 802D7A80 002D49C0  FC 20 F8 90 */	fmr f1, f31
/* 802D7A84 002D49C4  7F E3 FB 78 */	mr r3, r31
/* 802D7A88 002D49C8  38 80 00 00 */	li r4, 0
/* 802D7A8C 002D49CC  4B E3 CC A9 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802D7A90 002D49D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7A94 002D49D4  41 82 00 0C */	beq lbl_802D7AA0
/* 802D7A98 002D49D8  38 00 00 01 */	li r0, 1
/* 802D7A9C 002D49DC  48 00 00 08 */	b lbl_802D7AA4
lbl_802D7AA0:
/* 802D7AA0 002D49E0  38 00 00 00 */	li r0, 0
lbl_802D7AA4:
/* 802D7AA4 002D49E4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802D7AA8 002D49E8  41 82 00 64 */	beq lbl_802D7B0C
/* 802D7AAC 002D49EC  7F E3 FB 78 */	mr r3, r31
/* 802D7AB0 002D49F0  48 00 96 E5 */	bl startBigTreasureBootUpDemo__Q34Game11BigTreasure3ObjFv
/* 802D7AB4 002D49F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7AB8 002D49F8  41 82 00 10 */	beq lbl_802D7AC8
/* 802D7ABC 002D49FC  C0 02 E7 28 */	lfs f0, lbl_8051CA88@sda21(r2)
/* 802D7AC0 002D4A00  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D7AC4 002D4A04  48 00 00 48 */	b lbl_802D7B0C
lbl_802D7AC8:
/* 802D7AC8 002D4A08  C0 02 E7 2C */	lfs f0, lbl_8051CA8C@sda21(r2)
/* 802D7ACC 002D4A0C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D7AD0 002D4A10  48 00 00 3C */	b lbl_802D7B0C
lbl_802D7AD4:
/* 802D7AD4 002D4A14  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802D7AD8 002D4A18  C0 02 E7 2C */	lfs f0, lbl_8051CA8C@sda21(r2)
/* 802D7ADC 002D4A1C  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802D7AE0 002D4A20  EC 22 08 2A */	fadds f1, f2, f1
/* 802D7AE4 002D4A24  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 802D7AE8 002D4A28  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D7AEC 002D4A2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D7AF0 002D4A30  40 81 00 1C */	ble lbl_802D7B0C
/* 802D7AF4 002D4A34  81 83 00 00 */	lwz r12, 0(r3)
/* 802D7AF8 002D4A38  38 A0 00 02 */	li r5, 2
/* 802D7AFC 002D4A3C  38 C0 00 00 */	li r6, 0
/* 802D7B00 002D4A40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D7B04 002D4A44  7D 89 03 A6 */	mtctr r12
/* 802D7B08 002D4A48  4E 80 04 21 */	bctrl 
lbl_802D7B0C:
/* 802D7B0C 002D4A4C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802D7B10 002D4A50  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D7B14 002D4A54  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802D7B18 002D4A58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D7B1C 002D4A5C  7C 08 03 A6 */	mtlr r0
/* 802D7B20 002D4A60  38 21 00 20 */	addi r1, r1, 0x20
/* 802D7B24 002D4A64  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure9StateStayFPQ24Game9EnemyBase:
/* 802D7B28 002D4A68  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D7B2C 002D4A6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D7B30 002D4A70  7C 08 02 A6 */	mflr r0
/* 802D7B34 002D4A74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D7B38 002D4A78  38 00 FF FF */	li r0, -1
/* 802D7B3C 002D4A7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D7B40 002D4A80  7C 9F 23 78 */	mr r31, r4
/* 802D7B44 002D4A84  38 80 00 00 */	li r4, 0
/* 802D7B48 002D4A88  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D7B4C 002D4A8C  7F E3 FB 78 */	mr r3, r31
/* 802D7B50 002D4A90  48 00 6A 71 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D7B54 002D4A94  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D7B58 002D4A98  38 00 00 00 */	li r0, 0
/* 802D7B5C 002D4A9C  7F E3 FB 78 */	mr r3, r31
/* 802D7B60 002D4AA0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D7B64 002D4AA4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D7B68 002D4AA8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D7B6C 002D4AAC  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D7B70 002D4AB0  4B E2 9E 5D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D7B74 002D4AB4  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802D7B78 002D4AB8  7F E4 FB 78 */	mr r4, r31
/* 802D7B7C 002D4ABC  4B F6 A2 65 */	bl addJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802D7B80 002D4AC0  7F E3 FB 78 */	mr r3, r31
/* 802D7B84 002D4AC4  4B E2 F6 81 */	bl startMotion__Q24Game9EnemyBaseFv
/* 802D7B88 002D4AC8  7F E3 FB 78 */	mr r3, r31
/* 802D7B8C 002D4ACC  48 00 8B 19 */	bl createAppearBodyEffect__Q34Game11BigTreasure3ObjFv
/* 802D7B90 002D4AD0  7F E3 FB 78 */	mr r3, r31
/* 802D7B94 002D4AD4  38 80 00 01 */	li r4, 1
/* 802D7B98 002D4AD8  48 00 8B FD */	bl createAppearLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7B9C 002D4ADC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7BA0 002D4AE0  7F E3 FB 78 */	mr r3, r31
/* 802D7BA4 002D4AE4  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D7BA8 002D4AE8  38 80 00 00 */	li r4, 0
/* 802D7BAC 002D4AEC  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D7BB0 002D4AF0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D7BB4 002D4AF4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D7BB8 002D4AF8  4B E3 B5 65 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D7BBC 002D4AFC  7F E3 FB 78 */	mr r3, r31
/* 802D7BC0 002D4B00  48 00 7D 15 */	bl setBossAppearBGM__Q34Game11BigTreasure3ObjFv
/* 802D7BC4 002D4B04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7BC8 002D4B08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D7BCC 002D4B0C  7C 08 03 A6 */	mtlr r0
/* 802D7BD0 002D4B10  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7BD4 002D4B14  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBase:
/* 802D7BD8 002D4B18  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D7BDC 002D4B1C  7C 08 02 A6 */	mflr r0
/* 802D7BE0 002D4B20  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D7BE4 002D4B24  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D7BE8 002D4B28  7C 9F 23 78 */	mr r31, r4
/* 802D7BEC 002D4B2C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D7BF0 002D4B30  7C 7E 1B 78 */	mr r30, r3
/* 802D7BF4 002D4B34  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802D7BF8 002D4B38  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802D7BFC 002D4B3C  28 00 00 00 */	cmplwi r0, 0
/* 802D7C00 002D4B40  41 82 02 E4 */	beq lbl_802D7EE4
/* 802D7C04 002D4B44  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802D7C08 002D4B48  28 00 00 02 */	cmplwi r0, 2
/* 802D7C0C 002D4B4C  40 82 00 38 */	bne lbl_802D7C44
/* 802D7C10 002D4B50  80 BF 02 80 */	lwz r5, 0x280(r31)
/* 802D7C14 002D4B54  7F E3 FB 78 */	mr r3, r31
/* 802D7C18 002D4B58  38 80 00 01 */	li r4, 1
/* 802D7C1C 002D4B5C  48 00 86 DD */	bl createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
/* 802D7C20 002D4B60  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7C24 002D4B64  7F E3 FB 78 */	mr r3, r31
/* 802D7C28 002D4B68  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D7C2C 002D4B6C  38 80 00 00 */	li r4, 0
/* 802D7C30 002D4B70  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D7C34 002D4B74  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D7C38 002D4B78  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D7C3C 002D4B7C  4B E3 B4 E1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D7C40 002D4B80  48 00 02 A4 */	b lbl_802D7EE4
lbl_802D7C44:
/* 802D7C44 002D4B84  28 00 00 03 */	cmplwi r0, 3
/* 802D7C48 002D4B88  40 82 00 14 */	bne lbl_802D7C5C
/* 802D7C4C 002D4B8C  7F E3 FB 78 */	mr r3, r31
/* 802D7C50 002D4B90  38 80 00 02 */	li r4, 2
/* 802D7C54 002D4B94  48 00 8B 41 */	bl createAppearLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7C58 002D4B98  48 00 02 8C */	b lbl_802D7EE4
lbl_802D7C5C:
/* 802D7C5C 002D4B9C  28 00 00 04 */	cmplwi r0, 4
/* 802D7C60 002D4BA0  40 82 00 38 */	bne lbl_802D7C98
/* 802D7C64 002D4BA4  80 BF 02 80 */	lwz r5, 0x280(r31)
/* 802D7C68 002D4BA8  7F E3 FB 78 */	mr r3, r31
/* 802D7C6C 002D4BAC  38 80 00 02 */	li r4, 2
/* 802D7C70 002D4BB0  48 00 86 89 */	bl createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
/* 802D7C74 002D4BB4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7C78 002D4BB8  7F E3 FB 78 */	mr r3, r31
/* 802D7C7C 002D4BBC  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D7C80 002D4BC0  38 80 00 00 */	li r4, 0
/* 802D7C84 002D4BC4  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D7C88 002D4BC8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D7C8C 002D4BCC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D7C90 002D4BD0  4B E3 B4 8D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D7C94 002D4BD4  48 00 02 50 */	b lbl_802D7EE4
lbl_802D7C98:
/* 802D7C98 002D4BD8  28 00 00 05 */	cmplwi r0, 5
/* 802D7C9C 002D4BDC  40 82 00 14 */	bne lbl_802D7CB0
/* 802D7CA0 002D4BE0  7F E3 FB 78 */	mr r3, r31
/* 802D7CA4 002D4BE4  38 80 00 00 */	li r4, 0
/* 802D7CA8 002D4BE8  48 00 8A ED */	bl createAppearLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7CAC 002D4BEC  48 00 02 38 */	b lbl_802D7EE4
lbl_802D7CB0:
/* 802D7CB0 002D4BF0  28 00 00 06 */	cmplwi r0, 6
/* 802D7CB4 002D4BF4  40 82 00 38 */	bne lbl_802D7CEC
/* 802D7CB8 002D4BF8  80 BF 02 80 */	lwz r5, 0x280(r31)
/* 802D7CBC 002D4BFC  7F E3 FB 78 */	mr r3, r31
/* 802D7CC0 002D4C00  38 80 00 00 */	li r4, 0
/* 802D7CC4 002D4C04  48 00 86 35 */	bl createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
/* 802D7CC8 002D4C08  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7CCC 002D4C0C  7F E3 FB 78 */	mr r3, r31
/* 802D7CD0 002D4C10  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D7CD4 002D4C14  38 80 00 00 */	li r4, 0
/* 802D7CD8 002D4C18  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D7CDC 002D4C1C  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D7CE0 002D4C20  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D7CE4 002D4C24  4B E3 B4 39 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D7CE8 002D4C28  48 00 01 FC */	b lbl_802D7EE4
lbl_802D7CEC:
/* 802D7CEC 002D4C2C  28 00 00 07 */	cmplwi r0, 7
/* 802D7CF0 002D4C30  40 82 00 14 */	bne lbl_802D7D04
/* 802D7CF4 002D4C34  7F E3 FB 78 */	mr r3, r31
/* 802D7CF8 002D4C38  38 80 00 03 */	li r4, 3
/* 802D7CFC 002D4C3C  48 00 8A 99 */	bl createAppearLegEffect__Q34Game11BigTreasure3ObjFi
/* 802D7D00 002D4C40  48 00 01 E4 */	b lbl_802D7EE4
lbl_802D7D04:
/* 802D7D04 002D4C44  28 00 00 08 */	cmplwi r0, 8
/* 802D7D08 002D4C48  40 82 00 38 */	bne lbl_802D7D40
/* 802D7D0C 002D4C4C  80 BF 02 80 */	lwz r5, 0x280(r31)
/* 802D7D10 002D4C50  7F E3 FB 78 */	mr r3, r31
/* 802D7D14 002D4C54  38 80 00 03 */	li r4, 3
/* 802D7D18 002D4C58  48 00 85 E1 */	bl createOnGroundEffect__Q34Game11BigTreasure3ObjFiPQ24Game8WaterBox
/* 802D7D1C 002D4C5C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7D20 002D4C60  7F E3 FB 78 */	mr r3, r31
/* 802D7D24 002D4C64  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D7D28 002D4C68  38 80 00 00 */	li r4, 0
/* 802D7D2C 002D4C6C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D7D30 002D4C70  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D7D34 002D4C74  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D7D38 002D4C78  4B E3 B3 E5 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D7D3C 002D4C7C  48 00 01 A8 */	b lbl_802D7EE4
lbl_802D7D40:
/* 802D7D40 002D4C80  28 00 00 09 */	cmplwi r0, 9
/* 802D7D44 002D4C84  40 82 00 7C */	bne lbl_802D7DC0
/* 802D7D48 002D4C88  81 84 00 00 */	lwz r12, 0(r4)
/* 802D7D4C 002D4C8C  38 61 00 08 */	addi r3, r1, 8
/* 802D7D50 002D4C90  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D7D54 002D4C94  7D 89 03 A6 */	mtctr r12
/* 802D7D58 002D4C98  4E 80 04 21 */	bctrl 
/* 802D7D5C 002D4C9C  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D7D60 002D4CA0  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D7D64 002D4CA4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D7D68 002D4CA8  38 80 00 02 */	li r4, 2
/* 802D7D6C 002D4CAC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D7D70 002D4CB0  38 C0 00 02 */	li r6, 2
/* 802D7D74 002D4CB4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D7D78 002D4CB8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802D7D7C 002D4CBC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D7D80 002D4CC0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D7D84 002D4CC4  4B F7 A4 B9 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802D7D88 002D4CC8  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D7D8C 002D4CCC  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D7D90 002D4CD0  38 80 00 05 */	li r4, 5
/* 802D7D94 002D4CD4  38 C0 00 02 */	li r6, 2
/* 802D7D98 002D4CD8  4B F7 B9 E9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D7D9C 002D4CDC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D7DA0 002D4CE0  7F E3 FB 78 */	mr r3, r31
/* 802D7DA4 002D4CE4  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D7DA8 002D4CE8  38 80 00 00 */	li r4, 0
/* 802D7DAC 002D4CEC  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D7DB0 002D4CF0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D7DB4 002D4CF4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D7DB8 002D4CF8  4B E3 B3 65 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D7DBC 002D4CFC  48 00 01 28 */	b lbl_802D7EE4
lbl_802D7DC0:
/* 802D7DC0 002D4D00  28 00 00 0A */	cmplwi r0, 0xa
/* 802D7DC4 002D4D04  40 82 00 28 */	bne lbl_802D7DEC
/* 802D7DC8 002D4D08  7F E3 FB 78 */	mr r3, r31
/* 802D7DCC 002D4D0C  48 00 5A 0D */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D7DD0 002D4D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7DD4 002D4D14  40 82 01 10 */	bne lbl_802D7EE4
/* 802D7DD8 002D4D18  7F E3 FB 78 */	mr r3, r31
/* 802D7DDC 002D4D1C  38 80 00 01 */	li r4, 1
/* 802D7DE0 002D4D20  38 A0 00 00 */	li r5, 0
/* 802D7DE4 002D4D24  4B E2 D2 21 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D7DE8 002D4D28  48 00 00 FC */	b lbl_802D7EE4
lbl_802D7DEC:
/* 802D7DEC 002D4D2C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D7DF0 002D4D30  40 82 00 F4 */	bne lbl_802D7EE4
/* 802D7DF4 002D4D34  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D7DF8 002D4D38  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D7DFC 002D4D3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D7E00 002D4D40  4C 40 13 82 */	cror 2, 0, 2
/* 802D7E04 002D4D44  40 82 00 20 */	bne lbl_802D7E24
/* 802D7E08 002D4D48  81 83 00 00 */	lwz r12, 0(r3)
/* 802D7E0C 002D4D4C  38 A0 00 00 */	li r5, 0
/* 802D7E10 002D4D50  38 C0 00 00 */	li r6, 0
/* 802D7E14 002D4D54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D7E18 002D4D58  7D 89 03 A6 */	mtctr r12
/* 802D7E1C 002D4D5C  4E 80 04 21 */	bctrl 
/* 802D7E20 002D4D60  48 00 00 C4 */	b lbl_802D7EE4
lbl_802D7E24:
/* 802D7E24 002D4D64  7F E3 FB 78 */	mr r3, r31
/* 802D7E28 002D4D68  38 80 00 00 */	li r4, 0
/* 802D7E2C 002D4D6C  4B E3 C8 2D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D7E30 002D4D70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7E34 002D4D74  41 82 00 5C */	beq lbl_802D7E90
/* 802D7E38 002D4D78  7F E3 FB 78 */	mr r3, r31
/* 802D7E3C 002D4D7C  48 00 59 9D */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D7E40 002D4D80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7E44 002D4D84  41 82 00 28 */	beq lbl_802D7E6C
/* 802D7E48 002D4D88  7F C3 F3 78 */	mr r3, r30
/* 802D7E4C 002D4D8C  7F E4 FB 78 */	mr r4, r31
/* 802D7E50 002D4D90  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D7E54 002D4D94  38 A0 00 06 */	li r5, 6
/* 802D7E58 002D4D98  38 C0 00 00 */	li r6, 0
/* 802D7E5C 002D4D9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D7E60 002D4DA0  7D 89 03 A6 */	mtctr r12
/* 802D7E64 002D4DA4  4E 80 04 21 */	bctrl 
/* 802D7E68 002D4DA8  48 00 00 7C */	b lbl_802D7EE4
lbl_802D7E6C:
/* 802D7E6C 002D4DAC  7F C3 F3 78 */	mr r3, r30
/* 802D7E70 002D4DB0  7F E4 FB 78 */	mr r4, r31
/* 802D7E74 002D4DB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D7E78 002D4DB8  38 A0 00 05 */	li r5, 5
/* 802D7E7C 002D4DBC  38 C0 00 00 */	li r6, 0
/* 802D7E80 002D4DC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D7E84 002D4DC4  7D 89 03 A6 */	mtctr r12
/* 802D7E88 002D4DC8  4E 80 04 21 */	bctrl 
/* 802D7E8C 002D4DCC  48 00 00 58 */	b lbl_802D7EE4
lbl_802D7E90:
/* 802D7E90 002D4DD0  7F E3 FB 78 */	mr r3, r31
/* 802D7E94 002D4DD4  48 00 59 45 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D7E98 002D4DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D7E9C 002D4DDC  41 82 00 28 */	beq lbl_802D7EC4
/* 802D7EA0 002D4DE0  7F C3 F3 78 */	mr r3, r30
/* 802D7EA4 002D4DE4  7F E4 FB 78 */	mr r4, r31
/* 802D7EA8 002D4DE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D7EAC 002D4DEC  38 A0 00 0B */	li r5, 0xb
/* 802D7EB0 002D4DF0  38 C0 00 00 */	li r6, 0
/* 802D7EB4 002D4DF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D7EB8 002D4DF8  7D 89 03 A6 */	mtctr r12
/* 802D7EBC 002D4DFC  4E 80 04 21 */	bctrl 
/* 802D7EC0 002D4E00  48 00 00 24 */	b lbl_802D7EE4
lbl_802D7EC4:
/* 802D7EC4 002D4E04  7F C3 F3 78 */	mr r3, r30
/* 802D7EC8 002D4E08  7F E4 FB 78 */	mr r4, r31
/* 802D7ECC 002D4E0C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D7ED0 002D4E10  38 A0 00 0A */	li r5, 0xa
/* 802D7ED4 002D4E14  38 C0 00 00 */	li r6, 0
/* 802D7ED8 002D4E18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D7EDC 002D4E1C  7D 89 03 A6 */	mtctr r12
/* 802D7EE0 002D4E20  4E 80 04 21 */	bctrl 
lbl_802D7EE4:
/* 802D7EE4 002D4E24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D7EE8 002D4E28  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D7EEC 002D4E2C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D7EF0 002D4E30  7C 08 03 A6 */	mtlr r0
/* 802D7EF4 002D4E34  38 21 00 30 */	addi r1, r1, 0x30
/* 802D7EF8 002D4E38  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure9StateLandFPQ24Game9EnemyBase:
/* 802D7EFC 002D4E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D7F00 002D4E40  7C 08 02 A6 */	mflr r0
/* 802D7F04 002D4E44  7C 83 23 78 */	mr r3, r4
/* 802D7F08 002D4E48  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D7F0C 002D4E4C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D7F10 002D4E50  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802D7F14 002D4E54  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D7F18 002D4E58  48 00 4E DD */	bl startProgramedIK__Q34Game11BigTreasure3ObjFv
/* 802D7F1C 002D4E5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7F20 002D4E60  7C 08 03 A6 */	mtlr r0
/* 802D7F24 002D4E64  38 21 00 10 */	addi r1, r1, 0x10
/* 802D7F28 002D4E68  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D7F2C 002D4E6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D7F30 002D4E70  7C 08 02 A6 */	mflr r0
/* 802D7F34 002D4E74  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D7F38 002D4E78  38 00 FF FF */	li r0, -1
/* 802D7F3C 002D4E7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D7F40 002D4E80  7C 9F 23 78 */	mr r31, r4
/* 802D7F44 002D4E84  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D7F48 002D4E88  4B DF 16 59 */	bl rand
/* 802D7F4C 002D4E8C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D7F50 002D4E90  3C 00 43 30 */	lis r0, 0x4330
/* 802D7F54 002D4E94  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D7F58 002D4E98  7F E3 FB 78 */	mr r3, r31
/* 802D7F5C 002D4E9C  C8 62 E7 40 */	lfd f3, lbl_8051CAA0@sda21(r2)
/* 802D7F60 002D4EA0  38 80 00 00 */	li r4, 0
/* 802D7F64 002D4EA4  90 01 00 08 */	stw r0, 8(r1)
/* 802D7F68 002D4EA8  C0 22 E7 34 */	lfs f1, lbl_8051CA94@sda21(r2)
/* 802D7F6C 002D4EAC  C8 41 00 08 */	lfd f2, 8(r1)
/* 802D7F70 002D4EB0  C0 02 E7 38 */	lfs f0, lbl_8051CA98@sda21(r2)
/* 802D7F74 002D4EB4  EC 42 18 28 */	fsubs f2, f2, f3
/* 802D7F78 002D4EB8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802D7F7C 002D4EBC  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D7F80 002D4EC0  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D7F84 002D4EC4  48 00 66 3D */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D7F88 002D4EC8  38 00 00 00 */	li r0, 0
/* 802D7F8C 002D4ECC  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D7F90 002D4ED0  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D7F94 002D4ED4  7F E3 FB 78 */	mr r3, r31
/* 802D7F98 002D4ED8  38 80 00 19 */	li r4, 0x19
/* 802D7F9C 002D4EDC  38 A0 00 01 */	li r5, 1
/* 802D7FA0 002D4EE0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D7FA4 002D4EE4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D7FA8 002D4EE8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D7FAC 002D4EEC  48 00 6F A5 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D7FB0 002D4EF0  7F E3 FB 78 */	mr r3, r31
/* 802D7FB4 002D4EF4  48 00 4E F5 */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D7FB8 002D4EF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D7FBC 002D4EFC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D7FC0 002D4F00  7C 08 03 A6 */	mtlr r0
/* 802D7FC4 002D4F04  38 21 00 20 */	addi r1, r1, 0x20
/* 802D7FC8 002D4F08  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBase:
/* 802D7FCC 002D4F0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D7FD0 002D4F10  7C 08 02 A6 */	mflr r0
/* 802D7FD4 002D4F14  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D7FD8 002D4F18  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D7FDC 002D4F1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D7FE0 002D4F20  7C 9F 23 78 */	mr r31, r4
/* 802D7FE4 002D4F24  93 C1 00 08 */	stw r30, 8(r1)
/* 802D7FE8 002D4F28  7C 7E 1B 78 */	mr r30, r3
/* 802D7FEC 002D4F2C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802D7FF0 002D4F30  C0 44 02 C0 */	lfs f2, 0x2c0(r4)
/* 802D7FF4 002D4F34  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802D7FF8 002D4F38  EC 22 08 2A */	fadds f1, f2, f1
/* 802D7FFC 002D4F3C  D0 24 02 C0 */	stfs f1, 0x2c0(r4)
/* 802D8000 002D4F40  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802D8004 002D4F44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8008 002D4F48  4C 40 13 82 */	cror 2, 0, 2
/* 802D800C 002D4F4C  40 82 00 18 */	bne lbl_802D8024
/* 802D8010 002D4F50  38 00 00 00 */	li r0, 0
/* 802D8014 002D4F54  7F E3 FB 78 */	mr r3, r31
/* 802D8018 002D4F58  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D801C 002D4F5C  4B E2 D2 85 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D8020 002D4F60  48 00 00 4C */	b lbl_802D806C
lbl_802D8024:
/* 802D8024 002D4F64  7F E3 FB 78 */	mr r3, r31
/* 802D8028 002D4F68  38 80 00 00 */	li r4, 0
/* 802D802C 002D4F6C  4B E3 C6 2D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D8030 002D4F70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8034 002D4F74  41 82 00 18 */	beq lbl_802D804C
/* 802D8038 002D4F78  38 00 00 05 */	li r0, 5
/* 802D803C 002D4F7C  7F E3 FB 78 */	mr r3, r31
/* 802D8040 002D4F80  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8044 002D4F84  4B E2 D2 5D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D8048 002D4F88  48 00 00 24 */	b lbl_802D806C
lbl_802D804C:
/* 802D804C 002D4F8C  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D8050 002D4F90  C0 02 E7 34 */	lfs f0, lbl_8051CA94@sda21(r2)
/* 802D8054 002D4F94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8058 002D4F98  40 81 00 14 */	ble lbl_802D806C
/* 802D805C 002D4F9C  38 00 00 0A */	li r0, 0xa
/* 802D8060 002D4FA0  7F E3 FB 78 */	mr r3, r31
/* 802D8064 002D4FA4  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8068 002D4FA8  4B E2 D2 39 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D806C:
/* 802D806C 002D4FAC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D8070 002D4FB0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D8074 002D4FB4  28 00 00 00 */	cmplwi r0, 0
/* 802D8078 002D4FB8  41 82 00 7C */	beq lbl_802D80F4
/* 802D807C 002D4FBC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D8080 002D4FC0  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D8084 002D4FC4  40 82 00 10 */	bne lbl_802D8094
/* 802D8088 002D4FC8  7F E3 FB 78 */	mr r3, r31
/* 802D808C 002D4FCC  48 00 6F E1 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D8090 002D4FD0  48 00 00 64 */	b lbl_802D80F4
lbl_802D8094:
/* 802D8094 002D4FD4  28 00 00 00 */	cmplwi r0, 0
/* 802D8098 002D4FD8  40 82 00 34 */	bne lbl_802D80CC
/* 802D809C 002D4FDC  7F E3 FB 78 */	mr r3, r31
/* 802D80A0 002D4FE0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D80A4 002D4FE4  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802D80A8 002D4FE8  7D 89 03 A6 */	mtctr r12
/* 802D80AC 002D4FEC  4E 80 04 21 */	bctrl 
/* 802D80B0 002D4FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D80B4 002D4FF4  38 80 59 4E */	li r4, 0x594e
/* 802D80B8 002D4FF8  38 A0 00 00 */	li r5, 0
/* 802D80BC 002D4FFC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D80C0 002D5000  7D 89 03 A6 */	mtctr r12
/* 802D80C4 002D5004  4E 80 04 21 */	bctrl 
/* 802D80C8 002D5008  48 00 00 2C */	b lbl_802D80F4
lbl_802D80CC:
/* 802D80CC 002D500C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D80D0 002D5010  40 82 00 24 */	bne lbl_802D80F4
/* 802D80D4 002D5014  7F C3 F3 78 */	mr r3, r30
/* 802D80D8 002D5018  7F E4 FB 78 */	mr r4, r31
/* 802D80DC 002D501C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D80E0 002D5020  38 C0 00 00 */	li r6, 0
/* 802D80E4 002D5024  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802D80E8 002D5028  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D80EC 002D502C  7D 89 03 A6 */	mtctr r12
/* 802D80F0 002D5030  4E 80 04 21 */	bctrl 
lbl_802D80F4:
/* 802D80F4 002D5034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D80F8 002D5038  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D80FC 002D503C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D8100 002D5040  7C 08 03 A6 */	mtlr r0
/* 802D8104 002D5044  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8108 002D5048  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure9StateWaitFPQ24Game9EnemyBase:
/* 802D810C 002D504C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8110 002D5050  7C 08 02 A6 */	mflr r0
/* 802D8114 002D5054  7C 83 23 78 */	mr r3, r4
/* 802D8118 002D5058  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D811C 002D505C  48 00 4D B1 */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8120 002D5060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8124 002D5064  7C 08 03 A6 */	mtlr r0
/* 802D8128 002D5068  38 21 00 10 */	addi r1, r1, 0x10
/* 802D812C 002D506C  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D8130 002D5070  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D8134 002D5074  7C 08 02 A6 */	mflr r0
/* 802D8138 002D5078  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D813C 002D507C  38 00 FF FF */	li r0, -1
/* 802D8140 002D5080  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D8144 002D5084  7C 9F 23 78 */	mr r31, r4
/* 802D8148 002D5088  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D814C 002D508C  4B DF 14 55 */	bl rand
/* 802D8150 002D5090  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D8154 002D5094  3C 00 43 30 */	lis r0, 0x4330
/* 802D8158 002D5098  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D815C 002D509C  7F E3 FB 78 */	mr r3, r31
/* 802D8160 002D50A0  C8 62 E7 40 */	lfd f3, lbl_8051CAA0@sda21(r2)
/* 802D8164 002D50A4  38 80 00 00 */	li r4, 0
/* 802D8168 002D50A8  90 01 00 08 */	stw r0, 8(r1)
/* 802D816C 002D50AC  C0 22 E7 34 */	lfs f1, lbl_8051CA94@sda21(r2)
/* 802D8170 002D50B0  C8 41 00 08 */	lfd f2, 8(r1)
/* 802D8174 002D50B4  C0 02 E7 38 */	lfs f0, lbl_8051CA98@sda21(r2)
/* 802D8178 002D50B8  EC 42 18 28 */	fsubs f2, f2, f3
/* 802D817C 002D50BC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802D8180 002D50C0  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D8184 002D50C4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8188 002D50C8  48 00 64 39 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D818C 002D50CC  38 00 00 00 */	li r0, 0
/* 802D8190 002D50D0  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8194 002D50D4  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D8198 002D50D8  7F E3 FB 78 */	mr r3, r31
/* 802D819C 002D50DC  38 80 00 02 */	li r4, 2
/* 802D81A0 002D50E0  38 A0 00 01 */	li r5, 1
/* 802D81A4 002D50E4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D81A8 002D50E8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D81AC 002D50EC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D81B0 002D50F0  48 00 6D A1 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D81B4 002D50F4  7F E3 FB 78 */	mr r3, r31
/* 802D81B8 002D50F8  48 00 4C F1 */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D81BC 002D50FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D81C0 002D5100  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D81C4 002D5104  7C 08 03 A6 */	mtlr r0
/* 802D81C8 002D5108  38 21 00 20 */	addi r1, r1, 0x20
/* 802D81CC 002D510C  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBase:
/* 802D81D0 002D5110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D81D4 002D5114  7C 08 02 A6 */	mflr r0
/* 802D81D8 002D5118  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D81DC 002D511C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D81E0 002D5120  7C 9F 23 78 */	mr r31, r4
/* 802D81E4 002D5124  93 C1 00 08 */	stw r30, 8(r1)
/* 802D81E8 002D5128  7C 7E 1B 78 */	mr r30, r3
/* 802D81EC 002D512C  7F E3 FB 78 */	mr r3, r31
/* 802D81F0 002D5130  48 00 55 E9 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D81F4 002D5134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D81F8 002D5138  40 82 00 28 */	bne lbl_802D8220
/* 802D81FC 002D513C  7F C3 F3 78 */	mr r3, r30
/* 802D8200 002D5140  7F E4 FB 78 */	mr r4, r31
/* 802D8204 002D5144  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8208 002D5148  38 A0 00 09 */	li r5, 9
/* 802D820C 002D514C  38 C0 00 00 */	li r6, 0
/* 802D8210 002D5150  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8214 002D5154  7D 89 03 A6 */	mtctr r12
/* 802D8218 002D5158  4E 80 04 21 */	bctrl 
/* 802D821C 002D515C  48 00 00 C0 */	b lbl_802D82DC
lbl_802D8220:
/* 802D8220 002D5160  7F E3 FB 78 */	mr r3, r31
/* 802D8224 002D5164  38 80 00 00 */	li r4, 0
/* 802D8228 002D5168  4B E3 C4 31 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D822C 002D516C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8230 002D5170  40 82 00 14 */	bne lbl_802D8244
/* 802D8234 002D5174  7F E3 FB 78 */	mr r3, r31
/* 802D8238 002D5178  48 00 43 45 */	bl isAttackLimitTime__Q34Game11BigTreasure3ObjFv
/* 802D823C 002D517C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8240 002D5180  41 82 00 18 */	beq lbl_802D8258
lbl_802D8244:
/* 802D8244 002D5184  38 00 00 06 */	li r0, 6
/* 802D8248 002D5188  7F E3 FB 78 */	mr r3, r31
/* 802D824C 002D518C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8250 002D5190  4B E2 D0 51 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D8254 002D5194  48 00 00 24 */	b lbl_802D8278
lbl_802D8258:
/* 802D8258 002D5198  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D825C 002D519C  C0 02 E7 34 */	lfs f0, lbl_8051CA94@sda21(r2)
/* 802D8260 002D51A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8264 002D51A4  40 81 00 14 */	ble lbl_802D8278
/* 802D8268 002D51A8  38 00 00 0B */	li r0, 0xb
/* 802D826C 002D51AC  7F E3 FB 78 */	mr r3, r31
/* 802D8270 002D51B0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8274 002D51B4  4B E2 D0 2D */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D8278:
/* 802D8278 002D51B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D827C 002D51BC  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D8280 002D51C0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D8284 002D51C4  EC 01 00 2A */	fadds f0, f1, f0
/* 802D8288 002D51C8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D828C 002D51CC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D8290 002D51D0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D8294 002D51D4  28 00 00 00 */	cmplwi r0, 0
/* 802D8298 002D51D8  41 82 00 44 */	beq lbl_802D82DC
/* 802D829C 002D51DC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D82A0 002D51E0  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D82A4 002D51E4  40 82 00 10 */	bne lbl_802D82B4
/* 802D82A8 002D51E8  7F E3 FB 78 */	mr r3, r31
/* 802D82AC 002D51EC  48 00 6D C1 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D82B0 002D51F0  48 00 00 2C */	b lbl_802D82DC
lbl_802D82B4:
/* 802D82B4 002D51F4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D82B8 002D51F8  40 82 00 24 */	bne lbl_802D82DC
/* 802D82BC 002D51FC  7F C3 F3 78 */	mr r3, r30
/* 802D82C0 002D5200  7F E4 FB 78 */	mr r4, r31
/* 802D82C4 002D5204  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D82C8 002D5208  38 C0 00 00 */	li r6, 0
/* 802D82CC 002D520C  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802D82D0 002D5210  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D82D4 002D5214  7D 89 03 A6 */	mtctr r12
/* 802D82D8 002D5218  4E 80 04 21 */	bctrl 
lbl_802D82DC:
/* 802D82DC 002D521C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D82E0 002D5220  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D82E4 002D5224  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D82E8 002D5228  7C 08 03 A6 */	mtlr r0
/* 802D82EC 002D522C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D82F0 002D5230  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure13StateItemWaitFPQ24Game9EnemyBase:
/* 802D82F4 002D5234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D82F8 002D5238  7C 08 02 A6 */	mflr r0
/* 802D82FC 002D523C  7C 83 23 78 */	mr r3, r4
/* 802D8300 002D5240  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8304 002D5244  48 00 4B C9 */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8308 002D5248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D830C 002D524C  7C 08 03 A6 */	mtlr r0
/* 802D8310 002D5250  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8314 002D5254  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D8318 002D5258  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D831C 002D525C  7C 08 02 A6 */	mflr r0
/* 802D8320 002D5260  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8324 002D5264  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8328 002D5268  38 00 FF FF */	li r0, -1
/* 802D832C 002D526C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8330 002D5270  7C 9F 23 78 */	mr r31, r4
/* 802D8334 002D5274  7F E3 FB 78 */	mr r3, r31
/* 802D8338 002D5278  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D833C 002D527C  38 80 00 00 */	li r4, 0
/* 802D8340 002D5280  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8344 002D5284  48 00 62 7D */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8348 002D5288  38 00 00 00 */	li r0, 0
/* 802D834C 002D528C  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8350 002D5290  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D8354 002D5294  7F E3 FB 78 */	mr r3, r31
/* 802D8358 002D5298  38 80 00 1A */	li r4, 0x1a
/* 802D835C 002D529C  38 A0 00 01 */	li r5, 1
/* 802D8360 002D52A0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D8364 002D52A4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D8368 002D52A8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D836C 002D52AC  48 00 6B E5 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8370 002D52B0  7F E3 FB 78 */	mr r3, r31
/* 802D8374 002D52B4  48 00 4B 35 */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8378 002D52B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D837C 002D52BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8380 002D52C0  7C 08 03 A6 */	mtlr r0
/* 802D8384 002D52C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8388 002D52C8  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBase:
/* 802D838C 002D52CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8390 002D52D0  7C 08 02 A6 */	mflr r0
/* 802D8394 002D52D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8398 002D52D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D839C 002D52DC  7C 9F 23 78 */	mr r31, r4
/* 802D83A0 002D52E0  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802D83A4 002D52E4  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802D83A8 002D52E8  28 00 00 00 */	cmplwi r0, 0
/* 802D83AC 002D52EC  41 82 00 A8 */	beq lbl_802D8454
/* 802D83B0 002D52F0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802D83B4 002D52F4  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D83B8 002D52F8  40 82 00 10 */	bne lbl_802D83C8
/* 802D83BC 002D52FC  7F E3 FB 78 */	mr r3, r31
/* 802D83C0 002D5300  48 00 6C AD */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D83C4 002D5304  48 00 00 90 */	b lbl_802D8454
lbl_802D83C8:
/* 802D83C8 002D5308  28 00 00 02 */	cmplwi r0, 2
/* 802D83CC 002D530C  40 82 00 38 */	bne lbl_802D8404
/* 802D83D0 002D5310  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D83D4 002D5314  7F E3 FB 78 */	mr r3, r31
/* 802D83D8 002D5318  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D83DC 002D531C  38 80 00 00 */	li r4, 0
/* 802D83E0 002D5320  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D83E4 002D5324  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D83E8 002D5328  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D83EC 002D532C  4B E3 AD 31 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D83F0 002D5330  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D83F4 002D5334  7F E3 FB 78 */	mr r3, r31
/* 802D83F8 002D5338  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802D83FC 002D533C  48 00 70 A9 */	bl startBossFlickBGM__Q34Game11BigTreasure3ObjFv
/* 802D8400 002D5340  48 00 00 54 */	b lbl_802D8454
lbl_802D8404:
/* 802D8404 002D5344  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D8408 002D5348  40 82 00 4C */	bne lbl_802D8454
/* 802D840C 002D534C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D8410 002D5350  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8414 002D5354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8418 002D5358  4C 40 13 82 */	cror 2, 0, 2
/* 802D841C 002D535C  40 82 00 20 */	bne lbl_802D843C
/* 802D8420 002D5360  81 83 00 00 */	lwz r12, 0(r3)
/* 802D8424 002D5364  38 A0 00 00 */	li r5, 0
/* 802D8428 002D5368  38 C0 00 00 */	li r6, 0
/* 802D842C 002D536C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8430 002D5370  7D 89 03 A6 */	mtctr r12
/* 802D8434 002D5374  4E 80 04 21 */	bctrl 
/* 802D8438 002D5378  48 00 00 1C */	b lbl_802D8454
lbl_802D843C:
/* 802D843C 002D537C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D8440 002D5380  38 A0 00 0A */	li r5, 0xa
/* 802D8444 002D5384  38 C0 00 00 */	li r6, 0
/* 802D8448 002D5388  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D844C 002D538C  7D 89 03 A6 */	mtctr r12
/* 802D8450 002D5390  4E 80 04 21 */	bctrl 
lbl_802D8454:
/* 802D8454 002D5394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8458 002D5398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D845C 002D539C  7C 08 03 A6 */	mtlr r0
/* 802D8460 002D53A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8464 002D53A4  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure10StateFlickFPQ24Game9EnemyBase:
/* 802D8468 002D53A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D846C 002D53AC  7C 08 02 A6 */	mflr r0
/* 802D8470 002D53B0  7C 83 23 78 */	mr r3, r4
/* 802D8474 002D53B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8478 002D53B8  48 00 4A 55 */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D847C 002D53BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8480 002D53C0  7C 08 03 A6 */	mtlr r0
/* 802D8484 002D53C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8488 002D53C8  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D848C 002D53CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8490 002D53D0  7C 08 02 A6 */	mflr r0
/* 802D8494 002D53D4  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8498 002D53D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D849C 002D53DC  38 00 FF FF */	li r0, -1
/* 802D84A0 002D53E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D84A4 002D53E4  7C 9F 23 78 */	mr r31, r4
/* 802D84A8 002D53E8  7F E3 FB 78 */	mr r3, r31
/* 802D84AC 002D53EC  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D84B0 002D53F0  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802D84B4 002D53F4  48 00 40 6D */	bl resetAttackLimitTimer__Q34Game11BigTreasure3ObjFv
/* 802D84B8 002D53F8  7F E3 FB 78 */	mr r3, r31
/* 802D84BC 002D53FC  38 80 00 00 */	li r4, 0
/* 802D84C0 002D5400  48 00 61 01 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D84C4 002D5404  38 00 00 00 */	li r0, 0
/* 802D84C8 002D5408  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D84CC 002D540C  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D84D0 002D5410  7F E3 FB 78 */	mr r3, r31
/* 802D84D4 002D5414  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D84D8 002D5418  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D84DC 002D541C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D84E0 002D5420  48 00 58 75 */	bl setTreasureAttack__Q34Game11BigTreasure3ObjFv
/* 802D84E4 002D5424  7F E3 FB 78 */	mr r3, r31
/* 802D84E8 002D5428  48 00 5A 15 */	bl getPreAttackAnimIndex__Q34Game11BigTreasure3ObjFv
/* 802D84EC 002D542C  7C 60 1B 78 */	mr r0, r3
/* 802D84F0 002D5430  7F E3 FB 78 */	mr r3, r31
/* 802D84F4 002D5434  7C 04 03 78 */	mr r4, r0
/* 802D84F8 002D5438  38 A0 00 01 */	li r5, 1
/* 802D84FC 002D543C  48 00 6A 55 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8500 002D5440  7F E3 FB 78 */	mr r3, r31
/* 802D8504 002D5444  48 00 49 A5 */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8508 002D5448  7F E3 FB 78 */	mr r3, r31
/* 802D850C 002D544C  48 00 6C 45 */	bl startBossChargeBGM__Q34Game11BigTreasure3ObjFv
/* 802D8510 002D5450  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8514 002D5454  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8518 002D5458  7C 08 03 A6 */	mtlr r0
/* 802D851C 002D545C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8520 002D5460  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBase:
/* 802D8524 002D5464  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D8528 002D5468  7C 08 02 A6 */	mflr r0
/* 802D852C 002D546C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D8530 002D5470  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802D8534 002D5474  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802D8538 002D5478  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D853C 002D547C  93 C1 00 08 */	stw r30, 8(r1)
/* 802D8540 002D5480  7C 9F 23 78 */	mr r31, r4
/* 802D8544 002D5484  7C 7E 1B 78 */	mr r30, r3
/* 802D8548 002D5488  7F E3 FB 78 */	mr r3, r31
/* 802D854C 002D548C  48 00 52 8D */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D8550 002D5490  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8554 002D5494  40 82 00 28 */	bne lbl_802D857C
/* 802D8558 002D5498  7F C3 F3 78 */	mr r3, r30
/* 802D855C 002D549C  7F E4 FB 78 */	mr r4, r31
/* 802D8560 002D54A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8564 002D54A4  38 A0 00 09 */	li r5, 9
/* 802D8568 002D54A8  38 C0 00 00 */	li r6, 0
/* 802D856C 002D54AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8570 002D54B0  7D 89 03 A6 */	mtctr r12
/* 802D8574 002D54B4  4E 80 04 21 */	bctrl 
/* 802D8578 002D54B8  48 00 01 28 */	b lbl_802D86A0
lbl_802D857C:
/* 802D857C 002D54BC  80 9F 04 08 */	lwz r4, 0x408(r31)
/* 802D8580 002D54C0  7F E3 FB 78 */	mr r3, r31
/* 802D8584 002D54C4  48 00 52 B1 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFi
/* 802D8588 002D54C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D858C 002D54CC  40 82 00 28 */	bne lbl_802D85B4
/* 802D8590 002D54D0  7F C3 F3 78 */	mr r3, r30
/* 802D8594 002D54D4  7F E4 FB 78 */	mr r4, r31
/* 802D8598 002D54D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D859C 002D54DC  38 A0 00 06 */	li r5, 6
/* 802D85A0 002D54E0  38 C0 00 00 */	li r6, 0
/* 802D85A4 002D54E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D85A8 002D54E8  7D 89 03 A6 */	mtctr r12
/* 802D85AC 002D54EC  4E 80 04 21 */	bctrl 
/* 802D85B0 002D54F0  48 00 00 F0 */	b lbl_802D86A0
lbl_802D85B4:
/* 802D85B4 002D54F4  C3 FF 02 C0 */	lfs f31, 0x2c0(r31)
/* 802D85B8 002D54F8  7F E3 FB 78 */	mr r3, r31
/* 802D85BC 002D54FC  48 00 5C 2D */	bl getPreAttackTimeMax__Q34Game11BigTreasure3ObjFv
/* 802D85C0 002D5500  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 802D85C4 002D5504  40 81 00 0C */	ble lbl_802D85D0
/* 802D85C8 002D5508  7F E3 FB 78 */	mr r3, r31
/* 802D85CC 002D550C  4B E2 CC D5 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D85D0:
/* 802D85D0 002D5510  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D85D4 002D5514  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D85D8 002D5518  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D85DC 002D551C  EC 01 00 2A */	fadds f0, f1, f0
/* 802D85E0 002D5520  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D85E4 002D5524  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D85E8 002D5528  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D85EC 002D552C  28 00 00 00 */	cmplwi r0, 0
/* 802D85F0 002D5530  41 82 00 B0 */	beq lbl_802D86A0
/* 802D85F4 002D5534  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D85F8 002D5538  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D85FC 002D553C  40 82 00 10 */	bne lbl_802D860C
/* 802D8600 002D5540  7F E3 FB 78 */	mr r3, r31
/* 802D8604 002D5544  48 00 6A 69 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D8608 002D5548  48 00 00 98 */	b lbl_802D86A0
lbl_802D860C:
/* 802D860C 002D554C  28 00 00 02 */	cmplwi r0, 2
/* 802D8610 002D5550  40 82 00 3C */	bne lbl_802D864C
/* 802D8614 002D5554  7F E3 FB 78 */	mr r3, r31
/* 802D8618 002D5558  38 80 00 01 */	li r4, 1
/* 802D861C 002D555C  48 00 5F A5 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8620 002D5560  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D8624 002D5564  7F E3 FB 78 */	mr r3, r31
/* 802D8628 002D5568  C0 82 E7 30 */	lfs f4, lbl_8051CA90@sda21(r2)
/* 802D862C 002D556C  38 80 00 00 */	li r4, 0
/* 802D8630 002D5570  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D8634 002D5574  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D8638 002D5578  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D863C 002D557C  4B E3 AA E1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D8640 002D5580  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8644 002D5584  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802D8648 002D5588  48 00 00 58 */	b lbl_802D86A0
lbl_802D864C:
/* 802D864C 002D558C  28 00 00 03 */	cmplwi r0, 3
/* 802D8650 002D5590  40 82 00 28 */	bne lbl_802D8678
/* 802D8654 002D5594  7F E3 FB 78 */	mr r3, r31
/* 802D8658 002D5598  48 00 5A 0D */	bl getFireAttackAnimIndex__Q34Game11BigTreasure3ObjFv
/* 802D865C 002D559C  7C 64 1B 78 */	mr r4, r3
/* 802D8660 002D55A0  2C 04 00 03 */	cmpwi r4, 3
/* 802D8664 002D55A4  41 82 00 3C */	beq lbl_802D86A0
/* 802D8668 002D55A8  7F E3 FB 78 */	mr r3, r31
/* 802D866C 002D55AC  38 A0 00 00 */	li r5, 0
/* 802D8670 002D55B0  4B E2 C9 95 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D8674 002D55B4  48 00 00 2C */	b lbl_802D86A0
lbl_802D8678:
/* 802D8678 002D55B8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D867C 002D55BC  40 82 00 24 */	bne lbl_802D86A0
/* 802D8680 002D55C0  7F C3 F3 78 */	mr r3, r30
/* 802D8684 002D55C4  7F E4 FB 78 */	mr r4, r31
/* 802D8688 002D55C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D868C 002D55CC  38 A0 00 07 */	li r5, 7
/* 802D8690 002D55D0  38 C0 00 00 */	li r6, 0
/* 802D8694 002D55D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8698 002D55D8  7D 89 03 A6 */	mtctr r12
/* 802D869C 002D55DC  4E 80 04 21 */	bctrl 
lbl_802D86A0:
/* 802D86A0 002D55E0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802D86A4 002D55E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D86A8 002D55E8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802D86AC 002D55EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D86B0 002D55F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D86B4 002D55F4  7C 08 03 A6 */	mtlr r0
/* 802D86B8 002D55F8  38 21 00 20 */	addi r1, r1, 0x20
/* 802D86BC 002D55FC  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure14StatePreAttackFPQ24Game9EnemyBase:
/* 802D86C0 002D5600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D86C4 002D5604  7C 08 02 A6 */	mflr r0
/* 802D86C8 002D5608  7C 83 23 78 */	mr r3, r4
/* 802D86CC 002D560C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D86D0 002D5610  48 00 47 FD */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D86D4 002D5614  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D86D8 002D5618  7C 08 03 A6 */	mtlr r0
/* 802D86DC 002D561C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D86E0 002D5620  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D86E4 002D5624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D86E8 002D5628  7C 08 02 A6 */	mflr r0
/* 802D86EC 002D562C  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D86F0 002D5630  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D86F4 002D5634  38 00 FF FF */	li r0, -1
/* 802D86F8 002D5638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D86FC 002D563C  7C 9F 23 78 */	mr r31, r4
/* 802D8700 002D5640  7F E3 FB 78 */	mr r3, r31
/* 802D8704 002D5644  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D8708 002D5648  38 00 00 00 */	li r0, 0
/* 802D870C 002D564C  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802D8710 002D5650  90 04 02 30 */	stw r0, 0x230(r4)
/* 802D8714 002D5654  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D8718 002D5658  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D871C 002D565C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D8720 002D5660  48 00 58 25 */	bl getAttackAnimIndex__Q34Game11BigTreasure3ObjFv
/* 802D8724 002D5664  7C 60 1B 78 */	mr r0, r3
/* 802D8728 002D5668  7F E3 FB 78 */	mr r3, r31
/* 802D872C 002D566C  7C 04 03 78 */	mr r4, r0
/* 802D8730 002D5670  38 A0 00 01 */	li r5, 1
/* 802D8734 002D5674  48 00 68 1D */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8738 002D5678  7F E3 FB 78 */	mr r3, r31
/* 802D873C 002D567C  48 00 47 6D */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8740 002D5680  7F E3 FB 78 */	mr r3, r31
/* 802D8744 002D5684  48 00 6A D5 */	bl startBossAttackBGM__Q34Game11BigTreasure3ObjFv
/* 802D8748 002D5688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D874C 002D568C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8750 002D5690  7C 08 03 A6 */	mtlr r0
/* 802D8754 002D5694  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8758 002D5698  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBase:
/* 802D875C 002D569C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D8760 002D56A0  7C 08 02 A6 */	mflr r0
/* 802D8764 002D56A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D8768 002D56A8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802D876C 002D56AC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802D8770 002D56B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8774 002D56B4  93 C1 00 08 */	stw r30, 8(r1)
/* 802D8778 002D56B8  7C 9F 23 78 */	mr r31, r4
/* 802D877C 002D56BC  7C 7E 1B 78 */	mr r30, r3
/* 802D8780 002D56C0  7F E3 FB 78 */	mr r3, r31
/* 802D8784 002D56C4  48 00 50 55 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D8788 002D56C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D878C 002D56CC  40 82 00 28 */	bne lbl_802D87B4
/* 802D8790 002D56D0  7F C3 F3 78 */	mr r3, r30
/* 802D8794 002D56D4  7F E4 FB 78 */	mr r4, r31
/* 802D8798 002D56D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D879C 002D56DC  38 A0 00 09 */	li r5, 9
/* 802D87A0 002D56E0  38 C0 00 00 */	li r6, 0
/* 802D87A4 002D56E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D87A8 002D56E8  7D 89 03 A6 */	mtctr r12
/* 802D87AC 002D56EC  4E 80 04 21 */	bctrl 
/* 802D87B0 002D56F0  48 00 00 D4 */	b lbl_802D8884
lbl_802D87B4:
/* 802D87B4 002D56F4  80 9F 04 08 */	lwz r4, 0x408(r31)
/* 802D87B8 002D56F8  7F E3 FB 78 */	mr r3, r31
/* 802D87BC 002D56FC  48 00 50 79 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFi
/* 802D87C0 002D5700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D87C4 002D5704  40 82 00 28 */	bne lbl_802D87EC
/* 802D87C8 002D5708  7F C3 F3 78 */	mr r3, r30
/* 802D87CC 002D570C  7F E4 FB 78 */	mr r4, r31
/* 802D87D0 002D5710  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D87D4 002D5714  38 A0 00 06 */	li r5, 6
/* 802D87D8 002D5718  38 C0 00 00 */	li r6, 0
/* 802D87DC 002D571C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D87E0 002D5720  7D 89 03 A6 */	mtctr r12
/* 802D87E4 002D5724  4E 80 04 21 */	bctrl 
/* 802D87E8 002D5728  48 00 00 9C */	b lbl_802D8884
lbl_802D87EC:
/* 802D87EC 002D572C  C3 FF 02 C0 */	lfs f31, 0x2c0(r31)
/* 802D87F0 002D5730  7F E3 FB 78 */	mr r3, r31
/* 802D87F4 002D5734  48 00 5A 8D */	bl getAttackTimeMax__Q34Game11BigTreasure3ObjFv
/* 802D87F8 002D5738  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 802D87FC 002D573C  40 81 00 0C */	ble lbl_802D8808
/* 802D8800 002D5740  7F E3 FB 78 */	mr r3, r31
/* 802D8804 002D5744  4B E2 CA 9D */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D8808:
/* 802D8808 002D5748  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D880C 002D574C  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D8810 002D5750  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D8814 002D5754  EC 01 00 2A */	fadds f0, f1, f0
/* 802D8818 002D5758  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D881C 002D575C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D8820 002D5760  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D8824 002D5764  28 00 00 00 */	cmplwi r0, 0
/* 802D8828 002D5768  41 82 00 5C */	beq lbl_802D8884
/* 802D882C 002D576C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D8830 002D5770  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D8834 002D5774  40 82 00 0C */	bne lbl_802D8840
/* 802D8838 002D5778  7F E3 FB 78 */	mr r3, r31
/* 802D883C 002D577C  48 00 68 31 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
lbl_802D8840:
/* 802D8840 002D5780  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D8844 002D5784  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D8848 002D5788  28 00 00 02 */	cmplwi r0, 2
/* 802D884C 002D578C  40 82 00 10 */	bne lbl_802D885C
/* 802D8850 002D5790  7F E3 FB 78 */	mr r3, r31
/* 802D8854 002D5794  48 00 54 69 */	bl startAttack__Q34Game11BigTreasure3ObjFv
/* 802D8858 002D5798  48 00 00 2C */	b lbl_802D8884
lbl_802D885C:
/* 802D885C 002D579C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D8860 002D57A0  40 82 00 24 */	bne lbl_802D8884
/* 802D8864 002D57A4  7F C3 F3 78 */	mr r3, r30
/* 802D8868 002D57A8  7F E4 FB 78 */	mr r4, r31
/* 802D886C 002D57AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8870 002D57B0  38 A0 00 08 */	li r5, 8
/* 802D8874 002D57B4  38 C0 00 00 */	li r6, 0
/* 802D8878 002D57B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D887C 002D57BC  7D 89 03 A6 */	mtctr r12
/* 802D8880 002D57C0  4E 80 04 21 */	bctrl 
lbl_802D8884:
/* 802D8884 002D57C4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802D8888 002D57C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D888C 002D57CC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802D8890 002D57D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8894 002D57D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D8898 002D57D8  7C 08 03 A6 */	mtlr r0
/* 802D889C 002D57DC  38 21 00 20 */	addi r1, r1, 0x20
/* 802D88A0 002D57E0  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure11StateAttackFPQ24Game9EnemyBase:
/* 802D88A4 002D57E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D88A8 002D57E8  7C 08 02 A6 */	mflr r0
/* 802D88AC 002D57EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D88B0 002D57F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D88B4 002D57F4  7C 9F 23 78 */	mr r31, r4
/* 802D88B8 002D57F8  7F E3 FB 78 */	mr r3, r31
/* 802D88BC 002D57FC  48 00 46 11 */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D88C0 002D5800  7F E3 FB 78 */	mr r3, r31
/* 802D88C4 002D5804  48 00 54 6D */	bl finishAttack__Q34Game11BigTreasure3ObjFv
/* 802D88C8 002D5808  7F E3 FB 78 */	mr r3, r31
/* 802D88CC 002D580C  48 00 6A 6D */	bl finishBossAttackBGM__Q34Game11BigTreasure3ObjFv
/* 802D88D0 002D5810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D88D4 002D5814  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D88D8 002D5818  7C 08 03 A6 */	mtlr r0
/* 802D88DC 002D581C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D88E0 002D5820  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D88E4 002D5824  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D88E8 002D5828  7C 08 02 A6 */	mflr r0
/* 802D88EC 002D582C  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D88F0 002D5830  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D88F4 002D5834  38 00 FF FF */	li r0, -1
/* 802D88F8 002D5838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D88FC 002D583C  7C 9F 23 78 */	mr r31, r4
/* 802D8900 002D5840  7F E3 FB 78 */	mr r3, r31
/* 802D8904 002D5844  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D8908 002D5848  38 80 00 00 */	li r4, 0
/* 802D890C 002D584C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8910 002D5850  48 00 5C B1 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8914 002D5854  38 00 00 00 */	li r0, 0
/* 802D8918 002D5858  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D891C 002D585C  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D8920 002D5860  7F E3 FB 78 */	mr r3, r31
/* 802D8924 002D5864  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D8928 002D5868  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D892C 002D586C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D8930 002D5870  48 00 56 A5 */	bl getPutItemAnimIndex__Q34Game11BigTreasure3ObjFv
/* 802D8934 002D5874  7C 60 1B 78 */	mr r0, r3
/* 802D8938 002D5878  7F E3 FB 78 */	mr r3, r31
/* 802D893C 002D587C  7C 04 03 78 */	mr r4, r0
/* 802D8940 002D5880  38 A0 00 01 */	li r5, 1
/* 802D8944 002D5884  48 00 66 0D */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8948 002D5888  7F E3 FB 78 */	mr r3, r31
/* 802D894C 002D588C  48 00 45 5D */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8950 002D5890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8954 002D5894  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8958 002D5898  7C 08 03 A6 */	mtlr r0
/* 802D895C 002D589C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8960 002D58A0  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBase:
/* 802D8964 002D58A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8968 002D58A8  7C 08 02 A6 */	mflr r0
/* 802D896C 002D58AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8970 002D58B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8974 002D58B4  7C 9F 23 78 */	mr r31, r4
/* 802D8978 002D58B8  93 C1 00 08 */	stw r30, 8(r1)
/* 802D897C 002D58BC  7C 7E 1B 78 */	mr r30, r3
/* 802D8980 002D58C0  7F E3 FB 78 */	mr r3, r31
/* 802D8984 002D58C4  48 00 4E 55 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D8988 002D58C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D898C 002D58CC  40 82 00 28 */	bne lbl_802D89B4
/* 802D8990 002D58D0  7F C3 F3 78 */	mr r3, r30
/* 802D8994 002D58D4  7F E4 FB 78 */	mr r4, r31
/* 802D8998 002D58D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D899C 002D58DC  38 A0 00 09 */	li r5, 9
/* 802D89A0 002D58E0  38 C0 00 00 */	li r6, 0
/* 802D89A4 002D58E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D89A8 002D58E8  7D 89 03 A6 */	mtctr r12
/* 802D89AC 002D58EC  4E 80 04 21 */	bctrl 
/* 802D89B0 002D58F0  48 00 00 C4 */	b lbl_802D8A74
lbl_802D89B4:
/* 802D89B4 002D58F4  80 9F 04 08 */	lwz r4, 0x408(r31)
/* 802D89B8 002D58F8  7F E3 FB 78 */	mr r3, r31
/* 802D89BC 002D58FC  48 00 4E 79 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFi
/* 802D89C0 002D5900  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D89C4 002D5904  40 82 00 28 */	bne lbl_802D89EC
/* 802D89C8 002D5908  7F C3 F3 78 */	mr r3, r30
/* 802D89CC 002D590C  7F E4 FB 78 */	mr r4, r31
/* 802D89D0 002D5910  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D89D4 002D5914  38 A0 00 06 */	li r5, 6
/* 802D89D8 002D5918  38 C0 00 00 */	li r6, 0
/* 802D89DC 002D591C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D89E0 002D5920  7D 89 03 A6 */	mtctr r12
/* 802D89E4 002D5924  4E 80 04 21 */	bctrl 
/* 802D89E8 002D5928  48 00 00 8C */	b lbl_802D8A74
lbl_802D89EC:
/* 802D89EC 002D592C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D89F0 002D5930  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D89F4 002D5934  28 00 00 00 */	cmplwi r0, 0
/* 802D89F8 002D5938  41 82 00 7C */	beq lbl_802D8A74
/* 802D89FC 002D593C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D8A00 002D5940  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D8A04 002D5944  40 82 00 10 */	bne lbl_802D8A14
/* 802D8A08 002D5948  7F E3 FB 78 */	mr r3, r31
/* 802D8A0C 002D594C  48 00 66 61 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D8A10 002D5950  48 00 00 64 */	b lbl_802D8A74
lbl_802D8A14:
/* 802D8A14 002D5954  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D8A18 002D5958  40 82 00 5C */	bne lbl_802D8A74
/* 802D8A1C 002D595C  7F E3 FB 78 */	mr r3, r31
/* 802D8A20 002D5960  38 80 00 00 */	li r4, 0
/* 802D8A24 002D5964  4B E3 BC 35 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D8A28 002D5968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8A2C 002D596C  41 82 00 28 */	beq lbl_802D8A54
/* 802D8A30 002D5970  7F C3 F3 78 */	mr r3, r30
/* 802D8A34 002D5974  7F E4 FB 78 */	mr r4, r31
/* 802D8A38 002D5978  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8A3C 002D597C  38 A0 00 06 */	li r5, 6
/* 802D8A40 002D5980  38 C0 00 00 */	li r6, 0
/* 802D8A44 002D5984  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8A48 002D5988  7D 89 03 A6 */	mtctr r12
/* 802D8A4C 002D598C  4E 80 04 21 */	bctrl 
/* 802D8A50 002D5990  48 00 00 24 */	b lbl_802D8A74
lbl_802D8A54:
/* 802D8A54 002D5994  7F C3 F3 78 */	mr r3, r30
/* 802D8A58 002D5998  7F E4 FB 78 */	mr r4, r31
/* 802D8A5C 002D599C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8A60 002D59A0  38 A0 00 0B */	li r5, 0xb
/* 802D8A64 002D59A4  38 C0 00 00 */	li r6, 0
/* 802D8A68 002D59A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8A6C 002D59AC  7D 89 03 A6 */	mtctr r12
/* 802D8A70 002D59B0  4E 80 04 21 */	bctrl 
lbl_802D8A74:
/* 802D8A74 002D59B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8A78 002D59B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8A7C 002D59BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D8A80 002D59C0  7C 08 03 A6 */	mtlr r0
/* 802D8A84 002D59C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8A88 002D59C8  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure12StatePutItemFPQ24Game9EnemyBase:
/* 802D8A8C 002D59CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8A90 002D59D0  7C 08 02 A6 */	mflr r0
/* 802D8A94 002D59D4  7C 83 23 78 */	mr r3, r4
/* 802D8A98 002D59D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8A9C 002D59DC  48 00 44 31 */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8AA0 002D59E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8AA4 002D59E4  7C 08 03 A6 */	mtlr r0
/* 802D8AA8 002D59E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8AAC 002D59EC  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D8AB0 002D59F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8AB4 002D59F4  7C 08 02 A6 */	mflr r0
/* 802D8AB8 002D59F8  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8ABC 002D59FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8AC0 002D5A00  38 00 FF FF */	li r0, -1
/* 802D8AC4 002D5A04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8AC8 002D5A08  7C 9F 23 78 */	mr r31, r4
/* 802D8ACC 002D5A0C  7F E3 FB 78 */	mr r3, r31
/* 802D8AD0 002D5A10  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D8AD4 002D5A14  38 80 00 00 */	li r4, 0
/* 802D8AD8 002D5A18  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8ADC 002D5A1C  48 00 5A E5 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8AE0 002D5A20  38 00 00 00 */	li r0, 0
/* 802D8AE4 002D5A24  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8AE8 002D5A28  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D8AEC 002D5A2C  7F E3 FB 78 */	mr r3, r31
/* 802D8AF0 002D5A30  38 80 00 18 */	li r4, 0x18
/* 802D8AF4 002D5A34  38 A0 00 01 */	li r5, 1
/* 802D8AF8 002D5A38  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D8AFC 002D5A3C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D8B00 002D5A40  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D8B04 002D5A44  48 00 64 4D */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8B08 002D5A48  7F E3 FB 78 */	mr r3, r31
/* 802D8B0C 002D5A4C  48 00 43 9D */	bl startBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8B10 002D5A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8B14 002D5A54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8B18 002D5A58  7C 08 03 A6 */	mtlr r0
/* 802D8B1C 002D5A5C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8B20 002D5A60  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBase:
/* 802D8B24 002D5A64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8B28 002D5A68  7C 08 02 A6 */	mflr r0
/* 802D8B2C 002D5A6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8B30 002D5A70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8B34 002D5A74  7C 9F 23 78 */	mr r31, r4
/* 802D8B38 002D5A78  93 C1 00 08 */	stw r30, 8(r1)
/* 802D8B3C 002D5A7C  7C 7E 1B 78 */	mr r30, r3
/* 802D8B40 002D5A80  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802D8B44 002D5A84  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802D8B48 002D5A88  28 00 00 00 */	cmplwi r0, 0
/* 802D8B4C 002D5A8C  41 82 00 AC */	beq lbl_802D8BF8
/* 802D8B50 002D5A90  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802D8B54 002D5A94  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D8B58 002D5A98  40 82 00 10 */	bne lbl_802D8B68
/* 802D8B5C 002D5A9C  7F E3 FB 78 */	mr r3, r31
/* 802D8B60 002D5AA0  48 00 65 0D */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D8B64 002D5AA4  48 00 00 94 */	b lbl_802D8BF8
lbl_802D8B68:
/* 802D8B68 002D5AA8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D8B6C 002D5AAC  40 82 00 8C */	bne lbl_802D8BF8
/* 802D8B70 002D5AB0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D8B74 002D5AB4  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8B78 002D5AB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8B7C 002D5ABC  4C 40 13 82 */	cror 2, 0, 2
/* 802D8B80 002D5AC0  40 82 00 20 */	bne lbl_802D8BA0
/* 802D8B84 002D5AC4  81 83 00 00 */	lwz r12, 0(r3)
/* 802D8B88 002D5AC8  38 A0 00 00 */	li r5, 0
/* 802D8B8C 002D5ACC  38 C0 00 00 */	li r6, 0
/* 802D8B90 002D5AD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8B94 002D5AD4  7D 89 03 A6 */	mtctr r12
/* 802D8B98 002D5AD8  4E 80 04 21 */	bctrl 
/* 802D8B9C 002D5ADC  48 00 00 5C */	b lbl_802D8BF8
lbl_802D8BA0:
/* 802D8BA0 002D5AE0  7F E3 FB 78 */	mr r3, r31
/* 802D8BA4 002D5AE4  38 80 00 00 */	li r4, 0
/* 802D8BA8 002D5AE8  4B E3 BA B1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D8BAC 002D5AEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8BB0 002D5AF0  41 82 00 28 */	beq lbl_802D8BD8
/* 802D8BB4 002D5AF4  7F C3 F3 78 */	mr r3, r30
/* 802D8BB8 002D5AF8  7F E4 FB 78 */	mr r4, r31
/* 802D8BBC 002D5AFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8BC0 002D5B00  38 A0 00 05 */	li r5, 5
/* 802D8BC4 002D5B04  38 C0 00 00 */	li r6, 0
/* 802D8BC8 002D5B08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8BCC 002D5B0C  7D 89 03 A6 */	mtctr r12
/* 802D8BD0 002D5B10  4E 80 04 21 */	bctrl 
/* 802D8BD4 002D5B14  48 00 00 24 */	b lbl_802D8BF8
lbl_802D8BD8:
/* 802D8BD8 002D5B18  7F C3 F3 78 */	mr r3, r30
/* 802D8BDC 002D5B1C  7F E4 FB 78 */	mr r4, r31
/* 802D8BE0 002D5B20  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8BE4 002D5B24  38 A0 00 0A */	li r5, 0xa
/* 802D8BE8 002D5B28  38 C0 00 00 */	li r6, 0
/* 802D8BEC 002D5B2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8BF0 002D5B30  7D 89 03 A6 */	mtctr r12
/* 802D8BF4 002D5B34  4E 80 04 21 */	bctrl 
lbl_802D8BF8:
/* 802D8BF8 002D5B38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8BFC 002D5B3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8C00 002D5B40  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D8C04 002D5B44  7C 08 03 A6 */	mtlr r0
/* 802D8C08 002D5B48  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8C0C 002D5B4C  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure13StateDropItemFPQ24Game9EnemyBase:
/* 802D8C10 002D5B50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8C14 002D5B54  7C 08 02 A6 */	mflr r0
/* 802D8C18 002D5B58  7C 83 23 78 */	mr r3, r4
/* 802D8C1C 002D5B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8C20 002D5B60  48 00 42 AD */	bl finishBlendMotion__Q34Game11BigTreasure3ObjFv
/* 802D8C24 002D5B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8C28 002D5B68  7C 08 03 A6 */	mtlr r0
/* 802D8C2C 002D5B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8C30 002D5B70  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D8C34 002D5B74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D8C38 002D5B78  7C 08 02 A6 */	mflr r0
/* 802D8C3C 002D5B7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D8C40 002D5B80  38 00 FF FF */	li r0, -1
/* 802D8C44 002D5B84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D8C48 002D5B88  7C 9F 23 78 */	mr r31, r4
/* 802D8C4C 002D5B8C  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D8C50 002D5B90  4B DF 09 51 */	bl rand
/* 802D8C54 002D5B94  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D8C58 002D5B98  3C 00 43 30 */	lis r0, 0x4330
/* 802D8C5C 002D5B9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D8C60 002D5BA0  7F E3 FB 78 */	mr r3, r31
/* 802D8C64 002D5BA4  C8 62 E7 40 */	lfd f3, lbl_8051CAA0@sda21(r2)
/* 802D8C68 002D5BA8  38 80 00 00 */	li r4, 0
/* 802D8C6C 002D5BAC  90 01 00 08 */	stw r0, 8(r1)
/* 802D8C70 002D5BB0  C0 22 E7 48 */	lfs f1, lbl_8051CAA8@sda21(r2)
/* 802D8C74 002D5BB4  C8 41 00 08 */	lfd f2, 8(r1)
/* 802D8C78 002D5BB8  C0 02 E7 38 */	lfs f0, lbl_8051CA98@sda21(r2)
/* 802D8C7C 002D5BBC  EC 42 18 28 */	fsubs f2, f2, f3
/* 802D8C80 002D5BC0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802D8C84 002D5BC4  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D8C88 002D5BC8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8C8C 002D5BCC  48 00 59 35 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8C90 002D5BD0  38 00 00 00 */	li r0, 0
/* 802D8C94 002D5BD4  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8C98 002D5BD8  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D8C9C 002D5BDC  7F E3 FB 78 */	mr r3, r31
/* 802D8CA0 002D5BE0  38 80 00 1D */	li r4, 0x1d
/* 802D8CA4 002D5BE4  38 A0 00 01 */	li r5, 1
/* 802D8CA8 002D5BE8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D8CAC 002D5BEC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D8CB0 002D5BF0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D8CB4 002D5BF4  48 00 62 9D */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8CB8 002D5BF8  7F E3 FB 78 */	mr r3, r31
/* 802D8CBC 002D5BFC  48 00 41 5D */	bl startIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D8CC0 002D5C00  7F E3 FB 78 */	mr r3, r31
/* 802D8CC4 002D5C04  48 00 3A E1 */	bl getTargetPosition__Q34Game11BigTreasure3ObjFv
/* 802D8CC8 002D5C08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D8CCC 002D5C0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D8CD0 002D5C10  7C 08 03 A6 */	mtlr r0
/* 802D8CD4 002D5C14  38 21 00 20 */	addi r1, r1, 0x20
/* 802D8CD8 002D5C18  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBase:
/* 802D8CDC 002D5C1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8CE0 002D5C20  7C 08 02 A6 */	mflr r0
/* 802D8CE4 002D5C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8CE8 002D5C28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8CEC 002D5C2C  7C 9F 23 78 */	mr r31, r4
/* 802D8CF0 002D5C30  93 C1 00 08 */	stw r30, 8(r1)
/* 802D8CF4 002D5C34  7C 7E 1B 78 */	mr r30, r3
/* 802D8CF8 002D5C38  7F E3 FB 78 */	mr r3, r31
/* 802D8CFC 002D5C3C  48 00 3A A9 */	bl getTargetPosition__Q34Game11BigTreasure3ObjFv
/* 802D8D00 002D5C40  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D8D04 002D5C44  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8D08 002D5C48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8D0C 002D5C4C  4C 40 13 82 */	cror 2, 0, 2
/* 802D8D10 002D5C50  40 82 00 28 */	bne lbl_802D8D38
/* 802D8D14 002D5C54  7F C3 F3 78 */	mr r3, r30
/* 802D8D18 002D5C58  7F E4 FB 78 */	mr r4, r31
/* 802D8D1C 002D5C5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8D20 002D5C60  38 A0 00 00 */	li r5, 0
/* 802D8D24 002D5C64  38 C0 00 00 */	li r6, 0
/* 802D8D28 002D5C68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8D2C 002D5C6C  7D 89 03 A6 */	mtctr r12
/* 802D8D30 002D5C70  4E 80 04 21 */	bctrl 
/* 802D8D34 002D5C74  48 00 00 D4 */	b lbl_802D8E08
lbl_802D8D38:
/* 802D8D38 002D5C78  7F E3 FB 78 */	mr r3, r31
/* 802D8D3C 002D5C7C  38 80 00 00 */	li r4, 0
/* 802D8D40 002D5C80  4B E3 B9 19 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D8D44 002D5C84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8D48 002D5C88  41 82 00 18 */	beq lbl_802D8D60
/* 802D8D4C 002D5C8C  38 00 00 05 */	li r0, 5
/* 802D8D50 002D5C90  7F E3 FB 78 */	mr r3, r31
/* 802D8D54 002D5C94  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8D58 002D5C98  48 00 40 E5 */	bl finishIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D8D5C 002D5C9C  48 00 00 24 */	b lbl_802D8D80
lbl_802D8D60:
/* 802D8D60 002D5CA0  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D8D64 002D5CA4  C0 02 E7 48 */	lfs f0, lbl_8051CAA8@sda21(r2)
/* 802D8D68 002D5CA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8D6C 002D5CAC  40 81 00 14 */	ble lbl_802D8D80
/* 802D8D70 002D5CB0  38 00 00 03 */	li r0, 3
/* 802D8D74 002D5CB4  7F E3 FB 78 */	mr r3, r31
/* 802D8D78 002D5CB8  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8D7C 002D5CBC  48 00 40 C1 */	bl finishIKMotion__Q34Game11BigTreasure3ObjFv
lbl_802D8D80:
/* 802D8D80 002D5CC0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D8D84 002D5CC4  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D8D88 002D5CC8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D8D8C 002D5CCC  EC 01 00 2A */	fadds f0, f1, f0
/* 802D8D90 002D5CD0  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8D94 002D5CD4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D8D98 002D5CD8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D8D9C 002D5CDC  28 00 00 00 */	cmplwi r0, 0
/* 802D8DA0 002D5CE0  41 82 00 68 */	beq lbl_802D8E08
/* 802D8DA4 002D5CE4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D8DA8 002D5CE8  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D8DAC 002D5CEC  40 82 00 10 */	bne lbl_802D8DBC
/* 802D8DB0 002D5CF0  7F E3 FB 78 */	mr r3, r31
/* 802D8DB4 002D5CF4  48 00 62 B9 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D8DB8 002D5CF8  48 00 00 50 */	b lbl_802D8E08
lbl_802D8DBC:
/* 802D8DBC 002D5CFC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D8DC0 002D5D00  40 82 00 48 */	bne lbl_802D8E08
/* 802D8DC4 002D5D04  7F E3 FB 78 */	mr r3, r31
/* 802D8DC8 002D5D08  48 00 40 BD */	bl isFinishIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D8DCC 002D5D0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8DD0 002D5D10  41 82 00 28 */	beq lbl_802D8DF8
/* 802D8DD4 002D5D14  7F C3 F3 78 */	mr r3, r30
/* 802D8DD8 002D5D18  7F E4 FB 78 */	mr r4, r31
/* 802D8DDC 002D5D1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8DE0 002D5D20  38 C0 00 00 */	li r6, 0
/* 802D8DE4 002D5D24  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802D8DE8 002D5D28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8DEC 002D5D2C  7D 89 03 A6 */	mtctr r12
/* 802D8DF0 002D5D30  4E 80 04 21 */	bctrl 
/* 802D8DF4 002D5D34  48 00 00 14 */	b lbl_802D8E08
lbl_802D8DF8:
/* 802D8DF8 002D5D38  7F E3 FB 78 */	mr r3, r31
/* 802D8DFC 002D5D3C  38 80 00 1D */	li r4, 0x1d
/* 802D8E00 002D5D40  38 A0 00 00 */	li r5, 0
/* 802D8E04 002D5D44  48 00 61 4D */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
lbl_802D8E08:
/* 802D8E08 002D5D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D8E0C 002D5D4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D8E10 002D5D50  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D8E14 002D5D54  7C 08 03 A6 */	mtlr r0
/* 802D8E18 002D5D58  38 21 00 10 */	addi r1, r1, 0x10
/* 802D8E1C 002D5D5C  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure9StateWalkFPQ24Game9EnemyBase:
/* 802D8E20 002D5D60  4E 80 00 20 */	blr 

.global init__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D8E24 002D5D64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D8E28 002D5D68  7C 08 02 A6 */	mflr r0
/* 802D8E2C 002D5D6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D8E30 002D5D70  38 00 FF FF */	li r0, -1
/* 802D8E34 002D5D74  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D8E38 002D5D78  7C 9F 23 78 */	mr r31, r4
/* 802D8E3C 002D5D7C  90 04 02 C8 */	stw r0, 0x2c8(r4)
/* 802D8E40 002D5D80  4B DF 07 61 */	bl rand
/* 802D8E44 002D5D84  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802D8E48 002D5D88  3C 00 43 30 */	lis r0, 0x4330
/* 802D8E4C 002D5D8C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802D8E50 002D5D90  7F E3 FB 78 */	mr r3, r31
/* 802D8E54 002D5D94  C8 62 E7 40 */	lfd f3, lbl_8051CAA0@sda21(r2)
/* 802D8E58 002D5D98  38 80 00 00 */	li r4, 0
/* 802D8E5C 002D5D9C  90 01 00 08 */	stw r0, 8(r1)
/* 802D8E60 002D5DA0  C0 22 E7 48 */	lfs f1, lbl_8051CAA8@sda21(r2)
/* 802D8E64 002D5DA4  C8 41 00 08 */	lfd f2, 8(r1)
/* 802D8E68 002D5DA8  C0 02 E7 38 */	lfs f0, lbl_8051CA98@sda21(r2)
/* 802D8E6C 002D5DAC  EC 42 18 28 */	fsubs f2, f2, f3
/* 802D8E70 002D5DB0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802D8E74 002D5DB4  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D8E78 002D5DB8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D8E7C 002D5DBC  48 00 57 45 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8E80 002D5DC0  38 00 00 00 */	li r0, 0
/* 802D8E84 002D5DC4  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8E88 002D5DC8  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802D8E8C 002D5DCC  7F E3 FB 78 */	mr r3, r31
/* 802D8E90 002D5DD0  38 80 00 1C */	li r4, 0x1c
/* 802D8E94 002D5DD4  38 A0 00 01 */	li r5, 1
/* 802D8E98 002D5DD8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D8E9C 002D5DDC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D8EA0 002D5DE0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D8EA4 002D5DE4  48 00 60 AD */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8EA8 002D5DE8  7F E3 FB 78 */	mr r3, r31
/* 802D8EAC 002D5DEC  48 00 3F 6D */	bl startIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D8EB0 002D5DF0  7F E3 FB 78 */	mr r3, r31
/* 802D8EB4 002D5DF4  48 00 38 F1 */	bl getTargetPosition__Q34Game11BigTreasure3ObjFv
/* 802D8EB8 002D5DF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D8EBC 002D5DFC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D8EC0 002D5E00  7C 08 03 A6 */	mtlr r0
/* 802D8EC4 002D5E04  38 21 00 20 */	addi r1, r1, 0x20
/* 802D8EC8 002D5E08  4E 80 00 20 */	blr 

.global exec__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBase
exec__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBase:
/* 802D8ECC 002D5E0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D8ED0 002D5E10  7C 08 02 A6 */	mflr r0
/* 802D8ED4 002D5E14  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D8ED8 002D5E18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D8EDC 002D5E1C  7C 9F 23 78 */	mr r31, r4
/* 802D8EE0 002D5E20  93 C1 00 08 */	stw r30, 8(r1)
/* 802D8EE4 002D5E24  7C 7E 1B 78 */	mr r30, r3
/* 802D8EE8 002D5E28  7F E3 FB 78 */	mr r3, r31
/* 802D8EEC 002D5E2C  48 00 38 B9 */	bl getTargetPosition__Q34Game11BigTreasure3ObjFv
/* 802D8EF0 002D5E30  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D8EF4 002D5E34  C0 02 E7 20 */	lfs f0, lbl_8051CA80@sda21(r2)
/* 802D8EF8 002D5E38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8EFC 002D5E3C  4C 40 13 82 */	cror 2, 0, 2
/* 802D8F00 002D5E40  40 82 00 28 */	bne lbl_802D8F28
/* 802D8F04 002D5E44  7F C3 F3 78 */	mr r3, r30
/* 802D8F08 002D5E48  7F E4 FB 78 */	mr r4, r31
/* 802D8F0C 002D5E4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D8F10 002D5E50  38 A0 00 00 */	li r5, 0
/* 802D8F14 002D5E54  38 C0 00 00 */	li r6, 0
/* 802D8F18 002D5E58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D8F1C 002D5E5C  7D 89 03 A6 */	mtctr r12
/* 802D8F20 002D5E60  4E 80 04 21 */	bctrl 
/* 802D8F24 002D5E64  48 00 01 7C */	b lbl_802D90A0
lbl_802D8F28:
/* 802D8F28 002D5E68  7F E3 FB 78 */	mr r3, r31
/* 802D8F2C 002D5E6C  48 00 61 D9 */	bl getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv
/* 802D8F30 002D5E70  2C 03 00 1C */	cmpwi r3, 0x1c
/* 802D8F34 002D5E74  40 82 00 34 */	bne lbl_802D8F68
/* 802D8F38 002D5E78  7F E3 FB 78 */	mr r3, r31
/* 802D8F3C 002D5E7C  48 00 48 9D */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D8F40 002D5E80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8F44 002D5E84  40 82 00 24 */	bne lbl_802D8F68
/* 802D8F48 002D5E88  7F E3 FB 78 */	mr r3, r31
/* 802D8F4C 002D5E8C  38 80 00 00 */	li r4, 0
/* 802D8F50 002D5E90  48 00 56 71 */	bl setAttackMaterialColor__Q34Game11BigTreasure3ObjFb
/* 802D8F54 002D5E94  7F E3 FB 78 */	mr r3, r31
/* 802D8F58 002D5E98  38 80 00 18 */	li r4, 0x18
/* 802D8F5C 002D5E9C  38 A0 00 01 */	li r5, 1
/* 802D8F60 002D5EA0  48 00 5F F1 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D8F64 002D5EA4  48 00 00 94 */	b lbl_802D8FF8
lbl_802D8F68:
/* 802D8F68 002D5EA8  7F E3 FB 78 */	mr r3, r31
/* 802D8F6C 002D5EAC  38 80 00 00 */	li r4, 0
/* 802D8F70 002D5EB0  4B E3 B6 E9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802D8F74 002D5EB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8F78 002D5EB8  40 82 00 14 */	bne lbl_802D8F8C
/* 802D8F7C 002D5EBC  7F E3 FB 78 */	mr r3, r31
/* 802D8F80 002D5EC0  48 00 35 FD */	bl isAttackLimitTime__Q34Game11BigTreasure3ObjFv
/* 802D8F84 002D5EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8F88 002D5EC8  41 82 00 34 */	beq lbl_802D8FBC
lbl_802D8F8C:
/* 802D8F8C 002D5ECC  7F E3 FB 78 */	mr r3, r31
/* 802D8F90 002D5ED0  48 00 48 49 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D8F94 002D5ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8F98 002D5ED8  41 82 00 10 */	beq lbl_802D8FA8
/* 802D8F9C 002D5EDC  38 00 00 06 */	li r0, 6
/* 802D8FA0 002D5EE0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8FA4 002D5EE4  48 00 00 0C */	b lbl_802D8FB0
lbl_802D8FA8:
/* 802D8FA8 002D5EE8  38 00 00 05 */	li r0, 5
/* 802D8FAC 002D5EEC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
lbl_802D8FB0:
/* 802D8FB0 002D5EF0  7F E3 FB 78 */	mr r3, r31
/* 802D8FB4 002D5EF4  48 00 3E 89 */	bl finishIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D8FB8 002D5EF8  48 00 00 40 */	b lbl_802D8FF8
lbl_802D8FBC:
/* 802D8FBC 002D5EFC  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D8FC0 002D5F00  C0 02 E7 48 */	lfs f0, lbl_8051CAA8@sda21(r2)
/* 802D8FC4 002D5F04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D8FC8 002D5F08  40 81 00 30 */	ble lbl_802D8FF8
/* 802D8FCC 002D5F0C  7F E3 FB 78 */	mr r3, r31
/* 802D8FD0 002D5F10  48 00 48 09 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D8FD4 002D5F14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D8FD8 002D5F18  41 82 00 10 */	beq lbl_802D8FE8
/* 802D8FDC 002D5F1C  38 00 00 04 */	li r0, 4
/* 802D8FE0 002D5F20  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 802D8FE4 002D5F24  48 00 00 0C */	b lbl_802D8FF0
lbl_802D8FE8:
/* 802D8FE8 002D5F28  38 00 00 03 */	li r0, 3
/* 802D8FEC 002D5F2C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
lbl_802D8FF0:
/* 802D8FF0 002D5F30  7F E3 FB 78 */	mr r3, r31
/* 802D8FF4 002D5F34  48 00 3E 49 */	bl finishIKMotion__Q34Game11BigTreasure3ObjFv
lbl_802D8FF8:
/* 802D8FF8 002D5F38  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802D8FFC 002D5F3C  7F E3 FB 78 */	mr r3, r31
/* 802D9000 002D5F40  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802D9004 002D5F44  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802D9008 002D5F48  EC 01 00 2A */	fadds f0, f1, f0
/* 802D900C 002D5F4C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802D9010 002D5F50  48 00 3E 75 */	bl isFinishIKMotion__Q34Game11BigTreasure3ObjFv
/* 802D9014 002D5F54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D9018 002D5F58  41 82 00 24 */	beq lbl_802D903C
/* 802D901C 002D5F5C  7F C3 F3 78 */	mr r3, r30
/* 802D9020 002D5F60  7F E4 FB 78 */	mr r4, r31
/* 802D9024 002D5F64  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D9028 002D5F68  38 C0 00 00 */	li r6, 0
/* 802D902C 002D5F6C  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 802D9030 002D5F70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D9034 002D5F74  7D 89 03 A6 */	mtctr r12
/* 802D9038 002D5F78  4E 80 04 21 */	bctrl 
lbl_802D903C:
/* 802D903C 002D5F7C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D9040 002D5F80  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D9044 002D5F84  28 00 00 00 */	cmplwi r0, 0
/* 802D9048 002D5F88  41 82 00 58 */	beq lbl_802D90A0
/* 802D904C 002D5F8C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D9050 002D5F90  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 802D9054 002D5F94  40 82 00 10 */	bne lbl_802D9064
/* 802D9058 002D5F98  7F E3 FB 78 */	mr r3, r31
/* 802D905C 002D5F9C  48 00 60 11 */	bl endBlendAnimation__Q34Game11BigTreasure3ObjFv
/* 802D9060 002D5FA0  48 00 00 40 */	b lbl_802D90A0
lbl_802D9064:
/* 802D9064 002D5FA4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D9068 002D5FA8  40 82 00 38 */	bne lbl_802D90A0
/* 802D906C 002D5FAC  7F E3 FB 78 */	mr r3, r31
/* 802D9070 002D5FB0  48 00 47 69 */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFv
/* 802D9074 002D5FB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D9078 002D5FB8  41 82 00 18 */	beq lbl_802D9090
/* 802D907C 002D5FBC  7F E3 FB 78 */	mr r3, r31
/* 802D9080 002D5FC0  38 80 00 1C */	li r4, 0x1c
/* 802D9084 002D5FC4  38 A0 00 00 */	li r5, 0
/* 802D9088 002D5FC8  48 00 5E C9 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
/* 802D908C 002D5FCC  48 00 00 14 */	b lbl_802D90A0
lbl_802D9090:
/* 802D9090 002D5FD0  7F E3 FB 78 */	mr r3, r31
/* 802D9094 002D5FD4  38 80 00 19 */	li r4, 0x19
/* 802D9098 002D5FD8  38 A0 00 00 */	li r5, 0
/* 802D909C 002D5FDC  48 00 5E B5 */	bl startBlendAnimation__Q34Game11BigTreasure3ObjFib
lbl_802D90A0:
/* 802D90A0 002D5FE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D90A4 002D5FE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D90A8 002D5FE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D90AC 002D5FEC  7C 08 03 A6 */	mtlr r0
/* 802D90B0 002D5FF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D90B4 002D5FF4  4E 80 00 20 */	blr 

.global cleanup__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBase
cleanup__Q34Game11BigTreasure13StateItemWalkFPQ24Game9EnemyBase:
/* 802D90B8 002D5FF8  4E 80 00 20 */	blr 

__sinit_BigTreasureState_cpp: # static initializer
/* 802D90BC 002D5FFC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802D90C0 002D6000  38 00 FF FF */	li r0, -1
/* 802D90C4 002D6004  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802D90C8 002D6008  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802D90CC 002D600C  90 0D 97 58 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802D90D0 002D6010  D4 03 2F 90 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802D90D4 002D6014  D0 0D 97 5C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802D90D8 002D6018  D0 03 00 04 */	stfs f0, 4(r3)
/* 802D90DC 002D601C  D0 03 00 08 */	stfs f0, 8(r3)
/* 802D90E0 002D6020  4E 80 00 20 */	blr 
