.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80486C68, local
	.asciz "moveturn"
.endobj lbl_80486C68
.balign 4
.obj lbl_80486C74, local
	.asciz "chaseturn"
.endobj lbl_80486C74

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Tank10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank10StateFlick
.obj __vt__Q34Game4Tank11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank11StateAttack
.obj __vt__Q34Game4Tank14StateChaseTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank14StateChaseTurn
.obj __vt__Q34Game4Tank13StateMoveTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank13StateMoveTurn
.obj __vt__Q34Game4Tank9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank9StateMove
.obj __vt__Q34Game4Tank9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank9StateWait
.obj __vt__Q34Game4Tank9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Tank9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Tank9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank9StateDead
.obj __vt__Q34Game4Tank5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Tank5State
.obj __vt__Q34Game4Tank3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Tank3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game4Tank3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B268, local
	.asciz "dead"
.endobj lbl_8051B268
.balign 4
.obj lbl_8051B270, local
	.asciz "wait"
.endobj lbl_8051B270
.balign 4
.obj lbl_8051B278, local
	.asciz "move"
.endobj lbl_8051B278
.balign 4
.obj lbl_8051B280, local
	.asciz "attack"
.endobj lbl_8051B280
.balign 4
.obj lbl_8051B288, local
	.asciz "flick"
.endobj lbl_8051B288
.balign 4
.obj lbl_8051B290, local
	.float 0.0
.endobj lbl_8051B290
.obj lbl_8051B294, local
	.float 60.0
.endobj lbl_8051B294
.obj lbl_8051B298, local
	.float 1.0
.endobj lbl_8051B298
.obj lbl_8051B29C, local
	.float 32768.0
.endobj lbl_8051B29C
.obj lbl_8051B2A0, local
	.float 0.2
.endobj lbl_8051B2A0
.balign 8
.obj lbl_8051B2A8, local
	.8byte 0x4330000080000000
.endobj lbl_8051B2A8
.obj lbl_8051B2B0, local
	.float 30.0
.endobj lbl_8051B2B0
.obj lbl_8051B2B4, local
	.float 2500.0
.endobj lbl_8051B2B4
.obj lbl_8051B2B8, local
	.float 3.0
.endobj lbl_8051B2B8
.obj lbl_8051B2BC, local # pi
	.float 3.1415927
.endobj lbl_8051B2BC
.obj lbl_8051B2C0, local
	.float 0.0055555557
.endobj lbl_8051B2C0
.obj lbl_8051B2C4, local
	.float 1.0471976
.endobj lbl_8051B2C4
.obj lbl_8051B2C8, local
	.float 325.9493
.endobj lbl_8051B2C8
.obj lbl_8051B2CC, local
	.float -325.9493
.endobj lbl_8051B2CC
.obj lbl_8051B2D0, local
	.float 0.17453294
.endobj lbl_8051B2D0
.obj lbl_8051B2D4, local
	.float -1000.0
.endobj lbl_8051B2D4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game4Tank3FSMFPQ24Game9EnemyBase, global
/* 80273DE4 00270D24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80273DE8 00270D28  7C 08 02 A6 */	mflr r0
/* 80273DEC 00270D2C  38 80 00 07 */	li r4, 7
/* 80273DF0 00270D30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80273DF4 00270D34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80273DF8 00270D38  7C 7F 1B 78 */	mr r31, r3
/* 80273DFC 00270D3C  4B EB CA 69 */	bl create__Q24Game17EnemyStateMachineFi
/* 80273E00 00270D40  38 60 00 10 */	li r3, 0x10
/* 80273E04 00270D44  4B DB 00 A1 */	bl __nw__FUl
/* 80273E08 00270D48  7C 64 1B 79 */	or. r4, r3, r3
/* 80273E0C 00270D4C  41 82 00 3C */	beq .L_80273E48
/* 80273E10 00270D50  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80273E14 00270D54  3C A0 80 4C */	lis r5, __vt__Q34Game4Tank5State@ha
/* 80273E18 00270D58  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80273E1C 00270D5C  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank9StateDead@ha
/* 80273E20 00270D60  90 04 00 00 */	stw r0, 0(r4)
/* 80273E24 00270D64  38 E0 00 00 */	li r7, 0
/* 80273E28 00270D68  38 C5 69 F4 */	addi r6, r5, __vt__Q34Game4Tank5State@l
/* 80273E2C 00270D6C  38 A2 CF 08 */	addi r5, r2, lbl_8051B268@sda21
/* 80273E30 00270D70  90 E4 00 04 */	stw r7, 4(r4)
/* 80273E34 00270D74  38 03 69 D0 */	addi r0, r3, __vt__Q34Game4Tank9StateDead@l
/* 80273E38 00270D78  90 E4 00 08 */	stw r7, 8(r4)
/* 80273E3C 00270D7C  90 C4 00 00 */	stw r6, 0(r4)
/* 80273E40 00270D80  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80273E44 00270D84  90 04 00 00 */	stw r0, 0(r4)
.L_80273E48:
/* 80273E48 00270D88  7F E3 FB 78 */	mr r3, r31
/* 80273E4C 00270D8C  4B EB CA BD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80273E50 00270D90  38 60 00 10 */	li r3, 0x10
/* 80273E54 00270D94  4B DB 00 51 */	bl __nw__FUl
/* 80273E58 00270D98  7C 64 1B 79 */	or. r4, r3, r3
/* 80273E5C 00270D9C  41 82 00 40 */	beq .L_80273E9C
/* 80273E60 00270DA0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80273E64 00270DA4  3C A0 80 4C */	lis r5, __vt__Q34Game4Tank5State@ha
/* 80273E68 00270DA8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80273E6C 00270DAC  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank9StateWait@ha
/* 80273E70 00270DB0  90 04 00 00 */	stw r0, 0(r4)
/* 80273E74 00270DB4  38 00 00 01 */	li r0, 1
/* 80273E78 00270DB8  38 E0 00 00 */	li r7, 0
/* 80273E7C 00270DBC  38 C5 69 F4 */	addi r6, r5, __vt__Q34Game4Tank5State@l
/* 80273E80 00270DC0  90 04 00 04 */	stw r0, 4(r4)
/* 80273E84 00270DC4  38 A2 CF 10 */	addi r5, r2, lbl_8051B270@sda21
/* 80273E88 00270DC8  38 03 69 AC */	addi r0, r3, __vt__Q34Game4Tank9StateWait@l
/* 80273E8C 00270DCC  90 E4 00 08 */	stw r7, 8(r4)
/* 80273E90 00270DD0  90 C4 00 00 */	stw r6, 0(r4)
/* 80273E94 00270DD4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80273E98 00270DD8  90 04 00 00 */	stw r0, 0(r4)
.L_80273E9C:
/* 80273E9C 00270DDC  7F E3 FB 78 */	mr r3, r31
/* 80273EA0 00270DE0  4B EB CA 69 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80273EA4 00270DE4  38 60 00 10 */	li r3, 0x10
/* 80273EA8 00270DE8  4B DA FF FD */	bl __nw__FUl
/* 80273EAC 00270DEC  7C 64 1B 79 */	or. r4, r3, r3
/* 80273EB0 00270DF0  41 82 00 40 */	beq .L_80273EF0
/* 80273EB4 00270DF4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80273EB8 00270DF8  3C A0 80 4C */	lis r5, __vt__Q34Game4Tank5State@ha
/* 80273EBC 00270DFC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80273EC0 00270E00  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank9StateMove@ha
/* 80273EC4 00270E04  90 04 00 00 */	stw r0, 0(r4)
/* 80273EC8 00270E08  38 00 00 02 */	li r0, 2
/* 80273ECC 00270E0C  38 E0 00 00 */	li r7, 0
/* 80273ED0 00270E10  38 C5 69 F4 */	addi r6, r5, __vt__Q34Game4Tank5State@l
/* 80273ED4 00270E14  90 04 00 04 */	stw r0, 4(r4)
/* 80273ED8 00270E18  38 A2 CF 18 */	addi r5, r2, lbl_8051B278@sda21
/* 80273EDC 00270E1C  38 03 69 88 */	addi r0, r3, __vt__Q34Game4Tank9StateMove@l
/* 80273EE0 00270E20  90 E4 00 08 */	stw r7, 8(r4)
/* 80273EE4 00270E24  90 C4 00 00 */	stw r6, 0(r4)
/* 80273EE8 00270E28  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80273EEC 00270E2C  90 04 00 00 */	stw r0, 0(r4)
.L_80273EF0:
/* 80273EF0 00270E30  7F E3 FB 78 */	mr r3, r31
/* 80273EF4 00270E34  4B EB CA 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80273EF8 00270E38  38 60 00 10 */	li r3, 0x10
/* 80273EFC 00270E3C  4B DA FF A9 */	bl __nw__FUl
/* 80273F00 00270E40  7C 64 1B 79 */	or. r4, r3, r3
/* 80273F04 00270E44  41 82 00 44 */	beq .L_80273F48
/* 80273F08 00270E48  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80273F0C 00270E4C  3C C0 80 4C */	lis r6, __vt__Q34Game4Tank5State@ha
/* 80273F10 00270E50  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80273F14 00270E54  3C A0 80 48 */	lis r5, lbl_80486C68@ha
/* 80273F18 00270E58  90 04 00 00 */	stw r0, 0(r4)
/* 80273F1C 00270E5C  38 00 00 03 */	li r0, 3
/* 80273F20 00270E60  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank13StateMoveTurn@ha
/* 80273F24 00270E64  38 E0 00 00 */	li r7, 0
/* 80273F28 00270E68  90 04 00 04 */	stw r0, 4(r4)
/* 80273F2C 00270E6C  38 C6 69 F4 */	addi r6, r6, __vt__Q34Game4Tank5State@l
/* 80273F30 00270E70  38 A5 6C 68 */	addi r5, r5, lbl_80486C68@l
/* 80273F34 00270E74  38 03 69 64 */	addi r0, r3, __vt__Q34Game4Tank13StateMoveTurn@l
/* 80273F38 00270E78  90 E4 00 08 */	stw r7, 8(r4)
/* 80273F3C 00270E7C  90 C4 00 00 */	stw r6, 0(r4)
/* 80273F40 00270E80  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80273F44 00270E84  90 04 00 00 */	stw r0, 0(r4)
.L_80273F48:
/* 80273F48 00270E88  7F E3 FB 78 */	mr r3, r31
/* 80273F4C 00270E8C  4B EB C9 BD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80273F50 00270E90  38 60 00 10 */	li r3, 0x10
/* 80273F54 00270E94  4B DA FF 51 */	bl __nw__FUl
/* 80273F58 00270E98  7C 64 1B 79 */	or. r4, r3, r3
/* 80273F5C 00270E9C  41 82 00 44 */	beq .L_80273FA0
/* 80273F60 00270EA0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80273F64 00270EA4  3C C0 80 4C */	lis r6, __vt__Q34Game4Tank5State@ha
/* 80273F68 00270EA8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80273F6C 00270EAC  3C A0 80 48 */	lis r5, lbl_80486C74@ha
/* 80273F70 00270EB0  90 04 00 00 */	stw r0, 0(r4)
/* 80273F74 00270EB4  38 00 00 04 */	li r0, 4
/* 80273F78 00270EB8  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank14StateChaseTurn@ha
/* 80273F7C 00270EBC  38 E0 00 00 */	li r7, 0
/* 80273F80 00270EC0  90 04 00 04 */	stw r0, 4(r4)
/* 80273F84 00270EC4  38 C6 69 F4 */	addi r6, r6, __vt__Q34Game4Tank5State@l
/* 80273F88 00270EC8  38 A5 6C 74 */	addi r5, r5, lbl_80486C74@l
/* 80273F8C 00270ECC  38 03 69 40 */	addi r0, r3, __vt__Q34Game4Tank14StateChaseTurn@l
/* 80273F90 00270ED0  90 E4 00 08 */	stw r7, 8(r4)
/* 80273F94 00270ED4  90 C4 00 00 */	stw r6, 0(r4)
/* 80273F98 00270ED8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80273F9C 00270EDC  90 04 00 00 */	stw r0, 0(r4)
.L_80273FA0:
/* 80273FA0 00270EE0  7F E3 FB 78 */	mr r3, r31
/* 80273FA4 00270EE4  4B EB C9 65 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80273FA8 00270EE8  38 60 00 10 */	li r3, 0x10
/* 80273FAC 00270EEC  4B DA FE F9 */	bl __nw__FUl
/* 80273FB0 00270EF0  7C 64 1B 79 */	or. r4, r3, r3
/* 80273FB4 00270EF4  41 82 00 40 */	beq .L_80273FF4
/* 80273FB8 00270EF8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80273FBC 00270EFC  3C A0 80 4C */	lis r5, __vt__Q34Game4Tank5State@ha
/* 80273FC0 00270F00  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80273FC4 00270F04  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank11StateAttack@ha
/* 80273FC8 00270F08  90 04 00 00 */	stw r0, 0(r4)
/* 80273FCC 00270F0C  38 00 00 05 */	li r0, 5
/* 80273FD0 00270F10  38 E0 00 00 */	li r7, 0
/* 80273FD4 00270F14  38 C5 69 F4 */	addi r6, r5, __vt__Q34Game4Tank5State@l
/* 80273FD8 00270F18  90 04 00 04 */	stw r0, 4(r4)
/* 80273FDC 00270F1C  38 A2 CF 20 */	addi r5, r2, lbl_8051B280@sda21
/* 80273FE0 00270F20  38 03 69 1C */	addi r0, r3, __vt__Q34Game4Tank11StateAttack@l
/* 80273FE4 00270F24  90 E4 00 08 */	stw r7, 8(r4)
/* 80273FE8 00270F28  90 C4 00 00 */	stw r6, 0(r4)
/* 80273FEC 00270F2C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80273FF0 00270F30  90 04 00 00 */	stw r0, 0(r4)
.L_80273FF4:
/* 80273FF4 00270F34  7F E3 FB 78 */	mr r3, r31
/* 80273FF8 00270F38  4B EB C9 11 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80273FFC 00270F3C  38 60 00 10 */	li r3, 0x10
/* 80274000 00270F40  4B DA FE A5 */	bl __nw__FUl
/* 80274004 00270F44  7C 64 1B 79 */	or. r4, r3, r3
/* 80274008 00270F48  41 82 00 40 */	beq .L_80274048
/* 8027400C 00270F4C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80274010 00270F50  3C A0 80 4C */	lis r5, __vt__Q34Game4Tank5State@ha
/* 80274014 00270F54  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80274018 00270F58  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank10StateFlick@ha
/* 8027401C 00270F5C  90 04 00 00 */	stw r0, 0(r4)
/* 80274020 00270F60  38 00 00 06 */	li r0, 6
/* 80274024 00270F64  38 E0 00 00 */	li r7, 0
/* 80274028 00270F68  38 C5 69 F4 */	addi r6, r5, __vt__Q34Game4Tank5State@l
/* 8027402C 00270F6C  90 04 00 04 */	stw r0, 4(r4)
/* 80274030 00270F70  38 A2 CF 28 */	addi r5, r2, lbl_8051B288@sda21
/* 80274034 00270F74  38 03 68 F8 */	addi r0, r3, __vt__Q34Game4Tank10StateFlick@l
/* 80274038 00270F78  90 E4 00 08 */	stw r7, 8(r4)
/* 8027403C 00270F7C  90 C4 00 00 */	stw r6, 0(r4)
/* 80274040 00270F80  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80274044 00270F84  90 04 00 00 */	stw r0, 0(r4)
.L_80274048:
/* 80274048 00270F88  7F E3 FB 78 */	mr r3, r31
/* 8027404C 00270F8C  4B EB C8 BD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80274050 00270F90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274054 00270F94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80274058 00270F98  7C 08 03 A6 */	mtlr r0
/* 8027405C 00270F9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80274060 00270FA0  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank3FSMFPQ24Game9EnemyBase

.fn init__Q34Game4Tank9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80274064 00270FA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80274068 00270FA8  7C 08 02 A6 */	mflr r0
/* 8027406C 00270FAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80274070 00270FB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80274074 00270FB4  7C 9F 23 78 */	mr r31, r4
/* 80274078 00270FB8  7F E3 FB 78 */	mr r3, r31
/* 8027407C 00270FBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80274080 00270FC0  81 8C 03 0C */	lwz r12, 0x30c(r12)
/* 80274084 00270FC4  7D 89 03 A6 */	mtctr r12
/* 80274088 00270FC8  4E 80 04 21 */	bctrl 
/* 8027408C 00270FCC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80274090 00270FD0  7F E3 FB 78 */	mr r3, r31
/* 80274094 00270FD4  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274098 00270FD8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8027409C 00270FDC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802740A0 00270FE0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802740A4 00270FE4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802740A8 00270FE8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802740AC 00270FEC  4B E9 16 75 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802740B0 00270FF0  7F E3 FB 78 */	mr r3, r31
/* 802740B4 00270FF4  38 80 00 00 */	li r4, 0
/* 802740B8 00270FF8  38 A0 00 00 */	li r5, 0
/* 802740BC 00270FFC  4B E9 0F 49 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802740C0 00271000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802740C4 00271004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802740C8 00271008  7C 08 03 A6 */	mtlr r0
/* 802740CC 0027100C  38 21 00 10 */	addi r1, r1, 0x10
/* 802740D0 00271010  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn finishEffect__Q34Game4Tank3ObjFv, weak
/* 802740D4 00271014  4E 80 00 20 */	blr 
.endfn finishEffect__Q34Game4Tank3ObjFv

.fn exec__Q34Game4Tank9StateDeadFPQ24Game9EnemyBase, global
/* 802740D8 00271018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802740DC 0027101C  7C 08 02 A6 */	mflr r0
/* 802740E0 00271020  90 01 00 14 */	stw r0, 0x14(r1)
/* 802740E4 00271024  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802740E8 00271028  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802740EC 0027102C  28 00 00 00 */	cmplwi r0, 0
/* 802740F0 00271030  41 82 00 1C */	beq .L_8027410C
/* 802740F4 00271034  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802740F8 00271038  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802740FC 0027103C  40 82 00 10 */	bne .L_8027410C
/* 80274100 00271040  7C 83 23 78 */	mr r3, r4
/* 80274104 00271044  38 80 00 00 */	li r4, 0
/* 80274108 00271048  4B EC 6F E9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8027410C:
/* 8027410C 0027104C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274110 00271050  7C 08 03 A6 */	mtlr r0
/* 80274114 00271054  38 21 00 10 */	addi r1, r1, 0x10
/* 80274118 00271058  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Tank9StateDeadFPQ24Game9EnemyBase, global
/* 8027411C 0027105C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game4Tank9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80274120 00271060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80274124 00271064  7C 08 02 A6 */	mflr r0
/* 80274128 00271068  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027412C 0027106C  7C 83 23 78 */	mr r3, r4
/* 80274130 00271070  90 01 00 14 */	stw r0, 0x14(r1)
/* 80274134 00271074  38 00 00 00 */	li r0, 0
/* 80274138 00271078  38 A0 00 00 */	li r5, 0
/* 8027413C 0027107C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80274140 00271080  38 80 00 05 */	li r4, 5
/* 80274144 00271084  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80274148 00271088  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 8027414C 0027108C  90 03 02 30 */	stw r0, 0x230(r3)
/* 80274150 00271090  4B E9 0E B5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80274154 00271094  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274158 00271098  7C 08 03 A6 */	mtlr r0
/* 8027415C 0027109C  38 21 00 10 */	addi r1, r1, 0x10
/* 80274160 002710A0  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Tank9StateWaitFPQ24Game9EnemyBase, global
/* 80274164 002710A4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80274168 002710A8  7C 08 02 A6 */	mflr r0
/* 8027416C 002710AC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80274170 002710B0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80274174 002710B4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80274178 002710B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8027417C 002710BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80274180 002710C0  7C 9F 23 78 */	mr r31, r4
/* 80274184 002710C4  7C 7E 1B 78 */	mr r30, r3
/* 80274188 002710C8  7F E3 FB 78 */	mr r3, r31
/* 8027418C 002710CC  48 00 2A 5D */	bl getViewAngle__Q34Game4Tank3ObjFv
/* 80274190 002710D0  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 80274194 002710D4  FF E0 08 90 */	fmr f31, f1
/* 80274198 002710D8  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027419C 002710DC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802741A0 002710E0  4C 40 13 82 */	cror 2, 0, 2
/* 802741A4 002710E4  40 82 00 28 */	bne .L_802741CC
/* 802741A8 002710E8  7F C3 F3 78 */	mr r3, r30
/* 802741AC 002710EC  7F E4 FB 78 */	mr r4, r31
/* 802741B0 002710F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802741B4 002710F4  38 A0 00 00 */	li r5, 0
/* 802741B8 002710F8  38 C0 00 00 */	li r6, 0
/* 802741BC 002710FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802741C0 00271100  7D 89 03 A6 */	mtctr r12
/* 802741C4 00271104  4E 80 04 21 */	bctrl 
/* 802741C8 00271108  48 00 01 D4 */	b .L_8027439C
.L_802741CC:
/* 802741CC 0027110C  7F E3 FB 78 */	mr r3, r31
/* 802741D0 00271110  38 80 00 00 */	li r4, 0
/* 802741D4 00271114  4B EA 04 85 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802741D8 00271118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802741DC 0027111C  40 82 00 18 */	bne .L_802741F4
/* 802741E0 00271120  7F E3 FB 78 */	mr r3, r31
/* 802741E4 00271124  38 80 00 00 */	li r4, 0
/* 802741E8 00271128  48 00 23 19 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 802741EC 0027112C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802741F0 00271130  41 82 00 10 */	beq .L_80274200
.L_802741F4:
/* 802741F4 00271134  C0 22 CF 34 */	lfs f1, lbl_8051B294@sda21(r2)
/* 802741F8 00271138  7F E3 FB 78 */	mr r3, r31
/* 802741FC 0027113C  4B E9 31 95 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
.L_80274200:
/* 80274200 00271140  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80274204 00271144  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80274208 00271148  28 00 00 00 */	cmplwi r0, 0
/* 8027420C 0027114C  41 82 01 90 */	beq .L_8027439C
/* 80274210 00271150  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80274214 00271154  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80274218 00271158  40 82 01 84 */	bne .L_8027439C
/* 8027421C 0027115C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80274220 00271160  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274224 00271164  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274228 00271168  4C 40 13 82 */	cror 2, 0, 2
/* 8027422C 0027116C  40 82 00 28 */	bne .L_80274254
/* 80274230 00271170  7F C3 F3 78 */	mr r3, r30
/* 80274234 00271174  7F E4 FB 78 */	mr r4, r31
/* 80274238 00271178  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027423C 0027117C  38 A0 00 00 */	li r5, 0
/* 80274240 00271180  38 C0 00 00 */	li r6, 0
/* 80274244 00271184  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274248 00271188  7D 89 03 A6 */	mtctr r12
/* 8027424C 0027118C  4E 80 04 21 */	bctrl 
/* 80274250 00271190  48 00 01 4C */	b .L_8027439C
.L_80274254:
/* 80274254 00271194  7F E3 FB 78 */	mr r3, r31
/* 80274258 00271198  38 80 00 00 */	li r4, 0
/* 8027425C 0027119C  4B EA 03 FD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80274260 002711A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274264 002711A4  41 82 00 28 */	beq .L_8027428C
/* 80274268 002711A8  7F C3 F3 78 */	mr r3, r30
/* 8027426C 002711AC  7F E4 FB 78 */	mr r4, r31
/* 80274270 002711B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274274 002711B4  38 A0 00 06 */	li r5, 6
/* 80274278 002711B8  38 C0 00 00 */	li r6, 0
/* 8027427C 002711BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274280 002711C0  7D 89 03 A6 */	mtctr r12
/* 80274284 002711C4  4E 80 04 21 */	bctrl 
/* 80274288 002711C8  48 00 01 14 */	b .L_8027439C
.L_8027428C:
/* 8027428C 002711CC  7F E3 FB 78 */	mr r3, r31
/* 80274290 002711D0  38 80 00 00 */	li r4, 0
/* 80274294 002711D4  48 00 22 6D */	bl isAttackable__Q34Game4Tank3ObjFb
/* 80274298 002711D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027429C 002711DC  41 82 00 28 */	beq .L_802742C4
/* 802742A0 002711E0  7F C3 F3 78 */	mr r3, r30
/* 802742A4 002711E4  7F E4 FB 78 */	mr r4, r31
/* 802742A8 002711E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802742AC 002711EC  38 A0 00 05 */	li r5, 5
/* 802742B0 002711F0  38 C0 00 00 */	li r6, 0
/* 802742B4 002711F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802742B8 002711F8  7D 89 03 A6 */	mtctr r12
/* 802742BC 002711FC  4E 80 04 21 */	bctrl 
/* 802742C0 00271200  48 00 00 DC */	b .L_8027439C
.L_802742C4:
/* 802742C4 00271204  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802742C8 00271208  FC 20 F8 90 */	fmr f1, f31
/* 802742CC 0027120C  7F E3 FB 78 */	mr r3, r31
/* 802742D0 00271210  38 80 00 00 */	li r4, 0
/* 802742D4 00271214  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802742D8 00271218  38 A0 00 00 */	li r5, 0
/* 802742DC 0027121C  38 C0 00 00 */	li r6, 0
/* 802742E0 00271220  4B E9 ED 71 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802742E4 00271224  28 03 00 00 */	cmplwi r3, 0
/* 802742E8 00271228  41 82 00 34 */	beq .L_8027431C
/* 802742EC 0027122C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802742F0 00271230  7F C3 F3 78 */	mr r3, r30
/* 802742F4 00271234  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802742F8 00271238  7F E4 FB 78 */	mr r4, r31
/* 802742FC 0027123C  38 A0 00 04 */	li r5, 4
/* 80274300 00271240  38 C0 00 00 */	li r6, 0
/* 80274304 00271244  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80274308 00271248  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027430C 0027124C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274310 00271250  7D 89 03 A6 */	mtctr r12
/* 80274314 00271254  4E 80 04 21 */	bctrl 
/* 80274318 00271258  48 00 00 84 */	b .L_8027439C
.L_8027431C:
/* 8027431C 0027125C  4B E5 52 85 */	bl rand
/* 80274320 00271260  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80274324 00271264  3C 00 43 30 */	lis r0, 0x4330
/* 80274328 00271268  90 61 00 0C */	stw r3, 0xc(r1)
/* 8027432C 0027126C  C8 62 CF 48 */	lfd f3, lbl_8051B2A8@sda21(r2)
/* 80274330 00271270  90 01 00 08 */	stw r0, 8(r1)
/* 80274334 00271274  C0 42 CF 38 */	lfs f2, lbl_8051B298@sda21(r2)
/* 80274338 00271278  C8 01 00 08 */	lfd f0, 8(r1)
/* 8027433C 0027127C  C0 22 CF 3C */	lfs f1, lbl_8051B29C@sda21(r2)
/* 80274340 00271280  EC 60 18 28 */	fsubs f3, f0, f3
/* 80274344 00271284  C0 02 CF 40 */	lfs f0, lbl_8051B2A0@sda21(r2)
/* 80274348 00271288  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8027434C 0027128C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80274350 00271290  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274354 00271294  40 80 00 28 */	bge .L_8027437C
/* 80274358 00271298  7F C3 F3 78 */	mr r3, r30
/* 8027435C 0027129C  7F E4 FB 78 */	mr r4, r31
/* 80274360 002712A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274364 002712A4  38 A0 00 01 */	li r5, 1
/* 80274368 002712A8  38 C0 00 00 */	li r6, 0
/* 8027436C 002712AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274370 002712B0  7D 89 03 A6 */	mtctr r12
/* 80274374 002712B4  4E 80 04 21 */	bctrl 
/* 80274378 002712B8  48 00 00 24 */	b .L_8027439C
.L_8027437C:
/* 8027437C 002712BC  7F C3 F3 78 */	mr r3, r30
/* 80274380 002712C0  7F E4 FB 78 */	mr r4, r31
/* 80274384 002712C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274388 002712C8  38 A0 00 03 */	li r5, 3
/* 8027438C 002712CC  38 C0 00 00 */	li r6, 0
/* 80274390 002712D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274394 002712D4  7D 89 03 A6 */	mtctr r12
/* 80274398 002712D8  4E 80 04 21 */	bctrl 
.L_8027439C:
/* 8027439C 002712DC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802743A0 002712E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802743A4 002712E4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802743A8 002712E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802743AC 002712EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802743B0 002712F0  7C 08 03 A6 */	mtlr r0
/* 802743B4 002712F4  38 21 00 30 */	addi r1, r1, 0x30
/* 802743B8 002712F8  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Tank9StateWaitFPQ24Game9EnemyBase, global
/* 802743BC 002712FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802743C0 00271300  7C 08 02 A6 */	mflr r0
/* 802743C4 00271304  C0 22 CF 50 */	lfs f1, lbl_8051B2B0@sda21(r2)
/* 802743C8 00271308  7C 83 23 78 */	mr r3, r4
/* 802743CC 0027130C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802743D0 00271310  4B E9 2F C1 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 802743D4 00271314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802743D8 00271318  7C 08 03 A6 */	mtlr r0
/* 802743DC 0027131C  38 21 00 10 */	addi r1, r1, 0x10
/* 802743E0 00271320  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game4Tank9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802743E4 00271324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802743E8 00271328  7C 08 02 A6 */	mflr r0
/* 802743EC 0027132C  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802743F0 00271330  38 A0 00 00 */	li r5, 0
/* 802743F4 00271334  90 01 00 14 */	stw r0, 0x14(r1)
/* 802743F8 00271338  38 00 00 00 */	li r0, 0
/* 802743FC 0027133C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80274400 00271340  7C 9F 23 78 */	mr r31, r4
/* 80274404 00271344  7F E3 FB 78 */	mr r3, r31
/* 80274408 00271348  D0 04 02 F0 */	stfs f0, 0x2f0(r4)
/* 8027440C 0027134C  38 80 00 01 */	li r4, 1
/* 80274410 00271350  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80274414 00271354  4B E9 0B F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80274418 00271358  C0 22 CF 34 */	lfs f1, lbl_8051B294@sda21(r2)
/* 8027441C 0027135C  7F E3 FB 78 */	mr r3, r31
/* 80274420 00271360  4B E9 2F 71 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80274424 00271364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274428 00271368  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027442C 0027136C  7C 08 03 A6 */	mtlr r0
/* 80274430 00271370  38 21 00 10 */	addi r1, r1, 0x10
/* 80274434 00271374  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Tank9StateMoveFPQ24Game9EnemyBase, global
/* 80274438 00271378  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8027443C 0027137C  7C 08 02 A6 */	mflr r0
/* 80274440 00271380  90 01 01 34 */	stw r0, 0x134(r1)
/* 80274444 00271384  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 80274448 00271388  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8027444C 0027138C  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 80274450 00271390  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 80274454 00271394  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 80274458 00271398  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8027445C 0027139C  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 80274460 002713A0  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 80274464 002713A4  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 80274468 002713A8  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 8027446C 002713AC  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 80274470 002713B0  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 80274474 002713B4  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 80274478 002713B8  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 8027447C 002713BC  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 80274480 002713C0  F3 01 00 B8 */	psq_st f24, 184(r1), 0, qr0
/* 80274484 002713C4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80274488 002713C8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8027448C 002713CC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80274490 002713D0  7C 9F 23 78 */	mr r31, r4
/* 80274494 002713D4  7C 7E 1B 78 */	mr r30, r3
/* 80274498 002713D8  7F E3 FB 78 */	mr r3, r31
/* 8027449C 002713DC  48 00 27 4D */	bl getViewAngle__Q34Game4Tank3ObjFv
/* 802744A0 002713E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802744A4 002713E4  FF 80 08 90 */	fmr f28, f1
/* 802744A8 002713E8  7F E4 FB 78 */	mr r4, r31
/* 802744AC 002713EC  38 61 00 80 */	addi r3, r1, 0x80
/* 802744B0 002713F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802744B4 002713F4  7D 89 03 A6 */	mtctr r12
/* 802744B8 002713F8  4E 80 04 21 */	bctrl 
/* 802744BC 002713FC  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802744C0 00271400  C0 BF 03 00 */	lfs f5, 0x300(r31)
/* 802744C4 00271404  C0 5F 02 F8 */	lfs f2, 0x2f8(r31)
/* 802744C8 00271408  EC 20 28 28 */	fsubs f1, f0, f5
/* 802744CC 0027140C  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 802744D0 00271410  C0 9F 02 FC */	lfs f4, 0x2fc(r31)
/* 802744D4 00271414  EC 60 10 28 */	fsubs f3, f0, f2
/* 802744D8 00271418  C0 02 CF 54 */	lfs f0, lbl_8051B2B4@sda21(r2)
/* 802744DC 0027141C  EC 21 00 72 */	fmuls f1, f1, f1
/* 802744E0 00271420  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 802744E4 00271424  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802744E8 00271428  D0 81 00 90 */	stfs f4, 0x90(r1)
/* 802744EC 0027142C  D0 A1 00 94 */	stfs f5, 0x94(r1)
/* 802744F0 00271430  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802744F4 00271434  40 81 00 34 */	ble .L_80274528
/* 802744F8 00271438  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 802744FC 0027143C  C0 02 CF 58 */	lfs f0, lbl_8051B2B8@sda21(r2)
/* 80274500 00271440  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274504 00271444  40 80 00 24 */	bge .L_80274528
/* 80274508 00271448  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8027450C 0027144C  7F E3 FB 78 */	mr r3, r31
/* 80274510 00271450  38 81 00 8C */	addi r4, r1, 0x8c
/* 80274514 00271454  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80274518 00271458  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 8027451C 0027145C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80274520 00271460  4B EA 10 BD */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 80274524 00271464  48 00 00 1C */	b .L_80274540
.L_80274528:
/* 80274528 00271468  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027452C 0027146C  7F E3 FB 78 */	mr r3, r31
/* 80274530 00271470  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80274534 00271474  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80274538 00271478  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8027453C 0027147C  4B E9 0D 65 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80274540:
/* 80274540 00271480  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80274544 00271484  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274548 00271488  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027454C 0027148C  4C 40 13 82 */	cror 2, 0, 2
/* 80274550 00271490  40 82 00 28 */	bne .L_80274578
/* 80274554 00271494  7F C3 F3 78 */	mr r3, r30
/* 80274558 00271498  7F E4 FB 78 */	mr r4, r31
/* 8027455C 0027149C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274560 002714A0  38 A0 00 00 */	li r5, 0
/* 80274564 002714A4  38 C0 00 00 */	li r6, 0
/* 80274568 002714A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027456C 002714AC  7D 89 03 A6 */	mtctr r12
/* 80274570 002714B0  4E 80 04 21 */	bctrl 
/* 80274574 002714B4  48 00 03 D4 */	b .L_80274948
.L_80274578:
/* 80274578 002714B8  7F E3 FB 78 */	mr r3, r31
/* 8027457C 002714BC  38 80 00 00 */	li r4, 0
/* 80274580 002714C0  4B EA 00 D9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80274584 002714C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274588 002714C8  40 82 00 18 */	bne .L_802745A0
/* 8027458C 002714CC  7F E3 FB 78 */	mr r3, r31
/* 80274590 002714D0  38 80 00 00 */	li r4, 0
/* 80274594 002714D4  48 00 1F 6D */	bl isAttackable__Q34Game4Tank3ObjFb
/* 80274598 002714D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027459C 002714DC  41 82 00 20 */	beq .L_802745BC
.L_802745A0:
/* 802745A0 002714E0  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802745A4 002714E4  7F E3 FB 78 */	mr r3, r31
/* 802745A8 002714E8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802745AC 002714EC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802745B0 002714F0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802745B4 002714F4  4B E9 0C ED */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802745B8 002714F8  48 00 00 4C */	b .L_80274604
.L_802745BC:
/* 802745BC 002714FC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802745C0 00271500  FC 20 E0 90 */	fmr f1, f28
/* 802745C4 00271504  7F E3 FB 78 */	mr r3, r31
/* 802745C8 00271508  38 80 00 00 */	li r4, 0
/* 802745CC 0027150C  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802745D0 00271510  38 A0 00 00 */	li r5, 0
/* 802745D4 00271514  38 C0 00 00 */	li r6, 0
/* 802745D8 00271518  4B E9 EA 79 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802745DC 0027151C  28 03 00 00 */	cmplwi r3, 0
/* 802745E0 00271520  41 82 00 24 */	beq .L_80274604
/* 802745E4 00271524  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802745E8 00271528  7F E3 FB 78 */	mr r3, r31
/* 802745EC 0027152C  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802745F0 00271530  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 802745F4 00271534  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802745F8 00271538  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802745FC 0027153C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80274600 00271540  4B E9 0C A1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80274604:
/* 80274604 00271544  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80274608 00271548  C0 3F 02 F0 */	lfs f1, 0x2f0(r31)
/* 8027460C 0027154C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80274610 00271550  EC 01 00 2A */	fadds f0, f1, f0
/* 80274614 00271554  D0 1F 02 F0 */	stfs f0, 0x2f0(r31)
/* 80274618 00271558  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8027461C 0027155C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80274620 00271560  28 00 00 00 */	cmplwi r0, 0
/* 80274624 00271564  41 82 03 24 */	beq .L_80274948
/* 80274628 00271568  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8027462C 0027156C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80274630 00271570  40 82 03 18 */	bne .L_80274948
/* 80274634 00271574  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80274638 00271578  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027463C 0027157C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274640 00271580  4C 40 13 82 */	cror 2, 0, 2
/* 80274644 00271584  40 82 00 28 */	bne .L_8027466C
/* 80274648 00271588  7F C3 F3 78 */	mr r3, r30
/* 8027464C 0027158C  7F E4 FB 78 */	mr r4, r31
/* 80274650 00271590  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274654 00271594  38 A0 00 00 */	li r5, 0
/* 80274658 00271598  38 C0 00 00 */	li r6, 0
/* 8027465C 0027159C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274660 002715A0  7D 89 03 A6 */	mtctr r12
/* 80274664 002715A4  4E 80 04 21 */	bctrl 
/* 80274668 002715A8  48 00 02 E0 */	b .L_80274948
.L_8027466C:
/* 8027466C 002715AC  7F E3 FB 78 */	mr r3, r31
/* 80274670 002715B0  38 80 00 00 */	li r4, 0
/* 80274674 002715B4  4B E9 FF E5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80274678 002715B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027467C 002715BC  41 82 00 28 */	beq .L_802746A4
/* 80274680 002715C0  7F C3 F3 78 */	mr r3, r30
/* 80274684 002715C4  7F E4 FB 78 */	mr r4, r31
/* 80274688 002715C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027468C 002715CC  38 A0 00 06 */	li r5, 6
/* 80274690 002715D0  38 C0 00 00 */	li r6, 0
/* 80274694 002715D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274698 002715D8  7D 89 03 A6 */	mtctr r12
/* 8027469C 002715DC  4E 80 04 21 */	bctrl 
/* 802746A0 002715E0  48 00 02 A8 */	b .L_80274948
.L_802746A4:
/* 802746A4 002715E4  7F E3 FB 78 */	mr r3, r31
/* 802746A8 002715E8  38 80 00 00 */	li r4, 0
/* 802746AC 002715EC  48 00 1E 55 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 802746B0 002715F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802746B4 002715F4  41 82 00 28 */	beq .L_802746DC
/* 802746B8 002715F8  7F C3 F3 78 */	mr r3, r30
/* 802746BC 002715FC  7F E4 FB 78 */	mr r4, r31
/* 802746C0 00271600  81 9E 00 00 */	lwz r12, 0(r30)
/* 802746C4 00271604  38 A0 00 05 */	li r5, 5
/* 802746C8 00271608  38 C0 00 00 */	li r6, 0
/* 802746CC 0027160C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802746D0 00271610  7D 89 03 A6 */	mtctr r12
/* 802746D4 00271614  4E 80 04 21 */	bctrl 
/* 802746D8 00271618  48 00 02 70 */	b .L_80274948
.L_802746DC:
/* 802746DC 0027161C  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 802746E0 00271620  28 1D 00 00 */	cmplwi r29, 0
/* 802746E4 00271624  41 82 02 44 */	beq .L_80274928
/* 802746E8 00271628  7F A4 EB 78 */	mr r4, r29
/* 802746EC 0027162C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802746F0 00271630  81 9D 00 00 */	lwz r12, 0(r29)
/* 802746F4 00271634  38 61 00 20 */	addi r3, r1, 0x20
/* 802746F8 00271638  C3 A5 03 FC */	lfs f29, 0x3fc(r5)
/* 802746FC 0027163C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274700 00271640  C3 C5 03 D4 */	lfs f30, 0x3d4(r5)
/* 80274704 00271644  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 80274708 00271648  7D 89 03 A6 */	mtctr r12
/* 8027470C 0027164C  4E 80 04 21 */	bctrl 
/* 80274710 00271650  7F E4 FB 78 */	mr r4, r31
/* 80274714 00271654  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80274718 00271658  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027471C 0027165C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80274720 00271660  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80274724 00271664  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80274728 00271668  81 8C 00 08 */	lwz r12, 8(r12)
/* 8027472C 0027166C  D0 41 00 08 */	stfs f2, 8(r1)
/* 80274730 00271670  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80274734 00271674  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80274738 00271678  7D 89 03 A6 */	mtctr r12
/* 8027473C 0027167C  4E 80 04 21 */	bctrl 
/* 80274740 00271680  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80274744 00271684  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80274748 00271688  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 8027474C 0027168C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80274750 00271690  C0 21 00 08 */	lfs f1, 8(r1)
/* 80274754 00271694  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80274758 00271698  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 8027475C 0027169C  EC 21 28 28 */	fsubs f1, f1, f5
/* 80274760 002716A0  EC 40 18 28 */	fsubs f2, f0, f3
/* 80274764 002716A4  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80274768 002716A8  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8027476C 002716AC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80274770 002716B0  4B DC 09 99 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80274774 002716B4  48 19 D4 5D */	bl roundAng__Ff
/* 80274778 002716B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027477C 002716BC  FF 00 08 90 */	fmr f24, f1
/* 80274780 002716C0  7F E3 FB 78 */	mr r3, r31
/* 80274784 002716C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80274788 002716C8  7D 89 03 A6 */	mtctr r12
/* 8027478C 002716CC  4E 80 04 21 */	bctrl 
/* 80274790 002716D0  FC 40 08 90 */	fmr f2, f1
/* 80274794 002716D4  FC 20 C0 90 */	fmr f1, f24
/* 80274798 002716D8  48 19 D4 65 */	bl angDist__Fff
/* 8027479C 002716DC  7F E4 FB 78 */	mr r4, r31
/* 802747A0 002716E0  FF 40 08 90 */	fmr f26, f1
/* 802747A4 002716E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802747A8 002716E8  38 61 00 44 */	addi r3, r1, 0x44
/* 802747AC 002716EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802747B0 002716F0  7D 89 03 A6 */	mtctr r12
/* 802747B4 002716F4  4E 80 04 21 */	bctrl 
/* 802747B8 002716F8  7F A4 EB 78 */	mr r4, r29
/* 802747BC 002716FC  38 61 00 38 */	addi r3, r1, 0x38
/* 802747C0 00271700  81 9D 00 00 */	lwz r12, 0(r29)
/* 802747C4 00271704  C3 61 00 44 */	lfs f27, 0x44(r1)
/* 802747C8 00271708  81 8C 00 08 */	lwz r12, 8(r12)
/* 802747CC 0027170C  7D 89 03 A6 */	mtctr r12
/* 802747D0 00271710  4E 80 04 21 */	bctrl 
/* 802747D4 00271714  7F E4 FB 78 */	mr r4, r31
/* 802747D8 00271718  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 802747DC 0027171C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802747E0 00271720  38 61 00 5C */	addi r3, r1, 0x5c
/* 802747E4 00271724  EF 00 D8 28 */	fsubs f24, f0, f27
/* 802747E8 00271728  81 8C 00 08 */	lwz r12, 8(r12)
/* 802747EC 0027172C  7D 89 03 A6 */	mtctr r12
/* 802747F0 00271730  4E 80 04 21 */	bctrl 
/* 802747F4 00271734  7F A4 EB 78 */	mr r4, r29
/* 802747F8 00271738  38 61 00 50 */	addi r3, r1, 0x50
/* 802747FC 0027173C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80274800 00271740  C3 61 00 60 */	lfs f27, 0x60(r1)
/* 80274804 00271744  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274808 00271748  7D 89 03 A6 */	mtctr r12
/* 8027480C 0027174C  4E 80 04 21 */	bctrl 
/* 80274810 00271750  7F E4 FB 78 */	mr r4, r31
/* 80274814 00271754  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80274818 00271758  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027481C 0027175C  38 61 00 74 */	addi r3, r1, 0x74
/* 80274820 00271760  EF 20 D8 28 */	fsubs f25, f0, f27
/* 80274824 00271764  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274828 00271768  7D 89 03 A6 */	mtctr r12
/* 8027482C 0027176C  4E 80 04 21 */	bctrl 
/* 80274830 00271770  7F A4 EB 78 */	mr r4, r29
/* 80274834 00271774  38 61 00 68 */	addi r3, r1, 0x68
/* 80274838 00271778  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027483C 0027177C  C3 61 00 7C */	lfs f27, 0x7c(r1)
/* 80274840 00271780  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274844 00271784  7D 89 03 A6 */	mtctr r12
/* 80274848 00271788  4E 80 04 21 */	bctrl 
/* 8027484C 0027178C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80274850 00271790  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 80274854 00271794  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 80274858 00271798  38 60 00 01 */	li r3, 1
/* 8027485C 0027179C  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80274860 002717A0  38 80 00 00 */	li r4, 0
/* 80274864 002717A4  EC 00 00 32 */	fmuls f0, f0, f0
/* 80274868 002717A8  EC 18 06 3A */	fmadds f0, f24, f24, f0
/* 8027486C 002717AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80274870 002717B0  40 81 00 30 */	ble .L_802748A0
/* 80274874 002717B4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80274878 002717B8  7C 80 23 78 */	mr r0, r4
/* 8027487C 002717BC  40 81 00 18 */	ble .L_80274894
/* 80274880 002717C0  FC 00 CA 10 */	fabs f0, f25
/* 80274884 002717C4  FC 00 00 18 */	frsp f0, f0
/* 80274888 002717C8  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 8027488C 002717CC  40 80 00 08 */	bge .L_80274894
/* 80274890 002717D0  7C 60 1B 78 */	mr r0, r3
.L_80274894:
/* 80274894 002717D4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80274898 002717D8  41 82 00 08 */	beq .L_802748A0
/* 8027489C 002717DC  38 80 00 01 */	li r4, 1
.L_802748A0:
/* 802748A0 002717E0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802748A4 002717E4  40 82 00 34 */	bne .L_802748D8
/* 802748A8 002717E8  C0 02 CF 60 */	lfs f0, lbl_8051B2C0@sda21(r2)
/* 802748AC 002717EC  FC 40 D2 10 */	fabs f2, f26
/* 802748B0 002717F0  C0 22 CF 5C */	lfs f1, lbl_8051B2BC@sda21(r2)
/* 802748B4 002717F4  EC 00 07 32 */	fmuls f0, f0, f28
/* 802748B8 002717F8  FC 40 10 18 */	frsp f2, f2
/* 802748BC 002717FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 802748C0 00271800  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802748C4 00271804  4C 40 13 82 */	cror 2, 0, 2
/* 802748C8 00271808  7C 00 00 26 */	mfcr r0
/* 802748CC 0027180C  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 802748D0 00271810  41 82 00 08 */	beq .L_802748D8
/* 802748D4 00271814  38 60 00 00 */	li r3, 0
.L_802748D8:
/* 802748D8 00271818  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802748DC 0027181C  41 82 00 28 */	beq .L_80274904
/* 802748E0 00271820  7F C3 F3 78 */	mr r3, r30
/* 802748E4 00271824  7F E4 FB 78 */	mr r4, r31
/* 802748E8 00271828  81 9E 00 00 */	lwz r12, 0(r30)
/* 802748EC 0027182C  38 A0 00 01 */	li r5, 1
/* 802748F0 00271830  38 C0 00 00 */	li r6, 0
/* 802748F4 00271834  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802748F8 00271838  7D 89 03 A6 */	mtctr r12
/* 802748FC 0027183C  4E 80 04 21 */	bctrl 
/* 80274900 00271840  48 00 00 48 */	b .L_80274948
.L_80274904:
/* 80274904 00271844  7F C3 F3 78 */	mr r3, r30
/* 80274908 00271848  7F E4 FB 78 */	mr r4, r31
/* 8027490C 0027184C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274910 00271850  38 A0 00 04 */	li r5, 4
/* 80274914 00271854  38 C0 00 00 */	li r6, 0
/* 80274918 00271858  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027491C 0027185C  7D 89 03 A6 */	mtctr r12
/* 80274920 00271860  4E 80 04 21 */	bctrl 
/* 80274924 00271864  48 00 00 24 */	b .L_80274948
.L_80274928:
/* 80274928 00271868  7F C3 F3 78 */	mr r3, r30
/* 8027492C 0027186C  7F E4 FB 78 */	mr r4, r31
/* 80274930 00271870  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274934 00271874  38 A0 00 01 */	li r5, 1
/* 80274938 00271878  38 C0 00 00 */	li r6, 0
/* 8027493C 0027187C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274940 00271880  7D 89 03 A6 */	mtctr r12
/* 80274944 00271884  4E 80 04 21 */	bctrl 
.L_80274948:
/* 80274948 00271888  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 8027494C 0027188C  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 80274950 00271890  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 80274954 00271894  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 80274958 00271898  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 8027495C 0027189C  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 80274960 002718A0  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 80274964 002718A4  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 80274968 002718A8  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 8027496C 002718AC  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 80274970 002718B0  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 80274974 002718B4  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 80274978 002718B8  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 8027497C 002718BC  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 80274980 002718C0  E3 01 00 B8 */	psq_l f24, 184(r1), 0, qr0
/* 80274984 002718C4  CB 01 00 B0 */	lfd f24, 0xb0(r1)
/* 80274988 002718C8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8027498C 002718CC  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80274990 002718D0  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80274994 002718D4  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80274998 002718D8  7C 08 03 A6 */	mtlr r0
/* 8027499C 002718DC  38 21 01 30 */	addi r1, r1, 0x130
/* 802749A0 002718E0  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Tank9StateMoveFPQ24Game9EnemyBase, global
/* 802749A4 002718E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802749A8 002718E8  7C 08 02 A6 */	mflr r0
/* 802749AC 002718EC  C0 22 CF 50 */	lfs f1, lbl_8051B2B0@sda21(r2)
/* 802749B0 002718F0  7C 83 23 78 */	mr r3, r4
/* 802749B4 002718F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802749B8 002718F8  4B E9 29 D9 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 802749BC 002718FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802749C0 00271900  7C 08 03 A6 */	mtlr r0
/* 802749C4 00271904  38 21 00 10 */	addi r1, r1, 0x10
/* 802749C8 00271908  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802749CC 0027190C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802749D0 00271910  7C 08 02 A6 */	mflr r0
/* 802749D4 00271914  C0 22 CF 64 */	lfs f1, lbl_8051B2C4@sda21(r2)
/* 802749D8 00271918  7C 83 23 78 */	mr r3, r4
/* 802749DC 0027191C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802749E0 00271920  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802749E4 00271924  C0 44 02 F4 */	lfs f2, 0x2f4(r4)
/* 802749E8 00271928  EC 22 08 2A */	fadds f1, f2, f1
/* 802749EC 0027192C  D0 24 02 F4 */	stfs f1, 0x2f4(r4)
/* 802749F0 00271930  C0 A4 02 F4 */	lfs f5, 0x2f4(r4)
/* 802749F4 00271934  C0 C4 01 98 */	lfs f6, 0x198(r4)
/* 802749F8 00271938  FC 20 28 90 */	fmr f1, f5
/* 802749FC 0027193C  C0 E4 01 9C */	lfs f7, 0x19c(r4)
/* 80274A00 00271940  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80274A04 00271944  C0 84 01 A0 */	lfs f4, 0x1a0(r4)
/* 80274A08 00271948  80 C4 00 C0 */	lwz r6, 0xc0(r4)
/* 80274A0C 0027194C  40 80 00 08 */	bge .L_80274A14
/* 80274A10 00271950  FC 20 28 50 */	fneg f1, f5
.L_80274A14:
/* 80274A14 00271954  C0 42 CF 68 */	lfs f2, lbl_8051B2C8@sda21(r2)
/* 80274A18 00271958  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 80274A1C 0027195C  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274A20 00271960  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 80274A24 00271964  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80274A28 00271968  C0 66 03 5C */	lfs f3, 0x35c(r6)
/* 80274A2C 0027196C  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80274A30 00271970  FC 00 08 1E */	fctiwz f0, f1
/* 80274A34 00271974  D8 01 00 08 */	stfd f0, 8(r1)
/* 80274A38 00271978  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80274A3C 0027197C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80274A40 00271980  7C 85 02 14 */	add r4, r5, r0
/* 80274A44 00271984  C0 04 00 04 */	lfs f0, 4(r4)
/* 80274A48 00271988  EC 83 20 3A */	fmadds f4, f3, f0, f4
/* 80274A4C 0027198C  40 80 00 28 */	bge .L_80274A74
/* 80274A50 00271990  C0 02 CF 6C */	lfs f0, lbl_8051B2CC@sda21(r2)
/* 80274A54 00271994  EC 05 00 32 */	fmuls f0, f5, f0
/* 80274A58 00271998  FC 00 00 1E */	fctiwz f0, f0
/* 80274A5C 0027199C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80274A60 002719A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274A64 002719A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80274A68 002719A8  7C 05 04 2E */	lfsx f0, r5, r0
/* 80274A6C 002719AC  FC 00 00 50 */	fneg f0, f0
/* 80274A70 002719B0  48 00 00 1C */	b .L_80274A8C
.L_80274A74:
/* 80274A74 002719B4  EC 05 00 B2 */	fmuls f0, f5, f2
/* 80274A78 002719B8  FC 00 00 1E */	fctiwz f0, f0
/* 80274A7C 002719BC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80274A80 002719C0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80274A84 002719C4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80274A88 002719C8  7C 05 04 2E */	lfsx f0, r5, r0
.L_80274A8C:
/* 80274A8C 002719CC  EC 23 30 3A */	fmadds f1, f3, f0, f6
/* 80274A90 002719D0  38 00 00 00 */	li r0, 0
/* 80274A94 002719D4  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274A98 002719D8  38 80 00 04 */	li r4, 4
/* 80274A9C 002719DC  38 A0 00 00 */	li r5, 0
/* 80274AA0 002719E0  D0 23 02 F8 */	stfs f1, 0x2f8(r3)
/* 80274AA4 002719E4  D0 E3 02 FC */	stfs f7, 0x2fc(r3)
/* 80274AA8 002719E8  D0 83 03 00 */	stfs f4, 0x300(r3)
/* 80274AAC 002719EC  90 03 02 30 */	stw r0, 0x230(r3)
/* 80274AB0 002719F0  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80274AB4 002719F4  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80274AB8 002719F8  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80274ABC 002719FC  4B E9 05 49 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80274AC0 00271A00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80274AC4 00271A04  7C 08 03 A6 */	mtlr r0
/* 80274AC8 00271A08  38 21 00 20 */	addi r1, r1, 0x20
/* 80274ACC 00271A0C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBase, global
/* 80274AD0 00271A10  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80274AD4 00271A14  7C 08 02 A6 */	mflr r0
/* 80274AD8 00271A18  90 01 00 74 */	stw r0, 0x74(r1)
/* 80274ADC 00271A1C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80274AE0 00271A20  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80274AE4 00271A24  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80274AE8 00271A28  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80274AEC 00271A2C  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80274AF0 00271A30  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 80274AF4 00271A34  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 80274AF8 00271A38  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 80274AFC 00271A3C  DB 61 00 20 */	stfd f27, 0x20(r1)
/* 80274B00 00271A40  F3 61 00 28 */	psq_st f27, 40(r1), 0, qr0
/* 80274B04 00271A44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80274B08 00271A48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80274B0C 00271A4C  7C 9F 23 78 */	mr r31, r4
/* 80274B10 00271A50  7C 7E 1B 78 */	mr r30, r3
/* 80274B14 00271A54  7F E3 FB 78 */	mr r3, r31
/* 80274B18 00271A58  48 00 20 D1 */	bl getViewAngle__Q34Game4Tank3ObjFv
/* 80274B1C 00271A5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80274B20 00271A60  FF E0 08 90 */	fmr f31, f1
/* 80274B24 00271A64  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80274B28 00271A68  7F E4 FB 78 */	mr r4, r31
/* 80274B2C 00271A6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274B30 00271A70  38 61 00 08 */	addi r3, r1, 8
/* 80274B34 00271A74  C3 DF 02 F8 */	lfs f30, 0x2f8(r31)
/* 80274B38 00271A78  C3 7F 03 00 */	lfs f27, 0x300(r31)
/* 80274B3C 00271A7C  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 80274B40 00271A80  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 80274B44 00271A84  7D 89 03 A6 */	mtctr r12
/* 80274B48 00271A88  4E 80 04 21 */	bctrl 
/* 80274B4C 00271A8C  C0 21 00 08 */	lfs f1, 8(r1)
/* 80274B50 00271A90  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80274B54 00271A94  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80274B58 00271A98  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80274B5C 00271A9C  EC 3E 08 28 */	fsubs f1, f30, f1
/* 80274B60 00271AA0  EC 5B 00 28 */	fsubs f2, f27, f0
/* 80274B64 00271AA4  4B DC 05 A5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80274B68 00271AA8  48 19 D0 69 */	bl roundAng__Ff
/* 80274B6C 00271AAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80274B70 00271AB0  FF C0 08 90 */	fmr f30, f1
/* 80274B74 00271AB4  7F E3 FB 78 */	mr r3, r31
/* 80274B78 00271AB8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80274B7C 00271ABC  7D 89 03 A6 */	mtctr r12
/* 80274B80 00271AC0  4E 80 04 21 */	bctrl 
/* 80274B84 00271AC4  FC 40 08 90 */	fmr f2, f1
/* 80274B88 00271AC8  FC 20 F0 90 */	fmr f1, f30
/* 80274B8C 00271ACC  48 19 D0 71 */	bl angDist__Fff
/* 80274B90 00271AD0  FF C0 08 90 */	fmr f30, f1
/* 80274B94 00271AD4  C0 02 CF 60 */	lfs f0, lbl_8051B2C0@sda21(r2)
/* 80274B98 00271AD8  C0 22 CF 5C */	lfs f1, lbl_8051B2BC@sda21(r2)
/* 80274B9C 00271ADC  EC 00 07 32 */	fmuls f0, f0, f28
/* 80274BA0 00271AE0  EF 9E 07 72 */	fmuls f28, f30, f29
/* 80274BA4 00271AE4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80274BA8 00271AE8  FC 00 E2 10 */	fabs f0, f28
/* 80274BAC 00271AEC  FC 00 00 18 */	frsp f0, f0
/* 80274BB0 00271AF0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80274BB4 00271AF4  40 81 00 1C */	ble .L_80274BD0
/* 80274BB8 00271AF8  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274BBC 00271AFC  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80274BC0 00271B00  40 81 00 0C */	ble .L_80274BCC
/* 80274BC4 00271B04  FF 80 08 90 */	fmr f28, f1
/* 80274BC8 00271B08  48 00 00 08 */	b .L_80274BD0
.L_80274BCC:
/* 80274BCC 00271B0C  FF 80 08 50 */	fneg f28, f1
.L_80274BD0:
/* 80274BD0 00271B10  7F E3 FB 78 */	mr r3, r31
/* 80274BD4 00271B14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80274BD8 00271B18  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80274BDC 00271B1C  7D 89 03 A6 */	mtctr r12
/* 80274BE0 00271B20  4E 80 04 21 */	bctrl 
/* 80274BE4 00271B24  EC 3C 08 2A */	fadds f1, f28, f1
/* 80274BE8 00271B28  48 19 CF E9 */	bl roundAng__Ff
/* 80274BEC 00271B2C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80274BF0 00271B30  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274BF4 00271B34  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 80274BF8 00271B38  D0 3F 01 A8 */	stfs f1, 0x1a8(r31)
/* 80274BFC 00271B3C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80274C00 00271B40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274C04 00271B44  4C 40 13 82 */	cror 2, 0, 2
/* 80274C08 00271B48  40 82 00 28 */	bne .L_80274C30
/* 80274C0C 00271B4C  7F C3 F3 78 */	mr r3, r30
/* 80274C10 00271B50  7F E4 FB 78 */	mr r4, r31
/* 80274C14 00271B54  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274C18 00271B58  38 A0 00 00 */	li r5, 0
/* 80274C1C 00271B5C  38 C0 00 00 */	li r6, 0
/* 80274C20 00271B60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274C24 00271B64  7D 89 03 A6 */	mtctr r12
/* 80274C28 00271B68  4E 80 04 21 */	bctrl 
/* 80274C2C 00271B6C  48 00 01 C8 */	b .L_80274DF4
.L_80274C30:
/* 80274C30 00271B70  7F E3 FB 78 */	mr r3, r31
/* 80274C34 00271B74  38 80 00 00 */	li r4, 0
/* 80274C38 00271B78  4B E9 FA 21 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80274C3C 00271B7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274C40 00271B80  40 82 00 30 */	bne .L_80274C70
/* 80274C44 00271B84  7F E3 FB 78 */	mr r3, r31
/* 80274C48 00271B88  38 80 00 00 */	li r4, 0
/* 80274C4C 00271B8C  48 00 18 B5 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 80274C50 00271B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274C54 00271B94  40 82 00 1C */	bne .L_80274C70
/* 80274C58 00271B98  FC 20 F2 10 */	fabs f1, f30
/* 80274C5C 00271B9C  C0 02 CF 70 */	lfs f0, lbl_8051B2D0@sda21(r2)
/* 80274C60 00271BA0  FC 20 08 18 */	frsp f1, f1
/* 80274C64 00271BA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274C68 00271BA8  4C 40 13 82 */	cror 2, 0, 2
/* 80274C6C 00271BAC  40 82 00 1C */	bne .L_80274C88
.L_80274C70:
/* 80274C70 00271BB0  7F E3 FB 78 */	mr r3, r31
/* 80274C74 00271BB4  4B E9 06 2D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80274C78 00271BB8  C0 22 CF 34 */	lfs f1, lbl_8051B294@sda21(r2)
/* 80274C7C 00271BBC  7F E3 FB 78 */	mr r3, r31
/* 80274C80 00271BC0  4B E9 27 11 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80274C84 00271BC4  48 00 00 34 */	b .L_80274CB8
.L_80274C88:
/* 80274C88 00271BC8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80274C8C 00271BCC  FC 20 F8 90 */	fmr f1, f31
/* 80274C90 00271BD0  7F E3 FB 78 */	mr r3, r31
/* 80274C94 00271BD4  38 80 00 00 */	li r4, 0
/* 80274C98 00271BD8  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 80274C9C 00271BDC  38 A0 00 00 */	li r5, 0
/* 80274CA0 00271BE0  38 C0 00 00 */	li r6, 0
/* 80274CA4 00271BE4  4B E9 E3 AD */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80274CA8 00271BE8  28 03 00 00 */	cmplwi r3, 0
/* 80274CAC 00271BEC  41 82 00 0C */	beq .L_80274CB8
/* 80274CB0 00271BF0  7F E3 FB 78 */	mr r3, r31
/* 80274CB4 00271BF4  4B E9 05 ED */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80274CB8:
/* 80274CB8 00271BF8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80274CBC 00271BFC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80274CC0 00271C00  28 00 00 00 */	cmplwi r0, 0
/* 80274CC4 00271C04  41 82 01 30 */	beq .L_80274DF4
/* 80274CC8 00271C08  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80274CCC 00271C0C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80274CD0 00271C10  40 82 01 24 */	bne .L_80274DF4
/* 80274CD4 00271C14  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80274CD8 00271C18  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274CDC 00271C1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80274CE0 00271C20  4C 40 13 82 */	cror 2, 0, 2
/* 80274CE4 00271C24  40 82 00 28 */	bne .L_80274D0C
/* 80274CE8 00271C28  7F C3 F3 78 */	mr r3, r30
/* 80274CEC 00271C2C  7F E4 FB 78 */	mr r4, r31
/* 80274CF0 00271C30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274CF4 00271C34  38 A0 00 00 */	li r5, 0
/* 80274CF8 00271C38  38 C0 00 00 */	li r6, 0
/* 80274CFC 00271C3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274D00 00271C40  7D 89 03 A6 */	mtctr r12
/* 80274D04 00271C44  4E 80 04 21 */	bctrl 
/* 80274D08 00271C48  48 00 00 EC */	b .L_80274DF4
.L_80274D0C:
/* 80274D0C 00271C4C  7F E3 FB 78 */	mr r3, r31
/* 80274D10 00271C50  38 80 00 00 */	li r4, 0
/* 80274D14 00271C54  4B E9 F9 45 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80274D18 00271C58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274D1C 00271C5C  41 82 00 28 */	beq .L_80274D44
/* 80274D20 00271C60  7F C3 F3 78 */	mr r3, r30
/* 80274D24 00271C64  7F E4 FB 78 */	mr r4, r31
/* 80274D28 00271C68  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274D2C 00271C6C  38 A0 00 06 */	li r5, 6
/* 80274D30 00271C70  38 C0 00 00 */	li r6, 0
/* 80274D34 00271C74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274D38 00271C78  7D 89 03 A6 */	mtctr r12
/* 80274D3C 00271C7C  4E 80 04 21 */	bctrl 
/* 80274D40 00271C80  48 00 00 B4 */	b .L_80274DF4
.L_80274D44:
/* 80274D44 00271C84  7F E3 FB 78 */	mr r3, r31
/* 80274D48 00271C88  38 80 00 00 */	li r4, 0
/* 80274D4C 00271C8C  48 00 17 B5 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 80274D50 00271C90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274D54 00271C94  41 82 00 28 */	beq .L_80274D7C
/* 80274D58 00271C98  7F C3 F3 78 */	mr r3, r30
/* 80274D5C 00271C9C  7F E4 FB 78 */	mr r4, r31
/* 80274D60 00271CA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274D64 00271CA4  38 A0 00 05 */	li r5, 5
/* 80274D68 00271CA8  38 C0 00 00 */	li r6, 0
/* 80274D6C 00271CAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274D70 00271CB0  7D 89 03 A6 */	mtctr r12
/* 80274D74 00271CB4  4E 80 04 21 */	bctrl 
/* 80274D78 00271CB8  48 00 00 7C */	b .L_80274DF4
.L_80274D7C:
/* 80274D7C 00271CBC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80274D80 00271CC0  FC 20 F8 90 */	fmr f1, f31
/* 80274D84 00271CC4  7F E3 FB 78 */	mr r3, r31
/* 80274D88 00271CC8  38 80 00 00 */	li r4, 0
/* 80274D8C 00271CCC  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 80274D90 00271CD0  38 A0 00 00 */	li r5, 0
/* 80274D94 00271CD4  38 C0 00 00 */	li r6, 0
/* 80274D98 00271CD8  4B E9 E2 B9 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80274D9C 00271CDC  28 03 00 00 */	cmplwi r3, 0
/* 80274DA0 00271CE0  41 82 00 34 */	beq .L_80274DD4
/* 80274DA4 00271CE4  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80274DA8 00271CE8  7F C3 F3 78 */	mr r3, r30
/* 80274DAC 00271CEC  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274DB0 00271CF0  7F E4 FB 78 */	mr r4, r31
/* 80274DB4 00271CF4  38 A0 00 04 */	li r5, 4
/* 80274DB8 00271CF8  38 C0 00 00 */	li r6, 0
/* 80274DBC 00271CFC  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80274DC0 00271D00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274DC4 00271D04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274DC8 00271D08  7D 89 03 A6 */	mtctr r12
/* 80274DCC 00271D0C  4E 80 04 21 */	bctrl 
/* 80274DD0 00271D10  48 00 00 24 */	b .L_80274DF4
.L_80274DD4:
/* 80274DD4 00271D14  7F C3 F3 78 */	mr r3, r30
/* 80274DD8 00271D18  7F E4 FB 78 */	mr r4, r31
/* 80274DDC 00271D1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274DE0 00271D20  38 A0 00 02 */	li r5, 2
/* 80274DE4 00271D24  38 C0 00 00 */	li r6, 0
/* 80274DE8 00271D28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274DEC 00271D2C  7D 89 03 A6 */	mtctr r12
/* 80274DF0 00271D30  4E 80 04 21 */	bctrl 
.L_80274DF4:
/* 80274DF4 00271D34  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80274DF8 00271D38  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80274DFC 00271D3C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80274E00 00271D40  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80274E04 00271D44  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80274E08 00271D48  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80274E0C 00271D4C  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 80274E10 00271D50  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 80274E14 00271D54  E3 61 00 28 */	psq_l f27, 40(r1), 0, qr0
/* 80274E18 00271D58  CB 61 00 20 */	lfd f27, 0x20(r1)
/* 80274E1C 00271D5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80274E20 00271D60  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80274E24 00271D64  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80274E28 00271D68  7C 08 03 A6 */	mtlr r0
/* 80274E2C 00271D6C  38 21 00 70 */	addi r1, r1, 0x70
/* 80274E30 00271D70  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBase, global
/* 80274E34 00271D74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80274E38 00271D78  7C 08 02 A6 */	mflr r0
/* 80274E3C 00271D7C  C0 22 CF 50 */	lfs f1, lbl_8051B2B0@sda21(r2)
/* 80274E40 00271D80  7C 83 23 78 */	mr r3, r4
/* 80274E44 00271D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80274E48 00271D88  4B E9 25 49 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 80274E4C 00271D8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274E50 00271D90  7C 08 03 A6 */	mtlr r0
/* 80274E54 00271D94  38 21 00 10 */	addi r1, r1, 0x10
/* 80274E58 00271D98  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank13StateMoveTurnFPQ24Game9EnemyBase

.fn init__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80274E5C 00271D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80274E60 00271DA0  7C 08 02 A6 */	mflr r0
/* 80274E64 00271DA4  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274E68 00271DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80274E6C 00271DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80274E70 00271DB0  7C 9F 23 78 */	mr r31, r4
/* 80274E74 00271DB4  7F E3 FB 78 */	mr r3, r31
/* 80274E78 00271DB8  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80274E7C 00271DBC  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80274E80 00271DC0  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80274E84 00271DC4  4B E8 CB 49 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80274E88 00271DC8  7F E3 FB 78 */	mr r3, r31
/* 80274E8C 00271DCC  38 80 00 04 */	li r4, 4
/* 80274E90 00271DD0  38 A0 00 00 */	li r5, 0
/* 80274E94 00271DD4  4B E9 01 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80274E98 00271DD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80274E9C 00271DDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80274EA0 00271DE0  7C 08 03 A6 */	mtlr r0
/* 80274EA4 00271DE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80274EA8 00271DE8  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBase, global
/* 80274EAC 00271DEC  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80274EB0 00271DF0  7C 08 02 A6 */	mflr r0
/* 80274EB4 00271DF4  90 01 01 14 */	stw r0, 0x114(r1)
/* 80274EB8 00271DF8  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80274EBC 00271DFC  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80274EC0 00271E00  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80274EC4 00271E04  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80274EC8 00271E08  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80274ECC 00271E0C  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80274ED0 00271E10  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80274ED4 00271E14  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80274ED8 00271E18  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80274EDC 00271E1C  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80274EE0 00271E20  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80274EE4 00271E24  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80274EE8 00271E28  DB 21 00 A0 */	stfd f25, 0xa0(r1)
/* 80274EEC 00271E2C  F3 21 00 A8 */	psq_st f25, 168(r1), 0, qr0
/* 80274EF0 00271E30  DB 01 00 90 */	stfd f24, 0x90(r1)
/* 80274EF4 00271E34  F3 01 00 98 */	psq_st f24, 152(r1), 0, qr0
/* 80274EF8 00271E38  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80274EFC 00271E3C  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80274F00 00271E40  93 A1 00 84 */	stw r29, 0x84(r1)
/* 80274F04 00271E44  7C 9F 23 78 */	mr r31, r4
/* 80274F08 00271E48  7C 7E 1B 78 */	mr r30, r3
/* 80274F0C 00271E4C  7F E3 FB 78 */	mr r3, r31
/* 80274F10 00271E50  48 00 1C D9 */	bl getViewAngle__Q34Game4Tank3ObjFv
/* 80274F14 00271E54  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 80274F18 00271E58  FF E0 08 90 */	fmr f31, f1
/* 80274F1C 00271E5C  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274F20 00271E60  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80274F24 00271E64  4C 40 13 82 */	cror 2, 0, 2
/* 80274F28 00271E68  40 82 00 28 */	bne .L_80274F50
/* 80274F2C 00271E6C  7F C3 F3 78 */	mr r3, r30
/* 80274F30 00271E70  7F E4 FB 78 */	mr r4, r31
/* 80274F34 00271E74  81 9E 00 00 */	lwz r12, 0(r30)
/* 80274F38 00271E78  38 A0 00 00 */	li r5, 0
/* 80274F3C 00271E7C  38 C0 00 00 */	li r6, 0
/* 80274F40 00271E80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80274F44 00271E84  7D 89 03 A6 */	mtctr r12
/* 80274F48 00271E88  4E 80 04 21 */	bctrl 
/* 80274F4C 00271E8C  48 00 04 F8 */	b .L_80275444
.L_80274F50:
/* 80274F50 00271E90  7F E3 FB 78 */	mr r3, r31
/* 80274F54 00271E94  38 80 00 00 */	li r4, 0
/* 80274F58 00271E98  4B E9 F7 01 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80274F5C 00271E9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274F60 00271EA0  40 82 00 18 */	bne .L_80274F78
/* 80274F64 00271EA4  7F E3 FB 78 */	mr r3, r31
/* 80274F68 00271EA8  38 80 00 00 */	li r4, 0
/* 80274F6C 00271EAC  48 00 15 95 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 80274F70 00271EB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80274F74 00271EB4  41 82 00 18 */	beq .L_80274F8C
.L_80274F78:
/* 80274F78 00271EB8  7F E3 FB 78 */	mr r3, r31
/* 80274F7C 00271EBC  4B E9 03 25 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80274F80 00271EC0  C0 22 CF 34 */	lfs f1, lbl_8051B294@sda21(r2)
/* 80274F84 00271EC4  7F E3 FB 78 */	mr r3, r31
/* 80274F88 00271EC8  4B E9 24 09 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
.L_80274F8C:
/* 80274F8C 00271ECC  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80274F90 00271ED0  28 1D 00 00 */	cmplwi r29, 0
/* 80274F94 00271ED4  41 82 02 7C */	beq .L_80275210
/* 80274F98 00271ED8  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80274F9C 00271EDC  7F A4 EB 78 */	mr r4, r29
/* 80274FA0 00271EE0  38 61 00 14 */	addi r3, r1, 0x14
/* 80274FA4 00271EE4  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80274FA8 00271EE8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80274FAC 00271EEC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80274FB0 00271EF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274FB4 00271EF4  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 80274FB8 00271EF8  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80274FBC 00271EFC  7D 89 03 A6 */	mtctr r12
/* 80274FC0 00271F00  4E 80 04 21 */	bctrl 
/* 80274FC4 00271F04  7F E4 FB 78 */	mr r4, r31
/* 80274FC8 00271F08  38 61 00 20 */	addi r3, r1, 0x20
/* 80274FCC 00271F0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80274FD0 00271F10  C3 01 00 14 */	lfs f24, 0x14(r1)
/* 80274FD4 00271F14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80274FD8 00271F18  C3 21 00 1C */	lfs f25, 0x1c(r1)
/* 80274FDC 00271F1C  7D 89 03 A6 */	mtctr r12
/* 80274FE0 00271F20  4E 80 04 21 */	bctrl 
/* 80274FE4 00271F24  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80274FE8 00271F28  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80274FEC 00271F2C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80274FF0 00271F30  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80274FF4 00271F34  EC 38 08 28 */	fsubs f1, f24, f1
/* 80274FF8 00271F38  EC 59 00 28 */	fsubs f2, f25, f0
/* 80274FFC 00271F3C  4B DC 01 0D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80275000 00271F40  48 19 CB D1 */	bl roundAng__Ff
/* 80275004 00271F44  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275008 00271F48  FF 00 08 90 */	fmr f24, f1
/* 8027500C 00271F4C  7F E3 FB 78 */	mr r3, r31
/* 80275010 00271F50  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80275014 00271F54  7D 89 03 A6 */	mtctr r12
/* 80275018 00271F58  4E 80 04 21 */	bctrl 
/* 8027501C 00271F5C  FC 40 08 90 */	fmr f2, f1
/* 80275020 00271F60  FC 20 C0 90 */	fmr f1, f24
/* 80275024 00271F64  48 19 CB D9 */	bl angDist__Fff
/* 80275028 00271F68  FF A0 08 90 */	fmr f29, f1
/* 8027502C 00271F6C  C0 02 CF 60 */	lfs f0, lbl_8051B2C0@sda21(r2)
/* 80275030 00271F70  C0 22 CF 5C */	lfs f1, lbl_8051B2BC@sda21(r2)
/* 80275034 00271F74  EC 00 07 32 */	fmuls f0, f0, f28
/* 80275038 00271F78  EF 1D 07 B2 */	fmuls f24, f29, f30
/* 8027503C 00271F7C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80275040 00271F80  FC 00 C2 10 */	fabs f0, f24
/* 80275044 00271F84  FC 00 00 18 */	frsp f0, f0
/* 80275048 00271F88  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8027504C 00271F8C  40 81 00 1C */	ble .L_80275068
/* 80275050 00271F90  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80275054 00271F94  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 80275058 00271F98  40 81 00 0C */	ble .L_80275064
/* 8027505C 00271F9C  FF 00 08 90 */	fmr f24, f1
/* 80275060 00271FA0  48 00 00 08 */	b .L_80275068
.L_80275064:
/* 80275064 00271FA4  FF 00 08 50 */	fneg f24, f1
.L_80275068:
/* 80275068 00271FA8  7F E3 FB 78 */	mr r3, r31
/* 8027506C 00271FAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275070 00271FB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80275074 00271FB4  7D 89 03 A6 */	mtctr r12
/* 80275078 00271FB8  4E 80 04 21 */	bctrl 
/* 8027507C 00271FBC  EC 38 08 2A */	fadds f1, f24, f1
/* 80275080 00271FC0  48 19 CB 51 */	bl roundAng__Ff
/* 80275084 00271FC4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80275088 00271FC8  7F A3 EB 78 */	mr r3, r29
/* 8027508C 00271FCC  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80275090 00271FD0  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80275094 00271FD4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80275098 00271FD8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8027509C 00271FDC  7D 89 03 A6 */	mtctr r12
/* 802750A0 00271FE0  4E 80 04 21 */	bctrl 
/* 802750A4 00271FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802750A8 00271FE8  41 82 01 54 */	beq .L_802751FC
/* 802750AC 00271FEC  7F E4 FB 78 */	mr r4, r31
/* 802750B0 00271FF0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802750B4 00271FF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802750B8 00271FF8  38 61 00 38 */	addi r3, r1, 0x38
/* 802750BC 00271FFC  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 802750C0 00272000  81 8C 00 08 */	lwz r12, 8(r12)
/* 802750C4 00272004  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 802750C8 00272008  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 802750CC 0027200C  7D 89 03 A6 */	mtctr r12
/* 802750D0 00272010  4E 80 04 21 */	bctrl 
/* 802750D4 00272014  7F A4 EB 78 */	mr r4, r29
/* 802750D8 00272018  38 61 00 2C */	addi r3, r1, 0x2c
/* 802750DC 0027201C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802750E0 00272020  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 802750E4 00272024  81 8C 00 08 */	lwz r12, 8(r12)
/* 802750E8 00272028  7D 89 03 A6 */	mtctr r12
/* 802750EC 0027202C  4E 80 04 21 */	bctrl 
/* 802750F0 00272030  7F E4 FB 78 */	mr r4, r31
/* 802750F4 00272034  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 802750F8 00272038  81 9F 00 00 */	lwz r12, 0(r31)
/* 802750FC 0027203C  38 61 00 50 */	addi r3, r1, 0x50
/* 80275100 00272040  EF 60 F0 28 */	fsubs f27, f0, f30
/* 80275104 00272044  81 8C 00 08 */	lwz r12, 8(r12)
/* 80275108 00272048  7D 89 03 A6 */	mtctr r12
/* 8027510C 0027204C  4E 80 04 21 */	bctrl 
/* 80275110 00272050  7F A4 EB 78 */	mr r4, r29
/* 80275114 00272054  38 61 00 44 */	addi r3, r1, 0x44
/* 80275118 00272058  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027511C 0027205C  C3 C1 00 54 */	lfs f30, 0x54(r1)
/* 80275120 00272060  81 8C 00 08 */	lwz r12, 8(r12)
/* 80275124 00272064  7D 89 03 A6 */	mtctr r12
/* 80275128 00272068  4E 80 04 21 */	bctrl 
/* 8027512C 0027206C  7F E4 FB 78 */	mr r4, r31
/* 80275130 00272070  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80275134 00272074  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275138 00272078  38 61 00 68 */	addi r3, r1, 0x68
/* 8027513C 0027207C  EF 80 F0 28 */	fsubs f28, f0, f30
/* 80275140 00272080  81 8C 00 08 */	lwz r12, 8(r12)
/* 80275144 00272084  7D 89 03 A6 */	mtctr r12
/* 80275148 00272088  4E 80 04 21 */	bctrl 
/* 8027514C 0027208C  7F A4 EB 78 */	mr r4, r29
/* 80275150 00272090  38 61 00 5C */	addi r3, r1, 0x5c
/* 80275154 00272094  81 9D 00 00 */	lwz r12, 0(r29)
/* 80275158 00272098  C3 C1 00 70 */	lfs f30, 0x70(r1)
/* 8027515C 0027209C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80275160 002720A0  7D 89 03 A6 */	mtctr r12
/* 80275164 002720A4  4E 80 04 21 */	bctrl 
/* 80275168 002720A8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 8027516C 002720AC  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 80275170 002720B0  EF 39 06 72 */	fmuls f25, f25, f25
/* 80275174 002720B4  38 60 00 01 */	li r3, 1
/* 80275178 002720B8  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8027517C 002720BC  38 80 00 00 */	li r4, 0
/* 80275180 002720C0  EC 00 00 32 */	fmuls f0, f0, f0
/* 80275184 002720C4  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 80275188 002720C8  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 8027518C 002720CC  40 81 00 30 */	ble .L_802751BC
/* 80275190 002720D0  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 80275194 002720D4  7C 80 23 78 */	mr r0, r4
/* 80275198 002720D8  40 81 00 18 */	ble .L_802751B0
/* 8027519C 002720DC  FC 00 E2 10 */	fabs f0, f28
/* 802751A0 002720E0  FC 00 00 18 */	frsp f0, f0
/* 802751A4 002720E4  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 802751A8 002720E8  40 80 00 08 */	bge .L_802751B0
/* 802751AC 002720EC  7C 60 1B 78 */	mr r0, r3
.L_802751B0:
/* 802751B0 002720F0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802751B4 002720F4  41 82 00 08 */	beq .L_802751BC
/* 802751B8 002720F8  38 80 00 01 */	li r4, 1
.L_802751BC:
/* 802751BC 002720FC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802751C0 00272100  40 82 00 34 */	bne .L_802751F4
/* 802751C4 00272104  C0 02 CF 60 */	lfs f0, lbl_8051B2C0@sda21(r2)
/* 802751C8 00272108  FC 40 EA 10 */	fabs f2, f29
/* 802751CC 0027210C  C0 22 CF 5C */	lfs f1, lbl_8051B2BC@sda21(r2)
/* 802751D0 00272110  EC 00 07 F2 */	fmuls f0, f0, f31
/* 802751D4 00272114  FC 40 10 18 */	frsp f2, f2
/* 802751D8 00272118  EC 01 00 32 */	fmuls f0, f1, f0
/* 802751DC 0027211C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802751E0 00272120  4C 40 13 82 */	cror 2, 0, 2
/* 802751E4 00272124  7C 00 00 26 */	mfcr r0
/* 802751E8 00272128  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 802751EC 0027212C  41 82 00 08 */	beq .L_802751F4
/* 802751F0 00272130  38 60 00 00 */	li r3, 0
.L_802751F4:
/* 802751F4 00272134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802751F8 00272138  41 82 01 10 */	beq .L_80275308
.L_802751FC:
/* 802751FC 0027213C  38 00 00 00 */	li r0, 0
/* 80275200 00272140  7F E3 FB 78 */	mr r3, r31
/* 80275204 00272144  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80275208 00272148  4B E9 00 99 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8027520C 0027214C  48 00 00 FC */	b .L_80275308
.L_80275210:
/* 80275210 00272150  7F E4 FB 78 */	mr r4, r31
/* 80275214 00272154  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80275218 00272158  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027521C 0027215C  38 61 00 08 */	addi r3, r1, 8
/* 80275220 00272160  C3 5F 02 F8 */	lfs f26, 0x2f8(r31)
/* 80275224 00272164  81 8C 00 08 */	lwz r12, 8(r12)
/* 80275228 00272168  C3 7F 03 00 */	lfs f27, 0x300(r31)
/* 8027522C 0027216C  C3 25 03 34 */	lfs f25, 0x334(r5)
/* 80275230 00272170  C3 05 03 0C */	lfs f24, 0x30c(r5)
/* 80275234 00272174  7D 89 03 A6 */	mtctr r12
/* 80275238 00272178  4E 80 04 21 */	bctrl 
/* 8027523C 0027217C  C0 21 00 08 */	lfs f1, 8(r1)
/* 80275240 00272180  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80275244 00272184  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80275248 00272188  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8027524C 0027218C  EC 3A 08 28 */	fsubs f1, f26, f1
/* 80275250 00272190  EC 5B 00 28 */	fsubs f2, f27, f0
/* 80275254 00272194  4B DB FE B5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80275258 00272198  48 19 C9 79 */	bl roundAng__Ff
/* 8027525C 0027219C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275260 002721A0  FF 40 08 90 */	fmr f26, f1
/* 80275264 002721A4  7F E3 FB 78 */	mr r3, r31
/* 80275268 002721A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027526C 002721AC  7D 89 03 A6 */	mtctr r12
/* 80275270 002721B0  4E 80 04 21 */	bctrl 
/* 80275274 002721B4  FC 40 08 90 */	fmr f2, f1
/* 80275278 002721B8  FC 20 D0 90 */	fmr f1, f26
/* 8027527C 002721BC  48 19 C9 81 */	bl angDist__Fff
/* 80275280 002721C0  FF C0 08 90 */	fmr f30, f1
/* 80275284 002721C4  C0 02 CF 60 */	lfs f0, lbl_8051B2C0@sda21(r2)
/* 80275288 002721C8  C0 22 CF 5C */	lfs f1, lbl_8051B2BC@sda21(r2)
/* 8027528C 002721CC  EC 00 06 72 */	fmuls f0, f0, f25
/* 80275290 002721D0  EF 1E 06 32 */	fmuls f24, f30, f24
/* 80275294 002721D4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80275298 002721D8  FC 00 C2 10 */	fabs f0, f24
/* 8027529C 002721DC  FC 00 00 18 */	frsp f0, f0
/* 802752A0 002721E0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802752A4 002721E4  40 81 00 1C */	ble .L_802752C0
/* 802752A8 002721E8  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802752AC 002721EC  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802752B0 002721F0  40 81 00 0C */	ble .L_802752BC
/* 802752B4 002721F4  FF 00 08 90 */	fmr f24, f1
/* 802752B8 002721F8  48 00 00 08 */	b .L_802752C0
.L_802752BC:
/* 802752BC 002721FC  FF 00 08 50 */	fneg f24, f1
.L_802752C0:
/* 802752C0 00272200  7F E3 FB 78 */	mr r3, r31
/* 802752C4 00272204  81 9F 00 00 */	lwz r12, 0(r31)
/* 802752C8 00272208  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802752CC 0027220C  7D 89 03 A6 */	mtctr r12
/* 802752D0 00272210  4E 80 04 21 */	bctrl 
/* 802752D4 00272214  EC 38 08 2A */	fadds f1, f24, f1
/* 802752D8 00272218  48 19 C8 F9 */	bl roundAng__Ff
/* 802752DC 0027221C  FC 60 F2 10 */	fabs f3, f30
/* 802752E0 00272220  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802752E4 00272224  C0 02 CF 70 */	lfs f0, lbl_8051B2D0@sda21(r2)
/* 802752E8 00272228  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802752EC 0027222C  FC 20 18 18 */	frsp f1, f3
/* 802752F0 00272230  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802752F4 00272234  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802752F8 00272238  4C 40 13 82 */	cror 2, 0, 2
/* 802752FC 0027223C  40 82 00 0C */	bne .L_80275308
/* 80275300 00272240  7F E3 FB 78 */	mr r3, r31
/* 80275304 00272244  4B E8 FF 9D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80275308:
/* 80275308 00272248  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8027530C 0027224C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80275310 00272250  28 00 00 00 */	cmplwi r0, 0
/* 80275314 00272254  41 82 01 30 */	beq .L_80275444
/* 80275318 00272258  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8027531C 0027225C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80275320 00272260  40 82 01 24 */	bne .L_80275444
/* 80275324 00272264  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80275328 00272268  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027532C 0027226C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80275330 00272270  4C 40 13 82 */	cror 2, 0, 2
/* 80275334 00272274  40 82 00 28 */	bne .L_8027535C
/* 80275338 00272278  7F C3 F3 78 */	mr r3, r30
/* 8027533C 0027227C  7F E4 FB 78 */	mr r4, r31
/* 80275340 00272280  81 9E 00 00 */	lwz r12, 0(r30)
/* 80275344 00272284  38 A0 00 00 */	li r5, 0
/* 80275348 00272288  38 C0 00 00 */	li r6, 0
/* 8027534C 0027228C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80275350 00272290  7D 89 03 A6 */	mtctr r12
/* 80275354 00272294  4E 80 04 21 */	bctrl 
/* 80275358 00272298  48 00 00 EC */	b .L_80275444
.L_8027535C:
/* 8027535C 0027229C  7F E3 FB 78 */	mr r3, r31
/* 80275360 002722A0  38 80 00 00 */	li r4, 0
/* 80275364 002722A4  4B E9 F2 F5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80275368 002722A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8027536C 002722AC  41 82 00 28 */	beq .L_80275394
/* 80275370 002722B0  7F C3 F3 78 */	mr r3, r30
/* 80275374 002722B4  7F E4 FB 78 */	mr r4, r31
/* 80275378 002722B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027537C 002722BC  38 A0 00 06 */	li r5, 6
/* 80275380 002722C0  38 C0 00 00 */	li r6, 0
/* 80275384 002722C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80275388 002722C8  7D 89 03 A6 */	mtctr r12
/* 8027538C 002722CC  4E 80 04 21 */	bctrl 
/* 80275390 002722D0  48 00 00 B4 */	b .L_80275444
.L_80275394:
/* 80275394 002722D4  7F E3 FB 78 */	mr r3, r31
/* 80275398 002722D8  38 80 00 00 */	li r4, 0
/* 8027539C 002722DC  48 00 11 65 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 802753A0 002722E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802753A4 002722E4  41 82 00 28 */	beq .L_802753CC
/* 802753A8 002722E8  7F C3 F3 78 */	mr r3, r30
/* 802753AC 002722EC  7F E4 FB 78 */	mr r4, r31
/* 802753B0 002722F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802753B4 002722F4  38 A0 00 05 */	li r5, 5
/* 802753B8 002722F8  38 C0 00 00 */	li r6, 0
/* 802753BC 002722FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802753C0 00272300  7D 89 03 A6 */	mtctr r12
/* 802753C4 00272304  4E 80 04 21 */	bctrl 
/* 802753C8 00272308  48 00 00 7C */	b .L_80275444
.L_802753CC:
/* 802753CC 0027230C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802753D0 00272310  FC 20 F8 90 */	fmr f1, f31
/* 802753D4 00272314  7F E3 FB 78 */	mr r3, r31
/* 802753D8 00272318  38 80 00 00 */	li r4, 0
/* 802753DC 0027231C  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802753E0 00272320  38 A0 00 00 */	li r5, 0
/* 802753E4 00272324  38 C0 00 00 */	li r6, 0
/* 802753E8 00272328  4B E9 DC 69 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802753EC 0027232C  28 03 00 00 */	cmplwi r3, 0
/* 802753F0 00272330  41 82 00 34 */	beq .L_80275424
/* 802753F4 00272334  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802753F8 00272338  7F C3 F3 78 */	mr r3, r30
/* 802753FC 0027233C  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80275400 00272340  7F E4 FB 78 */	mr r4, r31
/* 80275404 00272344  38 A0 00 04 */	li r5, 4
/* 80275408 00272348  38 C0 00 00 */	li r6, 0
/* 8027540C 0027234C  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80275410 00272350  81 9E 00 00 */	lwz r12, 0(r30)
/* 80275414 00272354  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80275418 00272358  7D 89 03 A6 */	mtctr r12
/* 8027541C 0027235C  4E 80 04 21 */	bctrl 
/* 80275420 00272360  48 00 00 24 */	b .L_80275444
.L_80275424:
/* 80275424 00272364  7F C3 F3 78 */	mr r3, r30
/* 80275428 00272368  7F E4 FB 78 */	mr r4, r31
/* 8027542C 0027236C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80275430 00272370  38 A0 00 01 */	li r5, 1
/* 80275434 00272374  38 C0 00 00 */	li r6, 0
/* 80275438 00272378  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027543C 0027237C  7D 89 03 A6 */	mtctr r12
/* 80275440 00272380  4E 80 04 21 */	bctrl 
.L_80275444:
/* 80275444 00272384  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80275448 00272388  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 8027544C 0027238C  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80275450 00272390  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80275454 00272394  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80275458 00272398  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 8027545C 0027239C  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80275460 002723A0  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80275464 002723A4  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80275468 002723A8  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 8027546C 002723AC  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80275470 002723B0  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80275474 002723B4  E3 21 00 A8 */	psq_l f25, 168(r1), 0, qr0
/* 80275478 002723B8  CB 21 00 A0 */	lfd f25, 0xa0(r1)
/* 8027547C 002723BC  E3 01 00 98 */	psq_l f24, 152(r1), 0, qr0
/* 80275480 002723C0  CB 01 00 90 */	lfd f24, 0x90(r1)
/* 80275484 002723C4  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80275488 002723C8  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8027548C 002723CC  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80275490 002723D0  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 80275494 002723D4  7C 08 03 A6 */	mtlr r0
/* 80275498 002723D8  38 21 01 10 */	addi r1, r1, 0x110
/* 8027549C 002723DC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBase, global
/* 802754A0 002723E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802754A4 002723E4  7C 08 02 A6 */	mflr r0
/* 802754A8 002723E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802754AC 002723EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802754B0 002723F0  7C 9F 23 78 */	mr r31, r4
/* 802754B4 002723F4  7F E3 FB 78 */	mr r3, r31
/* 802754B8 002723F8  4B E8 C4 C5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802754BC 002723FC  C0 22 CF 50 */	lfs f1, lbl_8051B2B0@sda21(r2)
/* 802754C0 00272400  7F E3 FB 78 */	mr r3, r31
/* 802754C4 00272404  4B E9 1E CD */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 802754C8 00272408  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802754CC 0027240C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802754D0 00272410  7C 08 03 A6 */	mtlr r0
/* 802754D4 00272414  38 21 00 10 */	addi r1, r1, 0x10
/* 802754D8 00272418  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank14StateChaseTurnFPQ24Game9EnemyBase

.fn init__Q34Game4Tank11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802754DC 0027241C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802754E0 00272420  7C 08 02 A6 */	mflr r0
/* 802754E4 00272424  38 A0 00 00 */	li r5, 0
/* 802754E8 00272428  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802754EC 0027242C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802754F0 00272430  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802754F4 00272434  7C 9F 23 78 */	mr r31, r4
/* 802754F8 00272438  7F E3 FB 78 */	mr r3, r31
/* 802754FC 0027243C  98 A4 03 04 */	stb r5, 0x304(r4)
/* 80275500 00272440  D0 04 02 E4 */	stfs f0, 0x2e4(r4)
/* 80275504 00272444  D0 04 02 EC */	stfs f0, 0x2ec(r4)
/* 80275508 00272448  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8027550C 0027244C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80275510 00272450  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80275514 00272454  90 A4 02 30 */	stw r5, 0x230(r4)
/* 80275518 00272458  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8027551C 0027245C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80275520 00272460  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80275524 00272464  4B E8 C4 A9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80275528 00272468  7F E3 FB 78 */	mr r3, r31
/* 8027552C 0027246C  38 80 00 03 */	li r4, 3
/* 80275530 00272470  38 A0 00 00 */	li r5, 0
/* 80275534 00272474  4B E8 FA D1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80275538 00272478  7F E3 FB 78 */	mr r3, r31
/* 8027553C 0027247C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275540 00272480  81 8C 03 20 */	lwz r12, 0x320(r12)
/* 80275544 00272484  7D 89 03 A6 */	mtctr r12
/* 80275548 00272488  4E 80 04 21 */	bctrl 
/* 8027554C 0027248C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275550 00272490  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275554 00272494  7C 08 03 A6 */	mtlr r0
/* 80275558 00272498  38 21 00 10 */	addi r1, r1, 0x10
/* 8027555C 0027249C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn createChargeSE__Q34Game4Tank3ObjFv, weak
/* 80275560 002724A0  4E 80 00 20 */	blr 
.endfn createChargeSE__Q34Game4Tank3ObjFv

.fn exec__Q34Game4Tank11StateAttackFPQ24Game9EnemyBase, global
/* 80275564 002724A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80275568 002724A8  7C 08 02 A6 */	mflr r0
/* 8027556C 002724AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80275570 002724B0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80275574 002724B4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80275578 002724B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027557C 002724BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80275580 002724C0  7C 9F 23 78 */	mr r31, r4
/* 80275584 002724C4  7C 7E 1B 78 */	mr r30, r3
/* 80275588 002724C8  7F E3 FB 78 */	mr r3, r31
/* 8027558C 002724CC  48 00 16 5D */	bl getViewAngle__Q34Game4Tank3ObjFv
/* 80275590 002724D0  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 80275594 002724D4  FF E0 08 90 */	fmr f31, f1
/* 80275598 002724D8  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027559C 002724DC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802755A0 002724E0  4C 40 13 82 */	cror 2, 0, 2
/* 802755A4 002724E4  40 82 00 28 */	bne .L_802755CC
/* 802755A8 002724E8  7F C3 F3 78 */	mr r3, r30
/* 802755AC 002724EC  7F E4 FB 78 */	mr r4, r31
/* 802755B0 002724F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802755B4 002724F4  38 A0 00 00 */	li r5, 0
/* 802755B8 002724F8  38 C0 00 00 */	li r6, 0
/* 802755BC 002724FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802755C0 00272500  7D 89 03 A6 */	mtctr r12
/* 802755C4 00272504  4E 80 04 21 */	bctrl 
/* 802755C8 00272508  48 00 01 5C */	b .L_80275724
.L_802755CC:
/* 802755CC 0027250C  88 1F 03 04 */	lbz r0, 0x304(r31)
/* 802755D0 00272510  28 00 00 00 */	cmplwi r0, 0
/* 802755D4 00272514  41 82 00 24 */	beq .L_802755F8
/* 802755D8 00272518  7F E3 FB 78 */	mr r3, r31
/* 802755DC 0027251C  38 80 00 01 */	li r4, 1
/* 802755E0 00272520  48 00 0F 21 */	bl isAttackable__Q34Game4Tank3ObjFb
/* 802755E4 00272524  7F E3 FB 78 */	mr r3, r31
/* 802755E8 00272528  81 9F 00 00 */	lwz r12, 0(r31)
/* 802755EC 0027252C  81 8C 03 24 */	lwz r12, 0x324(r12)
/* 802755F0 00272530  7D 89 03 A6 */	mtctr r12
/* 802755F4 00272534  4E 80 04 21 */	bctrl 
.L_802755F8:
/* 802755F8 00272538  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802755FC 0027253C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80275600 00272540  28 00 00 00 */	cmplwi r0, 0
/* 80275604 00272544  41 82 01 20 */	beq .L_80275724
/* 80275608 00272548  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8027560C 0027254C  28 00 00 02 */	cmplwi r0, 2
/* 80275610 00272550  40 82 00 24 */	bne .L_80275634
/* 80275614 00272554  38 00 00 01 */	li r0, 1
/* 80275618 00272558  7F E3 FB 78 */	mr r3, r31
/* 8027561C 0027255C  98 1F 03 04 */	stb r0, 0x304(r31)
/* 80275620 00272560  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275624 00272564  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 80275628 00272568  7D 89 03 A6 */	mtctr r12
/* 8027562C 0027256C  4E 80 04 21 */	bctrl 
/* 80275630 00272570  48 00 00 F4 */	b .L_80275724
.L_80275634:
/* 80275634 00272574  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80275638 00272578  40 82 00 EC */	bne .L_80275724
/* 8027563C 0027257C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80275640 00272580  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80275644 00272584  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80275648 00272588  4C 40 13 82 */	cror 2, 0, 2
/* 8027564C 0027258C  40 82 00 28 */	bne .L_80275674
/* 80275650 00272590  7F C3 F3 78 */	mr r3, r30
/* 80275654 00272594  7F E4 FB 78 */	mr r4, r31
/* 80275658 00272598  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027565C 0027259C  38 A0 00 00 */	li r5, 0
/* 80275660 002725A0  38 C0 00 00 */	li r6, 0
/* 80275664 002725A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80275668 002725A8  7D 89 03 A6 */	mtctr r12
/* 8027566C 002725AC  4E 80 04 21 */	bctrl 
/* 80275670 002725B0  48 00 00 B4 */	b .L_80275724
.L_80275674:
/* 80275674 002725B4  7F E3 FB 78 */	mr r3, r31
/* 80275678 002725B8  38 80 00 00 */	li r4, 0
/* 8027567C 002725BC  4B E9 EF DD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80275680 002725C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80275684 002725C4  41 82 00 28 */	beq .L_802756AC
/* 80275688 002725C8  7F C3 F3 78 */	mr r3, r30
/* 8027568C 002725CC  7F E4 FB 78 */	mr r4, r31
/* 80275690 002725D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80275694 002725D4  38 A0 00 06 */	li r5, 6
/* 80275698 002725D8  38 C0 00 00 */	li r6, 0
/* 8027569C 002725DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802756A0 002725E0  7D 89 03 A6 */	mtctr r12
/* 802756A4 002725E4  4E 80 04 21 */	bctrl 
/* 802756A8 002725E8  48 00 00 7C */	b .L_80275724
.L_802756AC:
/* 802756AC 002725EC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802756B0 002725F0  FC 20 F8 90 */	fmr f1, f31
/* 802756B4 002725F4  7F E3 FB 78 */	mr r3, r31
/* 802756B8 002725F8  38 80 00 00 */	li r4, 0
/* 802756BC 002725FC  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 802756C0 00272600  38 A0 00 00 */	li r5, 0
/* 802756C4 00272604  38 C0 00 00 */	li r6, 0
/* 802756C8 00272608  4B E9 D9 89 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 802756CC 0027260C  28 03 00 00 */	cmplwi r3, 0
/* 802756D0 00272610  41 82 00 34 */	beq .L_80275704
/* 802756D4 00272614  90 7F 02 30 */	stw r3, 0x230(r31)
/* 802756D8 00272618  7F C3 F3 78 */	mr r3, r30
/* 802756DC 0027261C  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802756E0 00272620  7F E4 FB 78 */	mr r4, r31
/* 802756E4 00272624  38 A0 00 04 */	li r5, 4
/* 802756E8 00272628  38 C0 00 00 */	li r6, 0
/* 802756EC 0027262C  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 802756F0 00272630  81 9E 00 00 */	lwz r12, 0(r30)
/* 802756F4 00272634  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802756F8 00272638  7D 89 03 A6 */	mtctr r12
/* 802756FC 0027263C  4E 80 04 21 */	bctrl 
/* 80275700 00272640  48 00 00 24 */	b .L_80275724
.L_80275704:
/* 80275704 00272644  7F C3 F3 78 */	mr r3, r30
/* 80275708 00272648  7F E4 FB 78 */	mr r4, r31
/* 8027570C 0027264C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80275710 00272650  38 A0 00 01 */	li r5, 1
/* 80275714 00272654  38 C0 00 00 */	li r6, 0
/* 80275718 00272658  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027571C 0027265C  7D 89 03 A6 */	mtctr r12
/* 80275720 00272660  4E 80 04 21 */	bctrl 
.L_80275724:
/* 80275724 00272664  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80275728 00272668  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8027572C 0027266C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80275730 00272670  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275734 00272674  83 C1 00 08 */	lwz r30, 8(r1)
/* 80275738 00272678  7C 08 03 A6 */	mtlr r0
/* 8027573C 0027267C  38 21 00 20 */	addi r1, r1, 0x20
/* 80275740 00272680  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank11StateAttackFPQ24Game9EnemyBase

.fn startEffect__Q34Game4Tank3ObjFv, weak
/* 80275744 00272684  4E 80 00 20 */	blr 
.endfn startEffect__Q34Game4Tank3ObjFv

.fn createDisChargeSE__Q34Game4Tank3ObjFv, weak
/* 80275748 00272688  4E 80 00 20 */	blr 
.endfn createDisChargeSE__Q34Game4Tank3ObjFv

.fn cleanup__Q34Game4Tank11StateAttackFPQ24Game9EnemyBase, global
/* 8027574C 0027268C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275750 00272690  7C 08 02 A6 */	mflr r0
/* 80275754 00272694  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275758 00272698  38 00 00 00 */	li r0, 0
/* 8027575C 0027269C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275760 002726A0  7C 9F 23 78 */	mr r31, r4
/* 80275764 002726A4  7F E3 FB 78 */	mr r3, r31
/* 80275768 002726A8  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 8027576C 002726AC  60 84 00 40 */	ori r4, r4, 0x40
/* 80275770 002726B0  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80275774 002726B4  98 1F 03 04 */	stb r0, 0x304(r31)
/* 80275778 002726B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8027577C 002726BC  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 80275780 002726C0  7D 89 03 A6 */	mtctr r12
/* 80275784 002726C4  4E 80 04 21 */	bctrl 
/* 80275788 002726C8  7F E3 FB 78 */	mr r3, r31
/* 8027578C 002726CC  4B E8 C1 F1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80275790 002726D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275794 002726D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275798 002726D8  7C 08 03 A6 */	mtlr r0
/* 8027579C 002726DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802757A0 002726E0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank11StateAttackFPQ24Game9EnemyBase

.fn startYodare__Q34Game4Tank3ObjFv, weak
/* 802757A4 002726E4  4E 80 00 20 */	blr 
.endfn startYodare__Q34Game4Tank3ObjFv

.fn init__Q34Game4Tank10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802757A8 002726E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802757AC 002726EC  7C 08 02 A6 */	mflr r0
/* 802757B0 002726F0  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802757B4 002726F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802757B8 002726F8  38 00 00 00 */	li r0, 0
/* 802757BC 002726FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802757C0 00272700  7C 9F 23 78 */	mr r31, r4
/* 802757C4 00272704  7F E3 FB 78 */	mr r3, r31
/* 802757C8 00272708  90 04 02 30 */	stw r0, 0x230(r4)
/* 802757CC 0027270C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802757D0 00272710  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802757D4 00272714  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802757D8 00272718  4B E8 C1 F5 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802757DC 0027271C  7F E3 FB 78 */	mr r3, r31
/* 802757E0 00272720  38 80 00 02 */	li r4, 2
/* 802757E4 00272724  38 A0 00 00 */	li r5, 0
/* 802757E8 00272728  4B E8 F8 1D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802757EC 0027272C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802757F0 00272730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802757F4 00272734  7C 08 03 A6 */	mtlr r0
/* 802757F8 00272738  38 21 00 10 */	addi r1, r1, 0x10
/* 802757FC 0027273C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Tank10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Tank10StateFlickFPQ24Game9EnemyBase, global
/* 80275800 00272740  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80275804 00272744  7C 08 02 A6 */	mflr r0
/* 80275808 00272748  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 8027580C 0027274C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80275810 00272750  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80275814 00272754  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80275818 00272758  7C 9E 23 78 */	mr r30, r4
/* 8027581C 0027275C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80275820 00272760  7C 7D 1B 78 */	mr r29, r3
/* 80275824 00272764  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80275828 00272768  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027582C 0027276C  4C 40 13 82 */	cror 2, 0, 2
/* 80275830 00272770  40 82 00 20 */	bne .L_80275850
/* 80275834 00272774  81 83 00 00 */	lwz r12, 0(r3)
/* 80275838 00272778  38 A0 00 00 */	li r5, 0
/* 8027583C 0027277C  38 C0 00 00 */	li r6, 0
/* 80275840 00272780  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80275844 00272784  7D 89 03 A6 */	mtctr r12
/* 80275848 00272788  4E 80 04 21 */	bctrl 
/* 8027584C 0027278C  48 00 01 18 */	b .L_80275964
.L_80275850:
/* 80275850 00272790  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 80275854 00272794  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80275858 00272798  28 00 00 00 */	cmplwi r0, 0
/* 8027585C 0027279C  41 82 01 08 */	beq .L_80275964
/* 80275860 002727A0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80275864 002727A4  28 00 00 02 */	cmplwi r0, 2
/* 80275868 002727A8  40 82 00 94 */	bne .L_802758FC
/* 8027586C 002727AC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80275870 002727B0  7F C3 F3 78 */	mr r3, r30
/* 80275874 002727B4  C0 82 CF 74 */	lfs f4, lbl_8051B2D4@sda21(r2)
/* 80275878 002727B8  38 80 00 00 */	li r4, 0
/* 8027587C 002727BC  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80275880 002727C0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80275884 002727C4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80275888 002727C8  4B E9 DF 09 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 8027588C 002727CC  7F C3 F3 78 */	mr r3, r30
/* 80275890 002727D0  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 80275894 002727D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80275898 002727D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8027589C 002727DC  7D 89 03 A6 */	mtctr r12
/* 802758A0 002727E0  4E 80 04 21 */	bctrl 
/* 802758A4 002727E4  FC 80 08 90 */	fmr f4, f1
/* 802758A8 002727E8  C0 3F 05 14 */	lfs f1, 0x514(r31)
/* 802758AC 002727EC  C0 5F 04 C4 */	lfs f2, 0x4c4(r31)
/* 802758B0 002727F0  7F C3 F3 78 */	mr r3, r30
/* 802758B4 002727F4  C0 7F 04 EC */	lfs f3, 0x4ec(r31)
/* 802758B8 002727F8  38 80 00 00 */	li r4, 0
/* 802758BC 002727FC  4B E9 DC 19 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802758C0 00272800  7F C3 F3 78 */	mr r3, r30
/* 802758C4 00272804  83 FE 00 C0 */	lwz r31, 0xc0(r30)
/* 802758C8 00272808  81 9E 00 00 */	lwz r12, 0(r30)
/* 802758CC 0027280C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802758D0 00272810  7D 89 03 A6 */	mtctr r12
/* 802758D4 00272814  4E 80 04 21 */	bctrl 
/* 802758D8 00272818  FC 80 08 90 */	fmr f4, f1
/* 802758DC 0027281C  C0 3F 05 3C */	lfs f1, 0x53c(r31)
/* 802758E0 00272820  C0 5F 04 C4 */	lfs f2, 0x4c4(r31)
/* 802758E4 00272824  7F C3 F3 78 */	mr r3, r30
/* 802758E8 00272828  C0 7F 04 EC */	lfs f3, 0x4ec(r31)
/* 802758EC 0027282C  38 80 00 00 */	li r4, 0
/* 802758F0 00272830  4B E9 D8 2D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802758F4 00272834  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 802758F8 00272838  D0 1E 02 0C */	stfs f0, 0x20c(r30)
.L_802758FC:
/* 802758FC 0027283C  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 80275900 00272840  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80275904 00272844  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80275908 00272848  40 82 00 5C */	bne .L_80275964
/* 8027590C 0027284C  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 80275910 00272850  C0 02 CF 30 */	lfs f0, lbl_8051B290@sda21(r2)
/* 80275914 00272854  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80275918 00272858  4C 40 13 82 */	cror 2, 0, 2
/* 8027591C 0027285C  40 82 00 28 */	bne .L_80275944
/* 80275920 00272860  7F A3 EB 78 */	mr r3, r29
/* 80275924 00272864  7F C4 F3 78 */	mr r4, r30
/* 80275928 00272868  81 9D 00 00 */	lwz r12, 0(r29)
/* 8027592C 0027286C  38 A0 00 00 */	li r5, 0
/* 80275930 00272870  38 C0 00 00 */	li r6, 0
/* 80275934 00272874  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80275938 00272878  7D 89 03 A6 */	mtctr r12
/* 8027593C 0027287C  4E 80 04 21 */	bctrl 
/* 80275940 00272880  48 00 00 24 */	b .L_80275964
.L_80275944:
/* 80275944 00272884  7F A3 EB 78 */	mr r3, r29
/* 80275948 00272888  7F C4 F3 78 */	mr r4, r30
/* 8027594C 0027288C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80275950 00272890  38 A0 00 05 */	li r5, 5
/* 80275954 00272894  38 C0 00 00 */	li r6, 0
/* 80275958 00272898  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027595C 0027289C  7D 89 03 A6 */	mtctr r12
/* 80275960 002728A0  4E 80 04 21 */	bctrl 
.L_80275964:
/* 80275964 002728A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80275968 002728A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8027596C 002728AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80275970 002728B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80275974 002728B4  7C 08 03 A6 */	mtlr r0
/* 80275978 002728B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8027597C 002728BC  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Tank10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Tank10StateFlickFPQ24Game9EnemyBase, global
/* 80275980 002728C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275984 002728C4  7C 08 02 A6 */	mflr r0
/* 80275988 002728C8  7C 83 23 78 */	mr r3, r4
/* 8027598C 002728CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275990 002728D0  4B E8 BF ED */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80275994 002728D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275998 002728D8  7C 08 03 A6 */	mtlr r0
/* 8027599C 002728DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802759A0 002728E0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Tank10StateFlickFPQ24Game9EnemyBase
