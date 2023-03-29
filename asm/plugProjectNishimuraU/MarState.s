.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80487800, local
	.asciz "246-MarState"
.endobj lbl_80487800
.balign 4
.obj lbl_80487810, local
	.asciz "chaseinside"
.endobj lbl_80487810
.balign 4
.obj lbl_8048781C, local
	.asciz "flyflick"
.endobj lbl_8048781C
.balign 4
.obj lbl_80487828, local
	.asciz "groundflick"
.endobj lbl_80487828

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game3Mar16StateGroundFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar16StateGroundFlick
.obj __vt__Q34Game3Mar13StateFlyFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar13StateFlyFlick
.obj __vt__Q34Game3Mar12StateTakeOff, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar12StateTakeOff
.obj __vt__Q34Game3Mar11StateGround, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar11StateGroundFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar11StateGroundFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar11StateGround
.obj __vt__Q34Game3Mar9StateLand, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar9StateLandFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar9StateLandFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar9StateLand
.obj __vt__Q34Game3Mar9StateFall, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar9StateFall
.obj __vt__Q34Game3Mar11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar11StateAttack
.obj __vt__Q34Game3Mar16StateChaseInside, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar16StateChaseInside
.obj __vt__Q34Game3Mar10StateChase, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar10StateChaseFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar10StateChaseFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar10StateChase
.obj __vt__Q34Game3Mar9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar9StateMove
.obj __vt__Q34Game3Mar9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar9StateWait
.obj __vt__Q34Game3Mar9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Mar9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game3Mar9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar9StateDead
.obj __vt__Q34Game3Mar5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game3Mar5State
.obj __vt__Q34Game3Mar3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Mar3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game3Mar3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B640, local
	.asciz "dead"
.endobj lbl_8051B640
.balign 4
.obj lbl_8051B648, local
	.asciz "wait"
.endobj lbl_8051B648
.balign 4
.obj lbl_8051B650, local
	.asciz "move"
.endobj lbl_8051B650
.balign 4
.obj lbl_8051B658, local
	.asciz "chase"
.endobj lbl_8051B658
.balign 4
.obj lbl_8051B660, local
	.asciz "attack"
.endobj lbl_8051B660
.balign 4
.obj lbl_8051B668, local
	.asciz "fall"
.endobj lbl_8051B668
.balign 4
.obj lbl_8051B670, local
	.asciz "land"
.endobj lbl_8051B670
.balign 4
.obj lbl_8051B678, local
	.asciz "ground"
.endobj lbl_8051B678
.balign 4
.obj lbl_8051B680, local
	.asciz "takeoff"
.endobj lbl_8051B680
.balign 4
.obj lbl_8051B688, local
	.float 0.0
.endobj lbl_8051B688
.obj lbl_8051B68C, local
	.float 45.0
.endobj lbl_8051B68C
.obj lbl_8051B690, local
	.float 10000.0
.endobj lbl_8051B690
.obj lbl_8051B694, local
	.float 7.5
.endobj lbl_8051B694
.obj lbl_8051B698, local
	.float 1.0
.endobj lbl_8051B698
.obj lbl_8051B69C, local # pi
	.float 3.1415927
.endobj lbl_8051B69C
.obj lbl_8051B6A0, local
	.float 0.0055555557
.endobj lbl_8051B6A0
.obj lbl_8051B6A4, local
	.float 225.0
.endobj lbl_8051B6A4
.obj lbl_8051B6A8, local
	.float -325.9493
.endobj lbl_8051B6A8
.obj lbl_8051B6AC, local
	.float 325.9493
.endobj lbl_8051B6AC
.obj lbl_8051B6B0, local
	.float 50.0
.endobj lbl_8051B6B0
.obj lbl_8051B6B4, local
	.float 0.75
.endobj lbl_8051B6B4
.obj lbl_8051B6B8, local
	.float -1000.0
.endobj lbl_8051B6B8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game3Mar3FSMFPQ24Game9EnemyBase, global
/* 80282614 0027F554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282618 0027F558  7C 08 02 A6 */	mflr r0
/* 8028261C 0027F55C  3C 80 80 48 */	lis r4, lbl_80487800@ha
/* 80282620 0027F560  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282624 0027F564  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80282628 0027F568  7C 7F 1B 78 */	mr r31, r3
/* 8028262C 0027F56C  93 C1 00 08 */	stw r30, 8(r1)
/* 80282630 0027F570  3B C4 78 00 */	addi r30, r4, lbl_80487800@l
/* 80282634 0027F574  38 80 00 0C */	li r4, 0xc
/* 80282638 0027F578  4B EA E2 2D */	bl create__Q24Game17EnemyStateMachineFi
/* 8028263C 0027F57C  38 60 00 10 */	li r3, 0x10
/* 80282640 0027F580  4B DA 18 65 */	bl __nw__FUl
/* 80282644 0027F584  7C 64 1B 79 */	or. r4, r3, r3
/* 80282648 0027F588  41 82 00 3C */	beq .L_80282684
/* 8028264C 0027F58C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80282650 0027F590  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 80282654 0027F594  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80282658 0027F598  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar9StateDead@ha
/* 8028265C 0027F59C  90 04 00 00 */	stw r0, 0(r4)
/* 80282660 0027F5A0  38 E0 00 00 */	li r7, 0
/* 80282664 0027F5A4  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 80282668 0027F5A8  38 A2 D2 E0 */	addi r5, r2, lbl_8051B640@sda21
/* 8028266C 0027F5AC  90 E4 00 04 */	stw r7, 4(r4)
/* 80282670 0027F5B0  38 03 8F 1C */	addi r0, r3, __vt__Q34Game3Mar9StateDead@l
/* 80282674 0027F5B4  90 E4 00 08 */	stw r7, 8(r4)
/* 80282678 0027F5B8  90 C4 00 00 */	stw r6, 0(r4)
/* 8028267C 0027F5BC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282680 0027F5C0  90 04 00 00 */	stw r0, 0(r4)
.L_80282684:
/* 80282684 0027F5C4  7F E3 FB 78 */	mr r3, r31
/* 80282688 0027F5C8  4B EA E2 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028268C 0027F5CC  38 60 00 10 */	li r3, 0x10
/* 80282690 0027F5D0  4B DA 18 15 */	bl __nw__FUl
/* 80282694 0027F5D4  7C 64 1B 79 */	or. r4, r3, r3
/* 80282698 0027F5D8  41 82 00 40 */	beq .L_802826D8
/* 8028269C 0027F5DC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802826A0 0027F5E0  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 802826A4 0027F5E4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802826A8 0027F5E8  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar9StateWait@ha
/* 802826AC 0027F5EC  90 04 00 00 */	stw r0, 0(r4)
/* 802826B0 0027F5F0  38 00 00 01 */	li r0, 1
/* 802826B4 0027F5F4  38 E0 00 00 */	li r7, 0
/* 802826B8 0027F5F8  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 802826BC 0027F5FC  90 04 00 04 */	stw r0, 4(r4)
/* 802826C0 0027F600  38 A2 D2 E8 */	addi r5, r2, lbl_8051B648@sda21
/* 802826C4 0027F604  38 03 8E F8 */	addi r0, r3, __vt__Q34Game3Mar9StateWait@l
/* 802826C8 0027F608  90 E4 00 08 */	stw r7, 8(r4)
/* 802826CC 0027F60C  90 C4 00 00 */	stw r6, 0(r4)
/* 802826D0 0027F610  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802826D4 0027F614  90 04 00 00 */	stw r0, 0(r4)
.L_802826D8:
/* 802826D8 0027F618  7F E3 FB 78 */	mr r3, r31
/* 802826DC 0027F61C  4B EA E2 2D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802826E0 0027F620  38 60 00 10 */	li r3, 0x10
/* 802826E4 0027F624  4B DA 17 C1 */	bl __nw__FUl
/* 802826E8 0027F628  7C 64 1B 79 */	or. r4, r3, r3
/* 802826EC 0027F62C  41 82 00 40 */	beq .L_8028272C
/* 802826F0 0027F630  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802826F4 0027F634  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 802826F8 0027F638  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802826FC 0027F63C  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar9StateMove@ha
/* 80282700 0027F640  90 04 00 00 */	stw r0, 0(r4)
/* 80282704 0027F644  38 00 00 02 */	li r0, 2
/* 80282708 0027F648  38 E0 00 00 */	li r7, 0
/* 8028270C 0027F64C  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 80282710 0027F650  90 04 00 04 */	stw r0, 4(r4)
/* 80282714 0027F654  38 A2 D2 F0 */	addi r5, r2, lbl_8051B650@sda21
/* 80282718 0027F658  38 03 8E D4 */	addi r0, r3, __vt__Q34Game3Mar9StateMove@l
/* 8028271C 0027F65C  90 E4 00 08 */	stw r7, 8(r4)
/* 80282720 0027F660  90 C4 00 00 */	stw r6, 0(r4)
/* 80282724 0027F664  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282728 0027F668  90 04 00 00 */	stw r0, 0(r4)
.L_8028272C:
/* 8028272C 0027F66C  7F E3 FB 78 */	mr r3, r31
/* 80282730 0027F670  4B EA E1 D9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80282734 0027F674  38 60 00 10 */	li r3, 0x10
/* 80282738 0027F678  4B DA 17 6D */	bl __nw__FUl
/* 8028273C 0027F67C  7C 64 1B 79 */	or. r4, r3, r3
/* 80282740 0027F680  41 82 00 40 */	beq .L_80282780
/* 80282744 0027F684  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80282748 0027F688  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 8028274C 0027F68C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80282750 0027F690  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar10StateChase@ha
/* 80282754 0027F694  90 04 00 00 */	stw r0, 0(r4)
/* 80282758 0027F698  38 00 00 03 */	li r0, 3
/* 8028275C 0027F69C  38 E0 00 00 */	li r7, 0
/* 80282760 0027F6A0  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 80282764 0027F6A4  90 04 00 04 */	stw r0, 4(r4)
/* 80282768 0027F6A8  38 A2 D2 F8 */	addi r5, r2, lbl_8051B658@sda21
/* 8028276C 0027F6AC  38 03 8E B0 */	addi r0, r3, __vt__Q34Game3Mar10StateChase@l
/* 80282770 0027F6B0  90 E4 00 08 */	stw r7, 8(r4)
/* 80282774 0027F6B4  90 C4 00 00 */	stw r6, 0(r4)
/* 80282778 0027F6B8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8028277C 0027F6BC  90 04 00 00 */	stw r0, 0(r4)
.L_80282780:
/* 80282780 0027F6C0  7F E3 FB 78 */	mr r3, r31
/* 80282784 0027F6C4  4B EA E1 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80282788 0027F6C8  38 60 00 10 */	li r3, 0x10
/* 8028278C 0027F6CC  4B DA 17 19 */	bl __nw__FUl
/* 80282790 0027F6D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80282794 0027F6D4  41 82 00 40 */	beq .L_802827D4
/* 80282798 0027F6D8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8028279C 0027F6DC  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 802827A0 0027F6E0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802827A4 0027F6E4  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar16StateChaseInside@ha
/* 802827A8 0027F6E8  90 04 00 00 */	stw r0, 0(r4)
/* 802827AC 0027F6EC  38 00 00 04 */	li r0, 4
/* 802827B0 0027F6F0  38 E0 00 00 */	li r7, 0
/* 802827B4 0027F6F4  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 802827B8 0027F6F8  90 04 00 04 */	stw r0, 4(r4)
/* 802827BC 0027F6FC  38 BE 00 10 */	addi r5, r30, 0x10
/* 802827C0 0027F700  38 03 8E 8C */	addi r0, r3, __vt__Q34Game3Mar16StateChaseInside@l
/* 802827C4 0027F704  90 E4 00 08 */	stw r7, 8(r4)
/* 802827C8 0027F708  90 C4 00 00 */	stw r6, 0(r4)
/* 802827CC 0027F70C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802827D0 0027F710  90 04 00 00 */	stw r0, 0(r4)
.L_802827D4:
/* 802827D4 0027F714  7F E3 FB 78 */	mr r3, r31
/* 802827D8 0027F718  4B EA E1 31 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802827DC 0027F71C  38 60 00 10 */	li r3, 0x10
/* 802827E0 0027F720  4B DA 16 C5 */	bl __nw__FUl
/* 802827E4 0027F724  7C 64 1B 79 */	or. r4, r3, r3
/* 802827E8 0027F728  41 82 00 40 */	beq .L_80282828
/* 802827EC 0027F72C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802827F0 0027F730  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 802827F4 0027F734  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802827F8 0027F738  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar11StateAttack@ha
/* 802827FC 0027F73C  90 04 00 00 */	stw r0, 0(r4)
/* 80282800 0027F740  38 00 00 05 */	li r0, 5
/* 80282804 0027F744  38 E0 00 00 */	li r7, 0
/* 80282808 0027F748  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 8028280C 0027F74C  90 04 00 04 */	stw r0, 4(r4)
/* 80282810 0027F750  38 A2 D3 00 */	addi r5, r2, lbl_8051B660@sda21
/* 80282814 0027F754  38 03 8E 68 */	addi r0, r3, __vt__Q34Game3Mar11StateAttack@l
/* 80282818 0027F758  90 E4 00 08 */	stw r7, 8(r4)
/* 8028281C 0027F75C  90 C4 00 00 */	stw r6, 0(r4)
/* 80282820 0027F760  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282824 0027F764  90 04 00 00 */	stw r0, 0(r4)
.L_80282828:
/* 80282828 0027F768  7F E3 FB 78 */	mr r3, r31
/* 8028282C 0027F76C  4B EA E0 DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80282830 0027F770  38 60 00 10 */	li r3, 0x10
/* 80282834 0027F774  4B DA 16 71 */	bl __nw__FUl
/* 80282838 0027F778  7C 64 1B 79 */	or. r4, r3, r3
/* 8028283C 0027F77C  41 82 00 40 */	beq .L_8028287C
/* 80282840 0027F780  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80282844 0027F784  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 80282848 0027F788  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028284C 0027F78C  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar9StateFall@ha
/* 80282850 0027F790  90 04 00 00 */	stw r0, 0(r4)
/* 80282854 0027F794  38 00 00 06 */	li r0, 6
/* 80282858 0027F798  38 E0 00 00 */	li r7, 0
/* 8028285C 0027F79C  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 80282860 0027F7A0  90 04 00 04 */	stw r0, 4(r4)
/* 80282864 0027F7A4  38 A2 D3 08 */	addi r5, r2, lbl_8051B668@sda21
/* 80282868 0027F7A8  38 03 8E 44 */	addi r0, r3, __vt__Q34Game3Mar9StateFall@l
/* 8028286C 0027F7AC  90 E4 00 08 */	stw r7, 8(r4)
/* 80282870 0027F7B0  90 C4 00 00 */	stw r6, 0(r4)
/* 80282874 0027F7B4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282878 0027F7B8  90 04 00 00 */	stw r0, 0(r4)
.L_8028287C:
/* 8028287C 0027F7BC  7F E3 FB 78 */	mr r3, r31
/* 80282880 0027F7C0  4B EA E0 89 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80282884 0027F7C4  38 60 00 10 */	li r3, 0x10
/* 80282888 0027F7C8  4B DA 16 1D */	bl __nw__FUl
/* 8028288C 0027F7CC  7C 64 1B 79 */	or. r4, r3, r3
/* 80282890 0027F7D0  41 82 00 40 */	beq .L_802828D0
/* 80282894 0027F7D4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80282898 0027F7D8  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 8028289C 0027F7DC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802828A0 0027F7E0  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar9StateLand@ha
/* 802828A4 0027F7E4  90 04 00 00 */	stw r0, 0(r4)
/* 802828A8 0027F7E8  38 00 00 07 */	li r0, 7
/* 802828AC 0027F7EC  38 E0 00 00 */	li r7, 0
/* 802828B0 0027F7F0  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 802828B4 0027F7F4  90 04 00 04 */	stw r0, 4(r4)
/* 802828B8 0027F7F8  38 A2 D3 10 */	addi r5, r2, lbl_8051B670@sda21
/* 802828BC 0027F7FC  38 03 8E 20 */	addi r0, r3, __vt__Q34Game3Mar9StateLand@l
/* 802828C0 0027F800  90 E4 00 08 */	stw r7, 8(r4)
/* 802828C4 0027F804  90 C4 00 00 */	stw r6, 0(r4)
/* 802828C8 0027F808  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802828CC 0027F80C  90 04 00 00 */	stw r0, 0(r4)
.L_802828D0:
/* 802828D0 0027F810  7F E3 FB 78 */	mr r3, r31
/* 802828D4 0027F814  4B EA E0 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802828D8 0027F818  38 60 00 10 */	li r3, 0x10
/* 802828DC 0027F81C  4B DA 15 C9 */	bl __nw__FUl
/* 802828E0 0027F820  7C 64 1B 79 */	or. r4, r3, r3
/* 802828E4 0027F824  41 82 00 40 */	beq .L_80282924
/* 802828E8 0027F828  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802828EC 0027F82C  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 802828F0 0027F830  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802828F4 0027F834  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar11StateGround@ha
/* 802828F8 0027F838  90 04 00 00 */	stw r0, 0(r4)
/* 802828FC 0027F83C  38 00 00 08 */	li r0, 8
/* 80282900 0027F840  38 E0 00 00 */	li r7, 0
/* 80282904 0027F844  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 80282908 0027F848  90 04 00 04 */	stw r0, 4(r4)
/* 8028290C 0027F84C  38 A2 D3 18 */	addi r5, r2, lbl_8051B678@sda21
/* 80282910 0027F850  38 03 8D FC */	addi r0, r3, __vt__Q34Game3Mar11StateGround@l
/* 80282914 0027F854  90 E4 00 08 */	stw r7, 8(r4)
/* 80282918 0027F858  90 C4 00 00 */	stw r6, 0(r4)
/* 8028291C 0027F85C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282920 0027F860  90 04 00 00 */	stw r0, 0(r4)
.L_80282924:
/* 80282924 0027F864  7F E3 FB 78 */	mr r3, r31
/* 80282928 0027F868  4B EA DF E1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028292C 0027F86C  38 60 00 10 */	li r3, 0x10
/* 80282930 0027F870  4B DA 15 75 */	bl __nw__FUl
/* 80282934 0027F874  7C 64 1B 79 */	or. r4, r3, r3
/* 80282938 0027F878  41 82 00 40 */	beq .L_80282978
/* 8028293C 0027F87C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80282940 0027F880  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 80282944 0027F884  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80282948 0027F888  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar12StateTakeOff@ha
/* 8028294C 0027F88C  90 04 00 00 */	stw r0, 0(r4)
/* 80282950 0027F890  38 00 00 09 */	li r0, 9
/* 80282954 0027F894  38 E0 00 00 */	li r7, 0
/* 80282958 0027F898  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 8028295C 0027F89C  90 04 00 04 */	stw r0, 4(r4)
/* 80282960 0027F8A0  38 A2 D3 20 */	addi r5, r2, lbl_8051B680@sda21
/* 80282964 0027F8A4  38 03 8D D8 */	addi r0, r3, __vt__Q34Game3Mar12StateTakeOff@l
/* 80282968 0027F8A8  90 E4 00 08 */	stw r7, 8(r4)
/* 8028296C 0027F8AC  90 C4 00 00 */	stw r6, 0(r4)
/* 80282970 0027F8B0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282974 0027F8B4  90 04 00 00 */	stw r0, 0(r4)
.L_80282978:
/* 80282978 0027F8B8  7F E3 FB 78 */	mr r3, r31
/* 8028297C 0027F8BC  4B EA DF 8D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80282980 0027F8C0  38 60 00 10 */	li r3, 0x10
/* 80282984 0027F8C4  4B DA 15 21 */	bl __nw__FUl
/* 80282988 0027F8C8  7C 64 1B 79 */	or. r4, r3, r3
/* 8028298C 0027F8CC  41 82 00 40 */	beq .L_802829CC
/* 80282990 0027F8D0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80282994 0027F8D4  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 80282998 0027F8D8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028299C 0027F8DC  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar13StateFlyFlick@ha
/* 802829A0 0027F8E0  90 04 00 00 */	stw r0, 0(r4)
/* 802829A4 0027F8E4  38 00 00 0A */	li r0, 0xa
/* 802829A8 0027F8E8  38 E0 00 00 */	li r7, 0
/* 802829AC 0027F8EC  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 802829B0 0027F8F0  90 04 00 04 */	stw r0, 4(r4)
/* 802829B4 0027F8F4  38 BE 00 1C */	addi r5, r30, 0x1c
/* 802829B8 0027F8F8  38 03 8D B4 */	addi r0, r3, __vt__Q34Game3Mar13StateFlyFlick@l
/* 802829BC 0027F8FC  90 E4 00 08 */	stw r7, 8(r4)
/* 802829C0 0027F900  90 C4 00 00 */	stw r6, 0(r4)
/* 802829C4 0027F904  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802829C8 0027F908  90 04 00 00 */	stw r0, 0(r4)
.L_802829CC:
/* 802829CC 0027F90C  7F E3 FB 78 */	mr r3, r31
/* 802829D0 0027F910  4B EA DF 39 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802829D4 0027F914  38 60 00 10 */	li r3, 0x10
/* 802829D8 0027F918  4B DA 14 CD */	bl __nw__FUl
/* 802829DC 0027F91C  7C 64 1B 79 */	or. r4, r3, r3
/* 802829E0 0027F920  41 82 00 40 */	beq .L_80282A20
/* 802829E4 0027F924  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802829E8 0027F928  3C A0 80 4D */	lis r5, __vt__Q34Game3Mar5State@ha
/* 802829EC 0027F92C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802829F0 0027F930  3C 60 80 4D */	lis r3, __vt__Q34Game3Mar16StateGroundFlick@ha
/* 802829F4 0027F934  90 04 00 00 */	stw r0, 0(r4)
/* 802829F8 0027F938  38 00 00 0B */	li r0, 0xb
/* 802829FC 0027F93C  38 E0 00 00 */	li r7, 0
/* 80282A00 0027F940  38 C5 8F 40 */	addi r6, r5, __vt__Q34Game3Mar5State@l
/* 80282A04 0027F944  90 04 00 04 */	stw r0, 4(r4)
/* 80282A08 0027F948  38 BE 00 28 */	addi r5, r30, 0x28
/* 80282A0C 0027F94C  38 03 8D 90 */	addi r0, r3, __vt__Q34Game3Mar16StateGroundFlick@l
/* 80282A10 0027F950  90 E4 00 08 */	stw r7, 8(r4)
/* 80282A14 0027F954  90 C4 00 00 */	stw r6, 0(r4)
/* 80282A18 0027F958  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80282A1C 0027F95C  90 04 00 00 */	stw r0, 0(r4)
.L_80282A20:
/* 80282A20 0027F960  7F E3 FB 78 */	mr r3, r31
/* 80282A24 0027F964  4B EA DE E5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80282A28 0027F968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282A2C 0027F96C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80282A30 0027F970  83 C1 00 08 */	lwz r30, 8(r1)
/* 80282A34 0027F974  7C 08 03 A6 */	mtlr r0
/* 80282A38 0027F978  38 21 00 10 */	addi r1, r1, 0x10
/* 80282A3C 0027F97C  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar3FSMFPQ24Game9EnemyBase

.fn init__Q34Game3Mar9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80282A40 0027F980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282A44 0027F984  7C 08 02 A6 */	mflr r0
/* 80282A48 0027F988  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80282A4C 0027F98C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282A50 0027F990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80282A54 0027F994  7C 9F 23 78 */	mr r31, r4
/* 80282A58 0027F998  7F E3 FB 78 */	mr r3, r31
/* 80282A5C 0027F99C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80282A60 0027F9A0  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80282A64 0027F9A4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80282A68 0027F9A8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80282A6C 0027F9AC  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80282A70 0027F9B0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80282A74 0027F9B4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80282A78 0027F9B8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80282A7C 0027F9BC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80282A80 0027F9C0  4B E8 2C A1 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80282A84 0027F9C4  7F E3 FB 78 */	mr r3, r31
/* 80282A88 0027F9C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80282A8C 0027F9CC  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80282A90 0027F9D0  7D 89 03 A6 */	mtctr r12
/* 80282A94 0027F9D4  4E 80 04 21 */	bctrl 
/* 80282A98 0027F9D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80282A9C 0027F9DC  41 82 00 18 */	beq .L_80282AB4
/* 80282AA0 0027F9E0  7F E3 FB 78 */	mr r3, r31
/* 80282AA4 0027F9E4  38 80 00 00 */	li r4, 0
/* 80282AA8 0027F9E8  38 A0 00 00 */	li r5, 0
/* 80282AAC 0027F9EC  4B E8 25 59 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80282AB0 0027F9F0  48 00 00 14 */	b .L_80282AC4
.L_80282AB4:
/* 80282AB4 0027F9F4  7F E3 FB 78 */	mr r3, r31
/* 80282AB8 0027F9F8  38 80 00 01 */	li r4, 1
/* 80282ABC 0027F9FC  38 A0 00 00 */	li r5, 0
/* 80282AC0 0027FA00  4B E8 25 45 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_80282AC4:
/* 80282AC4 0027FA04  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80282AC8 0027FA08  7F E3 FB 78 */	mr r3, r31
/* 80282ACC 0027FA0C  60 00 00 04 */	ori r0, r0, 4
/* 80282AD0 0027FA10  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80282AD4 0027FA14  4B FF EE B9 */	bl startDeadEffect__Q34Game3Mar3ObjFv
/* 80282AD8 0027FA18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282ADC 0027FA1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80282AE0 0027FA20  7C 08 03 A6 */	mtlr r0
/* 80282AE4 0027FA24  38 21 00 10 */	addi r1, r1, 0x10
/* 80282AE8 0027FA28  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar9StateDeadFPQ24Game9EnemyBase, global
/* 80282AEC 0027FA2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282AF0 0027FA30  7C 08 02 A6 */	mflr r0
/* 80282AF4 0027FA34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282AF8 0027FA38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80282AFC 0027FA3C  7C 9F 23 78 */	mr r31, r4
/* 80282B00 0027FA40  7F E3 FB 78 */	mr r3, r31
/* 80282B04 0027FA44  4B E8 27 69 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80282B08 0027FA48  C0 02 D3 2C */	lfs f0, lbl_8051B68C@sda21(r2)
/* 80282B0C 0027FA4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80282B10 0027FA50  40 81 00 0C */	ble .L_80282B1C
/* 80282B14 0027FA54  7F E3 FB 78 */	mr r3, r31
/* 80282B18 0027FA58  4B FF D4 ED */	bl subShadowRadius__Q34Game3Mar3ObjFv
.L_80282B1C:
/* 80282B1C 0027FA5C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80282B20 0027FA60  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80282B24 0027FA64  28 00 00 00 */	cmplwi r0, 0
/* 80282B28 0027FA68  41 82 00 38 */	beq .L_80282B60
/* 80282B2C 0027FA6C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80282B30 0027FA70  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80282B34 0027FA74  40 82 00 2C */	bne .L_80282B60
/* 80282B38 0027FA78  7F E3 FB 78 */	mr r3, r31
/* 80282B3C 0027FA7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80282B40 0027FA80  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 80282B44 0027FA84  7D 89 03 A6 */	mtctr r12
/* 80282B48 0027FA88  4E 80 04 21 */	bctrl 
/* 80282B4C 0027FA8C  7F E3 FB 78 */	mr r3, r31
/* 80282B50 0027FA90  4B FF EF 7D */	bl finishWindEffect__Q34Game3Mar3ObjFv
/* 80282B54 0027FA94  7F E3 FB 78 */	mr r3, r31
/* 80282B58 0027FA98  38 80 00 00 */	li r4, 0
/* 80282B5C 0027FA9C  4B EB 85 95 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80282B60:
/* 80282B60 0027FAA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282B64 0027FAA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80282B68 0027FAA8  7C 08 03 A6 */	mtlr r0
/* 80282B6C 0027FAAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80282B70 0027FAB0  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar9StateDeadFPQ24Game9EnemyBase, global
/* 80282B74 0027FAB4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game3Mar9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80282B78 0027FAB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282B7C 0027FABC  7C 08 02 A6 */	mflr r0
/* 80282B80 0027FAC0  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80282B84 0027FAC4  7C 83 23 78 */	mr r3, r4
/* 80282B88 0027FAC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282B8C 0027FACC  38 00 00 00 */	li r0, 0
/* 80282B90 0027FAD0  38 A0 00 00 */	li r5, 0
/* 80282B94 0027FAD4  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80282B98 0027FAD8  38 80 00 05 */	li r4, 5
/* 80282B9C 0027FADC  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80282BA0 0027FAE0  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80282BA4 0027FAE4  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80282BA8 0027FAE8  90 03 02 30 */	stw r0, 0x230(r3)
/* 80282BAC 0027FAEC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80282BB0 0027FAF0  60 00 00 04 */	ori r0, r0, 4
/* 80282BB4 0027FAF4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80282BB8 0027FAF8  4B E8 24 4D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80282BBC 0027FAFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282BC0 0027FB00  7C 08 03 A6 */	mtlr r0
/* 80282BC4 0027FB04  38 21 00 10 */	addi r1, r1, 0x10
/* 80282BC8 0027FB08  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar9StateWaitFPQ24Game9EnemyBase, global
/* 80282BCC 0027FB0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282BD0 0027FB10  7C 08 02 A6 */	mflr r0
/* 80282BD4 0027FB14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282BD8 0027FB18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80282BDC 0027FB1C  7C 9F 23 78 */	mr r31, r4
/* 80282BE0 0027FB20  93 C1 00 08 */	stw r30, 8(r1)
/* 80282BE4 0027FB24  7C 7E 1B 78 */	mr r30, r3
/* 80282BE8 0027FB28  7F E3 FB 78 */	mr r3, r31
/* 80282BEC 0027FB2C  4B FF D0 B1 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 80282BF0 0027FB30  7F E3 FB 78 */	mr r3, r31
/* 80282BF4 0027FB34  4B FF D5 4D */	bl getSearchedPikmin__Q34Game3Mar3ObjFv
/* 80282BF8 0027FB38  28 03 00 00 */	cmplwi r3, 0
/* 80282BFC 0027FB3C  40 82 00 0C */	bne .L_80282C08
/* 80282C00 0027FB40  7F E3 FB 78 */	mr r3, r31
/* 80282C04 0027FB44  4B FF DB D9 */	bl isAttackable__Q34Game3Mar3ObjFv
.L_80282C08:
/* 80282C08 0027FB48  28 03 00 00 */	cmplwi r3, 0
/* 80282C0C 0027FB4C  41 82 00 2C */	beq .L_80282C38
/* 80282C10 0027FB50  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80282C14 0027FB54  7F C3 F3 78 */	mr r3, r30
/* 80282C18 0027FB58  7F E4 FB 78 */	mr r4, r31
/* 80282C1C 0027FB5C  38 A0 00 03 */	li r5, 3
/* 80282C20 0027FB60  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282C24 0027FB64  38 C0 00 00 */	li r6, 0
/* 80282C28 0027FB68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282C2C 0027FB6C  7D 89 03 A6 */	mtctr r12
/* 80282C30 0027FB70  4E 80 04 21 */	bctrl 
/* 80282C34 0027FB74  48 00 00 38 */	b .L_80282C6C
.L_80282C38:
/* 80282C38 0027FB78  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80282C3C 0027FB7C  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80282C40 0027FB80  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80282C44 0027FB84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80282C48 0027FB88  40 81 00 24 */	ble .L_80282C6C
/* 80282C4C 0027FB8C  7F C3 F3 78 */	mr r3, r30
/* 80282C50 0027FB90  7F E4 FB 78 */	mr r4, r31
/* 80282C54 0027FB94  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282C58 0027FB98  38 A0 00 02 */	li r5, 2
/* 80282C5C 0027FB9C  38 C0 00 00 */	li r6, 0
/* 80282C60 0027FBA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282C64 0027FBA4  7D 89 03 A6 */	mtctr r12
/* 80282C68 0027FBA8  4E 80 04 21 */	bctrl 
.L_80282C6C:
/* 80282C6C 0027FBAC  7F E3 FB 78 */	mr r3, r31
/* 80282C70 0027FBB0  4B FF D3 F5 */	bl getFlyingNextState__Q34Game3Mar3ObjFv
/* 80282C74 0027FBB4  7C 65 1B 79 */	or. r5, r3, r3
/* 80282C78 0027FBB8  41 80 00 24 */	blt .L_80282C9C
/* 80282C7C 0027FBBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282C80 0027FBC0  7F C3 F3 78 */	mr r3, r30
/* 80282C84 0027FBC4  7F E4 FB 78 */	mr r4, r31
/* 80282C88 0027FBC8  38 C0 00 00 */	li r6, 0
/* 80282C8C 0027FBCC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282C90 0027FBD0  7D 89 03 A6 */	mtctr r12
/* 80282C94 0027FBD4  4E 80 04 21 */	bctrl 
/* 80282C98 0027FBD8  48 00 00 54 */	b .L_80282CEC
.L_80282C9C:
/* 80282C9C 0027FBDC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80282CA0 0027FBE0  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80282CA4 0027FBE4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80282CA8 0027FBE8  EC 01 00 2A */	fadds f0, f1, f0
/* 80282CAC 0027FBEC  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80282CB0 0027FBF0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80282CB4 0027FBF4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80282CB8 0027FBF8  28 00 00 00 */	cmplwi r0, 0
/* 80282CBC 0027FBFC  41 82 00 30 */	beq .L_80282CEC
/* 80282CC0 0027FC00  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80282CC4 0027FC04  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80282CC8 0027FC08  40 82 00 24 */	bne .L_80282CEC
/* 80282CCC 0027FC0C  7F C3 F3 78 */	mr r3, r30
/* 80282CD0 0027FC10  7F E4 FB 78 */	mr r4, r31
/* 80282CD4 0027FC14  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282CD8 0027FC18  38 A0 00 01 */	li r5, 1
/* 80282CDC 0027FC1C  38 C0 00 00 */	li r6, 0
/* 80282CE0 0027FC20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282CE4 0027FC24  7D 89 03 A6 */	mtctr r12
/* 80282CE8 0027FC28  4E 80 04 21 */	bctrl 
.L_80282CEC:
/* 80282CEC 0027FC2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282CF0 0027FC30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80282CF4 0027FC34  83 C1 00 08 */	lwz r30, 8(r1)
/* 80282CF8 0027FC38  7C 08 03 A6 */	mtlr r0
/* 80282CFC 0027FC3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80282D00 0027FC40  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar9StateWaitFPQ24Game9EnemyBase, global
/* 80282D04 0027FC44  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game3Mar9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80282D08 0027FC48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282D0C 0027FC4C  7C 08 02 A6 */	mflr r0
/* 80282D10 0027FC50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282D14 0027FC54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80282D18 0027FC58  7C 9F 23 78 */	mr r31, r4
/* 80282D1C 0027FC5C  7F E3 FB 78 */	mr r3, r31
/* 80282D20 0027FC60  4B FF D0 99 */	bl setRandTarget__Q34Game3Mar3ObjFv
/* 80282D24 0027FC64  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80282D28 0027FC68  38 00 00 00 */	li r0, 0
/* 80282D2C 0027FC6C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80282D30 0027FC70  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80282D34 0027FC74  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80282D38 0027FC78  60 00 00 04 */	ori r0, r0, 4
/* 80282D3C 0027FC7C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80282D40 0027FC80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80282D44 0027FC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282D48 0027FC88  7C 08 03 A6 */	mtlr r0
/* 80282D4C 0027FC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80282D50 0027FC90  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar9StateMoveFPQ24Game9EnemyBase, global
/* 80282D54 0027FC94  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80282D58 0027FC98  7C 08 02 A6 */	mflr r0
/* 80282D5C 0027FC9C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80282D60 0027FCA0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80282D64 0027FCA4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80282D68 0027FCA8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80282D6C 0027FCAC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80282D70 0027FCB0  7C 9F 23 78 */	mr r31, r4
/* 80282D74 0027FCB4  7C 7E 1B 78 */	mr r30, r3
/* 80282D78 0027FCB8  7F E3 FB 78 */	mr r3, r31
/* 80282D7C 0027FCBC  4B FF CF 21 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 80282D80 0027FCC0  7F E4 FB 78 */	mr r4, r31
/* 80282D84 0027FCC4  38 61 00 08 */	addi r3, r1, 8
/* 80282D88 0027FCC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80282D8C 0027FCCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80282D90 0027FCD0  7D 89 03 A6 */	mtctr r12
/* 80282D94 0027FCD4  4E 80 04 21 */	bctrl 
/* 80282D98 0027FCD8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80282D9C 0027FCDC  7F E3 FB 78 */	mr r3, r31
/* 80282DA0 0027FCE0  C0 BF 02 D8 */	lfs f5, 0x2d8(r31)
/* 80282DA4 0027FCE4  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 80282DA8 0027FCE8  EC 40 28 28 */	fsubs f2, f0, f5
/* 80282DAC 0027FCEC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80282DB0 0027FCF0  C0 9F 02 D4 */	lfs f4, 0x2d4(r31)
/* 80282DB4 0027FCF4  EC 60 08 28 */	fsubs f3, f0, f1
/* 80282DB8 0027FCF8  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80282DBC 0027FCFC  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80282DC0 0027FD00  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80282DC4 0027FD04  EF E3 00 FA */	fmadds f31, f3, f3, f0
/* 80282DC8 0027FD08  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80282DCC 0027FD0C  4B FF D3 75 */	bl getSearchedPikmin__Q34Game3Mar3ObjFv
/* 80282DD0 0027FD10  28 03 00 00 */	cmplwi r3, 0
/* 80282DD4 0027FD14  41 82 00 2C */	beq .L_80282E00
/* 80282DD8 0027FD18  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80282DDC 0027FD1C  7F C3 F3 78 */	mr r3, r30
/* 80282DE0 0027FD20  7F E4 FB 78 */	mr r4, r31
/* 80282DE4 0027FD24  38 A0 00 03 */	li r5, 3
/* 80282DE8 0027FD28  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282DEC 0027FD2C  38 C0 00 00 */	li r6, 0
/* 80282DF0 0027FD30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282DF4 0027FD34  7D 89 03 A6 */	mtctr r12
/* 80282DF8 0027FD38  4E 80 04 21 */	bctrl 
/* 80282DFC 0027FD3C  48 00 00 58 */	b .L_80282E54
.L_80282E00:
/* 80282E00 0027FD40  C0 02 D3 30 */	lfs f0, lbl_8051B690@sda21(r2)
/* 80282E04 0027FD44  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80282E08 0027FD48  41 80 00 14 */	blt .L_80282E1C
/* 80282E0C 0027FD4C  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80282E10 0027FD50  C0 02 D3 34 */	lfs f0, lbl_8051B694@sda21(r2)
/* 80282E14 0027FD54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80282E18 0027FD58  40 81 00 20 */	ble .L_80282E38
.L_80282E1C:
/* 80282E1C 0027FD5C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80282E20 0027FD60  7F E3 FB 78 */	mr r3, r31
/* 80282E24 0027FD64  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80282E28 0027FD68  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80282E2C 0027FD6C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80282E30 0027FD70  4B E8 24 71 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80282E34 0027FD74  48 00 00 20 */	b .L_80282E54
.L_80282E38:
/* 80282E38 0027FD78  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80282E3C 0027FD7C  7F E3 FB 78 */	mr r3, r31
/* 80282E40 0027FD80  38 81 00 14 */	addi r4, r1, 0x14
/* 80282E44 0027FD84  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80282E48 0027FD88  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80282E4C 0027FD8C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80282E50 0027FD90  4B E9 27 8D */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_80282E54:
/* 80282E54 0027FD94  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80282E58 0027FD98  7F E3 FB 78 */	mr r3, r31
/* 80282E5C 0027FD9C  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80282E60 0027FDA0  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80282E64 0027FDA4  EC 01 00 2A */	fadds f0, f1, f0
/* 80282E68 0027FDA8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80282E6C 0027FDAC  4B FF D1 F9 */	bl getFlyingNextState__Q34Game3Mar3ObjFv
/* 80282E70 0027FDB0  7C 65 1B 79 */	or. r5, r3, r3
/* 80282E74 0027FDB4  41 80 00 24 */	blt .L_80282E98
/* 80282E78 0027FDB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282E7C 0027FDBC  7F C3 F3 78 */	mr r3, r30
/* 80282E80 0027FDC0  7F E4 FB 78 */	mr r4, r31
/* 80282E84 0027FDC4  38 C0 00 00 */	li r6, 0
/* 80282E88 0027FDC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282E8C 0027FDCC  7D 89 03 A6 */	mtctr r12
/* 80282E90 0027FDD0  4E 80 04 21 */	bctrl 
/* 80282E94 0027FDD4  48 00 00 40 */	b .L_80282ED4
.L_80282E98:
/* 80282E98 0027FDD8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80282E9C 0027FDDC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80282EA0 0027FDE0  28 00 00 00 */	cmplwi r0, 0
/* 80282EA4 0027FDE4  41 82 00 30 */	beq .L_80282ED4
/* 80282EA8 0027FDE8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80282EAC 0027FDEC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80282EB0 0027FDF0  40 82 00 24 */	bne .L_80282ED4
/* 80282EB4 0027FDF4  7F C3 F3 78 */	mr r3, r30
/* 80282EB8 0027FDF8  7F E4 FB 78 */	mr r4, r31
/* 80282EBC 0027FDFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80282EC0 0027FE00  38 A0 00 01 */	li r5, 1
/* 80282EC4 0027FE04  38 C0 00 00 */	li r6, 0
/* 80282EC8 0027FE08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80282ECC 0027FE0C  7D 89 03 A6 */	mtctr r12
/* 80282ED0 0027FE10  4E 80 04 21 */	bctrl 
.L_80282ED4:
/* 80282ED4 0027FE14  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80282ED8 0027FE18  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80282EDC 0027FE1C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80282EE0 0027FE20  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80282EE4 0027FE24  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80282EE8 0027FE28  7C 08 03 A6 */	mtlr r0
/* 80282EEC 0027FE2C  38 21 00 40 */	addi r1, r1, 0x40
/* 80282EF0 0027FE30  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar9StateMoveFPQ24Game9EnemyBase, global
/* 80282EF4 0027FE34  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game3Mar10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80282EF8 0027FE38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80282EFC 0027FE3C  7C 08 02 A6 */	mflr r0
/* 80282F00 0027FE40  7C 83 23 78 */	mr r3, r4
/* 80282F04 0027FE44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80282F08 0027FE48  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80282F0C 0027FE4C  60 00 00 04 */	ori r0, r0, 4
/* 80282F10 0027FE50  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80282F14 0027FE54  4B E7 EA B9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80282F18 0027FE58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80282F1C 0027FE5C  7C 08 03 A6 */	mtlr r0
/* 80282F20 0027FE60  38 21 00 10 */	addi r1, r1, 0x10
/* 80282F24 0027FE64  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar10StateChaseFPQ24Game9EnemyBase, global
/* 80282F28 0027FE68  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80282F2C 0027FE6C  7C 08 02 A6 */	mflr r0
/* 80282F30 0027FE70  90 01 01 34 */	stw r0, 0x134(r1)
/* 80282F34 0027FE74  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 80282F38 0027FE78  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 80282F3C 0027FE7C  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 80282F40 0027FE80  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 80282F44 0027FE84  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 80282F48 0027FE88  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 80282F4C 0027FE8C  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 80282F50 0027FE90  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 80282F54 0027FE94  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 80282F58 0027FE98  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 80282F5C 0027FE9C  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 80282F60 0027FEA0  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 80282F64 0027FEA4  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 80282F68 0027FEA8  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 80282F6C 0027FEAC  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 80282F70 0027FEB0  F3 01 00 B8 */	psq_st f24, 184(r1), 0, qr0
/* 80282F74 0027FEB4  DA E1 00 A0 */	stfd f23, 0xa0(r1)
/* 80282F78 0027FEB8  F2 E1 00 A8 */	psq_st f23, 168(r1), 0, qr0
/* 80282F7C 0027FEBC  DA C1 00 90 */	stfd f22, 0x90(r1)
/* 80282F80 0027FEC0  F2 C1 00 98 */	psq_st f22, 152(r1), 0, qr0
/* 80282F84 0027FEC4  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80282F88 0027FEC8  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80282F8C 0027FECC  93 A1 00 84 */	stw r29, 0x84(r1)
/* 80282F90 0027FED0  7C 9F 23 78 */	mr r31, r4
/* 80282F94 0027FED4  7C 7E 1B 78 */	mr r30, r3
/* 80282F98 0027FED8  7F E3 FB 78 */	mr r3, r31
/* 80282F9C 0027FEDC  4B FF CD 01 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 80282FA0 0027FEE0  7F E3 FB 78 */	mr r3, r31
/* 80282FA4 0027FEE4  4B E8 43 5D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80282FA8 0027FEE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80282FAC 0027FEEC  40 82 03 A4 */	bne .L_80283350
/* 80282FB0 0027FEF0  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80282FB4 0027FEF4  28 1D 00 00 */	cmplwi r29, 0
/* 80282FB8 0027FEF8  41 82 03 6C */	beq .L_80283324
/* 80282FBC 0027FEFC  7F E4 FB 78 */	mr r4, r31
/* 80282FC0 0027FF00  38 61 00 50 */	addi r3, r1, 0x50
/* 80282FC4 0027FF04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80282FC8 0027FF08  C3 9F 01 98 */	lfs f28, 0x198(r31)
/* 80282FCC 0027FF0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80282FD0 0027FF10  C3 7F 01 A0 */	lfs f27, 0x1a0(r31)
/* 80282FD4 0027FF14  7D 89 03 A6 */	mtctr r12
/* 80282FD8 0027FF18  4E 80 04 21 */	bctrl 
/* 80282FDC 0027FF1C  7F A4 EB 78 */	mr r4, r29
/* 80282FE0 0027FF20  38 61 00 44 */	addi r3, r1, 0x44
/* 80282FE4 0027FF24  81 9D 00 00 */	lwz r12, 0(r29)
/* 80282FE8 0027FF28  C3 41 00 50 */	lfs f26, 0x50(r1)
/* 80282FEC 0027FF2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80282FF0 0027FF30  C3 21 00 58 */	lfs f25, 0x58(r1)
/* 80282FF4 0027FF34  7D 89 03 A6 */	mtctr r12
/* 80282FF8 0027FF38  4E 80 04 21 */	bctrl 
/* 80282FFC 0027FF3C  C0 A1 00 44 */	lfs f5, 0x44(r1)
/* 80283000 0027FF40  C0 C1 00 4C */	lfs f6, 0x4c(r1)
/* 80283004 0027FF44  EC 7A 28 28 */	fsubs f3, f26, f5
/* 80283008 0027FF48  C0 22 D3 28 */	lfs f1, lbl_8051B688@sda21(r2)
/* 8028300C 0027FF4C  EC 99 30 28 */	fsubs f4, f25, f6
/* 80283010 0027FF50  EC 03 08 FA */	fmadds f0, f3, f3, f1
/* 80283014 0027FF54  EC 44 01 32 */	fmuls f2, f4, f4
/* 80283018 0027FF58  EC 42 00 2A */	fadds f2, f2, f0
/* 8028301C 0027FF5C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80283020 0027FF60  40 81 00 14 */	ble .L_80283034
/* 80283024 0027FF64  40 81 00 14 */	ble .L_80283038
/* 80283028 0027FF68  FC 00 10 34 */	frsqrte f0, f2
/* 8028302C 0027FF6C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80283030 0027FF70  48 00 00 08 */	b .L_80283038
.L_80283034:
/* 80283034 0027FF74  FC 40 08 90 */	fmr f2, f1
.L_80283038:
/* 80283038 0027FF78  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 8028303C 0027FF7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80283040 0027FF80  40 81 00 14 */	ble .L_80283054
/* 80283044 0027FF84  C0 02 D3 38 */	lfs f0, lbl_8051B698@sda21(r2)
/* 80283048 0027FF88  EC 00 10 24 */	fdivs f0, f0, f2
/* 8028304C 0027FF8C  EC 63 00 32 */	fmuls f3, f3, f0
/* 80283050 0027FF90  EC 84 00 32 */	fmuls f4, f4, f0
.L_80283054:
/* 80283054 0027FF94  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80283058 0027FF98  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8028305C 0027FF9C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80283060 0027FFA0  C0 04 05 64 */	lfs f0, 0x564(r4)
/* 80283064 0027FFA4  EC 63 00 32 */	fmuls f3, f3, f0
/* 80283068 0027FFA8  EC 84 00 32 */	fmuls f4, f4, f0
/* 8028306C 0027FFAC  EF 05 18 2A */	fadds f24, f5, f3
/* 80283070 0027FFB0  EE E6 20 2A */	fadds f23, f6, f4
/* 80283074 0027FFB4  EC 38 D0 28 */	fsubs f1, f24, f26
/* 80283078 0027FFB8  EC 57 C8 28 */	fsubs f2, f23, f25
/* 8028307C 0027FFBC  4B DB 20 8D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80283080 0027FFC0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80283084 0027FFC4  FF A0 08 90 */	fmr f29, f1
/* 80283088 0027FFC8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8028308C 0027FFCC  7F A4 EB 78 */	mr r4, r29
/* 80283090 0027FFD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80283094 0027FFD4  38 61 00 20 */	addi r3, r1, 0x20
/* 80283098 0027FFD8  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 8028309C 0027FFDC  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 802830A0 0027FFE0  7D 89 03 A6 */	mtctr r12
/* 802830A4 0027FFE4  4E 80 04 21 */	bctrl 
/* 802830A8 0027FFE8  7F E4 FB 78 */	mr r4, r31
/* 802830AC 0027FFEC  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802830B0 0027FFF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802830B4 0027FFF4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802830B8 0027FFF8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802830BC 0027FFFC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802830C0 00280000  81 8C 00 08 */	lwz r12, 8(r12)
/* 802830C4 00280004  D0 41 00 08 */	stfs f2, 8(r1)
/* 802830C8 00280008  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802830CC 0028000C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802830D0 00280010  7D 89 03 A6 */	mtctr r12
/* 802830D4 00280014  4E 80 04 21 */	bctrl 
/* 802830D8 00280018  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802830DC 0028001C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802830E0 00280020  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802830E4 00280024  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802830E8 00280028  C0 21 00 08 */	lfs f1, 8(r1)
/* 802830EC 0028002C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802830F0 00280030  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802830F4 00280034  EC 21 28 28 */	fsubs f1, f1, f5
/* 802830F8 00280038  EC 40 18 28 */	fsubs f2, f0, f3
/* 802830FC 0028003C  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80283100 00280040  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80283104 00280044  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80283108 00280048  4B DB 20 01 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8028310C 0028004C  48 18 EA C5 */	bl roundAng__Ff
/* 80283110 00280050  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283114 00280054  FE C0 08 90 */	fmr f22, f1
/* 80283118 00280058  7F E3 FB 78 */	mr r3, r31
/* 8028311C 0028005C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80283120 00280060  7D 89 03 A6 */	mtctr r12
/* 80283124 00280064  4E 80 04 21 */	bctrl 
/* 80283128 00280068  FC 40 08 90 */	fmr f2, f1
/* 8028312C 0028006C  FC 20 B0 90 */	fmr f1, f22
/* 80283130 00280070  48 18 EA CD */	bl angDist__Fff
/* 80283134 00280074  EF E1 07 F2 */	fmuls f31, f1, f31
/* 80283138 00280078  C0 02 D3 40 */	lfs f0, lbl_8051B6A0@sda21(r2)
/* 8028313C 0028007C  C0 22 D3 3C */	lfs f1, lbl_8051B69C@sda21(r2)
/* 80283140 00280080  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80283144 00280084  FC 40 FA 10 */	fabs f2, f31
/* 80283148 00280088  EC 21 00 32 */	fmuls f1, f1, f0
/* 8028314C 0028008C  FC 00 10 18 */	frsp f0, f2
/* 80283150 00280090  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80283154 00280094  40 81 00 1C */	ble .L_80283170
/* 80283158 00280098  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 8028315C 0028009C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80283160 002800A0  40 81 00 0C */	ble .L_8028316C
/* 80283164 002800A4  FF E0 08 90 */	fmr f31, f1
/* 80283168 002800A8  48 00 00 08 */	b .L_80283170
.L_8028316C:
/* 8028316C 002800AC  FF E0 08 50 */	fneg f31, f1
.L_80283170:
/* 80283170 002800B0  7F E3 FB 78 */	mr r3, r31
/* 80283174 002800B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283178 002800B8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028317C 002800BC  7D 89 03 A6 */	mtctr r12
/* 80283180 002800C0  4E 80 04 21 */	bctrl 
/* 80283184 002800C4  EC 3F 08 2A */	fadds f1, f31, f1
/* 80283188 002800C8  48 18 EA 49 */	bl roundAng__Ff
/* 8028318C 002800CC  EC 79 B8 28 */	fsubs f3, f25, f23
/* 80283190 002800D0  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80283194 002800D4  EC 9A C0 28 */	fsubs f4, f26, f24
/* 80283198 002800D8  C0 02 D3 44 */	lfs f0, lbl_8051B6A4@sda21(r2)
/* 8028319C 002800DC  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802831A0 002800E0  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802831A4 002800E4  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802831A8 002800E8  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 802831AC 002800EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802831B0 002800F0  40 81 00 D4 */	ble .L_80283284
/* 802831B4 002800F4  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 802831B8 002800F8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802831BC 002800FC  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802831C0 00280100  C0 64 02 E4 */	lfs f3, 0x2e4(r4)
/* 802831C4 00280104  40 80 00 30 */	bge .L_802831F4
/* 802831C8 00280108  C0 02 D3 48 */	lfs f0, lbl_8051B6A8@sda21(r2)
/* 802831CC 0028010C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802831D0 00280110  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802831D4 00280114  EC 1D 00 32 */	fmuls f0, f29, f0
/* 802831D8 00280118  FC 00 00 1E */	fctiwz f0, f0
/* 802831DC 0028011C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802831E0 00280120  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802831E4 00280124  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802831E8 00280128  7C 03 04 2E */	lfsx f0, r3, r0
/* 802831EC 0028012C  FC 40 00 50 */	fneg f2, f0
/* 802831F0 00280130  48 00 00 28 */	b .L_80283218
.L_802831F4:
/* 802831F4 00280134  C0 02 D3 4C */	lfs f0, lbl_8051B6AC@sda21(r2)
/* 802831F8 00280138  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802831FC 0028013C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80283200 00280140  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80283204 00280144  FC 00 00 1E */	fctiwz f0, f0
/* 80283208 00280148  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8028320C 0028014C  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80283210 00280150  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80283214 00280154  7C 43 04 2E */	lfsx f2, r3, r0
.L_80283218:
/* 80283218 00280158  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 8028321C 0028015C  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80283220 00280160  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 80283224 00280164  C0 5F 01 D8 */	lfs f2, 0x1d8(r31)
/* 80283228 00280168  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8028322C 0028016C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80283230 00280170  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80283234 00280174  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80283238 00280178  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8028323C 0028017C  40 80 00 08 */	bge .L_80283244
/* 80283240 00280180  FF A0 E8 50 */	fneg f29, f29
.L_80283244:
/* 80283244 00280184  C0 02 D3 4C */	lfs f0, lbl_8051B6AC@sda21(r2)
/* 80283248 00280188  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028324C 0028018C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80283250 00280190  C0 24 02 E4 */	lfs f1, 0x2e4(r4)
/* 80283254 00280194  EC 1D 00 32 */	fmuls f0, f29, f0
/* 80283258 00280198  FC 00 00 1E */	fctiwz f0, f0
/* 8028325C 0028019C  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80283260 002801A0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80283264 002801A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80283268 002801A8  7C 63 02 14 */	add r3, r3, r0
/* 8028326C 002801AC  C0 03 00 04 */	lfs f0, 4(r3)
/* 80283270 002801B0  D0 7F 01 D4 */	stfs f3, 0x1d4(r31)
/* 80283274 002801B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80283278 002801B8  D0 5F 01 D8 */	stfs f2, 0x1d8(r31)
/* 8028327C 002801BC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80283280 002801C0  48 00 00 14 */	b .L_80283294
.L_80283284:
/* 80283284 002801C4  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283288 002801C8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8028328C 002801CC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80283290 002801D0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80283294:
/* 80283294 002801D4  EC 39 D8 28 */	fsubs f1, f25, f27
/* 80283298 002801D8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8028329C 002801DC  EC 5A E0 28 */	fsubs f2, f26, f28
/* 802832A0 002801E0  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802832A4 002801E4  EC 21 00 72 */	fmuls f1, f1, f1
/* 802832A8 002801E8  EC 00 00 32 */	fmuls f0, f0, f0
/* 802832AC 002801EC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802832B0 002801F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802832B4 002801F4  40 81 00 28 */	ble .L_802832DC
/* 802832B8 002801F8  7F C3 F3 78 */	mr r3, r30
/* 802832BC 002801FC  7F E4 FB 78 */	mr r4, r31
/* 802832C0 00280200  81 9E 00 00 */	lwz r12, 0(r30)
/* 802832C4 00280204  38 A0 00 04 */	li r5, 4
/* 802832C8 00280208  38 C0 00 00 */	li r6, 0
/* 802832CC 0028020C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802832D0 00280210  7D 89 03 A6 */	mtctr r12
/* 802832D4 00280214  4E 80 04 21 */	bctrl 
/* 802832D8 00280218  48 00 00 4C */	b .L_80283324
.L_802832DC:
/* 802832DC 0028021C  7F E3 FB 78 */	mr r3, r31
/* 802832E0 00280220  4B FF D2 0D */	bl isTargetLost__Q34Game3Mar3ObjFv
/* 802832E4 00280224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802832E8 00280228  41 82 00 3C */	beq .L_80283324
/* 802832EC 0028022C  7F E3 FB 78 */	mr r3, r31
/* 802832F0 00280230  4B FF CE 51 */	bl getSearchedPikmin__Q34Game3Mar3ObjFv
/* 802832F4 00280234  28 03 00 00 */	cmplwi r3, 0
/* 802832F8 00280238  41 82 00 0C */	beq .L_80283304
/* 802832FC 0028023C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80283300 00280240  48 00 00 24 */	b .L_80283324
.L_80283304:
/* 80283304 00280244  7F C3 F3 78 */	mr r3, r30
/* 80283308 00280248  7F E4 FB 78 */	mr r4, r31
/* 8028330C 0028024C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283310 00280250  38 A0 00 01 */	li r5, 1
/* 80283314 00280254  38 C0 00 00 */	li r6, 0
/* 80283318 00280258  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028331C 0028025C  7D 89 03 A6 */	mtctr r12
/* 80283320 00280260  4E 80 04 21 */	bctrl 
.L_80283324:
/* 80283324 00280264  7F E3 FB 78 */	mr r3, r31
/* 80283328 00280268  4B FF D4 B5 */	bl isAttackable__Q34Game3Mar3ObjFv
/* 8028332C 0028026C  28 03 00 00 */	cmplwi r3, 0
/* 80283330 00280270  41 82 00 20 */	beq .L_80283350
/* 80283334 00280274  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80283338 00280278  7F E3 FB 78 */	mr r3, r31
/* 8028333C 0028027C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283340 00280280  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80283344 00280284  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80283348 00280288  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8028334C 0028028C  4B E8 1F 55 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80283350:
/* 80283350 00280290  7F E3 FB 78 */	mr r3, r31
/* 80283354 00280294  4B FF CD 11 */	bl getFlyingNextState__Q34Game3Mar3ObjFv
/* 80283358 00280298  7C 65 1B 79 */	or. r5, r3, r3
/* 8028335C 0028029C  41 80 00 24 */	blt .L_80283380
/* 80283360 002802A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283364 002802A4  7F C3 F3 78 */	mr r3, r30
/* 80283368 002802A8  7F E4 FB 78 */	mr r4, r31
/* 8028336C 002802AC  38 C0 00 00 */	li r6, 0
/* 80283370 002802B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283374 002802B4  7D 89 03 A6 */	mtctr r12
/* 80283378 002802B8  4E 80 04 21 */	bctrl 
/* 8028337C 002802BC  48 00 00 70 */	b .L_802833EC
.L_80283380:
/* 80283380 002802C0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80283384 002802C4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80283388 002802C8  28 00 00 00 */	cmplwi r0, 0
/* 8028338C 002802CC  41 82 00 60 */	beq .L_802833EC
/* 80283390 002802D0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80283394 002802D4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80283398 002802D8  40 82 00 54 */	bne .L_802833EC
/* 8028339C 002802DC  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 802833A0 002802E0  28 00 00 00 */	cmplwi r0, 0
/* 802833A4 002802E4  41 82 00 28 */	beq .L_802833CC
/* 802833A8 002802E8  7F C3 F3 78 */	mr r3, r30
/* 802833AC 002802EC  7F E4 FB 78 */	mr r4, r31
/* 802833B0 002802F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802833B4 002802F4  38 A0 00 05 */	li r5, 5
/* 802833B8 002802F8  38 C0 00 00 */	li r6, 0
/* 802833BC 002802FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802833C0 00280300  7D 89 03 A6 */	mtctr r12
/* 802833C4 00280304  4E 80 04 21 */	bctrl 
/* 802833C8 00280308  48 00 00 24 */	b .L_802833EC
.L_802833CC:
/* 802833CC 0028030C  7F C3 F3 78 */	mr r3, r30
/* 802833D0 00280310  7F E4 FB 78 */	mr r4, r31
/* 802833D4 00280314  81 9E 00 00 */	lwz r12, 0(r30)
/* 802833D8 00280318  38 A0 00 01 */	li r5, 1
/* 802833DC 0028031C  38 C0 00 00 */	li r6, 0
/* 802833E0 00280320  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802833E4 00280324  7D 89 03 A6 */	mtctr r12
/* 802833E8 00280328  4E 80 04 21 */	bctrl 
.L_802833EC:
/* 802833EC 0028032C  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 802833F0 00280330  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 802833F4 00280334  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 802833F8 00280338  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 802833FC 0028033C  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 80283400 00280340  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 80283404 00280344  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 80283408 00280348  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 8028340C 0028034C  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 80283410 00280350  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 80283414 00280354  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 80283418 00280358  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 8028341C 0028035C  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 80283420 00280360  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 80283424 00280364  E3 01 00 B8 */	psq_l f24, 184(r1), 0, qr0
/* 80283428 00280368  CB 01 00 B0 */	lfd f24, 0xb0(r1)
/* 8028342C 0028036C  E2 E1 00 A8 */	psq_l f23, 168(r1), 0, qr0
/* 80283430 00280370  CA E1 00 A0 */	lfd f23, 0xa0(r1)
/* 80283434 00280374  E2 C1 00 98 */	psq_l f22, 152(r1), 0, qr0
/* 80283438 00280378  CA C1 00 90 */	lfd f22, 0x90(r1)
/* 8028343C 0028037C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80283440 00280380  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 80283444 00280384  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80283448 00280388  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8028344C 0028038C  7C 08 03 A6 */	mtlr r0
/* 80283450 00280390  38 21 01 30 */	addi r1, r1, 0x130
/* 80283454 00280394  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar10StateChaseFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar10StateChaseFPQ24Game9EnemyBase, global
/* 80283458 00280398  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028345C 0028039C  7C 08 02 A6 */	mflr r0
/* 80283460 002803A0  7C 83 23 78 */	mr r3, r4
/* 80283464 002803A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283468 002803A8  4B E7 E5 15 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8028346C 002803AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283470 002803B0  7C 08 03 A6 */	mtlr r0
/* 80283474 002803B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80283478 002803B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar10StateChaseFPQ24Game9EnemyBase

.fn init__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028347C 002803BC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80283480 002803C0  7C 08 02 A6 */	mflr r0
/* 80283484 002803C4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80283488 002803C8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8028348C 002803CC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80283490 002803D0  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80283494 002803D4  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80283498 002803D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8028349C 002803DC  7C 9F 23 78 */	mr r31, r4
/* 802834A0 002803E0  80 84 02 30 */	lwz r4, 0x230(r4)
/* 802834A4 002803E4  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802834A8 002803E8  28 04 00 00 */	cmplwi r4, 0
/* 802834AC 002803EC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802834B0 002803F0  C3 DF 01 A0 */	lfs f30, 0x1a0(r31)
/* 802834B4 002803F4  41 82 00 A8 */	beq .L_8028355C
/* 802834B8 002803F8  81 84 00 00 */	lwz r12, 0(r4)
/* 802834BC 002803FC  38 61 00 08 */	addi r3, r1, 8
/* 802834C0 00280400  81 8C 00 08 */	lwz r12, 8(r12)
/* 802834C4 00280404  7D 89 03 A6 */	mtctr r12
/* 802834C8 00280408  4E 80 04 21 */	bctrl 
/* 802834CC 0028040C  C0 C1 00 08 */	lfs f6, 8(r1)
/* 802834D0 00280410  C0 E1 00 10 */	lfs f7, 0x10(r1)
/* 802834D4 00280414  EC 7F 30 28 */	fsubs f3, f31, f6
/* 802834D8 00280418  C0 82 D3 28 */	lfs f4, lbl_8051B688@sda21(r2)
/* 802834DC 0028041C  EC BE 38 28 */	fsubs f5, f30, f7
/* 802834E0 00280420  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802834E4 00280424  EC 03 20 FA */	fmadds f0, f3, f3, f4
/* 802834E8 00280428  EC 25 01 72 */	fmuls f1, f5, f5
/* 802834EC 0028042C  EC 21 00 2A */	fadds f1, f1, f0
/* 802834F0 00280430  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802834F4 00280434  40 81 00 14 */	ble .L_80283508
/* 802834F8 00280438  40 81 00 14 */	ble .L_8028350C
/* 802834FC 0028043C  FC 00 08 34 */	frsqrte f0, f1
/* 80283500 00280440  EC 20 00 72 */	fmuls f1, f0, f1
/* 80283504 00280444  48 00 00 08 */	b .L_8028350C
.L_80283508:
/* 80283508 00280448  FC 20 20 90 */	fmr f1, f4
.L_8028350C:
/* 8028350C 0028044C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283510 00280450  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283514 00280454  40 81 00 18 */	ble .L_8028352C
/* 80283518 00280458  C0 02 D3 38 */	lfs f0, lbl_8051B698@sda21(r2)
/* 8028351C 0028045C  EC 00 08 24 */	fdivs f0, f0, f1
/* 80283520 00280460  EC 63 00 32 */	fmuls f3, f3, f0
/* 80283524 00280464  EC 84 00 32 */	fmuls f4, f4, f0
/* 80283528 00280468  EC A5 00 32 */	fmuls f5, f5, f0
.L_8028352C:
/* 8028352C 0028046C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80283530 00280470  C0 03 03 D4 */	lfs f0, 0x3d4(r3)
/* 80283534 00280474  EC 63 00 32 */	fmuls f3, f3, f0
/* 80283538 00280478  EC 84 00 32 */	fmuls f4, f4, f0
/* 8028353C 0028047C  EC A5 00 32 */	fmuls f5, f5, f0
/* 80283540 00280480  EC 06 18 2A */	fadds f0, f6, f3
/* 80283544 00280484  EC 42 20 2A */	fadds f2, f2, f4
/* 80283548 00280488  EC 27 28 2A */	fadds f1, f7, f5
/* 8028354C 0028048C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 80283550 00280490  D0 5F 02 D4 */	stfs f2, 0x2d4(r31)
/* 80283554 00280494  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 80283558 00280498  48 00 00 10 */	b .L_80283568
.L_8028355C:
/* 8028355C 0028049C  D3 FF 02 D0 */	stfs f31, 0x2d0(r31)
/* 80283560 002804A0  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 80283564 002804A4  D3 DF 02 D8 */	stfs f30, 0x2d8(r31)
.L_80283568:
/* 80283568 002804A8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8028356C 002804AC  7F E3 FB 78 */	mr r3, r31
/* 80283570 002804B0  60 00 00 04 */	ori r0, r0, 4
/* 80283574 002804B4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80283578 002804B8  4B E7 E4 55 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8028357C 002804BC  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80283580 002804C0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80283584 002804C4  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80283588 002804C8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8028358C 002804CC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80283590 002804D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80283594 002804D4  7C 08 03 A6 */	mtlr r0
/* 80283598 002804D8  38 21 00 40 */	addi r1, r1, 0x40
/* 8028359C 002804DC  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBase, global
/* 802835A0 002804E0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802835A4 002804E4  7C 08 02 A6 */	mflr r0
/* 802835A8 002804E8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802835AC 002804EC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802835B0 002804F0  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802835B4 002804F4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802835B8 002804F8  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802835BC 002804FC  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802835C0 00280500  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802835C4 00280504  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802835C8 00280508  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802835CC 0028050C  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802835D0 00280510  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802835D4 00280514  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802835D8 00280518  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802835DC 0028051C  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802835E0 00280520  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802835E4 00280524  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802835E8 00280528  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802835EC 0028052C  7C 9F 23 78 */	mr r31, r4
/* 802835F0 00280530  7C 7E 1B 78 */	mr r30, r3
/* 802835F4 00280534  7F E3 FB 78 */	mr r3, r31
/* 802835F8 00280538  4B FF C6 A5 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 802835FC 0028053C  7F E4 FB 78 */	mr r4, r31
/* 80283600 00280540  38 61 00 44 */	addi r3, r1, 0x44
/* 80283604 00280544  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283608 00280548  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028360C 0028054C  7D 89 03 A6 */	mtctr r12
/* 80283610 00280550  4E 80 04 21 */	bctrl 
/* 80283614 00280554  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 80283618 00280558  C3 BF 02 D8 */	lfs f29, 0x2d8(r31)
/* 8028361C 0028055C  C3 81 00 44 */	lfs f28, 0x44(r1)
/* 80283620 00280560  EC 3F E8 28 */	fsubs f1, f31, f29
/* 80283624 00280564  C3 DF 02 D0 */	lfs f30, 0x2d0(r31)
/* 80283628 00280568  C0 02 D3 30 */	lfs f0, lbl_8051B690@sda21(r2)
/* 8028362C 0028056C  EC 5C F0 28 */	fsubs f2, f28, f30
/* 80283630 00280570  EC 21 00 72 */	fmuls f1, f1, f1
/* 80283634 00280574  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80283638 00280578  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028363C 0028057C  40 80 00 28 */	bge .L_80283664
/* 80283640 00280580  7F C3 F3 78 */	mr r3, r30
/* 80283644 00280584  7F E4 FB 78 */	mr r4, r31
/* 80283648 00280588  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028364C 0028058C  38 A0 00 03 */	li r5, 3
/* 80283650 00280590  38 C0 00 00 */	li r6, 0
/* 80283654 00280594  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283658 00280598  7D 89 03 A6 */	mtctr r12
/* 8028365C 0028059C  4E 80 04 21 */	bctrl 
/* 80283660 002805A0  48 00 02 00 */	b .L_80283860
.L_80283664:
/* 80283664 002805A4  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80283668 002805A8  28 04 00 00 */	cmplwi r4, 0
/* 8028366C 002805AC  41 82 01 14 */	beq .L_80283780
/* 80283670 002805B0  81 84 00 00 */	lwz r12, 0(r4)
/* 80283674 002805B4  38 61 00 20 */	addi r3, r1, 0x20
/* 80283678 002805B8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8028367C 002805BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80283680 002805C0  C3 45 03 34 */	lfs f26, 0x334(r5)
/* 80283684 002805C4  C3 65 03 0C */	lfs f27, 0x30c(r5)
/* 80283688 002805C8  7D 89 03 A6 */	mtctr r12
/* 8028368C 002805CC  4E 80 04 21 */	bctrl 
/* 80283690 002805D0  7F E4 FB 78 */	mr r4, r31
/* 80283694 002805D4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80283698 002805D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028369C 002805DC  38 61 00 2C */	addi r3, r1, 0x2c
/* 802836A0 002805E0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802836A4 002805E4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802836A8 002805E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802836AC 002805EC  D0 41 00 08 */	stfs f2, 8(r1)
/* 802836B0 002805F0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802836B4 002805F4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802836B8 002805F8  7D 89 03 A6 */	mtctr r12
/* 802836BC 002805FC  4E 80 04 21 */	bctrl 
/* 802836C0 00280600  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802836C4 00280604  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802836C8 00280608  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802836CC 0028060C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802836D0 00280610  C0 21 00 08 */	lfs f1, 8(r1)
/* 802836D4 00280614  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802836D8 00280618  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802836DC 0028061C  EC 21 28 28 */	fsubs f1, f1, f5
/* 802836E0 00280620  EC 40 18 28 */	fsubs f2, f0, f3
/* 802836E4 00280624  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802836E8 00280628  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802836EC 0028062C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802836F0 00280630  4B DB 1A 19 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802836F4 00280634  48 18 E4 DD */	bl roundAng__Ff
/* 802836F8 00280638  81 9F 00 00 */	lwz r12, 0(r31)
/* 802836FC 0028063C  FF 20 08 90 */	fmr f25, f1
/* 80283700 00280640  7F E3 FB 78 */	mr r3, r31
/* 80283704 00280644  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80283708 00280648  7D 89 03 A6 */	mtctr r12
/* 8028370C 0028064C  4E 80 04 21 */	bctrl 
/* 80283710 00280650  FC 40 08 90 */	fmr f2, f1
/* 80283714 00280654  FC 20 C8 90 */	fmr f1, f25
/* 80283718 00280658  48 18 E4 E5 */	bl angDist__Fff
/* 8028371C 0028065C  EF 61 06 F2 */	fmuls f27, f1, f27
/* 80283720 00280660  C0 02 D3 40 */	lfs f0, lbl_8051B6A0@sda21(r2)
/* 80283724 00280664  C0 22 D3 3C */	lfs f1, lbl_8051B69C@sda21(r2)
/* 80283728 00280668  EC 00 06 B2 */	fmuls f0, f0, f26
/* 8028372C 0028066C  FC 40 DA 10 */	fabs f2, f27
/* 80283730 00280670  EC 21 00 32 */	fmuls f1, f1, f0
/* 80283734 00280674  FC 00 10 18 */	frsp f0, f2
/* 80283738 00280678  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8028373C 0028067C  40 81 00 1C */	ble .L_80283758
/* 80283740 00280680  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283744 00280684  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80283748 00280688  40 81 00 0C */	ble .L_80283754
/* 8028374C 0028068C  FF 60 08 90 */	fmr f27, f1
/* 80283750 00280690  48 00 00 08 */	b .L_80283758
.L_80283754:
/* 80283754 00280694  FF 60 08 50 */	fneg f27, f1
.L_80283758:
/* 80283758 00280698  7F E3 FB 78 */	mr r3, r31
/* 8028375C 0028069C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283760 002806A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80283764 002806A4  7D 89 03 A6 */	mtctr r12
/* 80283768 002806A8  4E 80 04 21 */	bctrl 
/* 8028376C 002806AC  EC 3B 08 2A */	fadds f1, f27, f1
/* 80283770 002806B0  48 18 E4 61 */	bl roundAng__Ff
/* 80283774 002806B4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80283778 002806B8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8028377C 002806BC  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
.L_80283780:
/* 80283780 002806C0  EC 3E E0 28 */	fsubs f1, f30, f28
/* 80283784 002806C4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80283788 002806C8  EC 5D F8 28 */	fsubs f2, f29, f31
/* 8028378C 002806CC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80283790 002806D0  4B DB 19 79 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80283794 002806D4  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283798 002806D8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8028379C 002806DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802837A0 002806E0  C0 84 02 E4 */	lfs f4, 0x2e4(r4)
/* 802837A4 002806E4  40 80 00 30 */	bge .L_802837D4
/* 802837A8 002806E8  C0 02 D3 48 */	lfs f0, lbl_8051B6A8@sda21(r2)
/* 802837AC 002806EC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802837B0 002806F0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802837B4 002806F4  EC 01 00 32 */	fmuls f0, f1, f0
/* 802837B8 002806F8  FC 00 00 1E */	fctiwz f0, f0
/* 802837BC 002806FC  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 802837C0 00280700  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802837C4 00280704  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802837C8 00280708  7C 03 04 2E */	lfsx f0, r3, r0
/* 802837CC 0028070C  FC 60 00 50 */	fneg f3, f0
/* 802837D0 00280710  48 00 00 28 */	b .L_802837F8
.L_802837D4:
/* 802837D4 00280714  C0 02 D3 4C */	lfs f0, lbl_8051B6AC@sda21(r2)
/* 802837D8 00280718  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802837DC 0028071C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802837E0 00280720  EC 01 00 32 */	fmuls f0, f1, f0
/* 802837E4 00280724  FC 00 00 1E */	fctiwz f0, f0
/* 802837E8 00280728  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802837EC 0028072C  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802837F0 00280730  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802837F4 00280734  7C 63 04 2E */	lfsx f3, r3, r0
.L_802837F8:
/* 802837F8 00280738  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 802837FC 0028073C  EC 84 00 F2 */	fmuls f4, f4, f3
/* 80283800 00280740  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 80283804 00280744  C0 7F 01 D8 */	lfs f3, 0x1d8(r31)
/* 80283808 00280748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028380C 0028074C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80283810 00280750  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80283814 00280754  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 80283818 00280758  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8028381C 0028075C  40 80 00 08 */	bge .L_80283824
/* 80283820 00280760  FC 20 08 50 */	fneg f1, f1
.L_80283824:
/* 80283824 00280764  C0 02 D3 4C */	lfs f0, lbl_8051B6AC@sda21(r2)
/* 80283828 00280768  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028382C 0028076C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80283830 00280770  C0 44 02 E4 */	lfs f2, 0x2e4(r4)
/* 80283834 00280774  EC 01 00 32 */	fmuls f0, f1, f0
/* 80283838 00280778  FC 00 00 1E */	fctiwz f0, f0
/* 8028383C 0028077C  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80283840 00280780  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80283844 00280784  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80283848 00280788  7C 63 02 14 */	add r3, r3, r0
/* 8028384C 0028078C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80283850 00280790  D0 9F 01 D4 */	stfs f4, 0x1d4(r31)
/* 80283854 00280794  EC 02 00 32 */	fmuls f0, f2, f0
/* 80283858 00280798  D0 7F 01 D8 */	stfs f3, 0x1d8(r31)
/* 8028385C 0028079C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80283860:
/* 80283860 002807A0  7F E3 FB 78 */	mr r3, r31
/* 80283864 002807A4  4B FF C8 01 */	bl getFlyingNextState__Q34Game3Mar3ObjFv
/* 80283868 002807A8  7C 65 1B 79 */	or. r5, r3, r3
/* 8028386C 002807AC  41 80 00 24 */	blt .L_80283890
/* 80283870 002807B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283874 002807B4  7F C3 F3 78 */	mr r3, r30
/* 80283878 002807B8  7F E4 FB 78 */	mr r4, r31
/* 8028387C 002807BC  38 C0 00 00 */	li r6, 0
/* 80283880 002807C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283884 002807C4  7D 89 03 A6 */	mtctr r12
/* 80283888 002807C8  4E 80 04 21 */	bctrl 
/* 8028388C 002807CC  48 00 00 40 */	b .L_802838CC
.L_80283890:
/* 80283890 002807D0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80283894 002807D4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80283898 002807D8  28 00 00 00 */	cmplwi r0, 0
/* 8028389C 002807DC  41 82 00 30 */	beq .L_802838CC
/* 802838A0 002807E0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802838A4 002807E4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802838A8 002807E8  40 82 00 24 */	bne .L_802838CC
/* 802838AC 002807EC  7F C3 F3 78 */	mr r3, r30
/* 802838B0 002807F0  7F E4 FB 78 */	mr r4, r31
/* 802838B4 002807F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802838B8 002807F8  38 A0 00 01 */	li r5, 1
/* 802838BC 002807FC  38 C0 00 00 */	li r6, 0
/* 802838C0 00280800  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802838C4 00280804  7D 89 03 A6 */	mtctr r12
/* 802838C8 00280808  4E 80 04 21 */	bctrl 
.L_802838CC:
/* 802838CC 0028080C  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802838D0 00280810  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802838D4 00280814  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802838D8 00280818  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802838DC 0028081C  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802838E0 00280820  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802838E4 00280824  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802838E8 00280828  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802838EC 0028082C  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802838F0 00280830  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802838F4 00280834  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802838F8 00280838  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802838FC 0028083C  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 80283900 00280840  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 80283904 00280844  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80283908 00280848  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8028390C 0028084C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80283910 00280850  7C 08 03 A6 */	mtlr r0
/* 80283914 00280854  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80283918 00280858  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBase, global
/* 8028391C 0028085C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283920 00280860  7C 08 02 A6 */	mflr r0
/* 80283924 00280864  7C 83 23 78 */	mr r3, r4
/* 80283928 00280868  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028392C 0028086C  4B E7 E0 51 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80283930 00280870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283934 00280874  7C 08 03 A6 */	mtlr r0
/* 80283938 00280878  38 21 00 10 */	addi r1, r1, 0x10
/* 8028393C 0028087C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar16StateChaseInsideFPQ24Game9EnemyBase

.fn init__Q34Game3Mar11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80283940 00280880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283944 00280884  7C 08 02 A6 */	mflr r0
/* 80283948 00280888  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 8028394C 0028088C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283950 00280890  38 00 00 00 */	li r0, 0
/* 80283954 00280894  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283958 00280898  7C 9F 23 78 */	mr r31, r4
/* 8028395C 0028089C  7F E3 FB 78 */	mr r3, r31
/* 80283960 002808A0  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 80283964 002808A4  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 80283968 002808A8  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8028396C 002808AC  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80283970 002808B0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80283974 002808B4  60 00 00 04 */	ori r0, r0, 4
/* 80283978 002808B8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8028397C 002808BC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80283980 002808C0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80283984 002808C4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80283988 002808C8  4B E7 E0 45 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8028398C 002808CC  7F E3 FB 78 */	mr r3, r31
/* 80283990 002808D0  38 80 00 09 */	li r4, 9
/* 80283994 002808D4  38 A0 00 00 */	li r5, 0
/* 80283998 002808D8  4B E8 16 6D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028399C 002808DC  38 00 00 00 */	li r0, 0
/* 802839A0 002808E0  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 802839A4 002808E4  98 1F 03 08 */	stb r0, 0x308(r31)
/* 802839A8 002808E8  7F E3 FB 78 */	mr r3, r31
/* 802839AC 002808EC  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 802839B0 002808F0  4B FF E0 59 */	bl createSuckEffect__Q34Game3Mar3ObjFv
/* 802839B4 002808F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802839B8 002808F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802839BC 002808FC  7C 08 03 A6 */	mtlr r0
/* 802839C0 00280900  38 21 00 10 */	addi r1, r1, 0x10
/* 802839C4 00280904  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar11StateAttackFPQ24Game9EnemyBase, global
/* 802839C8 00280908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802839CC 0028090C  7C 08 02 A6 */	mflr r0
/* 802839D0 00280910  90 01 00 14 */	stw r0, 0x14(r1)
/* 802839D4 00280914  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802839D8 00280918  7C 9F 23 78 */	mr r31, r4
/* 802839DC 0028091C  93 C1 00 08 */	stw r30, 8(r1)
/* 802839E0 00280920  7C 7E 1B 78 */	mr r30, r3
/* 802839E4 00280924  7F E3 FB 78 */	mr r3, r31
/* 802839E8 00280928  4B FF C2 B5 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 802839EC 0028092C  88 1F 03 08 */	lbz r0, 0x308(r31)
/* 802839F0 00280930  28 00 00 00 */	cmplwi r0, 0
/* 802839F4 00280934  41 82 00 0C */	beq .L_80283A00
/* 802839F8 00280938  7F E3 FB 78 */	mr r3, r31
/* 802839FC 0028093C  4B FF D5 01 */	bl windTarget__Q34Game3Mar3ObjFv
.L_80283A00:
/* 80283A00 00280940  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80283A04 00280944  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283A08 00280948  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283A0C 0028094C  4C 40 13 82 */	cror 2, 0, 2
/* 80283A10 00280950  40 82 00 28 */	bne .L_80283A38
/* 80283A14 00280954  7F C3 F3 78 */	mr r3, r30
/* 80283A18 00280958  7F E4 FB 78 */	mr r4, r31
/* 80283A1C 0028095C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283A20 00280960  38 A0 00 00 */	li r5, 0
/* 80283A24 00280964  38 C0 00 00 */	li r6, 0
/* 80283A28 00280968  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283A2C 0028096C  7D 89 03 A6 */	mtctr r12
/* 80283A30 00280970  4E 80 04 21 */	bctrl 
/* 80283A34 00280974  48 00 00 5C */	b .L_80283A90
.L_80283A38:
/* 80283A38 00280978  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80283A3C 0028097C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80283A40 00280980  28 00 00 00 */	cmplwi r0, 0
/* 80283A44 00280984  41 82 00 4C */	beq .L_80283A90
/* 80283A48 00280988  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80283A4C 0028098C  28 00 00 02 */	cmplwi r0, 2
/* 80283A50 00280990  40 82 00 18 */	bne .L_80283A68
/* 80283A54 00280994  38 00 00 01 */	li r0, 1
/* 80283A58 00280998  7F E3 FB 78 */	mr r3, r31
/* 80283A5C 0028099C  98 1F 03 08 */	stb r0, 0x308(r31)
/* 80283A60 002809A0  4B FF DF DD */	bl startWindEffect__Q34Game3Mar3ObjFv
/* 80283A64 002809A4  48 00 00 2C */	b .L_80283A90
.L_80283A68:
/* 80283A68 002809A8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80283A6C 002809AC  40 82 00 24 */	bne .L_80283A90
/* 80283A70 002809B0  7F C3 F3 78 */	mr r3, r30
/* 80283A74 002809B4  7F E4 FB 78 */	mr r4, r31
/* 80283A78 002809B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283A7C 002809BC  38 A0 00 01 */	li r5, 1
/* 80283A80 002809C0  38 C0 00 00 */	li r6, 0
/* 80283A84 002809C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283A88 002809C8  7D 89 03 A6 */	mtctr r12
/* 80283A8C 002809CC  4E 80 04 21 */	bctrl 
.L_80283A90:
/* 80283A90 002809D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283A94 002809D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283A98 002809D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80283A9C 002809DC  7C 08 03 A6 */	mtlr r0
/* 80283AA0 002809E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80283AA4 002809E4  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar11StateAttackFPQ24Game9EnemyBase, global
/* 80283AA8 002809E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283AAC 002809EC  7C 08 02 A6 */	mflr r0
/* 80283AB0 002809F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283AB4 002809F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283AB8 002809F8  7C 9F 23 78 */	mr r31, r4
/* 80283ABC 002809FC  7F E3 FB 78 */	mr r3, r31
/* 80283AC0 00280A00  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80283AC4 00280A04  60 00 00 40 */	ori r0, r0, 0x40
/* 80283AC8 00280A08  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80283ACC 00280A0C  4B E7 DE B1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80283AD0 00280A10  38 00 00 00 */	li r0, 0
/* 80283AD4 00280A14  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283AD8 00280A18  98 1F 03 08 */	stb r0, 0x308(r31)
/* 80283ADC 00280A1C  7F E3 FB 78 */	mr r3, r31
/* 80283AE0 00280A20  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 80283AE4 00280A24  4B FF DF E9 */	bl finishWindEffect__Q34Game3Mar3ObjFv
/* 80283AE8 00280A28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283AEC 00280A2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283AF0 00280A30  7C 08 03 A6 */	mtlr r0
/* 80283AF4 00280A34  38 21 00 10 */	addi r1, r1, 0x10
/* 80283AF8 00280A38  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game3Mar9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80283AFC 00280A3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283B00 00280A40  7C 08 02 A6 */	mflr r0
/* 80283B04 00280A44  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283B08 00280A48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283B0C 00280A4C  38 00 00 00 */	li r0, 0
/* 80283B10 00280A50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283B14 00280A54  7C 9F 23 78 */	mr r31, r4
/* 80283B18 00280A58  7F E3 FB 78 */	mr r3, r31
/* 80283B1C 00280A5C  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80283B20 00280A60  90 04 02 30 */	stw r0, 0x230(r4)
/* 80283B24 00280A64  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80283B28 00280A68  60 00 00 04 */	ori r0, r0, 4
/* 80283B2C 00280A6C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80283B30 00280A70  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80283B34 00280A74  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80283B38 00280A78  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80283B3C 00280A7C  4B E7 DE 91 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80283B40 00280A80  7F E3 FB 78 */	mr r3, r31
/* 80283B44 00280A84  38 80 00 08 */	li r4, 8
/* 80283B48 00280A88  38 A0 00 00 */	li r5, 0
/* 80283B4C 00280A8C  4B E8 14 B9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80283B50 00280A90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283B54 00280A94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283B58 00280A98  7C 08 03 A6 */	mtlr r0
/* 80283B5C 00280A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80283B60 00280AA0  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar9StateFallFPQ24Game9EnemyBase, global
/* 80283B64 00280AA4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80283B68 00280AA8  7C 08 02 A6 */	mflr r0
/* 80283B6C 00280AAC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80283B70 00280AB0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80283B74 00280AB4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80283B78 00280AB8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80283B7C 00280ABC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80283B80 00280AC0  7C 9F 23 78 */	mr r31, r4
/* 80283B84 00280AC4  7C 7E 1B 78 */	mr r30, r3
/* 80283B88 00280AC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283B8C 00280ACC  7F E3 FB 78 */	mr r3, r31
/* 80283B90 00280AD0  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80283B94 00280AD4  7D 89 03 A6 */	mtctr r12
/* 80283B98 00280AD8  4E 80 04 21 */	bctrl 
/* 80283B9C 00280ADC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80283BA0 00280AE0  41 82 00 10 */	beq .L_80283BB0
/* 80283BA4 00280AE4  7F E3 FB 78 */	mr r3, r31
/* 80283BA8 00280AE8  4B FF C0 F5 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 80283BAC 00280AEC  48 00 00 98 */	b .L_80283C44
.L_80283BB0:
/* 80283BB0 00280AF0  7F E4 FB 78 */	mr r4, r31
/* 80283BB4 00280AF4  38 61 00 14 */	addi r3, r1, 0x14
/* 80283BB8 00280AF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283BBC 00280AFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80283BC0 00280B00  7D 89 03 A6 */	mtctr r12
/* 80283BC4 00280B04  4E 80 04 21 */	bctrl 
/* 80283BC8 00280B08  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80283BCC 00280B0C  7F E4 FB 78 */	mr r4, r31
/* 80283BD0 00280B10  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80283BD4 00280B14  38 61 00 08 */	addi r3, r1, 8
/* 80283BD8 00280B18  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80283BDC 00280B1C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80283BE0 00280B20  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80283BE4 00280B24  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80283BE8 00280B28  81 9F 00 00 */	lwz r12, 0(r31)
/* 80283BEC 00280B2C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80283BF0 00280B30  7D 89 03 A6 */	mtctr r12
/* 80283BF4 00280B34  4E 80 04 21 */	bctrl 
/* 80283BF8 00280B38  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80283BFC 00280B3C  38 81 00 20 */	addi r4, r1, 0x20
/* 80283C00 00280B40  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 80283C04 00280B44  81 83 00 04 */	lwz r12, 4(r3)
/* 80283C08 00280B48  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80283C0C 00280B4C  7D 89 03 A6 */	mtctr r12
/* 80283C10 00280B50  4E 80 04 21 */	bctrl 
/* 80283C14 00280B54  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80283C18 00280B58  C0 02 D3 50 */	lfs f0, lbl_8051B6B0@sda21(r2)
/* 80283C1C 00280B5C  EC 22 08 28 */	fsubs f1, f2, f1
/* 80283C20 00280B60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283C24 00280B64  41 80 00 10 */	blt .L_80283C34
/* 80283C28 00280B68  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283C2C 00280B6C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80283C30 00280B70  40 81 00 0C */	ble .L_80283C3C
.L_80283C34:
/* 80283C34 00280B74  7F E3 FB 78 */	mr r3, r31
.L_80283C38:
/* 80283C38 00280B78  4B E8 16 69 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80283C3C:
/* 80283C3C 00280B7C  7F E3 FB 78 */	mr r3, r31
/* 80283C40 00280B80  4B FF C3 69 */	bl addShadowOffset__Q34Game3Mar3ObjFv
.L_80283C44:
/* 80283C44 00280B84  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80283C48 00280B88  C0 02 D3 54 */	lfs f0, lbl_8051B6B4@sda21(r2)
/* 80283C4C 00280B8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283C50 00280B90  40 81 00 10 */	ble .L_80283C60
/* 80283C54 00280B94  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80283C58 00280B98  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80283C5C 00280B9C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_80283C60:
/* 80283C60 00280BA0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80283C64 00280BA4  C0 5F 02 C0 */	lfs f2, 0x2c0(r31)
/* 80283C68 00280BA8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80283C6C 00280BAC  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283C70 00280BB0  EC 22 08 2A */	fadds f1, f2, f1
/* 80283C74 00280BB4  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 80283C78 00280BB8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80283C7C 00280BBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283C80 00280BC0  4C 40 13 82 */	cror 2, 0, 2
/* 80283C84 00280BC4  40 82 00 28 */	bne .L_80283CAC
/* 80283C88 00280BC8  7F C3 F3 78 */	mr r3, r30
/* 80283C8C 00280BCC  7F E4 FB 78 */	mr r4, r31
/* 80283C90 00280BD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283C94 00280BD4  38 A0 00 00 */	li r5, 0
/* 80283C98 00280BD8  38 C0 00 00 */	li r6, 0
/* 80283C9C 00280BDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283CA0 00280BE0  7D 89 03 A6 */	mtctr r12
/* 80283CA4 00280BE4  4E 80 04 21 */	bctrl 
/* 80283CA8 00280BE8  48 00 00 40 */	b .L_80283CE8
.L_80283CAC:
/* 80283CAC 00280BEC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80283CB0 00280BF0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80283CB4 00280BF4  28 00 00 00 */	cmplwi r0, 0
/* 80283CB8 00280BF8  41 82 00 30 */	beq .L_80283CE8
/* 80283CBC 00280BFC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80283CC0 00280C00  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80283CC4 00280C04  40 82 00 24 */	bne .L_80283CE8
/* 80283CC8 00280C08  7F C3 F3 78 */	mr r3, r30
/* 80283CCC 00280C0C  7F E4 FB 78 */	mr r4, r31
/* 80283CD0 00280C10  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283CD4 00280C14  38 A0 00 07 */	li r5, 7
/* 80283CD8 00280C18  38 C0 00 00 */	li r6, 0
/* 80283CDC 00280C1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283CE0 00280C20  7D 89 03 A6 */	mtctr r12
/* 80283CE4 00280C24  4E 80 04 21 */	bctrl 
.L_80283CE8:
/* 80283CE8 00280C28  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80283CEC 00280C2C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80283CF0 00280C30  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80283CF4 00280C34  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80283CF8 00280C38  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80283CFC 00280C3C  7C 08 03 A6 */	mtlr r0
/* 80283D00 00280C40  38 21 00 50 */	addi r1, r1, 0x50
/* 80283D04 00280C44  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar9StateFallFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar9StateFallFPQ24Game9EnemyBase, global
/* 80283D08 00280C48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283D0C 00280C4C  7C 08 02 A6 */	mflr r0
/* 80283D10 00280C50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283D14 00280C54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283D18 00280C58  7C 9F 23 78 */	mr r31, r4
/* 80283D1C 00280C5C  7F E3 FB 78 */	mr r3, r31
/* 80283D20 00280C60  4B FF C2 7D */	bl setShadowOffsetMax__Q34Game3Mar3ObjFv
/* 80283D24 00280C64  7F E3 FB 78 */	mr r3, r31
/* 80283D28 00280C68  4B E7 DC 55 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80283D2C 00280C6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283D30 00280C70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283D34 00280C74  7C 08 03 A6 */	mtlr r0
/* 80283D38 00280C78  38 21 00 10 */	addi r1, r1, 0x10
/* 80283D3C 00280C7C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar9StateFallFPQ24Game9EnemyBase

.fn init__Q34Game3Mar9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80283D40 00280C80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283D44 00280C84  7C 08 02 A6 */	mflr r0
/* 80283D48 00280C88  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283D4C 00280C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283D50 00280C90  38 00 00 00 */	li r0, 0
/* 80283D54 00280C94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283D58 00280C98  7C 9F 23 78 */	mr r31, r4
/* 80283D5C 00280C9C  7F E3 FB 78 */	mr r3, r31
/* 80283D60 00280CA0  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80283D64 00280CA4  90 04 02 30 */	stw r0, 0x230(r4)
/* 80283D68 00280CA8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80283D6C 00280CAC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80283D70 00280CB0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80283D74 00280CB4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80283D78 00280CB8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80283D7C 00280CBC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80283D80 00280CC0  4B E7 DC 4D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80283D84 00280CC4  7F E3 FB 78 */	mr r3, r31
/* 80283D88 00280CC8  38 80 00 06 */	li r4, 6
/* 80283D8C 00280CCC  38 A0 00 00 */	li r5, 0
/* 80283D90 00280CD0  4B E8 12 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80283D94 00280CD4  7F E3 FB 78 */	mr r3, r31
/* 80283D98 00280CD8  4B FF DD AD */	bl createDownEffect__Q34Game3Mar3ObjFv
/* 80283D9C 00280CDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283DA0 00280CE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283DA4 00280CE4  7C 08 03 A6 */	mtlr r0
/* 80283DA8 00280CE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80283DAC 00280CEC  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar9StateLandFPQ24Game9EnemyBase, global
/* 80283DB0 00280CF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283DB4 00280CF4  7C 08 02 A6 */	mflr r0
/* 80283DB8 00280CF8  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283DBC 00280CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283DC0 00280D00  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80283DC4 00280D04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283DC8 00280D08  4C 40 13 82 */	cror 2, 0, 2
/* 80283DCC 00280D0C  40 82 00 20 */	bne .L_80283DEC
/* 80283DD0 00280D10  81 83 00 00 */	lwz r12, 0(r3)
/* 80283DD4 00280D14  38 A0 00 00 */	li r5, 0
/* 80283DD8 00280D18  38 C0 00 00 */	li r6, 0
/* 80283DDC 00280D1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283DE0 00280D20  7D 89 03 A6 */	mtctr r12
/* 80283DE4 00280D24  4E 80 04 21 */	bctrl 
/* 80283DE8 00280D28  48 00 00 38 */	b .L_80283E20
.L_80283DEC:
/* 80283DEC 00280D2C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80283DF0 00280D30  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80283DF4 00280D34  28 00 00 00 */	cmplwi r0, 0
/* 80283DF8 00280D38  41 82 00 28 */	beq .L_80283E20
/* 80283DFC 00280D3C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80283E00 00280D40  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80283E04 00280D44  40 82 00 1C */	bne .L_80283E20
/* 80283E08 00280D48  81 83 00 00 */	lwz r12, 0(r3)
/* 80283E0C 00280D4C  38 A0 00 08 */	li r5, 8
/* 80283E10 00280D50  38 C0 00 00 */	li r6, 0
/* 80283E14 00280D54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283E18 00280D58  7D 89 03 A6 */	mtctr r12
/* 80283E1C 00280D5C  4E 80 04 21 */	bctrl 
.L_80283E20:
/* 80283E20 00280D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283E24 00280D64  7C 08 03 A6 */	mtlr r0
/* 80283E28 00280D68  38 21 00 10 */	addi r1, r1, 0x10
/* 80283E2C 00280D6C  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar9StateLandFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar9StateLandFPQ24Game9EnemyBase, global
/* 80283E30 00280D70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283E34 00280D74  7C 08 02 A6 */	mflr r0
/* 80283E38 00280D78  7C 83 23 78 */	mr r3, r4
/* 80283E3C 00280D7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283E40 00280D80  4B E7 DB 3D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80283E44 00280D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283E48 00280D88  7C 08 03 A6 */	mtlr r0
/* 80283E4C 00280D8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80283E50 00280D90  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar9StateLandFPQ24Game9EnemyBase

.fn init__Q34Game3Mar11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80283E54 00280D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283E58 00280D98  7C 08 02 A6 */	mflr r0
/* 80283E5C 00280D9C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283E60 00280DA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283E64 00280DA4  38 00 00 00 */	li r0, 0
/* 80283E68 00280DA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283E6C 00280DAC  7C 9F 23 78 */	mr r31, r4
/* 80283E70 00280DB0  7F E3 FB 78 */	mr r3, r31
/* 80283E74 00280DB4  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80283E78 00280DB8  90 04 02 30 */	stw r0, 0x230(r4)
/* 80283E7C 00280DBC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80283E80 00280DC0  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80283E84 00280DC4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80283E88 00280DC8  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80283E8C 00280DCC  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80283E90 00280DD0  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80283E94 00280DD4  4B E7 DB 39 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80283E98 00280DD8  7F E3 FB 78 */	mr r3, r31
/* 80283E9C 00280DDC  38 80 00 04 */	li r4, 4
/* 80283EA0 00280DE0  38 A0 00 00 */	li r5, 0
/* 80283EA4 00280DE4  4B E8 11 61 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80283EA8 00280DE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283EAC 00280DEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283EB0 00280DF0  7C 08 03 A6 */	mtlr r0
/* 80283EB4 00280DF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80283EB8 00280DF8  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar11StateGroundFPQ24Game9EnemyBase, global
/* 80283EBC 00280DFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283EC0 00280E00  7C 08 02 A6 */	mflr r0
/* 80283EC4 00280E04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283EC8 00280E08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80283ECC 00280E0C  7C 9F 23 78 */	mr r31, r4
/* 80283ED0 00280E10  93 C1 00 08 */	stw r30, 8(r1)
/* 80283ED4 00280E14  7C 7E 1B 78 */	mr r30, r3
/* 80283ED8 00280E18  80 04 01 F4 */	lwz r0, 0x1f4(r4)
/* 80283EDC 00280E1C  2C 00 00 00 */	cmpwi r0, 0
/* 80283EE0 00280E20  41 82 00 18 */	beq .L_80283EF8
/* 80283EE4 00280E24  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80283EE8 00280E28  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80283EEC 00280E2C  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 80283EF0 00280E30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283EF4 00280E34  40 81 00 0C */	ble .L_80283F00
.L_80283EF8:
/* 80283EF8 00280E38  7F E3 FB 78 */	mr r3, r31
/* 80283EFC 00280E3C  4B E8 13 A5 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80283F00:
/* 80283F00 00280E40  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80283F04 00280E44  C0 5F 02 C0 */	lfs f2, 0x2c0(r31)
/* 80283F08 00280E48  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80283F0C 00280E4C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80283F10 00280E50  EC 22 08 2A */	fadds f1, f2, f1
/* 80283F14 00280E54  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 80283F18 00280E58  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80283F1C 00280E5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80283F20 00280E60  4C 40 13 82 */	cror 2, 0, 2
/* 80283F24 00280E64  40 82 00 28 */	bne .L_80283F4C
/* 80283F28 00280E68  7F C3 F3 78 */	mr r3, r30
/* 80283F2C 00280E6C  7F E4 FB 78 */	mr r4, r31
/* 80283F30 00280E70  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283F34 00280E74  38 A0 00 00 */	li r5, 0
/* 80283F38 00280E78  38 C0 00 00 */	li r6, 0
/* 80283F3C 00280E7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283F40 00280E80  7D 89 03 A6 */	mtctr r12
/* 80283F44 00280E84  4E 80 04 21 */	bctrl 
/* 80283F48 00280E88  48 00 00 70 */	b .L_80283FB8
.L_80283F4C:
/* 80283F4C 00280E8C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80283F50 00280E90  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80283F54 00280E94  28 00 00 00 */	cmplwi r0, 0
/* 80283F58 00280E98  41 82 00 60 */	beq .L_80283FB8
/* 80283F5C 00280E9C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80283F60 00280EA0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80283F64 00280EA4  40 82 00 54 */	bne .L_80283FB8
/* 80283F68 00280EA8  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 80283F6C 00280EAC  2C 00 00 00 */	cmpwi r0, 0
/* 80283F70 00280EB0  41 82 00 28 */	beq .L_80283F98
/* 80283F74 00280EB4  7F C3 F3 78 */	mr r3, r30
/* 80283F78 00280EB8  7F E4 FB 78 */	mr r4, r31
/* 80283F7C 00280EBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283F80 00280EC0  38 A0 00 0B */	li r5, 0xb
/* 80283F84 00280EC4  38 C0 00 00 */	li r6, 0
/* 80283F88 00280EC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283F8C 00280ECC  7D 89 03 A6 */	mtctr r12
/* 80283F90 00280ED0  4E 80 04 21 */	bctrl 
/* 80283F94 00280ED4  48 00 00 24 */	b .L_80283FB8
.L_80283F98:
/* 80283F98 00280ED8  7F C3 F3 78 */	mr r3, r30
/* 80283F9C 00280EDC  7F E4 FB 78 */	mr r4, r31
/* 80283FA0 00280EE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80283FA4 00280EE4  38 A0 00 09 */	li r5, 9
/* 80283FA8 00280EE8  38 C0 00 00 */	li r6, 0
/* 80283FAC 00280EEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80283FB0 00280EF0  7D 89 03 A6 */	mtctr r12
/* 80283FB4 00280EF4  4E 80 04 21 */	bctrl 
.L_80283FB8:
/* 80283FB8 00280EF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283FBC 00280EFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80283FC0 00280F00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80283FC4 00280F04  7C 08 03 A6 */	mtlr r0
/* 80283FC8 00280F08  38 21 00 10 */	addi r1, r1, 0x10
/* 80283FCC 00280F0C  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar11StateGroundFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar11StateGroundFPQ24Game9EnemyBase, global
/* 80283FD0 00280F10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283FD4 00280F14  7C 08 02 A6 */	mflr r0
/* 80283FD8 00280F18  7C 83 23 78 */	mr r3, r4
/* 80283FDC 00280F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80283FE0 00280F20  4B E7 D9 9D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80283FE4 00280F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80283FE8 00280F28  7C 08 03 A6 */	mtlr r0
/* 80283FEC 00280F2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80283FF0 00280F30  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar11StateGroundFPQ24Game9EnemyBase

.fn init__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80283FF4 00280F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80283FF8 00280F38  7C 08 02 A6 */	mflr r0
/* 80283FFC 00280F3C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80284000 00280F40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284004 00280F44  38 00 00 00 */	li r0, 0
/* 80284008 00280F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028400C 00280F4C  7C 9F 23 78 */	mr r31, r4
/* 80284010 00280F50  7F E3 FB 78 */	mr r3, r31
/* 80284014 00280F54  90 04 02 30 */	stw r0, 0x230(r4)
/* 80284018 00280F58  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8028401C 00280F5C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80284020 00280F60  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80284024 00280F64  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80284028 00280F68  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8028402C 00280F6C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80284030 00280F70  4B E7 D9 9D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80284034 00280F74  7F E3 FB 78 */	mr r3, r31
/* 80284038 00280F78  38 80 00 07 */	li r4, 7
/* 8028403C 00280F7C  38 A0 00 00 */	li r5, 0
/* 80284040 00280F80  4B E8 0F C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80284044 00280F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284048 00280F88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028404C 00280F8C  7C 08 03 A6 */	mtlr r0
/* 80284050 00280F90  38 21 00 10 */	addi r1, r1, 0x10
/* 80284054 00280F94  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBase, global
/* 80284058 00280F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028405C 00280F9C  7C 08 02 A6 */	mflr r0
/* 80284060 00280FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284064 00280FA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284068 00280FA8  7C 9F 23 78 */	mr r31, r4
/* 8028406C 00280FAC  93 C1 00 08 */	stw r30, 8(r1)
/* 80284070 00280FB0  7C 7E 1B 78 */	mr r30, r3
/* 80284074 00280FB4  7F E3 FB 78 */	mr r3, r31
/* 80284078 00280FB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028407C 00280FBC  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80284080 00280FC0  7D 89 03 A6 */	mtctr r12
/* 80284084 00280FC4  4E 80 04 21 */	bctrl 
/* 80284088 00280FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028408C 00280FCC  41 82 00 14 */	beq .L_802840A0
/* 80284090 00280FD0  7F E3 FB 78 */	mr r3, r31
/* 80284094 00280FD4  4B FF BC 09 */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 80284098 00280FD8  7F E3 FB 78 */	mr r3, r31
/* 8028409C 00280FDC  4B FF BF 35 */	bl subShadowOffset__Q34Game3Mar3ObjFv
.L_802840A0:
/* 802840A0 00280FE0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802840A4 00280FE4  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 802840A8 00280FE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802840AC 00280FEC  4C 40 13 82 */	cror 2, 0, 2
/* 802840B0 00280FF0  40 82 00 28 */	bne .L_802840D8
/* 802840B4 00280FF4  7F C3 F3 78 */	mr r3, r30
/* 802840B8 00280FF8  7F E4 FB 78 */	mr r4, r31
/* 802840BC 00280FFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802840C0 00281000  38 A0 00 00 */	li r5, 0
/* 802840C4 00281004  38 C0 00 00 */	li r6, 0
/* 802840C8 00281008  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802840CC 0028100C  7D 89 03 A6 */	mtctr r12
/* 802840D0 00281010  4E 80 04 21 */	bctrl 
/* 802840D4 00281014  48 00 00 58 */	b .L_8028412C
.L_802840D8:
/* 802840D8 00281018  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802840DC 0028101C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802840E0 00281020  28 00 00 00 */	cmplwi r0, 0
/* 802840E4 00281024  41 82 00 48 */	beq .L_8028412C
/* 802840E8 00281028  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802840EC 0028102C  28 00 00 02 */	cmplwi r0, 2
/* 802840F0 00281030  40 82 00 14 */	bne .L_80284104
/* 802840F4 00281034  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802840F8 00281038  60 00 00 04 */	ori r0, r0, 4
/* 802840FC 0028103C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80284100 00281040  48 00 00 2C */	b .L_8028412C
.L_80284104:
/* 80284104 00281044  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80284108 00281048  40 82 00 24 */	bne .L_8028412C
/* 8028410C 0028104C  7F C3 F3 78 */	mr r3, r30
/* 80284110 00281050  7F E4 FB 78 */	mr r4, r31
/* 80284114 00281054  81 9E 00 00 */	lwz r12, 0(r30)
/* 80284118 00281058  38 A0 00 01 */	li r5, 1
/* 8028411C 0028105C  38 C0 00 00 */	li r6, 0
/* 80284120 00281060  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80284124 00281064  7D 89 03 A6 */	mtctr r12
/* 80284128 00281068  4E 80 04 21 */	bctrl 
.L_8028412C:
/* 8028412C 0028106C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284130 00281070  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284134 00281074  83 C1 00 08 */	lwz r30, 8(r1)
/* 80284138 00281078  7C 08 03 A6 */	mtlr r0
/* 8028413C 0028107C  38 21 00 10 */	addi r1, r1, 0x10
/* 80284140 00281080  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBase, global
/* 80284144 00281084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284148 00281088  7C 08 02 A6 */	mflr r0
/* 8028414C 0028108C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80284150 00281090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284154 00281094  7C 9F 23 78 */	mr r31, r4
/* 80284158 00281098  7F E3 FB 78 */	mr r3, r31
/* 8028415C 0028109C  4B FF BE 35 */	bl resetShadowOffset__Q34Game3Mar3ObjFv
/* 80284160 002810A0  7F E3 FB 78 */	mr r3, r31
/* 80284164 002810A4  4B E7 D8 19 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80284168 002810A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028416C 002810AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284170 002810B0  7C 08 03 A6 */	mtlr r0
/* 80284174 002810B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80284178 002810B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar12StateTakeOffFPQ24Game9EnemyBase

.fn init__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028417C 002810BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284180 002810C0  7C 08 02 A6 */	mflr r0
/* 80284184 002810C4  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80284188 002810C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028418C 002810CC  38 00 00 00 */	li r0, 0
/* 80284190 002810D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284194 002810D4  7C 9F 23 78 */	mr r31, r4
/* 80284198 002810D8  7F E3 FB 78 */	mr r3, r31
/* 8028419C 002810DC  90 04 02 30 */	stw r0, 0x230(r4)
/* 802841A0 002810E0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802841A4 002810E4  60 00 00 04 */	ori r0, r0, 4
/* 802841A8 002810E8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802841AC 002810EC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802841B0 002810F0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802841B4 002810F4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802841B8 002810F8  4B E7 D8 15 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802841BC 002810FC  7F E3 FB 78 */	mr r3, r31
/* 802841C0 00281100  38 80 00 02 */	li r4, 2
/* 802841C4 00281104  38 A0 00 00 */	li r5, 0
/* 802841C8 00281108  4B E8 0E 3D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802841CC 0028110C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802841D0 00281110  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802841D4 00281114  7C 08 03 A6 */	mtlr r0
/* 802841D8 00281118  38 21 00 10 */	addi r1, r1, 0x10
/* 802841DC 0028111C  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBase, global
/* 802841E0 00281120  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802841E4 00281124  7C 08 02 A6 */	mflr r0
/* 802841E8 00281128  90 01 00 14 */	stw r0, 0x14(r1)
/* 802841EC 0028112C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802841F0 00281130  7C 9F 23 78 */	mr r31, r4
/* 802841F4 00281134  93 C1 00 08 */	stw r30, 8(r1)
/* 802841F8 00281138  7C 7E 1B 78 */	mr r30, r3
/* 802841FC 0028113C  7F E3 FB 78 */	mr r3, r31
/* 80284200 00281140  4B FF BA 9D */	bl setHeightVelocity__Q34Game3Mar3ObjFv
/* 80284204 00281144  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80284208 00281148  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 8028420C 0028114C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80284210 00281150  4C 40 13 82 */	cror 2, 0, 2
/* 80284214 00281154  40 82 00 28 */	bne .L_8028423C
/* 80284218 00281158  7F C3 F3 78 */	mr r3, r30
/* 8028421C 0028115C  7F E4 FB 78 */	mr r4, r31
/* 80284220 00281160  81 9E 00 00 */	lwz r12, 0(r30)
/* 80284224 00281164  38 A0 00 00 */	li r5, 0
/* 80284228 00281168  38 C0 00 00 */	li r6, 0
/* 8028422C 0028116C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80284230 00281170  7D 89 03 A6 */	mtctr r12
/* 80284234 00281174  4E 80 04 21 */	bctrl 
/* 80284238 00281178  48 00 00 74 */	b .L_802842AC
.L_8028423C:
/* 8028423C 0028117C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80284240 00281180  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80284244 00281184  28 00 00 00 */	cmplwi r0, 0
/* 80284248 00281188  41 82 00 64 */	beq .L_802842AC
/* 8028424C 0028118C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80284250 00281190  28 00 00 02 */	cmplwi r0, 2
/* 80284254 00281194  40 82 00 30 */	bne .L_80284284
/* 80284258 00281198  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8028425C 0028119C  7F E3 FB 78 */	mr r3, r31
/* 80284260 002811A0  C0 82 D3 58 */	lfs f4, lbl_8051B6B8@sda21(r2)
/* 80284264 002811A4  38 80 00 00 */	li r4, 0
/* 80284268 002811A8  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 8028426C 002811AC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80284270 002811B0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80284274 002811B4  4B E8 EE A9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80284278 002811B8  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 8028427C 002811BC  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80284280 002811C0  48 00 00 2C */	b .L_802842AC
.L_80284284:
/* 80284284 002811C4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80284288 002811C8  40 82 00 24 */	bne .L_802842AC
/* 8028428C 002811CC  7F C3 F3 78 */	mr r3, r30
/* 80284290 002811D0  7F E4 FB 78 */	mr r4, r31
/* 80284294 002811D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80284298 002811D8  38 A0 00 01 */	li r5, 1
/* 8028429C 002811DC  38 C0 00 00 */	li r6, 0
/* 802842A0 002811E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802842A4 002811E4  7D 89 03 A6 */	mtctr r12
/* 802842A8 002811E8  4E 80 04 21 */	bctrl 
.L_802842AC:
/* 802842AC 002811EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802842B0 002811F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802842B4 002811F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802842B8 002811F8  7C 08 03 A6 */	mtlr r0
/* 802842BC 002811FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802842C0 00281200  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBase, global
/* 802842C4 00281204  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802842C8 00281208  7C 08 02 A6 */	mflr r0
/* 802842CC 0028120C  7C 83 23 78 */	mr r3, r4
/* 802842D0 00281210  90 01 00 14 */	stw r0, 0x14(r1)
/* 802842D4 00281214  4B E7 D6 A9 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802842D8 00281218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802842DC 0028121C  7C 08 03 A6 */	mtlr r0
/* 802842E0 00281220  38 21 00 10 */	addi r1, r1, 0x10
/* 802842E4 00281224  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar13StateFlyFlickFPQ24Game9EnemyBase

.fn init__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802842E8 00281228  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802842EC 0028122C  7C 08 02 A6 */	mflr r0
/* 802842F0 00281230  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 802842F4 00281234  90 01 00 14 */	stw r0, 0x14(r1)
/* 802842F8 00281238  38 00 00 00 */	li r0, 0
/* 802842FC 0028123C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284300 00281240  7C 9F 23 78 */	mr r31, r4
/* 80284304 00281244  7F E3 FB 78 */	mr r3, r31
/* 80284308 00281248  90 04 02 30 */	stw r0, 0x230(r4)
/* 8028430C 0028124C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80284310 00281250  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80284314 00281254  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80284318 00281258  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8028431C 0028125C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80284320 00281260  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80284324 00281264  4B E7 D6 A9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80284328 00281268  7F E3 FB 78 */	mr r3, r31
/* 8028432C 0028126C  38 80 00 03 */	li r4, 3
/* 80284330 00281270  38 A0 00 00 */	li r5, 0
/* 80284334 00281274  4B E8 0C D1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80284338 00281278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028433C 0028127C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284340 00281280  7C 08 03 A6 */	mtlr r0
/* 80284344 00281284  38 21 00 10 */	addi r1, r1, 0x10
/* 80284348 00281288  4E 80 00 20 */	blr 
.endfn init__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBase, global
/* 8028434C 0028128C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284350 00281290  7C 08 02 A6 */	mflr r0
/* 80284354 00281294  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80284358 00281298  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028435C 0028129C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80284360 002812A0  7C 9F 23 78 */	mr r31, r4
/* 80284364 002812A4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80284368 002812A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028436C 002812AC  4C 40 13 82 */	cror 2, 0, 2
/* 80284370 002812B0  40 82 00 20 */	bne .L_80284390
/* 80284374 002812B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80284378 002812B8  38 A0 00 00 */	li r5, 0
/* 8028437C 002812BC  38 C0 00 00 */	li r6, 0
/* 80284380 002812C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80284384 002812C4  7D 89 03 A6 */	mtctr r12
/* 80284388 002812C8  4E 80 04 21 */	bctrl 
/* 8028438C 002812CC  48 00 00 AC */	b .L_80284438
.L_80284390:
/* 80284390 002812D0  80 BF 01 88 */	lwz r5, 0x188(r31)
/* 80284394 002812D4  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80284398 002812D8  28 00 00 00 */	cmplwi r0, 0
/* 8028439C 002812DC  41 82 00 9C */	beq .L_80284438
/* 802843A0 002812E0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802843A4 002812E4  28 00 00 02 */	cmplwi r0, 2
/* 802843A8 002812E8  40 82 00 70 */	bne .L_80284418
/* 802843AC 002812EC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802843B0 002812F0  7F E3 FB 78 */	mr r3, r31
/* 802843B4 002812F4  C0 82 D3 58 */	lfs f4, lbl_8051B6B8@sda21(r2)
/* 802843B8 002812F8  38 80 00 00 */	li r4, 0
/* 802843BC 002812FC  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802843C0 00281300  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802843C4 00281304  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802843C8 00281308  4B E8 F3 C9 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802843CC 0028130C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802843D0 00281310  7F E3 FB 78 */	mr r3, r31
/* 802843D4 00281314  C0 82 D3 58 */	lfs f4, lbl_8051B6B8@sda21(r2)
/* 802843D8 00281318  38 80 00 00 */	li r4, 0
/* 802843DC 0028131C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802843E0 00281320  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802843E4 00281324  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802843E8 00281328  4B E8 F0 ED */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802843EC 0028132C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802843F0 00281330  7F E3 FB 78 */	mr r3, r31
/* 802843F4 00281334  C0 82 D3 58 */	lfs f4, lbl_8051B6B8@sda21(r2)
/* 802843F8 00281338  38 80 00 00 */	li r4, 0
/* 802843FC 0028133C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 80284400 00281340  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80284404 00281344  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80284408 00281348  4B E8 ED 15 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8028440C 0028134C  C0 02 D3 28 */	lfs f0, lbl_8051B688@sda21(r2)
/* 80284410 00281350  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80284414 00281354  48 00 00 24 */	b .L_80284438
.L_80284418:
/* 80284418 00281358  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8028441C 0028135C  40 82 00 1C */	bne .L_80284438
/* 80284420 00281360  81 83 00 00 */	lwz r12, 0(r3)
/* 80284424 00281364  38 A0 00 09 */	li r5, 9
/* 80284428 00281368  38 C0 00 00 */	li r6, 0
/* 8028442C 0028136C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80284430 00281370  7D 89 03 A6 */	mtctr r12
/* 80284434 00281374  4E 80 04 21 */	bctrl 
.L_80284438:
/* 80284438 00281378  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028443C 0028137C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80284440 00281380  7C 08 03 A6 */	mtlr r0
/* 80284444 00281384  38 21 00 10 */	addi r1, r1, 0x10
/* 80284448 00281388  4E 80 00 20 */	blr 
.endfn exec__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBase, global
/* 8028444C 0028138C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80284450 00281390  7C 08 02 A6 */	mflr r0
/* 80284454 00281394  7C 83 23 78 */	mr r3, r4
/* 80284458 00281398  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028445C 0028139C  4B E7 D5 21 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80284460 002813A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80284464 002813A4  7C 08 03 A6 */	mtlr r0
/* 80284468 002813A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028446C 002813AC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game3Mar16StateGroundFlickFPQ24Game9EnemyBase
