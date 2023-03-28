.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_BombSaraiState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80489E80, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80489E80
.balign 4
.obj lbl_80489E8C, local
	.asciz "246-BombSaraiState"
.endobj lbl_80489E8C
.balign 4
.obj lbl_80489EA0, local
	.asciz "bombwait"
.endobj lbl_80489EA0
.balign 4
.obj lbl_80489EAC, local
	.asciz "bombmove"
.endobj lbl_80489EAC
.balign 4
.obj lbl_80489EB8, local
	.asciz "takeoff1"
.endobj lbl_80489EB8
.balign 4
.obj lbl_80489EC4, local
	.asciz "takeoff2"
.endobj lbl_80489EC4
.balign 4
.obj lbl_80489ED0, local
	.asciz "bombflick"
.endobj lbl_80489ED0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game9BombSarai14StateBombFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai14StateBombFlick
.obj __vt__Q34Game9BombSarai10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai10StateFlick
.obj __vt__Q34Game9BombSarai13StateTakeOff2, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai13StateTakeOff2
.obj __vt__Q34Game9BombSarai13StateTakeOff1, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai13StateTakeOff1
.obj __vt__Q34Game9BombSarai9StateFall, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai9StateFall
.obj __vt__Q34Game9BombSarai12StateRelease, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai12StateRelease
.obj __vt__Q34Game9BombSarai11StateSupply, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai11StateSupply
.obj __vt__Q34Game9BombSarai13StateBombMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai13StateBombMove
.obj __vt__Q34Game9BombSarai9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai9StateMove
.obj __vt__Q34Game9BombSarai13StateBombWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai13StateBombWait
.obj __vt__Q34Game9BombSarai9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai9StateWait
.obj __vt__Q34Game9BombSarai11StateDamage, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai11StateDamage
.obj __vt__Q34Game9BombSarai9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai9StateDead
.obj __vt__Q34Game9BombSarai5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9BombSarai5State
.obj __vt__Q34Game9BombSarai3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9BombSarai3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game9BombSarai3FSM

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
.obj lbl_8051C130, local
	.asciz "dead"
.endobj lbl_8051C130
.balign 4
.obj lbl_8051C138, local
	.asciz "damage"
.endobj lbl_8051C138
.balign 4
.obj lbl_8051C140, local
	.asciz "wait"
.endobj lbl_8051C140
.balign 4
.obj lbl_8051C148, local
	.asciz "move"
.endobj lbl_8051C148
.balign 4
.obj lbl_8051C150, local
	.asciz "supply"
.endobj lbl_8051C150
.balign 4
.obj lbl_8051C158, local
	.asciz "release"
.endobj lbl_8051C158
.balign 4
.obj lbl_8051C160, local
	.asciz "fall"
.endobj lbl_8051C160
.balign 4
.obj lbl_8051C168, local
	.asciz "flick"
.endobj lbl_8051C168
.balign 4
.obj lbl_8051C170, local
	.float 0.0
.endobj lbl_8051C170
.obj lbl_8051C174, local
	.float 0.9
.endobj lbl_8051C174
.obj lbl_8051C178, local
	.float 0.8
.endobj lbl_8051C178
.obj lbl_8051C17C, local
	.float 0.5
.endobj lbl_8051C17C
.obj lbl_8051C180, local
	.float 3.0
.endobj lbl_8051C180
.obj lbl_8051C184, local
	.float 5.0
.endobj lbl_8051C184
.obj lbl_8051C188, local
	.float 15.0
.endobj lbl_8051C188
.obj lbl_8051C18C, local # pi
	.float 3.1415927
.endobj lbl_8051C18C
.obj lbl_8051C190, local
	.float 0.0055555557
.endobj lbl_8051C190
.obj lbl_8051C194, local
	.float 625.0
.endobj lbl_8051C194
.obj lbl_8051C198, local
	.float 50.0
.endobj lbl_8051C198
.obj lbl_8051C19C, local
	.float 325.9493
.endobj lbl_8051C19C
.obj lbl_8051C1A0, local
	.float -325.9493
.endobj lbl_8051C1A0
.obj lbl_8051C1A4, local
	.float 100.0
.endobj lbl_8051C1A4
.obj lbl_8051C1A8, local
	.float 35.0
.endobj lbl_8051C1A8
.obj lbl_8051C1AC, local
	.float 1.0
.endobj lbl_8051C1AC
.obj lbl_8051C1B0, local
	.float 300.0
.endobj lbl_8051C1B0
.obj lbl_8051C1B4, local
	.float 45.0
.endobj lbl_8051C1B4
.obj lbl_8051C1B8, local
	.float 21.0
.endobj lbl_8051C1B8
.obj lbl_8051C1BC, local
	.float -1000.0
.endobj lbl_8051C1BC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game9BombSarai3FSMFPQ24Game9EnemyBase, global
/* 802AFC74 002ACBB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AFC78 002ACBB8  7C 08 02 A6 */	mflr r0
/* 802AFC7C 002ACBBC  3C 80 80 49 */	lis r4, lbl_80489E80@ha
/* 802AFC80 002ACBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AFC84 002ACBC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AFC88 002ACBC8  7C 7F 1B 78 */	mr r31, r3
/* 802AFC8C 002ACBCC  93 C1 00 08 */	stw r30, 8(r1)
/* 802AFC90 002ACBD0  3B C4 9E 80 */	addi r30, r4, lbl_80489E80@l
/* 802AFC94 002ACBD4  38 80 00 0D */	li r4, 0xd
/* 802AFC98 002ACBD8  4B E8 0B CD */	bl create__Q24Game17EnemyStateMachineFi
/* 802AFC9C 002ACBDC  38 60 00 10 */	li r3, 0x10
/* 802AFCA0 002ACBE0  4B D7 42 05 */	bl __nw__FUl
/* 802AFCA4 002ACBE4  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFCA8 002ACBE8  41 82 00 3C */	beq .L_802AFCE4
/* 802AFCAC 002ACBEC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFCB0 002ACBF0  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFCB4 002ACBF4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFCB8 002ACBF8  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai9StateDead@ha
/* 802AFCBC 002ACBFC  90 04 00 00 */	stw r0, 0(r4)
/* 802AFCC0 002ACC00  38 E0 00 00 */	li r7, 0
/* 802AFCC4 002ACC04  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFCC8 002ACC08  38 A2 DD D0 */	addi r5, r2, lbl_8051C130@sda21
/* 802AFCCC 002ACC0C  90 E4 00 04 */	stw r7, 4(r4)
/* 802AFCD0 002ACC10  38 03 E8 14 */	addi r0, r3, __vt__Q34Game9BombSarai9StateDead@l
/* 802AFCD4 002ACC14  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFCD8 002ACC18  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFCDC 002ACC1C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFCE0 002ACC20  90 04 00 00 */	stw r0, 0(r4)
.L_802AFCE4:
/* 802AFCE4 002ACC24  7F E3 FB 78 */	mr r3, r31
/* 802AFCE8 002ACC28  4B E8 0C 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFCEC 002ACC2C  38 60 00 10 */	li r3, 0x10
/* 802AFCF0 002ACC30  4B D7 41 B5 */	bl __nw__FUl
/* 802AFCF4 002ACC34  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFCF8 002ACC38  41 82 00 40 */	beq .L_802AFD38
/* 802AFCFC 002ACC3C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFD00 002ACC40  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFD04 002ACC44  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFD08 002ACC48  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai11StateDamage@ha
/* 802AFD0C 002ACC4C  90 04 00 00 */	stw r0, 0(r4)
/* 802AFD10 002ACC50  38 00 00 01 */	li r0, 1
/* 802AFD14 002ACC54  38 E0 00 00 */	li r7, 0
/* 802AFD18 002ACC58  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFD1C 002ACC5C  90 04 00 04 */	stw r0, 4(r4)
/* 802AFD20 002ACC60  38 A2 DD D8 */	addi r5, r2, lbl_8051C138@sda21
/* 802AFD24 002ACC64  38 03 E7 F0 */	addi r0, r3, __vt__Q34Game9BombSarai11StateDamage@l
/* 802AFD28 002ACC68  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFD2C 002ACC6C  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFD30 002ACC70  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFD34 002ACC74  90 04 00 00 */	stw r0, 0(r4)
.L_802AFD38:
/* 802AFD38 002ACC78  7F E3 FB 78 */	mr r3, r31
/* 802AFD3C 002ACC7C  4B E8 0B CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFD40 002ACC80  38 60 00 10 */	li r3, 0x10
/* 802AFD44 002ACC84  4B D7 41 61 */	bl __nw__FUl
/* 802AFD48 002ACC88  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFD4C 002ACC8C  41 82 00 40 */	beq .L_802AFD8C
/* 802AFD50 002ACC90  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFD54 002ACC94  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFD58 002ACC98  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFD5C 002ACC9C  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai9StateWait@ha
/* 802AFD60 002ACCA0  90 04 00 00 */	stw r0, 0(r4)
/* 802AFD64 002ACCA4  38 00 00 02 */	li r0, 2
/* 802AFD68 002ACCA8  38 E0 00 00 */	li r7, 0
/* 802AFD6C 002ACCAC  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFD70 002ACCB0  90 04 00 04 */	stw r0, 4(r4)
/* 802AFD74 002ACCB4  38 A2 DD E0 */	addi r5, r2, lbl_8051C140@sda21
/* 802AFD78 002ACCB8  38 03 E7 CC */	addi r0, r3, __vt__Q34Game9BombSarai9StateWait@l
/* 802AFD7C 002ACCBC  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFD80 002ACCC0  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFD84 002ACCC4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFD88 002ACCC8  90 04 00 00 */	stw r0, 0(r4)
.L_802AFD8C:
/* 802AFD8C 002ACCCC  7F E3 FB 78 */	mr r3, r31
/* 802AFD90 002ACCD0  4B E8 0B 79 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFD94 002ACCD4  38 60 00 10 */	li r3, 0x10
/* 802AFD98 002ACCD8  4B D7 41 0D */	bl __nw__FUl
/* 802AFD9C 002ACCDC  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFDA0 002ACCE0  41 82 00 40 */	beq .L_802AFDE0
/* 802AFDA4 002ACCE4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFDA8 002ACCE8  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFDAC 002ACCEC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFDB0 002ACCF0  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai13StateBombWait@ha
/* 802AFDB4 002ACCF4  90 04 00 00 */	stw r0, 0(r4)
/* 802AFDB8 002ACCF8  38 00 00 03 */	li r0, 3
/* 802AFDBC 002ACCFC  38 E0 00 00 */	li r7, 0
/* 802AFDC0 002ACD00  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFDC4 002ACD04  90 04 00 04 */	stw r0, 4(r4)
/* 802AFDC8 002ACD08  38 BE 00 20 */	addi r5, r30, 0x20
/* 802AFDCC 002ACD0C  38 03 E7 A8 */	addi r0, r3, __vt__Q34Game9BombSarai13StateBombWait@l
/* 802AFDD0 002ACD10  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFDD4 002ACD14  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFDD8 002ACD18  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFDDC 002ACD1C  90 04 00 00 */	stw r0, 0(r4)
.L_802AFDE0:
/* 802AFDE0 002ACD20  7F E3 FB 78 */	mr r3, r31
/* 802AFDE4 002ACD24  4B E8 0B 25 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFDE8 002ACD28  38 60 00 10 */	li r3, 0x10
/* 802AFDEC 002ACD2C  4B D7 40 B9 */	bl __nw__FUl
/* 802AFDF0 002ACD30  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFDF4 002ACD34  41 82 00 40 */	beq .L_802AFE34
/* 802AFDF8 002ACD38  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFDFC 002ACD3C  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFE00 002ACD40  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFE04 002ACD44  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai9StateMove@ha
/* 802AFE08 002ACD48  90 04 00 00 */	stw r0, 0(r4)
/* 802AFE0C 002ACD4C  38 00 00 04 */	li r0, 4
/* 802AFE10 002ACD50  38 E0 00 00 */	li r7, 0
/* 802AFE14 002ACD54  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFE18 002ACD58  90 04 00 04 */	stw r0, 4(r4)
/* 802AFE1C 002ACD5C  38 A2 DD E8 */	addi r5, r2, lbl_8051C148@sda21
/* 802AFE20 002ACD60  38 03 E7 84 */	addi r0, r3, __vt__Q34Game9BombSarai9StateMove@l
/* 802AFE24 002ACD64  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFE28 002ACD68  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFE2C 002ACD6C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFE30 002ACD70  90 04 00 00 */	stw r0, 0(r4)
.L_802AFE34:
/* 802AFE34 002ACD74  7F E3 FB 78 */	mr r3, r31
/* 802AFE38 002ACD78  4B E8 0A D1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFE3C 002ACD7C  38 60 00 10 */	li r3, 0x10
/* 802AFE40 002ACD80  4B D7 40 65 */	bl __nw__FUl
/* 802AFE44 002ACD84  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFE48 002ACD88  41 82 00 40 */	beq .L_802AFE88
/* 802AFE4C 002ACD8C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFE50 002ACD90  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFE54 002ACD94  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFE58 002ACD98  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai13StateBombMove@ha
/* 802AFE5C 002ACD9C  90 04 00 00 */	stw r0, 0(r4)
/* 802AFE60 002ACDA0  38 00 00 05 */	li r0, 5
/* 802AFE64 002ACDA4  38 E0 00 00 */	li r7, 0
/* 802AFE68 002ACDA8  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFE6C 002ACDAC  90 04 00 04 */	stw r0, 4(r4)
/* 802AFE70 002ACDB0  38 BE 00 2C */	addi r5, r30, 0x2c
/* 802AFE74 002ACDB4  38 03 E7 60 */	addi r0, r3, __vt__Q34Game9BombSarai13StateBombMove@l
/* 802AFE78 002ACDB8  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFE7C 002ACDBC  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFE80 002ACDC0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFE84 002ACDC4  90 04 00 00 */	stw r0, 0(r4)
.L_802AFE88:
/* 802AFE88 002ACDC8  7F E3 FB 78 */	mr r3, r31
/* 802AFE8C 002ACDCC  4B E8 0A 7D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFE90 002ACDD0  38 60 00 10 */	li r3, 0x10
/* 802AFE94 002ACDD4  4B D7 40 11 */	bl __nw__FUl
/* 802AFE98 002ACDD8  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFE9C 002ACDDC  41 82 00 40 */	beq .L_802AFEDC
/* 802AFEA0 002ACDE0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFEA4 002ACDE4  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFEA8 002ACDE8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFEAC 002ACDEC  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai11StateSupply@ha
/* 802AFEB0 002ACDF0  90 04 00 00 */	stw r0, 0(r4)
/* 802AFEB4 002ACDF4  38 00 00 06 */	li r0, 6
/* 802AFEB8 002ACDF8  38 E0 00 00 */	li r7, 0
/* 802AFEBC 002ACDFC  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFEC0 002ACE00  90 04 00 04 */	stw r0, 4(r4)
/* 802AFEC4 002ACE04  38 A2 DD F0 */	addi r5, r2, lbl_8051C150@sda21
/* 802AFEC8 002ACE08  38 03 E7 3C */	addi r0, r3, __vt__Q34Game9BombSarai11StateSupply@l
/* 802AFECC 002ACE0C  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFED0 002ACE10  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFED4 002ACE14  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFED8 002ACE18  90 04 00 00 */	stw r0, 0(r4)
.L_802AFEDC:
/* 802AFEDC 002ACE1C  7F E3 FB 78 */	mr r3, r31
/* 802AFEE0 002ACE20  4B E8 0A 29 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFEE4 002ACE24  38 60 00 10 */	li r3, 0x10
/* 802AFEE8 002ACE28  4B D7 3F BD */	bl __nw__FUl
/* 802AFEEC 002ACE2C  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFEF0 002ACE30  41 82 00 40 */	beq .L_802AFF30
/* 802AFEF4 002ACE34  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFEF8 002ACE38  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFEFC 002ACE3C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFF00 002ACE40  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai12StateRelease@ha
/* 802AFF04 002ACE44  90 04 00 00 */	stw r0, 0(r4)
/* 802AFF08 002ACE48  38 00 00 07 */	li r0, 7
/* 802AFF0C 002ACE4C  38 E0 00 00 */	li r7, 0
/* 802AFF10 002ACE50  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFF14 002ACE54  90 04 00 04 */	stw r0, 4(r4)
/* 802AFF18 002ACE58  38 A2 DD F8 */	addi r5, r2, lbl_8051C158@sda21
/* 802AFF1C 002ACE5C  38 03 E7 18 */	addi r0, r3, __vt__Q34Game9BombSarai12StateRelease@l
/* 802AFF20 002ACE60  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFF24 002ACE64  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFF28 002ACE68  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFF2C 002ACE6C  90 04 00 00 */	stw r0, 0(r4)
.L_802AFF30:
/* 802AFF30 002ACE70  7F E3 FB 78 */	mr r3, r31
/* 802AFF34 002ACE74  4B E8 09 D5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFF38 002ACE78  38 60 00 10 */	li r3, 0x10
/* 802AFF3C 002ACE7C  4B D7 3F 69 */	bl __nw__FUl
/* 802AFF40 002ACE80  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFF44 002ACE84  41 82 00 40 */	beq .L_802AFF84
/* 802AFF48 002ACE88  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFF4C 002ACE8C  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFF50 002ACE90  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFF54 002ACE94  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai9StateFall@ha
/* 802AFF58 002ACE98  90 04 00 00 */	stw r0, 0(r4)
/* 802AFF5C 002ACE9C  38 00 00 08 */	li r0, 8
/* 802AFF60 002ACEA0  38 E0 00 00 */	li r7, 0
/* 802AFF64 002ACEA4  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFF68 002ACEA8  90 04 00 04 */	stw r0, 4(r4)
/* 802AFF6C 002ACEAC  38 A2 DE 00 */	addi r5, r2, lbl_8051C160@sda21
/* 802AFF70 002ACEB0  38 03 E6 F4 */	addi r0, r3, __vt__Q34Game9BombSarai9StateFall@l
/* 802AFF74 002ACEB4  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFF78 002ACEB8  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFF7C 002ACEBC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFF80 002ACEC0  90 04 00 00 */	stw r0, 0(r4)
.L_802AFF84:
/* 802AFF84 002ACEC4  7F E3 FB 78 */	mr r3, r31
/* 802AFF88 002ACEC8  4B E8 09 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFF8C 002ACECC  38 60 00 10 */	li r3, 0x10
/* 802AFF90 002ACED0  4B D7 3F 15 */	bl __nw__FUl
/* 802AFF94 002ACED4  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFF98 002ACED8  41 82 00 40 */	beq .L_802AFFD8
/* 802AFF9C 002ACEDC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFFA0 002ACEE0  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFFA4 002ACEE4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFFA8 002ACEE8  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai13StateTakeOff1@ha
/* 802AFFAC 002ACEEC  90 04 00 00 */	stw r0, 0(r4)
/* 802AFFB0 002ACEF0  38 00 00 09 */	li r0, 9
/* 802AFFB4 002ACEF4  38 E0 00 00 */	li r7, 0
/* 802AFFB8 002ACEF8  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802AFFBC 002ACEFC  90 04 00 04 */	stw r0, 4(r4)
/* 802AFFC0 002ACF00  38 BE 00 38 */	addi r5, r30, 0x38
/* 802AFFC4 002ACF04  38 03 E6 D0 */	addi r0, r3, __vt__Q34Game9BombSarai13StateTakeOff1@l
/* 802AFFC8 002ACF08  90 E4 00 08 */	stw r7, 8(r4)
/* 802AFFCC 002ACF0C  90 C4 00 00 */	stw r6, 0(r4)
/* 802AFFD0 002ACF10  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AFFD4 002ACF14  90 04 00 00 */	stw r0, 0(r4)
.L_802AFFD8:
/* 802AFFD8 002ACF18  7F E3 FB 78 */	mr r3, r31
/* 802AFFDC 002ACF1C  4B E8 09 2D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AFFE0 002ACF20  38 60 00 10 */	li r3, 0x10
/* 802AFFE4 002ACF24  4B D7 3E C1 */	bl __nw__FUl
/* 802AFFE8 002ACF28  7C 64 1B 79 */	or. r4, r3, r3
/* 802AFFEC 002ACF2C  41 82 00 40 */	beq .L_802B002C
/* 802AFFF0 002ACF30  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AFFF4 002ACF34  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802AFFF8 002ACF38  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AFFFC 002ACF3C  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai13StateTakeOff2@ha
/* 802B0000 002ACF40  90 04 00 00 */	stw r0, 0(r4)
/* 802B0004 002ACF44  38 00 00 0A */	li r0, 0xa
/* 802B0008 002ACF48  38 E0 00 00 */	li r7, 0
/* 802B000C 002ACF4C  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802B0010 002ACF50  90 04 00 04 */	stw r0, 4(r4)
/* 802B0014 002ACF54  38 BE 00 44 */	addi r5, r30, 0x44
/* 802B0018 002ACF58  38 03 E6 AC */	addi r0, r3, __vt__Q34Game9BombSarai13StateTakeOff2@l
/* 802B001C 002ACF5C  90 E4 00 08 */	stw r7, 8(r4)
/* 802B0020 002ACF60  90 C4 00 00 */	stw r6, 0(r4)
/* 802B0024 002ACF64  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802B0028 002ACF68  90 04 00 00 */	stw r0, 0(r4)
.L_802B002C:
/* 802B002C 002ACF6C  7F E3 FB 78 */	mr r3, r31
/* 802B0030 002ACF70  4B E8 08 D9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802B0034 002ACF74  38 60 00 10 */	li r3, 0x10
/* 802B0038 002ACF78  4B D7 3E 6D */	bl __nw__FUl
/* 802B003C 002ACF7C  7C 64 1B 79 */	or. r4, r3, r3
/* 802B0040 002ACF80  41 82 00 40 */	beq .L_802B0080
/* 802B0044 002ACF84  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802B0048 002ACF88  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802B004C 002ACF8C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802B0050 002ACF90  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai10StateFlick@ha
/* 802B0054 002ACF94  90 04 00 00 */	stw r0, 0(r4)
/* 802B0058 002ACF98  38 00 00 0B */	li r0, 0xb
/* 802B005C 002ACF9C  38 E0 00 00 */	li r7, 0
/* 802B0060 002ACFA0  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802B0064 002ACFA4  90 04 00 04 */	stw r0, 4(r4)
/* 802B0068 002ACFA8  38 A2 DE 08 */	addi r5, r2, lbl_8051C168@sda21
/* 802B006C 002ACFAC  38 03 E6 88 */	addi r0, r3, __vt__Q34Game9BombSarai10StateFlick@l
/* 802B0070 002ACFB0  90 E4 00 08 */	stw r7, 8(r4)
/* 802B0074 002ACFB4  90 C4 00 00 */	stw r6, 0(r4)
/* 802B0078 002ACFB8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802B007C 002ACFBC  90 04 00 00 */	stw r0, 0(r4)
.L_802B0080:
/* 802B0080 002ACFC0  7F E3 FB 78 */	mr r3, r31
/* 802B0084 002ACFC4  4B E8 08 85 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802B0088 002ACFC8  38 60 00 10 */	li r3, 0x10
/* 802B008C 002ACFCC  4B D7 3E 19 */	bl __nw__FUl
/* 802B0090 002ACFD0  7C 64 1B 79 */	or. r4, r3, r3
/* 802B0094 002ACFD4  41 82 00 40 */	beq .L_802B00D4
/* 802B0098 002ACFD8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802B009C 002ACFDC  3C A0 80 4D */	lis r5, __vt__Q34Game9BombSarai5State@ha
/* 802B00A0 002ACFE0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802B00A4 002ACFE4  3C 60 80 4D */	lis r3, __vt__Q34Game9BombSarai14StateBombFlick@ha
/* 802B00A8 002ACFE8  90 04 00 00 */	stw r0, 0(r4)
/* 802B00AC 002ACFEC  38 00 00 0C */	li r0, 0xc
/* 802B00B0 002ACFF0  38 E0 00 00 */	li r7, 0
/* 802B00B4 002ACFF4  38 C5 E8 38 */	addi r6, r5, __vt__Q34Game9BombSarai5State@l
/* 802B00B8 002ACFF8  90 04 00 04 */	stw r0, 4(r4)
/* 802B00BC 002ACFFC  38 BE 00 50 */	addi r5, r30, 0x50
/* 802B00C0 002AD000  38 03 E6 64 */	addi r0, r3, __vt__Q34Game9BombSarai14StateBombFlick@l
/* 802B00C4 002AD004  90 E4 00 08 */	stw r7, 8(r4)
/* 802B00C8 002AD008  90 C4 00 00 */	stw r6, 0(r4)
/* 802B00CC 002AD00C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802B00D0 002AD010  90 04 00 00 */	stw r0, 0(r4)
.L_802B00D4:
/* 802B00D4 002AD014  7F E3 FB 78 */	mr r3, r31
/* 802B00D8 002AD018  4B E8 08 31 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802B00DC 002AD01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B00E0 002AD020  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B00E4 002AD024  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B00E8 002AD028  7C 08 03 A6 */	mtlr r0
/* 802B00EC 002AD02C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B00F0 002AD030  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai3FSMFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B00F4 002AD034  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B00F8 002AD038  7C 08 02 A6 */	mflr r0
/* 802B00FC 002AD03C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0100 002AD040  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B0104 002AD044  7C 9F 23 78 */	mr r31, r4
/* 802B0108 002AD048  7F E3 FB 78 */	mr r3, r31
/* 802B010C 002AD04C  4B E5 56 15 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802B0110 002AD050  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0114 002AD054  7F E3 FB 78 */	mr r3, r31
/* 802B0118 002AD058  38 80 00 00 */	li r4, 0
/* 802B011C 002AD05C  38 A0 00 00 */	li r5, 0
/* 802B0120 002AD060  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B0124 002AD064  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B0128 002AD068  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B012C 002AD06C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B0130 002AD070  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802B0134 002AD074  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B0138 002AD078  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B013C 002AD07C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802B0140 002AD080  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B0144 002AD084  4B E5 4E C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B0148 002AD088  7F E3 FB 78 */	mr r3, r31
/* 802B014C 002AD08C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0150 002AD090  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802B0154 002AD094  7D 89 03 A6 */	mtctr r12
/* 802B0158 002AD098  4E 80 04 21 */	bctrl 
/* 802B015C 002AD09C  81 83 00 00 */	lwz r12, 0(r3)
/* 802B0160 002AD0A0  38 80 58 EA */	li r4, 0x58ea
/* 802B0164 002AD0A4  38 A0 00 00 */	li r5, 0
/* 802B0168 002AD0A8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802B016C 002AD0AC  7D 89 03 A6 */	mtctr r12
/* 802B0170 002AD0B0  4E 80 04 21 */	bctrl 
/* 802B0174 002AD0B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B0178 002AD0B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B017C 002AD0BC  7C 08 03 A6 */	mtlr r0
/* 802B0180 002AD0C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B0184 002AD0C4  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBase, global
/* 802B0188 002AD0C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B018C 002AD0CC  7C 08 02 A6 */	mflr r0
/* 802B0190 002AD0D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B0194 002AD0D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B0198 002AD0D8  7C 9F 23 78 */	mr r31, r4
/* 802B019C 002AD0DC  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802B01A0 002AD0E0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B01A4 002AD0E4  28 00 00 00 */	cmplwi r0, 0
/* 802B01A8 002AD0E8  41 82 01 00 */	beq .L_802B02A8
/* 802B01AC 002AD0EC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B01B0 002AD0F0  28 00 00 02 */	cmplwi r0, 2
/* 802B01B4 002AD0F4  40 82 00 14 */	bne .L_802B01C8
/* 802B01B8 002AD0F8  7F E3 FB 78 */	mr r3, r31
/* 802B01BC 002AD0FC  38 80 00 00 */	li r4, 0
/* 802B01C0 002AD100  48 00 33 8D */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B01C4 002AD104  48 00 00 E4 */	b .L_802B02A8
.L_802B01C8:
/* 802B01C8 002AD108  28 00 00 03 */	cmplwi r0, 3
/* 802B01CC 002AD10C  40 82 00 14 */	bne .L_802B01E0
/* 802B01D0 002AD110  7F E3 FB 78 */	mr r3, r31
/* 802B01D4 002AD114  38 80 00 01 */	li r4, 1
/* 802B01D8 002AD118  48 00 33 75 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B01DC 002AD11C  48 00 00 CC */	b .L_802B02A8
.L_802B01E0:
/* 802B01E0 002AD120  28 00 00 04 */	cmplwi r0, 4
/* 802B01E4 002AD124  40 82 00 14 */	bne .L_802B01F8
/* 802B01E8 002AD128  7F E3 FB 78 */	mr r3, r31
/* 802B01EC 002AD12C  38 80 00 02 */	li r4, 2
/* 802B01F0 002AD130  48 00 33 5D */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B01F4 002AD134  48 00 00 B4 */	b .L_802B02A8
.L_802B01F8:
/* 802B01F8 002AD138  28 00 00 05 */	cmplwi r0, 5
/* 802B01FC 002AD13C  40 82 00 14 */	bne .L_802B0210
/* 802B0200 002AD140  7F E3 FB 78 */	mr r3, r31
/* 802B0204 002AD144  38 80 00 03 */	li r4, 3
/* 802B0208 002AD148  48 00 33 45 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B020C 002AD14C  48 00 00 9C */	b .L_802B02A8
.L_802B0210:
/* 802B0210 002AD150  28 00 00 06 */	cmplwi r0, 6
/* 802B0214 002AD154  40 82 00 14 */	bne .L_802B0228
/* 802B0218 002AD158  7F E3 FB 78 */	mr r3, r31
/* 802B021C 002AD15C  38 80 00 04 */	li r4, 4
/* 802B0220 002AD160  48 00 33 2D */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B0224 002AD164  48 00 00 84 */	b .L_802B02A8
.L_802B0228:
/* 802B0228 002AD168  28 00 00 07 */	cmplwi r0, 7
/* 802B022C 002AD16C  40 82 00 68 */	bne .L_802B0294
/* 802B0230 002AD170  81 84 00 00 */	lwz r12, 0(r4)
/* 802B0234 002AD174  38 61 00 08 */	addi r3, r1, 8
/* 802B0238 002AD178  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B023C 002AD17C  7D 89 03 A6 */	mtctr r12
/* 802B0240 002AD180  4E 80 04 21 */	bctrl 
/* 802B0244 002AD184  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B0248 002AD188  38 A1 00 14 */	addi r5, r1, 0x14
/* 802B024C 002AD18C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802B0250 002AD190  38 80 00 00 */	li r4, 0
/* 802B0254 002AD194  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B0258 002AD198  38 C0 00 02 */	li r6, 2
/* 802B025C 002AD19C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802B0260 002AD1A0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802B0264 002AD1A4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802B0268 002AD1A8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B026C 002AD1AC  4B FA 1F D1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802B0270 002AD1B0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802B0274 002AD1B4  38 A1 00 14 */	addi r5, r1, 0x14
/* 802B0278 002AD1B8  38 80 00 0B */	li r4, 0xb
/* 802B027C 002AD1BC  38 C0 00 02 */	li r6, 2
/* 802B0280 002AD1C0  4B FA 35 01 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802B0284 002AD1C4  C0 22 DE 14 */	lfs f1, lbl_8051C174@sda21(r2)
/* 802B0288 002AD1C8  7F E3 FB 78 */	mr r3, r31
/* 802B028C 002AD1CC  48 00 33 DD */	bl createDownEffect__Q34Game9BombSarai3ObjFf
/* 802B0290 002AD1D0  48 00 00 18 */	b .L_802B02A8
.L_802B0294:
/* 802B0294 002AD1D4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B0298 002AD1D8  40 82 00 10 */	bne .L_802B02A8
/* 802B029C 002AD1DC  7F E3 FB 78 */	mr r3, r31
/* 802B02A0 002AD1E0  38 80 00 00 */	li r4, 0
/* 802B02A4 002AD1E4  4B E8 AE 4D */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_802B02A8:
/* 802B02A8 002AD1E8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B02AC 002AD1EC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B02B0 002AD1F0  7C 08 03 A6 */	mtlr r0
/* 802B02B4 002AD1F4  38 21 00 30 */	addi r1, r1, 0x30
/* 802B02B8 002AD1F8  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBase, global
/* 802B02BC 002AD1FC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B02C0 002AD200  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B02C4 002AD204  7C 08 02 A6 */	mflr r0
/* 802B02C8 002AD208  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B02CC 002AD20C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B02D0 002AD210  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B02D4 002AD214  7C 9F 23 78 */	mr r31, r4
/* 802B02D8 002AD218  7F E3 FB 78 */	mr r3, r31
/* 802B02DC 002AD21C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802B02E0 002AD220  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B02E4 002AD224  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B02E8 002AD228  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B02EC 002AD22C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802B02F0 002AD230  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802B02F4 002AD234  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802B02F8 002AD238  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B02FC 002AD23C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802B0300 002AD240  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B0304 002AD244  4B E5 16 C9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B0308 002AD248  7F E3 FB 78 */	mr r3, r31
/* 802B030C 002AD24C  38 80 00 04 */	li r4, 4
/* 802B0310 002AD250  38 A0 00 00 */	li r5, 0
/* 802B0314 002AD254  4B E5 4C F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B0318 002AD258  7F E4 FB 78 */	mr r4, r31
/* 802B031C 002AD25C  38 61 00 08 */	addi r3, r1, 8
/* 802B0320 002AD260  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0324 002AD264  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0328 002AD268  7D 89 03 A6 */	mtctr r12
/* 802B032C 002AD26C  4E 80 04 21 */	bctrl 
/* 802B0330 002AD270  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B0334 002AD274  38 A1 00 14 */	addi r5, r1, 0x14
/* 802B0338 002AD278  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802B033C 002AD27C  38 80 00 08 */	li r4, 8
/* 802B0340 002AD280  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B0344 002AD284  38 C0 00 02 */	li r6, 2
/* 802B0348 002AD288  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802B034C 002AD28C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802B0350 002AD290  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802B0354 002AD294  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B0358 002AD298  4B FA 34 29 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802B035C 002AD29C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B0360 002AD2A0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B0364 002AD2A4  7C 08 03 A6 */	mtlr r0
/* 802B0368 002AD2A8  38 21 00 30 */	addi r1, r1, 0x30
/* 802B036C 002AD2AC  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBase, global
/* 802B0370 002AD2B0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B0374 002AD2B4  7C 08 02 A6 */	mflr r0
/* 802B0378 002AD2B8  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B037C 002AD2BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B0380 002AD2C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B0384 002AD2C4  7C 9F 23 78 */	mr r31, r4
/* 802B0388 002AD2C8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802B038C 002AD2CC  7C 7E 1B 78 */	mr r30, r3
/* 802B0390 002AD2D0  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802B0394 002AD2D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0398 002AD2D8  4C 40 13 82 */	cror 2, 0, 2
/* 802B039C 002AD2DC  41 82 00 24 */	beq .L_802B03C0
/* 802B03A0 002AD2E0  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802B03A4 002AD2E4  2C 00 00 00 */	cmpwi r0, 0
/* 802B03A8 002AD2E8  41 82 00 18 */	beq .L_802B03C0
/* 802B03AC 002AD2EC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B03B0 002AD2F0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B03B4 002AD2F4  C0 03 09 5C */	lfs f0, 0x95c(r3)
/* 802B03B8 002AD2F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B03BC 002AD2FC  40 81 00 0C */	ble .L_802B03C8
.L_802B03C0:
/* 802B03C0 002AD300  7F E3 FB 78 */	mr r3, r31
/* 802B03C4 002AD304  4B E5 4E DD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B03C8:
/* 802B03C8 002AD308  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B03CC 002AD30C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B03D0 002AD310  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B03D4 002AD314  EC 01 00 2A */	fadds f0, f1, f0
/* 802B03D8 002AD318  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B03DC 002AD31C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B03E0 002AD320  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B03E4 002AD324  28 00 00 00 */	cmplwi r0, 0
/* 802B03E8 002AD328  41 82 01 24 */	beq .L_802B050C
/* 802B03EC 002AD32C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B03F0 002AD330  28 00 00 02 */	cmplwi r0, 2
/* 802B03F4 002AD334  40 82 00 14 */	bne .L_802B0408
/* 802B03F8 002AD338  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B03FC 002AD33C  64 00 00 20 */	oris r0, r0, 0x20
/* 802B0400 002AD340  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B0404 002AD344  48 00 01 08 */	b .L_802B050C
.L_802B0408:
/* 802B0408 002AD348  28 00 00 03 */	cmplwi r0, 3
/* 802B040C 002AD34C  40 82 00 64 */	bne .L_802B0470
/* 802B0410 002AD350  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B0414 002AD354  7F E3 FB 78 */	mr r3, r31
/* 802B0418 002AD358  C0 22 DE 18 */	lfs f1, lbl_8051C178@sda21(r2)
/* 802B041C 002AD35C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B0420 002AD360  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B0424 002AD364  48 00 32 45 */	bl createDownEffect__Q34Game9BombSarai3ObjFf
/* 802B0428 002AD368  7F E4 FB 78 */	mr r4, r31
/* 802B042C 002AD36C  38 61 00 08 */	addi r3, r1, 8
/* 802B0430 002AD370  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0434 002AD374  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0438 002AD378  7D 89 03 A6 */	mtctr r12
/* 802B043C 002AD37C  4E 80 04 21 */	bctrl 
/* 802B0440 002AD380  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B0444 002AD384  38 A1 00 14 */	addi r5, r1, 0x14
/* 802B0448 002AD388  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802B044C 002AD38C  38 80 00 08 */	li r4, 8
/* 802B0450 002AD390  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B0454 002AD394  38 C0 00 02 */	li r6, 2
/* 802B0458 002AD398  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802B045C 002AD39C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802B0460 002AD3A0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802B0464 002AD3A4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B0468 002AD3A8  4B FA 33 19 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802B046C 002AD3AC  48 00 00 A0 */	b .L_802B050C
.L_802B0470:
/* 802B0470 002AD3B0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B0474 002AD3B4  40 82 00 98 */	bne .L_802B050C
/* 802B0478 002AD3B8  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 802B047C 002AD3BC  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0480 002AD3C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B0484 002AD3C4  4C 40 13 82 */	cror 2, 0, 2
/* 802B0488 002AD3C8  40 82 00 28 */	bne .L_802B04B0
/* 802B048C 002AD3CC  7F C3 F3 78 */	mr r3, r30
/* 802B0490 002AD3D0  7F E4 FB 78 */	mr r4, r31
/* 802B0494 002AD3D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0498 002AD3D8  38 A0 00 00 */	li r5, 0
/* 802B049C 002AD3DC  38 C0 00 00 */	li r6, 0
/* 802B04A0 002AD3E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B04A4 002AD3E4  7D 89 03 A6 */	mtctr r12
/* 802B04A8 002AD3E8  4E 80 04 21 */	bctrl 
/* 802B04AC 002AD3EC  48 00 00 60 */	b .L_802B050C
.L_802B04B0:
/* 802B04B0 002AD3F0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B04B4 002AD3F4  C0 02 DE 1C */	lfs f0, lbl_8051C17C@sda21(r2)
/* 802B04B8 002AD3F8  C0 23 01 04 */	lfs f1, 0x104(r3)
/* 802B04BC 002AD3FC  EC 22 08 24 */	fdivs f1, f2, f1
/* 802B04C0 002AD400  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B04C4 002AD404  40 81 00 28 */	ble .L_802B04EC
/* 802B04C8 002AD408  7F C3 F3 78 */	mr r3, r30
/* 802B04CC 002AD40C  7F E4 FB 78 */	mr r4, r31
/* 802B04D0 002AD410  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B04D4 002AD414  38 A0 00 09 */	li r5, 9
/* 802B04D8 002AD418  38 C0 00 00 */	li r6, 0
/* 802B04DC 002AD41C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B04E0 002AD420  7D 89 03 A6 */	mtctr r12
/* 802B04E4 002AD424  4E 80 04 21 */	bctrl 
/* 802B04E8 002AD428  48 00 00 24 */	b .L_802B050C
.L_802B04EC:
/* 802B04EC 002AD42C  7F C3 F3 78 */	mr r3, r30
/* 802B04F0 002AD430  7F E4 FB 78 */	mr r4, r31
/* 802B04F4 002AD434  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B04F8 002AD438  38 A0 00 0A */	li r5, 0xa
/* 802B04FC 002AD43C  38 C0 00 00 */	li r6, 0
/* 802B0500 002AD440  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0504 002AD444  7D 89 03 A6 */	mtctr r12
/* 802B0508 002AD448  4E 80 04 21 */	bctrl 
.L_802B050C:
/* 802B050C 002AD44C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B0510 002AD450  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B0514 002AD454  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802B0518 002AD458  7C 08 03 A6 */	mtlr r0
/* 802B051C 002AD45C  38 21 00 30 */	addi r1, r1, 0x30
/* 802B0520 002AD460  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBase, global
/* 802B0524 002AD464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B0528 002AD468  7C 08 02 A6 */	mflr r0
/* 802B052C 002AD46C  7C 83 23 78 */	mr r3, r4
/* 802B0530 002AD470  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0534 002AD474  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B0538 002AD478  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B053C 002AD47C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B0540 002AD480  4B E5 14 3D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B0544 002AD484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B0548 002AD488  7C 08 03 A6 */	mtlr r0
/* 802B054C 002AD48C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B0550 002AD490  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai11StateDamageFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B0554 002AD494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B0558 002AD498  7C 08 02 A6 */	mflr r0
/* 802B055C 002AD49C  7C 83 23 78 */	mr r3, r4
/* 802B0560 002AD4A0  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0564 002AD4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0568 002AD4A8  38 00 FF FF */	li r0, -1
/* 802B056C 002AD4AC  38 A0 00 00 */	li r5, 0
/* 802B0570 002AD4B0  80 C4 01 E0 */	lwz r6, 0x1e0(r4)
/* 802B0574 002AD4B4  38 80 00 0C */	li r4, 0xc
/* 802B0578 002AD4B8  60 C6 00 04 */	ori r6, r6, 4
/* 802B057C 002AD4BC  90 C3 01 E0 */	stw r6, 0x1e0(r3)
/* 802B0580 002AD4C0  90 03 02 DC */	stw r0, 0x2dc(r3)
/* 802B0584 002AD4C4  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 802B0588 002AD4C8  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802B058C 002AD4CC  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802B0590 002AD4D0  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802B0594 002AD4D4  4B E5 4A 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B0598 002AD4D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B059C 002AD4DC  7C 08 03 A6 */	mtlr r0
/* 802B05A0 002AD4E0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B05A4 002AD4E4  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBase, global
/* 802B05A8 002AD4E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B05AC 002AD4EC  7C 08 02 A6 */	mflr r0
/* 802B05B0 002AD4F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B05B4 002AD4F4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802B05B8 002AD4F8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802B05BC 002AD4FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B05C0 002AD500  93 C1 00 08 */	stw r30, 8(r1)
/* 802B05C4 002AD504  7C 9F 23 78 */	mr r31, r4
/* 802B05C8 002AD508  7C 7E 1B 78 */	mr r30, r3
/* 802B05CC 002AD50C  38 80 00 00 */	li r4, 0
/* 802B05D0 002AD510  7F E3 FB 78 */	mr r3, r31
/* 802B05D4 002AD514  48 00 27 9D */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B05D8 002AD518  FF E0 08 90 */	fmr f31, f1
/* 802B05DC 002AD51C  7F E3 FB 78 */	mr r3, r31
/* 802B05E0 002AD520  4B E5 6D 21 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802B05E4 002AD524  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B05E8 002AD528  40 82 00 5C */	bne .L_802B0644
/* 802B05EC 002AD52C  7F E3 FB 78 */	mr r3, r31
/* 802B05F0 002AD530  48 00 2C 81 */	bl getAttackablePikmin__Q34Game9BombSarai3ObjFv
/* 802B05F4 002AD534  28 03 00 00 */	cmplwi r3, 0
/* 802B05F8 002AD538  41 82 00 18 */	beq .L_802B0610
/* 802B05FC 002AD53C  38 00 00 06 */	li r0, 6
/* 802B0600 002AD540  7F E3 FB 78 */	mr r3, r31
/* 802B0604 002AD544  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0608 002AD548  4B E5 4C 99 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B060C 002AD54C  48 00 00 38 */	b .L_802B0644
.L_802B0610:
/* 802B0610 002AD550  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B0614 002AD554  C0 5F 02 C4 */	lfs f2, 0x2c4(r31)
/* 802B0618 002AD558  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802B061C 002AD55C  C0 02 DE 20 */	lfs f0, lbl_8051C180@sda21(r2)
/* 802B0620 002AD560  EC 22 08 2A */	fadds f1, f2, f1
/* 802B0624 002AD564  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802B0628 002AD568  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B062C 002AD56C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0630 002AD570  40 81 00 14 */	ble .L_802B0644
/* 802B0634 002AD574  38 00 00 04 */	li r0, 4
/* 802B0638 002AD578  7F E3 FB 78 */	mr r3, r31
/* 802B063C 002AD57C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0640 002AD580  4B E5 4C 61 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B0644:
/* 802B0644 002AD584  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B0648 002AD588  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802B064C 002AD58C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B0650 002AD590  41 81 00 14 */	bgt .L_802B0664
/* 802B0654 002AD594  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0658 002AD598  C0 02 DE 24 */	lfs f0, lbl_8051C184@sda21(r2)
/* 802B065C 002AD59C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0660 002AD5A0  40 81 00 34 */	ble .L_802B0694
.L_802B0664:
/* 802B0664 002AD5A4  7F E3 FB 78 */	mr r3, r31
/* 802B0668 002AD5A8  48 00 2C 79 */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B066C 002AD5AC  7C 65 1B 79 */	or. r5, r3, r3
/* 802B0670 002AD5B0  41 80 00 24 */	blt .L_802B0694
/* 802B0674 002AD5B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0678 002AD5B8  7F C3 F3 78 */	mr r3, r30
/* 802B067C 002AD5BC  7F E4 FB 78 */	mr r4, r31
/* 802B0680 002AD5C0  38 C0 00 00 */	li r6, 0
/* 802B0684 002AD5C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0688 002AD5C8  7D 89 03 A6 */	mtctr r12
/* 802B068C 002AD5CC  4E 80 04 21 */	bctrl 
/* 802B0690 002AD5D0  48 00 00 40 */	b .L_802B06D0
.L_802B0694:
/* 802B0694 002AD5D4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B0698 002AD5D8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B069C 002AD5DC  28 00 00 00 */	cmplwi r0, 0
/* 802B06A0 002AD5E0  41 82 00 30 */	beq .L_802B06D0
/* 802B06A4 002AD5E4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B06A8 002AD5E8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B06AC 002AD5EC  40 82 00 24 */	bne .L_802B06D0
/* 802B06B0 002AD5F0  7F C3 F3 78 */	mr r3, r30
/* 802B06B4 002AD5F4  7F E4 FB 78 */	mr r4, r31
/* 802B06B8 002AD5F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B06BC 002AD5FC  38 C0 00 00 */	li r6, 0
/* 802B06C0 002AD600  80 BF 02 DC */	lwz r5, 0x2dc(r31)
/* 802B06C4 002AD604  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B06C8 002AD608  7D 89 03 A6 */	mtctr r12
/* 802B06CC 002AD60C  4E 80 04 21 */	bctrl 
.L_802B06D0:
/* 802B06D0 002AD610  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802B06D4 002AD614  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B06D8 002AD618  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802B06DC 002AD61C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B06E0 002AD620  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B06E4 002AD624  7C 08 03 A6 */	mtlr r0
/* 802B06E8 002AD628  38 21 00 20 */	addi r1, r1, 0x20
/* 802B06EC 002AD62C  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBase, global
/* 802B06F0 002AD630  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B06F4 002AD634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B06F8 002AD638  7C 08 02 A6 */	mflr r0
/* 802B06FC 002AD63C  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0700 002AD640  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0704 002AD644  38 00 FF FF */	li r0, -1
/* 802B0708 002AD648  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B070C 002AD64C  7C 9F 23 78 */	mr r31, r4
/* 802B0710 002AD650  7F E3 FB 78 */	mr r3, r31
/* 802B0714 002AD654  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802B0718 002AD658  60 84 00 04 */	ori r4, r4, 4
/* 802B071C 002AD65C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B0720 002AD660  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802B0724 002AD664  64 84 00 20 */	oris r4, r4, 0x20
/* 802B0728 002AD668  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B072C 002AD66C  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0730 002AD670  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B0734 002AD674  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B0738 002AD678  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B073C 002AD67C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B0740 002AD680  4B E5 12 8D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B0744 002AD684  7F E3 FB 78 */	mr r3, r31
/* 802B0748 002AD688  38 80 00 0D */	li r4, 0xd
/* 802B074C 002AD68C  38 A0 00 00 */	li r5, 0
/* 802B0750 002AD690  4B E5 48 B5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B0754 002AD694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B0758 002AD698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B075C 002AD69C  7C 08 03 A6 */	mtlr r0
/* 802B0760 002AD6A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B0764 002AD6A4  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase, global
/* 802B0768 002AD6A8  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 802B076C 002AD6AC  7C 08 02 A6 */	mflr r0
/* 802B0770 002AD6B0  90 01 01 24 */	stw r0, 0x124(r1)
/* 802B0774 002AD6B4  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 802B0778 002AD6B8  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 802B077C 002AD6BC  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 802B0780 002AD6C0  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 802B0784 002AD6C4  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 802B0788 002AD6C8  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 802B078C 002AD6CC  DB 81 00 E0 */	stfd f28, 0xe0(r1)
/* 802B0790 002AD6D0  F3 81 00 E8 */	psq_st f28, 232(r1), 0, qr0
/* 802B0794 002AD6D4  DB 61 00 D0 */	stfd f27, 0xd0(r1)
/* 802B0798 002AD6D8  F3 61 00 D8 */	psq_st f27, 216(r1), 0, qr0
/* 802B079C 002AD6DC  DB 41 00 C0 */	stfd f26, 0xc0(r1)
/* 802B07A0 002AD6E0  F3 41 00 C8 */	psq_st f26, 200(r1), 0, qr0
/* 802B07A4 002AD6E4  DB 21 00 B0 */	stfd f25, 0xb0(r1)
/* 802B07A8 002AD6E8  F3 21 00 B8 */	psq_st f25, 184(r1), 0, qr0
/* 802B07AC 002AD6EC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 802B07B0 002AD6F0  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 802B07B4 002AD6F4  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 802B07B8 002AD6F8  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 802B07BC 002AD6FC  7C 9F 23 78 */	mr r31, r4
/* 802B07C0 002AD700  7C 7E 1B 78 */	mr r30, r3
/* 802B07C4 002AD704  38 80 00 00 */	li r4, 0
/* 802B07C8 002AD708  7F E3 FB 78 */	mr r3, r31
/* 802B07CC 002AD70C  48 00 25 A5 */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B07D0 002AD710  FF E0 08 90 */	fmr f31, f1
/* 802B07D4 002AD714  7F E3 FB 78 */	mr r3, r31
/* 802B07D8 002AD718  48 00 2A 99 */	bl getAttackablePikmin__Q34Game9BombSarai3ObjFv
/* 802B07DC 002AD71C  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802B07E0 002AD720  7C 7C 1B 78 */	mr r28, r3
/* 802B07E4 002AD724  C0 02 DE 28 */	lfs f0, lbl_8051C188@sda21(r2)
/* 802B07E8 002AD728  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B07EC 002AD72C  40 81 00 18 */	ble .L_802B0804
/* 802B07F0 002AD730  38 00 00 07 */	li r0, 7
/* 802B07F4 002AD734  7F E3 FB 78 */	mr r3, r31
/* 802B07F8 002AD738  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B07FC 002AD73C  4B E5 4A A5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B0800 002AD740  48 00 02 80 */	b .L_802B0A80
.L_802B0804:
/* 802B0804 002AD744  28 1C 00 00 */	cmplwi r28, 0
/* 802B0808 002AD748  41 82 02 58 */	beq .L_802B0A60
/* 802B080C 002AD74C  7F 84 E3 78 */	mr r4, r28
/* 802B0810 002AD750  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802B0814 002AD754  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B0818 002AD758  38 61 00 68 */	addi r3, r1, 0x68
/* 802B081C 002AD75C  C3 A5 05 8C */	lfs f29, 0x58c(r5)
/* 802B0820 002AD760  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0824 002AD764  C3 C5 05 64 */	lfs f30, 0x564(r5)
/* 802B0828 002AD768  7D 89 03 A6 */	mtctr r12
/* 802B082C 002AD76C  4E 80 04 21 */	bctrl 
/* 802B0830 002AD770  7F E4 FB 78 */	mr r4, r31
/* 802B0834 002AD774  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 802B0838 002AD778  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B083C 002AD77C  38 61 00 74 */	addi r3, r1, 0x74
/* 802B0840 002AD780  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 802B0844 002AD784  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802B0848 002AD788  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B084C 002AD78C  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 802B0850 002AD790  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802B0854 002AD794  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802B0858 002AD798  7D 89 03 A6 */	mtctr r12
/* 802B085C 002AD79C  4E 80 04 21 */	bctrl 
/* 802B0860 002AD7A0  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 802B0864 002AD7A4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802B0868 002AD7A8  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 802B086C 002AD7AC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802B0870 002AD7B0  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802B0874 002AD7B4  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802B0878 002AD7B8  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 802B087C 002AD7BC  EC 21 28 28 */	fsubs f1, f1, f5
/* 802B0880 002AD7C0  EC 40 18 28 */	fsubs f2, f0, f3
/* 802B0884 002AD7C4  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 802B0888 002AD7C8  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 802B088C 002AD7CC  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 802B0890 002AD7D0  4B D8 48 79 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802B0894 002AD7D4  48 16 13 3D */	bl roundAng__Ff
/* 802B0898 002AD7D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B089C 002AD7DC  FF 20 08 90 */	fmr f25, f1
/* 802B08A0 002AD7E0  7F E3 FB 78 */	mr r3, r31
/* 802B08A4 002AD7E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802B08A8 002AD7E8  7D 89 03 A6 */	mtctr r12
/* 802B08AC 002AD7EC  4E 80 04 21 */	bctrl 
/* 802B08B0 002AD7F0  FC 40 08 90 */	fmr f2, f1
/* 802B08B4 002AD7F4  FC 20 C8 90 */	fmr f1, f25
/* 802B08B8 002AD7F8  48 16 13 45 */	bl angDist__Fff
/* 802B08BC 002AD7FC  7F E4 FB 78 */	mr r4, r31
/* 802B08C0 002AD800  FF 60 08 90 */	fmr f27, f1
/* 802B08C4 002AD804  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B08C8 002AD808  38 61 00 14 */	addi r3, r1, 0x14
/* 802B08CC 002AD80C  3B A0 00 00 */	li r29, 0
/* 802B08D0 002AD810  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B08D4 002AD814  7D 89 03 A6 */	mtctr r12
/* 802B08D8 002AD818  4E 80 04 21 */	bctrl 
/* 802B08DC 002AD81C  7F 84 E3 78 */	mr r4, r28
/* 802B08E0 002AD820  38 61 00 08 */	addi r3, r1, 8
/* 802B08E4 002AD824  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B08E8 002AD828  C3 81 00 14 */	lfs f28, 0x14(r1)
/* 802B08EC 002AD82C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B08F0 002AD830  7D 89 03 A6 */	mtctr r12
/* 802B08F4 002AD834  4E 80 04 21 */	bctrl 
/* 802B08F8 002AD838  7F E4 FB 78 */	mr r4, r31
/* 802B08FC 002AD83C  C0 01 00 08 */	lfs f0, 8(r1)
/* 802B0900 002AD840  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0904 002AD844  38 61 00 2C */	addi r3, r1, 0x2c
/* 802B0908 002AD848  EF 20 E0 28 */	fsubs f25, f0, f28
/* 802B090C 002AD84C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0910 002AD850  7D 89 03 A6 */	mtctr r12
/* 802B0914 002AD854  4E 80 04 21 */	bctrl 
/* 802B0918 002AD858  7F 84 E3 78 */	mr r4, r28
/* 802B091C 002AD85C  38 61 00 20 */	addi r3, r1, 0x20
/* 802B0920 002AD860  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B0924 002AD864  C3 81 00 30 */	lfs f28, 0x30(r1)
/* 802B0928 002AD868  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B092C 002AD86C  7D 89 03 A6 */	mtctr r12
/* 802B0930 002AD870  4E 80 04 21 */	bctrl 
/* 802B0934 002AD874  7F E4 FB 78 */	mr r4, r31
/* 802B0938 002AD878  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802B093C 002AD87C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0940 002AD880  38 61 00 44 */	addi r3, r1, 0x44
/* 802B0944 002AD884  EF 40 E0 28 */	fsubs f26, f0, f28
/* 802B0948 002AD888  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B094C 002AD88C  7D 89 03 A6 */	mtctr r12
/* 802B0950 002AD890  4E 80 04 21 */	bctrl 
/* 802B0954 002AD894  7F 84 E3 78 */	mr r4, r28
/* 802B0958 002AD898  38 61 00 38 */	addi r3, r1, 0x38
/* 802B095C 002AD89C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B0960 002AD8A0  C3 81 00 4C */	lfs f28, 0x4c(r1)
/* 802B0964 002AD8A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0968 002AD8A8  7D 89 03 A6 */	mtctr r12
/* 802B096C 002AD8AC  4E 80 04 21 */	bctrl 
/* 802B0970 002AD8B0  EC 3A 06 B2 */	fmuls f1, f26, f26
/* 802B0974 002AD8B4  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 802B0978 002AD8B8  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 802B097C 002AD8BC  EC 42 E0 28 */	fsubs f2, f2, f28
/* 802B0980 002AD8C0  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 802B0984 002AD8C4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802B0988 002AD8C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B098C 002AD8CC  40 80 00 2C */	bge .L_802B09B8
/* 802B0990 002AD8D0  C0 02 DE 30 */	lfs f0, lbl_8051C190@sda21(r2)
/* 802B0994 002AD8D4  FC 40 DA 10 */	fabs f2, f27
/* 802B0998 002AD8D8  C0 22 DE 2C */	lfs f1, lbl_8051C18C@sda21(r2)
/* 802B099C 002AD8DC  EC 00 07 72 */	fmuls f0, f0, f29
/* 802B09A0 002AD8E0  FC 40 10 18 */	frsp f2, f2
/* 802B09A4 002AD8E4  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B09A8 002AD8E8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B09AC 002AD8EC  4C 40 13 82 */	cror 2, 0, 2
/* 802B09B0 002AD8F0  40 82 00 08 */	bne .L_802B09B8
/* 802B09B4 002AD8F4  3B A0 00 01 */	li r29, 1
.L_802B09B8:
/* 802B09B8 002AD8F8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802B09BC 002AD8FC  41 82 00 18 */	beq .L_802B09D4
/* 802B09C0 002AD900  38 00 00 07 */	li r0, 7
/* 802B09C4 002AD904  7F E3 FB 78 */	mr r3, r31
/* 802B09C8 002AD908  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B09CC 002AD90C  4B E5 48 D5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B09D0 002AD910  48 00 00 B0 */	b .L_802B0A80
.L_802B09D4:
/* 802B09D4 002AD914  7F E4 FB 78 */	mr r4, r31
/* 802B09D8 002AD918  38 61 00 8C */	addi r3, r1, 0x8c
/* 802B09DC 002AD91C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B09E0 002AD920  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B09E4 002AD924  7D 89 03 A6 */	mtctr r12
/* 802B09E8 002AD928  4E 80 04 21 */	bctrl 
/* 802B09EC 002AD92C  7F 84 E3 78 */	mr r4, r28
/* 802B09F0 002AD930  38 61 00 80 */	addi r3, r1, 0x80
/* 802B09F4 002AD934  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B09F8 002AD938  C3 21 00 8C */	lfs f25, 0x8c(r1)
/* 802B09FC 002AD93C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0A00 002AD940  C3 41 00 94 */	lfs f26, 0x94(r1)
/* 802B0A04 002AD944  7D 89 03 A6 */	mtctr r12
/* 802B0A08 002AD948  4E 80 04 21 */	bctrl 
/* 802B0A0C 002AD94C  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 802B0A10 002AD950  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 802B0A14 002AD954  EC 5A 00 28 */	fsubs f2, f26, f0
/* 802B0A18 002AD958  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B0A1C 002AD95C  EC 79 08 28 */	fsubs f3, f25, f1
/* 802B0A20 002AD960  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 802B0A24 002AD964  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802B0A28 002AD968  EC 00 00 32 */	fmuls f0, f0, f0
/* 802B0A2C 002AD96C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802B0A30 002AD970  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0A34 002AD974  40 80 00 18 */	bge .L_802B0A4C
/* 802B0A38 002AD978  38 00 00 07 */	li r0, 7
/* 802B0A3C 002AD97C  7F E3 FB 78 */	mr r3, r31
/* 802B0A40 002AD980  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0A44 002AD984  4B E5 48 5D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B0A48 002AD988  48 00 00 38 */	b .L_802B0A80
.L_802B0A4C:
/* 802B0A4C 002AD98C  38 00 00 05 */	li r0, 5
/* 802B0A50 002AD990  7F E3 FB 78 */	mr r3, r31
/* 802B0A54 002AD994  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0A58 002AD998  4B E5 48 49 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B0A5C 002AD99C  48 00 00 24 */	b .L_802B0A80
.L_802B0A60:
/* 802B0A60 002AD9A0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0A64 002AD9A4  C0 02 DE 20 */	lfs f0, lbl_8051C180@sda21(r2)
/* 802B0A68 002AD9A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0A6C 002AD9AC  40 81 00 14 */	ble .L_802B0A80
/* 802B0A70 002AD9B0  38 00 00 05 */	li r0, 5
/* 802B0A74 002AD9B4  7F E3 FB 78 */	mr r3, r31
/* 802B0A78 002AD9B8  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0A7C 002AD9BC  4B E5 48 25 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B0A80:
/* 802B0A80 002AD9C0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B0A84 002AD9C4  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 802B0A88 002AD9C8  41 82 00 28 */	beq .L_802B0AB0
/* 802B0A8C 002AD9CC  7F C3 F3 78 */	mr r3, r30
/* 802B0A90 002AD9D0  7F E4 FB 78 */	mr r4, r31
/* 802B0A94 002AD9D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0A98 002AD9D8  38 A0 00 08 */	li r5, 8
/* 802B0A9C 002AD9DC  38 C0 00 00 */	li r6, 0
/* 802B0AA0 002AD9E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0AA4 002AD9E4  7D 89 03 A6 */	mtctr r12
/* 802B0AA8 002AD9E8  4E 80 04 21 */	bctrl 
/* 802B0AAC 002AD9EC  48 00 00 B8 */	b .L_802B0B64
.L_802B0AB0:
/* 802B0AB0 002AD9F0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B0AB4 002AD9F4  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802B0AB8 002AD9F8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B0ABC 002AD9FC  41 81 00 14 */	bgt .L_802B0AD0
/* 802B0AC0 002ADA00  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0AC4 002ADA04  C0 02 DE 24 */	lfs f0, lbl_8051C184@sda21(r2)
/* 802B0AC8 002ADA08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0ACC 002ADA0C  40 81 00 34 */	ble .L_802B0B00
.L_802B0AD0:
/* 802B0AD0 002ADA10  7F E3 FB 78 */	mr r3, r31
/* 802B0AD4 002ADA14  48 00 28 0D */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B0AD8 002ADA18  7C 65 1B 79 */	or. r5, r3, r3
/* 802B0ADC 002ADA1C  41 80 00 24 */	blt .L_802B0B00
/* 802B0AE0 002ADA20  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0AE4 002ADA24  7F C3 F3 78 */	mr r3, r30
/* 802B0AE8 002ADA28  7F E4 FB 78 */	mr r4, r31
/* 802B0AEC 002ADA2C  38 C0 00 00 */	li r6, 0
/* 802B0AF0 002ADA30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0AF4 002ADA34  7D 89 03 A6 */	mtctr r12
/* 802B0AF8 002ADA38  4E 80 04 21 */	bctrl 
/* 802B0AFC 002ADA3C  48 00 00 68 */	b .L_802B0B64
.L_802B0B00:
/* 802B0B00 002ADA40  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B0B04 002ADA44  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0B08 002ADA48  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B0B0C 002ADA4C  EC 01 00 2A */	fadds f0, f1, f0
/* 802B0B10 002ADA50  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B0B14 002ADA54  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B0B18 002ADA58  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802B0B1C 002ADA5C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B0B20 002ADA60  EC 01 00 2A */	fadds f0, f1, f0
/* 802B0B24 002ADA64  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802B0B28 002ADA68  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B0B2C 002ADA6C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B0B30 002ADA70  28 00 00 00 */	cmplwi r0, 0
/* 802B0B34 002ADA74  41 82 00 30 */	beq .L_802B0B64
/* 802B0B38 002ADA78  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B0B3C 002ADA7C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B0B40 002ADA80  40 82 00 24 */	bne .L_802B0B64
/* 802B0B44 002ADA84  7F C3 F3 78 */	mr r3, r30
/* 802B0B48 002ADA88  7F E4 FB 78 */	mr r4, r31
/* 802B0B4C 002ADA8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0B50 002ADA90  38 C0 00 00 */	li r6, 0
/* 802B0B54 002ADA94  80 BF 02 DC */	lwz r5, 0x2dc(r31)
/* 802B0B58 002ADA98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0B5C 002ADA9C  7D 89 03 A6 */	mtctr r12
/* 802B0B60 002ADAA0  4E 80 04 21 */	bctrl 
.L_802B0B64:
/* 802B0B64 002ADAA4  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 802B0B68 002ADAA8  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 802B0B6C 002ADAAC  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 802B0B70 002ADAB0  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 802B0B74 002ADAB4  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 802B0B78 002ADAB8  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 802B0B7C 002ADABC  E3 81 00 E8 */	psq_l f28, 232(r1), 0, qr0
/* 802B0B80 002ADAC0  CB 81 00 E0 */	lfd f28, 0xe0(r1)
/* 802B0B84 002ADAC4  E3 61 00 D8 */	psq_l f27, 216(r1), 0, qr0
/* 802B0B88 002ADAC8  CB 61 00 D0 */	lfd f27, 0xd0(r1)
/* 802B0B8C 002ADACC  E3 41 00 C8 */	psq_l f26, 200(r1), 0, qr0
/* 802B0B90 002ADAD0  CB 41 00 C0 */	lfd f26, 0xc0(r1)
/* 802B0B94 002ADAD4  E3 21 00 B8 */	psq_l f25, 184(r1), 0, qr0
/* 802B0B98 002ADAD8  CB 21 00 B0 */	lfd f25, 0xb0(r1)
/* 802B0B9C 002ADADC  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 802B0BA0 002ADAE0  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 802B0BA4 002ADAE4  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 802B0BA8 002ADAE8  80 01 01 24 */	lwz r0, 0x124(r1)
/* 802B0BAC 002ADAEC  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 802B0BB0 002ADAF0  7C 08 03 A6 */	mtlr r0
/* 802B0BB4 002ADAF4  38 21 01 20 */	addi r1, r1, 0x120
/* 802B0BB8 002ADAF8  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase, global
/* 802B0BBC 002ADAFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B0BC0 002ADB00  7C 08 02 A6 */	mflr r0
/* 802B0BC4 002ADB04  7C 83 23 78 */	mr r3, r4
/* 802B0BC8 002ADB08  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0BCC 002ADB0C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B0BD0 002ADB10  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B0BD4 002ADB14  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B0BD8 002ADB18  4B E5 0D A5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B0BDC 002ADB1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B0BE0 002ADB20  7C 08 03 A6 */	mtlr r0
/* 802B0BE4 002ADB24  38 21 00 10 */	addi r1, r1, 0x10
/* 802B0BE8 002ADB28  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai13StateBombWaitFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B0BEC 002ADB2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B0BF0 002ADB30  7C 08 02 A6 */	mflr r0
/* 802B0BF4 002ADB34  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0BF8 002ADB38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0BFC 002ADB3C  38 00 FF FF */	li r0, -1
/* 802B0C00 002ADB40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B0C04 002ADB44  7C 9F 23 78 */	mr r31, r4
/* 802B0C08 002ADB48  7F E3 FB 78 */	mr r3, r31
/* 802B0C0C 002ADB4C  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802B0C10 002ADB50  60 84 00 04 */	ori r4, r4, 4
/* 802B0C14 002ADB54  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B0C18 002ADB58  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0C1C 002ADB5C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B0C20 002ADB60  48 00 22 F1 */	bl setRandTarget__Q34Game9BombSarai3ObjFv
/* 802B0C24 002ADB64  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0C28 002ADB68  7F E3 FB 78 */	mr r3, r31
/* 802B0C2C 002ADB6C  38 80 00 06 */	li r4, 6
/* 802B0C30 002ADB70  38 A0 00 00 */	li r5, 0
/* 802B0C34 002ADB74  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B0C38 002ADB78  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B0C3C 002ADB7C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B0C40 002ADB80  4B E5 43 C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B0C44 002ADB84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B0C48 002ADB88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B0C4C 002ADB8C  7C 08 03 A6 */	mtlr r0
/* 802B0C50 002ADB90  38 21 00 10 */	addi r1, r1, 0x10
/* 802B0C54 002ADB94  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBase, global
/* 802B0C58 002ADB98  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B0C5C 002ADB9C  7C 08 02 A6 */	mflr r0
/* 802B0C60 002ADBA0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B0C64 002ADBA4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802B0C68 002ADBA8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802B0C6C 002ADBAC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B0C70 002ADBB0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802B0C74 002ADBB4  7C 9F 23 78 */	mr r31, r4
/* 802B0C78 002ADBB8  7C 7E 1B 78 */	mr r30, r3
/* 802B0C7C 002ADBBC  38 80 00 00 */	li r4, 0
/* 802B0C80 002ADBC0  7F E3 FB 78 */	mr r3, r31
/* 802B0C84 002ADBC4  48 00 20 ED */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B0C88 002ADBC8  FF E0 08 90 */	fmr f31, f1
/* 802B0C8C 002ADBCC  7F E3 FB 78 */	mr r3, r31
/* 802B0C90 002ADBD0  4B E5 66 71 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802B0C94 002ADBD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B0C98 002ADBD8  40 82 00 D0 */	bne .L_802B0D68
/* 802B0C9C 002ADBDC  7F E3 FB 78 */	mr r3, r31
/* 802B0CA0 002ADBE0  48 00 25 D1 */	bl getAttackablePikmin__Q34Game9BombSarai3ObjFv
/* 802B0CA4 002ADBE4  28 03 00 00 */	cmplwi r3, 0
/* 802B0CA8 002ADBE8  41 82 00 18 */	beq .L_802B0CC0
/* 802B0CAC 002ADBEC  38 00 00 06 */	li r0, 6
/* 802B0CB0 002ADBF0  7F E3 FB 78 */	mr r3, r31
/* 802B0CB4 002ADBF4  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0CB8 002ADBF8  4B E5 45 E9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B0CBC 002ADBFC  48 00 00 BC */	b .L_802B0D78
.L_802B0CC0:
/* 802B0CC0 002ADC00  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802B0CC4 002ADC04  7F E4 FB 78 */	mr r4, r31
/* 802B0CC8 002ADC08  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0CCC 002ADC0C  38 61 00 08 */	addi r3, r1, 8
/* 802B0CD0 002ADC10  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 802B0CD4 002ADC14  EC 01 00 2A */	fadds f0, f1, f0
/* 802B0CD8 002ADC18  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B0CDC 002ADC1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0CE0 002ADC20  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0CE4 002ADC24  7D 89 03 A6 */	mtctr r12
/* 802B0CE8 002ADC28  4E 80 04 21 */	bctrl 
/* 802B0CEC 002ADC2C  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 802B0CF0 002ADC30  C0 BF 02 D4 */	lfs f5, 0x2d4(r31)
/* 802B0CF4 002ADC34  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 802B0CF8 002ADC38  C0 02 DE 24 */	lfs f0, lbl_8051C184@sda21(r2)
/* 802B0CFC 002ADC3C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802B0D00 002ADC40  C0 61 00 08 */	lfs f3, 8(r1)
/* 802B0D04 002ADC44  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802B0D08 002ADC48  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802B0D0C 002ADC4C  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 802B0D10 002ADC50  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0D14 002ADC54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0D18 002ADC58  41 81 00 20 */	bgt .L_802B0D38
/* 802B0D1C 002ADC5C  EC 24 28 28 */	fsubs f1, f4, f5
/* 802B0D20 002ADC60  C0 02 DE 34 */	lfs f0, lbl_8051C194@sda21(r2)
/* 802B0D24 002ADC64  EC 43 10 28 */	fsubs f2, f3, f2
/* 802B0D28 002ADC68  EC 21 00 72 */	fmuls f1, f1, f1
/* 802B0D2C 002ADC6C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802B0D30 002ADC70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0D34 002ADC74  40 80 00 14 */	bge .L_802B0D48
.L_802B0D38:
/* 802B0D38 002ADC78  38 00 00 02 */	li r0, 2
/* 802B0D3C 002ADC7C  7F E3 FB 78 */	mr r3, r31
/* 802B0D40 002ADC80  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0D44 002ADC84  4B E5 45 5D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B0D48:
/* 802B0D48 002ADC88  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802B0D4C 002ADC8C  7F E3 FB 78 */	mr r3, r31
/* 802B0D50 002ADC90  38 81 00 14 */	addi r4, r1, 0x14
/* 802B0D54 002ADC94  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802B0D58 002ADC98  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802B0D5C 002ADC9C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802B0D60 002ADCA0  4B E6 48 7D */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 802B0D64 002ADCA4  48 00 00 14 */	b .L_802B0D78
.L_802B0D68:
/* 802B0D68 002ADCA8  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0D6C 002ADCAC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B0D70 002ADCB0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B0D74 002ADCB4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802B0D78:
/* 802B0D78 002ADCB8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B0D7C 002ADCBC  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802B0D80 002ADCC0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B0D84 002ADCC4  41 81 00 14 */	bgt .L_802B0D98
/* 802B0D88 002ADCC8  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B0D8C 002ADCCC  C0 02 DE 24 */	lfs f0, lbl_8051C184@sda21(r2)
/* 802B0D90 002ADCD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0D94 002ADCD4  40 81 00 34 */	ble .L_802B0DC8
.L_802B0D98:
/* 802B0D98 002ADCD8  7F E3 FB 78 */	mr r3, r31
/* 802B0D9C 002ADCDC  48 00 25 45 */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B0DA0 002ADCE0  7C 65 1B 79 */	or. r5, r3, r3
/* 802B0DA4 002ADCE4  41 80 00 24 */	blt .L_802B0DC8
/* 802B0DA8 002ADCE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0DAC 002ADCEC  7F C3 F3 78 */	mr r3, r30
/* 802B0DB0 002ADCF0  7F E4 FB 78 */	mr r4, r31
/* 802B0DB4 002ADCF4  38 C0 00 00 */	li r6, 0
/* 802B0DB8 002ADCF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0DBC 002ADCFC  7D 89 03 A6 */	mtctr r12
/* 802B0DC0 002ADD00  4E 80 04 21 */	bctrl 
/* 802B0DC4 002ADD04  48 00 00 40 */	b .L_802B0E04
.L_802B0DC8:
/* 802B0DC8 002ADD08  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B0DCC 002ADD0C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B0DD0 002ADD10  28 00 00 00 */	cmplwi r0, 0
/* 802B0DD4 002ADD14  41 82 00 30 */	beq .L_802B0E04
/* 802B0DD8 002ADD18  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B0DDC 002ADD1C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B0DE0 002ADD20  40 82 00 24 */	bne .L_802B0E04
/* 802B0DE4 002ADD24  7F C3 F3 78 */	mr r3, r30
/* 802B0DE8 002ADD28  7F E4 FB 78 */	mr r4, r31
/* 802B0DEC 002ADD2C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B0DF0 002ADD30  38 C0 00 00 */	li r6, 0
/* 802B0DF4 002ADD34  80 BF 02 DC */	lwz r5, 0x2dc(r31)
/* 802B0DF8 002ADD38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B0DFC 002ADD3C  7D 89 03 A6 */	mtctr r12
/* 802B0E00 002ADD40  4E 80 04 21 */	bctrl 
.L_802B0E04:
/* 802B0E04 002ADD44  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802B0E08 002ADD48  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B0E0C 002ADD4C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802B0E10 002ADD50  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B0E14 002ADD54  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802B0E18 002ADD58  7C 08 03 A6 */	mtlr r0
/* 802B0E1C 002ADD5C  38 21 00 40 */	addi r1, r1, 0x40
/* 802B0E20 002ADD60  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBase, global
/* 802B0E24 002ADD64  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B0E28 002ADD68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B0E2C 002ADD6C  7C 08 02 A6 */	mflr r0
/* 802B0E30 002ADD70  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0E34 002ADD74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B0E38 002ADD78  38 00 FF FF */	li r0, -1
/* 802B0E3C 002ADD7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B0E40 002ADD80  7C 9F 23 78 */	mr r31, r4
/* 802B0E44 002ADD84  7F E3 FB 78 */	mr r3, r31
/* 802B0E48 002ADD88  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802B0E4C 002ADD8C  60 84 00 04 */	ori r4, r4, 4
/* 802B0E50 002ADD90  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B0E54 002ADD94  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802B0E58 002ADD98  64 84 00 20 */	oris r4, r4, 0x20
/* 802B0E5C 002ADD9C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B0E60 002ADDA0  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0E64 002ADDA4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B0E68 002ADDA8  48 00 20 A9 */	bl setRandTarget__Q34Game9BombSarai3ObjFv
/* 802B0E6C 002ADDAC  7F E3 FB 78 */	mr r3, r31
/* 802B0E70 002ADDB0  4B E5 0B 5D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B0E74 002ADDB4  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B0E78 002ADDB8  7F E3 FB 78 */	mr r3, r31
/* 802B0E7C 002ADDBC  38 80 00 07 */	li r4, 7
/* 802B0E80 002ADDC0  38 A0 00 00 */	li r5, 0
/* 802B0E84 002ADDC4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B0E88 002ADDC8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B0E8C 002ADDCC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B0E90 002ADDD0  4B E5 41 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B0E94 002ADDD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B0E98 002ADDD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B0E9C 002ADDDC  7C 08 03 A6 */	mtlr r0
/* 802B0EA0 002ADDE0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B0EA4 002ADDE4  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBase, global
/* 802B0EA8 002ADDE8  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 802B0EAC 002ADDEC  7C 08 02 A6 */	mflr r0
/* 802B0EB0 002ADDF0  90 01 01 54 */	stw r0, 0x154(r1)
/* 802B0EB4 002ADDF4  DB E1 01 40 */	stfd f31, 0x140(r1)
/* 802B0EB8 002ADDF8  F3 E1 01 48 */	psq_st f31, 328(r1), 0, qr0
/* 802B0EBC 002ADDFC  DB C1 01 30 */	stfd f30, 0x130(r1)
/* 802B0EC0 002ADE00  F3 C1 01 38 */	psq_st f30, 312(r1), 0, qr0
/* 802B0EC4 002ADE04  DB A1 01 20 */	stfd f29, 0x120(r1)
/* 802B0EC8 002ADE08  F3 A1 01 28 */	psq_st f29, 296(r1), 0, qr0
/* 802B0ECC 002ADE0C  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 802B0ED0 002ADE10  F3 81 01 18 */	psq_st f28, 280(r1), 0, qr0
/* 802B0ED4 002ADE14  DB 61 01 00 */	stfd f27, 0x100(r1)
/* 802B0ED8 002ADE18  F3 61 01 08 */	psq_st f27, 264(r1), 0, qr0
/* 802B0EDC 002ADE1C  DB 41 00 F0 */	stfd f26, 0xf0(r1)
/* 802B0EE0 002ADE20  F3 41 00 F8 */	psq_st f26, 248(r1), 0, qr0
/* 802B0EE4 002ADE24  DB 21 00 E0 */	stfd f25, 0xe0(r1)
/* 802B0EE8 002ADE28  F3 21 00 E8 */	psq_st f25, 232(r1), 0, qr0
/* 802B0EEC 002ADE2C  DB 01 00 D0 */	stfd f24, 0xd0(r1)
/* 802B0EF0 002ADE30  F3 01 00 D8 */	psq_st f24, 216(r1), 0, qr0
/* 802B0EF4 002ADE34  DA E1 00 C0 */	stfd f23, 0xc0(r1)
/* 802B0EF8 002ADE38  F2 E1 00 C8 */	psq_st f23, 200(r1), 0, qr0
/* 802B0EFC 002ADE3C  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 802B0F00 002ADE40  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 802B0F04 002ADE44  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 802B0F08 002ADE48  93 81 00 B0 */	stw r28, 0xb0(r1)
/* 802B0F0C 002ADE4C  7C 9F 23 78 */	mr r31, r4
/* 802B0F10 002ADE50  7C 7E 1B 78 */	mr r30, r3
/* 802B0F14 002ADE54  38 80 00 00 */	li r4, 0
/* 802B0F18 002ADE58  7F E3 FB 78 */	mr r3, r31
/* 802B0F1C 002ADE5C  48 00 1E 55 */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B0F20 002ADE60  FF E0 08 90 */	fmr f31, f1
/* 802B0F24 002ADE64  7F E3 FB 78 */	mr r3, r31
/* 802B0F28 002ADE68  48 00 23 49 */	bl getAttackablePikmin__Q34Game9BombSarai3ObjFv
/* 802B0F2C 002ADE6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0F30 002ADE70  7C 7C 1B 78 */	mr r28, r3
/* 802B0F34 002ADE74  7F E4 FB 78 */	mr r4, r31
/* 802B0F38 002ADE78  38 61 00 8C */	addi r3, r1, 0x8c
/* 802B0F3C 002ADE7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0F40 002ADE80  7D 89 03 A6 */	mtctr r12
/* 802B0F44 002ADE84  4E 80 04 21 */	bctrl 
/* 802B0F48 002ADE88  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802B0F4C 002ADE8C  C0 02 DE 28 */	lfs f0, lbl_8051C188@sda21(r2)
/* 802B0F50 002ADE90  C3 81 00 8C */	lfs f28, 0x8c(r1)
/* 802B0F54 002ADE94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B0F58 002ADE98  C3 61 00 94 */	lfs f27, 0x94(r1)
/* 802B0F5C 002ADE9C  40 81 00 18 */	ble .L_802B0F74
/* 802B0F60 002ADEA0  38 00 00 07 */	li r0, 7
/* 802B0F64 002ADEA4  7F E3 FB 78 */	mr r3, r31
/* 802B0F68 002ADEA8  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B0F6C 002ADEAC  4B E5 43 35 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B0F70 002ADEB0  48 00 02 90 */	b .L_802B1200
.L_802B0F74:
/* 802B0F74 002ADEB4  28 1C 00 00 */	cmplwi r28, 0
/* 802B0F78 002ADEB8  41 82 02 34 */	beq .L_802B11AC
/* 802B0F7C 002ADEBC  7F 84 E3 78 */	mr r4, r28
/* 802B0F80 002ADEC0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802B0F84 002ADEC4  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B0F88 002ADEC8  38 61 00 68 */	addi r3, r1, 0x68
/* 802B0F8C 002ADECC  C3 A5 05 8C */	lfs f29, 0x58c(r5)
/* 802B0F90 002ADED0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0F94 002ADED4  C3 C5 05 64 */	lfs f30, 0x564(r5)
/* 802B0F98 002ADED8  7D 89 03 A6 */	mtctr r12
/* 802B0F9C 002ADEDC  4E 80 04 21 */	bctrl 
/* 802B0FA0 002ADEE0  7F E4 FB 78 */	mr r4, r31
/* 802B0FA4 002ADEE4  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 802B0FA8 002ADEE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B0FAC 002ADEEC  38 61 00 74 */	addi r3, r1, 0x74
/* 802B0FB0 002ADEF0  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 802B0FB4 002ADEF4  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 802B0FB8 002ADEF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B0FBC 002ADEFC  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 802B0FC0 002ADF00  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 802B0FC4 002ADF04  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 802B0FC8 002ADF08  7D 89 03 A6 */	mtctr r12
/* 802B0FCC 002ADF0C  4E 80 04 21 */	bctrl 
/* 802B0FD0 002ADF10  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 802B0FD4 002ADF14  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802B0FD8 002ADF18  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 802B0FDC 002ADF1C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802B0FE0 002ADF20  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 802B0FE4 002ADF24  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 802B0FE8 002ADF28  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 802B0FEC 002ADF2C  EC 21 28 28 */	fsubs f1, f1, f5
/* 802B0FF0 002ADF30  EC 40 18 28 */	fsubs f2, f0, f3
/* 802B0FF4 002ADF34  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 802B0FF8 002ADF38  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 802B0FFC 002ADF3C  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 802B1000 002ADF40  4B D8 41 09 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802B1004 002ADF44  48 16 0B CD */	bl roundAng__Ff
/* 802B1008 002ADF48  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B100C 002ADF4C  FE E0 08 90 */	fmr f23, f1
/* 802B1010 002ADF50  7F E3 FB 78 */	mr r3, r31
/* 802B1014 002ADF54  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802B1018 002ADF58  7D 89 03 A6 */	mtctr r12
/* 802B101C 002ADF5C  4E 80 04 21 */	bctrl 
/* 802B1020 002ADF60  FC 40 08 90 */	fmr f2, f1
/* 802B1024 002ADF64  FC 20 B8 90 */	fmr f1, f23
/* 802B1028 002ADF68  48 16 0B D5 */	bl angDist__Fff
/* 802B102C 002ADF6C  7F E4 FB 78 */	mr r4, r31
/* 802B1030 002ADF70  FF 20 08 90 */	fmr f25, f1
/* 802B1034 002ADF74  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B1038 002ADF78  38 61 00 14 */	addi r3, r1, 0x14
/* 802B103C 002ADF7C  3B A0 00 00 */	li r29, 0
/* 802B1040 002ADF80  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B1044 002ADF84  7D 89 03 A6 */	mtctr r12
/* 802B1048 002ADF88  4E 80 04 21 */	bctrl 
/* 802B104C 002ADF8C  7F 84 E3 78 */	mr r4, r28
/* 802B1050 002ADF90  38 61 00 08 */	addi r3, r1, 8
/* 802B1054 002ADF94  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B1058 002ADF98  C3 41 00 14 */	lfs f26, 0x14(r1)
/* 802B105C 002ADF9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B1060 002ADFA0  7D 89 03 A6 */	mtctr r12
/* 802B1064 002ADFA4  4E 80 04 21 */	bctrl 
/* 802B1068 002ADFA8  7F E4 FB 78 */	mr r4, r31
/* 802B106C 002ADFAC  C0 01 00 08 */	lfs f0, 8(r1)
/* 802B1070 002ADFB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B1074 002ADFB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802B1078 002ADFB8  EE E0 D0 28 */	fsubs f23, f0, f26
/* 802B107C 002ADFBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B1080 002ADFC0  7D 89 03 A6 */	mtctr r12
/* 802B1084 002ADFC4  4E 80 04 21 */	bctrl 
/* 802B1088 002ADFC8  7F 84 E3 78 */	mr r4, r28
/* 802B108C 002ADFCC  38 61 00 20 */	addi r3, r1, 0x20
/* 802B1090 002ADFD0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B1094 002ADFD4  C3 41 00 30 */	lfs f26, 0x30(r1)
/* 802B1098 002ADFD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B109C 002ADFDC  7D 89 03 A6 */	mtctr r12
/* 802B10A0 002ADFE0  4E 80 04 21 */	bctrl 
/* 802B10A4 002ADFE4  7F E4 FB 78 */	mr r4, r31
/* 802B10A8 002ADFE8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802B10AC 002ADFEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B10B0 002ADFF0  38 61 00 44 */	addi r3, r1, 0x44
/* 802B10B4 002ADFF4  EF 00 D0 28 */	fsubs f24, f0, f26
/* 802B10B8 002ADFF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B10BC 002ADFFC  7D 89 03 A6 */	mtctr r12
/* 802B10C0 002AE000  4E 80 04 21 */	bctrl 
/* 802B10C4 002AE004  7F 84 E3 78 */	mr r4, r28
/* 802B10C8 002AE008  38 61 00 38 */	addi r3, r1, 0x38
/* 802B10CC 002AE00C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B10D0 002AE010  C3 41 00 4C */	lfs f26, 0x4c(r1)
/* 802B10D4 002AE014  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B10D8 002AE018  7D 89 03 A6 */	mtctr r12
/* 802B10DC 002AE01C  4E 80 04 21 */	bctrl 
/* 802B10E0 002AE020  EC 38 06 32 */	fmuls f1, f24, f24
/* 802B10E4 002AE024  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 802B10E8 002AE028  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 802B10EC 002AE02C  EC 42 D0 28 */	fsubs f2, f2, f26
/* 802B10F0 002AE030  EC 37 0D FA */	fmadds f1, f23, f23, f1
/* 802B10F4 002AE034  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802B10F8 002AE038  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B10FC 002AE03C  40 80 00 2C */	bge .L_802B1128
/* 802B1100 002AE040  C0 02 DE 30 */	lfs f0, lbl_8051C190@sda21(r2)
/* 802B1104 002AE044  FC 40 CA 10 */	fabs f2, f25
/* 802B1108 002AE048  C0 22 DE 2C */	lfs f1, lbl_8051C18C@sda21(r2)
/* 802B110C 002AE04C  EC 00 07 72 */	fmuls f0, f0, f29
/* 802B1110 002AE050  FC 40 10 18 */	frsp f2, f2
/* 802B1114 002AE054  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B1118 002AE058  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B111C 002AE05C  4C 40 13 82 */	cror 2, 0, 2
/* 802B1120 002AE060  40 82 00 08 */	bne .L_802B1128
/* 802B1124 002AE064  3B A0 00 01 */	li r29, 1
.L_802B1128:
/* 802B1128 002AE068  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802B112C 002AE06C  41 82 00 18 */	beq .L_802B1144
/* 802B1130 002AE070  38 00 00 07 */	li r0, 7
/* 802B1134 002AE074  7F E3 FB 78 */	mr r3, r31
/* 802B1138 002AE078  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B113C 002AE07C  4B E5 41 65 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B1140 002AE080  48 00 00 C0 */	b .L_802B1200
.L_802B1144:
/* 802B1144 002AE084  7F 84 E3 78 */	mr r4, r28
/* 802B1148 002AE088  38 61 00 80 */	addi r3, r1, 0x80
/* 802B114C 002AE08C  81 9C 00 00 */	lwz r12, 0(r28)
/* 802B1150 002AE090  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B1154 002AE094  7D 89 03 A6 */	mtctr r12
/* 802B1158 002AE098  4E 80 04 21 */	bctrl 
/* 802B115C 002AE09C  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 802B1160 002AE0A0  C0 21 00 88 */	lfs f1, 0x88(r1)
/* 802B1164 002AE0A4  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 802B1168 002AE0A8  EC 9C 10 28 */	fsubs f4, f28, f2
/* 802B116C 002AE0AC  EC 7B 08 28 */	fsubs f3, f27, f1
/* 802B1170 002AE0B0  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 802B1174 002AE0B4  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 802B1178 002AE0B8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 802B117C 002AE0BC  D0 21 00 A0 */	stfs f1, 0xa0(r1)
/* 802B1180 002AE0C0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B1184 002AE0C4  EC 24 01 3A */	fmadds f1, f4, f4, f0
/* 802B1188 002AE0C8  C0 03 05 B4 */	lfs f0, 0x5b4(r3)
/* 802B118C 002AE0CC  EC 00 00 32 */	fmuls f0, f0, f0
/* 802B1190 002AE0D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1194 002AE0D4  40 80 00 6C */	bge .L_802B1200
/* 802B1198 002AE0D8  38 00 00 07 */	li r0, 7
/* 802B119C 002AE0DC  7F E3 FB 78 */	mr r3, r31
/* 802B11A0 002AE0E0  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B11A4 002AE0E4  4B E5 40 FD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802B11A8 002AE0E8  48 00 00 58 */	b .L_802B1200
.L_802B11AC:
/* 802B11AC 002AE0EC  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 802B11B0 002AE0F0  C0 7F 02 D4 */	lfs f3, 0x2d4(r31)
/* 802B11B4 002AE0F4  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 802B11B8 002AE0F8  C0 02 DE 24 */	lfs f0, lbl_8051C184@sda21(r2)
/* 802B11BC 002AE0FC  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 802B11C0 002AE100  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 802B11C4 002AE104  D0 61 00 A0 */	stfs f3, 0xa0(r1)
/* 802B11C8 002AE108  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B11CC 002AE10C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B11D0 002AE110  41 81 00 20 */	bgt .L_802B11F0
/* 802B11D4 002AE114  EC 3B 18 28 */	fsubs f1, f27, f3
/* 802B11D8 002AE118  C0 02 DE 34 */	lfs f0, lbl_8051C194@sda21(r2)
/* 802B11DC 002AE11C  EC 5C 10 28 */	fsubs f2, f28, f2
/* 802B11E0 002AE120  EC 21 00 72 */	fmuls f1, f1, f1
/* 802B11E4 002AE124  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802B11E8 002AE128  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B11EC 002AE12C  40 80 00 14 */	bge .L_802B1200
.L_802B11F0:
/* 802B11F0 002AE130  38 00 00 05 */	li r0, 5
/* 802B11F4 002AE134  7F E3 FB 78 */	mr r3, r31
/* 802B11F8 002AE138  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B11FC 002AE13C  4B E5 40 A5 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B1200:
/* 802B1200 002AE140  7F E3 FB 78 */	mr r3, r31
/* 802B1204 002AE144  4B E5 60 FD */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802B1208 002AE148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B120C 002AE14C  41 82 00 18 */	beq .L_802B1224
/* 802B1210 002AE150  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1214 002AE154  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B1218 002AE158  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B121C 002AE15C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B1220 002AE160  48 00 00 20 */	b .L_802B1240
.L_802B1224:
/* 802B1224 002AE164  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802B1228 002AE168  7F E3 FB 78 */	mr r3, r31
/* 802B122C 002AE16C  38 81 00 98 */	addi r4, r1, 0x98
/* 802B1230 002AE170  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802B1234 002AE174  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802B1238 002AE178  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802B123C 002AE17C  4B E6 43 A1 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_802B1240:
/* 802B1240 002AE180  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B1244 002AE184  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 802B1248 002AE188  41 82 00 28 */	beq .L_802B1270
/* 802B124C 002AE18C  7F C3 F3 78 */	mr r3, r30
/* 802B1250 002AE190  7F E4 FB 78 */	mr r4, r31
/* 802B1254 002AE194  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1258 002AE198  38 A0 00 08 */	li r5, 8
/* 802B125C 002AE19C  38 C0 00 00 */	li r6, 0
/* 802B1260 002AE1A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1264 002AE1A4  7D 89 03 A6 */	mtctr r12
/* 802B1268 002AE1A8  4E 80 04 21 */	bctrl 
/* 802B126C 002AE1AC  48 00 00 B8 */	b .L_802B1324
.L_802B1270:
/* 802B1270 002AE1B0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B1274 002AE1B4  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802B1278 002AE1B8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B127C 002AE1BC  41 81 00 14 */	bgt .L_802B1290
/* 802B1280 002AE1C0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B1284 002AE1C4  C0 02 DE 24 */	lfs f0, lbl_8051C184@sda21(r2)
/* 802B1288 002AE1C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B128C 002AE1CC  40 81 00 34 */	ble .L_802B12C0
.L_802B1290:
/* 802B1290 002AE1D0  7F E3 FB 78 */	mr r3, r31
/* 802B1294 002AE1D4  48 00 20 4D */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B1298 002AE1D8  7C 65 1B 79 */	or. r5, r3, r3
/* 802B129C 002AE1DC  41 80 00 24 */	blt .L_802B12C0
/* 802B12A0 002AE1E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B12A4 002AE1E4  7F C3 F3 78 */	mr r3, r30
/* 802B12A8 002AE1E8  7F E4 FB 78 */	mr r4, r31
/* 802B12AC 002AE1EC  38 C0 00 00 */	li r6, 0
/* 802B12B0 002AE1F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B12B4 002AE1F4  7D 89 03 A6 */	mtctr r12
/* 802B12B8 002AE1F8  4E 80 04 21 */	bctrl 
/* 802B12BC 002AE1FC  48 00 00 68 */	b .L_802B1324
.L_802B12C0:
/* 802B12C0 002AE200  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B12C4 002AE204  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B12C8 002AE208  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B12CC 002AE20C  EC 01 00 2A */	fadds f0, f1, f0
/* 802B12D0 002AE210  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B12D4 002AE214  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B12D8 002AE218  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802B12DC 002AE21C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B12E0 002AE220  EC 01 00 2A */	fadds f0, f1, f0
/* 802B12E4 002AE224  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802B12E8 002AE228  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B12EC 002AE22C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B12F0 002AE230  28 00 00 00 */	cmplwi r0, 0
/* 802B12F4 002AE234  41 82 00 30 */	beq .L_802B1324
/* 802B12F8 002AE238  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B12FC 002AE23C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B1300 002AE240  40 82 00 24 */	bne .L_802B1324
/* 802B1304 002AE244  7F C3 F3 78 */	mr r3, r30
/* 802B1308 002AE248  7F E4 FB 78 */	mr r4, r31
/* 802B130C 002AE24C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1310 002AE250  38 C0 00 00 */	li r6, 0
/* 802B1314 002AE254  80 BF 02 DC */	lwz r5, 0x2dc(r31)
/* 802B1318 002AE258  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B131C 002AE25C  7D 89 03 A6 */	mtctr r12
/* 802B1320 002AE260  4E 80 04 21 */	bctrl 
.L_802B1324:
/* 802B1324 002AE264  E3 E1 01 48 */	psq_l f31, 328(r1), 0, qr0
/* 802B1328 002AE268  CB E1 01 40 */	lfd f31, 0x140(r1)
/* 802B132C 002AE26C  E3 C1 01 38 */	psq_l f30, 312(r1), 0, qr0
/* 802B1330 002AE270  CB C1 01 30 */	lfd f30, 0x130(r1)
/* 802B1334 002AE274  E3 A1 01 28 */	psq_l f29, 296(r1), 0, qr0
/* 802B1338 002AE278  CB A1 01 20 */	lfd f29, 0x120(r1)
/* 802B133C 002AE27C  E3 81 01 18 */	psq_l f28, 280(r1), 0, qr0
/* 802B1340 002AE280  CB 81 01 10 */	lfd f28, 0x110(r1)
/* 802B1344 002AE284  E3 61 01 08 */	psq_l f27, 264(r1), 0, qr0
/* 802B1348 002AE288  CB 61 01 00 */	lfd f27, 0x100(r1)
/* 802B134C 002AE28C  E3 41 00 F8 */	psq_l f26, 248(r1), 0, qr0
/* 802B1350 002AE290  CB 41 00 F0 */	lfd f26, 0xf0(r1)
/* 802B1354 002AE294  E3 21 00 E8 */	psq_l f25, 232(r1), 0, qr0
/* 802B1358 002AE298  CB 21 00 E0 */	lfd f25, 0xe0(r1)
/* 802B135C 002AE29C  E3 01 00 D8 */	psq_l f24, 216(r1), 0, qr0
/* 802B1360 002AE2A0  CB 01 00 D0 */	lfd f24, 0xd0(r1)
/* 802B1364 002AE2A4  E2 E1 00 C8 */	psq_l f23, 200(r1), 0, qr0
/* 802B1368 002AE2A8  CA E1 00 C0 */	lfd f23, 0xc0(r1)
/* 802B136C 002AE2AC  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 802B1370 002AE2B0  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 802B1374 002AE2B4  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 802B1378 002AE2B8  80 01 01 54 */	lwz r0, 0x154(r1)
/* 802B137C 002AE2BC  83 81 00 B0 */	lwz r28, 0xb0(r1)
/* 802B1380 002AE2C0  7C 08 03 A6 */	mtlr r0
/* 802B1384 002AE2C4  38 21 01 50 */	addi r1, r1, 0x150
/* 802B1388 002AE2C8  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBase, global
/* 802B138C 002AE2CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1390 002AE2D0  7C 08 02 A6 */	mflr r0
/* 802B1394 002AE2D4  7C 83 23 78 */	mr r3, r4
/* 802B1398 002AE2D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B139C 002AE2DC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B13A0 002AE2E0  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B13A4 002AE2E4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B13A8 002AE2E8  4B E5 05 D5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B13AC 002AE2EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B13B0 002AE2F0  7C 08 03 A6 */	mtlr r0
/* 802B13B4 002AE2F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B13B8 002AE2F8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai13StateBombMoveFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B13BC 002AE2FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B13C0 002AE300  7C 08 02 A6 */	mflr r0
/* 802B13C4 002AE304  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B13C8 002AE308  38 00 FF FF */	li r0, -1
/* 802B13CC 002AE30C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B13D0 002AE310  7C 9F 23 78 */	mr r31, r4
/* 802B13D4 002AE314  7F E3 FB 78 */	mr r3, r31
/* 802B13D8 002AE318  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802B13DC 002AE31C  60 84 00 04 */	ori r4, r4, 4
/* 802B13E0 002AE320  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B13E4 002AE324  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802B13E8 002AE328  64 84 00 20 */	oris r4, r4, 0x20
/* 802B13EC 002AE32C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B13F0 002AE330  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B13F4 002AE334  48 00 1D 3D */	bl supplyBomb__Q34Game9BombSarai3ObjFv
/* 802B13F8 002AE338  7F E3 FB 78 */	mr r3, r31
/* 802B13FC 002AE33C  4B E5 05 D1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B1400 002AE340  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1404 002AE344  7F E3 FB 78 */	mr r3, r31
/* 802B1408 002AE348  38 80 00 08 */	li r4, 8
/* 802B140C 002AE34C  38 A0 00 00 */	li r5, 0
/* 802B1410 002AE350  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B1414 002AE354  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B1418 002AE358  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B141C 002AE35C  4B E5 3B E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B1420 002AE360  7F E3 FB 78 */	mr r3, r31
/* 802B1424 002AE364  48 00 20 F5 */	bl createSupliEffect__Q34Game9BombSarai3ObjFv
/* 802B1428 002AE368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B142C 002AE36C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1430 002AE370  7C 08 03 A6 */	mtlr r0
/* 802B1434 002AE374  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1438 002AE378  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBase, global
/* 802B143C 002AE37C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1440 002AE380  7C 08 02 A6 */	mflr r0
/* 802B1444 002AE384  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1448 002AE388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B144C 002AE38C  7C 9F 23 78 */	mr r31, r4
/* 802B1450 002AE390  38 80 00 00 */	li r4, 0
/* 802B1454 002AE394  93 C1 00 08 */	stw r30, 8(r1)
/* 802B1458 002AE398  7C 7E 1B 78 */	mr r30, r3
/* 802B145C 002AE39C  7F E3 FB 78 */	mr r3, r31
/* 802B1460 002AE3A0  48 00 19 11 */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B1464 002AE3A4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B1468 002AE3A8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B146C 002AE3AC  28 00 00 00 */	cmplwi r0, 0
/* 802B1470 002AE3B0  41 82 00 60 */	beq .L_802B14D0
/* 802B1474 002AE3B4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B1478 002AE3B8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B147C 002AE3BC  40 82 00 54 */	bne .L_802B14D0
/* 802B1480 002AE3C0  7F E3 FB 78 */	mr r3, r31
/* 802B1484 002AE3C4  48 00 1E 5D */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B1488 002AE3C8  7C 65 1B 79 */	or. r5, r3, r3
/* 802B148C 002AE3CC  41 80 00 24 */	blt .L_802B14B0
/* 802B1490 002AE3D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1494 002AE3D4  7F C3 F3 78 */	mr r3, r30
/* 802B1498 002AE3D8  7F E4 FB 78 */	mr r4, r31
/* 802B149C 002AE3DC  38 C0 00 00 */	li r6, 0
/* 802B14A0 002AE3E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B14A4 002AE3E4  7D 89 03 A6 */	mtctr r12
/* 802B14A8 002AE3E8  4E 80 04 21 */	bctrl 
/* 802B14AC 002AE3EC  48 00 00 24 */	b .L_802B14D0
.L_802B14B0:
/* 802B14B0 002AE3F0  7F C3 F3 78 */	mr r3, r30
/* 802B14B4 002AE3F4  7F E4 FB 78 */	mr r4, r31
/* 802B14B8 002AE3F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B14BC 002AE3FC  38 A0 00 05 */	li r5, 5
/* 802B14C0 002AE400  38 C0 00 00 */	li r6, 0
/* 802B14C4 002AE404  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B14C8 002AE408  7D 89 03 A6 */	mtctr r12
/* 802B14CC 002AE40C  4E 80 04 21 */	bctrl 
.L_802B14D0:
/* 802B14D0 002AE410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B14D4 002AE414  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B14D8 002AE418  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B14DC 002AE41C  7C 08 03 A6 */	mtlr r0
/* 802B14E0 002AE420  38 21 00 10 */	addi r1, r1, 0x10
/* 802B14E4 002AE424  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBase, global
/* 802B14E8 002AE428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B14EC 002AE42C  7C 08 02 A6 */	mflr r0
/* 802B14F0 002AE430  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B14F4 002AE434  7C 83 23 78 */	mr r3, r4
/* 802B14F8 002AE438  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B14FC 002AE43C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1500 002AE440  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B1504 002AE444  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1508 002AE448  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802B150C 002AE44C  4B E5 04 71 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B1510 002AE450  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1514 002AE454  7C 08 03 A6 */	mtlr r0
/* 802B1518 002AE458  38 21 00 10 */	addi r1, r1, 0x10
/* 802B151C 002AE45C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai11StateSupplyFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B1520 002AE460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1524 002AE464  7C 08 02 A6 */	mflr r0
/* 802B1528 002AE468  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B152C 002AE46C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1530 002AE470  38 00 FF FF */	li r0, -1
/* 802B1534 002AE474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1538 002AE478  7C 9F 23 78 */	mr r31, r4
/* 802B153C 002AE47C  7F E3 FB 78 */	mr r3, r31
/* 802B1540 002AE480  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802B1544 002AE484  60 84 00 04 */	ori r4, r4, 4
/* 802B1548 002AE488  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B154C 002AE48C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802B1550 002AE490  64 84 00 20 */	oris r4, r4, 0x20
/* 802B1554 002AE494  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802B1558 002AE498  90 1F 02 DC */	stw r0, 0x2dc(r31)
/* 802B155C 002AE49C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802B1560 002AE4A0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802B1564 002AE4A4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802B1568 002AE4A8  4B E5 04 65 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B156C 002AE4AC  7F E3 FB 78 */	mr r3, r31
/* 802B1570 002AE4B0  38 80 00 05 */	li r4, 5
/* 802B1574 002AE4B4  38 A0 00 00 */	li r5, 0
/* 802B1578 002AE4B8  4B E5 3A 8D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B157C 002AE4BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1580 002AE4C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1584 002AE4C4  7C 08 03 A6 */	mtlr r0
/* 802B1588 002AE4C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B158C 002AE4CC  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBase, global
/* 802B1590 002AE4D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B1594 002AE4D4  7C 08 02 A6 */	mflr r0
/* 802B1598 002AE4D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B159C 002AE4DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B15A0 002AE4E0  7C 9F 23 78 */	mr r31, r4
/* 802B15A4 002AE4E4  38 80 00 00 */	li r4, 0
/* 802B15A8 002AE4E8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802B15AC 002AE4EC  7C 7E 1B 78 */	mr r30, r3
/* 802B15B0 002AE4F0  7F E3 FB 78 */	mr r3, r31
/* 802B15B4 002AE4F4  48 00 17 BD */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B15B8 002AE4F8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B15BC 002AE4FC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B15C0 002AE500  28 00 00 00 */	cmplwi r0, 0
/* 802B15C4 002AE504  41 82 01 38 */	beq .L_802B16FC
/* 802B15C8 002AE508  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B15CC 002AE50C  28 00 00 02 */	cmplwi r0, 2
/* 802B15D0 002AE510  40 82 00 D4 */	bne .L_802B16A4
/* 802B15D4 002AE514  7F E3 FB 78 */	mr r3, r31
/* 802B15D8 002AE518  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B15DC 002AE51C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802B15E0 002AE520  7D 89 03 A6 */	mtctr r12
/* 802B15E4 002AE524  4E 80 04 21 */	bctrl 
/* 802B15E8 002AE528  FC 40 08 90 */	fmr f2, f1
/* 802B15EC 002AE52C  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B15F0 002AE530  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B15F4 002AE534  40 80 00 08 */	bge .L_802B15FC
/* 802B15F8 002AE538  FC 40 10 50 */	fneg f2, f2
.L_802B15FC:
/* 802B15FC 002AE53C  C0 62 DE 3C */	lfs f3, lbl_8051C19C@sda21(r2)
/* 802B1600 002AE540  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802B1604 002AE544  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1608 002AE548  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802B160C 002AE54C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802B1610 002AE550  C0 82 DE 38 */	lfs f4, lbl_8051C198@sda21(r2)
/* 802B1614 002AE554  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1618 002AE558  FC 00 10 1E */	fctiwz f0, f2
/* 802B161C 002AE55C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802B1620 002AE560  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802B1624 002AE564  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B1628 002AE568  7C 64 02 14 */	add r3, r4, r0
/* 802B162C 002AE56C  C0 03 00 04 */	lfs f0, 4(r3)
/* 802B1630 002AE570  EC 44 00 32 */	fmuls f2, f4, f0
/* 802B1634 002AE574  40 80 00 28 */	bge .L_802B165C
/* 802B1638 002AE578  C0 02 DE 40 */	lfs f0, lbl_8051C1A0@sda21(r2)
/* 802B163C 002AE57C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B1640 002AE580  FC 00 00 1E */	fctiwz f0, f0
/* 802B1644 002AE584  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802B1648 002AE588  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B164C 002AE58C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B1650 002AE590  7C 04 04 2E */	lfsx f0, r4, r0
/* 802B1654 002AE594  FC 00 00 50 */	fneg f0, f0
/* 802B1658 002AE598  48 00 00 1C */	b .L_802B1674
.L_802B165C:
/* 802B165C 002AE59C  EC 01 00 F2 */	fmuls f0, f1, f3
/* 802B1660 002AE5A0  FC 00 00 1E */	fctiwz f0, f0
/* 802B1664 002AE5A4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802B1668 002AE5A8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802B166C 002AE5AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B1670 002AE5B0  7C 04 04 2E */	lfsx f0, r4, r0
.L_802B1674:
/* 802B1674 002AE5B4  EC 24 00 32 */	fmuls f1, f4, f0
/* 802B1678 002AE5B8  C0 02 DE 44 */	lfs f0, lbl_8051C1A4@sda21(r2)
/* 802B167C 002AE5BC  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802B1680 002AE5C0  7F E3 FB 78 */	mr r3, r31
/* 802B1684 002AE5C4  38 81 00 08 */	addi r4, r1, 8
/* 802B1688 002AE5C8  D0 21 00 08 */	stfs f1, 8(r1)
/* 802B168C 002AE5CC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802B1690 002AE5D0  48 00 1B 69 */	bl "throwBomb__Q34Game9BombSarai3ObjFR10Vector3<f>"
/* 802B1694 002AE5D4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B1698 002AE5D8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B169C 002AE5DC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B16A0 002AE5E0  48 00 00 5C */	b .L_802B16FC
.L_802B16A4:
/* 802B16A4 002AE5E4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B16A8 002AE5E8  40 82 00 54 */	bne .L_802B16FC
/* 802B16AC 002AE5EC  7F E3 FB 78 */	mr r3, r31
/* 802B16B0 002AE5F0  48 00 1C 31 */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B16B4 002AE5F4  7C 65 1B 79 */	or. r5, r3, r3
/* 802B16B8 002AE5F8  41 80 00 24 */	blt .L_802B16DC
/* 802B16BC 002AE5FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B16C0 002AE600  7F C3 F3 78 */	mr r3, r30
/* 802B16C4 002AE604  7F E4 FB 78 */	mr r4, r31
/* 802B16C8 002AE608  38 C0 00 00 */	li r6, 0
/* 802B16CC 002AE60C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B16D0 002AE610  7D 89 03 A6 */	mtctr r12
/* 802B16D4 002AE614  4E 80 04 21 */	bctrl 
/* 802B16D8 002AE618  48 00 00 24 */	b .L_802B16FC
.L_802B16DC:
/* 802B16DC 002AE61C  7F C3 F3 78 */	mr r3, r30
/* 802B16E0 002AE620  7F E4 FB 78 */	mr r4, r31
/* 802B16E4 002AE624  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B16E8 002AE628  38 A0 00 02 */	li r5, 2
/* 802B16EC 002AE62C  38 C0 00 00 */	li r6, 0
/* 802B16F0 002AE630  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B16F4 002AE634  7D 89 03 A6 */	mtctr r12
/* 802B16F8 002AE638  4E 80 04 21 */	bctrl 
.L_802B16FC:
/* 802B16FC 002AE63C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B1700 002AE640  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B1704 002AE644  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802B1708 002AE648  7C 08 03 A6 */	mtlr r0
/* 802B170C 002AE64C  38 21 00 40 */	addi r1, r1, 0x40
/* 802B1710 002AE650  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBase, global
/* 802B1714 002AE654  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1718 002AE658  7C 08 02 A6 */	mflr r0
/* 802B171C 002AE65C  7C 83 23 78 */	mr r3, r4
/* 802B1720 002AE660  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1724 002AE664  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1728 002AE668  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B172C 002AE66C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1730 002AE670  4B E5 02 4D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B1734 002AE674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1738 002AE678  7C 08 03 A6 */	mtlr r0
/* 802B173C 002AE67C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1740 002AE680  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai12StateReleaseFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B1744 002AE684  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B1748 002AE688  7C 08 02 A6 */	mflr r0
/* 802B174C 002AE68C  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1750 002AE690  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B1754 002AE694  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B1758 002AE698  7C 9F 23 78 */	mr r31, r4
/* 802B175C 002AE69C  7F E3 FB 78 */	mr r3, r31
/* 802B1760 002AE6A0  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802B1764 002AE6A4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1768 002AE6A8  64 00 00 20 */	oris r0, r0, 0x20
/* 802B176C 002AE6AC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1770 002AE6B0  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802B1774 002AE6B4  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802B1778 002AE6B8  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802B177C 002AE6BC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1780 002AE6C0  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802B1784 002AE6C4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1788 002AE6C8  4B E5 02 45 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B178C 002AE6CC  7F E3 FB 78 */	mr r3, r31
/* 802B1790 002AE6D0  38 80 00 01 */	li r4, 1
/* 802B1794 002AE6D4  38 A0 00 00 */	li r5, 0
/* 802B1798 002AE6D8  4B E5 38 6D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B179C 002AE6DC  7F E4 FB 78 */	mr r4, r31
/* 802B17A0 002AE6E0  38 61 00 08 */	addi r3, r1, 8
/* 802B17A4 002AE6E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B17A8 002AE6E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B17AC 002AE6EC  7D 89 03 A6 */	mtctr r12
/* 802B17B0 002AE6F0  4E 80 04 21 */	bctrl 
/* 802B17B4 002AE6F4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B17B8 002AE6F8  38 A1 00 14 */	addi r5, r1, 0x14
/* 802B17BC 002AE6FC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802B17C0 002AE700  38 80 00 00 */	li r4, 0
/* 802B17C4 002AE704  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B17C8 002AE708  38 C0 00 02 */	li r6, 2
/* 802B17CC 002AE70C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802B17D0 002AE710  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802B17D4 002AE714  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802B17D8 002AE718  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802B17DC 002AE71C  4B FA 0A 61 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802B17E0 002AE720  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802B17E4 002AE724  38 A1 00 14 */	addi r5, r1, 0x14
/* 802B17E8 002AE728  38 80 00 0B */	li r4, 0xb
/* 802B17EC 002AE72C  38 C0 00 02 */	li r6, 2
/* 802B17F0 002AE730  4B FA 1F 91 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802B17F4 002AE734  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B17F8 002AE738  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B17FC 002AE73C  7C 08 03 A6 */	mtlr r0
/* 802B1800 002AE740  38 21 00 30 */	addi r1, r1, 0x30
/* 802B1804 002AE744  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBase, global
/* 802B1808 002AE748  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802B180C 002AE74C  7C 08 02 A6 */	mflr r0
/* 802B1810 002AE750  90 01 00 74 */	stw r0, 0x74(r1)
/* 802B1814 002AE754  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802B1818 002AE758  7C 9F 23 78 */	mr r31, r4
/* 802B181C 002AE75C  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802B1820 002AE760  7C 7E 1B 78 */	mr r30, r3
/* 802B1824 002AE764  38 61 00 14 */	addi r3, r1, 0x14
/* 802B1828 002AE768  81 84 00 00 */	lwz r12, 0(r4)
/* 802B182C 002AE76C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B1830 002AE770  7D 89 03 A6 */	mtctr r12
/* 802B1834 002AE774  4E 80 04 21 */	bctrl 
/* 802B1838 002AE778  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802B183C 002AE77C  38 81 00 38 */	addi r4, r1, 0x38
/* 802B1840 002AE780  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802B1844 002AE784  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802B1848 002AE788  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802B184C 002AE78C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802B1850 002AE790  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802B1854 002AE794  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802B1858 002AE798  81 83 00 04 */	lwz r12, 4(r3)
/* 802B185C 002AE79C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802B1860 002AE7A0  7D 89 03 A6 */	mtctr r12
/* 802B1864 002AE7A4  4E 80 04 21 */	bctrl 
/* 802B1868 002AE7A8  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 802B186C 002AE7AC  C0 02 DE 48 */	lfs f0, lbl_8051C1A8@sda21(r2)
/* 802B1870 002AE7B0  EC 22 08 28 */	fsubs f1, f2, f1
/* 802B1874 002AE7B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1878 002AE7B8  41 80 00 14 */	blt .L_802B188C
/* 802B187C 002AE7BC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B1880 002AE7C0  C0 02 DE 4C */	lfs f0, lbl_8051C1AC@sda21(r2)
/* 802B1884 002AE7C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1888 002AE7C8  40 81 00 0C */	ble .L_802B1894
.L_802B188C:
/* 802B188C 002AE7CC  7F E3 FB 78 */	mr r3, r31
/* 802B1890 002AE7D0  4B E5 3A 11 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B1894:
/* 802B1894 002AE7D4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802B1898 002AE7D8  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802B189C 002AE7DC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802B18A0 002AE7E0  EC 01 00 2A */	fadds f0, f1, f0
/* 802B18A4 002AE7E4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802B18A8 002AE7E8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B18AC 002AE7EC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B18B0 002AE7F0  28 00 00 00 */	cmplwi r0, 0
/* 802B18B4 002AE7F4  41 82 02 14 */	beq .L_802B1AC8
/* 802B18B8 002AE7F8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B18BC 002AE7FC  28 00 00 02 */	cmplwi r0, 2
/* 802B18C0 002AE800  40 82 00 D4 */	bne .L_802B1994
/* 802B18C4 002AE804  7F E3 FB 78 */	mr r3, r31
/* 802B18C8 002AE808  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B18CC 002AE80C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802B18D0 002AE810  7D 89 03 A6 */	mtctr r12
/* 802B18D4 002AE814  4E 80 04 21 */	bctrl 
/* 802B18D8 002AE818  FC 40 08 90 */	fmr f2, f1
/* 802B18DC 002AE81C  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B18E0 002AE820  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802B18E4 002AE824  40 80 00 08 */	bge .L_802B18EC
/* 802B18E8 002AE828  FC 40 10 50 */	fneg f2, f2
.L_802B18EC:
/* 802B18EC 002AE82C  C0 62 DE 3C */	lfs f3, lbl_8051C19C@sda21(r2)
/* 802B18F0 002AE830  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802B18F4 002AE834  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B18F8 002AE838  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802B18FC 002AE83C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802B1900 002AE840  C0 82 DE 44 */	lfs f4, lbl_8051C1A4@sda21(r2)
/* 802B1904 002AE844  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1908 002AE848  FC 00 10 1E */	fctiwz f0, f2
/* 802B190C 002AE84C  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 802B1910 002AE850  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 802B1914 002AE854  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B1918 002AE858  7C 64 02 14 */	add r3, r4, r0
/* 802B191C 002AE85C  C0 03 00 04 */	lfs f0, 4(r3)
/* 802B1920 002AE860  EC 44 00 32 */	fmuls f2, f4, f0
/* 802B1924 002AE864  40 80 00 28 */	bge .L_802B194C
/* 802B1928 002AE868  C0 02 DE 40 */	lfs f0, lbl_8051C1A0@sda21(r2)
/* 802B192C 002AE86C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802B1930 002AE870  FC 00 00 1E */	fctiwz f0, f0
/* 802B1934 002AE874  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 802B1938 002AE878  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B193C 002AE87C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B1940 002AE880  7C 04 04 2E */	lfsx f0, r4, r0
/* 802B1944 002AE884  FC 00 00 50 */	fneg f0, f0
/* 802B1948 002AE888  48 00 00 1C */	b .L_802B1964
.L_802B194C:
/* 802B194C 002AE88C  EC 01 00 F2 */	fmuls f0, f1, f3
/* 802B1950 002AE890  FC 00 00 1E */	fctiwz f0, f0
/* 802B1954 002AE894  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802B1958 002AE898  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802B195C 002AE89C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802B1960 002AE8A0  7C 04 04 2E */	lfsx f0, r4, r0
.L_802B1964:
/* 802B1964 002AE8A4  EC 24 00 32 */	fmuls f1, f4, f0
/* 802B1968 002AE8A8  C0 02 DE 50 */	lfs f0, lbl_8051C1B0@sda21(r2)
/* 802B196C 002AE8AC  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 802B1970 002AE8B0  7F E3 FB 78 */	mr r3, r31
/* 802B1974 002AE8B4  38 81 00 2C */	addi r4, r1, 0x2c
/* 802B1978 002AE8B8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 802B197C 002AE8BC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802B1980 002AE8C0  48 00 18 79 */	bl "throwBomb__Q34Game9BombSarai3ObjFR10Vector3<f>"
/* 802B1984 002AE8C4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B1988 002AE8C8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B198C 002AE8CC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B1990 002AE8D0  48 00 01 38 */	b .L_802B1AC8
.L_802B1994:
/* 802B1994 002AE8D4  28 00 00 03 */	cmplwi r0, 3
/* 802B1998 002AE8D8  40 82 00 14 */	bne .L_802B19AC
/* 802B199C 002AE8DC  7F E3 FB 78 */	mr r3, r31
/* 802B19A0 002AE8E0  38 80 00 00 */	li r4, 0
/* 802B19A4 002AE8E4  48 00 1B A9 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B19A8 002AE8E8  48 00 01 20 */	b .L_802B1AC8
.L_802B19AC:
/* 802B19AC 002AE8EC  28 00 00 04 */	cmplwi r0, 4
/* 802B19B0 002AE8F0  40 82 00 14 */	bne .L_802B19C4
/* 802B19B4 002AE8F4  7F E3 FB 78 */	mr r3, r31
/* 802B19B8 002AE8F8  38 80 00 01 */	li r4, 1
/* 802B19BC 002AE8FC  48 00 1B 91 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B19C0 002AE900  48 00 01 08 */	b .L_802B1AC8
.L_802B19C4:
/* 802B19C4 002AE904  28 00 00 05 */	cmplwi r0, 5
/* 802B19C8 002AE908  40 82 00 14 */	bne .L_802B19DC
/* 802B19CC 002AE90C  7F E3 FB 78 */	mr r3, r31
/* 802B19D0 002AE910  38 80 00 02 */	li r4, 2
/* 802B19D4 002AE914  48 00 1B 79 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B19D8 002AE918  48 00 00 F0 */	b .L_802B1AC8
.L_802B19DC:
/* 802B19DC 002AE91C  28 00 00 06 */	cmplwi r0, 6
/* 802B19E0 002AE920  40 82 00 14 */	bne .L_802B19F4
/* 802B19E4 002AE924  7F E3 FB 78 */	mr r3, r31
/* 802B19E8 002AE928  38 80 00 03 */	li r4, 3
/* 802B19EC 002AE92C  48 00 1B 61 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B19F0 002AE930  48 00 00 D8 */	b .L_802B1AC8
.L_802B19F4:
/* 802B19F4 002AE934  28 00 00 07 */	cmplwi r0, 7
/* 802B19F8 002AE938  40 82 00 14 */	bne .L_802B1A0C
/* 802B19FC 002AE93C  7F E3 FB 78 */	mr r3, r31
/* 802B1A00 002AE940  38 80 00 04 */	li r4, 4
/* 802B1A04 002AE944  48 00 1B 49 */	bl createBalloonEffect__Q34Game9BombSarai3ObjFi
/* 802B1A08 002AE948  48 00 00 C0 */	b .L_802B1AC8
.L_802B1A0C:
/* 802B1A0C 002AE94C  28 00 00 08 */	cmplwi r0, 8
/* 802B1A10 002AE950  40 82 00 58 */	bne .L_802B1A68
/* 802B1A14 002AE954  7F E4 FB 78 */	mr r4, r31
/* 802B1A18 002AE958  38 61 00 08 */	addi r3, r1, 8
/* 802B1A1C 002AE95C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B1A20 002AE960  81 8C 00 08 */	lwz r12, 8(r12)
/* 802B1A24 002AE964  7D 89 03 A6 */	mtctr r12
/* 802B1A28 002AE968  4E 80 04 21 */	bctrl 
/* 802B1A2C 002AE96C  C0 41 00 08 */	lfs f2, 8(r1)
/* 802B1A30 002AE970  38 A1 00 20 */	addi r5, r1, 0x20
/* 802B1A34 002AE974  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802B1A38 002AE978  38 80 00 0B */	li r4, 0xb
/* 802B1A3C 002AE97C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802B1A40 002AE980  38 C0 00 02 */	li r6, 2
/* 802B1A44 002AE984  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802B1A48 002AE988  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802B1A4C 002AE98C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802B1A50 002AE990  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802B1A54 002AE994  4B FA 1D 2D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802B1A58 002AE998  C0 22 DE 14 */	lfs f1, lbl_8051C174@sda21(r2)
/* 802B1A5C 002AE99C  7F E3 FB 78 */	mr r3, r31
/* 802B1A60 002AE9A0  48 00 1C 09 */	bl createDownEffect__Q34Game9BombSarai3ObjFf
/* 802B1A64 002AE9A4  48 00 00 64 */	b .L_802B1AC8
.L_802B1A68:
/* 802B1A68 002AE9A8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B1A6C 002AE9AC  40 82 00 5C */	bne .L_802B1AC8
/* 802B1A70 002AE9B0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802B1A74 002AE9B4  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1A78 002AE9B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1A7C 002AE9BC  4C 40 13 82 */	cror 2, 0, 2
/* 802B1A80 002AE9C0  40 82 00 28 */	bne .L_802B1AA8
/* 802B1A84 002AE9C4  7F C3 F3 78 */	mr r3, r30
/* 802B1A88 002AE9C8  7F E4 FB 78 */	mr r4, r31
/* 802B1A8C 002AE9CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1A90 002AE9D0  38 A0 00 00 */	li r5, 0
/* 802B1A94 002AE9D4  38 C0 00 00 */	li r6, 0
/* 802B1A98 002AE9D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1A9C 002AE9DC  7D 89 03 A6 */	mtctr r12
/* 802B1AA0 002AE9E0  4E 80 04 21 */	bctrl 
/* 802B1AA4 002AE9E4  48 00 00 24 */	b .L_802B1AC8
.L_802B1AA8:
/* 802B1AA8 002AE9E8  7F C3 F3 78 */	mr r3, r30
/* 802B1AAC 002AE9EC  7F E4 FB 78 */	mr r4, r31
/* 802B1AB0 002AE9F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1AB4 002AE9F4  38 A0 00 01 */	li r5, 1
/* 802B1AB8 002AE9F8  38 C0 00 00 */	li r6, 0
/* 802B1ABC 002AE9FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1AC0 002AEA00  7D 89 03 A6 */	mtctr r12
/* 802B1AC4 002AEA04  4E 80 04 21 */	bctrl 
.L_802B1AC8:
/* 802B1AC8 002AEA08  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802B1ACC 002AEA0C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802B1AD0 002AEA10  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802B1AD4 002AEA14  7C 08 03 A6 */	mtlr r0
/* 802B1AD8 002AEA18  38 21 00 70 */	addi r1, r1, 0x70
/* 802B1ADC 002AEA1C  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBase, global
/* 802B1AE0 002AEA20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1AE4 002AEA24  7C 08 02 A6 */	mflr r0
/* 802B1AE8 002AEA28  7C 83 23 78 */	mr r3, r4
/* 802B1AEC 002AEA2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1AF0 002AEA30  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1AF4 002AEA34  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B1AF8 002AEA38  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1AFC 002AEA3C  4B E4 FE 81 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B1B00 002AEA40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1B04 002AEA44  7C 08 03 A6 */	mtlr r0
/* 802B1B08 002AEA48  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1B0C 002AEA4C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai9StateFallFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B1B10 002AEA50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1B14 002AEA54  7C 08 02 A6 */	mflr r0
/* 802B1B18 002AEA58  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1B1C 002AEA5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1B20 002AEA60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1B24 002AEA64  7C 9F 23 78 */	mr r31, r4
/* 802B1B28 002AEA68  7F E3 FB 78 */	mr r3, r31
/* 802B1B2C 002AEA6C  D0 04 02 0C */	stfs f0, 0x20c(r4)
/* 802B1B30 002AEA70  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1B34 002AEA74  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802B1B38 002AEA78  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1B3C 002AEA7C  4B E4 FE 91 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B1B40 002AEA80  7F E3 FB 78 */	mr r3, r31
/* 802B1B44 002AEA84  38 80 00 09 */	li r4, 9
/* 802B1B48 002AEA88  38 A0 00 00 */	li r5, 0
/* 802B1B4C 002AEA8C  4B E5 34 B9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B1B50 002AEA90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1B54 002AEA94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1B58 002AEA98  7C 08 03 A6 */	mtlr r0
/* 802B1B5C 002AEA9C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1B60 002AEAA0  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBase, global
/* 802B1B64 002AEAA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B1B68 002AEAA8  7C 08 02 A6 */	mflr r0
/* 802B1B6C 002AEAAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B1B70 002AEAB0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802B1B74 002AEAB4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802B1B78 002AEAB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1B7C 002AEABC  93 C1 00 08 */	stw r30, 8(r1)
/* 802B1B80 002AEAC0  C3 E2 DE 10 */	lfs f31, lbl_8051C170@sda21(r2)
/* 802B1B84 002AEAC4  7C 9F 23 78 */	mr r31, r4
/* 802B1B88 002AEAC8  7C 7E 1B 78 */	mr r30, r3
/* 802B1B8C 002AEACC  7F E3 FB 78 */	mr r3, r31
/* 802B1B90 002AEAD0  4B E5 36 DD */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802B1B94 002AEAD4  C0 02 DE 54 */	lfs f0, lbl_8051C1B4@sda21(r2)
/* 802B1B98 002AEAD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1B9C 002AEADC  40 81 00 20 */	ble .L_802B1BBC
/* 802B1BA0 002AEAE0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B1BA4 002AEAE4  7F E3 FB 78 */	mr r3, r31
/* 802B1BA8 002AEAE8  38 80 00 00 */	li r4, 0
/* 802B1BAC 002AEAEC  60 00 00 04 */	ori r0, r0, 4
/* 802B1BB0 002AEAF0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B1BB4 002AEAF4  48 00 11 BD */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B1BB8 002AEAF8  FF E0 08 90 */	fmr f31, f1
.L_802B1BBC:
/* 802B1BBC 002AEAFC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802B1BC0 002AEB00  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1BC4 002AEB04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1BC8 002AEB08  4C 40 13 82 */	cror 2, 0, 2
/* 802B1BCC 002AEB0C  41 82 00 14 */	beq .L_802B1BE0
/* 802B1BD0 002AEB10  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B1BD4 002AEB14  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802B1BD8 002AEB18  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B1BDC 002AEB1C  40 81 00 3C */	ble .L_802B1C18
.L_802B1BE0:
/* 802B1BE0 002AEB20  7F E3 FB 78 */	mr r3, r31
/* 802B1BE4 002AEB24  48 00 16 FD */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B1BE8 002AEB28  7C 65 1B 79 */	or. r5, r3, r3
/* 802B1BEC 002AEB2C  41 80 00 24 */	blt .L_802B1C10
/* 802B1BF0 002AEB30  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1BF4 002AEB34  7F C3 F3 78 */	mr r3, r30
/* 802B1BF8 002AEB38  7F E4 FB 78 */	mr r4, r31
/* 802B1BFC 002AEB3C  38 C0 00 00 */	li r6, 0
/* 802B1C00 002AEB40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1C04 002AEB44  7D 89 03 A6 */	mtctr r12
/* 802B1C08 002AEB48  4E 80 04 21 */	bctrl 
/* 802B1C0C 002AEB4C  48 00 00 48 */	b .L_802B1C54
.L_802B1C10:
/* 802B1C10 002AEB50  7F E3 FB 78 */	mr r3, r31
/* 802B1C14 002AEB54  4B E5 36 8D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B1C18:
/* 802B1C18 002AEB58  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B1C1C 002AEB5C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B1C20 002AEB60  28 00 00 00 */	cmplwi r0, 0
/* 802B1C24 002AEB64  41 82 00 30 */	beq .L_802B1C54
/* 802B1C28 002AEB68  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B1C2C 002AEB6C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B1C30 002AEB70  40 82 00 24 */	bne .L_802B1C54
/* 802B1C34 002AEB74  7F C3 F3 78 */	mr r3, r30
/* 802B1C38 002AEB78  7F E4 FB 78 */	mr r4, r31
/* 802B1C3C 002AEB7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1C40 002AEB80  38 A0 00 04 */	li r5, 4
/* 802B1C44 002AEB84  38 C0 00 00 */	li r6, 0
/* 802B1C48 002AEB88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1C4C 002AEB8C  7D 89 03 A6 */	mtctr r12
/* 802B1C50 002AEB90  4E 80 04 21 */	bctrl 
.L_802B1C54:
/* 802B1C54 002AEB94  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802B1C58 002AEB98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B1C5C 002AEB9C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802B1C60 002AEBA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1C64 002AEBA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B1C68 002AEBA8  7C 08 03 A6 */	mtlr r0
/* 802B1C6C 002AEBAC  38 21 00 20 */	addi r1, r1, 0x20
/* 802B1C70 002AEBB0  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBase, global
/* 802B1C74 002AEBB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1C78 002AEBB8  7C 08 02 A6 */	mflr r0
/* 802B1C7C 002AEBBC  7C 83 23 78 */	mr r3, r4
/* 802B1C80 002AEBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1C84 002AEBC4  4B E4 FC F9 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B1C88 002AEBC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1C8C 002AEBCC  7C 08 03 A6 */	mtlr r0
/* 802B1C90 002AEBD0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1C94 002AEBD4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai13StateTakeOff1FPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B1C98 002AEBD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1C9C 002AEBDC  7C 08 02 A6 */	mflr r0
/* 802B1CA0 002AEBE0  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1CA4 002AEBE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1CA8 002AEBE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1CAC 002AEBEC  7C 9F 23 78 */	mr r31, r4
/* 802B1CB0 002AEBF0  7F E3 FB 78 */	mr r3, r31
/* 802B1CB4 002AEBF4  D0 04 02 0C */	stfs f0, 0x20c(r4)
/* 802B1CB8 002AEBF8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1CBC 002AEBFC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802B1CC0 002AEC00  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1CC4 002AEC04  4B E4 FD 09 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B1CC8 002AEC08  7F E3 FB 78 */	mr r3, r31
/* 802B1CCC 002AEC0C  38 80 00 0A */	li r4, 0xa
/* 802B1CD0 002AEC10  38 A0 00 00 */	li r5, 0
/* 802B1CD4 002AEC14  4B E5 33 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B1CD8 002AEC18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1CDC 002AEC1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1CE0 002AEC20  7C 08 03 A6 */	mtlr r0
/* 802B1CE4 002AEC24  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1CE8 002AEC28  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBase, global
/* 802B1CEC 002AEC2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B1CF0 002AEC30  7C 08 02 A6 */	mflr r0
/* 802B1CF4 002AEC34  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B1CF8 002AEC38  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802B1CFC 002AEC3C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802B1D00 002AEC40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1D04 002AEC44  93 C1 00 08 */	stw r30, 8(r1)
/* 802B1D08 002AEC48  C3 E2 DE 10 */	lfs f31, lbl_8051C170@sda21(r2)
/* 802B1D0C 002AEC4C  7C 9F 23 78 */	mr r31, r4
/* 802B1D10 002AEC50  7C 7E 1B 78 */	mr r30, r3
/* 802B1D14 002AEC54  7F E3 FB 78 */	mr r3, r31
/* 802B1D18 002AEC58  4B E5 35 55 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802B1D1C 002AEC5C  C0 02 DE 58 */	lfs f0, lbl_8051C1B8@sda21(r2)
/* 802B1D20 002AEC60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1D24 002AEC64  40 81 00 20 */	ble .L_802B1D44
/* 802B1D28 002AEC68  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B1D2C 002AEC6C  7F E3 FB 78 */	mr r3, r31
/* 802B1D30 002AEC70  38 80 00 01 */	li r4, 1
/* 802B1D34 002AEC74  60 00 00 04 */	ori r0, r0, 4
/* 802B1D38 002AEC78  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802B1D3C 002AEC7C  48 00 10 35 */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B1D40 002AEC80  FF E0 08 90 */	fmr f31, f1
.L_802B1D44:
/* 802B1D44 002AEC84  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802B1D48 002AEC88  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1D4C 002AEC8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802B1D50 002AEC90  4C 40 13 82 */	cror 2, 0, 2
/* 802B1D54 002AEC94  41 82 00 14 */	beq .L_802B1D68
/* 802B1D58 002AEC98  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802B1D5C 002AEC9C  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802B1D60 002AECA0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802B1D64 002AECA4  40 81 00 3C */	ble .L_802B1DA0
.L_802B1D68:
/* 802B1D68 002AECA8  7F E3 FB 78 */	mr r3, r31
/* 802B1D6C 002AECAC  48 00 15 75 */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B1D70 002AECB0  7C 65 1B 79 */	or. r5, r3, r3
/* 802B1D74 002AECB4  41 80 00 24 */	blt .L_802B1D98
/* 802B1D78 002AECB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1D7C 002AECBC  7F C3 F3 78 */	mr r3, r30
/* 802B1D80 002AECC0  7F E4 FB 78 */	mr r4, r31
/* 802B1D84 002AECC4  38 C0 00 00 */	li r6, 0
/* 802B1D88 002AECC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1D8C 002AECCC  7D 89 03 A6 */	mtctr r12
/* 802B1D90 002AECD0  4E 80 04 21 */	bctrl 
/* 802B1D94 002AECD4  48 00 00 48 */	b .L_802B1DDC
.L_802B1D98:
/* 802B1D98 002AECD8  7F E3 FB 78 */	mr r3, r31
/* 802B1D9C 002AECDC  4B E5 35 05 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802B1DA0:
/* 802B1DA0 002AECE0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B1DA4 002AECE4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B1DA8 002AECE8  28 00 00 00 */	cmplwi r0, 0
/* 802B1DAC 002AECEC  41 82 00 30 */	beq .L_802B1DDC
/* 802B1DB0 002AECF0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B1DB4 002AECF4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B1DB8 002AECF8  40 82 00 24 */	bne .L_802B1DDC
/* 802B1DBC 002AECFC  7F C3 F3 78 */	mr r3, r30
/* 802B1DC0 002AED00  7F E4 FB 78 */	mr r4, r31
/* 802B1DC4 002AED04  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1DC8 002AED08  38 A0 00 04 */	li r5, 4
/* 802B1DCC 002AED0C  38 C0 00 00 */	li r6, 0
/* 802B1DD0 002AED10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1DD4 002AED14  7D 89 03 A6 */	mtctr r12
/* 802B1DD8 002AED18  4E 80 04 21 */	bctrl 
.L_802B1DDC:
/* 802B1DDC 002AED1C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802B1DE0 002AED20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B1DE4 002AED24  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802B1DE8 002AED28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1DEC 002AED2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B1DF0 002AED30  7C 08 03 A6 */	mtlr r0
/* 802B1DF4 002AED34  38 21 00 20 */	addi r1, r1, 0x20
/* 802B1DF8 002AED38  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBase, global
/* 802B1DFC 002AED3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1E00 002AED40  7C 08 02 A6 */	mflr r0
/* 802B1E04 002AED44  7C 83 23 78 */	mr r3, r4
/* 802B1E08 002AED48  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1E0C 002AED4C  4B E4 FB 71 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B1E10 002AED50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1E14 002AED54  7C 08 03 A6 */	mtlr r0
/* 802B1E18 002AED58  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1E1C 002AED5C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai13StateTakeOff2FPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B1E20 002AED60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1E24 002AED64  7C 08 02 A6 */	mflr r0
/* 802B1E28 002AED68  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1E2C 002AED6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1E30 002AED70  7C 9F 23 78 */	mr r31, r4
/* 802B1E34 002AED74  7F E3 FB 78 */	mr r3, r31
/* 802B1E38 002AED78  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1E3C 002AED7C  60 00 00 04 */	ori r0, r0, 4
/* 802B1E40 002AED80  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1E44 002AED84  4B E4 FB 89 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B1E48 002AED88  7F E3 FB 78 */	mr r3, r31
/* 802B1E4C 002AED8C  38 80 00 02 */	li r4, 2
/* 802B1E50 002AED90  38 A0 00 00 */	li r5, 0
/* 802B1E54 002AED94  4B E5 31 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B1E58 002AED98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1E5C 002AED9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1E60 002AEDA0  7C 08 03 A6 */	mtlr r0
/* 802B1E64 002AEDA4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1E68 002AEDA8  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBase, global
/* 802B1E6C 002AEDAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1E70 002AEDB0  7C 08 02 A6 */	mflr r0
/* 802B1E74 002AEDB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1E78 002AEDB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1E7C 002AEDBC  7C 9F 23 78 */	mr r31, r4
/* 802B1E80 002AEDC0  38 80 00 00 */	li r4, 0
/* 802B1E84 002AEDC4  93 C1 00 08 */	stw r30, 8(r1)
/* 802B1E88 002AEDC8  7C 7E 1B 78 */	mr r30, r3
/* 802B1E8C 002AEDCC  7F E3 FB 78 */	mr r3, r31
/* 802B1E90 002AEDD0  48 00 0E E1 */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B1E94 002AEDD4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B1E98 002AEDD8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B1E9C 002AEDDC  28 00 00 00 */	cmplwi r0, 0
/* 802B1EA0 002AEDE0  41 82 00 94 */	beq .L_802B1F34
/* 802B1EA4 002AEDE4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B1EA8 002AEDE8  28 00 00 02 */	cmplwi r0, 2
/* 802B1EAC 002AEDEC  40 82 00 30 */	bne .L_802B1EDC
/* 802B1EB0 002AEDF0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802B1EB4 002AEDF4  7F E3 FB 78 */	mr r3, r31
/* 802B1EB8 002AEDF8  C0 82 DE 5C */	lfs f4, lbl_8051C1BC@sda21(r2)
/* 802B1EBC 002AEDFC  38 80 00 00 */	li r4, 0
/* 802B1EC0 002AEE00  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802B1EC4 002AEE04  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802B1EC8 002AEE08  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802B1ECC 002AEE0C  4B E6 12 51 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802B1ED0 002AEE10  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B1ED4 002AEE14  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802B1ED8 002AEE18  48 00 00 5C */	b .L_802B1F34
.L_802B1EDC:
/* 802B1EDC 002AEE1C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B1EE0 002AEE20  40 82 00 54 */	bne .L_802B1F34
/* 802B1EE4 002AEE24  7F E3 FB 78 */	mr r3, r31
/* 802B1EE8 002AEE28  48 00 13 F9 */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B1EEC 002AEE2C  7C 65 1B 79 */	or. r5, r3, r3
/* 802B1EF0 002AEE30  41 80 00 24 */	blt .L_802B1F14
/* 802B1EF4 002AEE34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1EF8 002AEE38  7F C3 F3 78 */	mr r3, r30
/* 802B1EFC 002AEE3C  7F E4 FB 78 */	mr r4, r31
/* 802B1F00 002AEE40  38 C0 00 00 */	li r6, 0
/* 802B1F04 002AEE44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1F08 002AEE48  7D 89 03 A6 */	mtctr r12
/* 802B1F0C 002AEE4C  4E 80 04 21 */	bctrl 
/* 802B1F10 002AEE50  48 00 00 24 */	b .L_802B1F34
.L_802B1F14:
/* 802B1F14 002AEE54  7F C3 F3 78 */	mr r3, r30
/* 802B1F18 002AEE58  7F E4 FB 78 */	mr r4, r31
/* 802B1F1C 002AEE5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B1F20 002AEE60  38 A0 00 04 */	li r5, 4
/* 802B1F24 002AEE64  38 C0 00 00 */	li r6, 0
/* 802B1F28 002AEE68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B1F2C 002AEE6C  7D 89 03 A6 */	mtctr r12
/* 802B1F30 002AEE70  4E 80 04 21 */	bctrl 
.L_802B1F34:
/* 802B1F34 002AEE74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1F38 002AEE78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1F3C 002AEE7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B1F40 002AEE80  7C 08 03 A6 */	mtlr r0
/* 802B1F44 002AEE84  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1F48 002AEE88  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBase, global
/* 802B1F4C 002AEE8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1F50 002AEE90  7C 08 02 A6 */	mflr r0
/* 802B1F54 002AEE94  7C 83 23 78 */	mr r3, r4
/* 802B1F58 002AEE98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1F5C 002AEE9C  4B E4 FA 21 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B1F60 002AEEA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1F64 002AEEA4  7C 08 03 A6 */	mtlr r0
/* 802B1F68 002AEEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1F6C 002AEEAC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai10StateFlickFPQ24Game9EnemyBase

.fn init__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802B1F70 002AEEB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1F74 002AEEB4  7C 08 02 A6 */	mflr r0
/* 802B1F78 002AEEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1F7C 002AEEBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1F80 002AEEC0  7C 9F 23 78 */	mr r31, r4
/* 802B1F84 002AEEC4  7F E3 FB 78 */	mr r3, r31
/* 802B1F88 002AEEC8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1F8C 002AEECC  60 00 00 04 */	ori r0, r0, 4
/* 802B1F90 002AEED0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1F94 002AEED4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B1F98 002AEED8  64 00 00 20 */	oris r0, r0, 0x20
/* 802B1F9C 002AEEDC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B1FA0 002AEEE0  4B E4 FA 2D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802B1FA4 002AEEE4  7F E3 FB 78 */	mr r3, r31
/* 802B1FA8 002AEEE8  38 80 00 03 */	li r4, 3
/* 802B1FAC 002AEEEC  38 A0 00 00 */	li r5, 0
/* 802B1FB0 002AEEF0  4B E5 30 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802B1FB4 002AEEF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B1FB8 002AEEF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B1FBC 002AEEFC  7C 08 03 A6 */	mtlr r0
/* 802B1FC0 002AEF00  38 21 00 10 */	addi r1, r1, 0x10
/* 802B1FC4 002AEF04  4E 80 00 20 */	blr 
.endfn init__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBase, global
/* 802B1FC8 002AEF08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B1FCC 002AEF0C  7C 08 02 A6 */	mflr r0
/* 802B1FD0 002AEF10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B1FD4 002AEF14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B1FD8 002AEF18  7C 9F 23 78 */	mr r31, r4
/* 802B1FDC 002AEF1C  38 80 00 00 */	li r4, 0
/* 802B1FE0 002AEF20  93 C1 00 08 */	stw r30, 8(r1)
/* 802B1FE4 002AEF24  7C 7E 1B 78 */	mr r30, r3
/* 802B1FE8 002AEF28  7F E3 FB 78 */	mr r3, r31
/* 802B1FEC 002AEF2C  48 00 0D 85 */	bl setHeightVelocity__Q34Game9BombSarai3ObjFb
/* 802B1FF0 002AEF30  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802B1FF4 002AEF34  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 802B1FF8 002AEF38  41 82 00 28 */	beq .L_802B2020
/* 802B1FFC 002AEF3C  7F C3 F3 78 */	mr r3, r30
/* 802B2000 002AEF40  7F E4 FB 78 */	mr r4, r31
/* 802B2004 002AEF44  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B2008 002AEF48  38 A0 00 08 */	li r5, 8
/* 802B200C 002AEF4C  38 C0 00 00 */	li r6, 0
/* 802B2010 002AEF50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B2014 002AEF54  7D 89 03 A6 */	mtctr r12
/* 802B2018 002AEF58  4E 80 04 21 */	bctrl 
/* 802B201C 002AEF5C  48 00 00 A4 */	b .L_802B20C0
.L_802B2020:
/* 802B2020 002AEF60  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802B2024 002AEF64  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802B2028 002AEF68  28 00 00 00 */	cmplwi r0, 0
/* 802B202C 002AEF6C  41 82 00 94 */	beq .L_802B20C0
/* 802B2030 002AEF70  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802B2034 002AEF74  28 00 00 02 */	cmplwi r0, 2
/* 802B2038 002AEF78  40 82 00 30 */	bne .L_802B2068
/* 802B203C 002AEF7C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802B2040 002AEF80  7F E3 FB 78 */	mr r3, r31
/* 802B2044 002AEF84  C0 82 DE 5C */	lfs f4, lbl_8051C1BC@sda21(r2)
/* 802B2048 002AEF88  38 80 00 00 */	li r4, 0
/* 802B204C 002AEF8C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802B2050 002AEF90  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802B2054 002AEF94  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802B2058 002AEF98  4B E6 10 C5 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802B205C 002AEF9C  C0 02 DE 10 */	lfs f0, lbl_8051C170@sda21(r2)
/* 802B2060 002AEFA0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802B2064 002AEFA4  48 00 00 5C */	b .L_802B20C0
.L_802B2068:
/* 802B2068 002AEFA8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802B206C 002AEFAC  40 82 00 54 */	bne .L_802B20C0
/* 802B2070 002AEFB0  7F E3 FB 78 */	mr r3, r31
/* 802B2074 002AEFB4  48 00 12 6D */	bl getNextStateOnHeight__Q34Game9BombSarai3ObjFv
/* 802B2078 002AEFB8  7C 65 1B 79 */	or. r5, r3, r3
/* 802B207C 002AEFBC  41 80 00 24 */	blt .L_802B20A0
/* 802B2080 002AEFC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B2084 002AEFC4  7F C3 F3 78 */	mr r3, r30
/* 802B2088 002AEFC8  7F E4 FB 78 */	mr r4, r31
/* 802B208C 002AEFCC  38 C0 00 00 */	li r6, 0
/* 802B2090 002AEFD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B2094 002AEFD4  7D 89 03 A6 */	mtctr r12
/* 802B2098 002AEFD8  4E 80 04 21 */	bctrl 
/* 802B209C 002AEFDC  48 00 00 24 */	b .L_802B20C0
.L_802B20A0:
/* 802B20A0 002AEFE0  7F C3 F3 78 */	mr r3, r30
/* 802B20A4 002AEFE4  7F E4 FB 78 */	mr r4, r31
/* 802B20A8 002AEFE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802B20AC 002AEFEC  38 A0 00 05 */	li r5, 5
/* 802B20B0 002AEFF0  38 C0 00 00 */	li r6, 0
/* 802B20B4 002AEFF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802B20B8 002AEFF8  7D 89 03 A6 */	mtctr r12
/* 802B20BC 002AEFFC  4E 80 04 21 */	bctrl 
.L_802B20C0:
/* 802B20C0 002AF000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B20C4 002AF004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B20C8 002AF008  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B20CC 002AF00C  7C 08 03 A6 */	mtlr r0
/* 802B20D0 002AF010  38 21 00 10 */	addi r1, r1, 0x10
/* 802B20D4 002AF014  4E 80 00 20 */	blr 
.endfn exec__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBase, global
/* 802B20D8 002AF018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B20DC 002AF01C  7C 08 02 A6 */	mflr r0
/* 802B20E0 002AF020  7C 83 23 78 */	mr r3, r4
/* 802B20E4 002AF024  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B20E8 002AF028  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802B20EC 002AF02C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802B20F0 002AF030  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802B20F4 002AF034  4B E4 F8 89 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802B20F8 002AF038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B20FC 002AF03C  7C 08 03 A6 */	mtlr r0
/* 802B2100 002AF040  38 21 00 10 */	addi r1, r1, 0x10
/* 802B2104 002AF044  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9BombSarai14StateBombFlickFPQ24Game9EnemyBase

.fn __sinit_BombSaraiState_cpp, local
/* 802B2108 002AF048  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802B210C 002AF04C  38 00 FF FF */	li r0, -1
/* 802B2110 002AF050  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802B2114 002AF054  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802B2118 002AF058  90 0D 97 08 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802B211C 002AF05C  D4 03 E6 58 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802B2120 002AF060  D0 0D 97 0C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802B2124 002AF064  D0 03 00 04 */	stfs f0, 4(r3)
/* 802B2128 002AF068  D0 03 00 08 */	stfs f0, 8(r3)
/* 802B212C 002AF06C  4E 80 00 20 */	blr 
.endfn __sinit_BombSaraiState_cpp
