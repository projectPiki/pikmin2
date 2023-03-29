.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80489078, local
	.asciz "246-HanachirashiState"
.endobj lbl_80489078
.balign 4
.obj lbl_80489090, local
	.asciz "chaseinside"
.endobj lbl_80489090
.balign 4
.obj lbl_8048909C, local
	.asciz "flyflick"
.endobj lbl_8048909C
.balign 4
.obj lbl_804890A8, local
	.asciz "groundflick"
.endobj lbl_804890A8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game12Hanachirashi10StateLaugh, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi10StateLaugh
.obj __vt__Q34Game12Hanachirashi16StateGroundFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi16StateGroundFlick
.obj __vt__Q34Game12Hanachirashi13StateFlyFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi13StateFlyFlick
.obj __vt__Q34Game12Hanachirashi12StateTakeOff, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi12StateTakeOff
.obj __vt__Q34Game12Hanachirashi11StateGround, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi11StateGround
.obj __vt__Q34Game12Hanachirashi9StateLand, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi9StateLand
.obj __vt__Q34Game12Hanachirashi9StateFall, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi9StateFall
.obj __vt__Q34Game12Hanachirashi11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi11StateAttack
.obj __vt__Q34Game12Hanachirashi16StateChaseInside, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi16StateChaseInside
.obj __vt__Q34Game12Hanachirashi10StateChase, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi10StateChase
.obj __vt__Q34Game12Hanachirashi9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi9StateMove
.obj __vt__Q34Game12Hanachirashi9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi9StateWait
.obj __vt__Q34Game12Hanachirashi9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi9StateDead
.obj __vt__Q34Game12Hanachirashi5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12Hanachirashi5State
.obj __vt__Q34Game12Hanachirashi3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12Hanachirashi3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game12Hanachirashi3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051BD08, local
	.asciz "dead"
.endobj lbl_8051BD08
.balign 4
.obj lbl_8051BD10, local
	.asciz "wait"
.endobj lbl_8051BD10
.balign 4
.obj lbl_8051BD18, local
	.asciz "move"
.endobj lbl_8051BD18
.balign 4
.obj lbl_8051BD20, local
	.asciz "chase"
.endobj lbl_8051BD20
.balign 4
.obj lbl_8051BD28, local
	.asciz "attack"
.endobj lbl_8051BD28
.balign 4
.obj lbl_8051BD30, local
	.asciz "fall"
.endobj lbl_8051BD30
.balign 4
.obj lbl_8051BD38, local
	.asciz "land"
.endobj lbl_8051BD38
.balign 4
.obj lbl_8051BD40, local
	.asciz "ground"
.endobj lbl_8051BD40
.balign 4
.obj lbl_8051BD48, local
	.asciz "takeoff"
.endobj lbl_8051BD48
.balign 4
.obj lbl_8051BD50, local
	.asciz "laugh"
.endobj lbl_8051BD50
.balign 4
.obj lbl_8051BD58, local
	.float 0.0
.endobj lbl_8051BD58
.obj lbl_8051BD5C, local
	.float 45.0
.endobj lbl_8051BD5C
.obj lbl_8051BD60, local
	.float 60.0
.endobj lbl_8051BD60
.obj lbl_8051BD64, local
	.float 10000.0
.endobj lbl_8051BD64
.obj lbl_8051BD68, local
	.float 7.5
.endobj lbl_8051BD68
.obj lbl_8051BD6C, local
	.float 1.0
.endobj lbl_8051BD6C
.obj lbl_8051BD70, local # pi
	.float 3.1415927
.endobj lbl_8051BD70
.obj lbl_8051BD74, local
	.float 0.0055555557
.endobj lbl_8051BD74
.obj lbl_8051BD78, local
	.float 225.0
.endobj lbl_8051BD78
.obj lbl_8051BD7C, local
	.float -325.9493
.endobj lbl_8051BD7C
.obj lbl_8051BD80, local
	.float 325.9493
.endobj lbl_8051BD80
.obj lbl_8051BD84, local
	.float 50.0
.endobj lbl_8051BD84
.obj lbl_8051BD88, local
	.float 0.75
.endobj lbl_8051BD88
.obj lbl_8051BD8C, local
	.float -1000.0
.endobj lbl_8051BD8C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game12Hanachirashi3FSMFPQ24Game9EnemyBase, global
/* 8029F228 0029C168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F22C 0029C16C  7C 08 02 A6 */	mflr r0
/* 8029F230 0029C170  3C 80 80 49 */	lis r4, lbl_80489078@ha
/* 8029F234 0029C174  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F238 0029C178  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029F23C 0029C17C  7C 7F 1B 78 */	mr r31, r3
/* 8029F240 0029C180  93 C1 00 08 */	stw r30, 8(r1)
/* 8029F244 0029C184  3B C4 90 78 */	addi r30, r4, lbl_80489078@l
/* 8029F248 0029C188  38 80 00 0D */	li r4, 0xd
/* 8029F24C 0029C18C  4B E9 16 19 */	bl create__Q24Game17EnemyStateMachineFi
/* 8029F250 0029C190  38 60 00 10 */	li r3, 0x10
/* 8029F254 0029C194  4B D8 4C 51 */	bl __nw__FUl
/* 8029F258 0029C198  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F25C 0029C19C  41 82 00 3C */	beq .L_8029F298
/* 8029F260 0029C1A0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F264 0029C1A4  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F268 0029C1A8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F26C 0029C1AC  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi9StateDead@ha
/* 8029F270 0029C1B0  90 04 00 00 */	stw r0, 0(r4)
/* 8029F274 0029C1B4  38 E0 00 00 */	li r7, 0
/* 8029F278 0029C1B8  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F27C 0029C1BC  38 A2 D9 A8 */	addi r5, r2, lbl_8051BD08@sda21
/* 8029F280 0029C1C0  90 E4 00 04 */	stw r7, 4(r4)
/* 8029F284 0029C1C4  38 03 D0 E0 */	addi r0, r3, __vt__Q34Game12Hanachirashi9StateDead@l
/* 8029F288 0029C1C8  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F28C 0029C1CC  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F290 0029C1D0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F294 0029C1D4  90 04 00 00 */	stw r0, 0(r4)
.L_8029F298:
/* 8029F298 0029C1D8  7F E3 FB 78 */	mr r3, r31
/* 8029F29C 0029C1DC  4B E9 16 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F2A0 0029C1E0  38 60 00 10 */	li r3, 0x10
/* 8029F2A4 0029C1E4  4B D8 4C 01 */	bl __nw__FUl
/* 8029F2A8 0029C1E8  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F2AC 0029C1EC  41 82 00 40 */	beq .L_8029F2EC
/* 8029F2B0 0029C1F0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F2B4 0029C1F4  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F2B8 0029C1F8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F2BC 0029C1FC  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi9StateWait@ha
/* 8029F2C0 0029C200  90 04 00 00 */	stw r0, 0(r4)
/* 8029F2C4 0029C204  38 00 00 01 */	li r0, 1
/* 8029F2C8 0029C208  38 E0 00 00 */	li r7, 0
/* 8029F2CC 0029C20C  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F2D0 0029C210  90 04 00 04 */	stw r0, 4(r4)
/* 8029F2D4 0029C214  38 A2 D9 B0 */	addi r5, r2, lbl_8051BD10@sda21
/* 8029F2D8 0029C218  38 03 D0 BC */	addi r0, r3, __vt__Q34Game12Hanachirashi9StateWait@l
/* 8029F2DC 0029C21C  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F2E0 0029C220  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F2E4 0029C224  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F2E8 0029C228  90 04 00 00 */	stw r0, 0(r4)
.L_8029F2EC:
/* 8029F2EC 0029C22C  7F E3 FB 78 */	mr r3, r31
/* 8029F2F0 0029C230  4B E9 16 19 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F2F4 0029C234  38 60 00 10 */	li r3, 0x10
/* 8029F2F8 0029C238  4B D8 4B AD */	bl __nw__FUl
/* 8029F2FC 0029C23C  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F300 0029C240  41 82 00 40 */	beq .L_8029F340
/* 8029F304 0029C244  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F308 0029C248  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F30C 0029C24C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F310 0029C250  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi9StateMove@ha
/* 8029F314 0029C254  90 04 00 00 */	stw r0, 0(r4)
/* 8029F318 0029C258  38 00 00 02 */	li r0, 2
/* 8029F31C 0029C25C  38 E0 00 00 */	li r7, 0
/* 8029F320 0029C260  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F324 0029C264  90 04 00 04 */	stw r0, 4(r4)
/* 8029F328 0029C268  38 A2 D9 B8 */	addi r5, r2, lbl_8051BD18@sda21
/* 8029F32C 0029C26C  38 03 D0 98 */	addi r0, r3, __vt__Q34Game12Hanachirashi9StateMove@l
/* 8029F330 0029C270  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F334 0029C274  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F338 0029C278  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F33C 0029C27C  90 04 00 00 */	stw r0, 0(r4)
.L_8029F340:
/* 8029F340 0029C280  7F E3 FB 78 */	mr r3, r31
/* 8029F344 0029C284  4B E9 15 C5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F348 0029C288  38 60 00 10 */	li r3, 0x10
/* 8029F34C 0029C28C  4B D8 4B 59 */	bl __nw__FUl
/* 8029F350 0029C290  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F354 0029C294  41 82 00 40 */	beq .L_8029F394
/* 8029F358 0029C298  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F35C 0029C29C  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F360 0029C2A0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F364 0029C2A4  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi10StateChase@ha
/* 8029F368 0029C2A8  90 04 00 00 */	stw r0, 0(r4)
/* 8029F36C 0029C2AC  38 00 00 03 */	li r0, 3
/* 8029F370 0029C2B0  38 E0 00 00 */	li r7, 0
/* 8029F374 0029C2B4  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F378 0029C2B8  90 04 00 04 */	stw r0, 4(r4)
/* 8029F37C 0029C2BC  38 A2 D9 C0 */	addi r5, r2, lbl_8051BD20@sda21
/* 8029F380 0029C2C0  38 03 D0 74 */	addi r0, r3, __vt__Q34Game12Hanachirashi10StateChase@l
/* 8029F384 0029C2C4  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F388 0029C2C8  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F38C 0029C2CC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F390 0029C2D0  90 04 00 00 */	stw r0, 0(r4)
.L_8029F394:
/* 8029F394 0029C2D4  7F E3 FB 78 */	mr r3, r31
/* 8029F398 0029C2D8  4B E9 15 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F39C 0029C2DC  38 60 00 10 */	li r3, 0x10
/* 8029F3A0 0029C2E0  4B D8 4B 05 */	bl __nw__FUl
/* 8029F3A4 0029C2E4  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F3A8 0029C2E8  41 82 00 40 */	beq .L_8029F3E8
/* 8029F3AC 0029C2EC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F3B0 0029C2F0  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F3B4 0029C2F4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F3B8 0029C2F8  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi16StateChaseInside@ha
/* 8029F3BC 0029C2FC  90 04 00 00 */	stw r0, 0(r4)
/* 8029F3C0 0029C300  38 00 00 04 */	li r0, 4
/* 8029F3C4 0029C304  38 E0 00 00 */	li r7, 0
/* 8029F3C8 0029C308  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F3CC 0029C30C  90 04 00 04 */	stw r0, 4(r4)
/* 8029F3D0 0029C310  38 BE 00 18 */	addi r5, r30, 0x18
/* 8029F3D4 0029C314  38 03 D0 50 */	addi r0, r3, __vt__Q34Game12Hanachirashi16StateChaseInside@l
/* 8029F3D8 0029C318  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F3DC 0029C31C  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F3E0 0029C320  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F3E4 0029C324  90 04 00 00 */	stw r0, 0(r4)
.L_8029F3E8:
/* 8029F3E8 0029C328  7F E3 FB 78 */	mr r3, r31
/* 8029F3EC 0029C32C  4B E9 15 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F3F0 0029C330  38 60 00 10 */	li r3, 0x10
/* 8029F3F4 0029C334  4B D8 4A B1 */	bl __nw__FUl
/* 8029F3F8 0029C338  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F3FC 0029C33C  41 82 00 40 */	beq .L_8029F43C
/* 8029F400 0029C340  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F404 0029C344  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F408 0029C348  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F40C 0029C34C  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi11StateAttack@ha
/* 8029F410 0029C350  90 04 00 00 */	stw r0, 0(r4)
/* 8029F414 0029C354  38 00 00 05 */	li r0, 5
/* 8029F418 0029C358  38 E0 00 00 */	li r7, 0
/* 8029F41C 0029C35C  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F420 0029C360  90 04 00 04 */	stw r0, 4(r4)
/* 8029F424 0029C364  38 A2 D9 C8 */	addi r5, r2, lbl_8051BD28@sda21
/* 8029F428 0029C368  38 03 D0 2C */	addi r0, r3, __vt__Q34Game12Hanachirashi11StateAttack@l
/* 8029F42C 0029C36C  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F430 0029C370  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F434 0029C374  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F438 0029C378  90 04 00 00 */	stw r0, 0(r4)
.L_8029F43C:
/* 8029F43C 0029C37C  7F E3 FB 78 */	mr r3, r31
/* 8029F440 0029C380  4B E9 14 C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F444 0029C384  38 60 00 10 */	li r3, 0x10
/* 8029F448 0029C388  4B D8 4A 5D */	bl __nw__FUl
/* 8029F44C 0029C38C  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F450 0029C390  41 82 00 40 */	beq .L_8029F490
/* 8029F454 0029C394  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F458 0029C398  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F45C 0029C39C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F460 0029C3A0  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi9StateFall@ha
/* 8029F464 0029C3A4  90 04 00 00 */	stw r0, 0(r4)
/* 8029F468 0029C3A8  38 00 00 06 */	li r0, 6
/* 8029F46C 0029C3AC  38 E0 00 00 */	li r7, 0
/* 8029F470 0029C3B0  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F474 0029C3B4  90 04 00 04 */	stw r0, 4(r4)
/* 8029F478 0029C3B8  38 A2 D9 D0 */	addi r5, r2, lbl_8051BD30@sda21
/* 8029F47C 0029C3BC  38 03 D0 08 */	addi r0, r3, __vt__Q34Game12Hanachirashi9StateFall@l
/* 8029F480 0029C3C0  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F484 0029C3C4  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F488 0029C3C8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F48C 0029C3CC  90 04 00 00 */	stw r0, 0(r4)
.L_8029F490:
/* 8029F490 0029C3D0  7F E3 FB 78 */	mr r3, r31
/* 8029F494 0029C3D4  4B E9 14 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F498 0029C3D8  38 60 00 10 */	li r3, 0x10
/* 8029F49C 0029C3DC  4B D8 4A 09 */	bl __nw__FUl
/* 8029F4A0 0029C3E0  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F4A4 0029C3E4  41 82 00 40 */	beq .L_8029F4E4
/* 8029F4A8 0029C3E8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F4AC 0029C3EC  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F4B0 0029C3F0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F4B4 0029C3F4  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi9StateLand@ha
/* 8029F4B8 0029C3F8  90 04 00 00 */	stw r0, 0(r4)
/* 8029F4BC 0029C3FC  38 00 00 07 */	li r0, 7
/* 8029F4C0 0029C400  38 E0 00 00 */	li r7, 0
/* 8029F4C4 0029C404  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F4C8 0029C408  90 04 00 04 */	stw r0, 4(r4)
/* 8029F4CC 0029C40C  38 A2 D9 D8 */	addi r5, r2, lbl_8051BD38@sda21
/* 8029F4D0 0029C410  38 03 CF E4 */	addi r0, r3, __vt__Q34Game12Hanachirashi9StateLand@l
/* 8029F4D4 0029C414  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F4D8 0029C418  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F4DC 0029C41C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F4E0 0029C420  90 04 00 00 */	stw r0, 0(r4)
.L_8029F4E4:
/* 8029F4E4 0029C424  7F E3 FB 78 */	mr r3, r31
/* 8029F4E8 0029C428  4B E9 14 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F4EC 0029C42C  38 60 00 10 */	li r3, 0x10
/* 8029F4F0 0029C430  4B D8 49 B5 */	bl __nw__FUl
/* 8029F4F4 0029C434  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F4F8 0029C438  41 82 00 40 */	beq .L_8029F538
/* 8029F4FC 0029C43C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F500 0029C440  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F504 0029C444  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F508 0029C448  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi11StateGround@ha
/* 8029F50C 0029C44C  90 04 00 00 */	stw r0, 0(r4)
/* 8029F510 0029C450  38 00 00 08 */	li r0, 8
/* 8029F514 0029C454  38 E0 00 00 */	li r7, 0
/* 8029F518 0029C458  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F51C 0029C45C  90 04 00 04 */	stw r0, 4(r4)
/* 8029F520 0029C460  38 A2 D9 E0 */	addi r5, r2, lbl_8051BD40@sda21
/* 8029F524 0029C464  38 03 CF C0 */	addi r0, r3, __vt__Q34Game12Hanachirashi11StateGround@l
/* 8029F528 0029C468  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F52C 0029C46C  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F530 0029C470  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F534 0029C474  90 04 00 00 */	stw r0, 0(r4)
.L_8029F538:
/* 8029F538 0029C478  7F E3 FB 78 */	mr r3, r31
/* 8029F53C 0029C47C  4B E9 13 CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F540 0029C480  38 60 00 10 */	li r3, 0x10
/* 8029F544 0029C484  4B D8 49 61 */	bl __nw__FUl
/* 8029F548 0029C488  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F54C 0029C48C  41 82 00 40 */	beq .L_8029F58C
/* 8029F550 0029C490  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F554 0029C494  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F558 0029C498  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F55C 0029C49C  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi12StateTakeOff@ha
/* 8029F560 0029C4A0  90 04 00 00 */	stw r0, 0(r4)
/* 8029F564 0029C4A4  38 00 00 09 */	li r0, 9
/* 8029F568 0029C4A8  38 E0 00 00 */	li r7, 0
/* 8029F56C 0029C4AC  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F570 0029C4B0  90 04 00 04 */	stw r0, 4(r4)
/* 8029F574 0029C4B4  38 A2 D9 E8 */	addi r5, r2, lbl_8051BD48@sda21
/* 8029F578 0029C4B8  38 03 CF 9C */	addi r0, r3, __vt__Q34Game12Hanachirashi12StateTakeOff@l
/* 8029F57C 0029C4BC  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F580 0029C4C0  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F584 0029C4C4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F588 0029C4C8  90 04 00 00 */	stw r0, 0(r4)
.L_8029F58C:
/* 8029F58C 0029C4CC  7F E3 FB 78 */	mr r3, r31
/* 8029F590 0029C4D0  4B E9 13 79 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F594 0029C4D4  38 60 00 10 */	li r3, 0x10
/* 8029F598 0029C4D8  4B D8 49 0D */	bl __nw__FUl
/* 8029F59C 0029C4DC  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F5A0 0029C4E0  41 82 00 40 */	beq .L_8029F5E0
/* 8029F5A4 0029C4E4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F5A8 0029C4E8  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F5AC 0029C4EC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F5B0 0029C4F0  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi13StateFlyFlick@ha
/* 8029F5B4 0029C4F4  90 04 00 00 */	stw r0, 0(r4)
/* 8029F5B8 0029C4F8  38 00 00 0A */	li r0, 0xa
/* 8029F5BC 0029C4FC  38 E0 00 00 */	li r7, 0
/* 8029F5C0 0029C500  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F5C4 0029C504  90 04 00 04 */	stw r0, 4(r4)
/* 8029F5C8 0029C508  38 BE 00 24 */	addi r5, r30, 0x24
/* 8029F5CC 0029C50C  38 03 CF 78 */	addi r0, r3, __vt__Q34Game12Hanachirashi13StateFlyFlick@l
/* 8029F5D0 0029C510  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F5D4 0029C514  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F5D8 0029C518  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F5DC 0029C51C  90 04 00 00 */	stw r0, 0(r4)
.L_8029F5E0:
/* 8029F5E0 0029C520  7F E3 FB 78 */	mr r3, r31
/* 8029F5E4 0029C524  4B E9 13 25 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F5E8 0029C528  38 60 00 10 */	li r3, 0x10
/* 8029F5EC 0029C52C  4B D8 48 B9 */	bl __nw__FUl
/* 8029F5F0 0029C530  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F5F4 0029C534  41 82 00 40 */	beq .L_8029F634
/* 8029F5F8 0029C538  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F5FC 0029C53C  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F600 0029C540  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F604 0029C544  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi16StateGroundFlick@ha
/* 8029F608 0029C548  90 04 00 00 */	stw r0, 0(r4)
/* 8029F60C 0029C54C  38 00 00 0B */	li r0, 0xb
/* 8029F610 0029C550  38 E0 00 00 */	li r7, 0
/* 8029F614 0029C554  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F618 0029C558  90 04 00 04 */	stw r0, 4(r4)
/* 8029F61C 0029C55C  38 BE 00 30 */	addi r5, r30, 0x30
/* 8029F620 0029C560  38 03 CF 54 */	addi r0, r3, __vt__Q34Game12Hanachirashi16StateGroundFlick@l
/* 8029F624 0029C564  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F628 0029C568  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F62C 0029C56C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F630 0029C570  90 04 00 00 */	stw r0, 0(r4)
.L_8029F634:
/* 8029F634 0029C574  7F E3 FB 78 */	mr r3, r31
/* 8029F638 0029C578  4B E9 12 D1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F63C 0029C57C  38 60 00 10 */	li r3, 0x10
/* 8029F640 0029C580  4B D8 48 65 */	bl __nw__FUl
/* 8029F644 0029C584  7C 64 1B 79 */	or. r4, r3, r3
/* 8029F648 0029C588  41 82 00 40 */	beq .L_8029F688
/* 8029F64C 0029C58C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029F650 0029C590  3C A0 80 4D */	lis r5, __vt__Q34Game12Hanachirashi5State@ha
/* 8029F654 0029C594  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029F658 0029C598  3C 60 80 4D */	lis r3, __vt__Q34Game12Hanachirashi10StateLaugh@ha
/* 8029F65C 0029C59C  90 04 00 00 */	stw r0, 0(r4)
/* 8029F660 0029C5A0  38 00 00 0C */	li r0, 0xc
/* 8029F664 0029C5A4  38 E0 00 00 */	li r7, 0
/* 8029F668 0029C5A8  38 C5 D1 04 */	addi r6, r5, __vt__Q34Game12Hanachirashi5State@l
/* 8029F66C 0029C5AC  90 04 00 04 */	stw r0, 4(r4)
/* 8029F670 0029C5B0  38 A2 D9 F0 */	addi r5, r2, lbl_8051BD50@sda21
/* 8029F674 0029C5B4  38 03 CF 30 */	addi r0, r3, __vt__Q34Game12Hanachirashi10StateLaugh@l
/* 8029F678 0029C5B8  90 E4 00 08 */	stw r7, 8(r4)
/* 8029F67C 0029C5BC  90 C4 00 00 */	stw r6, 0(r4)
/* 8029F680 0029C5C0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029F684 0029C5C4  90 04 00 00 */	stw r0, 0(r4)
.L_8029F688:
/* 8029F688 0029C5C8  7F E3 FB 78 */	mr r3, r31
/* 8029F68C 0029C5CC  4B E9 12 7D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029F690 0029C5D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F694 0029C5D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029F698 0029C5D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029F69C 0029C5DC  7C 08 03 A6 */	mtlr r0
/* 8029F6A0 0029C5E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F6A4 0029C5E4  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi3FSMFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8029F6A8 0029C5E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F6AC 0029C5EC  7C 08 02 A6 */	mflr r0
/* 8029F6B0 0029C5F0  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029F6B4 0029C5F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F6B8 0029C5F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029F6BC 0029C5FC  7C 9F 23 78 */	mr r31, r4
/* 8029F6C0 0029C600  7F E3 FB 78 */	mr r3, r31
/* 8029F6C4 0029C604  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029F6C8 0029C608  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8029F6CC 0029C60C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8029F6D0 0029C610  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029F6D4 0029C614  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8029F6D8 0029C618  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8029F6DC 0029C61C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8029F6E0 0029C620  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8029F6E4 0029C624  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8029F6E8 0029C628  4B E6 60 39 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8029F6EC 0029C62C  7F E3 FB 78 */	mr r3, r31
/* 8029F6F0 0029C630  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029F6F4 0029C634  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 8029F6F8 0029C638  7D 89 03 A6 */	mtctr r12
/* 8029F6FC 0029C63C  4E 80 04 21 */	bctrl 
/* 8029F700 0029C640  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029F704 0029C644  41 82 00 18 */	beq .L_8029F71C
/* 8029F708 0029C648  7F E3 FB 78 */	mr r3, r31
/* 8029F70C 0029C64C  38 80 00 00 */	li r4, 0
/* 8029F710 0029C650  38 A0 00 00 */	li r5, 0
/* 8029F714 0029C654  4B E6 58 F1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8029F718 0029C658  48 00 00 14 */	b .L_8029F72C
.L_8029F71C:
/* 8029F71C 0029C65C  7F E3 FB 78 */	mr r3, r31
/* 8029F720 0029C660  38 80 00 01 */	li r4, 1
/* 8029F724 0029C664  38 A0 00 00 */	li r5, 0
/* 8029F728 0029C668  4B E6 58 DD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_8029F72C:
/* 8029F72C 0029C66C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8029F730 0029C670  7F E3 FB 78 */	mr r3, r31
/* 8029F734 0029C674  60 00 00 04 */	ori r0, r0, 4
/* 8029F738 0029C678  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8029F73C 0029C67C  48 00 49 11 */	bl startDeadEffect__Q34Game12Hanachirashi3ObjFv
/* 8029F740 0029C680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F744 0029C684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029F748 0029C688  7C 08 03 A6 */	mtlr r0
/* 8029F74C 0029C68C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F750 0029C690  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase, global
/* 8029F754 0029C694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F758 0029C698  7C 08 02 A6 */	mflr r0
/* 8029F75C 0029C69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F760 0029C6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029F764 0029C6A4  7C 9F 23 78 */	mr r31, r4
/* 8029F768 0029C6A8  7F E3 FB 78 */	mr r3, r31
/* 8029F76C 0029C6AC  4B E6 7B DD */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 8029F770 0029C6B0  2C 03 00 00 */	cmpwi r3, 0
/* 8029F774 0029C6B4  40 82 00 24 */	bne .L_8029F798
/* 8029F778 0029C6B8  7F E3 FB 78 */	mr r3, r31
/* 8029F77C 0029C6BC  4B E6 5A F1 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 8029F780 0029C6C0  C0 02 D9 FC */	lfs f0, lbl_8051BD5C@sda21(r2)
/* 8029F784 0029C6C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029F788 0029C6C8  40 81 00 2C */	ble .L_8029F7B4
/* 8029F78C 0029C6CC  7F E3 FB 78 */	mr r3, r31
/* 8029F790 0029C6D0  48 00 2E F9 */	bl subShadowRadius__Q34Game12Hanachirashi3ObjFv
/* 8029F794 0029C6D4  48 00 00 20 */	b .L_8029F7B4
.L_8029F798:
/* 8029F798 0029C6D8  7F E3 FB 78 */	mr r3, r31
/* 8029F79C 0029C6DC  4B E6 5A D1 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 8029F7A0 0029C6E0  C0 02 DA 00 */	lfs f0, lbl_8051BD60@sda21(r2)
/* 8029F7A4 0029C6E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029F7A8 0029C6E8  40 81 00 0C */	ble .L_8029F7B4
/* 8029F7AC 0029C6EC  7F E3 FB 78 */	mr r3, r31
/* 8029F7B0 0029C6F0  48 00 2E D9 */	bl subShadowRadius__Q34Game12Hanachirashi3ObjFv
.L_8029F7B4:
/* 8029F7B4 0029C6F4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8029F7B8 0029C6F8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8029F7BC 0029C6FC  28 00 00 00 */	cmplwi r0, 0
/* 8029F7C0 0029C700  41 82 00 38 */	beq .L_8029F7F8
/* 8029F7C4 0029C704  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8029F7C8 0029C708  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8029F7CC 0029C70C  40 82 00 2C */	bne .L_8029F7F8
/* 8029F7D0 0029C710  7F E3 FB 78 */	mr r3, r31
/* 8029F7D4 0029C714  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029F7D8 0029C718  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 8029F7DC 0029C71C  7D 89 03 A6 */	mtctr r12
/* 8029F7E0 0029C720  4E 80 04 21 */	bctrl 
/* 8029F7E4 0029C724  7F E3 FB 78 */	mr r3, r31
/* 8029F7E8 0029C728  48 00 49 A5 */	bl finishWindEffect__Q34Game12Hanachirashi3ObjFv
/* 8029F7EC 0029C72C  7F E3 FB 78 */	mr r3, r31
/* 8029F7F0 0029C730  38 80 00 00 */	li r4, 0
/* 8029F7F4 0029C734  4B E9 B8 FD */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8029F7F8:
/* 8029F7F8 0029C738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F7FC 0029C73C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029F800 0029C740  7C 08 03 A6 */	mtlr r0
/* 8029F804 0029C744  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F808 0029C748  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase, global
/* 8029F80C 0029C74C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8029F810 0029C750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F814 0029C754  7C 08 02 A6 */	mflr r0
/* 8029F818 0029C758  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029F81C 0029C75C  7C 83 23 78 */	mr r3, r4
/* 8029F820 0029C760  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F824 0029C764  38 00 00 00 */	li r0, 0
/* 8029F828 0029C768  38 A0 00 00 */	li r5, 0
/* 8029F82C 0029C76C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 8029F830 0029C770  38 80 00 05 */	li r4, 5
/* 8029F834 0029C774  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 8029F838 0029C778  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 8029F83C 0029C77C  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 8029F840 0029C780  90 03 02 30 */	stw r0, 0x230(r3)
/* 8029F844 0029C784  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 8029F848 0029C788  60 00 00 04 */	ori r0, r0, 4
/* 8029F84C 0029C78C  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 8029F850 0029C790  4B E6 57 B5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8029F854 0029C794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F858 0029C798  7C 08 03 A6 */	mtlr r0
/* 8029F85C 0029C79C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F860 0029C7A0  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase, global
/* 8029F864 0029C7A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F868 0029C7A8  7C 08 02 A6 */	mflr r0
/* 8029F86C 0029C7AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F870 0029C7B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029F874 0029C7B4  7C 9F 23 78 */	mr r31, r4
/* 8029F878 0029C7B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8029F87C 0029C7BC  7C 7E 1B 78 */	mr r30, r3
/* 8029F880 0029C7C0  7F E3 FB 78 */	mr r3, r31
/* 8029F884 0029C7C4  48 00 2A 9D */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 8029F888 0029C7C8  7F E3 FB 78 */	mr r3, r31
/* 8029F88C 0029C7CC  48 00 2F 35 */	bl getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
/* 8029F890 0029C7D0  28 03 00 00 */	cmplwi r3, 0
/* 8029F894 0029C7D4  40 82 00 0C */	bne .L_8029F8A0
/* 8029F898 0029C7D8  7F E3 FB 78 */	mr r3, r31
/* 8029F89C 0029C7DC  48 00 35 E9 */	bl isAttackable__Q34Game12Hanachirashi3ObjFv
.L_8029F8A0:
/* 8029F8A0 0029C7E0  28 03 00 00 */	cmplwi r3, 0
/* 8029F8A4 0029C7E4  41 82 00 2C */	beq .L_8029F8D0
/* 8029F8A8 0029C7E8  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8029F8AC 0029C7EC  7F C3 F3 78 */	mr r3, r30
/* 8029F8B0 0029C7F0  7F E4 FB 78 */	mr r4, r31
/* 8029F8B4 0029C7F4  38 A0 00 03 */	li r5, 3
/* 8029F8B8 0029C7F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029F8BC 0029C7FC  38 C0 00 00 */	li r6, 0
/* 8029F8C0 0029C800  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029F8C4 0029C804  7D 89 03 A6 */	mtctr r12
/* 8029F8C8 0029C808  4E 80 04 21 */	bctrl 
/* 8029F8CC 0029C80C  48 00 00 38 */	b .L_8029F904
.L_8029F8D0:
/* 8029F8D0 0029C810  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8029F8D4 0029C814  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8029F8D8 0029C818  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 8029F8DC 0029C81C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029F8E0 0029C820  40 81 00 24 */	ble .L_8029F904
/* 8029F8E4 0029C824  7F C3 F3 78 */	mr r3, r30
/* 8029F8E8 0029C828  7F E4 FB 78 */	mr r4, r31
/* 8029F8EC 0029C82C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029F8F0 0029C830  38 A0 00 02 */	li r5, 2
/* 8029F8F4 0029C834  38 C0 00 00 */	li r6, 0
/* 8029F8F8 0029C838  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029F8FC 0029C83C  7D 89 03 A6 */	mtctr r12
/* 8029F900 0029C840  4E 80 04 21 */	bctrl 
.L_8029F904:
/* 8029F904 0029C844  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8029F908 0029C848  7F E3 FB 78 */	mr r3, r31
/* 8029F90C 0029C84C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8029F910 0029C850  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8029F914 0029C854  EC 01 00 2A */	fadds f0, f1, f0
/* 8029F918 0029C858  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8029F91C 0029C85C  48 00 2D C9 */	bl getFlyingNextState__Q34Game12Hanachirashi3ObjFv
/* 8029F920 0029C860  7C 65 1B 79 */	or. r5, r3, r3
/* 8029F924 0029C864  41 80 00 24 */	blt .L_8029F948
/* 8029F928 0029C868  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029F92C 0029C86C  7F C3 F3 78 */	mr r3, r30
/* 8029F930 0029C870  7F E4 FB 78 */	mr r4, r31
/* 8029F934 0029C874  38 C0 00 00 */	li r6, 0
/* 8029F938 0029C878  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029F93C 0029C87C  7D 89 03 A6 */	mtctr r12
/* 8029F940 0029C880  4E 80 04 21 */	bctrl 
/* 8029F944 0029C884  48 00 00 40 */	b .L_8029F984
.L_8029F948:
/* 8029F948 0029C888  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8029F94C 0029C88C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8029F950 0029C890  28 00 00 00 */	cmplwi r0, 0
/* 8029F954 0029C894  41 82 00 30 */	beq .L_8029F984
/* 8029F958 0029C898  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8029F95C 0029C89C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8029F960 0029C8A0  40 82 00 24 */	bne .L_8029F984
/* 8029F964 0029C8A4  7F C3 F3 78 */	mr r3, r30
/* 8029F968 0029C8A8  7F E4 FB 78 */	mr r4, r31
/* 8029F96C 0029C8AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029F970 0029C8B0  38 A0 00 01 */	li r5, 1
/* 8029F974 0029C8B4  38 C0 00 00 */	li r6, 0
/* 8029F978 0029C8B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029F97C 0029C8BC  7D 89 03 A6 */	mtctr r12
/* 8029F980 0029C8C0  4E 80 04 21 */	bctrl 
.L_8029F984:
/* 8029F984 0029C8C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F988 0029C8C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029F98C 0029C8CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029F990 0029C8D0  7C 08 03 A6 */	mtlr r0
/* 8029F994 0029C8D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F998 0029C8D8  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase, global
/* 8029F99C 0029C8DC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8029F9A0 0029C8E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029F9A4 0029C8E4  7C 08 02 A6 */	mflr r0
/* 8029F9A8 0029C8E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029F9AC 0029C8EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029F9B0 0029C8F0  7C 9F 23 78 */	mr r31, r4
/* 8029F9B4 0029C8F4  7F E3 FB 78 */	mr r3, r31
/* 8029F9B8 0029C8F8  48 00 2A 85 */	bl setRandTarget__Q34Game12Hanachirashi3ObjFv
/* 8029F9BC 0029C8FC  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029F9C0 0029C900  38 00 00 00 */	li r0, 0
/* 8029F9C4 0029C904  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8029F9C8 0029C908  90 1F 02 30 */	stw r0, 0x230(r31)
/* 8029F9CC 0029C90C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8029F9D0 0029C910  60 00 00 04 */	ori r0, r0, 4
/* 8029F9D4 0029C914  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8029F9D8 0029C918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029F9DC 0029C91C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029F9E0 0029C920  7C 08 03 A6 */	mtlr r0
/* 8029F9E4 0029C924  38 21 00 10 */	addi r1, r1, 0x10
/* 8029F9E8 0029C928  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase, global
/* 8029F9EC 0029C92C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8029F9F0 0029C930  7C 08 02 A6 */	mflr r0
/* 8029F9F4 0029C934  90 01 00 44 */	stw r0, 0x44(r1)
/* 8029F9F8 0029C938  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8029F9FC 0029C93C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8029FA00 0029C940  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8029FA04 0029C944  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8029FA08 0029C948  7C 9F 23 78 */	mr r31, r4
/* 8029FA0C 0029C94C  7C 7E 1B 78 */	mr r30, r3
/* 8029FA10 0029C950  7F E3 FB 78 */	mr r3, r31
/* 8029FA14 0029C954  48 00 29 0D */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 8029FA18 0029C958  7F E4 FB 78 */	mr r4, r31
/* 8029FA1C 0029C95C  38 61 00 08 */	addi r3, r1, 8
/* 8029FA20 0029C960  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029FA24 0029C964  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029FA28 0029C968  7D 89 03 A6 */	mtctr r12
/* 8029FA2C 0029C96C  4E 80 04 21 */	bctrl 
/* 8029FA30 0029C970  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8029FA34 0029C974  7F E3 FB 78 */	mr r3, r31
/* 8029FA38 0029C978  C0 BF 02 E0 */	lfs f5, 0x2e0(r31)
/* 8029FA3C 0029C97C  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 8029FA40 0029C980  EC 40 28 28 */	fsubs f2, f0, f5
/* 8029FA44 0029C984  C0 01 00 08 */	lfs f0, 8(r1)
/* 8029FA48 0029C988  C0 9F 02 DC */	lfs f4, 0x2dc(r31)
/* 8029FA4C 0029C98C  EC 60 08 28 */	fsubs f3, f0, f1
/* 8029FA50 0029C990  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8029FA54 0029C994  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8029FA58 0029C998  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8029FA5C 0029C99C  EF E3 00 FA */	fmadds f31, f3, f3, f0
/* 8029FA60 0029C9A0  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 8029FA64 0029C9A4  48 00 2D 5D */	bl getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
/* 8029FA68 0029C9A8  28 03 00 00 */	cmplwi r3, 0
/* 8029FA6C 0029C9AC  41 82 00 2C */	beq .L_8029FA98
/* 8029FA70 0029C9B0  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8029FA74 0029C9B4  7F C3 F3 78 */	mr r3, r30
/* 8029FA78 0029C9B8  7F E4 FB 78 */	mr r4, r31
/* 8029FA7C 0029C9BC  38 A0 00 03 */	li r5, 3
/* 8029FA80 0029C9C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029FA84 0029C9C4  38 C0 00 00 */	li r6, 0
/* 8029FA88 0029C9C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029FA8C 0029C9CC  7D 89 03 A6 */	mtctr r12
/* 8029FA90 0029C9D0  4E 80 04 21 */	bctrl 
/* 8029FA94 0029C9D4  48 00 00 58 */	b .L_8029FAEC
.L_8029FA98:
/* 8029FA98 0029C9D8  C0 02 DA 04 */	lfs f0, lbl_8051BD64@sda21(r2)
/* 8029FA9C 0029C9DC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8029FAA0 0029C9E0  41 80 00 14 */	blt .L_8029FAB4
/* 8029FAA4 0029C9E4  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8029FAA8 0029C9E8  C0 02 DA 08 */	lfs f0, lbl_8051BD68@sda21(r2)
/* 8029FAAC 0029C9EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029FAB0 0029C9F0  40 81 00 20 */	ble .L_8029FAD0
.L_8029FAB4:
/* 8029FAB4 0029C9F4  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FAB8 0029C9F8  7F E3 FB 78 */	mr r3, r31
/* 8029FABC 0029C9FC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8029FAC0 0029CA00  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8029FAC4 0029CA04  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8029FAC8 0029CA08  4B E6 57 D9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8029FACC 0029CA0C  48 00 00 20 */	b .L_8029FAEC
.L_8029FAD0:
/* 8029FAD0 0029CA10  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8029FAD4 0029CA14  7F E3 FB 78 */	mr r3, r31
/* 8029FAD8 0029CA18  38 81 00 14 */	addi r4, r1, 0x14
/* 8029FADC 0029CA1C  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 8029FAE0 0029CA20  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 8029FAE4 0029CA24  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 8029FAE8 0029CA28  4B E7 5A F5 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_8029FAEC:
/* 8029FAEC 0029CA2C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8029FAF0 0029CA30  7F E3 FB 78 */	mr r3, r31
/* 8029FAF4 0029CA34  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8029FAF8 0029CA38  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8029FAFC 0029CA3C  EC 01 00 2A */	fadds f0, f1, f0
/* 8029FB00 0029CA40  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8029FB04 0029CA44  48 00 2B E1 */	bl getFlyingNextState__Q34Game12Hanachirashi3ObjFv
/* 8029FB08 0029CA48  7C 65 1B 79 */	or. r5, r3, r3
/* 8029FB0C 0029CA4C  41 80 00 24 */	blt .L_8029FB30
/* 8029FB10 0029CA50  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029FB14 0029CA54  7F C3 F3 78 */	mr r3, r30
/* 8029FB18 0029CA58  7F E4 FB 78 */	mr r4, r31
/* 8029FB1C 0029CA5C  38 C0 00 00 */	li r6, 0
/* 8029FB20 0029CA60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029FB24 0029CA64  7D 89 03 A6 */	mtctr r12
/* 8029FB28 0029CA68  4E 80 04 21 */	bctrl 
/* 8029FB2C 0029CA6C  48 00 00 40 */	b .L_8029FB6C
.L_8029FB30:
/* 8029FB30 0029CA70  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8029FB34 0029CA74  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8029FB38 0029CA78  28 00 00 00 */	cmplwi r0, 0
/* 8029FB3C 0029CA7C  41 82 00 30 */	beq .L_8029FB6C
/* 8029FB40 0029CA80  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8029FB44 0029CA84  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8029FB48 0029CA88  40 82 00 24 */	bne .L_8029FB6C
/* 8029FB4C 0029CA8C  7F C3 F3 78 */	mr r3, r30
/* 8029FB50 0029CA90  7F E4 FB 78 */	mr r4, r31
/* 8029FB54 0029CA94  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029FB58 0029CA98  38 A0 00 01 */	li r5, 1
/* 8029FB5C 0029CA9C  38 C0 00 00 */	li r6, 0
/* 8029FB60 0029CAA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029FB64 0029CAA4  7D 89 03 A6 */	mtctr r12
/* 8029FB68 0029CAA8  4E 80 04 21 */	bctrl 
.L_8029FB6C:
/* 8029FB6C 0029CAAC  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8029FB70 0029CAB0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8029FB74 0029CAB4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8029FB78 0029CAB8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029FB7C 0029CABC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8029FB80 0029CAC0  7C 08 03 A6 */	mtlr r0
/* 8029FB84 0029CAC4  38 21 00 40 */	addi r1, r1, 0x40
/* 8029FB88 0029CAC8  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase, global
/* 8029FB8C 0029CACC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8029FB90 0029CAD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029FB94 0029CAD4  7C 08 02 A6 */	mflr r0
/* 8029FB98 0029CAD8  7C 83 23 78 */	mr r3, r4
/* 8029FB9C 0029CADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029FBA0 0029CAE0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029FBA4 0029CAE4  60 00 00 04 */	ori r0, r0, 4
/* 8029FBA8 0029CAE8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8029FBAC 0029CAEC  4B E6 1E 21 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8029FBB0 0029CAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029FBB4 0029CAF4  7C 08 03 A6 */	mtlr r0
/* 8029FBB8 0029CAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8029FBBC 0029CAFC  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase, global
/* 8029FBC0 0029CB00  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8029FBC4 0029CB04  7C 08 02 A6 */	mflr r0
/* 8029FBC8 0029CB08  90 01 01 34 */	stw r0, 0x134(r1)
/* 8029FBCC 0029CB0C  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8029FBD0 0029CB10  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8029FBD4 0029CB14  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8029FBD8 0029CB18  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 8029FBDC 0029CB1C  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8029FBE0 0029CB20  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8029FBE4 0029CB24  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 8029FBE8 0029CB28  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 8029FBEC 0029CB2C  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 8029FBF0 0029CB30  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 8029FBF4 0029CB34  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 8029FBF8 0029CB38  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 8029FBFC 0029CB3C  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 8029FC00 0029CB40  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 8029FC04 0029CB44  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 8029FC08 0029CB48  F3 01 00 B8 */	psq_st f24, 184(r1), 0, qr0
/* 8029FC0C 0029CB4C  DA E1 00 A0 */	stfd f23, 0xa0(r1)
/* 8029FC10 0029CB50  F2 E1 00 A8 */	psq_st f23, 168(r1), 0, qr0
/* 8029FC14 0029CB54  DA C1 00 90 */	stfd f22, 0x90(r1)
/* 8029FC18 0029CB58  F2 C1 00 98 */	psq_st f22, 152(r1), 0, qr0
/* 8029FC1C 0029CB5C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8029FC20 0029CB60  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8029FC24 0029CB64  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8029FC28 0029CB68  7C 9F 23 78 */	mr r31, r4
/* 8029FC2C 0029CB6C  7C 7E 1B 78 */	mr r30, r3
/* 8029FC30 0029CB70  7F E3 FB 78 */	mr r3, r31
/* 8029FC34 0029CB74  48 00 26 ED */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 8029FC38 0029CB78  7F E3 FB 78 */	mr r3, r31
/* 8029FC3C 0029CB7C  4B E6 76 C5 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 8029FC40 0029CB80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029FC44 0029CB84  40 82 03 A4 */	bne .L_8029FFE8
/* 8029FC48 0029CB88  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 8029FC4C 0029CB8C  28 1D 00 00 */	cmplwi r29, 0
/* 8029FC50 0029CB90  41 82 03 6C */	beq .L_8029FFBC
/* 8029FC54 0029CB94  7F E4 FB 78 */	mr r4, r31
/* 8029FC58 0029CB98  38 61 00 50 */	addi r3, r1, 0x50
/* 8029FC5C 0029CB9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029FC60 0029CBA0  C3 9F 01 98 */	lfs f28, 0x198(r31)
/* 8029FC64 0029CBA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029FC68 0029CBA8  C3 7F 01 A0 */	lfs f27, 0x1a0(r31)
/* 8029FC6C 0029CBAC  7D 89 03 A6 */	mtctr r12
/* 8029FC70 0029CBB0  4E 80 04 21 */	bctrl 
/* 8029FC74 0029CBB4  7F A4 EB 78 */	mr r4, r29
/* 8029FC78 0029CBB8  38 61 00 44 */	addi r3, r1, 0x44
/* 8029FC7C 0029CBBC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8029FC80 0029CBC0  C3 41 00 50 */	lfs f26, 0x50(r1)
/* 8029FC84 0029CBC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029FC88 0029CBC8  C3 21 00 58 */	lfs f25, 0x58(r1)
/* 8029FC8C 0029CBCC  7D 89 03 A6 */	mtctr r12
/* 8029FC90 0029CBD0  4E 80 04 21 */	bctrl 
/* 8029FC94 0029CBD4  C0 A1 00 44 */	lfs f5, 0x44(r1)
/* 8029FC98 0029CBD8  C0 C1 00 4C */	lfs f6, 0x4c(r1)
/* 8029FC9C 0029CBDC  EC 7A 28 28 */	fsubs f3, f26, f5
/* 8029FCA0 0029CBE0  C0 22 D9 F8 */	lfs f1, lbl_8051BD58@sda21(r2)
/* 8029FCA4 0029CBE4  EC 99 30 28 */	fsubs f4, f25, f6
/* 8029FCA8 0029CBE8  EC 03 08 FA */	fmadds f0, f3, f3, f1
/* 8029FCAC 0029CBEC  EC 44 01 32 */	fmuls f2, f4, f4
/* 8029FCB0 0029CBF0  EC 42 00 2A */	fadds f2, f2, f0
/* 8029FCB4 0029CBF4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8029FCB8 0029CBF8  40 81 00 14 */	ble .L_8029FCCC
/* 8029FCBC 0029CBFC  40 81 00 14 */	ble .L_8029FCD0
/* 8029FCC0 0029CC00  FC 00 10 34 */	frsqrte f0, f2
/* 8029FCC4 0029CC04  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8029FCC8 0029CC08  48 00 00 08 */	b .L_8029FCD0
.L_8029FCCC:
/* 8029FCCC 0029CC0C  FC 40 08 90 */	fmr f2, f1
.L_8029FCD0:
/* 8029FCD0 0029CC10  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FCD4 0029CC14  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8029FCD8 0029CC18  40 81 00 14 */	ble .L_8029FCEC
/* 8029FCDC 0029CC1C  C0 02 DA 0C */	lfs f0, lbl_8051BD6C@sda21(r2)
/* 8029FCE0 0029CC20  EC 00 10 24 */	fdivs f0, f0, f2
/* 8029FCE4 0029CC24  EC 63 00 32 */	fmuls f3, f3, f0
/* 8029FCE8 0029CC28  EC 84 00 32 */	fmuls f4, f4, f0
.L_8029FCEC:
/* 8029FCEC 0029CC2C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8029FCF0 0029CC30  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8029FCF4 0029CC34  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8029FCF8 0029CC38  C0 04 05 64 */	lfs f0, 0x564(r4)
/* 8029FCFC 0029CC3C  EC 63 00 32 */	fmuls f3, f3, f0
/* 8029FD00 0029CC40  EC 84 00 32 */	fmuls f4, f4, f0
/* 8029FD04 0029CC44  EF 05 18 2A */	fadds f24, f5, f3
/* 8029FD08 0029CC48  EE E6 20 2A */	fadds f23, f6, f4
/* 8029FD0C 0029CC4C  EC 38 D0 28 */	fsubs f1, f24, f26
/* 8029FD10 0029CC50  EC 57 C8 28 */	fsubs f2, f23, f25
/* 8029FD14 0029CC54  4B D9 53 F5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8029FD18 0029CC58  81 9D 00 00 */	lwz r12, 0(r29)
/* 8029FD1C 0029CC5C  FF A0 08 90 */	fmr f29, f1
/* 8029FD20 0029CC60  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8029FD24 0029CC64  7F A4 EB 78 */	mr r4, r29
/* 8029FD28 0029CC68  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029FD2C 0029CC6C  38 61 00 20 */	addi r3, r1, 0x20
/* 8029FD30 0029CC70  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 8029FD34 0029CC74  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 8029FD38 0029CC78  7D 89 03 A6 */	mtctr r12
/* 8029FD3C 0029CC7C  4E 80 04 21 */	bctrl 
/* 8029FD40 0029CC80  7F E4 FB 78 */	mr r4, r31
/* 8029FD44 0029CC84  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8029FD48 0029CC88  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029FD4C 0029CC8C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8029FD50 0029CC90  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8029FD54 0029CC94  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8029FD58 0029CC98  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029FD5C 0029CC9C  D0 41 00 08 */	stfs f2, 8(r1)
/* 8029FD60 0029CCA0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8029FD64 0029CCA4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8029FD68 0029CCA8  7D 89 03 A6 */	mtctr r12
/* 8029FD6C 0029CCAC  4E 80 04 21 */	bctrl 
/* 8029FD70 0029CCB0  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 8029FD74 0029CCB4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8029FD78 0029CCB8  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 8029FD7C 0029CCBC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8029FD80 0029CCC0  C0 21 00 08 */	lfs f1, 8(r1)
/* 8029FD84 0029CCC4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8029FD88 0029CCC8  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 8029FD8C 0029CCCC  EC 21 28 28 */	fsubs f1, f1, f5
/* 8029FD90 0029CCD0  EC 40 18 28 */	fsubs f2, f0, f3
/* 8029FD94 0029CCD4  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8029FD98 0029CCD8  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8029FD9C 0029CCDC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8029FDA0 0029CCE0  4B D9 53 69 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8029FDA4 0029CCE4  48 17 1E 2D */	bl roundAng__Ff
/* 8029FDA8 0029CCE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029FDAC 0029CCEC  FE C0 08 90 */	fmr f22, f1
/* 8029FDB0 0029CCF0  7F E3 FB 78 */	mr r3, r31
/* 8029FDB4 0029CCF4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8029FDB8 0029CCF8  7D 89 03 A6 */	mtctr r12
/* 8029FDBC 0029CCFC  4E 80 04 21 */	bctrl 
/* 8029FDC0 0029CD00  FC 40 08 90 */	fmr f2, f1
/* 8029FDC4 0029CD04  FC 20 B0 90 */	fmr f1, f22
/* 8029FDC8 0029CD08  48 17 1E 35 */	bl angDist__Fff
/* 8029FDCC 0029CD0C  EF E1 07 F2 */	fmuls f31, f1, f31
/* 8029FDD0 0029CD10  C0 02 DA 14 */	lfs f0, lbl_8051BD74@sda21(r2)
/* 8029FDD4 0029CD14  C0 22 DA 10 */	lfs f1, lbl_8051BD70@sda21(r2)
/* 8029FDD8 0029CD18  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8029FDDC 0029CD1C  FC 40 FA 10 */	fabs f2, f31
/* 8029FDE0 0029CD20  EC 21 00 32 */	fmuls f1, f1, f0
/* 8029FDE4 0029CD24  FC 00 10 18 */	frsp f0, f2
/* 8029FDE8 0029CD28  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8029FDEC 0029CD2C  40 81 00 1C */	ble .L_8029FE08
/* 8029FDF0 0029CD30  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FDF4 0029CD34  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8029FDF8 0029CD38  40 81 00 0C */	ble .L_8029FE04
/* 8029FDFC 0029CD3C  FF E0 08 90 */	fmr f31, f1
/* 8029FE00 0029CD40  48 00 00 08 */	b .L_8029FE08
.L_8029FE04:
/* 8029FE04 0029CD44  FF E0 08 50 */	fneg f31, f1
.L_8029FE08:
/* 8029FE08 0029CD48  7F E3 FB 78 */	mr r3, r31
/* 8029FE0C 0029CD4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029FE10 0029CD50  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8029FE14 0029CD54  7D 89 03 A6 */	mtctr r12
/* 8029FE18 0029CD58  4E 80 04 21 */	bctrl 
/* 8029FE1C 0029CD5C  EC 3F 08 2A */	fadds f1, f31, f1
/* 8029FE20 0029CD60  48 17 1D B1 */	bl roundAng__Ff
/* 8029FE24 0029CD64  EC 79 B8 28 */	fsubs f3, f25, f23
/* 8029FE28 0029CD68  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8029FE2C 0029CD6C  EC 9A C0 28 */	fsubs f4, f26, f24
/* 8029FE30 0029CD70  C0 02 DA 18 */	lfs f0, lbl_8051BD78@sda21(r2)
/* 8029FE34 0029CD74  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 8029FE38 0029CD78  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8029FE3C 0029CD7C  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 8029FE40 0029CD80  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 8029FE44 0029CD84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029FE48 0029CD88  40 81 00 D4 */	ble .L_8029FF1C
/* 8029FE4C 0029CD8C  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FE50 0029CD90  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8029FE54 0029CD94  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8029FE58 0029CD98  C0 64 02 E4 */	lfs f3, 0x2e4(r4)
/* 8029FE5C 0029CD9C  40 80 00 30 */	bge .L_8029FE8C
/* 8029FE60 0029CDA0  C0 02 DA 1C */	lfs f0, lbl_8051BD7C@sda21(r2)
/* 8029FE64 0029CDA4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8029FE68 0029CDA8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8029FE6C 0029CDAC  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8029FE70 0029CDB0  FC 00 00 1E */	fctiwz f0, f0
/* 8029FE74 0029CDB4  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8029FE78 0029CDB8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8029FE7C 0029CDBC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029FE80 0029CDC0  7C 03 04 2E */	lfsx f0, r3, r0
/* 8029FE84 0029CDC4  FC 40 00 50 */	fneg f2, f0
/* 8029FE88 0029CDC8  48 00 00 28 */	b .L_8029FEB0
.L_8029FE8C:
/* 8029FE8C 0029CDCC  C0 02 DA 20 */	lfs f0, lbl_8051BD80@sda21(r2)
/* 8029FE90 0029CDD0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8029FE94 0029CDD4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8029FE98 0029CDD8  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8029FE9C 0029CDDC  FC 00 00 1E */	fctiwz f0, f0
/* 8029FEA0 0029CDE0  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8029FEA4 0029CDE4  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8029FEA8 0029CDE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029FEAC 0029CDEC  7C 43 04 2E */	lfsx f2, r3, r0
.L_8029FEB0:
/* 8029FEB0 0029CDF0  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FEB4 0029CDF4  EC 63 00 B2 */	fmuls f3, f3, f2
/* 8029FEB8 0029CDF8  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 8029FEBC 0029CDFC  C0 5F 01 D8 */	lfs f2, 0x1d8(r31)
/* 8029FEC0 0029CE00  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8029FEC4 0029CE04  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 8029FEC8 0029CE08  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8029FECC 0029CE0C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8029FED0 0029CE10  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8029FED4 0029CE14  40 80 00 08 */	bge .L_8029FEDC
/* 8029FED8 0029CE18  FF A0 E8 50 */	fneg f29, f29
.L_8029FEDC:
/* 8029FEDC 0029CE1C  C0 02 DA 20 */	lfs f0, lbl_8051BD80@sda21(r2)
/* 8029FEE0 0029CE20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8029FEE4 0029CE24  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8029FEE8 0029CE28  C0 24 02 E4 */	lfs f1, 0x2e4(r4)
/* 8029FEEC 0029CE2C  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8029FEF0 0029CE30  FC 00 00 1E */	fctiwz f0, f0
/* 8029FEF4 0029CE34  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 8029FEF8 0029CE38  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8029FEFC 0029CE3C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8029FF00 0029CE40  7C 63 02 14 */	add r3, r3, r0
/* 8029FF04 0029CE44  C0 03 00 04 */	lfs f0, 4(r3)
/* 8029FF08 0029CE48  D0 7F 01 D4 */	stfs f3, 0x1d4(r31)
/* 8029FF0C 0029CE4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8029FF10 0029CE50  D0 5F 01 D8 */	stfs f2, 0x1d8(r31)
/* 8029FF14 0029CE54  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8029FF18 0029CE58  48 00 00 14 */	b .L_8029FF2C
.L_8029FF1C:
/* 8029FF1C 0029CE5C  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FF20 0029CE60  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8029FF24 0029CE64  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8029FF28 0029CE68  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8029FF2C:
/* 8029FF2C 0029CE6C  EC 39 D8 28 */	fsubs f1, f25, f27
/* 8029FF30 0029CE70  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8029FF34 0029CE74  EC 5A E0 28 */	fsubs f2, f26, f28
/* 8029FF38 0029CE78  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 8029FF3C 0029CE7C  EC 21 00 72 */	fmuls f1, f1, f1
/* 8029FF40 0029CE80  EC 00 00 32 */	fmuls f0, f0, f0
/* 8029FF44 0029CE84  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8029FF48 0029CE88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029FF4C 0029CE8C  40 81 00 28 */	ble .L_8029FF74
/* 8029FF50 0029CE90  7F C3 F3 78 */	mr r3, r30
/* 8029FF54 0029CE94  7F E4 FB 78 */	mr r4, r31
/* 8029FF58 0029CE98  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029FF5C 0029CE9C  38 A0 00 04 */	li r5, 4
/* 8029FF60 0029CEA0  38 C0 00 00 */	li r6, 0
/* 8029FF64 0029CEA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029FF68 0029CEA8  7D 89 03 A6 */	mtctr r12
/* 8029FF6C 0029CEAC  4E 80 04 21 */	bctrl 
/* 8029FF70 0029CEB0  48 00 00 4C */	b .L_8029FFBC
.L_8029FF74:
/* 8029FF74 0029CEB4  7F E3 FB 78 */	mr r3, r31
/* 8029FF78 0029CEB8  48 00 2C 1D */	bl isTargetLost__Q34Game12Hanachirashi3ObjFv
/* 8029FF7C 0029CEBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029FF80 0029CEC0  41 82 00 3C */	beq .L_8029FFBC
/* 8029FF84 0029CEC4  7F E3 FB 78 */	mr r3, r31
/* 8029FF88 0029CEC8  48 00 28 39 */	bl getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
/* 8029FF8C 0029CECC  28 03 00 00 */	cmplwi r3, 0
/* 8029FF90 0029CED0  41 82 00 0C */	beq .L_8029FF9C
/* 8029FF94 0029CED4  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8029FF98 0029CED8  48 00 00 24 */	b .L_8029FFBC
.L_8029FF9C:
/* 8029FF9C 0029CEDC  7F C3 F3 78 */	mr r3, r30
/* 8029FFA0 0029CEE0  7F E4 FB 78 */	mr r4, r31
/* 8029FFA4 0029CEE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029FFA8 0029CEE8  38 A0 00 01 */	li r5, 1
/* 8029FFAC 0029CEEC  38 C0 00 00 */	li r6, 0
/* 8029FFB0 0029CEF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029FFB4 0029CEF4  7D 89 03 A6 */	mtctr r12
/* 8029FFB8 0029CEF8  4E 80 04 21 */	bctrl 
.L_8029FFBC:
/* 8029FFBC 0029CEFC  7F E3 FB 78 */	mr r3, r31
/* 8029FFC0 0029CF00  48 00 2E C5 */	bl isAttackable__Q34Game12Hanachirashi3ObjFv
/* 8029FFC4 0029CF04  28 03 00 00 */	cmplwi r3, 0
/* 8029FFC8 0029CF08  41 82 00 20 */	beq .L_8029FFE8
/* 8029FFCC 0029CF0C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8029FFD0 0029CF10  7F E3 FB 78 */	mr r3, r31
/* 8029FFD4 0029CF14  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 8029FFD8 0029CF18  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8029FFDC 0029CF1C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8029FFE0 0029CF20  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8029FFE4 0029CF24  4B E6 52 BD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8029FFE8:
/* 8029FFE8 0029CF28  7F E3 FB 78 */	mr r3, r31
/* 8029FFEC 0029CF2C  48 00 26 F9 */	bl getFlyingNextState__Q34Game12Hanachirashi3ObjFv
/* 8029FFF0 0029CF30  7C 65 1B 79 */	or. r5, r3, r3
/* 8029FFF4 0029CF34  41 80 00 24 */	blt .L_802A0018
/* 8029FFF8 0029CF38  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029FFFC 0029CF3C  7F C3 F3 78 */	mr r3, r30
/* 802A0000 0029CF40  7F E4 FB 78 */	mr r4, r31
/* 802A0004 0029CF44  38 C0 00 00 */	li r6, 0
/* 802A0008 0029CF48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A000C 0029CF4C  7D 89 03 A6 */	mtctr r12
/* 802A0010 0029CF50  4E 80 04 21 */	bctrl 
/* 802A0014 0029CF54  48 00 00 70 */	b .L_802A0084
.L_802A0018:
/* 802A0018 0029CF58  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A001C 0029CF5C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A0020 0029CF60  28 00 00 00 */	cmplwi r0, 0
/* 802A0024 0029CF64  41 82 00 60 */	beq .L_802A0084
/* 802A0028 0029CF68  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A002C 0029CF6C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A0030 0029CF70  40 82 00 54 */	bne .L_802A0084
/* 802A0034 0029CF74  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 802A0038 0029CF78  28 00 00 00 */	cmplwi r0, 0
/* 802A003C 0029CF7C  41 82 00 28 */	beq .L_802A0064
/* 802A0040 0029CF80  7F C3 F3 78 */	mr r3, r30
/* 802A0044 0029CF84  7F E4 FB 78 */	mr r4, r31
/* 802A0048 0029CF88  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A004C 0029CF8C  38 A0 00 05 */	li r5, 5
/* 802A0050 0029CF90  38 C0 00 00 */	li r6, 0
/* 802A0054 0029CF94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0058 0029CF98  7D 89 03 A6 */	mtctr r12
/* 802A005C 0029CF9C  4E 80 04 21 */	bctrl 
/* 802A0060 0029CFA0  48 00 00 24 */	b .L_802A0084
.L_802A0064:
/* 802A0064 0029CFA4  7F C3 F3 78 */	mr r3, r30
/* 802A0068 0029CFA8  7F E4 FB 78 */	mr r4, r31
/* 802A006C 0029CFAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0070 0029CFB0  38 A0 00 01 */	li r5, 1
/* 802A0074 0029CFB4  38 C0 00 00 */	li r6, 0
/* 802A0078 0029CFB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A007C 0029CFBC  7D 89 03 A6 */	mtctr r12
/* 802A0080 0029CFC0  4E 80 04 21 */	bctrl 
.L_802A0084:
/* 802A0084 0029CFC4  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 802A0088 0029CFC8  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 802A008C 0029CFCC  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 802A0090 0029CFD0  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 802A0094 0029CFD4  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 802A0098 0029CFD8  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 802A009C 0029CFDC  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 802A00A0 0029CFE0  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 802A00A4 0029CFE4  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 802A00A8 0029CFE8  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 802A00AC 0029CFEC  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 802A00B0 0029CFF0  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 802A00B4 0029CFF4  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 802A00B8 0029CFF8  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 802A00BC 0029CFFC  E3 01 00 B8 */	psq_l f24, 184(r1), 0, qr0
/* 802A00C0 0029D000  CB 01 00 B0 */	lfd f24, 0xb0(r1)
/* 802A00C4 0029D004  E2 E1 00 A8 */	psq_l f23, 168(r1), 0, qr0
/* 802A00C8 0029D008  CA E1 00 A0 */	lfd f23, 0xa0(r1)
/* 802A00CC 0029D00C  E2 C1 00 98 */	psq_l f22, 152(r1), 0, qr0
/* 802A00D0 0029D010  CA C1 00 90 */	lfd f22, 0x90(r1)
/* 802A00D4 0029D014  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 802A00D8 0029D018  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 802A00DC 0029D01C  80 01 01 34 */	lwz r0, 0x134(r1)
/* 802A00E0 0029D020  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 802A00E4 0029D024  7C 08 03 A6 */	mtlr r0
/* 802A00E8 0029D028  38 21 01 30 */	addi r1, r1, 0x130
/* 802A00EC 0029D02C  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase, global
/* 802A00F0 0029D030  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A00F4 0029D034  7C 08 02 A6 */	mflr r0
/* 802A00F8 0029D038  7C 83 23 78 */	mr r3, r4
/* 802A00FC 0029D03C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0100 0029D040  4B E6 18 7D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A0104 0029D044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0108 0029D048  7C 08 03 A6 */	mtlr r0
/* 802A010C 0029D04C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0110 0029D050  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A0114 0029D054  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802A0118 0029D058  7C 08 02 A6 */	mflr r0
/* 802A011C 0029D05C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A0120 0029D060  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802A0124 0029D064  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802A0128 0029D068  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802A012C 0029D06C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802A0130 0029D070  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A0134 0029D074  7C 9F 23 78 */	mr r31, r4
/* 802A0138 0029D078  80 84 02 30 */	lwz r4, 0x230(r4)
/* 802A013C 0029D07C  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802A0140 0029D080  28 04 00 00 */	cmplwi r4, 0
/* 802A0144 0029D084  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802A0148 0029D088  C3 DF 01 A0 */	lfs f30, 0x1a0(r31)
/* 802A014C 0029D08C  41 82 00 A8 */	beq .L_802A01F4
/* 802A0150 0029D090  81 84 00 00 */	lwz r12, 0(r4)
/* 802A0154 0029D094  38 61 00 08 */	addi r3, r1, 8
/* 802A0158 0029D098  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A015C 0029D09C  7D 89 03 A6 */	mtctr r12
/* 802A0160 0029D0A0  4E 80 04 21 */	bctrl 
/* 802A0164 0029D0A4  C0 C1 00 08 */	lfs f6, 8(r1)
/* 802A0168 0029D0A8  C0 E1 00 10 */	lfs f7, 0x10(r1)
/* 802A016C 0029D0AC  EC 7F 30 28 */	fsubs f3, f31, f6
/* 802A0170 0029D0B0  C0 82 D9 F8 */	lfs f4, lbl_8051BD58@sda21(r2)
/* 802A0174 0029D0B4  EC BE 38 28 */	fsubs f5, f30, f7
/* 802A0178 0029D0B8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802A017C 0029D0BC  EC 03 20 FA */	fmadds f0, f3, f3, f4
/* 802A0180 0029D0C0  EC 25 01 72 */	fmuls f1, f5, f5
/* 802A0184 0029D0C4  EC 21 00 2A */	fadds f1, f1, f0
/* 802A0188 0029D0C8  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 802A018C 0029D0CC  40 81 00 14 */	ble .L_802A01A0
/* 802A0190 0029D0D0  40 81 00 14 */	ble .L_802A01A4
/* 802A0194 0029D0D4  FC 00 08 34 */	frsqrte f0, f1
/* 802A0198 0029D0D8  EC 20 00 72 */	fmuls f1, f0, f1
/* 802A019C 0029D0DC  48 00 00 08 */	b .L_802A01A4
.L_802A01A0:
/* 802A01A0 0029D0E0  FC 20 20 90 */	fmr f1, f4
.L_802A01A4:
/* 802A01A4 0029D0E4  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A01A8 0029D0E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A01AC 0029D0EC  40 81 00 18 */	ble .L_802A01C4
/* 802A01B0 0029D0F0  C0 02 DA 0C */	lfs f0, lbl_8051BD6C@sda21(r2)
/* 802A01B4 0029D0F4  EC 00 08 24 */	fdivs f0, f0, f1
/* 802A01B8 0029D0F8  EC 63 00 32 */	fmuls f3, f3, f0
/* 802A01BC 0029D0FC  EC 84 00 32 */	fmuls f4, f4, f0
/* 802A01C0 0029D100  EC A5 00 32 */	fmuls f5, f5, f0
.L_802A01C4:
/* 802A01C4 0029D104  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A01C8 0029D108  C0 03 03 D4 */	lfs f0, 0x3d4(r3)
/* 802A01CC 0029D10C  EC 63 00 32 */	fmuls f3, f3, f0
/* 802A01D0 0029D110  EC 84 00 32 */	fmuls f4, f4, f0
/* 802A01D4 0029D114  EC A5 00 32 */	fmuls f5, f5, f0
/* 802A01D8 0029D118  EC 06 18 2A */	fadds f0, f6, f3
/* 802A01DC 0029D11C  EC 42 20 2A */	fadds f2, f2, f4
/* 802A01E0 0029D120  EC 27 28 2A */	fadds f1, f7, f5
/* 802A01E4 0029D124  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802A01E8 0029D128  D0 5F 02 DC */	stfs f2, 0x2dc(r31)
/* 802A01EC 0029D12C  D0 3F 02 E0 */	stfs f1, 0x2e0(r31)
/* 802A01F0 0029D130  48 00 00 10 */	b .L_802A0200
.L_802A01F4:
/* 802A01F4 0029D134  D3 FF 02 D8 */	stfs f31, 0x2d8(r31)
/* 802A01F8 0029D138  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 802A01FC 0029D13C  D3 DF 02 E0 */	stfs f30, 0x2e0(r31)
.L_802A0200:
/* 802A0200 0029D140  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802A0204 0029D144  7F E3 FB 78 */	mr r3, r31
/* 802A0208 0029D148  60 00 00 04 */	ori r0, r0, 4
/* 802A020C 0029D14C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802A0210 0029D150  4B E6 17 BD */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A0214 0029D154  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802A0218 0029D158  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802A021C 0029D15C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802A0220 0029D160  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802A0224 0029D164  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A0228 0029D168  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A022C 0029D16C  7C 08 03 A6 */	mtlr r0
/* 802A0230 0029D170  38 21 00 40 */	addi r1, r1, 0x40
/* 802A0234 0029D174  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase, global
/* 802A0238 0029D178  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802A023C 0029D17C  7C 08 02 A6 */	mflr r0
/* 802A0240 0029D180  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802A0244 0029D184  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802A0248 0029D188  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802A024C 0029D18C  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802A0250 0029D190  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802A0254 0029D194  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802A0258 0029D198  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802A025C 0029D19C  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802A0260 0029D1A0  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802A0264 0029D1A4  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802A0268 0029D1A8  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802A026C 0029D1AC  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802A0270 0029D1B0  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802A0274 0029D1B4  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802A0278 0029D1B8  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802A027C 0029D1BC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802A0280 0029D1C0  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802A0284 0029D1C4  7C 9F 23 78 */	mr r31, r4
/* 802A0288 0029D1C8  7C 7E 1B 78 */	mr r30, r3
/* 802A028C 0029D1CC  7F E3 FB 78 */	mr r3, r31
/* 802A0290 0029D1D0  48 00 20 91 */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 802A0294 0029D1D4  7F E4 FB 78 */	mr r4, r31
/* 802A0298 0029D1D8  38 61 00 44 */	addi r3, r1, 0x44
/* 802A029C 0029D1DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A02A0 0029D1E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A02A4 0029D1E4  7D 89 03 A6 */	mtctr r12
/* 802A02A8 0029D1E8  4E 80 04 21 */	bctrl 
/* 802A02AC 0029D1EC  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 802A02B0 0029D1F0  C3 BF 02 E0 */	lfs f29, 0x2e0(r31)
/* 802A02B4 0029D1F4  C3 81 00 44 */	lfs f28, 0x44(r1)
/* 802A02B8 0029D1F8  EC 3F E8 28 */	fsubs f1, f31, f29
/* 802A02BC 0029D1FC  C3 DF 02 D8 */	lfs f30, 0x2d8(r31)
/* 802A02C0 0029D200  C0 02 DA 04 */	lfs f0, lbl_8051BD64@sda21(r2)
/* 802A02C4 0029D204  EC 5C F0 28 */	fsubs f2, f28, f30
/* 802A02C8 0029D208  EC 21 00 72 */	fmuls f1, f1, f1
/* 802A02CC 0029D20C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802A02D0 0029D210  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A02D4 0029D214  40 80 00 28 */	bge .L_802A02FC
/* 802A02D8 0029D218  7F C3 F3 78 */	mr r3, r30
/* 802A02DC 0029D21C  7F E4 FB 78 */	mr r4, r31
/* 802A02E0 0029D220  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A02E4 0029D224  38 A0 00 03 */	li r5, 3
/* 802A02E8 0029D228  38 C0 00 00 */	li r6, 0
/* 802A02EC 0029D22C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A02F0 0029D230  7D 89 03 A6 */	mtctr r12
/* 802A02F4 0029D234  4E 80 04 21 */	bctrl 
/* 802A02F8 0029D238  48 00 02 00 */	b .L_802A04F8
.L_802A02FC:
/* 802A02FC 0029D23C  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 802A0300 0029D240  28 04 00 00 */	cmplwi r4, 0
/* 802A0304 0029D244  41 82 01 14 */	beq .L_802A0418
/* 802A0308 0029D248  81 84 00 00 */	lwz r12, 0(r4)
/* 802A030C 0029D24C  38 61 00 20 */	addi r3, r1, 0x20
/* 802A0310 0029D250  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A0314 0029D254  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A0318 0029D258  C3 45 03 34 */	lfs f26, 0x334(r5)
/* 802A031C 0029D25C  C3 65 03 0C */	lfs f27, 0x30c(r5)
/* 802A0320 0029D260  7D 89 03 A6 */	mtctr r12
/* 802A0324 0029D264  4E 80 04 21 */	bctrl 
/* 802A0328 0029D268  7F E4 FB 78 */	mr r4, r31
/* 802A032C 0029D26C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802A0330 0029D270  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A0334 0029D274  38 61 00 2C */	addi r3, r1, 0x2c
/* 802A0338 0029D278  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802A033C 0029D27C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802A0340 0029D280  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A0344 0029D284  D0 41 00 08 */	stfs f2, 8(r1)
/* 802A0348 0029D288  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802A034C 0029D28C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802A0350 0029D290  7D 89 03 A6 */	mtctr r12
/* 802A0354 0029D294  4E 80 04 21 */	bctrl 
/* 802A0358 0029D298  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 802A035C 0029D29C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802A0360 0029D2A0  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 802A0364 0029D2A4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802A0368 0029D2A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 802A036C 0029D2AC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A0370 0029D2B0  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 802A0374 0029D2B4  EC 21 28 28 */	fsubs f1, f1, f5
/* 802A0378 0029D2B8  EC 40 18 28 */	fsubs f2, f0, f3
/* 802A037C 0029D2BC  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 802A0380 0029D2C0  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 802A0384 0029D2C4  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 802A0388 0029D2C8  4B D9 4D 81 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802A038C 0029D2CC  48 17 18 45 */	bl roundAng__Ff
/* 802A0390 0029D2D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A0394 0029D2D4  FF 20 08 90 */	fmr f25, f1
/* 802A0398 0029D2D8  7F E3 FB 78 */	mr r3, r31
/* 802A039C 0029D2DC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A03A0 0029D2E0  7D 89 03 A6 */	mtctr r12
/* 802A03A4 0029D2E4  4E 80 04 21 */	bctrl 
/* 802A03A8 0029D2E8  FC 40 08 90 */	fmr f2, f1
/* 802A03AC 0029D2EC  FC 20 C8 90 */	fmr f1, f25
/* 802A03B0 0029D2F0  48 17 18 4D */	bl angDist__Fff
/* 802A03B4 0029D2F4  EF 61 06 F2 */	fmuls f27, f1, f27
/* 802A03B8 0029D2F8  C0 02 DA 14 */	lfs f0, lbl_8051BD74@sda21(r2)
/* 802A03BC 0029D2FC  C0 22 DA 10 */	lfs f1, lbl_8051BD70@sda21(r2)
/* 802A03C0 0029D300  EC 00 06 B2 */	fmuls f0, f0, f26
/* 802A03C4 0029D304  FC 40 DA 10 */	fabs f2, f27
/* 802A03C8 0029D308  EC 21 00 32 */	fmuls f1, f1, f0
/* 802A03CC 0029D30C  FC 00 10 18 */	frsp f0, f2
/* 802A03D0 0029D310  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802A03D4 0029D314  40 81 00 1C */	ble .L_802A03F0
/* 802A03D8 0029D318  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A03DC 0029D31C  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 802A03E0 0029D320  40 81 00 0C */	ble .L_802A03EC
/* 802A03E4 0029D324  FF 60 08 90 */	fmr f27, f1
/* 802A03E8 0029D328  48 00 00 08 */	b .L_802A03F0
.L_802A03EC:
/* 802A03EC 0029D32C  FF 60 08 50 */	fneg f27, f1
.L_802A03F0:
/* 802A03F0 0029D330  7F E3 FB 78 */	mr r3, r31
/* 802A03F4 0029D334  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A03F8 0029D338  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802A03FC 0029D33C  7D 89 03 A6 */	mtctr r12
/* 802A0400 0029D340  4E 80 04 21 */	bctrl 
/* 802A0404 0029D344  EC 3B 08 2A */	fadds f1, f27, f1
/* 802A0408 0029D348  48 17 17 C9 */	bl roundAng__Ff
/* 802A040C 0029D34C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 802A0410 0029D350  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802A0414 0029D354  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
.L_802A0418:
/* 802A0418 0029D358  EC 3E E0 28 */	fsubs f1, f30, f28
/* 802A041C 0029D35C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802A0420 0029D360  EC 5D F8 28 */	fsubs f2, f29, f31
/* 802A0424 0029D364  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802A0428 0029D368  4B D9 4C E1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802A042C 0029D36C  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0430 0029D370  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802A0434 0029D374  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0438 0029D378  C0 84 02 E4 */	lfs f4, 0x2e4(r4)
/* 802A043C 0029D37C  40 80 00 30 */	bge .L_802A046C
/* 802A0440 0029D380  C0 02 DA 1C */	lfs f0, lbl_8051BD7C@sda21(r2)
/* 802A0444 0029D384  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A0448 0029D388  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A044C 0029D38C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A0450 0029D390  FC 00 00 1E */	fctiwz f0, f0
/* 802A0454 0029D394  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 802A0458 0029D398  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802A045C 0029D39C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A0460 0029D3A0  7C 03 04 2E */	lfsx f0, r3, r0
/* 802A0464 0029D3A4  FC 60 00 50 */	fneg f3, f0
/* 802A0468 0029D3A8  48 00 00 28 */	b .L_802A0490
.L_802A046C:
/* 802A046C 0029D3AC  C0 02 DA 20 */	lfs f0, lbl_8051BD80@sda21(r2)
/* 802A0470 0029D3B0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A0474 0029D3B4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A0478 0029D3B8  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A047C 0029D3BC  FC 00 00 1E */	fctiwz f0, f0
/* 802A0480 0029D3C0  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802A0484 0029D3C4  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802A0488 0029D3C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A048C 0029D3CC  7C 63 04 2E */	lfsx f3, r3, r0
.L_802A0490:
/* 802A0490 0029D3D0  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0494 0029D3D4  EC 84 00 F2 */	fmuls f4, f4, f3
/* 802A0498 0029D3D8  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 802A049C 0029D3DC  C0 7F 01 D8 */	lfs f3, 0x1d8(r31)
/* 802A04A0 0029D3E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A04A4 0029D3E4  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 802A04A8 0029D3E8  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802A04AC 0029D3EC  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 802A04B0 0029D3F0  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802A04B4 0029D3F4  40 80 00 08 */	bge .L_802A04BC
/* 802A04B8 0029D3F8  FC 20 08 50 */	fneg f1, f1
.L_802A04BC:
/* 802A04BC 0029D3FC  C0 02 DA 20 */	lfs f0, lbl_8051BD80@sda21(r2)
/* 802A04C0 0029D400  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A04C4 0029D404  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A04C8 0029D408  C0 44 02 E4 */	lfs f2, 0x2e4(r4)
/* 802A04CC 0029D40C  EC 01 00 32 */	fmuls f0, f1, f0
/* 802A04D0 0029D410  FC 00 00 1E */	fctiwz f0, f0
/* 802A04D4 0029D414  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802A04D8 0029D418  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802A04DC 0029D41C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A04E0 0029D420  7C 63 02 14 */	add r3, r3, r0
/* 802A04E4 0029D424  C0 03 00 04 */	lfs f0, 4(r3)
/* 802A04E8 0029D428  D0 9F 01 D4 */	stfs f4, 0x1d4(r31)
/* 802A04EC 0029D42C  EC 02 00 32 */	fmuls f0, f2, f0
/* 802A04F0 0029D430  D0 7F 01 D8 */	stfs f3, 0x1d8(r31)
/* 802A04F4 0029D434  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802A04F8:
/* 802A04F8 0029D438  7F E3 FB 78 */	mr r3, r31
/* 802A04FC 0029D43C  48 00 21 E9 */	bl getFlyingNextState__Q34Game12Hanachirashi3ObjFv
/* 802A0500 0029D440  7C 65 1B 79 */	or. r5, r3, r3
/* 802A0504 0029D444  41 80 00 24 */	blt .L_802A0528
/* 802A0508 0029D448  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A050C 0029D44C  7F C3 F3 78 */	mr r3, r30
/* 802A0510 0029D450  7F E4 FB 78 */	mr r4, r31
/* 802A0514 0029D454  38 C0 00 00 */	li r6, 0
/* 802A0518 0029D458  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A051C 0029D45C  7D 89 03 A6 */	mtctr r12
/* 802A0520 0029D460  4E 80 04 21 */	bctrl 
/* 802A0524 0029D464  48 00 00 40 */	b .L_802A0564
.L_802A0528:
/* 802A0528 0029D468  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A052C 0029D46C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A0530 0029D470  28 00 00 00 */	cmplwi r0, 0
/* 802A0534 0029D474  41 82 00 30 */	beq .L_802A0564
/* 802A0538 0029D478  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A053C 0029D47C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A0540 0029D480  40 82 00 24 */	bne .L_802A0564
/* 802A0544 0029D484  7F C3 F3 78 */	mr r3, r30
/* 802A0548 0029D488  7F E4 FB 78 */	mr r4, r31
/* 802A054C 0029D48C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0550 0029D490  38 A0 00 01 */	li r5, 1
/* 802A0554 0029D494  38 C0 00 00 */	li r6, 0
/* 802A0558 0029D498  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A055C 0029D49C  7D 89 03 A6 */	mtctr r12
/* 802A0560 0029D4A0  4E 80 04 21 */	bctrl 
.L_802A0564:
/* 802A0564 0029D4A4  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802A0568 0029D4A8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802A056C 0029D4AC  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802A0570 0029D4B0  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802A0574 0029D4B4  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802A0578 0029D4B8  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802A057C 0029D4BC  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802A0580 0029D4C0  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802A0584 0029D4C4  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802A0588 0029D4C8  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802A058C 0029D4CC  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802A0590 0029D4D0  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802A0594 0029D4D4  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 802A0598 0029D4D8  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 802A059C 0029D4DC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802A05A0 0029D4E0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802A05A4 0029D4E4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802A05A8 0029D4E8  7C 08 03 A6 */	mtlr r0
/* 802A05AC 0029D4EC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802A05B0 0029D4F0  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase, global
/* 802A05B4 0029D4F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A05B8 0029D4F8  7C 08 02 A6 */	mflr r0
/* 802A05BC 0029D4FC  7C 83 23 78 */	mr r3, r4
/* 802A05C0 0029D500  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A05C4 0029D504  4B E6 13 B9 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A05C8 0029D508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A05CC 0029D50C  7C 08 03 A6 */	mtlr r0
/* 802A05D0 0029D510  38 21 00 10 */	addi r1, r1, 0x10
/* 802A05D4 0029D514  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A05D8 0029D518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A05DC 0029D51C  7C 08 02 A6 */	mflr r0
/* 802A05E0 0029D520  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A05E4 0029D524  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A05E8 0029D528  38 00 00 00 */	li r0, 0
/* 802A05EC 0029D52C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A05F0 0029D530  7C 9F 23 78 */	mr r31, r4
/* 802A05F4 0029D534  7F E3 FB 78 */	mr r3, r31
/* 802A05F8 0029D538  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802A05FC 0029D53C  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 802A0600 0029D540  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802A0604 0029D544  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802A0608 0029D548  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802A060C 0029D54C  60 00 00 04 */	ori r0, r0, 4
/* 802A0610 0029D550  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802A0614 0029D554  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802A0618 0029D558  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802A061C 0029D55C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802A0620 0029D560  4B E6 13 AD */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A0624 0029D564  7F E3 FB 78 */	mr r3, r31
/* 802A0628 0029D568  38 80 00 09 */	li r4, 9
/* 802A062C 0029D56C  38 A0 00 00 */	li r5, 0
/* 802A0630 0029D570  4B E6 49 D5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A0634 0029D574  38 60 FF FF */	li r3, -1
/* 802A0638 0029D578  38 00 00 00 */	li r0, 0
/* 802A063C 0029D57C  90 7F 02 C0 */	stw r3, 0x2c0(r31)
/* 802A0640 0029D580  7F E3 FB 78 */	mr r3, r31
/* 802A0644 0029D584  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0648 0029D588  98 1F 03 10 */	stb r0, 0x310(r31)
/* 802A064C 0029D58C  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 802A0650 0029D590  48 00 3A 79 */	bl createSuckEffect__Q34Game12Hanachirashi3ObjFv
/* 802A0654 0029D594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0658 0029D598  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A065C 0029D59C  7C 08 03 A6 */	mtlr r0
/* 802A0660 0029D5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0664 0029D5A4  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase, global
/* 802A0668 0029D5A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A066C 0029D5AC  7C 08 02 A6 */	mflr r0
/* 802A0670 0029D5B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0674 0029D5B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0678 0029D5B8  7C 9F 23 78 */	mr r31, r4
/* 802A067C 0029D5BC  93 C1 00 08 */	stw r30, 8(r1)
/* 802A0680 0029D5C0  7C 7E 1B 78 */	mr r30, r3
/* 802A0684 0029D5C4  7F E3 FB 78 */	mr r3, r31
/* 802A0688 0029D5C8  48 00 1C 99 */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 802A068C 0029D5CC  88 1F 03 10 */	lbz r0, 0x310(r31)
/* 802A0690 0029D5D0  28 00 00 00 */	cmplwi r0, 0
/* 802A0694 0029D5D4  41 82 00 1C */	beq .L_802A06B0
/* 802A0698 0029D5D8  7F E3 FB 78 */	mr r3, r31
/* 802A069C 0029D5DC  48 00 2F 09 */	bl windTarget__Q34Game12Hanachirashi3ObjFv
/* 802A06A0 0029D5E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A06A4 0029D5E4  41 82 00 0C */	beq .L_802A06B0
/* 802A06A8 0029D5E8  38 00 00 0C */	li r0, 0xc
/* 802A06AC 0029D5EC  90 1F 02 C0 */	stw r0, 0x2c0(r31)
.L_802A06B0:
/* 802A06B0 0029D5F0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802A06B4 0029D5F4  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A06B8 0029D5F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A06BC 0029D5FC  4C 40 13 82 */	cror 2, 0, 2
/* 802A06C0 0029D600  40 82 00 28 */	bne .L_802A06E8
/* 802A06C4 0029D604  7F C3 F3 78 */	mr r3, r30
/* 802A06C8 0029D608  7F E4 FB 78 */	mr r4, r31
/* 802A06CC 0029D60C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A06D0 0029D610  38 A0 00 00 */	li r5, 0
/* 802A06D4 0029D614  38 C0 00 00 */	li r6, 0
/* 802A06D8 0029D618  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A06DC 0029D61C  7D 89 03 A6 */	mtctr r12
/* 802A06E0 0029D620  4E 80 04 21 */	bctrl 
/* 802A06E4 0029D624  48 00 00 88 */	b .L_802A076C
.L_802A06E8:
/* 802A06E8 0029D628  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A06EC 0029D62C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A06F0 0029D630  28 00 00 00 */	cmplwi r0, 0
/* 802A06F4 0029D634  41 82 00 78 */	beq .L_802A076C
/* 802A06F8 0029D638  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A06FC 0029D63C  28 00 00 02 */	cmplwi r0, 2
/* 802A0700 0029D640  40 82 00 18 */	bne .L_802A0718
/* 802A0704 0029D644  38 00 00 01 */	li r0, 1
/* 802A0708 0029D648  7F E3 FB 78 */	mr r3, r31
/* 802A070C 0029D64C  98 1F 03 10 */	stb r0, 0x310(r31)
/* 802A0710 0029D650  48 00 39 ED */	bl startWindEffect__Q34Game12Hanachirashi3ObjFv
/* 802A0714 0029D654  48 00 00 58 */	b .L_802A076C
.L_802A0718:
/* 802A0718 0029D658  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A071C 0029D65C  40 82 00 50 */	bne .L_802A076C
/* 802A0720 0029D660  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802A0724 0029D664  2C 05 00 00 */	cmpwi r5, 0
/* 802A0728 0029D668  41 80 00 24 */	blt .L_802A074C
/* 802A072C 0029D66C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0730 0029D670  7F C3 F3 78 */	mr r3, r30
/* 802A0734 0029D674  7F E4 FB 78 */	mr r4, r31
/* 802A0738 0029D678  38 C0 00 00 */	li r6, 0
/* 802A073C 0029D67C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0740 0029D680  7D 89 03 A6 */	mtctr r12
/* 802A0744 0029D684  4E 80 04 21 */	bctrl 
/* 802A0748 0029D688  48 00 00 24 */	b .L_802A076C
.L_802A074C:
/* 802A074C 0029D68C  7F C3 F3 78 */	mr r3, r30
/* 802A0750 0029D690  7F E4 FB 78 */	mr r4, r31
/* 802A0754 0029D694  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0758 0029D698  38 A0 00 01 */	li r5, 1
/* 802A075C 0029D69C  38 C0 00 00 */	li r6, 0
/* 802A0760 0029D6A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0764 0029D6A4  7D 89 03 A6 */	mtctr r12
/* 802A0768 0029D6A8  4E 80 04 21 */	bctrl 
.L_802A076C:
/* 802A076C 0029D6AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0770 0029D6B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0774 0029D6B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A0778 0029D6B8  7C 08 03 A6 */	mtlr r0
/* 802A077C 0029D6BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0780 0029D6C0  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase, global
/* 802A0784 0029D6C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0788 0029D6C8  7C 08 02 A6 */	mflr r0
/* 802A078C 0029D6CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0790 0029D6D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0794 0029D6D4  7C 9F 23 78 */	mr r31, r4
/* 802A0798 0029D6D8  7F E3 FB 78 */	mr r3, r31
/* 802A079C 0029D6DC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A07A0 0029D6E0  60 00 00 40 */	ori r0, r0, 0x40
/* 802A07A4 0029D6E4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A07A8 0029D6E8  4B E6 11 D5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A07AC 0029D6EC  38 00 00 00 */	li r0, 0
/* 802A07B0 0029D6F0  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A07B4 0029D6F4  98 1F 03 10 */	stb r0, 0x310(r31)
/* 802A07B8 0029D6F8  7F E3 FB 78 */	mr r3, r31
/* 802A07BC 0029D6FC  D0 1F 03 0C */	stfs f0, 0x30c(r31)
/* 802A07C0 0029D700  48 00 39 CD */	bl finishWindEffect__Q34Game12Hanachirashi3ObjFv
/* 802A07C4 0029D704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A07C8 0029D708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A07CC 0029D70C  7C 08 03 A6 */	mtlr r0
/* 802A07D0 0029D710  38 21 00 10 */	addi r1, r1, 0x10
/* 802A07D4 0029D714  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A07D8 0029D718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A07DC 0029D71C  7C 08 02 A6 */	mflr r0
/* 802A07E0 0029D720  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A07E4 0029D724  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A07E8 0029D728  38 00 00 00 */	li r0, 0
/* 802A07EC 0029D72C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A07F0 0029D730  7C 9F 23 78 */	mr r31, r4
/* 802A07F4 0029D734  7F E3 FB 78 */	mr r3, r31
/* 802A07F8 0029D738  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802A07FC 0029D73C  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A0800 0029D740  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A0804 0029D744  60 00 00 04 */	ori r0, r0, 4
/* 802A0808 0029D748  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A080C 0029D74C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A0810 0029D750  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A0814 0029D754  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A0818 0029D758  4B E6 11 B5 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A081C 0029D75C  7F E3 FB 78 */	mr r3, r31
/* 802A0820 0029D760  38 80 00 08 */	li r4, 8
/* 802A0824 0029D764  38 A0 00 00 */	li r5, 0
/* 802A0828 0029D768  4B E6 47 DD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A082C 0029D76C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0830 0029D770  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0834 0029D774  7C 08 03 A6 */	mtlr r0
/* 802A0838 0029D778  38 21 00 10 */	addi r1, r1, 0x10
/* 802A083C 0029D77C  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase, global
/* 802A0840 0029D780  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802A0844 0029D784  7C 08 02 A6 */	mflr r0
/* 802A0848 0029D788  90 01 00 54 */	stw r0, 0x54(r1)
/* 802A084C 0029D78C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802A0850 0029D790  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802A0854 0029D794  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802A0858 0029D798  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802A085C 0029D79C  7C 9F 23 78 */	mr r31, r4
/* 802A0860 0029D7A0  7C 7E 1B 78 */	mr r30, r3
/* 802A0864 0029D7A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A0868 0029D7A8  7F E3 FB 78 */	mr r3, r31
/* 802A086C 0029D7AC  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802A0870 0029D7B0  7D 89 03 A6 */	mtctr r12
/* 802A0874 0029D7B4  4E 80 04 21 */	bctrl 
/* 802A0878 0029D7B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A087C 0029D7BC  41 82 00 10 */	beq .L_802A088C
/* 802A0880 0029D7C0  7F E3 FB 78 */	mr r3, r31
/* 802A0884 0029D7C4  48 00 1A 9D */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 802A0888 0029D7C8  48 00 00 98 */	b .L_802A0920
.L_802A088C:
/* 802A088C 0029D7CC  7F E4 FB 78 */	mr r4, r31
/* 802A0890 0029D7D0  38 61 00 14 */	addi r3, r1, 0x14
/* 802A0894 0029D7D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A0898 0029D7D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A089C 0029D7DC  7D 89 03 A6 */	mtctr r12
/* 802A08A0 0029D7E0  4E 80 04 21 */	bctrl 
/* 802A08A4 0029D7E4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802A08A8 0029D7E8  7F E4 FB 78 */	mr r4, r31
/* 802A08AC 0029D7EC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802A08B0 0029D7F0  38 61 00 08 */	addi r3, r1, 8
/* 802A08B4 0029D7F4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802A08B8 0029D7F8  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802A08BC 0029D7FC  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802A08C0 0029D800  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802A08C4 0029D804  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A08C8 0029D808  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802A08CC 0029D80C  7D 89 03 A6 */	mtctr r12
/* 802A08D0 0029D810  4E 80 04 21 */	bctrl 
/* 802A08D4 0029D814  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802A08D8 0029D818  38 81 00 20 */	addi r4, r1, 0x20
/* 802A08DC 0029D81C  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 802A08E0 0029D820  81 83 00 04 */	lwz r12, 4(r3)
/* 802A08E4 0029D824  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802A08E8 0029D828  7D 89 03 A6 */	mtctr r12
/* 802A08EC 0029D82C  4E 80 04 21 */	bctrl 
/* 802A08F0 0029D830  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 802A08F4 0029D834  C0 02 DA 24 */	lfs f0, lbl_8051BD84@sda21(r2)
/* 802A08F8 0029D838  EC 22 08 28 */	fsubs f1, f2, f1
/* 802A08FC 0029D83C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0900 0029D840  41 80 00 10 */	blt .L_802A0910
/* 802A0904 0029D844  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0908 0029D848  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802A090C 0029D84C  40 81 00 0C */	ble .L_802A0918
.L_802A0910:
/* 802A0910 0029D850  7F E3 FB 78 */	mr r3, r31
/* 802A0914 0029D854  4B E6 49 8D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802A0918:
/* 802A0918 0029D858  7F E3 FB 78 */	mr r3, r31
/* 802A091C 0029D85C  48 00 1D 11 */	bl addShadowOffset__Q34Game12Hanachirashi3ObjFv
.L_802A0920:
/* 802A0920 0029D860  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802A0924 0029D864  C0 02 DA 28 */	lfs f0, lbl_8051BD88@sda21(r2)
/* 802A0928 0029D868  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A092C 0029D86C  40 81 00 10 */	ble .L_802A093C
/* 802A0930 0029D870  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802A0934 0029D874  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802A0938 0029D878  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_802A093C:
/* 802A093C 0029D87C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802A0940 0029D880  C0 5F 02 C4 */	lfs f2, 0x2c4(r31)
/* 802A0944 0029D884  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802A0948 0029D888  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A094C 0029D88C  EC 22 08 2A */	fadds f1, f2, f1
/* 802A0950 0029D890  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802A0954 0029D894  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802A0958 0029D898  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A095C 0029D89C  4C 40 13 82 */	cror 2, 0, 2
/* 802A0960 0029D8A0  40 82 00 28 */	bne .L_802A0988
/* 802A0964 0029D8A4  7F C3 F3 78 */	mr r3, r30
/* 802A0968 0029D8A8  7F E4 FB 78 */	mr r4, r31
/* 802A096C 0029D8AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0970 0029D8B0  38 A0 00 00 */	li r5, 0
/* 802A0974 0029D8B4  38 C0 00 00 */	li r6, 0
/* 802A0978 0029D8B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A097C 0029D8BC  7D 89 03 A6 */	mtctr r12
/* 802A0980 0029D8C0  4E 80 04 21 */	bctrl 
/* 802A0984 0029D8C4  48 00 00 40 */	b .L_802A09C4
.L_802A0988:
/* 802A0988 0029D8C8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A098C 0029D8CC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A0990 0029D8D0  28 00 00 00 */	cmplwi r0, 0
/* 802A0994 0029D8D4  41 82 00 30 */	beq .L_802A09C4
/* 802A0998 0029D8D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A099C 0029D8DC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A09A0 0029D8E0  40 82 00 24 */	bne .L_802A09C4
/* 802A09A4 0029D8E4  7F C3 F3 78 */	mr r3, r30
/* 802A09A8 0029D8E8  7F E4 FB 78 */	mr r4, r31
/* 802A09AC 0029D8EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A09B0 0029D8F0  38 A0 00 07 */	li r5, 7
/* 802A09B4 0029D8F4  38 C0 00 00 */	li r6, 0
/* 802A09B8 0029D8F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A09BC 0029D8FC  7D 89 03 A6 */	mtctr r12
/* 802A09C0 0029D900  4E 80 04 21 */	bctrl 
.L_802A09C4:
/* 802A09C4 0029D904  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802A09C8 0029D908  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802A09CC 0029D90C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802A09D0 0029D910  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802A09D4 0029D914  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802A09D8 0029D918  7C 08 03 A6 */	mtlr r0
/* 802A09DC 0029D91C  38 21 00 50 */	addi r1, r1, 0x50
/* 802A09E0 0029D920  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase, global
/* 802A09E4 0029D924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A09E8 0029D928  7C 08 02 A6 */	mflr r0
/* 802A09EC 0029D92C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A09F0 0029D930  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A09F4 0029D934  7C 9F 23 78 */	mr r31, r4
/* 802A09F8 0029D938  7F E3 FB 78 */	mr r3, r31
/* 802A09FC 0029D93C  48 00 1C 25 */	bl setShadowOffsetMax__Q34Game12Hanachirashi3ObjFv
/* 802A0A00 0029D940  7F E3 FB 78 */	mr r3, r31
/* 802A0A04 0029D944  4B E6 0F 79 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A0A08 0029D948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0A0C 0029D94C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0A10 0029D950  7C 08 03 A6 */	mtlr r0
/* 802A0A14 0029D954  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0A18 0029D958  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A0A1C 0029D95C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0A20 0029D960  7C 08 02 A6 */	mflr r0
/* 802A0A24 0029D964  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0A28 0029D968  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0A2C 0029D96C  38 00 00 00 */	li r0, 0
/* 802A0A30 0029D970  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0A34 0029D974  7C 9F 23 78 */	mr r31, r4
/* 802A0A38 0029D978  7F E3 FB 78 */	mr r3, r31
/* 802A0A3C 0029D97C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802A0A40 0029D980  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A0A44 0029D984  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A0A48 0029D988  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802A0A4C 0029D98C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A0A50 0029D990  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A0A54 0029D994  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A0A58 0029D998  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A0A5C 0029D99C  4B E6 0F 71 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A0A60 0029D9A0  7F E3 FB 78 */	mr r3, r31
/* 802A0A64 0029D9A4  38 80 00 06 */	li r4, 6
/* 802A0A68 0029D9A8  38 A0 00 00 */	li r5, 0
/* 802A0A6C 0029D9AC  4B E6 45 99 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A0A70 0029D9B0  7F E3 FB 78 */	mr r3, r31
/* 802A0A74 0029D9B4  48 00 37 91 */	bl createDownEffect__Q34Game12Hanachirashi3ObjFv
/* 802A0A78 0029D9B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0A7C 0029D9BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0A80 0029D9C0  7C 08 03 A6 */	mtlr r0
/* 802A0A84 0029D9C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0A88 0029D9C8  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase, global
/* 802A0A8C 0029D9CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0A90 0029D9D0  7C 08 02 A6 */	mflr r0
/* 802A0A94 0029D9D4  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0A98 0029D9D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0A9C 0029D9DC  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802A0AA0 0029D9E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0AA4 0029D9E4  4C 40 13 82 */	cror 2, 0, 2
/* 802A0AA8 0029D9E8  40 82 00 20 */	bne .L_802A0AC8
/* 802A0AAC 0029D9EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A0AB0 0029D9F0  38 A0 00 00 */	li r5, 0
/* 802A0AB4 0029D9F4  38 C0 00 00 */	li r6, 0
/* 802A0AB8 0029D9F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0ABC 0029D9FC  7D 89 03 A6 */	mtctr r12
/* 802A0AC0 0029DA00  4E 80 04 21 */	bctrl 
/* 802A0AC4 0029DA04  48 00 00 38 */	b .L_802A0AFC
.L_802A0AC8:
/* 802A0AC8 0029DA08  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802A0ACC 0029DA0C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802A0AD0 0029DA10  28 00 00 00 */	cmplwi r0, 0
/* 802A0AD4 0029DA14  41 82 00 28 */	beq .L_802A0AFC
/* 802A0AD8 0029DA18  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802A0ADC 0029DA1C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A0AE0 0029DA20  40 82 00 1C */	bne .L_802A0AFC
/* 802A0AE4 0029DA24  81 83 00 00 */	lwz r12, 0(r3)
/* 802A0AE8 0029DA28  38 A0 00 08 */	li r5, 8
/* 802A0AEC 0029DA2C  38 C0 00 00 */	li r6, 0
/* 802A0AF0 0029DA30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0AF4 0029DA34  7D 89 03 A6 */	mtctr r12
/* 802A0AF8 0029DA38  4E 80 04 21 */	bctrl 
.L_802A0AFC:
/* 802A0AFC 0029DA3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0B00 0029DA40  7C 08 03 A6 */	mtlr r0
/* 802A0B04 0029DA44  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0B08 0029DA48  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase, global
/* 802A0B0C 0029DA4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0B10 0029DA50  7C 08 02 A6 */	mflr r0
/* 802A0B14 0029DA54  7C 83 23 78 */	mr r3, r4
/* 802A0B18 0029DA58  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0B1C 0029DA5C  4B E6 0E 61 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A0B20 0029DA60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0B24 0029DA64  7C 08 03 A6 */	mtlr r0
/* 802A0B28 0029DA68  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0B2C 0029DA6C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A0B30 0029DA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0B34 0029DA74  7C 08 02 A6 */	mflr r0
/* 802A0B38 0029DA78  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0B3C 0029DA7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0B40 0029DA80  38 00 00 00 */	li r0, 0
/* 802A0B44 0029DA84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0B48 0029DA88  7C 9F 23 78 */	mr r31, r4
/* 802A0B4C 0029DA8C  7F E3 FB 78 */	mr r3, r31
/* 802A0B50 0029DA90  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802A0B54 0029DA94  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A0B58 0029DA98  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A0B5C 0029DA9C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802A0B60 0029DAA0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A0B64 0029DAA4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A0B68 0029DAA8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A0B6C 0029DAAC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A0B70 0029DAB0  4B E6 0E 5D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A0B74 0029DAB4  7F E3 FB 78 */	mr r3, r31
/* 802A0B78 0029DAB8  38 80 00 04 */	li r4, 4
/* 802A0B7C 0029DABC  38 A0 00 00 */	li r5, 0
/* 802A0B80 0029DAC0  4B E6 44 85 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A0B84 0029DAC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0B88 0029DAC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0B8C 0029DACC  7C 08 03 A6 */	mtlr r0
/* 802A0B90 0029DAD0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0B94 0029DAD4  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase, global
/* 802A0B98 0029DAD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0B9C 0029DADC  7C 08 02 A6 */	mflr r0
/* 802A0BA0 0029DAE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0BA4 0029DAE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0BA8 0029DAE8  7C 9F 23 78 */	mr r31, r4
/* 802A0BAC 0029DAEC  93 C1 00 08 */	stw r30, 8(r1)
/* 802A0BB0 0029DAF0  7C 7E 1B 78 */	mr r30, r3
/* 802A0BB4 0029DAF4  80 04 01 F4 */	lwz r0, 0x1f4(r4)
/* 802A0BB8 0029DAF8  2C 00 00 00 */	cmpwi r0, 0
/* 802A0BBC 0029DAFC  41 82 00 18 */	beq .L_802A0BD4
/* 802A0BC0 0029DB00  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A0BC4 0029DB04  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802A0BC8 0029DB08  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802A0BCC 0029DB0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0BD0 0029DB10  40 81 00 0C */	ble .L_802A0BDC
.L_802A0BD4:
/* 802A0BD4 0029DB14  7F E3 FB 78 */	mr r3, r31
/* 802A0BD8 0029DB18  4B E6 46 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802A0BDC:
/* 802A0BDC 0029DB1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802A0BE0 0029DB20  C0 5F 02 C4 */	lfs f2, 0x2c4(r31)
/* 802A0BE4 0029DB24  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802A0BE8 0029DB28  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0BEC 0029DB2C  EC 22 08 2A */	fadds f1, f2, f1
/* 802A0BF0 0029DB30  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802A0BF4 0029DB34  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802A0BF8 0029DB38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0BFC 0029DB3C  4C 40 13 82 */	cror 2, 0, 2
/* 802A0C00 0029DB40  40 82 00 28 */	bne .L_802A0C28
/* 802A0C04 0029DB44  7F C3 F3 78 */	mr r3, r30
/* 802A0C08 0029DB48  7F E4 FB 78 */	mr r4, r31
/* 802A0C0C 0029DB4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0C10 0029DB50  38 A0 00 00 */	li r5, 0
/* 802A0C14 0029DB54  38 C0 00 00 */	li r6, 0
/* 802A0C18 0029DB58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0C1C 0029DB5C  7D 89 03 A6 */	mtctr r12
/* 802A0C20 0029DB60  4E 80 04 21 */	bctrl 
/* 802A0C24 0029DB64  48 00 00 70 */	b .L_802A0C94
.L_802A0C28:
/* 802A0C28 0029DB68  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A0C2C 0029DB6C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A0C30 0029DB70  28 00 00 00 */	cmplwi r0, 0
/* 802A0C34 0029DB74  41 82 00 60 */	beq .L_802A0C94
/* 802A0C38 0029DB78  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A0C3C 0029DB7C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A0C40 0029DB80  40 82 00 54 */	bne .L_802A0C94
/* 802A0C44 0029DB84  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802A0C48 0029DB88  2C 00 00 00 */	cmpwi r0, 0
/* 802A0C4C 0029DB8C  41 82 00 28 */	beq .L_802A0C74
/* 802A0C50 0029DB90  7F C3 F3 78 */	mr r3, r30
/* 802A0C54 0029DB94  7F E4 FB 78 */	mr r4, r31
/* 802A0C58 0029DB98  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0C5C 0029DB9C  38 A0 00 0B */	li r5, 0xb
/* 802A0C60 0029DBA0  38 C0 00 00 */	li r6, 0
/* 802A0C64 0029DBA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0C68 0029DBA8  7D 89 03 A6 */	mtctr r12
/* 802A0C6C 0029DBAC  4E 80 04 21 */	bctrl 
/* 802A0C70 0029DBB0  48 00 00 24 */	b .L_802A0C94
.L_802A0C74:
/* 802A0C74 0029DBB4  7F C3 F3 78 */	mr r3, r30
/* 802A0C78 0029DBB8  7F E4 FB 78 */	mr r4, r31
/* 802A0C7C 0029DBBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0C80 0029DBC0  38 A0 00 09 */	li r5, 9
/* 802A0C84 0029DBC4  38 C0 00 00 */	li r6, 0
/* 802A0C88 0029DBC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0C8C 0029DBCC  7D 89 03 A6 */	mtctr r12
/* 802A0C90 0029DBD0  4E 80 04 21 */	bctrl 
.L_802A0C94:
/* 802A0C94 0029DBD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0C98 0029DBD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0C9C 0029DBDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A0CA0 0029DBE0  7C 08 03 A6 */	mtlr r0
/* 802A0CA4 0029DBE4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0CA8 0029DBE8  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase, global
/* 802A0CAC 0029DBEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0CB0 0029DBF0  7C 08 02 A6 */	mflr r0
/* 802A0CB4 0029DBF4  7C 83 23 78 */	mr r3, r4
/* 802A0CB8 0029DBF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0CBC 0029DBFC  4B E6 0C C1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A0CC0 0029DC00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0CC4 0029DC04  7C 08 03 A6 */	mtlr r0
/* 802A0CC8 0029DC08  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0CCC 0029DC0C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A0CD0 0029DC10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0CD4 0029DC14  7C 08 02 A6 */	mflr r0
/* 802A0CD8 0029DC18  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0CDC 0029DC1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0CE0 0029DC20  38 00 00 00 */	li r0, 0
/* 802A0CE4 0029DC24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0CE8 0029DC28  7C 9F 23 78 */	mr r31, r4
/* 802A0CEC 0029DC2C  7F E3 FB 78 */	mr r3, r31
/* 802A0CF0 0029DC30  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A0CF4 0029DC34  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A0CF8 0029DC38  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802A0CFC 0029DC3C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A0D00 0029DC40  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A0D04 0029DC44  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A0D08 0029DC48  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A0D0C 0029DC4C  4B E6 0C C1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A0D10 0029DC50  7F E3 FB 78 */	mr r3, r31
/* 802A0D14 0029DC54  38 80 00 07 */	li r4, 7
/* 802A0D18 0029DC58  38 A0 00 00 */	li r5, 0
/* 802A0D1C 0029DC5C  4B E6 42 E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A0D20 0029DC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0D24 0029DC64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0D28 0029DC68  7C 08 03 A6 */	mtlr r0
/* 802A0D2C 0029DC6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0D30 0029DC70  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase, global
/* 802A0D34 0029DC74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0D38 0029DC78  7C 08 02 A6 */	mflr r0
/* 802A0D3C 0029DC7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0D40 0029DC80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0D44 0029DC84  7C 9F 23 78 */	mr r31, r4
/* 802A0D48 0029DC88  93 C1 00 08 */	stw r30, 8(r1)
/* 802A0D4C 0029DC8C  7C 7E 1B 78 */	mr r30, r3
/* 802A0D50 0029DC90  7F E3 FB 78 */	mr r3, r31
/* 802A0D54 0029DC94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A0D58 0029DC98  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802A0D5C 0029DC9C  7D 89 03 A6 */	mtctr r12
/* 802A0D60 0029DCA0  4E 80 04 21 */	bctrl 
/* 802A0D64 0029DCA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A0D68 0029DCA8  41 82 00 14 */	beq .L_802A0D7C
/* 802A0D6C 0029DCAC  7F E3 FB 78 */	mr r3, r31
/* 802A0D70 0029DCB0  48 00 15 B1 */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 802A0D74 0029DCB4  7F E3 FB 78 */	mr r3, r31
/* 802A0D78 0029DCB8  48 00 18 DD */	bl subShadowOffset__Q34Game12Hanachirashi3ObjFv
.L_802A0D7C:
/* 802A0D7C 0029DCBC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802A0D80 0029DCC0  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0D84 0029DCC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0D88 0029DCC8  4C 40 13 82 */	cror 2, 0, 2
/* 802A0D8C 0029DCCC  40 82 00 28 */	bne .L_802A0DB4
/* 802A0D90 0029DCD0  7F C3 F3 78 */	mr r3, r30
/* 802A0D94 0029DCD4  7F E4 FB 78 */	mr r4, r31
/* 802A0D98 0029DCD8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0D9C 0029DCDC  38 A0 00 00 */	li r5, 0
/* 802A0DA0 0029DCE0  38 C0 00 00 */	li r6, 0
/* 802A0DA4 0029DCE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0DA8 0029DCE8  7D 89 03 A6 */	mtctr r12
/* 802A0DAC 0029DCEC  4E 80 04 21 */	bctrl 
/* 802A0DB0 0029DCF0  48 00 00 58 */	b .L_802A0E08
.L_802A0DB4:
/* 802A0DB4 0029DCF4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A0DB8 0029DCF8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A0DBC 0029DCFC  28 00 00 00 */	cmplwi r0, 0
/* 802A0DC0 0029DD00  41 82 00 48 */	beq .L_802A0E08
/* 802A0DC4 0029DD04  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A0DC8 0029DD08  28 00 00 02 */	cmplwi r0, 2
/* 802A0DCC 0029DD0C  40 82 00 14 */	bne .L_802A0DE0
/* 802A0DD0 0029DD10  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802A0DD4 0029DD14  60 00 00 04 */	ori r0, r0, 4
/* 802A0DD8 0029DD18  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802A0DDC 0029DD1C  48 00 00 2C */	b .L_802A0E08
.L_802A0DE0:
/* 802A0DE0 0029DD20  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A0DE4 0029DD24  40 82 00 24 */	bne .L_802A0E08
/* 802A0DE8 0029DD28  7F C3 F3 78 */	mr r3, r30
/* 802A0DEC 0029DD2C  7F E4 FB 78 */	mr r4, r31
/* 802A0DF0 0029DD30  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0DF4 0029DD34  38 A0 00 01 */	li r5, 1
/* 802A0DF8 0029DD38  38 C0 00 00 */	li r6, 0
/* 802A0DFC 0029DD3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0E00 0029DD40  7D 89 03 A6 */	mtctr r12
/* 802A0E04 0029DD44  4E 80 04 21 */	bctrl 
.L_802A0E08:
/* 802A0E08 0029DD48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0E0C 0029DD4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0E10 0029DD50  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A0E14 0029DD54  7C 08 03 A6 */	mtlr r0
/* 802A0E18 0029DD58  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0E1C 0029DD5C  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase, global
/* 802A0E20 0029DD60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0E24 0029DD64  7C 08 02 A6 */	mflr r0
/* 802A0E28 0029DD68  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0E2C 0029DD6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0E30 0029DD70  7C 9F 23 78 */	mr r31, r4
/* 802A0E34 0029DD74  7F E3 FB 78 */	mr r3, r31
/* 802A0E38 0029DD78  48 00 17 DD */	bl resetShadowOffset__Q34Game12Hanachirashi3ObjFv
/* 802A0E3C 0029DD7C  7F E3 FB 78 */	mr r3, r31
/* 802A0E40 0029DD80  4B E6 0B 3D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A0E44 0029DD84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0E48 0029DD88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0E4C 0029DD8C  7C 08 03 A6 */	mtlr r0
/* 802A0E50 0029DD90  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0E54 0029DD94  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A0E58 0029DD98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0E5C 0029DD9C  7C 08 02 A6 */	mflr r0
/* 802A0E60 0029DDA0  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0E64 0029DDA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0E68 0029DDA8  38 00 00 00 */	li r0, 0
/* 802A0E6C 0029DDAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0E70 0029DDB0  7C 9F 23 78 */	mr r31, r4
/* 802A0E74 0029DDB4  7F E3 FB 78 */	mr r3, r31
/* 802A0E78 0029DDB8  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A0E7C 0029DDBC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A0E80 0029DDC0  60 00 00 04 */	ori r0, r0, 4
/* 802A0E84 0029DDC4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A0E88 0029DDC8  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A0E8C 0029DDCC  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A0E90 0029DDD0  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A0E94 0029DDD4  4B E6 0B 39 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A0E98 0029DDD8  7F E3 FB 78 */	mr r3, r31
/* 802A0E9C 0029DDDC  38 80 00 02 */	li r4, 2
/* 802A0EA0 0029DDE0  38 A0 00 00 */	li r5, 0
/* 802A0EA4 0029DDE4  4B E6 41 61 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A0EA8 0029DDE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0EAC 0029DDEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0EB0 0029DDF0  7C 08 03 A6 */	mtlr r0
/* 802A0EB4 0029DDF4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0EB8 0029DDF8  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase, global
/* 802A0EBC 0029DDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0EC0 0029DE00  7C 08 02 A6 */	mflr r0
/* 802A0EC4 0029DE04  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0EC8 0029DE08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0ECC 0029DE0C  7C 9F 23 78 */	mr r31, r4
/* 802A0ED0 0029DE10  93 C1 00 08 */	stw r30, 8(r1)
/* 802A0ED4 0029DE14  7C 7E 1B 78 */	mr r30, r3
/* 802A0ED8 0029DE18  7F E3 FB 78 */	mr r3, r31
/* 802A0EDC 0029DE1C  48 00 14 45 */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 802A0EE0 0029DE20  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802A0EE4 0029DE24  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0EE8 0029DE28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A0EEC 0029DE2C  4C 40 13 82 */	cror 2, 0, 2
/* 802A0EF0 0029DE30  40 82 00 28 */	bne .L_802A0F18
/* 802A0EF4 0029DE34  7F C3 F3 78 */	mr r3, r30
/* 802A0EF8 0029DE38  7F E4 FB 78 */	mr r4, r31
/* 802A0EFC 0029DE3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0F00 0029DE40  38 A0 00 00 */	li r5, 0
/* 802A0F04 0029DE44  38 C0 00 00 */	li r6, 0
/* 802A0F08 0029DE48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0F0C 0029DE4C  7D 89 03 A6 */	mtctr r12
/* 802A0F10 0029DE50  4E 80 04 21 */	bctrl 
/* 802A0F14 0029DE54  48 00 00 74 */	b .L_802A0F88
.L_802A0F18:
/* 802A0F18 0029DE58  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A0F1C 0029DE5C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A0F20 0029DE60  28 00 00 00 */	cmplwi r0, 0
/* 802A0F24 0029DE64  41 82 00 64 */	beq .L_802A0F88
/* 802A0F28 0029DE68  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A0F2C 0029DE6C  28 00 00 02 */	cmplwi r0, 2
/* 802A0F30 0029DE70  40 82 00 30 */	bne .L_802A0F60
/* 802A0F34 0029DE74  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A0F38 0029DE78  7F E3 FB 78 */	mr r3, r31
/* 802A0F3C 0029DE7C  C0 82 DA 2C */	lfs f4, lbl_8051BD8C@sda21(r2)
/* 802A0F40 0029DE80  38 80 00 00 */	li r4, 0
/* 802A0F44 0029DE84  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802A0F48 0029DE88  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802A0F4C 0029DE8C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802A0F50 0029DE90  4B E7 21 CD */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802A0F54 0029DE94  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0F58 0029DE98  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802A0F5C 0029DE9C  48 00 00 2C */	b .L_802A0F88
.L_802A0F60:
/* 802A0F60 0029DEA0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A0F64 0029DEA4  40 82 00 24 */	bne .L_802A0F88
/* 802A0F68 0029DEA8  7F C3 F3 78 */	mr r3, r30
/* 802A0F6C 0029DEAC  7F E4 FB 78 */	mr r4, r31
/* 802A0F70 0029DEB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A0F74 0029DEB4  38 A0 00 01 */	li r5, 1
/* 802A0F78 0029DEB8  38 C0 00 00 */	li r6, 0
/* 802A0F7C 0029DEBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A0F80 0029DEC0  7D 89 03 A6 */	mtctr r12
/* 802A0F84 0029DEC4  4E 80 04 21 */	bctrl 
.L_802A0F88:
/* 802A0F88 0029DEC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0F8C 0029DECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A0F90 0029DED0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A0F94 0029DED4  7C 08 03 A6 */	mtlr r0
/* 802A0F98 0029DED8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0F9C 0029DEDC  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase, global
/* 802A0FA0 0029DEE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0FA4 0029DEE4  7C 08 02 A6 */	mflr r0
/* 802A0FA8 0029DEE8  7C 83 23 78 */	mr r3, r4
/* 802A0FAC 0029DEEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0FB0 0029DEF0  4B E6 09 CD */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A0FB4 0029DEF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A0FB8 0029DEF8  7C 08 03 A6 */	mtlr r0
/* 802A0FBC 0029DEFC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A0FC0 0029DF00  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A0FC4 0029DF04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A0FC8 0029DF08  7C 08 02 A6 */	mflr r0
/* 802A0FCC 0029DF0C  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A0FD0 0029DF10  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A0FD4 0029DF14  38 00 00 00 */	li r0, 0
/* 802A0FD8 0029DF18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A0FDC 0029DF1C  7C 9F 23 78 */	mr r31, r4
/* 802A0FE0 0029DF20  7F E3 FB 78 */	mr r3, r31
/* 802A0FE4 0029DF24  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A0FE8 0029DF28  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A0FEC 0029DF2C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802A0FF0 0029DF30  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A0FF4 0029DF34  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A0FF8 0029DF38  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A0FFC 0029DF3C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A1000 0029DF40  4B E6 09 CD */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A1004 0029DF44  7F E3 FB 78 */	mr r3, r31
/* 802A1008 0029DF48  38 80 00 03 */	li r4, 3
/* 802A100C 0029DF4C  38 A0 00 00 */	li r5, 0
/* 802A1010 0029DF50  4B E6 3F F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A1014 0029DF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1018 0029DF58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A101C 0029DF5C  7C 08 03 A6 */	mtlr r0
/* 802A1020 0029DF60  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1024 0029DF64  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase, global
/* 802A1028 0029DF68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A102C 0029DF6C  7C 08 02 A6 */	mflr r0
/* 802A1030 0029DF70  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A1034 0029DF74  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1038 0029DF78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A103C 0029DF7C  7C 9F 23 78 */	mr r31, r4
/* 802A1040 0029DF80  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802A1044 0029DF84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A1048 0029DF88  4C 40 13 82 */	cror 2, 0, 2
/* 802A104C 0029DF8C  40 82 00 20 */	bne .L_802A106C
/* 802A1050 0029DF90  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1054 0029DF94  38 A0 00 00 */	li r5, 0
/* 802A1058 0029DF98  38 C0 00 00 */	li r6, 0
/* 802A105C 0029DF9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A1060 0029DFA0  7D 89 03 A6 */	mtctr r12
/* 802A1064 0029DFA4  4E 80 04 21 */	bctrl 
/* 802A1068 0029DFA8  48 00 00 AC */	b .L_802A1114
.L_802A106C:
/* 802A106C 0029DFAC  80 BF 01 88 */	lwz r5, 0x188(r31)
/* 802A1070 0029DFB0  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802A1074 0029DFB4  28 00 00 00 */	cmplwi r0, 0
/* 802A1078 0029DFB8  41 82 00 9C */	beq .L_802A1114
/* 802A107C 0029DFBC  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802A1080 0029DFC0  28 00 00 02 */	cmplwi r0, 2
/* 802A1084 0029DFC4  40 82 00 70 */	bne .L_802A10F4
/* 802A1088 0029DFC8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A108C 0029DFCC  7F E3 FB 78 */	mr r3, r31
/* 802A1090 0029DFD0  C0 82 DA 2C */	lfs f4, lbl_8051BD8C@sda21(r2)
/* 802A1094 0029DFD4  38 80 00 00 */	li r4, 0
/* 802A1098 0029DFD8  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802A109C 0029DFDC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802A10A0 0029DFE0  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802A10A4 0029DFE4  4B E7 26 ED */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802A10A8 0029DFE8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A10AC 0029DFEC  7F E3 FB 78 */	mr r3, r31
/* 802A10B0 0029DFF0  C0 82 DA 2C */	lfs f4, lbl_8051BD8C@sda21(r2)
/* 802A10B4 0029DFF4  38 80 00 00 */	li r4, 0
/* 802A10B8 0029DFF8  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802A10BC 0029DFFC  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802A10C0 0029E000  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802A10C4 0029E004  4B E7 24 11 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802A10C8 0029E008  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802A10CC 0029E00C  7F E3 FB 78 */	mr r3, r31
/* 802A10D0 0029E010  C0 82 DA 2C */	lfs f4, lbl_8051BD8C@sda21(r2)
/* 802A10D4 0029E014  38 80 00 00 */	li r4, 0
/* 802A10D8 0029E018  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802A10DC 0029E01C  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802A10E0 0029E020  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802A10E4 0029E024  4B E7 20 39 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802A10E8 0029E028  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A10EC 0029E02C  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802A10F0 0029E030  48 00 00 24 */	b .L_802A1114
.L_802A10F4:
/* 802A10F4 0029E034  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A10F8 0029E038  40 82 00 1C */	bne .L_802A1114
/* 802A10FC 0029E03C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A1100 0029E040  38 A0 00 09 */	li r5, 9
/* 802A1104 0029E044  38 C0 00 00 */	li r6, 0
/* 802A1108 0029E048  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A110C 0029E04C  7D 89 03 A6 */	mtctr r12
/* 802A1110 0029E050  4E 80 04 21 */	bctrl 
.L_802A1114:
/* 802A1114 0029E054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1118 0029E058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A111C 0029E05C  7C 08 03 A6 */	mtlr r0
/* 802A1120 0029E060  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1124 0029E064  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase, global
/* 802A1128 0029E068  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A112C 0029E06C  7C 08 02 A6 */	mflr r0
/* 802A1130 0029E070  7C 83 23 78 */	mr r3, r4
/* 802A1134 0029E074  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A1138 0029E078  4B E6 08 45 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A113C 0029E07C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A1140 0029E080  7C 08 03 A6 */	mtlr r0
/* 802A1144 0029E084  38 21 00 10 */	addi r1, r1, 0x10
/* 802A1148 0029E088  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase

.fn init__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802A114C 0029E08C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1150 0029E090  7C 08 02 A6 */	mflr r0
/* 802A1154 0029E094  C0 02 D9 F8 */	lfs f0, lbl_8051BD58@sda21(r2)
/* 802A1158 0029E098  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A115C 0029E09C  38 00 00 00 */	li r0, 0
/* 802A1160 0029E0A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A1164 0029E0A4  7C 9F 23 78 */	mr r31, r4
/* 802A1168 0029E0A8  7F E3 FB 78 */	mr r3, r31
/* 802A116C 0029E0AC  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802A1170 0029E0B0  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802A1174 0029E0B4  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802A1178 0029E0B8  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802A117C 0029E0BC  90 04 02 30 */	stw r0, 0x230(r4)
/* 802A1180 0029E0C0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802A1184 0029E0C4  60 00 00 04 */	ori r0, r0, 4
/* 802A1188 0029E0C8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802A118C 0029E0CC  4B E6 08 41 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802A1190 0029E0D0  7F E3 FB 78 */	mr r3, r31
/* 802A1194 0029E0D4  38 80 00 0A */	li r4, 0xa
/* 802A1198 0029E0D8  38 A0 00 00 */	li r5, 0
/* 802A119C 0029E0DC  4B E6 3E 69 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802A11A0 0029E0E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A11A4 0029E0E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A11A8 0029E0E8  7C 08 03 A6 */	mtlr r0
/* 802A11AC 0029E0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A11B0 0029E0F0  4E 80 00 20 */	blr 
.endfn init__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase, global
/* 802A11B4 0029E0F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A11B8 0029E0F8  7C 08 02 A6 */	mflr r0
/* 802A11BC 0029E0FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A11C0 0029E100  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A11C4 0029E104  7C 9F 23 78 */	mr r31, r4
/* 802A11C8 0029E108  93 C1 00 08 */	stw r30, 8(r1)
/* 802A11CC 0029E10C  7C 7E 1B 78 */	mr r30, r3
/* 802A11D0 0029E110  7F E3 FB 78 */	mr r3, r31
/* 802A11D4 0029E114  48 00 11 4D */	bl setHeightVelocity__Q34Game12Hanachirashi3ObjFv
/* 802A11D8 0029E118  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802A11DC 0029E11C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802A11E0 0029E120  28 00 00 00 */	cmplwi r0, 0
/* 802A11E4 0029E124  41 82 00 94 */	beq .L_802A1278
/* 802A11E8 0029E128  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802A11EC 0029E12C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802A11F0 0029E130  40 82 00 88 */	bne .L_802A1278
/* 802A11F4 0029E134  7F E3 FB 78 */	mr r3, r31
/* 802A11F8 0029E138  48 00 14 ED */	bl getFlyingNextState__Q34Game12Hanachirashi3ObjFv
/* 802A11FC 0029E13C  7C 65 1B 79 */	or. r5, r3, r3
/* 802A1200 0029E140  41 80 00 24 */	blt .L_802A1224
/* 802A1204 0029E144  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A1208 0029E148  7F C3 F3 78 */	mr r3, r30
/* 802A120C 0029E14C  7F E4 FB 78 */	mr r4, r31
/* 802A1210 0029E150  38 C0 00 00 */	li r6, 0
/* 802A1214 0029E154  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A1218 0029E158  7D 89 03 A6 */	mtctr r12
/* 802A121C 0029E15C  4E 80 04 21 */	bctrl 
/* 802A1220 0029E160  48 00 00 58 */	b .L_802A1278
.L_802A1224:
/* 802A1224 0029E164  7F E3 FB 78 */	mr r3, r31
/* 802A1228 0029E168  48 00 1C 5D */	bl isAttackable__Q34Game12Hanachirashi3ObjFv
/* 802A122C 0029E16C  28 03 00 00 */	cmplwi r3, 0
/* 802A1230 0029E170  41 82 00 28 */	beq .L_802A1258
/* 802A1234 0029E174  7F C3 F3 78 */	mr r3, r30
/* 802A1238 0029E178  7F E4 FB 78 */	mr r4, r31
/* 802A123C 0029E17C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A1240 0029E180  38 A0 00 05 */	li r5, 5
/* 802A1244 0029E184  38 C0 00 00 */	li r6, 0
/* 802A1248 0029E188  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A124C 0029E18C  7D 89 03 A6 */	mtctr r12
/* 802A1250 0029E190  4E 80 04 21 */	bctrl 
/* 802A1254 0029E194  48 00 00 24 */	b .L_802A1278
.L_802A1258:
/* 802A1258 0029E198  7F C3 F3 78 */	mr r3, r30
/* 802A125C 0029E19C  7F E4 FB 78 */	mr r4, r31
/* 802A1260 0029E1A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A1264 0029E1A4  38 A0 00 01 */	li r5, 1
/* 802A1268 0029E1A8  38 C0 00 00 */	li r6, 0
/* 802A126C 0029E1AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A1270 0029E1B0  7D 89 03 A6 */	mtctr r12
/* 802A1274 0029E1B4  4E 80 04 21 */	bctrl 
.L_802A1278:
/* 802A1278 0029E1B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A127C 0029E1BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A1280 0029E1C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A1284 0029E1C4  7C 08 03 A6 */	mtlr r0
/* 802A1288 0029E1C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A128C 0029E1CC  4E 80 00 20 */	blr 
.endfn exec__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase

.fn cleanup__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase, global
/* 802A1290 0029E1D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A1294 0029E1D4  7C 08 02 A6 */	mflr r0
/* 802A1298 0029E1D8  7C 83 23 78 */	mr r3, r4
/* 802A129C 0029E1DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A12A0 0029E1E0  4B E6 06 DD */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802A12A4 0029E1E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A12A8 0029E1E8  7C 08 03 A6 */	mtlr r0
/* 802A12AC 0029E1EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A12B0 0029E1F0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase
