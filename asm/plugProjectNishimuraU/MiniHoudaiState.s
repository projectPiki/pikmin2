.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_MiniHoudaiState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048CD70, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8048CD70
.balign 4
.obj lbl_8048CD7C, local
	.asciz "246-MiniHoudaiState"
.endobj lbl_8048CD7C
.balign 4
.obj lbl_8048CD90, local
	.asciz "turnhome"
.endobj lbl_8048CD90
.balign 4
.obj lbl_8048CD9C, local
	.asciz "turnpath"
.endobj lbl_8048CD9C
.balign 4
.obj lbl_8048CDA8, local
	.asciz "walkhome"
.endobj lbl_8048CDA8
.balign 4
.obj lbl_8048CDB4, local
	.asciz "walkpath"
.endobj lbl_8048CDB4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game10MiniHoudai13StateWalkPath, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai13StateWalkPath
.obj __vt__Q34Game10MiniHoudai13StateWalkHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai13StateWalkHome
.obj __vt__Q34Game10MiniHoudai9StateWalk, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai9StateWalk
.obj __vt__Q34Game10MiniHoudai13StateTurnPath, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai13StateTurnPath
.obj __vt__Q34Game10MiniHoudai13StateTurnHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai13StateTurnHome
.obj __vt__Q34Game10MiniHoudai9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai9StateTurn
.obj __vt__Q34Game10MiniHoudai10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai10StateFlick
.obj __vt__Q34Game10MiniHoudai11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai11StateAttack
.obj __vt__Q34Game10MiniHoudai9StateLost, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai9StateLost
.obj __vt__Q34Game10MiniHoudai12StateRebirth, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai12StateRebirth
.obj __vt__Q34Game10MiniHoudai9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai9StateDead
.obj __vt__Q34Game10MiniHoudai5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game10MiniHoudai5State
.obj __vt__Q34Game10MiniHoudai3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10MiniHoudai3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game10MiniHoudai3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051CF10, local
	.asciz "dead"
.endobj lbl_8051CF10
.balign 4
.obj lbl_8051CF18, local
	.asciz "rebirth"
.endobj lbl_8051CF18
.balign 4
.obj lbl_8051CF20, local
	.asciz "lost"
.endobj lbl_8051CF20
.balign 4
.obj lbl_8051CF28, local
	.asciz "attack"
.endobj lbl_8051CF28
.balign 4
.obj lbl_8051CF30, local
	.asciz "flick"
.endobj lbl_8051CF30
.balign 4
.obj lbl_8051CF38, local
	.asciz "turn"
.endobj lbl_8051CF38
.balign 4
.obj lbl_8051CF40, local
	.asciz "walk"
.endobj lbl_8051CF40
.balign 4
.obj lbl_8051CF48, local
	.float 0.0
.endobj lbl_8051CF48
.obj lbl_8051CF4C, local
	.float 1.0
.endobj lbl_8051CF4C
.obj lbl_8051CF50, local
	.float 0.75
.endobj lbl_8051CF50
.obj lbl_8051CF54, local
	.float -1000.0
.endobj lbl_8051CF54
.obj lbl_8051CF58, local # pi
	.float 3.1415927
.endobj lbl_8051CF58
.obj lbl_8051CF5C, local
	.float 0.0055555557
.endobj lbl_8051CF5C
.obj lbl_8051CF60, local # pi/4
	.float 0.7853982
.endobj lbl_8051CF60
.obj lbl_8051CF64, local
	.float 45.0
.endobj lbl_8051CF64
.obj lbl_8051CF68, local
	.float 30.0
.endobj lbl_8051CF68
.obj lbl_8051CF6C, local
	.float 0.01
.endobj lbl_8051CF6C
.obj lbl_8051CF70, local
	.float 0.5
.endobj lbl_8051CF70

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game10MiniHoudai3FSMFPQ24Game9EnemyBase, global
/* 802E7F4C 002E4E8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E7F50 002E4E90  7C 08 02 A6 */	mflr r0
/* 802E7F54 002E4E94  3C 80 80 49 */	lis r4, lbl_8048CD70@ha
/* 802E7F58 002E4E98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E7F5C 002E4E9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E7F60 002E4EA0  7C 7F 1B 78 */	mr r31, r3
/* 802E7F64 002E4EA4  93 C1 00 08 */	stw r30, 8(r1)
/* 802E7F68 002E4EA8  3B C4 CD 70 */	addi r30, r4, lbl_8048CD70@l
/* 802E7F6C 002E4EAC  38 80 00 0B */	li r4, 0xb
/* 802E7F70 002E4EB0  4B E4 88 F5 */	bl create__Q24Game17EnemyStateMachineFi
/* 802E7F74 002E4EB4  38 60 00 10 */	li r3, 0x10
/* 802E7F78 002E4EB8  4B D3 BF 2D */	bl __nw__FUl
/* 802E7F7C 002E4EBC  7C 64 1B 79 */	or. r4, r3, r3
/* 802E7F80 002E4EC0  41 82 00 3C */	beq .L_802E7FBC
/* 802E7F84 002E4EC4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E7F88 002E4EC8  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E7F8C 002E4ECC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E7F90 002E4ED0  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai9StateDead@ha
/* 802E7F94 002E4ED4  90 04 00 00 */	stw r0, 0(r4)
/* 802E7F98 002E4ED8  38 E0 00 00 */	li r7, 0
/* 802E7F9C 002E4EDC  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E7FA0 002E4EE0  38 A2 EB B0 */	addi r5, r2, lbl_8051CF10@sda21
/* 802E7FA4 002E4EE4  90 E4 00 04 */	stw r7, 4(r4)
/* 802E7FA8 002E4EE8  38 03 46 BC */	addi r0, r3, __vt__Q34Game10MiniHoudai9StateDead@l
/* 802E7FAC 002E4EEC  90 E4 00 08 */	stw r7, 8(r4)
/* 802E7FB0 002E4EF0  90 C4 00 00 */	stw r6, 0(r4)
/* 802E7FB4 002E4EF4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E7FB8 002E4EF8  90 04 00 00 */	stw r0, 0(r4)
.L_802E7FBC:
/* 802E7FBC 002E4EFC  7F E3 FB 78 */	mr r3, r31
/* 802E7FC0 002E4F00  4B E4 89 49 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E7FC4 002E4F04  38 60 00 10 */	li r3, 0x10
/* 802E7FC8 002E4F08  4B D3 BE DD */	bl __nw__FUl
/* 802E7FCC 002E4F0C  7C 64 1B 79 */	or. r4, r3, r3
/* 802E7FD0 002E4F10  41 82 00 40 */	beq .L_802E8010
/* 802E7FD4 002E4F14  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E7FD8 002E4F18  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E7FDC 002E4F1C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E7FE0 002E4F20  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai12StateRebirth@ha
/* 802E7FE4 002E4F24  90 04 00 00 */	stw r0, 0(r4)
/* 802E7FE8 002E4F28  38 00 00 01 */	li r0, 1
/* 802E7FEC 002E4F2C  38 E0 00 00 */	li r7, 0
/* 802E7FF0 002E4F30  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E7FF4 002E4F34  90 04 00 04 */	stw r0, 4(r4)
/* 802E7FF8 002E4F38  38 A2 EB B8 */	addi r5, r2, lbl_8051CF18@sda21
/* 802E7FFC 002E4F3C  38 03 46 98 */	addi r0, r3, __vt__Q34Game10MiniHoudai12StateRebirth@l
/* 802E8000 002E4F40  90 E4 00 08 */	stw r7, 8(r4)
/* 802E8004 002E4F44  90 C4 00 00 */	stw r6, 0(r4)
/* 802E8008 002E4F48  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E800C 002E4F4C  90 04 00 00 */	stw r0, 0(r4)
.L_802E8010:
/* 802E8010 002E4F50  7F E3 FB 78 */	mr r3, r31
/* 802E8014 002E4F54  4B E4 88 F5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E8018 002E4F58  38 60 00 10 */	li r3, 0x10
/* 802E801C 002E4F5C  4B D3 BE 89 */	bl __nw__FUl
/* 802E8020 002E4F60  7C 64 1B 79 */	or. r4, r3, r3
/* 802E8024 002E4F64  41 82 00 40 */	beq .L_802E8064
/* 802E8028 002E4F68  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E802C 002E4F6C  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E8030 002E4F70  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E8034 002E4F74  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai9StateLost@ha
/* 802E8038 002E4F78  90 04 00 00 */	stw r0, 0(r4)
/* 802E803C 002E4F7C  38 00 00 02 */	li r0, 2
/* 802E8040 002E4F80  38 E0 00 00 */	li r7, 0
/* 802E8044 002E4F84  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E8048 002E4F88  90 04 00 04 */	stw r0, 4(r4)
/* 802E804C 002E4F8C  38 A2 EB C0 */	addi r5, r2, lbl_8051CF20@sda21
/* 802E8050 002E4F90  38 03 46 74 */	addi r0, r3, __vt__Q34Game10MiniHoudai9StateLost@l
/* 802E8054 002E4F94  90 E4 00 08 */	stw r7, 8(r4)
/* 802E8058 002E4F98  90 C4 00 00 */	stw r6, 0(r4)
/* 802E805C 002E4F9C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E8060 002E4FA0  90 04 00 00 */	stw r0, 0(r4)
.L_802E8064:
/* 802E8064 002E4FA4  7F E3 FB 78 */	mr r3, r31
/* 802E8068 002E4FA8  4B E4 88 A1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E806C 002E4FAC  38 60 00 10 */	li r3, 0x10
/* 802E8070 002E4FB0  4B D3 BE 35 */	bl __nw__FUl
/* 802E8074 002E4FB4  7C 64 1B 79 */	or. r4, r3, r3
/* 802E8078 002E4FB8  41 82 00 40 */	beq .L_802E80B8
/* 802E807C 002E4FBC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E8080 002E4FC0  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E8084 002E4FC4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E8088 002E4FC8  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai11StateAttack@ha
/* 802E808C 002E4FCC  90 04 00 00 */	stw r0, 0(r4)
/* 802E8090 002E4FD0  38 00 00 03 */	li r0, 3
/* 802E8094 002E4FD4  38 E0 00 00 */	li r7, 0
/* 802E8098 002E4FD8  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E809C 002E4FDC  90 04 00 04 */	stw r0, 4(r4)
/* 802E80A0 002E4FE0  38 A2 EB C8 */	addi r5, r2, lbl_8051CF28@sda21
/* 802E80A4 002E4FE4  38 03 46 50 */	addi r0, r3, __vt__Q34Game10MiniHoudai11StateAttack@l
/* 802E80A8 002E4FE8  90 E4 00 08 */	stw r7, 8(r4)
/* 802E80AC 002E4FEC  90 C4 00 00 */	stw r6, 0(r4)
/* 802E80B0 002E4FF0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E80B4 002E4FF4  90 04 00 00 */	stw r0, 0(r4)
.L_802E80B8:
/* 802E80B8 002E4FF8  7F E3 FB 78 */	mr r3, r31
/* 802E80BC 002E4FFC  4B E4 88 4D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E80C0 002E5000  38 60 00 10 */	li r3, 0x10
/* 802E80C4 002E5004  4B D3 BD E1 */	bl __nw__FUl
/* 802E80C8 002E5008  7C 64 1B 79 */	or. r4, r3, r3
/* 802E80CC 002E500C  41 82 00 40 */	beq .L_802E810C
/* 802E80D0 002E5010  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E80D4 002E5014  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E80D8 002E5018  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E80DC 002E501C  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai10StateFlick@ha
/* 802E80E0 002E5020  90 04 00 00 */	stw r0, 0(r4)
/* 802E80E4 002E5024  38 00 00 04 */	li r0, 4
/* 802E80E8 002E5028  38 E0 00 00 */	li r7, 0
/* 802E80EC 002E502C  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E80F0 002E5030  90 04 00 04 */	stw r0, 4(r4)
/* 802E80F4 002E5034  38 A2 EB D0 */	addi r5, r2, lbl_8051CF30@sda21
/* 802E80F8 002E5038  38 03 46 2C */	addi r0, r3, __vt__Q34Game10MiniHoudai10StateFlick@l
/* 802E80FC 002E503C  90 E4 00 08 */	stw r7, 8(r4)
/* 802E8100 002E5040  90 C4 00 00 */	stw r6, 0(r4)
/* 802E8104 002E5044  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E8108 002E5048  90 04 00 00 */	stw r0, 0(r4)
.L_802E810C:
/* 802E810C 002E504C  7F E3 FB 78 */	mr r3, r31
/* 802E8110 002E5050  4B E4 87 F9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E8114 002E5054  38 60 00 10 */	li r3, 0x10
/* 802E8118 002E5058  4B D3 BD 8D */	bl __nw__FUl
/* 802E811C 002E505C  7C 64 1B 79 */	or. r4, r3, r3
/* 802E8120 002E5060  41 82 00 40 */	beq .L_802E8160
/* 802E8124 002E5064  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E8128 002E5068  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E812C 002E506C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E8130 002E5070  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai9StateTurn@ha
/* 802E8134 002E5074  90 04 00 00 */	stw r0, 0(r4)
/* 802E8138 002E5078  38 00 00 05 */	li r0, 5
/* 802E813C 002E507C  38 E0 00 00 */	li r7, 0
/* 802E8140 002E5080  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E8144 002E5084  90 04 00 04 */	stw r0, 4(r4)
/* 802E8148 002E5088  38 A2 EB D8 */	addi r5, r2, lbl_8051CF38@sda21
/* 802E814C 002E508C  38 03 46 08 */	addi r0, r3, __vt__Q34Game10MiniHoudai9StateTurn@l
/* 802E8150 002E5090  90 E4 00 08 */	stw r7, 8(r4)
/* 802E8154 002E5094  90 C4 00 00 */	stw r6, 0(r4)
/* 802E8158 002E5098  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E815C 002E509C  90 04 00 00 */	stw r0, 0(r4)
.L_802E8160:
/* 802E8160 002E50A0  7F E3 FB 78 */	mr r3, r31
/* 802E8164 002E50A4  4B E4 87 A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E8168 002E50A8  38 60 00 10 */	li r3, 0x10
/* 802E816C 002E50AC  4B D3 BD 39 */	bl __nw__FUl
/* 802E8170 002E50B0  7C 64 1B 79 */	or. r4, r3, r3
/* 802E8174 002E50B4  41 82 00 40 */	beq .L_802E81B4
/* 802E8178 002E50B8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E817C 002E50BC  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E8180 002E50C0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E8184 002E50C4  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai13StateTurnHome@ha
/* 802E8188 002E50C8  90 04 00 00 */	stw r0, 0(r4)
/* 802E818C 002E50CC  38 00 00 06 */	li r0, 6
/* 802E8190 002E50D0  38 E0 00 00 */	li r7, 0
/* 802E8194 002E50D4  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E8198 002E50D8  90 04 00 04 */	stw r0, 4(r4)
/* 802E819C 002E50DC  38 BE 00 20 */	addi r5, r30, 0x20
/* 802E81A0 002E50E0  38 03 45 E4 */	addi r0, r3, __vt__Q34Game10MiniHoudai13StateTurnHome@l
/* 802E81A4 002E50E4  90 E4 00 08 */	stw r7, 8(r4)
/* 802E81A8 002E50E8  90 C4 00 00 */	stw r6, 0(r4)
/* 802E81AC 002E50EC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E81B0 002E50F0  90 04 00 00 */	stw r0, 0(r4)
.L_802E81B4:
/* 802E81B4 002E50F4  7F E3 FB 78 */	mr r3, r31
/* 802E81B8 002E50F8  4B E4 87 51 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E81BC 002E50FC  38 60 00 10 */	li r3, 0x10
/* 802E81C0 002E5100  4B D3 BC E5 */	bl __nw__FUl
/* 802E81C4 002E5104  7C 64 1B 79 */	or. r4, r3, r3
/* 802E81C8 002E5108  41 82 00 40 */	beq .L_802E8208
/* 802E81CC 002E510C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E81D0 002E5110  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E81D4 002E5114  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E81D8 002E5118  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai13StateTurnPath@ha
/* 802E81DC 002E511C  90 04 00 00 */	stw r0, 0(r4)
/* 802E81E0 002E5120  38 00 00 07 */	li r0, 7
/* 802E81E4 002E5124  38 E0 00 00 */	li r7, 0
/* 802E81E8 002E5128  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E81EC 002E512C  90 04 00 04 */	stw r0, 4(r4)
/* 802E81F0 002E5130  38 BE 00 2C */	addi r5, r30, 0x2c
/* 802E81F4 002E5134  38 03 45 C0 */	addi r0, r3, __vt__Q34Game10MiniHoudai13StateTurnPath@l
/* 802E81F8 002E5138  90 E4 00 08 */	stw r7, 8(r4)
/* 802E81FC 002E513C  90 C4 00 00 */	stw r6, 0(r4)
/* 802E8200 002E5140  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E8204 002E5144  90 04 00 00 */	stw r0, 0(r4)
.L_802E8208:
/* 802E8208 002E5148  7F E3 FB 78 */	mr r3, r31
/* 802E820C 002E514C  4B E4 86 FD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E8210 002E5150  38 60 00 10 */	li r3, 0x10
/* 802E8214 002E5154  4B D3 BC 91 */	bl __nw__FUl
/* 802E8218 002E5158  7C 64 1B 79 */	or. r4, r3, r3
/* 802E821C 002E515C  41 82 00 40 */	beq .L_802E825C
/* 802E8220 002E5160  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E8224 002E5164  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E8228 002E5168  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E822C 002E516C  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai9StateWalk@ha
/* 802E8230 002E5170  90 04 00 00 */	stw r0, 0(r4)
/* 802E8234 002E5174  38 00 00 08 */	li r0, 8
/* 802E8238 002E5178  38 E0 00 00 */	li r7, 0
/* 802E823C 002E517C  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E8240 002E5180  90 04 00 04 */	stw r0, 4(r4)
/* 802E8244 002E5184  38 A2 EB E0 */	addi r5, r2, lbl_8051CF40@sda21
/* 802E8248 002E5188  38 03 45 9C */	addi r0, r3, __vt__Q34Game10MiniHoudai9StateWalk@l
/* 802E824C 002E518C  90 E4 00 08 */	stw r7, 8(r4)
/* 802E8250 002E5190  90 C4 00 00 */	stw r6, 0(r4)
/* 802E8254 002E5194  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E8258 002E5198  90 04 00 00 */	stw r0, 0(r4)
.L_802E825C:
/* 802E825C 002E519C  7F E3 FB 78 */	mr r3, r31
/* 802E8260 002E51A0  4B E4 86 A9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E8264 002E51A4  38 60 00 10 */	li r3, 0x10
/* 802E8268 002E51A8  4B D3 BC 3D */	bl __nw__FUl
/* 802E826C 002E51AC  7C 64 1B 79 */	or. r4, r3, r3
/* 802E8270 002E51B0  41 82 00 40 */	beq .L_802E82B0
/* 802E8274 002E51B4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E8278 002E51B8  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E827C 002E51BC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E8280 002E51C0  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai13StateWalkHome@ha
/* 802E8284 002E51C4  90 04 00 00 */	stw r0, 0(r4)
/* 802E8288 002E51C8  38 00 00 09 */	li r0, 9
/* 802E828C 002E51CC  38 E0 00 00 */	li r7, 0
/* 802E8290 002E51D0  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E8294 002E51D4  90 04 00 04 */	stw r0, 4(r4)
/* 802E8298 002E51D8  38 BE 00 38 */	addi r5, r30, 0x38
/* 802E829C 002E51DC  38 03 45 78 */	addi r0, r3, __vt__Q34Game10MiniHoudai13StateWalkHome@l
/* 802E82A0 002E51E0  90 E4 00 08 */	stw r7, 8(r4)
/* 802E82A4 002E51E4  90 C4 00 00 */	stw r6, 0(r4)
/* 802E82A8 002E51E8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E82AC 002E51EC  90 04 00 00 */	stw r0, 0(r4)
.L_802E82B0:
/* 802E82B0 002E51F0  7F E3 FB 78 */	mr r3, r31
/* 802E82B4 002E51F4  4B E4 86 55 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E82B8 002E51F8  38 60 00 10 */	li r3, 0x10
/* 802E82BC 002E51FC  4B D3 BB E9 */	bl __nw__FUl
/* 802E82C0 002E5200  7C 64 1B 79 */	or. r4, r3, r3
/* 802E82C4 002E5204  41 82 00 40 */	beq .L_802E8304
/* 802E82C8 002E5208  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802E82CC 002E520C  3C A0 80 4D */	lis r5, __vt__Q34Game10MiniHoudai5State@ha
/* 802E82D0 002E5210  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802E82D4 002E5214  3C 60 80 4D */	lis r3, __vt__Q34Game10MiniHoudai13StateWalkPath@ha
/* 802E82D8 002E5218  90 04 00 00 */	stw r0, 0(r4)
/* 802E82DC 002E521C  38 00 00 0A */	li r0, 0xa
/* 802E82E0 002E5220  38 E0 00 00 */	li r7, 0
/* 802E82E4 002E5224  38 C5 46 E0 */	addi r6, r5, __vt__Q34Game10MiniHoudai5State@l
/* 802E82E8 002E5228  90 04 00 04 */	stw r0, 4(r4)
/* 802E82EC 002E522C  38 BE 00 44 */	addi r5, r30, 0x44
/* 802E82F0 002E5230  38 03 45 54 */	addi r0, r3, __vt__Q34Game10MiniHoudai13StateWalkPath@l
/* 802E82F4 002E5234  90 E4 00 08 */	stw r7, 8(r4)
/* 802E82F8 002E5238  90 C4 00 00 */	stw r6, 0(r4)
/* 802E82FC 002E523C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802E8300 002E5240  90 04 00 00 */	stw r0, 0(r4)
.L_802E8304:
/* 802E8304 002E5244  7F E3 FB 78 */	mr r3, r31
/* 802E8308 002E5248  4B E4 86 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802E830C 002E524C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E8310 002E5250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E8314 002E5254  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E8318 002E5258  7C 08 03 A6 */	mtlr r0
/* 802E831C 002E525C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E8320 002E5260  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai3FSMFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E8324 002E5264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E8328 002E5268  7C 08 02 A6 */	mflr r0
/* 802E832C 002E526C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E8330 002E5270  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E8334 002E5274  7C 9F 23 78 */	mr r31, r4
/* 802E8338 002E5278  7F E3 FB 78 */	mr r3, r31
/* 802E833C 002E527C  4B E1 D3 E5 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802E8340 002E5280  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8344 002E5284  7F E3 FB 78 */	mr r3, r31
/* 802E8348 002E5288  38 80 00 05 */	li r4, 5
/* 802E834C 002E528C  38 A0 00 00 */	li r5, 0
/* 802E8350 002E5290  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802E8354 002E5294  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802E8358 002E5298  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802E835C 002E529C  4B E1 CC A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E8360 002E52A0  7F E3 FB 78 */	mr r3, r31
/* 802E8364 002E52A4  48 00 54 79 */	bl createDeadLightEffect__Q34Game10MiniHoudai3ObjFv
/* 802E8368 002E52A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E836C 002E52AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E8370 002E52B0  7C 08 03 A6 */	mtlr r0
/* 802E8374 002E52B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E8378 002E52B8  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBase, global
/* 802E837C 002E52BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802E8380 002E52C0  7C 08 02 A6 */	mflr r0
/* 802E8384 002E52C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802E8388 002E52C8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802E838C 002E52CC  7C 9F 23 78 */	mr r31, r4
/* 802E8390 002E52D0  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802E8394 002E52D4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E8398 002E52D8  28 00 00 00 */	cmplwi r0, 0
/* 802E839C 002E52DC  41 82 00 D8 */	beq .L_802E8474
/* 802E83A0 002E52E0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E83A4 002E52E4  28 00 00 02 */	cmplwi r0, 2
/* 802E83A8 002E52E8  40 82 00 A0 */	bne .L_802E8448
/* 802E83AC 002E52EC  7F E3 FB 78 */	mr r3, r31
/* 802E83B0 002E52F0  48 00 54 61 */	bl createDeadBombEmitEffect__Q34Game10MiniHoudai3ObjFv
/* 802E83B4 002E52F4  C0 22 EB EC */	lfs f1, lbl_8051CF4C@sda21(r2)
/* 802E83B8 002E52F8  7F E3 FB 78 */	mr r3, r31
/* 802E83BC 002E52FC  48 00 53 99 */	bl createDownEffect__Q34Game10MiniHoudai3ObjFf
/* 802E83C0 002E5300  7F E3 FB 78 */	mr r3, r31
/* 802E83C4 002E5304  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E83C8 002E5308  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802E83CC 002E530C  7D 89 03 A6 */	mtctr r12
/* 802E83D0 002E5310  4E 80 04 21 */	bctrl 
/* 802E83D4 002E5314  81 83 00 00 */	lwz r12, 0(r3)
/* 802E83D8 002E5318  38 80 59 6B */	li r4, 0x596b
/* 802E83DC 002E531C  38 A0 00 00 */	li r5, 0
/* 802E83E0 002E5320  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802E83E4 002E5324  7D 89 03 A6 */	mtctr r12
/* 802E83E8 002E5328  4E 80 04 21 */	bctrl 
/* 802E83EC 002E532C  7F E4 FB 78 */	mr r4, r31
/* 802E83F0 002E5330  38 61 00 08 */	addi r3, r1, 8
/* 802E83F4 002E5334  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E83F8 002E5338  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E83FC 002E533C  7D 89 03 A6 */	mtctr r12
/* 802E8400 002E5340  4E 80 04 21 */	bctrl 
/* 802E8404 002E5344  C0 41 00 08 */	lfs f2, 8(r1)
/* 802E8408 002E5348  38 A1 00 14 */	addi r5, r1, 0x14
/* 802E840C 002E534C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802E8410 002E5350  38 80 00 1C */	li r4, 0x1c
/* 802E8414 002E5354  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802E8418 002E5358  38 C0 00 02 */	li r6, 2
/* 802E841C 002E535C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802E8420 002E5360  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802E8424 002E5364  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802E8428 002E5368  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802E842C 002E536C  4B F6 9E 11 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802E8430 002E5370  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802E8434 002E5374  38 A1 00 14 */	addi r5, r1, 0x14
/* 802E8438 002E5378  38 80 00 0B */	li r4, 0xb
/* 802E843C 002E537C  38 C0 00 02 */	li r6, 2
/* 802E8440 002E5380  4B F6 B3 41 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802E8444 002E5384  48 00 00 30 */	b .L_802E8474
.L_802E8448:
/* 802E8448 002E5388  28 00 00 03 */	cmplwi r0, 3
/* 802E844C 002E538C  40 82 00 14 */	bne .L_802E8460
/* 802E8450 002E5390  C0 22 EB F0 */	lfs f1, lbl_8051CF50@sda21(r2)
/* 802E8454 002E5394  7F E3 FB 78 */	mr r3, r31
/* 802E8458 002E5398  48 00 52 FD */	bl createDownEffect__Q34Game10MiniHoudai3ObjFf
/* 802E845C 002E539C  48 00 00 18 */	b .L_802E8474
.L_802E8460:
/* 802E8460 002E53A0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E8464 002E53A4  40 82 00 10 */	bne .L_802E8474
/* 802E8468 002E53A8  7F E3 FB 78 */	mr r3, r31
/* 802E846C 002E53AC  38 80 00 00 */	li r4, 0
/* 802E8470 002E53B0  4B E5 2C 81 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_802E8474:
/* 802E8474 002E53B4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802E8478 002E53B8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802E847C 002E53BC  7C 08 03 A6 */	mtlr r0
/* 802E8480 002E53C0  38 21 00 30 */	addi r1, r1, 0x30
/* 802E8484 002E53C4  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBase, global
/* 802E8488 002E53C8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E848C 002E53CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E8490 002E53D0  7C 08 02 A6 */	mflr r0
/* 802E8494 002E53D4  38 A0 FF FF */	li r5, -1
/* 802E8498 002E53D8  7C 83 23 78 */	mr r3, r4
/* 802E849C 002E53DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E84A0 002E53E0  38 00 00 00 */	li r0, 0
/* 802E84A4 002E53E4  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E84A8 002E53E8  90 A4 02 D4 */	stw r5, 0x2d4(r4)
/* 802E84AC 002E53EC  38 80 00 07 */	li r4, 7
/* 802E84B0 002E53F0  38 A0 00 00 */	li r5, 0
/* 802E84B4 002E53F4  80 C3 01 E0 */	lwz r6, 0x1e0(r3)
/* 802E84B8 002E53F8  54 C6 02 D2 */	rlwinm r6, r6, 0, 0xb, 9
/* 802E84BC 002E53FC  90 C3 01 E0 */	stw r6, 0x1e0(r3)
/* 802E84C0 002E5400  90 03 02 30 */	stw r0, 0x230(r3)
/* 802E84C4 002E5404  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802E84C8 002E5408  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802E84CC 002E540C  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802E84D0 002E5410  4B E1 CB 35 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E84D4 002E5414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E84D8 002E5418  7C 08 03 A6 */	mtlr r0
/* 802E84DC 002E541C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E84E0 002E5420  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBase, global
/* 802E84E4 002E5424  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802E84E8 002E5428  7C 08 02 A6 */	mflr r0
/* 802E84EC 002E542C  90 01 00 84 */	stw r0, 0x84(r1)
/* 802E84F0 002E5430  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802E84F4 002E5434  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802E84F8 002E5438  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802E84FC 002E543C  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802E8500 002E5440  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802E8504 002E5444  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802E8508 002E5448  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802E850C 002E544C  7C 7E 1B 78 */	mr r30, r3
/* 802E8510 002E5450  7C 9F 23 78 */	mr r31, r4
/* 802E8514 002E5454  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802E8518 002E5458  28 00 00 00 */	cmplwi r0, 0
/* 802E851C 002E545C  41 82 03 48 */	beq .L_802E8864
/* 802E8520 002E5460  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802E8524 002E5464  28 00 00 02 */	cmplwi r0, 2
/* 802E8528 002E5468  40 82 00 7C */	bne .L_802E85A4
/* 802E852C 002E546C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E8530 002E5470  7F E3 FB 78 */	mr r3, r31
/* 802E8534 002E5474  C0 82 EB F4 */	lfs f4, lbl_8051CF54@sda21(r2)
/* 802E8538 002E5478  38 80 00 00 */	li r4, 0
/* 802E853C 002E547C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802E8540 002E5480  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E8544 002E5484  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E8548 002E5488  4B E2 AB D5 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E854C 002E548C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E8550 002E5490  7F E3 FB 78 */	mr r3, r31
/* 802E8554 002E5494  C0 82 EB F4 */	lfs f4, lbl_8051CF54@sda21(r2)
/* 802E8558 002E5498  38 80 00 00 */	li r4, 0
/* 802E855C 002E549C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E8560 002E54A0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E8564 002E54A4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E8568 002E54A8  4B E2 AF 6D */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E856C 002E54AC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E8570 002E54B0  7F E3 FB 78 */	mr r3, r31
/* 802E8574 002E54B4  C0 82 EB F4 */	lfs f4, lbl_8051CF54@sda21(r2)
/* 802E8578 002E54B8  38 80 00 00 */	li r4, 0
/* 802E857C 002E54BC  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E8580 002E54C0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E8584 002E54C4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E8588 002E54C8  4B E2 B2 09 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802E858C 002E54CC  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8590 002E54D0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802E8594 002E54D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E8598 002E54D8  64 00 00 20 */	oris r0, r0, 0x20
/* 802E859C 002E54DC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E85A0 002E54E0  48 00 02 C4 */	b .L_802E8864
.L_802E85A4:
/* 802E85A4 002E54E4  28 00 00 03 */	cmplwi r0, 3
/* 802E85A8 002E54E8  40 82 00 20 */	bne .L_802E85C8
/* 802E85AC 002E54EC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802E85B0 002E54F0  7F E3 FB 78 */	mr r3, r31
/* 802E85B4 002E54F4  C0 22 EB F0 */	lfs f1, lbl_8051CF50@sda21(r2)
/* 802E85B8 002E54F8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802E85BC 002E54FC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802E85C0 002E5500  48 00 51 95 */	bl createDownEffect__Q34Game10MiniHoudai3ObjFf
/* 802E85C4 002E5504  48 00 02 A0 */	b .L_802E8864
.L_802E85C8:
/* 802E85C8 002E5508  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E85CC 002E550C  40 82 02 98 */	bne .L_802E8864
/* 802E85D0 002E5510  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E85D4 002E5514  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E85D8 002E5518  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E85DC 002E551C  4C 40 13 82 */	cror 2, 0, 2
/* 802E85E0 002E5520  40 82 00 20 */	bne .L_802E8600
/* 802E85E4 002E5524  81 83 00 00 */	lwz r12, 0(r3)
/* 802E85E8 002E5528  38 A0 00 00 */	li r5, 0
/* 802E85EC 002E552C  38 C0 00 00 */	li r6, 0
/* 802E85F0 002E5530  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E85F4 002E5534  7D 89 03 A6 */	mtctr r12
/* 802E85F8 002E5538  4E 80 04 21 */	bctrl 
/* 802E85FC 002E553C  48 00 02 68 */	b .L_802E8864
.L_802E8600:
/* 802E8600 002E5540  7F E3 FB 78 */	mr r3, r31
/* 802E8604 002E5544  38 80 00 00 */	li r4, 0
/* 802E8608 002E5548  4B E2 C0 51 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E860C 002E554C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8610 002E5550  41 82 00 28 */	beq .L_802E8638
/* 802E8614 002E5554  7F C3 F3 78 */	mr r3, r30
/* 802E8618 002E5558  7F E4 FB 78 */	mr r4, r31
/* 802E861C 002E555C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8620 002E5560  38 A0 00 04 */	li r5, 4
/* 802E8624 002E5564  38 C0 00 00 */	li r6, 0
/* 802E8628 002E5568  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E862C 002E556C  7D 89 03 A6 */	mtctr r12
/* 802E8630 002E5570  4E 80 04 21 */	bctrl 
/* 802E8634 002E5574  48 00 02 30 */	b .L_802E8864
.L_802E8638:
/* 802E8638 002E5578  7F E3 FB 78 */	mr r3, r31
/* 802E863C 002E557C  48 00 48 B1 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802E8640 002E5580  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8644 002E5584  41 82 00 28 */	beq .L_802E866C
/* 802E8648 002E5588  7F C3 F3 78 */	mr r3, r30
/* 802E864C 002E558C  7F E4 FB 78 */	mr r4, r31
/* 802E8650 002E5590  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8654 002E5594  38 A0 00 03 */	li r5, 3
/* 802E8658 002E5598  38 C0 00 00 */	li r6, 0
/* 802E865C 002E559C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8660 002E55A0  7D 89 03 A6 */	mtctr r12
/* 802E8664 002E55A4  4E 80 04 21 */	bctrl 
/* 802E8668 002E55A8  48 00 01 FC */	b .L_802E8864
.L_802E866C:
/* 802E866C 002E55AC  7F E3 FB 78 */	mr r3, r31
/* 802E8670 002E55B0  48 00 46 2D */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802E8674 002E55B4  28 03 00 00 */	cmplwi r3, 0
/* 802E8678 002E55B8  41 82 01 1C */	beq .L_802E8794
/* 802E867C 002E55BC  7C 64 1B 78 */	mr r4, r3
/* 802E8680 002E55C0  38 61 00 38 */	addi r3, r1, 0x38
/* 802E8684 002E55C4  81 84 00 00 */	lwz r12, 0(r4)
/* 802E8688 002E55C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E868C 002E55CC  7D 89 03 A6 */	mtctr r12
/* 802E8690 002E55D0  4E 80 04 21 */	bctrl 
/* 802E8694 002E55D4  7F E4 FB 78 */	mr r4, r31
/* 802E8698 002E55D8  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 802E869C 002E55DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E86A0 002E55E0  38 61 00 44 */	addi r3, r1, 0x44
/* 802E86A4 002E55E4  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 802E86A8 002E55E8  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802E86AC 002E55EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E86B0 002E55F0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802E86B4 002E55F4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802E86B8 002E55F8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E86BC 002E55FC  7D 89 03 A6 */	mtctr r12
/* 802E86C0 002E5600  4E 80 04 21 */	bctrl 
/* 802E86C4 002E5604  C0 A1 00 44 */	lfs f5, 0x44(r1)
/* 802E86C8 002E5608  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E86CC 002E560C  C0 61 00 4C */	lfs f3, 0x4c(r1)
/* 802E86D0 002E5610  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E86D4 002E5614  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 802E86D8 002E5618  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802E86DC 002E561C  C0 81 00 48 */	lfs f4, 0x48(r1)
/* 802E86E0 002E5620  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E86E4 002E5624  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E86E8 002E5628  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 802E86EC 002E562C  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 802E86F0 002E5630  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 802E86F4 002E5634  4B D4 CA 15 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E86F8 002E5638  48 12 94 D9 */	bl roundAng__Ff
/* 802E86FC 002E563C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8700 002E5640  FF E0 08 90 */	fmr f31, f1
/* 802E8704 002E5644  7F E3 FB 78 */	mr r3, r31
/* 802E8708 002E5648  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E870C 002E564C  7D 89 03 A6 */	mtctr r12
/* 802E8710 002E5650  4E 80 04 21 */	bctrl 
/* 802E8714 002E5654  FC 40 08 90 */	fmr f2, f1
/* 802E8718 002E5658  FC 20 F8 90 */	fmr f1, f31
/* 802E871C 002E565C  48 12 94 E1 */	bl angDist__Fff
/* 802E8720 002E5660  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E8724 002E5664  FC 40 0A 10 */	fabs f2, f1
/* 802E8728 002E5668  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E872C 002E566C  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E8730 002E5670  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E8734 002E5674  FC 40 10 18 */	frsp f2, f2
/* 802E8738 002E5678  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E873C 002E567C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E8740 002E5680  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E8744 002E5684  4C 40 13 82 */	cror 2, 0, 2
/* 802E8748 002E5688  40 82 00 28 */	bne .L_802E8770
/* 802E874C 002E568C  7F C3 F3 78 */	mr r3, r30
/* 802E8750 002E5690  7F E4 FB 78 */	mr r4, r31
/* 802E8754 002E5694  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8758 002E5698  38 A0 00 08 */	li r5, 8
/* 802E875C 002E569C  38 C0 00 00 */	li r6, 0
/* 802E8760 002E56A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8764 002E56A4  7D 89 03 A6 */	mtctr r12
/* 802E8768 002E56A8  4E 80 04 21 */	bctrl 
/* 802E876C 002E56AC  48 00 00 F8 */	b .L_802E8864
.L_802E8770:
/* 802E8770 002E56B0  7F C3 F3 78 */	mr r3, r30
/* 802E8774 002E56B4  7F E4 FB 78 */	mr r4, r31
/* 802E8778 002E56B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E877C 002E56BC  38 A0 00 05 */	li r5, 5
/* 802E8780 002E56C0  38 C0 00 00 */	li r6, 0
/* 802E8784 002E56C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8788 002E56C8  7D 89 03 A6 */	mtctr r12
/* 802E878C 002E56CC  4E 80 04 21 */	bctrl 
/* 802E8790 002E56D0  48 00 00 D4 */	b .L_802E8864
.L_802E8794:
/* 802E8794 002E56D4  7F E4 FB 78 */	mr r4, r31
/* 802E8798 002E56D8  38 61 00 14 */	addi r3, r1, 0x14
/* 802E879C 002E56DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E87A0 002E56E0  C3 FF 02 E4 */	lfs f31, 0x2e4(r31)
/* 802E87A4 002E56E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E87A8 002E56E8  C3 DF 02 EC */	lfs f30, 0x2ec(r31)
/* 802E87AC 002E56EC  7D 89 03 A6 */	mtctr r12
/* 802E87B0 002E56F0  4E 80 04 21 */	bctrl 
/* 802E87B4 002E56F4  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802E87B8 002E56F8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E87BC 002E56FC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802E87C0 002E5700  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E87C4 002E5704  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802E87C8 002E5708  EC 3F 20 28 */	fsubs f1, f31, f4
/* 802E87CC 002E570C  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802E87D0 002E5710  D0 81 00 08 */	stfs f4, 8(r1)
/* 802E87D4 002E5714  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802E87D8 002E5718  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E87DC 002E571C  4B D4 C9 2D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E87E0 002E5720  48 12 93 F1 */	bl roundAng__Ff
/* 802E87E4 002E5724  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E87E8 002E5728  FF E0 08 90 */	fmr f31, f1
/* 802E87EC 002E572C  7F E3 FB 78 */	mr r3, r31
/* 802E87F0 002E5730  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E87F4 002E5734  7D 89 03 A6 */	mtctr r12
/* 802E87F8 002E5738  4E 80 04 21 */	bctrl 
/* 802E87FC 002E573C  FC 40 08 90 */	fmr f2, f1
/* 802E8800 002E5740  FC 20 F8 90 */	fmr f1, f31
/* 802E8804 002E5744  48 12 93 F9 */	bl angDist__Fff
/* 802E8808 002E5748  FC 20 0A 10 */	fabs f1, f1
/* 802E880C 002E574C  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E8810 002E5750  FC 20 08 18 */	frsp f1, f1
/* 802E8814 002E5754  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8818 002E5758  4C 40 13 82 */	cror 2, 0, 2
/* 802E881C 002E575C  40 82 00 28 */	bne .L_802E8844
/* 802E8820 002E5760  7F C3 F3 78 */	mr r3, r30
/* 802E8824 002E5764  7F E4 FB 78 */	mr r4, r31
/* 802E8828 002E5768  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E882C 002E576C  38 A0 00 0A */	li r5, 0xa
/* 802E8830 002E5770  38 C0 00 00 */	li r6, 0
/* 802E8834 002E5774  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8838 002E5778  7D 89 03 A6 */	mtctr r12
/* 802E883C 002E577C  4E 80 04 21 */	bctrl 
/* 802E8840 002E5780  48 00 00 24 */	b .L_802E8864
.L_802E8844:
/* 802E8844 002E5784  7F C3 F3 78 */	mr r3, r30
/* 802E8848 002E5788  7F E4 FB 78 */	mr r4, r31
/* 802E884C 002E578C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8850 002E5790  38 A0 00 07 */	li r5, 7
/* 802E8854 002E5794  38 C0 00 00 */	li r6, 0
/* 802E8858 002E5798  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E885C 002E579C  7D 89 03 A6 */	mtctr r12
/* 802E8860 002E57A0  4E 80 04 21 */	bctrl 
.L_802E8864:
/* 802E8864 002E57A4  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802E8868 002E57A8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802E886C 002E57AC  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802E8870 002E57B0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802E8874 002E57B4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802E8878 002E57B8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802E887C 002E57BC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802E8880 002E57C0  7C 08 03 A6 */	mtlr r0
/* 802E8884 002E57C4  38 21 00 80 */	addi r1, r1, 0x80
/* 802E8888 002E57C8  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBase, global
/* 802E888C 002E57CC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802E8890 002E57D0  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802E8894 002E57D4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802E8898 002E57D8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai12StateRebirthFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E889C 002E57DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E88A0 002E57E0  7C 08 02 A6 */	mflr r0
/* 802E88A4 002E57E4  38 A0 FF FF */	li r5, -1
/* 802E88A8 002E57E8  7C 83 23 78 */	mr r3, r4
/* 802E88AC 002E57EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E88B0 002E57F0  38 00 00 00 */	li r0, 0
/* 802E88B4 002E57F4  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E88B8 002E57F8  90 A4 02 D4 */	stw r5, 0x2d4(r4)
/* 802E88BC 002E57FC  38 80 00 01 */	li r4, 1
/* 802E88C0 002E5800  38 A0 00 00 */	li r5, 0
/* 802E88C4 002E5804  90 03 02 30 */	stw r0, 0x230(r3)
/* 802E88C8 002E5808  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802E88CC 002E580C  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802E88D0 002E5810  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802E88D4 002E5814  4B E1 C7 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E88D8 002E5818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E88DC 002E581C  7C 08 03 A6 */	mtlr r0
/* 802E88E0 002E5820  38 21 00 10 */	addi r1, r1, 0x10
/* 802E88E4 002E5824  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBase, global
/* 802E88E8 002E5828  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802E88EC 002E582C  7C 08 02 A6 */	mflr r0
/* 802E88F0 002E5830  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802E88F4 002E5834  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802E88F8 002E5838  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802E88FC 002E583C  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802E8900 002E5840  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802E8904 002E5844  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802E8908 002E5848  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802E890C 002E584C  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 802E8910 002E5850  93 C1 00 98 */	stw r30, 0x98(r1)
/* 802E8914 002E5854  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802E8918 002E5858  7C 7E 1B 78 */	mr r30, r3
/* 802E891C 002E585C  7C 9F 23 78 */	mr r31, r4
/* 802E8920 002E5860  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802E8924 002E5864  28 00 00 00 */	cmplwi r0, 0
/* 802E8928 002E5868  41 82 04 9C */	beq .L_802E8DC4
/* 802E892C 002E586C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802E8930 002E5870  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E8934 002E5874  40 82 04 90 */	bne .L_802E8DC4
/* 802E8938 002E5878  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E893C 002E587C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8940 002E5880  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8944 002E5884  4C 40 13 82 */	cror 2, 0, 2
/* 802E8948 002E5888  40 82 00 20 */	bne .L_802E8968
/* 802E894C 002E588C  81 83 00 00 */	lwz r12, 0(r3)
/* 802E8950 002E5890  38 A0 00 00 */	li r5, 0
/* 802E8954 002E5894  38 C0 00 00 */	li r6, 0
/* 802E8958 002E5898  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E895C 002E589C  7D 89 03 A6 */	mtctr r12
/* 802E8960 002E58A0  4E 80 04 21 */	bctrl 
/* 802E8964 002E58A4  48 00 04 60 */	b .L_802E8DC4
.L_802E8968:
/* 802E8968 002E58A8  7F E3 FB 78 */	mr r3, r31
/* 802E896C 002E58AC  38 80 00 00 */	li r4, 0
/* 802E8970 002E58B0  4B E2 BC E9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E8974 002E58B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8978 002E58B8  41 82 00 28 */	beq .L_802E89A0
/* 802E897C 002E58BC  7F C3 F3 78 */	mr r3, r30
/* 802E8980 002E58C0  7F E4 FB 78 */	mr r4, r31
/* 802E8984 002E58C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8988 002E58C8  38 A0 00 04 */	li r5, 4
/* 802E898C 002E58CC  38 C0 00 00 */	li r6, 0
/* 802E8990 002E58D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8994 002E58D4  7D 89 03 A6 */	mtctr r12
/* 802E8998 002E58D8  4E 80 04 21 */	bctrl 
/* 802E899C 002E58DC  48 00 04 28 */	b .L_802E8DC4
.L_802E89A0:
/* 802E89A0 002E58E0  7F E4 FB 78 */	mr r4, r31
/* 802E89A4 002E58E4  38 61 00 80 */	addi r3, r1, 0x80
/* 802E89A8 002E58E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E89AC 002E58EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E89B0 002E58F0  7D 89 03 A6 */	mtctr r12
/* 802E89B4 002E58F4  4E 80 04 21 */	bctrl 
/* 802E89B8 002E58F8  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802E89BC 002E58FC  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802E89C0 002E5900  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E89C4 002E5904  EC 40 E8 28 */	fsubs f2, f0, f29
/* 802E89C8 002E5908  C3 DF 01 98 */	lfs f30, 0x198(r31)
/* 802E89CC 002E590C  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 802E89D0 002E5910  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802E89D4 002E5914  EC 61 F0 28 */	fsubs f3, f1, f30
/* 802E89D8 002E5918  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802E89DC 002E591C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E89E0 002E5920  EF E3 08 FA */	fmadds f31, f3, f3, f1
/* 802E89E4 002E5924  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802E89E8 002E5928  40 81 00 D0 */	ble .L_802E8AB8
/* 802E89EC 002E592C  7F E4 FB 78 */	mr r4, r31
/* 802E89F0 002E5930  38 61 00 74 */	addi r3, r1, 0x74
/* 802E89F4 002E5934  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E89F8 002E5938  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E89FC 002E593C  7D 89 03 A6 */	mtctr r12
/* 802E8A00 002E5940  4E 80 04 21 */	bctrl 
/* 802E8A04 002E5944  C0 81 00 74 */	lfs f4, 0x74(r1)
/* 802E8A08 002E5948  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E8A0C 002E594C  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 802E8A10 002E5950  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E8A14 002E5954  C0 61 00 78 */	lfs f3, 0x78(r1)
/* 802E8A18 002E5958  EC 3E 20 28 */	fsubs f1, f30, f4
/* 802E8A1C 002E595C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802E8A20 002E5960  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 802E8A24 002E5964  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 802E8A28 002E5968  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 802E8A2C 002E596C  4B D4 C6 DD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E8A30 002E5970  48 12 91 A1 */	bl roundAng__Ff
/* 802E8A34 002E5974  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8A38 002E5978  FF E0 08 90 */	fmr f31, f1
/* 802E8A3C 002E597C  7F E3 FB 78 */	mr r3, r31
/* 802E8A40 002E5980  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E8A44 002E5984  7D 89 03 A6 */	mtctr r12
/* 802E8A48 002E5988  4E 80 04 21 */	bctrl 
/* 802E8A4C 002E598C  FC 40 08 90 */	fmr f2, f1
/* 802E8A50 002E5990  FC 20 F8 90 */	fmr f1, f31
/* 802E8A54 002E5994  48 12 91 A9 */	bl angDist__Fff
/* 802E8A58 002E5998  FC 20 0A 10 */	fabs f1, f1
/* 802E8A5C 002E599C  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E8A60 002E59A0  FC 20 08 18 */	frsp f1, f1
/* 802E8A64 002E59A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8A68 002E59A8  4C 40 13 82 */	cror 2, 0, 2
/* 802E8A6C 002E59AC  40 82 00 28 */	bne .L_802E8A94
/* 802E8A70 002E59B0  7F C3 F3 78 */	mr r3, r30
/* 802E8A74 002E59B4  7F E4 FB 78 */	mr r4, r31
/* 802E8A78 002E59B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8A7C 002E59BC  38 A0 00 09 */	li r5, 9
/* 802E8A80 002E59C0  38 C0 00 00 */	li r6, 0
/* 802E8A84 002E59C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8A88 002E59C8  7D 89 03 A6 */	mtctr r12
/* 802E8A8C 002E59CC  4E 80 04 21 */	bctrl 
/* 802E8A90 002E59D0  48 00 03 34 */	b .L_802E8DC4
.L_802E8A94:
/* 802E8A94 002E59D4  7F C3 F3 78 */	mr r3, r30
/* 802E8A98 002E59D8  7F E4 FB 78 */	mr r4, r31
/* 802E8A9C 002E59DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8AA0 002E59E0  38 A0 00 06 */	li r5, 6
/* 802E8AA4 002E59E4  38 C0 00 00 */	li r6, 0
/* 802E8AA8 002E59E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8AAC 002E59EC  7D 89 03 A6 */	mtctr r12
/* 802E8AB0 002E59F0  4E 80 04 21 */	bctrl 
/* 802E8AB4 002E59F4  48 00 03 10 */	b .L_802E8DC4
.L_802E8AB8:
/* 802E8AB8 002E59F8  7F E3 FB 78 */	mr r3, r31
/* 802E8ABC 002E59FC  48 00 44 31 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802E8AC0 002E5A00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8AC4 002E5A04  41 82 00 28 */	beq .L_802E8AEC
/* 802E8AC8 002E5A08  7F C3 F3 78 */	mr r3, r30
/* 802E8ACC 002E5A0C  7F E4 FB 78 */	mr r4, r31
/* 802E8AD0 002E5A10  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8AD4 002E5A14  38 A0 00 03 */	li r5, 3
/* 802E8AD8 002E5A18  38 C0 00 00 */	li r6, 0
/* 802E8ADC 002E5A1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8AE0 002E5A20  7D 89 03 A6 */	mtctr r12
/* 802E8AE4 002E5A24  4E 80 04 21 */	bctrl 
/* 802E8AE8 002E5A28  48 00 02 DC */	b .L_802E8DC4
.L_802E8AEC:
/* 802E8AEC 002E5A2C  7F E3 FB 78 */	mr r3, r31
/* 802E8AF0 002E5A30  48 00 41 AD */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802E8AF4 002E5A34  28 03 00 00 */	cmplwi r3, 0
/* 802E8AF8 002E5A38  41 82 01 1C */	beq .L_802E8C14
/* 802E8AFC 002E5A3C  7C 64 1B 78 */	mr r4, r3
/* 802E8B00 002E5A40  38 61 00 50 */	addi r3, r1, 0x50
/* 802E8B04 002E5A44  81 84 00 00 */	lwz r12, 0(r4)
/* 802E8B08 002E5A48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E8B0C 002E5A4C  7D 89 03 A6 */	mtctr r12
/* 802E8B10 002E5A50  4E 80 04 21 */	bctrl 
/* 802E8B14 002E5A54  7F E4 FB 78 */	mr r4, r31
/* 802E8B18 002E5A58  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 802E8B1C 002E5A5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8B20 002E5A60  38 61 00 5C */	addi r3, r1, 0x5c
/* 802E8B24 002E5A64  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 802E8B28 002E5A68  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802E8B2C 002E5A6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E8B30 002E5A70  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802E8B34 002E5A74  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802E8B38 002E5A78  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802E8B3C 002E5A7C  7D 89 03 A6 */	mtctr r12
/* 802E8B40 002E5A80  4E 80 04 21 */	bctrl 
/* 802E8B44 002E5A84  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 802E8B48 002E5A88  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E8B4C 002E5A8C  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 802E8B50 002E5A90  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E8B54 002E5A94  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802E8B58 002E5A98  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802E8B5C 002E5A9C  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 802E8B60 002E5AA0  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E8B64 002E5AA4  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E8B68 002E5AA8  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 802E8B6C 002E5AAC  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 802E8B70 002E5AB0  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 802E8B74 002E5AB4  4B D4 C5 95 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E8B78 002E5AB8  48 12 90 59 */	bl roundAng__Ff
/* 802E8B7C 002E5ABC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8B80 002E5AC0  FF E0 08 90 */	fmr f31, f1
/* 802E8B84 002E5AC4  7F E3 FB 78 */	mr r3, r31
/* 802E8B88 002E5AC8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E8B8C 002E5ACC  7D 89 03 A6 */	mtctr r12
/* 802E8B90 002E5AD0  4E 80 04 21 */	bctrl 
/* 802E8B94 002E5AD4  FC 40 08 90 */	fmr f2, f1
/* 802E8B98 002E5AD8  FC 20 F8 90 */	fmr f1, f31
/* 802E8B9C 002E5ADC  48 12 90 61 */	bl angDist__Fff
/* 802E8BA0 002E5AE0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E8BA4 002E5AE4  FC 40 0A 10 */	fabs f2, f1
/* 802E8BA8 002E5AE8  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E8BAC 002E5AEC  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E8BB0 002E5AF0  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E8BB4 002E5AF4  FC 40 10 18 */	frsp f2, f2
/* 802E8BB8 002E5AF8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E8BBC 002E5AFC  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E8BC0 002E5B00  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E8BC4 002E5B04  4C 40 13 82 */	cror 2, 0, 2
/* 802E8BC8 002E5B08  40 82 00 28 */	bne .L_802E8BF0
/* 802E8BCC 002E5B0C  7F C3 F3 78 */	mr r3, r30
/* 802E8BD0 002E5B10  7F E4 FB 78 */	mr r4, r31
/* 802E8BD4 002E5B14  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8BD8 002E5B18  38 A0 00 08 */	li r5, 8
/* 802E8BDC 002E5B1C  38 C0 00 00 */	li r6, 0
/* 802E8BE0 002E5B20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8BE4 002E5B24  7D 89 03 A6 */	mtctr r12
/* 802E8BE8 002E5B28  4E 80 04 21 */	bctrl 
/* 802E8BEC 002E5B2C  48 00 01 D8 */	b .L_802E8DC4
.L_802E8BF0:
/* 802E8BF0 002E5B30  7F C3 F3 78 */	mr r3, r30
/* 802E8BF4 002E5B34  7F E4 FB 78 */	mr r4, r31
/* 802E8BF8 002E5B38  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8BFC 002E5B3C  38 A0 00 05 */	li r5, 5
/* 802E8C00 002E5B40  38 C0 00 00 */	li r6, 0
/* 802E8C04 002E5B44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8C08 002E5B48  7D 89 03 A6 */	mtctr r12
/* 802E8C0C 002E5B4C  4E 80 04 21 */	bctrl 
/* 802E8C10 002E5B50  48 00 01 B4 */	b .L_802E8DC4
.L_802E8C14:
/* 802E8C14 002E5B54  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E8C18 002E5B58  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802E8C1C 002E5B5C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E8C20 002E5B60  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802E8C24 002E5B64  40 80 00 D8 */	bge .L_802E8CFC
/* 802E8C28 002E5B68  7F E4 FB 78 */	mr r4, r31
/* 802E8C2C 002E5B6C  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E8C30 002E5B70  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8C34 002E5B74  C3 BF 02 E4 */	lfs f29, 0x2e4(r31)
/* 802E8C38 002E5B78  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E8C3C 002E5B7C  C3 DF 02 EC */	lfs f30, 0x2ec(r31)
/* 802E8C40 002E5B80  7D 89 03 A6 */	mtctr r12
/* 802E8C44 002E5B84  4E 80 04 21 */	bctrl 
/* 802E8C48 002E5B88  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802E8C4C 002E5B8C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E8C50 002E5B90  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802E8C54 002E5B94  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E8C58 002E5B98  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802E8C5C 002E5B9C  EC 3D 20 28 */	fsubs f1, f29, f4
/* 802E8C60 002E5BA0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802E8C64 002E5BA4  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802E8C68 002E5BA8  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802E8C6C 002E5BAC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E8C70 002E5BB0  4B D4 C4 99 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E8C74 002E5BB4  48 12 8F 5D */	bl roundAng__Ff
/* 802E8C78 002E5BB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8C7C 002E5BBC  FF E0 08 90 */	fmr f31, f1
/* 802E8C80 002E5BC0  7F E3 FB 78 */	mr r3, r31
/* 802E8C84 002E5BC4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E8C88 002E5BC8  7D 89 03 A6 */	mtctr r12
/* 802E8C8C 002E5BCC  4E 80 04 21 */	bctrl 
/* 802E8C90 002E5BD0  FC 40 08 90 */	fmr f2, f1
/* 802E8C94 002E5BD4  FC 20 F8 90 */	fmr f1, f31
/* 802E8C98 002E5BD8  48 12 8F 65 */	bl angDist__Fff
/* 802E8C9C 002E5BDC  FC 20 0A 10 */	fabs f1, f1
/* 802E8CA0 002E5BE0  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E8CA4 002E5BE4  FC 20 08 18 */	frsp f1, f1
/* 802E8CA8 002E5BE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8CAC 002E5BEC  4C 40 13 82 */	cror 2, 0, 2
/* 802E8CB0 002E5BF0  40 82 00 28 */	bne .L_802E8CD8
/* 802E8CB4 002E5BF4  7F C3 F3 78 */	mr r3, r30
/* 802E8CB8 002E5BF8  7F E4 FB 78 */	mr r4, r31
/* 802E8CBC 002E5BFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8CC0 002E5C00  38 A0 00 0A */	li r5, 0xa
/* 802E8CC4 002E5C04  38 C0 00 00 */	li r6, 0
/* 802E8CC8 002E5C08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8CCC 002E5C0C  7D 89 03 A6 */	mtctr r12
/* 802E8CD0 002E5C10  4E 80 04 21 */	bctrl 
/* 802E8CD4 002E5C14  48 00 00 F0 */	b .L_802E8DC4
.L_802E8CD8:
/* 802E8CD8 002E5C18  7F C3 F3 78 */	mr r3, r30
/* 802E8CDC 002E5C1C  7F E4 FB 78 */	mr r4, r31
/* 802E8CE0 002E5C20  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8CE4 002E5C24  38 A0 00 07 */	li r5, 7
/* 802E8CE8 002E5C28  38 C0 00 00 */	li r6, 0
/* 802E8CEC 002E5C2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8CF0 002E5C30  7D 89 03 A6 */	mtctr r12
/* 802E8CF4 002E5C34  4E 80 04 21 */	bctrl 
/* 802E8CF8 002E5C38  48 00 00 CC */	b .L_802E8DC4
.L_802E8CFC:
/* 802E8CFC 002E5C3C  7F E4 FB 78 */	mr r4, r31
/* 802E8D00 002E5C40  38 61 00 14 */	addi r3, r1, 0x14
/* 802E8D04 002E5C44  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8D08 002E5C48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E8D0C 002E5C4C  7D 89 03 A6 */	mtctr r12
/* 802E8D10 002E5C50  4E 80 04 21 */	bctrl 
/* 802E8D14 002E5C54  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802E8D18 002E5C58  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E8D1C 002E5C5C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802E8D20 002E5C60  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E8D24 002E5C64  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802E8D28 002E5C68  EC 3E 20 28 */	fsubs f1, f30, f4
/* 802E8D2C 002E5C6C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802E8D30 002E5C70  D0 81 00 08 */	stfs f4, 8(r1)
/* 802E8D34 002E5C74  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802E8D38 002E5C78  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E8D3C 002E5C7C  4B D4 C3 CD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E8D40 002E5C80  48 12 8E 91 */	bl roundAng__Ff
/* 802E8D44 002E5C84  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E8D48 002E5C88  FF E0 08 90 */	fmr f31, f1
/* 802E8D4C 002E5C8C  7F E3 FB 78 */	mr r3, r31
/* 802E8D50 002E5C90  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E8D54 002E5C94  7D 89 03 A6 */	mtctr r12
/* 802E8D58 002E5C98  4E 80 04 21 */	bctrl 
/* 802E8D5C 002E5C9C  FC 40 08 90 */	fmr f2, f1
/* 802E8D60 002E5CA0  FC 20 F8 90 */	fmr f1, f31
/* 802E8D64 002E5CA4  48 12 8E 99 */	bl angDist__Fff
/* 802E8D68 002E5CA8  FC 20 0A 10 */	fabs f1, f1
/* 802E8D6C 002E5CAC  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E8D70 002E5CB0  FC 20 08 18 */	frsp f1, f1
/* 802E8D74 002E5CB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8D78 002E5CB8  4C 40 13 82 */	cror 2, 0, 2
/* 802E8D7C 002E5CBC  40 82 00 28 */	bne .L_802E8DA4
/* 802E8D80 002E5CC0  7F C3 F3 78 */	mr r3, r30
/* 802E8D84 002E5CC4  7F E4 FB 78 */	mr r4, r31
/* 802E8D88 002E5CC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8D8C 002E5CCC  38 A0 00 09 */	li r5, 9
/* 802E8D90 002E5CD0  38 C0 00 00 */	li r6, 0
/* 802E8D94 002E5CD4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8D98 002E5CD8  7D 89 03 A6 */	mtctr r12
/* 802E8D9C 002E5CDC  4E 80 04 21 */	bctrl 
/* 802E8DA0 002E5CE0  48 00 00 24 */	b .L_802E8DC4
.L_802E8DA4:
/* 802E8DA4 002E5CE4  7F C3 F3 78 */	mr r3, r30
/* 802E8DA8 002E5CE8  7F E4 FB 78 */	mr r4, r31
/* 802E8DAC 002E5CEC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E8DB0 002E5CF0  38 A0 00 06 */	li r5, 6
/* 802E8DB4 002E5CF4  38 C0 00 00 */	li r6, 0
/* 802E8DB8 002E5CF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E8DBC 002E5CFC  7D 89 03 A6 */	mtctr r12
/* 802E8DC0 002E5D00  4E 80 04 21 */	bctrl 
.L_802E8DC4:
/* 802E8DC4 002E5D04  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802E8DC8 002E5D08  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802E8DCC 002E5D0C  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802E8DD0 002E5D10  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802E8DD4 002E5D14  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802E8DD8 002E5D18  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802E8DDC 002E5D1C  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802E8DE0 002E5D20  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802E8DE4 002E5D24  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802E8DE8 002E5D28  7C 08 03 A6 */	mtlr r0
/* 802E8DEC 002E5D2C  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802E8DF0 002E5D30  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBase, global
/* 802E8DF4 002E5D34  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai9StateLostFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E8DF8 002E5D38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E8DFC 002E5D3C  7C 08 02 A6 */	mflr r0
/* 802E8E00 002E5D40  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8E04 002E5D44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E8E08 002E5D48  38 00 FF FF */	li r0, -1
/* 802E8E0C 002E5D4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E8E10 002E5D50  7C 9F 23 78 */	mr r31, r4
/* 802E8E14 002E5D54  7F E3 FB 78 */	mr r3, r31
/* 802E8E18 002E5D58  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 802E8E1C 002E5D5C  D0 04 02 CC */	stfs f0, 0x2cc(r4)
/* 802E8E20 002E5D60  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E8E24 002E5D64  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802E8E28 002E5D68  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802E8E2C 002E5D6C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802E8E30 002E5D70  4B E1 8B 9D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802E8E34 002E5D74  7F E3 FB 78 */	mr r3, r31
/* 802E8E38 002E5D78  38 80 00 03 */	li r4, 3
/* 802E8E3C 002E5D7C  38 A0 00 00 */	li r5, 0
/* 802E8E40 002E5D80  4B E1 C1 C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E8E44 002E5D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E8E48 002E5D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E8E4C 002E5D8C  7C 08 03 A6 */	mtlr r0
/* 802E8E50 002E5D90  38 21 00 10 */	addi r1, r1, 0x10
/* 802E8E54 002E5D94  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBase, global
/* 802E8E58 002E5D98  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802E8E5C 002E5D9C  7C 08 02 A6 */	mflr r0
/* 802E8E60 002E5DA0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802E8E64 002E5DA4  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802E8E68 002E5DA8  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802E8E6C 002E5DAC  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802E8E70 002E5DB0  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802E8E74 002E5DB4  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802E8E78 002E5DB8  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802E8E7C 002E5DBC  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 802E8E80 002E5DC0  93 C1 00 98 */	stw r30, 0x98(r1)
/* 802E8E84 002E5DC4  7C 9F 23 78 */	mr r31, r4
/* 802E8E88 002E5DC8  7C 7E 1B 78 */	mr r30, r3
/* 802E8E8C 002E5DCC  7F E3 FB 78 */	mr r3, r31
/* 802E8E90 002E5DD0  4B E1 E4 A9 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 802E8E94 002E5DD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8E98 002E5DD8  41 82 00 70 */	beq .L_802E8F08
/* 802E8E9C 002E5DDC  7F E3 FB 78 */	mr r3, r31
/* 802E8EA0 002E5DE0  48 00 45 05 */	bl isFinishShotGun__Q34Game10MiniHoudai3ObjFv
/* 802E8EA4 002E5DE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8EA8 002E5DE8  41 82 00 34 */	beq .L_802E8EDC
/* 802E8EAC 002E5DEC  7F E3 FB 78 */	mr r3, r31
/* 802E8EB0 002E5DF0  48 00 44 D1 */	bl isShotGunLockOn__Q34Game10MiniHoudai3ObjFv
/* 802E8EB4 002E5DF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8EB8 002E5DF8  41 82 00 50 */	beq .L_802E8F08
/* 802E8EBC 002E5DFC  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802E8EC0 002E5E00  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8EC4 002E5E04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8EC8 002E5E08  40 81 00 40 */	ble .L_802E8F08
/* 802E8ECC 002E5E0C  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802E8ED0 002E5E10  7F E3 FB 78 */	mr r3, r31
/* 802E8ED4 002E5E14  4B E1 E3 31 */	bl startMotion__Q24Game9EnemyBaseFv
/* 802E8ED8 002E5E18  48 00 00 30 */	b .L_802E8F08
.L_802E8EDC:
/* 802E8EDC 002E5E1C  7F E3 FB 78 */	mr r3, r31
/* 802E8EE0 002E5E20  48 00 44 A1 */	bl isShotGunLockOn__Q34Game10MiniHoudai3ObjFv
/* 802E8EE4 002E5E24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8EE8 002E5E28  41 82 00 20 */	beq .L_802E8F08
/* 802E8EEC 002E5E2C  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802E8EF0 002E5E30  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8EF4 002E5E34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8EF8 002E5E38  40 81 00 10 */	ble .L_802E8F08
/* 802E8EFC 002E5E3C  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802E8F00 002E5E40  7F E3 FB 78 */	mr r3, r31
/* 802E8F04 002E5E44  4B E1 E3 01 */	bl startMotion__Q24Game9EnemyBaseFv
.L_802E8F08:
/* 802E8F08 002E5E48  7F E3 FB 78 */	mr r3, r31
/* 802E8F0C 002E5E4C  48 00 44 51 */	bl isShotGunRotation__Q34Game10MiniHoudai3ObjFv
/* 802E8F10 002E5E50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8F14 002E5E54  41 82 00 0C */	beq .L_802E8F20
/* 802E8F18 002E5E58  7F E3 FB 78 */	mr r3, r31
/* 802E8F1C 002E5E5C  48 00 44 D1 */	bl setShotGunTargetPosition__Q34Game10MiniHoudai3ObjFv
.L_802E8F20:
/* 802E8F20 002E5E60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802E8F24 002E5E64  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 802E8F28 002E5E68  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802E8F2C 002E5E6C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8F30 002E5E70  EC 22 08 2A */	fadds f1, f2, f1
/* 802E8F34 002E5E74  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802E8F38 002E5E78  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E8F3C 002E5E7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E8F40 002E5E80  4C 40 13 82 */	cror 2, 0, 2
/* 802E8F44 002E5E84  40 82 00 28 */	bne .L_802E8F6C
/* 802E8F48 002E5E88  7F E3 FB 78 */	mr r3, r31
/* 802E8F4C 002E5E8C  4B E1 E3 ED */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 802E8F50 002E5E90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8F54 002E5E94  41 82 00 0C */	beq .L_802E8F60
/* 802E8F58 002E5E98  7F E3 FB 78 */	mr r3, r31
/* 802E8F5C 002E5E9C  4B E1 E2 A9 */	bl startMotion__Q24Game9EnemyBaseFv
.L_802E8F60:
/* 802E8F60 002E5EA0  7F E3 FB 78 */	mr r3, r31
/* 802E8F64 002E5EA4  4B E1 C3 3D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E8F68 002E5EA8  48 00 00 38 */	b .L_802E8FA0
.L_802E8F6C:
/* 802E8F6C 002E5EAC  7F E3 FB 78 */	mr r3, r31
/* 802E8F70 002E5EB0  38 80 00 00 */	li r4, 0
/* 802E8F74 002E5EB4  4B E2 B6 E5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E8F78 002E5EB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8F7C 002E5EBC  41 82 00 24 */	beq .L_802E8FA0
/* 802E8F80 002E5EC0  7F E3 FB 78 */	mr r3, r31
/* 802E8F84 002E5EC4  4B E1 E3 B5 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 802E8F88 002E5EC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E8F8C 002E5ECC  41 82 00 0C */	beq .L_802E8F98
/* 802E8F90 002E5ED0  7F E3 FB 78 */	mr r3, r31
/* 802E8F94 002E5ED4  4B E1 E2 71 */	bl startMotion__Q24Game9EnemyBaseFv
.L_802E8F98:
/* 802E8F98 002E5ED8  7F E3 FB 78 */	mr r3, r31
/* 802E8F9C 002E5EDC  4B E1 C3 05 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802E8FA0:
/* 802E8FA0 002E5EE0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802E8FA4 002E5EE4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802E8FA8 002E5EE8  28 00 00 00 */	cmplwi r0, 0
/* 802E8FAC 002E5EEC  41 82 05 48 */	beq .L_802E94F4
/* 802E8FB0 002E5EF0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802E8FB4 002E5EF4  28 00 00 02 */	cmplwi r0, 2
/* 802E8FB8 002E5EF8  40 82 00 28 */	bne .L_802E8FE0
/* 802E8FBC 002E5EFC  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E8FC0 002E5F00  7F E3 FB 78 */	mr r3, r31
/* 802E8FC4 002E5F04  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802E8FC8 002E5F08  4B E1 E3 19 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802E8FCC 002E5F0C  7F E3 FB 78 */	mr r3, r31
/* 802E8FD0 002E5F10  48 00 43 45 */	bl startShotGunRotation__Q34Game10MiniHoudai3ObjFv
/* 802E8FD4 002E5F14  7F E3 FB 78 */	mr r3, r31
/* 802E8FD8 002E5F18  48 00 47 A1 */	bl startChargeEffect__Q34Game10MiniHoudai3ObjFv
/* 802E8FDC 002E5F1C  48 00 05 18 */	b .L_802E94F4
.L_802E8FE0:
/* 802E8FE0 002E5F20  28 00 00 03 */	cmplwi r0, 3
/* 802E8FE4 002E5F24  40 82 00 18 */	bne .L_802E8FFC
/* 802E8FE8 002E5F28  7F E3 FB 78 */	mr r3, r31
/* 802E8FEC 002E5F2C  48 00 46 81 */	bl createSmokeLargeEffect__Q34Game10MiniHoudai3ObjFv
/* 802E8FF0 002E5F30  7F E3 FB 78 */	mr r3, r31
/* 802E8FF4 002E5F34  48 00 47 B9 */	bl finishChargeEffect__Q34Game10MiniHoudai3ObjFv
/* 802E8FF8 002E5F38  48 00 04 FC */	b .L_802E94F4
.L_802E8FFC:
/* 802E8FFC 002E5F3C  28 00 00 04 */	cmplwi r0, 4
/* 802E9000 002E5F40  40 82 00 34 */	bne .L_802E9034
/* 802E9004 002E5F44  7F E3 FB 78 */	mr r3, r31
/* 802E9008 002E5F48  4B E1 E2 F9 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802E900C 002E5F4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E9010 002E5F50  41 82 00 18 */	beq .L_802E9028
/* 802E9014 002E5F54  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E9018 002E5F58  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E901C 002E5F5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9020 002E5F60  4C 40 13 82 */	cror 2, 0, 2
/* 802E9024 002E5F64  41 82 04 D0 */	beq .L_802E94F4
.L_802E9028:
/* 802E9028 002E5F68  7F E3 FB 78 */	mr r3, r31
/* 802E902C 002E5F6C  48 00 43 9D */	bl emitShotGun__Q34Game10MiniHoudai3ObjFv
/* 802E9030 002E5F70  48 00 04 C4 */	b .L_802E94F4
.L_802E9034:
/* 802E9034 002E5F74  28 00 00 05 */	cmplwi r0, 5
/* 802E9038 002E5F78  40 82 00 20 */	bne .L_802E9058
/* 802E903C 002E5F7C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9040 002E5F80  7F E3 FB 78 */	mr r3, r31
/* 802E9044 002E5F84  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802E9048 002E5F88  4B E1 E2 99 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802E904C 002E5F8C  7F E3 FB 78 */	mr r3, r31
/* 802E9050 002E5F90  48 00 42 E9 */	bl finishShotGunRotation__Q34Game10MiniHoudai3ObjFv
/* 802E9054 002E5F94  48 00 04 A0 */	b .L_802E94F4
.L_802E9058:
/* 802E9058 002E5F98  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E905C 002E5F9C  40 82 04 98 */	bne .L_802E94F4
/* 802E9060 002E5FA0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E9064 002E5FA4  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9068 002E5FA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E906C 002E5FAC  4C 40 13 82 */	cror 2, 0, 2
/* 802E9070 002E5FB0  40 82 00 28 */	bne .L_802E9098
/* 802E9074 002E5FB4  7F C3 F3 78 */	mr r3, r30
/* 802E9078 002E5FB8  7F E4 FB 78 */	mr r4, r31
/* 802E907C 002E5FBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E9080 002E5FC0  38 A0 00 00 */	li r5, 0
/* 802E9084 002E5FC4  38 C0 00 00 */	li r6, 0
/* 802E9088 002E5FC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E908C 002E5FCC  7D 89 03 A6 */	mtctr r12
/* 802E9090 002E5FD0  4E 80 04 21 */	bctrl 
/* 802E9094 002E5FD4  48 00 04 60 */	b .L_802E94F4
.L_802E9098:
/* 802E9098 002E5FD8  7F E3 FB 78 */	mr r3, r31
/* 802E909C 002E5FDC  38 80 00 00 */	li r4, 0
/* 802E90A0 002E5FE0  4B E2 B5 B9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E90A4 002E5FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E90A8 002E5FE8  41 82 00 28 */	beq .L_802E90D0
/* 802E90AC 002E5FEC  7F C3 F3 78 */	mr r3, r30
/* 802E90B0 002E5FF0  7F E4 FB 78 */	mr r4, r31
/* 802E90B4 002E5FF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E90B8 002E5FF8  38 A0 00 04 */	li r5, 4
/* 802E90BC 002E5FFC  38 C0 00 00 */	li r6, 0
/* 802E90C0 002E6000  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E90C4 002E6004  7D 89 03 A6 */	mtctr r12
/* 802E90C8 002E6008  4E 80 04 21 */	bctrl 
/* 802E90CC 002E600C  48 00 04 28 */	b .L_802E94F4
.L_802E90D0:
/* 802E90D0 002E6010  7F E4 FB 78 */	mr r4, r31
/* 802E90D4 002E6014  38 61 00 80 */	addi r3, r1, 0x80
/* 802E90D8 002E6018  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E90DC 002E601C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E90E0 002E6020  7D 89 03 A6 */	mtctr r12
/* 802E90E4 002E6024  4E 80 04 21 */	bctrl 
/* 802E90E8 002E6028  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802E90EC 002E602C  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802E90F0 002E6030  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E90F4 002E6034  EC 40 E8 28 */	fsubs f2, f0, f29
/* 802E90F8 002E6038  C3 DF 01 98 */	lfs f30, 0x198(r31)
/* 802E90FC 002E603C  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 802E9100 002E6040  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802E9104 002E6044  EC 61 F0 28 */	fsubs f3, f1, f30
/* 802E9108 002E6048  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802E910C 002E604C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E9110 002E6050  EF E3 08 FA */	fmadds f31, f3, f3, f1
/* 802E9114 002E6054  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802E9118 002E6058  40 81 00 D0 */	ble .L_802E91E8
/* 802E911C 002E605C  7F E4 FB 78 */	mr r4, r31
/* 802E9120 002E6060  38 61 00 74 */	addi r3, r1, 0x74
/* 802E9124 002E6064  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9128 002E6068  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E912C 002E606C  7D 89 03 A6 */	mtctr r12
/* 802E9130 002E6070  4E 80 04 21 */	bctrl 
/* 802E9134 002E6074  C0 81 00 74 */	lfs f4, 0x74(r1)
/* 802E9138 002E6078  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E913C 002E607C  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 802E9140 002E6080  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9144 002E6084  C0 61 00 78 */	lfs f3, 0x78(r1)
/* 802E9148 002E6088  EC 3E 20 28 */	fsubs f1, f30, f4
/* 802E914C 002E608C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802E9150 002E6090  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 802E9154 002E6094  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 802E9158 002E6098  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 802E915C 002E609C  4B D4 BF AD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9160 002E60A0  48 12 8A 71 */	bl roundAng__Ff
/* 802E9164 002E60A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9168 002E60A8  FF E0 08 90 */	fmr f31, f1
/* 802E916C 002E60AC  7F E3 FB 78 */	mr r3, r31
/* 802E9170 002E60B0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9174 002E60B4  7D 89 03 A6 */	mtctr r12
/* 802E9178 002E60B8  4E 80 04 21 */	bctrl 
/* 802E917C 002E60BC  FC 40 08 90 */	fmr f2, f1
/* 802E9180 002E60C0  FC 20 F8 90 */	fmr f1, f31
/* 802E9184 002E60C4  48 12 8A 79 */	bl angDist__Fff
/* 802E9188 002E60C8  FC 20 0A 10 */	fabs f1, f1
/* 802E918C 002E60CC  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E9190 002E60D0  FC 20 08 18 */	frsp f1, f1
/* 802E9194 002E60D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9198 002E60D8  4C 40 13 82 */	cror 2, 0, 2
/* 802E919C 002E60DC  40 82 00 28 */	bne .L_802E91C4
/* 802E91A0 002E60E0  7F C3 F3 78 */	mr r3, r30
/* 802E91A4 002E60E4  7F E4 FB 78 */	mr r4, r31
/* 802E91A8 002E60E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E91AC 002E60EC  38 A0 00 09 */	li r5, 9
/* 802E91B0 002E60F0  38 C0 00 00 */	li r6, 0
/* 802E91B4 002E60F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E91B8 002E60F8  7D 89 03 A6 */	mtctr r12
/* 802E91BC 002E60FC  4E 80 04 21 */	bctrl 
/* 802E91C0 002E6100  48 00 03 34 */	b .L_802E94F4
.L_802E91C4:
/* 802E91C4 002E6104  7F C3 F3 78 */	mr r3, r30
/* 802E91C8 002E6108  7F E4 FB 78 */	mr r4, r31
/* 802E91CC 002E610C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E91D0 002E6110  38 A0 00 06 */	li r5, 6
/* 802E91D4 002E6114  38 C0 00 00 */	li r6, 0
/* 802E91D8 002E6118  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E91DC 002E611C  7D 89 03 A6 */	mtctr r12
/* 802E91E0 002E6120  4E 80 04 21 */	bctrl 
/* 802E91E4 002E6124  48 00 03 10 */	b .L_802E94F4
.L_802E91E8:
/* 802E91E8 002E6128  7F E3 FB 78 */	mr r3, r31
/* 802E91EC 002E612C  48 00 3D 01 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802E91F0 002E6130  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E91F4 002E6134  41 82 00 28 */	beq .L_802E921C
/* 802E91F8 002E6138  7F C3 F3 78 */	mr r3, r30
/* 802E91FC 002E613C  7F E4 FB 78 */	mr r4, r31
/* 802E9200 002E6140  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E9204 002E6144  38 A0 00 03 */	li r5, 3
/* 802E9208 002E6148  38 C0 00 00 */	li r6, 0
/* 802E920C 002E614C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9210 002E6150  7D 89 03 A6 */	mtctr r12
/* 802E9214 002E6154  4E 80 04 21 */	bctrl 
/* 802E9218 002E6158  48 00 02 DC */	b .L_802E94F4
.L_802E921C:
/* 802E921C 002E615C  7F E3 FB 78 */	mr r3, r31
/* 802E9220 002E6160  48 00 3A 7D */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802E9224 002E6164  28 03 00 00 */	cmplwi r3, 0
/* 802E9228 002E6168  41 82 01 1C */	beq .L_802E9344
/* 802E922C 002E616C  7C 64 1B 78 */	mr r4, r3
/* 802E9230 002E6170  38 61 00 50 */	addi r3, r1, 0x50
/* 802E9234 002E6174  81 84 00 00 */	lwz r12, 0(r4)
/* 802E9238 002E6178  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E923C 002E617C  7D 89 03 A6 */	mtctr r12
/* 802E9240 002E6180  4E 80 04 21 */	bctrl 
/* 802E9244 002E6184  7F E4 FB 78 */	mr r4, r31
/* 802E9248 002E6188  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 802E924C 002E618C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9250 002E6190  38 61 00 5C */	addi r3, r1, 0x5c
/* 802E9254 002E6194  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 802E9258 002E6198  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802E925C 002E619C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9260 002E61A0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802E9264 002E61A4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802E9268 002E61A8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802E926C 002E61AC  7D 89 03 A6 */	mtctr r12
/* 802E9270 002E61B0  4E 80 04 21 */	bctrl 
/* 802E9274 002E61B4  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 802E9278 002E61B8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E927C 002E61BC  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 802E9280 002E61C0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9284 002E61C4  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802E9288 002E61C8  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802E928C 002E61CC  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 802E9290 002E61D0  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E9294 002E61D4  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E9298 002E61D8  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 802E929C 002E61DC  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 802E92A0 002E61E0  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 802E92A4 002E61E4  4B D4 BE 65 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E92A8 002E61E8  48 12 89 29 */	bl roundAng__Ff
/* 802E92AC 002E61EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E92B0 002E61F0  FF E0 08 90 */	fmr f31, f1
/* 802E92B4 002E61F4  7F E3 FB 78 */	mr r3, r31
/* 802E92B8 002E61F8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E92BC 002E61FC  7D 89 03 A6 */	mtctr r12
/* 802E92C0 002E6200  4E 80 04 21 */	bctrl 
/* 802E92C4 002E6204  FC 40 08 90 */	fmr f2, f1
/* 802E92C8 002E6208  FC 20 F8 90 */	fmr f1, f31
/* 802E92CC 002E620C  48 12 89 31 */	bl angDist__Fff
/* 802E92D0 002E6210  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E92D4 002E6214  FC 40 0A 10 */	fabs f2, f1
/* 802E92D8 002E6218  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E92DC 002E621C  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E92E0 002E6220  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E92E4 002E6224  FC 40 10 18 */	frsp f2, f2
/* 802E92E8 002E6228  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E92EC 002E622C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E92F0 002E6230  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E92F4 002E6234  4C 40 13 82 */	cror 2, 0, 2
/* 802E92F8 002E6238  40 82 00 28 */	bne .L_802E9320
/* 802E92FC 002E623C  7F C3 F3 78 */	mr r3, r30
/* 802E9300 002E6240  7F E4 FB 78 */	mr r4, r31
/* 802E9304 002E6244  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E9308 002E6248  38 A0 00 08 */	li r5, 8
/* 802E930C 002E624C  38 C0 00 00 */	li r6, 0
/* 802E9310 002E6250  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9314 002E6254  7D 89 03 A6 */	mtctr r12
/* 802E9318 002E6258  4E 80 04 21 */	bctrl 
/* 802E931C 002E625C  48 00 01 D8 */	b .L_802E94F4
.L_802E9320:
/* 802E9320 002E6260  7F C3 F3 78 */	mr r3, r30
/* 802E9324 002E6264  7F E4 FB 78 */	mr r4, r31
/* 802E9328 002E6268  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E932C 002E626C  38 A0 00 05 */	li r5, 5
/* 802E9330 002E6270  38 C0 00 00 */	li r6, 0
/* 802E9334 002E6274  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9338 002E6278  7D 89 03 A6 */	mtctr r12
/* 802E933C 002E627C  4E 80 04 21 */	bctrl 
/* 802E9340 002E6280  48 00 01 B4 */	b .L_802E94F4
.L_802E9344:
/* 802E9344 002E6284  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E9348 002E6288  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802E934C 002E628C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E9350 002E6290  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802E9354 002E6294  40 80 00 D8 */	bge .L_802E942C
/* 802E9358 002E6298  7F E4 FB 78 */	mr r4, r31
/* 802E935C 002E629C  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E9360 002E62A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9364 002E62A4  C3 BF 02 E4 */	lfs f29, 0x2e4(r31)
/* 802E9368 002E62A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E936C 002E62AC  C3 DF 02 EC */	lfs f30, 0x2ec(r31)
/* 802E9370 002E62B0  7D 89 03 A6 */	mtctr r12
/* 802E9374 002E62B4  4E 80 04 21 */	bctrl 
/* 802E9378 002E62B8  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802E937C 002E62BC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E9380 002E62C0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802E9384 002E62C4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9388 002E62C8  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802E938C 002E62CC  EC 3D 20 28 */	fsubs f1, f29, f4
/* 802E9390 002E62D0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802E9394 002E62D4  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802E9398 002E62D8  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802E939C 002E62DC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E93A0 002E62E0  4B D4 BD 69 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E93A4 002E62E4  48 12 88 2D */	bl roundAng__Ff
/* 802E93A8 002E62E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E93AC 002E62EC  FF E0 08 90 */	fmr f31, f1
/* 802E93B0 002E62F0  7F E3 FB 78 */	mr r3, r31
/* 802E93B4 002E62F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E93B8 002E62F8  7D 89 03 A6 */	mtctr r12
/* 802E93BC 002E62FC  4E 80 04 21 */	bctrl 
/* 802E93C0 002E6300  FC 40 08 90 */	fmr f2, f1
/* 802E93C4 002E6304  FC 20 F8 90 */	fmr f1, f31
/* 802E93C8 002E6308  48 12 88 35 */	bl angDist__Fff
/* 802E93CC 002E630C  FC 20 0A 10 */	fabs f1, f1
/* 802E93D0 002E6310  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E93D4 002E6314  FC 20 08 18 */	frsp f1, f1
/* 802E93D8 002E6318  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E93DC 002E631C  4C 40 13 82 */	cror 2, 0, 2
/* 802E93E0 002E6320  40 82 00 28 */	bne .L_802E9408
/* 802E93E4 002E6324  7F C3 F3 78 */	mr r3, r30
/* 802E93E8 002E6328  7F E4 FB 78 */	mr r4, r31
/* 802E93EC 002E632C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E93F0 002E6330  38 A0 00 0A */	li r5, 0xa
/* 802E93F4 002E6334  38 C0 00 00 */	li r6, 0
/* 802E93F8 002E6338  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E93FC 002E633C  7D 89 03 A6 */	mtctr r12
/* 802E9400 002E6340  4E 80 04 21 */	bctrl 
/* 802E9404 002E6344  48 00 00 F0 */	b .L_802E94F4
.L_802E9408:
/* 802E9408 002E6348  7F C3 F3 78 */	mr r3, r30
/* 802E940C 002E634C  7F E4 FB 78 */	mr r4, r31
/* 802E9410 002E6350  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E9414 002E6354  38 A0 00 07 */	li r5, 7
/* 802E9418 002E6358  38 C0 00 00 */	li r6, 0
/* 802E941C 002E635C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9420 002E6360  7D 89 03 A6 */	mtctr r12
/* 802E9424 002E6364  4E 80 04 21 */	bctrl 
/* 802E9428 002E6368  48 00 00 CC */	b .L_802E94F4
.L_802E942C:
/* 802E942C 002E636C  7F E4 FB 78 */	mr r4, r31
/* 802E9430 002E6370  38 61 00 14 */	addi r3, r1, 0x14
/* 802E9434 002E6374  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9438 002E6378  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E943C 002E637C  7D 89 03 A6 */	mtctr r12
/* 802E9440 002E6380  4E 80 04 21 */	bctrl 
/* 802E9444 002E6384  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802E9448 002E6388  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E944C 002E638C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802E9450 002E6390  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9454 002E6394  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802E9458 002E6398  EC 3E 20 28 */	fsubs f1, f30, f4
/* 802E945C 002E639C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802E9460 002E63A0  D0 81 00 08 */	stfs f4, 8(r1)
/* 802E9464 002E63A4  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802E9468 002E63A8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E946C 002E63AC  4B D4 BC 9D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9470 002E63B0  48 12 87 61 */	bl roundAng__Ff
/* 802E9474 002E63B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9478 002E63B8  FF E0 08 90 */	fmr f31, f1
/* 802E947C 002E63BC  7F E3 FB 78 */	mr r3, r31
/* 802E9480 002E63C0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9484 002E63C4  7D 89 03 A6 */	mtctr r12
/* 802E9488 002E63C8  4E 80 04 21 */	bctrl 
/* 802E948C 002E63CC  FC 40 08 90 */	fmr f2, f1
/* 802E9490 002E63D0  FC 20 F8 90 */	fmr f1, f31
/* 802E9494 002E63D4  48 12 87 69 */	bl angDist__Fff
/* 802E9498 002E63D8  FC 20 0A 10 */	fabs f1, f1
/* 802E949C 002E63DC  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E94A0 002E63E0  FC 20 08 18 */	frsp f1, f1
/* 802E94A4 002E63E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E94A8 002E63E8  4C 40 13 82 */	cror 2, 0, 2
/* 802E94AC 002E63EC  40 82 00 28 */	bne .L_802E94D4
/* 802E94B0 002E63F0  7F C3 F3 78 */	mr r3, r30
/* 802E94B4 002E63F4  7F E4 FB 78 */	mr r4, r31
/* 802E94B8 002E63F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E94BC 002E63FC  38 A0 00 09 */	li r5, 9
/* 802E94C0 002E6400  38 C0 00 00 */	li r6, 0
/* 802E94C4 002E6404  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E94C8 002E6408  7D 89 03 A6 */	mtctr r12
/* 802E94CC 002E640C  4E 80 04 21 */	bctrl 
/* 802E94D0 002E6410  48 00 00 24 */	b .L_802E94F4
.L_802E94D4:
/* 802E94D4 002E6414  7F C3 F3 78 */	mr r3, r30
/* 802E94D8 002E6418  7F E4 FB 78 */	mr r4, r31
/* 802E94DC 002E641C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E94E0 002E6420  38 A0 00 06 */	li r5, 6
/* 802E94E4 002E6424  38 C0 00 00 */	li r6, 0
/* 802E94E8 002E6428  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E94EC 002E642C  7D 89 03 A6 */	mtctr r12
/* 802E94F0 002E6430  4E 80 04 21 */	bctrl 
.L_802E94F4:
/* 802E94F4 002E6434  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802E94F8 002E6438  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802E94FC 002E643C  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802E9500 002E6440  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802E9504 002E6444  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802E9508 002E6448  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802E950C 002E644C  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802E9510 002E6450  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802E9514 002E6454  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802E9518 002E6458  7C 08 03 A6 */	mtlr r0
/* 802E951C 002E645C  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802E9520 002E6460  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBase, global
/* 802E9524 002E6464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E9528 002E6468  7C 08 02 A6 */	mflr r0
/* 802E952C 002E646C  7C 83 23 78 */	mr r3, r4
/* 802E9530 002E6470  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E9534 002E6474  4B E1 84 49 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802E9538 002E6478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E953C 002E647C  7C 08 03 A6 */	mtlr r0
/* 802E9540 002E6480  38 21 00 10 */	addi r1, r1, 0x10
/* 802E9544 002E6484  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E9548 002E6488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E954C 002E648C  7C 08 02 A6 */	mflr r0
/* 802E9550 002E6490  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9554 002E6494  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E9558 002E6498  38 00 FF FF */	li r0, -1
/* 802E955C 002E649C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E9560 002E64A0  7C 9F 23 78 */	mr r31, r4
/* 802E9564 002E64A4  7F E3 FB 78 */	mr r3, r31
/* 802E9568 002E64A8  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 802E956C 002E64AC  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802E9570 002E64B0  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802E9574 002E64B4  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802E9578 002E64B8  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802E957C 002E64BC  4B E1 84 51 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802E9580 002E64C0  7F E3 FB 78 */	mr r3, r31
/* 802E9584 002E64C4  38 80 00 04 */	li r4, 4
/* 802E9588 002E64C8  38 A0 00 00 */	li r5, 0
/* 802E958C 002E64CC  4B E1 BA 79 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E9590 002E64D0  C0 22 EC 04 */	lfs f1, lbl_8051CF64@sda21(r2)
/* 802E9594 002E64D4  7F E3 FB 78 */	mr r3, r31
/* 802E9598 002E64D8  4B E1 DD F9 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 802E959C 002E64DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E95A0 002E64E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E95A4 002E64E4  7C 08 03 A6 */	mtlr r0
/* 802E95A8 002E64E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E95AC 002E64EC  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBase, global
/* 802E95B0 002E64F0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802E95B4 002E64F4  7C 08 02 A6 */	mflr r0
/* 802E95B8 002E64F8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802E95BC 002E64FC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802E95C0 002E6500  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802E95C4 002E6504  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802E95C8 002E6508  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802E95CC 002E650C  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802E95D0 002E6510  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802E95D4 002E6514  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 802E95D8 002E6518  93 C1 00 98 */	stw r30, 0x98(r1)
/* 802E95DC 002E651C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802E95E0 002E6520  7C 7E 1B 78 */	mr r30, r3
/* 802E95E4 002E6524  7C 9F 23 78 */	mr r31, r4
/* 802E95E8 002E6528  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802E95EC 002E652C  28 00 00 00 */	cmplwi r0, 0
/* 802E95F0 002E6530  41 82 04 D4 */	beq .L_802E9AC4
/* 802E95F4 002E6534  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802E95F8 002E6538  28 00 00 02 */	cmplwi r0, 2
/* 802E95FC 002E653C  40 82 00 70 */	bne .L_802E966C
/* 802E9600 002E6540  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E9604 002E6544  7F E3 FB 78 */	mr r3, r31
/* 802E9608 002E6548  C0 82 EB F4 */	lfs f4, lbl_8051CF54@sda21(r2)
/* 802E960C 002E654C  38 80 00 00 */	li r4, 0
/* 802E9610 002E6550  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802E9614 002E6554  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E9618 002E6558  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E961C 002E655C  4B E2 9B 01 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E9620 002E6560  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E9624 002E6564  7F E3 FB 78 */	mr r3, r31
/* 802E9628 002E6568  C0 82 EB F4 */	lfs f4, lbl_8051CF54@sda21(r2)
/* 802E962C 002E656C  38 80 00 00 */	li r4, 0
/* 802E9630 002E6570  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E9634 002E6574  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E9638 002E6578  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E963C 002E657C  4B E2 9E 99 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802E9640 002E6580  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E9644 002E6584  7F E3 FB 78 */	mr r3, r31
/* 802E9648 002E6588  C0 82 EB F4 */	lfs f4, lbl_8051CF54@sda21(r2)
/* 802E964C 002E658C  38 80 00 00 */	li r4, 0
/* 802E9650 002E6590  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802E9654 002E6594  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802E9658 002E6598  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802E965C 002E659C  4B E2 A1 35 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802E9660 002E65A0  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9664 002E65A4  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802E9668 002E65A8  48 00 04 5C */	b .L_802E9AC4
.L_802E966C:
/* 802E966C 002E65AC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802E9670 002E65B0  40 82 04 54 */	bne .L_802E9AC4
/* 802E9674 002E65B4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802E9678 002E65B8  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E967C 002E65BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9680 002E65C0  4C 40 13 82 */	cror 2, 0, 2
/* 802E9684 002E65C4  40 82 00 20 */	bne .L_802E96A4
/* 802E9688 002E65C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802E968C 002E65CC  38 A0 00 00 */	li r5, 0
/* 802E9690 002E65D0  38 C0 00 00 */	li r6, 0
/* 802E9694 002E65D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9698 002E65D8  7D 89 03 A6 */	mtctr r12
/* 802E969C 002E65DC  4E 80 04 21 */	bctrl 
/* 802E96A0 002E65E0  48 00 04 24 */	b .L_802E9AC4
.L_802E96A4:
/* 802E96A4 002E65E4  81 84 00 00 */	lwz r12, 0(r4)
/* 802E96A8 002E65E8  38 61 00 80 */	addi r3, r1, 0x80
/* 802E96AC 002E65EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E96B0 002E65F0  7D 89 03 A6 */	mtctr r12
/* 802E96B4 002E65F4  4E 80 04 21 */	bctrl 
/* 802E96B8 002E65F8  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802E96BC 002E65FC  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802E96C0 002E6600  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E96C4 002E6604  EC 40 E8 28 */	fsubs f2, f0, f29
/* 802E96C8 002E6608  C3 DF 01 98 */	lfs f30, 0x198(r31)
/* 802E96CC 002E660C  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 802E96D0 002E6610  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802E96D4 002E6614  EC 61 F0 28 */	fsubs f3, f1, f30
/* 802E96D8 002E6618  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802E96DC 002E661C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E96E0 002E6620  EF E3 08 FA */	fmadds f31, f3, f3, f1
/* 802E96E4 002E6624  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802E96E8 002E6628  40 81 00 D0 */	ble .L_802E97B8
/* 802E96EC 002E662C  7F E4 FB 78 */	mr r4, r31
/* 802E96F0 002E6630  38 61 00 74 */	addi r3, r1, 0x74
/* 802E96F4 002E6634  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E96F8 002E6638  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E96FC 002E663C  7D 89 03 A6 */	mtctr r12
/* 802E9700 002E6640  4E 80 04 21 */	bctrl 
/* 802E9704 002E6644  C0 81 00 74 */	lfs f4, 0x74(r1)
/* 802E9708 002E6648  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E970C 002E664C  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 802E9710 002E6650  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9714 002E6654  C0 61 00 78 */	lfs f3, 0x78(r1)
/* 802E9718 002E6658  EC 3E 20 28 */	fsubs f1, f30, f4
/* 802E971C 002E665C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802E9720 002E6660  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 802E9724 002E6664  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 802E9728 002E6668  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 802E972C 002E666C  4B D4 B9 DD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9730 002E6670  48 12 84 A1 */	bl roundAng__Ff
/* 802E9734 002E6674  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9738 002E6678  FF E0 08 90 */	fmr f31, f1
/* 802E973C 002E667C  7F E3 FB 78 */	mr r3, r31
/* 802E9740 002E6680  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9744 002E6684  7D 89 03 A6 */	mtctr r12
/* 802E9748 002E6688  4E 80 04 21 */	bctrl 
/* 802E974C 002E668C  FC 40 08 90 */	fmr f2, f1
/* 802E9750 002E6690  FC 20 F8 90 */	fmr f1, f31
/* 802E9754 002E6694  48 12 84 A9 */	bl angDist__Fff
/* 802E9758 002E6698  FC 20 0A 10 */	fabs f1, f1
/* 802E975C 002E669C  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E9760 002E66A0  FC 20 08 18 */	frsp f1, f1
/* 802E9764 002E66A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9768 002E66A8  4C 40 13 82 */	cror 2, 0, 2
/* 802E976C 002E66AC  40 82 00 28 */	bne .L_802E9794
/* 802E9770 002E66B0  7F C3 F3 78 */	mr r3, r30
/* 802E9774 002E66B4  7F E4 FB 78 */	mr r4, r31
/* 802E9778 002E66B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E977C 002E66BC  38 A0 00 09 */	li r5, 9
/* 802E9780 002E66C0  38 C0 00 00 */	li r6, 0
/* 802E9784 002E66C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9788 002E66C8  7D 89 03 A6 */	mtctr r12
/* 802E978C 002E66CC  4E 80 04 21 */	bctrl 
/* 802E9790 002E66D0  48 00 03 34 */	b .L_802E9AC4
.L_802E9794:
/* 802E9794 002E66D4  7F C3 F3 78 */	mr r3, r30
/* 802E9798 002E66D8  7F E4 FB 78 */	mr r4, r31
/* 802E979C 002E66DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E97A0 002E66E0  38 A0 00 06 */	li r5, 6
/* 802E97A4 002E66E4  38 C0 00 00 */	li r6, 0
/* 802E97A8 002E66E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E97AC 002E66EC  7D 89 03 A6 */	mtctr r12
/* 802E97B0 002E66F0  4E 80 04 21 */	bctrl 
/* 802E97B4 002E66F4  48 00 03 10 */	b .L_802E9AC4
.L_802E97B8:
/* 802E97B8 002E66F8  7F E3 FB 78 */	mr r3, r31
/* 802E97BC 002E66FC  48 00 37 31 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802E97C0 002E6700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E97C4 002E6704  41 82 00 28 */	beq .L_802E97EC
/* 802E97C8 002E6708  7F C3 F3 78 */	mr r3, r30
/* 802E97CC 002E670C  7F E4 FB 78 */	mr r4, r31
/* 802E97D0 002E6710  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E97D4 002E6714  38 A0 00 03 */	li r5, 3
/* 802E97D8 002E6718  38 C0 00 00 */	li r6, 0
/* 802E97DC 002E671C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E97E0 002E6720  7D 89 03 A6 */	mtctr r12
/* 802E97E4 002E6724  4E 80 04 21 */	bctrl 
/* 802E97E8 002E6728  48 00 02 DC */	b .L_802E9AC4
.L_802E97EC:
/* 802E97EC 002E672C  7F E3 FB 78 */	mr r3, r31
/* 802E97F0 002E6730  48 00 34 AD */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802E97F4 002E6734  28 03 00 00 */	cmplwi r3, 0
/* 802E97F8 002E6738  41 82 01 1C */	beq .L_802E9914
/* 802E97FC 002E673C  7C 64 1B 78 */	mr r4, r3
/* 802E9800 002E6740  38 61 00 50 */	addi r3, r1, 0x50
/* 802E9804 002E6744  81 84 00 00 */	lwz r12, 0(r4)
/* 802E9808 002E6748  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E980C 002E674C  7D 89 03 A6 */	mtctr r12
/* 802E9810 002E6750  4E 80 04 21 */	bctrl 
/* 802E9814 002E6754  7F E4 FB 78 */	mr r4, r31
/* 802E9818 002E6758  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 802E981C 002E675C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9820 002E6760  38 61 00 5C */	addi r3, r1, 0x5c
/* 802E9824 002E6764  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 802E9828 002E6768  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802E982C 002E676C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9830 002E6770  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802E9834 002E6774  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802E9838 002E6778  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802E983C 002E677C  7D 89 03 A6 */	mtctr r12
/* 802E9840 002E6780  4E 80 04 21 */	bctrl 
/* 802E9844 002E6784  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 802E9848 002E6788  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E984C 002E678C  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 802E9850 002E6790  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9854 002E6794  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802E9858 002E6798  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802E985C 002E679C  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 802E9860 002E67A0  EC 21 28 28 */	fsubs f1, f1, f5
/* 802E9864 002E67A4  EC 40 18 28 */	fsubs f2, f0, f3
/* 802E9868 002E67A8  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 802E986C 002E67AC  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 802E9870 002E67B0  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 802E9874 002E67B4  4B D4 B8 95 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9878 002E67B8  48 12 83 59 */	bl roundAng__Ff
/* 802E987C 002E67BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9880 002E67C0  FF E0 08 90 */	fmr f31, f1
/* 802E9884 002E67C4  7F E3 FB 78 */	mr r3, r31
/* 802E9888 002E67C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E988C 002E67CC  7D 89 03 A6 */	mtctr r12
/* 802E9890 002E67D0  4E 80 04 21 */	bctrl 
/* 802E9894 002E67D4  FC 40 08 90 */	fmr f2, f1
/* 802E9898 002E67D8  FC 20 F8 90 */	fmr f1, f31
/* 802E989C 002E67DC  48 12 83 61 */	bl angDist__Fff
/* 802E98A0 002E67E0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E98A4 002E67E4  FC 40 0A 10 */	fabs f2, f1
/* 802E98A8 002E67E8  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E98AC 002E67EC  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E98B0 002E67F0  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E98B4 002E67F4  FC 40 10 18 */	frsp f2, f2
/* 802E98B8 002E67F8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E98BC 002E67FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E98C0 002E6800  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E98C4 002E6804  4C 40 13 82 */	cror 2, 0, 2
/* 802E98C8 002E6808  40 82 00 28 */	bne .L_802E98F0
/* 802E98CC 002E680C  7F C3 F3 78 */	mr r3, r30
/* 802E98D0 002E6810  7F E4 FB 78 */	mr r4, r31
/* 802E98D4 002E6814  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E98D8 002E6818  38 A0 00 08 */	li r5, 8
/* 802E98DC 002E681C  38 C0 00 00 */	li r6, 0
/* 802E98E0 002E6820  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E98E4 002E6824  7D 89 03 A6 */	mtctr r12
/* 802E98E8 002E6828  4E 80 04 21 */	bctrl 
/* 802E98EC 002E682C  48 00 01 D8 */	b .L_802E9AC4
.L_802E98F0:
/* 802E98F0 002E6830  7F C3 F3 78 */	mr r3, r30
/* 802E98F4 002E6834  7F E4 FB 78 */	mr r4, r31
/* 802E98F8 002E6838  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E98FC 002E683C  38 A0 00 05 */	li r5, 5
/* 802E9900 002E6840  38 C0 00 00 */	li r6, 0
/* 802E9904 002E6844  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9908 002E6848  7D 89 03 A6 */	mtctr r12
/* 802E990C 002E684C  4E 80 04 21 */	bctrl 
/* 802E9910 002E6850  48 00 01 B4 */	b .L_802E9AC4
.L_802E9914:
/* 802E9914 002E6854  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E9918 002E6858  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802E991C 002E685C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E9920 002E6860  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802E9924 002E6864  40 80 00 D8 */	bge .L_802E99FC
/* 802E9928 002E6868  7F E4 FB 78 */	mr r4, r31
/* 802E992C 002E686C  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E9930 002E6870  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9934 002E6874  C3 BF 02 E4 */	lfs f29, 0x2e4(r31)
/* 802E9938 002E6878  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E993C 002E687C  C3 DF 02 EC */	lfs f30, 0x2ec(r31)
/* 802E9940 002E6880  7D 89 03 A6 */	mtctr r12
/* 802E9944 002E6884  4E 80 04 21 */	bctrl 
/* 802E9948 002E6888  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802E994C 002E688C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E9950 002E6890  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802E9954 002E6894  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9958 002E6898  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802E995C 002E689C  EC 3D 20 28 */	fsubs f1, f29, f4
/* 802E9960 002E68A0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802E9964 002E68A4  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802E9968 002E68A8  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802E996C 002E68AC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E9970 002E68B0  4B D4 B7 99 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9974 002E68B4  48 12 82 5D */	bl roundAng__Ff
/* 802E9978 002E68B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E997C 002E68BC  FF E0 08 90 */	fmr f31, f1
/* 802E9980 002E68C0  7F E3 FB 78 */	mr r3, r31
/* 802E9984 002E68C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9988 002E68C8  7D 89 03 A6 */	mtctr r12
/* 802E998C 002E68CC  4E 80 04 21 */	bctrl 
/* 802E9990 002E68D0  FC 40 08 90 */	fmr f2, f1
/* 802E9994 002E68D4  FC 20 F8 90 */	fmr f1, f31
/* 802E9998 002E68D8  48 12 82 65 */	bl angDist__Fff
/* 802E999C 002E68DC  FC 20 0A 10 */	fabs f1, f1
/* 802E99A0 002E68E0  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E99A4 002E68E4  FC 20 08 18 */	frsp f1, f1
/* 802E99A8 002E68E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E99AC 002E68EC  4C 40 13 82 */	cror 2, 0, 2
/* 802E99B0 002E68F0  40 82 00 28 */	bne .L_802E99D8
/* 802E99B4 002E68F4  7F C3 F3 78 */	mr r3, r30
/* 802E99B8 002E68F8  7F E4 FB 78 */	mr r4, r31
/* 802E99BC 002E68FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E99C0 002E6900  38 A0 00 0A */	li r5, 0xa
/* 802E99C4 002E6904  38 C0 00 00 */	li r6, 0
/* 802E99C8 002E6908  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E99CC 002E690C  7D 89 03 A6 */	mtctr r12
/* 802E99D0 002E6910  4E 80 04 21 */	bctrl 
/* 802E99D4 002E6914  48 00 00 F0 */	b .L_802E9AC4
.L_802E99D8:
/* 802E99D8 002E6918  7F C3 F3 78 */	mr r3, r30
/* 802E99DC 002E691C  7F E4 FB 78 */	mr r4, r31
/* 802E99E0 002E6920  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E99E4 002E6924  38 A0 00 07 */	li r5, 7
/* 802E99E8 002E6928  38 C0 00 00 */	li r6, 0
/* 802E99EC 002E692C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E99F0 002E6930  7D 89 03 A6 */	mtctr r12
/* 802E99F4 002E6934  4E 80 04 21 */	bctrl 
/* 802E99F8 002E6938  48 00 00 CC */	b .L_802E9AC4
.L_802E99FC:
/* 802E99FC 002E693C  7F E4 FB 78 */	mr r4, r31
/* 802E9A00 002E6940  38 61 00 14 */	addi r3, r1, 0x14
/* 802E9A04 002E6944  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9A08 002E6948  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9A0C 002E694C  7D 89 03 A6 */	mtctr r12
/* 802E9A10 002E6950  4E 80 04 21 */	bctrl 
/* 802E9A14 002E6954  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802E9A18 002E6958  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E9A1C 002E695C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802E9A20 002E6960  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9A24 002E6964  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802E9A28 002E6968  EC 3E 20 28 */	fsubs f1, f30, f4
/* 802E9A2C 002E696C  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802E9A30 002E6970  D0 81 00 08 */	stfs f4, 8(r1)
/* 802E9A34 002E6974  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802E9A38 002E6978  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802E9A3C 002E697C  4B D4 B6 CD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9A40 002E6980  48 12 81 91 */	bl roundAng__Ff
/* 802E9A44 002E6984  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9A48 002E6988  FF E0 08 90 */	fmr f31, f1
/* 802E9A4C 002E698C  7F E3 FB 78 */	mr r3, r31
/* 802E9A50 002E6990  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9A54 002E6994  7D 89 03 A6 */	mtctr r12
/* 802E9A58 002E6998  4E 80 04 21 */	bctrl 
/* 802E9A5C 002E699C  FC 40 08 90 */	fmr f2, f1
/* 802E9A60 002E69A0  FC 20 F8 90 */	fmr f1, f31
/* 802E9A64 002E69A4  48 12 81 99 */	bl angDist__Fff
/* 802E9A68 002E69A8  FC 20 0A 10 */	fabs f1, f1
/* 802E9A6C 002E69AC  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802E9A70 002E69B0  FC 20 08 18 */	frsp f1, f1
/* 802E9A74 002E69B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9A78 002E69B8  4C 40 13 82 */	cror 2, 0, 2
/* 802E9A7C 002E69BC  40 82 00 28 */	bne .L_802E9AA4
/* 802E9A80 002E69C0  7F C3 F3 78 */	mr r3, r30
/* 802E9A84 002E69C4  7F E4 FB 78 */	mr r4, r31
/* 802E9A88 002E69C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E9A8C 002E69CC  38 A0 00 09 */	li r5, 9
/* 802E9A90 002E69D0  38 C0 00 00 */	li r6, 0
/* 802E9A94 002E69D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9A98 002E69D8  7D 89 03 A6 */	mtctr r12
/* 802E9A9C 002E69DC  4E 80 04 21 */	bctrl 
/* 802E9AA0 002E69E0  48 00 00 24 */	b .L_802E9AC4
.L_802E9AA4:
/* 802E9AA4 002E69E4  7F C3 F3 78 */	mr r3, r30
/* 802E9AA8 002E69E8  7F E4 FB 78 */	mr r4, r31
/* 802E9AAC 002E69EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802E9AB0 002E69F0  38 A0 00 06 */	li r5, 6
/* 802E9AB4 002E69F4  38 C0 00 00 */	li r6, 0
/* 802E9AB8 002E69F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802E9ABC 002E69FC  7D 89 03 A6 */	mtctr r12
/* 802E9AC0 002E6A00  4E 80 04 21 */	bctrl 
.L_802E9AC4:
/* 802E9AC4 002E6A04  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802E9AC8 002E6A08  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802E9ACC 002E6A0C  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802E9AD0 002E6A10  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802E9AD4 002E6A14  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802E9AD8 002E6A18  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802E9ADC 002E6A1C  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 802E9AE0 002E6A20  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802E9AE4 002E6A24  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 802E9AE8 002E6A28  7C 08 03 A6 */	mtlr r0
/* 802E9AEC 002E6A2C  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802E9AF0 002E6A30  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBase, global
/* 802E9AF4 002E6A34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E9AF8 002E6A38  7C 08 02 A6 */	mflr r0
/* 802E9AFC 002E6A3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E9B00 002E6A40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E9B04 002E6A44  7C 9F 23 78 */	mr r31, r4
/* 802E9B08 002E6A48  7F E3 FB 78 */	mr r3, r31
/* 802E9B0C 002E6A4C  4B E1 7E 71 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802E9B10 002E6A50  C0 22 EC 08 */	lfs f1, lbl_8051CF68@sda21(r2)
/* 802E9B14 002E6A54  7F E3 FB 78 */	mr r3, r31
/* 802E9B18 002E6A58  4B E1 D8 79 */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 802E9B1C 002E6A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E9B20 002E6A60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E9B24 002E6A64  7C 08 03 A6 */	mtlr r0
/* 802E9B28 002E6A68  38 21 00 10 */	addi r1, r1, 0x10
/* 802E9B2C 002E6A6C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai10StateFlickFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802E9B30 002E6A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E9B34 002E6A74  7C 08 02 A6 */	mflr r0
/* 802E9B38 002E6A78  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9B3C 002E6A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E9B40 002E6A80  38 00 FF FF */	li r0, -1
/* 802E9B44 002E6A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E9B48 002E6A88  7C 9F 23 78 */	mr r31, r4
/* 802E9B4C 002E6A8C  7F E3 FB 78 */	mr r3, r31
/* 802E9B50 002E6A90  D0 04 02 D0 */	stfs f0, 0x2d0(r4)
/* 802E9B54 002E6A94  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 802E9B58 002E6A98  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802E9B5C 002E6A9C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802E9B60 002E6AA0  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802E9B64 002E6AA4  4B E1 7E 69 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802E9B68 002E6AA8  7F E3 FB 78 */	mr r3, r31
/* 802E9B6C 002E6AAC  38 80 00 02 */	li r4, 2
/* 802E9B70 002E6AB0  38 A0 00 00 */	li r5, 0
/* 802E9B74 002E6AB4  4B E1 B4 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802E9B78 002E6AB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E9B7C 002E6ABC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E9B80 002E6AC0  7C 08 03 A6 */	mtlr r0
/* 802E9B84 002E6AC4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E9B88 002E6AC8  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBase, global
/* 802E9B8C 002E6ACC  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 802E9B90 002E6AD0  7C 08 02 A6 */	mflr r0
/* 802E9B94 002E6AD4  90 01 01 44 */	stw r0, 0x144(r1)
/* 802E9B98 002E6AD8  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 802E9B9C 002E6ADC  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 802E9BA0 002E6AE0  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 802E9BA4 002E6AE4  F3 C1 01 28 */	psq_st f30, 296(r1), 0, qr0
/* 802E9BA8 002E6AE8  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 802E9BAC 002E6AEC  F3 A1 01 18 */	psq_st f29, 280(r1), 0, qr0
/* 802E9BB0 002E6AF0  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 802E9BB4 002E6AF4  F3 81 01 08 */	psq_st f28, 264(r1), 0, qr0
/* 802E9BB8 002E6AF8  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 802E9BBC 002E6AFC  F3 61 00 F8 */	psq_st f27, 248(r1), 0, qr0
/* 802E9BC0 002E6B00  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 802E9BC4 002E6B04  F3 41 00 E8 */	psq_st f26, 232(r1), 0, qr0
/* 802E9BC8 002E6B08  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 802E9BCC 002E6B0C  F3 21 00 D8 */	psq_st f25, 216(r1), 0, qr0
/* 802E9BD0 002E6B10  DB 01 00 C0 */	stfd f24, 0xc0(r1)
/* 802E9BD4 002E6B14  F3 01 00 C8 */	psq_st f24, 200(r1), 0, qr0
/* 802E9BD8 002E6B18  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 802E9BDC 002E6B1C  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 802E9BE0 002E6B20  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 802E9BE4 002E6B24  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9BE8 002E6B28  7C 9F 23 78 */	mr r31, r4
/* 802E9BEC 002E6B2C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802E9BF0 002E6B30  7C 7E 1B 78 */	mr r30, r3
/* 802E9BF4 002E6B34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9BF8 002E6B38  4C 40 13 82 */	cror 2, 0, 2
/* 802E9BFC 002E6B3C  40 82 00 18 */	bne .L_802E9C14
/* 802E9C00 002E6B40  38 00 00 00 */	li r0, 0
/* 802E9C04 002E6B44  7F E3 FB 78 */	mr r3, r31
/* 802E9C08 002E6B48  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802E9C0C 002E6B4C  4B E1 B6 95 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E9C10 002E6B50  48 00 05 90 */	b .L_802EA1A0
.L_802E9C14:
/* 802E9C14 002E6B54  7F E3 FB 78 */	mr r3, r31
/* 802E9C18 002E6B58  38 80 00 00 */	li r4, 0
/* 802E9C1C 002E6B5C  4B E2 AA 3D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802E9C20 002E6B60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E9C24 002E6B64  41 82 00 18 */	beq .L_802E9C3C
/* 802E9C28 002E6B68  38 00 00 04 */	li r0, 4
/* 802E9C2C 002E6B6C  7F E3 FB 78 */	mr r3, r31
/* 802E9C30 002E6B70  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802E9C34 002E6B74  4B E1 B6 6D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E9C38 002E6B78  48 00 05 68 */	b .L_802EA1A0
.L_802E9C3C:
/* 802E9C3C 002E6B7C  7F E3 FB 78 */	mr r3, r31
/* 802E9C40 002E6B80  48 00 32 AD */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802E9C44 002E6B84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E9C48 002E6B88  41 82 00 18 */	beq .L_802E9C60
/* 802E9C4C 002E6B8C  38 00 00 03 */	li r0, 3
/* 802E9C50 002E6B90  7F E3 FB 78 */	mr r3, r31
/* 802E9C54 002E6B94  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802E9C58 002E6B98  4B E1 B6 49 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E9C5C 002E6B9C  48 00 05 44 */	b .L_802EA1A0
.L_802E9C60:
/* 802E9C60 002E6BA0  7F E3 FB 78 */	mr r3, r31
/* 802E9C64 002E6BA4  48 00 30 39 */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802E9C68 002E6BA8  7C 7D 1B 79 */	or. r29, r3, r3
/* 802E9C6C 002E6BAC  41 82 02 AC */	beq .L_802E9F18
/* 802E9C70 002E6BB0  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9C74 002E6BB4  7F A4 EB 78 */	mr r4, r29
/* 802E9C78 002E6BB8  38 61 00 38 */	addi r3, r1, 0x38
/* 802E9C7C 002E6BBC  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802E9C80 002E6BC0  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E9C84 002E6BC4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E9C88 002E6BC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9C8C 002E6BCC  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 802E9C90 002E6BD0  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 802E9C94 002E6BD4  7D 89 03 A6 */	mtctr r12
/* 802E9C98 002E6BD8  4E 80 04 21 */	bctrl 
/* 802E9C9C 002E6BDC  7F E4 FB 78 */	mr r4, r31
/* 802E9CA0 002E6BE0  38 61 00 44 */	addi r3, r1, 0x44
/* 802E9CA4 002E6BE4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9CA8 002E6BE8  C3 01 00 38 */	lfs f24, 0x38(r1)
/* 802E9CAC 002E6BEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9CB0 002E6BF0  C3 21 00 40 */	lfs f25, 0x40(r1)
/* 802E9CB4 002E6BF4  7D 89 03 A6 */	mtctr r12
/* 802E9CB8 002E6BF8  4E 80 04 21 */	bctrl 
/* 802E9CBC 002E6BFC  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 802E9CC0 002E6C00  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E9CC4 002E6C04  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802E9CC8 002E6C08  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9CCC 002E6C0C  EC 38 08 28 */	fsubs f1, f24, f1
/* 802E9CD0 002E6C10  EC 59 00 28 */	fsubs f2, f25, f0
/* 802E9CD4 002E6C14  4B D4 B4 35 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9CD8 002E6C18  48 12 7E F9 */	bl roundAng__Ff
/* 802E9CDC 002E6C1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9CE0 002E6C20  FF 00 08 90 */	fmr f24, f1
/* 802E9CE4 002E6C24  7F E3 FB 78 */	mr r3, r31
/* 802E9CE8 002E6C28  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9CEC 002E6C2C  7D 89 03 A6 */	mtctr r12
/* 802E9CF0 002E6C30  4E 80 04 21 */	bctrl 
/* 802E9CF4 002E6C34  FC 40 08 90 */	fmr f2, f1
/* 802E9CF8 002E6C38  FC 20 C0 90 */	fmr f1, f24
/* 802E9CFC 002E6C3C  48 12 7F 01 */	bl angDist__Fff
/* 802E9D00 002E6C40  FF E0 08 90 */	fmr f31, f1
/* 802E9D04 002E6C44  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E9D08 002E6C48  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E9D0C 002E6C4C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802E9D10 002E6C50  EF 1F 07 72 */	fmuls f24, f31, f29
/* 802E9D14 002E6C54  EC 21 00 32 */	fmuls f1, f1, f0
/* 802E9D18 002E6C58  FC 00 C2 10 */	fabs f0, f24
/* 802E9D1C 002E6C5C  FC 00 00 18 */	frsp f0, f0
/* 802E9D20 002E6C60  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802E9D24 002E6C64  40 81 00 1C */	ble .L_802E9D40
/* 802E9D28 002E6C68  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802E9D2C 002E6C6C  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802E9D30 002E6C70  40 81 00 0C */	ble .L_802E9D3C
/* 802E9D34 002E6C74  FF 00 08 90 */	fmr f24, f1
/* 802E9D38 002E6C78  48 00 00 08 */	b .L_802E9D40
.L_802E9D3C:
/* 802E9D3C 002E6C7C  FF 00 08 50 */	fneg f24, f1
.L_802E9D40:
/* 802E9D40 002E6C80  7F E3 FB 78 */	mr r3, r31
/* 802E9D44 002E6C84  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9D48 002E6C88  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9D4C 002E6C8C  7D 89 03 A6 */	mtctr r12
/* 802E9D50 002E6C90  4E 80 04 21 */	bctrl 
/* 802E9D54 002E6C94  EC 38 08 2A */	fadds f1, f24, f1
/* 802E9D58 002E6C98  48 12 7E 79 */	bl roundAng__Ff
/* 802E9D5C 002E6C9C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802E9D60 002E6CA0  7F E3 FB 78 */	mr r3, r31
/* 802E9D64 002E6CA4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802E9D68 002E6CA8  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802E9D6C 002E6CAC  48 00 2B ED */	bl getViewAngle__Q34Game10MiniHoudai3ObjFv
/* 802E9D70 002E6CB0  7F E4 FB 78 */	mr r4, r31
/* 802E9D74 002E6CB4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E9D78 002E6CB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9D7C 002E6CBC  FF A0 08 90 */	fmr f29, f1
/* 802E9D80 002E6CC0  38 61 00 5C */	addi r3, r1, 0x5c
/* 802E9D84 002E6CC4  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 802E9D88 002E6CC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9D8C 002E6CCC  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 802E9D90 002E6CD0  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 802E9D94 002E6CD4  7D 89 03 A6 */	mtctr r12
/* 802E9D98 002E6CD8  4E 80 04 21 */	bctrl 
/* 802E9D9C 002E6CDC  7F A4 EB 78 */	mr r4, r29
/* 802E9DA0 002E6CE0  38 61 00 50 */	addi r3, r1, 0x50
/* 802E9DA4 002E6CE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E9DA8 002E6CE8  C3 C1 00 5C */	lfs f30, 0x5c(r1)
/* 802E9DAC 002E6CEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9DB0 002E6CF0  7D 89 03 A6 */	mtctr r12
/* 802E9DB4 002E6CF4  4E 80 04 21 */	bctrl 
/* 802E9DB8 002E6CF8  7F E4 FB 78 */	mr r4, r31
/* 802E9DBC 002E6CFC  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 802E9DC0 002E6D00  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9DC4 002E6D04  38 61 00 74 */	addi r3, r1, 0x74
/* 802E9DC8 002E6D08  EF 60 F0 28 */	fsubs f27, f0, f30
/* 802E9DCC 002E6D0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9DD0 002E6D10  7D 89 03 A6 */	mtctr r12
/* 802E9DD4 002E6D14  4E 80 04 21 */	bctrl 
/* 802E9DD8 002E6D18  7F A4 EB 78 */	mr r4, r29
/* 802E9DDC 002E6D1C  38 61 00 68 */	addi r3, r1, 0x68
/* 802E9DE0 002E6D20  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E9DE4 002E6D24  C3 C1 00 78 */	lfs f30, 0x78(r1)
/* 802E9DE8 002E6D28  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9DEC 002E6D2C  7D 89 03 A6 */	mtctr r12
/* 802E9DF0 002E6D30  4E 80 04 21 */	bctrl 
/* 802E9DF4 002E6D34  7F E4 FB 78 */	mr r4, r31
/* 802E9DF8 002E6D38  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 802E9DFC 002E6D3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9E00 002E6D40  38 61 00 8C */	addi r3, r1, 0x8c
/* 802E9E04 002E6D44  EF 80 F0 28 */	fsubs f28, f0, f30
/* 802E9E08 002E6D48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9E0C 002E6D4C  7D 89 03 A6 */	mtctr r12
/* 802E9E10 002E6D50  4E 80 04 21 */	bctrl 
/* 802E9E14 002E6D54  7F A4 EB 78 */	mr r4, r29
/* 802E9E18 002E6D58  38 61 00 80 */	addi r3, r1, 0x80
/* 802E9E1C 002E6D5C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802E9E20 002E6D60  C3 C1 00 94 */	lfs f30, 0x94(r1)
/* 802E9E24 002E6D64  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9E28 002E6D68  7D 89 03 A6 */	mtctr r12
/* 802E9E2C 002E6D6C  4E 80 04 21 */	bctrl 
/* 802E9E30 002E6D70  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802E9E34 002E6D74  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 802E9E38 002E6D78  EF 39 06 72 */	fmuls f25, f25, f25
/* 802E9E3C 002E6D7C  38 60 00 01 */	li r3, 1
/* 802E9E40 002E6D80  EC 00 F0 28 */	fsubs f0, f0, f30
/* 802E9E44 002E6D84  38 80 00 00 */	li r4, 0
/* 802E9E48 002E6D88  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E9E4C 002E6D8C  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 802E9E50 002E6D90  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 802E9E54 002E6D94  40 81 00 30 */	ble .L_802E9E84
/* 802E9E58 002E6D98  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 802E9E5C 002E6D9C  7C 80 23 78 */	mr r0, r4
/* 802E9E60 002E6DA0  40 81 00 18 */	ble .L_802E9E78
/* 802E9E64 002E6DA4  FC 00 E2 10 */	fabs f0, f28
/* 802E9E68 002E6DA8  FC 00 00 18 */	frsp f0, f0
/* 802E9E6C 002E6DAC  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 802E9E70 002E6DB0  40 80 00 08 */	bge .L_802E9E78
/* 802E9E74 002E6DB4  7C 60 1B 78 */	mr r0, r3
.L_802E9E78:
/* 802E9E78 002E6DB8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802E9E7C 002E6DBC  41 82 00 08 */	beq .L_802E9E84
/* 802E9E80 002E6DC0  38 80 00 01 */	li r4, 1
.L_802E9E84:
/* 802E9E84 002E6DC4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802E9E88 002E6DC8  40 82 00 34 */	bne .L_802E9EBC
/* 802E9E8C 002E6DCC  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E9E90 002E6DD0  FC 40 FA 10 */	fabs f2, f31
/* 802E9E94 002E6DD4  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E9E98 002E6DD8  EC 00 07 72 */	fmuls f0, f0, f29
/* 802E9E9C 002E6DDC  FC 40 10 18 */	frsp f2, f2
/* 802E9EA0 002E6DE0  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E9EA4 002E6DE4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E9EA8 002E6DE8  4C 40 13 82 */	cror 2, 0, 2
/* 802E9EAC 002E6DEC  7C 00 00 26 */	mfcr r0
/* 802E9EB0 002E6DF0  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 802E9EB4 002E6DF4  41 82 00 08 */	beq .L_802E9EBC
/* 802E9EB8 002E6DF8  38 60 00 00 */	li r3, 0
.L_802E9EBC:
/* 802E9EBC 002E6DFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802E9EC0 002E6E00  41 82 00 18 */	beq .L_802E9ED8
/* 802E9EC4 002E6E04  38 00 00 02 */	li r0, 2
/* 802E9EC8 002E6E08  7F E3 FB 78 */	mr r3, r31
/* 802E9ECC 002E6E0C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802E9ED0 002E6E10  4B E1 B3 D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E9ED4 002E6E14  48 00 02 CC */	b .L_802EA1A0
.L_802E9ED8:
/* 802E9ED8 002E6E18  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802E9EDC 002E6E1C  FC 40 FA 10 */	fabs f2, f31
/* 802E9EE0 002E6E20  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E9EE4 002E6E24  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802E9EE8 002E6E28  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E9EEC 002E6E2C  FC 40 10 18 */	frsp f2, f2
/* 802E9EF0 002E6E30  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802E9EF4 002E6E34  EC 01 00 32 */	fmuls f0, f1, f0
/* 802E9EF8 002E6E38  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802E9EFC 002E6E3C  4C 40 13 82 */	cror 2, 0, 2
/* 802E9F00 002E6E40  40 82 02 A0 */	bne .L_802EA1A0
/* 802E9F04 002E6E44  38 00 00 08 */	li r0, 8
/* 802E9F08 002E6E48  7F E3 FB 78 */	mr r3, r31
/* 802E9F0C 002E6E4C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802E9F10 002E6E50  4B E1 B3 91 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802E9F14 002E6E54  48 00 02 8C */	b .L_802EA1A0
.L_802E9F18:
/* 802E9F18 002E6E58  7F E4 FB 78 */	mr r4, r31
/* 802E9F1C 002E6E5C  38 61 00 98 */	addi r3, r1, 0x98
/* 802E9F20 002E6E60  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9F24 002E6E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9F28 002E6E68  7D 89 03 A6 */	mtctr r12
/* 802E9F2C 002E6E6C  4E 80 04 21 */	bctrl 
/* 802E9F30 002E6E70  C3 7F 01 A0 */	lfs f27, 0x1a0(r31)
/* 802E9F34 002E6E74  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 802E9F38 002E6E78  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802E9F3C 002E6E7C  EC 40 D8 28 */	fsubs f2, f0, f27
/* 802E9F40 002E6E80  C3 5F 01 98 */	lfs f26, 0x198(r31)
/* 802E9F44 002E6E84  C0 21 00 98 */	lfs f1, 0x98(r1)
/* 802E9F48 002E6E88  C0 05 03 84 */	lfs f0, 0x384(r5)
/* 802E9F4C 002E6E8C  EC 61 D0 28 */	fsubs f3, f1, f26
/* 802E9F50 002E6E90  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802E9F54 002E6E94  EC 00 00 32 */	fmuls f0, f0, f0
/* 802E9F58 002E6E98  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802E9F5C 002E6E9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802E9F60 002E6EA0  40 80 01 28 */	bge .L_802EA088
/* 802E9F64 002E6EA4  7F E4 FB 78 */	mr r4, r31
/* 802E9F68 002E6EA8  38 61 00 2C */	addi r3, r1, 0x2c
/* 802E9F6C 002E6EAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9F70 002E6EB0  C3 5F 02 E4 */	lfs f26, 0x2e4(r31)
/* 802E9F74 002E6EB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802E9F78 002E6EB8  C3 7F 02 EC */	lfs f27, 0x2ec(r31)
/* 802E9F7C 002E6EBC  C3 25 03 34 */	lfs f25, 0x334(r5)
/* 802E9F80 002E6EC0  C3 05 03 0C */	lfs f24, 0x30c(r5)
/* 802E9F84 002E6EC4  7D 89 03 A6 */	mtctr r12
/* 802E9F88 002E6EC8  4E 80 04 21 */	bctrl 
/* 802E9F8C 002E6ECC  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802E9F90 002E6ED0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802E9F94 002E6ED4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802E9F98 002E6ED8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802E9F9C 002E6EDC  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802E9FA0 002E6EE0  EC 3A 20 28 */	fsubs f1, f26, f4
/* 802E9FA4 002E6EE4  EC 5B 00 28 */	fsubs f2, f27, f0
/* 802E9FA8 002E6EE8  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802E9FAC 002E6EEC  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802E9FB0 002E6EF0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802E9FB4 002E6EF4  4B D4 B1 55 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802E9FB8 002E6EF8  48 12 7C 19 */	bl roundAng__Ff
/* 802E9FBC 002E6EFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E9FC0 002E6F00  FF 40 08 90 */	fmr f26, f1
/* 802E9FC4 002E6F04  7F E3 FB 78 */	mr r3, r31
/* 802E9FC8 002E6F08  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802E9FCC 002E6F0C  7D 89 03 A6 */	mtctr r12
/* 802E9FD0 002E6F10  4E 80 04 21 */	bctrl 
/* 802E9FD4 002E6F14  FC 40 08 90 */	fmr f2, f1
/* 802E9FD8 002E6F18  FC 20 D0 90 */	fmr f1, f26
/* 802E9FDC 002E6F1C  48 12 7C 21 */	bl angDist__Fff
/* 802E9FE0 002E6F20  FF E0 08 90 */	fmr f31, f1
/* 802E9FE4 002E6F24  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802E9FE8 002E6F28  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802E9FEC 002E6F2C  EC 00 06 72 */	fmuls f0, f0, f25
/* 802E9FF0 002E6F30  EF 1F 06 32 */	fmuls f24, f31, f24
/* 802E9FF4 002E6F34  EC 21 00 32 */	fmuls f1, f1, f0
/* 802E9FF8 002E6F38  FC 00 C2 10 */	fabs f0, f24
/* 802E9FFC 002E6F3C  FC 00 00 18 */	frsp f0, f0
/* 802EA000 002E6F40  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EA004 002E6F44  40 81 00 1C */	ble .L_802EA020
/* 802EA008 002E6F48  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA00C 002E6F4C  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EA010 002E6F50  40 81 00 0C */	ble .L_802EA01C
/* 802EA014 002E6F54  FF 00 08 90 */	fmr f24, f1
/* 802EA018 002E6F58  48 00 00 08 */	b .L_802EA020
.L_802EA01C:
/* 802EA01C 002E6F5C  FF 00 08 50 */	fneg f24, f1
.L_802EA020:
/* 802EA020 002E6F60  7F E3 FB 78 */	mr r3, r31
/* 802EA024 002E6F64  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA028 002E6F68  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA02C 002E6F6C  7D 89 03 A6 */	mtctr r12
/* 802EA030 002E6F70  4E 80 04 21 */	bctrl 
/* 802EA034 002E6F74  EC 38 08 2A */	fadds f1, f24, f1
/* 802EA038 002E6F78  48 12 7B 99 */	bl roundAng__Ff
/* 802EA03C 002E6F7C  FC 60 FA 10 */	fabs f3, f31
/* 802EA040 002E6F80  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EA044 002E6F84  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EA048 002E6F88  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EA04C 002E6F8C  FC 20 18 18 */	frsp f1, f3
/* 802EA050 002E6F90  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EA054 002E6F94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA058 002E6F98  4C 40 13 82 */	cror 2, 0, 2
/* 802EA05C 002E6F9C  40 82 00 18 */	bne .L_802EA074
/* 802EA060 002E6FA0  38 00 00 0A */	li r0, 0xa
/* 802EA064 002E6FA4  7F E3 FB 78 */	mr r3, r31
/* 802EA068 002E6FA8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA06C 002E6FAC  4B E1 B2 35 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA070 002E6FB0  48 00 01 30 */	b .L_802EA1A0
.L_802EA074:
/* 802EA074 002E6FB4  38 00 00 07 */	li r0, 7
/* 802EA078 002E6FB8  7F E3 FB 78 */	mr r3, r31
/* 802EA07C 002E6FBC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA080 002E6FC0  4B E1 B2 21 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA084 002E6FC4  48 00 01 1C */	b .L_802EA1A0
.L_802EA088:
/* 802EA088 002E6FC8  7F E4 FB 78 */	mr r4, r31
/* 802EA08C 002E6FCC  38 61 00 14 */	addi r3, r1, 0x14
/* 802EA090 002E6FD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA094 002E6FD4  C3 25 03 34 */	lfs f25, 0x334(r5)
/* 802EA098 002E6FD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA09C 002E6FDC  C3 05 03 0C */	lfs f24, 0x30c(r5)
/* 802EA0A0 002E6FE0  7D 89 03 A6 */	mtctr r12
/* 802EA0A4 002E6FE4  4E 80 04 21 */	bctrl 
/* 802EA0A8 002E6FE8  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802EA0AC 002E6FEC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EA0B0 002E6FF0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802EA0B4 002E6FF4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EA0B8 002E6FF8  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802EA0BC 002E6FFC  EC 3A 20 28 */	fsubs f1, f26, f4
/* 802EA0C0 002E7000  EC 5B 00 28 */	fsubs f2, f27, f0
/* 802EA0C4 002E7004  D0 81 00 08 */	stfs f4, 8(r1)
/* 802EA0C8 002E7008  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802EA0CC 002E700C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802EA0D0 002E7010  4B D4 B0 39 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EA0D4 002E7014  48 12 7A FD */	bl roundAng__Ff
/* 802EA0D8 002E7018  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA0DC 002E701C  FF 40 08 90 */	fmr f26, f1
/* 802EA0E0 002E7020  7F E3 FB 78 */	mr r3, r31
/* 802EA0E4 002E7024  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA0E8 002E7028  7D 89 03 A6 */	mtctr r12
/* 802EA0EC 002E702C  4E 80 04 21 */	bctrl 
/* 802EA0F0 002E7030  FC 40 08 90 */	fmr f2, f1
/* 802EA0F4 002E7034  FC 20 D0 90 */	fmr f1, f26
/* 802EA0F8 002E7038  48 12 7B 05 */	bl angDist__Fff
/* 802EA0FC 002E703C  FF E0 08 90 */	fmr f31, f1
/* 802EA100 002E7040  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EA104 002E7044  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EA108 002E7048  EC 00 06 72 */	fmuls f0, f0, f25
/* 802EA10C 002E704C  EF 1F 06 32 */	fmuls f24, f31, f24
/* 802EA110 002E7050  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EA114 002E7054  FC 00 C2 10 */	fabs f0, f24
/* 802EA118 002E7058  FC 00 00 18 */	frsp f0, f0
/* 802EA11C 002E705C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EA120 002E7060  40 81 00 1C */	ble .L_802EA13C
/* 802EA124 002E7064  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA128 002E7068  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EA12C 002E706C  40 81 00 0C */	ble .L_802EA138
/* 802EA130 002E7070  FF 00 08 90 */	fmr f24, f1
/* 802EA134 002E7074  48 00 00 08 */	b .L_802EA13C
.L_802EA138:
/* 802EA138 002E7078  FF 00 08 50 */	fneg f24, f1
.L_802EA13C:
/* 802EA13C 002E707C  7F E3 FB 78 */	mr r3, r31
/* 802EA140 002E7080  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA144 002E7084  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA148 002E7088  7D 89 03 A6 */	mtctr r12
/* 802EA14C 002E708C  4E 80 04 21 */	bctrl 
/* 802EA150 002E7090  EC 38 08 2A */	fadds f1, f24, f1
/* 802EA154 002E7094  48 12 7A 7D */	bl roundAng__Ff
/* 802EA158 002E7098  FC 60 FA 10 */	fabs f3, f31
/* 802EA15C 002E709C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EA160 002E70A0  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EA164 002E70A4  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EA168 002E70A8  FC 20 18 18 */	frsp f1, f3
/* 802EA16C 002E70AC  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EA170 002E70B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA174 002E70B4  4C 40 13 82 */	cror 2, 0, 2
/* 802EA178 002E70B8  40 82 00 18 */	bne .L_802EA190
/* 802EA17C 002E70BC  38 00 00 09 */	li r0, 9
/* 802EA180 002E70C0  7F E3 FB 78 */	mr r3, r31
/* 802EA184 002E70C4  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA188 002E70C8  4B E1 B1 19 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA18C 002E70CC  48 00 00 14 */	b .L_802EA1A0
.L_802EA190:
/* 802EA190 002E70D0  38 00 00 06 */	li r0, 6
/* 802EA194 002E70D4  7F E3 FB 78 */	mr r3, r31
/* 802EA198 002E70D8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA19C 002E70DC  4B E1 B1 05 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802EA1A0:
/* 802EA1A0 002E70E0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802EA1A4 002E70E4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EA1A8 002E70E8  28 00 00 00 */	cmplwi r0, 0
/* 802EA1AC 002E70EC  41 82 00 30 */	beq .L_802EA1DC
/* 802EA1B0 002E70F0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EA1B4 002E70F4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EA1B8 002E70F8  40 82 00 24 */	bne .L_802EA1DC
/* 802EA1BC 002E70FC  7F C3 F3 78 */	mr r3, r30
/* 802EA1C0 002E7100  7F E4 FB 78 */	mr r4, r31
/* 802EA1C4 002E7104  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EA1C8 002E7108  38 C0 00 00 */	li r6, 0
/* 802EA1CC 002E710C  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802EA1D0 002E7110  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EA1D4 002E7114  7D 89 03 A6 */	mtctr r12
/* 802EA1D8 002E7118  4E 80 04 21 */	bctrl 
.L_802EA1DC:
/* 802EA1DC 002E711C  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 802EA1E0 002E7120  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 802EA1E4 002E7124  E3 C1 01 28 */	psq_l f30, 296(r1), 0, qr0
/* 802EA1E8 002E7128  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 802EA1EC 002E712C  E3 A1 01 18 */	psq_l f29, 280(r1), 0, qr0
/* 802EA1F0 002E7130  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 802EA1F4 002E7134  E3 81 01 08 */	psq_l f28, 264(r1), 0, qr0
/* 802EA1F8 002E7138  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 802EA1FC 002E713C  E3 61 00 F8 */	psq_l f27, 248(r1), 0, qr0
/* 802EA200 002E7140  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 802EA204 002E7144  E3 41 00 E8 */	psq_l f26, 232(r1), 0, qr0
/* 802EA208 002E7148  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 802EA20C 002E714C  E3 21 00 D8 */	psq_l f25, 216(r1), 0, qr0
/* 802EA210 002E7150  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 802EA214 002E7154  E3 01 00 C8 */	psq_l f24, 200(r1), 0, qr0
/* 802EA218 002E7158  CB 01 00 C0 */	lfd f24, 0xc0(r1)
/* 802EA21C 002E715C  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 802EA220 002E7160  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 802EA224 002E7164  80 01 01 44 */	lwz r0, 0x144(r1)
/* 802EA228 002E7168  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 802EA22C 002E716C  7C 08 03 A6 */	mtlr r0
/* 802EA230 002E7170  38 21 01 40 */	addi r1, r1, 0x140
/* 802EA234 002E7174  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBase, global
/* 802EA238 002E7178  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EA23C 002E717C  7C 08 02 A6 */	mflr r0
/* 802EA240 002E7180  7C 83 23 78 */	mr r3, r4
/* 802EA244 002E7184  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EA248 002E7188  4B E1 77 35 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802EA24C 002E718C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EA250 002E7190  7C 08 03 A6 */	mtlr r0
/* 802EA254 002E7194  38 21 00 10 */	addi r1, r1, 0x10
/* 802EA258 002E7198  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai9StateTurnFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802EA25C 002E719C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EA260 002E71A0  7C 08 02 A6 */	mflr r0
/* 802EA264 002E71A4  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA268 002E71A8  7C 83 23 78 */	mr r3, r4
/* 802EA26C 002E71AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EA270 002E71B0  38 00 FF FF */	li r0, -1
/* 802EA274 002E71B4  38 A0 00 00 */	li r5, 0
/* 802EA278 002E71B8  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 802EA27C 002E71BC  38 80 00 02 */	li r4, 2
/* 802EA280 002E71C0  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802EA284 002E71C4  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802EA288 002E71C8  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802EA28C 002E71CC  4B E1 AD 79 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EA290 002E71D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EA294 002E71D4  7C 08 03 A6 */	mtlr r0
/* 802EA298 002E71D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802EA29C 002E71DC  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBase, global
/* 802EA2A0 002E71E0  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802EA2A4 002E71E4  7C 08 02 A6 */	mflr r0
/* 802EA2A8 002E71E8  90 01 00 94 */	stw r0, 0x94(r1)
/* 802EA2AC 002E71EC  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 802EA2B0 002E71F0  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 802EA2B4 002E71F4  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 802EA2B8 002E71F8  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 802EA2BC 002E71FC  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 802EA2C0 002E7200  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 802EA2C4 002E7204  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 802EA2C8 002E7208  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 802EA2CC 002E720C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802EA2D0 002E7210  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802EA2D4 002E7214  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA2D8 002E7218  7C 9F 23 78 */	mr r31, r4
/* 802EA2DC 002E721C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802EA2E0 002E7220  7C 7E 1B 78 */	mr r30, r3
/* 802EA2E4 002E7224  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA2E8 002E7228  4C 40 13 82 */	cror 2, 0, 2
/* 802EA2EC 002E722C  40 82 00 18 */	bne .L_802EA304
/* 802EA2F0 002E7230  38 00 00 00 */	li r0, 0
/* 802EA2F4 002E7234  7F E3 FB 78 */	mr r3, r31
/* 802EA2F8 002E7238  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA2FC 002E723C  4B E1 AF A5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA300 002E7240  48 00 02 94 */	b .L_802EA594
.L_802EA304:
/* 802EA304 002E7244  7F E3 FB 78 */	mr r3, r31
/* 802EA308 002E7248  38 80 00 00 */	li r4, 0
/* 802EA30C 002E724C  4B E2 A3 4D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802EA310 002E7250  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EA314 002E7254  41 82 00 18 */	beq .L_802EA32C
/* 802EA318 002E7258  38 00 00 04 */	li r0, 4
/* 802EA31C 002E725C  7F E3 FB 78 */	mr r3, r31
/* 802EA320 002E7260  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA324 002E7264  4B E1 AF 7D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA328 002E7268  48 00 02 6C */	b .L_802EA594
.L_802EA32C:
/* 802EA32C 002E726C  7F E3 FB 78 */	mr r3, r31
/* 802EA330 002E7270  48 00 2B BD */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802EA334 002E7274  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EA338 002E7278  41 82 00 18 */	beq .L_802EA350
/* 802EA33C 002E727C  38 00 00 03 */	li r0, 3
/* 802EA340 002E7280  7F E3 FB 78 */	mr r3, r31
/* 802EA344 002E7284  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA348 002E7288  4B E1 AF 59 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA34C 002E728C  48 00 02 48 */	b .L_802EA594
.L_802EA350:
/* 802EA350 002E7290  7F E4 FB 78 */	mr r4, r31
/* 802EA354 002E7294  38 61 00 38 */	addi r3, r1, 0x38
/* 802EA358 002E7298  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA35C 002E729C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA360 002E72A0  7D 89 03 A6 */	mtctr r12
/* 802EA364 002E72A4  4E 80 04 21 */	bctrl 
/* 802EA368 002E72A8  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802EA36C 002E72AC  7F E3 FB 78 */	mr r3, r31
/* 802EA370 002E72B0  C3 9F 01 A0 */	lfs f28, 0x1a0(r31)
/* 802EA374 002E72B4  48 00 29 29 */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802EA378 002E72B8  28 03 00 00 */	cmplwi r3, 0
/* 802EA37C 002E72BC  41 82 01 10 */	beq .L_802EA48C
/* 802EA380 002E72C0  7F E4 FB 78 */	mr r4, r31
/* 802EA384 002E72C4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802EA388 002E72C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA38C 002E72CC  38 61 00 2C */	addi r3, r1, 0x2c
/* 802EA390 002E72D0  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802EA394 002E72D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA398 002E72D8  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 802EA39C 002E72DC  7D 89 03 A6 */	mtctr r12
/* 802EA3A0 002E72E0  4E 80 04 21 */	bctrl 
/* 802EA3A4 002E72E4  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802EA3A8 002E72E8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EA3AC 002E72EC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802EA3B0 002E72F0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EA3B4 002E72F4  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802EA3B8 002E72F8  EC 3F 20 28 */	fsubs f1, f31, f4
/* 802EA3BC 002E72FC  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802EA3C0 002E7300  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802EA3C4 002E7304  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802EA3C8 002E7308  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802EA3CC 002E730C  4B D4 AD 3D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EA3D0 002E7310  48 12 78 01 */	bl roundAng__Ff
/* 802EA3D4 002E7314  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA3D8 002E7318  FF E0 08 90 */	fmr f31, f1
/* 802EA3DC 002E731C  7F E3 FB 78 */	mr r3, r31
/* 802EA3E0 002E7320  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA3E4 002E7324  7D 89 03 A6 */	mtctr r12
/* 802EA3E8 002E7328  4E 80 04 21 */	bctrl 
/* 802EA3EC 002E732C  FC 40 08 90 */	fmr f2, f1
/* 802EA3F0 002E7330  FC 20 F8 90 */	fmr f1, f31
/* 802EA3F4 002E7334  48 12 78 09 */	bl angDist__Fff
/* 802EA3F8 002E7338  FF E0 08 90 */	fmr f31, f1
/* 802EA3FC 002E733C  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EA400 002E7340  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EA404 002E7344  EC 00 07 72 */	fmuls f0, f0, f29
/* 802EA408 002E7348  EF BF 07 B2 */	fmuls f29, f31, f30
/* 802EA40C 002E734C  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EA410 002E7350  FC 00 EA 10 */	fabs f0, f29
/* 802EA414 002E7354  FC 00 00 18 */	frsp f0, f0
/* 802EA418 002E7358  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EA41C 002E735C  40 81 00 1C */	ble .L_802EA438
/* 802EA420 002E7360  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA424 002E7364  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802EA428 002E7368  40 81 00 0C */	ble .L_802EA434
/* 802EA42C 002E736C  FF A0 08 90 */	fmr f29, f1
/* 802EA430 002E7370  48 00 00 08 */	b .L_802EA438
.L_802EA434:
/* 802EA434 002E7374  FF A0 08 50 */	fneg f29, f1
.L_802EA438:
/* 802EA438 002E7378  7F E3 FB 78 */	mr r3, r31
/* 802EA43C 002E737C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA440 002E7380  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA444 002E7384  7D 89 03 A6 */	mtctr r12
/* 802EA448 002E7388  4E 80 04 21 */	bctrl 
/* 802EA44C 002E738C  EC 3D 08 2A */	fadds f1, f29, f1
/* 802EA450 002E7390  48 12 77 81 */	bl roundAng__Ff
/* 802EA454 002E7394  FC 60 FA 10 */	fabs f3, f31
/* 802EA458 002E7398  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EA45C 002E739C  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EA460 002E73A0  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EA464 002E73A4  FC 20 18 18 */	frsp f1, f3
/* 802EA468 002E73A8  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EA46C 002E73AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA470 002E73B0  4C 40 13 82 */	cror 2, 0, 2
/* 802EA474 002E73B4  40 82 01 20 */	bne .L_802EA594
/* 802EA478 002E73B8  38 00 00 09 */	li r0, 9
/* 802EA47C 002E73BC  7F E3 FB 78 */	mr r3, r31
/* 802EA480 002E73C0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA484 002E73C4  4B E1 AE 1D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA488 002E73C8  48 00 01 0C */	b .L_802EA594
.L_802EA48C:
/* 802EA48C 002E73CC  7F E4 FB 78 */	mr r4, r31
/* 802EA490 002E73D0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802EA494 002E73D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA498 002E73D8  38 61 00 14 */	addi r3, r1, 0x14
/* 802EA49C 002E73DC  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 802EA4A0 002E73E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA4A4 002E73E4  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 802EA4A8 002E73E8  7D 89 03 A6 */	mtctr r12
/* 802EA4AC 002E73EC  4E 80 04 21 */	bctrl 
/* 802EA4B0 002E73F0  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802EA4B4 002E73F4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EA4B8 002E73F8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802EA4BC 002E73FC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EA4C0 002E7400  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802EA4C4 002E7404  EC 3F 20 28 */	fsubs f1, f31, f4
/* 802EA4C8 002E7408  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802EA4CC 002E740C  D0 81 00 08 */	stfs f4, 8(r1)
/* 802EA4D0 002E7410  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802EA4D4 002E7414  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802EA4D8 002E7418  4B D4 AC 31 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EA4DC 002E741C  48 12 76 F5 */	bl roundAng__Ff
/* 802EA4E0 002E7420  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA4E4 002E7424  FF E0 08 90 */	fmr f31, f1
/* 802EA4E8 002E7428  7F E3 FB 78 */	mr r3, r31
/* 802EA4EC 002E742C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA4F0 002E7430  7D 89 03 A6 */	mtctr r12
/* 802EA4F4 002E7434  4E 80 04 21 */	bctrl 
/* 802EA4F8 002E7438  FC 40 08 90 */	fmr f2, f1
/* 802EA4FC 002E743C  FC 20 F8 90 */	fmr f1, f31
/* 802EA500 002E7440  48 12 76 FD */	bl angDist__Fff
/* 802EA504 002E7444  FF E0 08 90 */	fmr f31, f1
/* 802EA508 002E7448  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EA50C 002E744C  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EA510 002E7450  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802EA514 002E7454  EF BF 07 72 */	fmuls f29, f31, f29
/* 802EA518 002E7458  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EA51C 002E745C  FC 00 EA 10 */	fabs f0, f29
/* 802EA520 002E7460  FC 00 00 18 */	frsp f0, f0
/* 802EA524 002E7464  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EA528 002E7468  40 81 00 1C */	ble .L_802EA544
/* 802EA52C 002E746C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA530 002E7470  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802EA534 002E7474  40 81 00 0C */	ble .L_802EA540
/* 802EA538 002E7478  FF A0 08 90 */	fmr f29, f1
/* 802EA53C 002E747C  48 00 00 08 */	b .L_802EA544
.L_802EA540:
/* 802EA540 002E7480  FF A0 08 50 */	fneg f29, f1
.L_802EA544:
/* 802EA544 002E7484  7F E3 FB 78 */	mr r3, r31
/* 802EA548 002E7488  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA54C 002E748C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA550 002E7490  7D 89 03 A6 */	mtctr r12
/* 802EA554 002E7494  4E 80 04 21 */	bctrl 
/* 802EA558 002E7498  EC 3D 08 2A */	fadds f1, f29, f1
/* 802EA55C 002E749C  48 12 76 75 */	bl roundAng__Ff
/* 802EA560 002E74A0  FC 60 FA 10 */	fabs f3, f31
/* 802EA564 002E74A4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EA568 002E74A8  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EA56C 002E74AC  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EA570 002E74B0  FC 20 18 18 */	frsp f1, f3
/* 802EA574 002E74B4  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EA578 002E74B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA57C 002E74BC  4C 40 13 82 */	cror 2, 0, 2
/* 802EA580 002E74C0  40 82 00 14 */	bne .L_802EA594
/* 802EA584 002E74C4  38 00 00 09 */	li r0, 9
/* 802EA588 002E74C8  7F E3 FB 78 */	mr r3, r31
/* 802EA58C 002E74CC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA590 002E74D0  4B E1 AD 11 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802EA594:
/* 802EA594 002E74D4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802EA598 002E74D8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EA59C 002E74DC  28 00 00 00 */	cmplwi r0, 0
/* 802EA5A0 002E74E0  41 82 00 30 */	beq .L_802EA5D0
/* 802EA5A4 002E74E4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EA5A8 002E74E8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EA5AC 002E74EC  40 82 00 24 */	bne .L_802EA5D0
/* 802EA5B0 002E74F0  7F C3 F3 78 */	mr r3, r30
/* 802EA5B4 002E74F4  7F E4 FB 78 */	mr r4, r31
/* 802EA5B8 002E74F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EA5BC 002E74FC  38 C0 00 00 */	li r6, 0
/* 802EA5C0 002E7500  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802EA5C4 002E7504  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EA5C8 002E7508  7D 89 03 A6 */	mtctr r12
/* 802EA5CC 002E750C  4E 80 04 21 */	bctrl 
.L_802EA5D0:
/* 802EA5D0 002E7510  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 802EA5D4 002E7514  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 802EA5D8 002E7518  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 802EA5DC 002E751C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 802EA5E0 002E7520  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 802EA5E4 002E7524  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 802EA5E8 002E7528  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 802EA5EC 002E752C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 802EA5F0 002E7530  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802EA5F4 002E7534  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802EA5F8 002E7538  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802EA5FC 002E753C  7C 08 03 A6 */	mtlr r0
/* 802EA600 002E7540  38 21 00 90 */	addi r1, r1, 0x90
/* 802EA604 002E7544  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBase, global
/* 802EA608 002E7548  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai13StateTurnHomeFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802EA60C 002E754C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EA610 002E7550  7C 08 02 A6 */	mflr r0
/* 802EA614 002E7554  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA618 002E7558  7C 83 23 78 */	mr r3, r4
/* 802EA61C 002E755C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EA620 002E7560  38 00 FF FF */	li r0, -1
/* 802EA624 002E7564  38 A0 00 00 */	li r5, 0
/* 802EA628 002E7568  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 802EA62C 002E756C  38 80 00 02 */	li r4, 2
/* 802EA630 002E7570  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802EA634 002E7574  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802EA638 002E7578  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802EA63C 002E757C  4B E1 A9 C9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EA640 002E7580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EA644 002E7584  7C 08 03 A6 */	mtlr r0
/* 802EA648 002E7588  38 21 00 10 */	addi r1, r1, 0x10
/* 802EA64C 002E758C  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBase, global
/* 802EA650 002E7590  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802EA654 002E7594  7C 08 02 A6 */	mflr r0
/* 802EA658 002E7598  90 01 00 84 */	stw r0, 0x84(r1)
/* 802EA65C 002E759C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802EA660 002E75A0  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802EA664 002E75A4  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802EA668 002E75A8  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802EA66C 002E75AC  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802EA670 002E75B0  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802EA674 002E75B4  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 802EA678 002E75B8  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 802EA67C 002E75BC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802EA680 002E75C0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802EA684 002E75C4  7C 9F 23 78 */	mr r31, r4
/* 802EA688 002E75C8  7C 7E 1B 78 */	mr r30, r3
/* 802EA68C 002E75CC  7F E3 FB 78 */	mr r3, r31
/* 802EA690 002E75D0  48 00 27 A1 */	bl updateHomePosition__Q34Game10MiniHoudai3ObjFv
/* 802EA694 002E75D4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802EA698 002E75D8  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA69C 002E75DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA6A0 002E75E0  4C 40 13 82 */	cror 2, 0, 2
/* 802EA6A4 002E75E4  40 82 00 18 */	bne .L_802EA6BC
/* 802EA6A8 002E75E8  38 00 00 00 */	li r0, 0
/* 802EA6AC 002E75EC  7F E3 FB 78 */	mr r3, r31
/* 802EA6B0 002E75F0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA6B4 002E75F4  4B E1 AB ED */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA6B8 002E75F8  48 00 02 B4 */	b .L_802EA96C
.L_802EA6BC:
/* 802EA6BC 002E75FC  7F E3 FB 78 */	mr r3, r31
/* 802EA6C0 002E7600  38 80 00 01 */	li r4, 1
/* 802EA6C4 002E7604  4B E2 9F 95 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802EA6C8 002E7608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EA6CC 002E760C  41 82 00 18 */	beq .L_802EA6E4
/* 802EA6D0 002E7610  38 00 00 04 */	li r0, 4
/* 802EA6D4 002E7614  7F E3 FB 78 */	mr r3, r31
/* 802EA6D8 002E7618  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA6DC 002E761C  4B E1 AB C5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA6E0 002E7620  48 00 02 8C */	b .L_802EA96C
.L_802EA6E4:
/* 802EA6E4 002E7624  7F E3 FB 78 */	mr r3, r31
/* 802EA6E8 002E7628  48 00 28 05 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802EA6EC 002E762C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EA6F0 002E7630  41 82 00 18 */	beq .L_802EA708
/* 802EA6F4 002E7634  38 00 00 03 */	li r0, 3
/* 802EA6F8 002E7638  7F E3 FB 78 */	mr r3, r31
/* 802EA6FC 002E763C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA700 002E7640  4B E1 AB A1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA704 002E7644  48 00 02 68 */	b .L_802EA96C
.L_802EA708:
/* 802EA708 002E7648  7F E3 FB 78 */	mr r3, r31
/* 802EA70C 002E764C  48 00 25 91 */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802EA710 002E7650  28 03 00 00 */	cmplwi r3, 0
/* 802EA714 002E7654  41 82 01 48 */	beq .L_802EA85C
/* 802EA718 002E7658  7C 64 1B 78 */	mr r4, r3
/* 802EA71C 002E765C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802EA720 002E7660  81 83 00 00 */	lwz r12, 0(r3)
/* 802EA724 002E7664  38 61 00 20 */	addi r3, r1, 0x20
/* 802EA728 002E7668  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 802EA72C 002E766C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA730 002E7670  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 802EA734 002E7674  7D 89 03 A6 */	mtctr r12
/* 802EA738 002E7678  4E 80 04 21 */	bctrl 
/* 802EA73C 002E767C  7F E4 FB 78 */	mr r4, r31
/* 802EA740 002E7680  38 61 00 2C */	addi r3, r1, 0x2c
/* 802EA744 002E7684  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA748 002E7688  C3 E1 00 20 */	lfs f31, 0x20(r1)
/* 802EA74C 002E768C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA750 002E7690  C3 81 00 28 */	lfs f28, 0x28(r1)
/* 802EA754 002E7694  7D 89 03 A6 */	mtctr r12
/* 802EA758 002E7698  4E 80 04 21 */	bctrl 
/* 802EA75C 002E769C  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 802EA760 002E76A0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EA764 002E76A4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802EA768 002E76A8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EA76C 002E76AC  EC 3F 08 28 */	fsubs f1, f31, f1
/* 802EA770 002E76B0  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802EA774 002E76B4  4B D4 A9 95 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EA778 002E76B8  48 12 74 59 */	bl roundAng__Ff
/* 802EA77C 002E76BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA780 002E76C0  FF E0 08 90 */	fmr f31, f1
/* 802EA784 002E76C4  7F E3 FB 78 */	mr r3, r31
/* 802EA788 002E76C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA78C 002E76CC  7D 89 03 A6 */	mtctr r12
/* 802EA790 002E76D0  4E 80 04 21 */	bctrl 
/* 802EA794 002E76D4  FC 40 08 90 */	fmr f2, f1
/* 802EA798 002E76D8  FC 20 F8 90 */	fmr f1, f31
/* 802EA79C 002E76DC  48 12 74 61 */	bl angDist__Fff
/* 802EA7A0 002E76E0  FF E0 08 90 */	fmr f31, f1
/* 802EA7A4 002E76E4  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EA7A8 002E76E8  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EA7AC 002E76EC  EC 00 07 72 */	fmuls f0, f0, f29
/* 802EA7B0 002E76F0  EF BF 07 B2 */	fmuls f29, f31, f30
/* 802EA7B4 002E76F4  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EA7B8 002E76F8  FC 00 EA 10 */	fabs f0, f29
/* 802EA7BC 002E76FC  FC 00 00 18 */	frsp f0, f0
/* 802EA7C0 002E7700  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EA7C4 002E7704  40 81 00 1C */	ble .L_802EA7E0
/* 802EA7C8 002E7708  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA7CC 002E770C  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802EA7D0 002E7710  40 81 00 0C */	ble .L_802EA7DC
/* 802EA7D4 002E7714  FF A0 08 90 */	fmr f29, f1
/* 802EA7D8 002E7718  48 00 00 08 */	b .L_802EA7E0
.L_802EA7DC:
/* 802EA7DC 002E771C  FF A0 08 50 */	fneg f29, f1
.L_802EA7E0:
/* 802EA7E0 002E7720  7F E3 FB 78 */	mr r3, r31
/* 802EA7E4 002E7724  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA7E8 002E7728  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA7EC 002E772C  7D 89 03 A6 */	mtctr r12
/* 802EA7F0 002E7730  4E 80 04 21 */	bctrl 
/* 802EA7F4 002E7734  EC 3D 08 2A */	fadds f1, f29, f1
/* 802EA7F8 002E7738  48 12 73 D9 */	bl roundAng__Ff
/* 802EA7FC 002E773C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EA800 002E7740  FC 40 FA 10 */	fabs f2, f31
/* 802EA804 002E7744  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EA808 002E7748  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 802EA80C 002E774C  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EA810 002E7750  FC 40 10 18 */	frsp f2, f2
/* 802EA814 002E7754  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 802EA818 002E7758  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EA81C 002E775C  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802EA820 002E7760  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802EA824 002E7764  EC 01 00 32 */	fmuls f0, f1, f0
/* 802EA828 002E7768  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802EA82C 002E776C  4C 40 13 82 */	cror 2, 0, 2
/* 802EA830 002E7770  40 82 00 18 */	bne .L_802EA848
/* 802EA834 002E7774  38 00 00 08 */	li r0, 8
/* 802EA838 002E7778  7F E3 FB 78 */	mr r3, r31
/* 802EA83C 002E777C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA840 002E7780  4B E1 AA 61 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA844 002E7784  48 00 01 28 */	b .L_802EA96C
.L_802EA848:
/* 802EA848 002E7788  38 00 00 05 */	li r0, 5
/* 802EA84C 002E778C  7F E3 FB 78 */	mr r3, r31
/* 802EA850 002E7790  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA854 002E7794  4B E1 AA 4D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EA858 002E7798  48 00 01 14 */	b .L_802EA96C
.L_802EA85C:
/* 802EA85C 002E779C  7F E4 FB 78 */	mr r4, r31
/* 802EA860 002E77A0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802EA864 002E77A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA868 002E77A8  38 61 00 14 */	addi r3, r1, 0x14
/* 802EA86C 002E77AC  C3 9F 02 E4 */	lfs f28, 0x2e4(r31)
/* 802EA870 002E77B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EA874 002E77B4  C3 FF 02 EC */	lfs f31, 0x2ec(r31)
/* 802EA878 002E77B8  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 802EA87C 002E77BC  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 802EA880 002E77C0  7D 89 03 A6 */	mtctr r12
/* 802EA884 002E77C4  4E 80 04 21 */	bctrl 
/* 802EA888 002E77C8  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802EA88C 002E77CC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EA890 002E77D0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802EA894 002E77D4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EA898 002E77D8  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802EA89C 002E77DC  EC 3C 20 28 */	fsubs f1, f28, f4
/* 802EA8A0 002E77E0  EC 5F 00 28 */	fsubs f2, f31, f0
/* 802EA8A4 002E77E4  D0 81 00 08 */	stfs f4, 8(r1)
/* 802EA8A8 002E77E8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802EA8AC 002E77EC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802EA8B0 002E77F0  4B D4 A8 59 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EA8B4 002E77F4  48 12 73 1D */	bl roundAng__Ff
/* 802EA8B8 002E77F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA8BC 002E77FC  FF E0 08 90 */	fmr f31, f1
/* 802EA8C0 002E7800  7F E3 FB 78 */	mr r3, r31
/* 802EA8C4 002E7804  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA8C8 002E7808  7D 89 03 A6 */	mtctr r12
/* 802EA8CC 002E780C  4E 80 04 21 */	bctrl 
/* 802EA8D0 002E7810  FC 40 08 90 */	fmr f2, f1
/* 802EA8D4 002E7814  FC 20 F8 90 */	fmr f1, f31
/* 802EA8D8 002E7818  48 12 73 25 */	bl angDist__Fff
/* 802EA8DC 002E781C  FF E0 08 90 */	fmr f31, f1
/* 802EA8E0 002E7820  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EA8E4 002E7824  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EA8E8 002E7828  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802EA8EC 002E782C  EF BF 07 72 */	fmuls f29, f31, f29
/* 802EA8F0 002E7830  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EA8F4 002E7834  FC 00 EA 10 */	fabs f0, f29
/* 802EA8F8 002E7838  FC 00 00 18 */	frsp f0, f0
/* 802EA8FC 002E783C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EA900 002E7840  40 81 00 1C */	ble .L_802EA91C
/* 802EA904 002E7844  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA908 002E7848  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802EA90C 002E784C  40 81 00 0C */	ble .L_802EA918
/* 802EA910 002E7850  FF A0 08 90 */	fmr f29, f1
/* 802EA914 002E7854  48 00 00 08 */	b .L_802EA91C
.L_802EA918:
/* 802EA918 002E7858  FF A0 08 50 */	fneg f29, f1
.L_802EA91C:
/* 802EA91C 002E785C  7F E3 FB 78 */	mr r3, r31
/* 802EA920 002E7860  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EA924 002E7864  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EA928 002E7868  7D 89 03 A6 */	mtctr r12
/* 802EA92C 002E786C  4E 80 04 21 */	bctrl 
/* 802EA930 002E7870  EC 3D 08 2A */	fadds f1, f29, f1
/* 802EA934 002E7874  48 12 72 9D */	bl roundAng__Ff
/* 802EA938 002E7878  FC 60 FA 10 */	fabs f3, f31
/* 802EA93C 002E787C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EA940 002E7880  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EA944 002E7884  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EA948 002E7888  FC 20 18 18 */	frsp f1, f3
/* 802EA94C 002E788C  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EA950 002E7890  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EA954 002E7894  4C 40 13 82 */	cror 2, 0, 2
/* 802EA958 002E7898  40 82 00 14 */	bne .L_802EA96C
/* 802EA95C 002E789C  38 00 00 0A */	li r0, 0xa
/* 802EA960 002E78A0  7F E3 FB 78 */	mr r3, r31
/* 802EA964 002E78A4  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EA968 002E78A8  4B E1 A9 39 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802EA96C:
/* 802EA96C 002E78AC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802EA970 002E78B0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EA974 002E78B4  28 00 00 00 */	cmplwi r0, 0
/* 802EA978 002E78B8  41 82 00 30 */	beq .L_802EA9A8
/* 802EA97C 002E78BC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EA980 002E78C0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EA984 002E78C4  40 82 00 24 */	bne .L_802EA9A8
/* 802EA988 002E78C8  7F C3 F3 78 */	mr r3, r30
/* 802EA98C 002E78CC  7F E4 FB 78 */	mr r4, r31
/* 802EA990 002E78D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EA994 002E78D4  38 C0 00 00 */	li r6, 0
/* 802EA998 002E78D8  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802EA99C 002E78DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EA9A0 002E78E0  7D 89 03 A6 */	mtctr r12
/* 802EA9A4 002E78E4  4E 80 04 21 */	bctrl 
.L_802EA9A8:
/* 802EA9A8 002E78E8  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802EA9AC 002E78EC  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802EA9B0 002E78F0  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802EA9B4 002E78F4  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802EA9B8 002E78F8  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802EA9BC 002E78FC  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802EA9C0 002E7900  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 802EA9C4 002E7904  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 802EA9C8 002E7908  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802EA9CC 002E790C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802EA9D0 002E7910  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802EA9D4 002E7914  7C 08 03 A6 */	mtlr r0
/* 802EA9D8 002E7918  38 21 00 80 */	addi r1, r1, 0x80
/* 802EA9DC 002E791C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBase, global
/* 802EA9E0 002E7920  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai13StateTurnPathFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802EA9E4 002E7924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EA9E8 002E7928  7C 08 02 A6 */	mflr r0
/* 802EA9EC 002E792C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EA9F0 002E7930  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EA9F4 002E7934  38 00 FF FF */	li r0, -1
/* 802EA9F8 002E7938  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802EA9FC 002E793C  7C 9F 23 78 */	mr r31, r4
/* 802EAA00 002E7940  7F E3 FB 78 */	mr r3, r31
/* 802EAA04 002E7944  D0 04 02 D0 */	stfs f0, 0x2d0(r4)
/* 802EAA08 002E7948  90 04 02 D4 */	stw r0, 0x2d4(r4)
/* 802EAA0C 002E794C  4B E1 6F C1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802EAA10 002E7950  7F E3 FB 78 */	mr r3, r31
/* 802EAA14 002E7954  38 80 00 00 */	li r4, 0
/* 802EAA18 002E7958  38 A0 00 00 */	li r5, 0
/* 802EAA1C 002E795C  4B E1 A5 E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EAA20 002E7960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EAA24 002E7964  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802EAA28 002E7968  7C 08 03 A6 */	mtlr r0
/* 802EAA2C 002E796C  38 21 00 10 */	addi r1, r1, 0x10
/* 802EAA30 002E7970  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBase, global
/* 802EAA34 002E7974  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 802EAA38 002E7978  7C 08 02 A6 */	mflr r0
/* 802EAA3C 002E797C  90 01 01 44 */	stw r0, 0x144(r1)
/* 802EAA40 002E7980  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 802EAA44 002E7984  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 802EAA48 002E7988  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 802EAA4C 002E798C  F3 C1 01 28 */	psq_st f30, 296(r1), 0, qr0
/* 802EAA50 002E7990  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 802EAA54 002E7994  F3 A1 01 18 */	psq_st f29, 280(r1), 0, qr0
/* 802EAA58 002E7998  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 802EAA5C 002E799C  F3 81 01 08 */	psq_st f28, 264(r1), 0, qr0
/* 802EAA60 002E79A0  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 802EAA64 002E79A4  F3 61 00 F8 */	psq_st f27, 248(r1), 0, qr0
/* 802EAA68 002E79A8  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 802EAA6C 002E79AC  F3 41 00 E8 */	psq_st f26, 232(r1), 0, qr0
/* 802EAA70 002E79B0  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 802EAA74 002E79B4  F3 21 00 D8 */	psq_st f25, 216(r1), 0, qr0
/* 802EAA78 002E79B8  DB 01 00 C0 */	stfd f24, 0xc0(r1)
/* 802EAA7C 002E79BC  F3 01 00 C8 */	psq_st f24, 200(r1), 0, qr0
/* 802EAA80 002E79C0  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 802EAA84 002E79C4  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 802EAA88 002E79C8  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 802EAA8C 002E79CC  7C 9F 23 78 */	mr r31, r4
/* 802EAA90 002E79D0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802EAA94 002E79D4  7C 7E 1B 78 */	mr r30, r3
/* 802EAA98 002E79D8  C3 C4 03 0C */	lfs f30, 0x30c(r4)
/* 802EAA9C 002E79DC  7F E3 FB 78 */	mr r3, r31
/* 802EAAA0 002E79E0  C3 A4 03 34 */	lfs f29, 0x334(r4)
/* 802EAAA4 002E79E4  4B E1 C8 5D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802EAAA8 002E79E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EAAAC 002E79EC  41 82 00 0C */	beq .L_802EAAB8
/* 802EAAB0 002E79F0  C3 C2 EC 0C */	lfs f30, lbl_8051CF6C@sda21(r2)
/* 802EAAB4 002E79F4  C3 A2 EB EC */	lfs f29, lbl_8051CF4C@sda21(r2)
.L_802EAAB8:
/* 802EAAB8 002E79F8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802EAABC 002E79FC  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EAAC0 002E7A00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EAAC4 002E7A04  4C 40 13 82 */	cror 2, 0, 2
/* 802EAAC8 002E7A08  40 82 00 18 */	bne .L_802EAAE0
/* 802EAACC 002E7A0C  38 00 00 00 */	li r0, 0
/* 802EAAD0 002E7A10  7F E3 FB 78 */	mr r3, r31
/* 802EAAD4 002E7A14  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAAD8 002E7A18  4B E1 A7 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAADC 002E7A1C  48 00 05 9C */	b .L_802EB078
.L_802EAAE0:
/* 802EAAE0 002E7A20  7F E3 FB 78 */	mr r3, r31
/* 802EAAE4 002E7A24  38 80 00 00 */	li r4, 0
/* 802EAAE8 002E7A28  4B E2 9B 71 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802EAAEC 002E7A2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EAAF0 002E7A30  41 82 00 18 */	beq .L_802EAB08
/* 802EAAF4 002E7A34  38 00 00 04 */	li r0, 4
/* 802EAAF8 002E7A38  7F E3 FB 78 */	mr r3, r31
/* 802EAAFC 002E7A3C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAB00 002E7A40  4B E1 A7 A1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAB04 002E7A44  48 00 05 74 */	b .L_802EB078
.L_802EAB08:
/* 802EAB08 002E7A48  7F E4 FB 78 */	mr r4, r31
/* 802EAB0C 002E7A4C  38 61 00 A4 */	addi r3, r1, 0xa4
/* 802EAB10 002E7A50  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAB14 002E7A54  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EAB18 002E7A58  7D 89 03 A6 */	mtctr r12
/* 802EAB1C 002E7A5C  4E 80 04 21 */	bctrl 
/* 802EAB20 002E7A60  C3 5F 01 A0 */	lfs f26, 0x1a0(r31)
/* 802EAB24 002E7A64  C0 01 00 AC */	lfs f0, 0xac(r1)
/* 802EAB28 002E7A68  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EAB2C 002E7A6C  EC 40 D0 28 */	fsubs f2, f0, f26
/* 802EAB30 002E7A70  C3 3F 01 98 */	lfs f25, 0x198(r31)
/* 802EAB34 002E7A74  C0 21 00 A4 */	lfs f1, 0xa4(r1)
/* 802EAB38 002E7A78  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802EAB3C 002E7A7C  EC 61 C8 28 */	fsubs f3, f1, f25
/* 802EAB40 002E7A80  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802EAB44 002E7A84  EC 00 00 32 */	fmuls f0, f0, f0
/* 802EAB48 002E7A88  EF 03 08 FA */	fmadds f24, f3, f3, f1
/* 802EAB4C 002E7A8C  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EAB50 002E7A90  40 81 00 18 */	ble .L_802EAB68
/* 802EAB54 002E7A94  38 00 00 02 */	li r0, 2
/* 802EAB58 002E7A98  7F E3 FB 78 */	mr r3, r31
/* 802EAB5C 002E7A9C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAB60 002E7AA0  4B E1 A7 41 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAB64 002E7AA4  48 00 05 14 */	b .L_802EB078
.L_802EAB68:
/* 802EAB68 002E7AA8  7F E3 FB 78 */	mr r3, r31
/* 802EAB6C 002E7AAC  48 00 23 81 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802EAB70 002E7AB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EAB74 002E7AB4  41 82 00 18 */	beq .L_802EAB8C
/* 802EAB78 002E7AB8  38 00 00 03 */	li r0, 3
/* 802EAB7C 002E7ABC  7F E3 FB 78 */	mr r3, r31
/* 802EAB80 002E7AC0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAB84 002E7AC4  4B E1 A7 1D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAB88 002E7AC8  48 00 04 F0 */	b .L_802EB078
.L_802EAB8C:
/* 802EAB8C 002E7ACC  7F E3 FB 78 */	mr r3, r31
/* 802EAB90 002E7AD0  48 00 21 0D */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802EAB94 002E7AD4  7C 7D 1B 79 */	or. r29, r3, r3
/* 802EAB98 002E7AD8  41 82 02 A0 */	beq .L_802EAE38
/* 802EAB9C 002E7ADC  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EABA0 002E7AE0  7F A4 EB 78 */	mr r4, r29
/* 802EABA4 002E7AE4  38 61 00 38 */	addi r3, r1, 0x38
/* 802EABA8 002E7AE8  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802EABAC 002E7AEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802EABB0 002E7AF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EABB4 002E7AF4  7D 89 03 A6 */	mtctr r12
/* 802EABB8 002E7AF8  4E 80 04 21 */	bctrl 
/* 802EABBC 002E7AFC  7F E4 FB 78 */	mr r4, r31
/* 802EABC0 002E7B00  38 61 00 44 */	addi r3, r1, 0x44
/* 802EABC4 002E7B04  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EABC8 002E7B08  C3 01 00 38 */	lfs f24, 0x38(r1)
/* 802EABCC 002E7B0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EABD0 002E7B10  C3 21 00 40 */	lfs f25, 0x40(r1)
/* 802EABD4 002E7B14  7D 89 03 A6 */	mtctr r12
/* 802EABD8 002E7B18  4E 80 04 21 */	bctrl 
/* 802EABDC 002E7B1C  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 802EABE0 002E7B20  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EABE4 002E7B24  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802EABE8 002E7B28  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EABEC 002E7B2C  EC 38 08 28 */	fsubs f1, f24, f1
/* 802EABF0 002E7B30  EC 59 00 28 */	fsubs f2, f25, f0
/* 802EABF4 002E7B34  4B D4 A5 15 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EABF8 002E7B38  48 12 6F D9 */	bl roundAng__Ff
/* 802EABFC 002E7B3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAC00 002E7B40  FF 00 08 90 */	fmr f24, f1
/* 802EAC04 002E7B44  7F E3 FB 78 */	mr r3, r31
/* 802EAC08 002E7B48  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EAC0C 002E7B4C  7D 89 03 A6 */	mtctr r12
/* 802EAC10 002E7B50  4E 80 04 21 */	bctrl 
/* 802EAC14 002E7B54  FC 40 08 90 */	fmr f2, f1
/* 802EAC18 002E7B58  FC 20 C0 90 */	fmr f1, f24
/* 802EAC1C 002E7B5C  48 12 6F E1 */	bl angDist__Fff
/* 802EAC20 002E7B60  FF E0 08 90 */	fmr f31, f1
/* 802EAC24 002E7B64  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EAC28 002E7B68  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EAC2C 002E7B6C  EC 00 07 72 */	fmuls f0, f0, f29
/* 802EAC30 002E7B70  EF 1F 07 B2 */	fmuls f24, f31, f30
/* 802EAC34 002E7B74  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EAC38 002E7B78  FC 00 C2 10 */	fabs f0, f24
/* 802EAC3C 002E7B7C  FC 00 00 18 */	frsp f0, f0
/* 802EAC40 002E7B80  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EAC44 002E7B84  40 81 00 1C */	ble .L_802EAC60
/* 802EAC48 002E7B88  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EAC4C 002E7B8C  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EAC50 002E7B90  40 81 00 0C */	ble .L_802EAC5C
/* 802EAC54 002E7B94  FF 00 08 90 */	fmr f24, f1
/* 802EAC58 002E7B98  48 00 00 08 */	b .L_802EAC60
.L_802EAC5C:
/* 802EAC5C 002E7B9C  FF 00 08 50 */	fneg f24, f1
.L_802EAC60:
/* 802EAC60 002E7BA0  7F E3 FB 78 */	mr r3, r31
/* 802EAC64 002E7BA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAC68 002E7BA8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EAC6C 002E7BAC  7D 89 03 A6 */	mtctr r12
/* 802EAC70 002E7BB0  4E 80 04 21 */	bctrl 
/* 802EAC74 002E7BB4  EC 38 08 2A */	fadds f1, f24, f1
/* 802EAC78 002E7BB8  48 12 6F 59 */	bl roundAng__Ff
/* 802EAC7C 002E7BBC  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EAC80 002E7BC0  7F E3 FB 78 */	mr r3, r31
/* 802EAC84 002E7BC4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802EAC88 002E7BC8  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802EAC8C 002E7BCC  48 00 1C CD */	bl getViewAngle__Q34Game10MiniHoudai3ObjFv
/* 802EAC90 002E7BD0  7F E4 FB 78 */	mr r4, r31
/* 802EAC94 002E7BD4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802EAC98 002E7BD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAC9C 002E7BDC  FF C0 08 90 */	fmr f30, f1
/* 802EACA0 002E7BE0  38 61 00 68 */	addi r3, r1, 0x68
/* 802EACA4 002E7BE4  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 802EACA8 002E7BE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EACAC 002E7BEC  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 802EACB0 002E7BF0  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 802EACB4 002E7BF4  7D 89 03 A6 */	mtctr r12
/* 802EACB8 002E7BF8  4E 80 04 21 */	bctrl 
/* 802EACBC 002E7BFC  7F A4 EB 78 */	mr r4, r29
/* 802EACC0 002E7C00  38 61 00 5C */	addi r3, r1, 0x5c
/* 802EACC4 002E7C04  81 9D 00 00 */	lwz r12, 0(r29)
/* 802EACC8 002E7C08  C3 A1 00 68 */	lfs f29, 0x68(r1)
/* 802EACCC 002E7C0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EACD0 002E7C10  7D 89 03 A6 */	mtctr r12
/* 802EACD4 002E7C14  4E 80 04 21 */	bctrl 
/* 802EACD8 002E7C18  7F E4 FB 78 */	mr r4, r31
/* 802EACDC 002E7C1C  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 802EACE0 002E7C20  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EACE4 002E7C24  38 61 00 80 */	addi r3, r1, 0x80
/* 802EACE8 002E7C28  EF 60 E8 28 */	fsubs f27, f0, f29
/* 802EACEC 002E7C2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EACF0 002E7C30  7D 89 03 A6 */	mtctr r12
/* 802EACF4 002E7C34  4E 80 04 21 */	bctrl 
/* 802EACF8 002E7C38  7F A4 EB 78 */	mr r4, r29
/* 802EACFC 002E7C3C  38 61 00 74 */	addi r3, r1, 0x74
/* 802EAD00 002E7C40  81 9D 00 00 */	lwz r12, 0(r29)
/* 802EAD04 002E7C44  C3 A1 00 84 */	lfs f29, 0x84(r1)
/* 802EAD08 002E7C48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EAD0C 002E7C4C  7D 89 03 A6 */	mtctr r12
/* 802EAD10 002E7C50  4E 80 04 21 */	bctrl 
/* 802EAD14 002E7C54  7F E4 FB 78 */	mr r4, r31
/* 802EAD18 002E7C58  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 802EAD1C 002E7C5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAD20 002E7C60  38 61 00 98 */	addi r3, r1, 0x98
/* 802EAD24 002E7C64  EF 80 E8 28 */	fsubs f28, f0, f29
/* 802EAD28 002E7C68  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EAD2C 002E7C6C  7D 89 03 A6 */	mtctr r12
/* 802EAD30 002E7C70  4E 80 04 21 */	bctrl 
/* 802EAD34 002E7C74  7F A4 EB 78 */	mr r4, r29
/* 802EAD38 002E7C78  38 61 00 8C */	addi r3, r1, 0x8c
/* 802EAD3C 002E7C7C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802EAD40 002E7C80  C3 A1 00 A0 */	lfs f29, 0xa0(r1)
/* 802EAD44 002E7C84  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EAD48 002E7C88  7D 89 03 A6 */	mtctr r12
/* 802EAD4C 002E7C8C  4E 80 04 21 */	bctrl 
/* 802EAD50 002E7C90  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 802EAD54 002E7C94  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 802EAD58 002E7C98  EF 39 06 72 */	fmuls f25, f25, f25
/* 802EAD5C 002E7C9C  38 60 00 01 */	li r3, 1
/* 802EAD60 002E7CA0  EC 00 E8 28 */	fsubs f0, f0, f29
/* 802EAD64 002E7CA4  38 80 00 00 */	li r4, 0
/* 802EAD68 002E7CA8  EC 00 00 32 */	fmuls f0, f0, f0
/* 802EAD6C 002E7CAC  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 802EAD70 002E7CB0  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 802EAD74 002E7CB4  40 81 00 30 */	ble .L_802EADA4
/* 802EAD78 002E7CB8  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 802EAD7C 002E7CBC  7C 80 23 78 */	mr r0, r4
/* 802EAD80 002E7CC0  40 81 00 18 */	ble .L_802EAD98
/* 802EAD84 002E7CC4  FC 00 E2 10 */	fabs f0, f28
/* 802EAD88 002E7CC8  FC 00 00 18 */	frsp f0, f0
/* 802EAD8C 002E7CCC  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 802EAD90 002E7CD0  40 80 00 08 */	bge .L_802EAD98
/* 802EAD94 002E7CD4  7C 60 1B 78 */	mr r0, r3
.L_802EAD98:
/* 802EAD98 002E7CD8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802EAD9C 002E7CDC  41 82 00 08 */	beq .L_802EADA4
/* 802EADA0 002E7CE0  38 80 00 01 */	li r4, 1
.L_802EADA4:
/* 802EADA4 002E7CE4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802EADA8 002E7CE8  40 82 00 34 */	bne .L_802EADDC
/* 802EADAC 002E7CEC  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EADB0 002E7CF0  FC 40 FA 10 */	fabs f2, f31
/* 802EADB4 002E7CF4  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EADB8 002E7CF8  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802EADBC 002E7CFC  FC 40 10 18 */	frsp f2, f2
/* 802EADC0 002E7D00  EC 01 00 32 */	fmuls f0, f1, f0
/* 802EADC4 002E7D04  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802EADC8 002E7D08  4C 40 13 82 */	cror 2, 0, 2
/* 802EADCC 002E7D0C  7C 00 00 26 */	mfcr r0
/* 802EADD0 002E7D10  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 802EADD4 002E7D14  41 82 00 08 */	beq .L_802EADDC
/* 802EADD8 002E7D18  38 60 00 00 */	li r3, 0
.L_802EADDC:
/* 802EADDC 002E7D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EADE0 002E7D20  41 82 00 18 */	beq .L_802EADF8
/* 802EADE4 002E7D24  38 00 00 02 */	li r0, 2
/* 802EADE8 002E7D28  7F E3 FB 78 */	mr r3, r31
/* 802EADEC 002E7D2C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EADF0 002E7D30  4B E1 A4 B1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EADF4 002E7D34  48 00 02 84 */	b .L_802EB078
.L_802EADF8:
/* 802EADF8 002E7D38  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EADFC 002E7D3C  FC 40 FA 10 */	fabs f2, f31
/* 802EAE00 002E7D40  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EAE04 002E7D44  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802EAE08 002E7D48  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EAE0C 002E7D4C  FC 40 10 18 */	frsp f2, f2
/* 802EAE10 002E7D50  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802EAE14 002E7D54  EC 01 00 32 */	fmuls f0, f1, f0
/* 802EAE18 002E7D58  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802EAE1C 002E7D5C  4C 40 13 82 */	cror 2, 0, 2
/* 802EAE20 002E7D60  41 82 02 58 */	beq .L_802EB078
/* 802EAE24 002E7D64  38 00 00 05 */	li r0, 5
/* 802EAE28 002E7D68  7F E3 FB 78 */	mr r3, r31
/* 802EAE2C 002E7D6C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAE30 002E7D70  4B E1 A4 71 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAE34 002E7D74  48 00 02 44 */	b .L_802EB078
.L_802EAE38:
/* 802EAE38 002E7D78  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EAE3C 002E7D7C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802EAE40 002E7D80  EC 00 00 32 */	fmuls f0, f0, f0
/* 802EAE44 002E7D84  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EAE48 002E7D88  40 80 01 20 */	bge .L_802EAF68
/* 802EAE4C 002E7D8C  7F E4 FB 78 */	mr r4, r31
/* 802EAE50 002E7D90  38 61 00 2C */	addi r3, r1, 0x2c
/* 802EAE54 002E7D94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAE58 002E7D98  C3 1F 02 E4 */	lfs f24, 0x2e4(r31)
/* 802EAE5C 002E7D9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EAE60 002E7DA0  C3 3F 02 EC */	lfs f25, 0x2ec(r31)
/* 802EAE64 002E7DA4  7D 89 03 A6 */	mtctr r12
/* 802EAE68 002E7DA8  4E 80 04 21 */	bctrl 
/* 802EAE6C 002E7DAC  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802EAE70 002E7DB0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EAE74 002E7DB4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802EAE78 002E7DB8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EAE7C 002E7DBC  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802EAE80 002E7DC0  EC 38 20 28 */	fsubs f1, f24, f4
/* 802EAE84 002E7DC4  EC 59 00 28 */	fsubs f2, f25, f0
/* 802EAE88 002E7DC8  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802EAE8C 002E7DCC  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802EAE90 002E7DD0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802EAE94 002E7DD4  4B D4 A2 75 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EAE98 002E7DD8  48 12 6D 39 */	bl roundAng__Ff
/* 802EAE9C 002E7DDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAEA0 002E7DE0  FF 00 08 90 */	fmr f24, f1
/* 802EAEA4 002E7DE4  7F E3 FB 78 */	mr r3, r31
/* 802EAEA8 002E7DE8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EAEAC 002E7DEC  7D 89 03 A6 */	mtctr r12
/* 802EAEB0 002E7DF0  4E 80 04 21 */	bctrl 
/* 802EAEB4 002E7DF4  FC 40 08 90 */	fmr f2, f1
/* 802EAEB8 002E7DF8  FC 20 C0 90 */	fmr f1, f24
/* 802EAEBC 002E7DFC  48 12 6D 41 */	bl angDist__Fff
/* 802EAEC0 002E7E00  FF E0 08 90 */	fmr f31, f1
/* 802EAEC4 002E7E04  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EAEC8 002E7E08  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EAECC 002E7E0C  EC 00 07 72 */	fmuls f0, f0, f29
/* 802EAED0 002E7E10  EF 1F 07 B2 */	fmuls f24, f31, f30
/* 802EAED4 002E7E14  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EAED8 002E7E18  FC 00 C2 10 */	fabs f0, f24
/* 802EAEDC 002E7E1C  FC 00 00 18 */	frsp f0, f0
/* 802EAEE0 002E7E20  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EAEE4 002E7E24  40 81 00 1C */	ble .L_802EAF00
/* 802EAEE8 002E7E28  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EAEEC 002E7E2C  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EAEF0 002E7E30  40 81 00 0C */	ble .L_802EAEFC
/* 802EAEF4 002E7E34  FF 00 08 90 */	fmr f24, f1
/* 802EAEF8 002E7E38  48 00 00 08 */	b .L_802EAF00
.L_802EAEFC:
/* 802EAEFC 002E7E3C  FF 00 08 50 */	fneg f24, f1
.L_802EAF00:
/* 802EAF00 002E7E40  7F E3 FB 78 */	mr r3, r31
/* 802EAF04 002E7E44  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAF08 002E7E48  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EAF0C 002E7E4C  7D 89 03 A6 */	mtctr r12
/* 802EAF10 002E7E50  4E 80 04 21 */	bctrl 
/* 802EAF14 002E7E54  EC 38 08 2A */	fadds f1, f24, f1
/* 802EAF18 002E7E58  48 12 6C B9 */	bl roundAng__Ff
/* 802EAF1C 002E7E5C  FC 60 FA 10 */	fabs f3, f31
/* 802EAF20 002E7E60  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EAF24 002E7E64  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EAF28 002E7E68  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EAF2C 002E7E6C  FC 20 18 18 */	frsp f1, f3
/* 802EAF30 002E7E70  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EAF34 002E7E74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EAF38 002E7E78  4C 40 13 82 */	cror 2, 0, 2
/* 802EAF3C 002E7E7C  40 82 00 18 */	bne .L_802EAF54
/* 802EAF40 002E7E80  38 00 00 0A */	li r0, 0xa
/* 802EAF44 002E7E84  7F E3 FB 78 */	mr r3, r31
/* 802EAF48 002E7E88  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAF4C 002E7E8C  4B E1 A3 55 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAF50 002E7E90  48 00 01 28 */	b .L_802EB078
.L_802EAF54:
/* 802EAF54 002E7E94  38 00 00 07 */	li r0, 7
/* 802EAF58 002E7E98  7F E3 FB 78 */	mr r3, r31
/* 802EAF5C 002E7E9C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EAF60 002E7EA0  4B E1 A3 41 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EAF64 002E7EA4  48 00 01 14 */	b .L_802EB078
.L_802EAF68:
/* 802EAF68 002E7EA8  7F E4 FB 78 */	mr r4, r31
/* 802EAF6C 002E7EAC  38 61 00 14 */	addi r3, r1, 0x14
/* 802EAF70 002E7EB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAF74 002E7EB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EAF78 002E7EB8  7D 89 03 A6 */	mtctr r12
/* 802EAF7C 002E7EBC  4E 80 04 21 */	bctrl 
/* 802EAF80 002E7EC0  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802EAF84 002E7EC4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EAF88 002E7EC8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802EAF8C 002E7ECC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EAF90 002E7ED0  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802EAF94 002E7ED4  EC 39 20 28 */	fsubs f1, f25, f4
/* 802EAF98 002E7ED8  EC 5A 00 28 */	fsubs f2, f26, f0
/* 802EAF9C 002E7EDC  D0 81 00 08 */	stfs f4, 8(r1)
/* 802EAFA0 002E7EE0  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802EAFA4 002E7EE4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802EAFA8 002E7EE8  4B D4 A1 61 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EAFAC 002E7EEC  48 12 6C 25 */	bl roundAng__Ff
/* 802EAFB0 002E7EF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EAFB4 002E7EF4  FF 00 08 90 */	fmr f24, f1
/* 802EAFB8 002E7EF8  7F E3 FB 78 */	mr r3, r31
/* 802EAFBC 002E7EFC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EAFC0 002E7F00  7D 89 03 A6 */	mtctr r12
/* 802EAFC4 002E7F04  4E 80 04 21 */	bctrl 
/* 802EAFC8 002E7F08  FC 40 08 90 */	fmr f2, f1
/* 802EAFCC 002E7F0C  FC 20 C0 90 */	fmr f1, f24
/* 802EAFD0 002E7F10  48 12 6C 2D */	bl angDist__Fff
/* 802EAFD4 002E7F14  FF E0 08 90 */	fmr f31, f1
/* 802EAFD8 002E7F18  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EAFDC 002E7F1C  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EAFE0 002E7F20  EC 00 07 72 */	fmuls f0, f0, f29
/* 802EAFE4 002E7F24  EF 1F 07 B2 */	fmuls f24, f31, f30
/* 802EAFE8 002E7F28  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EAFEC 002E7F2C  FC 00 C2 10 */	fabs f0, f24
/* 802EAFF0 002E7F30  FC 00 00 18 */	frsp f0, f0
/* 802EAFF4 002E7F34  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EAFF8 002E7F38  40 81 00 1C */	ble .L_802EB014
/* 802EAFFC 002E7F3C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB000 002E7F40  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 802EB004 002E7F44  40 81 00 0C */	ble .L_802EB010
/* 802EB008 002E7F48  FF 00 08 90 */	fmr f24, f1
/* 802EB00C 002E7F4C  48 00 00 08 */	b .L_802EB014
.L_802EB010:
/* 802EB010 002E7F50  FF 00 08 50 */	fneg f24, f1
.L_802EB014:
/* 802EB014 002E7F54  7F E3 FB 78 */	mr r3, r31
/* 802EB018 002E7F58  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB01C 002E7F5C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB020 002E7F60  7D 89 03 A6 */	mtctr r12
/* 802EB024 002E7F64  4E 80 04 21 */	bctrl 
/* 802EB028 002E7F68  EC 38 08 2A */	fadds f1, f24, f1
/* 802EB02C 002E7F6C  48 12 6B A5 */	bl roundAng__Ff
/* 802EB030 002E7F70  FC 60 FA 10 */	fabs f3, f31
/* 802EB034 002E7F74  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EB038 002E7F78  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EB03C 002E7F7C  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EB040 002E7F80  FC 20 18 18 */	frsp f1, f3
/* 802EB044 002E7F84  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EB048 002E7F88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EB04C 002E7F8C  4C 40 13 82 */	cror 2, 0, 2
/* 802EB050 002E7F90  40 82 00 18 */	bne .L_802EB068
/* 802EB054 002E7F94  38 00 00 09 */	li r0, 9
/* 802EB058 002E7F98  7F E3 FB 78 */	mr r3, r31
/* 802EB05C 002E7F9C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB060 002E7FA0  4B E1 A2 41 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB064 002E7FA4  48 00 00 14 */	b .L_802EB078
.L_802EB068:
/* 802EB068 002E7FA8  38 00 00 06 */	li r0, 6
/* 802EB06C 002E7FAC  7F E3 FB 78 */	mr r3, r31
/* 802EB070 002E7FB0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB074 002E7FB4  4B E1 A2 2D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802EB078:
/* 802EB078 002E7FB8  7F E3 FB 78 */	mr r3, r31
/* 802EB07C 002E7FBC  4B E1 C2 85 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802EB080 002E7FC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB084 002E7FC4  41 82 00 18 */	beq .L_802EB09C
/* 802EB088 002E7FC8  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB08C 002E7FCC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EB090 002E7FD0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EB094 002E7FD4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EB098 002E7FD8  48 00 00 A0 */	b .L_802EB138
.L_802EB09C:
/* 802EB09C 002E7FDC  7F E3 FB 78 */	mr r3, r31
/* 802EB0A0 002E7FE0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB0A4 002E7FE4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802EB0A8 002E7FE8  7D 89 03 A6 */	mtctr r12
/* 802EB0AC 002E7FEC  4E 80 04 21 */	bctrl 
/* 802EB0B0 002E7FF0  2C 03 00 4E */	cmpwi r3, 0x4e
/* 802EB0B4 002E7FF4  40 82 00 74 */	bne .L_802EB128
/* 802EB0B8 002E7FF8  7F E3 FB 78 */	mr r3, r31
/* 802EB0BC 002E7FFC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802EB0C0 002E8000  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB0C4 002E8004  C3 04 02 E4 */	lfs f24, 0x2e4(r4)
/* 802EB0C8 002E8008  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB0CC 002E800C  7D 89 03 A6 */	mtctr r12
/* 802EB0D0 002E8010  4E 80 04 21 */	bctrl 
/* 802EB0D4 002E8014  4B DE 47 49 */	bl sin
/* 802EB0D8 002E8018  7F E3 FB 78 */	mr r3, r31
/* 802EB0DC 002E801C  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802EB0E0 002E8020  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB0E4 002E8024  FF 20 08 18 */	frsp f25, f1
/* 802EB0E8 002E8028  C3 BF 01 D8 */	lfs f29, 0x1d8(r31)
/* 802EB0EC 002E802C  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802EB0F0 002E8030  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB0F4 002E8034  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 802EB0F8 002E8038  D3 A1 00 54 */	stfs f29, 0x54(r1)
/* 802EB0FC 002E803C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802EB100 002E8040  7D 89 03 A6 */	mtctr r12
/* 802EB104 002E8044  4E 80 04 21 */	bctrl 
/* 802EB108 002E8048  4B DE 41 AD */	bl cos
/* 802EB10C 002E804C  EC 18 06 72 */	fmuls f0, f24, f25
/* 802EB110 002E8050  FC 20 08 18 */	frsp f1, f1
/* 802EB114 002E8054  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EB118 002E8058  EC 18 00 72 */	fmuls f0, f24, f1
/* 802EB11C 002E805C  D3 BF 01 D8 */	stfs f29, 0x1d8(r31)
/* 802EB120 002E8060  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EB124 002E8064  48 00 00 14 */	b .L_802EB138
.L_802EB128:
/* 802EB128 002E8068  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB12C 002E806C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EB130 002E8070  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EB134 002E8074  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802EB138:
/* 802EB138 002E8078  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802EB13C 002E807C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EB140 002E8080  28 00 00 00 */	cmplwi r0, 0
/* 802EB144 002E8084  41 82 00 60 */	beq .L_802EB1A4
/* 802EB148 002E8088  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EB14C 002E808C  28 00 00 00 */	cmplwi r0, 0
/* 802EB150 002E8090  40 82 00 14 */	bne .L_802EB164
/* 802EB154 002E8094  7F E3 FB 78 */	mr r3, r31
/* 802EB158 002E8098  38 80 00 01 */	li r4, 1
/* 802EB15C 002E809C  48 00 24 71 */	bl createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
/* 802EB160 002E80A0  48 00 00 44 */	b .L_802EB1A4
.L_802EB164:
/* 802EB164 002E80A4  28 00 00 02 */	cmplwi r0, 2
/* 802EB168 002E80A8  40 82 00 14 */	bne .L_802EB17C
/* 802EB16C 002E80AC  7F E3 FB 78 */	mr r3, r31
/* 802EB170 002E80B0  38 80 00 00 */	li r4, 0
/* 802EB174 002E80B4  48 00 24 59 */	bl createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
/* 802EB178 002E80B8  48 00 00 2C */	b .L_802EB1A4
.L_802EB17C:
/* 802EB17C 002E80BC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EB180 002E80C0  40 82 00 24 */	bne .L_802EB1A4
/* 802EB184 002E80C4  7F C3 F3 78 */	mr r3, r30
/* 802EB188 002E80C8  7F E4 FB 78 */	mr r4, r31
/* 802EB18C 002E80CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EB190 002E80D0  38 C0 00 00 */	li r6, 0
/* 802EB194 002E80D4  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802EB198 002E80D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EB19C 002E80DC  7D 89 03 A6 */	mtctr r12
/* 802EB1A0 002E80E0  4E 80 04 21 */	bctrl 
.L_802EB1A4:
/* 802EB1A4 002E80E4  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 802EB1A8 002E80E8  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 802EB1AC 002E80EC  E3 C1 01 28 */	psq_l f30, 296(r1), 0, qr0
/* 802EB1B0 002E80F0  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 802EB1B4 002E80F4  E3 A1 01 18 */	psq_l f29, 280(r1), 0, qr0
/* 802EB1B8 002E80F8  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 802EB1BC 002E80FC  E3 81 01 08 */	psq_l f28, 264(r1), 0, qr0
/* 802EB1C0 002E8100  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 802EB1C4 002E8104  E3 61 00 F8 */	psq_l f27, 248(r1), 0, qr0
/* 802EB1C8 002E8108  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 802EB1CC 002E810C  E3 41 00 E8 */	psq_l f26, 232(r1), 0, qr0
/* 802EB1D0 002E8110  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 802EB1D4 002E8114  E3 21 00 D8 */	psq_l f25, 216(r1), 0, qr0
/* 802EB1D8 002E8118  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 802EB1DC 002E811C  E3 01 00 C8 */	psq_l f24, 200(r1), 0, qr0
/* 802EB1E0 002E8120  CB 01 00 C0 */	lfd f24, 0xc0(r1)
/* 802EB1E4 002E8124  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 802EB1E8 002E8128  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 802EB1EC 002E812C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 802EB1F0 002E8130  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 802EB1F4 002E8134  7C 08 03 A6 */	mtlr r0
/* 802EB1F8 002E8138  38 21 01 40 */	addi r1, r1, 0x140
/* 802EB1FC 002E813C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBase

.fn getEnemyTypeID__Q34Game10MiniHoudai3ObjFv, weak
/* 802EB200 002E8140  38 60 00 4E */	li r3, 0x4e
/* 802EB204 002E8144  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game10MiniHoudai3ObjFv

.fn cleanup__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBase, global
/* 802EB208 002E8148  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EB20C 002E814C  7C 08 02 A6 */	mflr r0
/* 802EB210 002E8150  7C 83 23 78 */	mr r3, r4
/* 802EB214 002E8154  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EB218 002E8158  4B E1 67 65 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802EB21C 002E815C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EB220 002E8160  7C 08 03 A6 */	mtlr r0
/* 802EB224 002E8164  38 21 00 10 */	addi r1, r1, 0x10
/* 802EB228 002E8168  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai9StateWalkFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802EB22C 002E816C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EB230 002E8170  7C 08 02 A6 */	mflr r0
/* 802EB234 002E8174  7C 83 23 78 */	mr r3, r4
/* 802EB238 002E8178  38 80 00 00 */	li r4, 0
/* 802EB23C 002E817C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EB240 002E8180  38 00 FF FF */	li r0, -1
/* 802EB244 002E8184  38 A0 00 00 */	li r5, 0
/* 802EB248 002E8188  90 03 02 D4 */	stw r0, 0x2d4(r3)
/* 802EB24C 002E818C  4B E1 9D B9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EB250 002E8190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EB254 002E8194  7C 08 03 A6 */	mtlr r0
/* 802EB258 002E8198  38 21 00 10 */	addi r1, r1, 0x10
/* 802EB25C 002E819C  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBase, global
/* 802EB260 002E81A0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802EB264 002E81A4  7C 08 02 A6 */	mflr r0
/* 802EB268 002E81A8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802EB26C 002E81AC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802EB270 002E81B0  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802EB274 002E81B4  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802EB278 002E81B8  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802EB27C 002E81BC  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802EB280 002E81C0  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802EB284 002E81C4  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 802EB288 002E81C8  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 802EB28C 002E81CC  DB 61 00 80 */	stfd f27, 0x80(r1)
/* 802EB290 002E81D0  F3 61 00 88 */	psq_st f27, 136(r1), 0, qr0
/* 802EB294 002E81D4  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 802EB298 002E81D8  93 C1 00 78 */	stw r30, 0x78(r1)
/* 802EB29C 002E81DC  7C 9F 23 78 */	mr r31, r4
/* 802EB2A0 002E81E0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802EB2A4 002E81E4  7C 7E 1B 78 */	mr r30, r3
/* 802EB2A8 002E81E8  C3 C4 03 0C */	lfs f30, 0x30c(r4)
/* 802EB2AC 002E81EC  7F E3 FB 78 */	mr r3, r31
/* 802EB2B0 002E81F0  C3 A4 03 34 */	lfs f29, 0x334(r4)
/* 802EB2B4 002E81F4  4B E1 C0 4D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802EB2B8 002E81F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB2BC 002E81FC  41 82 00 0C */	beq .L_802EB2C8
/* 802EB2C0 002E8200  C3 C2 EC 0C */	lfs f30, lbl_8051CF6C@sda21(r2)
/* 802EB2C4 002E8204  C3 A2 EB EC */	lfs f29, lbl_8051CF4C@sda21(r2)
.L_802EB2C8:
/* 802EB2C8 002E8208  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802EB2CC 002E820C  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB2D0 002E8210  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EB2D4 002E8214  4C 40 13 82 */	cror 2, 0, 2
/* 802EB2D8 002E8218  40 82 00 18 */	bne .L_802EB2F0
/* 802EB2DC 002E821C  38 00 00 00 */	li r0, 0
/* 802EB2E0 002E8220  7F E3 FB 78 */	mr r3, r31
/* 802EB2E4 002E8224  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB2E8 002E8228  4B E1 9F B9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB2EC 002E822C  48 00 03 68 */	b .L_802EB654
.L_802EB2F0:
/* 802EB2F0 002E8230  7F E3 FB 78 */	mr r3, r31
/* 802EB2F4 002E8234  38 80 00 00 */	li r4, 0
/* 802EB2F8 002E8238  4B E2 93 61 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802EB2FC 002E823C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB300 002E8240  41 82 00 18 */	beq .L_802EB318
/* 802EB304 002E8244  38 00 00 04 */	li r0, 4
/* 802EB308 002E8248  7F E3 FB 78 */	mr r3, r31
/* 802EB30C 002E824C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB310 002E8250  4B E1 9F 91 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB314 002E8254  48 00 03 40 */	b .L_802EB654
.L_802EB318:
/* 802EB318 002E8258  7F E4 FB 78 */	mr r4, r31
/* 802EB31C 002E825C  38 61 00 68 */	addi r3, r1, 0x68
/* 802EB320 002E8260  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB324 002E8264  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB328 002E8268  7D 89 03 A6 */	mtctr r12
/* 802EB32C 002E826C  4E 80 04 21 */	bctrl 
/* 802EB330 002E8270  C3 7F 01 A0 */	lfs f27, 0x1a0(r31)
/* 802EB334 002E8274  7F E4 FB 78 */	mr r4, r31
/* 802EB338 002E8278  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802EB33C 002E827C  38 61 00 08 */	addi r3, r1, 8
/* 802EB340 002E8280  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB344 002E8284  EC 20 D8 28 */	fsubs f1, f0, f27
/* 802EB348 002E8288  C3 9F 01 98 */	lfs f28, 0x198(r31)
/* 802EB34C 002E828C  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 802EB350 002E8290  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB354 002E8294  EC 40 E0 28 */	fsubs f2, f0, f28
/* 802EB358 002E8298  EC 01 00 72 */	fmuls f0, f1, f1
/* 802EB35C 002E829C  EF E2 00 BA */	fmadds f31, f2, f2, f0
/* 802EB360 002E82A0  7D 89 03 A6 */	mtctr r12
/* 802EB364 002E82A4  4E 80 04 21 */	bctrl 
/* 802EB368 002E82A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 802EB36C 002E82AC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EB370 002E82B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802EB374 002E82B4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EB378 002E82B8  EC 3C 08 28 */	fsubs f1, f28, f1
/* 802EB37C 002E82BC  EC 5B 00 28 */	fsubs f2, f27, f0
/* 802EB380 002E82C0  4B D4 9D 89 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EB384 002E82C4  48 12 68 4D */	bl roundAng__Ff
/* 802EB388 002E82C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB38C 002E82CC  FF 80 08 90 */	fmr f28, f1
/* 802EB390 002E82D0  7F E3 FB 78 */	mr r3, r31
/* 802EB394 002E82D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB398 002E82D8  7D 89 03 A6 */	mtctr r12
/* 802EB39C 002E82DC  4E 80 04 21 */	bctrl 
/* 802EB3A0 002E82E0  FC 40 08 90 */	fmr f2, f1
/* 802EB3A4 002E82E4  FC 20 E0 90 */	fmr f1, f28
/* 802EB3A8 002E82E8  48 12 68 55 */	bl angDist__Fff
/* 802EB3AC 002E82EC  FF 80 08 90 */	fmr f28, f1
/* 802EB3B0 002E82F0  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EB3B4 002E82F4  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EB3B8 002E82F8  EC 00 07 72 */	fmuls f0, f0, f29
/* 802EB3BC 002E82FC  EF BC 07 B2 */	fmuls f29, f28, f30
/* 802EB3C0 002E8300  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EB3C4 002E8304  FC 00 EA 10 */	fabs f0, f29
/* 802EB3C8 002E8308  FC 00 00 18 */	frsp f0, f0
/* 802EB3CC 002E830C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EB3D0 002E8310  40 81 00 1C */	ble .L_802EB3EC
/* 802EB3D4 002E8314  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB3D8 002E8318  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 802EB3DC 002E831C  40 81 00 0C */	ble .L_802EB3E8
/* 802EB3E0 002E8320  FF A0 08 90 */	fmr f29, f1
/* 802EB3E4 002E8324  48 00 00 08 */	b .L_802EB3EC
.L_802EB3E8:
/* 802EB3E8 002E8328  FF A0 08 50 */	fneg f29, f1
.L_802EB3EC:
/* 802EB3EC 002E832C  7F E3 FB 78 */	mr r3, r31
/* 802EB3F0 002E8330  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB3F4 002E8334  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB3F8 002E8338  7D 89 03 A6 */	mtctr r12
/* 802EB3FC 002E833C  4E 80 04 21 */	bctrl 
/* 802EB400 002E8340  EC 3D 08 2A */	fadds f1, f29, f1
/* 802EB404 002E8344  48 12 67 CD */	bl roundAng__Ff
/* 802EB408 002E8348  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EB40C 002E834C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802EB410 002E8350  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802EB414 002E8354  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EB418 002E8358  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802EB41C 002E835C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802EB420 002E8360  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802EB424 002E8364  40 80 01 E4 */	bge .L_802EB608
/* 802EB428 002E8368  7F E3 FB 78 */	mr r3, r31
/* 802EB42C 002E836C  48 00 1A C1 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802EB430 002E8370  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB434 002E8374  41 82 00 18 */	beq .L_802EB44C
/* 802EB438 002E8378  38 00 00 03 */	li r0, 3
/* 802EB43C 002E837C  7F E3 FB 78 */	mr r3, r31
/* 802EB440 002E8380  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB444 002E8384  4B E1 9E 5D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB448 002E8388  48 00 02 0C */	b .L_802EB654
.L_802EB44C:
/* 802EB44C 002E838C  7F E3 FB 78 */	mr r3, r31
/* 802EB450 002E8390  48 00 18 4D */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802EB454 002E8394  28 03 00 00 */	cmplwi r3, 0
/* 802EB458 002E8398  41 82 00 FC */	beq .L_802EB554
/* 802EB45C 002E839C  7C 64 1B 78 */	mr r4, r3
/* 802EB460 002E83A0  38 61 00 50 */	addi r3, r1, 0x50
/* 802EB464 002E83A4  81 84 00 00 */	lwz r12, 0(r4)
/* 802EB468 002E83A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB46C 002E83AC  7D 89 03 A6 */	mtctr r12
/* 802EB470 002E83B0  4E 80 04 21 */	bctrl 
/* 802EB474 002E83B4  7F E4 FB 78 */	mr r4, r31
/* 802EB478 002E83B8  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 802EB47C 002E83BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB480 002E83C0  38 61 00 5C */	addi r3, r1, 0x5c
/* 802EB484 002E83C4  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 802EB488 002E83C8  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802EB48C 002E83CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB490 002E83D0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802EB494 002E83D4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802EB498 002E83D8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802EB49C 002E83DC  7D 89 03 A6 */	mtctr r12
/* 802EB4A0 002E83E0  4E 80 04 21 */	bctrl 
/* 802EB4A4 002E83E4  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 802EB4A8 002E83E8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EB4AC 002E83EC  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 802EB4B0 002E83F0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EB4B4 002E83F4  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802EB4B8 002E83F8  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802EB4BC 002E83FC  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 802EB4C0 002E8400  EC 21 28 28 */	fsubs f1, f1, f5
/* 802EB4C4 002E8404  EC 40 18 28 */	fsubs f2, f0, f3
/* 802EB4C8 002E8408  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 802EB4CC 002E840C  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 802EB4D0 002E8410  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 802EB4D4 002E8414  4B D4 9C 35 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EB4D8 002E8418  48 12 66 F9 */	bl roundAng__Ff
/* 802EB4DC 002E841C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB4E0 002E8420  FF 80 08 90 */	fmr f28, f1
/* 802EB4E4 002E8424  7F E3 FB 78 */	mr r3, r31
/* 802EB4E8 002E8428  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB4EC 002E842C  7D 89 03 A6 */	mtctr r12
/* 802EB4F0 002E8430  4E 80 04 21 */	bctrl 
/* 802EB4F4 002E8434  FC 40 08 90 */	fmr f2, f1
/* 802EB4F8 002E8438  FC 20 E0 90 */	fmr f1, f28
/* 802EB4FC 002E843C  48 12 67 01 */	bl angDist__Fff
/* 802EB500 002E8440  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EB504 002E8444  FC 40 0A 10 */	fabs f2, f1
/* 802EB508 002E8448  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EB50C 002E844C  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802EB510 002E8450  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EB514 002E8454  FC 40 10 18 */	frsp f2, f2
/* 802EB518 002E8458  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802EB51C 002E845C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802EB520 002E8460  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802EB524 002E8464  4C 40 13 82 */	cror 2, 0, 2
/* 802EB528 002E8468  40 82 00 18 */	bne .L_802EB540
/* 802EB52C 002E846C  38 00 00 08 */	li r0, 8
/* 802EB530 002E8470  7F E3 FB 78 */	mr r3, r31
/* 802EB534 002E8474  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB538 002E8478  4B E1 9D 69 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB53C 002E847C  48 00 01 18 */	b .L_802EB654
.L_802EB540:
/* 802EB540 002E8480  38 00 00 05 */	li r0, 5
/* 802EB544 002E8484  7F E3 FB 78 */	mr r3, r31
/* 802EB548 002E8488  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB54C 002E848C  4B E1 9D 55 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB550 002E8490  48 00 01 04 */	b .L_802EB654
.L_802EB554:
/* 802EB554 002E8494  7F E4 FB 78 */	mr r4, r31
/* 802EB558 002E8498  38 61 00 2C */	addi r3, r1, 0x2c
/* 802EB55C 002E849C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB560 002E84A0  C3 7F 02 E4 */	lfs f27, 0x2e4(r31)
/* 802EB564 002E84A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB568 002E84A8  C3 9F 02 EC */	lfs f28, 0x2ec(r31)
/* 802EB56C 002E84AC  7D 89 03 A6 */	mtctr r12
/* 802EB570 002E84B0  4E 80 04 21 */	bctrl 
/* 802EB574 002E84B4  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 802EB578 002E84B8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EB57C 002E84BC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802EB580 002E84C0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EB584 002E84C4  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 802EB588 002E84C8  EC 3B 20 28 */	fsubs f1, f27, f4
/* 802EB58C 002E84CC  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802EB590 002E84D0  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 802EB594 002E84D4  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802EB598 002E84D8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802EB59C 002E84DC  4B D4 9B 6D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EB5A0 002E84E0  48 12 66 31 */	bl roundAng__Ff
/* 802EB5A4 002E84E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB5A8 002E84E8  FF 80 08 90 */	fmr f28, f1
/* 802EB5AC 002E84EC  7F E3 FB 78 */	mr r3, r31
/* 802EB5B0 002E84F0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB5B4 002E84F4  7D 89 03 A6 */	mtctr r12
/* 802EB5B8 002E84F8  4E 80 04 21 */	bctrl 
/* 802EB5BC 002E84FC  FC 40 08 90 */	fmr f2, f1
/* 802EB5C0 002E8500  FC 20 E0 90 */	fmr f1, f28
/* 802EB5C4 002E8504  48 12 66 39 */	bl angDist__Fff
/* 802EB5C8 002E8508  FC 20 0A 10 */	fabs f1, f1
/* 802EB5CC 002E850C  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EB5D0 002E8510  FC 20 08 18 */	frsp f1, f1
/* 802EB5D4 002E8514  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EB5D8 002E8518  4C 40 13 82 */	cror 2, 0, 2
/* 802EB5DC 002E851C  40 82 00 18 */	bne .L_802EB5F4
/* 802EB5E0 002E8520  38 00 00 0A */	li r0, 0xa
/* 802EB5E4 002E8524  7F E3 FB 78 */	mr r3, r31
/* 802EB5E8 002E8528  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB5EC 002E852C  4B E1 9C B5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB5F0 002E8530  48 00 00 64 */	b .L_802EB654
.L_802EB5F4:
/* 802EB5F4 002E8534  38 00 00 07 */	li r0, 7
/* 802EB5F8 002E8538  7F E3 FB 78 */	mr r3, r31
/* 802EB5FC 002E853C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB600 002E8540  4B E1 9C A1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB604 002E8544  48 00 00 50 */	b .L_802EB654
.L_802EB608:
/* 802EB608 002E8548  7F E3 FB 78 */	mr r3, r31
/* 802EB60C 002E854C  48 00 18 E1 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802EB610 002E8550  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB614 002E8554  41 82 00 18 */	beq .L_802EB62C
/* 802EB618 002E8558  38 00 00 03 */	li r0, 3
/* 802EB61C 002E855C  7F E3 FB 78 */	mr r3, r31
/* 802EB620 002E8560  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB624 002E8564  4B E1 9C 7D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB628 002E8568  48 00 00 2C */	b .L_802EB654
.L_802EB62C:
/* 802EB62C 002E856C  FC 20 E2 10 */	fabs f1, f28
/* 802EB630 002E8570  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EB634 002E8574  FC 20 08 18 */	frsp f1, f1
/* 802EB638 002E8578  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EB63C 002E857C  4C 40 13 82 */	cror 2, 0, 2
/* 802EB640 002E8580  41 82 00 14 */	beq .L_802EB654
/* 802EB644 002E8584  38 00 00 06 */	li r0, 6
/* 802EB648 002E8588  7F E3 FB 78 */	mr r3, r31
/* 802EB64C 002E858C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB650 002E8590  4B E1 9C 51 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802EB654:
/* 802EB654 002E8594  7F E3 FB 78 */	mr r3, r31
/* 802EB658 002E8598  4B E1 BC A9 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802EB65C 002E859C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB660 002E85A0  41 82 00 18 */	beq .L_802EB678
/* 802EB664 002E85A4  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB668 002E85A8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EB66C 002E85AC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EB670 002E85B0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EB674 002E85B4  48 00 00 A0 */	b .L_802EB714
.L_802EB678:
/* 802EB678 002E85B8  7F E3 FB 78 */	mr r3, r31
/* 802EB67C 002E85BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB680 002E85C0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802EB684 002E85C4  7D 89 03 A6 */	mtctr r12
/* 802EB688 002E85C8  4E 80 04 21 */	bctrl 
/* 802EB68C 002E85CC  2C 03 00 4E */	cmpwi r3, 0x4e
/* 802EB690 002E85D0  40 82 00 74 */	bne .L_802EB704
/* 802EB694 002E85D4  7F E3 FB 78 */	mr r3, r31
/* 802EB698 002E85D8  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802EB69C 002E85DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB6A0 002E85E0  C3 84 02 E4 */	lfs f28, 0x2e4(r4)
/* 802EB6A4 002E85E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB6A8 002E85E8  7D 89 03 A6 */	mtctr r12
/* 802EB6AC 002E85EC  4E 80 04 21 */	bctrl 
/* 802EB6B0 002E85F0  4B DE 41 6D */	bl sin
/* 802EB6B4 002E85F4  7F E3 FB 78 */	mr r3, r31
/* 802EB6B8 002E85F8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802EB6BC 002E85FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB6C0 002E8600  FF C0 08 18 */	frsp f30, f1
/* 802EB6C4 002E8604  C3 BF 01 D8 */	lfs f29, 0x1d8(r31)
/* 802EB6C8 002E8608  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802EB6CC 002E860C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB6D0 002E8610  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802EB6D4 002E8614  D3 A1 00 18 */	stfs f29, 0x18(r1)
/* 802EB6D8 002E8618  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802EB6DC 002E861C  7D 89 03 A6 */	mtctr r12
/* 802EB6E0 002E8620  4E 80 04 21 */	bctrl 
/* 802EB6E4 002E8624  4B DE 3B D1 */	bl cos
/* 802EB6E8 002E8628  EC 1C 07 B2 */	fmuls f0, f28, f30
/* 802EB6EC 002E862C  FC 20 08 18 */	frsp f1, f1
/* 802EB6F0 002E8630  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EB6F4 002E8634  EC 1C 00 72 */	fmuls f0, f28, f1
/* 802EB6F8 002E8638  D3 BF 01 D8 */	stfs f29, 0x1d8(r31)
/* 802EB6FC 002E863C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EB700 002E8640  48 00 00 14 */	b .L_802EB714
.L_802EB704:
/* 802EB704 002E8644  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB708 002E8648  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EB70C 002E864C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EB710 002E8650  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802EB714:
/* 802EB714 002E8654  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802EB718 002E8658  C0 42 EB EC */	lfs f2, lbl_8051CF4C@sda21(r2)
/* 802EB71C 002E865C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802EB720 002E8660  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 802EB724 002E8664  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802EB728 002E8668  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802EB72C 002E866C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802EB730 002E8670  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EB734 002E8674  28 00 00 00 */	cmplwi r0, 0
/* 802EB738 002E8678  41 82 00 60 */	beq .L_802EB798
/* 802EB73C 002E867C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EB740 002E8680  28 00 00 00 */	cmplwi r0, 0
/* 802EB744 002E8684  40 82 00 14 */	bne .L_802EB758
/* 802EB748 002E8688  7F E3 FB 78 */	mr r3, r31
/* 802EB74C 002E868C  38 80 00 01 */	li r4, 1
/* 802EB750 002E8690  48 00 1E 7D */	bl createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
/* 802EB754 002E8694  48 00 00 44 */	b .L_802EB798
.L_802EB758:
/* 802EB758 002E8698  28 00 00 02 */	cmplwi r0, 2
/* 802EB75C 002E869C  40 82 00 14 */	bne .L_802EB770
/* 802EB760 002E86A0  7F E3 FB 78 */	mr r3, r31
/* 802EB764 002E86A4  38 80 00 00 */	li r4, 0
/* 802EB768 002E86A8  48 00 1E 65 */	bl createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
/* 802EB76C 002E86AC  48 00 00 2C */	b .L_802EB798
.L_802EB770:
/* 802EB770 002E86B0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EB774 002E86B4  40 82 00 24 */	bne .L_802EB798
/* 802EB778 002E86B8  7F C3 F3 78 */	mr r3, r30
/* 802EB77C 002E86BC  7F E4 FB 78 */	mr r4, r31
/* 802EB780 002E86C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EB784 002E86C4  38 C0 00 00 */	li r6, 0
/* 802EB788 002E86C8  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802EB78C 002E86CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EB790 002E86D0  7D 89 03 A6 */	mtctr r12
/* 802EB794 002E86D4  4E 80 04 21 */	bctrl 
.L_802EB798:
/* 802EB798 002E86D8  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802EB79C 002E86DC  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802EB7A0 002E86E0  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802EB7A4 002E86E4  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802EB7A8 002E86E8  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802EB7AC 002E86EC  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802EB7B0 002E86F0  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 802EB7B4 002E86F4  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 802EB7B8 002E86F8  E3 61 00 88 */	psq_l f27, 136(r1), 0, qr0
/* 802EB7BC 002E86FC  CB 61 00 80 */	lfd f27, 0x80(r1)
/* 802EB7C0 002E8700  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 802EB7C4 002E8704  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802EB7C8 002E8708  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 802EB7CC 002E870C  7C 08 03 A6 */	mtlr r0
/* 802EB7D0 002E8710  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802EB7D4 002E8714  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBase, global
/* 802EB7D8 002E8718  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai13StateWalkHomeFPQ24Game9EnemyBase

.fn init__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802EB7DC 002E871C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802EB7E0 002E8720  7C 08 02 A6 */	mflr r0
/* 802EB7E4 002E8724  7C 83 23 78 */	mr r3, r4
/* 802EB7E8 002E8728  38 80 00 00 */	li r4, 0
/* 802EB7EC 002E872C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802EB7F0 002E8730  38 00 FF FF */	li r0, -1
/* 802EB7F4 002E8734  38 A0 00 00 */	li r5, 0
/* 802EB7F8 002E8738  90 03 02 D4 */	stw r0, 0x2d4(r3)
/* 802EB7FC 002E873C  4B E1 98 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802EB800 002E8740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802EB804 002E8744  7C 08 03 A6 */	mtlr r0
/* 802EB808 002E8748  38 21 00 10 */	addi r1, r1, 0x10
/* 802EB80C 002E874C  4E 80 00 20 */	blr 
.endfn init__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBase, global
/* 802EB810 002E8750  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802EB814 002E8754  7C 08 02 A6 */	mflr r0
/* 802EB818 002E8758  90 01 00 94 */	stw r0, 0x94(r1)
/* 802EB81C 002E875C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 802EB820 002E8760  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 802EB824 002E8764  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 802EB828 002E8768  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 802EB82C 002E876C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 802EB830 002E8770  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 802EB834 002E8774  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 802EB838 002E8778  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 802EB83C 002E877C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802EB840 002E8780  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802EB844 002E8784  7C 9F 23 78 */	mr r31, r4
/* 802EB848 002E8788  7C 7E 1B 78 */	mr r30, r3
/* 802EB84C 002E878C  7F E3 FB 78 */	mr r3, r31
/* 802EB850 002E8790  48 00 15 E1 */	bl updateHomePosition__Q34Game10MiniHoudai3ObjFv
/* 802EB854 002E8794  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802EB858 002E8798  7F E3 FB 78 */	mr r3, r31
/* 802EB85C 002E879C  C3 E4 03 0C */	lfs f31, 0x30c(r4)
/* 802EB860 002E87A0  C3 C4 03 34 */	lfs f30, 0x334(r4)
/* 802EB864 002E87A4  4B E1 BA 9D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802EB868 002E87A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB86C 002E87AC  41 82 00 0C */	beq .L_802EB878
/* 802EB870 002E87B0  C3 E2 EC 0C */	lfs f31, lbl_8051CF6C@sda21(r2)
/* 802EB874 002E87B4  C3 C2 EB EC */	lfs f30, lbl_8051CF4C@sda21(r2)
.L_802EB878:
/* 802EB878 002E87B8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802EB87C 002E87BC  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB880 002E87C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EB884 002E87C4  4C 40 13 82 */	cror 2, 0, 2
/* 802EB888 002E87C8  40 82 00 18 */	bne .L_802EB8A0
/* 802EB88C 002E87CC  38 00 00 00 */	li r0, 0
/* 802EB890 002E87D0  7F E3 FB 78 */	mr r3, r31
/* 802EB894 002E87D4  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB898 002E87D8  4B E1 9A 09 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB89C 002E87DC  48 00 02 9C */	b .L_802EBB38
.L_802EB8A0:
/* 802EB8A0 002E87E0  7F E3 FB 78 */	mr r3, r31
/* 802EB8A4 002E87E4  38 80 00 01 */	li r4, 1
/* 802EB8A8 002E87E8  4B E2 8D B1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802EB8AC 002E87EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB8B0 002E87F0  41 82 00 18 */	beq .L_802EB8C8
/* 802EB8B4 002E87F4  38 00 00 04 */	li r0, 4
/* 802EB8B8 002E87F8  7F E3 FB 78 */	mr r3, r31
/* 802EB8BC 002E87FC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB8C0 002E8800  4B E1 99 E1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB8C4 002E8804  48 00 02 74 */	b .L_802EBB38
.L_802EB8C8:
/* 802EB8C8 002E8808  7F E3 FB 78 */	mr r3, r31
/* 802EB8CC 002E880C  48 00 16 21 */	bl isAttackableTarget__Q34Game10MiniHoudai3ObjFv
/* 802EB8D0 002E8810  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EB8D4 002E8814  41 82 00 18 */	beq .L_802EB8EC
/* 802EB8D8 002E8818  38 00 00 03 */	li r0, 3
/* 802EB8DC 002E881C  7F E3 FB 78 */	mr r3, r31
/* 802EB8E0 002E8820  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EB8E4 002E8824  4B E1 99 BD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EB8E8 002E8828  48 00 02 50 */	b .L_802EBB38
.L_802EB8EC:
/* 802EB8EC 002E882C  7F E3 FB 78 */	mr r3, r31
/* 802EB8F0 002E8830  48 00 13 AD */	bl getSearchedTarget__Q34Game10MiniHoudai3ObjFv
/* 802EB8F4 002E8834  28 03 00 00 */	cmplwi r3, 0
/* 802EB8F8 002E8838  41 82 01 3C */	beq .L_802EBA34
/* 802EB8FC 002E883C  7C 64 1B 78 */	mr r4, r3
/* 802EB900 002E8840  38 61 00 20 */	addi r3, r1, 0x20
/* 802EB904 002E8844  81 84 00 00 */	lwz r12, 0(r4)
/* 802EB908 002E8848  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB90C 002E884C  7D 89 03 A6 */	mtctr r12
/* 802EB910 002E8850  4E 80 04 21 */	bctrl 
/* 802EB914 002E8854  7F E4 FB 78 */	mr r4, r31
/* 802EB918 002E8858  38 61 00 2C */	addi r3, r1, 0x2c
/* 802EB91C 002E885C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB920 002E8860  C3 A1 00 20 */	lfs f29, 0x20(r1)
/* 802EB924 002E8864  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EB928 002E8868  C3 81 00 28 */	lfs f28, 0x28(r1)
/* 802EB92C 002E886C  7D 89 03 A6 */	mtctr r12
/* 802EB930 002E8870  4E 80 04 21 */	bctrl 
/* 802EB934 002E8874  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 802EB938 002E8878  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EB93C 002E887C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802EB940 002E8880  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EB944 002E8884  EC 3D 08 28 */	fsubs f1, f29, f1
/* 802EB948 002E8888  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802EB94C 002E888C  4B D4 97 BD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EB950 002E8890  48 12 62 81 */	bl roundAng__Ff
/* 802EB954 002E8894  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB958 002E8898  FF A0 08 90 */	fmr f29, f1
/* 802EB95C 002E889C  7F E3 FB 78 */	mr r3, r31
/* 802EB960 002E88A0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB964 002E88A4  7D 89 03 A6 */	mtctr r12
/* 802EB968 002E88A8  4E 80 04 21 */	bctrl 
/* 802EB96C 002E88AC  FC 40 08 90 */	fmr f2, f1
/* 802EB970 002E88B0  FC 20 E8 90 */	fmr f1, f29
/* 802EB974 002E88B4  48 12 62 89 */	bl angDist__Fff
/* 802EB978 002E88B8  FF A0 08 90 */	fmr f29, f1
/* 802EB97C 002E88BC  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EB980 002E88C0  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EB984 002E88C4  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802EB988 002E88C8  EF DD 07 F2 */	fmuls f30, f29, f31
/* 802EB98C 002E88CC  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EB990 002E88D0  FC 00 F2 10 */	fabs f0, f30
/* 802EB994 002E88D4  FC 00 00 18 */	frsp f0, f0
/* 802EB998 002E88D8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EB99C 002E88DC  40 81 00 1C */	ble .L_802EB9B8
/* 802EB9A0 002E88E0  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EB9A4 002E88E4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802EB9A8 002E88E8  40 81 00 0C */	ble .L_802EB9B4
/* 802EB9AC 002E88EC  FF C0 08 90 */	fmr f30, f1
/* 802EB9B0 002E88F0  48 00 00 08 */	b .L_802EB9B8
.L_802EB9B4:
/* 802EB9B4 002E88F4  FF C0 08 50 */	fneg f30, f1
.L_802EB9B8:
/* 802EB9B8 002E88F8  7F E3 FB 78 */	mr r3, r31
/* 802EB9BC 002E88FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EB9C0 002E8900  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EB9C4 002E8904  7D 89 03 A6 */	mtctr r12
/* 802EB9C8 002E8908  4E 80 04 21 */	bctrl 
/* 802EB9CC 002E890C  EC 3E 08 2A */	fadds f1, f30, f1
/* 802EB9D0 002E8910  48 12 62 01 */	bl roundAng__Ff
/* 802EB9D4 002E8914  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EB9D8 002E8918  FC 40 EA 10 */	fabs f2, f29
/* 802EB9DC 002E891C  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EB9E0 002E8920  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 802EB9E4 002E8924  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EB9E8 002E8928  FC 40 10 18 */	frsp f2, f2
/* 802EB9EC 002E892C  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 802EB9F0 002E8930  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802EB9F4 002E8934  C0 63 05 8C */	lfs f3, 0x58c(r3)
/* 802EB9F8 002E8938  EC 00 00 F2 */	fmuls f0, f0, f3
/* 802EB9FC 002E893C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802EBA00 002E8940  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802EBA04 002E8944  4C 40 13 82 */	cror 2, 0, 2
/* 802EBA08 002E8948  40 82 00 18 */	bne .L_802EBA20
/* 802EBA0C 002E894C  38 00 00 08 */	li r0, 8
/* 802EBA10 002E8950  7F E3 FB 78 */	mr r3, r31
/* 802EBA14 002E8954  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EBA18 002E8958  4B E1 98 89 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EBA1C 002E895C  48 00 01 1C */	b .L_802EBB38
.L_802EBA20:
/* 802EBA20 002E8960  38 00 00 05 */	li r0, 5
/* 802EBA24 002E8964  7F E3 FB 78 */	mr r3, r31
/* 802EBA28 002E8968  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EBA2C 002E896C  4B E1 98 75 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802EBA30 002E8970  48 00 01 08 */	b .L_802EBB38
.L_802EBA34:
/* 802EBA34 002E8974  7F E4 FB 78 */	mr r4, r31
/* 802EBA38 002E8978  38 61 00 14 */	addi r3, r1, 0x14
/* 802EBA3C 002E897C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EBA40 002E8980  C3 9F 02 E4 */	lfs f28, 0x2e4(r31)
/* 802EBA44 002E8984  81 8C 00 08 */	lwz r12, 8(r12)
/* 802EBA48 002E8988  C3 BF 02 EC */	lfs f29, 0x2ec(r31)
/* 802EBA4C 002E898C  7D 89 03 A6 */	mtctr r12
/* 802EBA50 002E8990  4E 80 04 21 */	bctrl 
/* 802EBA54 002E8994  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 802EBA58 002E8998  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802EBA5C 002E899C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802EBA60 002E89A0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802EBA64 002E89A4  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 802EBA68 002E89A8  EC 3C 20 28 */	fsubs f1, f28, f4
/* 802EBA6C 002E89AC  EC 5D 00 28 */	fsubs f2, f29, f0
/* 802EBA70 002E89B0  D0 81 00 08 */	stfs f4, 8(r1)
/* 802EBA74 002E89B4  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 802EBA78 002E89B8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802EBA7C 002E89BC  4B D4 96 8D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802EBA80 002E89C0  48 12 61 51 */	bl roundAng__Ff
/* 802EBA84 002E89C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EBA88 002E89C8  FF A0 08 90 */	fmr f29, f1
/* 802EBA8C 002E89CC  7F E3 FB 78 */	mr r3, r31
/* 802EBA90 002E89D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EBA94 002E89D4  7D 89 03 A6 */	mtctr r12
/* 802EBA98 002E89D8  4E 80 04 21 */	bctrl 
/* 802EBA9C 002E89DC  FC 40 08 90 */	fmr f2, f1
/* 802EBAA0 002E89E0  FC 20 E8 90 */	fmr f1, f29
/* 802EBAA4 002E89E4  48 12 61 59 */	bl angDist__Fff
/* 802EBAA8 002E89E8  FF A0 08 90 */	fmr f29, f1
/* 802EBAAC 002E89EC  C0 02 EB FC */	lfs f0, lbl_8051CF5C@sda21(r2)
/* 802EBAB0 002E89F0  C0 22 EB F8 */	lfs f1, lbl_8051CF58@sda21(r2)
/* 802EBAB4 002E89F4  EC 00 07 B2 */	fmuls f0, f0, f30
/* 802EBAB8 002E89F8  EF DD 07 F2 */	fmuls f30, f29, f31
/* 802EBABC 002E89FC  EC 21 00 32 */	fmuls f1, f1, f0
/* 802EBAC0 002E8A00  FC 00 F2 10 */	fabs f0, f30
/* 802EBAC4 002E8A04  FC 00 00 18 */	frsp f0, f0
/* 802EBAC8 002E8A08  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802EBACC 002E8A0C  40 81 00 1C */	ble .L_802EBAE8
/* 802EBAD0 002E8A10  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EBAD4 002E8A14  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 802EBAD8 002E8A18  40 81 00 0C */	ble .L_802EBAE4
/* 802EBADC 002E8A1C  FF C0 08 90 */	fmr f30, f1
/* 802EBAE0 002E8A20  48 00 00 08 */	b .L_802EBAE8
.L_802EBAE4:
/* 802EBAE4 002E8A24  FF C0 08 50 */	fneg f30, f1
.L_802EBAE8:
/* 802EBAE8 002E8A28  7F E3 FB 78 */	mr r3, r31
/* 802EBAEC 002E8A2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EBAF0 002E8A30  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EBAF4 002E8A34  7D 89 03 A6 */	mtctr r12
/* 802EBAF8 002E8A38  4E 80 04 21 */	bctrl 
/* 802EBAFC 002E8A3C  EC 3E 08 2A */	fadds f1, f30, f1
/* 802EBB00 002E8A40  48 12 60 D1 */	bl roundAng__Ff
/* 802EBB04 002E8A44  FC 60 EA 10 */	fabs f3, f29
/* 802EBB08 002E8A48  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802EBB0C 002E8A4C  C0 02 EC 00 */	lfs f0, lbl_8051CF60@sda21(r2)
/* 802EBB10 002E8A50  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 802EBB14 002E8A54  FC 20 18 18 */	frsp f1, f3
/* 802EBB18 002E8A58  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 802EBB1C 002E8A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802EBB20 002E8A60  4C 40 13 82 */	cror 2, 0, 2
/* 802EBB24 002E8A64  41 82 00 14 */	beq .L_802EBB38
/* 802EBB28 002E8A68  38 00 00 07 */	li r0, 7
/* 802EBB2C 002E8A6C  7F E3 FB 78 */	mr r3, r31
/* 802EBB30 002E8A70  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802EBB34 002E8A74  4B E1 97 6D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802EBB38:
/* 802EBB38 002E8A78  7F E3 FB 78 */	mr r3, r31
/* 802EBB3C 002E8A7C  4B E1 B7 C5 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802EBB40 002E8A80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802EBB44 002E8A84  41 82 00 18 */	beq .L_802EBB5C
/* 802EBB48 002E8A88  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EBB4C 002E8A8C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EBB50 002E8A90  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EBB54 002E8A94  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EBB58 002E8A98  48 00 00 A0 */	b .L_802EBBF8
.L_802EBB5C:
/* 802EBB5C 002E8A9C  7F E3 FB 78 */	mr r3, r31
/* 802EBB60 002E8AA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EBB64 002E8AA4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 802EBB68 002E8AA8  7D 89 03 A6 */	mtctr r12
/* 802EBB6C 002E8AAC  4E 80 04 21 */	bctrl 
/* 802EBB70 002E8AB0  2C 03 00 4E */	cmpwi r3, 0x4e
/* 802EBB74 002E8AB4  40 82 00 74 */	bne .L_802EBBE8
/* 802EBB78 002E8AB8  7F E3 FB 78 */	mr r3, r31
/* 802EBB7C 002E8ABC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802EBB80 002E8AC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EBB84 002E8AC4  C3 A4 02 E4 */	lfs f29, 0x2e4(r4)
/* 802EBB88 002E8AC8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EBB8C 002E8ACC  7D 89 03 A6 */	mtctr r12
/* 802EBB90 002E8AD0  4E 80 04 21 */	bctrl 
/* 802EBB94 002E8AD4  4B DE 3C 89 */	bl sin
/* 802EBB98 002E8AD8  7F E3 FB 78 */	mr r3, r31
/* 802EBB9C 002E8ADC  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802EBBA0 002E8AE0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802EBBA4 002E8AE4  FF E0 08 18 */	frsp f31, f1
/* 802EBBA8 002E8AE8  C3 DF 01 D8 */	lfs f30, 0x1d8(r31)
/* 802EBBAC 002E8AEC  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802EBBB0 002E8AF0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802EBBB4 002E8AF4  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802EBBB8 002E8AF8  D3 C1 00 3C */	stfs f30, 0x3c(r1)
/* 802EBBBC 002E8AFC  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802EBBC0 002E8B00  7D 89 03 A6 */	mtctr r12
/* 802EBBC4 002E8B04  4E 80 04 21 */	bctrl 
/* 802EBBC8 002E8B08  4B DE 36 ED */	bl cos
/* 802EBBCC 002E8B0C  EC 1D 07 F2 */	fmuls f0, f29, f31
/* 802EBBD0 002E8B10  FC 20 08 18 */	frsp f1, f1
/* 802EBBD4 002E8B14  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EBBD8 002E8B18  EC 1D 00 72 */	fmuls f0, f29, f1
/* 802EBBDC 002E8B1C  D3 DF 01 D8 */	stfs f30, 0x1d8(r31)
/* 802EBBE0 002E8B20  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802EBBE4 002E8B24  48 00 00 14 */	b .L_802EBBF8
.L_802EBBE8:
/* 802EBBE8 002E8B28  C0 02 EB E8 */	lfs f0, lbl_8051CF48@sda21(r2)
/* 802EBBEC 002E8B2C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802EBBF0 002E8B30  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802EBBF4 002E8B34  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802EBBF8:
/* 802EBBF8 002E8B38  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802EBBFC 002E8B3C  C0 42 EC 10 */	lfs f2, lbl_8051CF70@sda21(r2)
/* 802EBC00 002E8B40  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802EBC04 002E8B44  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 802EBC08 002E8B48  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802EBC0C 002E8B4C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802EBC10 002E8B50  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802EBC14 002E8B54  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802EBC18 002E8B58  28 00 00 00 */	cmplwi r0, 0
/* 802EBC1C 002E8B5C  41 82 00 60 */	beq .L_802EBC7C
/* 802EBC20 002E8B60  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802EBC24 002E8B64  28 00 00 00 */	cmplwi r0, 0
/* 802EBC28 002E8B68  40 82 00 14 */	bne .L_802EBC3C
/* 802EBC2C 002E8B6C  7F E3 FB 78 */	mr r3, r31
/* 802EBC30 002E8B70  38 80 00 01 */	li r4, 1
/* 802EBC34 002E8B74  48 00 19 99 */	bl createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
/* 802EBC38 002E8B78  48 00 00 44 */	b .L_802EBC7C
.L_802EBC3C:
/* 802EBC3C 002E8B7C  28 00 00 02 */	cmplwi r0, 2
/* 802EBC40 002E8B80  40 82 00 14 */	bne .L_802EBC54
/* 802EBC44 002E8B84  7F E3 FB 78 */	mr r3, r31
/* 802EBC48 002E8B88  38 80 00 00 */	li r4, 0
/* 802EBC4C 002E8B8C  48 00 19 81 */	bl createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
/* 802EBC50 002E8B90  48 00 00 2C */	b .L_802EBC7C
.L_802EBC54:
/* 802EBC54 002E8B94  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802EBC58 002E8B98  40 82 00 24 */	bne .L_802EBC7C
/* 802EBC5C 002E8B9C  7F C3 F3 78 */	mr r3, r30
/* 802EBC60 002E8BA0  7F E4 FB 78 */	mr r4, r31
/* 802EBC64 002E8BA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802EBC68 002E8BA8  38 C0 00 00 */	li r6, 0
/* 802EBC6C 002E8BAC  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 802EBC70 002E8BB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802EBC74 002E8BB4  7D 89 03 A6 */	mtctr r12
/* 802EBC78 002E8BB8  4E 80 04 21 */	bctrl 
.L_802EBC7C:
/* 802EBC7C 002E8BBC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 802EBC80 002E8BC0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 802EBC84 002E8BC4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 802EBC88 002E8BC8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 802EBC8C 002E8BCC  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 802EBC90 002E8BD0  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 802EBC94 002E8BD4  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 802EBC98 002E8BD8  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 802EBC9C 002E8BDC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802EBCA0 002E8BE0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 802EBCA4 002E8BE4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802EBCA8 002E8BE8  7C 08 03 A6 */	mtlr r0
/* 802EBCAC 002E8BEC  38 21 00 90 */	addi r1, r1, 0x90
/* 802EBCB0 002E8BF0  4E 80 00 20 */	blr 
.endfn exec__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBase

.fn cleanup__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBase, global
/* 802EBCB4 002E8BF4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10MiniHoudai13StateWalkPathFPQ24Game9EnemyBase

.fn __sinit_MiniHoudaiState_cpp, local
/* 802EBCB8 002E8BF8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802EBCBC 002E8BFC  38 00 FF FF */	li r0, -1
/* 802EBCC0 002E8C00  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802EBCC4 002E8C04  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802EBCC8 002E8C08  90 0D 97 68 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802EBCCC 002E8C0C  D4 03 45 48 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802EBCD0 002E8C10  D0 0D 97 6C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802EBCD4 002E8C14  D0 03 00 04 */	stfs f0, 4(r3)
/* 802EBCD8 002E8C18  D0 03 00 08 */	stfs f0, 8(r3)
/* 802EBCDC 002E8C1C  4E 80 00 20 */	blr 
.endfn __sinit_MiniHoudaiState_cpp
