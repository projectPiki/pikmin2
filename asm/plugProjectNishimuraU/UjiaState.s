.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80485AD8, local
	.asciz "moveside"
.endobj lbl_80485AD8
.balign 4
.obj lbl_80485AE4, local
	.asciz "movecentre"
.endobj lbl_80485AE4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Ujia12StateAttack1, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia12StateAttack1
.obj __vt__Q34Game4Ujia11StateGoHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia11StateGoHome
.obj __vt__Q34Game4Ujia12StateMoveTop, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia12StateMoveTop
.obj __vt__Q34Game4Ujia15StateMoveCentre, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia15StateMoveCentre
.obj __vt__Q34Game4Ujia13StateMoveSide, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia13StateMoveSide
.obj __vt__Q34Game4Ujia9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia9StateMove
.obj __vt__Q34Game4Ujia9StateDive, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia9StateDive
.obj __vt__Q34Game4Ujia11StateAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia11StateAppear
.obj __vt__Q34Game4Ujia9StateStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia9StateStay
.obj __vt__Q34Game4Ujia10StatePress, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia10StatePressFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia10StatePressFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia10StatePress
.obj __vt__Q34Game4Ujia9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia9StateDead
.obj __vt__Q34Game4Ujia5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujia5State
.obj __vt__Q34Game4Ujia3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujia3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game4Ujia3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AE08, local
	.asciz "dead"
.endobj lbl_8051AE08
.balign 4
.obj lbl_8051AE10, local
	.asciz "press"
.endobj lbl_8051AE10
.balign 4
.obj lbl_8051AE18, local
	.asciz "stay"
.endobj lbl_8051AE18
.balign 4
.obj lbl_8051AE20, local
	.asciz "appear"
.endobj lbl_8051AE20
.balign 4
.obj lbl_8051AE28, local
	.asciz "dive"
.endobj lbl_8051AE28
.balign 4
.obj lbl_8051AE30, local
	.asciz "move"
.endobj lbl_8051AE30
.balign 4
.obj lbl_8051AE38, local
	.asciz "movetop"
.endobj lbl_8051AE38
.balign 4
.obj lbl_8051AE40, local
	.asciz "gohome"
.endobj lbl_8051AE40
.balign 4
.obj lbl_8051AE48, local
	.asciz "attack1"
.endobj lbl_8051AE48
.balign 4
.obj lbl_8051AE50, local
	.float 0.0
.endobj lbl_8051AE50
.obj lbl_8051AE54, local # pi
	.float 3.1415927
.endobj lbl_8051AE54
.obj lbl_8051AE58, local
	.float 0.0055555557
.endobj lbl_8051AE58

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game4Ujia3FSMFPQ24Game9EnemyBase, global
/* 80264720 00261660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264724 00261664  7C 08 02 A6 */	mflr r0
/* 80264728 00261668  38 80 00 0B */	li r4, 0xb
/* 8026472C 0026166C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264730 00261670  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264734 00261674  7C 7F 1B 78 */	mr r31, r3
/* 80264738 00261678  4B EC C1 2D */	bl create__Q24Game17EnemyStateMachineFi
/* 8026473C 0026167C  38 60 00 10 */	li r3, 0x10
/* 80264740 00261680  4B DB F7 65 */	bl __nw__FUl
/* 80264744 00261684  7C 64 1B 79 */	or. r4, r3, r3
/* 80264748 00261688  41 82 00 3C */	beq .L_80264784
/* 8026474C 0026168C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80264750 00261690  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 80264754 00261694  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80264758 00261698  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia9StateDead@ha
/* 8026475C 0026169C  90 04 00 00 */	stw r0, 0(r4)
/* 80264760 002616A0  38 E0 00 00 */	li r7, 0
/* 80264764 002616A4  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 80264768 002616A8  38 A2 CA A8 */	addi r5, r2, lbl_8051AE08@sda21
/* 8026476C 002616AC  90 E4 00 04 */	stw r7, 4(r4)
/* 80264770 002616B0  38 03 46 C8 */	addi r0, r3, __vt__Q34Game4Ujia9StateDead@l
/* 80264774 002616B4  90 E4 00 08 */	stw r7, 8(r4)
/* 80264778 002616B8  90 C4 00 00 */	stw r6, 0(r4)
/* 8026477C 002616BC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80264780 002616C0  90 04 00 00 */	stw r0, 0(r4)
.L_80264784:
/* 80264784 002616C4  7F E3 FB 78 */	mr r3, r31
/* 80264788 002616C8  4B EC C1 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026478C 002616CC  38 60 00 10 */	li r3, 0x10
/* 80264790 002616D0  4B DB F7 15 */	bl __nw__FUl
/* 80264794 002616D4  7C 64 1B 79 */	or. r4, r3, r3
/* 80264798 002616D8  41 82 00 40 */	beq .L_802647D8
/* 8026479C 002616DC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802647A0 002616E0  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 802647A4 002616E4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802647A8 002616E8  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia10StatePress@ha
/* 802647AC 002616EC  90 04 00 00 */	stw r0, 0(r4)
/* 802647B0 002616F0  38 00 00 01 */	li r0, 1
/* 802647B4 002616F4  38 E0 00 00 */	li r7, 0
/* 802647B8 002616F8  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 802647BC 002616FC  90 04 00 04 */	stw r0, 4(r4)
/* 802647C0 00261700  38 A2 CA B0 */	addi r5, r2, lbl_8051AE10@sda21
/* 802647C4 00261704  38 03 46 A4 */	addi r0, r3, __vt__Q34Game4Ujia10StatePress@l
/* 802647C8 00261708  90 E4 00 08 */	stw r7, 8(r4)
/* 802647CC 0026170C  90 C4 00 00 */	stw r6, 0(r4)
/* 802647D0 00261710  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802647D4 00261714  90 04 00 00 */	stw r0, 0(r4)
.L_802647D8:
/* 802647D8 00261718  7F E3 FB 78 */	mr r3, r31
/* 802647DC 0026171C  4B EC C1 2D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802647E0 00261720  38 60 00 10 */	li r3, 0x10
/* 802647E4 00261724  4B DB F6 C1 */	bl __nw__FUl
/* 802647E8 00261728  7C 64 1B 79 */	or. r4, r3, r3
/* 802647EC 0026172C  41 82 00 40 */	beq .L_8026482C
/* 802647F0 00261730  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802647F4 00261734  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 802647F8 00261738  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802647FC 0026173C  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia9StateStay@ha
/* 80264800 00261740  90 04 00 00 */	stw r0, 0(r4)
/* 80264804 00261744  38 00 00 02 */	li r0, 2
/* 80264808 00261748  38 E0 00 00 */	li r7, 0
/* 8026480C 0026174C  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 80264810 00261750  90 04 00 04 */	stw r0, 4(r4)
/* 80264814 00261754  38 A2 CA B8 */	addi r5, r2, lbl_8051AE18@sda21
/* 80264818 00261758  38 03 46 80 */	addi r0, r3, __vt__Q34Game4Ujia9StateStay@l
/* 8026481C 0026175C  90 E4 00 08 */	stw r7, 8(r4)
/* 80264820 00261760  90 C4 00 00 */	stw r6, 0(r4)
/* 80264824 00261764  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80264828 00261768  90 04 00 00 */	stw r0, 0(r4)
.L_8026482C:
/* 8026482C 0026176C  7F E3 FB 78 */	mr r3, r31
/* 80264830 00261770  4B EC C0 D9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264834 00261774  38 60 00 10 */	li r3, 0x10
/* 80264838 00261778  4B DB F6 6D */	bl __nw__FUl
/* 8026483C 0026177C  7C 64 1B 79 */	or. r4, r3, r3
/* 80264840 00261780  41 82 00 40 */	beq .L_80264880
/* 80264844 00261784  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80264848 00261788  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 8026484C 0026178C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80264850 00261790  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia11StateAppear@ha
/* 80264854 00261794  90 04 00 00 */	stw r0, 0(r4)
/* 80264858 00261798  38 00 00 03 */	li r0, 3
/* 8026485C 0026179C  38 E0 00 00 */	li r7, 0
/* 80264860 002617A0  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 80264864 002617A4  90 04 00 04 */	stw r0, 4(r4)
/* 80264868 002617A8  38 A2 CA C0 */	addi r5, r2, lbl_8051AE20@sda21
/* 8026486C 002617AC  38 03 46 5C */	addi r0, r3, __vt__Q34Game4Ujia11StateAppear@l
/* 80264870 002617B0  90 E4 00 08 */	stw r7, 8(r4)
/* 80264874 002617B4  90 C4 00 00 */	stw r6, 0(r4)
/* 80264878 002617B8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026487C 002617BC  90 04 00 00 */	stw r0, 0(r4)
.L_80264880:
/* 80264880 002617C0  7F E3 FB 78 */	mr r3, r31
/* 80264884 002617C4  4B EC C0 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264888 002617C8  38 60 00 10 */	li r3, 0x10
/* 8026488C 002617CC  4B DB F6 19 */	bl __nw__FUl
/* 80264890 002617D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80264894 002617D4  41 82 00 40 */	beq .L_802648D4
/* 80264898 002617D8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026489C 002617DC  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 802648A0 002617E0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802648A4 002617E4  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia9StateDive@ha
/* 802648A8 002617E8  90 04 00 00 */	stw r0, 0(r4)
/* 802648AC 002617EC  38 00 00 04 */	li r0, 4
/* 802648B0 002617F0  38 E0 00 00 */	li r7, 0
/* 802648B4 002617F4  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 802648B8 002617F8  90 04 00 04 */	stw r0, 4(r4)
/* 802648BC 002617FC  38 A2 CA C8 */	addi r5, r2, lbl_8051AE28@sda21
/* 802648C0 00261800  38 03 46 38 */	addi r0, r3, __vt__Q34Game4Ujia9StateDive@l
/* 802648C4 00261804  90 E4 00 08 */	stw r7, 8(r4)
/* 802648C8 00261808  90 C4 00 00 */	stw r6, 0(r4)
/* 802648CC 0026180C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802648D0 00261810  90 04 00 00 */	stw r0, 0(r4)
.L_802648D4:
/* 802648D4 00261814  7F E3 FB 78 */	mr r3, r31
/* 802648D8 00261818  4B EC C0 31 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802648DC 0026181C  38 60 00 10 */	li r3, 0x10
/* 802648E0 00261820  4B DB F5 C5 */	bl __nw__FUl
/* 802648E4 00261824  7C 64 1B 79 */	or. r4, r3, r3
/* 802648E8 00261828  41 82 00 40 */	beq .L_80264928
/* 802648EC 0026182C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802648F0 00261830  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 802648F4 00261834  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802648F8 00261838  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia9StateMove@ha
/* 802648FC 0026183C  90 04 00 00 */	stw r0, 0(r4)
/* 80264900 00261840  38 00 00 05 */	li r0, 5
/* 80264904 00261844  38 E0 00 00 */	li r7, 0
/* 80264908 00261848  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 8026490C 0026184C  90 04 00 04 */	stw r0, 4(r4)
/* 80264910 00261850  38 A2 CA D0 */	addi r5, r2, lbl_8051AE30@sda21
/* 80264914 00261854  38 03 46 14 */	addi r0, r3, __vt__Q34Game4Ujia9StateMove@l
/* 80264918 00261858  90 E4 00 08 */	stw r7, 8(r4)
/* 8026491C 0026185C  90 C4 00 00 */	stw r6, 0(r4)
/* 80264920 00261860  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80264924 00261864  90 04 00 00 */	stw r0, 0(r4)
.L_80264928:
/* 80264928 00261868  7F E3 FB 78 */	mr r3, r31
/* 8026492C 0026186C  4B EC BF DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264930 00261870  38 60 00 10 */	li r3, 0x10
/* 80264934 00261874  4B DB F5 71 */	bl __nw__FUl
/* 80264938 00261878  7C 64 1B 79 */	or. r4, r3, r3
/* 8026493C 0026187C  41 82 00 44 */	beq .L_80264980
/* 80264940 00261880  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80264944 00261884  3C C0 80 4C */	lis r6, __vt__Q34Game4Ujia5State@ha
/* 80264948 00261888  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026494C 0026188C  3C A0 80 48 */	lis r5, lbl_80485AD8@ha
/* 80264950 00261890  90 04 00 00 */	stw r0, 0(r4)
/* 80264954 00261894  38 00 00 06 */	li r0, 6
/* 80264958 00261898  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia13StateMoveSide@ha
/* 8026495C 0026189C  38 E0 00 00 */	li r7, 0
/* 80264960 002618A0  90 04 00 04 */	stw r0, 4(r4)
/* 80264964 002618A4  38 C6 46 EC */	addi r6, r6, __vt__Q34Game4Ujia5State@l
/* 80264968 002618A8  38 A5 5A D8 */	addi r5, r5, lbl_80485AD8@l
/* 8026496C 002618AC  38 03 45 F0 */	addi r0, r3, __vt__Q34Game4Ujia13StateMoveSide@l
/* 80264970 002618B0  90 E4 00 08 */	stw r7, 8(r4)
/* 80264974 002618B4  90 C4 00 00 */	stw r6, 0(r4)
/* 80264978 002618B8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026497C 002618BC  90 04 00 00 */	stw r0, 0(r4)
.L_80264980:
/* 80264980 002618C0  7F E3 FB 78 */	mr r3, r31
/* 80264984 002618C4  4B EC BF 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264988 002618C8  38 60 00 10 */	li r3, 0x10
/* 8026498C 002618CC  4B DB F5 19 */	bl __nw__FUl
/* 80264990 002618D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80264994 002618D4  41 82 00 44 */	beq .L_802649D8
/* 80264998 002618D8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026499C 002618DC  3C C0 80 4C */	lis r6, __vt__Q34Game4Ujia5State@ha
/* 802649A0 002618E0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802649A4 002618E4  3C A0 80 48 */	lis r5, lbl_80485AE4@ha
/* 802649A8 002618E8  90 04 00 00 */	stw r0, 0(r4)
/* 802649AC 002618EC  38 00 00 07 */	li r0, 7
/* 802649B0 002618F0  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia15StateMoveCentre@ha
/* 802649B4 002618F4  38 E0 00 00 */	li r7, 0
/* 802649B8 002618F8  90 04 00 04 */	stw r0, 4(r4)
/* 802649BC 002618FC  38 C6 46 EC */	addi r6, r6, __vt__Q34Game4Ujia5State@l
/* 802649C0 00261900  38 A5 5A E4 */	addi r5, r5, lbl_80485AE4@l
/* 802649C4 00261904  38 03 45 CC */	addi r0, r3, __vt__Q34Game4Ujia15StateMoveCentre@l
/* 802649C8 00261908  90 E4 00 08 */	stw r7, 8(r4)
/* 802649CC 0026190C  90 C4 00 00 */	stw r6, 0(r4)
/* 802649D0 00261910  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802649D4 00261914  90 04 00 00 */	stw r0, 0(r4)
.L_802649D8:
/* 802649D8 00261918  7F E3 FB 78 */	mr r3, r31
/* 802649DC 0026191C  4B EC BF 2D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802649E0 00261920  38 60 00 10 */	li r3, 0x10
/* 802649E4 00261924  4B DB F4 C1 */	bl __nw__FUl
/* 802649E8 00261928  7C 64 1B 79 */	or. r4, r3, r3
/* 802649EC 0026192C  41 82 00 40 */	beq .L_80264A2C
/* 802649F0 00261930  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802649F4 00261934  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 802649F8 00261938  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802649FC 0026193C  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia12StateMoveTop@ha
/* 80264A00 00261940  90 04 00 00 */	stw r0, 0(r4)
/* 80264A04 00261944  38 00 00 08 */	li r0, 8
/* 80264A08 00261948  38 E0 00 00 */	li r7, 0
/* 80264A0C 0026194C  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 80264A10 00261950  90 04 00 04 */	stw r0, 4(r4)
/* 80264A14 00261954  38 A2 CA D8 */	addi r5, r2, lbl_8051AE38@sda21
/* 80264A18 00261958  38 03 45 A8 */	addi r0, r3, __vt__Q34Game4Ujia12StateMoveTop@l
/* 80264A1C 0026195C  90 E4 00 08 */	stw r7, 8(r4)
/* 80264A20 00261960  90 C4 00 00 */	stw r6, 0(r4)
/* 80264A24 00261964  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80264A28 00261968  90 04 00 00 */	stw r0, 0(r4)
.L_80264A2C:
/* 80264A2C 0026196C  7F E3 FB 78 */	mr r3, r31
/* 80264A30 00261970  4B EC BE D9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264A34 00261974  38 60 00 10 */	li r3, 0x10
/* 80264A38 00261978  4B DB F4 6D */	bl __nw__FUl
/* 80264A3C 0026197C  7C 64 1B 79 */	or. r4, r3, r3
/* 80264A40 00261980  41 82 00 40 */	beq .L_80264A80
/* 80264A44 00261984  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80264A48 00261988  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 80264A4C 0026198C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80264A50 00261990  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia11StateGoHome@ha
/* 80264A54 00261994  90 04 00 00 */	stw r0, 0(r4)
/* 80264A58 00261998  38 00 00 09 */	li r0, 9
/* 80264A5C 0026199C  38 E0 00 00 */	li r7, 0
/* 80264A60 002619A0  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 80264A64 002619A4  90 04 00 04 */	stw r0, 4(r4)
/* 80264A68 002619A8  38 A2 CA E0 */	addi r5, r2, lbl_8051AE40@sda21
/* 80264A6C 002619AC  38 03 45 84 */	addi r0, r3, __vt__Q34Game4Ujia11StateGoHome@l
/* 80264A70 002619B0  90 E4 00 08 */	stw r7, 8(r4)
/* 80264A74 002619B4  90 C4 00 00 */	stw r6, 0(r4)
/* 80264A78 002619B8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80264A7C 002619BC  90 04 00 00 */	stw r0, 0(r4)
.L_80264A80:
/* 80264A80 002619C0  7F E3 FB 78 */	mr r3, r31
/* 80264A84 002619C4  4B EC BE 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264A88 002619C8  38 60 00 10 */	li r3, 0x10
/* 80264A8C 002619CC  4B DB F4 19 */	bl __nw__FUl
/* 80264A90 002619D0  7C 64 1B 79 */	or. r4, r3, r3
/* 80264A94 002619D4  41 82 00 40 */	beq .L_80264AD4
/* 80264A98 002619D8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80264A9C 002619DC  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujia5State@ha
/* 80264AA0 002619E0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80264AA4 002619E4  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujia12StateAttack1@ha
/* 80264AA8 002619E8  90 04 00 00 */	stw r0, 0(r4)
/* 80264AAC 002619EC  38 00 00 0A */	li r0, 0xa
/* 80264AB0 002619F0  38 E0 00 00 */	li r7, 0
/* 80264AB4 002619F4  38 C5 46 EC */	addi r6, r5, __vt__Q34Game4Ujia5State@l
/* 80264AB8 002619F8  90 04 00 04 */	stw r0, 4(r4)
/* 80264ABC 002619FC  38 A2 CA E8 */	addi r5, r2, lbl_8051AE48@sda21
/* 80264AC0 00261A00  38 03 45 60 */	addi r0, r3, __vt__Q34Game4Ujia12StateAttack1@l
/* 80264AC4 00261A04  90 E4 00 08 */	stw r7, 8(r4)
/* 80264AC8 00261A08  90 C4 00 00 */	stw r6, 0(r4)
/* 80264ACC 00261A0C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80264AD0 00261A10  90 04 00 00 */	stw r0, 0(r4)
.L_80264AD4:
/* 80264AD4 00261A14  7F E3 FB 78 */	mr r3, r31
/* 80264AD8 00261A18  4B EC BE 31 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80264ADC 00261A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264AE0 00261A20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264AE4 00261A24  7C 08 03 A6 */	mtlr r0
/* 80264AE8 00261A28  38 21 00 10 */	addi r1, r1, 0x10
/* 80264AEC 00261A2C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia3FSMFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80264AF0 00261A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264AF4 00261A34  7C 08 02 A6 */	mflr r0
/* 80264AF8 00261A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264AFC 00261A3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264B00 00261A40  7C 9F 23 78 */	mr r31, r4
/* 80264B04 00261A44  7F E3 FB 78 */	mr r3, r31
/* 80264B08 00261A48  4B EA 0C 19 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80264B0C 00261A4C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264B10 00261A50  7F E3 FB 78 */	mr r3, r31
/* 80264B14 00261A54  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80264B18 00261A58  38 80 00 00 */	li r4, 0
/* 80264B1C 00261A5C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80264B20 00261A60  38 A0 00 00 */	li r5, 0
/* 80264B24 00261A64  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264B28 00261A68  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80264B2C 00261A6C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80264B30 00261A70  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80264B34 00261A74  4B EA 04 D1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80264B38 00261A78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264B3C 00261A7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264B40 00261A80  7C 08 03 A6 */	mtlr r0
/* 80264B44 00261A84  38 21 00 10 */	addi r1, r1, 0x10
/* 80264B48 00261A88  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBase, global
/* 80264B4C 00261A8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264B50 00261A90  7C 08 02 A6 */	mflr r0
/* 80264B54 00261A94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264B58 00261A98  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80264B5C 00261A9C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80264B60 00261AA0  28 00 00 00 */	cmplwi r0, 0
/* 80264B64 00261AA4  41 82 00 1C */	beq .L_80264B80
/* 80264B68 00261AA8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80264B6C 00261AAC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80264B70 00261AB0  40 82 00 10 */	bne .L_80264B80
/* 80264B74 00261AB4  7C 83 23 78 */	mr r3, r4
/* 80264B78 00261AB8  38 80 00 00 */	li r4, 0
/* 80264B7C 00261ABC  4B ED 65 75 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80264B80:
/* 80264B80 00261AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264B84 00261AC4  7C 08 03 A6 */	mtlr r0
/* 80264B88 00261AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80264B8C 00261ACC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBase, global
/* 80264B90 00261AD0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80264B94 00261AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264B98 00261AD8  7C 08 02 A6 */	mflr r0
/* 80264B9C 00261ADC  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80264BA0 00261AE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264BA4 00261AE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264BA8 00261AE8  7C 9F 23 78 */	mr r31, r4
/* 80264BAC 00261AEC  7F E3 FB 78 */	mr r3, r31
/* 80264BB0 00261AF0  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 80264BB4 00261AF4  4B EA 0B 6D */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80264BB8 00261AF8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264BBC 00261AFC  7F E3 FB 78 */	mr r3, r31
/* 80264BC0 00261B00  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80264BC4 00261B04  38 80 00 01 */	li r4, 1
/* 80264BC8 00261B08  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80264BCC 00261B0C  38 A0 00 00 */	li r5, 0
/* 80264BD0 00261B10  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264BD4 00261B14  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80264BD8 00261B18  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80264BDC 00261B1C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80264BE0 00261B20  4B EA 04 25 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80264BE4 00261B24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264BE8 00261B28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264BEC 00261B2C  7C 08 03 A6 */	mtlr r0
/* 80264BF0 00261B30  38 21 00 10 */	addi r1, r1, 0x10
/* 80264BF4 00261B34  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia10StatePressFPQ24Game9EnemyBase, global
/* 80264BF8 00261B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264BFC 00261B3C  7C 08 02 A6 */	mflr r0
/* 80264C00 00261B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264C04 00261B44  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80264C08 00261B48  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80264C0C 00261B4C  28 00 00 00 */	cmplwi r0, 0
/* 80264C10 00261B50  41 82 00 1C */	beq .L_80264C2C
/* 80264C14 00261B54  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80264C18 00261B58  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80264C1C 00261B5C  40 82 00 10 */	bne .L_80264C2C
/* 80264C20 00261B60  7C 83 23 78 */	mr r3, r4
/* 80264C24 00261B64  38 80 00 00 */	li r4, 0
/* 80264C28 00261B68  4B ED 64 C9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80264C2C:
/* 80264C2C 00261B6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264C30 00261B70  7C 08 03 A6 */	mtlr r0
/* 80264C34 00261B74  38 21 00 10 */	addi r1, r1, 0x10
/* 80264C38 00261B78  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia10StatePressFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia10StatePressFPQ24Game9EnemyBase, global
/* 80264C3C 00261B7C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia10StatePressFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80264C40 00261B80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264C44 00261B84  7C 08 02 A6 */	mflr r0
/* 80264C48 00261B88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264C4C 00261B8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264C50 00261B90  7C 9F 23 78 */	mr r31, r4
/* 80264C54 00261B94  7F E3 FB 78 */	mr r3, r31
/* 80264C58 00261B98  48 00 18 8D */	bl resetAppearCheck__Q34Game4Ujia3ObjFv
/* 80264C5C 00261B9C  7F E3 FB 78 */	mr r3, r31
/* 80264C60 00261BA0  38 80 00 00 */	li r4, 0
/* 80264C64 00261BA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80264C68 00261BA8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80264C6C 00261BAC  7D 89 03 A6 */	mtctr r12
/* 80264C70 00261BB0  4E 80 04 21 */	bctrl 
/* 80264C74 00261BB4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80264C78 00261BB8  38 00 00 01 */	li r0, 1
/* 80264C7C 00261BBC  7F E3 FB 78 */	mr r3, r31
/* 80264C80 00261BC0  60 84 00 01 */	ori r4, r4, 1
/* 80264C84 00261BC4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80264C88 00261BC8  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 80264C8C 00261BCC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264C90 00261BD0  64 00 00 40 */	oris r0, r0, 0x40
/* 80264C94 00261BD4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264C98 00261BD8  4B EA 2A E5 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80264C9C 00261BDC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264CA0 00261BE0  7F E3 FB 78 */	mr r3, r31
/* 80264CA4 00261BE4  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80264CA8 00261BE8  38 80 00 02 */	li r4, 2
/* 80264CAC 00261BEC  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80264CB0 00261BF0  38 A0 00 00 */	li r5, 0
/* 80264CB4 00261BF4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264CB8 00261BF8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264CBC 00261BFC  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 80264CC0 00261C00  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264CC4 00261C04  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264CC8 00261C08  64 00 40 00 */	oris r0, r0, 0x4000
/* 80264CCC 00261C0C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264CD0 00261C10  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80264CD4 00261C14  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80264CD8 00261C18  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80264CDC 00261C1C  4B EA 03 29 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80264CE0 00261C20  7F E3 FB 78 */	mr r3, r31
/* 80264CE4 00261C24  4B EA 25 FD */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80264CE8 00261C28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264CEC 00261C2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264CF0 00261C30  7C 08 03 A6 */	mtlr r0
/* 80264CF4 00261C34  38 21 00 10 */	addi r1, r1, 0x10
/* 80264CF8 00261C38  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia9StateStayFPQ24Game9EnemyBase, global
/* 80264CFC 00261C3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80264D00 00261C40  7C 08 02 A6 */	mflr r0
/* 80264D04 00261C44  90 01 00 24 */	stw r0, 0x24(r1)
/* 80264D08 00261C48  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80264D0C 00261C4C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80264D10 00261C50  7C 9E 23 78 */	mr r30, r4
/* 80264D14 00261C54  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80264D18 00261C58  7C 7D 1B 78 */	mr r29, r3
/* 80264D1C 00261C5C  7F C3 F3 78 */	mr r3, r30
/* 80264D20 00261C60  48 00 18 E1 */	bl setBridgeSearch__Q34Game4Ujia3ObjFv
/* 80264D24 00261C64  7F C3 F3 78 */	mr r3, r30
/* 80264D28 00261C68  48 00 1D 99 */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80264D2C 00261C6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80264D30 00261C70  41 82 00 28 */	beq .L_80264D58
/* 80264D34 00261C74  7F A3 EB 78 */	mr r3, r29
/* 80264D38 00261C78  7F C4 F3 78 */	mr r4, r30
/* 80264D3C 00261C7C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80264D40 00261C80  38 A0 00 03 */	li r5, 3
/* 80264D44 00261C84  38 C0 00 00 */	li r6, 0
/* 80264D48 00261C88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80264D4C 00261C8C  7D 89 03 A6 */	mtctr r12
/* 80264D50 00261C90  4E 80 04 21 */	bctrl 
/* 80264D54 00261C94  48 00 00 60 */	b .L_80264DB4
.L_80264D58:
/* 80264D58 00261C98  80 FE 00 C0 */	lwz r7, 0xc0(r30)
/* 80264D5C 00261C9C  7F C3 F3 78 */	mr r3, r30
/* 80264D60 00261CA0  38 80 00 00 */	li r4, 0
/* 80264D64 00261CA4  38 A0 00 00 */	li r5, 0
/* 80264D68 00261CA8  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 80264D6C 00261CAC  38 C0 00 00 */	li r6, 0
/* 80264D70 00261CB0  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 80264D74 00261CB4  4B EA E2 DD */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80264D78 00261CB8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80264D7C 00261CBC  41 82 00 38 */	beq .L_80264DB4
/* 80264D80 00261CC0  7F C3 F3 78 */	mr r3, r30
/* 80264D84 00261CC4  48 00 18 15 */	bl isAppearCheck__Q34Game4Ujia3ObjFv
/* 80264D88 00261CC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80264D8C 00261CCC  41 82 00 28 */	beq .L_80264DB4
/* 80264D90 00261CD0  93 FE 02 30 */	stw r31, 0x230(r30)
/* 80264D94 00261CD4  7F A3 EB 78 */	mr r3, r29
/* 80264D98 00261CD8  7F C4 F3 78 */	mr r4, r30
/* 80264D9C 00261CDC  38 A0 00 03 */	li r5, 3
/* 80264DA0 00261CE0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80264DA4 00261CE4  38 C0 00 00 */	li r6, 0
/* 80264DA8 00261CE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80264DAC 00261CEC  7D 89 03 A6 */	mtctr r12
/* 80264DB0 00261CF0  4E 80 04 21 */	bctrl 
.L_80264DB4:
/* 80264DB4 00261CF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80264DB8 00261CF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80264DBC 00261CFC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80264DC0 00261D00  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80264DC4 00261D04  7C 08 03 A6 */	mtlr r0
/* 80264DC8 00261D08  38 21 00 20 */	addi r1, r1, 0x20
/* 80264DCC 00261D0C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia9StateStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia9StateStayFPQ24Game9EnemyBase, global
/* 80264DD0 00261D10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264DD4 00261D14  7C 08 02 A6 */	mflr r0
/* 80264DD8 00261D18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264DDC 00261D1C  7C 80 23 78 */	mr r0, r4
/* 80264DE0 00261D20  38 80 00 01 */	li r4, 1
/* 80264DE4 00261D24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264DE8 00261D28  7C 1F 03 78 */	mr r31, r0
/* 80264DEC 00261D2C  7F E3 FB 78 */	mr r3, r31
/* 80264DF0 00261D30  81 9F 00 00 */	lwz r12, 0(r31)
/* 80264DF4 00261D34  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80264DF8 00261D38  7D 89 03 A6 */	mtctr r12
/* 80264DFC 00261D3C  4E 80 04 21 */	bctrl 
/* 80264E00 00261D40  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80264E04 00261D44  38 00 00 00 */	li r0, 0
/* 80264E08 00261D48  7F E3 FB 78 */	mr r3, r31
/* 80264E0C 00261D4C  54 84 00 3C */	rlwinm r4, r4, 0, 0, 0x1e
/* 80264E10 00261D50  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80264E14 00261D54  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 80264E18 00261D58  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264E1C 00261D5C  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 80264E20 00261D60  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264E24 00261D64  4B EA 29 71 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80264E28 00261D68  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264E2C 00261D6C  60 00 80 00 */	ori r0, r0, 0x8000
/* 80264E30 00261D70  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264E34 00261D74  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264E38 00261D78  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 80264E3C 00261D7C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264E40 00261D80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264E44 00261D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264E48 00261D88  7C 08 03 A6 */	mtlr r0
/* 80264E4C 00261D8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80264E50 00261D90  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia9StateStayFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80264E54 00261D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264E58 00261D98  7C 08 02 A6 */	mflr r0
/* 80264E5C 00261D9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264E60 00261DA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264E64 00261DA4  7C 9F 23 78 */	mr r31, r4
/* 80264E68 00261DA8  7F E3 FB 78 */	mr r3, r31
/* 80264E6C 00261DAC  48 00 16 15 */	bl lifeIncrement__Q34Game4Ujia3ObjFv
/* 80264E70 00261DB0  7F E3 FB 78 */	mr r3, r31
/* 80264E74 00261DB4  4B EA 29 09 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80264E78 00261DB8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264E7C 00261DBC  7F E3 FB 78 */	mr r3, r31
/* 80264E80 00261DC0  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80264E84 00261DC4  64 00 00 20 */	oris r0, r0, 0x20
/* 80264E88 00261DC8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264E8C 00261DCC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264E90 00261DD0  60 00 08 00 */	ori r0, r0, 0x800
/* 80264E94 00261DD4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264E98 00261DD8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80264E9C 00261DDC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80264EA0 00261DE0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80264EA4 00261DE4  4B E9 CB 29 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80264EA8 00261DE8  7F E3 FB 78 */	mr r3, r31
/* 80264EAC 00261DEC  38 80 00 02 */	li r4, 2
/* 80264EB0 00261DF0  38 A0 00 00 */	li r5, 0
/* 80264EB4 00261DF4  4B EA 01 51 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80264EB8 00261DF8  7F E3 FB 78 */	mr r3, r31
/* 80264EBC 00261DFC  48 00 24 A9 */	bl createAppearEffect__Q34Game4Ujia3ObjFv
/* 80264EC0 00261E00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264EC4 00261E04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264EC8 00261E08  7C 08 03 A6 */	mtlr r0
/* 80264ECC 00261E0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80264ED0 00261E10  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBase, global
/* 80264ED4 00261E14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264ED8 00261E18  7C 08 02 A6 */	mflr r0
/* 80264EDC 00261E1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264EE0 00261E20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264EE4 00261E24  7C 9F 23 78 */	mr r31, r4
/* 80264EE8 00261E28  93 C1 00 08 */	stw r30, 8(r1)
/* 80264EEC 00261E2C  7C 7E 1B 78 */	mr r30, r3
/* 80264EF0 00261E30  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80264EF4 00261E34  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80264EF8 00261E38  28 00 00 00 */	cmplwi r0, 0
/* 80264EFC 00261E3C  41 82 00 9C */	beq .L_80264F98
/* 80264F00 00261E40  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80264F04 00261E44  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80264F08 00261E48  40 82 00 90 */	bne .L_80264F98
/* 80264F0C 00261E4C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80264F10 00261E50  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80264F14 00261E54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80264F18 00261E58  4C 40 13 82 */	cror 2, 0, 2
/* 80264F1C 00261E5C  40 82 00 20 */	bne .L_80264F3C
/* 80264F20 00261E60  81 83 00 00 */	lwz r12, 0(r3)
/* 80264F24 00261E64  38 A0 00 00 */	li r5, 0
/* 80264F28 00261E68  38 C0 00 00 */	li r6, 0
/* 80264F2C 00261E6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80264F30 00261E70  7D 89 03 A6 */	mtctr r12
/* 80264F34 00261E74  4E 80 04 21 */	bctrl 
/* 80264F38 00261E78  48 00 00 60 */	b .L_80264F98
.L_80264F3C:
/* 80264F3C 00261E7C  7F E3 FB 78 */	mr r3, r31
/* 80264F40 00261E80  48 00 1B 81 */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80264F44 00261E84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80264F48 00261E88  41 82 00 30 */	beq .L_80264F78
/* 80264F4C 00261E8C  7F E3 FB 78 */	mr r3, r31
/* 80264F50 00261E90  48 00 19 BD */	bl checkBreakOrMove__Q34Game4Ujia3ObjFv
/* 80264F54 00261E94  81 9E 00 00 */	lwz r12, 0(r30)
/* 80264F58 00261E98  7C 65 1B 78 */	mr r5, r3
/* 80264F5C 00261E9C  7F C3 F3 78 */	mr r3, r30
/* 80264F60 00261EA0  7F E4 FB 78 */	mr r4, r31
/* 80264F64 00261EA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80264F68 00261EA8  38 C0 00 00 */	li r6, 0
/* 80264F6C 00261EAC  7D 89 03 A6 */	mtctr r12
/* 80264F70 00261EB0  4E 80 04 21 */	bctrl 
/* 80264F74 00261EB4  48 00 00 24 */	b .L_80264F98
.L_80264F78:
/* 80264F78 00261EB8  7F C3 F3 78 */	mr r3, r30
/* 80264F7C 00261EBC  7F E4 FB 78 */	mr r4, r31
/* 80264F80 00261EC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80264F84 00261EC4  38 A0 00 05 */	li r5, 5
/* 80264F88 00261EC8  38 C0 00 00 */	li r6, 0
/* 80264F8C 00261ECC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80264F90 00261ED0  7D 89 03 A6 */	mtctr r12
/* 80264F94 00261ED4  4E 80 04 21 */	bctrl 
.L_80264F98:
/* 80264F98 00261ED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264F9C 00261EDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264FA0 00261EE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80264FA4 00261EE4  7C 08 03 A6 */	mtlr r0
/* 80264FA8 00261EE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80264FAC 00261EEC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBase, global
/* 80264FB0 00261EF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264FB4 00261EF4  7C 08 02 A6 */	mflr r0
/* 80264FB8 00261EF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264FBC 00261EFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264FC0 00261F00  7C 9F 23 78 */	mr r31, r4
/* 80264FC4 00261F04  7F E3 FB 78 */	mr r3, r31
/* 80264FC8 00261F08  4B EA 27 CD */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80264FCC 00261F0C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80264FD0 00261F10  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80264FD4 00261F14  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80264FD8 00261F18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80264FDC 00261F1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80264FE0 00261F20  7C 08 03 A6 */	mtlr r0
/* 80264FE4 00261F24  38 21 00 10 */	addi r1, r1, 0x10
/* 80264FE8 00261F28  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia11StateAppearFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80264FEC 00261F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80264FF0 00261F30  7C 08 02 A6 */	mflr r0
/* 80264FF4 00261F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80264FF8 00261F38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80264FFC 00261F3C  7C 9F 23 78 */	mr r31, r4
/* 80265000 00261F40  7F E3 FB 78 */	mr r3, r31
/* 80265004 00261F44  4B EA 27 79 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80265008 00261F48  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026500C 00261F4C  7F E3 FB 78 */	mr r3, r31
/* 80265010 00261F50  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265014 00261F54  64 00 00 40 */	oris r0, r0, 0x40
/* 80265018 00261F58  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026501C 00261F5C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80265020 00261F60  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80265024 00261F64  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80265028 00261F68  4B E9 C9 55 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8026502C 00261F6C  7F E3 FB 78 */	mr r3, r31
/* 80265030 00261F70  38 80 00 03 */	li r4, 3
/* 80265034 00261F74  38 A0 00 00 */	li r5, 0
/* 80265038 00261F78  4B E9 FF CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026503C 00261F7C  7F E3 FB 78 */	mr r3, r31
/* 80265040 00261F80  48 00 23 B1 */	bl createDisAppearEffect__Q34Game4Ujia3ObjFv
/* 80265044 00261F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265048 00261F88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026504C 00261F8C  7C 08 03 A6 */	mtlr r0
/* 80265050 00261F90  38 21 00 10 */	addi r1, r1, 0x10
/* 80265054 00261F94  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBase, global
/* 80265058 00261F98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026505C 00261F9C  7C 08 02 A6 */	mflr r0
/* 80265060 00261FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265064 00261FA4  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80265068 00261FA8  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8026506C 00261FAC  28 00 00 00 */	cmplwi r0, 0
/* 80265070 00261FB0  41 82 00 28 */	beq .L_80265098
/* 80265074 00261FB4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80265078 00261FB8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8026507C 00261FBC  40 82 00 1C */	bne .L_80265098
/* 80265080 00261FC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80265084 00261FC4  38 A0 00 02 */	li r5, 2
/* 80265088 00261FC8  38 C0 00 00 */	li r6, 0
/* 8026508C 00261FCC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265090 00261FD0  7D 89 03 A6 */	mtctr r12
/* 80265094 00261FD4  4E 80 04 21 */	bctrl 
.L_80265098:
/* 80265098 00261FD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026509C 00261FDC  7C 08 03 A6 */	mtlr r0
/* 802650A0 00261FE0  38 21 00 10 */	addi r1, r1, 0x10
/* 802650A4 00261FE4  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBase, global
/* 802650A8 00261FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802650AC 00261FEC  7C 08 02 A6 */	mflr r0
/* 802650B0 00261FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802650B4 00261FF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802650B8 00261FF8  7C 9F 23 78 */	mr r31, r4
/* 802650BC 00261FFC  7F E3 FB 78 */	mr r3, r31
/* 802650C0 00262000  4B EA 26 D5 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802650C4 00262004  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802650C8 00262008  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802650CC 0026200C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802650D0 00262010  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802650D4 00262014  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802650D8 00262018  7C 08 03 A6 */	mtlr r0
/* 802650DC 0026201C  38 21 00 10 */	addi r1, r1, 0x10
/* 802650E0 00262020  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia9StateDiveFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802650E4 00262024  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802650E8 00262028  7C 08 02 A6 */	mflr r0
/* 802650EC 0026202C  7C 83 23 78 */	mr r3, r4
/* 802650F0 00262030  38 80 00 04 */	li r4, 4
/* 802650F4 00262034  90 01 00 14 */	stw r0, 0x14(r1)
/* 802650F8 00262038  38 00 FF FF */	li r0, -1
/* 802650FC 0026203C  38 A0 00 00 */	li r5, 0
/* 80265100 00262040  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 80265104 00262044  4B E9 FF 01 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80265108 00262048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026510C 0026204C  7C 08 03 A6 */	mtlr r0
/* 80265110 00262050  38 21 00 10 */	addi r1, r1, 0x10
/* 80265114 00262054  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBase, global
/* 80265118 00262058  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 8026511C 0026205C  7C 08 02 A6 */	mflr r0
/* 80265120 00262060  90 01 01 04 */	stw r0, 0x104(r1)
/* 80265124 00262064  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 80265128 00262068  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 8026512C 0026206C  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 80265130 00262070  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 80265134 00262074  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 80265138 00262078  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 8026513C 0026207C  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 80265140 00262080  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 80265144 00262084  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 80265148 00262088  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 8026514C 0026208C  DB 41 00 A0 */	stfd f26, 0xa0(r1)
/* 80265150 00262090  F3 41 00 A8 */	psq_st f26, 168(r1), 0, qr0
/* 80265154 00262094  DB 21 00 90 */	stfd f25, 0x90(r1)
/* 80265158 00262098  F3 21 00 98 */	psq_st f25, 152(r1), 0, qr0
/* 8026515C 0026209C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80265160 002620A0  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80265164 002620A4  93 A1 00 84 */	stw r29, 0x84(r1)
/* 80265168 002620A8  7C 9F 23 78 */	mr r31, r4
/* 8026516C 002620AC  7C 7E 1B 78 */	mr r30, r3
/* 80265170 002620B0  7F E3 FB 78 */	mr r3, r31
/* 80265174 002620B4  48 00 19 4D */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80265178 002620B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026517C 002620BC  41 82 00 1C */	beq .L_80265198
/* 80265180 002620C0  7F E3 FB 78 */	mr r3, r31
/* 80265184 002620C4  48 00 17 89 */	bl checkBreakOrMove__Q34Game4Ujia3ObjFv
/* 80265188 002620C8  90 7F 02 C4 */	stw r3, 0x2c4(r31)
/* 8026518C 002620CC  7F E3 FB 78 */	mr r3, r31
/* 80265190 002620D0  4B EA 01 11 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80265194 002620D4  48 00 03 7C */	b .L_80265510
.L_80265198:
/* 80265198 002620D8  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 8026519C 002620DC  28 1D 00 00 */	cmplwi r29, 0
/* 802651A0 002620E0  41 82 03 60 */	beq .L_80265500
/* 802651A4 002620E4  7F A3 EB 78 */	mr r3, r29
/* 802651A8 002620E8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802651AC 002620EC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802651B0 002620F0  7D 89 03 A6 */	mtctr r12
/* 802651B4 002620F4  4E 80 04 21 */	bctrl 
/* 802651B8 002620F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802651BC 002620FC  41 82 03 44 */	beq .L_80265500
/* 802651C0 00262100  7F A4 EB 78 */	mr r4, r29
/* 802651C4 00262104  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802651C8 00262108  81 9D 00 00 */	lwz r12, 0(r29)
/* 802651CC 0026210C  38 61 00 08 */	addi r3, r1, 8
/* 802651D0 00262110  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 802651D4 00262114  81 8C 00 08 */	lwz r12, 8(r12)
/* 802651D8 00262118  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 802651DC 0026211C  7D 89 03 A6 */	mtctr r12
/* 802651E0 00262120  4E 80 04 21 */	bctrl 
/* 802651E4 00262124  7F E4 FB 78 */	mr r4, r31
/* 802651E8 00262128  38 61 00 14 */	addi r3, r1, 0x14
/* 802651EC 0026212C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802651F0 00262130  C3 21 00 08 */	lfs f25, 8(r1)
/* 802651F4 00262134  81 8C 00 08 */	lwz r12, 8(r12)
/* 802651F8 00262138  C3 41 00 10 */	lfs f26, 0x10(r1)
/* 802651FC 0026213C  7D 89 03 A6 */	mtctr r12
/* 80265200 00262140  4E 80 04 21 */	bctrl 
/* 80265204 00262144  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80265208 00262148  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8026520C 0026214C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80265210 00262150  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80265214 00262154  EC 39 08 28 */	fsubs f1, f25, f1
/* 80265218 00262158  EC 5A 00 28 */	fsubs f2, f26, f0
/* 8026521C 0026215C  4B DC FE ED */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80265220 00262160  48 1A C9 B1 */	bl roundAng__Ff
/* 80265224 00262164  81 9F 00 00 */	lwz r12, 0(r31)
/* 80265228 00262168  FF 20 08 90 */	fmr f25, f1
/* 8026522C 0026216C  7F E3 FB 78 */	mr r3, r31
/* 80265230 00262170  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80265234 00262174  7D 89 03 A6 */	mtctr r12
/* 80265238 00262178  4E 80 04 21 */	bctrl 
/* 8026523C 0026217C  FC 40 08 90 */	fmr f2, f1
/* 80265240 00262180  FC 20 C8 90 */	fmr f1, f25
/* 80265244 00262184  48 1A C9 B9 */	bl angDist__Fff
/* 80265248 00262188  FF E0 08 90 */	fmr f31, f1
/* 8026524C 0026218C  C0 02 CA F8 */	lfs f0, lbl_8051AE58@sda21(r2)
/* 80265250 00262190  C0 22 CA F4 */	lfs f1, lbl_8051AE54@sda21(r2)
/* 80265254 00262194  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80265258 00262198  EF 3F 07 72 */	fmuls f25, f31, f29
/* 8026525C 0026219C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80265260 002621A0  FC 00 CA 10 */	fabs f0, f25
/* 80265264 002621A4  FC 00 00 18 */	frsp f0, f0
/* 80265268 002621A8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026526C 002621AC  40 81 00 1C */	ble .L_80265288
/* 80265270 002621B0  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265274 002621B4  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 80265278 002621B8  40 81 00 0C */	ble .L_80265284
/* 8026527C 002621BC  FF 20 08 90 */	fmr f25, f1
/* 80265280 002621C0  48 00 00 08 */	b .L_80265288
.L_80265284:
/* 80265284 002621C4  FF 20 08 50 */	fneg f25, f1
.L_80265288:
/* 80265288 002621C8  7F E3 FB 78 */	mr r3, r31
/* 8026528C 002621CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80265290 002621D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80265294 002621D4  7D 89 03 A6 */	mtctr r12
/* 80265298 002621D8  4E 80 04 21 */	bctrl 
/* 8026529C 002621DC  EC 39 08 2A */	fadds f1, f25, f1
/* 802652A0 002621E0  48 1A C9 31 */	bl roundAng__Ff
/* 802652A4 002621E4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802652A8 002621E8  7F E3 FB 78 */	mr r3, r31
/* 802652AC 002621EC  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802652B0 002621F0  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802652B4 002621F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802652B8 002621F8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802652BC 002621FC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802652C0 00262200  C3 C4 02 E4 */	lfs f30, 0x2e4(r4)
/* 802652C4 00262204  7D 89 03 A6 */	mtctr r12
/* 802652C8 00262208  4E 80 04 21 */	bctrl 
/* 802652CC 0026220C  4B E6 A5 51 */	bl sin
/* 802652D0 00262210  7F E3 FB 78 */	mr r3, r31
/* 802652D4 00262214  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802652D8 00262218  81 9F 00 00 */	lwz r12, 0(r31)
/* 802652DC 0026221C  FF 20 08 18 */	frsp f25, f1
/* 802652E0 00262220  C3 BF 01 D8 */	lfs f29, 0x1d8(r31)
/* 802652E4 00262224  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802652E8 00262228  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802652EC 0026222C  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 802652F0 00262230  D3 A1 00 78 */	stfs f29, 0x78(r1)
/* 802652F4 00262234  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 802652F8 00262238  7D 89 03 A6 */	mtctr r12
/* 802652FC 0026223C  4E 80 04 21 */	bctrl 
/* 80265300 00262240  4B E6 9F B5 */	bl cos
/* 80265304 00262244  EC 1E 06 72 */	fmuls f0, f30, f25
/* 80265308 00262248  7F E4 FB 78 */	mr r4, r31
/* 8026530C 0026224C  FC 20 08 18 */	frsp f1, f1
/* 80265310 00262250  38 61 00 38 */	addi r3, r1, 0x38
/* 80265314 00262254  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80265318 00262258  EC 1E 00 72 */	fmuls f0, f30, f1
/* 8026531C 0026225C  D3 BF 01 D8 */	stfs f29, 0x1d8(r31)
/* 80265320 00262260  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80265324 00262264  81 9F 00 00 */	lwz r12, 0(r31)
/* 80265328 00262268  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8026532C 0026226C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80265330 00262270  C3 C5 03 D4 */	lfs f30, 0x3d4(r5)
/* 80265334 00262274  C3 25 03 FC */	lfs f25, 0x3fc(r5)
/* 80265338 00262278  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 8026533C 0026227C  7D 89 03 A6 */	mtctr r12
/* 80265340 00262280  4E 80 04 21 */	bctrl 
/* 80265344 00262284  7F A4 EB 78 */	mr r4, r29
/* 80265348 00262288  38 61 00 2C */	addi r3, r1, 0x2c
/* 8026534C 0026228C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80265350 00262290  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 80265354 00262294  81 8C 00 08 */	lwz r12, 8(r12)
/* 80265358 00262298  7D 89 03 A6 */	mtctr r12
/* 8026535C 0026229C  4E 80 04 21 */	bctrl 
/* 80265360 002622A0  7F E4 FB 78 */	mr r4, r31
/* 80265364 002622A4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80265368 002622A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026536C 002622AC  38 61 00 50 */	addi r3, r1, 0x50
/* 80265370 002622B0  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80265374 002622B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80265378 002622B8  7D 89 03 A6 */	mtctr r12
/* 8026537C 002622BC  4E 80 04 21 */	bctrl 
/* 80265380 002622C0  7F A4 EB 78 */	mr r4, r29
/* 80265384 002622C4  38 61 00 44 */	addi r3, r1, 0x44
/* 80265388 002622C8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8026538C 002622CC  C3 A1 00 54 */	lfs f29, 0x54(r1)
/* 80265390 002622D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80265394 002622D4  7D 89 03 A6 */	mtctr r12
/* 80265398 002622D8  4E 80 04 21 */	bctrl 
/* 8026539C 002622DC  7F E4 FB 78 */	mr r4, r31
/* 802653A0 002622E0  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 802653A4 002622E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802653A8 002622E8  38 61 00 68 */	addi r3, r1, 0x68
/* 802653AC 002622EC  EF 80 E8 28 */	fsubs f28, f0, f29
/* 802653B0 002622F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802653B4 002622F4  7D 89 03 A6 */	mtctr r12
/* 802653B8 002622F8  4E 80 04 21 */	bctrl 
/* 802653BC 002622FC  7F A4 EB 78 */	mr r4, r29
/* 802653C0 00262300  38 61 00 5C */	addi r3, r1, 0x5c
/* 802653C4 00262304  81 9D 00 00 */	lwz r12, 0(r29)
/* 802653C8 00262308  C3 A1 00 70 */	lfs f29, 0x70(r1)
/* 802653CC 0026230C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802653D0 00262310  7D 89 03 A6 */	mtctr r12
/* 802653D4 00262314  4E 80 04 21 */	bctrl 
/* 802653D8 00262318  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 802653DC 0026231C  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 802653E0 00262320  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 802653E4 00262324  38 60 00 01 */	li r3, 1
/* 802653E8 00262328  EC 00 E8 28 */	fsubs f0, f0, f29
/* 802653EC 0026232C  38 80 00 00 */	li r4, 0
/* 802653F0 00262330  EC 00 00 32 */	fmuls f0, f0, f0
/* 802653F4 00262334  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 802653F8 00262338  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 802653FC 0026233C  40 81 00 30 */	ble .L_8026542C
/* 80265400 00262340  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80265404 00262344  7C 80 23 78 */	mr r0, r4
/* 80265408 00262348  40 81 00 18 */	ble .L_80265420
/* 8026540C 0026234C  FC 00 E2 10 */	fabs f0, f28
/* 80265410 00262350  FC 00 00 18 */	frsp f0, f0
/* 80265414 00262354  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 80265418 00262358  40 80 00 08 */	bge .L_80265420
/* 8026541C 0026235C  7C 60 1B 78 */	mr r0, r3
.L_80265420:
/* 80265420 00262360  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80265424 00262364  41 82 00 08 */	beq .L_8026542C
/* 80265428 00262368  38 80 00 01 */	li r4, 1
.L_8026542C:
/* 8026542C 0026236C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80265430 00262370  40 82 00 34 */	bne .L_80265464
/* 80265434 00262374  C0 02 CA F8 */	lfs f0, lbl_8051AE58@sda21(r2)
/* 80265438 00262378  FC 40 FA 10 */	fabs f2, f31
/* 8026543C 0026237C  C0 22 CA F4 */	lfs f1, lbl_8051AE54@sda21(r2)
/* 80265440 00262380  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80265444 00262384  FC 40 10 18 */	frsp f2, f2
/* 80265448 00262388  EC 01 00 32 */	fmuls f0, f1, f0
/* 8026544C 0026238C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80265450 00262390  4C 40 13 82 */	cror 2, 0, 2
/* 80265454 00262394  7C 00 00 26 */	mfcr r0
/* 80265458 00262398  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 8026545C 0026239C  41 82 00 08 */	beq .L_80265464
/* 80265460 002623A0  38 60 00 00 */	li r3, 0
.L_80265464:
/* 80265464 002623A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265468 002623A8  41 82 00 10 */	beq .L_80265478
/* 8026546C 002623AC  38 00 00 00 */	li r0, 0
/* 80265470 002623B0  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80265474 002623B4  48 00 00 9C */	b .L_80265510
.L_80265478:
/* 80265478 002623B8  7F E4 FB 78 */	mr r4, r31
/* 8026547C 002623BC  38 61 00 20 */	addi r3, r1, 0x20
/* 80265480 002623C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80265484 002623C4  C3 3F 01 98 */	lfs f25, 0x198(r31)
/* 80265488 002623C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026548C 002623CC  C3 5F 01 9C */	lfs f26, 0x19c(r31)
/* 80265490 002623D0  C3 7F 01 A0 */	lfs f27, 0x1a0(r31)
/* 80265494 002623D4  7D 89 03 A6 */	mtctr r12
/* 80265498 002623D8  4E 80 04 21 */	bctrl 
/* 8026549C 002623DC  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802654A0 002623E0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802654A4 002623E4  EC 60 D0 28 */	fsubs f3, f0, f26
/* 802654A8 002623E8  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 802654AC 002623EC  EC 42 C8 28 */	fsubs f2, f2, f25
/* 802654B0 002623F0  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 802654B4 002623F4  EC 21 D8 28 */	fsubs f1, f1, f27
/* 802654B8 002623F8  EC 63 00 F2 */	fmuls f3, f3, f3
/* 802654BC 002623FC  EC 81 00 72 */	fmuls f4, f1, f1
/* 802654C0 00262400  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 802654C4 00262404  EC 24 08 2A */	fadds f1, f4, f1
/* 802654C8 00262408  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802654CC 0026240C  40 81 00 14 */	ble .L_802654E0
/* 802654D0 00262410  40 81 00 14 */	ble .L_802654E4
/* 802654D4 00262414  FC 00 08 34 */	frsqrte f0, f1
/* 802654D8 00262418  EC 20 00 72 */	fmuls f1, f0, f1
/* 802654DC 0026241C  48 00 00 08 */	b .L_802654E4
.L_802654E0:
/* 802654E0 00262420  FC 20 00 90 */	fmr f1, f0
.L_802654E4:
/* 802654E4 00262424  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802654E8 00262428  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802654EC 0026242C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802654F0 00262430  40 81 00 20 */	ble .L_80265510
/* 802654F4 00262434  38 00 00 00 */	li r0, 0
/* 802654F8 00262438  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802654FC 0026243C  48 00 00 14 */	b .L_80265510
.L_80265500:
/* 80265500 00262440  38 00 00 09 */	li r0, 9
/* 80265504 00262444  7F E3 FB 78 */	mr r3, r31
/* 80265508 00262448  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8026550C 0026244C  4B E9 FD 95 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80265510:
/* 80265510 00262450  7F E3 FB 78 */	mr r3, r31
/* 80265514 00262454  48 00 0F 9D */	bl setInWaterDamage__Q34Game4Ujia3ObjFv
/* 80265518 00262458  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8026551C 0026245C  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265520 00262460  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80265524 00262464  4C 40 13 82 */	cror 2, 0, 2
/* 80265528 00262468  40 82 00 28 */	bne .L_80265550
/* 8026552C 0026246C  7F C3 F3 78 */	mr r3, r30
/* 80265530 00262470  7F E4 FB 78 */	mr r4, r31
/* 80265534 00262474  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265538 00262478  38 A0 00 00 */	li r5, 0
/* 8026553C 0026247C  38 C0 00 00 */	li r6, 0
/* 80265540 00262480  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265544 00262484  7D 89 03 A6 */	mtctr r12
/* 80265548 00262488  4E 80 04 21 */	bctrl 
/* 8026554C 0026248C  48 00 00 40 */	b .L_8026558C
.L_80265550:
/* 80265550 00262490  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80265554 00262494  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80265558 00262498  28 00 00 00 */	cmplwi r0, 0
/* 8026555C 0026249C  41 82 00 30 */	beq .L_8026558C
/* 80265560 002624A0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80265564 002624A4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80265568 002624A8  40 82 00 24 */	bne .L_8026558C
/* 8026556C 002624AC  7F C3 F3 78 */	mr r3, r30
/* 80265570 002624B0  7F E4 FB 78 */	mr r4, r31
/* 80265574 002624B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265578 002624B8  38 C0 00 00 */	li r6, 0
/* 8026557C 002624BC  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 80265580 002624C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265584 002624C4  7D 89 03 A6 */	mtctr r12
/* 80265588 002624C8  4E 80 04 21 */	bctrl 
.L_8026558C:
/* 8026558C 002624CC  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 80265590 002624D0  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 80265594 002624D4  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 80265598 002624D8  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 8026559C 002624DC  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 802655A0 002624E0  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 802655A4 002624E4  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 802655A8 002624E8  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 802655AC 002624EC  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 802655B0 002624F0  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 802655B4 002624F4  E3 41 00 A8 */	psq_l f26, 168(r1), 0, qr0
/* 802655B8 002624F8  CB 41 00 A0 */	lfd f26, 0xa0(r1)
/* 802655BC 002624FC  E3 21 00 98 */	psq_l f25, 152(r1), 0, qr0
/* 802655C0 00262500  CB 21 00 90 */	lfd f25, 0x90(r1)
/* 802655C4 00262504  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802655C8 00262508  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802655CC 0026250C  80 01 01 04 */	lwz r0, 0x104(r1)
/* 802655D0 00262510  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 802655D4 00262514  7C 08 03 A6 */	mtlr r0
/* 802655D8 00262518  38 21 01 00 */	addi r1, r1, 0x100
/* 802655DC 0026251C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBase, global
/* 802655E0 00262520  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802655E4 00262524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802655E8 00262528  7C 08 02 A6 */	mflr r0
/* 802655EC 0026252C  7C 83 23 78 */	mr r3, r4
/* 802655F0 00262530  38 80 00 04 */	li r4, 4
/* 802655F4 00262534  90 01 00 14 */	stw r0, 0x14(r1)
/* 802655F8 00262538  38 00 FF FF */	li r0, -1
/* 802655FC 0026253C  38 A0 00 00 */	li r5, 0
/* 80265600 00262540  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 80265604 00262544  4B E9 FA 01 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80265608 00262548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026560C 0026254C  7C 08 03 A6 */	mtlr r0
/* 80265610 00262550  38 21 00 10 */	addi r1, r1, 0x10
/* 80265614 00262554  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBase, global
/* 80265618 00262558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026561C 0026255C  7C 08 02 A6 */	mflr r0
/* 80265620 00262560  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265624 00262564  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80265628 00262568  7C 9F 23 78 */	mr r31, r4
/* 8026562C 0026256C  93 C1 00 08 */	stw r30, 8(r1)
/* 80265630 00262570  7C 7E 1B 78 */	mr r30, r3
/* 80265634 00262574  7F E3 FB 78 */	mr r3, r31
/* 80265638 00262578  48 00 14 89 */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 8026563C 0026257C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265640 00262580  41 82 00 28 */	beq .L_80265668
/* 80265644 00262584  7F E3 FB 78 */	mr r3, r31
/* 80265648 00262588  48 00 14 A1 */	bl moveBridgeSide__Q34Game4Ujia3ObjFv
/* 8026564C 0026258C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265650 00262590  41 82 00 28 */	beq .L_80265678
/* 80265654 00262594  38 00 00 07 */	li r0, 7
/* 80265658 00262598  7F E3 FB 78 */	mr r3, r31
/* 8026565C 0026259C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80265660 002625A0  4B E9 FC 41 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80265664 002625A4  48 00 00 14 */	b .L_80265678
.L_80265668:
/* 80265668 002625A8  38 00 00 09 */	li r0, 9
/* 8026566C 002625AC  7F E3 FB 78 */	mr r3, r31
/* 80265670 002625B0  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80265674 002625B4  4B E9 FC 2D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80265678:
/* 80265678 002625B8  7F E3 FB 78 */	mr r3, r31
/* 8026567C 002625BC  48 00 0E 35 */	bl setInWaterDamage__Q34Game4Ujia3ObjFv
/* 80265680 002625C0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80265684 002625C4  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265688 002625C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026568C 002625CC  4C 40 13 82 */	cror 2, 0, 2
/* 80265690 002625D0  40 82 00 28 */	bne .L_802656B8
/* 80265694 002625D4  7F C3 F3 78 */	mr r3, r30
/* 80265698 002625D8  7F E4 FB 78 */	mr r4, r31
/* 8026569C 002625DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802656A0 002625E0  38 A0 00 00 */	li r5, 0
/* 802656A4 002625E4  38 C0 00 00 */	li r6, 0
/* 802656A8 002625E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802656AC 002625EC  7D 89 03 A6 */	mtctr r12
/* 802656B0 002625F0  4E 80 04 21 */	bctrl 
/* 802656B4 002625F4  48 00 00 40 */	b .L_802656F4
.L_802656B8:
/* 802656B8 002625F8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802656BC 002625FC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802656C0 00262600  28 00 00 00 */	cmplwi r0, 0
/* 802656C4 00262604  41 82 00 30 */	beq .L_802656F4
/* 802656C8 00262608  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802656CC 0026260C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802656D0 00262610  40 82 00 24 */	bne .L_802656F4
/* 802656D4 00262614  7F C3 F3 78 */	mr r3, r30
/* 802656D8 00262618  7F E4 FB 78 */	mr r4, r31
/* 802656DC 0026261C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802656E0 00262620  38 C0 00 00 */	li r6, 0
/* 802656E4 00262624  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 802656E8 00262628  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802656EC 0026262C  7D 89 03 A6 */	mtctr r12
/* 802656F0 00262630  4E 80 04 21 */	bctrl 
.L_802656F4:
/* 802656F4 00262634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802656F8 00262638  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802656FC 0026263C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80265700 00262640  7C 08 03 A6 */	mtlr r0
/* 80265704 00262644  38 21 00 10 */	addi r1, r1, 0x10
/* 80265708 00262648  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBase, global
/* 8026570C 0026264C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia13StateMoveSideFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80265710 00262650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265714 00262654  7C 08 02 A6 */	mflr r0
/* 80265718 00262658  7C 83 23 78 */	mr r3, r4
/* 8026571C 0026265C  38 80 00 04 */	li r4, 4
/* 80265720 00262660  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265724 00262664  38 00 FF FF */	li r0, -1
/* 80265728 00262668  38 A0 00 00 */	li r5, 0
/* 8026572C 0026266C  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 80265730 00262670  4B E9 F8 D5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80265734 00262674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265738 00262678  7C 08 03 A6 */	mtlr r0
/* 8026573C 0026267C  38 21 00 10 */	addi r1, r1, 0x10
/* 80265740 00262680  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBase, global
/* 80265744 00262684  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265748 00262688  7C 08 02 A6 */	mflr r0
/* 8026574C 0026268C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265750 00262690  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80265754 00262694  7C 9F 23 78 */	mr r31, r4
/* 80265758 00262698  93 C1 00 08 */	stw r30, 8(r1)
/* 8026575C 0026269C  7C 7E 1B 78 */	mr r30, r3
/* 80265760 002626A0  7F E3 FB 78 */	mr r3, r31
/* 80265764 002626A4  48 00 13 5D */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80265768 002626A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026576C 002626AC  41 82 00 28 */	beq .L_80265794
/* 80265770 002626B0  7F E3 FB 78 */	mr r3, r31
/* 80265774 002626B4  48 00 16 1D */	bl moveBridgeCentre__Q34Game4Ujia3ObjFv
/* 80265778 002626B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8026577C 002626BC  41 82 00 28 */	beq .L_802657A4
/* 80265780 002626C0  38 00 00 08 */	li r0, 8
/* 80265784 002626C4  7F E3 FB 78 */	mr r3, r31
/* 80265788 002626C8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8026578C 002626CC  4B E9 FB 15 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80265790 002626D0  48 00 00 14 */	b .L_802657A4
.L_80265794:
/* 80265794 002626D4  38 00 00 09 */	li r0, 9
/* 80265798 002626D8  7F E3 FB 78 */	mr r3, r31
/* 8026579C 002626DC  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802657A0 002626E0  4B E9 FB 01 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802657A4:
/* 802657A4 002626E4  7F E3 FB 78 */	mr r3, r31
/* 802657A8 002626E8  48 00 0D 09 */	bl setInWaterDamage__Q34Game4Ujia3ObjFv
/* 802657AC 002626EC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802657B0 002626F0  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 802657B4 002626F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802657B8 002626F8  4C 40 13 82 */	cror 2, 0, 2
/* 802657BC 002626FC  40 82 00 28 */	bne .L_802657E4
/* 802657C0 00262700  7F C3 F3 78 */	mr r3, r30
/* 802657C4 00262704  7F E4 FB 78 */	mr r4, r31
/* 802657C8 00262708  81 9E 00 00 */	lwz r12, 0(r30)
/* 802657CC 0026270C  38 A0 00 00 */	li r5, 0
/* 802657D0 00262710  38 C0 00 00 */	li r6, 0
/* 802657D4 00262714  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802657D8 00262718  7D 89 03 A6 */	mtctr r12
/* 802657DC 0026271C  4E 80 04 21 */	bctrl 
/* 802657E0 00262720  48 00 00 40 */	b .L_80265820
.L_802657E4:
/* 802657E4 00262724  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802657E8 00262728  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802657EC 0026272C  28 00 00 00 */	cmplwi r0, 0
/* 802657F0 00262730  41 82 00 30 */	beq .L_80265820
/* 802657F4 00262734  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802657F8 00262738  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802657FC 0026273C  40 82 00 24 */	bne .L_80265820
/* 80265800 00262740  7F C3 F3 78 */	mr r3, r30
/* 80265804 00262744  7F E4 FB 78 */	mr r4, r31
/* 80265808 00262748  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026580C 0026274C  38 C0 00 00 */	li r6, 0
/* 80265810 00262750  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 80265814 00262754  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265818 00262758  7D 89 03 A6 */	mtctr r12
/* 8026581C 0026275C  4E 80 04 21 */	bctrl 
.L_80265820:
/* 80265820 00262760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265824 00262764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80265828 00262768  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026582C 0026276C  7C 08 03 A6 */	mtlr r0
/* 80265830 00262770  38 21 00 10 */	addi r1, r1, 0x10
/* 80265834 00262774  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBase, global
/* 80265838 00262778  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia15StateMoveCentreFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8026583C 0026277C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265840 00262780  7C 08 02 A6 */	mflr r0
/* 80265844 00262784  7C 83 23 78 */	mr r3, r4
/* 80265848 00262788  38 80 00 04 */	li r4, 4
/* 8026584C 0026278C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265850 00262790  38 00 FF FF */	li r0, -1
/* 80265854 00262794  38 A0 00 00 */	li r5, 0
/* 80265858 00262798  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8026585C 0026279C  4B E9 F7 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80265860 002627A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265864 002627A4  7C 08 03 A6 */	mtlr r0
/* 80265868 002627A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8026586C 002627AC  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBase, global
/* 80265870 002627B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265874 002627B4  7C 08 02 A6 */	mflr r0
/* 80265878 002627B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026587C 002627BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80265880 002627C0  7C 9F 23 78 */	mr r31, r4
/* 80265884 002627C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80265888 002627C8  7C 7E 1B 78 */	mr r30, r3
/* 8026588C 002627CC  7F E3 FB 78 */	mr r3, r31
/* 80265890 002627D0  48 00 12 31 */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80265894 002627D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265898 002627D8  41 82 00 28 */	beq .L_802658C0
/* 8026589C 002627DC  7F E3 FB 78 */	mr r3, r31
/* 802658A0 002627E0  48 00 17 79 */	bl moveBridgeTop__Q34Game4Ujia3ObjFv
/* 802658A4 002627E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802658A8 002627E8  41 82 00 28 */	beq .L_802658D0
/* 802658AC 002627EC  38 00 00 0A */	li r0, 0xa
/* 802658B0 002627F0  7F E3 FB 78 */	mr r3, r31
/* 802658B4 002627F4  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802658B8 002627F8  4B E9 F9 E9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802658BC 002627FC  48 00 00 14 */	b .L_802658D0
.L_802658C0:
/* 802658C0 00262800  38 00 00 09 */	li r0, 9
/* 802658C4 00262804  7F E3 FB 78 */	mr r3, r31
/* 802658C8 00262808  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 802658CC 0026280C  4B E9 F9 D5 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802658D0:
/* 802658D0 00262810  7F E3 FB 78 */	mr r3, r31
/* 802658D4 00262814  48 00 0B DD */	bl setInWaterDamage__Q34Game4Ujia3ObjFv
/* 802658D8 00262818  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802658DC 0026281C  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 802658E0 00262820  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802658E4 00262824  4C 40 13 82 */	cror 2, 0, 2
/* 802658E8 00262828  40 82 00 28 */	bne .L_80265910
/* 802658EC 0026282C  7F C3 F3 78 */	mr r3, r30
/* 802658F0 00262830  7F E4 FB 78 */	mr r4, r31
/* 802658F4 00262834  81 9E 00 00 */	lwz r12, 0(r30)
/* 802658F8 00262838  38 A0 00 00 */	li r5, 0
/* 802658FC 0026283C  38 C0 00 00 */	li r6, 0
/* 80265900 00262840  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265904 00262844  7D 89 03 A6 */	mtctr r12
/* 80265908 00262848  4E 80 04 21 */	bctrl 
/* 8026590C 0026284C  48 00 00 40 */	b .L_8026594C
.L_80265910:
/* 80265910 00262850  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80265914 00262854  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80265918 00262858  28 00 00 00 */	cmplwi r0, 0
/* 8026591C 0026285C  41 82 00 30 */	beq .L_8026594C
/* 80265920 00262860  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80265924 00262864  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80265928 00262868  40 82 00 24 */	bne .L_8026594C
/* 8026592C 0026286C  7F C3 F3 78 */	mr r3, r30
/* 80265930 00262870  7F E4 FB 78 */	mr r4, r31
/* 80265934 00262874  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265938 00262878  38 C0 00 00 */	li r6, 0
/* 8026593C 0026287C  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 80265940 00262880  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265944 00262884  7D 89 03 A6 */	mtctr r12
/* 80265948 00262888  4E 80 04 21 */	bctrl 
.L_8026594C:
/* 8026594C 0026288C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265950 00262890  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80265954 00262894  83 C1 00 08 */	lwz r30, 8(r1)
/* 80265958 00262898  7C 08 03 A6 */	mtlr r0
/* 8026595C 0026289C  38 21 00 10 */	addi r1, r1, 0x10
/* 80265960 002628A0  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBase, global
/* 80265964 002628A4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia12StateMoveTopFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80265968 002628A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026596C 002628AC  7C 08 02 A6 */	mflr r0
/* 80265970 002628B0  7C 83 23 78 */	mr r3, r4
/* 80265974 002628B4  38 80 00 04 */	li r4, 4
/* 80265978 002628B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026597C 002628BC  38 00 FF FF */	li r0, -1
/* 80265980 002628C0  38 A0 00 00 */	li r5, 0
/* 80265984 002628C4  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 80265988 002628C8  4B E9 F6 7D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026598C 002628CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265990 002628D0  7C 08 03 A6 */	mtlr r0
/* 80265994 002628D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80265998 002628D8  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBase, global
/* 8026599C 002628DC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802659A0 002628E0  7C 08 02 A6 */	mflr r0
/* 802659A4 002628E4  90 01 00 64 */	stw r0, 0x64(r1)
/* 802659A8 002628E8  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802659AC 002628EC  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802659B0 002628F0  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802659B4 002628F4  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802659B8 002628F8  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802659BC 002628FC  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802659C0 00262900  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802659C4 00262904  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802659C8 00262908  7C 9F 23 78 */	mr r31, r4
/* 802659CC 0026290C  7C 7E 1B 78 */	mr r30, r3
/* 802659D0 00262910  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 802659D4 00262914  38 81 00 14 */	addi r4, r1, 0x14
/* 802659D8 00262918  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 802659DC 0026291C  7F E3 FB 78 */	mr r3, r31
/* 802659E0 00262920  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802659E4 00262924  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802659E8 00262928  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802659EC 0026292C  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 802659F0 00262930  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802659F4 00262934  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802659F8 00262938  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802659FC 0026293C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80265A00 00262940  4B EA FB DD */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 80265A04 00262944  7F E4 FB 78 */	mr r4, r31
/* 80265A08 00262948  38 61 00 08 */	addi r3, r1, 8
/* 80265A0C 0026294C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80265A10 00262950  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 80265A14 00262954  81 8C 00 08 */	lwz r12, 8(r12)
/* 80265A18 00262958  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 80265A1C 0026295C  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 80265A20 00262960  7D 89 03 A6 */	mtctr r12
/* 80265A24 00262964  4E 80 04 21 */	bctrl 
/* 80265A28 00262968  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80265A2C 0026296C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80265A30 00262970  EC 60 F0 28 */	fsubs f3, f0, f30
/* 80265A34 00262974  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80265A38 00262978  EC 42 F8 28 */	fsubs f2, f2, f31
/* 80265A3C 0026297C  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265A40 00262980  EC 21 E8 28 */	fsubs f1, f1, f29
/* 80265A44 00262984  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80265A48 00262988  EC 81 00 72 */	fmuls f4, f1, f1
/* 80265A4C 0026298C  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80265A50 00262990  EC 24 08 2A */	fadds f1, f4, f1
/* 80265A54 00262994  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80265A58 00262998  40 81 00 14 */	ble .L_80265A6C
/* 80265A5C 0026299C  40 81 00 14 */	ble .L_80265A70
/* 80265A60 002629A0  FC 00 08 34 */	frsqrte f0, f1
/* 80265A64 002629A4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80265A68 002629A8  48 00 00 08 */	b .L_80265A70
.L_80265A6C:
/* 80265A6C 002629AC  FC 20 00 90 */	fmr f1, f0
.L_80265A70:
/* 80265A70 002629B0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80265A74 002629B4  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 80265A78 002629B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80265A7C 002629BC  40 80 00 0C */	bge .L_80265A88
/* 80265A80 002629C0  7F E3 FB 78 */	mr r3, r31
/* 80265A84 002629C4  4B E9 F8 1D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80265A88:
/* 80265A88 002629C8  7F E3 FB 78 */	mr r3, r31
/* 80265A8C 002629CC  48 00 0A 25 */	bl setInWaterDamage__Q34Game4Ujia3ObjFv
/* 80265A90 002629D0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80265A94 002629D4  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265A98 002629D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80265A9C 002629DC  4C 40 13 82 */	cror 2, 0, 2
/* 80265AA0 002629E0  40 82 00 28 */	bne .L_80265AC8
/* 80265AA4 002629E4  7F C3 F3 78 */	mr r3, r30
/* 80265AA8 002629E8  7F E4 FB 78 */	mr r4, r31
/* 80265AAC 002629EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265AB0 002629F0  38 A0 00 00 */	li r5, 0
/* 80265AB4 002629F4  38 C0 00 00 */	li r6, 0
/* 80265AB8 002629F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265ABC 002629FC  7D 89 03 A6 */	mtctr r12
/* 80265AC0 00262A00  4E 80 04 21 */	bctrl 
/* 80265AC4 00262A04  48 00 00 40 */	b .L_80265B04
.L_80265AC8:
/* 80265AC8 00262A08  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80265ACC 00262A0C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80265AD0 00262A10  28 00 00 00 */	cmplwi r0, 0
/* 80265AD4 00262A14  41 82 00 30 */	beq .L_80265B04
/* 80265AD8 00262A18  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80265ADC 00262A1C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80265AE0 00262A20  40 82 00 24 */	bne .L_80265B04
/* 80265AE4 00262A24  7F C3 F3 78 */	mr r3, r30
/* 80265AE8 00262A28  7F E4 FB 78 */	mr r4, r31
/* 80265AEC 00262A2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265AF0 00262A30  38 A0 00 04 */	li r5, 4
/* 80265AF4 00262A34  38 C0 00 00 */	li r6, 0
/* 80265AF8 00262A38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265AFC 00262A3C  7D 89 03 A6 */	mtctr r12
/* 80265B00 00262A40  4E 80 04 21 */	bctrl 
.L_80265B04:
/* 80265B04 00262A44  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80265B08 00262A48  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80265B0C 00262A4C  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80265B10 00262A50  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80265B14 00262A54  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80265B18 00262A58  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80265B1C 00262A5C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80265B20 00262A60  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80265B24 00262A64  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80265B28 00262A68  7C 08 03 A6 */	mtlr r0
/* 80265B2C 00262A6C  38 21 00 60 */	addi r1, r1, 0x60
/* 80265B30 00262A70  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBase, global
/* 80265B34 00262A74  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia11StateGoHomeFPQ24Game9EnemyBase

.fn init__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80265B38 00262A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265B3C 00262A7C  7C 08 02 A6 */	mflr r0
/* 80265B40 00262A80  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265B44 00262A84  38 A0 00 00 */	li r5, 0
/* 80265B48 00262A88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265B4C 00262A8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80265B50 00262A90  7C 9F 23 78 */	mr r31, r4
/* 80265B54 00262A94  38 80 00 05 */	li r4, 5
/* 80265B58 00262A98  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80265B5C 00262A9C  7F E3 FB 78 */	mr r3, r31
/* 80265B60 00262AA0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80265B64 00262AA4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80265B68 00262AA8  4B E9 F4 9D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80265B6C 00262AAC  38 00 FF FF */	li r0, -1
/* 80265B70 00262AB0  7F E3 FB 78 */	mr r3, r31
/* 80265B74 00262AB4  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80265B78 00262AB8  48 00 19 05 */	bl createBridgeEffect__Q34Game4Ujia3ObjFv
/* 80265B7C 00262ABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265B80 00262AC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80265B84 00262AC4  7C 08 03 A6 */	mtlr r0
/* 80265B88 00262AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80265B8C 00262ACC  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBase, global
/* 80265B90 00262AD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80265B94 00262AD4  7C 08 02 A6 */	mflr r0
/* 80265B98 00262AD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80265B9C 00262ADC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80265BA0 00262AE0  7C 9F 23 78 */	mr r31, r4
/* 80265BA4 00262AE4  93 C1 00 08 */	stw r30, 8(r1)
/* 80265BA8 00262AE8  7C 7E 1B 78 */	mr r30, r3
/* 80265BAC 00262AEC  7F E3 FB 78 */	mr r3, r31
/* 80265BB0 00262AF0  48 00 0F 11 */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80265BB4 00262AF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265BB8 00262AF8  41 82 00 2C */	beq .L_80265BE4
/* 80265BBC 00262AFC  7F E3 FB 78 */	mr r3, r31
/* 80265BC0 00262B00  48 00 14 59 */	bl moveBridgeTop__Q34Game4Ujia3ObjFv
/* 80265BC4 00262B04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265BC8 00262B08  41 82 00 10 */	beq .L_80265BD8
/* 80265BCC 00262B0C  38 00 00 0A */	li r0, 0xa
/* 80265BD0 00262B10  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80265BD4 00262B14  48 00 00 18 */	b .L_80265BEC
.L_80265BD8:
/* 80265BD8 00262B18  38 00 00 08 */	li r0, 8
/* 80265BDC 00262B1C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80265BE0 00262B20  48 00 00 0C */	b .L_80265BEC
.L_80265BE4:
/* 80265BE4 00262B24  38 00 00 09 */	li r0, 9
/* 80265BE8 00262B28  90 1F 02 C4 */	stw r0, 0x2c4(r31)
.L_80265BEC:
/* 80265BEC 00262B2C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80265BF0 00262B30  C0 02 CA F0 */	lfs f0, lbl_8051AE50@sda21(r2)
/* 80265BF4 00262B34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80265BF8 00262B38  4C 40 13 82 */	cror 2, 0, 2
/* 80265BFC 00262B3C  40 82 00 28 */	bne .L_80265C24
/* 80265C00 00262B40  7F C3 F3 78 */	mr r3, r30
/* 80265C04 00262B44  7F E4 FB 78 */	mr r4, r31
/* 80265C08 00262B48  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265C0C 00262B4C  38 A0 00 00 */	li r5, 0
/* 80265C10 00262B50  38 C0 00 00 */	li r6, 0
/* 80265C14 00262B54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265C18 00262B58  7D 89 03 A6 */	mtctr r12
/* 80265C1C 00262B5C  4E 80 04 21 */	bctrl 
/* 80265C20 00262B60  48 00 00 64 */	b .L_80265C84
.L_80265C24:
/* 80265C24 00262B64  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80265C28 00262B68  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80265C2C 00262B6C  28 00 00 00 */	cmplwi r0, 0
/* 80265C30 00262B70  41 82 00 54 */	beq .L_80265C84
/* 80265C34 00262B74  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80265C38 00262B78  28 00 00 02 */	cmplwi r0, 2
/* 80265C3C 00262B7C  40 82 00 20 */	bne .L_80265C5C
/* 80265C40 00262B80  7F E3 FB 78 */	mr r3, r31
/* 80265C44 00262B84  48 00 0E 7D */	bl isBreakBridge__Q34Game4Ujia3ObjFv
/* 80265C48 00262B88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80265C4C 00262B8C  41 82 00 38 */	beq .L_80265C84
/* 80265C50 00262B90  7F E3 FB 78 */	mr r3, r31
/* 80265C54 00262B94  48 00 16 B5 */	bl breakTargetBridge__Q34Game4Ujia3ObjFv
/* 80265C58 00262B98  48 00 00 2C */	b .L_80265C84
.L_80265C5C:
/* 80265C5C 00262B9C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80265C60 00262BA0  40 82 00 24 */	bne .L_80265C84
/* 80265C64 00262BA4  7F C3 F3 78 */	mr r3, r30
/* 80265C68 00262BA8  7F E4 FB 78 */	mr r4, r31
/* 80265C6C 00262BAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80265C70 00262BB0  38 C0 00 00 */	li r6, 0
/* 80265C74 00262BB4  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 80265C78 00262BB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80265C7C 00262BBC  7D 89 03 A6 */	mtctr r12
/* 80265C80 00262BC0  4E 80 04 21 */	bctrl 
.L_80265C84:
/* 80265C84 00262BC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80265C88 00262BC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80265C8C 00262BCC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80265C90 00262BD0  7C 08 03 A6 */	mtlr r0
/* 80265C94 00262BD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80265C98 00262BD8  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBase, global
/* 80265C9C 00262BDC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujia12StateAttack1FPQ24Game9EnemyBase
