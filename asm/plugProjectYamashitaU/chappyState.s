.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047AEA8, local
	.asciz "StateCautionBase"
.endobj lbl_8047AEA8
.balign 4
.obj lbl_8047AEBC, local
	.asciz "TurnToHome"
.endobj lbl_8047AEBC

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game10ChappyBase11StateGoHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase11StateGoHome
.obj __vt__Q34Game10ChappyBase15StateTurnToHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase15StateTurnToHome
.obj __vt__Q34Game10ChappyBase10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase10StateFlick
.obj __vt__Q34Game10ChappyBase11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase11StateAttack
.obj __vt__Q34Game10ChappyBase9StateWalk, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase9StateWalk
.obj __vt__Q34Game10ChappyBase9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase9StateTurn
.obj __vt__Q34Game10ChappyBase13StateTurnBase, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase13StateTurnBase
.obj __vt__Q34Game10ChappyBase9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase9StateDead
.obj __vt__Q34Game10ChappyBase10StateSleep, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase10StateSleep
.obj __vt__Q34Game10ChappyBase16StateCautionBase, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase16StateCautionBase
.obj __vt__Q34Game10ChappyBase5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10ChappyBase5State
.obj __vt__Q34Game10ChappyBase3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ChappyBase3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game10ChappyBase3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80517AA0, local
	.float 0.0
.endobj lbl_80517AA0
.obj lbl_80517AA4, local
	.float 180.0
.endobj lbl_80517AA4
.balign 4
.obj lbl_80517AA8, local
	.asciz "sleep"
.endobj lbl_80517AA8
.balign 4
.obj lbl_80517AB0, local
	.float 70.0
.endobj lbl_80517AB0
.obj lbl_80517AB4, local
	.float 30.0
.endobj lbl_80517AB4
.obj lbl_80517AB8, local
	.float 60.0
.endobj lbl_80517AB8
.balign 4
.obj lbl_80517ABC, local
	.asciz "dead"
.endobj lbl_80517ABC
.balign 4
.obj lbl_80517AC4, local
	.float 1.0
.endobj lbl_80517AC4
.obj lbl_80517AC8, local
	.float 0.9
.endobj lbl_80517AC8
.obj lbl_80517ACC, local
	.float 10.0
.endobj lbl_80517ACC
.obj lbl_80517AD0, local # pi
	.float 3.1415927
.endobj lbl_80517AD0
.obj lbl_80517AD4, local
	.float 0.0055555557
.endobj lbl_80517AD4
.balign 8
.obj lbl_80517AD8, local
	.8byte 0x4330000080000000
.endobj lbl_80517AD8
.balign 4
.obj lbl_80517AE0, local
	.asciz "turn"
.endobj lbl_80517AE0
.balign 4
.obj lbl_80517AE8, local
	.float 40.0
.endobj lbl_80517AE8
.balign 4
.obj lbl_80517AEC, local
	.asciz "Walk"
.endobj lbl_80517AEC
.balign 4
.obj lbl_80517AF4, local
	.asciz "Attack"
.endobj lbl_80517AF4
.balign 4
.obj lbl_80517AFC, local
	.asciz "Flick"
.endobj lbl_80517AFC
.balign 4
.obj lbl_80517B04, local
	.asciz "GoHome"
.endobj lbl_80517B04

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game10ChappyBase3FSMFPQ24Game9EnemyBase, global
/* 80116648 00113588  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011664C 0011358C  7C 08 02 A6 */	mflr r0
/* 80116650 00113590  38 80 00 08 */	li r4, 8
/* 80116654 00113594  90 01 00 14 */	stw r0, 0x14(r1)
/* 80116658 00113598  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011665C 0011359C  7C 7F 1B 78 */	mr r31, r3
/* 80116660 001135A0  48 01 A2 05 */	bl create__Q24Game17EnemyStateMachineFi
/* 80116664 001135A4  38 60 00 10 */	li r3, 0x10
/* 80116668 001135A8  4B F0 D8 3D */	bl __nw__FUl
/* 8011666C 001135AC  7C 64 1B 79 */	or. r4, r3, r3
/* 80116670 001135B0  41 82 00 10 */	beq .L_80116680
/* 80116674 001135B4  38 80 00 01 */	li r4, 1
/* 80116678 001135B8  48 00 04 C5 */	bl __ct__Q34Game10ChappyBase9StateDeadFi
/* 8011667C 001135BC  7C 64 1B 78 */	mr r4, r3
.L_80116680:
/* 80116680 001135C0  7F E3 FB 78 */	mr r3, r31
/* 80116684 001135C4  48 01 A2 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80116688 001135C8  38 60 00 14 */	li r3, 0x14
/* 8011668C 001135CC  4B F0 D8 19 */	bl __nw__FUl
/* 80116690 001135D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80116694 001135D4  41 82 00 10 */	beq .L_801166A4
/* 80116698 001135D8  38 80 00 00 */	li r4, 0
/* 8011669C 001135DC  48 00 05 9D */	bl __ct__Q34Game10ChappyBase9StateTurnFi
/* 801166A0 001135E0  7C 64 1B 78 */	mr r4, r3
.L_801166A4:
/* 801166A4 001135E4  7F E3 FB 78 */	mr r3, r31
/* 801166A8 001135E8  48 01 A2 61 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 801166AC 001135EC  38 60 00 14 */	li r3, 0x14
/* 801166B0 001135F0  4B F0 D7 F5 */	bl __nw__FUl
/* 801166B4 001135F4  7C 64 1B 79 */	or. r4, r3, r3
/* 801166B8 001135F8  41 82 00 10 */	beq .L_801166C8
/* 801166BC 001135FC  38 80 00 03 */	li r4, 3
/* 801166C0 00113600  48 00 0E 59 */	bl __ct__Q34Game10ChappyBase9StateWalkFi
/* 801166C4 00113604  7C 64 1B 78 */	mr r4, r3
.L_801166C8:
/* 801166C8 00113608  7F E3 FB 78 */	mr r3, r31
/* 801166CC 0011360C  48 01 A2 3D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 801166D0 00113610  38 60 00 10 */	li r3, 0x10
/* 801166D4 00113614  4B F0 D7 D1 */	bl __nw__FUl
/* 801166D8 00113618  7C 64 1B 79 */	or. r4, r3, r3
/* 801166DC 0011361C  41 82 00 10 */	beq .L_801166EC
/* 801166E0 00113620  38 80 00 04 */	li r4, 4
/* 801166E4 00113624  48 00 17 25 */	bl __ct__Q34Game10ChappyBase11StateAttackFi
/* 801166E8 00113628  7C 64 1B 78 */	mr r4, r3
.L_801166EC:
/* 801166EC 0011362C  7F E3 FB 78 */	mr r3, r31
/* 801166F0 00113630  48 01 A2 19 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 801166F4 00113634  38 60 00 10 */	li r3, 0x10
/* 801166F8 00113638  4B F0 D7 AD */	bl __nw__FUl
/* 801166FC 0011363C  7C 64 1B 79 */	or. r4, r3, r3
/* 80116700 00113640  41 82 00 10 */	beq .L_80116710
/* 80116704 00113644  38 80 00 02 */	li r4, 2
/* 80116708 00113648  48 00 1D F1 */	bl __ct__Q34Game10ChappyBase10StateFlickFi
/* 8011670C 0011364C  7C 64 1B 78 */	mr r4, r3
.L_80116710:
/* 80116710 00113650  7F E3 FB 78 */	mr r3, r31
/* 80116714 00113654  48 01 A1 F5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80116718 00113658  38 60 00 14 */	li r3, 0x14
/* 8011671C 0011365C  4B F0 D7 89 */	bl __nw__FUl
/* 80116720 00113660  7C 64 1B 79 */	or. r4, r3, r3
/* 80116724 00113664  41 82 00 10 */	beq .L_80116734
/* 80116728 00113668  38 80 00 05 */	li r4, 5
/* 8011672C 0011366C  48 00 21 29 */	bl __ct__Q34Game10ChappyBase15StateTurnToHomeFi
/* 80116730 00113670  7C 64 1B 78 */	mr r4, r3
.L_80116734:
/* 80116734 00113674  7F E3 FB 78 */	mr r3, r31
/* 80116738 00113678  48 01 A1 D1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8011673C 0011367C  38 60 00 14 */	li r3, 0x14
/* 80116740 00113680  4B F0 D7 65 */	bl __nw__FUl
/* 80116744 00113684  7C 64 1B 79 */	or. r4, r3, r3
/* 80116748 00113688  41 82 00 10 */	beq .L_80116758
/* 8011674C 0011368C  38 80 00 06 */	li r4, 6
/* 80116750 00113690  48 00 29 69 */	bl __ct__Q34Game10ChappyBase11StateGoHomeFi
/* 80116754 00113694  7C 64 1B 78 */	mr r4, r3
.L_80116758:
/* 80116758 00113698  7F E3 FB 78 */	mr r3, r31
/* 8011675C 0011369C  48 01 A1 AD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80116760 001136A0  38 60 00 14 */	li r3, 0x14
/* 80116764 001136A4  4B F0 D7 41 */	bl __nw__FUl
/* 80116768 001136A8  7C 64 1B 79 */	or. r4, r3, r3
/* 8011676C 001136AC  41 82 00 10 */	beq .L_8011677C
/* 80116770 001136B0  38 80 00 07 */	li r4, 7
/* 80116774 001136B4  48 00 00 25 */	bl __ct__Q34Game10ChappyBase10StateSleepFi
/* 80116778 001136B8  7C 64 1B 78 */	mr r4, r3
.L_8011677C:
/* 8011677C 001136BC  7F E3 FB 78 */	mr r3, r31
/* 80116780 001136C0  48 01 A1 89 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80116784 001136C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116788 001136C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011678C 001136CC  7C 08 03 A6 */	mtlr r0
/* 80116790 001136D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80116794 001136D4  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase3FSMFPQ24Game9EnemyBase

.fn __ct__Q34Game10ChappyBase10StateSleepFi, global
/* 80116798 001136D8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8011679C 001136DC  3C C0 80 4B */	lis r6, __vt__Q34Game10ChappyBase5State@ha
/* 801167A0 001136E0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 801167A4 001136E4  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase10StateSleep@ha
/* 801167A8 001136E8  90 03 00 00 */	stw r0, 0(r3)
/* 801167AC 001136EC  38 E0 00 00 */	li r7, 0
/* 801167B0 001136F0  38 C6 C1 A0 */	addi r6, r6, __vt__Q34Game10ChappyBase5State@l
/* 801167B4 001136F4  38 A5 C1 58 */	addi r5, r5, __vt__Q34Game10ChappyBase10StateSleep@l
/* 801167B8 001136F8  90 83 00 04 */	stw r4, 4(r3)
/* 801167BC 001136FC  38 02 97 48 */	addi r0, r2, lbl_80517AA8@sda21
/* 801167C0 00113700  90 E3 00 08 */	stw r7, 8(r3)
/* 801167C4 00113704  90 C3 00 00 */	stw r6, 0(r3)
/* 801167C8 00113708  90 A3 00 00 */	stw r5, 0(r3)
/* 801167CC 0011370C  90 03 00 0C */	stw r0, 0xc(r3)
/* 801167D0 00113710  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase10StateSleepFi

.fn init__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 801167D4 00113714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801167D8 00113718  7C 08 02 A6 */	mflr r0
/* 801167DC 0011371C  28 05 00 00 */	cmplwi r5, 0
/* 801167E0 00113720  90 01 00 14 */	stw r0, 0x14(r1)
/* 801167E4 00113724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801167E8 00113728  7C 9F 23 78 */	mr r31, r4
/* 801167EC 0011372C  41 82 00 30 */	beq .L_8011681C
/* 801167F0 00113730  88 05 00 00 */	lbz r0, 0(r5)
/* 801167F4 00113734  28 00 00 00 */	cmplwi r0, 0
/* 801167F8 00113738  41 82 00 24 */	beq .L_8011681C
/* 801167FC 0011373C  7F E3 FB 78 */	mr r3, r31
/* 80116800 00113740  38 80 00 04 */	li r4, 4
/* 80116804 00113744  38 A0 00 00 */	li r5, 0
/* 80116808 00113748  4B FE E7 FD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8011680C 0011374C  C0 22 97 50 */	lfs f1, lbl_80517AB0@sda21(r2)
/* 80116810 00113750  7F E3 FB 78 */	mr r3, r31
/* 80116814 00113754  4B FE EA 15 */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 80116818 00113758  48 00 00 14 */	b .L_8011682C
.L_8011681C:
/* 8011681C 0011375C  7F E3 FB 78 */	mr r3, r31
/* 80116820 00113760  38 80 00 06 */	li r4, 6
/* 80116824 00113764  38 A0 00 00 */	li r5, 0
/* 80116828 00113768  4B FE E7 DD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_8011682C:
/* 8011682C 0011376C  38 00 00 00 */	li r0, 0
/* 80116830 00113770  7F E3 FB 78 */	mr r3, r31
/* 80116834 00113774  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80116838 00113778  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011683C 0011377C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80116840 00113780  7D 89 03 A6 */	mtctr r12
/* 80116844 00113784  4E 80 04 21 */	bctrl 
/* 80116848 00113788  2C 03 00 54 */	cmpwi r3, 0x54
/* 8011684C 0011378C  40 82 00 10 */	bne .L_8011685C
/* 80116850 00113790  7F E3 FB 78 */	mr r3, r31
/* 80116854 00113794  4B FF 0F 29 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80116858 00113798  48 00 00 10 */	b .L_80116868
.L_8011685C:
/* 8011685C 0011379C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80116860 001137A0  60 00 04 00 */	ori r0, r0, 0x400
/* 80116864 001137A4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80116868:
/* 80116868 001137A8  7F E3 FB 78 */	mr r3, r31
/* 8011686C 001137AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116870 001137B0  81 8C 03 18 */	lwz r12, 0x318(r12)
/* 80116874 001137B4  7D 89 03 A6 */	mtctr r12
/* 80116878 001137B8  4E 80 04 21 */	bctrl 
/* 8011687C 001137BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116880 001137C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116884 001137C4  7C 08 03 A6 */	mtlr r0
/* 80116888 001137C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011688C 001137CC  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBase, global
/* 80116890 001137D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116894 001137D4  7C 08 02 A6 */	mflr r0
/* 80116898 001137D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011689C 001137DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801168A0 001137E0  7C 9F 23 78 */	mr r31, r4
/* 801168A4 001137E4  93 C1 00 08 */	stw r30, 8(r1)
/* 801168A8 001137E8  7C 7E 1B 78 */	mr r30, r3
/* 801168AC 001137EC  7F E3 FB 78 */	mr r3, r31
/* 801168B0 001137F0  4B FF 0A 99 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 801168B4 001137F4  2C 03 00 06 */	cmpwi r3, 6
/* 801168B8 001137F8  40 82 00 64 */	bne .L_8011691C
/* 801168BC 001137FC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 801168C0 00113800  88 03 00 24 */	lbz r0, 0x24(r3)
/* 801168C4 00113804  28 00 00 00 */	cmplwi r0, 0
/* 801168C8 00113808  41 82 01 2C */	beq .L_801169F4
/* 801168CC 0011380C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801168D0 00113810  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801168D4 00113814  40 82 01 20 */	bne .L_801169F4
/* 801168D8 00113818  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801168DC 0011381C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801168E0 00113820  41 82 00 28 */	beq .L_80116908
/* 801168E4 00113824  7F C3 F3 78 */	mr r3, r30
/* 801168E8 00113828  7F E4 FB 78 */	mr r4, r31
/* 801168EC 0011382C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801168F0 00113830  38 A0 00 00 */	li r5, 0
/* 801168F4 00113834  38 C0 00 00 */	li r6, 0
/* 801168F8 00113838  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801168FC 0011383C  7D 89 03 A6 */	mtctr r12
/* 80116900 00113840  4E 80 04 21 */	bctrl 
/* 80116904 00113844  48 00 00 F0 */	b .L_801169F4
.L_80116908:
/* 80116908 00113848  7F E3 FB 78 */	mr r3, r31
/* 8011690C 0011384C  38 80 00 04 */	li r4, 4
/* 80116910 00113850  38 A0 00 00 */	li r5, 0
/* 80116914 00113854  4B FE E6 F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80116918 00113858  48 00 00 DC */	b .L_801169F4
.L_8011691C:
/* 8011691C 0011385C  7F E3 FB 78 */	mr r3, r31
/* 80116920 00113860  4B FF 09 E1 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80116924 00113864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116928 00113868  40 82 00 30 */	bne .L_80116958
/* 8011692C 0011386C  7F E3 FB 78 */	mr r3, r31
/* 80116930 00113870  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116934 00113874  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 80116938 00113878  7D 89 03 A6 */	mtctr r12
/* 8011693C 0011387C  4E 80 04 21 */	bctrl 
/* 80116940 00113880  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116944 00113884  41 82 00 14 */	beq .L_80116958
/* 80116948 00113888  7F C3 F3 78 */	mr r3, r30
/* 8011694C 0011388C  7F E4 FB 78 */	mr r4, r31
/* 80116950 00113890  38 A0 00 00 */	li r5, 0
/* 80116954 00113894  48 00 01 85 */	bl setNextState__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBasei
.L_80116958:
/* 80116958 00113898  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8011695C 0011389C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80116960 001138A0  28 00 00 00 */	cmplwi r0, 0
/* 80116964 001138A4  41 82 00 90 */	beq .L_801169F4
/* 80116968 001138A8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8011696C 001138AC  28 00 00 00 */	cmplwi r0, 0
/* 80116970 001138B0  40 82 00 1C */	bne .L_8011698C
/* 80116974 001138B4  7F E3 FB 78 */	mr r3, r31
/* 80116978 001138B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011697C 001138BC  81 8C 03 24 */	lwz r12, 0x324(r12)
/* 80116980 001138C0  7D 89 03 A6 */	mtctr r12
/* 80116984 001138C4  4E 80 04 21 */	bctrl 
/* 80116988 001138C8  48 00 00 6C */	b .L_801169F4
.L_8011698C:
/* 8011698C 001138CC  28 00 00 03 */	cmplwi r0, 3
/* 80116990 001138D0  40 82 00 1C */	bne .L_801169AC
/* 80116994 001138D4  7F E3 FB 78 */	mr r3, r31
/* 80116998 001138D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011699C 001138DC  81 8C 03 28 */	lwz r12, 0x328(r12)
/* 801169A0 001138E0  7D 89 03 A6 */	mtctr r12
/* 801169A4 001138E4  4E 80 04 21 */	bctrl 
/* 801169A8 001138E8  48 00 00 4C */	b .L_801169F4
.L_801169AC:
/* 801169AC 001138EC  28 00 00 04 */	cmplwi r0, 4
/* 801169B0 001138F0  40 82 00 1C */	bne .L_801169CC
/* 801169B4 001138F4  7F E3 FB 78 */	mr r3, r31
/* 801169B8 001138F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801169BC 001138FC  81 8C 03 30 */	lwz r12, 0x330(r12)
/* 801169C0 00113900  7D 89 03 A6 */	mtctr r12
/* 801169C4 00113904  4E 80 04 21 */	bctrl 
/* 801169C8 00113908  48 00 00 2C */	b .L_801169F4
.L_801169CC:
/* 801169CC 0011390C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801169D0 00113910  40 82 00 24 */	bne .L_801169F4
/* 801169D4 00113914  7F C3 F3 78 */	mr r3, r30
/* 801169D8 00113918  7F E4 FB 78 */	mr r4, r31
/* 801169DC 0011391C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801169E0 00113920  38 C0 00 00 */	li r6, 0
/* 801169E4 00113924  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 801169E8 00113928  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801169EC 0011392C  7D 89 03 A6 */	mtctr r12
/* 801169F0 00113930  4E 80 04 21 */	bctrl 
.L_801169F4:
/* 801169F4 00113934  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801169F8 00113938  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 801169FC 0011393C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80116A00 00113940  4C 40 13 82 */	cror 2, 0, 2
/* 80116A04 00113944  40 82 00 24 */	bne .L_80116A28
/* 80116A08 00113948  7F C3 F3 78 */	mr r3, r30
/* 80116A0C 0011394C  7F E4 FB 78 */	mr r4, r31
/* 80116A10 00113950  81 9E 00 00 */	lwz r12, 0(r30)
/* 80116A14 00113954  38 A0 00 01 */	li r5, 1
/* 80116A18 00113958  38 C0 00 00 */	li r6, 0
/* 80116A1C 0011395C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80116A20 00113960  7D 89 03 A6 */	mtctr r12
/* 80116A24 00113964  4E 80 04 21 */	bctrl 
.L_80116A28:
/* 80116A28 00113968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116A2C 0011396C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116A30 00113970  83 C1 00 08 */	lwz r30, 8(r1)
/* 80116A34 00113974  7C 08 03 A6 */	mtlr r0
/* 80116A38 00113978  38 21 00 10 */	addi r1, r1, 0x10
/* 80116A3C 0011397C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBase, global
/* 80116A40 00113980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116A44 00113984  7C 08 02 A6 */	mflr r0
/* 80116A48 00113988  C0 22 97 54 */	lfs f1, lbl_80517AB4@sda21(r2)
/* 80116A4C 0011398C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80116A50 00113990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80116A54 00113994  7C 9F 23 78 */	mr r31, r4
/* 80116A58 00113998  7F E3 FB 78 */	mr r3, r31
/* 80116A5C 0011399C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116A60 001139A0  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80116A64 001139A4  7D 89 03 A6 */	mtctr r12
/* 80116A68 001139A8  4E 80 04 21 */	bctrl 
/* 80116A6C 001139AC  7F E3 FB 78 */	mr r3, r31
/* 80116A70 001139B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116A74 001139B4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80116A78 001139B8  7D 89 03 A6 */	mtctr r12
/* 80116A7C 001139BC  4E 80 04 21 */	bctrl 
/* 80116A80 001139C0  2C 03 00 54 */	cmpwi r3, 0x54
/* 80116A84 001139C4  40 82 00 10 */	bne .L_80116A94
/* 80116A88 001139C8  7F E3 FB 78 */	mr r3, r31
/* 80116A8C 001139CC  4B FF 0D 09 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80116A90 001139D0  48 00 00 0C */	b .L_80116A9C
.L_80116A94:
/* 80116A94 001139D4  7F E3 FB 78 */	mr r3, r31
/* 80116A98 001139D8  4B FF 0C D5 */	bl constraintOff__Q24Game9EnemyBaseFv
.L_80116A9C:
/* 80116A9C 001139DC  7F E3 FB 78 */	mr r3, r31
/* 80116AA0 001139E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116AA4 001139E4  81 8C 03 14 */	lwz r12, 0x314(r12)
/* 80116AA8 001139E8  7D 89 03 A6 */	mtctr r12
/* 80116AAC 001139EC  4E 80 04 21 */	bctrl 
/* 80116AB0 001139F0  7F E3 FB 78 */	mr r3, r31
/* 80116AB4 001139F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116AB8 001139F8  81 8C 03 28 */	lwz r12, 0x328(r12)
/* 80116ABC 001139FC  7D 89 03 A6 */	mtctr r12
/* 80116AC0 00113A00  4E 80 04 21 */	bctrl 
/* 80116AC4 00113A04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116AC8 00113A08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116ACC 00113A0C  7C 08 03 A6 */	mtlr r0
/* 80116AD0 00113A10  38 21 00 10 */	addi r1, r1, 0x10
/* 80116AD4 00113A14  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBase

.fn setNextState__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBasei, global
/* 80116AD8 00113A18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80116ADC 00113A1C  7C 08 02 A6 */	mflr r0
/* 80116AE0 00113A20  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 80116AE4 00113A24  90 01 00 24 */	stw r0, 0x24(r1)
/* 80116AE8 00113A28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80116AEC 00113A2C  7C BF 2B 78 */	mr r31, r5
/* 80116AF0 00113A30  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80116AF4 00113A34  7C 9E 23 78 */	mr r30, r4
/* 80116AF8 00113A38  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80116AFC 00113A3C  7C 7D 1B 78 */	mr r29, r3
/* 80116B00 00113A40  7F C3 F3 78 */	mr r3, r30
/* 80116B04 00113A44  81 9E 00 00 */	lwz r12, 0(r30)
/* 80116B08 00113A48  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80116B0C 00113A4C  7D 89 03 A6 */	mtctr r12
/* 80116B10 00113A50  4E 80 04 21 */	bctrl 
/* 80116B14 00113A54  7F C3 F3 78 */	mr r3, r30
/* 80116B18 00113A58  4B FE E7 89 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80116B1C 00113A5C  93 FD 00 10 */	stw r31, 0x10(r29)
/* 80116B20 00113A60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80116B24 00113A64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80116B28 00113A68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80116B2C 00113A6C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80116B30 00113A70  7C 08 03 A6 */	mtlr r0
/* 80116B34 00113A74  38 21 00 20 */	addi r1, r1, 0x20
/* 80116B38 00113A78  4E 80 00 20 */	blr 
.endfn setNextState__Q34Game10ChappyBase10StateSleepFPQ24Game9EnemyBasei

.fn __ct__Q34Game10ChappyBase9StateDeadFi, global
/* 80116B3C 00113A7C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80116B40 00113A80  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase5State@ha
/* 80116B44 00113A84  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80116B48 00113A88  3C E0 80 4B */	lis r7, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 80116B4C 00113A8C  90 03 00 00 */	stw r0, 0(r3)
/* 80116B50 00113A90  3C C0 80 48 */	lis r6, lbl_8047AEA8@ha
/* 80116B54 00113A94  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase9StateDead@ha
/* 80116B58 00113A98  38 00 00 00 */	li r0, 0
/* 80116B5C 00113A9C  90 83 00 04 */	stw r4, 4(r3)
/* 80116B60 00113AA0  39 08 C1 A0 */	addi r8, r8, __vt__Q34Game10ChappyBase5State@l
/* 80116B64 00113AA4  38 E7 C1 7C */	addi r7, r7, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 80116B68 00113AA8  38 C6 AE A8 */	addi r6, r6, lbl_8047AEA8@l
/* 80116B6C 00113AAC  90 03 00 08 */	stw r0, 8(r3)
/* 80116B70 00113AB0  38 85 C1 34 */	addi r4, r5, __vt__Q34Game10ChappyBase9StateDead@l
/* 80116B74 00113AB4  38 02 97 5C */	addi r0, r2, lbl_80517ABC@sda21
/* 80116B78 00113AB8  91 03 00 00 */	stw r8, 0(r3)
/* 80116B7C 00113ABC  90 E3 00 00 */	stw r7, 0(r3)
/* 80116B80 00113AC0  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80116B84 00113AC4  90 83 00 00 */	stw r4, 0(r3)
/* 80116B88 00113AC8  90 03 00 0C */	stw r0, 0xc(r3)
/* 80116B8C 00113ACC  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase9StateDeadFi

.fn init__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80116B90 00113AD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116B94 00113AD4  7C 08 02 A6 */	mflr r0
/* 80116B98 00113AD8  38 A0 00 00 */	li r5, 0
/* 80116B9C 00113ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80116BA0 00113AE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80116BA4 00113AE4  7C 9F 23 78 */	mr r31, r4
/* 80116BA8 00113AE8  38 80 00 01 */	li r4, 1
/* 80116BAC 00113AEC  7F E3 FB 78 */	mr r3, r31
/* 80116BB0 00113AF0  4B FE E4 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80116BB4 00113AF4  7F E3 FB 78 */	mr r3, r31
/* 80116BB8 00113AF8  4B FE EB 69 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80116BBC 00113AFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116BC0 00113B00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116BC4 00113B04  7C 08 03 A6 */	mtlr r0
/* 80116BC8 00113B08  38 21 00 10 */	addi r1, r1, 0x10
/* 80116BCC 00113B0C  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBase, global
/* 80116BD0 00113B10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116BD4 00113B14  7C 08 02 A6 */	mflr r0
/* 80116BD8 00113B18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80116BDC 00113B1C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80116BE0 00113B20  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80116BE4 00113B24  28 00 00 00 */	cmplwi r0, 0
/* 80116BE8 00113B28  41 82 00 3C */	beq .L_80116C24
/* 80116BEC 00113B2C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80116BF0 00113B30  28 00 00 02 */	cmplwi r0, 2
/* 80116BF4 00113B34  40 82 00 1C */	bne .L_80116C10
/* 80116BF8 00113B38  7C 83 23 78 */	mr r3, r4
/* 80116BFC 00113B3C  81 84 00 00 */	lwz r12, 0(r4)
/* 80116C00 00113B40  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 80116C04 00113B44  7D 89 03 A6 */	mtctr r12
/* 80116C08 00113B48  4E 80 04 21 */	bctrl 
/* 80116C0C 00113B4C  48 00 00 18 */	b .L_80116C24
.L_80116C10:
/* 80116C10 00113B50  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80116C14 00113B54  40 82 00 10 */	bne .L_80116C24
/* 80116C18 00113B58  7C 83 23 78 */	mr r3, r4
/* 80116C1C 00113B5C  38 80 00 00 */	li r4, 0
/* 80116C20 00113B60  48 02 44 D1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80116C24:
/* 80116C24 00113B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116C28 00113B68  7C 08 03 A6 */	mtlr r0
/* 80116C2C 00113B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80116C30 00113B70  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBase, global
/* 80116C34 00113B74  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase9StateDeadFPQ24Game9EnemyBase

.fn __ct__Q34Game10ChappyBase9StateTurnFi, global
/* 80116C38 00113B78  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80116C3C 00113B7C  3D 20 80 4B */	lis r9, __vt__Q34Game10ChappyBase5State@ha
/* 80116C40 00113B80  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80116C44 00113B84  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 80116C48 00113B88  90 03 00 00 */	stw r0, 0(r3)
/* 80116C4C 00113B8C  3C E0 80 48 */	lis r7, lbl_8047AEA8@ha
/* 80116C50 00113B90  3C C0 80 4B */	lis r6, __vt__Q34Game10ChappyBase13StateTurnBase@ha
/* 80116C54 00113B94  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase9StateTurn@ha
/* 80116C58 00113B98  90 83 00 04 */	stw r4, 4(r3)
/* 80116C5C 00113B9C  38 80 00 00 */	li r4, 0
/* 80116C60 00113BA0  38 09 C1 A0 */	addi r0, r9, __vt__Q34Game10ChappyBase5State@l
/* 80116C64 00113BA4  39 08 C1 7C */	addi r8, r8, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 80116C68 00113BA8  90 83 00 08 */	stw r4, 8(r3)
/* 80116C6C 00113BAC  38 E7 AE A8 */	addi r7, r7, lbl_8047AEA8@l
/* 80116C70 00113BB0  38 C6 C1 10 */	addi r6, r6, __vt__Q34Game10ChappyBase13StateTurnBase@l
/* 80116C74 00113BB4  38 85 C0 EC */	addi r4, r5, __vt__Q34Game10ChappyBase9StateTurn@l
/* 80116C78 00113BB8  90 03 00 00 */	stw r0, 0(r3)
/* 80116C7C 00113BBC  38 02 97 80 */	addi r0, r2, lbl_80517AE0@sda21
/* 80116C80 00113BC0  91 03 00 00 */	stw r8, 0(r3)
/* 80116C84 00113BC4  90 E3 00 0C */	stw r7, 0xc(r3)
/* 80116C88 00113BC8  90 C3 00 00 */	stw r6, 0(r3)
/* 80116C8C 00113BCC  90 83 00 00 */	stw r4, 0(r3)
/* 80116C90 00113BD0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80116C94 00113BD4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase9StateTurnFi

.fn init__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80116C98 00113BD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116C9C 00113BDC  7C 08 02 A6 */	mflr r0
/* 80116CA0 00113BE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80116CA4 00113BE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80116CA8 00113BE8  7C 9F 23 78 */	mr r31, r4
/* 80116CAC 00113BEC  7F E3 FB 78 */	mr r3, r31
/* 80116CB0 00113BF0  4B FE AD 1D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80116CB4 00113BF4  7F E3 FB 78 */	mr r3, r31
/* 80116CB8 00113BF8  C0 22 97 88 */	lfs f1, lbl_80517AE8@sda21(r2)
/* 80116CBC 00113BFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116CC0 00113C00  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80116CC4 00113C04  7D 89 03 A6 */	mtctr r12
/* 80116CC8 00113C08  4E 80 04 21 */	bctrl 
/* 80116CCC 00113C0C  7F E3 FB 78 */	mr r3, r31
/* 80116CD0 00113C10  38 80 00 07 */	li r4, 7
/* 80116CD4 00113C14  38 A0 00 00 */	li r5, 0
/* 80116CD8 00113C18  4B FE E3 2D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80116CDC 00113C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80116CE0 00113C20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80116CE4 00113C24  7C 08 03 A6 */	mtlr r0
/* 80116CE8 00113C28  38 21 00 10 */	addi r1, r1, 0x10
/* 80116CEC 00113C2C  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase, global
/* 80116CF0 00113C30  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 80116CF4 00113C34  7C 08 02 A6 */	mflr r0
/* 80116CF8 00113C38  90 01 01 94 */	stw r0, 0x194(r1)
/* 80116CFC 00113C3C  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 80116D00 00113C40  F3 E1 01 88 */	psq_st f31, 392(r1), 0, qr0
/* 80116D04 00113C44  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 80116D08 00113C48  F3 C1 01 78 */	psq_st f30, 376(r1), 0, qr0
/* 80116D0C 00113C4C  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 80116D10 00113C50  F3 A1 01 68 */	psq_st f29, 360(r1), 0, qr0
/* 80116D14 00113C54  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 80116D18 00113C58  F3 81 01 58 */	psq_st f28, 344(r1), 0, qr0
/* 80116D1C 00113C5C  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 80116D20 00113C60  F3 61 01 48 */	psq_st f27, 328(r1), 0, qr0
/* 80116D24 00113C64  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 80116D28 00113C68  F3 41 01 38 */	psq_st f26, 312(r1), 0, qr0
/* 80116D2C 00113C6C  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 80116D30 00113C70  F3 21 01 28 */	psq_st f25, 296(r1), 0, qr0
/* 80116D34 00113C74  DB 01 01 10 */	stfd f24, 0x110(r1)
/* 80116D38 00113C78  F3 01 01 18 */	psq_st f24, 280(r1), 0, qr0
/* 80116D3C 00113C7C  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 80116D40 00113C80  93 C1 01 08 */	stw r30, 0x108(r1)
/* 80116D44 00113C84  93 A1 01 04 */	stw r29, 0x104(r1)
/* 80116D48 00113C88  93 81 01 00 */	stw r28, 0x100(r1)
/* 80116D4C 00113C8C  7C 9F 23 78 */	mr r31, r4
/* 80116D50 00113C90  7C 7E 1B 78 */	mr r30, r3
/* 80116D54 00113C94  7F E3 FB 78 */	mr r3, r31
/* 80116D58 00113C98  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116D5C 00113C9C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80116D60 00113CA0  7D 89 03 A6 */	mtctr r12
/* 80116D64 00113CA4  4E 80 04 21 */	bctrl 
/* 80116D68 00113CA8  2C 03 00 2A */	cmpwi r3, 0x2a
/* 80116D6C 00113CAC  41 82 00 08 */	beq .L_80116D74
/* 80116D70 00113CB0  48 00 00 74 */	b .L_80116DE4
.L_80116D74:
/* 80116D74 00113CB4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80116D78 00113CB8  7F E3 FB 78 */	mr r3, r31
/* 80116D7C 00113CBC  38 80 00 00 */	li r4, 0
/* 80116D80 00113CC0  C3 05 08 70 */	lfs f24, 0x870(r5)
/* 80116D84 00113CC4  FC 20 C0 90 */	fmr f1, f24
/* 80116D88 00113CC8  4B FF DD 39 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80116D8C 00113CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116D90 00113CD0  41 82 00 0C */	beq .L_80116D9C
/* 80116D94 00113CD4  38 60 00 01 */	li r3, 1
/* 80116D98 00113CD8  48 00 00 28 */	b .L_80116DC0
.L_80116D9C:
/* 80116D9C 00113CDC  FC 20 C0 90 */	fmr f1, f24
/* 80116DA0 00113CE0  7F E3 FB 78 */	mr r3, r31
/* 80116DA4 00113CE4  38 80 00 00 */	li r4, 0
/* 80116DA8 00113CE8  4B FF D9 8D */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80116DAC 00113CEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116DB0 00113CF0  41 82 00 0C */	beq .L_80116DBC
/* 80116DB4 00113CF4  38 60 00 01 */	li r3, 1
/* 80116DB8 00113CF8  48 00 00 08 */	b .L_80116DC0
.L_80116DBC:
/* 80116DBC 00113CFC  38 60 00 00 */	li r3, 0
.L_80116DC0:
/* 80116DC0 00113D00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116DC4 00113D04  40 82 00 8C */	bne .L_80116E50
/* 80116DC8 00113D08  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80116DCC 00113D0C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80116DD0 00113D10  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80116DD4 00113D14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80116DD8 00113D18  7C 00 00 26 */	mfcr r0
/* 80116DDC 00113D1C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80116DE0 00113D20  48 00 00 70 */	b .L_80116E50
.L_80116DE4:
/* 80116DE4 00113D24  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80116DE8 00113D28  7F E3 FB 78 */	mr r3, r31
/* 80116DEC 00113D2C  38 80 00 00 */	li r4, 0
/* 80116DF0 00113D30  C3 05 03 AC */	lfs f24, 0x3ac(r5)
/* 80116DF4 00113D34  FC 20 C0 90 */	fmr f1, f24
/* 80116DF8 00113D38  4B FF DC C9 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80116DFC 00113D3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116E00 00113D40  41 82 00 0C */	beq .L_80116E0C
/* 80116E04 00113D44  38 60 00 01 */	li r3, 1
/* 80116E08 00113D48  48 00 00 28 */	b .L_80116E30
.L_80116E0C:
/* 80116E0C 00113D4C  FC 20 C0 90 */	fmr f1, f24
/* 80116E10 00113D50  7F E3 FB 78 */	mr r3, r31
/* 80116E14 00113D54  38 80 00 00 */	li r4, 0
/* 80116E18 00113D58  4B FF D9 1D */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80116E1C 00113D5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116E20 00113D60  41 82 00 0C */	beq .L_80116E2C
/* 80116E24 00113D64  38 60 00 01 */	li r3, 1
/* 80116E28 00113D68  48 00 00 08 */	b .L_80116E30
.L_80116E2C:
/* 80116E2C 00113D6C  38 60 00 00 */	li r3, 0
.L_80116E30:
/* 80116E30 00113D70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116E34 00113D74  40 82 00 1C */	bne .L_80116E50
/* 80116E38 00113D78  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80116E3C 00113D7C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80116E40 00113D80  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80116E44 00113D84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80116E48 00113D88  7C 00 00 26 */	mfcr r0
/* 80116E4C 00113D8C  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80116E50:
/* 80116E50 00113D90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116E54 00113D94  41 82 00 0C */	beq .L_80116E60
/* 80116E58 00113D98  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80116E5C 00113D9C  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80116E60:
/* 80116E60 00113DA0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80116E64 00113DA4  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 80116E68 00113DA8  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80116E6C 00113DAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80116E70 00113DB0  40 80 00 24 */	bge .L_80116E94
/* 80116E74 00113DB4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80116E78 00113DB8  C0 02 97 44 */	lfs f0, lbl_80517AA4@sda21(r2)
/* 80116E7C 00113DBC  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80116E80 00113DC0  EC 22 08 2A */	fadds f1, f2, f1
/* 80116E84 00113DC4  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80116E88 00113DC8  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80116E8C 00113DCC  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80116E90 00113DD0  48 00 00 18 */	b .L_80116EA8
.L_80116E94:
/* 80116E94 00113DD4  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 80116E98 00113DD8  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80116E9C 00113DDC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80116EA0 00113DE0  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 80116EA4 00113DE4  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_80116EA8:
/* 80116EA8 00113DE8  7F E3 FB 78 */	mr r3, r31
/* 80116EAC 00113DEC  4B FF 04 55 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80116EB0 00113DF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116EB4 00113DF4  40 82 05 5C */	bne .L_80117410
/* 80116EB8 00113DF8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80116EBC 00113DFC  7F E3 FB 78 */	mr r3, r31
/* 80116EC0 00113E00  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 80116EC4 00113E04  38 80 00 00 */	li r4, 0
/* 80116EC8 00113E08  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 80116ECC 00113E0C  38 A0 00 00 */	li r5, 0
/* 80116ED0 00113E10  38 C0 00 00 */	li r6, 0
/* 80116ED4 00113E14  4B FF C1 7D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80116ED8 00113E18  28 03 00 00 */	cmplwi r3, 0
/* 80116EDC 00113E1C  41 82 04 EC */	beq .L_801173C8
/* 80116EE0 00113E20  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80116EE4 00113E24  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80116EE8 00113E28  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80116EEC 00113E2C  81 84 00 00 */	lwz r12, 0(r4)
/* 80116EF0 00113E30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80116EF4 00113E34  7D 89 03 A6 */	mtctr r12
/* 80116EF8 00113E38  4E 80 04 21 */	bctrl 
/* 80116EFC 00113E3C  7F E4 FB 78 */	mr r4, r31
/* 80116F00 00113E40  C0 41 00 C8 */	lfs f2, 0xc8(r1)
/* 80116F04 00113E44  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116F08 00113E48  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80116F0C 00113E4C  C0 21 00 CC */	lfs f1, 0xcc(r1)
/* 80116F10 00113E50  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 80116F14 00113E54  81 8C 00 08 */	lwz r12, 8(r12)
/* 80116F18 00113E58  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 80116F1C 00113E5C  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 80116F20 00113E60  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80116F24 00113E64  7D 89 03 A6 */	mtctr r12
/* 80116F28 00113E68  4E 80 04 21 */	bctrl 
/* 80116F2C 00113E6C  C0 A1 00 D4 */	lfs f5, 0xd4(r1)
/* 80116F30 00113E70  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80116F34 00113E74  C0 61 00 DC */	lfs f3, 0xdc(r1)
/* 80116F38 00113E78  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80116F3C 00113E7C  C0 21 00 B0 */	lfs f1, 0xb0(r1)
/* 80116F40 00113E80  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 80116F44 00113E84  C0 81 00 D8 */	lfs f4, 0xd8(r1)
/* 80116F48 00113E88  EC 21 28 28 */	fsubs f1, f1, f5
/* 80116F4C 00113E8C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80116F50 00113E90  D0 A1 00 BC */	stfs f5, 0xbc(r1)
/* 80116F54 00113E94  D0 81 00 C0 */	stfs f4, 0xc0(r1)
/* 80116F58 00113E98  D0 61 00 C4 */	stfs f3, 0xc4(r1)
/* 80116F5C 00113E9C  4B F1 E1 AD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80116F60 00113EA0  48 2F AC 71 */	bl roundAng__Ff
/* 80116F64 00113EA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116F68 00113EA8  FF 00 08 90 */	fmr f24, f1
/* 80116F6C 00113EAC  7F E3 FB 78 */	mr r3, r31
/* 80116F70 00113EB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80116F74 00113EB4  7D 89 03 A6 */	mtctr r12
/* 80116F78 00113EB8  4E 80 04 21 */	bctrl 
/* 80116F7C 00113EBC  FC 40 08 90 */	fmr f2, f1
/* 80116F80 00113EC0  FC 20 C0 90 */	fmr f1, f24
/* 80116F84 00113EC4  48 2F AC 79 */	bl angDist__Fff
/* 80116F88 00113EC8  7F E4 FB 78 */	mr r4, r31
/* 80116F8C 00113ECC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80116F90 00113ED0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116F94 00113ED4  FF E0 08 90 */	fmr f31, f1
/* 80116F98 00113ED8  38 61 00 2C */	addi r3, r1, 0x2c
/* 80116F9C 00113EDC  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 80116FA0 00113EE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80116FA4 00113EE4  3B 80 00 00 */	li r28, 0
/* 80116FA8 00113EE8  C3 C5 05 64 */	lfs f30, 0x564(r5)
/* 80116FAC 00113EEC  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80116FB0 00113EF0  7D 89 03 A6 */	mtctr r12
/* 80116FB4 00113EF4  4E 80 04 21 */	bctrl 
/* 80116FB8 00113EF8  7F A4 EB 78 */	mr r4, r29
/* 80116FBC 00113EFC  38 61 00 20 */	addi r3, r1, 0x20
/* 80116FC0 00113F00  81 9D 00 00 */	lwz r12, 0(r29)
/* 80116FC4 00113F04  C3 A1 00 2C */	lfs f29, 0x2c(r1)
/* 80116FC8 00113F08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80116FCC 00113F0C  7D 89 03 A6 */	mtctr r12
/* 80116FD0 00113F10  4E 80 04 21 */	bctrl 
/* 80116FD4 00113F14  7F E4 FB 78 */	mr r4, r31
/* 80116FD8 00113F18  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80116FDC 00113F1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80116FE0 00113F20  38 61 00 44 */	addi r3, r1, 0x44
/* 80116FE4 00113F24  EF 20 E8 28 */	fsubs f25, f0, f29
/* 80116FE8 00113F28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80116FEC 00113F2C  7D 89 03 A6 */	mtctr r12
/* 80116FF0 00113F30  4E 80 04 21 */	bctrl 
/* 80116FF4 00113F34  7F A4 EB 78 */	mr r4, r29
/* 80116FF8 00113F38  38 61 00 38 */	addi r3, r1, 0x38
/* 80116FFC 00113F3C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80117000 00113F40  C3 A1 00 48 */	lfs f29, 0x48(r1)
/* 80117004 00113F44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117008 00113F48  7D 89 03 A6 */	mtctr r12
/* 8011700C 00113F4C  4E 80 04 21 */	bctrl 
/* 80117010 00113F50  7F E4 FB 78 */	mr r4, r31
/* 80117014 00113F54  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80117018 00113F58  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011701C 00113F5C  38 61 00 5C */	addi r3, r1, 0x5c
/* 80117020 00113F60  EF 00 E8 28 */	fsubs f24, f0, f29
/* 80117024 00113F64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117028 00113F68  7D 89 03 A6 */	mtctr r12
/* 8011702C 00113F6C  4E 80 04 21 */	bctrl 
/* 80117030 00113F70  7F A4 EB 78 */	mr r4, r29
/* 80117034 00113F74  38 61 00 50 */	addi r3, r1, 0x50
/* 80117038 00113F78  81 9D 00 00 */	lwz r12, 0(r29)
/* 8011703C 00113F7C  C3 A1 00 64 */	lfs f29, 0x64(r1)
/* 80117040 00113F80  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117044 00113F84  7D 89 03 A6 */	mtctr r12
/* 80117048 00113F88  4E 80 04 21 */	bctrl 
/* 8011704C 00113F8C  EC 38 06 32 */	fmuls f1, f24, f24
/* 80117050 00113F90  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 80117054 00113F94  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80117058 00113F98  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8011705C 00113F9C  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 80117060 00113FA0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80117064 00113FA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117068 00113FA8  40 80 00 2C */	bge .L_80117094
/* 8011706C 00113FAC  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80117070 00113FB0  FC 40 FA 10 */	fabs f2, f31
/* 80117074 00113FB4  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80117078 00113FB8  EC 00 07 32 */	fmuls f0, f0, f28
/* 8011707C 00113FBC  FC 40 10 18 */	frsp f2, f2
/* 80117080 00113FC0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80117084 00113FC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80117088 00113FC8  4C 40 13 82 */	cror 2, 0, 2
/* 8011708C 00113FCC  40 82 00 08 */	bne .L_80117094
/* 80117090 00113FD0  3B 80 00 01 */	li r28, 1
.L_80117094:
/* 80117094 00113FD4  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80117098 00113FD8  41 82 00 30 */	beq .L_801170C8
/* 8011709C 00113FDC  7F E3 FB 78 */	mr r3, r31
/* 801170A0 00113FE0  4B FE E2 01 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 801170A4 00113FE4  7F E3 FB 78 */	mr r3, r31
/* 801170A8 00113FE8  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 801170AC 00113FEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801170B0 00113FF0  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 801170B4 00113FF4  7D 89 03 A6 */	mtctr r12
/* 801170B8 00113FF8  4E 80 04 21 */	bctrl 
/* 801170BC 00113FFC  38 00 00 04 */	li r0, 4
/* 801170C0 00114000  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801170C4 00114004  48 00 03 14 */	b .L_801173D8
.L_801170C8:
/* 801170C8 00114008  7F E4 FB 78 */	mr r4, r31
/* 801170CC 0011400C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801170D0 00114010  81 9F 00 00 */	lwz r12, 0(r31)
/* 801170D4 00114014  38 61 00 74 */	addi r3, r1, 0x74
/* 801170D8 00114018  C3 DF 02 DC */	lfs f30, 0x2dc(r31)
/* 801170DC 0011401C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801170E0 00114020  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 801170E4 00114024  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 801170E8 00114028  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 801170EC 0011402C  83 9F 02 30 */	lwz r28, 0x230(r31)
/* 801170F0 00114030  7D 89 03 A6 */	mtctr r12
/* 801170F4 00114034  4E 80 04 21 */	bctrl 
/* 801170F8 00114038  7F 84 E3 78 */	mr r4, r28
/* 801170FC 0011403C  38 61 00 68 */	addi r3, r1, 0x68
/* 80117100 00114040  81 9C 00 00 */	lwz r12, 0(r28)
/* 80117104 00114044  C3 A1 00 74 */	lfs f29, 0x74(r1)
/* 80117108 00114048  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011710C 0011404C  7D 89 03 A6 */	mtctr r12
/* 80117110 00114050  4E 80 04 21 */	bctrl 
/* 80117114 00114054  7F E4 FB 78 */	mr r4, r31
/* 80117118 00114058  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 8011711C 0011405C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117120 00114060  38 61 00 8C */	addi r3, r1, 0x8c
/* 80117124 00114064  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80117128 00114068  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011712C 0011406C  7D 89 03 A6 */	mtctr r12
/* 80117130 00114070  4E 80 04 21 */	bctrl 
/* 80117134 00114074  7F 84 E3 78 */	mr r4, r28
/* 80117138 00114078  38 61 00 80 */	addi r3, r1, 0x80
/* 8011713C 0011407C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80117140 00114080  C3 A1 00 90 */	lfs f29, 0x90(r1)
/* 80117144 00114084  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117148 00114088  7D 89 03 A6 */	mtctr r12
/* 8011714C 0011408C  4E 80 04 21 */	bctrl 
/* 80117150 00114090  7F E4 FB 78 */	mr r4, r31
/* 80117154 00114094  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80117158 00114098  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011715C 0011409C  38 61 00 A4 */	addi r3, r1, 0xa4
/* 80117160 001140A0  EF 80 E8 28 */	fsubs f28, f0, f29
/* 80117164 001140A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117168 001140A8  7D 89 03 A6 */	mtctr r12
/* 8011716C 001140AC  4E 80 04 21 */	bctrl 
/* 80117170 001140B0  7F 84 E3 78 */	mr r4, r28
/* 80117174 001140B4  38 61 00 98 */	addi r3, r1, 0x98
/* 80117178 001140B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8011717C 001140BC  C3 A1 00 AC */	lfs f29, 0xac(r1)
/* 80117180 001140C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117184 001140C4  7D 89 03 A6 */	mtctr r12
/* 80117188 001140C8  4E 80 04 21 */	bctrl 
/* 8011718C 001140CC  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 80117190 001140D0  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 80117194 001140D4  EF 39 06 72 */	fmuls f25, f25, f25
/* 80117198 001140D8  38 60 00 01 */	li r3, 1
/* 8011719C 001140DC  EC 00 E8 28 */	fsubs f0, f0, f29
/* 801171A0 001140E0  38 80 00 00 */	li r4, 0
/* 801171A4 001140E4  EC 00 00 32 */	fmuls f0, f0, f0
/* 801171A8 001140E8  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 801171AC 001140EC  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 801171B0 001140F0  40 81 00 30 */	ble .L_801171E0
/* 801171B4 001140F4  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 801171B8 001140F8  7C 80 23 78 */	mr r0, r4
/* 801171BC 001140FC  40 81 00 18 */	ble .L_801171D4
/* 801171C0 00114100  FC 00 E2 10 */	fabs f0, f28
/* 801171C4 00114104  FC 00 00 18 */	frsp f0, f0
/* 801171C8 00114108  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 801171CC 0011410C  40 80 00 08 */	bge .L_801171D4
/* 801171D0 00114110  7C 60 1B 78 */	mr r0, r3
.L_801171D4:
/* 801171D4 00114114  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801171D8 00114118  41 82 00 08 */	beq .L_801171E0
/* 801171DC 0011411C  38 80 00 01 */	li r4, 1
.L_801171E0:
/* 801171E0 00114120  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801171E4 00114124  40 82 00 34 */	bne .L_80117218
/* 801171E8 00114128  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 801171EC 0011412C  FC 40 FA 10 */	fabs f2, f31
/* 801171F0 00114130  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 801171F4 00114134  EC 00 07 B2 */	fmuls f0, f0, f30
/* 801171F8 00114138  FC 40 10 18 */	frsp f2, f2
/* 801171FC 0011413C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80117200 00114140  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80117204 00114144  4C 40 13 82 */	cror 2, 0, 2
/* 80117208 00114148  7C 00 00 26 */	mfcr r0
/* 8011720C 0011414C  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 80117210 00114150  41 82 00 08 */	beq .L_80117218
/* 80117214 00114154  38 60 00 00 */	li r3, 0
.L_80117218:
/* 80117218 00114158  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011721C 0011415C  41 82 00 18 */	beq .L_80117234
/* 80117220 00114160  38 00 00 05 */	li r0, 5
/* 80117224 00114164  7F E3 FB 78 */	mr r3, r31
/* 80117228 00114168  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8011722C 0011416C  4B FE E0 75 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80117230 00114170  48 00 01 A8 */	b .L_801173D8
.L_80117234:
/* 80117234 00114174  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80117238 00114178  38 61 00 E0 */	addi r3, r1, 0xe0
/* 8011723C 0011417C  81 84 00 00 */	lwz r12, 0(r4)
/* 80117240 00114180  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117244 00114184  7D 89 03 A6 */	mtctr r12
/* 80117248 00114188  4E 80 04 21 */	bctrl 
/* 8011724C 0011418C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117250 00114190  7F E3 FB 78 */	mr r3, r31
/* 80117254 00114194  C3 41 00 E0 */	lfs f26, 0xe0(r1)
/* 80117258 00114198  38 80 00 00 */	li r4, 0
/* 8011725C 0011419C  C3 61 00 E8 */	lfs f27, 0xe8(r1)
/* 80117260 001141A0  C0 25 08 20 */	lfs f1, 0x820(r5)
/* 80117264 001141A4  4B FF DB 8D */	bl "getSurroundPikminNum__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80117268 001141A8  2C 03 00 0A */	cmpwi r3, 0xa
/* 8011726C 001141AC  40 81 00 08 */	ble .L_80117274
/* 80117270 001141B0  38 60 00 0A */	li r3, 0xa
.L_80117274:
/* 80117274 001141B4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80117278 001141B8  3C 00 43 30 */	lis r0, 0x4330
/* 8011727C 001141BC  90 61 00 F4 */	stw r3, 0xf4(r1)
/* 80117280 001141C0  7F E4 FB 78 */	mr r4, r31
/* 80117284 001141C4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117288 001141C8  38 61 00 14 */	addi r3, r1, 0x14
/* 8011728C 001141CC  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80117290 001141D0  C8 22 97 78 */	lfd f1, lbl_80517AD8@sda21(r2)
/* 80117294 001141D4  C8 01 00 F0 */	lfd f0, 0xf0(r1)
/* 80117298 001141D8  C0 42 97 68 */	lfs f2, lbl_80517AC8@sda21(r2)
/* 8011729C 001141DC  EC 00 08 28 */	fsubs f0, f0, f1
/* 801172A0 001141E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801172A4 001141E4  C0 22 97 6C */	lfs f1, lbl_80517ACC@sda21(r2)
/* 801172A8 001141E8  C0 62 97 64 */	lfs f3, lbl_80517AC4@sda21(r2)
/* 801172AC 001141EC  EC 42 00 32 */	fmuls f2, f2, f0
/* 801172B0 001141F0  C0 05 03 34 */	lfs f0, 0x334(r5)
/* 801172B4 001141F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801172B8 001141F8  C3 E5 05 8C */	lfs f31, 0x58c(r5)
/* 801172BC 001141FC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801172C0 00114200  C3 05 03 0C */	lfs f24, 0x30c(r5)
/* 801172C4 00114204  EC 23 08 28 */	fsubs f1, f3, f1
/* 801172C8 00114208  EF 21 00 32 */	fmuls f25, f1, f0
/* 801172CC 0011420C  7D 89 03 A6 */	mtctr r12
/* 801172D0 00114210  4E 80 04 21 */	bctrl 
/* 801172D4 00114214  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 801172D8 00114218  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 801172DC 0011421C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801172E0 00114220  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 801172E4 00114224  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 801172E8 00114228  EC 3A 20 28 */	fsubs f1, f26, f4
/* 801172EC 0011422C  EC 5B 00 28 */	fsubs f2, f27, f0
/* 801172F0 00114230  D0 81 00 08 */	stfs f4, 8(r1)
/* 801172F4 00114234  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 801172F8 00114238  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801172FC 0011423C  4B F1 DE 0D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80117300 00114240  48 2F A8 D1 */	bl roundAng__Ff
/* 80117304 00114244  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117308 00114248  FF 40 08 90 */	fmr f26, f1
/* 8011730C 0011424C  7F E3 FB 78 */	mr r3, r31
/* 80117310 00114250  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80117314 00114254  7D 89 03 A6 */	mtctr r12
/* 80117318 00114258  4E 80 04 21 */	bctrl 
/* 8011731C 0011425C  FC 40 08 90 */	fmr f2, f1
/* 80117320 00114260  FC 20 D0 90 */	fmr f1, f26
/* 80117324 00114264  48 2F A8 D9 */	bl angDist__Fff
/* 80117328 00114268  FF C0 08 90 */	fmr f30, f1
/* 8011732C 0011426C  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80117330 00114270  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80117334 00114274  EC 00 06 72 */	fmuls f0, f0, f25
/* 80117338 00114278  EF 1E 06 32 */	fmuls f24, f30, f24
/* 8011733C 0011427C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80117340 00114280  FC 00 C2 10 */	fabs f0, f24
/* 80117344 00114284  FC 00 00 18 */	frsp f0, f0
/* 80117348 00114288  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8011734C 0011428C  40 81 00 1C */	ble .L_80117368
/* 80117350 00114290  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117354 00114294  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 80117358 00114298  40 81 00 0C */	ble .L_80117364
/* 8011735C 0011429C  FF 00 08 90 */	fmr f24, f1
/* 80117360 001142A0  48 00 00 08 */	b .L_80117368
.L_80117364:
/* 80117364 001142A4  FF 00 08 50 */	fneg f24, f1
.L_80117368:
/* 80117368 001142A8  7F E3 FB 78 */	mr r3, r31
/* 8011736C 001142AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117370 001142B0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80117374 001142B4  7D 89 03 A6 */	mtctr r12
/* 80117378 001142B8  4E 80 04 21 */	bctrl 
/* 8011737C 001142BC  EC 38 08 2A */	fadds f1, f24, f1
/* 80117380 001142C0  48 2F A8 51 */	bl roundAng__Ff
/* 80117384 001142C4  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80117388 001142C8  FC 40 F2 10 */	fabs f2, f30
/* 8011738C 001142CC  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80117390 001142D0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80117394 001142D4  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80117398 001142D8  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 8011739C 001142DC  FC 40 10 18 */	frsp f2, f2
/* 801173A0 001142E0  EC 01 00 32 */	fmuls f0, f1, f0
/* 801173A4 001142E4  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 801173A8 001142E8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801173AC 001142EC  4C 40 13 82 */	cror 2, 0, 2
/* 801173B0 001142F0  40 82 00 28 */	bne .L_801173D8
/* 801173B4 001142F4  38 00 00 03 */	li r0, 3
/* 801173B8 001142F8  7F E3 FB 78 */	mr r3, r31
/* 801173BC 001142FC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801173C0 00114300  4B FE DE E1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 801173C4 00114304  48 00 00 14 */	b .L_801173D8
.L_801173C8:
/* 801173C8 00114308  38 00 00 05 */	li r0, 5
/* 801173CC 0011430C  7F E3 FB 78 */	mr r3, r31
/* 801173D0 00114310  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801173D4 00114314  4B FE DE CD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_801173D8:
/* 801173D8 00114318  7F E3 FB 78 */	mr r3, r31
/* 801173DC 0011431C  38 80 00 01 */	li r4, 1
/* 801173E0 00114320  4B FF D2 79 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 801173E4 00114324  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801173E8 00114328  41 82 00 64 */	beq .L_8011744C
/* 801173EC 0011432C  7F C3 F3 78 */	mr r3, r30
/* 801173F0 00114330  7F E4 FB 78 */	mr r4, r31
/* 801173F4 00114334  81 9E 00 00 */	lwz r12, 0(r30)
/* 801173F8 00114338  38 A0 00 02 */	li r5, 2
/* 801173FC 0011433C  38 C0 00 00 */	li r6, 0
/* 80117400 00114340  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80117404 00114344  7D 89 03 A6 */	mtctr r12
/* 80117408 00114348  4E 80 04 21 */	bctrl 
/* 8011740C 0011434C  48 00 00 40 */	b .L_8011744C
.L_80117410:
/* 80117410 00114350  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80117414 00114354  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80117418 00114358  28 00 00 00 */	cmplwi r0, 0
/* 8011741C 0011435C  41 82 00 30 */	beq .L_8011744C
/* 80117420 00114360  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80117424 00114364  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80117428 00114368  40 82 00 24 */	bne .L_8011744C
/* 8011742C 0011436C  7F C3 F3 78 */	mr r3, r30
/* 80117430 00114370  7F E4 FB 78 */	mr r4, r31
/* 80117434 00114374  81 9E 00 00 */	lwz r12, 0(r30)
/* 80117438 00114378  38 C0 00 00 */	li r6, 0
/* 8011743C 0011437C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 80117440 00114380  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80117444 00114384  7D 89 03 A6 */	mtctr r12
/* 80117448 00114388  4E 80 04 21 */	bctrl 
.L_8011744C:
/* 8011744C 0011438C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80117450 00114390  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117454 00114394  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117458 00114398  4C 40 13 82 */	cror 2, 0, 2
/* 8011745C 0011439C  40 82 00 24 */	bne .L_80117480
/* 80117460 001143A0  7F C3 F3 78 */	mr r3, r30
/* 80117464 001143A4  7F E4 FB 78 */	mr r4, r31
/* 80117468 001143A8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8011746C 001143AC  38 A0 00 01 */	li r5, 1
/* 80117470 001143B0  38 C0 00 00 */	li r6, 0
/* 80117474 001143B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80117478 001143B8  7D 89 03 A6 */	mtctr r12
/* 8011747C 001143BC  4E 80 04 21 */	bctrl 
.L_80117480:
/* 80117480 001143C0  E3 E1 01 88 */	psq_l f31, 392(r1), 0, qr0
/* 80117484 001143C4  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 80117488 001143C8  E3 C1 01 78 */	psq_l f30, 376(r1), 0, qr0
/* 8011748C 001143CC  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 80117490 001143D0  E3 A1 01 68 */	psq_l f29, 360(r1), 0, qr0
/* 80117494 001143D4  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 80117498 001143D8  E3 81 01 58 */	psq_l f28, 344(r1), 0, qr0
/* 8011749C 001143DC  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 801174A0 001143E0  E3 61 01 48 */	psq_l f27, 328(r1), 0, qr0
/* 801174A4 001143E4  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 801174A8 001143E8  E3 41 01 38 */	psq_l f26, 312(r1), 0, qr0
/* 801174AC 001143EC  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 801174B0 001143F0  E3 21 01 28 */	psq_l f25, 296(r1), 0, qr0
/* 801174B4 001143F4  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 801174B8 001143F8  E3 01 01 18 */	psq_l f24, 280(r1), 0, qr0
/* 801174BC 001143FC  CB 01 01 10 */	lfd f24, 0x110(r1)
/* 801174C0 00114400  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 801174C4 00114404  83 C1 01 08 */	lwz r30, 0x108(r1)
/* 801174C8 00114408  83 A1 01 04 */	lwz r29, 0x104(r1)
/* 801174CC 0011440C  80 01 01 94 */	lwz r0, 0x194(r1)
/* 801174D0 00114410  83 81 01 00 */	lwz r28, 0x100(r1)
/* 801174D4 00114414  7C 08 03 A6 */	mtlr r0
/* 801174D8 00114418  38 21 01 90 */	addi r1, r1, 0x190
/* 801174DC 0011441C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase, global
/* 801174E0 00114420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801174E4 00114424  7C 08 02 A6 */	mflr r0
/* 801174E8 00114428  90 01 00 14 */	stw r0, 0x14(r1)
/* 801174EC 0011442C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801174F0 00114430  7C 9F 23 78 */	mr r31, r4
/* 801174F4 00114434  7F E3 FB 78 */	mr r3, r31
/* 801174F8 00114438  4B FE A4 85 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 801174FC 0011443C  7F E3 FB 78 */	mr r3, r31
/* 80117500 00114440  4B FE FE 9D */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 80117504 00114444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80117508 00114448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011750C 0011444C  7C 08 03 A6 */	mtlr r0
/* 80117510 00114450  38 21 00 10 */	addi r1, r1, 0x10
/* 80117514 00114454  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase9StateTurnFPQ24Game9EnemyBase

.fn __ct__Q34Game10ChappyBase9StateWalkFi, global
/* 80117518 00114458  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8011751C 0011445C  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase5State@ha
/* 80117520 00114460  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80117524 00114464  3C E0 80 4B */	lis r7, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 80117528 00114468  90 03 00 00 */	stw r0, 0(r3)
/* 8011752C 0011446C  3C C0 80 48 */	lis r6, lbl_8047AEA8@ha
/* 80117530 00114470  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase9StateWalk@ha
/* 80117534 00114474  38 00 00 00 */	li r0, 0
/* 80117538 00114478  90 83 00 04 */	stw r4, 4(r3)
/* 8011753C 0011447C  39 08 C1 A0 */	addi r8, r8, __vt__Q34Game10ChappyBase5State@l
/* 80117540 00114480  38 E7 C1 7C */	addi r7, r7, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 80117544 00114484  38 C6 AE A8 */	addi r6, r6, lbl_8047AEA8@l
/* 80117548 00114488  90 03 00 08 */	stw r0, 8(r3)
/* 8011754C 0011448C  38 85 C0 C8 */	addi r4, r5, __vt__Q34Game10ChappyBase9StateWalk@l
/* 80117550 00114490  38 02 97 8C */	addi r0, r2, lbl_80517AEC@sda21
/* 80117554 00114494  91 03 00 00 */	stw r8, 0(r3)
/* 80117558 00114498  90 E3 00 00 */	stw r7, 0(r3)
/* 8011755C 0011449C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80117560 001144A0  90 83 00 00 */	stw r4, 0(r3)
/* 80117564 001144A4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80117568 001144A8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase9StateWalkFi

.fn init__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8011756C 001144AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80117570 001144B0  7C 08 02 A6 */	mflr r0
/* 80117574 001144B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80117578 001144B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011757C 001144BC  7C 9F 23 78 */	mr r31, r4
/* 80117580 001144C0  7F E3 FB 78 */	mr r3, r31
/* 80117584 001144C4  4B FE A4 49 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80117588 001144C8  7F E3 FB 78 */	mr r3, r31
/* 8011758C 001144CC  C0 22 97 88 */	lfs f1, lbl_80517AE8@sda21(r2)
/* 80117590 001144D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117594 001144D4  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80117598 001144D8  7D 89 03 A6 */	mtctr r12
/* 8011759C 001144DC  4E 80 04 21 */	bctrl 
/* 801175A0 001144E0  7F E3 FB 78 */	mr r3, r31
/* 801175A4 001144E4  38 80 00 03 */	li r4, 3
/* 801175A8 001144E8  38 A0 00 00 */	li r5, 0
/* 801175AC 001144EC  4B FE DA 59 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 801175B0 001144F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801175B4 001144F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801175B8 001144F8  7C 08 03 A6 */	mtlr r0
/* 801175BC 001144FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801175C0 00114500  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBase, global
/* 801175C4 00114504  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 801175C8 00114508  7C 08 02 A6 */	mflr r0
/* 801175CC 0011450C  90 01 01 74 */	stw r0, 0x174(r1)
/* 801175D0 00114510  DB E1 01 60 */	stfd f31, 0x160(r1)
/* 801175D4 00114514  F3 E1 01 68 */	psq_st f31, 360(r1), 0, qr0
/* 801175D8 00114518  DB C1 01 50 */	stfd f30, 0x150(r1)
/* 801175DC 0011451C  F3 C1 01 58 */	psq_st f30, 344(r1), 0, qr0
/* 801175E0 00114520  DB A1 01 40 */	stfd f29, 0x140(r1)
/* 801175E4 00114524  F3 A1 01 48 */	psq_st f29, 328(r1), 0, qr0
/* 801175E8 00114528  DB 81 01 30 */	stfd f28, 0x130(r1)
/* 801175EC 0011452C  F3 81 01 38 */	psq_st f28, 312(r1), 0, qr0
/* 801175F0 00114530  DB 61 01 20 */	stfd f27, 0x120(r1)
/* 801175F4 00114534  F3 61 01 28 */	psq_st f27, 296(r1), 0, qr0
/* 801175F8 00114538  DB 41 01 10 */	stfd f26, 0x110(r1)
/* 801175FC 0011453C  F3 41 01 18 */	psq_st f26, 280(r1), 0, qr0
/* 80117600 00114540  DB 21 01 00 */	stfd f25, 0x100(r1)
/* 80117604 00114544  F3 21 01 08 */	psq_st f25, 264(r1), 0, qr0
/* 80117608 00114548  DB 01 00 F0 */	stfd f24, 0xf0(r1)
/* 8011760C 0011454C  F3 01 00 F8 */	psq_st f24, 248(r1), 0, qr0
/* 80117610 00114550  93 E1 00 EC */	stw r31, 0xec(r1)
/* 80117614 00114554  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 80117618 00114558  93 A1 00 E4 */	stw r29, 0xe4(r1)
/* 8011761C 0011455C  93 81 00 E0 */	stw r28, 0xe0(r1)
/* 80117620 00114560  7C 9F 23 78 */	mr r31, r4
/* 80117624 00114564  7C 7E 1B 78 */	mr r30, r3
/* 80117628 00114568  7F E3 FB 78 */	mr r3, r31
/* 8011762C 0011456C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117630 00114570  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80117634 00114574  7D 89 03 A6 */	mtctr r12
/* 80117638 00114578  4E 80 04 21 */	bctrl 
/* 8011763C 0011457C  2C 03 00 2A */	cmpwi r3, 0x2a
/* 80117640 00114580  41 82 00 08 */	beq .L_80117648
/* 80117644 00114584  48 00 00 74 */	b .L_801176B8
.L_80117648:
/* 80117648 00114588  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8011764C 0011458C  7F E3 FB 78 */	mr r3, r31
/* 80117650 00114590  38 80 00 00 */	li r4, 0
/* 80117654 00114594  C3 05 08 70 */	lfs f24, 0x870(r5)
/* 80117658 00114598  FC 20 C0 90 */	fmr f1, f24
/* 8011765C 0011459C  4B FF D4 65 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80117660 001145A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117664 001145A4  41 82 00 0C */	beq .L_80117670
/* 80117668 001145A8  38 60 00 01 */	li r3, 1
/* 8011766C 001145AC  48 00 00 28 */	b .L_80117694
.L_80117670:
/* 80117670 001145B0  FC 20 C0 90 */	fmr f1, f24
/* 80117674 001145B4  7F E3 FB 78 */	mr r3, r31
/* 80117678 001145B8  38 80 00 00 */	li r4, 0
/* 8011767C 001145BC  4B FF D0 B9 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80117680 001145C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117684 001145C4  41 82 00 0C */	beq .L_80117690
/* 80117688 001145C8  38 60 00 01 */	li r3, 1
/* 8011768C 001145CC  48 00 00 08 */	b .L_80117694
.L_80117690:
/* 80117690 001145D0  38 60 00 00 */	li r3, 0
.L_80117694:
/* 80117694 001145D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117698 001145D8  40 82 00 8C */	bne .L_80117724
/* 8011769C 001145DC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801176A0 001145E0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801176A4 001145E4  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 801176A8 001145E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801176AC 001145EC  7C 00 00 26 */	mfcr r0
/* 801176B0 001145F0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 801176B4 001145F4  48 00 00 70 */	b .L_80117724
.L_801176B8:
/* 801176B8 001145F8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801176BC 001145FC  7F E3 FB 78 */	mr r3, r31
/* 801176C0 00114600  38 80 00 00 */	li r4, 0
/* 801176C4 00114604  C3 05 03 AC */	lfs f24, 0x3ac(r5)
/* 801176C8 00114608  FC 20 C0 90 */	fmr f1, f24
/* 801176CC 0011460C  4B FF D3 F5 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 801176D0 00114610  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801176D4 00114614  41 82 00 0C */	beq .L_801176E0
/* 801176D8 00114618  38 60 00 01 */	li r3, 1
/* 801176DC 0011461C  48 00 00 28 */	b .L_80117704
.L_801176E0:
/* 801176E0 00114620  FC 20 C0 90 */	fmr f1, f24
/* 801176E4 00114624  7F E3 FB 78 */	mr r3, r31
/* 801176E8 00114628  38 80 00 00 */	li r4, 0
/* 801176EC 0011462C  4B FF D0 49 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 801176F0 00114630  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801176F4 00114634  41 82 00 0C */	beq .L_80117700
/* 801176F8 00114638  38 60 00 01 */	li r3, 1
/* 801176FC 0011463C  48 00 00 08 */	b .L_80117704
.L_80117700:
/* 80117700 00114640  38 60 00 00 */	li r3, 0
.L_80117704:
/* 80117704 00114644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117708 00114648  40 82 00 1C */	bne .L_80117724
/* 8011770C 0011464C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117710 00114650  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80117714 00114654  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80117718 00114658  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011771C 0011465C  7C 00 00 26 */	mfcr r0
/* 80117720 00114660  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80117724:
/* 80117724 00114664  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117728 00114668  41 82 00 0C */	beq .L_80117734
/* 8011772C 0011466C  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117730 00114670  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80117734:
/* 80117734 00114674  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117738 00114678  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 8011773C 0011467C  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80117740 00114680  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80117744 00114684  40 80 00 24 */	bge .L_80117768
/* 80117748 00114688  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8011774C 0011468C  C0 02 97 44 */	lfs f0, lbl_80517AA4@sda21(r2)
/* 80117750 00114690  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80117754 00114694  EC 22 08 2A */	fadds f1, f2, f1
/* 80117758 00114698  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 8011775C 0011469C  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80117760 001146A0  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80117764 001146A4  48 00 00 18 */	b .L_8011777C
.L_80117768:
/* 80117768 001146A8  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 8011776C 001146AC  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80117770 001146B0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117774 001146B4  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 80117778 001146B8  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_8011777C:
/* 8011777C 001146BC  7F E3 FB 78 */	mr r3, r31
/* 80117780 001146C0  4B FE FB 81 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80117784 001146C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117788 001146C8  40 82 05 68 */	bne .L_80117CF0
/* 8011778C 001146CC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117790 001146D0  7F E3 FB 78 */	mr r3, r31
/* 80117794 001146D4  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 80117798 001146D8  38 80 00 00 */	li r4, 0
/* 8011779C 001146DC  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 801177A0 001146E0  38 A0 00 00 */	li r5, 0
/* 801177A4 001146E4  38 C0 00 00 */	li r6, 0
/* 801177A8 001146E8  4B FF B8 A9 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 801177AC 001146EC  28 03 00 00 */	cmplwi r3, 0
/* 801177B0 001146F0  41 82 04 38 */	beq .L_80117BE8
/* 801177B4 001146F4  90 7F 02 30 */	stw r3, 0x230(r31)
/* 801177B8 001146F8  38 61 00 BC */	addi r3, r1, 0xbc
/* 801177BC 001146FC  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 801177C0 00114700  81 84 00 00 */	lwz r12, 0(r4)
/* 801177C4 00114704  81 8C 00 08 */	lwz r12, 8(r12)
/* 801177C8 00114708  7D 89 03 A6 */	mtctr r12
/* 801177CC 0011470C  4E 80 04 21 */	bctrl 
/* 801177D0 00114710  7F E4 FB 78 */	mr r4, r31
/* 801177D4 00114714  C0 41 00 BC */	lfs f2, 0xbc(r1)
/* 801177D8 00114718  81 9F 00 00 */	lwz r12, 0(r31)
/* 801177DC 0011471C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 801177E0 00114720  C0 21 00 C0 */	lfs f1, 0xc0(r1)
/* 801177E4 00114724  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 801177E8 00114728  81 8C 00 08 */	lwz r12, 8(r12)
/* 801177EC 0011472C  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 801177F0 00114730  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 801177F4 00114734  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 801177F8 00114738  7D 89 03 A6 */	mtctr r12
/* 801177FC 0011473C  4E 80 04 21 */	bctrl 
/* 80117800 00114740  C0 A1 00 C8 */	lfs f5, 0xc8(r1)
/* 80117804 00114744  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80117808 00114748  C0 61 00 D0 */	lfs f3, 0xd0(r1)
/* 8011780C 0011474C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80117810 00114750  C0 21 00 A4 */	lfs f1, 0xa4(r1)
/* 80117814 00114754  C0 01 00 AC */	lfs f0, 0xac(r1)
/* 80117818 00114758  C0 81 00 CC */	lfs f4, 0xcc(r1)
/* 8011781C 0011475C  EC 21 28 28 */	fsubs f1, f1, f5
/* 80117820 00114760  EC 40 18 28 */	fsubs f2, f0, f3
/* 80117824 00114764  D0 A1 00 B0 */	stfs f5, 0xb0(r1)
/* 80117828 00114768  D0 81 00 B4 */	stfs f4, 0xb4(r1)
/* 8011782C 0011476C  D0 61 00 B8 */	stfs f3, 0xb8(r1)
/* 80117830 00114770  4B F1 D8 D9 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80117834 00114774  48 2F A3 9D */	bl roundAng__Ff
/* 80117838 00114778  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011783C 0011477C  FF 00 08 90 */	fmr f24, f1
/* 80117840 00114780  7F E3 FB 78 */	mr r3, r31
/* 80117844 00114784  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80117848 00114788  7D 89 03 A6 */	mtctr r12
/* 8011784C 0011478C  4E 80 04 21 */	bctrl 
/* 80117850 00114790  FC 40 08 90 */	fmr f2, f1
/* 80117854 00114794  FC 20 C0 90 */	fmr f1, f24
/* 80117858 00114798  48 2F A3 A5 */	bl angDist__Fff
/* 8011785C 0011479C  7F E4 FB 78 */	mr r4, r31
/* 80117860 001147A0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117864 001147A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117868 001147A8  FF E0 08 90 */	fmr f31, f1
/* 8011786C 001147AC  38 61 00 14 */	addi r3, r1, 0x14
/* 80117870 001147B0  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 80117874 001147B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117878 001147B8  3B 80 00 00 */	li r28, 0
/* 8011787C 001147BC  C3 C5 05 64 */	lfs f30, 0x564(r5)
/* 80117880 001147C0  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80117884 001147C4  7D 89 03 A6 */	mtctr r12
/* 80117888 001147C8  4E 80 04 21 */	bctrl 
/* 8011788C 001147CC  7F A4 EB 78 */	mr r4, r29
/* 80117890 001147D0  38 61 00 08 */	addi r3, r1, 8
/* 80117894 001147D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80117898 001147D8  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 8011789C 001147DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801178A0 001147E0  7D 89 03 A6 */	mtctr r12
/* 801178A4 001147E4  4E 80 04 21 */	bctrl 
/* 801178A8 001147E8  7F E4 FB 78 */	mr r4, r31
/* 801178AC 001147EC  C0 01 00 08 */	lfs f0, 8(r1)
/* 801178B0 001147F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801178B4 001147F4  38 61 00 2C */	addi r3, r1, 0x2c
/* 801178B8 001147F8  EF 20 E8 28 */	fsubs f25, f0, f29
/* 801178BC 001147FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801178C0 00114800  7D 89 03 A6 */	mtctr r12
/* 801178C4 00114804  4E 80 04 21 */	bctrl 
/* 801178C8 00114808  7F A4 EB 78 */	mr r4, r29
/* 801178CC 0011480C  38 61 00 20 */	addi r3, r1, 0x20
/* 801178D0 00114810  81 9D 00 00 */	lwz r12, 0(r29)
/* 801178D4 00114814  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 801178D8 00114818  81 8C 00 08 */	lwz r12, 8(r12)
/* 801178DC 0011481C  7D 89 03 A6 */	mtctr r12
/* 801178E0 00114820  4E 80 04 21 */	bctrl 
/* 801178E4 00114824  7F E4 FB 78 */	mr r4, r31
/* 801178E8 00114828  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 801178EC 0011482C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801178F0 00114830  38 61 00 44 */	addi r3, r1, 0x44
/* 801178F4 00114834  EF 00 E8 28 */	fsubs f24, f0, f29
/* 801178F8 00114838  81 8C 00 08 */	lwz r12, 8(r12)
/* 801178FC 0011483C  7D 89 03 A6 */	mtctr r12
/* 80117900 00114840  4E 80 04 21 */	bctrl 
/* 80117904 00114844  7F A4 EB 78 */	mr r4, r29
/* 80117908 00114848  38 61 00 38 */	addi r3, r1, 0x38
/* 8011790C 0011484C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80117910 00114850  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80117914 00114854  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117918 00114858  7D 89 03 A6 */	mtctr r12
/* 8011791C 0011485C  4E 80 04 21 */	bctrl 
/* 80117920 00114860  EC 38 06 32 */	fmuls f1, f24, f24
/* 80117924 00114864  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80117928 00114868  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8011792C 0011486C  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80117930 00114870  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 80117934 00114874  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80117938 00114878  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011793C 0011487C  40 80 00 2C */	bge .L_80117968
/* 80117940 00114880  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80117944 00114884  FC 40 FA 10 */	fabs f2, f31
/* 80117948 00114888  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 8011794C 0011488C  EC 00 07 32 */	fmuls f0, f0, f28
/* 80117950 00114890  FC 40 10 18 */	frsp f2, f2
/* 80117954 00114894  EC 01 00 32 */	fmuls f0, f1, f0
/* 80117958 00114898  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011795C 0011489C  4C 40 13 82 */	cror 2, 0, 2
/* 80117960 001148A0  40 82 00 08 */	bne .L_80117968
/* 80117964 001148A4  3B 80 00 01 */	li r28, 1
.L_80117968:
/* 80117968 001148A8  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 8011796C 001148AC  41 82 00 4C */	beq .L_801179B8
/* 80117970 001148B0  38 00 00 04 */	li r0, 4
/* 80117974 001148B4  7F E3 FB 78 */	mr r3, r31
/* 80117978 001148B8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8011797C 001148BC  4B FE D9 25 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80117980 001148C0  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117984 001148C4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80117988 001148C8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8011798C 001148CC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80117990 001148D0  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80117994 001148D4  2C 00 00 04 */	cmpwi r0, 4
/* 80117998 001148D8  40 82 02 60 */	bne .L_80117BF8
/* 8011799C 001148DC  7F E3 FB 78 */	mr r3, r31
/* 801179A0 001148E0  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 801179A4 001148E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801179A8 001148E8  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 801179AC 001148EC  7D 89 03 A6 */	mtctr r12
/* 801179B0 001148F0  4E 80 04 21 */	bctrl 
/* 801179B4 001148F4  48 00 02 44 */	b .L_80117BF8
.L_801179B8:
/* 801179B8 001148F8  7F E4 FB 78 */	mr r4, r31
/* 801179BC 001148FC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801179C0 00114900  81 9F 00 00 */	lwz r12, 0(r31)
/* 801179C4 00114904  38 61 00 68 */	addi r3, r1, 0x68
/* 801179C8 00114908  C3 DF 02 DC */	lfs f30, 0x2dc(r31)
/* 801179CC 0011490C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801179D0 00114910  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 801179D4 00114914  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 801179D8 00114918  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 801179DC 0011491C  83 9F 02 30 */	lwz r28, 0x230(r31)
/* 801179E0 00114920  7D 89 03 A6 */	mtctr r12
/* 801179E4 00114924  4E 80 04 21 */	bctrl 
/* 801179E8 00114928  7F 84 E3 78 */	mr r4, r28
/* 801179EC 0011492C  38 61 00 5C */	addi r3, r1, 0x5c
/* 801179F0 00114930  81 9C 00 00 */	lwz r12, 0(r28)
/* 801179F4 00114934  C3 A1 00 68 */	lfs f29, 0x68(r1)
/* 801179F8 00114938  81 8C 00 08 */	lwz r12, 8(r12)
/* 801179FC 0011493C  7D 89 03 A6 */	mtctr r12
/* 80117A00 00114940  4E 80 04 21 */	bctrl 
/* 80117A04 00114944  7F E4 FB 78 */	mr r4, r31
/* 80117A08 00114948  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 80117A0C 0011494C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117A10 00114950  38 61 00 80 */	addi r3, r1, 0x80
/* 80117A14 00114954  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80117A18 00114958  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117A1C 0011495C  7D 89 03 A6 */	mtctr r12
/* 80117A20 00114960  4E 80 04 21 */	bctrl 
/* 80117A24 00114964  7F 84 E3 78 */	mr r4, r28
/* 80117A28 00114968  38 61 00 74 */	addi r3, r1, 0x74
/* 80117A2C 0011496C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80117A30 00114970  C3 A1 00 84 */	lfs f29, 0x84(r1)
/* 80117A34 00114974  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117A38 00114978  7D 89 03 A6 */	mtctr r12
/* 80117A3C 0011497C  4E 80 04 21 */	bctrl 
/* 80117A40 00114980  7F E4 FB 78 */	mr r4, r31
/* 80117A44 00114984  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 80117A48 00114988  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117A4C 0011498C  38 61 00 98 */	addi r3, r1, 0x98
/* 80117A50 00114990  EF 80 E8 28 */	fsubs f28, f0, f29
/* 80117A54 00114994  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117A58 00114998  7D 89 03 A6 */	mtctr r12
/* 80117A5C 0011499C  4E 80 04 21 */	bctrl 
/* 80117A60 001149A0  7F 84 E3 78 */	mr r4, r28
/* 80117A64 001149A4  38 61 00 8C */	addi r3, r1, 0x8c
/* 80117A68 001149A8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80117A6C 001149AC  C3 A1 00 A0 */	lfs f29, 0xa0(r1)
/* 80117A70 001149B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117A74 001149B4  7D 89 03 A6 */	mtctr r12
/* 80117A78 001149B8  4E 80 04 21 */	bctrl 
/* 80117A7C 001149BC  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80117A80 001149C0  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 80117A84 001149C4  EF 39 06 72 */	fmuls f25, f25, f25
/* 80117A88 001149C8  38 60 00 01 */	li r3, 1
/* 80117A8C 001149CC  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80117A90 001149D0  38 80 00 00 */	li r4, 0
/* 80117A94 001149D4  EC 00 00 32 */	fmuls f0, f0, f0
/* 80117A98 001149D8  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 80117A9C 001149DC  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 80117AA0 001149E0  40 81 00 30 */	ble .L_80117AD0
/* 80117AA4 001149E4  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 80117AA8 001149E8  7C 80 23 78 */	mr r0, r4
/* 80117AAC 001149EC  40 81 00 18 */	ble .L_80117AC4
/* 80117AB0 001149F0  FC 00 E2 10 */	fabs f0, f28
/* 80117AB4 001149F4  FC 00 00 18 */	frsp f0, f0
/* 80117AB8 001149F8  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 80117ABC 001149FC  40 80 00 08 */	bge .L_80117AC4
/* 80117AC0 00114A00  7C 60 1B 78 */	mr r0, r3
.L_80117AC4:
/* 80117AC4 00114A04  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80117AC8 00114A08  41 82 00 08 */	beq .L_80117AD0
/* 80117ACC 00114A0C  38 80 00 01 */	li r4, 1
.L_80117AD0:
/* 80117AD0 00114A10  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80117AD4 00114A14  40 82 00 34 */	bne .L_80117B08
/* 80117AD8 00114A18  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80117ADC 00114A1C  FC 40 FA 10 */	fabs f2, f31
/* 80117AE0 00114A20  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80117AE4 00114A24  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80117AE8 00114A28  FC 40 10 18 */	frsp f2, f2
/* 80117AEC 00114A2C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80117AF0 00114A30  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80117AF4 00114A34  4C 40 13 82 */	cror 2, 0, 2
/* 80117AF8 00114A38  7C 00 00 26 */	mfcr r0
/* 80117AFC 00114A3C  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 80117B00 00114A40  41 82 00 08 */	beq .L_80117B08
/* 80117B04 00114A44  38 60 00 00 */	li r3, 0
.L_80117B08:
/* 80117B08 00114A48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117B0C 00114A4C  41 82 00 4C */	beq .L_80117B58
/* 80117B10 00114A50  38 00 00 05 */	li r0, 5
/* 80117B14 00114A54  7F E3 FB 78 */	mr r3, r31
/* 80117B18 00114A58  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80117B1C 00114A5C  4B FE D7 85 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80117B20 00114A60  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117B24 00114A64  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80117B28 00114A68  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80117B2C 00114A6C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80117B30 00114A70  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80117B34 00114A74  2C 00 00 04 */	cmpwi r0, 4
/* 80117B38 00114A78  40 82 00 C0 */	bne .L_80117BF8
/* 80117B3C 00114A7C  7F E3 FB 78 */	mr r3, r31
/* 80117B40 00114A80  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 80117B44 00114A84  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117B48 00114A88  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80117B4C 00114A8C  7D 89 03 A6 */	mtctr r12
/* 80117B50 00114A90  4E 80 04 21 */	bctrl 
/* 80117B54 00114A94  48 00 00 A4 */	b .L_80117BF8
.L_80117B58:
/* 80117B58 00114A98  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117B5C 00114A9C  FC 40 FA 10 */	fabs f2, f31
/* 80117B60 00114AA0  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80117B64 00114AA4  C0 65 04 24 */	lfs f3, 0x424(r5)
/* 80117B68 00114AA8  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80117B6C 00114AAC  FC 40 10 18 */	frsp f2, f2
/* 80117B70 00114AB0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80117B74 00114AB4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80117B78 00114AB8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80117B7C 00114ABC  4C 40 13 82 */	cror 2, 0, 2
/* 80117B80 00114AC0  40 82 00 20 */	bne .L_80117BA0
/* 80117B84 00114AC4  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80117B88 00114AC8  7F E3 FB 78 */	mr r3, r31
/* 80117B8C 00114ACC  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80117B90 00114AD0  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80117B94 00114AD4  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80117B98 00114AD8  4B FF D8 69 */	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff
/* 80117B9C 00114ADC  48 00 00 5C */	b .L_80117BF8
.L_80117BA0:
/* 80117BA0 00114AE0  38 00 00 00 */	li r0, 0
/* 80117BA4 00114AE4  7F E3 FB 78 */	mr r3, r31
/* 80117BA8 00114AE8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80117BAC 00114AEC  4B FE D6 F5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80117BB0 00114AF0  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117BB4 00114AF4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80117BB8 00114AF8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80117BBC 00114AFC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80117BC0 00114B00  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80117BC4 00114B04  2C 00 00 04 */	cmpwi r0, 4
/* 80117BC8 00114B08  40 82 00 30 */	bne .L_80117BF8
/* 80117BCC 00114B0C  7F E3 FB 78 */	mr r3, r31
/* 80117BD0 00114B10  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 80117BD4 00114B14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117BD8 00114B18  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80117BDC 00114B1C  7D 89 03 A6 */	mtctr r12
/* 80117BE0 00114B20  4E 80 04 21 */	bctrl 
/* 80117BE4 00114B24  48 00 00 14 */	b .L_80117BF8
.L_80117BE8:
/* 80117BE8 00114B28  38 00 00 05 */	li r0, 5
/* 80117BEC 00114B2C  7F E3 FB 78 */	mr r3, r31
/* 80117BF0 00114B30  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80117BF4 00114B34  4B FE D6 AD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80117BF8:
/* 80117BF8 00114B38  7F E4 FB 78 */	mr r4, r31
/* 80117BFC 00114B3C  38 61 00 50 */	addi r3, r1, 0x50
/* 80117C00 00114B40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117C04 00114B44  C3 1F 01 98 */	lfs f24, 0x198(r31)
/* 80117C08 00114B48  81 8C 00 08 */	lwz r12, 8(r12)
/* 80117C0C 00114B4C  C3 3F 01 9C */	lfs f25, 0x19c(r31)
/* 80117C10 00114B50  C3 5F 01 A0 */	lfs f26, 0x1a0(r31)
/* 80117C14 00114B54  7D 89 03 A6 */	mtctr r12
/* 80117C18 00114B58  4E 80 04 21 */	bctrl 
/* 80117C1C 00114B5C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80117C20 00114B60  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80117C24 00114B64  EC 60 C8 28 */	fsubs f3, f0, f25
/* 80117C28 00114B68  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80117C2C 00114B6C  EC 42 C0 28 */	fsubs f2, f2, f24
/* 80117C30 00114B70  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117C34 00114B74  EC 21 D0 28 */	fsubs f1, f1, f26
/* 80117C38 00114B78  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80117C3C 00114B7C  EC 81 00 72 */	fmuls f4, f1, f1
/* 80117C40 00114B80  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80117C44 00114B84  EC 24 08 2A */	fadds f1, f4, f1
/* 80117C48 00114B88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117C4C 00114B8C  40 81 00 14 */	ble .L_80117C60
/* 80117C50 00114B90  40 81 00 14 */	ble .L_80117C64
/* 80117C54 00114B94  FC 00 08 34 */	frsqrte f0, f1
/* 80117C58 00114B98  EC 20 00 72 */	fmuls f1, f0, f1
/* 80117C5C 00114B9C  48 00 00 08 */	b .L_80117C64
.L_80117C60:
/* 80117C60 00114BA0  FC 20 00 90 */	fmr f1, f0
.L_80117C64:
/* 80117C64 00114BA4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117C68 00114BA8  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 80117C6C 00114BAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117C70 00114BB0  40 81 00 48 */	ble .L_80117CB8
/* 80117C74 00114BB4  38 00 00 05 */	li r0, 5
/* 80117C78 00114BB8  7F E3 FB 78 */	mr r3, r31
/* 80117C7C 00114BBC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80117C80 00114BC0  4B FE D6 21 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80117C84 00114BC4  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117C88 00114BC8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80117C8C 00114BCC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80117C90 00114BD0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80117C94 00114BD4  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80117C98 00114BD8  2C 00 00 04 */	cmpwi r0, 4
/* 80117C9C 00114BDC  40 82 00 1C */	bne .L_80117CB8
/* 80117CA0 00114BE0  7F E3 FB 78 */	mr r3, r31
/* 80117CA4 00114BE4  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 80117CA8 00114BE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117CAC 00114BEC  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80117CB0 00114BF0  7D 89 03 A6 */	mtctr r12
/* 80117CB4 00114BF4  4E 80 04 21 */	bctrl 
.L_80117CB8:
/* 80117CB8 00114BF8  7F E3 FB 78 */	mr r3, r31
/* 80117CBC 00114BFC  38 80 00 01 */	li r4, 1
/* 80117CC0 00114C00  4B FF C9 99 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80117CC4 00114C04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117CC8 00114C08  41 82 00 64 */	beq .L_80117D2C
/* 80117CCC 00114C0C  7F C3 F3 78 */	mr r3, r30
/* 80117CD0 00114C10  7F E4 FB 78 */	mr r4, r31
/* 80117CD4 00114C14  81 9E 00 00 */	lwz r12, 0(r30)
/* 80117CD8 00114C18  38 A0 00 02 */	li r5, 2
/* 80117CDC 00114C1C  38 C0 00 00 */	li r6, 0
/* 80117CE0 00114C20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80117CE4 00114C24  7D 89 03 A6 */	mtctr r12
/* 80117CE8 00114C28  4E 80 04 21 */	bctrl 
/* 80117CEC 00114C2C  48 00 00 40 */	b .L_80117D2C
.L_80117CF0:
/* 80117CF0 00114C30  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80117CF4 00114C34  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80117CF8 00114C38  28 00 00 00 */	cmplwi r0, 0
/* 80117CFC 00114C3C  41 82 00 30 */	beq .L_80117D2C
/* 80117D00 00114C40  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80117D04 00114C44  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80117D08 00114C48  40 82 00 24 */	bne .L_80117D2C
/* 80117D0C 00114C4C  7F C3 F3 78 */	mr r3, r30
/* 80117D10 00114C50  7F E4 FB 78 */	mr r4, r31
/* 80117D14 00114C54  81 9E 00 00 */	lwz r12, 0(r30)
/* 80117D18 00114C58  38 C0 00 00 */	li r6, 0
/* 80117D1C 00114C5C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 80117D20 00114C60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80117D24 00114C64  7D 89 03 A6 */	mtctr r12
/* 80117D28 00114C68  4E 80 04 21 */	bctrl 
.L_80117D2C:
/* 80117D2C 00114C6C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80117D30 00114C70  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117D34 00114C74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117D38 00114C78  4C 40 13 82 */	cror 2, 0, 2
/* 80117D3C 00114C7C  40 82 00 24 */	bne .L_80117D60
/* 80117D40 00114C80  7F C3 F3 78 */	mr r3, r30
/* 80117D44 00114C84  7F E4 FB 78 */	mr r4, r31
/* 80117D48 00114C88  81 9E 00 00 */	lwz r12, 0(r30)
/* 80117D4C 00114C8C  38 A0 00 01 */	li r5, 1
/* 80117D50 00114C90  38 C0 00 00 */	li r6, 0
/* 80117D54 00114C94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80117D58 00114C98  7D 89 03 A6 */	mtctr r12
/* 80117D5C 00114C9C  4E 80 04 21 */	bctrl 
.L_80117D60:
/* 80117D60 00114CA0  E3 E1 01 68 */	psq_l f31, 360(r1), 0, qr0
/* 80117D64 00114CA4  CB E1 01 60 */	lfd f31, 0x160(r1)
/* 80117D68 00114CA8  E3 C1 01 58 */	psq_l f30, 344(r1), 0, qr0
/* 80117D6C 00114CAC  CB C1 01 50 */	lfd f30, 0x150(r1)
/* 80117D70 00114CB0  E3 A1 01 48 */	psq_l f29, 328(r1), 0, qr0
/* 80117D74 00114CB4  CB A1 01 40 */	lfd f29, 0x140(r1)
/* 80117D78 00114CB8  E3 81 01 38 */	psq_l f28, 312(r1), 0, qr0
/* 80117D7C 00114CBC  CB 81 01 30 */	lfd f28, 0x130(r1)
/* 80117D80 00114CC0  E3 61 01 28 */	psq_l f27, 296(r1), 0, qr0
/* 80117D84 00114CC4  CB 61 01 20 */	lfd f27, 0x120(r1)
/* 80117D88 00114CC8  E3 41 01 18 */	psq_l f26, 280(r1), 0, qr0
/* 80117D8C 00114CCC  CB 41 01 10 */	lfd f26, 0x110(r1)
/* 80117D90 00114CD0  E3 21 01 08 */	psq_l f25, 264(r1), 0, qr0
/* 80117D94 00114CD4  CB 21 01 00 */	lfd f25, 0x100(r1)
/* 80117D98 00114CD8  E3 01 00 F8 */	psq_l f24, 248(r1), 0, qr0
/* 80117D9C 00114CDC  CB 01 00 F0 */	lfd f24, 0xf0(r1)
/* 80117DA0 00114CE0  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 80117DA4 00114CE4  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 80117DA8 00114CE8  83 A1 00 E4 */	lwz r29, 0xe4(r1)
/* 80117DAC 00114CEC  80 01 01 74 */	lwz r0, 0x174(r1)
/* 80117DB0 00114CF0  83 81 00 E0 */	lwz r28, 0xe0(r1)
/* 80117DB4 00114CF4  7C 08 03 A6 */	mtlr r0
/* 80117DB8 00114CF8  38 21 01 70 */	addi r1, r1, 0x170
/* 80117DBC 00114CFC  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBase, global
/* 80117DC0 00114D00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80117DC4 00114D04  7C 08 02 A6 */	mflr r0
/* 80117DC8 00114D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80117DCC 00114D0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80117DD0 00114D10  7C 9F 23 78 */	mr r31, r4
/* 80117DD4 00114D14  7F E3 FB 78 */	mr r3, r31
/* 80117DD8 00114D18  4B FE 9B A5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80117DDC 00114D1C  7F E3 FB 78 */	mr r3, r31
/* 80117DE0 00114D20  4B FE F5 BD */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 80117DE4 00114D24  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117DE8 00114D28  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80117DEC 00114D2C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80117DF0 00114D30  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80117DF4 00114D34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80117DF8 00114D38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80117DFC 00114D3C  7C 08 03 A6 */	mtlr r0
/* 80117E00 00114D40  38 21 00 10 */	addi r1, r1, 0x10
/* 80117E04 00114D44  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase9StateWalkFPQ24Game9EnemyBase

.fn __ct__Q34Game10ChappyBase11StateAttackFi, global
/* 80117E08 00114D48  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80117E0C 00114D4C  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase5State@ha
/* 80117E10 00114D50  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80117E14 00114D54  3C E0 80 4B */	lis r7, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 80117E18 00114D58  90 03 00 00 */	stw r0, 0(r3)
/* 80117E1C 00114D5C  3C C0 80 48 */	lis r6, lbl_8047AEA8@ha
/* 80117E20 00114D60  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase11StateAttack@ha
/* 80117E24 00114D64  38 00 00 00 */	li r0, 0
/* 80117E28 00114D68  90 83 00 04 */	stw r4, 4(r3)
/* 80117E2C 00114D6C  39 08 C1 A0 */	addi r8, r8, __vt__Q34Game10ChappyBase5State@l
/* 80117E30 00114D70  38 E7 C1 7C */	addi r7, r7, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 80117E34 00114D74  38 C6 AE A8 */	addi r6, r6, lbl_8047AEA8@l
/* 80117E38 00114D78  90 03 00 08 */	stw r0, 8(r3)
/* 80117E3C 00114D7C  38 85 C0 A4 */	addi r4, r5, __vt__Q34Game10ChappyBase11StateAttack@l
/* 80117E40 00114D80  38 02 97 94 */	addi r0, r2, lbl_80517AF4@sda21
/* 80117E44 00114D84  91 03 00 00 */	stw r8, 0(r3)
/* 80117E48 00114D88  90 E3 00 00 */	stw r7, 0(r3)
/* 80117E4C 00114D8C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80117E50 00114D90  90 83 00 00 */	stw r4, 0(r3)
/* 80117E54 00114D94  90 03 00 0C */	stw r0, 0xc(r3)
/* 80117E58 00114D98  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase11StateAttackFi

.fn init__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80117E5C 00114D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80117E60 00114DA0  7C 08 02 A6 */	mflr r0
/* 80117E64 00114DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80117E68 00114DA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80117E6C 00114DAC  7C 9F 23 78 */	mr r31, r4
/* 80117E70 00114DB0  7F E3 FB 78 */	mr r3, r31
/* 80117E74 00114DB4  4B FE 9B 59 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80117E78 00114DB8  7F E3 FB 78 */	mr r3, r31
/* 80117E7C 00114DBC  38 80 00 00 */	li r4, 0
/* 80117E80 00114DC0  38 A0 00 00 */	li r5, 0
/* 80117E84 00114DC4  4B FE D1 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80117E88 00114DC8  7F E3 FB 78 */	mr r3, r31
/* 80117E8C 00114DCC  4B FE F5 11 */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 80117E90 00114DD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80117E94 00114DD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80117E98 00114DD8  7C 08 03 A6 */	mtlr r0
/* 80117E9C 00114DDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80117EA0 00114DE0  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase, global
/* 80117EA4 00114DE4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80117EA8 00114DE8  7C 08 02 A6 */	mflr r0
/* 80117EAC 00114DEC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80117EB0 00114DF0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80117EB4 00114DF4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80117EB8 00114DF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80117EBC 00114DFC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80117EC0 00114E00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80117EC4 00114E04  7C 9F 23 78 */	mr r31, r4
/* 80117EC8 00114E08  7C 7E 1B 78 */	mr r30, r3
/* 80117ECC 00114E0C  7F E3 FB 78 */	mr r3, r31
/* 80117ED0 00114E10  81 9F 00 00 */	lwz r12, 0(r31)
/* 80117ED4 00114E14  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80117ED8 00114E18  7D 89 03 A6 */	mtctr r12
/* 80117EDC 00114E1C  4E 80 04 21 */	bctrl 
/* 80117EE0 00114E20  2C 03 00 2A */	cmpwi r3, 0x2a
/* 80117EE4 00114E24  41 82 00 08 */	beq .L_80117EEC
/* 80117EE8 00114E28  48 00 00 74 */	b .L_80117F5C
.L_80117EEC:
/* 80117EEC 00114E2C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117EF0 00114E30  7F E3 FB 78 */	mr r3, r31
/* 80117EF4 00114E34  38 80 00 00 */	li r4, 0
/* 80117EF8 00114E38  C3 E5 08 70 */	lfs f31, 0x870(r5)
/* 80117EFC 00114E3C  FC 20 F8 90 */	fmr f1, f31
/* 80117F00 00114E40  4B FF CB C1 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80117F04 00114E44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117F08 00114E48  41 82 00 0C */	beq .L_80117F14
/* 80117F0C 00114E4C  38 60 00 01 */	li r3, 1
/* 80117F10 00114E50  48 00 00 28 */	b .L_80117F38
.L_80117F14:
/* 80117F14 00114E54  FC 20 F8 90 */	fmr f1, f31
/* 80117F18 00114E58  7F E3 FB 78 */	mr r3, r31
/* 80117F1C 00114E5C  38 80 00 00 */	li r4, 0
/* 80117F20 00114E60  4B FF C8 15 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80117F24 00114E64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117F28 00114E68  41 82 00 0C */	beq .L_80117F34
/* 80117F2C 00114E6C  38 60 00 01 */	li r3, 1
/* 80117F30 00114E70  48 00 00 08 */	b .L_80117F38
.L_80117F34:
/* 80117F34 00114E74  38 60 00 00 */	li r3, 0
.L_80117F38:
/* 80117F38 00114E78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117F3C 00114E7C  40 82 00 8C */	bne .L_80117FC8
/* 80117F40 00114E80  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117F44 00114E84  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80117F48 00114E88  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80117F4C 00114E8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117F50 00114E90  7C 00 00 26 */	mfcr r0
/* 80117F54 00114E94  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80117F58 00114E98  48 00 00 70 */	b .L_80117FC8
.L_80117F5C:
/* 80117F5C 00114E9C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80117F60 00114EA0  7F E3 FB 78 */	mr r3, r31
/* 80117F64 00114EA4  38 80 00 00 */	li r4, 0
/* 80117F68 00114EA8  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 80117F6C 00114EAC  FC 20 F8 90 */	fmr f1, f31
/* 80117F70 00114EB0  4B FF CB 51 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80117F74 00114EB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117F78 00114EB8  41 82 00 0C */	beq .L_80117F84
/* 80117F7C 00114EBC  38 60 00 01 */	li r3, 1
/* 80117F80 00114EC0  48 00 00 28 */	b .L_80117FA8
.L_80117F84:
/* 80117F84 00114EC4  FC 20 F8 90 */	fmr f1, f31
/* 80117F88 00114EC8  7F E3 FB 78 */	mr r3, r31
/* 80117F8C 00114ECC  38 80 00 00 */	li r4, 0
/* 80117F90 00114ED0  4B FF C7 A5 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80117F94 00114ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117F98 00114ED8  41 82 00 0C */	beq .L_80117FA4
/* 80117F9C 00114EDC  38 60 00 01 */	li r3, 1
/* 80117FA0 00114EE0  48 00 00 08 */	b .L_80117FA8
.L_80117FA4:
/* 80117FA4 00114EE4  38 60 00 00 */	li r3, 0
.L_80117FA8:
/* 80117FA8 00114EE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117FAC 00114EEC  40 82 00 1C */	bne .L_80117FC8
/* 80117FB0 00114EF0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117FB4 00114EF4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80117FB8 00114EF8  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80117FBC 00114EFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80117FC0 00114F00  7C 00 00 26 */	mfcr r0
/* 80117FC4 00114F04  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80117FC8:
/* 80117FC8 00114F08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80117FCC 00114F0C  41 82 00 0C */	beq .L_80117FD8
/* 80117FD0 00114F10  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80117FD4 00114F14  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80117FD8:
/* 80117FD8 00114F18  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80117FDC 00114F1C  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 80117FE0 00114F20  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80117FE4 00114F24  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80117FE8 00114F28  40 80 00 24 */	bge .L_8011800C
/* 80117FEC 00114F2C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80117FF0 00114F30  C0 02 97 44 */	lfs f0, lbl_80517AA4@sda21(r2)
/* 80117FF4 00114F34  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80117FF8 00114F38  EC 22 08 2A */	fadds f1, f2, f1
/* 80117FFC 00114F3C  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80118000 00114F40  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80118004 00114F44  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80118008 00114F48  48 00 00 18 */	b .L_80118020
.L_8011800C:
/* 8011800C 00114F4C  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 80118010 00114F50  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80118014 00114F54  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118018 00114F58  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 8011801C 00114F5C  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_80118020:
/* 80118020 00114F60  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80118024 00114F64  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80118028 00114F68  28 00 00 00 */	cmplwi r0, 0
/* 8011802C 00114F6C  41 82 01 5C */	beq .L_80118188
/* 80118030 00114F70  7F E3 FB 78 */	mr r3, r31
/* 80118034 00114F74  4B FE F3 15 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80118038 00114F78  2C 03 00 08 */	cmpwi r3, 8
/* 8011803C 00114F7C  41 82 00 D4 */	beq .L_80118110
/* 80118040 00114F80  40 80 01 3C */	bge .L_8011817C
/* 80118044 00114F84  2C 03 00 00 */	cmpwi r3, 0
/* 80118048 00114F88  41 82 00 08 */	beq .L_80118050
/* 8011804C 00114F8C  48 00 01 30 */	b .L_8011817C
.L_80118050:
/* 80118050 00114F90  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80118054 00114F94  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80118058 00114F98  2C 00 00 04 */	cmpwi r0, 4
/* 8011805C 00114F9C  41 82 00 A4 */	beq .L_80118100
/* 80118060 00114FA0  40 80 00 14 */	bge .L_80118074
/* 80118064 00114FA4  2C 00 00 02 */	cmpwi r0, 2
/* 80118068 00114FA8  41 82 00 18 */	beq .L_80118080
/* 8011806C 00114FAC  40 80 00 7C */	bge .L_801180E8
/* 80118070 00114FB0  48 00 01 18 */	b .L_80118188
.L_80118074:
/* 80118074 00114FB4  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80118078 00114FB8  41 82 00 88 */	beq .L_80118100
/* 8011807C 00114FBC  48 00 01 0C */	b .L_80118188
.L_80118080:
/* 80118080 00114FC0  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 80118084 00114FC4  7F E3 FB 78 */	mr r3, r31
/* 80118088 00114FC8  38 80 00 00 */	li r4, 0
/* 8011808C 00114FCC  38 A0 00 00 */	li r5, 0
/* 80118090 00114FD0  C0 26 05 B4 */	lfs f1, 0x5b4(r6)
/* 80118094 00114FD4  C0 46 05 DC */	lfs f2, 0x5dc(r6)
/* 80118098 00114FD8  C0 66 06 04 */	lfs f3, 0x604(r6)
/* 8011809C 00114FDC  4B FF C1 C5 */	bl "attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
/* 801180A0 00114FE0  7C 7D 1B 78 */	mr r29, r3
/* 801180A4 00114FE4  7F E3 FB 78 */	mr r3, r31
/* 801180A8 00114FE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801180AC 00114FEC  81 8C 03 10 */	lwz r12, 0x310(r12)
/* 801180B0 00114FF0  7D 89 03 A6 */	mtctr r12
/* 801180B4 00114FF4  4E 80 04 21 */	bctrl 
/* 801180B8 00114FF8  7F BD 1A 15 */	add. r29, r29, r3
/* 801180BC 00114FFC  40 82 00 14 */	bne .L_801180D0
/* 801180C0 00115000  7F E3 FB 78 */	mr r3, r31
/* 801180C4 00115004  38 80 00 08 */	li r4, 8
/* 801180C8 00115008  38 A0 00 00 */	li r5, 0
/* 801180CC 0011500C  4B FE CF 39 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_801180D0:
/* 801180D0 00115010  7F E3 FB 78 */	mr r3, r31
/* 801180D4 00115014  81 9F 00 00 */	lwz r12, 0(r31)
/* 801180D8 00115018  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 801180DC 0011501C  7D 89 03 A6 */	mtctr r12
/* 801180E0 00115020  4E 80 04 21 */	bctrl 
/* 801180E4 00115024  48 00 00 A4 */	b .L_80118188
.L_801180E8:
/* 801180E8 00115028  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801180EC 0011502C  7F E3 FB 78 */	mr r3, r31
/* 801180F0 00115030  38 80 00 00 */	li r4, 0
/* 801180F4 00115034  C0 25 08 48 */	lfs f1, 0x848(r5)
/* 801180F8 00115038  4B FF BD 8D */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 801180FC 0011503C  48 00 00 8C */	b .L_80118188
.L_80118100:
/* 80118100 00115040  7F C3 F3 78 */	mr r3, r30
/* 80118104 00115044  7F E4 FB 78 */	mr r4, r31
/* 80118108 00115048  48 00 00 D9 */	bl transitState__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase
/* 8011810C 0011504C  48 00 00 7C */	b .L_80118188
.L_80118110:
/* 80118110 00115050  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80118114 00115054  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80118118 00115058  2C 00 00 03 */	cmpwi r0, 3
/* 8011811C 0011505C  41 82 00 38 */	beq .L_80118154
/* 80118120 00115060  40 80 00 10 */	bge .L_80118130
/* 80118124 00115064  2C 00 00 02 */	cmpwi r0, 2
/* 80118128 00115068  40 80 00 14 */	bge .L_8011813C
/* 8011812C 0011506C  48 00 00 5C */	b .L_80118188
.L_80118130:
/* 80118130 00115070  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80118134 00115074  41 82 00 38 */	beq .L_8011816C
/* 80118138 00115078  48 00 00 50 */	b .L_80118188
.L_8011813C:
/* 8011813C 0011507C  7F E3 FB 78 */	mr r3, r31
/* 80118140 00115080  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118144 00115084  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 80118148 00115088  7D 89 03 A6 */	mtctr r12
/* 8011814C 0011508C  4E 80 04 21 */	bctrl 
/* 80118150 00115090  48 00 00 38 */	b .L_80118188
.L_80118154:
/* 80118154 00115094  7F E3 FB 78 */	mr r3, r31
/* 80118158 00115098  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011815C 0011509C  81 8C 03 30 */	lwz r12, 0x330(r12)
/* 80118160 001150A0  7D 89 03 A6 */	mtctr r12
/* 80118164 001150A4  4E 80 04 21 */	bctrl 
/* 80118168 001150A8  48 00 00 20 */	b .L_80118188
.L_8011816C:
/* 8011816C 001150AC  7F C3 F3 78 */	mr r3, r30
/* 80118170 001150B0  7F E4 FB 78 */	mr r4, r31
/* 80118174 001150B4  48 00 00 6D */	bl transitState__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase
/* 80118178 001150B8  48 00 00 10 */	b .L_80118188
.L_8011817C:
/* 8011817C 001150BC  7F C3 F3 78 */	mr r3, r30
/* 80118180 001150C0  7F E4 FB 78 */	mr r4, r31
/* 80118184 001150C4  48 00 00 5D */	bl transitState__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase
.L_80118188:
/* 80118188 001150C8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8011818C 001150CC  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80118190 001150D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80118194 001150D4  4C 40 13 82 */	cror 2, 0, 2
/* 80118198 001150D8  40 82 00 24 */	bne .L_801181BC
/* 8011819C 001150DC  7F C3 F3 78 */	mr r3, r30
/* 801181A0 001150E0  7F E4 FB 78 */	mr r4, r31
/* 801181A4 001150E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801181A8 001150E8  38 A0 00 01 */	li r5, 1
/* 801181AC 001150EC  38 C0 00 00 */	li r6, 0
/* 801181B0 001150F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801181B4 001150F4  7D 89 03 A6 */	mtctr r12
/* 801181B8 001150F8  4E 80 04 21 */	bctrl 
.L_801181BC:
/* 801181BC 001150FC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801181C0 00115100  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801181C4 00115104  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801181C8 00115108  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801181CC 0011510C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801181D0 00115110  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801181D4 00115114  7C 08 03 A6 */	mtlr r0
/* 801181D8 00115118  38 21 00 30 */	addi r1, r1, 0x30
/* 801181DC 0011511C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase

.fn transitState__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase, global
/* 801181E0 00115120  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801181E4 00115124  7C 08 02 A6 */	mflr r0
/* 801181E8 00115128  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801181EC 0011512C  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 801181F0 00115130  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 801181F4 00115134  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 801181F8 00115138  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 801181FC 0011513C  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80118200 00115140  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 80118204 00115144  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 80118208 00115148  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 8011820C 0011514C  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 80118210 00115150  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 80118214 00115154  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 80118218 00115158  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 8011821C 0011515C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80118220 00115160  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80118224 00115164  93 A1 00 84 */	stw r29, 0x84(r1)
/* 80118228 00115168  93 81 00 80 */	stw r28, 0x80(r1)
/* 8011822C 0011516C  7C 9D 23 78 */	mr r29, r4
/* 80118230 00115170  7C 7C 1B 78 */	mr r28, r3
/* 80118234 00115174  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 80118238 00115178  7F A3 EB 78 */	mr r3, r29
/* 8011823C 0011517C  C0 24 02 E0 */	lfs f1, 0x2e0(r4)
/* 80118240 00115180  38 80 00 00 */	li r4, 0
/* 80118244 00115184  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 80118248 00115188  38 A0 00 00 */	li r5, 0
/* 8011824C 0011518C  38 C0 00 00 */	li r6, 0
/* 80118250 00115190  4B FF AE 01 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80118254 00115194  28 03 00 00 */	cmplwi r3, 0
/* 80118258 00115198  41 82 02 08 */	beq .L_80118460
/* 8011825C 0011519C  90 7D 02 30 */	stw r3, 0x230(r29)
/* 80118260 001151A0  38 61 00 68 */	addi r3, r1, 0x68
/* 80118264 001151A4  80 9D 02 30 */	lwz r4, 0x230(r29)
/* 80118268 001151A8  81 84 00 00 */	lwz r12, 0(r4)
/* 8011826C 001151AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118270 001151B0  7D 89 03 A6 */	mtctr r12
/* 80118274 001151B4  4E 80 04 21 */	bctrl 
/* 80118278 001151B8  7F A4 EB 78 */	mr r4, r29
/* 8011827C 001151BC  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80118280 001151C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118284 001151C4  38 61 00 74 */	addi r3, r1, 0x74
/* 80118288 001151C8  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 8011828C 001151CC  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80118290 001151D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118294 001151D4  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80118298 001151D8  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8011829C 001151DC  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801182A0 001151E0  7D 89 03 A6 */	mtctr r12
/* 801182A4 001151E4  4E 80 04 21 */	bctrl 
/* 801182A8 001151E8  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 801182AC 001151EC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 801182B0 001151F0  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 801182B4 001151F4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 801182B8 001151F8  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 801182BC 001151FC  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801182C0 00115200  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 801182C4 00115204  EC 21 28 28 */	fsubs f1, f1, f5
/* 801182C8 00115208  EC 40 18 28 */	fsubs f2, f0, f3
/* 801182CC 0011520C  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 801182D0 00115210  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 801182D4 00115214  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 801182D8 00115218  4B F1 CE 31 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 801182DC 0011521C  48 2F 98 F5 */	bl roundAng__Ff
/* 801182E0 00115220  81 9D 00 00 */	lwz r12, 0(r29)
/* 801182E4 00115224  FF 40 08 90 */	fmr f26, f1
/* 801182E8 00115228  7F A3 EB 78 */	mr r3, r29
/* 801182EC 0011522C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801182F0 00115230  7D 89 03 A6 */	mtctr r12
/* 801182F4 00115234  4E 80 04 21 */	bctrl 
/* 801182F8 00115238  FC 40 08 90 */	fmr f2, f1
/* 801182FC 0011523C  FC 20 D0 90 */	fmr f1, f26
/* 80118300 00115240  48 2F 98 FD */	bl angDist__Fff
/* 80118304 00115244  7F A4 EB 78 */	mr r4, r29
/* 80118308 00115248  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 8011830C 0011524C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118310 00115250  FF C0 08 90 */	fmr f30, f1
/* 80118314 00115254  38 61 00 14 */	addi r3, r1, 0x14
/* 80118318 00115258  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 8011831C 0011525C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118320 00115260  3B C0 00 00 */	li r30, 0
/* 80118324 00115264  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 80118328 00115268  83 FD 02 30 */	lwz r31, 0x230(r29)
/* 8011832C 0011526C  7D 89 03 A6 */	mtctr r12
/* 80118330 00115270  4E 80 04 21 */	bctrl 
/* 80118334 00115274  7F E4 FB 78 */	mr r4, r31
/* 80118338 00115278  38 61 00 08 */	addi r3, r1, 8
/* 8011833C 0011527C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118340 00115280  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80118344 00115284  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118348 00115288  7D 89 03 A6 */	mtctr r12
/* 8011834C 0011528C  4E 80 04 21 */	bctrl 
/* 80118350 00115290  7F A4 EB 78 */	mr r4, r29
/* 80118354 00115294  C0 01 00 08 */	lfs f0, 8(r1)
/* 80118358 00115298  81 9D 00 00 */	lwz r12, 0(r29)
/* 8011835C 0011529C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80118360 001152A0  EF 40 F8 28 */	fsubs f26, f0, f31
/* 80118364 001152A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118368 001152A8  7D 89 03 A6 */	mtctr r12
/* 8011836C 001152AC  4E 80 04 21 */	bctrl 
/* 80118370 001152B0  7F E4 FB 78 */	mr r4, r31
/* 80118374 001152B4  38 61 00 20 */	addi r3, r1, 0x20
/* 80118378 001152B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011837C 001152BC  C3 E1 00 30 */	lfs f31, 0x30(r1)
/* 80118380 001152C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118384 001152C4  7D 89 03 A6 */	mtctr r12
/* 80118388 001152C8  4E 80 04 21 */	bctrl 
/* 8011838C 001152CC  7F A4 EB 78 */	mr r4, r29
/* 80118390 001152D0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80118394 001152D4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118398 001152D8  38 61 00 44 */	addi r3, r1, 0x44
/* 8011839C 001152DC  EF 60 F8 28 */	fsubs f27, f0, f31
/* 801183A0 001152E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801183A4 001152E4  7D 89 03 A6 */	mtctr r12
/* 801183A8 001152E8  4E 80 04 21 */	bctrl 
/* 801183AC 001152EC  7F E4 FB 78 */	mr r4, r31
/* 801183B0 001152F0  38 61 00 38 */	addi r3, r1, 0x38
/* 801183B4 001152F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801183B8 001152F8  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 801183BC 001152FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801183C0 00115300  7D 89 03 A6 */	mtctr r12
/* 801183C4 00115304  4E 80 04 21 */	bctrl 
/* 801183C8 00115308  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 801183CC 0011530C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 801183D0 00115310  EC 1D 07 72 */	fmuls f0, f29, f29
/* 801183D4 00115314  EC 42 F8 28 */	fsubs f2, f2, f31
/* 801183D8 00115318  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 801183DC 0011531C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801183E0 00115320  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801183E4 00115324  40 80 00 2C */	bge .L_80118410
/* 801183E8 00115328  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 801183EC 0011532C  FC 40 F2 10 */	fabs f2, f30
/* 801183F0 00115330  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 801183F4 00115334  EC 00 07 32 */	fmuls f0, f0, f28
/* 801183F8 00115338  FC 40 10 18 */	frsp f2, f2
/* 801183FC 0011533C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80118400 00115340  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80118404 00115344  4C 40 13 82 */	cror 2, 0, 2
/* 80118408 00115348  40 82 00 08 */	bne .L_80118410
/* 8011840C 0011534C  3B C0 00 01 */	li r30, 1
.L_80118410:
/* 80118410 00115350  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80118414 00115354  41 82 00 28 */	beq .L_8011843C
/* 80118418 00115358  7F 83 E3 78 */	mr r3, r28
/* 8011841C 0011535C  7F A4 EB 78 */	mr r4, r29
/* 80118420 00115360  81 9C 00 00 */	lwz r12, 0(r28)
/* 80118424 00115364  38 A0 00 04 */	li r5, 4
/* 80118428 00115368  38 C0 00 00 */	li r6, 0
/* 8011842C 0011536C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80118430 00115370  7D 89 03 A6 */	mtctr r12
/* 80118434 00115374  4E 80 04 21 */	bctrl 
/* 80118438 00115378  48 00 00 48 */	b .L_80118480
.L_8011843C:
/* 8011843C 0011537C  7F 83 E3 78 */	mr r3, r28
/* 80118440 00115380  7F A4 EB 78 */	mr r4, r29
/* 80118444 00115384  81 9C 00 00 */	lwz r12, 0(r28)
/* 80118448 00115388  38 A0 00 00 */	li r5, 0
/* 8011844C 0011538C  38 C0 00 00 */	li r6, 0
/* 80118450 00115390  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80118454 00115394  7D 89 03 A6 */	mtctr r12
/* 80118458 00115398  4E 80 04 21 */	bctrl 
/* 8011845C 0011539C  48 00 00 24 */	b .L_80118480
.L_80118460:
/* 80118460 001153A0  7F 83 E3 78 */	mr r3, r28
/* 80118464 001153A4  7F A4 EB 78 */	mr r4, r29
/* 80118468 001153A8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8011846C 001153AC  38 A0 00 05 */	li r5, 5
/* 80118470 001153B0  38 C0 00 00 */	li r6, 0
/* 80118474 001153B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80118478 001153B8  7D 89 03 A6 */	mtctr r12
/* 8011847C 001153BC  4E 80 04 21 */	bctrl 
.L_80118480:
/* 80118480 001153C0  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80118484 001153C4  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80118488 001153C8  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8011848C 001153CC  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80118490 001153D0  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 80118494 001153D4  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80118498 001153D8  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 8011849C 001153DC  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 801184A0 001153E0  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 801184A4 001153E4  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 801184A8 001153E8  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 801184AC 001153EC  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 801184B0 001153F0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801184B4 001153F4  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801184B8 001153F8  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 801184BC 001153FC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801184C0 00115400  83 81 00 80 */	lwz r28, 0x80(r1)
/* 801184C4 00115404  7C 08 03 A6 */	mtlr r0
/* 801184C8 00115408  38 21 00 F0 */	addi r1, r1, 0xf0
/* 801184CC 0011540C  4E 80 00 20 */	blr 
.endfn transitState__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase, global
/* 801184D0 00115410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801184D4 00115414  7C 08 02 A6 */	mflr r0
/* 801184D8 00115418  7C 83 23 78 */	mr r3, r4
/* 801184DC 0011541C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801184E0 00115420  4B FE 94 9D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 801184E4 00115424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801184E8 00115428  7C 08 03 A6 */	mtlr r0
/* 801184EC 0011542C  38 21 00 10 */	addi r1, r1, 0x10
/* 801184F0 00115430  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBase

.fn doDirectDraw__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBaseR8Graphics, global
/* 801184F4 00115434  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10ChappyBase11StateAttackFPQ24Game9EnemyBaseR8Graphics

.fn __ct__Q34Game10ChappyBase10StateFlickFi, global
/* 801184F8 00115438  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 801184FC 0011543C  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase5State@ha
/* 80118500 00115440  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80118504 00115444  3C E0 80 4B */	lis r7, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 80118508 00115448  90 03 00 00 */	stw r0, 0(r3)
/* 8011850C 0011544C  3C C0 80 48 */	lis r6, lbl_8047AEA8@ha
/* 80118510 00115450  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase10StateFlick@ha
/* 80118514 00115454  38 00 00 00 */	li r0, 0
/* 80118518 00115458  90 83 00 04 */	stw r4, 4(r3)
/* 8011851C 0011545C  39 08 C1 A0 */	addi r8, r8, __vt__Q34Game10ChappyBase5State@l
/* 80118520 00115460  38 E7 C1 7C */	addi r7, r7, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 80118524 00115464  38 C6 AE A8 */	addi r6, r6, lbl_8047AEA8@l
/* 80118528 00115468  90 03 00 08 */	stw r0, 8(r3)
/* 8011852C 0011546C  38 85 C0 80 */	addi r4, r5, __vt__Q34Game10ChappyBase10StateFlick@l
/* 80118530 00115470  38 02 97 9C */	addi r0, r2, lbl_80517AFC@sda21
/* 80118534 00115474  91 03 00 00 */	stw r8, 0(r3)
/* 80118538 00115478  90 E3 00 00 */	stw r7, 0(r3)
/* 8011853C 0011547C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80118540 00115480  90 83 00 00 */	stw r4, 0(r3)
/* 80118544 00115484  90 03 00 0C */	stw r0, 0xc(r3)
/* 80118548 00115488  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase10StateFlickFi

.fn init__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8011854C 0011548C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80118550 00115490  7C 08 02 A6 */	mflr r0
/* 80118554 00115494  90 01 00 14 */	stw r0, 0x14(r1)
/* 80118558 00115498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011855C 0011549C  7C 9F 23 78 */	mr r31, r4
/* 80118560 001154A0  7F E3 FB 78 */	mr r3, r31
/* 80118564 001154A4  4B FE 94 69 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80118568 001154A8  7F E3 FB 78 */	mr r3, r31
/* 8011856C 001154AC  38 80 00 02 */	li r4, 2
/* 80118570 001154B0  38 A0 00 00 */	li r5, 0
/* 80118574 001154B4  4B FE CA 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80118578 001154B8  7F E3 FB 78 */	mr r3, r31
/* 8011857C 001154BC  C0 22 97 88 */	lfs f1, lbl_80517AE8@sda21(r2)
/* 80118580 001154C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118584 001154C4  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80118588 001154C8  7D 89 03 A6 */	mtctr r12
/* 8011858C 001154CC  4E 80 04 21 */	bctrl 
/* 80118590 001154D0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80118594 001154D4  7F E3 FB 78 */	mr r3, r31
/* 80118598 001154D8  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8011859C 001154DC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801185A0 001154E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801185A4 001154E4  81 8C 03 2C */	lwz r12, 0x32c(r12)
/* 801185A8 001154E8  7D 89 03 A6 */	mtctr r12
/* 801185AC 001154EC  4E 80 04 21 */	bctrl 
/* 801185B0 001154F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801185B4 001154F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801185B8 001154F8  7C 08 03 A6 */	mtlr r0
/* 801185BC 001154FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801185C0 00115500  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBase, global
/* 801185C4 00115504  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801185C8 00115508  7C 08 02 A6 */	mflr r0
/* 801185CC 0011550C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801185D0 00115510  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801185D4 00115514  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801185D8 00115518  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801185DC 0011551C  93 C1 00 08 */	stw r30, 8(r1)
/* 801185E0 00115520  7C 9F 23 78 */	mr r31, r4
/* 801185E4 00115524  7C 7E 1B 78 */	mr r30, r3
/* 801185E8 00115528  7F E3 FB 78 */	mr r3, r31
/* 801185EC 0011552C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801185F0 00115530  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801185F4 00115534  7D 89 03 A6 */	mtctr r12
/* 801185F8 00115538  4E 80 04 21 */	bctrl 
/* 801185FC 0011553C  2C 03 00 2A */	cmpwi r3, 0x2a
/* 80118600 00115540  41 82 00 08 */	beq .L_80118608
/* 80118604 00115544  48 00 00 74 */	b .L_80118678
.L_80118608:
/* 80118608 00115548  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8011860C 0011554C  7F E3 FB 78 */	mr r3, r31
/* 80118610 00115550  38 80 00 00 */	li r4, 0
/* 80118614 00115554  C3 E5 08 70 */	lfs f31, 0x870(r5)
/* 80118618 00115558  FC 20 F8 90 */	fmr f1, f31
/* 8011861C 0011555C  4B FF C4 A5 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80118620 00115560  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118624 00115564  41 82 00 0C */	beq .L_80118630
/* 80118628 00115568  38 60 00 01 */	li r3, 1
/* 8011862C 0011556C  48 00 00 28 */	b .L_80118654
.L_80118630:
/* 80118630 00115570  FC 20 F8 90 */	fmr f1, f31
/* 80118634 00115574  7F E3 FB 78 */	mr r3, r31
/* 80118638 00115578  38 80 00 00 */	li r4, 0
/* 8011863C 0011557C  4B FF C0 F9 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80118640 00115580  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118644 00115584  41 82 00 0C */	beq .L_80118650
/* 80118648 00115588  38 60 00 01 */	li r3, 1
/* 8011864C 0011558C  48 00 00 08 */	b .L_80118654
.L_80118650:
/* 80118650 00115590  38 60 00 00 */	li r3, 0
.L_80118654:
/* 80118654 00115594  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118658 00115598  40 82 00 8C */	bne .L_801186E4
/* 8011865C 0011559C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118660 001155A0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80118664 001155A4  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80118668 001155A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011866C 001155AC  7C 00 00 26 */	mfcr r0
/* 80118670 001155B0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80118674 001155B4  48 00 00 70 */	b .L_801186E4
.L_80118678:
/* 80118678 001155B8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8011867C 001155BC  7F E3 FB 78 */	mr r3, r31
/* 80118680 001155C0  38 80 00 00 */	li r4, 0
/* 80118684 001155C4  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 80118688 001155C8  FC 20 F8 90 */	fmr f1, f31
/* 8011868C 001155CC  4B FF C4 35 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80118690 001155D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118694 001155D4  41 82 00 0C */	beq .L_801186A0
/* 80118698 001155D8  38 60 00 01 */	li r3, 1
/* 8011869C 001155DC  48 00 00 28 */	b .L_801186C4
.L_801186A0:
/* 801186A0 001155E0  FC 20 F8 90 */	fmr f1, f31
/* 801186A4 001155E4  7F E3 FB 78 */	mr r3, r31
/* 801186A8 001155E8  38 80 00 00 */	li r4, 0
/* 801186AC 001155EC  4B FF C0 89 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 801186B0 001155F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801186B4 001155F4  41 82 00 0C */	beq .L_801186C0
/* 801186B8 001155F8  38 60 00 01 */	li r3, 1
/* 801186BC 001155FC  48 00 00 08 */	b .L_801186C4
.L_801186C0:
/* 801186C0 00115600  38 60 00 00 */	li r3, 0
.L_801186C4:
/* 801186C4 00115604  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801186C8 00115608  40 82 00 1C */	bne .L_801186E4
/* 801186CC 0011560C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801186D0 00115610  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801186D4 00115614  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 801186D8 00115618  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801186DC 0011561C  7C 00 00 26 */	mfcr r0
/* 801186E0 00115620  54 03 0F FE */	srwi r3, r0, 0x1f
.L_801186E4:
/* 801186E4 00115624  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801186E8 00115628  41 82 00 0C */	beq .L_801186F4
/* 801186EC 0011562C  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 801186F0 00115630  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_801186F4:
/* 801186F4 00115634  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801186F8 00115638  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 801186FC 0011563C  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80118700 00115640  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80118704 00115644  40 80 00 24 */	bge .L_80118728
/* 80118708 00115648  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8011870C 0011564C  C0 02 97 44 */	lfs f0, lbl_80517AA4@sda21(r2)
/* 80118710 00115650  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80118714 00115654  EC 22 08 2A */	fadds f1, f2, f1
/* 80118718 00115658  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 8011871C 0011565C  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80118720 00115660  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80118724 00115664  48 00 00 18 */	b .L_8011873C
.L_80118728:
/* 80118728 00115668  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 8011872C 0011566C  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80118730 00115670  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118734 00115674  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 80118738 00115678  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_8011873C:
/* 8011873C 0011567C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80118740 00115680  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80118744 00115684  28 00 00 00 */	cmplwi r0, 0
/* 80118748 00115688  41 82 00 64 */	beq .L_801187AC
/* 8011874C 0011568C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80118750 00115690  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80118754 00115694  41 82 00 34 */	beq .L_80118788
/* 80118758 00115698  40 80 00 54 */	bge .L_801187AC
/* 8011875C 0011569C  2C 00 00 02 */	cmpwi r0, 2
/* 80118760 001156A0  41 82 00 08 */	beq .L_80118768
/* 80118764 001156A4  48 00 00 48 */	b .L_801187AC
.L_80118768:
/* 80118768 001156A8  7F E3 FB 78 */	mr r3, r31
/* 8011876C 001156AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118770 001156B0  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 80118774 001156B4  7D 89 03 A6 */	mtctr r12
/* 80118778 001156B8  4E 80 04 21 */	bctrl 
/* 8011877C 001156BC  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80118780 001156C0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80118784 001156C4  48 00 00 28 */	b .L_801187AC
.L_80118788:
/* 80118788 001156C8  7F C3 F3 78 */	mr r3, r30
/* 8011878C 001156CC  80 BE 00 08 */	lwz r5, 8(r30)
/* 80118790 001156D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80118794 001156D4  7F E4 FB 78 */	mr r4, r31
/* 80118798 001156D8  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 8011879C 001156DC  38 C0 00 00 */	li r6, 0
/* 801187A0 001156E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801187A4 001156E4  7D 89 03 A6 */	mtctr r12
/* 801187A8 001156E8  4E 80 04 21 */	bctrl 
.L_801187AC:
/* 801187AC 001156EC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801187B0 001156F0  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 801187B4 001156F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801187B8 001156F8  4C 40 13 82 */	cror 2, 0, 2
/* 801187BC 001156FC  40 82 00 24 */	bne .L_801187E0
/* 801187C0 00115700  7F C3 F3 78 */	mr r3, r30
/* 801187C4 00115704  7F E4 FB 78 */	mr r4, r31
/* 801187C8 00115708  81 9E 00 00 */	lwz r12, 0(r30)
/* 801187CC 0011570C  38 A0 00 01 */	li r5, 1
/* 801187D0 00115710  38 C0 00 00 */	li r6, 0
/* 801187D4 00115714  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801187D8 00115718  7D 89 03 A6 */	mtctr r12
/* 801187DC 0011571C  4E 80 04 21 */	bctrl 
.L_801187E0:
/* 801187E0 00115720  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801187E4 00115724  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801187E8 00115728  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801187EC 0011572C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801187F0 00115730  83 C1 00 08 */	lwz r30, 8(r1)
/* 801187F4 00115734  7C 08 03 A6 */	mtlr r0
/* 801187F8 00115738  38 21 00 20 */	addi r1, r1, 0x20
/* 801187FC 0011573C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBase, global
/* 80118800 00115740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80118804 00115744  7C 08 02 A6 */	mflr r0
/* 80118808 00115748  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011880C 0011574C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80118810 00115750  7C 9F 23 78 */	mr r31, r4
/* 80118814 00115754  7F E3 FB 78 */	mr r3, r31
/* 80118818 00115758  4B FE 91 65 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8011881C 0011575C  7F E3 FB 78 */	mr r3, r31
/* 80118820 00115760  C0 22 97 54 */	lfs f1, lbl_80517AB4@sda21(r2)
/* 80118824 00115764  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118828 00115768  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 8011882C 0011576C  7D 89 03 A6 */	mtctr r12
/* 80118830 00115770  4E 80 04 21 */	bctrl 
/* 80118834 00115774  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80118838 00115778  60 00 00 20 */	ori r0, r0, 0x20
/* 8011883C 0011577C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80118840 00115780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80118844 00115784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80118848 00115788  7C 08 03 A6 */	mtlr r0
/* 8011884C 0011578C  38 21 00 10 */	addi r1, r1, 0x10
/* 80118850 00115790  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase10StateFlickFPQ24Game9EnemyBase

.fn __ct__Q34Game10ChappyBase15StateTurnToHomeFi, global
/* 80118854 00115794  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80118858 00115798  3D 20 80 4B */	lis r9, __vt__Q34Game10ChappyBase5State@ha
/* 8011885C 0011579C  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80118860 001157A0  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 80118864 001157A4  90 03 00 00 */	stw r0, 0(r3)
/* 80118868 001157A8  3C E0 80 48 */	lis r7, lbl_8047AEA8@ha
/* 8011886C 001157AC  3C C0 80 4B */	lis r6, __vt__Q34Game10ChappyBase13StateTurnBase@ha
/* 80118870 001157B0  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase15StateTurnToHome@ha
/* 80118874 001157B4  90 83 00 04 */	stw r4, 4(r3)
/* 80118878 001157B8  39 40 00 00 */	li r10, 0
/* 8011887C 001157BC  3C 80 80 48 */	lis r4, lbl_8047AEBC@ha
/* 80118880 001157C0  38 09 C1 A0 */	addi r0, r9, __vt__Q34Game10ChappyBase5State@l
/* 80118884 001157C4  91 43 00 08 */	stw r10, 8(r3)
/* 80118888 001157C8  39 08 C1 7C */	addi r8, r8, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 8011888C 001157CC  38 E7 AE A8 */	addi r7, r7, lbl_8047AEA8@l
/* 80118890 001157D0  38 C6 C1 10 */	addi r6, r6, __vt__Q34Game10ChappyBase13StateTurnBase@l
/* 80118894 001157D4  90 03 00 00 */	stw r0, 0(r3)
/* 80118898 001157D8  38 A5 C0 5C */	addi r5, r5, __vt__Q34Game10ChappyBase15StateTurnToHome@l
/* 8011889C 001157DC  38 04 AE BC */	addi r0, r4, lbl_8047AEBC@l
/* 801188A0 001157E0  91 03 00 00 */	stw r8, 0(r3)
/* 801188A4 001157E4  90 E3 00 0C */	stw r7, 0xc(r3)
/* 801188A8 001157E8  90 C3 00 00 */	stw r6, 0(r3)
/* 801188AC 001157EC  90 A3 00 00 */	stw r5, 0(r3)
/* 801188B0 001157F0  90 03 00 0C */	stw r0, 0xc(r3)
/* 801188B4 001157F4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase15StateTurnToHomeFi

.fn init__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 801188B8 001157F8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801188BC 001157FC  7C 08 02 A6 */	mflr r0
/* 801188C0 00115800  90 01 00 54 */	stw r0, 0x54(r1)
/* 801188C4 00115804  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801188C8 00115808  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801188CC 0011580C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801188D0 00115810  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801188D4 00115814  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 801188D8 00115818  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 801188DC 0011581C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801188E0 00115820  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801188E4 00115824  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 801188E8 00115828  7C 9F 23 78 */	mr r31, r4
/* 801188EC 0011582C  7C 7E 1B 78 */	mr r30, r3
/* 801188F0 00115830  38 61 00 08 */	addi r3, r1, 8
/* 801188F4 00115834  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 801188F8 00115838  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 801188FC 0011583C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80118900 00115840  81 84 00 00 */	lwz r12, 0(r4)
/* 80118904 00115844  C3 E4 01 98 */	lfs f31, 0x198(r4)
/* 80118908 00115848  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011890C 0011584C  C3 C4 01 9C */	lfs f30, 0x19c(r4)
/* 80118910 00115850  C3 A4 01 A0 */	lfs f29, 0x1a0(r4)
/* 80118914 00115854  7D 89 03 A6 */	mtctr r12
/* 80118918 00115858  4E 80 04 21 */	bctrl 
/* 8011891C 0011585C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80118920 00115860  C0 41 00 08 */	lfs f2, 8(r1)
/* 80118924 00115864  EC 60 F0 28 */	fsubs f3, f0, f30
/* 80118928 00115868  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8011892C 0011586C  EC 42 F8 28 */	fsubs f2, f2, f31
/* 80118930 00115870  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80118934 00115874  EC 21 E8 28 */	fsubs f1, f1, f29
/* 80118938 00115878  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8011893C 0011587C  EC 81 00 72 */	fmuls f4, f1, f1
/* 80118940 00115880  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80118944 00115884  EC 24 08 2A */	fadds f1, f4, f1
/* 80118948 00115888  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011894C 0011588C  40 81 00 14 */	ble .L_80118960
/* 80118950 00115890  40 81 00 14 */	ble .L_80118964
/* 80118954 00115894  FC 00 08 34 */	frsqrte f0, f1
/* 80118958 00115898  EC 20 00 72 */	fmuls f1, f0, f1
/* 8011895C 0011589C  48 00 00 08 */	b .L_80118964
.L_80118960:
/* 80118960 001158A0  FC 20 00 90 */	fmr f1, f0
.L_80118964:
/* 80118964 001158A4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118968 001158A8  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8011896C 001158AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80118970 001158B0  40 80 00 28 */	bge .L_80118998
/* 80118974 001158B4  7F C3 F3 78 */	mr r3, r30
/* 80118978 001158B8  7F E4 FB 78 */	mr r4, r31
/* 8011897C 001158BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80118980 001158C0  38 A0 00 07 */	li r5, 7
/* 80118984 001158C4  38 C0 00 00 */	li r6, 0
/* 80118988 001158C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8011898C 001158CC  7D 89 03 A6 */	mtctr r12
/* 80118990 001158D0  4E 80 04 21 */	bctrl 
/* 80118994 001158D4  48 00 00 44 */	b .L_801189D8
.L_80118998:
/* 80118998 001158D8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8011899C 001158DC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801189A0 001158E0  41 82 00 28 */	beq .L_801189C8
/* 801189A4 001158E4  7F C3 F3 78 */	mr r3, r30
/* 801189A8 001158E8  7F E4 FB 78 */	mr r4, r31
/* 801189AC 001158EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801189B0 001158F0  38 A0 00 00 */	li r5, 0
/* 801189B4 001158F4  38 C0 00 00 */	li r6, 0
/* 801189B8 001158F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801189BC 001158FC  7D 89 03 A6 */	mtctr r12
/* 801189C0 00115900  4E 80 04 21 */	bctrl 
/* 801189C4 00115904  48 00 00 14 */	b .L_801189D8
.L_801189C8:
/* 801189C8 00115908  7F E3 FB 78 */	mr r3, r31
/* 801189CC 0011590C  38 80 00 06 */	li r4, 6
/* 801189D0 00115910  38 A0 00 00 */	li r5, 0
/* 801189D4 00115914  4B FE C6 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_801189D8:
/* 801189D8 00115918  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801189DC 0011591C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801189E0 00115920  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801189E4 00115924  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801189E8 00115928  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 801189EC 0011592C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 801189F0 00115930  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801189F4 00115934  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801189F8 00115938  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801189FC 0011593C  7C 08 03 A6 */	mtlr r0
/* 80118A00 00115940  38 21 00 50 */	addi r1, r1, 0x50
/* 80118A04 00115944  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBase, global
/* 80118A08 00115948  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80118A0C 0011594C  7C 08 02 A6 */	mflr r0
/* 80118A10 00115950  90 01 01 14 */	stw r0, 0x114(r1)
/* 80118A14 00115954  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80118A18 00115958  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80118A1C 0011595C  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80118A20 00115960  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80118A24 00115964  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80118A28 00115968  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80118A2C 0011596C  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80118A30 00115970  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80118A34 00115974  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80118A38 00115978  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80118A3C 0011597C  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80118A40 00115980  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80118A44 00115984  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80118A48 00115988  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80118A4C 0011598C  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80118A50 00115990  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 80118A54 00115994  7C 9F 23 78 */	mr r31, r4
/* 80118A58 00115998  7C 7E 1B 78 */	mr r30, r3
/* 80118A5C 0011599C  7F E3 FB 78 */	mr r3, r31
/* 80118A60 001159A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118A64 001159A4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80118A68 001159A8  7D 89 03 A6 */	mtctr r12
/* 80118A6C 001159AC  4E 80 04 21 */	bctrl 
/* 80118A70 001159B0  2C 03 00 2A */	cmpwi r3, 0x2a
/* 80118A74 001159B4  41 82 00 08 */	beq .L_80118A7C
/* 80118A78 001159B8  48 00 00 74 */	b .L_80118AEC
.L_80118A7C:
/* 80118A7C 001159BC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80118A80 001159C0  7F E3 FB 78 */	mr r3, r31
/* 80118A84 001159C4  38 80 00 00 */	li r4, 0
/* 80118A88 001159C8  C3 85 08 70 */	lfs f28, 0x870(r5)
/* 80118A8C 001159CC  FC 20 E0 90 */	fmr f1, f28
/* 80118A90 001159D0  4B FF C0 31 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80118A94 001159D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118A98 001159D8  41 82 00 0C */	beq .L_80118AA4
/* 80118A9C 001159DC  38 60 00 01 */	li r3, 1
/* 80118AA0 001159E0  48 00 00 28 */	b .L_80118AC8
.L_80118AA4:
/* 80118AA4 001159E4  FC 20 E0 90 */	fmr f1, f28
/* 80118AA8 001159E8  7F E3 FB 78 */	mr r3, r31
/* 80118AAC 001159EC  38 80 00 00 */	li r4, 0
/* 80118AB0 001159F0  4B FF BC 85 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80118AB4 001159F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118AB8 001159F8  41 82 00 0C */	beq .L_80118AC4
/* 80118ABC 001159FC  38 60 00 01 */	li r3, 1
/* 80118AC0 00115A00  48 00 00 08 */	b .L_80118AC8
.L_80118AC4:
/* 80118AC4 00115A04  38 60 00 00 */	li r3, 0
.L_80118AC8:
/* 80118AC8 00115A08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118ACC 00115A0C  40 82 00 8C */	bne .L_80118B58
/* 80118AD0 00115A10  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118AD4 00115A14  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80118AD8 00115A18  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80118ADC 00115A1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80118AE0 00115A20  7C 00 00 26 */	mfcr r0
/* 80118AE4 00115A24  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80118AE8 00115A28  48 00 00 70 */	b .L_80118B58
.L_80118AEC:
/* 80118AEC 00115A2C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80118AF0 00115A30  7F E3 FB 78 */	mr r3, r31
/* 80118AF4 00115A34  38 80 00 00 */	li r4, 0
/* 80118AF8 00115A38  C3 85 03 AC */	lfs f28, 0x3ac(r5)
/* 80118AFC 00115A3C  FC 20 E0 90 */	fmr f1, f28
/* 80118B00 00115A40  4B FF BF C1 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80118B04 00115A44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118B08 00115A48  41 82 00 0C */	beq .L_80118B14
/* 80118B0C 00115A4C  38 60 00 01 */	li r3, 1
/* 80118B10 00115A50  48 00 00 28 */	b .L_80118B38
.L_80118B14:
/* 80118B14 00115A54  FC 20 E0 90 */	fmr f1, f28
/* 80118B18 00115A58  7F E3 FB 78 */	mr r3, r31
/* 80118B1C 00115A5C  38 80 00 00 */	li r4, 0
/* 80118B20 00115A60  4B FF BC 15 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80118B24 00115A64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118B28 00115A68  41 82 00 0C */	beq .L_80118B34
/* 80118B2C 00115A6C  38 60 00 01 */	li r3, 1
/* 80118B30 00115A70  48 00 00 08 */	b .L_80118B38
.L_80118B34:
/* 80118B34 00115A74  38 60 00 00 */	li r3, 0
.L_80118B38:
/* 80118B38 00115A78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118B3C 00115A7C  40 82 00 1C */	bne .L_80118B58
/* 80118B40 00115A80  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118B44 00115A84  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80118B48 00115A88  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80118B4C 00115A8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80118B50 00115A90  7C 00 00 26 */	mfcr r0
/* 80118B54 00115A94  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80118B58:
/* 80118B58 00115A98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118B5C 00115A9C  41 82 00 0C */	beq .L_80118B68
/* 80118B60 00115AA0  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80118B64 00115AA4  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80118B68:
/* 80118B68 00115AA8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118B6C 00115AAC  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 80118B70 00115AB0  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80118B74 00115AB4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80118B78 00115AB8  40 80 00 24 */	bge .L_80118B9C
/* 80118B7C 00115ABC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80118B80 00115AC0  C0 02 97 44 */	lfs f0, lbl_80517AA4@sda21(r2)
/* 80118B84 00115AC4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80118B88 00115AC8  EC 22 08 2A */	fadds f1, f2, f1
/* 80118B8C 00115ACC  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80118B90 00115AD0  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80118B94 00115AD4  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 80118B98 00115AD8  48 00 00 18 */	b .L_80118BB0
.L_80118B9C:
/* 80118B9C 00115ADC  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 80118BA0 00115AE0  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80118BA4 00115AE4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80118BA8 00115AE8  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 80118BAC 00115AEC  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_80118BB0:
/* 80118BB0 00115AF0  7F E3 FB 78 */	mr r3, r31
/* 80118BB4 00115AF4  4B FE E7 95 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80118BB8 00115AF8  2C 03 00 06 */	cmpwi r3, 6
/* 80118BBC 00115AFC  40 82 00 64 */	bne .L_80118C20
/* 80118BC0 00115B00  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80118BC4 00115B04  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80118BC8 00115B08  28 00 00 00 */	cmplwi r0, 0
/* 80118BCC 00115B0C  41 82 04 64 */	beq .L_80119030
/* 80118BD0 00115B10  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80118BD4 00115B14  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80118BD8 00115B18  40 82 04 58 */	bne .L_80119030
/* 80118BDC 00115B1C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80118BE0 00115B20  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80118BE4 00115B24  41 82 00 28 */	beq .L_80118C0C
/* 80118BE8 00115B28  7F C3 F3 78 */	mr r3, r30
/* 80118BEC 00115B2C  7F E4 FB 78 */	mr r4, r31
/* 80118BF0 00115B30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80118BF4 00115B34  38 A0 00 00 */	li r5, 0
/* 80118BF8 00115B38  38 C0 00 00 */	li r6, 0
/* 80118BFC 00115B3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80118C00 00115B40  7D 89 03 A6 */	mtctr r12
/* 80118C04 00115B44  4E 80 04 21 */	bctrl 
/* 80118C08 00115B48  48 00 04 28 */	b .L_80119030
.L_80118C0C:
/* 80118C0C 00115B4C  7F E3 FB 78 */	mr r3, r31
/* 80118C10 00115B50  38 80 00 07 */	li r4, 7
/* 80118C14 00115B54  38 A0 00 00 */	li r5, 0
/* 80118C18 00115B58  4B FE C3 ED */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80118C1C 00115B5C  48 00 04 14 */	b .L_80119030
.L_80118C20:
/* 80118C20 00115B60  7F E3 FB 78 */	mr r3, r31
/* 80118C24 00115B64  38 80 00 01 */	li r4, 1
/* 80118C28 00115B68  4B FF BA 31 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80118C2C 00115B6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80118C30 00115B70  41 82 00 18 */	beq .L_80118C48
/* 80118C34 00115B74  7F E3 FB 78 */	mr r3, r31
/* 80118C38 00115B78  4B FE C6 69 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80118C3C 00115B7C  38 00 00 02 */	li r0, 2
/* 80118C40 00115B80  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80118C44 00115B84  48 00 03 EC */	b .L_80119030
.L_80118C48:
/* 80118C48 00115B88  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80118C4C 00115B8C  7F E3 FB 78 */	mr r3, r31
/* 80118C50 00115B90  C3 5F 01 98 */	lfs f26, 0x198(r31)
/* 80118C54 00115B94  38 80 00 00 */	li r4, 0
/* 80118C58 00115B98  C3 7F 01 A0 */	lfs f27, 0x1a0(r31)
/* 80118C5C 00115B9C  C0 25 08 20 */	lfs f1, 0x820(r5)
/* 80118C60 00115BA0  4B FF C1 91 */	bl "getSurroundPikminNum__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80118C64 00115BA4  2C 03 00 0A */	cmpwi r3, 0xa
/* 80118C68 00115BA8  40 81 00 08 */	ble .L_80118C70
/* 80118C6C 00115BAC  38 60 00 0A */	li r3, 0xa
.L_80118C70:
/* 80118C70 00115BB0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80118C74 00115BB4  3C 00 43 30 */	lis r0, 0x4330
/* 80118C78 00115BB8  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80118C7C 00115BBC  7F E4 FB 78 */	mr r4, r31
/* 80118C80 00115BC0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80118C84 00115BC4  38 61 00 8C */	addi r3, r1, 0x8c
/* 80118C88 00115BC8  90 01 00 98 */	stw r0, 0x98(r1)
/* 80118C8C 00115BCC  C8 22 97 78 */	lfd f1, lbl_80517AD8@sda21(r2)
/* 80118C90 00115BD0  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 80118C94 00115BD4  C0 42 97 68 */	lfs f2, lbl_80517AC8@sda21(r2)
/* 80118C98 00115BD8  EC 00 08 28 */	fsubs f0, f0, f1
/* 80118C9C 00115BDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118CA0 00115BE0  C0 22 97 6C */	lfs f1, lbl_80517ACC@sda21(r2)
/* 80118CA4 00115BE4  C0 62 97 64 */	lfs f3, lbl_80517AC4@sda21(r2)
/* 80118CA8 00115BE8  EC 42 00 32 */	fmuls f2, f2, f0
/* 80118CAC 00115BEC  C0 05 03 34 */	lfs f0, 0x334(r5)
/* 80118CB0 00115BF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118CB4 00115BF4  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 80118CB8 00115BF8  EC 22 08 24 */	fdivs f1, f2, f1
/* 80118CBC 00115BFC  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 80118CC0 00115C00  EC 23 08 28 */	fsubs f1, f3, f1
/* 80118CC4 00115C04  EF E1 00 32 */	fmuls f31, f1, f0
/* 80118CC8 00115C08  7D 89 03 A6 */	mtctr r12
/* 80118CCC 00115C0C  4E 80 04 21 */	bctrl 
/* 80118CD0 00115C10  C0 81 00 8C */	lfs f4, 0x8c(r1)
/* 80118CD4 00115C14  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80118CD8 00115C18  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80118CDC 00115C1C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80118CE0 00115C20  C0 61 00 90 */	lfs f3, 0x90(r1)
/* 80118CE4 00115C24  EC 3A 20 28 */	fsubs f1, f26, f4
/* 80118CE8 00115C28  EC 5B 00 28 */	fsubs f2, f27, f0
/* 80118CEC 00115C2C  D0 81 00 80 */	stfs f4, 0x80(r1)
/* 80118CF0 00115C30  D0 61 00 84 */	stfs f3, 0x84(r1)
/* 80118CF4 00115C34  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 80118CF8 00115C38  4B F1 C4 11 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80118CFC 00115C3C  48 2F 8E D5 */	bl roundAng__Ff
/* 80118D00 00115C40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118D04 00115C44  FF 40 08 90 */	fmr f26, f1
/* 80118D08 00115C48  7F E3 FB 78 */	mr r3, r31
/* 80118D0C 00115C4C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80118D10 00115C50  7D 89 03 A6 */	mtctr r12
/* 80118D14 00115C54  4E 80 04 21 */	bctrl 
/* 80118D18 00115C58  FC 40 08 90 */	fmr f2, f1
/* 80118D1C 00115C5C  FC 20 D0 90 */	fmr f1, f26
/* 80118D20 00115C60  48 2F 8E DD */	bl angDist__Fff
/* 80118D24 00115C64  FF 80 08 90 */	fmr f28, f1
/* 80118D28 00115C68  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80118D2C 00115C6C  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80118D30 00115C70  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80118D34 00115C74  EF BC 07 72 */	fmuls f29, f28, f29
/* 80118D38 00115C78  EC 21 00 32 */	fmuls f1, f1, f0
/* 80118D3C 00115C7C  FC 00 EA 10 */	fabs f0, f29
/* 80118D40 00115C80  FC 00 00 18 */	frsp f0, f0
/* 80118D44 00115C84  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80118D48 00115C88  40 81 00 1C */	ble .L_80118D64
/* 80118D4C 00115C8C  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80118D50 00115C90  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80118D54 00115C94  40 81 00 0C */	ble .L_80118D60
/* 80118D58 00115C98  FF A0 08 90 */	fmr f29, f1
/* 80118D5C 00115C9C  48 00 00 08 */	b .L_80118D64
.L_80118D60:
/* 80118D60 00115CA0  FF A0 08 50 */	fneg f29, f1
.L_80118D64:
/* 80118D64 00115CA4  7F E3 FB 78 */	mr r3, r31
/* 80118D68 00115CA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118D6C 00115CAC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80118D70 00115CB0  7D 89 03 A6 */	mtctr r12
/* 80118D74 00115CB4  4E 80 04 21 */	bctrl 
/* 80118D78 00115CB8  EC 3D 08 2A */	fadds f1, f29, f1
/* 80118D7C 00115CBC  48 2F 8E 55 */	bl roundAng__Ff
/* 80118D80 00115CC0  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80118D84 00115CC4  FC 40 E2 10 */	fabs f2, f28
/* 80118D88 00115CC8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80118D8C 00115CCC  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80118D90 00115CD0  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80118D94 00115CD4  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 80118D98 00115CD8  FC 40 10 18 */	frsp f2, f2
/* 80118D9C 00115CDC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80118DA0 00115CE0  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 80118DA4 00115CE4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80118DA8 00115CE8  4C 40 13 82 */	cror 2, 0, 2
/* 80118DAC 00115CEC  40 82 00 18 */	bne .L_80118DC4
/* 80118DB0 00115CF0  7F E3 FB 78 */	mr r3, r31
/* 80118DB4 00115CF4  4B FE C4 ED */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80118DB8 00115CF8  38 00 00 06 */	li r0, 6
/* 80118DBC 00115CFC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80118DC0 00115D00  48 00 02 30 */	b .L_80118FF0
.L_80118DC4:
/* 80118DC4 00115D04  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80118DC8 00115D08  7F E3 FB 78 */	mr r3, r31
/* 80118DCC 00115D0C  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 80118DD0 00115D10  38 80 00 00 */	li r4, 0
/* 80118DD4 00115D14  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 80118DD8 00115D18  38 A0 00 00 */	li r5, 0
/* 80118DDC 00115D1C  38 C0 00 00 */	li r6, 0
/* 80118DE0 00115D20  4B FF A2 71 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80118DE4 00115D24  28 03 00 00 */	cmplwi r3, 0
/* 80118DE8 00115D28  41 82 01 EC */	beq .L_80118FD4
/* 80118DEC 00115D2C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80118DF0 00115D30  38 61 00 68 */	addi r3, r1, 0x68
/* 80118DF4 00115D34  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80118DF8 00115D38  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80118DFC 00115D3C  7F A4 EB 78 */	mr r4, r29
/* 80118E00 00115D40  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118E04 00115D44  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 80118E08 00115D48  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118E0C 00115D4C  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 80118E10 00115D50  7D 89 03 A6 */	mtctr r12
/* 80118E14 00115D54  4E 80 04 21 */	bctrl 
/* 80118E18 00115D58  7F E4 FB 78 */	mr r4, r31
/* 80118E1C 00115D5C  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80118E20 00115D60  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118E24 00115D64  38 61 00 74 */	addi r3, r1, 0x74
/* 80118E28 00115D68  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80118E2C 00115D6C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80118E30 00115D70  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118E34 00115D74  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80118E38 00115D78  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80118E3C 00115D7C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80118E40 00115D80  7D 89 03 A6 */	mtctr r12
/* 80118E44 00115D84  4E 80 04 21 */	bctrl 
/* 80118E48 00115D88  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80118E4C 00115D8C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80118E50 00115D90  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80118E54 00115D94  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80118E58 00115D98  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80118E5C 00115D9C  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80118E60 00115DA0  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80118E64 00115DA4  EC 21 28 28 */	fsubs f1, f1, f5
/* 80118E68 00115DA8  EC 40 18 28 */	fsubs f2, f0, f3
/* 80118E6C 00115DAC  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80118E70 00115DB0  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80118E74 00115DB4  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80118E78 00115DB8  4B F1 C2 91 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80118E7C 00115DBC  48 2F 8D 55 */	bl roundAng__Ff
/* 80118E80 00115DC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118E84 00115DC4  FF 40 08 90 */	fmr f26, f1
/* 80118E88 00115DC8  7F E3 FB 78 */	mr r3, r31
/* 80118E8C 00115DCC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80118E90 00115DD0  7D 89 03 A6 */	mtctr r12
/* 80118E94 00115DD4  4E 80 04 21 */	bctrl 
/* 80118E98 00115DD8  FC 40 08 90 */	fmr f2, f1
/* 80118E9C 00115DDC  FC 20 D0 90 */	fmr f1, f26
/* 80118EA0 00115DE0  48 2F 8D 5D */	bl angDist__Fff
/* 80118EA4 00115DE4  7F E4 FB 78 */	mr r4, r31
/* 80118EA8 00115DE8  FF 80 08 90 */	fmr f28, f1
/* 80118EAC 00115DEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118EB0 00115DF0  38 61 00 14 */	addi r3, r1, 0x14
/* 80118EB4 00115DF4  3B 80 00 00 */	li r28, 0
/* 80118EB8 00115DF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118EBC 00115DFC  7D 89 03 A6 */	mtctr r12
/* 80118EC0 00115E00  4E 80 04 21 */	bctrl 
/* 80118EC4 00115E04  7F A4 EB 78 */	mr r4, r29
/* 80118EC8 00115E08  38 61 00 08 */	addi r3, r1, 8
/* 80118ECC 00115E0C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118ED0 00115E10  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 80118ED4 00115E14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118ED8 00115E18  7D 89 03 A6 */	mtctr r12
/* 80118EDC 00115E1C  4E 80 04 21 */	bctrl 
/* 80118EE0 00115E20  7F E4 FB 78 */	mr r4, r31
/* 80118EE4 00115E24  C0 01 00 08 */	lfs f0, 8(r1)
/* 80118EE8 00115E28  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118EEC 00115E2C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80118EF0 00115E30  EF 40 E8 28 */	fsubs f26, f0, f29
/* 80118EF4 00115E34  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118EF8 00115E38  7D 89 03 A6 */	mtctr r12
/* 80118EFC 00115E3C  4E 80 04 21 */	bctrl 
/* 80118F00 00115E40  7F A4 EB 78 */	mr r4, r29
/* 80118F04 00115E44  38 61 00 20 */	addi r3, r1, 0x20
/* 80118F08 00115E48  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118F0C 00115E4C  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 80118F10 00115E50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118F14 00115E54  7D 89 03 A6 */	mtctr r12
/* 80118F18 00115E58  4E 80 04 21 */	bctrl 
/* 80118F1C 00115E5C  7F E4 FB 78 */	mr r4, r31
/* 80118F20 00115E60  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80118F24 00115E64  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118F28 00115E68  38 61 00 44 */	addi r3, r1, 0x44
/* 80118F2C 00115E6C  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80118F30 00115E70  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118F34 00115E74  7D 89 03 A6 */	mtctr r12
/* 80118F38 00115E78  4E 80 04 21 */	bctrl 
/* 80118F3C 00115E7C  7F A4 EB 78 */	mr r4, r29
/* 80118F40 00115E80  38 61 00 38 */	addi r3, r1, 0x38
/* 80118F44 00115E84  81 9D 00 00 */	lwz r12, 0(r29)
/* 80118F48 00115E88  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80118F4C 00115E8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80118F50 00115E90  7D 89 03 A6 */	mtctr r12
/* 80118F54 00115E94  4E 80 04 21 */	bctrl 
/* 80118F58 00115E98  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80118F5C 00115E9C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80118F60 00115EA0  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80118F64 00115EA4  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80118F68 00115EA8  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 80118F6C 00115EAC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80118F70 00115EB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80118F74 00115EB4  40 80 00 2C */	bge .L_80118FA0
/* 80118F78 00115EB8  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 80118F7C 00115EBC  FC 40 E2 10 */	fabs f2, f28
/* 80118F80 00115EC0  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 80118F84 00115EC4  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80118F88 00115EC8  FC 40 10 18 */	frsp f2, f2
/* 80118F8C 00115ECC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80118F90 00115ED0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80118F94 00115ED4  4C 40 13 82 */	cror 2, 0, 2
/* 80118F98 00115ED8  40 82 00 08 */	bne .L_80118FA0
/* 80118F9C 00115EDC  3B 80 00 01 */	li r28, 1
.L_80118FA0:
/* 80118FA0 00115EE0  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80118FA4 00115EE4  41 82 00 4C */	beq .L_80118FF0
/* 80118FA8 00115EE8  7F E3 FB 78 */	mr r3, r31
/* 80118FAC 00115EEC  4B FE C2 F5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80118FB0 00115EF0  7F E3 FB 78 */	mr r3, r31
/* 80118FB4 00115EF4  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 80118FB8 00115EF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80118FBC 00115EFC  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80118FC0 00115F00  7D 89 03 A6 */	mtctr r12
/* 80118FC4 00115F04  4E 80 04 21 */	bctrl 
/* 80118FC8 00115F08  38 00 00 04 */	li r0, 4
/* 80118FCC 00115F0C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80118FD0 00115F10  48 00 00 20 */	b .L_80118FF0
.L_80118FD4:
/* 80118FD4 00115F14  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80118FD8 00115F18  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80118FDC 00115F1C  41 82 00 14 */	beq .L_80118FF0
/* 80118FE0 00115F20  7F E3 FB 78 */	mr r3, r31
/* 80118FE4 00115F24  4B FE C2 BD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80118FE8 00115F28  38 00 00 00 */	li r0, 0
/* 80118FEC 00115F2C  90 1E 00 10 */	stw r0, 0x10(r30)
.L_80118FF0:
/* 80118FF0 00115F30  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80118FF4 00115F34  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80118FF8 00115F38  28 00 00 00 */	cmplwi r0, 0
/* 80118FFC 00115F3C  41 82 00 34 */	beq .L_80119030
/* 80119000 00115F40  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80119004 00115F44  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80119008 00115F48  41 82 00 08 */	beq .L_80119010
/* 8011900C 00115F4C  48 00 00 24 */	b .L_80119030
.L_80119010:
/* 80119010 00115F50  7F C3 F3 78 */	mr r3, r30
/* 80119014 00115F54  7F E4 FB 78 */	mr r4, r31
/* 80119018 00115F58  81 9E 00 00 */	lwz r12, 0(r30)
/* 8011901C 00115F5C  38 C0 00 00 */	li r6, 0
/* 80119020 00115F60  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 80119024 00115F64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80119028 00115F68  7D 89 03 A6 */	mtctr r12
/* 8011902C 00115F6C  4E 80 04 21 */	bctrl 
.L_80119030:
/* 80119030 00115F70  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80119034 00115F74  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80119038 00115F78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011903C 00115F7C  4C 40 13 82 */	cror 2, 0, 2
/* 80119040 00115F80  40 82 00 24 */	bne .L_80119064
/* 80119044 00115F84  7F C3 F3 78 */	mr r3, r30
/* 80119048 00115F88  7F E4 FB 78 */	mr r4, r31
/* 8011904C 00115F8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80119050 00115F90  38 A0 00 01 */	li r5, 1
/* 80119054 00115F94  38 C0 00 00 */	li r6, 0
/* 80119058 00115F98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8011905C 00115F9C  7D 89 03 A6 */	mtctr r12
/* 80119060 00115FA0  4E 80 04 21 */	bctrl 
.L_80119064:
/* 80119064 00115FA4  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80119068 00115FA8  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 8011906C 00115FAC  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80119070 00115FB0  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80119074 00115FB4  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80119078 00115FB8  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 8011907C 00115FBC  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80119080 00115FC0  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80119084 00115FC4  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80119088 00115FC8  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 8011908C 00115FCC  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80119090 00115FD0  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80119094 00115FD4  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80119098 00115FD8  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8011909C 00115FDC  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 801190A0 00115FE0  80 01 01 14 */	lwz r0, 0x114(r1)
/* 801190A4 00115FE4  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 801190A8 00115FE8  7C 08 03 A6 */	mtlr r0
/* 801190AC 00115FEC  38 21 01 10 */	addi r1, r1, 0x110
/* 801190B0 00115FF0  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBase, global
/* 801190B4 00115FF4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase15StateTurnToHomeFPQ24Game9EnemyBase

.fn __ct__Q34Game10ChappyBase11StateGoHomeFi, global
/* 801190B8 00115FF8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 801190BC 00115FFC  3D 00 80 4B */	lis r8, __vt__Q34Game10ChappyBase5State@ha
/* 801190C0 00116000  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 801190C4 00116004  3C E0 80 4B */	lis r7, __vt__Q34Game10ChappyBase16StateCautionBase@ha
/* 801190C8 00116008  90 03 00 00 */	stw r0, 0(r3)
/* 801190CC 0011600C  3C C0 80 48 */	lis r6, lbl_8047AEA8@ha
/* 801190D0 00116010  3C A0 80 4B */	lis r5, __vt__Q34Game10ChappyBase11StateGoHome@ha
/* 801190D4 00116014  38 00 00 00 */	li r0, 0
/* 801190D8 00116018  90 83 00 04 */	stw r4, 4(r3)
/* 801190DC 0011601C  39 08 C1 A0 */	addi r8, r8, __vt__Q34Game10ChappyBase5State@l
/* 801190E0 00116020  38 E7 C1 7C */	addi r7, r7, __vt__Q34Game10ChappyBase16StateCautionBase@l
/* 801190E4 00116024  38 C6 AE A8 */	addi r6, r6, lbl_8047AEA8@l
/* 801190E8 00116028  90 03 00 08 */	stw r0, 8(r3)
/* 801190EC 0011602C  38 85 C0 38 */	addi r4, r5, __vt__Q34Game10ChappyBase11StateGoHome@l
/* 801190F0 00116030  38 02 97 A4 */	addi r0, r2, lbl_80517B04@sda21
/* 801190F4 00116034  91 03 00 00 */	stw r8, 0(r3)
/* 801190F8 00116038  90 E3 00 00 */	stw r7, 0(r3)
/* 801190FC 0011603C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80119100 00116040  90 83 00 00 */	stw r4, 0(r3)
/* 80119104 00116044  90 03 00 0C */	stw r0, 0xc(r3)
/* 80119108 00116048  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ChappyBase11StateGoHomeFi

.fn init__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8011910C 0011604C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80119110 00116050  7C 08 02 A6 */	mflr r0
/* 80119114 00116054  7C 83 23 78 */	mr r3, r4
/* 80119118 00116058  38 80 00 03 */	li r4, 3
/* 8011911C 0011605C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80119120 00116060  38 A0 00 00 */	li r5, 0
/* 80119124 00116064  4B FE BE E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80119128 00116068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011912C 0011606C  7C 08 03 A6 */	mtlr r0
/* 80119130 00116070  38 21 00 10 */	addi r1, r1, 0x10
/* 80119134 00116074  4E 80 00 20 */	blr 
.endfn init__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBase, global
/* 80119138 00116078  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 8011913C 0011607C  7C 08 02 A6 */	mflr r0
/* 80119140 00116080  90 01 01 14 */	stw r0, 0x114(r1)
/* 80119144 00116084  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80119148 00116088  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 8011914C 0011608C  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80119150 00116090  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80119154 00116094  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80119158 00116098  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 8011915C 0011609C  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80119160 001160A0  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80119164 001160A4  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80119168 001160A8  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 8011916C 001160AC  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80119170 001160B0  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80119174 001160B4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80119178 001160B8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8011917C 001160BC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80119180 001160C0  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 80119184 001160C4  7C 9F 23 78 */	mr r31, r4
/* 80119188 001160C8  7C 7E 1B 78 */	mr r30, r3
/* 8011918C 001160CC  7F E3 FB 78 */	mr r3, r31
/* 80119190 001160D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80119194 001160D4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80119198 001160D8  7D 89 03 A6 */	mtctr r12
/* 8011919C 001160DC  4E 80 04 21 */	bctrl 
/* 801191A0 001160E0  2C 03 00 2A */	cmpwi r3, 0x2a
/* 801191A4 001160E4  41 82 00 08 */	beq .L_801191AC
/* 801191A8 001160E8  48 00 00 74 */	b .L_8011921C
.L_801191AC:
/* 801191AC 001160EC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801191B0 001160F0  7F E3 FB 78 */	mr r3, r31
/* 801191B4 001160F4  38 80 00 00 */	li r4, 0
/* 801191B8 001160F8  C3 85 08 70 */	lfs f28, 0x870(r5)
/* 801191BC 001160FC  FC 20 E0 90 */	fmr f1, f28
/* 801191C0 00116100  4B FF B9 01 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 801191C4 00116104  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801191C8 00116108  41 82 00 0C */	beq .L_801191D4
/* 801191CC 0011610C  38 60 00 01 */	li r3, 1
/* 801191D0 00116110  48 00 00 28 */	b .L_801191F8
.L_801191D4:
/* 801191D4 00116114  FC 20 E0 90 */	fmr f1, f28
/* 801191D8 00116118  7F E3 FB 78 */	mr r3, r31
/* 801191DC 0011611C  38 80 00 00 */	li r4, 0
/* 801191E0 00116120  4B FF B5 55 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 801191E4 00116124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801191E8 00116128  41 82 00 0C */	beq .L_801191F4
/* 801191EC 0011612C  38 60 00 01 */	li r3, 1
/* 801191F0 00116130  48 00 00 08 */	b .L_801191F8
.L_801191F4:
/* 801191F4 00116134  38 60 00 00 */	li r3, 0
.L_801191F8:
/* 801191F8 00116138  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801191FC 0011613C  40 82 00 8C */	bne .L_80119288
/* 80119200 00116140  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80119204 00116144  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80119208 00116148  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 8011920C 0011614C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80119210 00116150  7C 00 00 26 */	mfcr r0
/* 80119214 00116154  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80119218 00116158  48 00 00 70 */	b .L_80119288
.L_8011921C:
/* 8011921C 0011615C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80119220 00116160  7F E3 FB 78 */	mr r3, r31
/* 80119224 00116164  38 80 00 00 */	li r4, 0
/* 80119228 00116168  C3 85 03 AC */	lfs f28, 0x3ac(r5)
/* 8011922C 0011616C  FC 20 E0 90 */	fmr f1, f28
/* 80119230 00116170  4B FF B8 91 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80119234 00116174  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80119238 00116178  41 82 00 0C */	beq .L_80119244
/* 8011923C 0011617C  38 60 00 01 */	li r3, 1
/* 80119240 00116180  48 00 00 28 */	b .L_80119268
.L_80119244:
/* 80119244 00116184  FC 20 E0 90 */	fmr f1, f28
/* 80119248 00116188  7F E3 FB 78 */	mr r3, r31
/* 8011924C 0011618C  38 80 00 00 */	li r4, 0
/* 80119250 00116190  4B FF B4 E5 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80119254 00116194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80119258 00116198  41 82 00 0C */	beq .L_80119264
/* 8011925C 0011619C  38 60 00 01 */	li r3, 1
/* 80119260 001161A0  48 00 00 08 */	b .L_80119268
.L_80119264:
/* 80119264 001161A4  38 60 00 00 */	li r3, 0
.L_80119268:
/* 80119268 001161A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011926C 001161AC  40 82 00 1C */	bne .L_80119288
/* 80119270 001161B0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80119274 001161B4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80119278 001161B8  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 8011927C 001161BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80119280 001161C0  7C 00 00 26 */	mfcr r0
/* 80119284 001161C4  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80119288:
/* 80119288 001161C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011928C 001161CC  41 82 00 0C */	beq .L_80119298
/* 80119290 001161D0  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80119294 001161D4  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80119298:
/* 80119298 001161D8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8011929C 001161DC  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 801192A0 001161E0  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 801192A4 001161E4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801192A8 001161E8  40 80 00 24 */	bge .L_801192CC
/* 801192AC 001161EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801192B0 001161F0  C0 02 97 44 */	lfs f0, lbl_80517AA4@sda21(r2)
/* 801192B4 001161F4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801192B8 001161F8  EC 22 08 2A */	fadds f1, f2, f1
/* 801192BC 001161FC  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 801192C0 00116200  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 801192C4 00116204  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 801192C8 00116208  48 00 00 18 */	b .L_801192E0
.L_801192CC:
/* 801192CC 0011620C  C0 03 04 24 */	lfs f0, 0x424(r3)
/* 801192D0 00116210  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 801192D4 00116214  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801192D8 00116218  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 801192DC 0011621C  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
.L_801192E0:
/* 801192E0 00116220  7F E3 FB 78 */	mr r3, r31
/* 801192E4 00116224  38 80 00 01 */	li r4, 1
/* 801192E8 00116228  4B FF B3 71 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 801192EC 0011622C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801192F0 00116230  41 82 00 28 */	beq .L_80119318
/* 801192F4 00116234  7F C3 F3 78 */	mr r3, r30
/* 801192F8 00116238  7F E4 FB 78 */	mr r4, r31
/* 801192FC 0011623C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80119300 00116240  38 A0 00 02 */	li r5, 2
/* 80119304 00116244  38 C0 00 00 */	li r6, 0
/* 80119308 00116248  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8011930C 0011624C  7D 89 03 A6 */	mtctr r12
/* 80119310 00116250  4E 80 04 21 */	bctrl 
/* 80119314 00116254  48 00 03 64 */	b .L_80119678
.L_80119318:
/* 80119318 00116258  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 8011931C 0011625C  7F E3 FB 78 */	mr r3, r31
/* 80119320 00116260  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 80119324 00116264  38 81 00 8C */	addi r4, r1, 0x8c
/* 80119328 00116268  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8011932C 0011626C  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80119330 00116270  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 80119334 00116274  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 80119338 00116278  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8011933C 0011627C  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80119340 00116280  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80119344 00116284  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80119348 00116288  4B FF C2 95 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8011934C 0011628C  7F E4 FB 78 */	mr r4, r31
/* 80119350 00116290  38 61 00 80 */	addi r3, r1, 0x80
/* 80119354 00116294  81 9F 00 00 */	lwz r12, 0(r31)
/* 80119358 00116298  C3 5F 01 98 */	lfs f26, 0x198(r31)
/* 8011935C 0011629C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80119360 001162A0  C3 7F 01 9C */	lfs f27, 0x19c(r31)
/* 80119364 001162A4  C3 9F 01 A0 */	lfs f28, 0x1a0(r31)
/* 80119368 001162A8  7D 89 03 A6 */	mtctr r12
/* 8011936C 001162AC  4E 80 04 21 */	bctrl 
/* 80119370 001162B0  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80119374 001162B4  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 80119378 001162B8  EC 60 D8 28 */	fsubs f3, f0, f27
/* 8011937C 001162BC  C0 21 00 88 */	lfs f1, 0x88(r1)
/* 80119380 001162C0  EC 42 D0 28 */	fsubs f2, f2, f26
/* 80119384 001162C4  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80119388 001162C8  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8011938C 001162CC  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80119390 001162D0  EC 81 00 72 */	fmuls f4, f1, f1
/* 80119394 001162D4  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80119398 001162D8  EC 24 08 2A */	fadds f1, f4, f1
/* 8011939C 001162DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801193A0 001162E0  40 81 00 14 */	ble .L_801193B4
/* 801193A4 001162E4  40 81 00 14 */	ble .L_801193B8
/* 801193A8 001162E8  FC 00 08 34 */	frsqrte f0, f1
/* 801193AC 001162EC  EC 20 00 72 */	fmuls f1, f0, f1
/* 801193B0 001162F0  48 00 00 08 */	b .L_801193B8
.L_801193B4:
/* 801193B4 001162F4  FC 20 00 90 */	fmr f1, f0
.L_801193B8:
/* 801193B8 001162F8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801193BC 001162FC  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 801193C0 00116300  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801193C4 00116304  40 80 00 24 */	bge .L_801193E8
/* 801193C8 00116308  7F E3 FB 78 */	mr r3, r31
/* 801193CC 0011630C  4B FE BE D5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 801193D0 00116310  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 801193D4 00116314  38 00 00 07 */	li r0, 7
/* 801193D8 00116318  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801193DC 0011631C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 801193E0 00116320  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 801193E4 00116324  90 1E 00 10 */	stw r0, 0x10(r30)
.L_801193E8:
/* 801193E8 00116328  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801193EC 0011632C  7F E3 FB 78 */	mr r3, r31
/* 801193F0 00116330  C0 3F 02 E0 */	lfs f1, 0x2e0(r31)
/* 801193F4 00116334  38 80 00 00 */	li r4, 0
/* 801193F8 00116338  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 801193FC 0011633C  38 A0 00 00 */	li r5, 0
/* 80119400 00116340  38 C0 00 00 */	li r6, 0
/* 80119404 00116344  4B FF 9C 4D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80119408 00116348  28 03 00 00 */	cmplwi r3, 0
/* 8011940C 0011634C  41 82 02 10 */	beq .L_8011961C
/* 80119410 00116350  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80119414 00116354  38 61 00 68 */	addi r3, r1, 0x68
/* 80119418 00116358  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 8011941C 0011635C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80119420 00116360  7F A4 EB 78 */	mr r4, r29
/* 80119424 00116364  81 9D 00 00 */	lwz r12, 0(r29)
/* 80119428 00116368  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 8011942C 0011636C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80119430 00116370  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 80119434 00116374  7D 89 03 A6 */	mtctr r12
/* 80119438 00116378  4E 80 04 21 */	bctrl 
/* 8011943C 0011637C  7F E4 FB 78 */	mr r4, r31
/* 80119440 00116380  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80119444 00116384  81 9F 00 00 */	lwz r12, 0(r31)
/* 80119448 00116388  38 61 00 74 */	addi r3, r1, 0x74
/* 8011944C 0011638C  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80119450 00116390  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80119454 00116394  81 8C 00 08 */	lwz r12, 8(r12)
/* 80119458 00116398  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 8011945C 0011639C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80119460 001163A0  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80119464 001163A4  7D 89 03 A6 */	mtctr r12
/* 80119468 001163A8  4E 80 04 21 */	bctrl 
/* 8011946C 001163AC  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80119470 001163B0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80119474 001163B4  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80119478 001163B8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8011947C 001163BC  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80119480 001163C0  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80119484 001163C4  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80119488 001163C8  EC 21 28 28 */	fsubs f1, f1, f5
/* 8011948C 001163CC  EC 40 18 28 */	fsubs f2, f0, f3
/* 80119490 001163D0  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80119494 001163D4  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80119498 001163D8  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 8011949C 001163DC  4B F1 BC 6D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 801194A0 001163E0  48 2F 87 31 */	bl roundAng__Ff
/* 801194A4 001163E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801194A8 001163E8  FF 40 08 90 */	fmr f26, f1
/* 801194AC 001163EC  7F E3 FB 78 */	mr r3, r31
/* 801194B0 001163F0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801194B4 001163F4  7D 89 03 A6 */	mtctr r12
/* 801194B8 001163F8  4E 80 04 21 */	bctrl 
/* 801194BC 001163FC  FC 40 08 90 */	fmr f2, f1
/* 801194C0 00116400  FC 20 D0 90 */	fmr f1, f26
/* 801194C4 00116404  48 2F 87 39 */	bl angDist__Fff
/* 801194C8 00116408  7F E4 FB 78 */	mr r4, r31
/* 801194CC 0011640C  FF 80 08 90 */	fmr f28, f1
/* 801194D0 00116410  81 9F 00 00 */	lwz r12, 0(r31)
/* 801194D4 00116414  38 61 00 14 */	addi r3, r1, 0x14
/* 801194D8 00116418  3B 80 00 00 */	li r28, 0
/* 801194DC 0011641C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801194E0 00116420  7D 89 03 A6 */	mtctr r12
/* 801194E4 00116424  4E 80 04 21 */	bctrl 
/* 801194E8 00116428  7F A4 EB 78 */	mr r4, r29
/* 801194EC 0011642C  38 61 00 08 */	addi r3, r1, 8
/* 801194F0 00116430  81 9D 00 00 */	lwz r12, 0(r29)
/* 801194F4 00116434  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 801194F8 00116438  81 8C 00 08 */	lwz r12, 8(r12)
/* 801194FC 0011643C  7D 89 03 A6 */	mtctr r12
/* 80119500 00116440  4E 80 04 21 */	bctrl 
/* 80119504 00116444  7F E4 FB 78 */	mr r4, r31
/* 80119508 00116448  C0 01 00 08 */	lfs f0, 8(r1)
/* 8011950C 0011644C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80119510 00116450  38 61 00 2C */	addi r3, r1, 0x2c
/* 80119514 00116454  EF 40 E8 28 */	fsubs f26, f0, f29
/* 80119518 00116458  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011951C 0011645C  7D 89 03 A6 */	mtctr r12
/* 80119520 00116460  4E 80 04 21 */	bctrl 
/* 80119524 00116464  7F A4 EB 78 */	mr r4, r29
/* 80119528 00116468  38 61 00 20 */	addi r3, r1, 0x20
/* 8011952C 0011646C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80119530 00116470  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 80119534 00116474  81 8C 00 08 */	lwz r12, 8(r12)
/* 80119538 00116478  7D 89 03 A6 */	mtctr r12
/* 8011953C 0011647C  4E 80 04 21 */	bctrl 
/* 80119540 00116480  7F E4 FB 78 */	mr r4, r31
/* 80119544 00116484  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80119548 00116488  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011954C 0011648C  38 61 00 44 */	addi r3, r1, 0x44
/* 80119550 00116490  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80119554 00116494  81 8C 00 08 */	lwz r12, 8(r12)
/* 80119558 00116498  7D 89 03 A6 */	mtctr r12
/* 8011955C 0011649C  4E 80 04 21 */	bctrl 
/* 80119560 001164A0  7F A4 EB 78 */	mr r4, r29
/* 80119564 001164A4  38 61 00 38 */	addi r3, r1, 0x38
/* 80119568 001164A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8011956C 001164AC  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80119570 001164B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80119574 001164B4  7D 89 03 A6 */	mtctr r12
/* 80119578 001164B8  4E 80 04 21 */	bctrl 
/* 8011957C 001164BC  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80119580 001164C0  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80119584 001164C4  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80119588 001164C8  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8011958C 001164CC  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 80119590 001164D0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80119594 001164D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80119598 001164D8  40 80 00 2C */	bge .L_801195C4
/* 8011959C 001164DC  C0 02 97 74 */	lfs f0, lbl_80517AD4@sda21(r2)
/* 801195A0 001164E0  FC 40 E2 10 */	fabs f2, f28
/* 801195A4 001164E4  C0 22 97 70 */	lfs f1, lbl_80517AD0@sda21(r2)
/* 801195A8 001164E8  EC 00 07 B2 */	fmuls f0, f0, f30
/* 801195AC 001164EC  FC 40 10 18 */	frsp f2, f2
/* 801195B0 001164F0  EC 01 00 32 */	fmuls f0, f1, f0
/* 801195B4 001164F4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801195B8 001164F8  4C 40 13 82 */	cror 2, 0, 2
/* 801195BC 001164FC  40 82 00 08 */	bne .L_801195C4
/* 801195C0 00116500  3B 80 00 01 */	li r28, 1
.L_801195C4:
/* 801195C4 00116504  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 801195C8 00116508  41 82 00 40 */	beq .L_80119608
/* 801195CC 0011650C  7F E3 FB 78 */	mr r3, r31
/* 801195D0 00116510  4B FE BC D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 801195D4 00116514  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 801195D8 00116518  7F E3 FB 78 */	mr r3, r31
/* 801195DC 0011651C  C0 22 97 58 */	lfs f1, lbl_80517AB8@sda21(r2)
/* 801195E0 00116520  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801195E4 00116524  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 801195E8 00116528  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 801195EC 0011652C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801195F0 00116530  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 801195F4 00116534  7D 89 03 A6 */	mtctr r12
/* 801195F8 00116538  4E 80 04 21 */	bctrl 
/* 801195FC 0011653C  38 00 00 04 */	li r0, 4
/* 80119600 00116540  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80119604 00116544  48 00 00 34 */	b .L_80119638
.L_80119608:
/* 80119608 00116548  7F E3 FB 78 */	mr r3, r31
/* 8011960C 0011654C  4B FE BC 95 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80119610 00116550  38 00 00 03 */	li r0, 3
/* 80119614 00116554  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80119618 00116558  48 00 00 20 */	b .L_80119638
.L_8011961C:
/* 8011961C 0011655C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80119620 00116560  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80119624 00116564  41 82 00 14 */	beq .L_80119638
/* 80119628 00116568  7F E3 FB 78 */	mr r3, r31
/* 8011962C 0011656C  4B FE BC 75 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80119630 00116570  38 00 00 00 */	li r0, 0
/* 80119634 00116574  90 1E 00 10 */	stw r0, 0x10(r30)
.L_80119638:
/* 80119638 00116578  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8011963C 0011657C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80119640 00116580  28 00 00 00 */	cmplwi r0, 0
/* 80119644 00116584  41 82 00 34 */	beq .L_80119678
/* 80119648 00116588  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8011964C 0011658C  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80119650 00116590  41 82 00 08 */	beq .L_80119658
/* 80119654 00116594  48 00 00 24 */	b .L_80119678
.L_80119658:
/* 80119658 00116598  7F C3 F3 78 */	mr r3, r30
/* 8011965C 0011659C  7F E4 FB 78 */	mr r4, r31
/* 80119660 001165A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80119664 001165A4  38 C0 00 00 */	li r6, 0
/* 80119668 001165A8  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8011966C 001165AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80119670 001165B0  7D 89 03 A6 */	mtctr r12
/* 80119674 001165B4  4E 80 04 21 */	bctrl 
.L_80119678:
/* 80119678 001165B8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8011967C 001165BC  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80119680 001165C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80119684 001165C4  4C 40 13 82 */	cror 2, 0, 2
/* 80119688 001165C8  40 82 00 24 */	bne .L_801196AC
/* 8011968C 001165CC  7F C3 F3 78 */	mr r3, r30
/* 80119690 001165D0  7F E4 FB 78 */	mr r4, r31
/* 80119694 001165D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80119698 001165D8  38 A0 00 01 */	li r5, 1
/* 8011969C 001165DC  38 C0 00 00 */	li r6, 0
/* 801196A0 001165E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801196A4 001165E4  7D 89 03 A6 */	mtctr r12
/* 801196A8 001165E8  4E 80 04 21 */	bctrl 
.L_801196AC:
/* 801196AC 001165EC  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 801196B0 001165F0  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 801196B4 001165F4  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 801196B8 001165F8  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 801196BC 001165FC  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 801196C0 00116600  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 801196C4 00116604  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 801196C8 00116608  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 801196CC 0011660C  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 801196D0 00116610  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 801196D4 00116614  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 801196D8 00116618  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 801196DC 0011661C  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 801196E0 00116620  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 801196E4 00116624  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 801196E8 00116628  80 01 01 14 */	lwz r0, 0x114(r1)
/* 801196EC 0011662C  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 801196F0 00116630  7C 08 03 A6 */	mtlr r0
/* 801196F4 00116634  38 21 01 10 */	addi r1, r1, 0x110
/* 801196F8 00116638  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBase, global
/* 801196FC 0011663C  C0 02 97 40 */	lfs f0, lbl_80517AA0@sda21(r2)
/* 80119700 00116640  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80119704 00116644  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80119708 00116648  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8011970C 0011664C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ChappyBase11StateGoHomeFPQ24Game9EnemyBase
