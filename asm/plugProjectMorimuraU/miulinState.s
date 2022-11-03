.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80491670
lbl_80491670:
	.asciz "attackstart"
.global lbl_8049167C
lbl_8049167C:
	.asciz "attackind"
	.skip 2
.global lbl_80491688
lbl_80491688:
	.asciz "attackend"
	.skip 2
.global lbl_80491694
lbl_80491694:
	.asciz "miulinState.cpp"
.global lbl_804916A4
lbl_804916A4:
	.asciz "state -1\n"
	.skip 2

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game6Miulin9StateDead
__vt__Q34Game6Miulin9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin10StateFlick
__vt__Q34Game6Miulin10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin9StateTurn
__vt__Q34Game6Miulin9StateTurn:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin14StateAttackEnd
__vt__Q34Game6Miulin14StateAttackEnd:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin14StateAttackEndFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin14StateAttackEndFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin14StateAttacking
__vt__Q34Game6Miulin14StateAttacking:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin14StateAttackingFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin14StateAttackingFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin16StateAttackStart
__vt__Q34Game6Miulin16StateAttackStart:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin16StateAttackStartFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin16StateAttackStartFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin9StateWalk
__vt__Q34Game6Miulin9StateWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin9StateWait
__vt__Q34Game6Miulin9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Miulin9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin5State
__vt__Q34Game6Miulin5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Miulin3FSM
__vt__Q34Game6Miulin3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Miulin3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051E780
lbl_8051E780:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051E788
lbl_8051E788:
	.4byte 0x00000000
.global lbl_8051E78C
lbl_8051E78C:
	.4byte 0x77616C6B
	.4byte 0x00000000
.global lbl_8051E794
lbl_8051E794:
	.4byte 0x40400000
.global lbl_8051E798
lbl_8051E798:
	.4byte 0x40490FDB
.global lbl_8051E79C
lbl_8051E79C:
	.4byte 0x3BB60B61
.global lbl_8051E7A0
lbl_8051E7A0:
	.float 1.0
.global lbl_8051E7A4
lbl_8051E7A4:
	.4byte 0x41200000
.global lbl_8051E7A8
lbl_8051E7A8:
	.4byte 0x3FC00000
.global lbl_8051E7AC
lbl_8051E7AC:
	.float 0.5
.global lbl_8051E7B0
lbl_8051E7B0:
	.4byte 0x43A2F983
.global lbl_8051E7B4
lbl_8051E7B4:
	.4byte 0xC3A2F983
.global lbl_8051E7B8
lbl_8051E7B8:
	.4byte 0x41A00000
.global lbl_8051E7BC
lbl_8051E7BC:
	.4byte 0x40A00000
.global lbl_8051E7C0
lbl_8051E7C0:
	.4byte 0xC47A0000
.global lbl_8051E7C4
lbl_8051E7C4:
	.4byte 0xC1A00000
.global lbl_8051E7C8
lbl_8051E7C8:
	.4byte 0x41F80000
.global lbl_8051E7CC
lbl_8051E7CC:
	.4byte 0x41300000
.global lbl_8051E7D0
lbl_8051E7D0:
	.4byte 0x42600000
.global lbl_8051E7D4
lbl_8051E7D4:
	.4byte 0x7475726E
	.4byte 0x00000000
.global lbl_8051E7DC
lbl_8051E7DC:
	.4byte 0x3C23D70A
.global lbl_8051E7E0
lbl_8051E7E0:
	.4byte 0x666C6963
	.4byte 0x6B000000
.global lbl_8051E7E8
lbl_8051E7E8:
	.4byte 0x64656164
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game6Miulin3FSMFPQ24Game9EnemyBase
init__Q34Game6Miulin3FSMFPQ24Game9EnemyBase:
/* 80362618 0035F558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036261C 0035F55C  7C 08 02 A6 */	mflr r0
/* 80362620 0035F560  38 80 00 08 */	li r4, 8
/* 80362624 0035F564  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362628 0035F568  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036262C 0035F56C  7C 7F 1B 78 */	mr r31, r3
/* 80362630 0035F570  4B DC E2 35 */	bl create__Q24Game17EnemyStateMachineFi
/* 80362634 0035F574  38 60 00 10 */	li r3, 0x10
/* 80362638 0035F578  4B CC 18 6D */	bl __nw__FUl
/* 8036263C 0035F57C  7C 64 1B 79 */	or. r4, r3, r3
/* 80362640 0035F580  41 82 00 10 */	beq .L_80362650
/* 80362644 0035F584  38 80 00 00 */	li r4, 0
/* 80362648 0035F588  48 00 01 21 */	bl __ct__Q34Game6Miulin9StateWaitFi
/* 8036264C 0035F58C  7C 64 1B 78 */	mr r4, r3
.L_80362650:
/* 80362650 0035F590  7F E3 FB 78 */	mr r3, r31
/* 80362654 0035F594  4B DC E2 B5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80362658 0035F598  38 60 00 18 */	li r3, 0x18
/* 8036265C 0035F59C  4B CC 18 49 */	bl __nw__FUl
/* 80362660 0035F5A0  7C 64 1B 79 */	or. r4, r3, r3
/* 80362664 0035F5A4  41 82 00 10 */	beq .L_80362674
/* 80362668 0035F5A8  38 80 00 01 */	li r4, 1
/* 8036266C 0035F5AC  48 00 02 DD */	bl __ct__Q34Game6Miulin9StateWalkFi
/* 80362670 0035F5B0  7C 64 1B 78 */	mr r4, r3
.L_80362674:
/* 80362674 0035F5B4  7F E3 FB 78 */	mr r3, r31
/* 80362678 0035F5B8  4B DC E2 91 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8036267C 0035F5BC  38 60 00 10 */	li r3, 0x10
/* 80362680 0035F5C0  4B CC 18 25 */	bl __nw__FUl
/* 80362684 0035F5C4  7C 64 1B 79 */	or. r4, r3, r3
/* 80362688 0035F5C8  41 82 00 10 */	beq .L_80362698
/* 8036268C 0035F5CC  38 80 00 02 */	li r4, 2
/* 80362690 0035F5D0  48 00 07 C5 */	bl __ct__Q34Game6Miulin16StateAttackStartFi
/* 80362694 0035F5D4  7C 64 1B 78 */	mr r4, r3
.L_80362698:
/* 80362698 0035F5D8  7F E3 FB 78 */	mr r3, r31
/* 8036269C 0035F5DC  4B DC E2 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803626A0 0035F5E0  38 60 00 14 */	li r3, 0x14
/* 803626A4 0035F5E4  4B CC 18 01 */	bl __nw__FUl
/* 803626A8 0035F5E8  7C 64 1B 79 */	or. r4, r3, r3
/* 803626AC 0035F5EC  41 82 00 10 */	beq .L_803626BC
/* 803626B0 0035F5F0  38 80 00 03 */	li r4, 3
/* 803626B4 0035F5F4  48 00 08 7D */	bl __ct__Q34Game6Miulin14StateAttackingFi
/* 803626B8 0035F5F8  7C 64 1B 78 */	mr r4, r3
.L_803626BC:
/* 803626BC 0035F5FC  7F E3 FB 78 */	mr r3, r31
/* 803626C0 0035F600  4B DC E2 49 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803626C4 0035F604  38 60 00 10 */	li r3, 0x10
/* 803626C8 0035F608  4B CC 17 DD */	bl __nw__FUl
/* 803626CC 0035F60C  7C 64 1B 79 */	or. r4, r3, r3
/* 803626D0 0035F610  41 82 00 10 */	beq .L_803626E0
/* 803626D4 0035F614  38 80 00 04 */	li r4, 4
/* 803626D8 0035F618  48 00 11 1D */	bl __ct__Q34Game6Miulin14StateAttackEndFi
/* 803626DC 0035F61C  7C 64 1B 78 */	mr r4, r3
.L_803626E0:
/* 803626E0 0035F620  7F E3 FB 78 */	mr r3, r31
/* 803626E4 0035F624  4B DC E2 25 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803626E8 0035F628  38 60 00 10 */	li r3, 0x10
/* 803626EC 0035F62C  4B CC 17 B9 */	bl __nw__FUl
/* 803626F0 0035F630  7C 64 1B 79 */	or. r4, r3, r3
/* 803626F4 0035F634  41 82 00 10 */	beq .L_80362704
/* 803626F8 0035F638  38 80 00 05 */	li r4, 5
/* 803626FC 0035F63C  48 00 12 39 */	bl __ct__Q34Game6Miulin9StateTurnFi
/* 80362700 0035F640  7C 64 1B 78 */	mr r4, r3
.L_80362704:
/* 80362704 0035F644  7F E3 FB 78 */	mr r3, r31
/* 80362708 0035F648  4B DC E2 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8036270C 0035F64C  38 60 00 10 */	li r3, 0x10
/* 80362710 0035F650  4B CC 17 95 */	bl __nw__FUl
/* 80362714 0035F654  7C 64 1B 79 */	or. r4, r3, r3
/* 80362718 0035F658  41 82 00 10 */	beq .L_80362728
/* 8036271C 0035F65C  38 80 00 06 */	li r4, 6
/* 80362720 0035F660  48 00 14 BD */	bl __ct__Q34Game6Miulin10StateFlickFi
/* 80362724 0035F664  7C 64 1B 78 */	mr r4, r3
.L_80362728:
/* 80362728 0035F668  7F E3 FB 78 */	mr r3, r31
/* 8036272C 0035F66C  4B DC E1 DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80362730 0035F670  38 60 00 10 */	li r3, 0x10
/* 80362734 0035F674  4B CC 17 71 */	bl __nw__FUl
/* 80362738 0035F678  7C 64 1B 79 */	or. r4, r3, r3
/* 8036273C 0035F67C  41 82 00 10 */	beq .L_8036274C
/* 80362740 0035F680  38 80 00 07 */	li r4, 7
/* 80362744 0035F684  48 00 16 B1 */	bl __ct__Q34Game6Miulin9StateDeadFi
/* 80362748 0035F688  7C 64 1B 78 */	mr r4, r3
.L_8036274C:
/* 8036274C 0035F68C  7F E3 FB 78 */	mr r3, r31
/* 80362750 0035F690  4B DC E1 B9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80362754 0035F694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362758 0035F698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036275C 0035F69C  7C 08 03 A6 */	mtlr r0
/* 80362760 0035F6A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80362764 0035F6A4  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin9StateWaitFi
__ct__Q34Game6Miulin9StateWaitFi:
/* 80362768 0035F6A8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8036276C 0035F6AC  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin5State@ha
/* 80362770 0035F6B0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80362774 0035F6B4  3C A0 80 4E */	lis r5, __vt__Q34Game6Miulin9StateWait@ha
/* 80362778 0035F6B8  90 03 00 00 */	stw r0, 0(r3)
/* 8036277C 0035F6BC  38 E0 00 00 */	li r7, 0
/* 80362780 0035F6C0  38 C6 24 68 */	addi r6, r6, __vt__Q34Game6Miulin5State@l
/* 80362784 0035F6C4  38 A5 24 44 */	addi r5, r5, __vt__Q34Game6Miulin9StateWait@l
/* 80362788 0035F6C8  90 83 00 04 */	stw r4, 4(r3)
/* 8036278C 0035F6CC  38 02 04 20 */	addi r0, r2, lbl_8051E780@sda21
/* 80362790 0035F6D0  90 E3 00 08 */	stw r7, 8(r3)
/* 80362794 0035F6D4  90 C3 00 00 */	stw r6, 0(r3)
/* 80362798 0035F6D8  90 A3 00 00 */	stw r5, 0(r3)
/* 8036279C 0035F6DC  90 03 00 0C */	stw r0, 0xc(r3)
/* 803627A0 0035F6E0  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803627A4 0035F6E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803627A8 0035F6E8  7C 08 02 A6 */	mflr r0
/* 803627AC 0035F6EC  38 A0 00 00 */	li r5, 0
/* 803627B0 0035F6F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803627B4 0035F6F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803627B8 0035F6F8  7C 9F 23 78 */	mr r31, r4
/* 803627BC 0035F6FC  38 80 00 07 */	li r4, 7
/* 803627C0 0035F700  7F E3 FB 78 */	mr r3, r31
/* 803627C4 0035F704  4B DA 28 41 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803627C8 0035F708  7F E3 FB 78 */	mr r3, r31
/* 803627CC 0035F70C  4B DA 4B 15 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 803627D0 0035F710  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 803627D4 0035F714  7F E3 FB 78 */	mr r3, r31
/* 803627D8 0035F718  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803627DC 0035F71C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803627E0 0035F720  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803627E4 0035F724  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803627E8 0035F728  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803627EC 0035F72C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803627F0 0035F730  4B D9 F1 8D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 803627F4 0035F734  7F E3 FB 78 */	mr r3, r31
/* 803627F8 0035F738  4B DA 4F 85 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 803627FC 0035F73C  38 00 00 00 */	li r0, 0
/* 80362800 0035F740  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80362804 0035F744  98 1F 02 E4 */	stb r0, 0x2e4(r31)
/* 80362808 0035F748  7F E3 FB 78 */	mr r3, r31
/* 8036280C 0035F74C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80362810 0035F750  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80362814 0035F754  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80362818 0035F758  4B DA 4B 79 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 8036281C 0035F75C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362820 0035F760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362824 0035F764  7C 08 03 A6 */	mtlr r0
/* 80362828 0035F768  38 21 00 10 */	addi r1, r1, 0x10
/* 8036282C 0035F76C  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin9StateWaitFPQ24Game9EnemyBase
exec__Q34Game6Miulin9StateWaitFPQ24Game9EnemyBase:
/* 80362830 0035F770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362834 0035F774  7C 08 02 A6 */	mflr r0
/* 80362838 0035F778  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036283C 0035F77C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362840 0035F780  7C 9F 23 78 */	mr r31, r4
/* 80362844 0035F784  93 C1 00 08 */	stw r30, 8(r1)
/* 80362848 0035F788  7C 7E 1B 78 */	mr r30, r3
/* 8036284C 0035F78C  7F E3 FB 78 */	mr r3, r31
/* 80362850 0035F790  48 00 2B E5 */	bl isStartWalk__Q34Game6Miulin3ObjFv
/* 80362854 0035F794  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362858 0035F798  41 82 00 D8 */	beq .L_80362930
/* 8036285C 0035F79C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80362860 0035F7A0  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80362864 0035F7A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80362868 0035F7A8  4C 40 13 82 */	cror 2, 0, 2
/* 8036286C 0035F7AC  40 82 00 28 */	bne .L_80362894
/* 80362870 0035F7B0  7F C3 F3 78 */	mr r3, r30
/* 80362874 0035F7B4  7F E4 FB 78 */	mr r4, r31
/* 80362878 0035F7B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036287C 0035F7BC  38 A0 00 07 */	li r5, 7
/* 80362880 0035F7C0  38 C0 00 00 */	li r6, 0
/* 80362884 0035F7C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80362888 0035F7C8  7D 89 03 A6 */	mtctr r12
/* 8036288C 0035F7CC  4E 80 04 21 */	bctrl 
/* 80362890 0035F7D0  48 00 00 8C */	b .L_8036291C
.L_80362894:
/* 80362894 0035F7D4  7F E3 FB 78 */	mr r3, r31
/* 80362898 0035F7D8  48 00 21 01 */	bl isAttackStart__Q34Game6Miulin3ObjFv
/* 8036289C 0035F7DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803628A0 0035F7E0  41 82 00 28 */	beq .L_803628C8
/* 803628A4 0035F7E4  7F C3 F3 78 */	mr r3, r30
/* 803628A8 0035F7E8  7F E4 FB 78 */	mr r4, r31
/* 803628AC 0035F7EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803628B0 0035F7F0  38 A0 00 02 */	li r5, 2
/* 803628B4 0035F7F4  38 C0 00 00 */	li r6, 0
/* 803628B8 0035F7F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803628BC 0035F7FC  7D 89 03 A6 */	mtctr r12
/* 803628C0 0035F800  4E 80 04 21 */	bctrl 
/* 803628C4 0035F804  48 00 00 58 */	b .L_8036291C
.L_803628C8:
/* 803628C8 0035F808  7F E3 FB 78 */	mr r3, r31
/* 803628CC 0035F80C  48 00 31 D9 */	bl nextTargetTurnCheck__Q34Game6Miulin3ObjFv
/* 803628D0 0035F810  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803628D4 0035F814  41 82 00 28 */	beq .L_803628FC
/* 803628D8 0035F818  7F C3 F3 78 */	mr r3, r30
/* 803628DC 0035F81C  7F E4 FB 78 */	mr r4, r31
/* 803628E0 0035F820  81 9E 00 00 */	lwz r12, 0(r30)
/* 803628E4 0035F824  38 A0 00 05 */	li r5, 5
/* 803628E8 0035F828  38 C0 00 00 */	li r6, 0
/* 803628EC 0035F82C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803628F0 0035F830  7D 89 03 A6 */	mtctr r12
/* 803628F4 0035F834  4E 80 04 21 */	bctrl 
/* 803628F8 0035F838  48 00 00 24 */	b .L_8036291C
.L_803628FC:
/* 803628FC 0035F83C  7F C3 F3 78 */	mr r3, r30
/* 80362900 0035F840  7F E4 FB 78 */	mr r4, r31
/* 80362904 0035F844  81 9E 00 00 */	lwz r12, 0(r30)
/* 80362908 0035F848  38 A0 00 01 */	li r5, 1
/* 8036290C 0035F84C  38 C0 00 00 */	li r6, 0
/* 80362910 0035F850  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80362914 0035F854  7D 89 03 A6 */	mtctr r12
/* 80362918 0035F858  4E 80 04 21 */	bctrl 
.L_8036291C:
/* 8036291C 0035F85C  7F E3 FB 78 */	mr r3, r31
/* 80362920 0035F860  4B DA 4E 75 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80362924 0035F864  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80362928 0035F868  60 00 08 00 */	ori r0, r0, 0x800
/* 8036292C 0035F86C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80362930:
/* 80362930 0035F870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362934 0035F874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362938 0035F878  83 C1 00 08 */	lwz r30, 8(r1)
/* 8036293C 0035F87C  7C 08 03 A6 */	mtlr r0
/* 80362940 0035F880  38 21 00 10 */	addi r1, r1, 0x10
/* 80362944 0035F884  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin9StateWalkFi
__ct__Q34Game6Miulin9StateWalkFi:
/* 80362948 0035F888  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8036294C 0035F88C  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin5State@ha
/* 80362950 0035F890  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80362954 0035F894  3C A0 80 4E */	lis r5, __vt__Q34Game6Miulin9StateWalk@ha
/* 80362958 0035F898  90 03 00 00 */	stw r0, 0(r3)
/* 8036295C 0035F89C  38 E0 00 00 */	li r7, 0
/* 80362960 0035F8A0  38 C6 24 68 */	addi r6, r6, __vt__Q34Game6Miulin5State@l
/* 80362964 0035F8A4  38 A5 24 20 */	addi r5, r5, __vt__Q34Game6Miulin9StateWalk@l
/* 80362968 0035F8A8  90 83 00 04 */	stw r4, 4(r3)
/* 8036296C 0035F8AC  38 02 04 2C */	addi r0, r2, lbl_8051E78C@sda21
/* 80362970 0035F8B0  90 E3 00 08 */	stw r7, 8(r3)
/* 80362974 0035F8B4  90 C3 00 00 */	stw r6, 0(r3)
/* 80362978 0035F8B8  90 A3 00 00 */	stw r5, 0(r3)
/* 8036297C 0035F8BC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80362980 0035F8C0  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80362984 0035F8C4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80362988 0035F8C8  7C 08 02 A6 */	mflr r0
/* 8036298C 0035F8CC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80362990 0035F8D0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80362994 0035F8D4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80362998 0035F8D8  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8036299C 0035F8DC  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 803629A0 0035F8E0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803629A4 0035F8E4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803629A8 0035F8E8  7C 9F 23 78 */	mr r31, r4
/* 803629AC 0035F8EC  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 803629B0 0035F8F0  7C 7E 1B 78 */	mr r30, r3
/* 803629B4 0035F8F4  7F E3 FB 78 */	mr r3, r31
/* 803629B8 0035F8F8  4B DA 49 D9 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 803629BC 0035F8FC  38 00 FF FF */	li r0, -1
/* 803629C0 0035F900  7F E3 FB 78 */	mr r3, r31
/* 803629C4 0035F904  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803629C8 0035F908  38 80 00 05 */	li r4, 5
/* 803629CC 0035F90C  38 A0 00 00 */	li r5, 0
/* 803629D0 0035F910  4B DA 26 35 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803629D4 0035F914  38 60 00 00 */	li r3, 0
/* 803629D8 0035F918  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803629DC 0035F91C  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803629E0 0035F920  28 00 00 00 */	cmplwi r0, 0
/* 803629E4 0035F924  41 82 00 E4 */	beq .L_80362AC8
/* 803629E8 0035F928  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803629EC 0035F92C  38 61 00 20 */	addi r3, r1, 0x20
/* 803629F0 0035F930  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 803629F4 0035F934  81 84 00 00 */	lwz r12, 0(r4)
/* 803629F8 0035F938  81 8C 00 08 */	lwz r12, 8(r12)
/* 803629FC 0035F93C  7D 89 03 A6 */	mtctr r12
/* 80362A00 0035F940  4E 80 04 21 */	bctrl 
/* 80362A04 0035F944  7F E4 FB 78 */	mr r4, r31
/* 80362A08 0035F948  38 61 00 14 */	addi r3, r1, 0x14
/* 80362A0C 0035F94C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80362A10 0035F950  C3 E1 00 20 */	lfs f31, 0x20(r1)
/* 80362A14 0035F954  81 8C 00 08 */	lwz r12, 8(r12)
/* 80362A18 0035F958  C3 C1 00 28 */	lfs f30, 0x28(r1)
/* 80362A1C 0035F95C  7D 89 03 A6 */	mtctr r12
/* 80362A20 0035F960  4E 80 04 21 */	bctrl 
/* 80362A24 0035F964  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 80362A28 0035F968  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80362A2C 0035F96C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80362A30 0035F970  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80362A34 0035F974  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80362A38 0035F978  EC 3F 20 28 */	fsubs f1, f31, f4
/* 80362A3C 0035F97C  EC 5E 00 28 */	fsubs f2, f30, f0
/* 80362A40 0035F980  D0 81 00 08 */	stfs f4, 8(r1)
/* 80362A44 0035F984  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80362A48 0035F988  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80362A4C 0035F98C  4B CD 26 BD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80362A50 0035F990  48 0A F1 81 */	bl roundAng__Ff
/* 80362A54 0035F994  81 9F 00 00 */	lwz r12, 0(r31)
/* 80362A58 0035F998  FF E0 08 90 */	fmr f31, f1
/* 80362A5C 0035F99C  7F E3 FB 78 */	mr r3, r31
/* 80362A60 0035F9A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80362A64 0035F9A4  7D 89 03 A6 */	mtctr r12
/* 80362A68 0035F9A8  4E 80 04 21 */	bctrl 
/* 80362A6C 0035F9AC  FC 40 08 90 */	fmr f2, f1
/* 80362A70 0035F9B0  FC 20 F8 90 */	fmr f1, f31
/* 80362A74 0035F9B4  48 0A F1 89 */	bl angDist__Fff
/* 80362A78 0035F9B8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80362A7C 0035F9BC  FC 60 0A 10 */	fabs f3, f1
/* 80362A80 0035F9C0  C0 22 04 3C */	lfs f1, lbl_8051E79C@sda21(r2)
/* 80362A84 0035F9C4  C0 03 08 BC */	lfs f0, 0x8bc(r3)
/* 80362A88 0035F9C8  C0 42 04 38 */	lfs f2, lbl_8051E798@sda21(r2)
/* 80362A8C 0035F9CC  FC 60 18 18 */	frsp f3, f3
/* 80362A90 0035F9D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80362A94 0035F9D4  C0 22 04 34 */	lfs f1, lbl_8051E794@sda21(r2)
/* 80362A98 0035F9D8  EC 02 00 32 */	fmuls f0, f2, f0
/* 80362A9C 0035F9DC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80362AA0 0035F9E0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80362AA4 0035F9E4  40 81 00 24 */	ble .L_80362AC8
/* 80362AA8 0035F9E8  7F C3 F3 78 */	mr r3, r30
/* 80362AAC 0035F9EC  7F E4 FB 78 */	mr r4, r31
/* 80362AB0 0035F9F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80362AB4 0035F9F4  38 A0 00 05 */	li r5, 5
/* 80362AB8 0035F9F8  38 C0 00 00 */	li r6, 0
/* 80362ABC 0035F9FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80362AC0 0035FA00  7D 89 03 A6 */	mtctr r12
/* 80362AC4 0035FA04  4E 80 04 21 */	bctrl 
.L_80362AC8:
/* 80362AC8 0035FA08  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80362ACC 0035FA0C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80362AD0 0035FA10  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80362AD4 0035FA14  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80362AD8 0035FA18  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80362ADC 0035FA1C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80362AE0 0035FA20  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80362AE4 0035FA24  7C 08 03 A6 */	mtlr r0
/* 80362AE8 0035FA28  38 21 00 60 */	addi r1, r1, 0x60
/* 80362AEC 0035FA2C  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin9StateWalkFPQ24Game9EnemyBase
exec__Q34Game6Miulin9StateWalkFPQ24Game9EnemyBase:
/* 80362AF0 0035FA30  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80362AF4 0035FA34  7C 08 02 A6 */	mflr r0
/* 80362AF8 0035FA38  90 01 00 64 */	stw r0, 0x64(r1)
/* 80362AFC 0035FA3C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80362B00 0035FA40  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80362B04 0035FA44  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80362B08 0035FA48  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80362B0C 0035FA4C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80362B10 0035FA50  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80362B14 0035FA54  7C 9F 23 78 */	mr r31, r4
/* 80362B18 0035FA58  7C 7E 1B 78 */	mr r30, r3
/* 80362B1C 0035FA5C  80 04 02 C8 */	lwz r0, 0x2c8(r4)
/* 80362B20 0035FA60  2C 00 00 00 */	cmpwi r0, 0
/* 80362B24 0035FA64  40 80 02 04 */	bge .L_80362D28
/* 80362B28 0035FA68  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 80362B2C 0035FA6C  7F E3 FB 78 */	mr r3, r31
/* 80362B30 0035FA70  38 04 00 01 */	addi r0, r4, 1
/* 80362B34 0035FA74  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80362B38 0035FA78  48 00 29 D5 */	bl walkFunc__Q34Game6Miulin3ObjFv
/* 80362B3C 0035FA7C  88 1F 02 E4 */	lbz r0, 0x2e4(r31)
/* 80362B40 0035FA80  28 00 00 00 */	cmplwi r0, 0
/* 80362B44 0035FA84  41 82 00 10 */	beq .L_80362B54
/* 80362B48 0035FA88  C0 22 04 40 */	lfs f1, lbl_8051E7A0@sda21(r2)
/* 80362B4C 0035FA8C  7F E3 FB 78 */	mr r3, r31
/* 80362B50 0035FA90  48 00 2C 2D */	bl turnFunc__Q34Game6Miulin3ObjFf
.L_80362B54:
/* 80362B54 0035FA94  88 1F 02 E4 */	lbz r0, 0x2e4(r31)
/* 80362B58 0035FA98  28 00 00 00 */	cmplwi r0, 0
/* 80362B5C 0035FA9C  40 82 00 4C */	bne .L_80362BA8
/* 80362B60 0035FAA0  7F E3 FB 78 */	mr r3, r31
/* 80362B64 0035FAA4  48 00 28 0D */	bl isOutOfTerritory__Q34Game6Miulin3ObjFv
/* 80362B68 0035FAA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362B6C 0035FAAC  40 82 00 18 */	bne .L_80362B84
/* 80362B70 0035FAB0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80362B74 0035FAB4  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80362B78 0035FAB8  80 03 08 1C */	lwz r0, 0x81c(r3)
/* 80362B7C 0035FABC  7C 04 00 00 */	cmpw r4, r0
/* 80362B80 0035FAC0  40 81 00 28 */	ble .L_80362BA8
.L_80362B84:
/* 80362B84 0035FAC4  7F E3 FB 78 */	mr r3, r31
/* 80362B88 0035FAC8  48 00 29 59 */	bl setReturnState__Q34Game6Miulin3ObjFv
/* 80362B8C 0035FACC  7F E3 FB 78 */	mr r3, r31
/* 80362B90 0035FAD0  4B DA 27 11 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80362B94 0035FAD4  38 60 00 05 */	li r3, 5
/* 80362B98 0035FAD8  38 00 00 00 */	li r0, 0
/* 80362B9C 0035FADC  90 7F 02 C8 */	stw r3, 0x2c8(r31)
/* 80362BA0 0035FAE0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80362BA4 0035FAE4  48 00 01 84 */	b .L_80362D28
.L_80362BA8:
/* 80362BA8 0035FAE8  C0 22 04 44 */	lfs f1, lbl_8051E7A4@sda21(r2)
/* 80362BAC 0035FAEC  7F E3 FB 78 */	mr r3, r31
/* 80362BB0 0035FAF0  48 00 2D 49 */	bl isReachToGoal__Q34Game6Miulin3ObjFf
/* 80362BB4 0035FAF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362BB8 0035FAF8  41 82 00 48 */	beq .L_80362C00
/* 80362BBC 0035FAFC  88 1F 02 E4 */	lbz r0, 0x2e4(r31)
/* 80362BC0 0035FB00  28 00 00 00 */	cmplwi r0, 0
/* 80362BC4 0035FB04  41 82 00 18 */	beq .L_80362BDC
/* 80362BC8 0035FB08  7F E3 FB 78 */	mr r3, r31
/* 80362BCC 0035FB0C  4B DA 26 D5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80362BD0 0035FB10  38 00 00 00 */	li r0, 0
/* 80362BD4 0035FB14  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80362BD8 0035FB18  48 00 01 50 */	b .L_80362D28
.L_80362BDC:
/* 80362BDC 0035FB1C  7F E3 FB 78 */	mr r3, r31
/* 80362BE0 0035FB20  48 00 2E C5 */	bl nextTargetTurnCheck__Q34Game6Miulin3ObjFv
/* 80362BE4 0035FB24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362BE8 0035FB28  41 82 01 40 */	beq .L_80362D28
/* 80362BEC 0035FB2C  7F E3 FB 78 */	mr r3, r31
/* 80362BF0 0035FB30  4B DA 26 B1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80362BF4 0035FB34  38 00 00 05 */	li r0, 5
/* 80362BF8 0035FB38  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80362BFC 0035FB3C  48 00 01 2C */	b .L_80362D28
.L_80362C00:
/* 80362C00 0035FB40  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80362C04 0035FB44  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80362C08 0035FB48  40 81 01 20 */	ble .L_80362D28
/* 80362C0C 0035FB4C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80362C10 0035FB50  28 04 00 00 */	cmplwi r4, 0
/* 80362C14 0035FB54  41 82 00 2C */	beq .L_80362C40
/* 80362C18 0035FB58  38 00 00 00 */	li r0, 0
/* 80362C1C 0035FB5C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80362C20 0035FB60  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80362C24 0035FB64  81 84 00 00 */	lwz r12, 0(r4)
/* 80362C28 0035FB68  81 8C 00 08 */	lwz r12, 8(r12)
/* 80362C2C 0035FB6C  7D 89 03 A6 */	mtctr r12
/* 80362C30 0035FB70  4E 80 04 21 */	bctrl 
/* 80362C34 0035FB74  C3 E1 00 2C */	lfs f31, 0x2c(r1)
/* 80362C38 0035FB78  C3 C1 00 34 */	lfs f30, 0x34(r1)
/* 80362C3C 0035FB7C  48 00 00 40 */	b .L_80362C7C
.L_80362C40:
/* 80362C40 0035FB80  7F E3 FB 78 */	mr r3, r31
/* 80362C44 0035FB84  48 00 22 89 */	bl isFindTarget__Q34Game6Miulin3ObjFv
/* 80362C48 0035FB88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362C4C 0035FB8C  40 82 00 24 */	bne .L_80362C70
/* 80362C50 0035FB90  7F E4 FB 78 */	mr r4, r31
/* 80362C54 0035FB94  38 61 00 20 */	addi r3, r1, 0x20
/* 80362C58 0035FB98  81 9F 00 00 */	lwz r12, 0(r31)
/* 80362C5C 0035FB9C  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 80362C60 0035FBA0  7D 89 03 A6 */	mtctr r12
/* 80362C64 0035FBA4  4E 80 04 21 */	bctrl 
/* 80362C68 0035FBA8  C3 E1 00 20 */	lfs f31, 0x20(r1)
/* 80362C6C 0035FBAC  C3 C1 00 28 */	lfs f30, 0x28(r1)
.L_80362C70:
/* 80362C70 0035FBB0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80362C74 0035FBB4  38 03 00 01 */	addi r0, r3, 1
/* 80362C78 0035FBB8  90 1E 00 10 */	stw r0, 0x10(r30)
.L_80362C7C:
/* 80362C7C 0035FBBC  7F E4 FB 78 */	mr r4, r31
/* 80362C80 0035FBC0  38 61 00 14 */	addi r3, r1, 0x14
/* 80362C84 0035FBC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80362C88 0035FBC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80362C8C 0035FBCC  7D 89 03 A6 */	mtctr r12
/* 80362C90 0035FBD0  4E 80 04 21 */	bctrl 
/* 80362C94 0035FBD4  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 80362C98 0035FBD8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80362C9C 0035FBDC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80362CA0 0035FBE0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80362CA4 0035FBE4  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80362CA8 0035FBE8  EC 3F 20 28 */	fsubs f1, f31, f4
/* 80362CAC 0035FBEC  EC 5E 00 28 */	fsubs f2, f30, f0
/* 80362CB0 0035FBF0  D0 81 00 08 */	stfs f4, 8(r1)
/* 80362CB4 0035FBF4  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80362CB8 0035FBF8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80362CBC 0035FBFC  4B CD 24 4D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80362CC0 0035FC00  48 0A EF 11 */	bl roundAng__Ff
/* 80362CC4 0035FC04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80362CC8 0035FC08  FF E0 08 90 */	fmr f31, f1
/* 80362CCC 0035FC0C  7F E3 FB 78 */	mr r3, r31
/* 80362CD0 0035FC10  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80362CD4 0035FC14  7D 89 03 A6 */	mtctr r12
/* 80362CD8 0035FC18  4E 80 04 21 */	bctrl 
/* 80362CDC 0035FC1C  FC 40 08 90 */	fmr f2, f1
/* 80362CE0 0035FC20  FC 20 F8 90 */	fmr f1, f31
/* 80362CE4 0035FC24  48 0A EF 19 */	bl angDist__Fff
/* 80362CE8 0035FC28  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80362CEC 0035FC2C  FC 60 0A 10 */	fabs f3, f1
/* 80362CF0 0035FC30  C0 22 04 3C */	lfs f1, lbl_8051E79C@sda21(r2)
/* 80362CF4 0035FC34  C0 03 08 BC */	lfs f0, 0x8bc(r3)
/* 80362CF8 0035FC38  C0 42 04 38 */	lfs f2, lbl_8051E798@sda21(r2)
/* 80362CFC 0035FC3C  FC 60 18 18 */	frsp f3, f3
/* 80362D00 0035FC40  EC 01 00 32 */	fmuls f0, f1, f0
/* 80362D04 0035FC44  C0 22 04 34 */	lfs f1, lbl_8051E794@sda21(r2)
/* 80362D08 0035FC48  EC 02 00 32 */	fmuls f0, f2, f0
/* 80362D0C 0035FC4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80362D10 0035FC50  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80362D14 0035FC54  40 81 00 14 */	ble .L_80362D28
/* 80362D18 0035FC58  7F E3 FB 78 */	mr r3, r31
/* 80362D1C 0035FC5C  4B DA 25 85 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80362D20 0035FC60  38 00 00 05 */	li r0, 5
/* 80362D24 0035FC64  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80362D28:
/* 80362D28 0035FC68  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80362D2C 0035FC6C  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80362D30 0035FC70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80362D34 0035FC74  4C 40 13 82 */	cror 2, 0, 2
/* 80362D38 0035FC78  40 82 00 18 */	bne .L_80362D50
/* 80362D3C 0035FC7C  38 00 00 07 */	li r0, 7
/* 80362D40 0035FC80  7F E3 FB 78 */	mr r3, r31
/* 80362D44 0035FC84  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80362D48 0035FC88  4B DA 25 59 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80362D4C 0035FC8C  48 00 00 4C */	b .L_80362D98
.L_80362D50:
/* 80362D50 0035FC90  7F E3 FB 78 */	mr r3, r31
/* 80362D54 0035FC94  38 80 00 00 */	li r4, 0
/* 80362D58 0035FC98  4B DB 19 01 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80362D5C 0035FC9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362D60 0035FCA0  41 82 00 18 */	beq .L_80362D78
/* 80362D64 0035FCA4  38 00 00 06 */	li r0, 6
/* 80362D68 0035FCA8  7F E3 FB 78 */	mr r3, r31
/* 80362D6C 0035FCAC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80362D70 0035FCB0  4B DA 25 31 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80362D74 0035FCB4  48 00 00 24 */	b .L_80362D98
.L_80362D78:
/* 80362D78 0035FCB8  7F E3 FB 78 */	mr r3, r31
/* 80362D7C 0035FCBC  48 00 1C 1D */	bl isAttackStart__Q34Game6Miulin3ObjFv
/* 80362D80 0035FCC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362D84 0035FCC4  41 82 00 14 */	beq .L_80362D98
/* 80362D88 0035FCC8  38 00 00 02 */	li r0, 2
/* 80362D8C 0035FCCC  7F E3 FB 78 */	mr r3, r31
/* 80362D90 0035FCD0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80362D94 0035FCD4  4B DA 25 0D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80362D98:
/* 80362D98 0035FCD8  7F E3 FB 78 */	mr r3, r31
/* 80362D9C 0035FCDC  4B DA 45 65 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80362DA0 0035FCE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80362DA4 0035FCE4  41 82 00 28 */	beq .L_80362DCC
/* 80362DA8 0035FCE8  C0 22 04 48 */	lfs f1, lbl_8051E7A8@sda21(r2)
/* 80362DAC 0035FCEC  7F E3 FB 78 */	mr r3, r31
/* 80362DB0 0035FCF0  C0 02 9C 38 */	lfs f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80362DB4 0035FCF4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80362DB8 0035FCF8  4B DA 45 D9 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80362DBC 0035FCFC  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80362DC0 0035FD00  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80362DC4 0035FD04  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80362DC8 0035FD08  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80362DCC:
/* 80362DCC 0035FD0C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80362DD0 0035FD10  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80362DD4 0035FD14  28 00 00 00 */	cmplwi r0, 0
/* 80362DD8 0035FD18  41 82 00 54 */	beq .L_80362E2C
/* 80362DDC 0035FD1C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80362DE0 0035FD20  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80362DE4 0035FD24  40 82 00 48 */	bne .L_80362E2C
/* 80362DE8 0035FD28  7F C3 F3 78 */	mr r3, r30
/* 80362DEC 0035FD2C  7F E4 FB 78 */	mr r4, r31
/* 80362DF0 0035FD30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80362DF4 0035FD34  38 C0 00 00 */	li r6, 0
/* 80362DF8 0035FD38  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 80362DFC 0035FD3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80362E00 0035FD40  7D 89 03 A6 */	mtctr r12
/* 80362E04 0035FD44  4E 80 04 21 */	bctrl 
/* 80362E08 0035FD48  7F E3 FB 78 */	mr r3, r31
/* 80362E0C 0035FD4C  4B DA 45 91 */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 80362E10 0035FD50  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80362E14 0035FD54  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80362E18 0035FD58  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80362E1C 0035FD5C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80362E20 0035FD60  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80362E24 0035FD64  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80362E28 0035FD68  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_80362E2C:
/* 80362E2C 0035FD6C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80362E30 0035FD70  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80362E34 0035FD74  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80362E38 0035FD78  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80362E3C 0035FD7C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80362E40 0035FD80  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80362E44 0035FD84  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80362E48 0035FD88  7C 08 03 A6 */	mtlr r0
/* 80362E4C 0035FD8C  38 21 00 60 */	addi r1, r1, 0x60
/* 80362E50 0035FD90  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin16StateAttackStartFi
__ct__Q34Game6Miulin16StateAttackStartFi:
/* 80362E54 0035FD94  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80362E58 0035FD98  3C E0 80 4E */	lis r7, __vt__Q34Game6Miulin5State@ha
/* 80362E5C 0035FD9C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80362E60 0035FDA0  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin16StateAttackStart@ha
/* 80362E64 0035FDA4  90 03 00 00 */	stw r0, 0(r3)
/* 80362E68 0035FDA8  3C A0 80 49 */	lis r5, lbl_80491670@ha
/* 80362E6C 0035FDAC  39 00 00 00 */	li r8, 0
/* 80362E70 0035FDB0  38 E7 24 68 */	addi r7, r7, __vt__Q34Game6Miulin5State@l
/* 80362E74 0035FDB4  90 83 00 04 */	stw r4, 4(r3)
/* 80362E78 0035FDB8  38 86 23 FC */	addi r4, r6, __vt__Q34Game6Miulin16StateAttackStart@l
/* 80362E7C 0035FDBC  38 05 16 70 */	addi r0, r5, lbl_80491670@l
/* 80362E80 0035FDC0  91 03 00 08 */	stw r8, 8(r3)
/* 80362E84 0035FDC4  90 E3 00 00 */	stw r7, 0(r3)
/* 80362E88 0035FDC8  90 83 00 00 */	stw r4, 0(r3)
/* 80362E8C 0035FDCC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80362E90 0035FDD0  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin16StateAttackStartFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin16StateAttackStartFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80362E94 0035FDD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362E98 0035FDD8  7C 08 02 A6 */	mflr r0
/* 80362E9C 0035FDDC  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80362EA0 0035FDE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362EA4 0035FDE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362EA8 0035FDE8  7C 9F 23 78 */	mr r31, r4
/* 80362EAC 0035FDEC  7F E3 FB 78 */	mr r3, r31
/* 80362EB0 0035FDF0  4B DA 44 E1 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80362EB4 0035FDF4  7F E3 FB 78 */	mr r3, r31
/* 80362EB8 0035FDF8  38 80 00 00 */	li r4, 0
/* 80362EBC 0035FDFC  38 A0 00 00 */	li r5, 0
/* 80362EC0 0035FE00  4B DA 21 45 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80362EC4 0035FE04  7F E3 FB 78 */	mr r3, r31
/* 80362EC8 0035FE08  4B D9 EB 05 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80362ECC 0035FE0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362ED0 0035FE10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362ED4 0035FE14  7C 08 03 A6 */	mtlr r0
/* 80362ED8 0035FE18  38 21 00 10 */	addi r1, r1, 0x10
/* 80362EDC 0035FE1C  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin16StateAttackStartFPQ24Game9EnemyBase
exec__Q34Game6Miulin16StateAttackStartFPQ24Game9EnemyBase:
/* 80362EE0 0035FE20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362EE4 0035FE24  7C 08 02 A6 */	mflr r0
/* 80362EE8 0035FE28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362EEC 0035FE2C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80362EF0 0035FE30  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80362EF4 0035FE34  28 00 00 00 */	cmplwi r0, 0
/* 80362EF8 0035FE38  41 82 00 28 */	beq .L_80362F20
/* 80362EFC 0035FE3C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80362F00 0035FE40  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80362F04 0035FE44  40 82 00 1C */	bne .L_80362F20
/* 80362F08 0035FE48  81 83 00 00 */	lwz r12, 0(r3)
/* 80362F0C 0035FE4C  38 A0 00 03 */	li r5, 3
/* 80362F10 0035FE50  38 C0 00 00 */	li r6, 0
/* 80362F14 0035FE54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80362F18 0035FE58  7D 89 03 A6 */	mtctr r12
/* 80362F1C 0035FE5C  4E 80 04 21 */	bctrl 
.L_80362F20:
/* 80362F20 0035FE60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362F24 0035FE64  7C 08 03 A6 */	mtlr r0
/* 80362F28 0035FE68  38 21 00 10 */	addi r1, r1, 0x10
/* 80362F2C 0035FE6C  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin14StateAttackingFi
__ct__Q34Game6Miulin14StateAttackingFi:
/* 80362F30 0035FE70  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80362F34 0035FE74  3C E0 80 4E */	lis r7, __vt__Q34Game6Miulin5State@ha
/* 80362F38 0035FE78  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80362F3C 0035FE7C  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin14StateAttacking@ha
/* 80362F40 0035FE80  90 03 00 00 */	stw r0, 0(r3)
/* 80362F44 0035FE84  3C A0 80 49 */	lis r5, lbl_8049167C@ha
/* 80362F48 0035FE88  39 00 00 00 */	li r8, 0
/* 80362F4C 0035FE8C  38 E7 24 68 */	addi r7, r7, __vt__Q34Game6Miulin5State@l
/* 80362F50 0035FE90  90 83 00 04 */	stw r4, 4(r3)
/* 80362F54 0035FE94  38 86 23 D8 */	addi r4, r6, __vt__Q34Game6Miulin14StateAttacking@l
/* 80362F58 0035FE98  38 05 16 7C */	addi r0, r5, lbl_8049167C@l
/* 80362F5C 0035FE9C  91 03 00 08 */	stw r8, 8(r3)
/* 80362F60 0035FEA0  90 E3 00 00 */	stw r7, 0(r3)
/* 80362F64 0035FEA4  90 83 00 00 */	stw r4, 0(r3)
/* 80362F68 0035FEA8  90 03 00 0C */	stw r0, 0xc(r3)
/* 80362F6C 0035FEAC  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin14StateAttackingFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin14StateAttackingFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80362F70 0035FEB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80362F74 0035FEB4  7C 08 02 A6 */	mflr r0
/* 80362F78 0035FEB8  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80362F7C 0035FEBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80362F80 0035FEC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80362F84 0035FEC4  7C 9F 23 78 */	mr r31, r4
/* 80362F88 0035FEC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80362F8C 0035FECC  7C 7E 1B 78 */	mr r30, r3
/* 80362F90 0035FED0  7F E3 FB 78 */	mr r3, r31
/* 80362F94 0035FED4  4B DA 43 FD */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80362F98 0035FED8  7F E3 FB 78 */	mr r3, r31
/* 80362F9C 0035FEDC  38 80 00 01 */	li r4, 1
/* 80362FA0 0035FEE0  38 A0 00 00 */	li r5, 0
/* 80362FA4 0035FEE4  4B DA 20 61 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80362FA8 0035FEE8  38 00 00 01 */	li r0, 1
/* 80362FAC 0035FEEC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80362FB0 0035FEF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80362FB4 0035FEF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80362FB8 0035FEF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80362FBC 0035FEFC  7C 08 03 A6 */	mtlr r0
/* 80362FC0 0035FF00  38 21 00 10 */	addi r1, r1, 0x10
/* 80362FC4 0035FF04  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin14StateAttackingFPQ24Game9EnemyBase
exec__Q34Game6Miulin14StateAttackingFPQ24Game9EnemyBase:
/* 80362FC8 0035FF08  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80362FCC 0035FF0C  7C 08 02 A6 */	mflr r0
/* 80362FD0 0035FF10  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80362FD4 0035FF14  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80362FD8 0035FF18  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80362FDC 0035FF1C  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80362FE0 0035FF20  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80362FE4 0035FF24  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 80362FE8 0035FF28  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80362FEC 0035FF2C  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 80362FF0 0035FF30  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 80362FF4 0035FF34  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80362FF8 0035FF38  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80362FFC 0035FF3C  7C 7E 1B 78 */	mr r30, r3
/* 80363000 0035FF40  7C 9F 23 78 */	mr r31, r4
/* 80363004 0035FF44  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80363008 0035FF48  28 00 00 00 */	cmplwi r0, 0
/* 8036300C 0035FF4C  41 82 00 10 */	beq .L_8036301C
/* 80363010 0035FF50  C0 22 04 4C */	lfs f1, lbl_8051E7AC@sda21(r2)
/* 80363014 0035FF54  7F E3 FB 78 */	mr r3, r31
/* 80363018 0035FF58  48 00 27 65 */	bl turnFunc__Q34Game6Miulin3ObjFf
.L_8036301C:
/* 8036301C 0035FF5C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80363020 0035FF60  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80363024 0035FF64  28 00 00 00 */	cmplwi r0, 0
/* 80363028 0035FF68  41 82 07 94 */	beq .L_803637BC
/* 8036302C 0035FF6C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80363030 0035FF70  2C 00 00 03 */	cmpwi r0, 3
/* 80363034 0035FF74  41 82 06 F8 */	beq .L_8036372C
/* 80363038 0035FF78  40 80 00 10 */	bge .L_80363048
/* 8036303C 0035FF7C  2C 00 00 02 */	cmpwi r0, 2
/* 80363040 0035FF80  40 80 00 14 */	bge .L_80363054
/* 80363044 0035FF84  48 00 07 78 */	b .L_803637BC
.L_80363048:
/* 80363048 0035FF88  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8036304C 0035FF8C  41 82 07 1C */	beq .L_80363768
/* 80363050 0035FF90  48 00 07 6C */	b .L_803637BC
.L_80363054:
/* 80363054 0035FF94  38 00 00 00 */	li r0, 0
/* 80363058 0035FF98  7F E4 FB 78 */	mr r4, r31
/* 8036305C 0035FF9C  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80363060 0035FFA0  38 61 00 20 */	addi r3, r1, 0x20
/* 80363064 0035FFA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80363068 0035FFA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036306C 0035FFAC  7D 89 03 A6 */	mtctr r12
/* 80363070 0035FFB0  4E 80 04 21 */	bctrl 
/* 80363074 0035FFB4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80363078 0035FFB8  7F E3 FB 78 */	mr r3, r31
/* 8036307C 0035FFBC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80363080 0035FFC0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80363084 0035FFC4  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 80363088 0035FFC8  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8036308C 0035FFCC  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80363090 0035FFD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80363094 0035FFD4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80363098 0035FFD8  7D 89 03 A6 */	mtctr r12
/* 8036309C 0035FFDC  4E 80 04 21 */	bctrl 
/* 803630A0 0035FFE0  FC 40 08 90 */	fmr f2, f1
/* 803630A4 0035FFE4  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 803630A8 0035FFE8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803630AC 0035FFEC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803630B0 0035FFF0  C0 83 09 0C */	lfs f4, 0x90c(r3)
/* 803630B4 0035FFF4  40 80 00 08 */	bge .L_803630BC
/* 803630B8 0035FFF8  FC 40 10 50 */	fneg f2, f2
.L_803630BC:
/* 803630BC 0035FFFC  C0 62 04 50 */	lfs f3, lbl_8051E7B0@sda21(r2)
/* 803630C0 00360000  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803630C4 00360004  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 803630C8 00360008  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 803630CC 0036000C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803630D0 00360010  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803630D4 00360014  FC 00 10 1E */	fctiwz f0, f2
/* 803630D8 00360018  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 803630DC 0036001C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803630E0 00360020  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803630E4 00360024  7C 64 02 14 */	add r3, r4, r0
/* 803630E8 00360028  C0 03 00 04 */	lfs f0, 4(r3)
/* 803630EC 0036002C  EC C4 00 32 */	fmuls f6, f4, f0
/* 803630F0 00360030  40 80 00 28 */	bge .L_80363118
/* 803630F4 00360034  C0 02 04 54 */	lfs f0, lbl_8051E7B4@sda21(r2)
/* 803630F8 00360038  EC 01 00 32 */	fmuls f0, f1, f0
/* 803630FC 0036003C  FC 00 00 1E */	fctiwz f0, f0
/* 80363100 00360040  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 80363104 00360044  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 80363108 00360048  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036310C 0036004C  7C 04 04 2E */	lfsx f0, r4, r0
/* 80363110 00360050  FC 00 00 50 */	fneg f0, f0
/* 80363114 00360054  48 00 00 1C */	b .L_80363130
.L_80363118:
/* 80363118 00360058  EC 01 00 F2 */	fmuls f0, f1, f3
/* 8036311C 0036005C  FC 00 00 1E */	fctiwz f0, f0
/* 80363120 00360060  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 80363124 00360064  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80363128 00360068  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8036312C 0036006C  7C 04 04 2E */	lfsx f0, r4, r0
.L_80363130:
/* 80363130 00360070  EC A4 00 32 */	fmuls f5, f4, f0
/* 80363134 00360074  C0 82 04 28 */	lfs f4, lbl_8051E788@sda21(r2)
/* 80363138 00360078  C0 41 00 70 */	lfs f2, 0x70(r1)
/* 8036313C 0036007C  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80363140 00360080  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 80363144 00360084  38 00 00 00 */	li r0, 0
/* 80363148 00360088  C0 21 00 78 */	lfs f1, 0x78(r1)
/* 8036314C 0036008C  EC 62 28 2A */	fadds f3, f2, f5
/* 80363150 00360090  EC 40 20 2A */	fadds f2, f0, f4
/* 80363154 00360094  C0 02 04 58 */	lfs f0, lbl_8051E7B8@sda21(r2)
/* 80363158 00360098  EC 21 30 2A */	fadds f1, f1, f6
/* 8036315C 0036009C  D0 A1 00 64 */	stfs f5, 0x64(r1)
/* 80363160 003600A0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80363164 003600A4  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 80363168 003600A8  28 00 00 00 */	cmplwi r0, 0
/* 8036316C 003600AC  EF E0 10 2A */	fadds f31, f0, f2
/* 80363170 003600B0  D0 C1 00 6C */	stfs f6, 0x6c(r1)
/* 80363174 003600B4  EF C2 00 28 */	fsubs f30, f2, f0
/* 80363178 003600B8  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8036317C 003600BC  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 80363180 003600C0  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 80363184 003600C4  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 80363188 003600C8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8036318C 003600CC  C0 05 05 B4 */	lfs f0, 0x5b4(r5)
/* 80363190 003600D0  EF A0 00 32 */	fmuls f29, f0, f0
/* 80363194 003600D4  90 81 00 54 */	stw r4, 0x54(r1)
/* 80363198 003600D8  90 01 00 60 */	stw r0, 0x60(r1)
/* 8036319C 003600DC  90 01 00 58 */	stw r0, 0x58(r1)
/* 803631A0 003600E0  90 61 00 5C */	stw r3, 0x5c(r1)
/* 803631A4 003600E4  40 82 00 1C */	bne .L_803631C0
/* 803631A8 003600E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803631AC 003600EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803631B0 003600F0  7D 89 03 A6 */	mtctr r12
/* 803631B4 003600F4  4E 80 04 21 */	bctrl 
/* 803631B8 003600F8  90 61 00 58 */	stw r3, 0x58(r1)
/* 803631BC 003600FC  48 00 02 2C */	b .L_803633E8
.L_803631C0:
/* 803631C0 00360100  81 83 00 00 */	lwz r12, 0(r3)
/* 803631C4 00360104  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803631C8 00360108  7D 89 03 A6 */	mtctr r12
/* 803631CC 0036010C  4E 80 04 21 */	bctrl 
/* 803631D0 00360110  90 61 00 58 */	stw r3, 0x58(r1)
/* 803631D4 00360114  48 00 00 58 */	b .L_8036322C
.L_803631D8:
/* 803631D8 00360118  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 803631DC 0036011C  80 81 00 58 */	lwz r4, 0x58(r1)
/* 803631E0 00360120  81 83 00 00 */	lwz r12, 0(r3)
/* 803631E4 00360124  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803631E8 00360128  7D 89 03 A6 */	mtctr r12
/* 803631EC 0036012C  4E 80 04 21 */	bctrl 
/* 803631F0 00360130  7C 64 1B 78 */	mr r4, r3
/* 803631F4 00360134  80 61 00 60 */	lwz r3, 0x60(r1)
/* 803631F8 00360138  81 83 00 00 */	lwz r12, 0(r3)
/* 803631FC 0036013C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80363200 00360140  7D 89 03 A6 */	mtctr r12
/* 80363204 00360144  4E 80 04 21 */	bctrl 
/* 80363208 00360148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036320C 0036014C  40 82 01 DC */	bne .L_803633E8
/* 80363210 00360150  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80363214 00360154  80 81 00 58 */	lwz r4, 0x58(r1)
/* 80363218 00360158  81 83 00 00 */	lwz r12, 0(r3)
/* 8036321C 0036015C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80363220 00360160  7D 89 03 A6 */	mtctr r12
/* 80363224 00360164  4E 80 04 21 */	bctrl 
/* 80363228 00360168  90 61 00 58 */	stw r3, 0x58(r1)
.L_8036322C:
/* 8036322C 0036016C  81 81 00 54 */	lwz r12, 0x54(r1)
/* 80363230 00360170  38 61 00 54 */	addi r3, r1, 0x54
/* 80363234 00360174  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80363238 00360178  7D 89 03 A6 */	mtctr r12
/* 8036323C 0036017C  4E 80 04 21 */	bctrl 
/* 80363240 00360180  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363244 00360184  41 82 FF 94 */	beq .L_803631D8
/* 80363248 00360188  48 00 01 A0 */	b .L_803633E8
.L_8036324C:
/* 8036324C 0036018C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80363250 00360190  81 83 00 00 */	lwz r12, 0(r3)
/* 80363254 00360194  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80363258 00360198  7D 89 03 A6 */	mtctr r12
/* 8036325C 0036019C  4E 80 04 21 */	bctrl 
/* 80363260 003601A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80363264 003601A4  7C 7E 1B 78 */	mr r30, r3
/* 80363268 003601A8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8036326C 003601AC  7D 89 03 A6 */	mtctr r12
/* 80363270 003601B0  4E 80 04 21 */	bctrl 
/* 80363274 003601B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363278 003601B8  41 82 00 B4 */	beq .L_8036332C
/* 8036327C 003601BC  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 80363280 003601C0  7C 00 F8 40 */	cmplw r0, r31
/* 80363284 003601C4  41 82 00 A8 */	beq .L_8036332C
/* 80363288 003601C8  7F C4 F3 78 */	mr r4, r30
/* 8036328C 003601CC  38 61 00 14 */	addi r3, r1, 0x14
/* 80363290 003601D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363294 003601D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80363298 003601D8  7D 89 03 A6 */	mtctr r12
/* 8036329C 003601DC  4E 80 04 21 */	bctrl 
/* 803632A0 003601E0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803632A4 003601E4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 803632A8 003601E8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803632AC 003601EC  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 803632B0 003601F0  40 81 00 7C */	ble .L_8036332C
/* 803632B4 003601F4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 803632B8 003601F8  40 80 00 74 */	bge .L_8036332C
/* 803632BC 003601FC  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 803632C0 00360200  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 803632C4 00360204  EC 00 18 28 */	fsubs f0, f0, f3
/* 803632C8 00360208  EC 21 10 28 */	fsubs f1, f1, f2
/* 803632CC 0036020C  EC 00 00 32 */	fmuls f0, f0, f0
/* 803632D0 00360210  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 803632D4 00360214  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 803632D8 00360218  40 80 00 54 */	bge .L_8036332C
/* 803632DC 0036021C  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 803632E0 00360220  7C 00 F0 40 */	cmplw r0, r30
/* 803632E4 00360224  40 82 00 0C */	bne .L_803632F0
/* 803632E8 00360228  38 00 00 00 */	li r0, 0
/* 803632EC 0036022C  90 1F 02 30 */	stw r0, 0x230(r31)
.L_803632F0:
/* 803632F0 00360230  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 803632F4 00360234  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 803632F8 00360238  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 803632FC 0036023C  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractBury@ha
/* 80363300 00360240  90 01 00 48 */	stw r0, 0x48(r1)
/* 80363304 00360244  38 03 48 C0 */	addi r0, r3, __vt__Q24Game12InteractBury@l
/* 80363308 00360248  7F C3 F3 78 */	mr r3, r30
/* 8036330C 0036024C  38 81 00 48 */	addi r4, r1, 0x48
/* 80363310 00360250  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80363314 00360254  90 01 00 48 */	stw r0, 0x48(r1)
/* 80363318 00360258  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8036331C 0036025C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363320 00360260  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80363324 00360264  7D 89 03 A6 */	mtctr r12
/* 80363328 00360268  4E 80 04 21 */	bctrl 
.L_8036332C:
/* 8036332C 0036026C  80 01 00 60 */	lwz r0, 0x60(r1)
/* 80363330 00360270  28 00 00 00 */	cmplwi r0, 0
/* 80363334 00360274  40 82 00 24 */	bne .L_80363358
/* 80363338 00360278  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 8036333C 0036027C  80 81 00 58 */	lwz r4, 0x58(r1)
/* 80363340 00360280  81 83 00 00 */	lwz r12, 0(r3)
/* 80363344 00360284  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80363348 00360288  7D 89 03 A6 */	mtctr r12
/* 8036334C 0036028C  4E 80 04 21 */	bctrl 
/* 80363350 00360290  90 61 00 58 */	stw r3, 0x58(r1)
/* 80363354 00360294  48 00 00 94 */	b .L_803633E8
.L_80363358:
/* 80363358 00360298  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 8036335C 0036029C  80 81 00 58 */	lwz r4, 0x58(r1)
/* 80363360 003602A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80363364 003602A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80363368 003602A8  7D 89 03 A6 */	mtctr r12
/* 8036336C 003602AC  4E 80 04 21 */	bctrl 
/* 80363370 003602B0  90 61 00 58 */	stw r3, 0x58(r1)
/* 80363374 003602B4  48 00 00 58 */	b .L_803633CC
.L_80363378:
/* 80363378 003602B8  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 8036337C 003602BC  80 81 00 58 */	lwz r4, 0x58(r1)
/* 80363380 003602C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80363384 003602C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80363388 003602C8  7D 89 03 A6 */	mtctr r12
/* 8036338C 003602CC  4E 80 04 21 */	bctrl 
/* 80363390 003602D0  7C 64 1B 78 */	mr r4, r3
/* 80363394 003602D4  80 61 00 60 */	lwz r3, 0x60(r1)
/* 80363398 003602D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036339C 003602DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803633A0 003602E0  7D 89 03 A6 */	mtctr r12
/* 803633A4 003602E4  4E 80 04 21 */	bctrl 
/* 803633A8 003602E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803633AC 003602EC  40 82 00 3C */	bne .L_803633E8
/* 803633B0 003602F0  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 803633B4 003602F4  80 81 00 58 */	lwz r4, 0x58(r1)
/* 803633B8 003602F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803633BC 003602FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803633C0 00360300  7D 89 03 A6 */	mtctr r12
/* 803633C4 00360304  4E 80 04 21 */	bctrl 
/* 803633C8 00360308  90 61 00 58 */	stw r3, 0x58(r1)
.L_803633CC:
/* 803633CC 0036030C  81 81 00 54 */	lwz r12, 0x54(r1)
/* 803633D0 00360310  38 61 00 54 */	addi r3, r1, 0x54
/* 803633D4 00360314  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803633D8 00360318  7D 89 03 A6 */	mtctr r12
/* 803633DC 0036031C  4E 80 04 21 */	bctrl 
/* 803633E0 00360320  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803633E4 00360324  41 82 FF 94 */	beq .L_80363378
.L_803633E8:
/* 803633E8 00360328  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 803633EC 0036032C  81 83 00 00 */	lwz r12, 0(r3)
/* 803633F0 00360330  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803633F4 00360334  7D 89 03 A6 */	mtctr r12
/* 803633F8 00360338  4E 80 04 21 */	bctrl 
/* 803633FC 0036033C  80 81 00 58 */	lwz r4, 0x58(r1)
/* 80363400 00360340  7C 04 18 40 */	cmplw r4, r3
/* 80363404 00360344  40 82 FE 48 */	bne .L_8036324C
/* 80363408 00360348  38 00 00 00 */	li r0, 0
/* 8036340C 0036034C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80363410 00360350  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80363414 00360354  90 01 00 44 */	stw r0, 0x44(r1)
/* 80363418 00360358  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 8036341C 0036035C  28 00 00 00 */	cmplwi r0, 0
/* 80363420 00360360  90 81 00 38 */	stw r4, 0x38(r1)
/* 80363424 00360364  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80363428 00360368  90 61 00 40 */	stw r3, 0x40(r1)
/* 8036342C 0036036C  40 82 00 1C */	bne .L_80363448
/* 80363430 00360370  81 83 00 00 */	lwz r12, 0(r3)
/* 80363434 00360374  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80363438 00360378  7D 89 03 A6 */	mtctr r12
/* 8036343C 0036037C  4E 80 04 21 */	bctrl 
/* 80363440 00360380  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80363444 00360384  48 00 02 20 */	b .L_80363664
.L_80363448:
/* 80363448 00360388  81 83 00 00 */	lwz r12, 0(r3)
/* 8036344C 0036038C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80363450 00360390  7D 89 03 A6 */	mtctr r12
/* 80363454 00360394  4E 80 04 21 */	bctrl 
/* 80363458 00360398  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8036345C 0036039C  48 00 00 58 */	b .L_803634B4
.L_80363460:
/* 80363460 003603A0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80363464 003603A4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80363468 003603A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036346C 003603AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80363470 003603B0  7D 89 03 A6 */	mtctr r12
/* 80363474 003603B4  4E 80 04 21 */	bctrl 
/* 80363478 003603B8  7C 64 1B 78 */	mr r4, r3
/* 8036347C 003603BC  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80363480 003603C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80363484 003603C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80363488 003603C8  7D 89 03 A6 */	mtctr r12
/* 8036348C 003603CC  4E 80 04 21 */	bctrl 
/* 80363490 003603D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363494 003603D4  40 82 01 D0 */	bne .L_80363664
/* 80363498 003603D8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8036349C 003603DC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 803634A0 003603E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803634A4 003603E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803634A8 003603E8  7D 89 03 A6 */	mtctr r12
/* 803634AC 003603EC  4E 80 04 21 */	bctrl 
/* 803634B0 003603F0  90 61 00 3C */	stw r3, 0x3c(r1)
.L_803634B4:
/* 803634B4 003603F4  81 81 00 38 */	lwz r12, 0x38(r1)
/* 803634B8 003603F8  38 61 00 38 */	addi r3, r1, 0x38
/* 803634BC 003603FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803634C0 00360400  7D 89 03 A6 */	mtctr r12
/* 803634C4 00360404  4E 80 04 21 */	bctrl 
/* 803634C8 00360408  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803634CC 0036040C  41 82 FF 94 */	beq .L_80363460
/* 803634D0 00360410  48 00 01 94 */	b .L_80363664
.L_803634D4:
/* 803634D4 00360414  80 61 00 40 */	lwz r3, 0x40(r1)
/* 803634D8 00360418  81 83 00 00 */	lwz r12, 0(r3)
/* 803634DC 0036041C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803634E0 00360420  7D 89 03 A6 */	mtctr r12
/* 803634E4 00360424  4E 80 04 21 */	bctrl 
/* 803634E8 00360428  81 83 00 00 */	lwz r12, 0(r3)
/* 803634EC 0036042C  7C 7E 1B 78 */	mr r30, r3
/* 803634F0 00360430  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803634F4 00360434  7D 89 03 A6 */	mtctr r12
/* 803634F8 00360438  4E 80 04 21 */	bctrl 
/* 803634FC 0036043C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363500 00360440  41 82 00 A8 */	beq .L_803635A8
/* 80363504 00360444  7F C4 F3 78 */	mr r4, r30
/* 80363508 00360448  38 61 00 08 */	addi r3, r1, 8
/* 8036350C 0036044C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363510 00360450  81 8C 00 08 */	lwz r12, 8(r12)
/* 80363514 00360454  7D 89 03 A6 */	mtctr r12
/* 80363518 00360458  4E 80 04 21 */	bctrl 
/* 8036351C 0036045C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80363520 00360460  C0 41 00 08 */	lfs f2, 8(r1)
/* 80363524 00360464  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80363528 00360468  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8036352C 0036046C  40 81 00 7C */	ble .L_803635A8
/* 80363530 00360470  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80363534 00360474  40 80 00 74 */	bge .L_803635A8
/* 80363538 00360478  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 8036353C 0036047C  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 80363540 00360480  EC 00 18 28 */	fsubs f0, f0, f3
/* 80363544 00360484  EC 21 10 28 */	fsubs f1, f1, f2
/* 80363548 00360488  EC 00 00 32 */	fmuls f0, f0, f0
/* 8036354C 0036048C  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 80363550 00360490  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80363554 00360494  40 80 00 54 */	bge .L_803635A8
/* 80363558 00360498  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8036355C 0036049C  7C 00 F0 40 */	cmplw r0, r30
/* 80363560 003604A0  40 82 00 0C */	bne .L_8036356C
/* 80363564 003604A4  38 00 00 00 */	li r0, 0
/* 80363568 003604A8  90 1F 02 30 */	stw r0, 0x230(r31)
.L_8036356C:
/* 8036356C 003604AC  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 80363570 003604B0  C0 02 04 5C */	lfs f0, lbl_8051E7BC@sda21(r2)
/* 80363574 003604B4  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 80363578 003604B8  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractBury@ha
/* 8036357C 003604BC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80363580 003604C0  38 03 48 C0 */	addi r0, r3, __vt__Q24Game12InteractBury@l
/* 80363584 003604C4  7F C3 F3 78 */	mr r3, r30
/* 80363588 003604C8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8036358C 003604CC  93 E1 00 30 */	stw r31, 0x30(r1)
/* 80363590 003604D0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80363594 003604D4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80363598 003604D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036359C 003604DC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 803635A0 003604E0  7D 89 03 A6 */	mtctr r12
/* 803635A4 003604E4  4E 80 04 21 */	bctrl 
.L_803635A8:
/* 803635A8 003604E8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803635AC 003604EC  28 00 00 00 */	cmplwi r0, 0
/* 803635B0 003604F0  40 82 00 24 */	bne .L_803635D4
/* 803635B4 003604F4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 803635B8 003604F8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 803635BC 003604FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803635C0 00360500  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803635C4 00360504  7D 89 03 A6 */	mtctr r12
/* 803635C8 00360508  4E 80 04 21 */	bctrl 
/* 803635CC 0036050C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803635D0 00360510  48 00 00 94 */	b .L_80363664
.L_803635D4:
/* 803635D4 00360514  80 61 00 40 */	lwz r3, 0x40(r1)
/* 803635D8 00360518  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 803635DC 0036051C  81 83 00 00 */	lwz r12, 0(r3)
/* 803635E0 00360520  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803635E4 00360524  7D 89 03 A6 */	mtctr r12
/* 803635E8 00360528  4E 80 04 21 */	bctrl 
/* 803635EC 0036052C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 803635F0 00360530  48 00 00 58 */	b .L_80363648
.L_803635F4:
/* 803635F4 00360534  80 61 00 40 */	lwz r3, 0x40(r1)
/* 803635F8 00360538  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 803635FC 0036053C  81 83 00 00 */	lwz r12, 0(r3)
/* 80363600 00360540  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80363604 00360544  7D 89 03 A6 */	mtctr r12
/* 80363608 00360548  4E 80 04 21 */	bctrl 
/* 8036360C 0036054C  7C 64 1B 78 */	mr r4, r3
/* 80363610 00360550  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80363614 00360554  81 83 00 00 */	lwz r12, 0(r3)
/* 80363618 00360558  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036361C 0036055C  7D 89 03 A6 */	mtctr r12
/* 80363620 00360560  4E 80 04 21 */	bctrl 
/* 80363624 00360564  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363628 00360568  40 82 00 3C */	bne .L_80363664
/* 8036362C 0036056C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80363630 00360570  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80363634 00360574  81 83 00 00 */	lwz r12, 0(r3)
/* 80363638 00360578  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8036363C 0036057C  7D 89 03 A6 */	mtctr r12
/* 80363640 00360580  4E 80 04 21 */	bctrl 
/* 80363644 00360584  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80363648:
/* 80363648 00360588  81 81 00 38 */	lwz r12, 0x38(r1)
/* 8036364C 0036058C  38 61 00 38 */	addi r3, r1, 0x38
/* 80363650 00360590  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80363654 00360594  7D 89 03 A6 */	mtctr r12
/* 80363658 00360598  4E 80 04 21 */	bctrl 
/* 8036365C 0036059C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363660 003605A0  41 82 FF 94 */	beq .L_803635F4
.L_80363664:
/* 80363664 003605A4  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80363668 003605A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8036366C 003605AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363670 003605B0  7D 89 03 A6 */	mtctr r12
/* 80363674 003605B4  4E 80 04 21 */	bctrl 
/* 80363678 003605B8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8036367C 003605BC  7C 04 18 40 */	cmplw r4, r3
/* 80363680 003605C0  40 82 FE 54 */	bne .L_803634D4
/* 80363684 003605C4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80363688 003605C8  7F E3 FB 78 */	mr r3, r31
/* 8036368C 003605CC  C0 82 04 60 */	lfs f4, lbl_8051E7C0@sda21(r2)
/* 80363690 003605D0  38 80 00 00 */	li r4, 0
/* 80363694 003605D4  C3 C5 04 C4 */	lfs f30, 0x4c4(r5)
/* 80363698 003605D8  C3 E5 04 EC */	lfs f31, 0x4ec(r5)
/* 8036369C 003605DC  C3 85 05 14 */	lfs f28, 0x514(r5)
/* 803636A0 003605E0  FC 40 F0 90 */	fmr f2, f30
/* 803636A4 003605E4  FC 60 F8 90 */	fmr f3, f31
/* 803636A8 003605E8  C3 A5 05 3C */	lfs f29, 0x53c(r5)
/* 803636AC 003605EC  FC 20 E0 90 */	fmr f1, f28
/* 803636B0 003605F0  4B DA FE 25 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803636B4 003605F4  FC 20 E8 90 */	fmr f1, f29
/* 803636B8 003605F8  C0 82 04 60 */	lfs f4, lbl_8051E7C0@sda21(r2)
/* 803636BC 003605FC  FC 40 F0 90 */	fmr f2, f30
/* 803636C0 00360600  7F E3 FB 78 */	mr r3, r31
/* 803636C4 00360604  FC 60 F8 90 */	fmr f3, f31
/* 803636C8 00360608  38 80 00 00 */	li r4, 0
/* 803636CC 0036060C  4B DA FA 51 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 803636D0 00360610  FC 20 E0 90 */	fmr f1, f28
/* 803636D4 00360614  C0 82 04 60 */	lfs f4, lbl_8051E7C0@sda21(r2)
/* 803636D8 00360618  FC 40 F0 90 */	fmr f2, f30
/* 803636DC 0036061C  7F E3 FB 78 */	mr r3, r31
/* 803636E0 00360620  FC 60 F8 90 */	fmr f3, f31
/* 803636E4 00360624  38 80 00 00 */	li r4, 0
/* 803636E8 00360628  4B DB 00 A9 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 803636EC 0036062C  C0 42 04 28 */	lfs f2, lbl_8051E788@sda21(r2)
/* 803636F0 00360630  7F E3 FB 78 */	mr r3, r31
/* 803636F4 00360634  C0 22 04 64 */	lfs f1, lbl_8051E7C4@sda21(r2)
/* 803636F8 00360638  38 81 00 64 */	addi r4, r1, 0x64
/* 803636FC 0036063C  D0 5F 02 0C */	stfs f2, 0x20c(r31)
/* 80363700 00360640  C0 02 04 68 */	lfs f0, lbl_8051E7C8@sda21(r2)
/* 80363704 00360644  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 80363708 00360648  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 8036370C 0036064C  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80363710 00360650  48 00 27 6D */	bl "attackEffect__Q34Game6Miulin3ObjFR10Vector3<f>"
/* 80363714 00360654  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80363718 00360658  38 A1 00 70 */	addi r5, r1, 0x70
/* 8036371C 0036065C  38 80 00 0C */	li r4, 0xc
/* 80363720 00360660  38 C0 00 02 */	li r6, 2
/* 80363724 00360664  4B EF 00 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80363728 00360668  48 00 00 94 */	b .L_803637BC
.L_8036372C:
/* 8036372C 0036066C  C0 42 04 6C */	lfs f2, lbl_8051E7CC@sda21(r2)
/* 80363730 00360670  7F E3 FB 78 */	mr r3, r31
/* 80363734 00360674  C0 22 04 28 */	lfs f1, lbl_8051E788@sda21(r2)
/* 80363738 00360678  38 81 00 64 */	addi r4, r1, 0x64
/* 8036373C 0036067C  C0 02 04 70 */	lfs f0, lbl_8051E7D0@sda21(r2)
/* 80363740 00360680  D0 41 00 64 */	stfs f2, 0x64(r1)
/* 80363744 00360684  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 80363748 00360688  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 8036374C 0036068C  48 00 27 31 */	bl "attackEffect__Q34Game6Miulin3ObjFR10Vector3<f>"
/* 80363750 00360690  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80363754 00360694  38 A1 00 70 */	addi r5, r1, 0x70
/* 80363758 00360698  38 80 00 0C */	li r4, 0xc
/* 8036375C 0036069C  38 C0 00 02 */	li r6, 2
/* 80363760 003606A0  4B EF 00 21 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80363764 003606A4  48 00 00 58 */	b .L_803637BC
.L_80363768:
/* 80363768 003606A8  38 00 00 04 */	li r0, 4
/* 8036376C 003606AC  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80363770 003606B0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80363774 003606B4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80363778 003606B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036377C 003606BC  4C 40 13 82 */	cror 2, 0, 2
/* 80363780 003606C0  41 82 00 1C */	beq .L_8036379C
/* 80363784 003606C4  7F E3 FB 78 */	mr r3, r31
/* 80363788 003606C8  48 00 12 11 */	bl isAttackStart__Q34Game6Miulin3ObjFv
/* 8036378C 003606CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363790 003606D0  41 82 00 0C */	beq .L_8036379C
/* 80363794 003606D4  38 00 00 03 */	li r0, 3
/* 80363798 003606D8  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_8036379C:
/* 8036379C 003606DC  7F C3 F3 78 */	mr r3, r30
/* 803637A0 003606E0  7F E4 FB 78 */	mr r4, r31
/* 803637A4 003606E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803637A8 003606E8  38 C0 00 00 */	li r6, 0
/* 803637AC 003606EC  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 803637B0 003606F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803637B4 003606F4  7D 89 03 A6 */	mtctr r12
/* 803637B8 003606F8  4E 80 04 21 */	bctrl 
.L_803637BC:
/* 803637BC 003606FC  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 803637C0 00360700  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 803637C4 00360704  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 803637C8 00360708  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 803637CC 0036070C  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 803637D0 00360710  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 803637D4 00360714  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 803637D8 00360718  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 803637DC 0036071C  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 803637E0 00360720  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 803637E4 00360724  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 803637E8 00360728  7C 08 03 A6 */	mtlr r0
/* 803637EC 0036072C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 803637F0 00360730  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin14StateAttackEndFi
__ct__Q34Game6Miulin14StateAttackEndFi:
/* 803637F4 00360734  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803637F8 00360738  3C E0 80 4E */	lis r7, __vt__Q34Game6Miulin5State@ha
/* 803637FC 0036073C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80363800 00360740  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin14StateAttackEnd@ha
/* 80363804 00360744  90 03 00 00 */	stw r0, 0(r3)
/* 80363808 00360748  3C A0 80 49 */	lis r5, lbl_80491688@ha
/* 8036380C 0036074C  39 00 00 00 */	li r8, 0
/* 80363810 00360750  38 E7 24 68 */	addi r7, r7, __vt__Q34Game6Miulin5State@l
/* 80363814 00360754  90 83 00 04 */	stw r4, 4(r3)
/* 80363818 00360758  38 86 23 B4 */	addi r4, r6, __vt__Q34Game6Miulin14StateAttackEnd@l
/* 8036381C 0036075C  38 05 16 88 */	addi r0, r5, lbl_80491688@l
/* 80363820 00360760  91 03 00 08 */	stw r8, 8(r3)
/* 80363824 00360764  90 E3 00 00 */	stw r7, 0(r3)
/* 80363828 00360768  90 83 00 00 */	stw r4, 0(r3)
/* 8036382C 0036076C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80363830 00360770  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin14StateAttackEndFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin14StateAttackEndFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80363834 00360774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363838 00360778  7C 08 02 A6 */	mflr r0
/* 8036383C 0036077C  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80363840 00360780  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363844 00360784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363848 00360788  7C 9F 23 78 */	mr r31, r4
/* 8036384C 0036078C  7F E3 FB 78 */	mr r3, r31
/* 80363850 00360790  4B DA 3B 41 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80363854 00360794  7F E3 FB 78 */	mr r3, r31
/* 80363858 00360798  38 80 00 02 */	li r4, 2
/* 8036385C 0036079C  38 A0 00 00 */	li r5, 0
/* 80363860 003607A0  4B DA 17 A5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80363864 003607A4  38 00 00 05 */	li r0, 5
/* 80363868 003607A8  7F E3 FB 78 */	mr r3, r31
/* 8036386C 003607AC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80363870 003607B0  4B D9 E1 0D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80363874 003607B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363878 003607B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036387C 003607BC  7C 08 03 A6 */	mtlr r0
/* 80363880 003607C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80363884 003607C4  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin14StateAttackEndFPQ24Game9EnemyBase
exec__Q34Game6Miulin14StateAttackEndFPQ24Game9EnemyBase:
/* 80363888 003607C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036388C 003607CC  7C 08 02 A6 */	mflr r0
/* 80363890 003607D0  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80363894 003607D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363898 003607D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036389C 003607DC  7C 9F 23 78 */	mr r31, r4
/* 803638A0 003607E0  93 C1 00 08 */	stw r30, 8(r1)
/* 803638A4 003607E4  7C 7E 1B 78 */	mr r30, r3
/* 803638A8 003607E8  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 803638AC 003607EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803638B0 003607F0  4C 40 13 82 */	cror 2, 0, 2
/* 803638B4 003607F4  40 82 00 10 */	bne .L_803638C4
/* 803638B8 003607F8  38 00 00 07 */	li r0, 7
/* 803638BC 003607FC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803638C0 00360800  48 00 00 20 */	b .L_803638E0
.L_803638C4:
/* 803638C4 00360804  7F E3 FB 78 */	mr r3, r31
/* 803638C8 00360808  38 80 00 00 */	li r4, 0
/* 803638CC 0036080C  4B DB 0D 8D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803638D0 00360810  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803638D4 00360814  41 82 00 0C */	beq .L_803638E0
/* 803638D8 00360818  38 00 00 06 */	li r0, 6
/* 803638DC 0036081C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_803638E0:
/* 803638E0 00360820  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803638E4 00360824  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803638E8 00360828  28 00 00 00 */	cmplwi r0, 0
/* 803638EC 0036082C  41 82 00 30 */	beq .L_8036391C
/* 803638F0 00360830  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803638F4 00360834  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803638F8 00360838  40 82 00 24 */	bne .L_8036391C
/* 803638FC 0036083C  7F C3 F3 78 */	mr r3, r30
/* 80363900 00360840  7F E4 FB 78 */	mr r4, r31
/* 80363904 00360844  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363908 00360848  38 C0 00 00 */	li r6, 0
/* 8036390C 0036084C  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 80363910 00360850  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363914 00360854  7D 89 03 A6 */	mtctr r12
/* 80363918 00360858  4E 80 04 21 */	bctrl 
.L_8036391C:
/* 8036391C 0036085C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363920 00360860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363924 00360864  83 C1 00 08 */	lwz r30, 8(r1)
/* 80363928 00360868  7C 08 03 A6 */	mtlr r0
/* 8036392C 0036086C  38 21 00 10 */	addi r1, r1, 0x10
/* 80363930 00360870  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin9StateTurnFi
__ct__Q34Game6Miulin9StateTurnFi:
/* 80363934 00360874  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80363938 00360878  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin5State@ha
/* 8036393C 0036087C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80363940 00360880  3C A0 80 4E */	lis r5, __vt__Q34Game6Miulin9StateTurn@ha
/* 80363944 00360884  90 03 00 00 */	stw r0, 0(r3)
/* 80363948 00360888  38 E0 00 00 */	li r7, 0
/* 8036394C 0036088C  38 C6 24 68 */	addi r6, r6, __vt__Q34Game6Miulin5State@l
/* 80363950 00360890  38 A5 23 90 */	addi r5, r5, __vt__Q34Game6Miulin9StateTurn@l
/* 80363954 00360894  90 83 00 04 */	stw r4, 4(r3)
/* 80363958 00360898  38 02 04 74 */	addi r0, r2, lbl_8051E7D4@sda21
/* 8036395C 0036089C  90 E3 00 08 */	stw r7, 8(r3)
/* 80363960 003608A0  90 C3 00 00 */	stw r6, 0(r3)
/* 80363964 003608A4  90 A3 00 00 */	stw r5, 0(r3)
/* 80363968 003608A8  90 03 00 0C */	stw r0, 0xc(r3)
/* 8036396C 003608AC  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80363970 003608B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80363974 003608B4  7C 08 02 A6 */	mflr r0
/* 80363978 003608B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036397C 003608BC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80363980 003608C0  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80363984 003608C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363988 003608C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8036398C 003608CC  7C 9F 23 78 */	mr r31, r4
/* 80363990 003608D0  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80363994 003608D4  7C 7E 1B 78 */	mr r30, r3
/* 80363998 003608D8  7F E3 FB 78 */	mr r3, r31
/* 8036399C 003608DC  4B DA 39 F5 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 803639A0 003608E0  7F E3 FB 78 */	mr r3, r31
/* 803639A4 003608E4  48 00 15 29 */	bl isFindTarget__Q34Game6Miulin3ObjFv
/* 803639A8 003608E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803639AC 003608EC  40 82 00 0C */	bne .L_803639B8
/* 803639B0 003608F0  7F E3 FB 78 */	mr r3, r31
/* 803639B4 003608F4  48 00 1F 95 */	bl setNextGoal__Q34Game6Miulin3ObjFv
.L_803639B8:
/* 803639B8 003608F8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803639BC 003608FC  88 1F 02 E4 */	lbz r0, 0x2e4(r31)
/* 803639C0 00360900  C0 22 04 3C */	lfs f1, lbl_8051E79C@sda21(r2)
/* 803639C4 00360904  C0 03 08 BC */	lfs f0, 0x8bc(r3)
/* 803639C8 00360908  28 00 00 00 */	cmplwi r0, 0
/* 803639CC 0036090C  C0 42 04 38 */	lfs f2, lbl_8051E798@sda21(r2)
/* 803639D0 00360910  EC 01 00 32 */	fmuls f0, f1, f0
/* 803639D4 00360914  EF E2 00 32 */	fmuls f31, f2, f0
/* 803639D8 00360918  41 82 00 08 */	beq .L_803639E0
/* 803639DC 0036091C  C3 E2 04 7C */	lfs f31, lbl_8051E7DC@sda21(r2)
.L_803639E0:
/* 803639E0 00360920  C0 22 04 40 */	lfs f1, lbl_8051E7A0@sda21(r2)
/* 803639E4 00360924  7F E3 FB 78 */	mr r3, r31
/* 803639E8 00360928  48 00 1D 95 */	bl turnFunc__Q34Game6Miulin3ObjFf
/* 803639EC 0036092C  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 803639F0 00360930  40 80 00 28 */	bge .L_80363A18
/* 803639F4 00360934  7F C3 F3 78 */	mr r3, r30
/* 803639F8 00360938  7F E4 FB 78 */	mr r4, r31
/* 803639FC 0036093C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363A00 00360940  38 A0 00 01 */	li r5, 1
/* 80363A04 00360944  38 C0 00 00 */	li r6, 0
/* 80363A08 00360948  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363A0C 0036094C  7D 89 03 A6 */	mtctr r12
/* 80363A10 00360950  4E 80 04 21 */	bctrl 
/* 80363A14 00360954  48 00 00 30 */	b .L_80363A44
.L_80363A18:
/* 80363A18 00360958  7F E3 FB 78 */	mr r3, r31
/* 80363A1C 0036095C  38 80 00 08 */	li r4, 8
/* 80363A20 00360960  38 A0 00 00 */	li r5, 0
/* 80363A24 00360964  4B DA 15 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80363A28 00360968  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80363A2C 0036096C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80363A30 00360970  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80363A34 00360974  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80363A38 00360978  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80363A3C 0036097C  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80363A40 00360980  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
.L_80363A44:
/* 80363A44 00360984  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80363A48 00360988  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80363A4C 0036098C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80363A50 00360990  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363A54 00360994  83 C1 00 08 */	lwz r30, 8(r1)
/* 80363A58 00360998  7C 08 03 A6 */	mtlr r0
/* 80363A5C 0036099C  38 21 00 20 */	addi r1, r1, 0x20
/* 80363A60 003609A0  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin9StateTurnFPQ24Game9EnemyBase
exec__Q34Game6Miulin9StateTurnFPQ24Game9EnemyBase:
/* 80363A64 003609A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363A68 003609A8  7C 08 02 A6 */	mflr r0
/* 80363A6C 003609AC  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80363A70 003609B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363A74 003609B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363A78 003609B8  7C 9F 23 78 */	mr r31, r4
/* 80363A7C 003609BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80363A80 003609C0  7C 7E 1B 78 */	mr r30, r3
/* 80363A84 003609C4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80363A88 003609C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80363A8C 003609CC  4C 40 13 82 */	cror 2, 0, 2
/* 80363A90 003609D0  40 82 00 18 */	bne .L_80363AA8
/* 80363A94 003609D4  38 00 00 07 */	li r0, 7
/* 80363A98 003609D8  7F E3 FB 78 */	mr r3, r31
/* 80363A9C 003609DC  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80363AA0 003609E0  4B DA 18 01 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80363AA4 003609E4  48 00 00 BC */	b .L_80363B60
.L_80363AA8:
/* 80363AA8 003609E8  7F E3 FB 78 */	mr r3, r31
/* 80363AAC 003609EC  38 80 00 00 */	li r4, 0
/* 80363AB0 003609F0  4B DB 0B A9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80363AB4 003609F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363AB8 003609F8  41 82 00 18 */	beq .L_80363AD0
/* 80363ABC 003609FC  38 00 00 06 */	li r0, 6
/* 80363AC0 00360A00  7F E3 FB 78 */	mr r3, r31
/* 80363AC4 00360A04  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80363AC8 00360A08  4B DA 17 D9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80363ACC 00360A0C  48 00 00 94 */	b .L_80363B60
.L_80363AD0:
/* 80363AD0 00360A10  7F E3 FB 78 */	mr r3, r31
/* 80363AD4 00360A14  48 00 0E C5 */	bl isAttackStart__Q34Game6Miulin3ObjFv
/* 80363AD8 00360A18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363ADC 00360A1C  41 82 00 18 */	beq .L_80363AF4
/* 80363AE0 00360A20  38 00 00 02 */	li r0, 2
/* 80363AE4 00360A24  7F E3 FB 78 */	mr r3, r31
/* 80363AE8 00360A28  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 80363AEC 00360A2C  4B DA 17 B5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80363AF0 00360A30  48 00 00 70 */	b .L_80363B60
.L_80363AF4:
/* 80363AF4 00360A34  7F E3 FB 78 */	mr r3, r31
/* 80363AF8 00360A38  4B DA 38 09 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80363AFC 00360A3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363B00 00360A40  41 82 00 1C */	beq .L_80363B1C
/* 80363B04 00360A44  C0 22 04 48 */	lfs f1, lbl_8051E7A8@sda21(r2)
/* 80363B08 00360A48  7F E3 FB 78 */	mr r3, r31
/* 80363B0C 00360A4C  C0 02 9C 38 */	lfs f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80363B10 00360A50  EC 21 00 32 */	fmuls f1, f1, f0
/* 80363B14 00360A54  4B DA 38 7D */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80363B18 00360A58  48 00 00 0C */	b .L_80363B24
.L_80363B1C:
/* 80363B1C 00360A5C  7F E3 FB 78 */	mr r3, r31
/* 80363B20 00360A60  48 00 13 AD */	bl isFindTarget__Q34Game6Miulin3ObjFv
.L_80363B24:
/* 80363B24 00360A64  C0 22 04 40 */	lfs f1, lbl_8051E7A0@sda21(r2)
/* 80363B28 00360A68  7F E3 FB 78 */	mr r3, r31
/* 80363B2C 00360A6C  48 00 1C 51 */	bl turnFunc__Q34Game6Miulin3ObjFf
/* 80363B30 00360A70  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80363B34 00360A74  C0 42 04 3C */	lfs f2, lbl_8051E79C@sda21(r2)
/* 80363B38 00360A78  C0 03 08 BC */	lfs f0, 0x8bc(r3)
/* 80363B3C 00360A7C  C0 62 04 38 */	lfs f3, lbl_8051E798@sda21(r2)
/* 80363B40 00360A80  EC 02 00 32 */	fmuls f0, f2, f0
/* 80363B44 00360A84  EC 03 00 32 */	fmuls f0, f3, f0
/* 80363B48 00360A88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80363B4C 00360A8C  40 80 00 14 */	bge .L_80363B60
/* 80363B50 00360A90  7F E3 FB 78 */	mr r3, r31
/* 80363B54 00360A94  4B DA 17 4D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80363B58 00360A98  38 00 00 01 */	li r0, 1
/* 80363B5C 00360A9C  90 1F 02 C8 */	stw r0, 0x2c8(r31)
.L_80363B60:
/* 80363B60 00360AA0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80363B64 00360AA4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80363B68 00360AA8  28 00 00 00 */	cmplwi r0, 0
/* 80363B6C 00360AAC  41 82 00 58 */	beq .L_80363BC4
/* 80363B70 00360AB0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80363B74 00360AB4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80363B78 00360AB8  40 82 00 4C */	bne .L_80363BC4
/* 80363B7C 00360ABC  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 80363B80 00360AC0  2C 00 00 00 */	cmpwi r0, 0
/* 80363B84 00360AC4  40 80 00 20 */	bge .L_80363BA4
/* 80363B88 00360AC8  3C 60 80 49 */	lis r3, lbl_80491694@ha
/* 80363B8C 00360ACC  3C A0 80 49 */	lis r5, lbl_804916A4@ha
/* 80363B90 00360AD0  38 63 16 94 */	addi r3, r3, lbl_80491694@l
/* 80363B94 00360AD4  38 80 01 F1 */	li r4, 0x1f1
/* 80363B98 00360AD8  38 A5 16 A4 */	addi r5, r5, lbl_804916A4@l
/* 80363B9C 00360ADC  4C C6 31 82 */	crclr 6
/* 80363BA0 00360AE0  4B CC 6A A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80363BA4:
/* 80363BA4 00360AE4  7F C3 F3 78 */	mr r3, r30
/* 80363BA8 00360AE8  7F E4 FB 78 */	mr r4, r31
/* 80363BAC 00360AEC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363BB0 00360AF0  38 C0 00 00 */	li r6, 0
/* 80363BB4 00360AF4  80 BF 02 C8 */	lwz r5, 0x2c8(r31)
/* 80363BB8 00360AF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363BBC 00360AFC  7D 89 03 A6 */	mtctr r12
/* 80363BC0 00360B00  4E 80 04 21 */	bctrl 
.L_80363BC4:
/* 80363BC4 00360B04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363BC8 00360B08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363BCC 00360B0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80363BD0 00360B10  7C 08 03 A6 */	mtlr r0
/* 80363BD4 00360B14  38 21 00 10 */	addi r1, r1, 0x10
/* 80363BD8 00360B18  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin10StateFlickFi
__ct__Q34Game6Miulin10StateFlickFi:
/* 80363BDC 00360B1C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80363BE0 00360B20  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin5State@ha
/* 80363BE4 00360B24  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80363BE8 00360B28  3C A0 80 4E */	lis r5, __vt__Q34Game6Miulin10StateFlick@ha
/* 80363BEC 00360B2C  90 03 00 00 */	stw r0, 0(r3)
/* 80363BF0 00360B30  38 E0 00 00 */	li r7, 0
/* 80363BF4 00360B34  38 C6 24 68 */	addi r6, r6, __vt__Q34Game6Miulin5State@l
/* 80363BF8 00360B38  38 A5 23 6C */	addi r5, r5, __vt__Q34Game6Miulin10StateFlick@l
/* 80363BFC 00360B3C  90 83 00 04 */	stw r4, 4(r3)
/* 80363C00 00360B40  38 02 04 80 */	addi r0, r2, lbl_8051E7E0@sda21
/* 80363C04 00360B44  90 E3 00 08 */	stw r7, 8(r3)
/* 80363C08 00360B48  90 C3 00 00 */	stw r6, 0(r3)
/* 80363C0C 00360B4C  90 A3 00 00 */	stw r5, 0(r3)
/* 80363C10 00360B50  90 03 00 0C */	stw r0, 0xc(r3)
/* 80363C14 00360B54  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80363C18 00360B58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363C1C 00360B5C  7C 08 02 A6 */	mflr r0
/* 80363C20 00360B60  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80363C24 00360B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363C28 00360B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363C2C 00360B6C  7C 9F 23 78 */	mr r31, r4
/* 80363C30 00360B70  7F E3 FB 78 */	mr r3, r31
/* 80363C34 00360B74  4B DA 37 5D */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80363C38 00360B78  7F E3 FB 78 */	mr r3, r31
/* 80363C3C 00360B7C  38 80 00 04 */	li r4, 4
/* 80363C40 00360B80  38 A0 00 00 */	li r5, 0
/* 80363C44 00360B84  4B DA 13 C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80363C48 00360B88  7F E3 FB 78 */	mr r3, r31
/* 80363C4C 00360B8C  4B D9 DD 31 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80363C50 00360B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363C54 00360B94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363C58 00360B98  7C 08 03 A6 */	mtlr r0
/* 80363C5C 00360B9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80363C60 00360BA0  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin10StateFlickFPQ24Game9EnemyBase
exec__Q34Game6Miulin10StateFlickFPQ24Game9EnemyBase:
/* 80363C64 00360BA4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80363C68 00360BA8  7C 08 02 A6 */	mflr r0
/* 80363C6C 00360BAC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80363C70 00360BB0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80363C74 00360BB4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80363C78 00360BB8  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80363C7C 00360BBC  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80363C80 00360BC0  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80363C84 00360BC4  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 80363C88 00360BC8  DB 81 00 10 */	stfd f28, 0x10(r1)
/* 80363C8C 00360BCC  F3 81 00 18 */	psq_st f28, 24(r1), 0, qr0
/* 80363C90 00360BD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363C94 00360BD4  93 C1 00 08 */	stw r30, 8(r1)
/* 80363C98 00360BD8  7C 9F 23 78 */	mr r31, r4
/* 80363C9C 00360BDC  7C 7E 1B 78 */	mr r30, r3
/* 80363CA0 00360BE0  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80363CA4 00360BE4  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80363CA8 00360BE8  28 00 00 00 */	cmplwi r0, 0
/* 80363CAC 00360BEC  41 82 01 10 */	beq .L_80363DBC
/* 80363CB0 00360BF0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80363CB4 00360BF4  28 00 00 03 */	cmplwi r0, 3
/* 80363CB8 00360BF8  40 82 00 78 */	bne .L_80363D30
/* 80363CBC 00360BFC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80363CC0 00360C00  7F E3 FB 78 */	mr r3, r31
/* 80363CC4 00360C04  C0 82 04 60 */	lfs f4, lbl_8051E7C0@sda21(r2)
/* 80363CC8 00360C08  38 80 00 00 */	li r4, 0
/* 80363CCC 00360C0C  C3 C5 04 C4 */	lfs f30, 0x4c4(r5)
/* 80363CD0 00360C10  C3 A5 04 EC */	lfs f29, 0x4ec(r5)
/* 80363CD4 00360C14  C3 85 05 14 */	lfs f28, 0x514(r5)
/* 80363CD8 00360C18  FC 40 F0 90 */	fmr f2, f30
/* 80363CDC 00360C1C  FC 60 E8 90 */	fmr f3, f29
/* 80363CE0 00360C20  C3 E5 05 3C */	lfs f31, 0x53c(r5)
/* 80363CE4 00360C24  FC 20 E0 90 */	fmr f1, f28
/* 80363CE8 00360C28  4B DA F7 ED */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80363CEC 00360C2C  FC 20 F8 90 */	fmr f1, f31
/* 80363CF0 00360C30  C0 82 04 60 */	lfs f4, lbl_8051E7C0@sda21(r2)
/* 80363CF4 00360C34  FC 40 F0 90 */	fmr f2, f30
/* 80363CF8 00360C38  7F E3 FB 78 */	mr r3, r31
/* 80363CFC 00360C3C  FC 60 E8 90 */	fmr f3, f29
/* 80363D00 00360C40  38 80 00 00 */	li r4, 0
/* 80363D04 00360C44  4B DA F4 19 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80363D08 00360C48  FC 20 E0 90 */	fmr f1, f28
/* 80363D0C 00360C4C  C0 82 04 60 */	lfs f4, lbl_8051E7C0@sda21(r2)
/* 80363D10 00360C50  FC 40 F0 90 */	fmr f2, f30
/* 80363D14 00360C54  7F E3 FB 78 */	mr r3, r31
/* 80363D18 00360C58  FC 60 E8 90 */	fmr f3, f29
/* 80363D1C 00360C5C  38 80 00 00 */	li r4, 0
/* 80363D20 00360C60  4B DA FA 71 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 80363D24 00360C64  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80363D28 00360C68  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80363D2C 00360C6C  48 00 00 90 */	b .L_80363DBC
.L_80363D30:
/* 80363D30 00360C70  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80363D34 00360C74  40 82 00 88 */	bne .L_80363DBC
/* 80363D38 00360C78  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80363D3C 00360C7C  C0 02 04 28 */	lfs f0, lbl_8051E788@sda21(r2)
/* 80363D40 00360C80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80363D44 00360C84  4C 40 13 82 */	cror 2, 0, 2
/* 80363D48 00360C88  40 82 00 20 */	bne .L_80363D68
/* 80363D4C 00360C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80363D50 00360C90  38 A0 00 07 */	li r5, 7
/* 80363D54 00360C94  38 C0 00 00 */	li r6, 0
/* 80363D58 00360C98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363D5C 00360C9C  7D 89 03 A6 */	mtctr r12
/* 80363D60 00360CA0  4E 80 04 21 */	bctrl 
/* 80363D64 00360CA4  48 00 00 58 */	b .L_80363DBC
.L_80363D68:
/* 80363D68 00360CA8  7F E3 FB 78 */	mr r3, r31
/* 80363D6C 00360CAC  48 00 0C 2D */	bl isAttackStart__Q34Game6Miulin3ObjFv
/* 80363D70 00360CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80363D74 00360CB4  41 82 00 28 */	beq .L_80363D9C
/* 80363D78 00360CB8  7F C3 F3 78 */	mr r3, r30
/* 80363D7C 00360CBC  7F E4 FB 78 */	mr r4, r31
/* 80363D80 00360CC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363D84 00360CC4  38 A0 00 02 */	li r5, 2
/* 80363D88 00360CC8  38 C0 00 00 */	li r6, 0
/* 80363D8C 00360CCC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363D90 00360CD0  7D 89 03 A6 */	mtctr r12
/* 80363D94 00360CD4  4E 80 04 21 */	bctrl 
/* 80363D98 00360CD8  48 00 00 24 */	b .L_80363DBC
.L_80363D9C:
/* 80363D9C 00360CDC  7F C3 F3 78 */	mr r3, r30
/* 80363DA0 00360CE0  7F E4 FB 78 */	mr r4, r31
/* 80363DA4 00360CE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80363DA8 00360CE8  38 A0 00 05 */	li r5, 5
/* 80363DAC 00360CEC  38 C0 00 00 */	li r6, 0
/* 80363DB0 00360CF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80363DB4 00360CF4  7D 89 03 A6 */	mtctr r12
/* 80363DB8 00360CF8  4E 80 04 21 */	bctrl 
.L_80363DBC:
/* 80363DBC 00360CFC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80363DC0 00360D00  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80363DC4 00360D04  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80363DC8 00360D08  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80363DCC 00360D0C  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80363DD0 00360D10  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80363DD4 00360D14  E3 81 00 18 */	psq_l f28, 24(r1), 0, qr0
/* 80363DD8 00360D18  CB 81 00 10 */	lfd f28, 0x10(r1)
/* 80363DDC 00360D1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363DE0 00360D20  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80363DE4 00360D24  83 C1 00 08 */	lwz r30, 8(r1)
/* 80363DE8 00360D28  7C 08 03 A6 */	mtlr r0
/* 80363DEC 00360D2C  38 21 00 50 */	addi r1, r1, 0x50
/* 80363DF0 00360D30  4E 80 00 20 */	blr 

.global __ct__Q34Game6Miulin9StateDeadFi
__ct__Q34Game6Miulin9StateDeadFi:
/* 80363DF4 00360D34  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80363DF8 00360D38  3C C0 80 4E */	lis r6, __vt__Q34Game6Miulin5State@ha
/* 80363DFC 00360D3C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80363E00 00360D40  3C A0 80 4E */	lis r5, __vt__Q34Game6Miulin9StateDead@ha
/* 80363E04 00360D44  90 03 00 00 */	stw r0, 0(r3)
/* 80363E08 00360D48  38 E0 00 00 */	li r7, 0
/* 80363E0C 00360D4C  38 C6 24 68 */	addi r6, r6, __vt__Q34Game6Miulin5State@l
/* 80363E10 00360D50  38 A5 23 48 */	addi r5, r5, __vt__Q34Game6Miulin9StateDead@l
/* 80363E14 00360D54  90 83 00 04 */	stw r4, 4(r3)
/* 80363E18 00360D58  38 02 04 88 */	addi r0, r2, lbl_8051E7E8@sda21
/* 80363E1C 00360D5C  90 E3 00 08 */	stw r7, 8(r3)
/* 80363E20 00360D60  90 C3 00 00 */	stw r6, 0(r3)
/* 80363E24 00360D64  90 A3 00 00 */	stw r5, 0(r3)
/* 80363E28 00360D68  90 03 00 0C */	stw r0, 0xc(r3)
/* 80363E2C 00360D6C  4E 80 00 20 */	blr 

.global init__Q34Game6Miulin9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Miulin9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80363E30 00360D70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363E34 00360D74  7C 08 02 A6 */	mflr r0
/* 80363E38 00360D78  C0 22 9C 38 */	lfs f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
/* 80363E3C 00360D7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363E40 00360D80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363E44 00360D84  7C 9F 23 78 */	mr r31, r4
/* 80363E48 00360D88  7F E3 FB 78 */	mr r3, r31
/* 80363E4C 00360D8C  4B DA 35 45 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80363E50 00360D90  7F E3 FB 78 */	mr r3, r31
/* 80363E54 00360D94  38 80 00 03 */	li r4, 3
/* 80363E58 00360D98  38 A0 00 00 */	li r5, 0
/* 80363E5C 00360D9C  4B DA 11 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80363E60 00360DA0  7F E3 FB 78 */	mr r3, r31
/* 80363E64 00360DA4  4B D9 DB 19 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80363E68 00360DA8  7F E3 FB 78 */	mr r3, r31
/* 80363E6C 00360DAC  4B DA 18 B5 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80363E70 00360DB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363E74 00360DB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363E78 00360DB8  7C 08 03 A6 */	mtlr r0
/* 80363E7C 00360DBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80363E80 00360DC0  4E 80 00 20 */	blr 

.global exec__Q34Game6Miulin9StateDeadFPQ24Game9EnemyBase
exec__Q34Game6Miulin9StateDeadFPQ24Game9EnemyBase:
/* 80363E84 00360DC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363E88 00360DC8  7C 08 02 A6 */	mflr r0
/* 80363E8C 00360DCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363E90 00360DD0  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80363E94 00360DD4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80363E98 00360DD8  28 00 00 00 */	cmplwi r0, 0
/* 80363E9C 00360DDC  41 82 00 38 */	beq .L_80363ED4
/* 80363EA0 00360DE0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80363EA4 00360DE4  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80363EA8 00360DE8  41 82 00 20 */	beq .L_80363EC8
/* 80363EAC 00360DEC  40 80 00 28 */	bge .L_80363ED4
/* 80363EB0 00360DF0  2C 00 00 02 */	cmpwi r0, 2
/* 80363EB4 00360DF4  41 82 00 08 */	beq .L_80363EBC
/* 80363EB8 00360DF8  48 00 00 1C */	b .L_80363ED4
.L_80363EBC:
/* 80363EBC 00360DFC  7C 83 23 78 */	mr r3, r4
/* 80363EC0 00360E00  48 00 1F 95 */	bl landEffect__Q34Game6Miulin3ObjFv
/* 80363EC4 00360E04  48 00 00 10 */	b .L_80363ED4
.L_80363EC8:
/* 80363EC8 00360E08  7C 83 23 78 */	mr r3, r4
/* 80363ECC 00360E0C  38 80 00 00 */	li r4, 0
/* 80363ED0 00360E10  4B DD 72 21 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80363ED4:
/* 80363ED4 00360E14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363ED8 00360E18  7C 08 03 A6 */	mtlr r0
/* 80363EDC 00360E1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80363EE0 00360E20  4E 80 00 20 */	blr 
