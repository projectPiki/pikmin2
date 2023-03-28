.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80485368, local
	.asciz "moveside"
.endobj lbl_80485368
.balign 4
.obj lbl_80485374, local
	.asciz "movecentre"
.endobj lbl_80485374

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Ujib8StateEat, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib8StateEatFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib8StateEatFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib8StateEat
.obj __vt__Q34Game4Ujib12StateAttack2, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib12StateAttack2
.obj __vt__Q34Game4Ujib12StateAttack1, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib12StateAttack1
.obj __vt__Q34Game4Ujib11StateGoHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib11StateGoHome
.obj __vt__Q34Game4Ujib12StateMoveTop, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib12StateMoveTop
.obj __vt__Q34Game4Ujib15StateMoveCentre, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib15StateMoveCentre
.obj __vt__Q34Game4Ujib13StateMoveSide, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib13StateMoveSide
.obj __vt__Q34Game4Ujib9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib9StateMove
.obj __vt__Q34Game4Ujib9StateDive, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib9StateDive
.obj __vt__Q34Game4Ujib11StateAppear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib11StateAppear
.obj __vt__Q34Game4Ujib9StateStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib9StateStay
.obj __vt__Q34Game4Ujib10StatePress, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib10StatePressFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib10StatePressFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib10StatePress
.obj __vt__Q34Game4Ujib9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib9StateDead
.obj __vt__Q34Game4Ujib5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Ujib5State
.obj __vt__Q34Game4Ujib3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Ujib3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game4Ujib3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051AB98, local
	.asciz "dead"
.endobj lbl_8051AB98
.balign 4
.obj lbl_8051ABA0, local
	.asciz "press"
.endobj lbl_8051ABA0
.balign 4
.obj lbl_8051ABA8, local
	.asciz "stay"
.endobj lbl_8051ABA8
.balign 4
.obj lbl_8051ABB0, local
	.asciz "appear"
.endobj lbl_8051ABB0
.balign 4
.obj lbl_8051ABB8, local
	.asciz "dive"
.endobj lbl_8051ABB8
.balign 4
.obj lbl_8051ABC0, local
	.asciz "move"
.endobj lbl_8051ABC0
.balign 4
.obj lbl_8051ABC8, local
	.asciz "movetop"
.endobj lbl_8051ABC8
.balign 4
.obj lbl_8051ABD0, local
	.asciz "gohome"
.endobj lbl_8051ABD0
.balign 4
.obj lbl_8051ABD8, local
	.asciz "attack1"
.endobj lbl_8051ABD8
.balign 4
.obj lbl_8051ABE0, local
	.asciz "attack2"
.endobj lbl_8051ABE0
.balign 4
.obj lbl_8051ABE8, local
	.asciz "eat"
.endobj lbl_8051ABE8
.balign 4
.obj lbl_8051ABEC, local
	.float 0.0
.endobj lbl_8051ABEC
.obj lbl_8051ABF0, local # pi
	.float 3.1415927
.endobj lbl_8051ABF0
.obj lbl_8051ABF4, local
	.float 0.0055555557
.endobj lbl_8051ABF4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game4Ujib3FSMFPQ24Game9EnemyBase, global
/* 8025B1A8 002580E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B1AC 002580EC  7C 08 02 A6 */	mflr r0
/* 8025B1B0 002580F0  38 80 00 0D */	li r4, 0xd
/* 8025B1B4 002580F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B1B8 002580F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025B1BC 002580FC  7C 7F 1B 78 */	mr r31, r3
/* 8025B1C0 00258100  4B ED 56 A5 */	bl create__Q24Game17EnemyStateMachineFi
/* 8025B1C4 00258104  38 60 00 10 */	li r3, 0x10
/* 8025B1C8 00258108  4B DC 8C DD */	bl __nw__FUl
/* 8025B1CC 0025810C  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B1D0 00258110  41 82 00 3C */	beq .L_8025B20C
/* 8025B1D4 00258114  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B1D8 00258118  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B1DC 0025811C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B1E0 00258120  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib9StateDead@ha
/* 8025B1E4 00258124  90 04 00 00 */	stw r0, 0(r4)
/* 8025B1E8 00258128  38 E0 00 00 */	li r7, 0
/* 8025B1EC 0025812C  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B1F0 00258130  38 A2 C8 38 */	addi r5, r2, lbl_8051AB98@sda21
/* 8025B1F4 00258134  90 E4 00 04 */	stw r7, 4(r4)
/* 8025B1F8 00258138  38 03 2E 28 */	addi r0, r3, __vt__Q34Game4Ujib9StateDead@l
/* 8025B1FC 0025813C  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B200 00258140  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B204 00258144  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B208 00258148  90 04 00 00 */	stw r0, 0(r4)
.L_8025B20C:
/* 8025B20C 0025814C  7F E3 FB 78 */	mr r3, r31
/* 8025B210 00258150  4B ED 56 F9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B214 00258154  38 60 00 10 */	li r3, 0x10
/* 8025B218 00258158  4B DC 8C 8D */	bl __nw__FUl
/* 8025B21C 0025815C  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B220 00258160  41 82 00 40 */	beq .L_8025B260
/* 8025B224 00258164  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B228 00258168  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B22C 0025816C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B230 00258170  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib10StatePress@ha
/* 8025B234 00258174  90 04 00 00 */	stw r0, 0(r4)
/* 8025B238 00258178  38 00 00 01 */	li r0, 1
/* 8025B23C 0025817C  38 E0 00 00 */	li r7, 0
/* 8025B240 00258180  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B244 00258184  90 04 00 04 */	stw r0, 4(r4)
/* 8025B248 00258188  38 A2 C8 40 */	addi r5, r2, lbl_8051ABA0@sda21
/* 8025B24C 0025818C  38 03 2E 04 */	addi r0, r3, __vt__Q34Game4Ujib10StatePress@l
/* 8025B250 00258190  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B254 00258194  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B258 00258198  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B25C 0025819C  90 04 00 00 */	stw r0, 0(r4)
.L_8025B260:
/* 8025B260 002581A0  7F E3 FB 78 */	mr r3, r31
/* 8025B264 002581A4  4B ED 56 A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B268 002581A8  38 60 00 10 */	li r3, 0x10
/* 8025B26C 002581AC  4B DC 8C 39 */	bl __nw__FUl
/* 8025B270 002581B0  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B274 002581B4  41 82 00 40 */	beq .L_8025B2B4
/* 8025B278 002581B8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B27C 002581BC  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B280 002581C0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B284 002581C4  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib9StateStay@ha
/* 8025B288 002581C8  90 04 00 00 */	stw r0, 0(r4)
/* 8025B28C 002581CC  38 00 00 02 */	li r0, 2
/* 8025B290 002581D0  38 E0 00 00 */	li r7, 0
/* 8025B294 002581D4  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B298 002581D8  90 04 00 04 */	stw r0, 4(r4)
/* 8025B29C 002581DC  38 A2 C8 48 */	addi r5, r2, lbl_8051ABA8@sda21
/* 8025B2A0 002581E0  38 03 2D E0 */	addi r0, r3, __vt__Q34Game4Ujib9StateStay@l
/* 8025B2A4 002581E4  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B2A8 002581E8  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B2AC 002581EC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B2B0 002581F0  90 04 00 00 */	stw r0, 0(r4)
.L_8025B2B4:
/* 8025B2B4 002581F4  7F E3 FB 78 */	mr r3, r31
/* 8025B2B8 002581F8  4B ED 56 51 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B2BC 002581FC  38 60 00 10 */	li r3, 0x10
/* 8025B2C0 00258200  4B DC 8B E5 */	bl __nw__FUl
/* 8025B2C4 00258204  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B2C8 00258208  41 82 00 40 */	beq .L_8025B308
/* 8025B2CC 0025820C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B2D0 00258210  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B2D4 00258214  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B2D8 00258218  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib11StateAppear@ha
/* 8025B2DC 0025821C  90 04 00 00 */	stw r0, 0(r4)
/* 8025B2E0 00258220  38 00 00 03 */	li r0, 3
/* 8025B2E4 00258224  38 E0 00 00 */	li r7, 0
/* 8025B2E8 00258228  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B2EC 0025822C  90 04 00 04 */	stw r0, 4(r4)
/* 8025B2F0 00258230  38 A2 C8 50 */	addi r5, r2, lbl_8051ABB0@sda21
/* 8025B2F4 00258234  38 03 2D BC */	addi r0, r3, __vt__Q34Game4Ujib11StateAppear@l
/* 8025B2F8 00258238  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B2FC 0025823C  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B300 00258240  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B304 00258244  90 04 00 00 */	stw r0, 0(r4)
.L_8025B308:
/* 8025B308 00258248  7F E3 FB 78 */	mr r3, r31
/* 8025B30C 0025824C  4B ED 55 FD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B310 00258250  38 60 00 10 */	li r3, 0x10
/* 8025B314 00258254  4B DC 8B 91 */	bl __nw__FUl
/* 8025B318 00258258  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B31C 0025825C  41 82 00 40 */	beq .L_8025B35C
/* 8025B320 00258260  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B324 00258264  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B328 00258268  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B32C 0025826C  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib9StateDive@ha
/* 8025B330 00258270  90 04 00 00 */	stw r0, 0(r4)
/* 8025B334 00258274  38 00 00 04 */	li r0, 4
/* 8025B338 00258278  38 E0 00 00 */	li r7, 0
/* 8025B33C 0025827C  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B340 00258280  90 04 00 04 */	stw r0, 4(r4)
/* 8025B344 00258284  38 A2 C8 58 */	addi r5, r2, lbl_8051ABB8@sda21
/* 8025B348 00258288  38 03 2D 98 */	addi r0, r3, __vt__Q34Game4Ujib9StateDive@l
/* 8025B34C 0025828C  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B350 00258290  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B354 00258294  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B358 00258298  90 04 00 00 */	stw r0, 0(r4)
.L_8025B35C:
/* 8025B35C 0025829C  7F E3 FB 78 */	mr r3, r31
/* 8025B360 002582A0  4B ED 55 A9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B364 002582A4  38 60 00 10 */	li r3, 0x10
/* 8025B368 002582A8  4B DC 8B 3D */	bl __nw__FUl
/* 8025B36C 002582AC  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B370 002582B0  41 82 00 40 */	beq .L_8025B3B0
/* 8025B374 002582B4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B378 002582B8  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B37C 002582BC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B380 002582C0  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib9StateMove@ha
/* 8025B384 002582C4  90 04 00 00 */	stw r0, 0(r4)
/* 8025B388 002582C8  38 00 00 05 */	li r0, 5
/* 8025B38C 002582CC  38 E0 00 00 */	li r7, 0
/* 8025B390 002582D0  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B394 002582D4  90 04 00 04 */	stw r0, 4(r4)
/* 8025B398 002582D8  38 A2 C8 60 */	addi r5, r2, lbl_8051ABC0@sda21
/* 8025B39C 002582DC  38 03 2D 74 */	addi r0, r3, __vt__Q34Game4Ujib9StateMove@l
/* 8025B3A0 002582E0  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B3A4 002582E4  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B3A8 002582E8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B3AC 002582EC  90 04 00 00 */	stw r0, 0(r4)
.L_8025B3B0:
/* 8025B3B0 002582F0  7F E3 FB 78 */	mr r3, r31
/* 8025B3B4 002582F4  4B ED 55 55 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B3B8 002582F8  38 60 00 10 */	li r3, 0x10
/* 8025B3BC 002582FC  4B DC 8A E9 */	bl __nw__FUl
/* 8025B3C0 00258300  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B3C4 00258304  41 82 00 44 */	beq .L_8025B408
/* 8025B3C8 00258308  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B3CC 0025830C  3C C0 80 4C */	lis r6, __vt__Q34Game4Ujib5State@ha
/* 8025B3D0 00258310  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B3D4 00258314  3C A0 80 48 */	lis r5, lbl_80485368@ha
/* 8025B3D8 00258318  90 04 00 00 */	stw r0, 0(r4)
/* 8025B3DC 0025831C  38 00 00 06 */	li r0, 6
/* 8025B3E0 00258320  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib13StateMoveSide@ha
/* 8025B3E4 00258324  38 E0 00 00 */	li r7, 0
/* 8025B3E8 00258328  90 04 00 04 */	stw r0, 4(r4)
/* 8025B3EC 0025832C  38 C6 2E 4C */	addi r6, r6, __vt__Q34Game4Ujib5State@l
/* 8025B3F0 00258330  38 A5 53 68 */	addi r5, r5, lbl_80485368@l
/* 8025B3F4 00258334  38 03 2D 50 */	addi r0, r3, __vt__Q34Game4Ujib13StateMoveSide@l
/* 8025B3F8 00258338  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B3FC 0025833C  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B400 00258340  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B404 00258344  90 04 00 00 */	stw r0, 0(r4)
.L_8025B408:
/* 8025B408 00258348  7F E3 FB 78 */	mr r3, r31
/* 8025B40C 0025834C  4B ED 54 FD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B410 00258350  38 60 00 10 */	li r3, 0x10
/* 8025B414 00258354  4B DC 8A 91 */	bl __nw__FUl
/* 8025B418 00258358  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B41C 0025835C  41 82 00 44 */	beq .L_8025B460
/* 8025B420 00258360  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B424 00258364  3C C0 80 4C */	lis r6, __vt__Q34Game4Ujib5State@ha
/* 8025B428 00258368  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B42C 0025836C  3C A0 80 48 */	lis r5, lbl_80485374@ha
/* 8025B430 00258370  90 04 00 00 */	stw r0, 0(r4)
/* 8025B434 00258374  38 00 00 07 */	li r0, 7
/* 8025B438 00258378  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib15StateMoveCentre@ha
/* 8025B43C 0025837C  38 E0 00 00 */	li r7, 0
/* 8025B440 00258380  90 04 00 04 */	stw r0, 4(r4)
/* 8025B444 00258384  38 C6 2E 4C */	addi r6, r6, __vt__Q34Game4Ujib5State@l
/* 8025B448 00258388  38 A5 53 74 */	addi r5, r5, lbl_80485374@l
/* 8025B44C 0025838C  38 03 2D 2C */	addi r0, r3, __vt__Q34Game4Ujib15StateMoveCentre@l
/* 8025B450 00258390  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B454 00258394  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B458 00258398  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B45C 0025839C  90 04 00 00 */	stw r0, 0(r4)
.L_8025B460:
/* 8025B460 002583A0  7F E3 FB 78 */	mr r3, r31
/* 8025B464 002583A4  4B ED 54 A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B468 002583A8  38 60 00 10 */	li r3, 0x10
/* 8025B46C 002583AC  4B DC 8A 39 */	bl __nw__FUl
/* 8025B470 002583B0  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B474 002583B4  41 82 00 40 */	beq .L_8025B4B4
/* 8025B478 002583B8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B47C 002583BC  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B480 002583C0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B484 002583C4  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib12StateMoveTop@ha
/* 8025B488 002583C8  90 04 00 00 */	stw r0, 0(r4)
/* 8025B48C 002583CC  38 00 00 08 */	li r0, 8
/* 8025B490 002583D0  38 E0 00 00 */	li r7, 0
/* 8025B494 002583D4  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B498 002583D8  90 04 00 04 */	stw r0, 4(r4)
/* 8025B49C 002583DC  38 A2 C8 68 */	addi r5, r2, lbl_8051ABC8@sda21
/* 8025B4A0 002583E0  38 03 2D 08 */	addi r0, r3, __vt__Q34Game4Ujib12StateMoveTop@l
/* 8025B4A4 002583E4  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B4A8 002583E8  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B4AC 002583EC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B4B0 002583F0  90 04 00 00 */	stw r0, 0(r4)
.L_8025B4B4:
/* 8025B4B4 002583F4  7F E3 FB 78 */	mr r3, r31
/* 8025B4B8 002583F8  4B ED 54 51 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B4BC 002583FC  38 60 00 10 */	li r3, 0x10
/* 8025B4C0 00258400  4B DC 89 E5 */	bl __nw__FUl
/* 8025B4C4 00258404  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B4C8 00258408  41 82 00 40 */	beq .L_8025B508
/* 8025B4CC 0025840C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B4D0 00258410  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B4D4 00258414  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B4D8 00258418  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib11StateGoHome@ha
/* 8025B4DC 0025841C  90 04 00 00 */	stw r0, 0(r4)
/* 8025B4E0 00258420  38 00 00 09 */	li r0, 9
/* 8025B4E4 00258424  38 E0 00 00 */	li r7, 0
/* 8025B4E8 00258428  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B4EC 0025842C  90 04 00 04 */	stw r0, 4(r4)
/* 8025B4F0 00258430  38 A2 C8 70 */	addi r5, r2, lbl_8051ABD0@sda21
/* 8025B4F4 00258434  38 03 2C E4 */	addi r0, r3, __vt__Q34Game4Ujib11StateGoHome@l
/* 8025B4F8 00258438  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B4FC 0025843C  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B500 00258440  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B504 00258444  90 04 00 00 */	stw r0, 0(r4)
.L_8025B508:
/* 8025B508 00258448  7F E3 FB 78 */	mr r3, r31
/* 8025B50C 0025844C  4B ED 53 FD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B510 00258450  38 60 00 10 */	li r3, 0x10
/* 8025B514 00258454  4B DC 89 91 */	bl __nw__FUl
/* 8025B518 00258458  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B51C 0025845C  41 82 00 40 */	beq .L_8025B55C
/* 8025B520 00258460  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B524 00258464  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B528 00258468  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B52C 0025846C  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib12StateAttack1@ha
/* 8025B530 00258470  90 04 00 00 */	stw r0, 0(r4)
/* 8025B534 00258474  38 00 00 0A */	li r0, 0xa
/* 8025B538 00258478  38 E0 00 00 */	li r7, 0
/* 8025B53C 0025847C  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B540 00258480  90 04 00 04 */	stw r0, 4(r4)
/* 8025B544 00258484  38 A2 C8 78 */	addi r5, r2, lbl_8051ABD8@sda21
/* 8025B548 00258488  38 03 2C C0 */	addi r0, r3, __vt__Q34Game4Ujib12StateAttack1@l
/* 8025B54C 0025848C  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B550 00258490  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B554 00258494  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B558 00258498  90 04 00 00 */	stw r0, 0(r4)
.L_8025B55C:
/* 8025B55C 0025849C  7F E3 FB 78 */	mr r3, r31
/* 8025B560 002584A0  4B ED 53 A9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B564 002584A4  38 60 00 10 */	li r3, 0x10
/* 8025B568 002584A8  4B DC 89 3D */	bl __nw__FUl
/* 8025B56C 002584AC  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B570 002584B0  41 82 00 40 */	beq .L_8025B5B0
/* 8025B574 002584B4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B578 002584B8  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B57C 002584BC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B580 002584C0  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib12StateAttack2@ha
/* 8025B584 002584C4  90 04 00 00 */	stw r0, 0(r4)
/* 8025B588 002584C8  38 00 00 0B */	li r0, 0xb
/* 8025B58C 002584CC  38 E0 00 00 */	li r7, 0
/* 8025B590 002584D0  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B594 002584D4  90 04 00 04 */	stw r0, 4(r4)
/* 8025B598 002584D8  38 A2 C8 80 */	addi r5, r2, lbl_8051ABE0@sda21
/* 8025B59C 002584DC  38 03 2C 9C */	addi r0, r3, __vt__Q34Game4Ujib12StateAttack2@l
/* 8025B5A0 002584E0  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B5A4 002584E4  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B5A8 002584E8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B5AC 002584EC  90 04 00 00 */	stw r0, 0(r4)
.L_8025B5B0:
/* 8025B5B0 002584F0  7F E3 FB 78 */	mr r3, r31
/* 8025B5B4 002584F4  4B ED 53 55 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B5B8 002584F8  38 60 00 10 */	li r3, 0x10
/* 8025B5BC 002584FC  4B DC 88 E9 */	bl __nw__FUl
/* 8025B5C0 00258500  7C 64 1B 79 */	or. r4, r3, r3
/* 8025B5C4 00258504  41 82 00 40 */	beq .L_8025B604
/* 8025B5C8 00258508  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8025B5CC 0025850C  3C A0 80 4C */	lis r5, __vt__Q34Game4Ujib5State@ha
/* 8025B5D0 00258510  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8025B5D4 00258514  3C 60 80 4C */	lis r3, __vt__Q34Game4Ujib8StateEat@ha
/* 8025B5D8 00258518  90 04 00 00 */	stw r0, 0(r4)
/* 8025B5DC 0025851C  38 00 00 0C */	li r0, 0xc
/* 8025B5E0 00258520  38 E0 00 00 */	li r7, 0
/* 8025B5E4 00258524  38 C5 2E 4C */	addi r6, r5, __vt__Q34Game4Ujib5State@l
/* 8025B5E8 00258528  90 04 00 04 */	stw r0, 4(r4)
/* 8025B5EC 0025852C  38 A2 C8 88 */	addi r5, r2, lbl_8051ABE8@sda21
/* 8025B5F0 00258530  38 03 2C 78 */	addi r0, r3, __vt__Q34Game4Ujib8StateEat@l
/* 8025B5F4 00258534  90 E4 00 08 */	stw r7, 8(r4)
/* 8025B5F8 00258538  90 C4 00 00 */	stw r6, 0(r4)
/* 8025B5FC 0025853C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8025B600 00258540  90 04 00 00 */	stw r0, 0(r4)
.L_8025B604:
/* 8025B604 00258544  7F E3 FB 78 */	mr r3, r31
/* 8025B608 00258548  4B ED 53 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8025B60C 0025854C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B610 00258550  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025B614 00258554  7C 08 03 A6 */	mtlr r0
/* 8025B618 00258558  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B61C 0025855C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib3FSMFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025B620 00258560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B624 00258564  7C 08 02 A6 */	mflr r0
/* 8025B628 00258568  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B62C 0025856C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025B630 00258570  7C 9F 23 78 */	mr r31, r4
/* 8025B634 00258574  7F E3 FB 78 */	mr r3, r31
/* 8025B638 00258578  4B EA A0 E9 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8025B63C 0025857C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B640 00258580  7F E3 FB 78 */	mr r3, r31
/* 8025B644 00258584  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025B648 00258588  38 80 00 00 */	li r4, 0
/* 8025B64C 0025858C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8025B650 00258590  38 A0 00 00 */	li r5, 0
/* 8025B654 00258594  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B658 00258598  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025B65C 0025859C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8025B660 002585A0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025B664 002585A4  4B EA 99 A1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025B668 002585A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B66C 002585AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025B670 002585B0  7C 08 03 A6 */	mtlr r0
/* 8025B674 002585B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B678 002585B8  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBase, global
/* 8025B67C 002585BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B680 002585C0  7C 08 02 A6 */	mflr r0
/* 8025B684 002585C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B688 002585C8  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8025B68C 002585CC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025B690 002585D0  28 00 00 00 */	cmplwi r0, 0
/* 8025B694 002585D4  41 82 00 1C */	beq .L_8025B6B0
/* 8025B698 002585D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025B69C 002585DC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025B6A0 002585E0  40 82 00 10 */	bne .L_8025B6B0
/* 8025B6A4 002585E4  7C 83 23 78 */	mr r3, r4
/* 8025B6A8 002585E8  38 80 00 00 */	li r4, 0
/* 8025B6AC 002585EC  4B ED FA 45 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8025B6B0:
/* 8025B6B0 002585F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B6B4 002585F4  7C 08 03 A6 */	mtlr r0
/* 8025B6B8 002585F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B6BC 002585FC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBase, global
/* 8025B6C0 00258600  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025B6C4 00258604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B6C8 00258608  7C 08 02 A6 */	mflr r0
/* 8025B6CC 0025860C  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025B6D0 00258610  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B6D4 00258614  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025B6D8 00258618  7C 9F 23 78 */	mr r31, r4
/* 8025B6DC 0025861C  7F E3 FB 78 */	mr r3, r31
/* 8025B6E0 00258620  D0 04 02 00 */	stfs f0, 0x200(r4)
/* 8025B6E4 00258624  4B EA A0 3D */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8025B6E8 00258628  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B6EC 0025862C  7F E3 FB 78 */	mr r3, r31
/* 8025B6F0 00258630  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025B6F4 00258634  38 80 00 01 */	li r4, 1
/* 8025B6F8 00258638  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8025B6FC 0025863C  38 A0 00 00 */	li r5, 0
/* 8025B700 00258640  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B704 00258644  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025B708 00258648  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8025B70C 0025864C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025B710 00258650  4B EA 98 F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025B714 00258654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B718 00258658  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025B71C 0025865C  7C 08 03 A6 */	mtlr r0
/* 8025B720 00258660  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B724 00258664  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib10StatePressFPQ24Game9EnemyBase, global
/* 8025B728 00258668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B72C 0025866C  7C 08 02 A6 */	mflr r0
/* 8025B730 00258670  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B734 00258674  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8025B738 00258678  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025B73C 0025867C  28 00 00 00 */	cmplwi r0, 0
/* 8025B740 00258680  41 82 00 1C */	beq .L_8025B75C
/* 8025B744 00258684  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025B748 00258688  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025B74C 0025868C  40 82 00 10 */	bne .L_8025B75C
/* 8025B750 00258690  7C 83 23 78 */	mr r3, r4
/* 8025B754 00258694  38 80 00 00 */	li r4, 0
/* 8025B758 00258698  4B ED F9 99 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8025B75C:
/* 8025B75C 0025869C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B760 002586A0  7C 08 03 A6 */	mtlr r0
/* 8025B764 002586A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B768 002586A8  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib10StatePressFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib10StatePressFPQ24Game9EnemyBase, global
/* 8025B76C 002586AC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib10StatePressFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025B770 002586B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B774 002586B4  7C 08 02 A6 */	mflr r0
/* 8025B778 002586B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B77C 002586BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025B780 002586C0  7C 9F 23 78 */	mr r31, r4
/* 8025B784 002586C4  7F E3 FB 78 */	mr r3, r31
/* 8025B788 002586C8  4B FF E8 D1 */	bl resetAppearCheck__Q34Game4Ujib3ObjFv
/* 8025B78C 002586CC  7F E3 FB 78 */	mr r3, r31
/* 8025B790 002586D0  38 80 00 00 */	li r4, 0
/* 8025B794 002586D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025B798 002586D8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8025B79C 002586DC  7D 89 03 A6 */	mtctr r12
/* 8025B7A0 002586E0  4E 80 04 21 */	bctrl 
/* 8025B7A4 002586E4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8025B7A8 002586E8  38 00 00 01 */	li r0, 1
/* 8025B7AC 002586EC  7F E3 FB 78 */	mr r3, r31
/* 8025B7B0 002586F0  60 84 00 01 */	ori r4, r4, 1
/* 8025B7B4 002586F4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8025B7B8 002586F8  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8025B7BC 002586FC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B7C0 00258700  64 00 00 40 */	oris r0, r0, 0x40
/* 8025B7C4 00258704  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B7C8 00258708  4B EA BF B5 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8025B7CC 0025870C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B7D0 00258710  7F E3 FB 78 */	mr r3, r31
/* 8025B7D4 00258714  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025B7D8 00258718  38 80 00 02 */	li r4, 2
/* 8025B7DC 0025871C  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8025B7E0 00258720  38 A0 00 00 */	li r5, 0
/* 8025B7E4 00258724  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B7E8 00258728  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B7EC 0025872C  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 8025B7F0 00258730  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B7F4 00258734  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B7F8 00258738  64 00 40 00 */	oris r0, r0, 0x4000
/* 8025B7FC 0025873C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B800 00258740  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025B804 00258744  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8025B808 00258748  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025B80C 0025874C  4B EA 97 F9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025B810 00258750  7F E3 FB 78 */	mr r3, r31
/* 8025B814 00258754  4B EA BA CD */	bl stopMotion__Q24Game9EnemyBaseFv
/* 8025B818 00258758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B81C 0025875C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025B820 00258760  7C 08 03 A6 */	mtlr r0
/* 8025B824 00258764  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B828 00258768  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib9StateStayFPQ24Game9EnemyBase, global
/* 8025B82C 0025876C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8025B830 00258770  7C 08 02 A6 */	mflr r0
/* 8025B834 00258774  90 01 00 24 */	stw r0, 0x24(r1)
/* 8025B838 00258778  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025B83C 0025877C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8025B840 00258780  7C 9E 23 78 */	mr r30, r4
/* 8025B844 00258784  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8025B848 00258788  7C 7D 1B 78 */	mr r29, r3
/* 8025B84C 0025878C  7F C3 F3 78 */	mr r3, r30
/* 8025B850 00258790  4B FF E9 25 */	bl setBridgeSearch__Q34Game4Ujib3ObjFv
/* 8025B854 00258794  80 FE 00 C0 */	lwz r7, 0xc0(r30)
/* 8025B858 00258798  7F C3 F3 78 */	mr r3, r30
/* 8025B85C 0025879C  38 80 00 00 */	li r4, 0
/* 8025B860 002587A0  38 A0 00 00 */	li r5, 0
/* 8025B864 002587A4  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8025B868 002587A8  38 C0 00 00 */	li r6, 0
/* 8025B86C 002587AC  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8025B870 002587B0  4B EB 77 E1 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025B874 002587B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025B878 002587B8  40 82 00 14 */	bne .L_8025B88C
/* 8025B87C 002587BC  7F C3 F3 78 */	mr r3, r30
/* 8025B880 002587C0  4B FF ED B5 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025B884 002587C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025B888 002587C8  41 82 00 38 */	beq .L_8025B8C0
.L_8025B88C:
/* 8025B88C 002587CC  7F C3 F3 78 */	mr r3, r30
/* 8025B890 002587D0  4B FF E8 7D */	bl isAppearCheck__Q34Game4Ujib3ObjFv
/* 8025B894 002587D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025B898 002587D8  41 82 00 28 */	beq .L_8025B8C0
/* 8025B89C 002587DC  93 FE 02 30 */	stw r31, 0x230(r30)
/* 8025B8A0 002587E0  7F A3 EB 78 */	mr r3, r29
/* 8025B8A4 002587E4  7F C4 F3 78 */	mr r4, r30
/* 8025B8A8 002587E8  38 A0 00 03 */	li r5, 3
/* 8025B8AC 002587EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8025B8B0 002587F0  38 C0 00 00 */	li r6, 0
/* 8025B8B4 002587F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025B8B8 002587F8  7D 89 03 A6 */	mtctr r12
/* 8025B8BC 002587FC  4E 80 04 21 */	bctrl 
.L_8025B8C0:
/* 8025B8C0 00258800  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025B8C4 00258804  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025B8C8 00258808  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8025B8CC 0025880C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8025B8D0 00258810  7C 08 03 A6 */	mtlr r0
/* 8025B8D4 00258814  38 21 00 20 */	addi r1, r1, 0x20
/* 8025B8D8 00258818  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib9StateStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib9StateStayFPQ24Game9EnemyBase, global
/* 8025B8DC 0025881C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B8E0 00258820  7C 08 02 A6 */	mflr r0
/* 8025B8E4 00258824  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B8E8 00258828  7C 80 23 78 */	mr r0, r4
/* 8025B8EC 0025882C  38 80 00 01 */	li r4, 1
/* 8025B8F0 00258830  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025B8F4 00258834  7C 1F 03 78 */	mr r31, r0
/* 8025B8F8 00258838  7F E3 FB 78 */	mr r3, r31
/* 8025B8FC 0025883C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025B900 00258840  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8025B904 00258844  7D 89 03 A6 */	mtctr r12
/* 8025B908 00258848  4E 80 04 21 */	bctrl 
/* 8025B90C 0025884C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8025B910 00258850  38 00 00 00 */	li r0, 0
/* 8025B914 00258854  7F E3 FB 78 */	mr r3, r31
/* 8025B918 00258858  54 84 00 3C */	rlwinm r4, r4, 0, 0, 0x1e
/* 8025B91C 0025885C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8025B920 00258860  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8025B924 00258864  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B928 00258868  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 8025B92C 0025886C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B930 00258870  4B EA BE 65 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 8025B934 00258874  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B938 00258878  60 00 80 00 */	ori r0, r0, 0x8000
/* 8025B93C 0025887C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B940 00258880  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B944 00258884  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 8025B948 00258888  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B94C 0025888C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025B950 00258890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B954 00258894  7C 08 03 A6 */	mtlr r0
/* 8025B958 00258898  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B95C 0025889C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib9StateStayFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025B960 002588A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B964 002588A4  7C 08 02 A6 */	mflr r0
/* 8025B968 002588A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B96C 002588AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025B970 002588B0  7C 9F 23 78 */	mr r31, r4
/* 8025B974 002588B4  7F E3 FB 78 */	mr r3, r31
/* 8025B978 002588B8  4B FF E6 7D */	bl lifeIncrement__Q34Game4Ujib3ObjFv
/* 8025B97C 002588BC  7F E3 FB 78 */	mr r3, r31
/* 8025B980 002588C0  4B EA BD FD */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8025B984 002588C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B988 002588C8  7F E3 FB 78 */	mr r3, r31
/* 8025B98C 002588CC  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025B990 002588D0  64 00 00 20 */	oris r0, r0, 0x20
/* 8025B994 002588D4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B998 002588D8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025B99C 002588DC  60 00 08 00 */	ori r0, r0, 0x800
/* 8025B9A0 002588E0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025B9A4 002588E4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025B9A8 002588E8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8025B9AC 002588EC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025B9B0 002588F0  4B EA 60 1D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8025B9B4 002588F4  7F E3 FB 78 */	mr r3, r31
/* 8025B9B8 002588F8  38 80 00 02 */	li r4, 2
/* 8025B9BC 002588FC  38 A0 00 00 */	li r5, 0
/* 8025B9C0 00258900  4B EA 96 45 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025B9C4 00258904  7F E3 FB 78 */	mr r3, r31
/* 8025B9C8 00258908  4B FF F5 11 */	bl createAppearEffect__Q34Game4Ujib3ObjFv
/* 8025B9CC 0025890C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025B9D0 00258910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025B9D4 00258914  7C 08 03 A6 */	mtlr r0
/* 8025B9D8 00258918  38 21 00 10 */	addi r1, r1, 0x10
/* 8025B9DC 0025891C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBase, global
/* 8025B9E0 00258920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025B9E4 00258924  7C 08 02 A6 */	mflr r0
/* 8025B9E8 00258928  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025B9EC 0025892C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8025B9F0 00258930  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8025B9F4 00258934  28 00 00 00 */	cmplwi r0, 0
/* 8025B9F8 00258938  41 82 00 58 */	beq .L_8025BA50
/* 8025B9FC 0025893C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8025BA00 00258940  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025BA04 00258944  40 82 00 4C */	bne .L_8025BA50
/* 8025BA08 00258948  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 8025BA0C 0025894C  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025BA10 00258950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025BA14 00258954  4C 40 13 82 */	cror 2, 0, 2
/* 8025BA18 00258958  40 82 00 20 */	bne .L_8025BA38
/* 8025BA1C 0025895C  81 83 00 00 */	lwz r12, 0(r3)
/* 8025BA20 00258960  38 A0 00 00 */	li r5, 0
/* 8025BA24 00258964  38 C0 00 00 */	li r6, 0
/* 8025BA28 00258968  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025BA2C 0025896C  7D 89 03 A6 */	mtctr r12
/* 8025BA30 00258970  4E 80 04 21 */	bctrl 
/* 8025BA34 00258974  48 00 00 1C */	b .L_8025BA50
.L_8025BA38:
/* 8025BA38 00258978  81 83 00 00 */	lwz r12, 0(r3)
/* 8025BA3C 0025897C  38 A0 00 05 */	li r5, 5
/* 8025BA40 00258980  38 C0 00 00 */	li r6, 0
/* 8025BA44 00258984  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025BA48 00258988  7D 89 03 A6 */	mtctr r12
/* 8025BA4C 0025898C  4E 80 04 21 */	bctrl 
.L_8025BA50:
/* 8025BA50 00258990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025BA54 00258994  7C 08 03 A6 */	mtlr r0
/* 8025BA58 00258998  38 21 00 10 */	addi r1, r1, 0x10
/* 8025BA5C 0025899C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBase, global
/* 8025BA60 002589A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025BA64 002589A4  7C 08 02 A6 */	mflr r0
/* 8025BA68 002589A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025BA6C 002589AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025BA70 002589B0  7C 9F 23 78 */	mr r31, r4
/* 8025BA74 002589B4  7F E3 FB 78 */	mr r3, r31
/* 8025BA78 002589B8  4B EA BD 1D */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 8025BA7C 002589BC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025BA80 002589C0  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8025BA84 002589C4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025BA88 002589C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025BA8C 002589CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025BA90 002589D0  7C 08 03 A6 */	mtlr r0
/* 8025BA94 002589D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025BA98 002589D8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib11StateAppearFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025BA9C 002589DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025BAA0 002589E0  7C 08 02 A6 */	mflr r0
/* 8025BAA4 002589E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025BAA8 002589E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025BAAC 002589EC  7C 9F 23 78 */	mr r31, r4
/* 8025BAB0 002589F0  7F E3 FB 78 */	mr r3, r31
/* 8025BAB4 002589F4  4B EA BC C9 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8025BAB8 002589F8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025BABC 002589FC  7F E3 FB 78 */	mr r3, r31
/* 8025BAC0 00258A00  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025BAC4 00258A04  64 00 00 40 */	oris r0, r0, 0x40
/* 8025BAC8 00258A08  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025BACC 00258A0C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025BAD0 00258A10  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8025BAD4 00258A14  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025BAD8 00258A18  4B EA 5E A5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8025BADC 00258A1C  7F E3 FB 78 */	mr r3, r31
/* 8025BAE0 00258A20  38 80 00 03 */	li r4, 3
/* 8025BAE4 00258A24  38 A0 00 00 */	li r5, 0
/* 8025BAE8 00258A28  4B EA 95 1D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025BAEC 00258A2C  7F E3 FB 78 */	mr r3, r31
/* 8025BAF0 00258A30  4B FF F4 75 */	bl createDisAppearEffect__Q34Game4Ujib3ObjFv
/* 8025BAF4 00258A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025BAF8 00258A38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025BAFC 00258A3C  7C 08 03 A6 */	mtlr r0
/* 8025BB00 00258A40  38 21 00 10 */	addi r1, r1, 0x10
/* 8025BB04 00258A44  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBase, global
/* 8025BB08 00258A48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025BB0C 00258A4C  7C 08 02 A6 */	mflr r0
/* 8025BB10 00258A50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025BB14 00258A54  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8025BB18 00258A58  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8025BB1C 00258A5C  28 00 00 00 */	cmplwi r0, 0
/* 8025BB20 00258A60  41 82 00 28 */	beq .L_8025BB48
/* 8025BB24 00258A64  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8025BB28 00258A68  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025BB2C 00258A6C  40 82 00 1C */	bne .L_8025BB48
/* 8025BB30 00258A70  81 83 00 00 */	lwz r12, 0(r3)
/* 8025BB34 00258A74  38 A0 00 02 */	li r5, 2
/* 8025BB38 00258A78  38 C0 00 00 */	li r6, 0
/* 8025BB3C 00258A7C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025BB40 00258A80  7D 89 03 A6 */	mtctr r12
/* 8025BB44 00258A84  4E 80 04 21 */	bctrl 
.L_8025BB48:
/* 8025BB48 00258A88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025BB4C 00258A8C  7C 08 03 A6 */	mtlr r0
/* 8025BB50 00258A90  38 21 00 10 */	addi r1, r1, 0x10
/* 8025BB54 00258A94  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBase, global
/* 8025BB58 00258A98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025BB5C 00258A9C  7C 08 02 A6 */	mflr r0
/* 8025BB60 00258AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025BB64 00258AA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025BB68 00258AA8  7C 9F 23 78 */	mr r31, r4
/* 8025BB6C 00258AAC  7F E3 FB 78 */	mr r3, r31
/* 8025BB70 00258AB0  4B EA BC 25 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 8025BB74 00258AB4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025BB78 00258AB8  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 8025BB7C 00258ABC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025BB80 00258AC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025BB84 00258AC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025BB88 00258AC8  7C 08 03 A6 */	mtlr r0
/* 8025BB8C 00258ACC  38 21 00 10 */	addi r1, r1, 0x10
/* 8025BB90 00258AD0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib9StateDiveFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025BB94 00258AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025BB98 00258AD8  7C 08 02 A6 */	mflr r0
/* 8025BB9C 00258ADC  7C 83 23 78 */	mr r3, r4
/* 8025BBA0 00258AE0  38 80 00 04 */	li r4, 4
/* 8025BBA4 00258AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025BBA8 00258AE8  38 00 FF FF */	li r0, -1
/* 8025BBAC 00258AEC  38 A0 00 00 */	li r5, 0
/* 8025BBB0 00258AF0  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8025BBB4 00258AF4  4B EA 94 51 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025BBB8 00258AF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025BBBC 00258AFC  7C 08 03 A6 */	mtlr r0
/* 8025BBC0 00258B00  38 21 00 10 */	addi r1, r1, 0x10
/* 8025BBC4 00258B04  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBase, global
/* 8025BBC8 00258B08  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8025BBCC 00258B0C  7C 08 02 A6 */	mflr r0
/* 8025BBD0 00258B10  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8025BBD4 00258B14  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8025BBD8 00258B18  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8025BBDC 00258B1C  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8025BBE0 00258B20  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 8025BBE4 00258B24  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 8025BBE8 00258B28  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 8025BBEC 00258B2C  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 8025BBF0 00258B30  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 8025BBF4 00258B34  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 8025BBF8 00258B38  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 8025BBFC 00258B3C  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 8025BC00 00258B40  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 8025BC04 00258B44  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8025BC08 00258B48  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8025BC0C 00258B4C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8025BC10 00258B50  93 81 00 80 */	stw r28, 0x80(r1)
/* 8025BC14 00258B54  7C 9F 23 78 */	mr r31, r4
/* 8025BC18 00258B58  7C 7E 1B 78 */	mr r30, r3
/* 8025BC1C 00258B5C  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8025BC20 00258B60  38 80 00 00 */	li r4, 0
/* 8025BC24 00258B64  7F E3 FB 78 */	mr r3, r31
/* 8025BC28 00258B68  38 A0 00 00 */	li r5, 0
/* 8025BC2C 00258B6C  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8025BC30 00258B70  38 C0 00 00 */	li r6, 0
/* 8025BC34 00258B74  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8025BC38 00258B78  4B EB 74 19 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025BC3C 00258B7C  7C 7C 1B 79 */	or. r28, r3, r3
/* 8025BC40 00258B80  41 82 03 4C */	beq .L_8025BF8C
/* 8025BC44 00258B84  93 9F 02 30 */	stw r28, 0x230(r31)
/* 8025BC48 00258B88  7F 84 E3 78 */	mr r4, r28
/* 8025BC4C 00258B8C  38 61 00 50 */	addi r3, r1, 0x50
/* 8025BC50 00258B90  81 9C 00 00 */	lwz r12, 0(r28)
/* 8025BC54 00258B94  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8025BC58 00258B98  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BC5C 00258B9C  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 8025BC60 00258BA0  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8025BC64 00258BA4  7D 89 03 A6 */	mtctr r12
/* 8025BC68 00258BA8  4E 80 04 21 */	bctrl 
/* 8025BC6C 00258BAC  7F E4 FB 78 */	mr r4, r31
/* 8025BC70 00258BB0  38 61 00 5C */	addi r3, r1, 0x5c
/* 8025BC74 00258BB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BC78 00258BB8  C3 41 00 50 */	lfs f26, 0x50(r1)
/* 8025BC7C 00258BBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BC80 00258BC0  C3 61 00 58 */	lfs f27, 0x58(r1)
/* 8025BC84 00258BC4  7D 89 03 A6 */	mtctr r12
/* 8025BC88 00258BC8  4E 80 04 21 */	bctrl 
/* 8025BC8C 00258BCC  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 8025BC90 00258BD0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8025BC94 00258BD4  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 8025BC98 00258BD8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8025BC9C 00258BDC  EC 3A 08 28 */	fsubs f1, f26, f1
/* 8025BCA0 00258BE0  EC 5B 00 28 */	fsubs f2, f27, f0
/* 8025BCA4 00258BE4  4B DD 94 65 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8025BCA8 00258BE8  48 1B 5F 29 */	bl roundAng__Ff
/* 8025BCAC 00258BEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BCB0 00258BF0  FF 40 08 90 */	fmr f26, f1
/* 8025BCB4 00258BF4  7F E3 FB 78 */	mr r3, r31
/* 8025BCB8 00258BF8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025BCBC 00258BFC  7D 89 03 A6 */	mtctr r12
/* 8025BCC0 00258C00  4E 80 04 21 */	bctrl 
/* 8025BCC4 00258C04  FC 40 08 90 */	fmr f2, f1
/* 8025BCC8 00258C08  FC 20 D0 90 */	fmr f1, f26
/* 8025BCCC 00258C0C  48 1B 5F 31 */	bl angDist__Fff
/* 8025BCD0 00258C10  FF E0 08 90 */	fmr f31, f1
/* 8025BCD4 00258C14  C0 02 C8 94 */	lfs f0, lbl_8051ABF4@sda21(r2)
/* 8025BCD8 00258C18  C0 22 C8 90 */	lfs f1, lbl_8051ABF0@sda21(r2)
/* 8025BCDC 00258C1C  EC 00 07 72 */	fmuls f0, f0, f29
/* 8025BCE0 00258C20  EF 9F 07 B2 */	fmuls f28, f31, f30
/* 8025BCE4 00258C24  EC 21 00 32 */	fmuls f1, f1, f0
/* 8025BCE8 00258C28  FC 00 E2 10 */	fabs f0, f28
/* 8025BCEC 00258C2C  FC 00 00 18 */	frsp f0, f0
/* 8025BCF0 00258C30  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8025BCF4 00258C34  40 81 00 1C */	ble .L_8025BD10
/* 8025BCF8 00258C38  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025BCFC 00258C3C  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8025BD00 00258C40  40 81 00 0C */	ble .L_8025BD0C
/* 8025BD04 00258C44  FF 80 08 90 */	fmr f28, f1
/* 8025BD08 00258C48  48 00 00 08 */	b .L_8025BD10
.L_8025BD0C:
/* 8025BD0C 00258C4C  FF 80 08 50 */	fneg f28, f1
.L_8025BD10:
/* 8025BD10 00258C50  7F E3 FB 78 */	mr r3, r31
/* 8025BD14 00258C54  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BD18 00258C58  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025BD1C 00258C5C  7D 89 03 A6 */	mtctr r12
/* 8025BD20 00258C60  4E 80 04 21 */	bctrl 
/* 8025BD24 00258C64  EC 3C 08 2A */	fadds f1, f28, f1
/* 8025BD28 00258C68  48 1B 5E A9 */	bl roundAng__Ff
/* 8025BD2C 00258C6C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8025BD30 00258C70  7F E3 FB 78 */	mr r3, r31
/* 8025BD34 00258C74  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8025BD38 00258C78  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 8025BD3C 00258C7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BD40 00258C80  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025BD44 00258C84  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025BD48 00258C88  C3 A4 02 E4 */	lfs f29, 0x2e4(r4)
/* 8025BD4C 00258C8C  7D 89 03 A6 */	mtctr r12
/* 8025BD50 00258C90  4E 80 04 21 */	bctrl 
/* 8025BD54 00258C94  4B E7 3A C9 */	bl sin
/* 8025BD58 00258C98  7F E3 FB 78 */	mr r3, r31
/* 8025BD5C 00258C9C  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8025BD60 00258CA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BD64 00258CA4  FF 40 08 18 */	frsp f26, f1
/* 8025BD68 00258CA8  C3 DF 01 D8 */	lfs f30, 0x1d8(r31)
/* 8025BD6C 00258CAC  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8025BD70 00258CB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8025BD74 00258CB4  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 8025BD78 00258CB8  D3 C1 00 78 */	stfs f30, 0x78(r1)
/* 8025BD7C 00258CBC  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 8025BD80 00258CC0  7D 89 03 A6 */	mtctr r12
/* 8025BD84 00258CC4  4E 80 04 21 */	bctrl 
/* 8025BD88 00258CC8  4B E7 35 2D */	bl cos
/* 8025BD8C 00258CCC  EC 1D 06 B2 */	fmuls f0, f29, f26
/* 8025BD90 00258CD0  7F E4 FB 78 */	mr r4, r31
/* 8025BD94 00258CD4  FC 20 08 18 */	frsp f1, f1
/* 8025BD98 00258CD8  38 61 00 14 */	addi r3, r1, 0x14
/* 8025BD9C 00258CDC  3B A0 00 00 */	li r29, 0
/* 8025BDA0 00258CE0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025BDA4 00258CE4  EC 1D 00 72 */	fmuls f0, f29, f1
/* 8025BDA8 00258CE8  D3 DF 01 D8 */	stfs f30, 0x1d8(r31)
/* 8025BDAC 00258CEC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025BDB0 00258CF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BDB4 00258CF4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8025BDB8 00258CF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BDBC 00258CFC  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 8025BDC0 00258D00  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 8025BDC4 00258D04  7D 89 03 A6 */	mtctr r12
/* 8025BDC8 00258D08  4E 80 04 21 */	bctrl 
/* 8025BDCC 00258D0C  7F 84 E3 78 */	mr r4, r28
/* 8025BDD0 00258D10  38 61 00 08 */	addi r3, r1, 8
/* 8025BDD4 00258D14  81 9C 00 00 */	lwz r12, 0(r28)
/* 8025BDD8 00258D18  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 8025BDDC 00258D1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BDE0 00258D20  7D 89 03 A6 */	mtctr r12
/* 8025BDE4 00258D24  4E 80 04 21 */	bctrl 
/* 8025BDE8 00258D28  7F E4 FB 78 */	mr r4, r31
/* 8025BDEC 00258D2C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8025BDF0 00258D30  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BDF4 00258D34  38 61 00 2C */	addi r3, r1, 0x2c
/* 8025BDF8 00258D38  EF 40 F0 28 */	fsubs f26, f0, f30
/* 8025BDFC 00258D3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BE00 00258D40  7D 89 03 A6 */	mtctr r12
/* 8025BE04 00258D44  4E 80 04 21 */	bctrl 
/* 8025BE08 00258D48  7F 84 E3 78 */	mr r4, r28
/* 8025BE0C 00258D4C  38 61 00 20 */	addi r3, r1, 0x20
/* 8025BE10 00258D50  81 9C 00 00 */	lwz r12, 0(r28)
/* 8025BE14 00258D54  C3 C1 00 30 */	lfs f30, 0x30(r1)
/* 8025BE18 00258D58  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BE1C 00258D5C  7D 89 03 A6 */	mtctr r12
/* 8025BE20 00258D60  4E 80 04 21 */	bctrl 
/* 8025BE24 00258D64  7F E4 FB 78 */	mr r4, r31
/* 8025BE28 00258D68  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8025BE2C 00258D6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BE30 00258D70  38 61 00 44 */	addi r3, r1, 0x44
/* 8025BE34 00258D74  EF 60 F0 28 */	fsubs f27, f0, f30
/* 8025BE38 00258D78  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BE3C 00258D7C  7D 89 03 A6 */	mtctr r12
/* 8025BE40 00258D80  4E 80 04 21 */	bctrl 
/* 8025BE44 00258D84  7F 84 E3 78 */	mr r4, r28
/* 8025BE48 00258D88  38 61 00 38 */	addi r3, r1, 0x38
/* 8025BE4C 00258D8C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8025BE50 00258D90  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 8025BE54 00258D94  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BE58 00258D98  7D 89 03 A6 */	mtctr r12
/* 8025BE5C 00258D9C  4E 80 04 21 */	bctrl 
/* 8025BE60 00258DA0  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 8025BE64 00258DA4  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8025BE68 00258DA8  EC 1D 07 72 */	fmuls f0, f29, f29
/* 8025BE6C 00258DAC  EC 42 F0 28 */	fsubs f2, f2, f30
/* 8025BE70 00258DB0  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 8025BE74 00258DB4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8025BE78 00258DB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025BE7C 00258DBC  40 80 00 2C */	bge .L_8025BEA8
/* 8025BE80 00258DC0  C0 02 C8 94 */	lfs f0, lbl_8051ABF4@sda21(r2)
/* 8025BE84 00258DC4  FC 40 FA 10 */	fabs f2, f31
/* 8025BE88 00258DC8  C0 22 C8 90 */	lfs f1, lbl_8051ABF0@sda21(r2)
/* 8025BE8C 00258DCC  EC 00 07 32 */	fmuls f0, f0, f28
/* 8025BE90 00258DD0  FC 40 10 18 */	frsp f2, f2
/* 8025BE94 00258DD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8025BE98 00258DD8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8025BE9C 00258DDC  4C 40 13 82 */	cror 2, 0, 2
/* 8025BEA0 00258DE0  40 82 00 08 */	bne .L_8025BEA8
/* 8025BEA4 00258DE4  3B A0 00 01 */	li r29, 1
.L_8025BEA8:
/* 8025BEA8 00258DE8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8025BEAC 00258DEC  41 82 00 18 */	beq .L_8025BEC4
/* 8025BEB0 00258DF0  38 00 00 0B */	li r0, 0xb
/* 8025BEB4 00258DF4  7F E3 FB 78 */	mr r3, r31
/* 8025BEB8 00258DF8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025BEBC 00258DFC  4B EA 93 E5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025BEC0 00258E00  48 00 01 04 */	b .L_8025BFC4
.L_8025BEC4:
/* 8025BEC4 00258E04  7F E4 FB 78 */	mr r4, r31
/* 8025BEC8 00258E08  38 61 00 68 */	addi r3, r1, 0x68
/* 8025BECC 00258E0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025BED0 00258E10  C3 5F 01 98 */	lfs f26, 0x198(r31)
/* 8025BED4 00258E14  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025BED8 00258E18  C3 7F 01 9C */	lfs f27, 0x19c(r31)
/* 8025BEDC 00258E1C  C3 9F 01 A0 */	lfs f28, 0x1a0(r31)
/* 8025BEE0 00258E20  7D 89 03 A6 */	mtctr r12
/* 8025BEE4 00258E24  4E 80 04 21 */	bctrl 
/* 8025BEE8 00258E28  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 8025BEEC 00258E2C  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 8025BEF0 00258E30  EC 60 D8 28 */	fsubs f3, f0, f27
/* 8025BEF4 00258E34  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 8025BEF8 00258E38  EC 42 D0 28 */	fsubs f2, f2, f26
/* 8025BEFC 00258E3C  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025BF00 00258E40  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8025BF04 00258E44  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8025BF08 00258E48  EC 81 00 72 */	fmuls f4, f1, f1
/* 8025BF0C 00258E4C  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 8025BF10 00258E50  EC 24 08 2A */	fadds f1, f4, f1
/* 8025BF14 00258E54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025BF18 00258E58  40 81 00 14 */	ble .L_8025BF2C
/* 8025BF1C 00258E5C  40 81 00 14 */	ble .L_8025BF30
/* 8025BF20 00258E60  FC 00 08 34 */	frsqrte f0, f1
/* 8025BF24 00258E64  EC 20 00 72 */	fmuls f1, f0, f1
/* 8025BF28 00258E68  48 00 00 08 */	b .L_8025BF30
.L_8025BF2C:
/* 8025BF2C 00258E6C  FC 20 00 90 */	fmr f1, f0
.L_8025BF30:
/* 8025BF30 00258E70  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8025BF34 00258E74  C0 04 03 5C */	lfs f0, 0x35c(r4)
/* 8025BF38 00258E78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025BF3C 00258E7C  40 81 00 18 */	ble .L_8025BF54
/* 8025BF40 00258E80  38 00 00 09 */	li r0, 9
/* 8025BF44 00258E84  7F E3 FB 78 */	mr r3, r31
/* 8025BF48 00258E88  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025BF4C 00258E8C  4B EA 93 55 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025BF50 00258E90  48 00 00 74 */	b .L_8025BFC4
.L_8025BF54:
/* 8025BF54 00258E94  C0 24 05 8C */	lfs f1, 0x58c(r4)
/* 8025BF58 00258E98  7F E3 FB 78 */	mr r3, r31
/* 8025BF5C 00258E9C  C0 44 05 64 */	lfs f2, 0x564(r4)
/* 8025BF60 00258EA0  38 80 00 00 */	li r4, 0
/* 8025BF64 00258EA4  38 A0 00 00 */	li r5, 0
/* 8025BF68 00258EA8  38 C0 00 00 */	li r6, 0
/* 8025BF6C 00258EAC  4B EB 70 E5 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025BF70 00258EB0  28 03 00 00 */	cmplwi r3, 0
/* 8025BF74 00258EB4  41 82 00 50 */	beq .L_8025BFC4
/* 8025BF78 00258EB8  38 00 00 0B */	li r0, 0xb
/* 8025BF7C 00258EBC  7F E3 FB 78 */	mr r3, r31
/* 8025BF80 00258EC0  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025BF84 00258EC4  4B EA 93 1D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025BF88 00258EC8  48 00 00 3C */	b .L_8025BFC4
.L_8025BF8C:
/* 8025BF8C 00258ECC  7F E3 FB 78 */	mr r3, r31
/* 8025BF90 00258ED0  4B FF E6 A5 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025BF94 00258ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025BF98 00258ED8  41 82 00 1C */	beq .L_8025BFB4
/* 8025BF9C 00258EDC  7F E3 FB 78 */	mr r3, r31
/* 8025BFA0 00258EE0  4B FF E4 E1 */	bl checkBreakOrMove__Q34Game4Ujib3ObjFv
/* 8025BFA4 00258EE4  90 7F 02 C4 */	stw r3, 0x2c4(r31)
/* 8025BFA8 00258EE8  7F E3 FB 78 */	mr r3, r31
/* 8025BFAC 00258EEC  4B EA 92 F5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025BFB0 00258EF0  48 00 00 14 */	b .L_8025BFC4
.L_8025BFB4:
/* 8025BFB4 00258EF4  38 00 00 09 */	li r0, 9
/* 8025BFB8 00258EF8  7F E3 FB 78 */	mr r3, r31
/* 8025BFBC 00258EFC  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025BFC0 00258F00  4B EA 92 E1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8025BFC4:
/* 8025BFC4 00258F04  7F E3 FB 78 */	mr r3, r31
/* 8025BFC8 00258F08  4B FF E0 5D */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025BFCC 00258F0C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025BFD0 00258F10  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025BFD4 00258F14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025BFD8 00258F18  4C 40 13 82 */	cror 2, 0, 2
/* 8025BFDC 00258F1C  40 82 00 28 */	bne .L_8025C004
/* 8025BFE0 00258F20  7F C3 F3 78 */	mr r3, r30
/* 8025BFE4 00258F24  7F E4 FB 78 */	mr r4, r31
/* 8025BFE8 00258F28  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025BFEC 00258F2C  38 A0 00 00 */	li r5, 0
/* 8025BFF0 00258F30  38 C0 00 00 */	li r6, 0
/* 8025BFF4 00258F34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025BFF8 00258F38  7D 89 03 A6 */	mtctr r12
/* 8025BFFC 00258F3C  4E 80 04 21 */	bctrl 
/* 8025C000 00258F40  48 00 00 40 */	b .L_8025C040
.L_8025C004:
/* 8025C004 00258F44  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C008 00258F48  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C00C 00258F4C  28 00 00 00 */	cmplwi r0, 0
/* 8025C010 00258F50  41 82 00 30 */	beq .L_8025C040
/* 8025C014 00258F54  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C018 00258F58  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C01C 00258F5C  40 82 00 24 */	bne .L_8025C040
/* 8025C020 00258F60  7F C3 F3 78 */	mr r3, r30
/* 8025C024 00258F64  7F E4 FB 78 */	mr r4, r31
/* 8025C028 00258F68  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C02C 00258F6C  38 C0 00 00 */	li r6, 0
/* 8025C030 00258F70  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 8025C034 00258F74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C038 00258F78  7D 89 03 A6 */	mtctr r12
/* 8025C03C 00258F7C  4E 80 04 21 */	bctrl 
.L_8025C040:
/* 8025C040 00258F80  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8025C044 00258F84  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8025C048 00258F88  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8025C04C 00258F8C  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 8025C050 00258F90  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 8025C054 00258F94  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 8025C058 00258F98  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 8025C05C 00258F9C  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 8025C060 00258FA0  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 8025C064 00258FA4  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 8025C068 00258FA8  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 8025C06C 00258FAC  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 8025C070 00258FB0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8025C074 00258FB4  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8025C078 00258FB8  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8025C07C 00258FBC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8025C080 00258FC0  83 81 00 80 */	lwz r28, 0x80(r1)
/* 8025C084 00258FC4  7C 08 03 A6 */	mtlr r0
/* 8025C088 00258FC8  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8025C08C 00258FCC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBase, global
/* 8025C090 00258FD0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025C094 00258FD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C098 00258FD8  7C 08 02 A6 */	mflr r0
/* 8025C09C 00258FDC  7C 83 23 78 */	mr r3, r4
/* 8025C0A0 00258FE0  38 80 00 04 */	li r4, 4
/* 8025C0A4 00258FE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C0A8 00258FE8  38 00 FF FF */	li r0, -1
/* 8025C0AC 00258FEC  38 A0 00 00 */	li r5, 0
/* 8025C0B0 00258FF0  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8025C0B4 00258FF4  4B EA 8F 51 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025C0B8 00258FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C0BC 00258FFC  7C 08 03 A6 */	mtlr r0
/* 8025C0C0 00259000  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C0C4 00259004  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBase, global
/* 8025C0C8 00259008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C0CC 0025900C  7C 08 02 A6 */	mflr r0
/* 8025C0D0 00259010  38 A0 00 00 */	li r5, 0
/* 8025C0D4 00259014  38 C0 00 00 */	li r6, 0
/* 8025C0D8 00259018  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C0DC 0025901C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025C0E0 00259020  7C 9F 23 78 */	mr r31, r4
/* 8025C0E4 00259024  38 80 00 00 */	li r4, 0
/* 8025C0E8 00259028  93 C1 00 08 */	stw r30, 8(r1)
/* 8025C0EC 0025902C  7C 7E 1B 78 */	mr r30, r3
/* 8025C0F0 00259030  7F E3 FB 78 */	mr r3, r31
/* 8025C0F4 00259034  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8025C0F8 00259038  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8025C0FC 0025903C  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8025C100 00259040  4B EB 6F 51 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025C104 00259044  28 03 00 00 */	cmplwi r3, 0
/* 8025C108 00259048  41 82 00 18 */	beq .L_8025C120
/* 8025C10C 0025904C  38 00 00 05 */	li r0, 5
/* 8025C110 00259050  7F E3 FB 78 */	mr r3, r31
/* 8025C114 00259054  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C118 00259058  4B EA 91 89 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C11C 0025905C  48 00 00 48 */	b .L_8025C164
.L_8025C120:
/* 8025C120 00259060  7F E3 FB 78 */	mr r3, r31
/* 8025C124 00259064  4B FF E5 11 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025C128 00259068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C12C 0025906C  41 82 00 28 */	beq .L_8025C154
/* 8025C130 00259070  7F E3 FB 78 */	mr r3, r31
/* 8025C134 00259074  4B FF E5 29 */	bl moveBridgeSide__Q34Game4Ujib3ObjFv
/* 8025C138 00259078  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C13C 0025907C  41 82 00 28 */	beq .L_8025C164
/* 8025C140 00259080  38 00 00 07 */	li r0, 7
/* 8025C144 00259084  7F E3 FB 78 */	mr r3, r31
/* 8025C148 00259088  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C14C 0025908C  4B EA 91 55 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C150 00259090  48 00 00 14 */	b .L_8025C164
.L_8025C154:
/* 8025C154 00259094  38 00 00 09 */	li r0, 9
/* 8025C158 00259098  7F E3 FB 78 */	mr r3, r31
/* 8025C15C 0025909C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C160 002590A0  4B EA 91 41 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8025C164:
/* 8025C164 002590A4  7F E3 FB 78 */	mr r3, r31
/* 8025C168 002590A8  4B FF DE BD */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025C16C 002590AC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025C170 002590B0  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C174 002590B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C178 002590B8  4C 40 13 82 */	cror 2, 0, 2
/* 8025C17C 002590BC  40 82 00 28 */	bne .L_8025C1A4
/* 8025C180 002590C0  7F C3 F3 78 */	mr r3, r30
/* 8025C184 002590C4  7F E4 FB 78 */	mr r4, r31
/* 8025C188 002590C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C18C 002590CC  38 A0 00 00 */	li r5, 0
/* 8025C190 002590D0  38 C0 00 00 */	li r6, 0
/* 8025C194 002590D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C198 002590D8  7D 89 03 A6 */	mtctr r12
/* 8025C19C 002590DC  4E 80 04 21 */	bctrl 
/* 8025C1A0 002590E0  48 00 00 40 */	b .L_8025C1E0
.L_8025C1A4:
/* 8025C1A4 002590E4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C1A8 002590E8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C1AC 002590EC  28 00 00 00 */	cmplwi r0, 0
/* 8025C1B0 002590F0  41 82 00 30 */	beq .L_8025C1E0
/* 8025C1B4 002590F4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C1B8 002590F8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C1BC 002590FC  40 82 00 24 */	bne .L_8025C1E0
/* 8025C1C0 00259100  7F C3 F3 78 */	mr r3, r30
/* 8025C1C4 00259104  7F E4 FB 78 */	mr r4, r31
/* 8025C1C8 00259108  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C1CC 0025910C  38 C0 00 00 */	li r6, 0
/* 8025C1D0 00259110  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 8025C1D4 00259114  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C1D8 00259118  7D 89 03 A6 */	mtctr r12
/* 8025C1DC 0025911C  4E 80 04 21 */	bctrl 
.L_8025C1E0:
/* 8025C1E0 00259120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C1E4 00259124  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025C1E8 00259128  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025C1EC 0025912C  7C 08 03 A6 */	mtlr r0
/* 8025C1F0 00259130  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C1F4 00259134  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBase, global
/* 8025C1F8 00259138  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib13StateMoveSideFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025C1FC 0025913C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C200 00259140  7C 08 02 A6 */	mflr r0
/* 8025C204 00259144  7C 83 23 78 */	mr r3, r4
/* 8025C208 00259148  38 80 00 04 */	li r4, 4
/* 8025C20C 0025914C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C210 00259150  38 00 FF FF */	li r0, -1
/* 8025C214 00259154  38 A0 00 00 */	li r5, 0
/* 8025C218 00259158  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8025C21C 0025915C  4B EA 8D E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025C220 00259160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C224 00259164  7C 08 03 A6 */	mtlr r0
/* 8025C228 00259168  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C22C 0025916C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBase, global
/* 8025C230 00259170  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C234 00259174  7C 08 02 A6 */	mflr r0
/* 8025C238 00259178  38 A0 00 00 */	li r5, 0
/* 8025C23C 0025917C  38 C0 00 00 */	li r6, 0
/* 8025C240 00259180  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C244 00259184  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025C248 00259188  7C 9F 23 78 */	mr r31, r4
/* 8025C24C 0025918C  38 80 00 00 */	li r4, 0
/* 8025C250 00259190  93 C1 00 08 */	stw r30, 8(r1)
/* 8025C254 00259194  7C 7E 1B 78 */	mr r30, r3
/* 8025C258 00259198  7F E3 FB 78 */	mr r3, r31
/* 8025C25C 0025919C  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8025C260 002591A0  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8025C264 002591A4  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8025C268 002591A8  4B EB 6D E9 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025C26C 002591AC  28 03 00 00 */	cmplwi r3, 0
/* 8025C270 002591B0  41 82 00 18 */	beq .L_8025C288
/* 8025C274 002591B4  38 00 00 05 */	li r0, 5
/* 8025C278 002591B8  7F E3 FB 78 */	mr r3, r31
/* 8025C27C 002591BC  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C280 002591C0  4B EA 90 21 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C284 002591C4  48 00 00 48 */	b .L_8025C2CC
.L_8025C288:
/* 8025C288 002591C8  7F E3 FB 78 */	mr r3, r31
/* 8025C28C 002591CC  4B FF E3 A9 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025C290 002591D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C294 002591D4  41 82 00 28 */	beq .L_8025C2BC
/* 8025C298 002591D8  7F E3 FB 78 */	mr r3, r31
/* 8025C29C 002591DC  4B FF E6 69 */	bl moveBridgeCentre__Q34Game4Ujib3ObjFv
/* 8025C2A0 002591E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C2A4 002591E4  41 82 00 28 */	beq .L_8025C2CC
/* 8025C2A8 002591E8  38 00 00 08 */	li r0, 8
/* 8025C2AC 002591EC  7F E3 FB 78 */	mr r3, r31
/* 8025C2B0 002591F0  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C2B4 002591F4  4B EA 8F ED */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C2B8 002591F8  48 00 00 14 */	b .L_8025C2CC
.L_8025C2BC:
/* 8025C2BC 002591FC  38 00 00 09 */	li r0, 9
/* 8025C2C0 00259200  7F E3 FB 78 */	mr r3, r31
/* 8025C2C4 00259204  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C2C8 00259208  4B EA 8F D9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8025C2CC:
/* 8025C2CC 0025920C  7F E3 FB 78 */	mr r3, r31
/* 8025C2D0 00259210  4B FF DD 55 */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025C2D4 00259214  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025C2D8 00259218  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C2DC 0025921C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C2E0 00259220  4C 40 13 82 */	cror 2, 0, 2
/* 8025C2E4 00259224  40 82 00 28 */	bne .L_8025C30C
/* 8025C2E8 00259228  7F C3 F3 78 */	mr r3, r30
/* 8025C2EC 0025922C  7F E4 FB 78 */	mr r4, r31
/* 8025C2F0 00259230  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C2F4 00259234  38 A0 00 00 */	li r5, 0
/* 8025C2F8 00259238  38 C0 00 00 */	li r6, 0
/* 8025C2FC 0025923C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C300 00259240  7D 89 03 A6 */	mtctr r12
/* 8025C304 00259244  4E 80 04 21 */	bctrl 
/* 8025C308 00259248  48 00 00 40 */	b .L_8025C348
.L_8025C30C:
/* 8025C30C 0025924C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C310 00259250  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C314 00259254  28 00 00 00 */	cmplwi r0, 0
/* 8025C318 00259258  41 82 00 30 */	beq .L_8025C348
/* 8025C31C 0025925C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C320 00259260  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C324 00259264  40 82 00 24 */	bne .L_8025C348
/* 8025C328 00259268  7F C3 F3 78 */	mr r3, r30
/* 8025C32C 0025926C  7F E4 FB 78 */	mr r4, r31
/* 8025C330 00259270  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C334 00259274  38 C0 00 00 */	li r6, 0
/* 8025C338 00259278  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 8025C33C 0025927C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C340 00259280  7D 89 03 A6 */	mtctr r12
/* 8025C344 00259284  4E 80 04 21 */	bctrl 
.L_8025C348:
/* 8025C348 00259288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C34C 0025928C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025C350 00259290  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025C354 00259294  7C 08 03 A6 */	mtlr r0
/* 8025C358 00259298  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C35C 0025929C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBase, global
/* 8025C360 002592A0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib15StateMoveCentreFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025C364 002592A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C368 002592A8  7C 08 02 A6 */	mflr r0
/* 8025C36C 002592AC  7C 83 23 78 */	mr r3, r4
/* 8025C370 002592B0  38 80 00 04 */	li r4, 4
/* 8025C374 002592B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C378 002592B8  38 00 FF FF */	li r0, -1
/* 8025C37C 002592BC  38 A0 00 00 */	li r5, 0
/* 8025C380 002592C0  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8025C384 002592C4  4B EA 8C 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025C388 002592C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C38C 002592CC  7C 08 03 A6 */	mtlr r0
/* 8025C390 002592D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C394 002592D4  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBase, global
/* 8025C398 002592D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C39C 002592DC  7C 08 02 A6 */	mflr r0
/* 8025C3A0 002592E0  38 A0 00 00 */	li r5, 0
/* 8025C3A4 002592E4  38 C0 00 00 */	li r6, 0
/* 8025C3A8 002592E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C3AC 002592EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025C3B0 002592F0  7C 9F 23 78 */	mr r31, r4
/* 8025C3B4 002592F4  38 80 00 00 */	li r4, 0
/* 8025C3B8 002592F8  93 C1 00 08 */	stw r30, 8(r1)
/* 8025C3BC 002592FC  7C 7E 1B 78 */	mr r30, r3
/* 8025C3C0 00259300  7F E3 FB 78 */	mr r3, r31
/* 8025C3C4 00259304  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8025C3C8 00259308  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8025C3CC 0025930C  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8025C3D0 00259310  4B EB 6C 81 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025C3D4 00259314  28 03 00 00 */	cmplwi r3, 0
/* 8025C3D8 00259318  41 82 00 18 */	beq .L_8025C3F0
/* 8025C3DC 0025931C  38 00 00 05 */	li r0, 5
/* 8025C3E0 00259320  7F E3 FB 78 */	mr r3, r31
/* 8025C3E4 00259324  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C3E8 00259328  4B EA 8E B9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C3EC 0025932C  48 00 00 48 */	b .L_8025C434
.L_8025C3F0:
/* 8025C3F0 00259330  7F E3 FB 78 */	mr r3, r31
/* 8025C3F4 00259334  4B FF E2 41 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025C3F8 00259338  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C3FC 0025933C  41 82 00 28 */	beq .L_8025C424
/* 8025C400 00259340  7F E3 FB 78 */	mr r3, r31
/* 8025C404 00259344  4B FF E7 89 */	bl moveBridgeTop__Q34Game4Ujib3ObjFv
/* 8025C408 00259348  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C40C 0025934C  41 82 00 28 */	beq .L_8025C434
/* 8025C410 00259350  38 00 00 0A */	li r0, 0xa
/* 8025C414 00259354  7F E3 FB 78 */	mr r3, r31
/* 8025C418 00259358  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C41C 0025935C  4B EA 8E 85 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C420 00259360  48 00 00 14 */	b .L_8025C434
.L_8025C424:
/* 8025C424 00259364  38 00 00 09 */	li r0, 9
/* 8025C428 00259368  7F E3 FB 78 */	mr r3, r31
/* 8025C42C 0025936C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C430 00259370  4B EA 8E 71 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8025C434:
/* 8025C434 00259374  7F E3 FB 78 */	mr r3, r31
/* 8025C438 00259378  4B FF DB ED */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025C43C 0025937C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025C440 00259380  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C444 00259384  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C448 00259388  4C 40 13 82 */	cror 2, 0, 2
/* 8025C44C 0025938C  40 82 00 28 */	bne .L_8025C474
/* 8025C450 00259390  7F C3 F3 78 */	mr r3, r30
/* 8025C454 00259394  7F E4 FB 78 */	mr r4, r31
/* 8025C458 00259398  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C45C 0025939C  38 A0 00 00 */	li r5, 0
/* 8025C460 002593A0  38 C0 00 00 */	li r6, 0
/* 8025C464 002593A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C468 002593A8  7D 89 03 A6 */	mtctr r12
/* 8025C46C 002593AC  4E 80 04 21 */	bctrl 
/* 8025C470 002593B0  48 00 00 40 */	b .L_8025C4B0
.L_8025C474:
/* 8025C474 002593B4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C478 002593B8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C47C 002593BC  28 00 00 00 */	cmplwi r0, 0
/* 8025C480 002593C0  41 82 00 30 */	beq .L_8025C4B0
/* 8025C484 002593C4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C488 002593C8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C48C 002593CC  40 82 00 24 */	bne .L_8025C4B0
/* 8025C490 002593D0  7F C3 F3 78 */	mr r3, r30
/* 8025C494 002593D4  7F E4 FB 78 */	mr r4, r31
/* 8025C498 002593D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C49C 002593DC  38 C0 00 00 */	li r6, 0
/* 8025C4A0 002593E0  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 8025C4A4 002593E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C4A8 002593E8  7D 89 03 A6 */	mtctr r12
/* 8025C4AC 002593EC  4E 80 04 21 */	bctrl 
.L_8025C4B0:
/* 8025C4B0 002593F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C4B4 002593F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025C4B8 002593F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025C4BC 002593FC  7C 08 03 A6 */	mtlr r0
/* 8025C4C0 00259400  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C4C4 00259404  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBase, global
/* 8025C4C8 00259408  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib12StateMoveTopFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025C4CC 0025940C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C4D0 00259410  7C 08 02 A6 */	mflr r0
/* 8025C4D4 00259414  7C 83 23 78 */	mr r3, r4
/* 8025C4D8 00259418  38 80 00 04 */	li r4, 4
/* 8025C4DC 0025941C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C4E0 00259420  38 00 FF FF */	li r0, -1
/* 8025C4E4 00259424  38 A0 00 00 */	li r5, 0
/* 8025C4E8 00259428  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 8025C4EC 0025942C  4B EA 8B 19 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025C4F0 00259430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C4F4 00259434  7C 08 03 A6 */	mtlr r0
/* 8025C4F8 00259438  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C4FC 0025943C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBase, global
/* 8025C500 00259440  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8025C504 00259444  7C 08 02 A6 */	mflr r0
/* 8025C508 00259448  90 01 00 64 */	stw r0, 0x64(r1)
/* 8025C50C 0025944C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8025C510 00259450  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8025C514 00259454  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8025C518 00259458  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8025C51C 0025945C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8025C520 00259460  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8025C524 00259464  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8025C528 00259468  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8025C52C 0025946C  7C 9F 23 78 */	mr r31, r4
/* 8025C530 00259470  7C 7E 1B 78 */	mr r30, r3
/* 8025C534 00259474  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 8025C538 00259478  38 81 00 14 */	addi r4, r1, 0x14
/* 8025C53C 0025947C  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 8025C540 00259480  7F E3 FB 78 */	mr r3, r31
/* 8025C544 00259484  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8025C548 00259488  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8025C54C 0025948C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8025C550 00259490  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8025C554 00259494  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8025C558 00259498  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 8025C55C 0025949C  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 8025C560 002594A0  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 8025C564 002594A4  4B EB 90 79 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 8025C568 002594A8  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8025C56C 002594AC  7F E3 FB 78 */	mr r3, r31
/* 8025C570 002594B0  38 80 00 00 */	li r4, 0
/* 8025C574 002594B4  38 A0 00 00 */	li r5, 0
/* 8025C578 002594B8  C0 27 05 64 */	lfs f1, 0x564(r7)
/* 8025C57C 002594BC  38 C0 00 00 */	li r6, 0
/* 8025C580 002594C0  C0 47 05 8C */	lfs f2, 0x58c(r7)
/* 8025C584 002594C4  4B EB 6A CD */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025C588 002594C8  28 03 00 00 */	cmplwi r3, 0
/* 8025C58C 002594CC  41 82 00 18 */	beq .L_8025C5A4
/* 8025C590 002594D0  38 00 00 0B */	li r0, 0xb
/* 8025C594 002594D4  7F E3 FB 78 */	mr r3, r31
/* 8025C598 002594D8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C59C 002594DC  4B EA 8D 05 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8025C5A0 002594E0  48 00 00 90 */	b .L_8025C630
.L_8025C5A4:
/* 8025C5A4 002594E4  7F E4 FB 78 */	mr r4, r31
/* 8025C5A8 002594E8  38 61 00 08 */	addi r3, r1, 8
/* 8025C5AC 002594EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025C5B0 002594F0  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 8025C5B4 002594F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025C5B8 002594F8  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 8025C5BC 002594FC  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 8025C5C0 00259500  7D 89 03 A6 */	mtctr r12
/* 8025C5C4 00259504  4E 80 04 21 */	bctrl 
/* 8025C5C8 00259508  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8025C5CC 0025950C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8025C5D0 00259510  EC 60 F0 28 */	fsubs f3, f0, f30
/* 8025C5D4 00259514  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8025C5D8 00259518  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8025C5DC 0025951C  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C5E0 00259520  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8025C5E4 00259524  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8025C5E8 00259528  EC 81 00 72 */	fmuls f4, f1, f1
/* 8025C5EC 0025952C  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 8025C5F0 00259530  EC 24 08 2A */	fadds f1, f4, f1
/* 8025C5F4 00259534  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C5F8 00259538  40 81 00 14 */	ble .L_8025C60C
/* 8025C5FC 0025953C  40 81 00 14 */	ble .L_8025C610
/* 8025C600 00259540  FC 00 08 34 */	frsqrte f0, f1
/* 8025C604 00259544  EC 20 00 72 */	fmuls f1, f0, f1
/* 8025C608 00259548  48 00 00 08 */	b .L_8025C610
.L_8025C60C:
/* 8025C60C 0025954C  FC 20 00 90 */	fmr f1, f0
.L_8025C610:
/* 8025C610 00259550  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025C614 00259554  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 8025C618 00259558  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C61C 0025955C  40 80 00 14 */	bge .L_8025C630
/* 8025C620 00259560  38 00 00 04 */	li r0, 4
/* 8025C624 00259564  7F E3 FB 78 */	mr r3, r31
/* 8025C628 00259568  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C62C 0025956C  4B EA 8C 75 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8025C630:
/* 8025C630 00259570  7F E3 FB 78 */	mr r3, r31
/* 8025C634 00259574  4B FF D9 F1 */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025C638 00259578  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025C63C 0025957C  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C640 00259580  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C644 00259584  4C 40 13 82 */	cror 2, 0, 2
/* 8025C648 00259588  40 82 00 28 */	bne .L_8025C670
/* 8025C64C 0025958C  7F C3 F3 78 */	mr r3, r30
/* 8025C650 00259590  7F E4 FB 78 */	mr r4, r31
/* 8025C654 00259594  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C658 00259598  38 A0 00 00 */	li r5, 0
/* 8025C65C 0025959C  38 C0 00 00 */	li r6, 0
/* 8025C660 002595A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C664 002595A4  7D 89 03 A6 */	mtctr r12
/* 8025C668 002595A8  4E 80 04 21 */	bctrl 
/* 8025C66C 002595AC  48 00 00 40 */	b .L_8025C6AC
.L_8025C670:
/* 8025C670 002595B0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C674 002595B4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C678 002595B8  28 00 00 00 */	cmplwi r0, 0
/* 8025C67C 002595BC  41 82 00 30 */	beq .L_8025C6AC
/* 8025C680 002595C0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C684 002595C4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C688 002595C8  40 82 00 24 */	bne .L_8025C6AC
/* 8025C68C 002595CC  7F C3 F3 78 */	mr r3, r30
/* 8025C690 002595D0  7F E4 FB 78 */	mr r4, r31
/* 8025C694 002595D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C698 002595D8  38 C0 00 00 */	li r6, 0
/* 8025C69C 002595DC  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 8025C6A0 002595E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C6A4 002595E4  7D 89 03 A6 */	mtctr r12
/* 8025C6A8 002595E8  4E 80 04 21 */	bctrl 
.L_8025C6AC:
/* 8025C6AC 002595EC  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8025C6B0 002595F0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8025C6B4 002595F4  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8025C6B8 002595F8  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8025C6BC 002595FC  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8025C6C0 00259600  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8025C6C4 00259604  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8025C6C8 00259608  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8025C6CC 0025960C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8025C6D0 00259610  7C 08 03 A6 */	mtlr r0
/* 8025C6D4 00259614  38 21 00 60 */	addi r1, r1, 0x60
/* 8025C6D8 00259618  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBase, global
/* 8025C6DC 0025961C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib11StateGoHomeFPQ24Game9EnemyBase

.fn init__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025C6E0 00259620  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C6E4 00259624  7C 08 02 A6 */	mflr r0
/* 8025C6E8 00259628  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C6EC 0025962C  38 A0 00 00 */	li r5, 0
/* 8025C6F0 00259630  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C6F4 00259634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025C6F8 00259638  7C 9F 23 78 */	mr r31, r4
/* 8025C6FC 0025963C  38 80 00 05 */	li r4, 5
/* 8025C700 00259640  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8025C704 00259644  7F E3 FB 78 */	mr r3, r31
/* 8025C708 00259648  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8025C70C 0025964C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8025C710 00259650  4B EA 88 F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025C714 00259654  38 00 FF FF */	li r0, -1
/* 8025C718 00259658  7F E3 FB 78 */	mr r3, r31
/* 8025C71C 0025965C  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C720 00259660  4B FF E8 D1 */	bl createBridgeEffect__Q34Game4Ujib3ObjFv
/* 8025C724 00259664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C728 00259668  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025C72C 0025966C  7C 08 03 A6 */	mtlr r0
/* 8025C730 00259670  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C734 00259674  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBase, global
/* 8025C738 00259678  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C73C 0025967C  7C 08 02 A6 */	mflr r0
/* 8025C740 00259680  38 A0 00 00 */	li r5, 0
/* 8025C744 00259684  38 C0 00 00 */	li r6, 0
/* 8025C748 00259688  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C74C 0025968C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025C750 00259690  7C 9F 23 78 */	mr r31, r4
/* 8025C754 00259694  38 80 00 00 */	li r4, 0
/* 8025C758 00259698  93 C1 00 08 */	stw r30, 8(r1)
/* 8025C75C 0025969C  7C 7E 1B 78 */	mr r30, r3
/* 8025C760 002596A0  7F E3 FB 78 */	mr r3, r31
/* 8025C764 002596A4  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8025C768 002596A8  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8025C76C 002596AC  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8025C770 002596B0  4B EB 68 E1 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8025C774 002596B4  28 03 00 00 */	cmplwi r3, 0
/* 8025C778 002596B8  41 82 00 10 */	beq .L_8025C788
/* 8025C77C 002596BC  38 00 00 05 */	li r0, 5
/* 8025C780 002596C0  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C784 002596C4  48 00 00 44 */	b .L_8025C7C8
.L_8025C788:
/* 8025C788 002596C8  7F E3 FB 78 */	mr r3, r31
/* 8025C78C 002596CC  4B FF DE A9 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025C790 002596D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C794 002596D4  41 82 00 2C */	beq .L_8025C7C0
/* 8025C798 002596D8  7F E3 FB 78 */	mr r3, r31
/* 8025C79C 002596DC  4B FF E3 F1 */	bl moveBridgeTop__Q34Game4Ujib3ObjFv
/* 8025C7A0 002596E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C7A4 002596E4  41 82 00 10 */	beq .L_8025C7B4
/* 8025C7A8 002596E8  38 00 00 0A */	li r0, 0xa
/* 8025C7AC 002596EC  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C7B0 002596F0  48 00 00 18 */	b .L_8025C7C8
.L_8025C7B4:
/* 8025C7B4 002596F4  38 00 00 08 */	li r0, 8
/* 8025C7B8 002596F8  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 8025C7BC 002596FC  48 00 00 0C */	b .L_8025C7C8
.L_8025C7C0:
/* 8025C7C0 00259700  38 00 00 09 */	li r0, 9
/* 8025C7C4 00259704  90 1F 02 C4 */	stw r0, 0x2c4(r31)
.L_8025C7C8:
/* 8025C7C8 00259708  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025C7CC 0025970C  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C7D0 00259710  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C7D4 00259714  4C 40 13 82 */	cror 2, 0, 2
/* 8025C7D8 00259718  40 82 00 28 */	bne .L_8025C800
/* 8025C7DC 0025971C  7F C3 F3 78 */	mr r3, r30
/* 8025C7E0 00259720  7F E4 FB 78 */	mr r4, r31
/* 8025C7E4 00259724  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C7E8 00259728  38 A0 00 00 */	li r5, 0
/* 8025C7EC 0025972C  38 C0 00 00 */	li r6, 0
/* 8025C7F0 00259730  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C7F4 00259734  7D 89 03 A6 */	mtctr r12
/* 8025C7F8 00259738  4E 80 04 21 */	bctrl 
/* 8025C7FC 0025973C  48 00 00 64 */	b .L_8025C860
.L_8025C800:
/* 8025C800 00259740  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C804 00259744  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C808 00259748  28 00 00 00 */	cmplwi r0, 0
/* 8025C80C 0025974C  41 82 00 54 */	beq .L_8025C860
/* 8025C810 00259750  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C814 00259754  28 00 00 02 */	cmplwi r0, 2
/* 8025C818 00259758  40 82 00 20 */	bne .L_8025C838
/* 8025C81C 0025975C  7F E3 FB 78 */	mr r3, r31
/* 8025C820 00259760  4B FF DE 15 */	bl isBreakBridge__Q34Game4Ujib3ObjFv
/* 8025C824 00259764  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8025C828 00259768  41 82 00 38 */	beq .L_8025C860
/* 8025C82C 0025976C  7F E3 FB 78 */	mr r3, r31
/* 8025C830 00259770  4B FF E6 4D */	bl breakTargetBridge__Q34Game4Ujib3ObjFv
/* 8025C834 00259774  48 00 00 2C */	b .L_8025C860
.L_8025C838:
/* 8025C838 00259778  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C83C 0025977C  40 82 00 24 */	bne .L_8025C860
/* 8025C840 00259780  7F C3 F3 78 */	mr r3, r30
/* 8025C844 00259784  7F E4 FB 78 */	mr r4, r31
/* 8025C848 00259788  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C84C 0025978C  38 C0 00 00 */	li r6, 0
/* 8025C850 00259790  80 BF 02 C4 */	lwz r5, 0x2c4(r31)
/* 8025C854 00259794  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C858 00259798  7D 89 03 A6 */	mtctr r12
/* 8025C85C 0025979C  4E 80 04 21 */	bctrl 
.L_8025C860:
/* 8025C860 002597A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C864 002597A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025C868 002597A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025C86C 002597AC  7C 08 03 A6 */	mtlr r0
/* 8025C870 002597B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C874 002597B4  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBase, global
/* 8025C878 002597B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib12StateAttack1FPQ24Game9EnemyBase

.fn init__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025C87C 002597BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C880 002597C0  7C 08 02 A6 */	mflr r0
/* 8025C884 002597C4  7C 83 23 78 */	mr r3, r4
/* 8025C888 002597C8  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C88C 002597CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C890 002597D0  38 80 00 06 */	li r4, 6
/* 8025C894 002597D4  38 A0 00 00 */	li r5, 0
/* 8025C898 002597D8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8025C89C 002597DC  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8025C8A0 002597E0  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8025C8A4 002597E4  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 8025C8A8 002597E8  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 8025C8AC 002597EC  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 8025C8B0 002597F0  4B EA 87 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025C8B4 002597F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C8B8 002597F8  7C 08 03 A6 */	mtlr r0
/* 8025C8BC 002597FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C8C0 00259800  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBase, global
/* 8025C8C4 00259804  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8025C8C8 00259808  7C 08 02 A6 */	mflr r0
/* 8025C8CC 0025980C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8025C8D0 00259810  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8025C8D4 00259814  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8025C8D8 00259818  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8025C8DC 0025981C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8025C8E0 00259820  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8025C8E4 00259824  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8025C8E8 00259828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025C8EC 0025982C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8025C8F0 00259830  7C 9F 23 78 */	mr r31, r4
/* 8025C8F4 00259834  7C 7E 1B 78 */	mr r30, r3
/* 8025C8F8 00259838  7F E3 FB 78 */	mr r3, r31
/* 8025C8FC 0025983C  4B FF D7 29 */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025C900 00259840  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025C904 00259844  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025C908 00259848  28 00 00 00 */	cmplwi r0, 0
/* 8025C90C 0025984C  41 82 01 A0 */	beq .L_8025CAAC
/* 8025C910 00259850  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025C914 00259854  28 00 00 02 */	cmplwi r0, 2
/* 8025C918 00259858  40 82 00 14 */	bne .L_8025C92C
/* 8025C91C 0025985C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025C920 00259860  64 00 00 20 */	oris r0, r0, 0x20
/* 8025C924 00259864  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025C928 00259868  48 00 01 84 */	b .L_8025CAAC
.L_8025C92C:
/* 8025C92C 0025986C  28 00 00 03 */	cmplwi r0, 3
/* 8025C930 00259870  40 82 00 14 */	bne .L_8025C944
/* 8025C934 00259874  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8025C938 00259878  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8025C93C 0025987C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8025C940 00259880  48 00 01 6C */	b .L_8025CAAC
.L_8025C944:
/* 8025C944 00259884  28 00 00 04 */	cmplwi r0, 4
/* 8025C948 00259888  40 82 00 34 */	bne .L_8025C97C
/* 8025C94C 0025988C  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 8025C950 00259890  7F E3 FB 78 */	mr r3, r31
/* 8025C954 00259894  38 80 00 00 */	li r4, 0
/* 8025C958 00259898  38 A0 00 00 */	li r5, 0
/* 8025C95C 0025989C  C0 26 05 B4 */	lfs f1, 0x5b4(r6)
/* 8025C960 002598A0  C0 46 05 DC */	lfs f2, 0x5dc(r6)
/* 8025C964 002598A4  C0 66 06 04 */	lfs f3, 0x604(r6)
/* 8025C968 002598A8  4B EB 78 F9 */	bl "attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
/* 8025C96C 002598AC  7F E3 FB 78 */	mr r3, r31
/* 8025C970 002598B0  38 80 00 00 */	li r4, 0
/* 8025C974 002598B4  4B EB 71 C1 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 8025C978 002598B8  48 00 01 34 */	b .L_8025CAAC
.L_8025C97C:
/* 8025C97C 002598BC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025C980 002598C0  40 82 01 2C */	bne .L_8025CAAC
/* 8025C984 002598C4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025C988 002598C8  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025C98C 002598CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025C990 002598D0  4C 40 13 82 */	cror 2, 0, 2
/* 8025C994 002598D4  40 82 00 28 */	bne .L_8025C9BC
/* 8025C998 002598D8  7F C3 F3 78 */	mr r3, r30
/* 8025C99C 002598DC  7F E4 FB 78 */	mr r4, r31
/* 8025C9A0 002598E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C9A4 002598E4  38 A0 00 00 */	li r5, 0
/* 8025C9A8 002598E8  38 C0 00 00 */	li r6, 0
/* 8025C9AC 002598EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C9B0 002598F0  7D 89 03 A6 */	mtctr r12
/* 8025C9B4 002598F4  4E 80 04 21 */	bctrl 
/* 8025C9B8 002598F8  48 00 00 F4 */	b .L_8025CAAC
.L_8025C9BC:
/* 8025C9BC 002598FC  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 8025C9C0 00259900  2C 00 00 00 */	cmpwi r0, 0
/* 8025C9C4 00259904  41 82 00 28 */	beq .L_8025C9EC
/* 8025C9C8 00259908  7F C3 F3 78 */	mr r3, r30
/* 8025C9CC 0025990C  7F E4 FB 78 */	mr r4, r31
/* 8025C9D0 00259910  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025C9D4 00259914  38 A0 00 0C */	li r5, 0xc
/* 8025C9D8 00259918  38 C0 00 00 */	li r6, 0
/* 8025C9DC 0025991C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025C9E0 00259920  7D 89 03 A6 */	mtctr r12
/* 8025C9E4 00259924  4E 80 04 21 */	bctrl 
/* 8025C9E8 00259928  48 00 00 C4 */	b .L_8025CAAC
.L_8025C9EC:
/* 8025C9EC 0025992C  7F E4 FB 78 */	mr r4, r31
/* 8025C9F0 00259930  38 61 00 08 */	addi r3, r1, 8
/* 8025C9F4 00259934  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025C9F8 00259938  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 8025C9FC 0025993C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025CA00 00259940  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 8025CA04 00259944  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 8025CA08 00259948  7D 89 03 A6 */	mtctr r12
/* 8025CA0C 0025994C  4E 80 04 21 */	bctrl 
/* 8025CA10 00259950  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8025CA14 00259954  C0 41 00 08 */	lfs f2, 8(r1)
/* 8025CA18 00259958  EC 60 F0 28 */	fsubs f3, f0, f30
/* 8025CA1C 0025995C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8025CA20 00259960  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8025CA24 00259964  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025CA28 00259968  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8025CA2C 0025996C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8025CA30 00259970  EC 81 00 72 */	fmuls f4, f1, f1
/* 8025CA34 00259974  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 8025CA38 00259978  EC 24 08 2A */	fadds f1, f4, f1
/* 8025CA3C 0025997C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025CA40 00259980  40 81 00 14 */	ble .L_8025CA54
/* 8025CA44 00259984  40 81 00 14 */	ble .L_8025CA58
/* 8025CA48 00259988  FC 00 08 34 */	frsqrte f0, f1
/* 8025CA4C 0025998C  EC 20 00 72 */	fmuls f1, f0, f1
/* 8025CA50 00259990  48 00 00 08 */	b .L_8025CA58
.L_8025CA54:
/* 8025CA54 00259994  FC 20 00 90 */	fmr f1, f0
.L_8025CA58:
/* 8025CA58 00259998  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025CA5C 0025999C  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 8025CA60 002599A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025CA64 002599A4  40 81 00 28 */	ble .L_8025CA8C
/* 8025CA68 002599A8  7F C3 F3 78 */	mr r3, r30
/* 8025CA6C 002599AC  7F E4 FB 78 */	mr r4, r31
/* 8025CA70 002599B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025CA74 002599B4  38 A0 00 09 */	li r5, 9
/* 8025CA78 002599B8  38 C0 00 00 */	li r6, 0
/* 8025CA7C 002599BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025CA80 002599C0  7D 89 03 A6 */	mtctr r12
/* 8025CA84 002599C4  4E 80 04 21 */	bctrl 
/* 8025CA88 002599C8  48 00 00 24 */	b .L_8025CAAC
.L_8025CA8C:
/* 8025CA8C 002599CC  7F C3 F3 78 */	mr r3, r30
/* 8025CA90 002599D0  7F E4 FB 78 */	mr r4, r31
/* 8025CA94 002599D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025CA98 002599D8  38 A0 00 05 */	li r5, 5
/* 8025CA9C 002599DC  38 C0 00 00 */	li r6, 0
/* 8025CAA0 002599E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025CAA4 002599E4  7D 89 03 A6 */	mtctr r12
/* 8025CAA8 002599E8  4E 80 04 21 */	bctrl 
.L_8025CAAC:
/* 8025CAAC 002599EC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8025CAB0 002599F0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8025CAB4 002599F4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8025CAB8 002599F8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8025CABC 002599FC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8025CAC0 00259A00  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8025CAC4 00259A04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025CAC8 00259A08  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8025CACC 00259A0C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8025CAD0 00259A10  7C 08 03 A6 */	mtlr r0
/* 8025CAD4 00259A14  38 21 00 50 */	addi r1, r1, 0x50
/* 8025CAD8 00259A18  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBase, global
/* 8025CADC 00259A1C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8025CAE0 00259A20  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8025CAE4 00259A24  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8025CAE8 00259A28  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib12StateAttack2FPQ24Game9EnemyBase

.fn init__Q34Game4Ujib8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8025CAEC 00259A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025CAF0 00259A30  7C 08 02 A6 */	mflr r0
/* 8025CAF4 00259A34  7C 83 23 78 */	mr r3, r4
/* 8025CAF8 00259A38  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025CAFC 00259A3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025CB00 00259A40  38 80 00 07 */	li r4, 7
/* 8025CB04 00259A44  38 A0 00 00 */	li r5, 0
/* 8025CB08 00259A48  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 8025CB0C 00259A4C  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 8025CB10 00259A50  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 8025CB14 00259A54  4B EA 84 F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8025CB18 00259A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025CB1C 00259A5C  7C 08 03 A6 */	mtlr r0
/* 8025CB20 00259A60  38 21 00 10 */	addi r1, r1, 0x10
/* 8025CB24 00259A64  4E 80 00 20 */	blr 
.endfn init__Q34Game4Ujib8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Ujib8StateEatFPQ24Game9EnemyBase, global
/* 8025CB28 00259A68  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8025CB2C 00259A6C  7C 08 02 A6 */	mflr r0
/* 8025CB30 00259A70  90 01 00 54 */	stw r0, 0x54(r1)
/* 8025CB34 00259A74  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8025CB38 00259A78  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8025CB3C 00259A7C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8025CB40 00259A80  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8025CB44 00259A84  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8025CB48 00259A88  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8025CB4C 00259A8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8025CB50 00259A90  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8025CB54 00259A94  7C 9F 23 78 */	mr r31, r4
/* 8025CB58 00259A98  7C 7E 1B 78 */	mr r30, r3
/* 8025CB5C 00259A9C  7F E3 FB 78 */	mr r3, r31
/* 8025CB60 00259AA0  4B FF D4 C5 */	bl setInWaterDamage__Q34Game4Ujib3ObjFv
/* 8025CB64 00259AA4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8025CB68 00259AA8  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025CB6C 00259AAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025CB70 00259AB0  4C 40 13 82 */	cror 2, 0, 2
/* 8025CB74 00259AB4  40 82 00 28 */	bne .L_8025CB9C
/* 8025CB78 00259AB8  7F C3 F3 78 */	mr r3, r30
/* 8025CB7C 00259ABC  7F E4 FB 78 */	mr r4, r31
/* 8025CB80 00259AC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025CB84 00259AC4  38 A0 00 00 */	li r5, 0
/* 8025CB88 00259AC8  38 C0 00 00 */	li r6, 0
/* 8025CB8C 00259ACC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025CB90 00259AD0  7D 89 03 A6 */	mtctr r12
/* 8025CB94 00259AD4  4E 80 04 21 */	bctrl 
/* 8025CB98 00259AD8  48 00 01 08 */	b .L_8025CCA0
.L_8025CB9C:
/* 8025CB9C 00259ADC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8025CBA0 00259AE0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8025CBA4 00259AE4  28 00 00 00 */	cmplwi r0, 0
/* 8025CBA8 00259AE8  41 82 00 F8 */	beq .L_8025CCA0
/* 8025CBAC 00259AEC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8025CBB0 00259AF0  28 00 00 02 */	cmplwi r0, 2
/* 8025CBB4 00259AF4  40 82 00 24 */	bne .L_8025CBD8
/* 8025CBB8 00259AF8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8025CBBC 00259AFC  7F E3 FB 78 */	mr r3, r31
/* 8025CBC0 00259B00  38 80 00 00 */	li r4, 0
/* 8025CBC4 00259B04  C0 25 08 1C */	lfs f1, 0x81c(r5)
/* 8025CBC8 00259B08  4B EB 72 BD */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 8025CBCC 00259B0C  7F E3 FB 78 */	mr r3, r31
/* 8025CBD0 00259B10  4B FF E4 B1 */	bl createEatEffect__Q34Game4Ujib3ObjFv
/* 8025CBD4 00259B14  48 00 00 CC */	b .L_8025CCA0
.L_8025CBD8:
/* 8025CBD8 00259B18  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8025CBDC 00259B1C  40 82 00 C4 */	bne .L_8025CCA0
/* 8025CBE0 00259B20  7F E4 FB 78 */	mr r4, r31
/* 8025CBE4 00259B24  38 61 00 08 */	addi r3, r1, 8
/* 8025CBE8 00259B28  81 9F 00 00 */	lwz r12, 0(r31)
/* 8025CBEC 00259B2C  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 8025CBF0 00259B30  81 8C 00 08 */	lwz r12, 8(r12)
/* 8025CBF4 00259B34  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 8025CBF8 00259B38  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 8025CBFC 00259B3C  7D 89 03 A6 */	mtctr r12
/* 8025CC00 00259B40  4E 80 04 21 */	bctrl 
/* 8025CC04 00259B44  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8025CC08 00259B48  C0 41 00 08 */	lfs f2, 8(r1)
/* 8025CC0C 00259B4C  EC 60 F0 28 */	fsubs f3, f0, f30
/* 8025CC10 00259B50  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8025CC14 00259B54  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8025CC18 00259B58  C0 02 C8 8C */	lfs f0, lbl_8051ABEC@sda21(r2)
/* 8025CC1C 00259B5C  EC 21 E8 28 */	fsubs f1, f1, f29
/* 8025CC20 00259B60  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8025CC24 00259B64  EC 81 00 72 */	fmuls f4, f1, f1
/* 8025CC28 00259B68  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 8025CC2C 00259B6C  EC 24 08 2A */	fadds f1, f4, f1
/* 8025CC30 00259B70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025CC34 00259B74  40 81 00 14 */	ble .L_8025CC48
/* 8025CC38 00259B78  40 81 00 14 */	ble .L_8025CC4C
/* 8025CC3C 00259B7C  FC 00 08 34 */	frsqrte f0, f1
/* 8025CC40 00259B80  EC 20 00 72 */	fmuls f1, f0, f1
/* 8025CC44 00259B84  48 00 00 08 */	b .L_8025CC4C
.L_8025CC48:
/* 8025CC48 00259B88  FC 20 00 90 */	fmr f1, f0
.L_8025CC4C:
/* 8025CC4C 00259B8C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8025CC50 00259B90  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 8025CC54 00259B94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8025CC58 00259B98  40 81 00 28 */	ble .L_8025CC80
/* 8025CC5C 00259B9C  7F C3 F3 78 */	mr r3, r30
/* 8025CC60 00259BA0  7F E4 FB 78 */	mr r4, r31
/* 8025CC64 00259BA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025CC68 00259BA8  38 A0 00 09 */	li r5, 9
/* 8025CC6C 00259BAC  38 C0 00 00 */	li r6, 0
/* 8025CC70 00259BB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025CC74 00259BB4  7D 89 03 A6 */	mtctr r12
/* 8025CC78 00259BB8  4E 80 04 21 */	bctrl 
/* 8025CC7C 00259BBC  48 00 00 24 */	b .L_8025CCA0
.L_8025CC80:
/* 8025CC80 00259BC0  7F C3 F3 78 */	mr r3, r30
/* 8025CC84 00259BC4  7F E4 FB 78 */	mr r4, r31
/* 8025CC88 00259BC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025CC8C 00259BCC  38 A0 00 05 */	li r5, 5
/* 8025CC90 00259BD0  38 C0 00 00 */	li r6, 0
/* 8025CC94 00259BD4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8025CC98 00259BD8  7D 89 03 A6 */	mtctr r12
/* 8025CC9C 00259BDC  4E 80 04 21 */	bctrl 
.L_8025CCA0:
/* 8025CCA0 00259BE0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8025CCA4 00259BE4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8025CCA8 00259BE8  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8025CCAC 00259BEC  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8025CCB0 00259BF0  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8025CCB4 00259BF4  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8025CCB8 00259BF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8025CCBC 00259BFC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8025CCC0 00259C00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8025CCC4 00259C04  7C 08 03 A6 */	mtlr r0
/* 8025CCC8 00259C08  38 21 00 50 */	addi r1, r1, 0x50
/* 8025CCCC 00259C0C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Ujib8StateEatFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Ujib8StateEatFPQ24Game9EnemyBase, global
/* 8025CCD0 00259C10  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Ujib8StateEatFPQ24Game9EnemyBase
