.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80484D08, local
	.asciz "jumpwait"
.endobj lbl_80484D08
.balign 4
.obj lbl_80484D14, local
	.asciz "turntohome"
.endobj lbl_80484D14

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Frog11StateGoHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog11StateGoHome
.obj __vt__Q34Game4Frog15StateTurnToHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog15StateTurnToHome
.obj __vt__Q34Game4Frog9StateFail, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog9StateFailFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog9StateFailFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog9StateFailFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog9StateFail
.obj __vt__Q34Game4Frog11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog11StateAttack
.obj __vt__Q34Game4Frog9StateFall, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog9StateFall
.obj __vt__Q34Game4Frog13StateJumpWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog13StateJumpWait
.obj __vt__Q34Game4Frog9StateJump, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog9StateJumpFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog9StateJumpFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog9StateJumpFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog9StateJump
.obj __vt__Q34Game4Frog9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog9StateTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog9StateTurn
.obj __vt__Q34Game4Frog9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog9StateWait
.obj __vt__Q34Game4Frog9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Frog9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Frog9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog9StateDead
.obj __vt__Q34Game4Frog5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Frog5State
.obj __vt__Q34Game4Frog3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Frog3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game4Frog3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AA28, local
	.asciz "dead"
.endobj lbl_8051AA28
.balign 4
.obj lbl_8051AA30, local
	.asciz "wait"
.endobj lbl_8051AA30
.balign 4
.obj lbl_8051AA38, local
	.asciz "turn"
.endobj lbl_8051AA38
.balign 4
.obj lbl_8051AA40, local
	.asciz "jump"
.endobj lbl_8051AA40
.balign 4
.obj lbl_8051AA48, local
	.asciz "fall"
.endobj lbl_8051AA48
.balign 4
.obj lbl_8051AA50, local
	.asciz "attack"
.endobj lbl_8051AA50
.balign 4
.obj lbl_8051AA58, local
	.asciz "fail"
.endobj lbl_8051AA58
.balign 4
.obj lbl_8051AA60, local
	.asciz "gohome"
.endobj lbl_8051AA60
.balign 4
.obj lbl_8051AA68, local
	.float 0.0
.endobj lbl_8051AA68
.obj lbl_8051AA6C, local
	.float 0.62
.endobj lbl_8051AA6C
.obj lbl_8051AA70, local
	.float 1.0
.endobj lbl_8051AA70
.obj lbl_8051AA74, local
	.float 32768.0
.endobj lbl_8051AA74
.obj lbl_8051AA78, local
	.float 0.2
.endobj lbl_8051AA78
.balign 8
.obj lbl_8051AA80, local
	.8byte 0x4330000080000000
.endobj lbl_8051AA80
.obj lbl_8051AA88, local # pi
	.float 3.1415927
.endobj lbl_8051AA88
.obj lbl_8051AA8C, local
	.float 0.0055555557
.endobj lbl_8051AA8C
.obj lbl_8051AA90, local
	.float 0.17453294
.endobj lbl_8051AA90
.obj lbl_8051AA94, local
	.float -1000.0
.endobj lbl_8051AA94
.obj lbl_8051AA98, local
	.float 7.5
.endobj lbl_8051AA98
.obj lbl_8051AA9C, local
	.float 0.5
.endobj lbl_8051AA9C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game4Frog3FSMFPQ24Game9EnemyBase, global
/* 802563C4 00253304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802563C8 00253308  7C 08 02 A6 */	mflr r0
/* 802563CC 0025330C  38 80 00 0A */	li r4, 0xa
/* 802563D0 00253310  90 01 00 14 */	stw r0, 0x14(r1)
/* 802563D4 00253314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802563D8 00253318  7C 7F 1B 78 */	mr r31, r3
/* 802563DC 0025331C  4B ED A4 89 */	bl create__Q24Game17EnemyStateMachineFi
/* 802563E0 00253320  38 60 00 10 */	li r3, 0x10
/* 802563E4 00253324  4B DC DA C1 */	bl __nw__FUl
/* 802563E8 00253328  7C 64 1B 79 */	or. r4, r3, r3
/* 802563EC 0025332C  41 82 00 3C */	beq .L_80256428
/* 802563F0 00253330  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802563F4 00253334  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 802563F8 00253338  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802563FC 0025333C  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog9StateDead@ha
/* 80256400 00253340  90 04 00 00 */	stw r0, 0(r4)
/* 80256404 00253344  38 E0 00 00 */	li r7, 0
/* 80256408 00253348  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 8025640C 0025334C  38 A2 C6 C8 */	addi r5, r2, lbl_8051AA28@sda21
/* 80256410 00253350  90 E4 00 04 */	stw r7, 4(r4)
/* 80256414 00253354  38 03 22 CC */	addi r0, r3, __vt__Q34Game4Frog9StateDead@l
/* 80256418 00253358  90 E4 00 08 */	stw r7, 8(r4)
/* 8025641C 0025335C  90 C4 00 00 */	stw r6, 0(r4)
/* 80256420 00253360  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256424 00253364  90 04 00 00 */	stw r0, 0(r4)
.L_80256428:
/* 80256428 00253368  7F E3 FB 78 */	mr r3, r31
/* 8025642C 0025336C  4B ED A4 DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80256430 00253370  38 60 00 10 */	li r3, 0x10
/* 80256434 00253374  4B DC DA 71 */	bl __nw__FUl
/* 80256438 00253378  7C 64 1B 79 */	or. r4, r3, r3
/* 8025643C 0025337C  41 82 00 40 */	beq .L_8025647C
/* 80256440 00253380  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80256444 00253384  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 80256448 00253388  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025644C 0025338C  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog9StateWait@ha
/* 80256450 00253390  90 04 00 00 */	stw r0, 0(r4)
/* 80256454 00253394  38 00 00 01 */	li r0, 1
/* 80256458 00253398  38 E0 00 00 */	li r7, 0
/* 8025645C 0025339C  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 80256460 002533A0  90 04 00 04 */	stw r0, 4(r4)
/* 80256464 002533A4  38 A2 C6 D0 */	addi r5, r2, lbl_8051AA30@sda21
/* 80256468 002533A8  38 03 22 A8 */	addi r0, r3, __vt__Q34Game4Frog9StateWait@l
/* 8025646C 002533AC  90 E4 00 08 */	stw r7, 8(r4)
/* 80256470 002533B0  90 C4 00 00 */	stw r6, 0(r4)
/* 80256474 002533B4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256478 002533B8  90 04 00 00 */	stw r0, 0(r4)
.L_8025647C:
/* 8025647C 002533BC  7F E3 FB 78 */	mr r3, r31
/* 80256480 002533C0  4B ED A4 89 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80256484 002533C4  38 60 00 10 */	li r3, 0x10
/* 80256488 002533C8  4B DC DA 1D */	bl __nw__FUl
/* 8025648C 002533CC  7C 64 1B 79 */	or. r4, r3, r3
/* 80256490 002533D0  41 82 00 40 */	beq .L_802564D0
/* 80256494 002533D4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80256498 002533D8  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 8025649C 002533DC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802564A0 002533E0  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog9StateTurn@ha
/* 802564A4 002533E4  90 04 00 00 */	stw r0, 0(r4)
/* 802564A8 002533E8  38 00 00 02 */	li r0, 2
/* 802564AC 002533EC  38 E0 00 00 */	li r7, 0
/* 802564B0 002533F0  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 802564B4 002533F4  90 04 00 04 */	stw r0, 4(r4)
/* 802564B8 002533F8  38 A2 C6 D8 */	addi r5, r2, lbl_8051AA38@sda21
/* 802564BC 002533FC  38 03 22 84 */	addi r0, r3, __vt__Q34Game4Frog9StateTurn@l
/* 802564C0 00253400  90 E4 00 08 */	stw r7, 8(r4)
/* 802564C4 00253404  90 C4 00 00 */	stw r6, 0(r4)
/* 802564C8 00253408  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802564CC 0025340C  90 04 00 00 */	stw r0, 0(r4)
.L_802564D0:
/* 802564D0 00253410  7F E3 FB 78 */	mr r3, r31
/* 802564D4 00253414  4B ED A4 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802564D8 00253418  38 60 00 10 */	li r3, 0x10
/* 802564DC 0025341C  4B DC D9 C9 */	bl __nw__FUl
/* 802564E0 00253420  7C 64 1B 79 */	or. r4, r3, r3
/* 802564E4 00253424  41 82 00 40 */	beq .L_80256524
/* 802564E8 00253428  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802564EC 0025342C  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 802564F0 00253430  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802564F4 00253434  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog9StateJump@ha
/* 802564F8 00253438  90 04 00 00 */	stw r0, 0(r4)
/* 802564FC 0025343C  38 00 00 03 */	li r0, 3
/* 80256500 00253440  38 E0 00 00 */	li r7, 0
/* 80256504 00253444  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 80256508 00253448  90 04 00 04 */	stw r0, 4(r4)
/* 8025650C 0025344C  38 A2 C6 E0 */	addi r5, r2, lbl_8051AA40@sda21
/* 80256510 00253450  38 03 22 60 */	addi r0, r3, __vt__Q34Game4Frog9StateJump@l
/* 80256514 00253454  90 E4 00 08 */	stw r7, 8(r4)
/* 80256518 00253458  90 C4 00 00 */	stw r6, 0(r4)
/* 8025651C 0025345C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256520 00253460  90 04 00 00 */	stw r0, 0(r4)
.L_80256524:
/* 80256524 00253464  7F E3 FB 78 */	mr r3, r31
/* 80256528 00253468  4B ED A3 E1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025652C 0025346C  38 60 00 10 */	li r3, 0x10
/* 80256530 00253470  4B DC D9 75 */	bl __nw__FUl
/* 80256534 00253474  7C 64 1B 79 */	or. r4, r3, r3
/* 80256538 00253478  41 82 00 44 */	beq .L_8025657C
/* 8025653C 0025347C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80256540 00253480  3C C0 80 4C */	lis r6, __vt__Q34Game4Frog5State@ha
/* 80256544 00253484  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80256548 00253488  3C A0 80 48 */	lis r5, lbl_80484D08@ha
/* 8025654C 0025348C  90 04 00 00 */	stw r0, 0(r4)
/* 80256550 00253490  38 00 00 04 */	li r0, 4
/* 80256554 00253494  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog13StateJumpWait@ha
/* 80256558 00253498  38 E0 00 00 */	li r7, 0
/* 8025655C 0025349C  90 04 00 04 */	stw r0, 4(r4)
/* 80256560 002534A0  38 C6 22 F0 */	addi r6, r6, __vt__Q34Game4Frog5State@l
/* 80256564 002534A4  38 A5 4D 08 */	addi r5, r5, lbl_80484D08@l
/* 80256568 002534A8  38 03 22 3C */	addi r0, r3, __vt__Q34Game4Frog13StateJumpWait@l
/* 8025656C 002534AC  90 E4 00 08 */	stw r7, 8(r4)
/* 80256570 002534B0  90 C4 00 00 */	stw r6, 0(r4)
/* 80256574 002534B4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256578 002534B8  90 04 00 00 */	stw r0, 0(r4)
.L_8025657C:
/* 8025657C 002534BC  7F E3 FB 78 */	mr r3, r31
/* 80256580 002534C0  4B ED A3 89 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80256584 002534C4  38 60 00 10 */	li r3, 0x10
/* 80256588 002534C8  4B DC D9 1D */	bl __nw__FUl
/* 8025658C 002534CC  7C 64 1B 79 */	or. r4, r3, r3
/* 80256590 002534D0  41 82 00 40 */	beq .L_802565D0
/* 80256594 002534D4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80256598 002534D8  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 8025659C 002534DC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802565A0 002534E0  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog9StateFall@ha
/* 802565A4 002534E4  90 04 00 00 */	stw r0, 0(r4)
/* 802565A8 002534E8  38 00 00 05 */	li r0, 5
/* 802565AC 002534EC  38 E0 00 00 */	li r7, 0
/* 802565B0 002534F0  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 802565B4 002534F4  90 04 00 04 */	stw r0, 4(r4)
/* 802565B8 002534F8  38 A2 C6 E8 */	addi r5, r2, lbl_8051AA48@sda21
/* 802565BC 002534FC  38 03 22 18 */	addi r0, r3, __vt__Q34Game4Frog9StateFall@l
/* 802565C0 00253500  90 E4 00 08 */	stw r7, 8(r4)
/* 802565C4 00253504  90 C4 00 00 */	stw r6, 0(r4)
/* 802565C8 00253508  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802565CC 0025350C  90 04 00 00 */	stw r0, 0(r4)
.L_802565D0:
/* 802565D0 00253510  7F E3 FB 78 */	mr r3, r31
/* 802565D4 00253514  4B ED A3 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802565D8 00253518  38 60 00 10 */	li r3, 0x10
/* 802565DC 0025351C  4B DC D8 C9 */	bl __nw__FUl
/* 802565E0 00253520  7C 64 1B 79 */	or. r4, r3, r3
/* 802565E4 00253524  41 82 00 40 */	beq .L_80256624
/* 802565E8 00253528  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802565EC 0025352C  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 802565F0 00253530  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802565F4 00253534  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog11StateAttack@ha
/* 802565F8 00253538  90 04 00 00 */	stw r0, 0(r4)
/* 802565FC 0025353C  38 00 00 06 */	li r0, 6
/* 80256600 00253540  38 E0 00 00 */	li r7, 0
/* 80256604 00253544  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 80256608 00253548  90 04 00 04 */	stw r0, 4(r4)
/* 8025660C 0025354C  38 A2 C6 F0 */	addi r5, r2, lbl_8051AA50@sda21
/* 80256610 00253550  38 03 21 F4 */	addi r0, r3, __vt__Q34Game4Frog11StateAttack@l
/* 80256614 00253554  90 E4 00 08 */	stw r7, 8(r4)
/* 80256618 00253558  90 C4 00 00 */	stw r6, 0(r4)
/* 8025661C 0025355C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256620 00253560  90 04 00 00 */	stw r0, 0(r4)
.L_80256624:
/* 80256624 00253564  7F E3 FB 78 */	mr r3, r31
/* 80256628 00253568  4B ED A2 E1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025662C 0025356C  38 60 00 10 */	li r3, 0x10
/* 80256630 00253570  4B DC D8 75 */	bl __nw__FUl
/* 80256634 00253574  7C 64 1B 79 */	or. r4, r3, r3
/* 80256638 00253578  41 82 00 40 */	beq .L_80256678
/* 8025663C 0025357C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80256640 00253580  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 80256644 00253584  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80256648 00253588  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog9StateFail@ha
/* 8025664C 0025358C  90 04 00 00 */	stw r0, 0(r4)
/* 80256650 00253590  38 00 00 07 */	li r0, 7
/* 80256654 00253594  38 E0 00 00 */	li r7, 0
/* 80256658 00253598  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 8025665C 0025359C  90 04 00 04 */	stw r0, 4(r4)
/* 80256660 002535A0  38 A2 C6 F8 */	addi r5, r2, lbl_8051AA58@sda21
/* 80256664 002535A4  38 03 21 D0 */	addi r0, r3, __vt__Q34Game4Frog9StateFail@l
/* 80256668 002535A8  90 E4 00 08 */	stw r7, 8(r4)
/* 8025666C 002535AC  90 C4 00 00 */	stw r6, 0(r4)
/* 80256670 002535B0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256674 002535B4  90 04 00 00 */	stw r0, 0(r4)
.L_80256678:
/* 80256678 002535B8  7F E3 FB 78 */	mr r3, r31
/* 8025667C 002535BC  4B ED A2 8D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80256680 002535C0  38 60 00 10 */	li r3, 0x10
/* 80256684 002535C4  4B DC D8 21 */	bl __nw__FUl
/* 80256688 002535C8  7C 64 1B 79 */	or. r4, r3, r3
/* 8025668C 002535CC  41 82 00 44 */	beq .L_802566D0
/* 80256690 002535D0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80256694 002535D4  3C C0 80 4C */	lis r6, __vt__Q34Game4Frog5State@ha
/* 80256698 002535D8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025669C 002535DC  3C A0 80 48 */	lis r5, lbl_80484D14@ha
/* 802566A0 002535E0  90 04 00 00 */	stw r0, 0(r4)
/* 802566A4 002535E4  38 00 00 08 */	li r0, 8
/* 802566A8 002535E8  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog15StateTurnToHome@ha
/* 802566AC 002535EC  38 E0 00 00 */	li r7, 0
/* 802566B0 002535F0  90 04 00 04 */	stw r0, 4(r4)
/* 802566B4 002535F4  38 C6 22 F0 */	addi r6, r6, __vt__Q34Game4Frog5State@l
/* 802566B8 002535F8  38 A5 4D 14 */	addi r5, r5, lbl_80484D14@l
/* 802566BC 002535FC  38 03 21 AC */	addi r0, r3, __vt__Q34Game4Frog15StateTurnToHome@l
/* 802566C0 00253600  90 E4 00 08 */	stw r7, 8(r4)
/* 802566C4 00253604  90 C4 00 00 */	stw r6, 0(r4)
/* 802566C8 00253608  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802566CC 0025360C  90 04 00 00 */	stw r0, 0(r4)
.L_802566D0:
/* 802566D0 00253610  7F E3 FB 78 */	mr r3, r31
/* 802566D4 00253614  4B ED A2 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802566D8 00253618  38 60 00 10 */	li r3, 0x10
/* 802566DC 0025361C  4B DC D7 C9 */	bl __nw__FUl
/* 802566E0 00253620  7C 64 1B 79 */	or. r4, r3, r3
/* 802566E4 00253624  41 82 00 40 */	beq .L_80256724
/* 802566E8 00253628  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802566EC 0025362C  3C A0 80 4C */	lis r5, __vt__Q34Game4Frog5State@ha
/* 802566F0 00253630  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802566F4 00253634  3C 60 80 4C */	lis r3, __vt__Q34Game4Frog11StateGoHome@ha
/* 802566F8 00253638  90 04 00 00 */	stw r0, 0(r4)
/* 802566FC 0025363C  38 00 00 09 */	li r0, 9
/* 80256700 00253640  38 E0 00 00 */	li r7, 0
/* 80256704 00253644  38 C5 22 F0 */	addi r6, r5, __vt__Q34Game4Frog5State@l
/* 80256708 00253648  90 04 00 04 */	stw r0, 4(r4)
/* 8025670C 0025364C  38 A2 C7 00 */	addi r5, r2, lbl_8051AA60@sda21
/* 80256710 00253650  38 03 21 88 */	addi r0, r3, __vt__Q34Game4Frog11StateGoHome@l
/* 80256714 00253654  90 E4 00 08 */	stw r7, 8(r4)
/* 80256718 00253658  90 C4 00 00 */	stw r6, 0(r4)
/* 8025671C 0025365C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80256720 00253660  90 04 00 00 */	stw r0, 0(r4)
.L_80256724:
/* 80256724 00253664  7F E3 FB 78 */	mr r3, r31
/* 80256728 00253668  4B ED A1 E1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025672C 0025366C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80256730 00253670  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80256734 00253674  7C 08 03 A6 */	mtlr r0
/* 80256738 00253678  38 21 00 10 */	addi r1, r1, 0x10
/* 8025673C 0025367C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog3FSMFPQ24Game9EnemyBase

.fn init__Q34Game4Frog9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80256740 00253680  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80256744 00253684  7C 08 02 A6 */	mflr r0
/* 80256748 00253688  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 8025674C 0025368C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80256750 00253690  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80256754 00253694  7C 9F 23 78 */	mr r31, r4
/* 80256758 00253698  7F E3 FB 78 */	mr r3, r31
/* 8025675C 0025369C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80256760 002536A0  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80256764 002536A4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80256768 002536A8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8025676C 002536AC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80256770 002536B0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80256774 002536B4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80256778 002536B8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8025677C 002536BC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80256780 002536C0  4B EA EF A1 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80256784 002536C4  7F E3 FB 78 */	mr r3, r31
/* 80256788 002536C8  38 80 00 00 */	li r4, 0
/* 8025678C 002536CC  38 A0 00 00 */	li r5, 0
/* 80256790 002536D0  4B EA E8 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80256794 002536D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80256798 002536D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025679C 002536DC  7C 08 03 A6 */	mtlr r0
/* 802567A0 002536E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802567A4 002536E4  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog9StateDeadFPQ24Game9EnemyBase, global
/* 802567A8 002536E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802567AC 002536EC  7C 08 02 A6 */	mflr r0
/* 802567B0 002536F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802567B4 002536F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802567B8 002536F8  7C 9F 23 78 */	mr r31, r4
/* 802567BC 002536FC  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802567C0 00253700  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802567C4 00253704  28 00 00 00 */	cmplwi r0, 0
/* 802567C8 00253708  41 82 00 44 */	beq .L_8025680C
/* 802567CC 0025370C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802567D0 00253710  28 00 00 02 */	cmplwi r0, 2
/* 802567D4 00253714  40 82 00 24 */	bne .L_802567F8
/* 802567D8 00253718  7F E3 FB 78 */	mr r3, r31
/* 802567DC 0025371C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802567E0 00253720  81 8C 02 EC */	lwz r12, 0x2ec(r12)
/* 802567E4 00253724  7D 89 03 A6 */	mtctr r12
/* 802567E8 00253728  4E 80 04 21 */	bctrl 
/* 802567EC 0025372C  7F E3 FB 78 */	mr r3, r31
/* 802567F0 00253730  48 00 2D 1D */	bl createDownEffect__Q34Game4Frog3ObjFf
/* 802567F4 00253734  48 00 00 18 */	b .L_8025680C
.L_802567F8:
/* 802567F8 00253738  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802567FC 0025373C  40 82 00 10 */	bne .L_8025680C
/* 80256800 00253740  7F E3 FB 78 */	mr r3, r31
/* 80256804 00253744  38 80 00 00 */	li r4, 0
/* 80256808 00253748  4B EE 48 E9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8025680C:
/* 8025680C 0025374C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80256810 00253750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80256814 00253754  7C 08 03 A6 */	mtlr r0
/* 80256818 00253758  38 21 00 10 */	addi r1, r1, 0x10
/* 8025681C 0025375C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog9StateDeadFPQ24Game9EnemyBase

.fn getDownSmokeScale__Q34Game4Frog3ObjFv, weak
/* 80256820 00253760  C0 22 C7 0C */	lfs f1, lbl_8051AA6C@sda21(r2)
/* 80256824 00253764  4E 80 00 20 */	blr 
.endfn getDownSmokeScale__Q34Game4Frog3ObjFv

.fn cleanup__Q34Game4Frog9StateDeadFPQ24Game9EnemyBase, global
/* 80256828 00253768  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game4Frog9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025682C 0025376C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80256830 00253770  7C 08 02 A6 */	mflr r0
/* 80256834 00253774  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80256838 00253778  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025683C 0025377C  38 00 00 00 */	li r0, 0
/* 80256840 00253780  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80256844 00253784  7C 9F 23 78 */	mr r31, r4
/* 80256848 00253788  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8025684C 0025378C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80256850 00253790  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80256854 00253794  90 04 02 30 */	stw r0, 0x230(r4)
/* 80256858 00253798  4B E7 2D 49 */	bl rand
/* 8025685C 0025379C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80256860 002537A0  3C 00 43 30 */	lis r0, 0x4330
/* 80256864 002537A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80256868 002537A8  C8 62 C7 20 */	lfd f3, lbl_8051AA80@sda21(r2)
/* 8025686C 002537AC  90 01 00 08 */	stw r0, 8(r1)
/* 80256870 002537B0  C0 42 C7 10 */	lfs f2, lbl_8051AA70@sda21(r2)
/* 80256874 002537B4  C8 01 00 08 */	lfd f0, 8(r1)
/* 80256878 002537B8  C0 22 C7 14 */	lfs f1, lbl_8051AA74@sda21(r2)
/* 8025687C 002537BC  EC 60 18 28 */	fsubs f3, f0, f3
/* 80256880 002537C0  C0 02 C7 18 */	lfs f0, lbl_8051AA78@sda21(r2)
/* 80256884 002537C4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80256888 002537C8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8025688C 002537CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80256890 002537D0  40 80 00 18 */	bge .L_802568A8
/* 80256894 002537D4  7F E3 FB 78 */	mr r3, r31
/* 80256898 002537D8  38 80 00 02 */	li r4, 2
/* 8025689C 002537DC  38 A0 00 00 */	li r5, 0
/* 802568A0 002537E0  4B EA E7 65 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802568A4 002537E4  48 00 00 14 */	b .L_802568B8
.L_802568A8:
/* 802568A8 002537E8  7F E3 FB 78 */	mr r3, r31
/* 802568AC 002537EC  38 80 00 01 */	li r4, 1
/* 802568B0 002537F0  38 A0 00 00 */	li r5, 0
/* 802568B4 002537F4  4B EA E7 51 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_802568B8:
/* 802568B8 002537F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802568BC 002537FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802568C0 00253800  7C 08 03 A6 */	mtlr r0
/* 802568C4 00253804  38 21 00 20 */	addi r1, r1, 0x20
/* 802568C8 00253808  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog9StateWaitFPQ24Game9EnemyBase, global
/* 802568CC 0025380C  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 802568D0 00253810  7C 08 02 A6 */	mflr r0
/* 802568D4 00253814  90 01 01 14 */	stw r0, 0x114(r1)
/* 802568D8 00253818  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 802568DC 0025381C  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 802568E0 00253820  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 802568E4 00253824  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 802568E8 00253828  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 802568EC 0025382C  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 802568F0 00253830  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 802568F4 00253834  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 802568F8 00253838  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 802568FC 0025383C  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80256900 00253840  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80256904 00253844  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80256908 00253848  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8025690C 0025384C  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80256910 00253850  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80256914 00253854  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 80256918 00253858  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 8025691C 0025385C  7C 9E 23 78 */	mr r30, r4
/* 80256920 00253860  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80256924 00253864  7C 7C 1B 78 */	mr r28, r3
/* 80256928 00253868  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025692C 0025386C  4C 40 13 82 */	cror 2, 0, 2
/* 80256930 00253870  40 82 00 20 */	bne .L_80256950
/* 80256934 00253874  81 83 00 00 */	lwz r12, 0(r3)
/* 80256938 00253878  38 A0 00 00 */	li r5, 0
/* 8025693C 0025387C  38 C0 00 00 */	li r6, 0
/* 80256940 00253880  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80256944 00253884  7D 89 03 A6 */	mtctr r12
/* 80256948 00253888  4E 80 04 21 */	bctrl 
/* 8025694C 0025388C  48 00 03 70 */	b .L_80256CBC
.L_80256950:
/* 80256950 00253890  7F C3 F3 78 */	mr r3, r30
/* 80256954 00253894  38 80 00 00 */	li r4, 0
/* 80256958 00253898  4B EB DD 01 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 8025695C 0025389C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80256960 002538A0  41 82 00 6C */	beq .L_802569CC
/* 80256964 002538A4  7F C4 F3 78 */	mr r4, r30
/* 80256968 002538A8  38 61 00 8C */	addi r3, r1, 0x8c
/* 8025696C 002538AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256970 002538B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256974 002538B4  7D 89 03 A6 */	mtctr r12
/* 80256978 002538B8  4E 80 04 21 */	bctrl 
/* 8025697C 002538BC  C0 21 00 90 */	lfs f1, 0x90(r1)
/* 80256980 002538C0  7F C3 F3 78 */	mr r3, r30
/* 80256984 002538C4  C0 41 00 94 */	lfs f2, 0x94(r1)
/* 80256988 002538C8  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 8025698C 002538CC  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 80256990 002538D0  D0 3E 02 CC */	stfs f1, 0x2cc(r30)
/* 80256994 002538D4  D0 5E 02 D0 */	stfs f2, 0x2d0(r30)
/* 80256998 002538D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025699C 002538DC  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802569A0 002538E0  7D 89 03 A6 */	mtctr r12
/* 802569A4 002538E4  4E 80 04 21 */	bctrl 
/* 802569A8 002538E8  7F 83 E3 78 */	mr r3, r28
/* 802569AC 002538EC  7F C4 F3 78 */	mr r4, r30
/* 802569B0 002538F0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802569B4 002538F4  38 A0 00 03 */	li r5, 3
/* 802569B8 002538F8  38 C0 00 00 */	li r6, 0
/* 802569BC 002538FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802569C0 00253900  7D 89 03 A6 */	mtctr r12
/* 802569C4 00253904  4E 80 04 21 */	bctrl 
/* 802569C8 00253908  48 00 02 F4 */	b .L_80256CBC
.L_802569CC:
/* 802569CC 0025390C  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 802569D0 00253910  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802569D4 00253914  28 00 00 00 */	cmplwi r0, 0
/* 802569D8 00253918  41 82 02 E4 */	beq .L_80256CBC
/* 802569DC 0025391C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802569E0 00253920  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802569E4 00253924  40 82 02 D8 */	bne .L_80256CBC
/* 802569E8 00253928  7F C3 F3 78 */	mr r3, r30
/* 802569EC 0025392C  48 00 25 DD */	bl getViewAngle__Q34Game4Frog3ObjFv
/* 802569F0 00253930  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 802569F4 00253934  7F C3 F3 78 */	mr r3, r30
/* 802569F8 00253938  38 80 00 00 */	li r4, 0
/* 802569FC 0025393C  38 A0 00 00 */	li r5, 0
/* 80256A00 00253940  C0 46 03 D4 */	lfs f2, 0x3d4(r6)
/* 80256A04 00253944  38 C0 00 00 */	li r6, 0
/* 80256A08 00253948  4B EB C6 49 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80256A0C 0025394C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80256A10 00253950  41 82 02 8C */	beq .L_80256C9C
/* 80256A14 00253954  93 BE 02 30 */	stw r29, 0x230(r30)
/* 80256A18 00253958  7F A4 EB 78 */	mr r4, r29
/* 80256A1C 0025395C  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80256A20 00253960  38 61 00 68 */	addi r3, r1, 0x68
/* 80256A24 00253964  D0 1E 02 C4 */	stfs f0, 0x2c4(r30)
/* 80256A28 00253968  81 9D 00 00 */	lwz r12, 0(r29)
/* 80256A2C 0025396C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256A30 00253970  7D 89 03 A6 */	mtctr r12
/* 80256A34 00253974  4E 80 04 21 */	bctrl 
/* 80256A38 00253978  7F C4 F3 78 */	mr r4, r30
/* 80256A3C 0025397C  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80256A40 00253980  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256A44 00253984  38 61 00 74 */	addi r3, r1, 0x74
/* 80256A48 00253988  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80256A4C 0025398C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80256A50 00253990  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256A54 00253994  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80256A58 00253998  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80256A5C 0025399C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80256A60 002539A0  7D 89 03 A6 */	mtctr r12
/* 80256A64 002539A4  4E 80 04 21 */	bctrl 
/* 80256A68 002539A8  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80256A6C 002539AC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80256A70 002539B0  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80256A74 002539B4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80256A78 002539B8  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80256A7C 002539BC  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80256A80 002539C0  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80256A84 002539C4  EC 21 28 28 */	fsubs f1, f1, f5
/* 80256A88 002539C8  EC 40 18 28 */	fsubs f2, f0, f3
/* 80256A8C 002539CC  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80256A90 002539D0  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80256A94 002539D4  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80256A98 002539D8  4B DD E6 71 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80256A9C 002539DC  48 1B B1 35 */	bl roundAng__Ff
/* 80256AA0 002539E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256AA4 002539E4  FF 40 08 90 */	fmr f26, f1
/* 80256AA8 002539E8  7F C3 F3 78 */	mr r3, r30
/* 80256AAC 002539EC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80256AB0 002539F0  7D 89 03 A6 */	mtctr r12
/* 80256AB4 002539F4  4E 80 04 21 */	bctrl 
/* 80256AB8 002539F8  FC 40 08 90 */	fmr f2, f1
/* 80256ABC 002539FC  FC 20 D0 90 */	fmr f1, f26
/* 80256AC0 00253A00  48 1B B1 3D */	bl angDist__Fff
/* 80256AC4 00253A04  7F C4 F3 78 */	mr r4, r30
/* 80256AC8 00253A08  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80256ACC 00253A0C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256AD0 00253A10  FF C0 08 90 */	fmr f30, f1
/* 80256AD4 00253A14  38 61 00 14 */	addi r3, r1, 0x14
/* 80256AD8 00253A18  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 80256ADC 00253A1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256AE0 00253A20  3B E0 00 00 */	li r31, 0
/* 80256AE4 00253A24  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 80256AE8 00253A28  7D 89 03 A6 */	mtctr r12
/* 80256AEC 00253A2C  4E 80 04 21 */	bctrl 
/* 80256AF0 00253A30  7F A4 EB 78 */	mr r4, r29
/* 80256AF4 00253A34  38 61 00 08 */	addi r3, r1, 8
/* 80256AF8 00253A38  81 9D 00 00 */	lwz r12, 0(r29)
/* 80256AFC 00253A3C  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80256B00 00253A40  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256B04 00253A44  7D 89 03 A6 */	mtctr r12
/* 80256B08 00253A48  4E 80 04 21 */	bctrl 
/* 80256B0C 00253A4C  7F C4 F3 78 */	mr r4, r30
/* 80256B10 00253A50  C0 01 00 08 */	lfs f0, 8(r1)
/* 80256B14 00253A54  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256B18 00253A58  38 61 00 2C */	addi r3, r1, 0x2c
/* 80256B1C 00253A5C  EF 40 F8 28 */	fsubs f26, f0, f31
/* 80256B20 00253A60  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256B24 00253A64  7D 89 03 A6 */	mtctr r12
/* 80256B28 00253A68  4E 80 04 21 */	bctrl 
/* 80256B2C 00253A6C  7F A4 EB 78 */	mr r4, r29
/* 80256B30 00253A70  38 61 00 20 */	addi r3, r1, 0x20
/* 80256B34 00253A74  81 9D 00 00 */	lwz r12, 0(r29)
/* 80256B38 00253A78  C3 E1 00 30 */	lfs f31, 0x30(r1)
/* 80256B3C 00253A7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256B40 00253A80  7D 89 03 A6 */	mtctr r12
/* 80256B44 00253A84  4E 80 04 21 */	bctrl 
/* 80256B48 00253A88  7F C4 F3 78 */	mr r4, r30
/* 80256B4C 00253A8C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80256B50 00253A90  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256B54 00253A94  38 61 00 44 */	addi r3, r1, 0x44
/* 80256B58 00253A98  EF 60 F8 28 */	fsubs f27, f0, f31
/* 80256B5C 00253A9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256B60 00253AA0  7D 89 03 A6 */	mtctr r12
/* 80256B64 00253AA4  4E 80 04 21 */	bctrl 
/* 80256B68 00253AA8  7F A4 EB 78 */	mr r4, r29
/* 80256B6C 00253AAC  38 61 00 38 */	addi r3, r1, 0x38
/* 80256B70 00253AB0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80256B74 00253AB4  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 80256B78 00253AB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256B7C 00253ABC  7D 89 03 A6 */	mtctr r12
/* 80256B80 00253AC0  4E 80 04 21 */	bctrl 
/* 80256B84 00253AC4  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80256B88 00253AC8  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80256B8C 00253ACC  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80256B90 00253AD0  EC 42 F8 28 */	fsubs f2, f2, f31
/* 80256B94 00253AD4  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 80256B98 00253AD8  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80256B9C 00253ADC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80256BA0 00253AE0  40 80 00 2C */	bge .L_80256BCC
/* 80256BA4 00253AE4  C0 02 C7 2C */	lfs f0, lbl_8051AA8C@sda21(r2)
/* 80256BA8 00253AE8  FC 40 F2 10 */	fabs f2, f30
/* 80256BAC 00253AEC  C0 22 C7 28 */	lfs f1, lbl_8051AA88@sda21(r2)
/* 80256BB0 00253AF0  EC 00 07 32 */	fmuls f0, f0, f28
/* 80256BB4 00253AF4  FC 40 10 18 */	frsp f2, f2
/* 80256BB8 00253AF8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80256BBC 00253AFC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80256BC0 00253B00  4C 40 13 82 */	cror 2, 0, 2
/* 80256BC4 00253B04  40 82 00 08 */	bne .L_80256BCC
/* 80256BC8 00253B08  3B E0 00 01 */	li r31, 1
.L_80256BCC:
/* 80256BCC 00253B0C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80256BD0 00253B10  41 82 00 6C */	beq .L_80256C3C
/* 80256BD4 00253B14  7F A4 EB 78 */	mr r4, r29
/* 80256BD8 00253B18  38 61 00 80 */	addi r3, r1, 0x80
/* 80256BDC 00253B1C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80256BE0 00253B20  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256BE4 00253B24  7D 89 03 A6 */	mtctr r12
/* 80256BE8 00253B28  4E 80 04 21 */	bctrl 
/* 80256BEC 00253B2C  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80256BF0 00253B30  7F C3 F3 78 */	mr r3, r30
/* 80256BF4 00253B34  C0 41 00 88 */	lfs f2, 0x88(r1)
/* 80256BF8 00253B38  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80256BFC 00253B3C  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 80256C00 00253B40  D0 3E 02 CC */	stfs f1, 0x2cc(r30)
/* 80256C04 00253B44  D0 5E 02 D0 */	stfs f2, 0x2d0(r30)
/* 80256C08 00253B48  81 9E 00 00 */	lwz r12, 0(r30)
/* 80256C0C 00253B4C  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80256C10 00253B50  7D 89 03 A6 */	mtctr r12
/* 80256C14 00253B54  4E 80 04 21 */	bctrl 
/* 80256C18 00253B58  7F 83 E3 78 */	mr r3, r28
/* 80256C1C 00253B5C  7F C4 F3 78 */	mr r4, r30
/* 80256C20 00253B60  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256C24 00253B64  38 A0 00 03 */	li r5, 3
/* 80256C28 00253B68  38 C0 00 00 */	li r6, 0
/* 80256C2C 00253B6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80256C30 00253B70  7D 89 03 A6 */	mtctr r12
/* 80256C34 00253B74  4E 80 04 21 */	bctrl 
/* 80256C38 00253B78  48 00 00 84 */	b .L_80256CBC
.L_80256C3C:
/* 80256C3C 00253B7C  FC 20 F2 10 */	fabs f1, f30
/* 80256C40 00253B80  C0 02 C7 30 */	lfs f0, lbl_8051AA90@sda21(r2)
/* 80256C44 00253B84  FC 20 08 18 */	frsp f1, f1
/* 80256C48 00253B88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80256C4C 00253B8C  4C 40 13 82 */	cror 2, 0, 2
/* 80256C50 00253B90  40 82 00 28 */	bne .L_80256C78
/* 80256C54 00253B94  7F 83 E3 78 */	mr r3, r28
/* 80256C58 00253B98  7F C4 F3 78 */	mr r4, r30
/* 80256C5C 00253B9C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256C60 00253BA0  38 A0 00 01 */	li r5, 1
/* 80256C64 00253BA4  38 C0 00 00 */	li r6, 0
/* 80256C68 00253BA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80256C6C 00253BAC  7D 89 03 A6 */	mtctr r12
/* 80256C70 00253BB0  4E 80 04 21 */	bctrl 
/* 80256C74 00253BB4  48 00 00 48 */	b .L_80256CBC
.L_80256C78:
/* 80256C78 00253BB8  7F 83 E3 78 */	mr r3, r28
/* 80256C7C 00253BBC  7F C4 F3 78 */	mr r4, r30
/* 80256C80 00253BC0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256C84 00253BC4  38 A0 00 02 */	li r5, 2
/* 80256C88 00253BC8  38 C0 00 00 */	li r6, 0
/* 80256C8C 00253BCC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80256C90 00253BD0  7D 89 03 A6 */	mtctr r12
/* 80256C94 00253BD4  4E 80 04 21 */	bctrl 
/* 80256C98 00253BD8  48 00 00 24 */	b .L_80256CBC
.L_80256C9C:
/* 80256C9C 00253BDC  7F 83 E3 78 */	mr r3, r28
/* 80256CA0 00253BE0  7F C4 F3 78 */	mr r4, r30
/* 80256CA4 00253BE4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256CA8 00253BE8  38 A0 00 01 */	li r5, 1
/* 80256CAC 00253BEC  38 C0 00 00 */	li r6, 0
/* 80256CB0 00253BF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80256CB4 00253BF4  7D 89 03 A6 */	mtctr r12
/* 80256CB8 00253BF8  4E 80 04 21 */	bctrl 
.L_80256CBC:
/* 80256CBC 00253BFC  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80256CC0 00253C00  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80256CC4 00253C04  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80256CC8 00253C08  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80256CCC 00253C0C  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80256CD0 00253C10  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80256CD4 00253C14  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80256CD8 00253C18  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80256CDC 00253C1C  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80256CE0 00253C20  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80256CE4 00253C24  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80256CE8 00253C28  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80256CEC 00253C2C  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80256CF0 00253C30  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80256CF4 00253C34  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80256CF8 00253C38  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80256CFC 00253C3C  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 80256D00 00253C40  7C 08 03 A6 */	mtlr r0
/* 80256D04 00253C44  38 21 01 10 */	addi r1, r1, 0x110
/* 80256D08 00253C48  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog9StateWaitFPQ24Game9EnemyBase

.fn attackNaviPosition__Q34Game4Frog3ObjFv, weak
/* 80256D0C 00253C4C  4E 80 00 20 */	blr 
.endfn attackNaviPosition__Q34Game4Frog3ObjFv

.fn cleanup__Q34Game4Frog9StateWaitFPQ24Game9EnemyBase, global
/* 80256D10 00253C50  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game4Frog9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80256D14 00253C54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80256D18 00253C58  7C 08 02 A6 */	mflr r0
/* 80256D1C 00253C5C  38 60 FF FF */	li r3, -1
/* 80256D20 00253C60  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80256D24 00253C64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80256D28 00253C68  38 00 00 00 */	li r0, 0
/* 80256D2C 00253C6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80256D30 00253C70  7C 9F 23 78 */	mr r31, r4
/* 80256D34 00253C74  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 80256D38 00253C78  7F E3 FB 78 */	mr r3, r31
/* 80256D3C 00253C7C  90 04 02 30 */	stw r0, 0x230(r4)
/* 80256D40 00253C80  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80256D44 00253C84  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80256D48 00253C88  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80256D4C 00253C8C  4B EA AC 81 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80256D50 00253C90  7F E3 FB 78 */	mr r3, r31
/* 80256D54 00253C94  38 80 00 04 */	li r4, 4
/* 80256D58 00253C98  38 A0 00 00 */	li r5, 0
/* 80256D5C 00253C9C  4B EA E2 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80256D60 00253CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80256D64 00253CA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80256D68 00253CA8  7C 08 03 A6 */	mtlr r0
/* 80256D6C 00253CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80256D70 00253CB0  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog9StateTurnFPQ24Game9EnemyBase, global
/* 80256D74 00253CB4  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80256D78 00253CB8  7C 08 02 A6 */	mflr r0
/* 80256D7C 00253CBC  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80256D80 00253CC0  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80256D84 00253CC4  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80256D88 00253CC8  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80256D8C 00253CCC  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80256D90 00253CD0  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 80256D94 00253CD4  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80256D98 00253CD8  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 80256D9C 00253CDC  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 80256DA0 00253CE0  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 80256DA4 00253CE4  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 80256DA8 00253CE8  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 80256DAC 00253CEC  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 80256DB0 00253CF0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80256DB4 00253CF4  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80256DB8 00253CF8  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80256DBC 00253CFC  93 81 00 70 */	stw r28, 0x70(r1)
/* 80256DC0 00253D00  7C 9F 23 78 */	mr r31, r4
/* 80256DC4 00253D04  7C 7E 1B 78 */	mr r30, r3
/* 80256DC8 00253D08  7F E3 FB 78 */	mr r3, r31
/* 80256DCC 00253D0C  48 00 21 FD */	bl getViewAngle__Q34Game4Frog3ObjFv
/* 80256DD0 00253D10  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 80256DD4 00253D14  7F E3 FB 78 */	mr r3, r31
/* 80256DD8 00253D18  38 80 00 00 */	li r4, 0
/* 80256DDC 00253D1C  38 A0 00 00 */	li r5, 0
/* 80256DE0 00253D20  C0 46 03 D4 */	lfs f2, 0x3d4(r6)
/* 80256DE4 00253D24  38 C0 00 00 */	li r6, 0
/* 80256DE8 00253D28  4B EB C2 69 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80256DEC 00253D2C  7C 7C 1B 79 */	or. r28, r3, r3
/* 80256DF0 00253D30  41 82 02 4C */	beq .L_8025703C
/* 80256DF4 00253D34  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80256DF8 00253D38  7F 84 E3 78 */	mr r4, r28
/* 80256DFC 00253D3C  38 61 00 50 */	addi r3, r1, 0x50
/* 80256E00 00253D40  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80256E04 00253D44  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256E08 00253D48  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80256E0C 00253D4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256E10 00253D50  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 80256E14 00253D54  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80256E18 00253D58  7D 89 03 A6 */	mtctr r12
/* 80256E1C 00253D5C  4E 80 04 21 */	bctrl 
/* 80256E20 00253D60  7F E4 FB 78 */	mr r4, r31
/* 80256E24 00253D64  38 61 00 5C */	addi r3, r1, 0x5c
/* 80256E28 00253D68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80256E2C 00253D6C  C3 41 00 50 */	lfs f26, 0x50(r1)
/* 80256E30 00253D70  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256E34 00253D74  C3 61 00 58 */	lfs f27, 0x58(r1)
/* 80256E38 00253D78  7D 89 03 A6 */	mtctr r12
/* 80256E3C 00253D7C  4E 80 04 21 */	bctrl 
/* 80256E40 00253D80  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 80256E44 00253D84  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80256E48 00253D88  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 80256E4C 00253D8C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80256E50 00253D90  EC 3A 08 28 */	fsubs f1, f26, f1
/* 80256E54 00253D94  EC 5B 00 28 */	fsubs f2, f27, f0
/* 80256E58 00253D98  4B DD E2 B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80256E5C 00253D9C  48 1B AD 75 */	bl roundAng__Ff
/* 80256E60 00253DA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80256E64 00253DA4  FF 40 08 90 */	fmr f26, f1
/* 80256E68 00253DA8  7F E3 FB 78 */	mr r3, r31
/* 80256E6C 00253DAC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80256E70 00253DB0  7D 89 03 A6 */	mtctr r12
/* 80256E74 00253DB4  4E 80 04 21 */	bctrl 
/* 80256E78 00253DB8  FC 40 08 90 */	fmr f2, f1
/* 80256E7C 00253DBC  FC 20 D0 90 */	fmr f1, f26
/* 80256E80 00253DC0  48 1B AD 7D */	bl angDist__Fff
/* 80256E84 00253DC4  FF E0 08 90 */	fmr f31, f1
/* 80256E88 00253DC8  C0 02 C7 2C */	lfs f0, lbl_8051AA8C@sda21(r2)
/* 80256E8C 00253DCC  C0 22 C7 28 */	lfs f1, lbl_8051AA88@sda21(r2)
/* 80256E90 00253DD0  EC 00 07 72 */	fmuls f0, f0, f29
/* 80256E94 00253DD4  EF 9F 07 B2 */	fmuls f28, f31, f30
/* 80256E98 00253DD8  EC 21 00 32 */	fmuls f1, f1, f0
/* 80256E9C 00253DDC  FC 00 E2 10 */	fabs f0, f28
/* 80256EA0 00253DE0  FC 00 00 18 */	frsp f0, f0
/* 80256EA4 00253DE4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80256EA8 00253DE8  40 81 00 1C */	ble .L_80256EC4
/* 80256EAC 00253DEC  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80256EB0 00253DF0  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80256EB4 00253DF4  40 81 00 0C */	ble .L_80256EC0
/* 80256EB8 00253DF8  FF 80 08 90 */	fmr f28, f1
/* 80256EBC 00253DFC  48 00 00 08 */	b .L_80256EC4
.L_80256EC0:
/* 80256EC0 00253E00  FF 80 08 50 */	fneg f28, f1
.L_80256EC4:
/* 80256EC4 00253E04  7F E3 FB 78 */	mr r3, r31
/* 80256EC8 00253E08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80256ECC 00253E0C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80256ED0 00253E10  7D 89 03 A6 */	mtctr r12
/* 80256ED4 00253E14  4E 80 04 21 */	bctrl 
/* 80256ED8 00253E18  EC 3C 08 2A */	fadds f1, f28, f1
/* 80256EDC 00253E1C  48 1B AC F5 */	bl roundAng__Ff
/* 80256EE0 00253E20  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80256EE4 00253E24  7F E4 FB 78 */	mr r4, r31
/* 80256EE8 00253E28  38 61 00 14 */	addi r3, r1, 0x14
/* 80256EEC 00253E2C  3B A0 00 00 */	li r29, 0
/* 80256EF0 00253E30  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80256EF4 00253E34  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80256EF8 00253E38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80256EFC 00253E3C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80256F00 00253E40  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256F04 00253E44  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 80256F08 00253E48  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 80256F0C 00253E4C  7D 89 03 A6 */	mtctr r12
/* 80256F10 00253E50  4E 80 04 21 */	bctrl 
/* 80256F14 00253E54  7F 84 E3 78 */	mr r4, r28
/* 80256F18 00253E58  38 61 00 08 */	addi r3, r1, 8
/* 80256F1C 00253E5C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256F20 00253E60  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 80256F24 00253E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256F28 00253E68  7D 89 03 A6 */	mtctr r12
/* 80256F2C 00253E6C  4E 80 04 21 */	bctrl 
/* 80256F30 00253E70  7F E4 FB 78 */	mr r4, r31
/* 80256F34 00253E74  C0 01 00 08 */	lfs f0, 8(r1)
/* 80256F38 00253E78  81 9F 00 00 */	lwz r12, 0(r31)
/* 80256F3C 00253E7C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80256F40 00253E80  EF 40 F0 28 */	fsubs f26, f0, f30
/* 80256F44 00253E84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256F48 00253E88  7D 89 03 A6 */	mtctr r12
/* 80256F4C 00253E8C  4E 80 04 21 */	bctrl 
/* 80256F50 00253E90  7F 84 E3 78 */	mr r4, r28
/* 80256F54 00253E94  38 61 00 20 */	addi r3, r1, 0x20
/* 80256F58 00253E98  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256F5C 00253E9C  C3 C1 00 30 */	lfs f30, 0x30(r1)
/* 80256F60 00253EA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256F64 00253EA4  7D 89 03 A6 */	mtctr r12
/* 80256F68 00253EA8  4E 80 04 21 */	bctrl 
/* 80256F6C 00253EAC  7F E4 FB 78 */	mr r4, r31
/* 80256F70 00253EB0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80256F74 00253EB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80256F78 00253EB8  38 61 00 44 */	addi r3, r1, 0x44
/* 80256F7C 00253EBC  EF 60 F0 28 */	fsubs f27, f0, f30
/* 80256F80 00253EC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256F84 00253EC4  7D 89 03 A6 */	mtctr r12
/* 80256F88 00253EC8  4E 80 04 21 */	bctrl 
/* 80256F8C 00253ECC  7F 84 E3 78 */	mr r4, r28
/* 80256F90 00253ED0  38 61 00 38 */	addi r3, r1, 0x38
/* 80256F94 00253ED4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80256F98 00253ED8  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 80256F9C 00253EDC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80256FA0 00253EE0  7D 89 03 A6 */	mtctr r12
/* 80256FA4 00253EE4  4E 80 04 21 */	bctrl 
/* 80256FA8 00253EE8  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80256FAC 00253EEC  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80256FB0 00253EF0  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80256FB4 00253EF4  EC 42 F0 28 */	fsubs f2, f2, f30
/* 80256FB8 00253EF8  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 80256FBC 00253EFC  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80256FC0 00253F00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80256FC4 00253F04  40 80 00 2C */	bge .L_80256FF0
/* 80256FC8 00253F08  C0 02 C7 2C */	lfs f0, lbl_8051AA8C@sda21(r2)
/* 80256FCC 00253F0C  FC 40 FA 10 */	fabs f2, f31
/* 80256FD0 00253F10  C0 22 C7 28 */	lfs f1, lbl_8051AA88@sda21(r2)
/* 80256FD4 00253F14  EC 00 07 32 */	fmuls f0, f0, f28
/* 80256FD8 00253F18  FC 40 10 18 */	frsp f2, f2
/* 80256FDC 00253F1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80256FE0 00253F20  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80256FE4 00253F24  4C 40 13 82 */	cror 2, 0, 2
/* 80256FE8 00253F28  40 82 00 08 */	bne .L_80256FF0
/* 80256FEC 00253F2C  3B A0 00 01 */	li r29, 1
.L_80256FF0:
/* 80256FF0 00253F30  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80256FF4 00253F34  41 82 00 1C */	beq .L_80257010
/* 80256FF8 00253F38  93 9F 02 30 */	stw r28, 0x230(r31)
/* 80256FFC 00253F3C  38 00 00 03 */	li r0, 3
/* 80257000 00253F40  7F E3 FB 78 */	mr r3, r31
/* 80257004 00253F44  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257008 00253F48  4B EA E2 99 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025700C 00253F4C  48 00 00 40 */	b .L_8025704C
.L_80257010:
/* 80257010 00253F50  FC 20 FA 10 */	fabs f1, f31
/* 80257014 00253F54  C0 02 C7 30 */	lfs f0, lbl_8051AA90@sda21(r2)
/* 80257018 00253F58  FC 20 08 18 */	frsp f1, f1
/* 8025701C 00253F5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257020 00253F60  4C 40 13 82 */	cror 2, 0, 2
/* 80257024 00253F64  40 82 00 28 */	bne .L_8025704C
/* 80257028 00253F68  38 00 00 01 */	li r0, 1
/* 8025702C 00253F6C  7F E3 FB 78 */	mr r3, r31
/* 80257030 00253F70  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257034 00253F74  4B EA E2 6D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80257038 00253F78  48 00 00 14 */	b .L_8025704C
.L_8025703C:
/* 8025703C 00253F7C  38 00 00 01 */	li r0, 1
/* 80257040 00253F80  7F E3 FB 78 */	mr r3, r31
/* 80257044 00253F84  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257048 00253F88  4B EA E2 59 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8025704C:
/* 8025704C 00253F8C  7F E3 FB 78 */	mr r3, r31
/* 80257050 00253F90  38 80 00 00 */	li r4, 0
/* 80257054 00253F94  4B EB D6 05 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80257058 00253F98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025705C 00253F9C  41 82 00 14 */	beq .L_80257070
/* 80257060 00253FA0  38 00 00 03 */	li r0, 3
/* 80257064 00253FA4  7F E3 FB 78 */	mr r3, r31
/* 80257068 00253FA8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8025706C 00253FAC  4B EA E2 35 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257070:
/* 80257070 00253FB0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80257074 00253FB4  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257078 00253FB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025707C 00253FBC  4C 40 13 82 */	cror 2, 0, 2
/* 80257080 00253FC0  40 82 00 14 */	bne .L_80257094
/* 80257084 00253FC4  38 00 00 00 */	li r0, 0
/* 80257088 00253FC8  7F E3 FB 78 */	mr r3, r31
/* 8025708C 00253FCC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257090 00253FD0  4B EA E2 11 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257094:
/* 80257094 00253FD4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80257098 00253FD8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025709C 00253FDC  28 00 00 00 */	cmplwi r0, 0
/* 802570A0 00253FE0  41 82 00 30 */	beq .L_802570D0
/* 802570A4 00253FE4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802570A8 00253FE8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802570AC 00253FEC  40 82 00 24 */	bne .L_802570D0
/* 802570B0 00253FF0  7F C3 F3 78 */	mr r3, r30
/* 802570B4 00253FF4  7F E4 FB 78 */	mr r4, r31
/* 802570B8 00253FF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802570BC 00253FFC  38 C0 00 00 */	li r6, 0
/* 802570C0 00254000  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802570C4 00254004  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802570C8 00254008  7D 89 03 A6 */	mtctr r12
/* 802570CC 0025400C  4E 80 04 21 */	bctrl 
.L_802570D0:
/* 802570D0 00254010  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802570D4 00254014  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802570D8 00254018  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802570DC 0025401C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802570E0 00254020  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802570E4 00254024  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802570E8 00254028  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802570EC 0025402C  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802570F0 00254030  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802570F4 00254034  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802570F8 00254038  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802570FC 0025403C  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 80257100 00254040  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80257104 00254044  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80257108 00254048  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8025710C 0025404C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80257110 00254050  83 81 00 70 */	lwz r28, 0x70(r1)
/* 80257114 00254054  7C 08 03 A6 */	mtlr r0
/* 80257118 00254058  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8025711C 0025405C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog9StateTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog9StateTurnFPQ24Game9EnemyBase, global
/* 80257120 00254060  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80257124 00254064  7C 08 02 A6 */	mflr r0
/* 80257128 00254068  90 01 00 34 */	stw r0, 0x34(r1)
/* 8025712C 0025406C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80257130 00254070  7C 9F 23 78 */	mr r31, r4
/* 80257134 00254074  7F E3 FB 78 */	mr r3, r31
/* 80257138 00254078  4B EA A8 45 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8025713C 0025407C  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 80257140 00254080  2C 00 00 03 */	cmpwi r0, 3
/* 80257144 00254084  40 82 00 74 */	bne .L_802571B8
/* 80257148 00254088  7F E4 FB 78 */	mr r4, r31
/* 8025714C 0025408C  38 61 00 14 */	addi r3, r1, 0x14
/* 80257150 00254090  81 9F 00 00 */	lwz r12, 0(r31)
/* 80257154 00254094  81 8C 00 08 */	lwz r12, 8(r12)
/* 80257158 00254098  7D 89 03 A6 */	mtctr r12
/* 8025715C 0025409C  4E 80 04 21 */	bctrl 
/* 80257160 002540A0  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80257164 002540A4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80257168 002540A8  28 04 00 00 */	cmplwi r4, 0
/* 8025716C 002540AC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80257170 002540B0  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80257174 002540B4  41 82 00 24 */	beq .L_80257198
/* 80257178 002540B8  81 84 00 00 */	lwz r12, 0(r4)
/* 8025717C 002540BC  38 61 00 08 */	addi r3, r1, 8
/* 80257180 002540C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80257184 002540C4  7D 89 03 A6 */	mtctr r12
/* 80257188 002540C8  4E 80 04 21 */	bctrl 
/* 8025718C 002540CC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80257190 002540D0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80257194 002540D4  C0 41 00 10 */	lfs f2, 0x10(r1)
.L_80257198:
/* 80257198 002540D8  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 8025719C 002540DC  7F E3 FB 78 */	mr r3, r31
/* 802571A0 002540E0  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802571A4 002540E4  D0 5F 02 D0 */	stfs f2, 0x2d0(r31)
/* 802571A8 002540E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802571AC 002540EC  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 802571B0 002540F0  7D 89 03 A6 */	mtctr r12
/* 802571B4 002540F4  4E 80 04 21 */	bctrl 
.L_802571B8:
/* 802571B8 002540F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802571BC 002540FC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802571C0 00254100  7C 08 03 A6 */	mtlr r0
/* 802571C4 00254104  38 21 00 30 */	addi r1, r1, 0x30
/* 802571C8 00254108  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog9StateTurnFPQ24Game9EnemyBase

.fn init__Q34Game4Frog9StateJumpFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802571CC 0025410C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802571D0 00254110  7C 08 02 A6 */	mflr r0
/* 802571D4 00254114  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 802571D8 00254118  90 01 00 24 */	stw r0, 0x24(r1)
/* 802571DC 0025411C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802571E0 00254120  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802571E4 00254124  7C 9E 23 78 */	mr r30, r4
/* 802571E8 00254128  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802571EC 0025412C  7C 7D 1B 78 */	mr r29, r3
/* 802571F0 00254130  7F C3 F3 78 */	mr r3, r30
/* 802571F4 00254134  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802571F8 00254138  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802571FC 0025413C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257200 00254140  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80257204 00254144  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80257208 00254148  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8025720C 0025414C  4B EA A7 C1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80257210 00254150  80 1E 01 F4 */	lwz r0, 0x1f4(r30)
/* 80257214 00254154  2C 00 00 00 */	cmpwi r0, 0
/* 80257218 00254158  41 82 00 68 */	beq .L_80257280
/* 8025721C 0025415C  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 80257220 00254160  4B E7 23 81 */	bl rand
/* 80257224 00254164  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80257228 00254168  3C 00 43 30 */	lis r0, 0x4330
/* 8025722C 0025416C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80257230 00254170  C8 62 C7 20 */	lfd f3, lbl_8051AA80@sda21(r2)
/* 80257234 00254174  90 01 00 08 */	stw r0, 8(r1)
/* 80257238 00254178  C0 42 C7 10 */	lfs f2, lbl_8051AA70@sda21(r2)
/* 8025723C 0025417C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80257240 00254180  C0 22 C7 14 */	lfs f1, lbl_8051AA74@sda21(r2)
/* 80257244 00254184  EC 60 18 28 */	fsubs f3, f0, f3
/* 80257248 00254188  C0 1F 08 6C */	lfs f0, 0x86c(r31)
/* 8025724C 0025418C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80257250 00254190  EC 22 08 24 */	fdivs f1, f2, f1
/* 80257254 00254194  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257258 00254198  40 80 00 28 */	bge .L_80257280
/* 8025725C 0025419C  7F A3 EB 78 */	mr r3, r29
/* 80257260 002541A0  7F C4 F3 78 */	mr r4, r30
/* 80257264 002541A4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80257268 002541A8  38 A0 00 07 */	li r5, 7
/* 8025726C 002541AC  38 C0 00 00 */	li r6, 0
/* 80257270 002541B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80257274 002541B4  7D 89 03 A6 */	mtctr r12
/* 80257278 002541B8  4E 80 04 21 */	bctrl 
/* 8025727C 002541BC  48 00 00 1C */	b .L_80257298
.L_80257280:
/* 80257280 002541C0  7F C3 F3 78 */	mr r3, r30
/* 80257284 002541C4  48 00 22 25 */	bl startJumpEffect__Q34Game4Frog3ObjFv
/* 80257288 002541C8  7F C3 F3 78 */	mr r3, r30
/* 8025728C 002541CC  38 80 00 05 */	li r4, 5
/* 80257290 002541D0  38 A0 00 00 */	li r5, 0
/* 80257294 002541D4  4B EA DD 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_80257298:
/* 80257298 002541D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025729C 002541DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802572A0 002541E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802572A4 002541E4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802572A8 002541E8  7C 08 03 A6 */	mtlr r0
/* 802572AC 002541EC  38 21 00 20 */	addi r1, r1, 0x20
/* 802572B0 002541F0  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog9StateJumpFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog9StateJumpFPQ24Game9EnemyBase, global
/* 802572B4 002541F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802572B8 002541F8  7C 08 02 A6 */	mflr r0
/* 802572BC 002541FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802572C0 00254200  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802572C4 00254204  7C 9F 23 78 */	mr r31, r4
/* 802572C8 00254208  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802572CC 0025420C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802572D0 00254210  28 00 00 00 */	cmplwi r0, 0
/* 802572D4 00254214  41 82 00 E4 */	beq .L_802573B8
/* 802572D8 00254218  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802572DC 0025421C  28 00 00 02 */	cmplwi r0, 2
/* 802572E0 00254220  40 82 00 B8 */	bne .L_80257398
/* 802572E4 00254224  7F E3 FB 78 */	mr r3, r31
/* 802572E8 00254228  48 00 1D 05 */	bl startJumpAttack__Q34Game4Frog3ObjFv
/* 802572EC 0025422C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802572F0 00254230  7F E3 FB 78 */	mr r3, r31
/* 802572F4 00254234  C0 42 C7 08 */	lfs f2, lbl_8051AA68@sda21(r2)
/* 802572F8 00254238  38 80 00 00 */	li r4, 0
/* 802572FC 0025423C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80257300 00254240  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80257304 00254244  C0 82 C7 34 */	lfs f4, lbl_8051AA94@sda21(r2)
/* 80257308 00254248  4B EB C4 89 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 8025730C 0025424C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80257310 00254250  7F E3 FB 78 */	mr r3, r31
/* 80257314 00254254  C0 42 C7 08 */	lfs f2, lbl_8051AA68@sda21(r2)
/* 80257318 00254258  38 80 00 00 */	li r4, 0
/* 8025731C 0025425C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80257320 00254260  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80257324 00254264  C0 82 C7 34 */	lfs f4, lbl_8051AA94@sda21(r2)
/* 80257328 00254268  4B EB C1 AD */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 8025732C 0025426C  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80257330 00254270  28 00 00 00 */	cmplwi r0, 0
/* 80257334 00254274  41 82 00 34 */	beq .L_80257368
/* 80257338 00254278  7F E3 FB 78 */	mr r3, r31
/* 8025733C 0025427C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80257340 00254280  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80257344 00254284  7D 89 03 A6 */	mtctr r12
/* 80257348 00254288  4E 80 04 21 */	bctrl 
/* 8025734C 0025428C  81 83 00 00 */	lwz r12, 0(r3)
/* 80257350 00254290  38 80 58 2C */	li r4, 0x582c
/* 80257354 00254294  38 A0 00 00 */	li r5, 0
/* 80257358 00254298  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8025735C 0025429C  7D 89 03 A6 */	mtctr r12
/* 80257360 002542A0  4E 80 04 21 */	bctrl 
/* 80257364 002542A4  48 00 00 54 */	b .L_802573B8
.L_80257368:
/* 80257368 002542A8  7F E3 FB 78 */	mr r3, r31
/* 8025736C 002542AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80257370 002542B0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80257374 002542B4  7D 89 03 A6 */	mtctr r12
/* 80257378 002542B8  4E 80 04 21 */	bctrl 
/* 8025737C 002542BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80257380 002542C0  38 80 58 25 */	li r4, 0x5825
/* 80257384 002542C4  38 A0 00 00 */	li r5, 0
/* 80257388 002542C8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8025738C 002542CC  7D 89 03 A6 */	mtctr r12
/* 80257390 002542D0  4E 80 04 21 */	bctrl 
/* 80257394 002542D4  48 00 00 24 */	b .L_802573B8
.L_80257398:
/* 80257398 002542D8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025739C 002542DC  40 82 00 1C */	bne .L_802573B8
/* 802573A0 002542E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802573A4 002542E4  38 A0 00 04 */	li r5, 4
/* 802573A8 002542E8  38 C0 00 00 */	li r6, 0
/* 802573AC 002542EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802573B0 002542F0  7D 89 03 A6 */	mtctr r12
/* 802573B4 002542F4  4E 80 04 21 */	bctrl 
.L_802573B8:
/* 802573B8 002542F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802573BC 002542FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802573C0 00254300  7C 08 03 A6 */	mtlr r0
/* 802573C4 00254304  38 21 00 10 */	addi r1, r1, 0x10
/* 802573C8 00254308  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog9StateJumpFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog9StateJumpFPQ24Game9EnemyBase, global
/* 802573CC 0025430C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802573D0 00254310  7C 08 02 A6 */	mflr r0
/* 802573D4 00254314  90 01 00 14 */	stw r0, 0x14(r1)
/* 802573D8 00254318  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802573DC 0025431C  7C 9F 23 78 */	mr r31, r4
/* 802573E0 00254320  7F E3 FB 78 */	mr r3, r31
/* 802573E4 00254324  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802573E8 00254328  60 00 00 40 */	ori r0, r0, 0x40
/* 802573EC 0025432C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802573F0 00254330  4B EA A5 8D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802573F4 00254334  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802573F8 00254338  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802573FC 0025433C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80257400 00254340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80257404 00254344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80257408 00254348  7C 08 03 A6 */	mtlr r0
/* 8025740C 0025434C  38 21 00 10 */	addi r1, r1, 0x10
/* 80257410 00254350  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog9StateJumpFPQ24Game9EnemyBase

.fn init__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80257414 00254354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257418 00254358  7C 08 02 A6 */	mflr r0
/* 8025741C 0025435C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257420 00254360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80257424 00254364  7C 9F 23 78 */	mr r31, r4
/* 80257428 00254368  7F E3 FB 78 */	mr r3, r31
/* 8025742C 0025436C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80257430 00254370  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80257434 00254374  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257438 00254378  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8025743C 0025437C  60 00 00 04 */	ori r0, r0, 4
/* 80257440 00254380  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257444 00254384  4B EA A5 89 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80257448 00254388  7F E3 FB 78 */	mr r3, r31
/* 8025744C 0025438C  38 80 00 06 */	li r4, 6
/* 80257450 00254390  38 A0 00 00 */	li r5, 0
/* 80257454 00254394  4B EA DB B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80257458 00254398  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025745C 0025439C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80257460 002543A0  7C 08 03 A6 */	mtlr r0
/* 80257464 002543A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80257468 002543A8  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBase, global
/* 8025746C 002543AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257470 002543B0  7C 08 02 A6 */	mflr r0
/* 80257474 002543B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257478 002543B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025747C 002543BC  7C 9F 23 78 */	mr r31, r4
/* 80257480 002543C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80257484 002543C4  7C 7E 1B 78 */	mr r30, r3
/* 80257488 002543C8  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 8025748C 002543CC  C0 24 02 C0 */	lfs f1, 0x2c0(r4)
/* 80257490 002543D0  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 80257494 002543D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257498 002543D8  40 81 00 0C */	ble .L_802574A4
/* 8025749C 002543DC  7F E3 FB 78 */	mr r3, r31
/* 802574A0 002543E0  4B EA DE 01 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802574A4:
/* 802574A4 002543E4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802574A8 002543E8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802574AC 002543EC  28 00 00 00 */	cmplwi r0, 0
/* 802574B0 002543F0  41 82 00 30 */	beq .L_802574E0
/* 802574B4 002543F4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802574B8 002543F8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802574BC 002543FC  40 82 00 24 */	bne .L_802574E0
/* 802574C0 00254400  7F C3 F3 78 */	mr r3, r30
/* 802574C4 00254404  7F E4 FB 78 */	mr r4, r31
/* 802574C8 00254408  81 9E 00 00 */	lwz r12, 0(r30)
/* 802574CC 0025440C  38 A0 00 05 */	li r5, 5
/* 802574D0 00254410  38 C0 00 00 */	li r6, 0
/* 802574D4 00254414  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802574D8 00254418  7D 89 03 A6 */	mtctr r12
/* 802574DC 0025441C  4E 80 04 21 */	bctrl 
.L_802574E0:
/* 802574E0 00254420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802574E4 00254424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802574E8 00254428  83 C1 00 08 */	lwz r30, 8(r1)
/* 802574EC 0025442C  7C 08 03 A6 */	mtlr r0
/* 802574F0 00254430  38 21 00 10 */	addi r1, r1, 0x10
/* 802574F4 00254434  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBase, global
/* 802574F8 00254438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802574FC 0025443C  7C 08 02 A6 */	mflr r0
/* 80257500 00254440  7C 83 23 78 */	mr r3, r4
/* 80257504 00254444  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257508 00254448  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8025750C 0025444C  60 00 00 40 */	ori r0, r0, 0x40
/* 80257510 00254450  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257514 00254454  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80257518 00254458  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 8025751C 0025445C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257520 00254460  4B EA A4 5D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80257524 00254464  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80257528 00254468  7C 08 03 A6 */	mtlr r0
/* 8025752C 0025446C  38 21 00 10 */	addi r1, r1, 0x10
/* 80257530 00254470  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog13StateJumpWaitFPQ24Game9EnemyBase

.fn init__Q34Game4Frog9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80257534 00254474  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257538 00254478  7C 08 02 A6 */	mflr r0
/* 8025753C 0025447C  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257540 00254480  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257544 00254484  38 00 00 01 */	li r0, 1
/* 80257548 00254488  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025754C 0025448C  7C 9F 23 78 */	mr r31, r4
/* 80257550 00254490  7F E3 FB 78 */	mr r3, r31
/* 80257554 00254494  98 04 02 D9 */	stb r0, 0x2d9(r4)
/* 80257558 00254498  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8025755C 0025449C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80257560 002544A0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257564 002544A4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80257568 002544A8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8025756C 002544AC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80257570 002544B0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80257574 002544B4  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80257578 002544B8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8025757C 002544BC  4B EA A4 51 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80257580 002544C0  7F E3 FB 78 */	mr r3, r31
/* 80257584 002544C4  38 80 00 07 */	li r4, 7
/* 80257588 002544C8  38 A0 00 00 */	li r5, 0
/* 8025758C 002544CC  4B EA DA 79 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80257590 002544D0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80257594 002544D4  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257598 002544D8  C0 23 08 94 */	lfs f1, 0x894(r3)
/* 8025759C 002544DC  FC 20 08 50 */	fneg f1, f1
/* 802575A0 002544E0  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 802575A4 002544E4  D0 3F 01 CC */	stfs f1, 0x1cc(r31)
/* 802575A8 002544E8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 802575AC 002544EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802575B0 002544F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802575B4 002544F4  7C 08 03 A6 */	mtlr r0
/* 802575B8 002544F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802575BC 002544FC  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog9StateFallFPQ24Game9EnemyBase, global
/* 802575C0 00254500  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802575C4 00254504  7C 08 02 A6 */	mflr r0
/* 802575C8 00254508  90 01 00 14 */	stw r0, 0x14(r1)
/* 802575CC 0025450C  80 04 00 C8 */	lwz r0, 0xc8(r4)
/* 802575D0 00254510  28 00 00 00 */	cmplwi r0, 0
/* 802575D4 00254514  41 82 00 1C */	beq .L_802575F0
/* 802575D8 00254518  81 83 00 00 */	lwz r12, 0(r3)
/* 802575DC 0025451C  38 A0 00 06 */	li r5, 6
/* 802575E0 00254520  38 C0 00 00 */	li r6, 0
/* 802575E4 00254524  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802575E8 00254528  7D 89 03 A6 */	mtctr r12
/* 802575EC 0025452C  4E 80 04 21 */	bctrl 
.L_802575F0:
/* 802575F0 00254530  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802575F4 00254534  7C 08 03 A6 */	mtlr r0
/* 802575F8 00254538  38 21 00 10 */	addi r1, r1, 0x10
/* 802575FC 0025453C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog9StateFallFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog9StateFallFPQ24Game9EnemyBase, global
/* 80257600 00254540  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257604 00254544  7C 08 02 A6 */	mflr r0
/* 80257608 00254548  7C 83 23 78 */	mr r3, r4
/* 8025760C 0025454C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257610 00254550  38 00 00 00 */	li r0, 0
/* 80257614 00254554  98 04 02 D9 */	stb r0, 0x2d9(r4)
/* 80257618 00254558  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8025761C 0025455C  60 00 00 40 */	ori r0, r0, 0x40
/* 80257620 00254560  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257624 00254564  4B EA A3 59 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80257628 00254568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025762C 0025456C  7C 08 03 A6 */	mtlr r0
/* 80257630 00254570  38 21 00 10 */	addi r1, r1, 0x10
/* 80257634 00254574  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog9StateFallFPQ24Game9EnemyBase

.fn init__Q34Game4Frog11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80257638 00254578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025763C 0025457C  7C 08 02 A6 */	mflr r0
/* 80257640 00254580  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257644 00254584  38 00 00 00 */	li r0, 0
/* 80257648 00254588  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025764C 0025458C  7C 9F 23 78 */	mr r31, r4
/* 80257650 00254590  7F E3 FB 78 */	mr r3, r31
/* 80257654 00254594  98 04 02 D9 */	stb r0, 0x2d9(r4)
/* 80257658 00254598  48 00 1B 45 */	bl pressOnGround__Q34Game4Frog3ObjFv
/* 8025765C 0025459C  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257660 002545A0  7F E3 FB 78 */	mr r3, r31
/* 80257664 002545A4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80257668 002545A8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025766C 002545AC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80257670 002545B0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80257674 002545B4  4B EA A3 59 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80257678 002545B8  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 8025767C 002545BC  7F E3 FB 78 */	mr r3, r31
/* 80257680 002545C0  38 80 00 08 */	li r4, 8
/* 80257684 002545C4  38 A0 00 00 */	li r5, 0
/* 80257688 002545C8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025768C 002545CC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80257690 002545D0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80257694 002545D4  4B EA D9 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80257698 002545D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025769C 002545DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802576A0 002545E0  7C 08 03 A6 */	mtlr r0
/* 802576A4 002545E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802576A8 002545E8  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog11StateAttackFPQ24Game9EnemyBase, global
/* 802576AC 002545EC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802576B0 002545F0  7C 08 02 A6 */	mflr r0
/* 802576B4 002545F4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802576B8 002545F8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802576BC 002545FC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802576C0 00254600  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802576C4 00254604  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802576C8 00254608  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 802576CC 0025460C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 802576D0 00254610  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802576D4 00254614  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802576D8 00254618  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802576DC 0025461C  7C 7E 1B 78 */	mr r30, r3
/* 802576E0 00254620  7C 9F 23 78 */	mr r31, r4
/* 802576E4 00254624  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802576E8 00254628  28 00 00 00 */	cmplwi r0, 0
/* 802576EC 0025462C  41 82 00 FC */	beq .L_802577E8
/* 802576F0 00254630  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802576F4 00254634  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802576F8 00254638  40 82 00 F0 */	bne .L_802577E8
/* 802576FC 0025463C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80257700 00254640  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257704 00254644  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257708 00254648  4C 40 13 82 */	cror 2, 0, 2
/* 8025770C 0025464C  40 82 00 20 */	bne .L_8025772C
/* 80257710 00254650  81 83 00 00 */	lwz r12, 0(r3)
/* 80257714 00254654  38 A0 00 00 */	li r5, 0
/* 80257718 00254658  38 C0 00 00 */	li r6, 0
/* 8025771C 0025465C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80257720 00254660  7D 89 03 A6 */	mtctr r12
/* 80257724 00254664  4E 80 04 21 */	bctrl 
/* 80257728 00254668  48 00 00 C0 */	b .L_802577E8
.L_8025772C:
/* 8025772C 0025466C  81 84 00 00 */	lwz r12, 0(r4)
/* 80257730 00254670  38 61 00 08 */	addi r3, r1, 8
/* 80257734 00254674  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 80257738 00254678  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025773C 0025467C  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 80257740 00254680  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 80257744 00254684  7D 89 03 A6 */	mtctr r12
/* 80257748 00254688  4E 80 04 21 */	bctrl 
/* 8025774C 0025468C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80257750 00254690  C0 41 00 08 */	lfs f2, 8(r1)
/* 80257754 00254694  EC 60 F0 28 */	fsubs f3, f0, f30
/* 80257758 00254698  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8025775C 0025469C  EC 42 F8 28 */	fsubs f2, f2, f31
/* 80257760 002546A0  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257764 002546A4  EC 21 E8 28 */	fsubs f1, f1, f29
/* 80257768 002546A8  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8025776C 002546AC  EC 81 00 72 */	fmuls f4, f1, f1
/* 80257770 002546B0  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80257774 002546B4  EC 24 08 2A */	fadds f1, f4, f1
/* 80257778 002546B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025777C 002546BC  40 81 00 14 */	ble .L_80257790
/* 80257780 002546C0  40 81 00 14 */	ble .L_80257794
/* 80257784 002546C4  FC 00 08 34 */	frsqrte f0, f1
/* 80257788 002546C8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8025778C 002546CC  48 00 00 08 */	b .L_80257794
.L_80257790:
/* 80257790 002546D0  FC 20 00 90 */	fmr f1, f0
.L_80257794:
/* 80257794 002546D4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80257798 002546D8  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 8025779C 002546DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802577A0 002546E0  40 81 00 28 */	ble .L_802577C8
/* 802577A4 002546E4  7F C3 F3 78 */	mr r3, r30
/* 802577A8 002546E8  7F E4 FB 78 */	mr r4, r31
/* 802577AC 002546EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802577B0 002546F0  38 A0 00 08 */	li r5, 8
/* 802577B4 002546F4  38 C0 00 00 */	li r6, 0
/* 802577B8 002546F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802577BC 002546FC  7D 89 03 A6 */	mtctr r12
/* 802577C0 00254700  4E 80 04 21 */	bctrl 
/* 802577C4 00254704  48 00 00 24 */	b .L_802577E8
.L_802577C8:
/* 802577C8 00254708  7F C3 F3 78 */	mr r3, r30
/* 802577CC 0025470C  7F E4 FB 78 */	mr r4, r31
/* 802577D0 00254710  81 9E 00 00 */	lwz r12, 0(r30)
/* 802577D4 00254714  38 A0 00 01 */	li r5, 1
/* 802577D8 00254718  38 C0 00 00 */	li r6, 0
/* 802577DC 0025471C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802577E0 00254720  7D 89 03 A6 */	mtctr r12
/* 802577E4 00254724  4E 80 04 21 */	bctrl 
.L_802577E8:
/* 802577E8 00254728  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802577EC 0025472C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802577F0 00254730  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 802577F4 00254734  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 802577F8 00254738  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 802577FC 0025473C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80257800 00254740  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80257804 00254744  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80257808 00254748  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8025780C 0025474C  7C 08 03 A6 */	mtlr r0
/* 80257810 00254750  38 21 00 50 */	addi r1, r1, 0x50
/* 80257814 00254754  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog11StateAttackFPQ24Game9EnemyBase, global
/* 80257818 00254758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025781C 0025475C  7C 08 02 A6 */	mflr r0
/* 80257820 00254760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257824 00254764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80257828 00254768  7C 9F 23 78 */	mr r31, r4
/* 8025782C 0025476C  7F E3 FB 78 */	mr r3, r31
/* 80257830 00254770  48 00 1C AD */	bl finishJumpEffect__Q34Game4Frog3ObjFv
/* 80257834 00254774  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80257838 00254778  7F E3 FB 78 */	mr r3, r31
/* 8025783C 0025477C  60 00 00 40 */	ori r0, r0, 0x40
/* 80257840 00254780  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80257844 00254784  4B EA A1 39 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80257848 00254788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025784C 0025478C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80257850 00254790  7C 08 03 A6 */	mtlr r0
/* 80257854 00254794  38 21 00 10 */	addi r1, r1, 0x10
/* 80257858 00254798  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game4Frog9StateFailFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025785C 0025479C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257860 002547A0  7C 08 02 A6 */	mflr r0
/* 80257864 002547A4  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257868 002547A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025786C 002547AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80257870 002547B0  7C 9F 23 78 */	mr r31, r4
/* 80257874 002547B4  7F E3 FB 78 */	mr r3, r31
/* 80257878 002547B8  D0 04 02 0C */	stfs f0, 0x20c(r4)
/* 8025787C 002547BC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80257880 002547C0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80257884 002547C4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80257888 002547C8  4B EA A1 45 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8025788C 002547CC  7F E3 FB 78 */	mr r3, r31
/* 80257890 002547D0  38 80 00 09 */	li r4, 9
/* 80257894 002547D4  38 A0 00 00 */	li r5, 0
/* 80257898 002547D8  4B EA D7 6D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025789C 002547DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802578A0 002547E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802578A4 002547E4  7C 08 03 A6 */	mtlr r0
/* 802578A8 002547E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802578AC 002547EC  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog9StateFailFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog9StateFailFPQ24Game9EnemyBase, global
/* 802578B0 002547F0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802578B4 002547F4  7C 08 02 A6 */	mflr r0
/* 802578B8 002547F8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802578BC 002547FC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802578C0 00254800  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802578C4 00254804  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 802578C8 00254808  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 802578CC 0025480C  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 802578D0 00254810  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 802578D4 00254814  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802578D8 00254818  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802578DC 0025481C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802578E0 00254820  7C 7E 1B 78 */	mr r30, r3
/* 802578E4 00254824  7C 9F 23 78 */	mr r31, r4
/* 802578E8 00254828  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802578EC 0025482C  28 00 00 00 */	cmplwi r0, 0
/* 802578F0 00254830  41 82 01 38 */	beq .L_80257A28
/* 802578F4 00254834  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802578F8 00254838  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802578FC 0025483C  40 82 01 2C */	bne .L_80257A28
/* 80257900 00254840  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80257904 00254844  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257908 00254848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025790C 0025484C  4C 40 13 82 */	cror 2, 0, 2
/* 80257910 00254850  40 82 00 20 */	bne .L_80257930
/* 80257914 00254854  81 83 00 00 */	lwz r12, 0(r3)
/* 80257918 00254858  38 A0 00 00 */	li r5, 0
/* 8025791C 0025485C  38 C0 00 00 */	li r6, 0
/* 80257920 00254860  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80257924 00254864  7D 89 03 A6 */	mtctr r12
/* 80257928 00254868  4E 80 04 21 */	bctrl 
/* 8025792C 0025486C  48 00 00 FC */	b .L_80257A28
.L_80257930:
/* 80257930 00254870  7F E3 FB 78 */	mr r3, r31
/* 80257934 00254874  38 80 00 00 */	li r4, 0
/* 80257938 00254878  4B EB CD 21 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 8025793C 0025487C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80257940 00254880  41 82 00 28 */	beq .L_80257968
/* 80257944 00254884  7F C3 F3 78 */	mr r3, r30
/* 80257948 00254888  7F E4 FB 78 */	mr r4, r31
/* 8025794C 0025488C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80257950 00254890  38 A0 00 03 */	li r5, 3
/* 80257954 00254894  38 C0 00 00 */	li r6, 0
/* 80257958 00254898  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025795C 0025489C  7D 89 03 A6 */	mtctr r12
/* 80257960 002548A0  4E 80 04 21 */	bctrl 
/* 80257964 002548A4  48 00 00 C4 */	b .L_80257A28
.L_80257968:
/* 80257968 002548A8  7F E4 FB 78 */	mr r4, r31
/* 8025796C 002548AC  38 61 00 08 */	addi r3, r1, 8
/* 80257970 002548B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80257974 002548B4  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 80257978 002548B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025797C 002548BC  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 80257980 002548C0  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 80257984 002548C4  7D 89 03 A6 */	mtctr r12
/* 80257988 002548C8  4E 80 04 21 */	bctrl 
/* 8025798C 002548CC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80257990 002548D0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80257994 002548D4  EC 60 F0 28 */	fsubs f3, f0, f30
/* 80257998 002548D8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8025799C 002548DC  EC 42 F8 28 */	fsubs f2, f2, f31
/* 802579A0 002548E0  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 802579A4 002548E4  EC 21 E8 28 */	fsubs f1, f1, f29
/* 802579A8 002548E8  EC 63 00 F2 */	fmuls f3, f3, f3
/* 802579AC 002548EC  EC 81 00 72 */	fmuls f4, f1, f1
/* 802579B0 002548F0  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 802579B4 002548F4  EC 24 08 2A */	fadds f1, f4, f1
/* 802579B8 002548F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802579BC 002548FC  40 81 00 14 */	ble .L_802579D0
/* 802579C0 00254900  40 81 00 14 */	ble .L_802579D4
/* 802579C4 00254904  FC 00 08 34 */	frsqrte f0, f1
/* 802579C8 00254908  EC 20 00 72 */	fmuls f1, f0, f1
/* 802579CC 0025490C  48 00 00 08 */	b .L_802579D4
.L_802579D0:
/* 802579D0 00254910  FC 20 00 90 */	fmr f1, f0
.L_802579D4:
/* 802579D4 00254914  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802579D8 00254918  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802579DC 0025491C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802579E0 00254920  40 81 00 28 */	ble .L_80257A08
/* 802579E4 00254924  7F C3 F3 78 */	mr r3, r30
/* 802579E8 00254928  7F E4 FB 78 */	mr r4, r31
/* 802579EC 0025492C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802579F0 00254930  38 A0 00 08 */	li r5, 8
/* 802579F4 00254934  38 C0 00 00 */	li r6, 0
/* 802579F8 00254938  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802579FC 0025493C  7D 89 03 A6 */	mtctr r12
/* 80257A00 00254940  4E 80 04 21 */	bctrl 
/* 80257A04 00254944  48 00 00 24 */	b .L_80257A28
.L_80257A08:
/* 80257A08 00254948  7F C3 F3 78 */	mr r3, r30
/* 80257A0C 0025494C  7F E4 FB 78 */	mr r4, r31
/* 80257A10 00254950  81 9E 00 00 */	lwz r12, 0(r30)
/* 80257A14 00254954  38 A0 00 01 */	li r5, 1
/* 80257A18 00254958  38 C0 00 00 */	li r6, 0
/* 80257A1C 0025495C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80257A20 00254960  7D 89 03 A6 */	mtctr r12
/* 80257A24 00254964  4E 80 04 21 */	bctrl 
.L_80257A28:
/* 80257A28 00254968  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80257A2C 0025496C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80257A30 00254970  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80257A34 00254974  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80257A38 00254978  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 80257A3C 0025497C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80257A40 00254980  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80257A44 00254984  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80257A48 00254988  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80257A4C 0025498C  7C 08 03 A6 */	mtlr r0
/* 80257A50 00254990  38 21 00 50 */	addi r1, r1, 0x50
/* 80257A54 00254994  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog9StateFailFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog9StateFailFPQ24Game9EnemyBase, global
/* 80257A58 00254998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257A5C 0025499C  7C 08 02 A6 */	mflr r0
/* 80257A60 002549A0  7C 83 23 78 */	mr r3, r4
/* 80257A64 002549A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257A68 002549A8  4B EA 9F 15 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80257A6C 002549AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80257A70 002549B0  7C 08 03 A6 */	mtlr r0
/* 80257A74 002549B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80257A78 002549B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog9StateFailFPQ24Game9EnemyBase

.fn init__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80257A7C 002549BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257A80 002549C0  7C 08 02 A6 */	mflr r0
/* 80257A84 002549C4  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257A88 002549C8  7C 83 23 78 */	mr r3, r4
/* 80257A8C 002549CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257A90 002549D0  38 00 FF FF */	li r0, -1
/* 80257A94 002549D4  38 A0 00 00 */	li r5, 0
/* 80257A98 002549D8  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 80257A9C 002549DC  38 80 00 04 */	li r4, 4
/* 80257AA0 002549E0  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80257AA4 002549E4  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80257AA8 002549E8  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80257AAC 002549EC  4B EA D5 59 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80257AB0 002549F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80257AB4 002549F4  7C 08 03 A6 */	mtlr r0
/* 80257AB8 002549F8  38 21 00 10 */	addi r1, r1, 0x10
/* 80257ABC 002549FC  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBase, global
/* 80257AC0 00254A00  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80257AC4 00254A04  7C 08 02 A6 */	mflr r0
/* 80257AC8 00254A08  90 01 00 84 */	stw r0, 0x84(r1)
/* 80257ACC 00254A0C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80257AD0 00254A10  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80257AD4 00254A14  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80257AD8 00254A18  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80257ADC 00254A1C  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80257AE0 00254A20  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80257AE4 00254A24  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 80257AE8 00254A28  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 80257AEC 00254A2C  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 80257AF0 00254A30  F3 61 00 38 */	psq_st f27, 56(r1), 0, qr0
/* 80257AF4 00254A34  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80257AF8 00254A38  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80257AFC 00254A3C  81 84 00 00 */	lwz r12, 0(r4)
/* 80257B00 00254A40  7C 7E 1B 78 */	mr r30, r3
/* 80257B04 00254A44  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 80257B08 00254A48  7C 9F 23 78 */	mr r31, r4
/* 80257B0C 00254A4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80257B10 00254A50  38 61 00 14 */	addi r3, r1, 0x14
/* 80257B14 00254A54  C3 E4 01 98 */	lfs f31, 0x198(r4)
/* 80257B18 00254A58  C3 64 01 A0 */	lfs f27, 0x1a0(r4)
/* 80257B1C 00254A5C  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 80257B20 00254A60  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 80257B24 00254A64  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80257B28 00254A68  7D 89 03 A6 */	mtctr r12
/* 80257B2C 00254A6C  4E 80 04 21 */	bctrl 
/* 80257B30 00254A70  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 80257B34 00254A74  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80257B38 00254A78  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80257B3C 00254A7C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80257B40 00254A80  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 80257B44 00254A84  EC 3F 20 28 */	fsubs f1, f31, f4
/* 80257B48 00254A88  EC 5B 00 28 */	fsubs f2, f27, f0
/* 80257B4C 00254A8C  D0 81 00 08 */	stfs f4, 8(r1)
/* 80257B50 00254A90  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80257B54 00254A94  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80257B58 00254A98  4B DD D5 B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80257B5C 00254A9C  48 1B A0 75 */	bl roundAng__Ff
/* 80257B60 00254AA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80257B64 00254AA4  FF E0 08 90 */	fmr f31, f1
/* 80257B68 00254AA8  7F E3 FB 78 */	mr r3, r31
/* 80257B6C 00254AAC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80257B70 00254AB0  7D 89 03 A6 */	mtctr r12
/* 80257B74 00254AB4  4E 80 04 21 */	bctrl 
/* 80257B78 00254AB8  FC 40 08 90 */	fmr f2, f1
/* 80257B7C 00254ABC  FC 20 F8 90 */	fmr f1, f31
/* 80257B80 00254AC0  48 1B A0 7D */	bl angDist__Fff
/* 80257B84 00254AC4  FF E0 08 90 */	fmr f31, f1
/* 80257B88 00254AC8  C0 02 C7 2C */	lfs f0, lbl_8051AA8C@sda21(r2)
/* 80257B8C 00254ACC  C0 22 C7 28 */	lfs f1, lbl_8051AA88@sda21(r2)
/* 80257B90 00254AD0  EC 00 07 72 */	fmuls f0, f0, f29
/* 80257B94 00254AD4  EF BF 07 B2 */	fmuls f29, f31, f30
/* 80257B98 00254AD8  EC 21 00 32 */	fmuls f1, f1, f0
/* 80257B9C 00254ADC  FC 00 EA 10 */	fabs f0, f29
/* 80257BA0 00254AE0  FC 00 00 18 */	frsp f0, f0
/* 80257BA4 00254AE4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80257BA8 00254AE8  40 81 00 1C */	ble .L_80257BC4
/* 80257BAC 00254AEC  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257BB0 00254AF0  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80257BB4 00254AF4  40 81 00 0C */	ble .L_80257BC0
/* 80257BB8 00254AF8  FF A0 08 90 */	fmr f29, f1
/* 80257BBC 00254AFC  48 00 00 08 */	b .L_80257BC4
.L_80257BC0:
/* 80257BC0 00254B00  FF A0 08 50 */	fneg f29, f1
.L_80257BC4:
/* 80257BC4 00254B04  7F E3 FB 78 */	mr r3, r31
/* 80257BC8 00254B08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80257BCC 00254B0C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80257BD0 00254B10  7D 89 03 A6 */	mtctr r12
/* 80257BD4 00254B14  4E 80 04 21 */	bctrl 
/* 80257BD8 00254B18  EC 3D 08 2A */	fadds f1, f29, f1
/* 80257BDC 00254B1C  48 1B 9F F5 */	bl roundAng__Ff
/* 80257BE0 00254B20  C0 02 C7 2C */	lfs f0, lbl_8051AA8C@sda21(r2)
/* 80257BE4 00254B24  FC 40 FA 10 */	fabs f2, f31
/* 80257BE8 00254B28  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80257BEC 00254B2C  EC 00 07 32 */	fmuls f0, f0, f28
/* 80257BF0 00254B30  C0 22 C7 28 */	lfs f1, lbl_8051AA88@sda21(r2)
/* 80257BF4 00254B34  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 80257BF8 00254B38  FC 40 10 18 */	frsp f2, f2
/* 80257BFC 00254B3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80257C00 00254B40  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 80257C04 00254B44  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80257C08 00254B48  4C 40 13 82 */	cror 2, 0, 2
/* 80257C0C 00254B4C  40 82 00 14 */	bne .L_80257C20
/* 80257C10 00254B50  38 00 00 09 */	li r0, 9
/* 80257C14 00254B54  7F E3 FB 78 */	mr r3, r31
/* 80257C18 00254B58  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257C1C 00254B5C  4B EA D6 85 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257C20:
/* 80257C20 00254B60  7F E3 FB 78 */	mr r3, r31
/* 80257C24 00254B64  38 80 00 00 */	li r4, 0
/* 80257C28 00254B68  4B EB CA 31 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80257C2C 00254B6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80257C30 00254B70  41 82 00 14 */	beq .L_80257C44
/* 80257C34 00254B74  38 00 00 03 */	li r0, 3
/* 80257C38 00254B78  7F E3 FB 78 */	mr r3, r31
/* 80257C3C 00254B7C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257C40 00254B80  4B EA D6 61 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257C44:
/* 80257C44 00254B84  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80257C48 00254B88  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257C4C 00254B8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257C50 00254B90  4C 40 13 82 */	cror 2, 0, 2
/* 80257C54 00254B94  40 82 00 14 */	bne .L_80257C68
/* 80257C58 00254B98  38 00 00 00 */	li r0, 0
/* 80257C5C 00254B9C  7F E3 FB 78 */	mr r3, r31
/* 80257C60 00254BA0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257C64 00254BA4  4B EA D6 3D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257C68:
/* 80257C68 00254BA8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80257C6C 00254BAC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80257C70 00254BB0  28 00 00 00 */	cmplwi r0, 0
/* 80257C74 00254BB4  41 82 00 30 */	beq .L_80257CA4
/* 80257C78 00254BB8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80257C7C 00254BBC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80257C80 00254BC0  40 82 00 24 */	bne .L_80257CA4
/* 80257C84 00254BC4  7F C3 F3 78 */	mr r3, r30
/* 80257C88 00254BC8  7F E4 FB 78 */	mr r4, r31
/* 80257C8C 00254BCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80257C90 00254BD0  38 C0 00 00 */	li r6, 0
/* 80257C94 00254BD4  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80257C98 00254BD8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80257C9C 00254BDC  7D 89 03 A6 */	mtctr r12
/* 80257CA0 00254BE0  4E 80 04 21 */	bctrl 
.L_80257CA4:
/* 80257CA4 00254BE4  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80257CA8 00254BE8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80257CAC 00254BEC  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80257CB0 00254BF0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80257CB4 00254BF4  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80257CB8 00254BF8  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80257CBC 00254BFC  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 80257CC0 00254C00  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 80257CC4 00254C04  E3 61 00 38 */	psq_l f27, 56(r1), 0, qr0
/* 80257CC8 00254C08  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 80257CCC 00254C0C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80257CD0 00254C10  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80257CD4 00254C14  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80257CD8 00254C18  7C 08 03 A6 */	mtlr r0
/* 80257CDC 00254C1C  38 21 00 80 */	addi r1, r1, 0x80
/* 80257CE0 00254C20  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBase, global
/* 80257CE4 00254C24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80257CE8 00254C28  7C 08 02 A6 */	mflr r0
/* 80257CEC 00254C2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80257CF0 00254C30  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80257CF4 00254C34  7C 9F 23 78 */	mr r31, r4
/* 80257CF8 00254C38  80 04 02 D4 */	lwz r0, 0x2d4(r4)
/* 80257CFC 00254C3C  2C 00 00 03 */	cmpwi r0, 3
/* 80257D00 00254C40  40 82 00 30 */	bne .L_80257D30
/* 80257D04 00254C44  81 84 00 00 */	lwz r12, 0(r4)
/* 80257D08 00254C48  38 61 00 08 */	addi r3, r1, 8
/* 80257D0C 00254C4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80257D10 00254C50  7D 89 03 A6 */	mtctr r12
/* 80257D14 00254C54  4E 80 04 21 */	bctrl 
/* 80257D18 00254C58  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80257D1C 00254C5C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80257D20 00254C60  C0 01 00 08 */	lfs f0, 8(r1)
/* 80257D24 00254C64  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80257D28 00254C68  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80257D2C 00254C6C  D0 5F 02 D0 */	stfs f2, 0x2d0(r31)
.L_80257D30:
/* 80257D30 00254C70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80257D34 00254C74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80257D38 00254C78  7C 08 03 A6 */	mtlr r0
/* 80257D3C 00254C7C  38 21 00 20 */	addi r1, r1, 0x20
/* 80257D40 00254C80  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog15StateTurnToHomeFPQ24Game9EnemyBase

.fn init__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80257D44 00254C84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80257D48 00254C88  7C 08 02 A6 */	mflr r0
/* 80257D4C 00254C8C  38 A0 FF FF */	li r5, -1
/* 80257D50 00254C90  7C 83 23 78 */	mr r3, r4
/* 80257D54 00254C94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80257D58 00254C98  38 00 00 00 */	li r0, 0
/* 80257D5C 00254C9C  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257D60 00254CA0  90 A4 02 D4 */	stw r5, 0x2d4(r4)
/* 80257D64 00254CA4  38 80 00 03 */	li r4, 3
/* 80257D68 00254CA8  38 A0 00 00 */	li r5, 0
/* 80257D6C 00254CAC  98 03 02 D8 */	stb r0, 0x2d8(r3)
/* 80257D70 00254CB0  D0 03 02 C0 */	stfs f0, 0x2c0(r3)
/* 80257D74 00254CB4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80257D78 00254CB8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80257D7C 00254CBC  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 80257D80 00254CC0  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80257D84 00254CC4  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80257D88 00254CC8  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80257D8C 00254CCC  4B EA D2 79 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80257D90 00254CD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80257D94 00254CD4  7C 08 03 A6 */	mtlr r0
/* 80257D98 00254CD8  38 21 00 10 */	addi r1, r1, 0x10
/* 80257D9C 00254CDC  4E 80 00 20 */	blr 
.endfn init__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBase, global
/* 80257DA0 00254CE0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80257DA4 00254CE4  7C 08 02 A6 */	mflr r0
/* 80257DA8 00254CE8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80257DAC 00254CEC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80257DB0 00254CF0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80257DB4 00254CF4  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80257DB8 00254CF8  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80257DBC 00254CFC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80257DC0 00254D00  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80257DC4 00254D04  88 04 02 D8 */	lbz r0, 0x2d8(r4)
/* 80257DC8 00254D08  7C 7E 1B 78 */	mr r30, r3
/* 80257DCC 00254D0C  7C 9F 23 78 */	mr r31, r4
/* 80257DD0 00254D10  28 00 00 00 */	cmplwi r0, 0
/* 80257DD4 00254D14  41 82 00 B0 */	beq .L_80257E84
/* 80257DD8 00254D18  81 84 00 00 */	lwz r12, 0(r4)
/* 80257DDC 00254D1C  38 61 00 08 */	addi r3, r1, 8
/* 80257DE0 00254D20  81 8C 00 08 */	lwz r12, 8(r12)
/* 80257DE4 00254D24  7D 89 03 A6 */	mtctr r12
/* 80257DE8 00254D28  4E 80 04 21 */	bctrl 
/* 80257DEC 00254D2C  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 80257DF0 00254D30  7F E3 FB 78 */	mr r3, r31
/* 80257DF4 00254D34  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 80257DF8 00254D38  38 81 00 14 */	addi r4, r1, 0x14
/* 80257DFC 00254D3C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80257E00 00254D40  C3 E1 00 08 */	lfs f31, 8(r1)
/* 80257E04 00254D44  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80257E08 00254D48  C3 C1 00 10 */	lfs f30, 0x10(r1)
/* 80257E0C 00254D4C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80257E10 00254D50  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80257E14 00254D54  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80257E18 00254D58  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80257E1C 00254D5C  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80257E20 00254D60  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80257E24 00254D64  4B EB D7 B9 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 80257E28 00254D68  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80257E2C 00254D6C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80257E30 00254D70  EC 5E 00 28 */	fsubs f2, f30, f0
/* 80257E34 00254D74  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80257E38 00254D78  EC 7F 08 28 */	fsubs f3, f31, f1
/* 80257E3C 00254D7C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 80257E40 00254D80  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80257E44 00254D84  EC 00 00 32 */	fmuls f0, f0, f0
/* 80257E48 00254D88  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80257E4C 00254D8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257E50 00254D90  40 80 00 18 */	bge .L_80257E68
/* 80257E54 00254D94  38 00 00 01 */	li r0, 1
/* 80257E58 00254D98  7F E3 FB 78 */	mr r3, r31
/* 80257E5C 00254D9C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257E60 00254DA0  4B EA D4 41 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80257E64 00254DA4  48 00 00 30 */	b .L_80257E94
.L_80257E68:
/* 80257E68 00254DA8  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80257E6C 00254DAC  C0 02 C7 38 */	lfs f0, lbl_8051AA98@sda21(r2)
/* 80257E70 00254DB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257E74 00254DB4  40 81 00 20 */	ble .L_80257E94
/* 80257E78 00254DB8  7F E3 FB 78 */	mr r3, r31
/* 80257E7C 00254DBC  48 00 12 49 */	bl resetHomePosition__Q34Game4Frog3ObjFv
/* 80257E80 00254DC0  48 00 00 14 */	b .L_80257E94
.L_80257E84:
/* 80257E84 00254DC4  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257E88 00254DC8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80257E8C 00254DCC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80257E90 00254DD0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80257E94:
/* 80257E94 00254DD4  7F E3 FB 78 */	mr r3, r31
/* 80257E98 00254DD8  38 80 00 00 */	li r4, 0
/* 80257E9C 00254DDC  4B EB C7 BD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80257EA0 00254DE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80257EA4 00254DE4  41 82 00 14 */	beq .L_80257EB8
/* 80257EA8 00254DE8  38 00 00 03 */	li r0, 3
/* 80257EAC 00254DEC  7F E3 FB 78 */	mr r3, r31
/* 80257EB0 00254DF0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257EB4 00254DF4  4B EA D3 ED */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257EB8:
/* 80257EB8 00254DF8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80257EBC 00254DFC  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80257EC0 00254E00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80257EC4 00254E04  4C 40 13 82 */	cror 2, 0, 2
/* 80257EC8 00254E08  40 82 00 14 */	bne .L_80257EDC
/* 80257ECC 00254E0C  38 00 00 00 */	li r0, 0
/* 80257ED0 00254E10  7F E3 FB 78 */	mr r3, r31
/* 80257ED4 00254E14  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80257ED8 00254E18  4B EA D3 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80257EDC:
/* 80257EDC 00254E1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80257EE0 00254E20  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80257EE4 00254E24  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80257EE8 00254E28  EC 01 00 2A */	fadds f0, f1, f0
/* 80257EEC 00254E2C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80257EF0 00254E30  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80257EF4 00254E34  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80257EF8 00254E38  28 00 00 00 */	cmplwi r0, 0
/* 80257EFC 00254E3C  41 82 00 7C */	beq .L_80257F78
/* 80257F00 00254E40  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80257F04 00254E44  28 00 00 02 */	cmplwi r0, 2
/* 80257F08 00254E48  40 82 00 1C */	bne .L_80257F24
/* 80257F0C 00254E4C  38 00 00 01 */	li r0, 1
/* 80257F10 00254E50  98 1F 02 D8 */	stb r0, 0x2d8(r31)
/* 80257F14 00254E54  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80257F18 00254E58  64 00 00 20 */	oris r0, r0, 0x20
/* 80257F1C 00254E5C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80257F20 00254E60  48 00 00 58 */	b .L_80257F78
.L_80257F24:
/* 80257F24 00254E64  28 00 00 03 */	cmplwi r0, 3
/* 80257F28 00254E68  40 82 00 28 */	bne .L_80257F50
/* 80257F2C 00254E6C  38 00 00 00 */	li r0, 0
/* 80257F30 00254E70  C0 22 C7 3C */	lfs f1, lbl_8051AA9C@sda21(r2)
/* 80257F34 00254E74  98 1F 02 D8 */	stb r0, 0x2d8(r31)
/* 80257F38 00254E78  7F E3 FB 78 */	mr r3, r31
/* 80257F3C 00254E7C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80257F40 00254E80  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80257F44 00254E84  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80257F48 00254E88  48 00 15 C5 */	bl createDownEffect__Q34Game4Frog3ObjFf
/* 80257F4C 00254E8C  48 00 00 2C */	b .L_80257F78
.L_80257F50:
/* 80257F50 00254E90  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80257F54 00254E94  40 82 00 24 */	bne .L_80257F78
/* 80257F58 00254E98  7F C3 F3 78 */	mr r3, r30
/* 80257F5C 00254E9C  7F E4 FB 78 */	mr r4, r31
/* 80257F60 00254EA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80257F64 00254EA4  38 C0 00 00 */	li r6, 0
/* 80257F68 00254EA8  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80257F6C 00254EAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80257F70 00254EB0  7D 89 03 A6 */	mtctr r12
/* 80257F74 00254EB4  4E 80 04 21 */	bctrl 
.L_80257F78:
/* 80257F78 00254EB8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80257F7C 00254EBC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80257F80 00254EC0  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80257F84 00254EC4  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80257F88 00254EC8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80257F8C 00254ECC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80257F90 00254ED0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80257F94 00254ED4  7C 08 03 A6 */	mtlr r0
/* 80257F98 00254ED8  38 21 00 50 */	addi r1, r1, 0x50
/* 80257F9C 00254EDC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBase, global
/* 80257FA0 00254EE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80257FA4 00254EE4  7C 08 02 A6 */	mflr r0
/* 80257FA8 00254EE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80257FAC 00254EEC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80257FB0 00254EF0  7C 9F 23 78 */	mr r31, r4
/* 80257FB4 00254EF4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80257FB8 00254EF8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80257FBC 00254EFC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80257FC0 00254F00  80 04 02 D4 */	lwz r0, 0x2d4(r4)
/* 80257FC4 00254F04  2C 00 00 03 */	cmpwi r0, 3
/* 80257FC8 00254F08  40 82 00 D0 */	bne .L_80258098
/* 80257FCC 00254F0C  81 84 00 00 */	lwz r12, 0(r4)
/* 80257FD0 00254F10  38 61 00 08 */	addi r3, r1, 8
/* 80257FD4 00254F14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80257FD8 00254F18  7D 89 03 A6 */	mtctr r12
/* 80257FDC 00254F1C  4E 80 04 21 */	bctrl 
/* 80257FE0 00254F20  C1 41 00 08 */	lfs f10, 8(r1)
/* 80257FE4 00254F24  C0 9F 01 98 */	lfs f4, 0x198(r31)
/* 80257FE8 00254F28  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 80257FEC 00254F2C  C0 DF 01 A0 */	lfs f6, 0x1a0(r31)
/* 80257FF0 00254F30  EC E4 50 28 */	fsubs f7, f4, f10
/* 80257FF4 00254F34  C1 02 C7 08 */	lfs f8, lbl_8051AA68@sda21(r2)
/* 80257FF8 00254F38  ED 26 18 28 */	fsubs f9, f6, f3
/* 80257FFC 00254F3C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80258000 00254F40  EC 07 41 FA */	fmadds f0, f7, f7, f8
/* 80258004 00254F44  C0 BF 01 9C */	lfs f5, 0x19c(r31)
/* 80258008 00254F48  EC 29 02 72 */	fmuls f1, f9, f9
/* 8025800C 00254F4C  EC 21 00 2A */	fadds f1, f1, f0
/* 80258010 00254F50  FC 01 40 40 */	fcmpo cr0, f1, f8
/* 80258014 00254F54  40 81 00 14 */	ble .L_80258028
/* 80258018 00254F58  40 81 00 14 */	ble .L_8025802C
/* 8025801C 00254F5C  FC 00 08 34 */	frsqrte f0, f1
/* 80258020 00254F60  EC 20 00 72 */	fmuls f1, f0, f1
/* 80258024 00254F64  48 00 00 08 */	b .L_8025802C
.L_80258028:
/* 80258028 00254F68  FC 20 40 90 */	fmr f1, f8
.L_8025802C:
/* 8025802C 00254F6C  C0 02 C7 08 */	lfs f0, lbl_8051AA68@sda21(r2)
/* 80258030 00254F70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80258034 00254F74  40 81 00 1C */	ble .L_80258050
/* 80258038 00254F78  C0 02 C7 10 */	lfs f0, lbl_8051AA70@sda21(r2)
/* 8025803C 00254F7C  EC 00 08 24 */	fdivs f0, f0, f1
/* 80258040 00254F80  EC E7 00 32 */	fmuls f7, f7, f0
/* 80258044 00254F84  ED 08 00 32 */	fmuls f8, f8, f0
/* 80258048 00254F88  ED 29 00 32 */	fmuls f9, f9, f0
/* 8025804C 00254F8C  48 00 00 08 */	b .L_80258054
.L_80258050:
/* 80258050 00254F90  FC 20 00 90 */	fmr f1, f0
.L_80258054:
/* 80258054 00254F94  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80258058 00254F98  C0 03 05 64 */	lfs f0, 0x564(r3)
/* 8025805C 00254F9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80258060 00254FA0  40 80 00 14 */	bge .L_80258074
/* 80258064 00254FA4  D0 9F 02 C8 */	stfs f4, 0x2c8(r31)
/* 80258068 00254FA8  D0 BF 02 CC */	stfs f5, 0x2cc(r31)
/* 8025806C 00254FAC  D0 DF 02 D0 */	stfs f6, 0x2d0(r31)
/* 80258070 00254FB0  48 00 00 28 */	b .L_80258098
.L_80258074:
/* 80258074 00254FB4  EC E7 00 32 */	fmuls f7, f7, f0
/* 80258078 00254FB8  ED 08 00 32 */	fmuls f8, f8, f0
/* 8025807C 00254FBC  ED 29 00 32 */	fmuls f9, f9, f0
/* 80258080 00254FC0  EC E7 50 2A */	fadds f7, f7, f10
/* 80258084 00254FC4  ED 08 10 2A */	fadds f8, f8, f2
/* 80258088 00254FC8  ED 29 18 2A */	fadds f9, f9, f3
/* 8025808C 00254FCC  D0 FF 02 C8 */	stfs f7, 0x2c8(r31)
/* 80258090 00254FD0  D1 1F 02 CC */	stfs f8, 0x2cc(r31)
/* 80258094 00254FD4  D1 3F 02 D0 */	stfs f9, 0x2d0(r31)
.L_80258098:
/* 80258098 00254FD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025809C 00254FDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802580A0 00254FE0  7C 08 03 A6 */	mtlr r0
/* 802580A4 00254FE4  38 21 00 20 */	addi r1, r1, 0x20
/* 802580A8 00254FE8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Frog11StateGoHomeFPQ24Game9EnemyBase
