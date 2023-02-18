.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_kochappyState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047AB28, local
	.asciz "TurnToHome"
.endobj lbl_8047AB28

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game12KochappyBase9StateDemo, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase9StateDemoFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase9StateDemo
.obj __vt__Q34Game12KochappyBase11StateGoHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase11StateGoHome
.obj __vt__Q34Game12KochappyBase15StateTurnToHome, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase15StateTurnToHome
.obj __vt__Q34Game12KochappyBase10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase10StateFlick
.obj __vt__Q34Game12KochappyBase11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase11StateAttack
.obj __vt__Q34Game12KochappyBase9StateWalk, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase9StateWalk
.obj __vt__Q34Game12KochappyBase9StateTurn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase9StateTurn
.obj __vt__Q34Game12KochappyBase9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase9StateDead
.obj __vt__Q34Game12KochappyBase9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase9StateWait
.obj __vt__Q34Game12KochappyBase10StatePress, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game12KochappyBase10StatePressFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase10StatePress
.obj __vt__Q34Game12KochappyBase5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game12KochappyBase5State
.obj __vt__Q34Game12KochappyBase3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game12KochappyBase3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game12KochappyBase3FSM

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
.obj lbl_805179D8, local
	.asciz "press"
.endobj lbl_805179D8
.balign 4
.obj lbl_805179E0, local
	.float 0.0
.endobj lbl_805179E0
.balign 4
.obj lbl_805179E4, local
	.asciz "wait"
.endobj lbl_805179E4
.balign 4
.obj lbl_805179EC, local
	.float 32768.0
.endobj lbl_805179EC
.obj lbl_805179F0, local
	.float 30.0
.endobj lbl_805179F0
.balign 8
.obj lbl_805179F8, local
	.8byte 0x4330000080000000
.endobj lbl_805179F8
.obj lbl_80517A00, local
	.float 180.0
.endobj lbl_80517A00
.obj lbl_80517A04, local # pi
	.float 3.1415927
.endobj lbl_80517A04
.obj lbl_80517A08, local
	.float 0.0055555557
.endobj lbl_80517A08
.balign 4
.obj lbl_80517A0C, local
	.asciz "dead"
.endobj lbl_80517A0C
.balign 4
.obj lbl_80517A14, local
	.asciz "turn"
.endobj lbl_80517A14
.balign 4
.obj lbl_80517A1C, local
	.float 60.0
.endobj lbl_80517A1C
.balign 4
.obj lbl_80517A20, local
	.asciz "Walk"
.endobj lbl_80517A20
.balign 4
.obj lbl_80517A28, local
	.float 40.0
.endobj lbl_80517A28
.obj lbl_80517A2C, local
	.float 50.0
.endobj lbl_80517A2C
.balign 4
.obj lbl_80517A30, local
	.asciz "Attack"
.endobj lbl_80517A30
.balign 4
.obj lbl_80517A38, local
	.asciz "Flick"
.endobj lbl_80517A38
.balign 4
.obj lbl_80517A40, local
	.float -1000.0
.endobj lbl_80517A40
.balign 4
.obj lbl_80517A44, local
	.asciz "GoHome"
.endobj lbl_80517A44
.balign 4
.obj lbl_80517A4C, local
	.asciz "demo"
.endobj lbl_80517A4C
.balign 4
.obj lbl_80517A54, local
	.float 5.0
.endobj lbl_80517A54

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game12KochappyBase3FSMFPQ24Game9EnemyBase, global
/* 8010F874 0010C7B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F878 0010C7B8  7C 08 02 A6 */	mflr r0
/* 8010F87C 0010C7BC  38 80 00 0A */	li r4, 0xa
/* 8010F880 0010C7C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F884 0010C7C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F888 0010C7C8  7C 7F 1B 78 */	mr r31, r3
/* 8010F88C 0010C7CC  48 02 0F D9 */	bl create__Q24Game17EnemyStateMachineFi
/* 8010F890 0010C7D0  38 60 00 10 */	li r3, 0x10
/* 8010F894 0010C7D4  4B F1 46 11 */	bl __nw__FUl
/* 8010F898 0010C7D8  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F89C 0010C7DC  41 82 00 10 */	beq .L_8010F8AC
/* 8010F8A0 0010C7E0  38 80 00 00 */	li r4, 0
/* 8010F8A4 0010C7E4  48 00 02 49 */	bl __ct__Q34Game12KochappyBase9StateWaitFi
/* 8010F8A8 0010C7E8  7C 64 1B 78 */	mr r4, r3
.L_8010F8AC:
/* 8010F8AC 0010C7EC  7F E3 FB 78 */	mr r3, r31
/* 8010F8B0 0010C7F0  48 02 10 59 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F8B4 0010C7F4  38 60 00 10 */	li r3, 0x10
/* 8010F8B8 0010C7F8  4B F1 45 ED */	bl __nw__FUl
/* 8010F8BC 0010C7FC  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F8C0 0010C800  41 82 00 10 */	beq .L_8010F8D0
/* 8010F8C4 0010C804  38 80 00 01 */	li r4, 1
/* 8010F8C8 0010C808  48 00 06 55 */	bl __ct__Q34Game12KochappyBase9StateDeadFi
/* 8010F8CC 0010C80C  7C 64 1B 78 */	mr r4, r3
.L_8010F8D0:
/* 8010F8D0 0010C810  7F E3 FB 78 */	mr r3, r31
/* 8010F8D4 0010C814  48 02 10 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F8D8 0010C818  38 60 00 14 */	li r3, 0x14
/* 8010F8DC 0010C81C  4B F1 45 C9 */	bl __nw__FUl
/* 8010F8E0 0010C820  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F8E4 0010C824  41 82 00 10 */	beq .L_8010F8F4
/* 8010F8E8 0010C828  38 80 00 02 */	li r4, 2
/* 8010F8EC 0010C82C  48 00 07 01 */	bl __ct__Q34Game12KochappyBase9StateTurnFi
/* 8010F8F0 0010C830  7C 64 1B 78 */	mr r4, r3
.L_8010F8F4:
/* 8010F8F4 0010C834  7F E3 FB 78 */	mr r3, r31
/* 8010F8F8 0010C838  48 02 10 11 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F8FC 0010C83C  38 60 00 14 */	li r3, 0x14
/* 8010F900 0010C840  4B F1 45 A5 */	bl __nw__FUl
/* 8010F904 0010C844  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F908 0010C848  41 82 00 10 */	beq .L_8010F918
/* 8010F90C 0010C84C  38 80 00 03 */	li r4, 3
/* 8010F910 0010C850  48 00 0E A1 */	bl __ct__Q34Game12KochappyBase9StateWalkFi
/* 8010F914 0010C854  7C 64 1B 78 */	mr r4, r3
.L_8010F918:
/* 8010F918 0010C858  7F E3 FB 78 */	mr r3, r31
/* 8010F91C 0010C85C  48 02 0F ED */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F920 0010C860  38 60 00 10 */	li r3, 0x10
/* 8010F924 0010C864  4B F1 45 81 */	bl __nw__FUl
/* 8010F928 0010C868  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F92C 0010C86C  41 82 00 10 */	beq .L_8010F93C
/* 8010F930 0010C870  38 80 00 04 */	li r4, 4
/* 8010F934 0010C874  48 00 16 6D */	bl __ct__Q34Game12KochappyBase11StateAttackFi
/* 8010F938 0010C878  7C 64 1B 78 */	mr r4, r3
.L_8010F93C:
/* 8010F93C 0010C87C  7F E3 FB 78 */	mr r3, r31
/* 8010F940 0010C880  48 02 0F C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F944 0010C884  38 60 00 14 */	li r3, 0x14
/* 8010F948 0010C888  4B F1 45 5D */	bl __nw__FUl
/* 8010F94C 0010C88C  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F950 0010C890  41 82 00 10 */	beq .L_8010F960
/* 8010F954 0010C894  38 80 00 05 */	li r4, 5
/* 8010F958 0010C898  48 00 1A E1 */	bl __ct__Q34Game12KochappyBase10StateFlickFi
/* 8010F95C 0010C89C  7C 64 1B 78 */	mr r4, r3
.L_8010F960:
/* 8010F960 0010C8A0  7F E3 FB 78 */	mr r3, r31
/* 8010F964 0010C8A4  48 02 0F A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F968 0010C8A8  38 60 00 10 */	li r3, 0x10
/* 8010F96C 0010C8AC  4B F1 45 39 */	bl __nw__FUl
/* 8010F970 0010C8B0  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F974 0010C8B4  41 82 00 10 */	beq .L_8010F984
/* 8010F978 0010C8B8  38 80 00 06 */	li r4, 6
/* 8010F97C 0010C8BC  48 00 1D 5D */	bl __ct__Q34Game12KochappyBase15StateTurnToHomeFi
/* 8010F980 0010C8C0  7C 64 1B 78 */	mr r4, r3
.L_8010F984:
/* 8010F984 0010C8C4  7F E3 FB 78 */	mr r3, r31
/* 8010F988 0010C8C8  48 02 0F 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F98C 0010C8CC  38 60 00 14 */	li r3, 0x14
/* 8010F990 0010C8D0  4B F1 45 15 */	bl __nw__FUl
/* 8010F994 0010C8D4  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F998 0010C8D8  41 82 00 10 */	beq .L_8010F9A8
/* 8010F99C 0010C8DC  38 80 00 07 */	li r4, 7
/* 8010F9A0 0010C8E0  48 00 23 09 */	bl __ct__Q34Game12KochappyBase11StateGoHomeFi
/* 8010F9A4 0010C8E4  7C 64 1B 78 */	mr r4, r3
.L_8010F9A8:
/* 8010F9A8 0010C8E8  7F E3 FB 78 */	mr r3, r31
/* 8010F9AC 0010C8EC  48 02 0F 5D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F9B0 0010C8F0  38 60 00 10 */	li r3, 0x10
/* 8010F9B4 0010C8F4  4B F1 44 F1 */	bl __nw__FUl
/* 8010F9B8 0010C8F8  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F9BC 0010C8FC  41 82 00 10 */	beq .L_8010F9CC
/* 8010F9C0 0010C900  38 80 00 08 */	li r4, 8
/* 8010F9C4 0010C904  48 00 00 49 */	bl __ct__Q34Game12KochappyBase10StatePressFi
/* 8010F9C8 0010C908  7C 64 1B 78 */	mr r4, r3
.L_8010F9CC:
/* 8010F9CC 0010C90C  7F E3 FB 78 */	mr r3, r31
/* 8010F9D0 0010C910  48 02 0F 39 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F9D4 0010C914  38 60 00 10 */	li r3, 0x10
/* 8010F9D8 0010C918  4B F1 44 CD */	bl __nw__FUl
/* 8010F9DC 0010C91C  7C 64 1B 79 */	or. r4, r3, r3
/* 8010F9E0 0010C920  41 82 00 10 */	beq .L_8010F9F0
/* 8010F9E4 0010C924  38 80 00 09 */	li r4, 9
/* 8010F9E8 0010C928  48 00 27 E1 */	bl __ct__Q34Game12KochappyBase9StateDemoFi
/* 8010F9EC 0010C92C  7C 64 1B 78 */	mr r4, r3
.L_8010F9F0:
/* 8010F9F0 0010C930  7F E3 FB 78 */	mr r3, r31
/* 8010F9F4 0010C934  48 02 0F 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8010F9F8 0010C938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010F9FC 0010C93C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010FA00 0010C940  7C 08 03 A6 */	mtlr r0
/* 8010FA04 0010C944  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FA08 0010C948  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase3FSMFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase10StatePressFi, global
/* 8010FA0C 0010C94C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8010FA10 0010C950  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 8010FA14 0010C954  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8010FA18 0010C958  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase10StatePress@ha
/* 8010FA1C 0010C95C  90 03 00 00 */	stw r0, 0(r3)
/* 8010FA20 0010C960  38 E0 00 00 */	li r7, 0
/* 8010FA24 0010C964  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 8010FA28 0010C968  38 A5 BA E8 */	addi r5, r5, __vt__Q34Game12KochappyBase10StatePress@l
/* 8010FA2C 0010C96C  90 83 00 04 */	stw r4, 4(r3)
/* 8010FA30 0010C970  38 02 96 78 */	addi r0, r2, lbl_805179D8@sda21
/* 8010FA34 0010C974  90 E3 00 08 */	stw r7, 8(r3)
/* 8010FA38 0010C978  90 C3 00 00 */	stw r6, 0(r3)
/* 8010FA3C 0010C97C  90 A3 00 00 */	stw r5, 0(r3)
/* 8010FA40 0010C980  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010FA44 0010C984  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase10StatePressFi

.fn init__Q34Game12KochappyBase10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8010FA48 0010C988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010FA4C 0010C98C  7C 08 02 A6 */	mflr r0
/* 8010FA50 0010C990  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 8010FA54 0010C994  38 A0 00 00 */	li r5, 0
/* 8010FA58 0010C998  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010FA5C 0010C99C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010FA60 0010C9A0  7C 9F 23 78 */	mr r31, r4
/* 8010FA64 0010C9A4  7F E3 FB 78 */	mr r3, r31
/* 8010FA68 0010C9A8  38 80 00 04 */	li r4, 4
/* 8010FA6C 0010C9AC  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8010FA70 0010C9B0  4B FF 55 95 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8010FA74 0010C9B4  7F E3 FB 78 */	mr r3, r31
/* 8010FA78 0010C9B8  4B FF 5C A9 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8010FA7C 0010C9BC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8010FA80 0010C9C0  38 00 00 00 */	li r0, 0
/* 8010FA84 0010C9C4  98 03 00 24 */	stb r0, 0x24(r3)
/* 8010FA88 0010C9C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010FA8C 0010C9CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010FA90 0010C9D0  7C 08 03 A6 */	mtlr r0
/* 8010FA94 0010C9D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FA98 0010C9D8  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase10StatePressFPQ24Game9EnemyBase, global
/* 8010FA9C 0010C9DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010FAA0 0010C9E0  7C 08 02 A6 */	mflr r0
/* 8010FAA4 0010C9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010FAA8 0010C9E8  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8010FAAC 0010C9EC  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8010FAB0 0010C9F0  28 00 00 00 */	cmplwi r0, 0
/* 8010FAB4 0010C9F4  41 82 00 28 */	beq .L_8010FADC
/* 8010FAB8 0010C9F8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8010FABC 0010C9FC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8010FAC0 0010CA00  40 82 00 1C */	bne .L_8010FADC
/* 8010FAC4 0010CA04  81 83 00 00 */	lwz r12, 0(r3)
/* 8010FAC8 0010CA08  38 A0 00 09 */	li r5, 9
/* 8010FACC 0010CA0C  38 C0 00 00 */	li r6, 0
/* 8010FAD0 0010CA10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010FAD4 0010CA14  7D 89 03 A6 */	mtctr r12
/* 8010FAD8 0010CA18  4E 80 04 21 */	bctrl 
.L_8010FADC:
/* 8010FADC 0010CA1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010FAE0 0010CA20  7C 08 03 A6 */	mtlr r0
/* 8010FAE4 0010CA24  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FAE8 0010CA28  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase10StatePressFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase9StateWaitFi, global
/* 8010FAEC 0010CA2C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8010FAF0 0010CA30  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 8010FAF4 0010CA34  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8010FAF8 0010CA38  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase9StateWait@ha
/* 8010FAFC 0010CA3C  90 03 00 00 */	stw r0, 0(r3)
/* 8010FB00 0010CA40  38 E0 00 00 */	li r7, 0
/* 8010FB04 0010CA44  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 8010FB08 0010CA48  38 A5 BA C4 */	addi r5, r5, __vt__Q34Game12KochappyBase9StateWait@l
/* 8010FB0C 0010CA4C  90 83 00 04 */	stw r4, 4(r3)
/* 8010FB10 0010CA50  38 02 96 84 */	addi r0, r2, lbl_805179E4@sda21
/* 8010FB14 0010CA54  90 E3 00 08 */	stw r7, 8(r3)
/* 8010FB18 0010CA58  90 C3 00 00 */	stw r6, 0(r3)
/* 8010FB1C 0010CA5C  90 A3 00 00 */	stw r5, 0(r3)
/* 8010FB20 0010CA60  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010FB24 0010CA64  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase9StateWaitFi

.fn init__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8010FB28 0010CA68  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8010FB2C 0010CA6C  7C 08 02 A6 */	mflr r0
/* 8010FB30 0010CA70  90 01 00 34 */	stw r0, 0x34(r1)
/* 8010FB34 0010CA74  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8010FB38 0010CA78  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8010FB3C 0010CA7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010FB40 0010CA80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8010FB44 0010CA84  7C 9E 23 78 */	mr r30, r4
/* 8010FB48 0010CA88  7C BF 2B 78 */	mr r31, r5
/* 8010FB4C 0010CA8C  7F C3 F3 78 */	mr r3, r30
/* 8010FB50 0010CA90  38 80 00 06 */	li r4, 6
/* 8010FB54 0010CA94  38 A0 00 00 */	li r5, 0
/* 8010FB58 0010CA98  4B FF 54 AD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8010FB5C 0010CA9C  3C 1F 8D 9F */	subis r0, r31, 0x7261
/* 8010FB60 0010CAA0  38 60 00 00 */	li r3, 0
/* 8010FB64 0010CAA4  28 00 6E 64 */	cmplwi r0, 0x6e64
/* 8010FB68 0010CAA8  90 7E 02 30 */	stw r3, 0x230(r30)
/* 8010FB6C 0010CAAC  40 82 00 40 */	bne .L_8010FBAC
/* 8010FB70 0010CAB0  4B FB 9A 31 */	bl rand
/* 8010FB74 0010CAB4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8010FB78 0010CAB8  3C 00 43 30 */	lis r0, 0x4330
/* 8010FB7C 0010CABC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8010FB80 0010CAC0  7F C3 F3 78 */	mr r3, r30
/* 8010FB84 0010CAC4  C8 42 96 98 */	lfd f2, lbl_805179F8@sda21(r2)
/* 8010FB88 0010CAC8  90 01 00 08 */	stw r0, 8(r1)
/* 8010FB8C 0010CACC  C0 02 96 8C */	lfs f0, lbl_805179EC@sda21(r2)
/* 8010FB90 0010CAD0  C8 21 00 08 */	lfd f1, 8(r1)
/* 8010FB94 0010CAD4  EC 21 10 28 */	fsubs f1, f1, f2
/* 8010FB98 0010CAD8  EF E1 00 24 */	fdivs f31, f1, f0
/* 8010FB9C 0010CADC  4B FF 76 DD */	bl getFirstKeyFrame__Q24Game9EnemyBaseFv
/* 8010FBA0 0010CAE0  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8010FBA4 0010CAE4  7F C3 F3 78 */	mr r3, r30
/* 8010FBA8 0010CAE8  4B FF 56 81 */	bl setMotionFrame__Q24Game9EnemyBaseFf
.L_8010FBAC:
/* 8010FBAC 0010CAEC  7F C3 F3 78 */	mr r3, r30
/* 8010FBB0 0010CAF0  C0 22 96 90 */	lfs f1, lbl_805179F0@sda21(r2)
/* 8010FBB4 0010CAF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010FBB8 0010CAF8  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 8010FBBC 0010CAFC  7D 89 03 A6 */	mtctr r12
/* 8010FBC0 0010CB00  4E 80 04 21 */	bctrl 
/* 8010FBC4 0010CB04  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8010FBC8 0010CB08  60 00 04 00 */	ori r0, r0, 0x400
/* 8010FBCC 0010CB0C  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8010FBD0 0010CB10  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8010FBD4 0010CB14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8010FBD8 0010CB18  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8010FBDC 0010CB1C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010FBE0 0010CB20  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8010FBE4 0010CB24  7C 08 03 A6 */	mtlr r0
/* 8010FBE8 0010CB28  38 21 00 30 */	addi r1, r1, 0x30
/* 8010FBEC 0010CB2C  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBase, global
/* 8010FBF0 0010CB30  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8010FBF4 0010CB34  7C 08 02 A6 */	mflr r0
/* 8010FBF8 0010CB38  90 01 00 94 */	stw r0, 0x94(r1)
/* 8010FBFC 0010CB3C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8010FC00 0010CB40  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8010FC04 0010CB44  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8010FC08 0010CB48  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8010FC0C 0010CB4C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8010FC10 0010CB50  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8010FC14 0010CB54  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8010FC18 0010CB58  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8010FC1C 0010CB5C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8010FC20 0010CB60  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8010FC24 0010CB64  7C 9F 23 78 */	mr r31, r4
/* 8010FC28 0010CB68  7C 7E 1B 78 */	mr r30, r3
/* 8010FC2C 0010CB6C  7F E3 FB 78 */	mr r3, r31
/* 8010FC30 0010CB70  38 80 00 01 */	li r4, 1
/* 8010FC34 0010CB74  48 00 4A 25 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 8010FC38 0010CB78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8010FC3C 0010CB7C  41 82 00 30 */	beq .L_8010FC6C
/* 8010FC40 0010CB80  38 00 00 02 */	li r0, 2
/* 8010FC44 0010CB84  7F C3 F3 78 */	mr r3, r30
/* 8010FC48 0010CB88  90 01 00 08 */	stw r0, 8(r1)
/* 8010FC4C 0010CB8C  7F E4 FB 78 */	mr r4, r31
/* 8010FC50 0010CB90  38 C1 00 08 */	addi r6, r1, 8
/* 8010FC54 0010CB94  38 A0 00 05 */	li r5, 5
/* 8010FC58 0010CB98  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010FC5C 0010CB9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010FC60 0010CBA0  7D 89 03 A6 */	mtctr r12
/* 8010FC64 0010CBA4  4E 80 04 21 */	bctrl 
/* 8010FC68 0010CBA8  48 00 02 24 */	b .L_8010FE8C
.L_8010FC6C:
/* 8010FC6C 0010CBAC  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8010FC70 0010CBB0  28 00 00 00 */	cmplwi r0, 0
/* 8010FC74 0010CBB4  40 82 00 38 */	bne .L_8010FCAC
/* 8010FC78 0010CBB8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8010FC7C 0010CBBC  7F E3 FB 78 */	mr r3, r31
/* 8010FC80 0010CBC0  C0 22 96 A0 */	lfs f1, lbl_80517A00@sda21(r2)
/* 8010FC84 0010CBC4  38 80 00 00 */	li r4, 0
/* 8010FC88 0010CBC8  C0 45 03 D4 */	lfs f2, 0x3d4(r5)
/* 8010FC8C 0010CBCC  38 A0 00 00 */	li r5, 0
/* 8010FC90 0010CBD0  38 C0 00 00 */	li r6, 0
/* 8010FC94 0010CBD4  48 00 33 BD */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8010FC98 0010CBD8  28 03 00 00 */	cmplwi r3, 0
/* 8010FC9C 0010CBDC  41 82 00 10 */	beq .L_8010FCAC
/* 8010FCA0 0010CBE0  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8010FCA4 0010CBE4  7F E3 FB 78 */	mr r3, r31
/* 8010FCA8 0010CBE8  4B FF 55 F9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8010FCAC:
/* 8010FCAC 0010CBEC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8010FCB0 0010CBF0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8010FCB4 0010CBF4  28 00 00 00 */	cmplwi r0, 0
/* 8010FCB8 0010CBF8  41 82 01 D4 */	beq .L_8010FE8C
/* 8010FCBC 0010CBFC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8010FCC0 0010CC00  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8010FCC4 0010CC04  41 82 00 44 */	beq .L_8010FD08
/* 8010FCC8 0010CC08  40 80 01 C4 */	bge .L_8010FE8C
/* 8010FCCC 0010CC0C  2C 00 00 02 */	cmpwi r0, 2
/* 8010FCD0 0010CC10  41 82 00 08 */	beq .L_8010FCD8
/* 8010FCD4 0010CC14  48 00 01 B8 */	b .L_8010FE8C
.L_8010FCD8:
/* 8010FCD8 0010CC18  7F E3 FB 78 */	mr r3, r31
/* 8010FCDC 0010CC1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010FCE0 0010CC20  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8010FCE4 0010CC24  7D 89 03 A6 */	mtctr r12
/* 8010FCE8 0010CC28  4E 80 04 21 */	bctrl 
/* 8010FCEC 0010CC2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8010FCF0 0010CC30  38 80 59 6A */	li r4, 0x596a
/* 8010FCF4 0010CC34  38 A0 00 00 */	li r5, 0
/* 8010FCF8 0010CC38  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8010FCFC 0010CC3C  7D 89 03 A6 */	mtctr r12
/* 8010FD00 0010CC40  4E 80 04 21 */	bctrl 
/* 8010FD04 0010CC44  48 00 01 88 */	b .L_8010FE8C
.L_8010FD08:
/* 8010FD08 0010CC48  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 8010FD0C 0010CC4C  38 61 00 24 */	addi r3, r1, 0x24
/* 8010FD10 0010CC50  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8010FD14 0010CC54  81 84 00 00 */	lwz r12, 0(r4)
/* 8010FD18 0010CC58  C3 E5 08 6C */	lfs f31, 0x86c(r5)
/* 8010FD1C 0010CC5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8010FD20 0010CC60  C3 85 03 34 */	lfs f28, 0x334(r5)
/* 8010FD24 0010CC64  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 8010FD28 0010CC68  7D 89 03 A6 */	mtctr r12
/* 8010FD2C 0010CC6C  4E 80 04 21 */	bctrl 
/* 8010FD30 0010CC70  7F E4 FB 78 */	mr r4, r31
/* 8010FD34 0010CC74  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8010FD38 0010CC78  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010FD3C 0010CC7C  38 61 00 30 */	addi r3, r1, 0x30
/* 8010FD40 0010CC80  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8010FD44 0010CC84  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8010FD48 0010CC88  81 8C 00 08 */	lwz r12, 8(r12)
/* 8010FD4C 0010CC8C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8010FD50 0010CC90  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8010FD54 0010CC94  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8010FD58 0010CC98  7D 89 03 A6 */	mtctr r12
/* 8010FD5C 0010CC9C  4E 80 04 21 */	bctrl 
/* 8010FD60 0010CCA0  C0 A1 00 30 */	lfs f5, 0x30(r1)
/* 8010FD64 0010CCA4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8010FD68 0010CCA8  C0 61 00 38 */	lfs f3, 0x38(r1)
/* 8010FD6C 0010CCAC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8010FD70 0010CCB0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8010FD74 0010CCB4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8010FD78 0010CCB8  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8010FD7C 0010CCBC  EC 21 28 28 */	fsubs f1, f1, f5
/* 8010FD80 0010CCC0  EC 40 18 28 */	fsubs f2, f0, f3
/* 8010FD84 0010CCC4  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 8010FD88 0010CCC8  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 8010FD8C 0010CCCC  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8010FD90 0010CCD0  4B F2 53 79 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8010FD94 0010CCD4  48 30 1E 3D */	bl roundAng__Ff
/* 8010FD98 0010CCD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010FD9C 0010CCDC  FF C0 08 90 */	fmr f30, f1
/* 8010FDA0 0010CCE0  7F E3 FB 78 */	mr r3, r31
/* 8010FDA4 0010CCE4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8010FDA8 0010CCE8  7D 89 03 A6 */	mtctr r12
/* 8010FDAC 0010CCEC  4E 80 04 21 */	bctrl 
/* 8010FDB0 0010CCF0  FC 40 08 90 */	fmr f2, f1
/* 8010FDB4 0010CCF4  FC 20 F0 90 */	fmr f1, f30
/* 8010FDB8 0010CCF8  48 30 1E 45 */	bl angDist__Fff
/* 8010FDBC 0010CCFC  FF C0 08 90 */	fmr f30, f1
/* 8010FDC0 0010CD00  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 8010FDC4 0010CD04  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 8010FDC8 0010CD08  EC 00 07 32 */	fmuls f0, f0, f28
/* 8010FDCC 0010CD0C  EF 9E 07 72 */	fmuls f28, f30, f29
/* 8010FDD0 0010CD10  EC 21 00 32 */	fmuls f1, f1, f0
/* 8010FDD4 0010CD14  FC 00 E2 10 */	fabs f0, f28
/* 8010FDD8 0010CD18  FC 00 00 18 */	frsp f0, f0
/* 8010FDDC 0010CD1C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8010FDE0 0010CD20  40 81 00 1C */	ble .L_8010FDFC
/* 8010FDE4 0010CD24  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 8010FDE8 0010CD28  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8010FDEC 0010CD2C  40 81 00 0C */	ble .L_8010FDF8
/* 8010FDF0 0010CD30  FF 80 08 90 */	fmr f28, f1
/* 8010FDF4 0010CD34  48 00 00 08 */	b .L_8010FDFC
.L_8010FDF8:
/* 8010FDF8 0010CD38  FF 80 08 50 */	fneg f28, f1
.L_8010FDFC:
/* 8010FDFC 0010CD3C  7F E3 FB 78 */	mr r3, r31
/* 8010FE00 0010CD40  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010FE04 0010CD44  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8010FE08 0010CD48  7D 89 03 A6 */	mtctr r12
/* 8010FE0C 0010CD4C  4E 80 04 21 */	bctrl 
/* 8010FE10 0010CD50  EC 3C 08 2A */	fadds f1, f28, f1
/* 8010FE14 0010CD54  48 30 1D BD */	bl roundAng__Ff
/* 8010FE18 0010CD58  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 8010FE1C 0010CD5C  FC 40 F2 10 */	fabs f2, f30
/* 8010FE20 0010CD60  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8010FE24 0010CD64  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8010FE28 0010CD68  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 8010FE2C 0010CD6C  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 8010FE30 0010CD70  FC 40 10 18 */	frsp f2, f2
/* 8010FE34 0010CD74  EC 01 00 32 */	fmuls f0, f1, f0
/* 8010FE38 0010CD78  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 8010FE3C 0010CD7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8010FE40 0010CD80  4C 40 13 82 */	cror 2, 0, 2
/* 8010FE44 0010CD84  40 82 00 28 */	bne .L_8010FE6C
/* 8010FE48 0010CD88  7F C3 F3 78 */	mr r3, r30
/* 8010FE4C 0010CD8C  7F E4 FB 78 */	mr r4, r31
/* 8010FE50 0010CD90  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010FE54 0010CD94  38 A0 00 03 */	li r5, 3
/* 8010FE58 0010CD98  38 C0 00 00 */	li r6, 0
/* 8010FE5C 0010CD9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010FE60 0010CDA0  7D 89 03 A6 */	mtctr r12
/* 8010FE64 0010CDA4  4E 80 04 21 */	bctrl 
/* 8010FE68 0010CDA8  48 00 00 24 */	b .L_8010FE8C
.L_8010FE6C:
/* 8010FE6C 0010CDAC  7F C3 F3 78 */	mr r3, r30
/* 8010FE70 0010CDB0  7F E4 FB 78 */	mr r4, r31
/* 8010FE74 0010CDB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010FE78 0010CDB8  38 A0 00 02 */	li r5, 2
/* 8010FE7C 0010CDBC  38 C0 00 00 */	li r6, 0
/* 8010FE80 0010CDC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010FE84 0010CDC4  7D 89 03 A6 */	mtctr r12
/* 8010FE88 0010CDC8  4E 80 04 21 */	bctrl 
.L_8010FE8C:
/* 8010FE8C 0010CDCC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8010FE90 0010CDD0  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 8010FE94 0010CDD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8010FE98 0010CDD8  4C 40 13 82 */	cror 2, 0, 2
/* 8010FE9C 0010CDDC  40 82 00 24 */	bne .L_8010FEC0
/* 8010FEA0 0010CDE0  7F C3 F3 78 */	mr r3, r30
/* 8010FEA4 0010CDE4  7F E4 FB 78 */	mr r4, r31
/* 8010FEA8 0010CDE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010FEAC 0010CDEC  38 A0 00 01 */	li r5, 1
/* 8010FEB0 0010CDF0  38 C0 00 00 */	li r6, 0
/* 8010FEB4 0010CDF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010FEB8 0010CDF8  7D 89 03 A6 */	mtctr r12
/* 8010FEBC 0010CDFC  4E 80 04 21 */	bctrl 
.L_8010FEC0:
/* 8010FEC0 0010CE00  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8010FEC4 0010CE04  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8010FEC8 0010CE08  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8010FECC 0010CE0C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8010FED0 0010CE10  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8010FED4 0010CE14  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8010FED8 0010CE18  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8010FEDC 0010CE1C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8010FEE0 0010CE20  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8010FEE4 0010CE24  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8010FEE8 0010CE28  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8010FEEC 0010CE2C  7C 08 03 A6 */	mtlr r0
/* 8010FEF0 0010CE30  38 21 00 90 */	addi r1, r1, 0x90
/* 8010FEF4 0010CE34  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBase, global
/* 8010FEF8 0010CE38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010FEFC 0010CE3C  7C 08 02 A6 */	mflr r0
/* 8010FF00 0010CE40  7C 83 23 78 */	mr r3, r4
/* 8010FF04 0010CE44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010FF08 0010CE48  4B FF 78 65 */	bl constraintOff__Q24Game9EnemyBaseFv
/* 8010FF0C 0010CE4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010FF10 0010CE50  7C 08 03 A6 */	mtlr r0
/* 8010FF14 0010CE54  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FF18 0010CE58  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase9StateWaitFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase9StateDeadFi, global
/* 8010FF1C 0010CE5C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8010FF20 0010CE60  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 8010FF24 0010CE64  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8010FF28 0010CE68  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase9StateDead@ha
/* 8010FF2C 0010CE6C  90 03 00 00 */	stw r0, 0(r3)
/* 8010FF30 0010CE70  38 E0 00 00 */	li r7, 0
/* 8010FF34 0010CE74  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 8010FF38 0010CE78  38 A5 BA A0 */	addi r5, r5, __vt__Q34Game12KochappyBase9StateDead@l
/* 8010FF3C 0010CE7C  90 83 00 04 */	stw r4, 4(r3)
/* 8010FF40 0010CE80  38 02 96 AC */	addi r0, r2, lbl_80517A0C@sda21
/* 8010FF44 0010CE84  90 E3 00 08 */	stw r7, 8(r3)
/* 8010FF48 0010CE88  90 C3 00 00 */	stw r6, 0(r3)
/* 8010FF4C 0010CE8C  90 A3 00 00 */	stw r5, 0(r3)
/* 8010FF50 0010CE90  90 03 00 0C */	stw r0, 0xc(r3)
/* 8010FF54 0010CE94  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase9StateDeadFi

.fn init__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8010FF58 0010CE98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010FF5C 0010CE9C  7C 08 02 A6 */	mflr r0
/* 8010FF60 0010CEA0  38 A0 00 00 */	li r5, 0
/* 8010FF64 0010CEA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010FF68 0010CEA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010FF6C 0010CEAC  7C 9F 23 78 */	mr r31, r4
/* 8010FF70 0010CEB0  38 80 00 01 */	li r4, 1
/* 8010FF74 0010CEB4  7F E3 FB 78 */	mr r3, r31
/* 8010FF78 0010CEB8  4B FF 50 8D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8010FF7C 0010CEBC  7F E3 FB 78 */	mr r3, r31
/* 8010FF80 0010CEC0  4B FF 57 A1 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8010FF84 0010CEC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010FF88 0010CEC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010FF8C 0010CECC  7C 08 03 A6 */	mtlr r0
/* 8010FF90 0010CED0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FF94 0010CED4  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBase, global
/* 8010FF98 0010CED8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010FF9C 0010CEDC  7C 08 02 A6 */	mflr r0
/* 8010FFA0 0010CEE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010FFA4 0010CEE4  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8010FFA8 0010CEE8  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8010FFAC 0010CEEC  28 00 00 00 */	cmplwi r0, 0
/* 8010FFB0 0010CEF0  41 82 00 28 */	beq .L_8010FFD8
/* 8010FFB4 0010CEF4  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8010FFB8 0010CEF8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8010FFBC 0010CEFC  40 82 00 1C */	bne .L_8010FFD8
/* 8010FFC0 0010CF00  81 83 00 00 */	lwz r12, 0(r3)
/* 8010FFC4 0010CF04  38 A0 00 09 */	li r5, 9
/* 8010FFC8 0010CF08  38 C0 00 00 */	li r6, 0
/* 8010FFCC 0010CF0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010FFD0 0010CF10  7D 89 03 A6 */	mtctr r12
/* 8010FFD4 0010CF14  4E 80 04 21 */	bctrl 
.L_8010FFD8:
/* 8010FFD8 0010CF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010FFDC 0010CF1C  7C 08 03 A6 */	mtlr r0
/* 8010FFE0 0010CF20  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FFE4 0010CF24  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBase, global
/* 8010FFE8 0010CF28  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase9StateDeadFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase9StateTurnFi, global
/* 8010FFEC 0010CF2C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8010FFF0 0010CF30  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 8010FFF4 0010CF34  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8010FFF8 0010CF38  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase9StateTurn@ha
/* 8010FFFC 0010CF3C  90 03 00 00 */	stw r0, 0(r3)
/* 80110000 0010CF40  38 E0 00 00 */	li r7, 0
/* 80110004 0010CF44  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 80110008 0010CF48  38 A5 BA 7C */	addi r5, r5, __vt__Q34Game12KochappyBase9StateTurn@l
/* 8011000C 0010CF4C  90 83 00 04 */	stw r4, 4(r3)
/* 80110010 0010CF50  38 02 96 B4 */	addi r0, r2, lbl_80517A14@sda21
/* 80110014 0010CF54  90 E3 00 08 */	stw r7, 8(r3)
/* 80110018 0010CF58  90 C3 00 00 */	stw r6, 0(r3)
/* 8011001C 0010CF5C  90 A3 00 00 */	stw r5, 0(r3)
/* 80110020 0010CF60  90 03 00 0C */	stw r0, 0xc(r3)
/* 80110024 0010CF64  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase9StateTurnFi

.fn init__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80110028 0010CF68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011002C 0010CF6C  7C 08 02 A6 */	mflr r0
/* 80110030 0010CF70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110034 0010CF74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110038 0010CF78  7C 9F 23 78 */	mr r31, r4
/* 8011003C 0010CF7C  93 C1 00 08 */	stw r30, 8(r1)
/* 80110040 0010CF80  7C 7E 1B 78 */	mr r30, r3
/* 80110044 0010CF84  7F E3 FB 78 */	mr r3, r31
/* 80110048 0010CF88  4B FF 19 85 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8011004C 0010CF8C  7F E3 FB 78 */	mr r3, r31
/* 80110050 0010CF90  38 80 00 07 */	li r4, 7
/* 80110054 0010CF94  38 A0 00 00 */	li r5, 0
/* 80110058 0010CF98  4B FF 4F AD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8011005C 0010CF9C  38 00 FF FF */	li r0, -1
/* 80110060 0010CFA0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110064 0010CFA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110068 0010CFA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011006C 0010CFAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80110070 0010CFB0  7C 08 03 A6 */	mtlr r0
/* 80110074 0010CFB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80110078 0010CFB8  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBase, global
/* 8011007C 0010CFBC  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 80110080 0010CFC0  7C 08 02 A6 */	mflr r0
/* 80110084 0010CFC4  90 01 01 94 */	stw r0, 0x194(r1)
/* 80110088 0010CFC8  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 8011008C 0010CFCC  F3 E1 01 88 */	psq_st f31, 392(r1), 0, qr0
/* 80110090 0010CFD0  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 80110094 0010CFD4  F3 C1 01 78 */	psq_st f30, 376(r1), 0, qr0
/* 80110098 0010CFD8  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 8011009C 0010CFDC  F3 A1 01 68 */	psq_st f29, 360(r1), 0, qr0
/* 801100A0 0010CFE0  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 801100A4 0010CFE4  F3 81 01 58 */	psq_st f28, 344(r1), 0, qr0
/* 801100A8 0010CFE8  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 801100AC 0010CFEC  F3 61 01 48 */	psq_st f27, 328(r1), 0, qr0
/* 801100B0 0010CFF0  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 801100B4 0010CFF4  F3 41 01 38 */	psq_st f26, 312(r1), 0, qr0
/* 801100B8 0010CFF8  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 801100BC 0010CFFC  F3 21 01 28 */	psq_st f25, 296(r1), 0, qr0
/* 801100C0 0010D000  DB 01 01 10 */	stfd f24, 0x110(r1)
/* 801100C4 0010D004  F3 01 01 18 */	psq_st f24, 280(r1), 0, qr0
/* 801100C8 0010D008  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 801100CC 0010D00C  93 C1 01 08 */	stw r30, 0x108(r1)
/* 801100D0 0010D010  93 A1 01 04 */	stw r29, 0x104(r1)
/* 801100D4 0010D014  93 81 01 00 */	stw r28, 0x100(r1)
/* 801100D8 0010D018  7C 9F 23 78 */	mr r31, r4
/* 801100DC 0010D01C  7C 7E 1B 78 */	mr r30, r3
/* 801100E0 0010D020  7F E3 FB 78 */	mr r3, r31
/* 801100E4 0010D024  38 80 00 01 */	li r4, 1
/* 801100E8 0010D028  48 00 45 71 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 801100EC 0010D02C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801100F0 0010D030  41 82 00 28 */	beq .L_80110118
/* 801100F4 0010D034  7F C3 F3 78 */	mr r3, r30
/* 801100F8 0010D038  7F E4 FB 78 */	mr r4, r31
/* 801100FC 0010D03C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80110100 0010D040  38 A0 00 05 */	li r5, 5
/* 80110104 0010D044  38 C0 00 00 */	li r6, 0
/* 80110108 0010D048  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8011010C 0010D04C  7D 89 03 A6 */	mtctr r12
/* 80110110 0010D050  4E 80 04 21 */	bctrl 
/* 80110114 0010D054  48 00 05 E4 */	b .L_801106F8
.L_80110118:
/* 80110118 0010D058  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8011011C 0010D05C  7F E3 FB 78 */	mr r3, r31
/* 80110120 0010D060  38 80 00 00 */	li r4, 0
/* 80110124 0010D064  C3 05 03 AC */	lfs f24, 0x3ac(r5)
/* 80110128 0010D068  FC 20 C0 90 */	fmr f1, f24
/* 8011012C 0010D06C  48 00 49 95 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80110130 0010D070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110134 0010D074  41 82 00 0C */	beq .L_80110140
/* 80110138 0010D078  38 60 00 01 */	li r3, 1
/* 8011013C 0010D07C  48 00 00 28 */	b .L_80110164
.L_80110140:
/* 80110140 0010D080  FC 20 C0 90 */	fmr f1, f24
/* 80110144 0010D084  7F E3 FB 78 */	mr r3, r31
/* 80110148 0010D088  38 80 00 00 */	li r4, 0
/* 8011014C 0010D08C  48 00 45 E9 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80110150 0010D090  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110154 0010D094  41 82 00 0C */	beq .L_80110160
/* 80110158 0010D098  38 60 00 01 */	li r3, 1
/* 8011015C 0010D09C  48 00 00 08 */	b .L_80110164
.L_80110160:
/* 80110160 0010D0A0  38 60 00 00 */	li r3, 0
.L_80110164:
/* 80110164 0010D0A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110168 0010D0A8  40 82 00 1C */	bne .L_80110184
/* 8011016C 0010D0AC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80110170 0010D0B0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80110174 0010D0B4  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80110178 0010D0B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011017C 0010D0BC  7C 00 00 26 */	mfcr r0
/* 80110180 0010D0C0  54 03 0F FE */	srwi r3, r0, 0x1f
.L_80110184:
/* 80110184 0010D0C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110188 0010D0C8  41 82 00 0C */	beq .L_80110194
/* 8011018C 0010D0CC  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110190 0010D0D0  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_80110194:
/* 80110194 0010D0D4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80110198 0010D0D8  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 8011019C 0010D0DC  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 801101A0 0010D0E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801101A4 0010D0E4  40 80 00 20 */	bge .L_801101C4
/* 801101A8 0010D0E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801101AC 0010D0EC  C3 C2 96 A0 */	lfs f30, lbl_80517A00@sda21(r2)
/* 801101B0 0010D0F0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 801101B4 0010D0F4  FC 20 F0 90 */	fmr f1, f30
/* 801101B8 0010D0F8  EC 02 00 2A */	fadds f0, f2, f0
/* 801101BC 0010D0FC  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 801101C0 0010D100  48 00 00 0C */	b .L_801101CC
.L_801101C4:
/* 801101C4 0010D104  C3 C3 04 24 */	lfs f30, 0x424(r3)
/* 801101C8 0010D108  C0 23 04 9C */	lfs f1, 0x49c(r3)
.L_801101CC:
/* 801101CC 0010D10C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801101D0 0010D110  7F E3 FB 78 */	mr r3, r31
/* 801101D4 0010D114  38 80 00 00 */	li r4, 0
/* 801101D8 0010D118  38 C0 00 00 */	li r6, 0
/* 801101DC 0010D11C  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 801101E0 0010D120  38 A0 00 00 */	li r5, 0
/* 801101E4 0010D124  48 00 2E 6D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 801101E8 0010D128  28 03 00 00 */	cmplwi r3, 0
/* 801101EC 0010D12C  41 82 04 C0 */	beq .L_801106AC
/* 801101F0 0010D130  90 7F 02 30 */	stw r3, 0x230(r31)
/* 801101F4 0010D134  38 61 00 E0 */	addi r3, r1, 0xe0
/* 801101F8 0010D138  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 801101FC 0010D13C  81 84 00 00 */	lwz r12, 0(r4)
/* 80110200 0010D140  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110204 0010D144  7D 89 03 A6 */	mtctr r12
/* 80110208 0010D148  4E 80 04 21 */	bctrl 
/* 8011020C 0010D14C  7F E4 FB 78 */	mr r4, r31
/* 80110210 0010D150  C0 41 00 E0 */	lfs f2, 0xe0(r1)
/* 80110214 0010D154  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110218 0010D158  38 61 00 EC */	addi r3, r1, 0xec
/* 8011021C 0010D15C  C0 21 00 E4 */	lfs f1, 0xe4(r1)
/* 80110220 0010D160  C0 01 00 E8 */	lfs f0, 0xe8(r1)
/* 80110224 0010D164  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110228 0010D168  D0 41 00 C8 */	stfs f2, 0xc8(r1)
/* 8011022C 0010D16C  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80110230 0010D170  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80110234 0010D174  7D 89 03 A6 */	mtctr r12
/* 80110238 0010D178  4E 80 04 21 */	bctrl 
/* 8011023C 0010D17C  C0 A1 00 EC */	lfs f5, 0xec(r1)
/* 80110240 0010D180  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80110244 0010D184  C0 61 00 F4 */	lfs f3, 0xf4(r1)
/* 80110248 0010D188  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8011024C 0010D18C  C0 21 00 C8 */	lfs f1, 0xc8(r1)
/* 80110250 0010D190  C0 01 00 D0 */	lfs f0, 0xd0(r1)
/* 80110254 0010D194  C0 81 00 F0 */	lfs f4, 0xf0(r1)
/* 80110258 0010D198  EC 21 28 28 */	fsubs f1, f1, f5
/* 8011025C 0010D19C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80110260 0010D1A0  D0 A1 00 D4 */	stfs f5, 0xd4(r1)
/* 80110264 0010D1A4  D0 81 00 D8 */	stfs f4, 0xd8(r1)
/* 80110268 0010D1A8  D0 61 00 DC */	stfs f3, 0xdc(r1)
/* 8011026C 0010D1AC  4B F2 4E 9D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80110270 0010D1B0  48 30 19 61 */	bl roundAng__Ff
/* 80110274 0010D1B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110278 0010D1B8  FF 00 08 90 */	fmr f24, f1
/* 8011027C 0010D1BC  7F E3 FB 78 */	mr r3, r31
/* 80110280 0010D1C0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80110284 0010D1C4  7D 89 03 A6 */	mtctr r12
/* 80110288 0010D1C8  4E 80 04 21 */	bctrl 
/* 8011028C 0010D1CC  FC 40 08 90 */	fmr f2, f1
/* 80110290 0010D1D0  FC 20 C0 90 */	fmr f1, f24
/* 80110294 0010D1D4  48 30 19 69 */	bl angDist__Fff
/* 80110298 0010D1D8  7F E4 FB 78 */	mr r4, r31
/* 8011029C 0010D1DC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801102A0 0010D1E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801102A4 0010D1E4  FF E0 08 90 */	fmr f31, f1
/* 801102A8 0010D1E8  38 61 00 44 */	addi r3, r1, 0x44
/* 801102AC 0010D1EC  C3 65 05 8C */	lfs f27, 0x58c(r5)
/* 801102B0 0010D1F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801102B4 0010D1F4  3B 80 00 00 */	li r28, 0
/* 801102B8 0010D1F8  C3 85 05 64 */	lfs f28, 0x564(r5)
/* 801102BC 0010D1FC  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 801102C0 0010D200  7D 89 03 A6 */	mtctr r12
/* 801102C4 0010D204  4E 80 04 21 */	bctrl 
/* 801102C8 0010D208  7F A4 EB 78 */	mr r4, r29
/* 801102CC 0010D20C  38 61 00 38 */	addi r3, r1, 0x38
/* 801102D0 0010D210  81 9D 00 00 */	lwz r12, 0(r29)
/* 801102D4 0010D214  C3 A1 00 44 */	lfs f29, 0x44(r1)
/* 801102D8 0010D218  81 8C 00 08 */	lwz r12, 8(r12)
/* 801102DC 0010D21C  7D 89 03 A6 */	mtctr r12
/* 801102E0 0010D220  4E 80 04 21 */	bctrl 
/* 801102E4 0010D224  7F E4 FB 78 */	mr r4, r31
/* 801102E8 0010D228  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801102EC 0010D22C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801102F0 0010D230  38 61 00 5C */	addi r3, r1, 0x5c
/* 801102F4 0010D234  EF 20 E8 28 */	fsubs f25, f0, f29
/* 801102F8 0010D238  81 8C 00 08 */	lwz r12, 8(r12)
/* 801102FC 0010D23C  7D 89 03 A6 */	mtctr r12
/* 80110300 0010D240  4E 80 04 21 */	bctrl 
/* 80110304 0010D244  7F A4 EB 78 */	mr r4, r29
/* 80110308 0010D248  38 61 00 50 */	addi r3, r1, 0x50
/* 8011030C 0010D24C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80110310 0010D250  C3 A1 00 60 */	lfs f29, 0x60(r1)
/* 80110314 0010D254  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110318 0010D258  7D 89 03 A6 */	mtctr r12
/* 8011031C 0010D25C  4E 80 04 21 */	bctrl 
/* 80110320 0010D260  7F E4 FB 78 */	mr r4, r31
/* 80110324 0010D264  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80110328 0010D268  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011032C 0010D26C  38 61 00 74 */	addi r3, r1, 0x74
/* 80110330 0010D270  EF 00 E8 28 */	fsubs f24, f0, f29
/* 80110334 0010D274  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110338 0010D278  7D 89 03 A6 */	mtctr r12
/* 8011033C 0010D27C  4E 80 04 21 */	bctrl 
/* 80110340 0010D280  7F A4 EB 78 */	mr r4, r29
/* 80110344 0010D284  38 61 00 68 */	addi r3, r1, 0x68
/* 80110348 0010D288  81 9D 00 00 */	lwz r12, 0(r29)
/* 8011034C 0010D28C  C3 A1 00 7C */	lfs f29, 0x7c(r1)
/* 80110350 0010D290  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110354 0010D294  7D 89 03 A6 */	mtctr r12
/* 80110358 0010D298  4E 80 04 21 */	bctrl 
/* 8011035C 0010D29C  EC 38 06 32 */	fmuls f1, f24, f24
/* 80110360 0010D2A0  C0 41 00 70 */	lfs f2, 0x70(r1)
/* 80110364 0010D2A4  EC 1C 07 32 */	fmuls f0, f28, f28
/* 80110368 0010D2A8  EC 42 E8 28 */	fsubs f2, f2, f29
/* 8011036C 0010D2AC  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 80110370 0010D2B0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80110374 0010D2B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110378 0010D2B8  40 80 00 2C */	bge .L_801103A4
/* 8011037C 0010D2BC  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80110380 0010D2C0  FC 40 FA 10 */	fabs f2, f31
/* 80110384 0010D2C4  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110388 0010D2C8  EC 00 06 F2 */	fmuls f0, f0, f27
/* 8011038C 0010D2CC  FC 40 10 18 */	frsp f2, f2
/* 80110390 0010D2D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110394 0010D2D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80110398 0010D2D8  4C 40 13 82 */	cror 2, 0, 2
/* 8011039C 0010D2DC  40 82 00 08 */	bne .L_801103A4
/* 801103A0 0010D2E0  3B 80 00 01 */	li r28, 1
.L_801103A4:
/* 801103A4 0010D2E4  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 801103A8 0010D2E8  41 82 00 30 */	beq .L_801103D8
/* 801103AC 0010D2EC  38 00 00 04 */	li r0, 4
/* 801103B0 0010D2F0  7F E3 FB 78 */	mr r3, r31
/* 801103B4 0010D2F4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801103B8 0010D2F8  4B FF 4E E9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 801103BC 0010D2FC  7F E3 FB 78 */	mr r3, r31
/* 801103C0 0010D300  C0 22 96 BC */	lfs f1, lbl_80517A1C@sda21(r2)
/* 801103C4 0010D304  81 9F 00 00 */	lwz r12, 0(r31)
/* 801103C8 0010D308  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 801103CC 0010D30C  7D 89 03 A6 */	mtctr r12
/* 801103D0 0010D310  4E 80 04 21 */	bctrl 
/* 801103D4 0010D314  48 00 02 E8 */	b .L_801106BC
.L_801103D8:
/* 801103D8 0010D318  7F E4 FB 78 */	mr r4, r31
/* 801103DC 0010D31C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801103E0 0010D320  81 9F 00 00 */	lwz r12, 0(r31)
/* 801103E4 0010D324  38 61 00 8C */	addi r3, r1, 0x8c
/* 801103E8 0010D328  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 801103EC 0010D32C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801103F0 0010D330  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 801103F4 0010D334  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 801103F8 0010D338  83 9F 02 30 */	lwz r28, 0x230(r31)
/* 801103FC 0010D33C  7D 89 03 A6 */	mtctr r12
/* 80110400 0010D340  4E 80 04 21 */	bctrl 
/* 80110404 0010D344  7F 84 E3 78 */	mr r4, r28
/* 80110408 0010D348  38 61 00 80 */	addi r3, r1, 0x80
/* 8011040C 0010D34C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80110410 0010D350  C3 A1 00 8C */	lfs f29, 0x8c(r1)
/* 80110414 0010D354  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110418 0010D358  7D 89 03 A6 */	mtctr r12
/* 8011041C 0010D35C  4E 80 04 21 */	bctrl 
/* 80110420 0010D360  7F E4 FB 78 */	mr r4, r31
/* 80110424 0010D364  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80110428 0010D368  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011042C 0010D36C  38 61 00 A4 */	addi r3, r1, 0xa4
/* 80110430 0010D370  EF 80 E8 28 */	fsubs f28, f0, f29
/* 80110434 0010D374  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110438 0010D378  7D 89 03 A6 */	mtctr r12
/* 8011043C 0010D37C  4E 80 04 21 */	bctrl 
/* 80110440 0010D380  7F 84 E3 78 */	mr r4, r28
/* 80110444 0010D384  38 61 00 98 */	addi r3, r1, 0x98
/* 80110448 0010D388  81 9C 00 00 */	lwz r12, 0(r28)
/* 8011044C 0010D38C  C3 A1 00 A8 */	lfs f29, 0xa8(r1)
/* 80110450 0010D390  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110454 0010D394  7D 89 03 A6 */	mtctr r12
/* 80110458 0010D398  4E 80 04 21 */	bctrl 
/* 8011045C 0010D39C  7F E4 FB 78 */	mr r4, r31
/* 80110460 0010D3A0  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 80110464 0010D3A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110468 0010D3A8  38 61 00 BC */	addi r3, r1, 0xbc
/* 8011046C 0010D3AC  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80110470 0010D3B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110474 0010D3B4  7D 89 03 A6 */	mtctr r12
/* 80110478 0010D3B8  4E 80 04 21 */	bctrl 
/* 8011047C 0010D3BC  7F 84 E3 78 */	mr r4, r28
/* 80110480 0010D3C0  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80110484 0010D3C4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80110488 0010D3C8  C3 A1 00 C4 */	lfs f29, 0xc4(r1)
/* 8011048C 0010D3CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110490 0010D3D0  7D 89 03 A6 */	mtctr r12
/* 80110494 0010D3D4  4E 80 04 21 */	bctrl 
/* 80110498 0010D3D8  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 8011049C 0010D3DC  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 801104A0 0010D3E0  EF 39 06 72 */	fmuls f25, f25, f25
/* 801104A4 0010D3E4  38 60 00 01 */	li r3, 1
/* 801104A8 0010D3E8  EC 00 E8 28 */	fsubs f0, f0, f29
/* 801104AC 0010D3EC  38 80 00 00 */	li r4, 0
/* 801104B0 0010D3F0  EC 00 00 32 */	fmuls f0, f0, f0
/* 801104B4 0010D3F4  EC 1C 07 3A */	fmadds f0, f28, f28, f0
/* 801104B8 0010D3F8  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 801104BC 0010D3FC  40 81 00 30 */	ble .L_801104EC
/* 801104C0 0010D400  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 801104C4 0010D404  7C 80 23 78 */	mr r0, r4
/* 801104C8 0010D408  40 81 00 18 */	ble .L_801104E0
/* 801104CC 0010D40C  FC 00 DA 10 */	fabs f0, f27
/* 801104D0 0010D410  FC 00 00 18 */	frsp f0, f0
/* 801104D4 0010D414  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 801104D8 0010D418  40 80 00 08 */	bge .L_801104E0
/* 801104DC 0010D41C  7C 60 1B 78 */	mr r0, r3
.L_801104E0:
/* 801104E0 0010D420  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801104E4 0010D424  41 82 00 08 */	beq .L_801104EC
/* 801104E8 0010D428  38 80 00 01 */	li r4, 1
.L_801104EC:
/* 801104EC 0010D42C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801104F0 0010D430  40 82 00 34 */	bne .L_80110524
/* 801104F4 0010D434  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 801104F8 0010D438  FC 40 FA 10 */	fabs f2, f31
/* 801104FC 0010D43C  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110500 0010D440  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80110504 0010D444  FC 40 10 18 */	frsp f2, f2
/* 80110508 0010D448  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011050C 0010D44C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80110510 0010D450  4C 40 13 82 */	cror 2, 0, 2
/* 80110514 0010D454  7C 00 00 26 */	mfcr r0
/* 80110518 0010D458  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 8011051C 0010D45C  41 82 00 08 */	beq .L_80110524
/* 80110520 0010D460  38 60 00 00 */	li r3, 0
.L_80110524:
/* 80110524 0010D464  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110528 0010D468  41 82 00 18 */	beq .L_80110540
/* 8011052C 0010D46C  38 00 00 06 */	li r0, 6
/* 80110530 0010D470  7F E3 FB 78 */	mr r3, r31
/* 80110534 0010D474  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110538 0010D478  4B FF 4D 69 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8011053C 0010D47C  48 00 01 80 */	b .L_801106BC
.L_80110540:
/* 80110540 0010D480  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80110544 0010D484  38 61 00 20 */	addi r3, r1, 0x20
/* 80110548 0010D488  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8011054C 0010D48C  81 84 00 00 */	lwz r12, 0(r4)
/* 80110550 0010D490  C3 E5 08 6C */	lfs f31, 0x86c(r5)
/* 80110554 0010D494  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110558 0010D498  C3 25 03 34 */	lfs f25, 0x334(r5)
/* 8011055C 0010D49C  C3 05 03 0C */	lfs f24, 0x30c(r5)
/* 80110560 0010D4A0  7D 89 03 A6 */	mtctr r12
/* 80110564 0010D4A4  4E 80 04 21 */	bctrl 
/* 80110568 0010D4A8  7F E4 FB 78 */	mr r4, r31
/* 8011056C 0010D4AC  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80110570 0010D4B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110574 0010D4B4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80110578 0010D4B8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8011057C 0010D4BC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80110580 0010D4C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110584 0010D4C4  D0 41 00 08 */	stfs f2, 8(r1)
/* 80110588 0010D4C8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8011058C 0010D4CC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80110590 0010D4D0  7D 89 03 A6 */	mtctr r12
/* 80110594 0010D4D4  4E 80 04 21 */	bctrl 
/* 80110598 0010D4D8  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 8011059C 0010D4DC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 801105A0 0010D4E0  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 801105A4 0010D4E4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 801105A8 0010D4E8  C0 21 00 08 */	lfs f1, 8(r1)
/* 801105AC 0010D4EC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801105B0 0010D4F0  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 801105B4 0010D4F4  EC 21 28 28 */	fsubs f1, f1, f5
/* 801105B8 0010D4F8  EC 40 18 28 */	fsubs f2, f0, f3
/* 801105BC 0010D4FC  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 801105C0 0010D500  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 801105C4 0010D504  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 801105C8 0010D508  4B F2 4B 41 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 801105CC 0010D50C  48 30 16 05 */	bl roundAng__Ff
/* 801105D0 0010D510  81 9F 00 00 */	lwz r12, 0(r31)
/* 801105D4 0010D514  FF 40 08 90 */	fmr f26, f1
/* 801105D8 0010D518  7F E3 FB 78 */	mr r3, r31
/* 801105DC 0010D51C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801105E0 0010D520  7D 89 03 A6 */	mtctr r12
/* 801105E4 0010D524  4E 80 04 21 */	bctrl 
/* 801105E8 0010D528  FC 40 08 90 */	fmr f2, f1
/* 801105EC 0010D52C  FC 20 D0 90 */	fmr f1, f26
/* 801105F0 0010D530  48 30 16 0D */	bl angDist__Fff
/* 801105F4 0010D534  FF C0 08 90 */	fmr f30, f1
/* 801105F8 0010D538  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 801105FC 0010D53C  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110600 0010D540  EC 00 06 72 */	fmuls f0, f0, f25
/* 80110604 0010D544  EF 1E 06 32 */	fmuls f24, f30, f24
/* 80110608 0010D548  EC 21 00 32 */	fmuls f1, f1, f0
/* 8011060C 0010D54C  FC 00 C2 10 */	fabs f0, f24
/* 80110610 0010D550  FC 00 00 18 */	frsp f0, f0
/* 80110614 0010D554  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80110618 0010D558  40 81 00 1C */	ble .L_80110634
/* 8011061C 0010D55C  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110620 0010D560  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 80110624 0010D564  40 81 00 0C */	ble .L_80110630
/* 80110628 0010D568  FF 00 08 90 */	fmr f24, f1
/* 8011062C 0010D56C  48 00 00 08 */	b .L_80110634
.L_80110630:
/* 80110630 0010D570  FF 00 08 50 */	fneg f24, f1
.L_80110634:
/* 80110634 0010D574  7F E3 FB 78 */	mr r3, r31
/* 80110638 0010D578  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011063C 0010D57C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80110640 0010D580  7D 89 03 A6 */	mtctr r12
/* 80110644 0010D584  4E 80 04 21 */	bctrl 
/* 80110648 0010D588  EC 38 08 2A */	fadds f1, f24, f1
/* 8011064C 0010D58C  48 30 15 85 */	bl roundAng__Ff
/* 80110650 0010D590  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80110654 0010D594  FC 40 F2 10 */	fabs f2, f30
/* 80110658 0010D598  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8011065C 0010D59C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80110660 0010D5A0  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110664 0010D5A4  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 80110668 0010D5A8  FC 40 10 18 */	frsp f2, f2
/* 8011066C 0010D5AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110670 0010D5B0  D0 7F 01 A8 */	stfs f3, 0x1a8(r31)
/* 80110674 0010D5B4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80110678 0010D5B8  4C 40 13 82 */	cror 2, 0, 2
/* 8011067C 0010D5BC  40 82 00 40 */	bne .L_801106BC
/* 80110680 0010D5C0  38 00 00 03 */	li r0, 3
/* 80110684 0010D5C4  7F E3 FB 78 */	mr r3, r31
/* 80110688 0010D5C8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8011068C 0010D5CC  4B FF 4C 15 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80110690 0010D5D0  7F E3 FB 78 */	mr r3, r31
/* 80110694 0010D5D4  C0 22 96 BC */	lfs f1, lbl_80517A1C@sda21(r2)
/* 80110698 0010D5D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011069C 0010D5DC  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 801106A0 0010D5E0  7D 89 03 A6 */	mtctr r12
/* 801106A4 0010D5E4  4E 80 04 21 */	bctrl 
/* 801106A8 0010D5E8  48 00 00 14 */	b .L_801106BC
.L_801106AC:
/* 801106AC 0010D5EC  38 00 00 06 */	li r0, 6
/* 801106B0 0010D5F0  7F E3 FB 78 */	mr r3, r31
/* 801106B4 0010D5F4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801106B8 0010D5F8  4B FF 4B E9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_801106BC:
/* 801106BC 0010D5FC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 801106C0 0010D600  88 03 00 24 */	lbz r0, 0x24(r3)
/* 801106C4 0010D604  28 00 00 00 */	cmplwi r0, 0
/* 801106C8 0010D608  41 82 00 30 */	beq .L_801106F8
/* 801106CC 0010D60C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801106D0 0010D610  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801106D4 0010D614  40 82 00 24 */	bne .L_801106F8
/* 801106D8 0010D618  7F C3 F3 78 */	mr r3, r30
/* 801106DC 0010D61C  7F E4 FB 78 */	mr r4, r31
/* 801106E0 0010D620  81 9E 00 00 */	lwz r12, 0(r30)
/* 801106E4 0010D624  38 C0 00 00 */	li r6, 0
/* 801106E8 0010D628  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 801106EC 0010D62C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801106F0 0010D630  7D 89 03 A6 */	mtctr r12
/* 801106F4 0010D634  4E 80 04 21 */	bctrl 
.L_801106F8:
/* 801106F8 0010D638  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801106FC 0010D63C  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110700 0010D640  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110704 0010D644  4C 40 13 82 */	cror 2, 0, 2
/* 80110708 0010D648  40 82 00 24 */	bne .L_8011072C
/* 8011070C 0010D64C  7F C3 F3 78 */	mr r3, r30
/* 80110710 0010D650  7F E4 FB 78 */	mr r4, r31
/* 80110714 0010D654  81 9E 00 00 */	lwz r12, 0(r30)
/* 80110718 0010D658  38 A0 00 01 */	li r5, 1
/* 8011071C 0010D65C  38 C0 00 00 */	li r6, 0
/* 80110720 0010D660  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80110724 0010D664  7D 89 03 A6 */	mtctr r12
/* 80110728 0010D668  4E 80 04 21 */	bctrl 
.L_8011072C:
/* 8011072C 0010D66C  E3 E1 01 88 */	psq_l f31, 392(r1), 0, qr0
/* 80110730 0010D670  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 80110734 0010D674  E3 C1 01 78 */	psq_l f30, 376(r1), 0, qr0
/* 80110738 0010D678  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 8011073C 0010D67C  E3 A1 01 68 */	psq_l f29, 360(r1), 0, qr0
/* 80110740 0010D680  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 80110744 0010D684  E3 81 01 58 */	psq_l f28, 344(r1), 0, qr0
/* 80110748 0010D688  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 8011074C 0010D68C  E3 61 01 48 */	psq_l f27, 328(r1), 0, qr0
/* 80110750 0010D690  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 80110754 0010D694  E3 41 01 38 */	psq_l f26, 312(r1), 0, qr0
/* 80110758 0010D698  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 8011075C 0010D69C  E3 21 01 28 */	psq_l f25, 296(r1), 0, qr0
/* 80110760 0010D6A0  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 80110764 0010D6A4  E3 01 01 18 */	psq_l f24, 280(r1), 0, qr0
/* 80110768 0010D6A8  CB 01 01 10 */	lfd f24, 0x110(r1)
/* 8011076C 0010D6AC  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 80110770 0010D6B0  83 C1 01 08 */	lwz r30, 0x108(r1)
/* 80110774 0010D6B4  83 A1 01 04 */	lwz r29, 0x104(r1)
/* 80110778 0010D6B8  80 01 01 94 */	lwz r0, 0x194(r1)
/* 8011077C 0010D6BC  83 81 01 00 */	lwz r28, 0x100(r1)
/* 80110780 0010D6C0  7C 08 03 A6 */	mtlr r0
/* 80110784 0010D6C4  38 21 01 90 */	addi r1, r1, 0x190
/* 80110788 0010D6C8  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBase, global
/* 8011078C 0010D6CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110790 0010D6D0  7C 08 02 A6 */	mflr r0
/* 80110794 0010D6D4  7C 83 23 78 */	mr r3, r4
/* 80110798 0010D6D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011079C 0010D6DC  4B FF 11 E1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 801107A0 0010D6E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801107A4 0010D6E4  7C 08 03 A6 */	mtlr r0
/* 801107A8 0010D6E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801107AC 0010D6EC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase9StateTurnFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase9StateWalkFi, global
/* 801107B0 0010D6F0  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 801107B4 0010D6F4  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 801107B8 0010D6F8  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 801107BC 0010D6FC  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase9StateWalk@ha
/* 801107C0 0010D700  90 03 00 00 */	stw r0, 0(r3)
/* 801107C4 0010D704  38 E0 00 00 */	li r7, 0
/* 801107C8 0010D708  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 801107CC 0010D70C  38 A5 BA 58 */	addi r5, r5, __vt__Q34Game12KochappyBase9StateWalk@l
/* 801107D0 0010D710  90 83 00 04 */	stw r4, 4(r3)
/* 801107D4 0010D714  38 80 FF FF */	li r4, -1
/* 801107D8 0010D718  38 02 96 C0 */	addi r0, r2, lbl_80517A20@sda21
/* 801107DC 0010D71C  90 E3 00 08 */	stw r7, 8(r3)
/* 801107E0 0010D720  90 C3 00 00 */	stw r6, 0(r3)
/* 801107E4 0010D724  90 A3 00 00 */	stw r5, 0(r3)
/* 801107E8 0010D728  90 83 00 10 */	stw r4, 0x10(r3)
/* 801107EC 0010D72C  90 03 00 0C */	stw r0, 0xc(r3)
/* 801107F0 0010D730  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase9StateWalkFi

.fn init__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 801107F4 0010D734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801107F8 0010D738  7C 08 02 A6 */	mflr r0
/* 801107FC 0010D73C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110800 0010D740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110804 0010D744  7C 9F 23 78 */	mr r31, r4
/* 80110808 0010D748  93 C1 00 08 */	stw r30, 8(r1)
/* 8011080C 0010D74C  7C 7E 1B 78 */	mr r30, r3
/* 80110810 0010D750  7F E3 FB 78 */	mr r3, r31
/* 80110814 0010D754  4B FF 11 B9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80110818 0010D758  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8011081C 0010D75C  7F E3 FB 78 */	mr r3, r31
/* 80110820 0010D760  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110824 0010D764  C0 24 02 E4 */	lfs f1, 0x2e4(r4)
/* 80110828 0010D768  C0 02 96 CC */	lfs f0, lbl_80517A2C@sda21(r2)
/* 8011082C 0010D76C  C0 42 96 C8 */	lfs f2, lbl_80517A28@sda21(r2)
/* 80110830 0010D770  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110834 0010D774  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 80110838 0010D778  EC 22 00 32 */	fmuls f1, f2, f0
/* 8011083C 0010D77C  7D 89 03 A6 */	mtctr r12
/* 80110840 0010D780  4E 80 04 21 */	bctrl 
/* 80110844 0010D784  7F E3 FB 78 */	mr r3, r31
/* 80110848 0010D788  38 80 00 03 */	li r4, 3
/* 8011084C 0010D78C  38 A0 00 00 */	li r5, 0
/* 80110850 0010D790  4B FF 47 B5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80110854 0010D794  38 00 FF FF */	li r0, -1
/* 80110858 0010D798  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8011085C 0010D79C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110860 0010D7A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110864 0010D7A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80110868 0010D7A8  7C 08 03 A6 */	mtlr r0
/* 8011086C 0010D7AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80110870 0010D7B0  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBase, global
/* 80110874 0010D7B4  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 80110878 0010D7B8  7C 08 02 A6 */	mflr r0
/* 8011087C 0010D7BC  90 01 01 74 */	stw r0, 0x174(r1)
/* 80110880 0010D7C0  DB E1 01 60 */	stfd f31, 0x160(r1)
/* 80110884 0010D7C4  F3 E1 01 68 */	psq_st f31, 360(r1), 0, qr0
/* 80110888 0010D7C8  DB C1 01 50 */	stfd f30, 0x150(r1)
/* 8011088C 0010D7CC  F3 C1 01 58 */	psq_st f30, 344(r1), 0, qr0
/* 80110890 0010D7D0  DB A1 01 40 */	stfd f29, 0x140(r1)
/* 80110894 0010D7D4  F3 A1 01 48 */	psq_st f29, 328(r1), 0, qr0
/* 80110898 0010D7D8  DB 81 01 30 */	stfd f28, 0x130(r1)
/* 8011089C 0010D7DC  F3 81 01 38 */	psq_st f28, 312(r1), 0, qr0
/* 801108A0 0010D7E0  DB 61 01 20 */	stfd f27, 0x120(r1)
/* 801108A4 0010D7E4  F3 61 01 28 */	psq_st f27, 296(r1), 0, qr0
/* 801108A8 0010D7E8  DB 41 01 10 */	stfd f26, 0x110(r1)
/* 801108AC 0010D7EC  F3 41 01 18 */	psq_st f26, 280(r1), 0, qr0
/* 801108B0 0010D7F0  DB 21 01 00 */	stfd f25, 0x100(r1)
/* 801108B4 0010D7F4  F3 21 01 08 */	psq_st f25, 264(r1), 0, qr0
/* 801108B8 0010D7F8  DB 01 00 F0 */	stfd f24, 0xf0(r1)
/* 801108BC 0010D7FC  F3 01 00 F8 */	psq_st f24, 248(r1), 0, qr0
/* 801108C0 0010D800  93 E1 00 EC */	stw r31, 0xec(r1)
/* 801108C4 0010D804  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 801108C8 0010D808  93 A1 00 E4 */	stw r29, 0xe4(r1)
/* 801108CC 0010D80C  93 81 00 E0 */	stw r28, 0xe0(r1)
/* 801108D0 0010D810  7C 9F 23 78 */	mr r31, r4
/* 801108D4 0010D814  7C 7E 1B 78 */	mr r30, r3
/* 801108D8 0010D818  7F E3 FB 78 */	mr r3, r31
/* 801108DC 0010D81C  38 80 00 01 */	li r4, 1
/* 801108E0 0010D820  48 00 3D 79 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 801108E4 0010D824  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801108E8 0010D828  41 82 00 28 */	beq .L_80110910
/* 801108EC 0010D82C  7F C3 F3 78 */	mr r3, r30
/* 801108F0 0010D830  7F E4 FB 78 */	mr r4, r31
/* 801108F4 0010D834  81 9E 00 00 */	lwz r12, 0(r30)
/* 801108F8 0010D838  38 A0 00 05 */	li r5, 5
/* 801108FC 0010D83C  38 C0 00 00 */	li r6, 0
/* 80110900 0010D840  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80110904 0010D844  7D 89 03 A6 */	mtctr r12
/* 80110908 0010D848  4E 80 04 21 */	bctrl 
/* 8011090C 0010D84C  48 00 05 B8 */	b .L_80110EC4
.L_80110910:
/* 80110910 0010D850  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80110914 0010D854  7F E3 FB 78 */	mr r3, r31
/* 80110918 0010D858  38 80 00 00 */	li r4, 0
/* 8011091C 0010D85C  C3 05 03 AC */	lfs f24, 0x3ac(r5)
/* 80110920 0010D860  FC 20 C0 90 */	fmr f1, f24
/* 80110924 0010D864  48 00 41 9D */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80110928 0010D868  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011092C 0010D86C  41 82 00 0C */	beq .L_80110938
/* 80110930 0010D870  38 60 00 01 */	li r3, 1
/* 80110934 0010D874  48 00 00 28 */	b .L_8011095C
.L_80110938:
/* 80110938 0010D878  FC 20 C0 90 */	fmr f1, f24
/* 8011093C 0010D87C  7F E3 FB 78 */	mr r3, r31
/* 80110940 0010D880  38 80 00 00 */	li r4, 0
/* 80110944 0010D884  48 00 3D F1 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80110948 0010D888  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011094C 0010D88C  41 82 00 0C */	beq .L_80110958
/* 80110950 0010D890  38 60 00 01 */	li r3, 1
/* 80110954 0010D894  48 00 00 08 */	b .L_8011095C
.L_80110958:
/* 80110958 0010D898  38 60 00 00 */	li r3, 0
.L_8011095C:
/* 8011095C 0010D89C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110960 0010D8A0  40 82 00 1C */	bne .L_8011097C
/* 80110964 0010D8A4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80110968 0010D8A8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8011096C 0010D8AC  C0 03 01 7C */	lfs f0, 0x17c(r3)
/* 80110970 0010D8B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110974 0010D8B4  7C 00 00 26 */	mfcr r0
/* 80110978 0010D8B8  54 03 0F FE */	srwi r3, r0, 0x1f
.L_8011097C:
/* 8011097C 0010D8BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110980 0010D8C0  41 82 00 0C */	beq .L_8011098C
/* 80110984 0010D8C4  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110988 0010D8C8  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
.L_8011098C:
/* 8011098C 0010D8CC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80110990 0010D8D0  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 80110994 0010D8D4  C0 03 06 2C */	lfs f0, 0x62c(r3)
/* 80110998 0010D8D8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011099C 0010D8DC  40 80 00 1C */	bge .L_801109B8
/* 801109A0 0010D8E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801109A4 0010D8E4  C0 22 96 A0 */	lfs f1, lbl_80517A00@sda21(r2)
/* 801109A8 0010D8E8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 801109AC 0010D8EC  EC 02 00 2A */	fadds f0, f2, f0
/* 801109B0 0010D8F0  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 801109B4 0010D8F4  48 00 00 08 */	b .L_801109BC
.L_801109B8:
/* 801109B8 0010D8F8  C0 23 04 9C */	lfs f1, 0x49c(r3)
.L_801109BC:
/* 801109BC 0010D8FC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801109C0 0010D900  7F E3 FB 78 */	mr r3, r31
/* 801109C4 0010D904  38 80 00 00 */	li r4, 0
/* 801109C8 0010D908  38 C0 00 00 */	li r6, 0
/* 801109CC 0010D90C  C0 45 04 4C */	lfs f2, 0x44c(r5)
/* 801109D0 0010D910  38 A0 00 00 */	li r5, 0
/* 801109D4 0010D914  48 00 26 7D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 801109D8 0010D918  28 03 00 00 */	cmplwi r3, 0
/* 801109DC 0010D91C  41 82 03 E4 */	beq .L_80110DC0
/* 801109E0 0010D920  90 7F 02 30 */	stw r3, 0x230(r31)
/* 801109E4 0010D924  38 61 00 BC */	addi r3, r1, 0xbc
/* 801109E8 0010D928  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 801109EC 0010D92C  81 84 00 00 */	lwz r12, 0(r4)
/* 801109F0 0010D930  81 8C 00 08 */	lwz r12, 8(r12)
/* 801109F4 0010D934  7D 89 03 A6 */	mtctr r12
/* 801109F8 0010D938  4E 80 04 21 */	bctrl 
/* 801109FC 0010D93C  7F E4 FB 78 */	mr r4, r31
/* 80110A00 0010D940  C0 41 00 BC */	lfs f2, 0xbc(r1)
/* 80110A04 0010D944  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110A08 0010D948  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80110A0C 0010D94C  C0 21 00 C0 */	lfs f1, 0xc0(r1)
/* 80110A10 0010D950  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 80110A14 0010D954  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110A18 0010D958  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 80110A1C 0010D95C  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 80110A20 0010D960  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80110A24 0010D964  7D 89 03 A6 */	mtctr r12
/* 80110A28 0010D968  4E 80 04 21 */	bctrl 
/* 80110A2C 0010D96C  C0 A1 00 C8 */	lfs f5, 0xc8(r1)
/* 80110A30 0010D970  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80110A34 0010D974  C0 61 00 D0 */	lfs f3, 0xd0(r1)
/* 80110A38 0010D978  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80110A3C 0010D97C  C0 21 00 A4 */	lfs f1, 0xa4(r1)
/* 80110A40 0010D980  C0 01 00 AC */	lfs f0, 0xac(r1)
/* 80110A44 0010D984  C0 81 00 CC */	lfs f4, 0xcc(r1)
/* 80110A48 0010D988  EC 21 28 28 */	fsubs f1, f1, f5
/* 80110A4C 0010D98C  EC 40 18 28 */	fsubs f2, f0, f3
/* 80110A50 0010D990  D0 A1 00 B0 */	stfs f5, 0xb0(r1)
/* 80110A54 0010D994  D0 81 00 B4 */	stfs f4, 0xb4(r1)
/* 80110A58 0010D998  D0 61 00 B8 */	stfs f3, 0xb8(r1)
/* 80110A5C 0010D99C  4B F2 46 AD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80110A60 0010D9A0  48 30 11 71 */	bl roundAng__Ff
/* 80110A64 0010D9A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110A68 0010D9A8  FF 00 08 90 */	fmr f24, f1
/* 80110A6C 0010D9AC  7F E3 FB 78 */	mr r3, r31
/* 80110A70 0010D9B0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80110A74 0010D9B4  7D 89 03 A6 */	mtctr r12
/* 80110A78 0010D9B8  4E 80 04 21 */	bctrl 
/* 80110A7C 0010D9BC  FC 40 08 90 */	fmr f2, f1
/* 80110A80 0010D9C0  FC 20 C0 90 */	fmr f1, f24
/* 80110A84 0010D9C4  48 30 11 79 */	bl angDist__Fff
/* 80110A88 0010D9C8  7F E4 FB 78 */	mr r4, r31
/* 80110A8C 0010D9CC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80110A90 0010D9D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110A94 0010D9D4  FF E0 08 90 */	fmr f31, f1
/* 80110A98 0010D9D8  38 61 00 14 */	addi r3, r1, 0x14
/* 80110A9C 0010D9DC  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 80110AA0 0010D9E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110AA4 0010D9E4  3B 80 00 00 */	li r28, 0
/* 80110AA8 0010D9E8  C3 C5 05 64 */	lfs f30, 0x564(r5)
/* 80110AAC 0010D9EC  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80110AB0 0010D9F0  7D 89 03 A6 */	mtctr r12
/* 80110AB4 0010D9F4  4E 80 04 21 */	bctrl 
/* 80110AB8 0010D9F8  7F A4 EB 78 */	mr r4, r29
/* 80110ABC 0010D9FC  38 61 00 08 */	addi r3, r1, 8
/* 80110AC0 0010DA00  81 9D 00 00 */	lwz r12, 0(r29)
/* 80110AC4 0010DA04  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 80110AC8 0010DA08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110ACC 0010DA0C  7D 89 03 A6 */	mtctr r12
/* 80110AD0 0010DA10  4E 80 04 21 */	bctrl 
/* 80110AD4 0010DA14  7F E4 FB 78 */	mr r4, r31
/* 80110AD8 0010DA18  C0 01 00 08 */	lfs f0, 8(r1)
/* 80110ADC 0010DA1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110AE0 0010DA20  38 61 00 2C */	addi r3, r1, 0x2c
/* 80110AE4 0010DA24  EF 20 E8 28 */	fsubs f25, f0, f29
/* 80110AE8 0010DA28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110AEC 0010DA2C  7D 89 03 A6 */	mtctr r12
/* 80110AF0 0010DA30  4E 80 04 21 */	bctrl 
/* 80110AF4 0010DA34  7F A4 EB 78 */	mr r4, r29
/* 80110AF8 0010DA38  38 61 00 20 */	addi r3, r1, 0x20
/* 80110AFC 0010DA3C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80110B00 0010DA40  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 80110B04 0010DA44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110B08 0010DA48  7D 89 03 A6 */	mtctr r12
/* 80110B0C 0010DA4C  4E 80 04 21 */	bctrl 
/* 80110B10 0010DA50  7F E4 FB 78 */	mr r4, r31
/* 80110B14 0010DA54  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80110B18 0010DA58  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110B1C 0010DA5C  38 61 00 44 */	addi r3, r1, 0x44
/* 80110B20 0010DA60  EF 00 E8 28 */	fsubs f24, f0, f29
/* 80110B24 0010DA64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110B28 0010DA68  7D 89 03 A6 */	mtctr r12
/* 80110B2C 0010DA6C  4E 80 04 21 */	bctrl 
/* 80110B30 0010DA70  7F A4 EB 78 */	mr r4, r29
/* 80110B34 0010DA74  38 61 00 38 */	addi r3, r1, 0x38
/* 80110B38 0010DA78  81 9D 00 00 */	lwz r12, 0(r29)
/* 80110B3C 0010DA7C  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80110B40 0010DA80  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110B44 0010DA84  7D 89 03 A6 */	mtctr r12
/* 80110B48 0010DA88  4E 80 04 21 */	bctrl 
/* 80110B4C 0010DA8C  EC 38 06 32 */	fmuls f1, f24, f24
/* 80110B50 0010DA90  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80110B54 0010DA94  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80110B58 0010DA98  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80110B5C 0010DA9C  EC 39 0E 7A */	fmadds f1, f25, f25, f1
/* 80110B60 0010DAA0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80110B64 0010DAA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110B68 0010DAA8  40 80 00 2C */	bge .L_80110B94
/* 80110B6C 0010DAAC  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80110B70 0010DAB0  FC 40 FA 10 */	fabs f2, f31
/* 80110B74 0010DAB4  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110B78 0010DAB8  EC 00 07 32 */	fmuls f0, f0, f28
/* 80110B7C 0010DABC  FC 40 10 18 */	frsp f2, f2
/* 80110B80 0010DAC0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110B84 0010DAC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80110B88 0010DAC8  4C 40 13 82 */	cror 2, 0, 2
/* 80110B8C 0010DACC  40 82 00 08 */	bne .L_80110B94
/* 80110B90 0010DAD0  3B 80 00 01 */	li r28, 1
.L_80110B94:
/* 80110B94 0010DAD4  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80110B98 0010DAD8  41 82 00 40 */	beq .L_80110BD8
/* 80110B9C 0010DADC  38 00 00 04 */	li r0, 4
/* 80110BA0 0010DAE0  7F E3 FB 78 */	mr r3, r31
/* 80110BA4 0010DAE4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110BA8 0010DAE8  4B FF 46 F9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80110BAC 0010DAEC  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110BB0 0010DAF0  7F E3 FB 78 */	mr r3, r31
/* 80110BB4 0010DAF4  C0 22 96 BC */	lfs f1, lbl_80517A1C@sda21(r2)
/* 80110BB8 0010DAF8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80110BBC 0010DAFC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80110BC0 0010DB00  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80110BC4 0010DB04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110BC8 0010DB08  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 80110BCC 0010DB0C  7D 89 03 A6 */	mtctr r12
/* 80110BD0 0010DB10  4E 80 04 21 */	bctrl 
/* 80110BD4 0010DB14  48 00 02 18 */	b .L_80110DEC
.L_80110BD8:
/* 80110BD8 0010DB18  7F E4 FB 78 */	mr r4, r31
/* 80110BDC 0010DB1C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80110BE0 0010DB20  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110BE4 0010DB24  38 61 00 68 */	addi r3, r1, 0x68
/* 80110BE8 0010DB28  C3 C5 04 24 */	lfs f30, 0x424(r5)
/* 80110BEC 0010DB2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110BF0 0010DB30  C3 05 03 FC */	lfs f24, 0x3fc(r5)
/* 80110BF4 0010DB34  C3 25 03 D4 */	lfs f25, 0x3d4(r5)
/* 80110BF8 0010DB38  C3 45 03 AC */	lfs f26, 0x3ac(r5)
/* 80110BFC 0010DB3C  83 9F 02 30 */	lwz r28, 0x230(r31)
/* 80110C00 0010DB40  7D 89 03 A6 */	mtctr r12
/* 80110C04 0010DB44  4E 80 04 21 */	bctrl 
/* 80110C08 0010DB48  7F 84 E3 78 */	mr r4, r28
/* 80110C0C 0010DB4C  38 61 00 5C */	addi r3, r1, 0x5c
/* 80110C10 0010DB50  81 9C 00 00 */	lwz r12, 0(r28)
/* 80110C14 0010DB54  C3 A1 00 68 */	lfs f29, 0x68(r1)
/* 80110C18 0010DB58  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110C1C 0010DB5C  7D 89 03 A6 */	mtctr r12
/* 80110C20 0010DB60  4E 80 04 21 */	bctrl 
/* 80110C24 0010DB64  7F E4 FB 78 */	mr r4, r31
/* 80110C28 0010DB68  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 80110C2C 0010DB6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110C30 0010DB70  38 61 00 80 */	addi r3, r1, 0x80
/* 80110C34 0010DB74  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80110C38 0010DB78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110C3C 0010DB7C  7D 89 03 A6 */	mtctr r12
/* 80110C40 0010DB80  4E 80 04 21 */	bctrl 
/* 80110C44 0010DB84  7F 84 E3 78 */	mr r4, r28
/* 80110C48 0010DB88  38 61 00 74 */	addi r3, r1, 0x74
/* 80110C4C 0010DB8C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80110C50 0010DB90  C3 A1 00 84 */	lfs f29, 0x84(r1)
/* 80110C54 0010DB94  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110C58 0010DB98  7D 89 03 A6 */	mtctr r12
/* 80110C5C 0010DB9C  4E 80 04 21 */	bctrl 
/* 80110C60 0010DBA0  7F E4 FB 78 */	mr r4, r31
/* 80110C64 0010DBA4  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 80110C68 0010DBA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110C6C 0010DBAC  38 61 00 98 */	addi r3, r1, 0x98
/* 80110C70 0010DBB0  EF 80 E8 28 */	fsubs f28, f0, f29
/* 80110C74 0010DBB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110C78 0010DBB8  7D 89 03 A6 */	mtctr r12
/* 80110C7C 0010DBBC  4E 80 04 21 */	bctrl 
/* 80110C80 0010DBC0  7F 84 E3 78 */	mr r4, r28
/* 80110C84 0010DBC4  38 61 00 8C */	addi r3, r1, 0x8c
/* 80110C88 0010DBC8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80110C8C 0010DBCC  C3 A1 00 A0 */	lfs f29, 0xa0(r1)
/* 80110C90 0010DBD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110C94 0010DBD4  7D 89 03 A6 */	mtctr r12
/* 80110C98 0010DBD8  4E 80 04 21 */	bctrl 
/* 80110C9C 0010DBDC  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80110CA0 0010DBE0  EF 5A 06 B2 */	fmuls f26, f26, f26
/* 80110CA4 0010DBE4  EF 39 06 72 */	fmuls f25, f25, f25
/* 80110CA8 0010DBE8  38 60 00 01 */	li r3, 1
/* 80110CAC 0010DBEC  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80110CB0 0010DBF0  38 80 00 00 */	li r4, 0
/* 80110CB4 0010DBF4  EC 00 00 32 */	fmuls f0, f0, f0
/* 80110CB8 0010DBF8  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 80110CBC 0010DBFC  FC 00 D0 40 */	fcmpo cr0, f0, f26
/* 80110CC0 0010DC00  40 81 00 30 */	ble .L_80110CF0
/* 80110CC4 0010DC04  FC 00 C8 40 */	fcmpo cr0, f0, f25
/* 80110CC8 0010DC08  7C 80 23 78 */	mr r0, r4
/* 80110CCC 0010DC0C  40 81 00 18 */	ble .L_80110CE4
/* 80110CD0 0010DC10  FC 00 E2 10 */	fabs f0, f28
/* 80110CD4 0010DC14  FC 00 00 18 */	frsp f0, f0
/* 80110CD8 0010DC18  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 80110CDC 0010DC1C  40 80 00 08 */	bge .L_80110CE4
/* 80110CE0 0010DC20  7C 60 1B 78 */	mr r0, r3
.L_80110CE4:
/* 80110CE4 0010DC24  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80110CE8 0010DC28  41 82 00 08 */	beq .L_80110CF0
/* 80110CEC 0010DC2C  38 80 00 01 */	li r4, 1
.L_80110CF0:
/* 80110CF0 0010DC30  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80110CF4 0010DC34  40 82 00 34 */	bne .L_80110D28
/* 80110CF8 0010DC38  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80110CFC 0010DC3C  FC 40 FA 10 */	fabs f2, f31
/* 80110D00 0010DC40  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110D04 0010DC44  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80110D08 0010DC48  FC 40 10 18 */	frsp f2, f2
/* 80110D0C 0010DC4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110D10 0010DC50  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80110D14 0010DC54  4C 40 13 82 */	cror 2, 0, 2
/* 80110D18 0010DC58  7C 00 00 26 */	mfcr r0
/* 80110D1C 0010DC5C  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 80110D20 0010DC60  41 82 00 08 */	beq .L_80110D28
/* 80110D24 0010DC64  38 60 00 00 */	li r3, 0
.L_80110D28:
/* 80110D28 0010DC68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80110D2C 0010DC6C  41 82 00 28 */	beq .L_80110D54
/* 80110D30 0010DC70  38 00 00 06 */	li r0, 6
/* 80110D34 0010DC74  7F E3 FB 78 */	mr r3, r31
/* 80110D38 0010DC78  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110D3C 0010DC7C  4B FF 45 65 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80110D40 0010DC80  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110D44 0010DC84  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80110D48 0010DC88  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80110D4C 0010DC8C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80110D50 0010DC90  48 00 00 9C */	b .L_80110DEC
.L_80110D54:
/* 80110D54 0010DC94  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80110D58 0010DC98  FC 40 FA 10 */	fabs f2, f31
/* 80110D5C 0010DC9C  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80110D60 0010DCA0  C0 65 04 24 */	lfs f3, 0x424(r5)
/* 80110D64 0010DCA4  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80110D68 0010DCA8  FC 40 10 18 */	frsp f2, f2
/* 80110D6C 0010DCAC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80110D70 0010DCB0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110D74 0010DCB4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80110D78 0010DCB8  4C 40 13 82 */	cror 2, 0, 2
/* 80110D7C 0010DCBC  40 82 00 20 */	bne .L_80110D9C
/* 80110D80 0010DCC0  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80110D84 0010DCC4  7F E3 FB 78 */	mr r3, r31
/* 80110D88 0010DCC8  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80110D8C 0010DCCC  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80110D90 0010DCD0  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80110D94 0010DCD4  48 00 46 6D */	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff
/* 80110D98 0010DCD8  48 00 00 54 */	b .L_80110DEC
.L_80110D9C:
/* 80110D9C 0010DCDC  38 00 00 02 */	li r0, 2
/* 80110DA0 0010DCE0  7F E3 FB 78 */	mr r3, r31
/* 80110DA4 0010DCE4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110DA8 0010DCE8  4B FF 44 F9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80110DAC 0010DCEC  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110DB0 0010DCF0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80110DB4 0010DCF4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80110DB8 0010DCF8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80110DBC 0010DCFC  48 00 00 30 */	b .L_80110DEC
.L_80110DC0:
/* 80110DC0 0010DD00  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 80110DC4 0010DD04  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110DC8 0010DD08  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80110DCC 0010DD0C  41 82 00 10 */	beq .L_80110DDC
/* 80110DD0 0010DD10  38 00 00 05 */	li r0, 5
/* 80110DD4 0010DD14  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110DD8 0010DD18  48 00 00 0C */	b .L_80110DE4
.L_80110DDC:
/* 80110DDC 0010DD1C  38 00 00 06 */	li r0, 6
/* 80110DE0 0010DD20  90 1E 00 10 */	stw r0, 0x10(r30)
.L_80110DE4:
/* 80110DE4 0010DD24  7F E3 FB 78 */	mr r3, r31
/* 80110DE8 0010DD28  4B FF 44 B9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80110DEC:
/* 80110DEC 0010DD2C  7F E4 FB 78 */	mr r4, r31
/* 80110DF0 0010DD30  38 61 00 50 */	addi r3, r1, 0x50
/* 80110DF4 0010DD34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80110DF8 0010DD38  C3 1F 01 98 */	lfs f24, 0x198(r31)
/* 80110DFC 0010DD3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80110E00 0010DD40  C3 3F 01 9C */	lfs f25, 0x19c(r31)
/* 80110E04 0010DD44  C3 5F 01 A0 */	lfs f26, 0x1a0(r31)
/* 80110E08 0010DD48  7D 89 03 A6 */	mtctr r12
/* 80110E0C 0010DD4C  4E 80 04 21 */	bctrl 
/* 80110E10 0010DD50  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80110E14 0010DD54  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80110E18 0010DD58  EC 60 C8 28 */	fsubs f3, f0, f25
/* 80110E1C 0010DD5C  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80110E20 0010DD60  EC 42 C0 28 */	fsubs f2, f2, f24
/* 80110E24 0010DD64  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110E28 0010DD68  EC 21 D0 28 */	fsubs f1, f1, f26
/* 80110E2C 0010DD6C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80110E30 0010DD70  EC 81 00 72 */	fmuls f4, f1, f1
/* 80110E34 0010DD74  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80110E38 0010DD78  EC 24 08 2A */	fadds f1, f4, f1
/* 80110E3C 0010DD7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110E40 0010DD80  40 81 00 14 */	ble .L_80110E54
/* 80110E44 0010DD84  40 81 00 14 */	ble .L_80110E58
/* 80110E48 0010DD88  FC 00 08 34 */	frsqrte f0, f1
/* 80110E4C 0010DD8C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80110E50 0010DD90  48 00 00 08 */	b .L_80110E58
.L_80110E54:
/* 80110E54 0010DD94  FC 20 00 90 */	fmr f1, f0
.L_80110E58:
/* 80110E58 0010DD98  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80110E5C 0010DD9C  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 80110E60 0010DDA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110E64 0010DDA4  40 81 00 24 */	ble .L_80110E88
/* 80110E68 0010DDA8  38 00 00 06 */	li r0, 6
/* 80110E6C 0010DDAC  7F E3 FB 78 */	mr r3, r31
/* 80110E70 0010DDB0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80110E74 0010DDB4  4B FF 44 2D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80110E78 0010DDB8  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110E7C 0010DDBC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80110E80 0010DDC0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80110E84 0010DDC4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80110E88:
/* 80110E88 0010DDC8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80110E8C 0010DDCC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80110E90 0010DDD0  28 00 00 00 */	cmplwi r0, 0
/* 80110E94 0010DDD4  41 82 00 30 */	beq .L_80110EC4
/* 80110E98 0010DDD8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80110E9C 0010DDDC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80110EA0 0010DDE0  40 82 00 24 */	bne .L_80110EC4
/* 80110EA4 0010DDE4  7F C3 F3 78 */	mr r3, r30
/* 80110EA8 0010DDE8  7F E4 FB 78 */	mr r4, r31
/* 80110EAC 0010DDEC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80110EB0 0010DDF0  38 C0 00 00 */	li r6, 0
/* 80110EB4 0010DDF4  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 80110EB8 0010DDF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80110EBC 0010DDFC  7D 89 03 A6 */	mtctr r12
/* 80110EC0 0010DE00  4E 80 04 21 */	bctrl 
.L_80110EC4:
/* 80110EC4 0010DE04  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80110EC8 0010DE08  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110ECC 0010DE0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110ED0 0010DE10  4C 40 13 82 */	cror 2, 0, 2
/* 80110ED4 0010DE14  40 82 00 24 */	bne .L_80110EF8
/* 80110ED8 0010DE18  7F C3 F3 78 */	mr r3, r30
/* 80110EDC 0010DE1C  7F E4 FB 78 */	mr r4, r31
/* 80110EE0 0010DE20  81 9E 00 00 */	lwz r12, 0(r30)
/* 80110EE4 0010DE24  38 A0 00 01 */	li r5, 1
/* 80110EE8 0010DE28  38 C0 00 00 */	li r6, 0
/* 80110EEC 0010DE2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80110EF0 0010DE30  7D 89 03 A6 */	mtctr r12
/* 80110EF4 0010DE34  4E 80 04 21 */	bctrl 
.L_80110EF8:
/* 80110EF8 0010DE38  E3 E1 01 68 */	psq_l f31, 360(r1), 0, qr0
/* 80110EFC 0010DE3C  CB E1 01 60 */	lfd f31, 0x160(r1)
/* 80110F00 0010DE40  E3 C1 01 58 */	psq_l f30, 344(r1), 0, qr0
/* 80110F04 0010DE44  CB C1 01 50 */	lfd f30, 0x150(r1)
/* 80110F08 0010DE48  E3 A1 01 48 */	psq_l f29, 328(r1), 0, qr0
/* 80110F0C 0010DE4C  CB A1 01 40 */	lfd f29, 0x140(r1)
/* 80110F10 0010DE50  E3 81 01 38 */	psq_l f28, 312(r1), 0, qr0
/* 80110F14 0010DE54  CB 81 01 30 */	lfd f28, 0x130(r1)
/* 80110F18 0010DE58  E3 61 01 28 */	psq_l f27, 296(r1), 0, qr0
/* 80110F1C 0010DE5C  CB 61 01 20 */	lfd f27, 0x120(r1)
/* 80110F20 0010DE60  E3 41 01 18 */	psq_l f26, 280(r1), 0, qr0
/* 80110F24 0010DE64  CB 41 01 10 */	lfd f26, 0x110(r1)
/* 80110F28 0010DE68  E3 21 01 08 */	psq_l f25, 264(r1), 0, qr0
/* 80110F2C 0010DE6C  CB 21 01 00 */	lfd f25, 0x100(r1)
/* 80110F30 0010DE70  E3 01 00 F8 */	psq_l f24, 248(r1), 0, qr0
/* 80110F34 0010DE74  CB 01 00 F0 */	lfd f24, 0xf0(r1)
/* 80110F38 0010DE78  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 80110F3C 0010DE7C  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 80110F40 0010DE80  83 A1 00 E4 */	lwz r29, 0xe4(r1)
/* 80110F44 0010DE84  80 01 01 74 */	lwz r0, 0x174(r1)
/* 80110F48 0010DE88  83 81 00 E0 */	lwz r28, 0xe0(r1)
/* 80110F4C 0010DE8C  7C 08 03 A6 */	mtlr r0
/* 80110F50 0010DE90  38 21 01 70 */	addi r1, r1, 0x170
/* 80110F54 0010DE94  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBase, global
/* 80110F58 0010DE98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110F5C 0010DE9C  7C 08 02 A6 */	mflr r0
/* 80110F60 0010DEA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110F64 0010DEA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110F68 0010DEA8  7C 9F 23 78 */	mr r31, r4
/* 80110F6C 0010DEAC  7F E3 FB 78 */	mr r3, r31
/* 80110F70 0010DEB0  4B FF 0A 0D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80110F74 0010DEB4  7F E3 FB 78 */	mr r3, r31
/* 80110F78 0010DEB8  4B FF 64 25 */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 80110F7C 0010DEBC  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80110F80 0010DEC0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80110F84 0010DEC4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80110F88 0010DEC8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80110F8C 0010DECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110F90 0010DED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110F94 0010DED4  7C 08 03 A6 */	mtlr r0
/* 80110F98 0010DED8  38 21 00 10 */	addi r1, r1, 0x10
/* 80110F9C 0010DEDC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase9StateWalkFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase11StateAttackFi, global
/* 80110FA0 0010DEE0  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80110FA4 0010DEE4  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 80110FA8 0010DEE8  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80110FAC 0010DEEC  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase11StateAttack@ha
/* 80110FB0 0010DEF0  90 03 00 00 */	stw r0, 0(r3)
/* 80110FB4 0010DEF4  38 E0 00 00 */	li r7, 0
/* 80110FB8 0010DEF8  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 80110FBC 0010DEFC  38 A5 BA 34 */	addi r5, r5, __vt__Q34Game12KochappyBase11StateAttack@l
/* 80110FC0 0010DF00  90 83 00 04 */	stw r4, 4(r3)
/* 80110FC4 0010DF04  38 02 96 D0 */	addi r0, r2, lbl_80517A30@sda21
/* 80110FC8 0010DF08  90 E3 00 08 */	stw r7, 8(r3)
/* 80110FCC 0010DF0C  90 C3 00 00 */	stw r6, 0(r3)
/* 80110FD0 0010DF10  90 A3 00 00 */	stw r5, 0(r3)
/* 80110FD4 0010DF14  90 03 00 0C */	stw r0, 0xc(r3)
/* 80110FD8 0010DF18  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase11StateAttackFi

.fn init__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80110FDC 0010DF1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110FE0 0010DF20  7C 08 02 A6 */	mflr r0
/* 80110FE4 0010DF24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110FE8 0010DF28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110FEC 0010DF2C  7C 9F 23 78 */	mr r31, r4
/* 80110FF0 0010DF30  7F E3 FB 78 */	mr r3, r31
/* 80110FF4 0010DF34  4B FF 09 D9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80110FF8 0010DF38  7F E3 FB 78 */	mr r3, r31
/* 80110FFC 0010DF3C  38 80 00 00 */	li r4, 0
/* 80111000 0010DF40  38 A0 00 00 */	li r5, 0
/* 80111004 0010DF44  4B FF 40 01 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80111008 0010DF48  7F E3 FB 78 */	mr r3, r31
/* 8011100C 0010DF4C  4B FF 63 91 */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 80111010 0010DF50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111014 0010DF54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80111018 0010DF58  7C 08 03 A6 */	mtlr r0
/* 8011101C 0010DF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80111020 0010DF60  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBase, global
/* 80111024 0010DF64  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80111028 0010DF68  7C 08 02 A6 */	mflr r0
/* 8011102C 0010DF6C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80111030 0010DF70  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80111034 0010DF74  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 80111038 0010DF78  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8011103C 0010DF7C  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 80111040 0010DF80  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80111044 0010DF84  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 80111048 0010DF88  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 8011104C 0010DF8C  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 80111050 0010DF90  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 80111054 0010DF94  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 80111058 0010DF98  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 8011105C 0010DF9C  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 80111060 0010DFA0  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80111064 0010DFA4  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80111068 0010DFA8  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8011106C 0010DFAC  93 81 00 80 */	stw r28, 0x80(r1)
/* 80111070 0010DFB0  7C 9D 23 78 */	mr r29, r4
/* 80111074 0010DFB4  7C 7C 1B 78 */	mr r28, r3
/* 80111078 0010DFB8  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8011107C 0010DFBC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80111080 0010DFC0  28 00 00 00 */	cmplwi r0, 0
/* 80111084 0010DFC4  41 82 03 0C */	beq .L_80111390
/* 80111088 0010DFC8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8011108C 0010DFCC  2C 00 00 03 */	cmpwi r0, 3
/* 80111090 0010DFD0  41 82 00 9C */	beq .L_8011112C
/* 80111094 0010DFD4  40 80 00 10 */	bge .L_801110A4
/* 80111098 0010DFD8  2C 00 00 02 */	cmpwi r0, 2
/* 8011109C 0010DFDC  40 80 00 14 */	bge .L_801110B0
/* 801110A0 0010DFE0  48 00 02 F0 */	b .L_80111390
.L_801110A4:
/* 801110A4 0010DFE4  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 801110A8 0010DFE8  41 82 00 9C */	beq .L_80111144
/* 801110AC 0010DFEC  48 00 02 E4 */	b .L_80111390
.L_801110B0:
/* 801110B0 0010DFF0  80 DD 00 C0 */	lwz r6, 0xc0(r29)
/* 801110B4 0010DFF4  7F A3 EB 78 */	mr r3, r29
/* 801110B8 0010DFF8  38 80 00 00 */	li r4, 0
/* 801110BC 0010DFFC  38 A0 00 00 */	li r5, 0
/* 801110C0 0010E000  C0 26 05 B4 */	lfs f1, 0x5b4(r6)
/* 801110C4 0010E004  C0 46 05 DC */	lfs f2, 0x5dc(r6)
/* 801110C8 0010E008  C0 66 06 04 */	lfs f3, 0x604(r6)
/* 801110CC 0010E00C  48 00 31 95 */	bl "attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
/* 801110D0 0010E010  7F A3 EB 78 */	mr r3, r29
/* 801110D4 0010E014  38 80 00 00 */	li r4, 0
/* 801110D8 0010E018  48 00 2A 5D */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 801110DC 0010E01C  2C 03 00 00 */	cmpwi r3, 0
/* 801110E0 0010E020  40 82 00 14 */	bne .L_801110F4
/* 801110E4 0010E024  7F A3 EB 78 */	mr r3, r29
/* 801110E8 0010E028  38 80 00 08 */	li r4, 8
/* 801110EC 0010E02C  38 A0 00 00 */	li r5, 0
/* 801110F0 0010E030  4B FF 3F 15 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_801110F4:
/* 801110F4 0010E034  7F A3 EB 78 */	mr r3, r29
/* 801110F8 0010E038  83 DD 00 C0 */	lwz r30, 0xc0(r29)
/* 801110FC 0010E03C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111100 0010E040  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80111104 0010E044  7D 89 03 A6 */	mtctr r12
/* 80111108 0010E048  4E 80 04 21 */	bctrl 
/* 8011110C 0010E04C  FC 80 08 90 */	fmr f4, f1
/* 80111110 0010E050  C0 3E 05 3C */	lfs f1, 0x53c(r30)
/* 80111114 0010E054  C0 5E 04 C4 */	lfs f2, 0x4c4(r30)
/* 80111118 0010E058  7F A3 EB 78 */	mr r3, r29
/* 8011111C 0010E05C  C0 7E 04 EC */	lfs f3, 0x4ec(r30)
/* 80111120 0010E060  38 80 00 00 */	li r4, 0
/* 80111124 0010E064  48 00 1F F9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80111128 0010E068  48 00 02 68 */	b .L_80111390
.L_8011112C:
/* 8011112C 0010E06C  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 80111130 0010E070  7F A3 EB 78 */	mr r3, r29
/* 80111134 0010E074  38 80 00 00 */	li r4, 0
/* 80111138 0010E078  C0 25 08 44 */	lfs f1, 0x844(r5)
/* 8011113C 0010E07C  48 00 2D 49 */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80111140 0010E080  48 00 02 50 */	b .L_80111390
.L_80111144:
/* 80111144 0010E084  80 FD 00 C0 */	lwz r7, 0xc0(r29)
/* 80111148 0010E088  7F A3 EB 78 */	mr r3, r29
/* 8011114C 0010E08C  38 80 00 00 */	li r4, 0
/* 80111150 0010E090  38 A0 00 00 */	li r5, 0
/* 80111154 0010E094  C0 27 04 9C */	lfs f1, 0x49c(r7)
/* 80111158 0010E098  38 C0 00 00 */	li r6, 0
/* 8011115C 0010E09C  C0 47 04 4C */	lfs f2, 0x44c(r7)
/* 80111160 0010E0A0  48 00 1E F1 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80111164 0010E0A4  28 03 00 00 */	cmplwi r3, 0
/* 80111168 0010E0A8  41 82 02 08 */	beq .L_80111370
/* 8011116C 0010E0AC  90 7D 02 30 */	stw r3, 0x230(r29)
/* 80111170 0010E0B0  38 61 00 68 */	addi r3, r1, 0x68
/* 80111174 0010E0B4  80 9D 02 30 */	lwz r4, 0x230(r29)
/* 80111178 0010E0B8  81 84 00 00 */	lwz r12, 0(r4)
/* 8011117C 0010E0BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111180 0010E0C0  7D 89 03 A6 */	mtctr r12
/* 80111184 0010E0C4  4E 80 04 21 */	bctrl 
/* 80111188 0010E0C8  7F A4 EB 78 */	mr r4, r29
/* 8011118C 0010E0CC  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80111190 0010E0D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111194 0010E0D4  38 61 00 74 */	addi r3, r1, 0x74
/* 80111198 0010E0D8  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 8011119C 0010E0DC  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 801111A0 0010E0E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801111A4 0010E0E4  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 801111A8 0010E0E8  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801111AC 0010E0EC  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801111B0 0010E0F0  7D 89 03 A6 */	mtctr r12
/* 801111B4 0010E0F4  4E 80 04 21 */	bctrl 
/* 801111B8 0010E0F8  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 801111BC 0010E0FC  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 801111C0 0010E100  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 801111C4 0010E104  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 801111C8 0010E108  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 801111CC 0010E10C  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801111D0 0010E110  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 801111D4 0010E114  EC 21 28 28 */	fsubs f1, f1, f5
/* 801111D8 0010E118  EC 40 18 28 */	fsubs f2, f0, f3
/* 801111DC 0010E11C  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 801111E0 0010E120  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 801111E4 0010E124  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 801111E8 0010E128  4B F2 3F 21 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 801111EC 0010E12C  48 30 09 E5 */	bl roundAng__Ff
/* 801111F0 0010E130  81 9D 00 00 */	lwz r12, 0(r29)
/* 801111F4 0010E134  FF 40 08 90 */	fmr f26, f1
/* 801111F8 0010E138  7F A3 EB 78 */	mr r3, r29
/* 801111FC 0010E13C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80111200 0010E140  7D 89 03 A6 */	mtctr r12
/* 80111204 0010E144  4E 80 04 21 */	bctrl 
/* 80111208 0010E148  FC 40 08 90 */	fmr f2, f1
/* 8011120C 0010E14C  FC 20 D0 90 */	fmr f1, f26
/* 80111210 0010E150  48 30 09 ED */	bl angDist__Fff
/* 80111214 0010E154  7F A4 EB 78 */	mr r4, r29
/* 80111218 0010E158  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 8011121C 0010E15C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111220 0010E160  FF C0 08 90 */	fmr f30, f1
/* 80111224 0010E164  38 61 00 14 */	addi r3, r1, 0x14
/* 80111228 0010E168  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 8011122C 0010E16C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111230 0010E170  3B C0 00 00 */	li r30, 0
/* 80111234 0010E174  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 80111238 0010E178  83 FD 02 30 */	lwz r31, 0x230(r29)
/* 8011123C 0010E17C  7D 89 03 A6 */	mtctr r12
/* 80111240 0010E180  4E 80 04 21 */	bctrl 
/* 80111244 0010E184  7F E4 FB 78 */	mr r4, r31
/* 80111248 0010E188  38 61 00 08 */	addi r3, r1, 8
/* 8011124C 0010E18C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111250 0010E190  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80111254 0010E194  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111258 0010E198  7D 89 03 A6 */	mtctr r12
/* 8011125C 0010E19C  4E 80 04 21 */	bctrl 
/* 80111260 0010E1A0  7F A4 EB 78 */	mr r4, r29
/* 80111264 0010E1A4  C0 01 00 08 */	lfs f0, 8(r1)
/* 80111268 0010E1A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8011126C 0010E1AC  38 61 00 2C */	addi r3, r1, 0x2c
/* 80111270 0010E1B0  EF 40 F8 28 */	fsubs f26, f0, f31
/* 80111274 0010E1B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111278 0010E1B8  7D 89 03 A6 */	mtctr r12
/* 8011127C 0010E1BC  4E 80 04 21 */	bctrl 
/* 80111280 0010E1C0  7F E4 FB 78 */	mr r4, r31
/* 80111284 0010E1C4  38 61 00 20 */	addi r3, r1, 0x20
/* 80111288 0010E1C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011128C 0010E1CC  C3 E1 00 30 */	lfs f31, 0x30(r1)
/* 80111290 0010E1D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111294 0010E1D4  7D 89 03 A6 */	mtctr r12
/* 80111298 0010E1D8  4E 80 04 21 */	bctrl 
/* 8011129C 0010E1DC  7F A4 EB 78 */	mr r4, r29
/* 801112A0 0010E1E0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 801112A4 0010E1E4  81 9D 00 00 */	lwz r12, 0(r29)
/* 801112A8 0010E1E8  38 61 00 44 */	addi r3, r1, 0x44
/* 801112AC 0010E1EC  EF 60 F8 28 */	fsubs f27, f0, f31
/* 801112B0 0010E1F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801112B4 0010E1F4  7D 89 03 A6 */	mtctr r12
/* 801112B8 0010E1F8  4E 80 04 21 */	bctrl 
/* 801112BC 0010E1FC  7F E4 FB 78 */	mr r4, r31
/* 801112C0 0010E200  38 61 00 38 */	addi r3, r1, 0x38
/* 801112C4 0010E204  81 9F 00 00 */	lwz r12, 0(r31)
/* 801112C8 0010E208  C3 E1 00 4C */	lfs f31, 0x4c(r1)
/* 801112CC 0010E20C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801112D0 0010E210  7D 89 03 A6 */	mtctr r12
/* 801112D4 0010E214  4E 80 04 21 */	bctrl 
/* 801112D8 0010E218  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 801112DC 0010E21C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 801112E0 0010E220  EC 1D 07 72 */	fmuls f0, f29, f29
/* 801112E4 0010E224  EC 42 F8 28 */	fsubs f2, f2, f31
/* 801112E8 0010E228  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 801112EC 0010E22C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801112F0 0010E230  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801112F4 0010E234  40 80 00 2C */	bge .L_80111320
/* 801112F8 0010E238  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 801112FC 0010E23C  FC 40 F2 10 */	fabs f2, f30
/* 80111300 0010E240  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80111304 0010E244  EC 00 07 32 */	fmuls f0, f0, f28
/* 80111308 0010E248  FC 40 10 18 */	frsp f2, f2
/* 8011130C 0010E24C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80111310 0010E250  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111314 0010E254  4C 40 13 82 */	cror 2, 0, 2
/* 80111318 0010E258  40 82 00 08 */	bne .L_80111320
/* 8011131C 0010E25C  3B C0 00 01 */	li r30, 1
.L_80111320:
/* 80111320 0010E260  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80111324 0010E264  41 82 00 28 */	beq .L_8011134C
/* 80111328 0010E268  7F 83 E3 78 */	mr r3, r28
/* 8011132C 0010E26C  7F A4 EB 78 */	mr r4, r29
/* 80111330 0010E270  81 9C 00 00 */	lwz r12, 0(r28)
/* 80111334 0010E274  38 A0 00 04 */	li r5, 4
/* 80111338 0010E278  38 C0 00 00 */	li r6, 0
/* 8011133C 0010E27C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111340 0010E280  7D 89 03 A6 */	mtctr r12
/* 80111344 0010E284  4E 80 04 21 */	bctrl 
/* 80111348 0010E288  48 00 00 48 */	b .L_80111390
.L_8011134C:
/* 8011134C 0010E28C  7F 83 E3 78 */	mr r3, r28
/* 80111350 0010E290  7F A4 EB 78 */	mr r4, r29
/* 80111354 0010E294  81 9C 00 00 */	lwz r12, 0(r28)
/* 80111358 0010E298  38 A0 00 02 */	li r5, 2
/* 8011135C 0010E29C  38 C0 00 00 */	li r6, 0
/* 80111360 0010E2A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111364 0010E2A4  7D 89 03 A6 */	mtctr r12
/* 80111368 0010E2A8  4E 80 04 21 */	bctrl 
/* 8011136C 0010E2AC  48 00 00 24 */	b .L_80111390
.L_80111370:
/* 80111370 0010E2B0  7F 83 E3 78 */	mr r3, r28
/* 80111374 0010E2B4  7F A4 EB 78 */	mr r4, r29
/* 80111378 0010E2B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8011137C 0010E2BC  38 A0 00 06 */	li r5, 6
/* 80111380 0010E2C0  38 C0 00 00 */	li r6, 0
/* 80111384 0010E2C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111388 0010E2C8  7D 89 03 A6 */	mtctr r12
/* 8011138C 0010E2CC  4E 80 04 21 */	bctrl 
.L_80111390:
/* 80111390 0010E2D0  C0 3D 02 00 */	lfs f1, 0x200(r29)
/* 80111394 0010E2D4  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111398 0010E2D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011139C 0010E2DC  4C 40 13 82 */	cror 2, 0, 2
/* 801113A0 0010E2E0  40 82 00 24 */	bne .L_801113C4
/* 801113A4 0010E2E4  7F 83 E3 78 */	mr r3, r28
/* 801113A8 0010E2E8  7F A4 EB 78 */	mr r4, r29
/* 801113AC 0010E2EC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801113B0 0010E2F0  38 A0 00 01 */	li r5, 1
/* 801113B4 0010E2F4  38 C0 00 00 */	li r6, 0
/* 801113B8 0010E2F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801113BC 0010E2FC  7D 89 03 A6 */	mtctr r12
/* 801113C0 0010E300  4E 80 04 21 */	bctrl 
.L_801113C4:
/* 801113C4 0010E304  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 801113C8 0010E308  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 801113CC 0010E30C  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 801113D0 0010E310  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 801113D4 0010E314  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 801113D8 0010E318  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 801113DC 0010E31C  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 801113E0 0010E320  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 801113E4 0010E324  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 801113E8 0010E328  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 801113EC 0010E32C  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 801113F0 0010E330  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 801113F4 0010E334  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801113F8 0010E338  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801113FC 0010E33C  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 80111400 0010E340  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80111404 0010E344  83 81 00 80 */	lwz r28, 0x80(r1)
/* 80111408 0010E348  7C 08 03 A6 */	mtlr r0
/* 8011140C 0010E34C  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80111410 0010E350  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBase, global
/* 80111414 0010E354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111418 0010E358  7C 08 02 A6 */	mflr r0
/* 8011141C 0010E35C  7C 83 23 78 */	mr r3, r4
/* 80111420 0010E360  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111424 0010E364  4B FF 05 59 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80111428 0010E368  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011142C 0010E36C  7C 08 03 A6 */	mtlr r0
/* 80111430 0010E370  38 21 00 10 */	addi r1, r1, 0x10
/* 80111434 0010E374  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase11StateAttackFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase10StateFlickFi, global
/* 80111438 0010E378  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8011143C 0010E37C  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 80111440 0010E380  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80111444 0010E384  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase10StateFlick@ha
/* 80111448 0010E388  90 03 00 00 */	stw r0, 0(r3)
/* 8011144C 0010E38C  38 E0 00 00 */	li r7, 0
/* 80111450 0010E390  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 80111454 0010E394  38 A5 BA 10 */	addi r5, r5, __vt__Q34Game12KochappyBase10StateFlick@l
/* 80111458 0010E398  90 83 00 04 */	stw r4, 4(r3)
/* 8011145C 0010E39C  38 82 96 D8 */	addi r4, r2, lbl_80517A38@sda21
/* 80111460 0010E3A0  38 00 FF FF */	li r0, -1
/* 80111464 0010E3A4  90 E3 00 08 */	stw r7, 8(r3)
/* 80111468 0010E3A8  90 C3 00 00 */	stw r6, 0(r3)
/* 8011146C 0010E3AC  90 A3 00 00 */	stw r5, 0(r3)
/* 80111470 0010E3B0  90 83 00 0C */	stw r4, 0xc(r3)
/* 80111474 0010E3B4  90 03 00 10 */	stw r0, 0x10(r3)
/* 80111478 0010E3B8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase10StateFlickFi

.fn init__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8011147C 0010E3BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80111480 0010E3C0  7C 08 02 A6 */	mflr r0
/* 80111484 0010E3C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80111488 0010E3C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011148C 0010E3CC  7C BF 2B 78 */	mr r31, r5
/* 80111490 0010E3D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80111494 0010E3D4  7C 9E 23 78 */	mr r30, r4
/* 80111498 0010E3D8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011149C 0010E3DC  7C 7D 1B 78 */	mr r29, r3
/* 801114A0 0010E3E0  7F C3 F3 78 */	mr r3, r30
/* 801114A4 0010E3E4  4B FF 05 29 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 801114A8 0010E3E8  28 1F 00 00 */	cmplwi r31, 0
/* 801114AC 0010E3EC  41 82 00 10 */	beq .L_801114BC
/* 801114B0 0010E3F0  80 1F 00 00 */	lwz r0, 0(r31)
/* 801114B4 0010E3F4  90 1D 00 10 */	stw r0, 0x10(r29)
/* 801114B8 0010E3F8  48 00 00 0C */	b .L_801114C4
.L_801114BC:
/* 801114BC 0010E3FC  38 00 FF FF */	li r0, -1
/* 801114C0 0010E400  90 1D 00 10 */	stw r0, 0x10(r29)
.L_801114C4:
/* 801114C4 0010E404  7F C3 F3 78 */	mr r3, r30
/* 801114C8 0010E408  38 80 00 02 */	li r4, 2
/* 801114CC 0010E40C  38 A0 00 00 */	li r5, 0
/* 801114D0 0010E410  4B FF 3B 35 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 801114D4 0010E414  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 801114D8 0010E418  7F C3 F3 78 */	mr r3, r30
/* 801114DC 0010E41C  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 801114E0 0010E420  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 801114E4 0010E424  81 9E 00 00 */	lwz r12, 0(r30)
/* 801114E8 0010E428  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 801114EC 0010E42C  7D 89 03 A6 */	mtctr r12
/* 801114F0 0010E430  4E 80 04 21 */	bctrl 
/* 801114F4 0010E434  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801114F8 0010E438  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801114FC 0010E43C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80111500 0010E440  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80111504 0010E444  7C 08 03 A6 */	mtlr r0
/* 80111508 0010E448  38 21 00 20 */	addi r1, r1, 0x20
/* 8011150C 0010E44C  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBase, global
/* 80111510 0010E450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111514 0010E454  7C 08 02 A6 */	mflr r0
/* 80111518 0010E458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011151C 0010E45C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111520 0010E460  7C 9F 23 78 */	mr r31, r4
/* 80111524 0010E464  93 C1 00 08 */	stw r30, 8(r1)
/* 80111528 0010E468  7C 7E 1B 78 */	mr r30, r3
/* 8011152C 0010E46C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80111530 0010E470  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80111534 0010E474  28 00 00 00 */	cmplwi r0, 0
/* 80111538 0010E478  41 82 01 04 */	beq .L_8011163C
/* 8011153C 0010E47C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80111540 0010E480  2C 00 00 03 */	cmpwi r0, 3
/* 80111544 0010E484  41 82 00 A0 */	beq .L_801115E4
/* 80111548 0010E488  40 80 00 10 */	bge .L_80111558
/* 8011154C 0010E48C  2C 00 00 02 */	cmpwi r0, 2
/* 80111550 0010E490  40 80 00 14 */	bge .L_80111564
/* 80111554 0010E494  48 00 00 E8 */	b .L_8011163C
.L_80111558:
/* 80111558 0010E498  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8011155C 0010E49C  41 82 00 A0 */	beq .L_801115FC
/* 80111560 0010E4A0  48 00 00 DC */	b .L_8011163C
.L_80111564:
/* 80111564 0010E4A4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80111568 0010E4A8  7F E3 FB 78 */	mr r3, r31
/* 8011156C 0010E4AC  C0 82 96 E0 */	lfs f4, lbl_80517A40@sda21(r2)
/* 80111570 0010E4B0  38 80 00 00 */	li r4, 0
/* 80111574 0010E4B4  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 80111578 0010E4B8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 8011157C 0010E4BC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80111580 0010E4C0  48 00 1B 9D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80111584 0010E4C4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80111588 0010E4C8  7F E3 FB 78 */	mr r3, r31
/* 8011158C 0010E4CC  C0 82 96 E0 */	lfs f4, lbl_80517A40@sda21(r2)
/* 80111590 0010E4D0  38 80 00 00 */	li r4, 0
/* 80111594 0010E4D4  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80111598 0010E4D8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 8011159C 0010E4DC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 801115A0 0010E4E0  48 00 1F 35 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 801115A4 0010E4E4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 801115A8 0010E4E8  7F E3 FB 78 */	mr r3, r31
/* 801115AC 0010E4EC  C0 82 96 E0 */	lfs f4, lbl_80517A40@sda21(r2)
/* 801115B0 0010E4F0  38 80 00 00 */	li r4, 0
/* 801115B4 0010E4F4  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 801115B8 0010E4F8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 801115BC 0010E4FC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 801115C0 0010E500  48 00 21 D1 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 801115C4 0010E504  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 801115C8 0010E508  7F E3 FB 78 */	mr r3, r31
/* 801115CC 0010E50C  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 801115D0 0010E510  81 9F 00 00 */	lwz r12, 0(r31)
/* 801115D4 0010E514  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 801115D8 0010E518  7D 89 03 A6 */	mtctr r12
/* 801115DC 0010E51C  4E 80 04 21 */	bctrl 
/* 801115E0 0010E520  48 00 00 5C */	b .L_8011163C
.L_801115E4:
/* 801115E4 0010E524  7F E3 FB 78 */	mr r3, r31
/* 801115E8 0010E528  81 9F 00 00 */	lwz r12, 0(r31)
/* 801115EC 0010E52C  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 801115F0 0010E530  7D 89 03 A6 */	mtctr r12
/* 801115F4 0010E534  4E 80 04 21 */	bctrl 
/* 801115F8 0010E538  48 00 00 44 */	b .L_8011163C
.L_801115FC:
/* 801115FC 0010E53C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 80111600 0010E540  2C 05 FF FF */	cmpwi r5, -1
/* 80111604 0010E544  41 82 00 1C */	beq .L_80111620
/* 80111608 0010E548  81 83 00 00 */	lwz r12, 0(r3)
/* 8011160C 0010E54C  38 C0 00 00 */	li r6, 0
/* 80111610 0010E550  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111614 0010E554  7D 89 03 A6 */	mtctr r12
/* 80111618 0010E558  4E 80 04 21 */	bctrl 
/* 8011161C 0010E55C  48 00 00 20 */	b .L_8011163C
.L_80111620:
/* 80111620 0010E560  81 83 00 00 */	lwz r12, 0(r3)
/* 80111624 0010E564  38 C0 00 00 */	li r6, 0
/* 80111628 0010E568  80 BE 00 08 */	lwz r5, 8(r30)
/* 8011162C 0010E56C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111630 0010E570  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 80111634 0010E574  7D 89 03 A6 */	mtctr r12
/* 80111638 0010E578  4E 80 04 21 */	bctrl 
.L_8011163C:
/* 8011163C 0010E57C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80111640 0010E580  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111644 0010E584  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111648 0010E588  4C 40 13 82 */	cror 2, 0, 2
/* 8011164C 0010E58C  40 82 00 24 */	bne .L_80111670
/* 80111650 0010E590  7F C3 F3 78 */	mr r3, r30
/* 80111654 0010E594  7F E4 FB 78 */	mr r4, r31
/* 80111658 0010E598  81 9E 00 00 */	lwz r12, 0(r30)
/* 8011165C 0010E59C  38 A0 00 01 */	li r5, 1
/* 80111660 0010E5A0  38 C0 00 00 */	li r6, 0
/* 80111664 0010E5A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111668 0010E5A8  7D 89 03 A6 */	mtctr r12
/* 8011166C 0010E5AC  4E 80 04 21 */	bctrl 
.L_80111670:
/* 80111670 0010E5B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111674 0010E5B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80111678 0010E5B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8011167C 0010E5BC  7C 08 03 A6 */	mtlr r0
/* 80111680 0010E5C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80111684 0010E5C4  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBase, global
/* 80111688 0010E5C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011168C 0010E5CC  7C 08 02 A6 */	mflr r0
/* 80111690 0010E5D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111694 0010E5D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111698 0010E5D8  7C 9F 23 78 */	mr r31, r4
/* 8011169C 0010E5DC  7F E3 FB 78 */	mr r3, r31
/* 801116A0 0010E5E0  4B FF 02 DD */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 801116A4 0010E5E4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 801116A8 0010E5E8  7F E3 FB 78 */	mr r3, r31
/* 801116AC 0010E5EC  60 00 00 20 */	ori r0, r0, 0x20
/* 801116B0 0010E5F0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 801116B4 0010E5F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801116B8 0010E5F8  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 801116BC 0010E5FC  7D 89 03 A6 */	mtctr r12
/* 801116C0 0010E600  4E 80 04 21 */	bctrl 
/* 801116C4 0010E604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801116C8 0010E608  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801116CC 0010E60C  7C 08 03 A6 */	mtlr r0
/* 801116D0 0010E610  38 21 00 10 */	addi r1, r1, 0x10
/* 801116D4 0010E614  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase10StateFlickFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase15StateTurnToHomeFi, global
/* 801116D8 0010E618  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 801116DC 0010E61C  3C E0 80 4B */	lis r7, __vt__Q34Game12KochappyBase5State@ha
/* 801116E0 0010E620  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 801116E4 0010E624  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase15StateTurnToHome@ha
/* 801116E8 0010E628  90 03 00 00 */	stw r0, 0(r3)
/* 801116EC 0010E62C  3C A0 80 48 */	lis r5, lbl_8047AB28@ha
/* 801116F0 0010E630  39 00 00 00 */	li r8, 0
/* 801116F4 0010E634  38 E7 BB 0C */	addi r7, r7, __vt__Q34Game12KochappyBase5State@l
/* 801116F8 0010E638  90 83 00 04 */	stw r4, 4(r3)
/* 801116FC 0010E63C  38 86 B9 EC */	addi r4, r6, __vt__Q34Game12KochappyBase15StateTurnToHome@l
/* 80111700 0010E640  38 05 AB 28 */	addi r0, r5, lbl_8047AB28@l
/* 80111704 0010E644  91 03 00 08 */	stw r8, 8(r3)
/* 80111708 0010E648  90 E3 00 00 */	stw r7, 0(r3)
/* 8011170C 0010E64C  90 83 00 00 */	stw r4, 0(r3)
/* 80111710 0010E650  90 03 00 0C */	stw r0, 0xc(r3)
/* 80111714 0010E654  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase15StateTurnToHomeFi

.fn init__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80111718 0010E658  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8011171C 0010E65C  7C 08 02 A6 */	mflr r0
/* 80111720 0010E660  90 01 00 54 */	stw r0, 0x54(r1)
/* 80111724 0010E664  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80111728 0010E668  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8011172C 0010E66C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80111730 0010E670  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80111734 0010E674  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80111738 0010E678  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8011173C 0010E67C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80111740 0010E680  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80111744 0010E684  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111748 0010E688  7C 9F 23 78 */	mr r31, r4
/* 8011174C 0010E68C  7C 7E 1B 78 */	mr r30, r3
/* 80111750 0010E690  38 61 00 08 */	addi r3, r1, 8
/* 80111754 0010E694  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80111758 0010E698  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8011175C 0010E69C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80111760 0010E6A0  81 84 00 00 */	lwz r12, 0(r4)
/* 80111764 0010E6A4  C3 E4 01 98 */	lfs f31, 0x198(r4)
/* 80111768 0010E6A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8011176C 0010E6AC  C3 C4 01 9C */	lfs f30, 0x19c(r4)
/* 80111770 0010E6B0  C3 A4 01 A0 */	lfs f29, 0x1a0(r4)
/* 80111774 0010E6B4  7D 89 03 A6 */	mtctr r12
/* 80111778 0010E6B8  4E 80 04 21 */	bctrl 
/* 8011177C 0010E6BC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80111780 0010E6C0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80111784 0010E6C4  EC 60 F0 28 */	fsubs f3, f0, f30
/* 80111788 0010E6C8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8011178C 0010E6CC  EC 42 F8 28 */	fsubs f2, f2, f31
/* 80111790 0010E6D0  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111794 0010E6D4  EC 21 E8 28 */	fsubs f1, f1, f29
/* 80111798 0010E6D8  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8011179C 0010E6DC  EC 81 00 72 */	fmuls f4, f1, f1
/* 801117A0 0010E6E0  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 801117A4 0010E6E4  EC 24 08 2A */	fadds f1, f4, f1
/* 801117A8 0010E6E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801117AC 0010E6EC  40 81 00 14 */	ble .L_801117C0
/* 801117B0 0010E6F0  40 81 00 14 */	ble .L_801117C4
/* 801117B4 0010E6F4  FC 00 08 34 */	frsqrte f0, f1
/* 801117B8 0010E6F8  EC 20 00 72 */	fmuls f1, f0, f1
/* 801117BC 0010E6FC  48 00 00 08 */	b .L_801117C4
.L_801117C0:
/* 801117C0 0010E700  FC 20 00 90 */	fmr f1, f0
.L_801117C4:
/* 801117C4 0010E704  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 801117C8 0010E708  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 801117CC 0010E70C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801117D0 0010E710  40 80 00 28 */	bge .L_801117F8
/* 801117D4 0010E714  7F C3 F3 78 */	mr r3, r30
/* 801117D8 0010E718  7F E4 FB 78 */	mr r4, r31
/* 801117DC 0010E71C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801117E0 0010E720  38 A0 00 00 */	li r5, 0
/* 801117E4 0010E724  38 C0 00 00 */	li r6, 0
/* 801117E8 0010E728  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801117EC 0010E72C  7D 89 03 A6 */	mtctr r12
/* 801117F0 0010E730  4E 80 04 21 */	bctrl 
/* 801117F4 0010E734  48 00 00 14 */	b .L_80111808
.L_801117F8:
/* 801117F8 0010E738  7F E3 FB 78 */	mr r3, r31
/* 801117FC 0010E73C  38 80 00 07 */	li r4, 7
/* 80111800 0010E740  38 A0 00 00 */	li r5, 0
/* 80111804 0010E744  4B FF 38 01 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_80111808:
/* 80111808 0010E748  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8011180C 0010E74C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80111810 0010E750  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80111814 0010E754  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80111818 0010E758  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8011181C 0010E75C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80111820 0010E760  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80111824 0010E764  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80111828 0010E768  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011182C 0010E76C  7C 08 03 A6 */	mtlr r0
/* 80111830 0010E770  38 21 00 50 */	addi r1, r1, 0x50
/* 80111834 0010E774  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBase, global
/* 80111838 0010E778  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 8011183C 0010E77C  7C 08 02 A6 */	mflr r0
/* 80111840 0010E780  90 01 01 14 */	stw r0, 0x114(r1)
/* 80111844 0010E784  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80111848 0010E788  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 8011184C 0010E78C  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80111850 0010E790  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80111854 0010E794  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80111858 0010E798  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 8011185C 0010E79C  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80111860 0010E7A0  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80111864 0010E7A4  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80111868 0010E7A8  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 8011186C 0010E7AC  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80111870 0010E7B0  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80111874 0010E7B4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80111878 0010E7B8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8011187C 0010E7BC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80111880 0010E7C0  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 80111884 0010E7C4  7C 9D 23 78 */	mr r29, r4
/* 80111888 0010E7C8  7C 7C 1B 78 */	mr r28, r3
/* 8011188C 0010E7CC  7F A3 EB 78 */	mr r3, r29
/* 80111890 0010E7D0  38 80 00 01 */	li r4, 1
/* 80111894 0010E7D4  48 00 2D C5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80111898 0010E7D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011189C 0010E7DC  41 82 00 28 */	beq .L_801118C4
/* 801118A0 0010E7E0  7F 83 E3 78 */	mr r3, r28
/* 801118A4 0010E7E4  7F A4 EB 78 */	mr r4, r29
/* 801118A8 0010E7E8  81 9C 00 00 */	lwz r12, 0(r28)
/* 801118AC 0010E7EC  38 A0 00 05 */	li r5, 5
/* 801118B0 0010E7F0  38 C0 00 00 */	li r6, 0
/* 801118B4 0010E7F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801118B8 0010E7F8  7D 89 03 A6 */	mtctr r12
/* 801118BC 0010E7FC  4E 80 04 21 */	bctrl 
/* 801118C0 0010E800  48 00 03 94 */	b .L_80111C54
.L_801118C4:
/* 801118C4 0010E804  7F A4 EB 78 */	mr r4, r29
/* 801118C8 0010E808  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 801118CC 0010E80C  81 9D 00 00 */	lwz r12, 0(r29)
/* 801118D0 0010E810  38 61 00 8C */	addi r3, r1, 0x8c
/* 801118D4 0010E814  C3 5D 01 98 */	lfs f26, 0x198(r29)
/* 801118D8 0010E818  81 8C 00 08 */	lwz r12, 8(r12)
/* 801118DC 0010E81C  C3 7D 01 A0 */	lfs f27, 0x1a0(r29)
/* 801118E0 0010E820  C3 E5 05 8C */	lfs f31, 0x58c(r5)
/* 801118E4 0010E824  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 801118E8 0010E828  C3 A5 03 0C */	lfs f29, 0x30c(r5)
/* 801118EC 0010E82C  7D 89 03 A6 */	mtctr r12
/* 801118F0 0010E830  4E 80 04 21 */	bctrl 
/* 801118F4 0010E834  C0 81 00 8C */	lfs f4, 0x8c(r1)
/* 801118F8 0010E838  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 801118FC 0010E83C  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80111900 0010E840  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80111904 0010E844  C0 61 00 90 */	lfs f3, 0x90(r1)
/* 80111908 0010E848  EC 3A 20 28 */	fsubs f1, f26, f4
/* 8011190C 0010E84C  EC 5B 00 28 */	fsubs f2, f27, f0
/* 80111910 0010E850  D0 81 00 80 */	stfs f4, 0x80(r1)
/* 80111914 0010E854  D0 61 00 84 */	stfs f3, 0x84(r1)
/* 80111918 0010E858  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 8011191C 0010E85C  4B F2 37 ED */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80111920 0010E860  48 30 02 B1 */	bl roundAng__Ff
/* 80111924 0010E864  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111928 0010E868  FF 40 08 90 */	fmr f26, f1
/* 8011192C 0010E86C  7F A3 EB 78 */	mr r3, r29
/* 80111930 0010E870  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80111934 0010E874  7D 89 03 A6 */	mtctr r12
/* 80111938 0010E878  4E 80 04 21 */	bctrl 
/* 8011193C 0010E87C  FC 40 08 90 */	fmr f2, f1
/* 80111940 0010E880  FC 20 D0 90 */	fmr f1, f26
/* 80111944 0010E884  48 30 02 B9 */	bl angDist__Fff
/* 80111948 0010E888  FF 80 08 90 */	fmr f28, f1
/* 8011194C 0010E88C  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80111950 0010E890  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80111954 0010E894  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80111958 0010E898  EF BC 07 72 */	fmuls f29, f28, f29
/* 8011195C 0010E89C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80111960 0010E8A0  FC 00 EA 10 */	fabs f0, f29
/* 80111964 0010E8A4  FC 00 00 18 */	frsp f0, f0
/* 80111968 0010E8A8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8011196C 0010E8AC  40 81 00 1C */	ble .L_80111988
/* 80111970 0010E8B0  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111974 0010E8B4  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80111978 0010E8B8  40 81 00 0C */	ble .L_80111984
/* 8011197C 0010E8BC  FF A0 08 90 */	fmr f29, f1
/* 80111980 0010E8C0  48 00 00 08 */	b .L_80111988
.L_80111984:
/* 80111984 0010E8C4  FF A0 08 50 */	fneg f29, f1
.L_80111988:
/* 80111988 0010E8C8  7F A3 EB 78 */	mr r3, r29
/* 8011198C 0010E8CC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111990 0010E8D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80111994 0010E8D4  7D 89 03 A6 */	mtctr r12
/* 80111998 0010E8D8  4E 80 04 21 */	bctrl 
/* 8011199C 0010E8DC  EC 3D 08 2A */	fadds f1, f29, f1
/* 801119A0 0010E8E0  48 30 02 31 */	bl roundAng__Ff
/* 801119A4 0010E8E4  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 801119A8 0010E8E8  FC 40 E2 10 */	fabs f2, f28
/* 801119AC 0010E8EC  D0 3D 01 FC */	stfs f1, 0x1fc(r29)
/* 801119B0 0010E8F0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801119B4 0010E8F4  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 801119B8 0010E8F8  C0 7D 01 FC */	lfs f3, 0x1fc(r29)
/* 801119BC 0010E8FC  FC 40 10 18 */	frsp f2, f2
/* 801119C0 0010E900  EC 01 00 32 */	fmuls f0, f1, f0
/* 801119C4 0010E904  D0 7D 01 A8 */	stfs f3, 0x1a8(r29)
/* 801119C8 0010E908  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801119CC 0010E90C  4C 40 13 82 */	cror 2, 0, 2
/* 801119D0 0010E910  40 82 00 0C */	bne .L_801119DC
/* 801119D4 0010E914  7F A3 EB 78 */	mr r3, r29
/* 801119D8 0010E918  4B FF 38 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_801119DC:
/* 801119DC 0010E91C  80 7D 01 88 */	lwz r3, 0x188(r29)
/* 801119E0 0010E920  88 03 00 24 */	lbz r0, 0x24(r3)
/* 801119E4 0010E924  28 00 00 00 */	cmplwi r0, 0
/* 801119E8 0010E928  41 82 00 34 */	beq .L_80111A1C
/* 801119EC 0010E92C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801119F0 0010E930  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 801119F4 0010E934  41 82 00 08 */	beq .L_801119FC
/* 801119F8 0010E938  48 00 00 24 */	b .L_80111A1C
.L_801119FC:
/* 801119FC 0010E93C  7F 83 E3 78 */	mr r3, r28
/* 80111A00 0010E940  7F A4 EB 78 */	mr r4, r29
/* 80111A04 0010E944  81 9C 00 00 */	lwz r12, 0(r28)
/* 80111A08 0010E948  38 A0 00 07 */	li r5, 7
/* 80111A0C 0010E94C  38 C0 00 00 */	li r6, 0
/* 80111A10 0010E950  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111A14 0010E954  7D 89 03 A6 */	mtctr r12
/* 80111A18 0010E958  4E 80 04 21 */	bctrl 
.L_80111A1C:
/* 80111A1C 0010E95C  80 FD 00 C0 */	lwz r7, 0xc0(r29)
/* 80111A20 0010E960  7F A3 EB 78 */	mr r3, r29
/* 80111A24 0010E964  38 80 00 00 */	li r4, 0
/* 80111A28 0010E968  38 A0 00 00 */	li r5, 0
/* 80111A2C 0010E96C  C0 27 04 9C */	lfs f1, 0x49c(r7)
/* 80111A30 0010E970  38 C0 00 00 */	li r6, 0
/* 80111A34 0010E974  C0 47 04 4C */	lfs f2, 0x44c(r7)
/* 80111A38 0010E978  48 00 16 19 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80111A3C 0010E97C  28 03 00 00 */	cmplwi r3, 0
/* 80111A40 0010E980  41 82 01 E0 */	beq .L_80111C20
/* 80111A44 0010E984  90 7D 02 30 */	stw r3, 0x230(r29)
/* 80111A48 0010E988  38 61 00 68 */	addi r3, r1, 0x68
/* 80111A4C 0010E98C  83 FD 02 30 */	lwz r31, 0x230(r29)
/* 80111A50 0010E990  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 80111A54 0010E994  7F E4 FB 78 */	mr r4, r31
/* 80111A58 0010E998  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111A5C 0010E99C  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 80111A60 0010E9A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111A64 0010E9A4  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 80111A68 0010E9A8  7D 89 03 A6 */	mtctr r12
/* 80111A6C 0010E9AC  4E 80 04 21 */	bctrl 
/* 80111A70 0010E9B0  7F A4 EB 78 */	mr r4, r29
/* 80111A74 0010E9B4  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80111A78 0010E9B8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111A7C 0010E9BC  38 61 00 74 */	addi r3, r1, 0x74
/* 80111A80 0010E9C0  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80111A84 0010E9C4  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80111A88 0010E9C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111A8C 0010E9CC  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80111A90 0010E9D0  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80111A94 0010E9D4  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80111A98 0010E9D8  7D 89 03 A6 */	mtctr r12
/* 80111A9C 0010E9DC  4E 80 04 21 */	bctrl 
/* 80111AA0 0010E9E0  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80111AA4 0010E9E4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80111AA8 0010E9E8  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80111AAC 0010E9EC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80111AB0 0010E9F0  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80111AB4 0010E9F4  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80111AB8 0010E9F8  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80111ABC 0010E9FC  EC 21 28 28 */	fsubs f1, f1, f5
/* 80111AC0 0010EA00  EC 40 18 28 */	fsubs f2, f0, f3
/* 80111AC4 0010EA04  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80111AC8 0010EA08  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80111ACC 0010EA0C  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80111AD0 0010EA10  4B F2 36 39 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80111AD4 0010EA14  48 30 00 FD */	bl roundAng__Ff
/* 80111AD8 0010EA18  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111ADC 0010EA1C  FF 40 08 90 */	fmr f26, f1
/* 80111AE0 0010EA20  7F A3 EB 78 */	mr r3, r29
/* 80111AE4 0010EA24  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80111AE8 0010EA28  7D 89 03 A6 */	mtctr r12
/* 80111AEC 0010EA2C  4E 80 04 21 */	bctrl 
/* 80111AF0 0010EA30  FC 40 08 90 */	fmr f2, f1
/* 80111AF4 0010EA34  FC 20 D0 90 */	fmr f1, f26
/* 80111AF8 0010EA38  48 30 01 05 */	bl angDist__Fff
/* 80111AFC 0010EA3C  7F A4 EB 78 */	mr r4, r29
/* 80111B00 0010EA40  FF 80 08 90 */	fmr f28, f1
/* 80111B04 0010EA44  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111B08 0010EA48  38 61 00 14 */	addi r3, r1, 0x14
/* 80111B0C 0010EA4C  3B C0 00 00 */	li r30, 0
/* 80111B10 0010EA50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111B14 0010EA54  7D 89 03 A6 */	mtctr r12
/* 80111B18 0010EA58  4E 80 04 21 */	bctrl 
/* 80111B1C 0010EA5C  7F E4 FB 78 */	mr r4, r31
/* 80111B20 0010EA60  38 61 00 08 */	addi r3, r1, 8
/* 80111B24 0010EA64  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111B28 0010EA68  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 80111B2C 0010EA6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111B30 0010EA70  7D 89 03 A6 */	mtctr r12
/* 80111B34 0010EA74  4E 80 04 21 */	bctrl 
/* 80111B38 0010EA78  7F A4 EB 78 */	mr r4, r29
/* 80111B3C 0010EA7C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80111B40 0010EA80  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111B44 0010EA84  38 61 00 2C */	addi r3, r1, 0x2c
/* 80111B48 0010EA88  EF 40 E8 28 */	fsubs f26, f0, f29
/* 80111B4C 0010EA8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111B50 0010EA90  7D 89 03 A6 */	mtctr r12
/* 80111B54 0010EA94  4E 80 04 21 */	bctrl 
/* 80111B58 0010EA98  7F E4 FB 78 */	mr r4, r31
/* 80111B5C 0010EA9C  38 61 00 20 */	addi r3, r1, 0x20
/* 80111B60 0010EAA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111B64 0010EAA4  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 80111B68 0010EAA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111B6C 0010EAAC  7D 89 03 A6 */	mtctr r12
/* 80111B70 0010EAB0  4E 80 04 21 */	bctrl 
/* 80111B74 0010EAB4  7F A4 EB 78 */	mr r4, r29
/* 80111B78 0010EAB8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80111B7C 0010EABC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111B80 0010EAC0  38 61 00 44 */	addi r3, r1, 0x44
/* 80111B84 0010EAC4  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80111B88 0010EAC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111B8C 0010EACC  7D 89 03 A6 */	mtctr r12
/* 80111B90 0010EAD0  4E 80 04 21 */	bctrl 
/* 80111B94 0010EAD4  7F E4 FB 78 */	mr r4, r31
/* 80111B98 0010EAD8  38 61 00 38 */	addi r3, r1, 0x38
/* 80111B9C 0010EADC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111BA0 0010EAE0  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 80111BA4 0010EAE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111BA8 0010EAE8  7D 89 03 A6 */	mtctr r12
/* 80111BAC 0010EAEC  4E 80 04 21 */	bctrl 
/* 80111BB0 0010EAF0  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 80111BB4 0010EAF4  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80111BB8 0010EAF8  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80111BBC 0010EAFC  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80111BC0 0010EB00  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 80111BC4 0010EB04  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80111BC8 0010EB08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111BCC 0010EB0C  40 80 00 2C */	bge .L_80111BF8
/* 80111BD0 0010EB10  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 80111BD4 0010EB14  FC 40 E2 10 */	fabs f2, f28
/* 80111BD8 0010EB18  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80111BDC 0010EB1C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80111BE0 0010EB20  FC 40 10 18 */	frsp f2, f2
/* 80111BE4 0010EB24  EC 01 00 32 */	fmuls f0, f1, f0
/* 80111BE8 0010EB28  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111BEC 0010EB2C  4C 40 13 82 */	cror 2, 0, 2
/* 80111BF0 0010EB30  40 82 00 08 */	bne .L_80111BF8
/* 80111BF4 0010EB34  3B C0 00 01 */	li r30, 1
.L_80111BF8:
/* 80111BF8 0010EB38  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80111BFC 0010EB3C  41 82 00 24 */	beq .L_80111C20
/* 80111C00 0010EB40  7F 83 E3 78 */	mr r3, r28
/* 80111C04 0010EB44  7F A4 EB 78 */	mr r4, r29
/* 80111C08 0010EB48  81 9C 00 00 */	lwz r12, 0(r28)
/* 80111C0C 0010EB4C  38 A0 00 04 */	li r5, 4
/* 80111C10 0010EB50  38 C0 00 00 */	li r6, 0
/* 80111C14 0010EB54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111C18 0010EB58  7D 89 03 A6 */	mtctr r12
/* 80111C1C 0010EB5C  4E 80 04 21 */	bctrl 
.L_80111C20:
/* 80111C20 0010EB60  C0 3D 02 00 */	lfs f1, 0x200(r29)
/* 80111C24 0010EB64  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111C28 0010EB68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111C2C 0010EB6C  4C 40 13 82 */	cror 2, 0, 2
/* 80111C30 0010EB70  40 82 00 24 */	bne .L_80111C54
/* 80111C34 0010EB74  7F 83 E3 78 */	mr r3, r28
/* 80111C38 0010EB78  7F A4 EB 78 */	mr r4, r29
/* 80111C3C 0010EB7C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80111C40 0010EB80  38 A0 00 01 */	li r5, 1
/* 80111C44 0010EB84  38 C0 00 00 */	li r6, 0
/* 80111C48 0010EB88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111C4C 0010EB8C  7D 89 03 A6 */	mtctr r12
/* 80111C50 0010EB90  4E 80 04 21 */	bctrl 
.L_80111C54:
/* 80111C54 0010EB94  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80111C58 0010EB98  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80111C5C 0010EB9C  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80111C60 0010EBA0  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80111C64 0010EBA4  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80111C68 0010EBA8  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80111C6C 0010EBAC  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80111C70 0010EBB0  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80111C74 0010EBB4  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80111C78 0010EBB8  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80111C7C 0010EBBC  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80111C80 0010EBC0  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80111C84 0010EBC4  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80111C88 0010EBC8  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80111C8C 0010EBCC  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80111C90 0010EBD0  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80111C94 0010EBD4  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 80111C98 0010EBD8  7C 08 03 A6 */	mtlr r0
/* 80111C9C 0010EBDC  38 21 01 10 */	addi r1, r1, 0x110
/* 80111CA0 0010EBE0  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBase, global
/* 80111CA4 0010EBE4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase15StateTurnToHomeFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase11StateGoHomeFi, global
/* 80111CA8 0010EBE8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80111CAC 0010EBEC  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 80111CB0 0010EBF0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80111CB4 0010EBF4  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase11StateGoHome@ha
/* 80111CB8 0010EBF8  90 03 00 00 */	stw r0, 0(r3)
/* 80111CBC 0010EBFC  38 E0 00 00 */	li r7, 0
/* 80111CC0 0010EC00  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 80111CC4 0010EC04  38 A5 B9 C8 */	addi r5, r5, __vt__Q34Game12KochappyBase11StateGoHome@l
/* 80111CC8 0010EC08  90 83 00 04 */	stw r4, 4(r3)
/* 80111CCC 0010EC0C  38 02 96 E4 */	addi r0, r2, lbl_80517A44@sda21
/* 80111CD0 0010EC10  90 E3 00 08 */	stw r7, 8(r3)
/* 80111CD4 0010EC14  90 C3 00 00 */	stw r6, 0(r3)
/* 80111CD8 0010EC18  90 A3 00 00 */	stw r5, 0(r3)
/* 80111CDC 0010EC1C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80111CE0 0010EC20  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase11StateGoHomeFi

.fn init__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80111CE4 0010EC24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111CE8 0010EC28  7C 08 02 A6 */	mflr r0
/* 80111CEC 0010EC2C  C0 22 96 C8 */	lfs f1, lbl_80517A28@sda21(r2)
/* 80111CF0 0010EC30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111CF4 0010EC34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111CF8 0010EC38  7C 9F 23 78 */	mr r31, r4
/* 80111CFC 0010EC3C  93 C1 00 08 */	stw r30, 8(r1)
/* 80111D00 0010EC40  7C 7E 1B 78 */	mr r30, r3
/* 80111D04 0010EC44  7F E3 FB 78 */	mr r3, r31
/* 80111D08 0010EC48  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111D0C 0010EC4C  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 80111D10 0010EC50  7D 89 03 A6 */	mtctr r12
/* 80111D14 0010EC54  4E 80 04 21 */	bctrl 
/* 80111D18 0010EC58  7F E3 FB 78 */	mr r3, r31
/* 80111D1C 0010EC5C  38 80 00 03 */	li r4, 3
/* 80111D20 0010EC60  38 A0 00 00 */	li r5, 0
/* 80111D24 0010EC64  4B FF 32 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80111D28 0010EC68  38 00 FF FF */	li r0, -1
/* 80111D2C 0010EC6C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80111D30 0010EC70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111D34 0010EC74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80111D38 0010EC78  83 C1 00 08 */	lwz r30, 8(r1)
/* 80111D3C 0010EC7C  7C 08 03 A6 */	mtlr r0
/* 80111D40 0010EC80  38 21 00 10 */	addi r1, r1, 0x10
/* 80111D44 0010EC84  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBase, global
/* 80111D48 0010EC88  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80111D4C 0010EC8C  7C 08 02 A6 */	mflr r0
/* 80111D50 0010EC90  90 01 01 14 */	stw r0, 0x114(r1)
/* 80111D54 0010EC94  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80111D58 0010EC98  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80111D5C 0010EC9C  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80111D60 0010ECA0  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80111D64 0010ECA4  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80111D68 0010ECA8  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80111D6C 0010ECAC  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80111D70 0010ECB0  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80111D74 0010ECB4  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80111D78 0010ECB8  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80111D7C 0010ECBC  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80111D80 0010ECC0  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80111D84 0010ECC4  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80111D88 0010ECC8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80111D8C 0010ECCC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80111D90 0010ECD0  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 80111D94 0010ECD4  7C 9F 23 78 */	mr r31, r4
/* 80111D98 0010ECD8  7C 7E 1B 78 */	mr r30, r3
/* 80111D9C 0010ECDC  7F E3 FB 78 */	mr r3, r31
/* 80111DA0 0010ECE0  38 80 00 01 */	li r4, 1
/* 80111DA4 0010ECE4  48 00 28 B5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80111DA8 0010ECE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80111DAC 0010ECEC  41 82 00 28 */	beq .L_80111DD4
/* 80111DB0 0010ECF0  7F C3 F3 78 */	mr r3, r30
/* 80111DB4 0010ECF4  7F E4 FB 78 */	mr r4, r31
/* 80111DB8 0010ECF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80111DBC 0010ECFC  38 A0 00 05 */	li r5, 5
/* 80111DC0 0010ED00  38 C0 00 00 */	li r6, 0
/* 80111DC4 0010ED04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80111DC8 0010ED08  7D 89 03 A6 */	mtctr r12
/* 80111DCC 0010ED0C  4E 80 04 21 */	bctrl 
/* 80111DD0 0010ED10  48 00 03 34 */	b .L_80112104
.L_80111DD4:
/* 80111DD4 0010ED14  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 80111DD8 0010ED18  7F E3 FB 78 */	mr r3, r31
/* 80111DDC 0010ED1C  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 80111DE0 0010ED20  38 81 00 8C */	addi r4, r1, 0x8c
/* 80111DE4 0010ED24  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80111DE8 0010ED28  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80111DEC 0010ED2C  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 80111DF0 0010ED30  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 80111DF4 0010ED34  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80111DF8 0010ED38  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 80111DFC 0010ED3C  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80111E00 0010ED40  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80111E04 0010ED44  48 00 37 D9 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
/* 80111E08 0010ED48  7F E4 FB 78 */	mr r4, r31
/* 80111E0C 0010ED4C  38 61 00 80 */	addi r3, r1, 0x80
/* 80111E10 0010ED50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111E14 0010ED54  C3 5F 01 98 */	lfs f26, 0x198(r31)
/* 80111E18 0010ED58  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111E1C 0010ED5C  C3 7F 01 9C */	lfs f27, 0x19c(r31)
/* 80111E20 0010ED60  C3 9F 01 A0 */	lfs f28, 0x1a0(r31)
/* 80111E24 0010ED64  7D 89 03 A6 */	mtctr r12
/* 80111E28 0010ED68  4E 80 04 21 */	bctrl 
/* 80111E2C 0010ED6C  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80111E30 0010ED70  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 80111E34 0010ED74  EC 60 D8 28 */	fsubs f3, f0, f27
/* 80111E38 0010ED78  C0 21 00 88 */	lfs f1, 0x88(r1)
/* 80111E3C 0010ED7C  EC 42 D0 28 */	fsubs f2, f2, f26
/* 80111E40 0010ED80  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111E44 0010ED84  EC 21 E0 28 */	fsubs f1, f1, f28
/* 80111E48 0010ED88  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80111E4C 0010ED8C  EC 81 00 72 */	fmuls f4, f1, f1
/* 80111E50 0010ED90  EC 22 18 BA */	fmadds f1, f2, f2, f3
/* 80111E54 0010ED94  EC 24 08 2A */	fadds f1, f4, f1
/* 80111E58 0010ED98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111E5C 0010ED9C  40 81 00 14 */	ble .L_80111E70
/* 80111E60 0010EDA0  40 81 00 14 */	ble .L_80111E74
/* 80111E64 0010EDA4  FC 00 08 34 */	frsqrte f0, f1
/* 80111E68 0010EDA8  EC 20 00 72 */	fmuls f1, f0, f1
/* 80111E6C 0010EDAC  48 00 00 08 */	b .L_80111E74
.L_80111E70:
/* 80111E70 0010EDB0  FC 20 00 90 */	fmr f1, f0
.L_80111E74:
/* 80111E74 0010EDB4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80111E78 0010EDB8  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 80111E7C 0010EDBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111E80 0010EDC0  40 80 00 24 */	bge .L_80111EA4
/* 80111E84 0010EDC4  7F E3 FB 78 */	mr r3, r31
/* 80111E88 0010EDC8  4B FF 34 19 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80111E8C 0010EDCC  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 80111E90 0010EDD0  38 00 00 00 */	li r0, 0
/* 80111E94 0010EDD4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80111E98 0010EDD8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80111E9C 0010EDDC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80111EA0 0010EDE0  90 1E 00 10 */	stw r0, 0x10(r30)
.L_80111EA4:
/* 80111EA4 0010EDE4  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 80111EA8 0010EDE8  7F E3 FB 78 */	mr r3, r31
/* 80111EAC 0010EDEC  38 80 00 00 */	li r4, 0
/* 80111EB0 0010EDF0  38 A0 00 00 */	li r5, 0
/* 80111EB4 0010EDF4  C0 27 04 9C */	lfs f1, 0x49c(r7)
/* 80111EB8 0010EDF8  38 C0 00 00 */	li r6, 0
/* 80111EBC 0010EDFC  C0 47 04 4C */	lfs f2, 0x44c(r7)
/* 80111EC0 0010EE00  48 00 11 91 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80111EC4 0010EE04  28 03 00 00 */	cmplwi r3, 0
/* 80111EC8 0010EE08  41 82 01 FC */	beq .L_801120C4
/* 80111ECC 0010EE0C  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80111ED0 0010EE10  38 61 00 68 */	addi r3, r1, 0x68
/* 80111ED4 0010EE14  83 BF 02 30 */	lwz r29, 0x230(r31)
/* 80111ED8 0010EE18  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80111EDC 0010EE1C  7F A4 EB 78 */	mr r4, r29
/* 80111EE0 0010EE20  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111EE4 0010EE24  C3 C5 05 8C */	lfs f30, 0x58c(r5)
/* 80111EE8 0010EE28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111EEC 0010EE2C  C3 E5 05 64 */	lfs f31, 0x564(r5)
/* 80111EF0 0010EE30  7D 89 03 A6 */	mtctr r12
/* 80111EF4 0010EE34  4E 80 04 21 */	bctrl 
/* 80111EF8 0010EE38  7F E4 FB 78 */	mr r4, r31
/* 80111EFC 0010EE3C  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 80111F00 0010EE40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111F04 0010EE44  38 61 00 74 */	addi r3, r1, 0x74
/* 80111F08 0010EE48  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80111F0C 0010EE4C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80111F10 0010EE50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111F14 0010EE54  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80111F18 0010EE58  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80111F1C 0010EE5C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80111F20 0010EE60  7D 89 03 A6 */	mtctr r12
/* 80111F24 0010EE64  4E 80 04 21 */	bctrl 
/* 80111F28 0010EE68  C0 A1 00 74 */	lfs f5, 0x74(r1)
/* 80111F2C 0010EE6C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80111F30 0010EE70  C0 61 00 7C */	lfs f3, 0x7c(r1)
/* 80111F34 0010EE74  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80111F38 0010EE78  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 80111F3C 0010EE7C  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80111F40 0010EE80  C0 81 00 78 */	lfs f4, 0x78(r1)
/* 80111F44 0010EE84  EC 21 28 28 */	fsubs f1, f1, f5
/* 80111F48 0010EE88  EC 40 18 28 */	fsubs f2, f0, f3
/* 80111F4C 0010EE8C  D0 A1 00 5C */	stfs f5, 0x5c(r1)
/* 80111F50 0010EE90  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 80111F54 0010EE94  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 80111F58 0010EE98  4B F2 31 B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80111F5C 0010EE9C  48 2F FC 75 */	bl roundAng__Ff
/* 80111F60 0010EEA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111F64 0010EEA4  FF 40 08 90 */	fmr f26, f1
/* 80111F68 0010EEA8  7F E3 FB 78 */	mr r3, r31
/* 80111F6C 0010EEAC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80111F70 0010EEB0  7D 89 03 A6 */	mtctr r12
/* 80111F74 0010EEB4  4E 80 04 21 */	bctrl 
/* 80111F78 0010EEB8  FC 40 08 90 */	fmr f2, f1
/* 80111F7C 0010EEBC  FC 20 D0 90 */	fmr f1, f26
/* 80111F80 0010EEC0  48 2F FC 7D */	bl angDist__Fff
/* 80111F84 0010EEC4  7F E4 FB 78 */	mr r4, r31
/* 80111F88 0010EEC8  FF 80 08 90 */	fmr f28, f1
/* 80111F8C 0010EECC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111F90 0010EED0  38 61 00 14 */	addi r3, r1, 0x14
/* 80111F94 0010EED4  3B 80 00 00 */	li r28, 0
/* 80111F98 0010EED8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111F9C 0010EEDC  7D 89 03 A6 */	mtctr r12
/* 80111FA0 0010EEE0  4E 80 04 21 */	bctrl 
/* 80111FA4 0010EEE4  7F A4 EB 78 */	mr r4, r29
/* 80111FA8 0010EEE8  38 61 00 08 */	addi r3, r1, 8
/* 80111FAC 0010EEEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111FB0 0010EEF0  C3 A1 00 14 */	lfs f29, 0x14(r1)
/* 80111FB4 0010EEF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111FB8 0010EEF8  7D 89 03 A6 */	mtctr r12
/* 80111FBC 0010EEFC  4E 80 04 21 */	bctrl 
/* 80111FC0 0010EF00  7F E4 FB 78 */	mr r4, r31
/* 80111FC4 0010EF04  C0 01 00 08 */	lfs f0, 8(r1)
/* 80111FC8 0010EF08  81 9F 00 00 */	lwz r12, 0(r31)
/* 80111FCC 0010EF0C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80111FD0 0010EF10  EF 40 E8 28 */	fsubs f26, f0, f29
/* 80111FD4 0010EF14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111FD8 0010EF18  7D 89 03 A6 */	mtctr r12
/* 80111FDC 0010EF1C  4E 80 04 21 */	bctrl 
/* 80111FE0 0010EF20  7F A4 EB 78 */	mr r4, r29
/* 80111FE4 0010EF24  38 61 00 20 */	addi r3, r1, 0x20
/* 80111FE8 0010EF28  81 9D 00 00 */	lwz r12, 0(r29)
/* 80111FEC 0010EF2C  C3 A1 00 30 */	lfs f29, 0x30(r1)
/* 80111FF0 0010EF30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111FF4 0010EF34  7D 89 03 A6 */	mtctr r12
/* 80111FF8 0010EF38  4E 80 04 21 */	bctrl 
/* 80111FFC 0010EF3C  7F E4 FB 78 */	mr r4, r31
/* 80112000 0010EF40  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80112004 0010EF44  81 9F 00 00 */	lwz r12, 0(r31)
/* 80112008 0010EF48  38 61 00 44 */	addi r3, r1, 0x44
/* 8011200C 0010EF4C  EF 60 E8 28 */	fsubs f27, f0, f29
/* 80112010 0010EF50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80112014 0010EF54  7D 89 03 A6 */	mtctr r12
/* 80112018 0010EF58  4E 80 04 21 */	bctrl 
/* 8011201C 0010EF5C  7F A4 EB 78 */	mr r4, r29
/* 80112020 0010EF60  38 61 00 38 */	addi r3, r1, 0x38
/* 80112024 0010EF64  81 9D 00 00 */	lwz r12, 0(r29)
/* 80112028 0010EF68  C3 A1 00 4C */	lfs f29, 0x4c(r1)
/* 8011202C 0010EF6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80112030 0010EF70  7D 89 03 A6 */	mtctr r12
/* 80112034 0010EF74  4E 80 04 21 */	bctrl 
/* 80112038 0010EF78  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 8011203C 0010EF7C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80112040 0010EF80  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 80112044 0010EF84  EC 42 E8 28 */	fsubs f2, f2, f29
/* 80112048 0010EF88  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 8011204C 0010EF8C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80112050 0010EF90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112054 0010EF94  40 80 00 2C */	bge .L_80112080
/* 80112058 0010EF98  C0 02 96 A8 */	lfs f0, lbl_80517A08@sda21(r2)
/* 8011205C 0010EF9C  FC 40 E2 10 */	fabs f2, f28
/* 80112060 0010EFA0  C0 22 96 A4 */	lfs f1, lbl_80517A04@sda21(r2)
/* 80112064 0010EFA4  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80112068 0010EFA8  FC 40 10 18 */	frsp f2, f2
/* 8011206C 0010EFAC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80112070 0010EFB0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112074 0010EFB4  4C 40 13 82 */	cror 2, 0, 2
/* 80112078 0010EFB8  40 82 00 08 */	bne .L_80112080
/* 8011207C 0010EFBC  3B 80 00 01 */	li r28, 1
.L_80112080:
/* 80112080 0010EFC0  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80112084 0010EFC4  41 82 00 30 */	beq .L_801120B4
/* 80112088 0010EFC8  7F E3 FB 78 */	mr r3, r31
/* 8011208C 0010EFCC  4B FF 32 15 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80112090 0010EFD0  7F E3 FB 78 */	mr r3, r31
/* 80112094 0010EFD4  C0 22 96 BC */	lfs f1, lbl_80517A1C@sda21(r2)
/* 80112098 0010EFD8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8011209C 0010EFDC  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 801120A0 0010EFE0  7D 89 03 A6 */	mtctr r12
/* 801120A4 0010EFE4  4E 80 04 21 */	bctrl 
/* 801120A8 0010EFE8  38 00 00 04 */	li r0, 4
/* 801120AC 0010EFEC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801120B0 0010EFF0  48 00 00 14 */	b .L_801120C4
.L_801120B4:
/* 801120B4 0010EFF4  7F E3 FB 78 */	mr r3, r31
/* 801120B8 0010EFF8  4B FF 31 E9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 801120BC 0010EFFC  38 00 00 03 */	li r0, 3
/* 801120C0 0010F000  90 1E 00 10 */	stw r0, 0x10(r30)
.L_801120C4:
/* 801120C4 0010F004  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 801120C8 0010F008  88 03 00 24 */	lbz r0, 0x24(r3)
/* 801120CC 0010F00C  28 00 00 00 */	cmplwi r0, 0
/* 801120D0 0010F010  41 82 00 34 */	beq .L_80112104
/* 801120D4 0010F014  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 801120D8 0010F018  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 801120DC 0010F01C  41 82 00 08 */	beq .L_801120E4
/* 801120E0 0010F020  48 00 00 24 */	b .L_80112104
.L_801120E4:
/* 801120E4 0010F024  7F C3 F3 78 */	mr r3, r30
/* 801120E8 0010F028  7F E4 FB 78 */	mr r4, r31
/* 801120EC 0010F02C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801120F0 0010F030  38 C0 00 00 */	li r6, 0
/* 801120F4 0010F034  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 801120F8 0010F038  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801120FC 0010F03C  7D 89 03 A6 */	mtctr r12
/* 80112100 0010F040  4E 80 04 21 */	bctrl 
.L_80112104:
/* 80112104 0010F044  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80112108 0010F048  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 8011210C 0010F04C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112110 0010F050  4C 40 13 82 */	cror 2, 0, 2
/* 80112114 0010F054  40 82 00 24 */	bne .L_80112138
/* 80112118 0010F058  7F C3 F3 78 */	mr r3, r30
/* 8011211C 0010F05C  7F E4 FB 78 */	mr r4, r31
/* 80112120 0010F060  81 9E 00 00 */	lwz r12, 0(r30)
/* 80112124 0010F064  38 A0 00 01 */	li r5, 1
/* 80112128 0010F068  38 C0 00 00 */	li r6, 0
/* 8011212C 0010F06C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80112130 0010F070  7D 89 03 A6 */	mtctr r12
/* 80112134 0010F074  4E 80 04 21 */	bctrl 
.L_80112138:
/* 80112138 0010F078  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 8011213C 0010F07C  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80112140 0010F080  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80112144 0010F084  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80112148 0010F088  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 8011214C 0010F08C  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80112150 0010F090  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80112154 0010F094  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80112158 0010F098  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 8011215C 0010F09C  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80112160 0010F0A0  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80112164 0010F0A4  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80112168 0010F0A8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8011216C 0010F0AC  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80112170 0010F0B0  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80112174 0010F0B4  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80112178 0010F0B8  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 8011217C 0010F0BC  7C 08 03 A6 */	mtlr r0
/* 80112180 0010F0C0  38 21 01 10 */	addi r1, r1, 0x110
/* 80112184 0010F0C4  4E 80 00 20 */	blr 
.endfn exec__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBase

.fn cleanup__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBase, global
/* 80112188 0010F0C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011218C 0010F0CC  7C 08 02 A6 */	mflr r0
/* 80112190 0010F0D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112194 0010F0D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112198 0010F0D8  7C 9F 23 78 */	mr r31, r4
/* 8011219C 0010F0DC  7F E3 FB 78 */	mr r3, r31
/* 801121A0 0010F0E0  4B FF 51 FD */	bl resetAnimSpeed__Q24Game9EnemyBaseFv
/* 801121A4 0010F0E4  C0 02 96 80 */	lfs f0, lbl_805179E0@sda21(r2)
/* 801121A8 0010F0E8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801121AC 0010F0EC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 801121B0 0010F0F0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 801121B4 0010F0F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801121B8 0010F0F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801121BC 0010F0FC  7C 08 03 A6 */	mtlr r0
/* 801121C0 0010F100  38 21 00 10 */	addi r1, r1, 0x10
/* 801121C4 0010F104  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game12KochappyBase11StateGoHomeFPQ24Game9EnemyBase

.fn __ct__Q34Game12KochappyBase9StateDemoFi, global
/* 801121C8 0010F108  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 801121CC 0010F10C  3C C0 80 4B */	lis r6, __vt__Q34Game12KochappyBase5State@ha
/* 801121D0 0010F110  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 801121D4 0010F114  3C A0 80 4B */	lis r5, __vt__Q34Game12KochappyBase9StateDemo@ha
/* 801121D8 0010F118  90 03 00 00 */	stw r0, 0(r3)
/* 801121DC 0010F11C  38 E0 00 00 */	li r7, 0
/* 801121E0 0010F120  38 C6 BB 0C */	addi r6, r6, __vt__Q34Game12KochappyBase5State@l
/* 801121E4 0010F124  38 A5 B9 A4 */	addi r5, r5, __vt__Q34Game12KochappyBase9StateDemo@l
/* 801121E8 0010F128  90 83 00 04 */	stw r4, 4(r3)
/* 801121EC 0010F12C  38 02 96 EC */	addi r0, r2, lbl_80517A4C@sda21
/* 801121F0 0010F130  90 E3 00 08 */	stw r7, 8(r3)
/* 801121F4 0010F134  90 C3 00 00 */	stw r6, 0(r3)
/* 801121F8 0010F138  90 A3 00 00 */	stw r5, 0(r3)
/* 801121FC 0010F13C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80112200 0010F140  4E 80 00 20 */	blr 
.endfn __ct__Q34Game12KochappyBase9StateDemoFi

.fn init__Q34Game12KochappyBase9StateDemoFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80112204 0010F144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112208 0010F148  7C 08 02 A6 */	mflr r0
/* 8011220C 0010F14C  7C 83 23 78 */	mr r3, r4
/* 80112210 0010F150  38 80 00 00 */	li r4, 0
/* 80112214 0010F154  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112218 0010F158  48 02 8E D9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 8011221C 0010F15C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80112220 0010F160  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80112224 0010F164  81 83 00 00 */	lwz r12, 0(r3)
/* 80112228 0010F168  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8011222C 0010F16C  7D 89 03 A6 */	mtctr r12
/* 80112230 0010F170  4E 80 04 21 */	bctrl 
/* 80112234 0010F174  28 03 00 03 */	cmplwi r3, 3
/* 80112238 0010F178  41 82 00 38 */	beq .L_80112270
/* 8011223C 0010F17C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80112240 0010F180  38 80 00 25 */	li r4, 0x25
/* 80112244 0010F184  48 0D 51 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80112248 0010F188  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011224C 0010F18C  40 82 00 24 */	bne .L_80112270
/* 80112250 0010F190  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80112254 0010F194  38 80 00 03 */	li r4, 3
/* 80112258 0010F198  C0 22 96 F4 */	lfs f1, lbl_80517A54@sda21(r2)
/* 8011225C 0010F19C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80112260 0010F1A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80112264 0010F1A4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80112268 0010F1A8  7D 89 03 A6 */	mtctr r12
/* 8011226C 0010F1AC  4E 80 04 21 */	bctrl 
.L_80112270:
/* 80112270 0010F1B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112274 0010F1B4  7C 08 03 A6 */	mtlr r0
/* 80112278 0010F1B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011227C 0010F1BC  4E 80 00 20 */	blr 
.endfn init__Q34Game12KochappyBase9StateDemoFPQ24Game9EnemyBasePQ24Game8StateArg

.fn enableTimer__Q24Game15BaseGameSectionFfUl, weak
/* 80112280 0010F1C0  4E 80 00 20 */	blr 
.endfn enableTimer__Q24Game15BaseGameSectionFfUl

.fn getTimerType__Q24Game15BaseGameSectionFv, weak
/* 80112284 0010F1C4  38 60 00 00 */	li r3, 0
/* 80112288 0010F1C8  4E 80 00 20 */	blr 
.endfn getTimerType__Q24Game15BaseGameSectionFv

.fn __sinit_kochappyState_cpp, local
/* 8011228C 0010F1CC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80112290 0010F1D0  38 00 FF FF */	li r0, -1
/* 80112294 0010F1D4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80112298 0010F1D8  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8011229C 0010F1DC  90 0D 91 F0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801122A0 0010F1E0  D4 03 B9 98 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801122A4 0010F1E4  D0 0D 91 F4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801122A8 0010F1E8  D0 03 00 04 */	stfs f0, 4(r3)
/* 801122AC 0010F1EC  D0 03 00 08 */	stfs f0, 8(r3)
/* 801122B0 0010F1F0  4E 80 00 20 */	blr 
.endfn __sinit_kochappyState_cpp
