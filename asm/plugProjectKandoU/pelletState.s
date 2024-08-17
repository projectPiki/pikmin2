.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_pelletState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047F490, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047F490
.balign 4
.obj lbl_8047F49C, local
	.asciz "pelletState"
.endobj lbl_8047F49C
.balign 4
.obj lbl_8047F4A8, local
	.asciz "pelletState.cpp"
.endobj lbl_8047F4A8
.balign 4
.obj lbl_8047F4B8, local
	.asciz "P2Assert"
.endobj lbl_8047F4B8
.balign 4
.obj lbl_8047F4C4, local
	.asciz "not onyon %d\n"
.endobj lbl_8047F4C4
.balign 4
.obj lbl_8047F4D4, local
	.asciz "s11_dope_first_r"
.endobj lbl_8047F4D4
.balign 4
.obj lbl_8047F4E8, local
	.asciz "s11_dopebin_first_r"
.endobj lbl_8047F4E8
.balign 4
.obj lbl_8047F4FC, local
	.asciz "s11_dope_first_b"
.endobj lbl_8047F4FC
.balign 4
.obj lbl_8047F510, local
	.asciz "s11_dopebin_first_b"
.endobj lbl_8047F510
.balign 4
.obj lbl_8047F524, local
	.asciz "s10_suck_treasure"
.endobj lbl_8047F524
.balign 4
.obj lbl_8047F538, local
	.asciz "s17_suck_equipment"
.endobj lbl_8047F538
.balign 4
.obj lbl_8047F54C, local
	.asciz "suck_ufo"
.endobj lbl_8047F54C
.balign 4
.obj lbl_8047F558, local
	.asciz "s22_cv_suck_treasure"
.endobj lbl_8047F558
.balign 4
.obj lbl_8047F570, local
	.asciz "s22_cv_suck_equipment"
.endobj lbl_8047F570
.balign 4
.obj lbl_8047F588, local
	.asciz "x08_cv_suck_carcass"
.endobj lbl_8047F588
.balign 4
.obj lbl_8047F59C, local
	.asciz "x18_exp_pellet"
.endobj lbl_8047F59C
.balign 4
.obj lbl_8047F5AC, local
	.asciz "Creature"
.endobj lbl_8047F5AC
.balign 4
.obj lbl_8047F5B8, local
	.asciz "PSGame.h"
.endobj lbl_8047F5B8
.balign 4
.obj lbl_8047F5C4, local
	.asciz "PSScene.h"
.endobj lbl_8047F5C4
.balign 4
.obj lbl_8047F5D0, local
	.asciz "get sound scene at\ninvalid timming\n"
.endobj lbl_8047F5D0
.balign 4
.obj lbl_8047F5F4, local
	.asciz "PSMainSide_Scene.h"
.endobj lbl_8047F5F4
.balign 4
.obj lbl_8047F608, local
	.asciz "ItemHoney::InitArg"
.endobj lbl_8047F608
.balign 4
.obj lbl_8047F61C, local
	.asciz "PelletGoalStateArg"
.endobj lbl_8047F61C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q24Game17PelletReturnState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17PelletReturnStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game17PelletReturnStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game17PelletReturnStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game17PelletReturnState
.obj __vt__Q24Game13PelletUpState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13PelletUpStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game13PelletUpStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game13PelletUpStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game13PelletUpStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game13PelletUpState
.obj __vt__Q24Game16PelletZukanState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game16PelletZukanStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game16PelletZukanStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game16PelletZukanStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game16PelletZukanState
.obj __vt__Q24Game15PelletBuryState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PelletBuryStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game15PelletBuryStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game15PelletBuryStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game15PelletBuryStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game15PelletBuryState
.obj __vt__Q24Game22PelletScaleAppearState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game22PelletScaleAppearStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game22PelletScaleAppearStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game22PelletScaleAppearState
.obj __vt__Q23efx12TTsuyuGrowon, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12TTsuyuGrowon
.obj __vt__Q24Game17PelletAppearState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17PelletAppearStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game17PelletAppearStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game17PelletAppearStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game17PelletAppearStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game17PelletAppearState
.obj __vt__Q24Game15PelletGoalState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game15PelletGoalStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game15PelletGoalStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game15PelletGoalStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game15PelletGoalState
.obj __vt__Q24Game19PelletGoalWaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game19PelletGoalWaitStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game19PelletGoalWaitState
.obj __vt__Q24Game17PelletNormalState, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game17PelletNormalStateFPQ24Game6PelletPQ24Game8StateArg
	.4byte exec__Q24Game17PelletNormalStateFPQ24Game6Pellet
	.4byte cleanup__Q24Game17PelletNormalStateFPQ24Game6Pellet
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game17PelletNormalStateFv
.endobj __vt__Q24Game17PelletNormalState
.obj __vt__Q24Game11PelletState, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg"
	.4byte "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte isBuried__Q24Game11PelletStateFv
	.4byte appeared__Q24Game11PelletStateFv
	.4byte isPickable__Q24Game11PelletStateFv
.endobj __vt__Q24Game11PelletState
.obj "__vt__Q24Game24FSMState<Q24Game6Pellet>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletPQ24Game8StateArg"
	.4byte "exec__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "cleanup__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
.endobj "__vt__Q24Game24FSMState<Q24Game6Pellet>"
.obj __vt__Q24Game9PelletFSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q24Game9PelletFSMFPQ24Game6Pellet
	.4byte "start__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
	.4byte "exec__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
	.4byte "transit__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"
.endobj __vt__Q24Game9PelletFSM

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
.obj lbl_80519188, local
	.float 0.0
.endobj lbl_80519188
.obj lbl_8051918C, local
	.float 1.5
.endobj lbl_8051918C
.obj lbl_80519190, local
	.float 1.0
.endobj lbl_80519190
.balign 4
.obj lbl_80519194, local
	.asciz "key"
.endobj lbl_80519194
.balign 4
.obj lbl_80519198, local
	.asciz "loozy"
.endobj lbl_80519198
.balign 4
.obj lbl_805191A0, local
	.float 128000.0
.endobj lbl_805191A0
.obj lbl_805191A4, local
	.float 90.0
.endobj lbl_805191A4
.obj lbl_805191A8, local
	.float 60.0
.endobj lbl_805191A8
.obj lbl_805191AC, local
	.float -325.9493
.endobj lbl_805191AC
.obj lbl_805191B0, local
	.float 325.9493
.endobj lbl_805191B0
.obj lbl_805191B4, local
	.float 8.0
.endobj lbl_805191B4
.obj lbl_805191B8, local # tau
	.float 6.2831855
.endobj lbl_805191B8
.obj lbl_805191BC, local
	.float 0.03
.endobj lbl_805191BC
.obj lbl_805191C0, local
	.float 720.0
.endobj lbl_805191C0
.balign 4
.obj lbl_805191C4, local
	.asciz "orima"
.endobj lbl_805191C4
.balign 4
.obj lbl_805191CC, local
	.float 30.0
.endobj lbl_805191CC
.obj lbl_805191D0, local
	.float 0.01
.endobj lbl_805191D0
.obj lbl_805191D4, local
	.float 32768.0
.endobj lbl_805191D4
.obj lbl_805191D8, local
	.float 0.62831855
.endobj lbl_805191D8
.obj lbl_805191DC, local
	.float 0.3
.endobj lbl_805191DC
.obj lbl_805191E0, local
	.float 0.4
.endobj lbl_805191E0
.obj lbl_805191E4, local
	.float 1.8
.endobj lbl_805191E4
.obj lbl_805191E8, local
	.float 0.8
.endobj lbl_805191E8
.obj lbl_805191EC, local
	.float 0.7
.endobj lbl_805191EC
.balign 8
.obj lbl_805191F0, local
	.8byte 0x4330000080000000
.endobj lbl_805191F0
.obj lbl_805191F8, local
	.float 0.2
.endobj lbl_805191F8
.obj lbl_805191FC, local
	.float 18.849556
.endobj lbl_805191FC
.obj lbl_80519200, local
	.float 0.1
.endobj lbl_80519200
.obj lbl_80519204, local
	.float 0.05
.endobj lbl_80519204
.obj lbl_80519208, local
	.float 0.6
.endobj lbl_80519208
.obj lbl_8051920C, local # pi
	.float 3.1415927
.endobj lbl_8051920C
.obj lbl_80519210, local
	.float 100.0
.endobj lbl_80519210
.obj lbl_80519214, local
	.float -1000.0
.endobj lbl_80519214
.obj lbl_80519218, local
	.float 10.0
.endobj lbl_80519218
.obj lbl_8051921C, local
	.float 15.0
.endobj lbl_8051921C
.obj lbl_80519220, local
	.float 0.5
.endobj lbl_80519220
.obj lbl_80519224, local
	.float 0.9
.endobj lbl_80519224
.obj lbl_80519228, local
	.float 50.0
.endobj lbl_80519228
.obj lbl_8051922C, local
	.float 0.50000006
.endobj lbl_8051922C
.obj lbl_80519230, local
	.float 0.100000024
.endobj lbl_80519230
.obj lbl_80519234, local
	.float 200.0
.endobj lbl_80519234

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q24Game9PelletFSMFPQ24Game6Pellet, global
/* 801A4310 001A1250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A4314 001A1254  7C 08 02 A6 */	mflr r0
/* 801A4318 001A1258  38 80 00 09 */	li r4, 9
/* 801A431C 001A125C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A4320 001A1260  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A4324 001A1264  7C 7F 1B 78 */	mr r31, r3
/* 801A4328 001A1268  48 00 3B 05 */	bl "create__Q24Game28StateMachine<Q24Game6Pellet>Fi"
/* 801A432C 001A126C  38 60 00 10 */	li r3, 0x10
/* 801A4330 001A1270  4B E7 FB 75 */	bl __nw__FUl
/* 801A4334 001A1274  7C 64 1B 79 */	or. r4, r3, r3
/* 801A4338 001A1278  41 82 00 34 */	beq .L_801A436C
/* 801A433C 001A127C  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A4340 001A1280  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A4344 001A1284  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A4348 001A1288  3C 60 80 4B */	lis r3, __vt__Q24Game17PelletNormalState@ha
/* 801A434C 001A128C  90 04 00 00 */	stw r0, 0(r4)
/* 801A4350 001A1290  38 C0 00 00 */	li r6, 0
/* 801A4354 001A1294  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A4358 001A1298  38 03 51 88 */	addi r0, r3, __vt__Q24Game17PelletNormalState@l
/* 801A435C 001A129C  90 C4 00 04 */	stw r6, 4(r4)
/* 801A4360 001A12A0  90 C4 00 08 */	stw r6, 8(r4)
/* 801A4364 001A12A4  90 A4 00 00 */	stw r5, 0(r4)
/* 801A4368 001A12A8  90 04 00 00 */	stw r0, 0(r4)
.L_801A436C:
/* 801A436C 001A12AC  7F E3 FB 78 */	mr r3, r31
/* 801A4370 001A12B0  48 00 3B 21 */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A4374 001A12B4  38 60 00 40 */	li r3, 0x40
/* 801A4378 001A12B8  4B E7 FB 2D */	bl __nw__FUl
/* 801A437C 001A12BC  7C 64 1B 79 */	or. r4, r3, r3
/* 801A4380 001A12C0  41 82 00 38 */	beq .L_801A43B8
/* 801A4384 001A12C4  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A4388 001A12C8  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A438C 001A12CC  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A4390 001A12D0  3C 60 80 4B */	lis r3, __vt__Q24Game15PelletGoalState@ha
/* 801A4394 001A12D4  90 04 00 00 */	stw r0, 0(r4)
/* 801A4398 001A12D8  38 00 00 01 */	li r0, 1
/* 801A439C 001A12DC  38 C0 00 00 */	li r6, 0
/* 801A43A0 001A12E0  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A43A4 001A12E4  90 04 00 04 */	stw r0, 4(r4)
/* 801A43A8 001A12E8  38 03 51 30 */	addi r0, r3, __vt__Q24Game15PelletGoalState@l
/* 801A43AC 001A12EC  90 C4 00 08 */	stw r6, 8(r4)
/* 801A43B0 001A12F0  90 A4 00 00 */	stw r5, 0(r4)
/* 801A43B4 001A12F4  90 04 00 00 */	stw r0, 0(r4)
.L_801A43B8:
/* 801A43B8 001A12F8  7F E3 FB 78 */	mr r3, r31
/* 801A43BC 001A12FC  48 00 3A D5 */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A43C0 001A1300  38 60 00 10 */	li r3, 0x10
/* 801A43C4 001A1304  4B E7 FA E1 */	bl __nw__FUl
/* 801A43C8 001A1308  7C 64 1B 79 */	or. r4, r3, r3
/* 801A43CC 001A130C  41 82 00 38 */	beq .L_801A4404
/* 801A43D0 001A1310  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A43D4 001A1314  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A43D8 001A1318  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A43DC 001A131C  3C 60 80 4B */	lis r3, __vt__Q24Game15PelletBuryState@ha
/* 801A43E0 001A1320  90 04 00 00 */	stw r0, 0(r4)
/* 801A43E4 001A1324  38 00 00 02 */	li r0, 2
/* 801A43E8 001A1328  38 C0 00 00 */	li r6, 0
/* 801A43EC 001A132C  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A43F0 001A1330  90 04 00 04 */	stw r0, 4(r4)
/* 801A43F4 001A1334  38 03 50 98 */	addi r0, r3, __vt__Q24Game15PelletBuryState@l
/* 801A43F8 001A1338  90 C4 00 08 */	stw r6, 8(r4)
/* 801A43FC 001A133C  90 A4 00 00 */	stw r5, 0(r4)
/* 801A4400 001A1340  90 04 00 00 */	stw r0, 0(r4)
.L_801A4404:
/* 801A4404 001A1344  7F E3 FB 78 */	mr r3, r31
/* 801A4408 001A1348  48 00 3A 89 */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A440C 001A134C  38 60 00 10 */	li r3, 0x10
/* 801A4410 001A1350  4B E7 FA 95 */	bl __nw__FUl
/* 801A4414 001A1354  7C 64 1B 79 */	or. r4, r3, r3
/* 801A4418 001A1358  41 82 00 38 */	beq .L_801A4450
/* 801A441C 001A135C  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A4420 001A1360  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A4424 001A1364  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A4428 001A1368  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletUpState@ha
/* 801A442C 001A136C  90 04 00 00 */	stw r0, 0(r4)
/* 801A4430 001A1370  38 00 00 03 */	li r0, 3
/* 801A4434 001A1374  38 C0 00 00 */	li r6, 0
/* 801A4438 001A1378  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A443C 001A137C  90 04 00 04 */	stw r0, 4(r4)
/* 801A4440 001A1380  38 03 50 40 */	addi r0, r3, __vt__Q24Game13PelletUpState@l
/* 801A4444 001A1384  90 C4 00 08 */	stw r6, 8(r4)
/* 801A4448 001A1388  90 A4 00 00 */	stw r5, 0(r4)
/* 801A444C 001A138C  90 04 00 00 */	stw r0, 0(r4)
.L_801A4450:
/* 801A4450 001A1390  7F E3 FB 78 */	mr r3, r31
/* 801A4454 001A1394  48 00 3A 3D */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A4458 001A1398  38 60 00 30 */	li r3, 0x30
/* 801A445C 001A139C  4B E7 FA 49 */	bl __nw__FUl
/* 801A4460 001A13A0  7C 64 1B 79 */	or. r4, r3, r3
/* 801A4464 001A13A4  41 82 00 38 */	beq .L_801A449C
/* 801A4468 001A13A8  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A446C 001A13AC  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A4470 001A13B0  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A4474 001A13B4  3C 60 80 4B */	lis r3, __vt__Q24Game17PelletAppearState@ha
/* 801A4478 001A13B8  90 04 00 00 */	stw r0, 0(r4)
/* 801A447C 001A13BC  38 00 00 04 */	li r0, 4
/* 801A4480 001A13C0  38 C0 00 00 */	li r6, 0
/* 801A4484 001A13C4  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A4488 001A13C8  90 04 00 04 */	stw r0, 4(r4)
/* 801A448C 001A13CC  38 03 51 04 */	addi r0, r3, __vt__Q24Game17PelletAppearState@l
/* 801A4490 001A13D0  90 C4 00 08 */	stw r6, 8(r4)
/* 801A4494 001A13D4  90 A4 00 00 */	stw r5, 0(r4)
/* 801A4498 001A13D8  90 04 00 00 */	stw r0, 0(r4)
.L_801A449C:
/* 801A449C 001A13DC  7F E3 FB 78 */	mr r3, r31
/* 801A44A0 001A13E0  48 00 39 F1 */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A44A4 001A13E4  38 60 00 30 */	li r3, 0x30
/* 801A44A8 001A13E8  4B E7 F9 FD */	bl __nw__FUl
/* 801A44AC 001A13EC  7C 64 1B 79 */	or. r4, r3, r3
/* 801A44B0 001A13F0  41 82 00 38 */	beq .L_801A44E8
/* 801A44B4 001A13F4  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A44B8 001A13F8  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A44BC 001A13FC  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A44C0 001A1400  3C 60 80 4B */	lis r3, __vt__Q24Game22PelletScaleAppearState@ha
/* 801A44C4 001A1404  90 04 00 00 */	stw r0, 0(r4)
/* 801A44C8 001A1408  38 00 00 05 */	li r0, 5
/* 801A44CC 001A140C  38 C0 00 00 */	li r6, 0
/* 801A44D0 001A1410  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A44D4 001A1414  90 04 00 04 */	stw r0, 4(r4)
/* 801A44D8 001A1418  38 03 50 C4 */	addi r0, r3, __vt__Q24Game22PelletScaleAppearState@l
/* 801A44DC 001A141C  90 C4 00 08 */	stw r6, 8(r4)
/* 801A44E0 001A1420  90 A4 00 00 */	stw r5, 0(r4)
/* 801A44E4 001A1424  90 04 00 00 */	stw r0, 0(r4)
.L_801A44E8:
/* 801A44E8 001A1428  7F E3 FB 78 */	mr r3, r31
/* 801A44EC 001A142C  48 00 39 A5 */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A44F0 001A1430  38 60 00 14 */	li r3, 0x14
/* 801A44F4 001A1434  4B E7 F9 B1 */	bl __nw__FUl
/* 801A44F8 001A1438  7C 64 1B 79 */	or. r4, r3, r3
/* 801A44FC 001A143C  41 82 00 38 */	beq .L_801A4534
/* 801A4500 001A1440  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A4504 001A1444  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A4508 001A1448  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A450C 001A144C  3C 60 80 4B */	lis r3, __vt__Q24Game16PelletZukanState@ha
/* 801A4510 001A1450  90 04 00 00 */	stw r0, 0(r4)
/* 801A4514 001A1454  38 00 00 06 */	li r0, 6
/* 801A4518 001A1458  38 C0 00 00 */	li r6, 0
/* 801A451C 001A145C  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A4520 001A1460  90 04 00 04 */	stw r0, 4(r4)
/* 801A4524 001A1464  38 03 50 6C */	addi r0, r3, __vt__Q24Game16PelletZukanState@l
/* 801A4528 001A1468  90 C4 00 08 */	stw r6, 8(r4)
/* 801A452C 001A146C  90 A4 00 00 */	stw r5, 0(r4)
/* 801A4530 001A1470  90 04 00 00 */	stw r0, 0(r4)
.L_801A4534:
/* 801A4534 001A1474  7F E3 FB 78 */	mr r3, r31
/* 801A4538 001A1478  48 00 39 59 */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A453C 001A147C  38 60 00 14 */	li r3, 0x14
/* 801A4540 001A1480  4B E7 F9 65 */	bl __nw__FUl
/* 801A4544 001A1484  7C 64 1B 79 */	or. r4, r3, r3
/* 801A4548 001A1488  41 82 00 38 */	beq .L_801A4580
/* 801A454C 001A148C  3C 60 80 4B */	lis r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A4550 001A1490  3C A0 80 4B */	lis r5, __vt__Q24Game11PelletState@ha
/* 801A4554 001A1494  38 03 51 E0 */	addi r0, r3, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A4558 001A1498  3C 60 80 4B */	lis r3, __vt__Q24Game19PelletGoalWaitState@ha
/* 801A455C 001A149C  90 04 00 00 */	stw r0, 0(r4)
/* 801A4560 001A14A0  38 00 00 07 */	li r0, 7
/* 801A4564 001A14A4  38 C0 00 00 */	li r6, 0
/* 801A4568 001A14A8  38 A5 51 B4 */	addi r5, r5, __vt__Q24Game11PelletState@l
/* 801A456C 001A14AC  90 04 00 04 */	stw r0, 4(r4)
/* 801A4570 001A14B0  38 03 51 5C */	addi r0, r3, __vt__Q24Game19PelletGoalWaitState@l
/* 801A4574 001A14B4  90 C4 00 08 */	stw r6, 8(r4)
/* 801A4578 001A14B8  90 A4 00 00 */	stw r5, 0(r4)
/* 801A457C 001A14BC  90 04 00 00 */	stw r0, 0(r4)
.L_801A4580:
/* 801A4580 001A14C0  7F E3 FB 78 */	mr r3, r31
/* 801A4584 001A14C4  48 00 39 0D */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A4588 001A14C8  38 60 00 40 */	li r3, 0x40
/* 801A458C 001A14CC  4B E7 F9 19 */	bl __nw__FUl
/* 801A4590 001A14D0  7C 64 1B 79 */	or. r4, r3, r3
/* 801A4594 001A14D4  41 82 00 0C */	beq .L_801A45A0
/* 801A4598 001A14D8  48 00 28 35 */	bl __ct__Q24Game17PelletReturnStateFv
/* 801A459C 001A14DC  7C 64 1B 78 */	mr r4, r3
.L_801A45A0:
/* 801A45A0 001A14E0  7F E3 FB 78 */	mr r3, r31
/* 801A45A4 001A14E4  48 00 38 ED */	bl "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"
/* 801A45A8 001A14E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A45AC 001A14EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A45B0 001A14F0  7C 08 03 A6 */	mtlr r0
/* 801A45B4 001A14F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801A45B8 001A14F8  4E 80 00 20 */	blr 
.endfn init__Q24Game9PelletFSMFPQ24Game6Pellet

.fn init__Q24Game17PelletNormalStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A45BC 001A14FC  4E 80 00 20 */	blr 
.endfn init__Q24Game17PelletNormalStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game17PelletNormalStateFPQ24Game6Pellet, global
/* 801A45C0 001A1500  4E 80 00 20 */	blr 
.endfn exec__Q24Game17PelletNormalStateFPQ24Game6Pellet

.fn cleanup__Q24Game17PelletNormalStateFPQ24Game6Pellet, global
/* 801A45C4 001A1504  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17PelletNormalStateFPQ24Game6Pellet

.fn init__Q24Game19PelletGoalWaitStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A45C8 001A1508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A45CC 001A150C  7C 08 02 A6 */	mflr r0
/* 801A45D0 001A1510  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A45D4 001A1514  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A45D8 001A1518  7C BF 2B 79 */	or. r31, r5, r5
/* 801A45DC 001A151C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A45E0 001A1520  7C 9E 23 78 */	mr r30, r4
/* 801A45E4 001A1524  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A45E8 001A1528  7C 7D 1B 78 */	mr r29, r3
/* 801A45EC 001A152C  40 82 00 20 */	bne .L_801A460C
/* 801A45F0 001A1530  3C 60 80 48 */	lis r3, lbl_8047F4A8@ha
/* 801A45F4 001A1534  3C A0 80 48 */	lis r5, lbl_8047F4B8@ha
/* 801A45F8 001A1538  38 63 F4 A8 */	addi r3, r3, lbl_8047F4A8@l
/* 801A45FC 001A153C  38 80 01 B0 */	li r4, 0x1b0
/* 801A4600 001A1540  38 A5 F4 B8 */	addi r5, r5, lbl_8047F4B8@l
/* 801A4604 001A1544  4C C6 31 82 */	crclr 6
/* 801A4608 001A1548  4B E8 60 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A460C:
/* 801A460C 001A154C  80 1F 00 00 */	lwz r0, 0(r31)
/* 801A4610 001A1550  7F C3 F3 78 */	mr r3, r30
/* 801A4614 001A1554  90 1D 00 10 */	stw r0, 0x10(r29)
/* 801A4618 001A1558  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A461C 001A155C  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801A4620 001A1560  7D 89 03 A6 */	mtctr r12
/* 801A4624 001A1564  4E 80 04 21 */	bctrl 
/* 801A4628 001A1568  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A462C 001A156C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A4630 001A1570  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A4634 001A1574  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A4638 001A1578  7C 08 03 A6 */	mtlr r0
/* 801A463C 001A157C  38 21 00 20 */	addi r1, r1, 0x20
/* 801A4640 001A1580  4E 80 00 20 */	blr 
.endfn init__Q24Game19PelletGoalWaitStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet, global
/* 801A4644 001A1584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A4648 001A1588  7C 08 02 A6 */	mflr r0
/* 801A464C 001A158C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A4650 001A1590  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 801A4654 001A1594  28 05 00 00 */	cmplwi r5, 0
/* 801A4658 001A1598  41 82 00 3C */	beq .L_801A4694
/* 801A465C 001A159C  80 05 00 18 */	lwz r0, 0x18(r5)
/* 801A4660 001A15A0  2C 00 00 00 */	cmpwi r0, 0
/* 801A4664 001A15A4  40 82 00 30 */	bne .L_801A4694
/* 801A4668 001A15A8  80 E3 00 10 */	lwz r7, 0x10(r3)
/* 801A466C 001A15AC  3C A0 80 4B */	lis r5, __vt__Q24Game18PelletGoalStateArg@ha
/* 801A4670 001A15B0  38 05 22 44 */	addi r0, r5, __vt__Q24Game18PelletGoalStateArg@l
/* 801A4674 001A15B4  38 C1 00 08 */	addi r6, r1, 8
/* 801A4678 001A15B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A467C 001A15BC  38 A0 00 01 */	li r5, 1
/* 801A4680 001A15C0  90 E1 00 08 */	stw r7, 8(r1)
/* 801A4684 001A15C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4688 001A15C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A468C 001A15CC  7D 89 03 A6 */	mtctr r12
/* 801A4690 001A15D0  4E 80 04 21 */	bctrl 
.L_801A4694:
/* 801A4694 001A15D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A4698 001A15D8  7C 08 03 A6 */	mtlr r0
/* 801A469C 001A15DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801A46A0 001A15E0  4E 80 00 20 */	blr 
.endfn exec__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet

.fn "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg", weak
/* 801A46A4 001A15E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A46A8 001A15E8  7C 08 02 A6 */	mflr r0
/* 801A46AC 001A15EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A46B0 001A15F0  80 63 00 08 */	lwz r3, 8(r3)
/* 801A46B4 001A15F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A46B8 001A15F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A46BC 001A15FC  7D 89 03 A6 */	mtctr r12
/* 801A46C0 001A1600  4E 80 04 21 */	bctrl 
/* 801A46C4 001A1604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A46C8 001A1608  7C 08 03 A6 */	mtlr r0
/* 801A46CC 001A160C  38 21 00 10 */	addi r1, r1, 0x10
/* 801A46D0 001A1610  4E 80 00 20 */	blr 
.endfn "transit__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6PelletiPQ24Game8StateArg"

.fn cleanup__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet, global
/* 801A46D4 001A1614  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game19PelletGoalWaitStateFPQ24Game6Pellet

.fn init__Q24Game15PelletGoalStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A46D8 001A1618  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801A46DC 001A161C  7C 08 02 A6 */	mflr r0
/* 801A46E0 001A1620  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801A46E4 001A1624  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 801A46E8 001A1628  7C BF 2B 78 */	mr r31, r5
/* 801A46EC 001A162C  93 C1 00 98 */	stw r30, 0x98(r1)
/* 801A46F0 001A1630  7C 9E 23 78 */	mr r30, r4
/* 801A46F4 001A1634  93 A1 00 94 */	stw r29, 0x94(r1)
/* 801A46F8 001A1638  7C 7D 1B 78 */	mr r29, r3
/* 801A46FC 001A163C  7F C3 F3 78 */	mr r3, r30
/* 801A4700 001A1640  4B FC 17 25 */	bl clearClaim__Q24Game6PelletFv
/* 801A4704 001A1644  7F C3 F3 78 */	mr r3, r30
/* 801A4708 001A1648  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A470C 001A164C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4710 001A1650  7D 89 03 A6 */	mtctr r12
/* 801A4714 001A1654  4E 80 04 21 */	bctrl 
/* 801A4718 001A1658  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A471C 001A165C  28 00 00 04 */	cmplwi r0, 4
/* 801A4720 001A1660  40 82 00 3C */	bne .L_801A475C
/* 801A4724 001A1664  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4728 001A1668  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801A472C 001A166C  2C 00 00 00 */	cmpwi r0, 0
/* 801A4730 001A1670  40 82 00 2C */	bne .L_801A475C
/* 801A4734 001A1674  7F C3 F3 78 */	mr r3, r30
/* 801A4738 001A1678  4B FC 22 A9 */	bl getConfigIndex__Q24Game6PelletFv
/* 801A473C 001A167C  2C 03 00 00 */	cmpwi r3, 0
/* 801A4740 001A1680  41 80 00 1C */	blt .L_801A475C
/* 801A4744 001A1684  2C 03 00 0C */	cmpwi r3, 0xc
/* 801A4748 001A1688  40 80 00 14 */	bge .L_801A475C
/* 801A474C 001A168C  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 801A4750 001A1690  7C 64 1B 78 */	mr r4, r3
/* 801A4754 001A1694  38 65 00 48 */	addi r3, r5, 0x48
/* 801A4758 001A1698  48 04 19 11 */	bl getItem__Q24Game10OlimarDataFi
.L_801A475C:
/* 801A475C 001A169C  7F C3 F3 78 */	mr r3, r30
/* 801A4760 001A16A0  38 80 00 00 */	li r4, 0
/* 801A4764 001A16A4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A4768 001A16A8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801A476C 001A16AC  7D 89 03 A6 */	mtctr r12
/* 801A4770 001A16B0  4E 80 04 21 */	bctrl 
/* 801A4774 001A16B4  80 1F 00 00 */	lwz r0, 0(r31)
/* 801A4778 001A16B8  3B E0 00 00 */	li r31, 0
/* 801A477C 001A16BC  90 1D 00 10 */	stw r0, 0x10(r29)
/* 801A4780 001A16C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4784 001A16C4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 801A4788 001A16C8  2C 03 00 00 */	cmpwi r3, 0
/* 801A478C 001A16CC  41 82 00 24 */	beq .L_801A47B0
/* 801A4790 001A16D0  2C 03 00 02 */	cmpwi r3, 2
/* 801A4794 001A16D4  38 00 00 00 */	li r0, 0
/* 801A4798 001A16D8  41 82 00 0C */	beq .L_801A47A4
/* 801A479C 001A16DC  2C 03 00 03 */	cmpwi r3, 3
/* 801A47A0 001A16E0  40 82 00 08 */	bne .L_801A47A8
.L_801A47A4:
/* 801A47A4 001A16E4  38 00 00 01 */	li r0, 1
.L_801A47A8:
/* 801A47A8 001A16E8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801A47AC 001A16EC  41 82 00 18 */	beq .L_801A47C4
.L_801A47B0:
/* 801A47B0 001A16F0  7F A3 EB 78 */	mr r3, r29
/* 801A47B4 001A16F4  7F C4 F3 78 */	mr r4, r30
/* 801A47B8 001A16F8  48 00 05 A1 */	bl checkMovie__Q24Game15PelletGoalStateFPQ24Game6Pellet
/* 801A47BC 001A16FC  7C 7F 1B 78 */	mr r31, r3
/* 801A47C0 001A1700  48 00 01 78 */	b .L_801A4938
.L_801A47C4:
/* 801A47C4 001A1704  2C 03 00 01 */	cmpwi r3, 1
/* 801A47C8 001A1708  40 82 01 70 */	bne .L_801A4938
/* 801A47CC 001A170C  88 1E 03 2C */	lbz r0, 0x32c(r30)
/* 801A47D0 001A1710  28 00 00 04 */	cmplwi r0, 4
/* 801A47D4 001A1714  40 82 00 64 */	bne .L_801A4838
/* 801A47D8 001A1718  7F C3 F3 78 */	mr r3, r30
/* 801A47DC 001A171C  38 80 00 00 */	li r4, 0
/* 801A47E0 001A1720  4B F9 72 71 */	bl movie_begin__Q24Game8CreatureFb
/* 801A47E4 001A1724  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A47E8 001A1728  38 80 00 00 */	li r4, 0
/* 801A47EC 001A172C  4B F9 72 65 */	bl movie_begin__Q24Game8CreatureFb
/* 801A47F0 001A1730  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 801A47F4 001A1734  3C 60 80 4B */	lis r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@ha
/* 801A47F8 001A1738  38 04 05 90 */	addi r0, r4, __vt__Q24Game11GameMessage@l
/* 801A47FC 001A173C  38 A0 00 01 */	li r5, 1
/* 801A4800 001A1740  90 01 00 78 */	stw r0, 0x78(r1)
/* 801A4804 001A1744  38 83 61 94 */	addi r4, r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@l
/* 801A4808 001A1748  38 00 00 00 */	li r0, 0
/* 801A480C 001A174C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4810 001A1750  90 81 00 78 */	stw r4, 0x78(r1)
/* 801A4814 001A1754  38 81 00 78 */	addi r4, r1, 0x78
/* 801A4818 001A1758  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 801A481C 001A175C  98 01 00 80 */	stb r0, 0x80(r1)
/* 801A4820 001A1760  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4824 001A1764  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4828 001A1768  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801A482C 001A176C  7D 89 03 A6 */	mtctr r12
/* 801A4830 001A1770  4E 80 04 21 */	bctrl 
/* 801A4834 001A1774  48 00 01 04 */	b .L_801A4938
.L_801A4838:
/* 801A4838 001A1778  28 00 00 05 */	cmplwi r0, 5
/* 801A483C 001A177C  40 82 00 60 */	bne .L_801A489C
/* 801A4840 001A1780  7F C3 F3 78 */	mr r3, r30
/* 801A4844 001A1784  38 80 00 00 */	li r4, 0
/* 801A4848 001A1788  4B F9 72 09 */	bl movie_begin__Q24Game8CreatureFb
/* 801A484C 001A178C  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A4850 001A1790  38 80 00 00 */	li r4, 0
/* 801A4854 001A1794  4B F9 71 FD */	bl movie_begin__Q24Game8CreatureFb
/* 801A4858 001A1798  3C 60 80 4B */	lis r3, __vt__Q24Game11GameMessage@ha
/* 801A485C 001A179C  38 00 00 00 */	li r0, 0
/* 801A4860 001A17A0  38 83 05 90 */	addi r4, r3, __vt__Q24Game11GameMessage@l
/* 801A4864 001A17A4  3C 60 80 4B */	lis r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@ha
/* 801A4868 001A17A8  90 81 00 6C */	stw r4, 0x6c(r1)
/* 801A486C 001A17AC  38 A3 61 94 */	addi r5, r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@l
/* 801A4870 001A17B0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4874 001A17B4  38 81 00 6C */	addi r4, r1, 0x6c
/* 801A4878 001A17B8  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 801A487C 001A17BC  90 01 00 70 */	stw r0, 0x70(r1)
/* 801A4880 001A17C0  98 01 00 74 */	stb r0, 0x74(r1)
/* 801A4884 001A17C4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4888 001A17C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A488C 001A17CC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801A4890 001A17D0  7D 89 03 A6 */	mtctr r12
/* 801A4894 001A17D4  4E 80 04 21 */	bctrl 
/* 801A4898 001A17D8  48 00 00 A0 */	b .L_801A4938
.L_801A489C:
/* 801A489C 001A17DC  28 00 00 06 */	cmplwi r0, 6
/* 801A48A0 001A17E0  40 82 00 98 */	bne .L_801A4938
/* 801A48A4 001A17E4  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A48A8 001A17E8  A0 C3 01 28 */	lhz r6, 0x128(r3)
/* 801A48AC 001A17EC  2C 06 04 02 */	cmpwi r6, 0x402
/* 801A48B0 001A17F0  40 82 00 6C */	bne .L_801A491C
/* 801A48B4 001A17F4  7F C3 F3 78 */	mr r3, r30
/* 801A48B8 001A17F8  38 80 00 00 */	li r4, 0
/* 801A48BC 001A17FC  4B F9 71 95 */	bl movie_begin__Q24Game8CreatureFb
/* 801A48C0 001A1800  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A48C4 001A1804  38 80 00 00 */	li r4, 0
/* 801A48C8 001A1808  4B F9 71 89 */	bl movie_begin__Q24Game8CreatureFb
/* 801A48CC 001A180C  80 BD 00 10 */	lwz r5, 0x10(r29)
/* 801A48D0 001A1810  3C 80 80 4B */	lis r4, __vt__Q24Game11GameMessage@ha
/* 801A48D4 001A1814  3C 60 80 4B */	lis r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@ha
/* 801A48D8 001A1818  38 00 00 01 */	li r0, 1
/* 801A48DC 001A181C  A0 C5 02 2E */	lhz r6, 0x22e(r5)
/* 801A48E0 001A1820  38 84 05 90 */	addi r4, r4, __vt__Q24Game11GameMessage@l
/* 801A48E4 001A1824  38 A3 61 94 */	addi r5, r3, __vt__Q24Game27GameMessageVsRedOrSuckStart@l
/* 801A48E8 001A1828  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A48EC 001A182C  90 81 00 60 */	stw r4, 0x60(r1)
/* 801A48F0 001A1830  20 C6 00 01 */	subfic r6, r6, 1
/* 801A48F4 001A1834  38 81 00 60 */	addi r4, r1, 0x60
/* 801A48F8 001A1838  90 A1 00 60 */	stw r5, 0x60(r1)
/* 801A48FC 001A183C  90 C1 00 64 */	stw r6, 0x64(r1)
/* 801A4900 001A1840  98 01 00 68 */	stb r0, 0x68(r1)
/* 801A4904 001A1844  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4908 001A1848  81 83 00 00 */	lwz r12, 0(r3)
/* 801A490C 001A184C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801A4910 001A1850  7D 89 03 A6 */	mtctr r12
/* 801A4914 001A1854  4E 80 04 21 */	bctrl 
/* 801A4918 001A1858  48 00 00 20 */	b .L_801A4938
.L_801A491C:
/* 801A491C 001A185C  3C 60 80 48 */	lis r3, lbl_8047F4A8@ha
/* 801A4920 001A1860  3C 80 80 48 */	lis r4, lbl_8047F4C4@ha
/* 801A4924 001A1864  38 A4 F4 C4 */	addi r5, r4, lbl_8047F4C4@l
/* 801A4928 001A1868  38 63 F4 A8 */	addi r3, r3, lbl_8047F4A8@l
/* 801A492C 001A186C  38 80 02 00 */	li r4, 0x200
/* 801A4930 001A1870  4C C6 31 82 */	crclr 6
/* 801A4934 001A1874  4B E8 5D 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A4938:
/* 801A4938 001A1878  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801A493C 001A187C  41 82 00 1C */	beq .L_801A4958
/* 801A4940 001A1880  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A4944 001A1884  38 80 00 00 */	li r4, 0
/* 801A4948 001A1888  4B F9 71 09 */	bl movie_begin__Q24Game8CreatureFb
/* 801A494C 001A188C  7F C3 F3 78 */	mr r3, r30
/* 801A4950 001A1890  38 80 00 00 */	li r4, 0
/* 801A4954 001A1894  4B F9 70 FD */	bl movie_begin__Q24Game8CreatureFb
.L_801A4958:
/* 801A4958 001A1898  7F C4 F3 78 */	mr r4, r30
/* 801A495C 001A189C  38 61 00 1C */	addi r3, r1, 0x1c
/* 801A4960 001A18A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A4964 001A18A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A4968 001A18A8  7D 89 03 A6 */	mtctr r12
/* 801A496C 001A18AC  4E 80 04 21 */	bctrl 
/* 801A4970 001A18B0  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 801A4974 001A18B4  38 61 00 28 */	addi r3, r1, 0x28
/* 801A4978 001A18B8  81 84 00 00 */	lwz r12, 0(r4)
/* 801A497C 001A18BC  81 8C 01 94 */	lwz r12, 0x194(r12)
/* 801A4980 001A18C0  7D 89 03 A6 */	mtctr r12
/* 801A4984 001A18C4  4E 80 04 21 */	bctrl 
/* 801A4988 001A18C8  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801A498C 001A18CC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801A4990 001A18D0  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 801A4994 001A18D4  EC 81 00 28 */	fsubs f4, f1, f0
/* 801A4998 001A18D8  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 801A499C 001A18DC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 801A49A0 001A18E0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801A49A4 001A18E4  EC 43 10 28 */	fsubs f2, f3, f2
/* 801A49A8 001A18E8  EC 64 01 32 */	fmuls f3, f4, f4
/* 801A49AC 001A18EC  EC 21 00 28 */	fsubs f1, f1, f0
/* 801A49B0 001A18F0  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A49B4 001A18F4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801A49B8 001A18F8  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 801A49BC 001A18FC  EC 22 08 2A */	fadds f1, f2, f1
/* 801A49C0 001A1900  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A49C4 001A1904  40 81 00 14 */	ble .L_801A49D8
/* 801A49C8 001A1908  40 81 00 14 */	ble .L_801A49DC
/* 801A49CC 001A190C  FC 00 08 34 */	frsqrte f0, f1
/* 801A49D0 001A1910  EC 20 00 72 */	fmuls f1, f0, f1
/* 801A49D4 001A1914  48 00 00 08 */	b .L_801A49DC
.L_801A49D8:
/* 801A49D8 001A1918  FC 20 00 90 */	fmr f1, f0
.L_801A49DC:
/* 801A49DC 001A191C  D0 3D 00 18 */	stfs f1, 0x18(r29)
/* 801A49E0 001A1920  7F C4 F3 78 */	mr r4, r30
/* 801A49E4 001A1924  C0 22 AE 28 */	lfs f1, lbl_80519188@sda21(r2)
/* 801A49E8 001A1928  38 61 00 10 */	addi r3, r1, 0x10
/* 801A49EC 001A192C  C0 02 AE 2C */	lfs f0, lbl_8051918C@sda21(r2)
/* 801A49F0 001A1930  D0 3D 00 14 */	stfs f1, 0x14(r29)
/* 801A49F4 001A1934  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 801A49F8 001A1938  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A49FC 001A193C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801A4A00 001A1940  7D 89 03 A6 */	mtctr r12
/* 801A4A04 001A1944  4E 80 04 21 */	bctrl 
/* 801A4A08 001A1948  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801A4A0C 001A194C  7F C3 F3 78 */	mr r3, r30
/* 801A4A10 001A1950  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801A4A14 001A1954  38 81 00 54 */	addi r4, r1, 0x54
/* 801A4A18 001A1958  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801A4A1C 001A195C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801A4A20 001A1960  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A4A24 001A1964  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 801A4A28 001A1968  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801A4A2C 001A196C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801A4A30 001A1970  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A4A34 001A1974  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801A4A38 001A1978  7D 89 03 A6 */	mtctr r12
/* 801A4A3C 001A197C  4E 80 04 21 */	bctrl 
/* 801A4A40 001A1980  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A4A44 001A1984  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 801A4A48 001A1988  80 7E 03 58 */	lwz r3, 0x358(r30)
/* 801A4A4C 001A198C  28 03 00 00 */	cmplwi r3, 0
/* 801A4A50 001A1990  41 82 00 18 */	beq .L_801A4A68
/* 801A4A54 001A1994  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4A58 001A1998  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A4A5C 001A199C  7D 89 03 A6 */	mtctr r12
/* 801A4A60 001A19A0  4E 80 04 21 */	bctrl 
/* 801A4A64 001A19A4  D0 3D 00 20 */	stfs f1, 0x20(r29)
.L_801A4A68:
/* 801A4A68 001A19A8  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A4A6C 001A19AC  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801A4A70 001A19B0  2C 00 04 02 */	cmpwi r0, 0x402
/* 801A4A74 001A19B4  41 82 00 0C */	beq .L_801A4A80
/* 801A4A78 001A19B8  2C 00 04 03 */	cmpwi r0, 0x403
/* 801A4A7C 001A19BC  40 82 00 10 */	bne .L_801A4A8C
.L_801A4A80:
/* 801A4A80 001A19C0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801A4A84 001A19C4  40 82 00 08 */	bne .L_801A4A8C
/* 801A4A88 001A19C8  4B FD 47 5D */	bl efxSuikomi__Q24Game5OnyonFv
.L_801A4A8C:
/* 801A4A8C 001A19CC  9B FD 00 3C */	stb r31, 0x3c(r29)
/* 801A4A90 001A19D0  38 A0 00 00 */	li r5, 0
/* 801A4A94 001A19D4  98 BD 00 3E */	stb r5, 0x3e(r29)
/* 801A4A98 001A19D8  88 1D 00 3C */	lbz r0, 0x3c(r29)
/* 801A4A9C 001A19DC  28 00 00 00 */	cmplwi r0, 0
/* 801A4AA0 001A19E0  40 82 02 24 */	bne .L_801A4CC4
/* 801A4AA4 001A19E4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801A4AA8 001A19E8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 801A4AAC 001A19EC  38 04 BC 9C */	addi r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 801A4AB0 001A19F0  28 05 00 00 */	cmplwi r5, 0
/* 801A4AB4 001A19F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801A4AB8 001A19F8  90 A1 00 50 */	stw r5, 0x50(r1)
/* 801A4ABC 001A19FC  90 A1 00 48 */	stw r5, 0x48(r1)
/* 801A4AC0 001A1A00  90 61 00 4C */	stw r3, 0x4c(r1)
/* 801A4AC4 001A1A04  40 82 00 1C */	bne .L_801A4AE0
/* 801A4AC8 001A1A08  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4ACC 001A1A0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A4AD0 001A1A10  7D 89 03 A6 */	mtctr r12
/* 801A4AD4 001A1A14  4E 80 04 21 */	bctrl 
/* 801A4AD8 001A1A18  90 61 00 48 */	stw r3, 0x48(r1)
/* 801A4ADC 001A1A1C  48 00 01 68 */	b .L_801A4C44
.L_801A4AE0:
/* 801A4AE0 001A1A20  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4AE4 001A1A24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A4AE8 001A1A28  7D 89 03 A6 */	mtctr r12
/* 801A4AEC 001A1A2C  4E 80 04 21 */	bctrl 
/* 801A4AF0 001A1A30  90 61 00 48 */	stw r3, 0x48(r1)
/* 801A4AF4 001A1A34  48 00 00 58 */	b .L_801A4B4C
.L_801A4AF8:
/* 801A4AF8 001A1A38  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4AFC 001A1A3C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4B00 001A1A40  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4B04 001A1A44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A4B08 001A1A48  7D 89 03 A6 */	mtctr r12
/* 801A4B0C 001A1A4C  4E 80 04 21 */	bctrl 
/* 801A4B10 001A1A50  7C 64 1B 78 */	mr r4, r3
/* 801A4B14 001A1A54  80 61 00 50 */	lwz r3, 0x50(r1)
/* 801A4B18 001A1A58  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4B1C 001A1A5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A4B20 001A1A60  7D 89 03 A6 */	mtctr r12
/* 801A4B24 001A1A64  4E 80 04 21 */	bctrl 
/* 801A4B28 001A1A68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4B2C 001A1A6C  40 82 01 18 */	bne .L_801A4C44
/* 801A4B30 001A1A70  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4B34 001A1A74  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4B38 001A1A78  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4B3C 001A1A7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A4B40 001A1A80  7D 89 03 A6 */	mtctr r12
/* 801A4B44 001A1A84  4E 80 04 21 */	bctrl 
/* 801A4B48 001A1A88  90 61 00 48 */	stw r3, 0x48(r1)
.L_801A4B4C:
/* 801A4B4C 001A1A8C  81 81 00 44 */	lwz r12, 0x44(r1)
/* 801A4B50 001A1A90  38 61 00 44 */	addi r3, r1, 0x44
/* 801A4B54 001A1A94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A4B58 001A1A98  7D 89 03 A6 */	mtctr r12
/* 801A4B5C 001A1A9C  4E 80 04 21 */	bctrl 
/* 801A4B60 001A1AA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4B64 001A1AA4  41 82 FF 94 */	beq .L_801A4AF8
/* 801A4B68 001A1AA8  48 00 00 DC */	b .L_801A4C44
.L_801A4B6C:
/* 801A4B6C 001A1AAC  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4B70 001A1AB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4B74 001A1AB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A4B78 001A1AB8  7D 89 03 A6 */	mtctr r12
/* 801A4B7C 001A1ABC  4E 80 04 21 */	bctrl 
/* 801A4B80 001A1AC0  38 80 00 00 */	li r4, 0
/* 801A4B84 001A1AC4  4B F9 6F 69 */	bl movie_end__Q24Game8CreatureFb
/* 801A4B88 001A1AC8  80 01 00 50 */	lwz r0, 0x50(r1)
/* 801A4B8C 001A1ACC  28 00 00 00 */	cmplwi r0, 0
/* 801A4B90 001A1AD0  40 82 00 24 */	bne .L_801A4BB4
/* 801A4B94 001A1AD4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4B98 001A1AD8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4B9C 001A1ADC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4BA0 001A1AE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A4BA4 001A1AE4  7D 89 03 A6 */	mtctr r12
/* 801A4BA8 001A1AE8  4E 80 04 21 */	bctrl 
/* 801A4BAC 001A1AEC  90 61 00 48 */	stw r3, 0x48(r1)
/* 801A4BB0 001A1AF0  48 00 00 94 */	b .L_801A4C44
.L_801A4BB4:
/* 801A4BB4 001A1AF4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4BB8 001A1AF8  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4BBC 001A1AFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4BC0 001A1B00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A4BC4 001A1B04  7D 89 03 A6 */	mtctr r12
/* 801A4BC8 001A1B08  4E 80 04 21 */	bctrl 
/* 801A4BCC 001A1B0C  90 61 00 48 */	stw r3, 0x48(r1)
/* 801A4BD0 001A1B10  48 00 00 58 */	b .L_801A4C28
.L_801A4BD4:
/* 801A4BD4 001A1B14  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4BD8 001A1B18  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4BDC 001A1B1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4BE0 001A1B20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A4BE4 001A1B24  7D 89 03 A6 */	mtctr r12
/* 801A4BE8 001A1B28  4E 80 04 21 */	bctrl 
/* 801A4BEC 001A1B2C  7C 64 1B 78 */	mr r4, r3
/* 801A4BF0 001A1B30  80 61 00 50 */	lwz r3, 0x50(r1)
/* 801A4BF4 001A1B34  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4BF8 001A1B38  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A4BFC 001A1B3C  7D 89 03 A6 */	mtctr r12
/* 801A4C00 001A1B40  4E 80 04 21 */	bctrl 
/* 801A4C04 001A1B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4C08 001A1B48  40 82 00 3C */	bne .L_801A4C44
/* 801A4C0C 001A1B4C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4C10 001A1B50  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4C14 001A1B54  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4C18 001A1B58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A4C1C 001A1B5C  7D 89 03 A6 */	mtctr r12
/* 801A4C20 001A1B60  4E 80 04 21 */	bctrl 
/* 801A4C24 001A1B64  90 61 00 48 */	stw r3, 0x48(r1)
.L_801A4C28:
/* 801A4C28 001A1B68  81 81 00 44 */	lwz r12, 0x44(r1)
/* 801A4C2C 001A1B6C  38 61 00 44 */	addi r3, r1, 0x44
/* 801A4C30 001A1B70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A4C34 001A1B74  7D 89 03 A6 */	mtctr r12
/* 801A4C38 001A1B78  4E 80 04 21 */	bctrl 
/* 801A4C3C 001A1B7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4C40 001A1B80  41 82 FF 94 */	beq .L_801A4BD4
.L_801A4C44:
/* 801A4C44 001A1B84  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A4C48 001A1B88  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4C4C 001A1B8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A4C50 001A1B90  7D 89 03 A6 */	mtctr r12
/* 801A4C54 001A1B94  4E 80 04 21 */	bctrl 
/* 801A4C58 001A1B98  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801A4C5C 001A1B9C  7C 04 18 40 */	cmplw r4, r3
/* 801A4C60 001A1BA0  40 82 FF 0C */	bne .L_801A4B6C
/* 801A4C64 001A1BA4  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 801A4C68 001A1BA8  28 03 00 00 */	cmplwi r3, 0
/* 801A4C6C 001A1BAC  41 82 00 08 */	beq .L_801A4C74
/* 801A4C70 001A1BB0  38 63 00 04 */	addi r3, r3, 4
.L_801A4C74:
/* 801A4C74 001A1BB4  38 00 00 00 */	li r0, 0
/* 801A4C78 001A1BB8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801A4C7C 001A1BBC  38 61 00 34 */	addi r3, r1, 0x34
/* 801A4C80 001A1BC0  90 01 00 40 */	stw r0, 0x40(r1)
/* 801A4C84 001A1BC4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801A4C88 001A1BC8  90 01 00 38 */	stw r0, 0x38(r1)
/* 801A4C8C 001A1BCC  4B F6 98 05 */	bl "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
/* 801A4C90 001A1BD0  48 00 00 28 */	b .L_801A4CB8
.L_801A4C94:
/* 801A4C94 001A1BD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4C98 001A1BD8  80 81 00 38 */	lwz r4, 0x38(r1)
/* 801A4C9C 001A1BDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A4CA0 001A1BE0  7D 89 03 A6 */	mtctr r12
/* 801A4CA4 001A1BE4  4E 80 04 21 */	bctrl 
/* 801A4CA8 001A1BE8  38 80 00 00 */	li r4, 0
/* 801A4CAC 001A1BEC  4B F9 6E 41 */	bl movie_end__Q24Game8CreatureFb
/* 801A4CB0 001A1BF0  38 61 00 34 */	addi r3, r1, 0x34
/* 801A4CB4 001A1BF4  4B F6 92 3D */	bl "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
.L_801A4CB8:
/* 801A4CB8 001A1BF8  80 61 00 34 */	lwz r3, 0x34(r1)
/* 801A4CBC 001A1BFC  28 03 00 00 */	cmplwi r3, 0
/* 801A4CC0 001A1C00  40 82 FF D4 */	bne .L_801A4C94
.L_801A4CC4:
/* 801A4CC4 001A1C04  7F C3 F3 78 */	mr r3, r30
/* 801A4CC8 001A1C08  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A4CCC 001A1C0C  81 8C 02 18 */	lwz r12, 0x218(r12)
/* 801A4CD0 001A1C10  7D 89 03 A6 */	mtctr r12
/* 801A4CD4 001A1C14  4E 80 04 21 */	bctrl 
/* 801A4CD8 001A1C18  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A4CDC 001A1C1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4CE0 001A1C20  81 8C 01 A0 */	lwz r12, 0x1a0(r12)
/* 801A4CE4 001A1C24  7D 89 03 A6 */	mtctr r12
/* 801A4CE8 001A1C28  4E 80 04 21 */	bctrl 
/* 801A4CEC 001A1C2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4CF0 001A1C30  40 82 00 44 */	bne .L_801A4D34
/* 801A4CF4 001A1C34  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801A4CF8 001A1C38  3C 60 80 4B */	lis r3, __vt__Q24Game18InteractSuckArrive@ha
/* 801A4CFC 001A1C3C  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 801A4D00 001A1C40  93 C1 00 0C */	stw r30, 0xc(r1)
/* 801A4D04 001A1C44  38 03 29 58 */	addi r0, r3, __vt__Q24Game18InteractSuckArrive@l
/* 801A4D08 001A1C48  38 81 00 08 */	addi r4, r1, 8
/* 801A4D0C 001A1C4C  90 A1 00 08 */	stw r5, 8(r1)
/* 801A4D10 001A1C50  90 01 00 08 */	stw r0, 8(r1)
/* 801A4D14 001A1C54  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A4D18 001A1C58  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4D1C 001A1C5C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801A4D20 001A1C60  7D 89 03 A6 */	mtctr r12
/* 801A4D24 001A1C64  4E 80 04 21 */	bctrl 
/* 801A4D28 001A1C68  38 00 00 00 */	li r0, 0
/* 801A4D2C 001A1C6C  98 1D 00 3D */	stb r0, 0x3d(r29)
/* 801A4D30 001A1C70  48 00 00 0C */	b .L_801A4D3C
.L_801A4D34:
/* 801A4D34 001A1C74  38 00 00 01 */	li r0, 1
/* 801A4D38 001A1C78  98 1D 00 3D */	stb r0, 0x3d(r29)
.L_801A4D3C:
/* 801A4D3C 001A1C7C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801A4D40 001A1C80  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 801A4D44 001A1C84  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 801A4D48 001A1C88  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 801A4D4C 001A1C8C  7C 08 03 A6 */	mtlr r0
/* 801A4D50 001A1C90  38 21 00 A0 */	addi r1, r1, 0xa0
/* 801A4D54 001A1C94  4E 80 00 20 */	blr 
.endfn init__Q24Game15PelletGoalStateFPQ24Game6PelletPQ24Game8StateArg

.if version == 0
.fn checkMovie__Q24Game15PelletGoalStateFPQ24Game6Pellet, global
/* 801A4D58 001A1C98  94 21 FD 40 */	stwu r1, -0x2c0(r1)
/* 801A4D5C 001A1C9C  7C 08 02 A6 */	mflr r0
/* 801A4D60 001A1CA0  3C C0 80 48 */	lis r6, lbl_8047F490@ha
/* 801A4D64 001A1CA4  90 01 02 C4 */	stw r0, 0x2c4(r1)
/* 801A4D68 001A1CA8  BF 41 02 A8 */	stmw r26, 0x2a8(r1)
/* 801A4D6C 001A1CAC  7C 7B 1B 78 */	mr r27, r3
/* 801A4D70 001A1CB0  7C 9C 23 78 */	mr r28, r4
/* 801A4D74 001A1CB4  3B E6 F4 90 */	addi r31, r6, lbl_8047F490@l
/* 801A4D78 001A1CB8  3B C0 00 00 */	li r30, 0
/* 801A4D7C 001A1CBC  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801A4D80 001A1CC0  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801A4D84 001A1CC4  2C 00 00 00 */	cmpwi r0, 0
/* 801A4D88 001A1CC8  40 82 00 10 */	bne .L_801A4D98
/* 801A4D8C 001A1CCC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4D90 001A1CD0  48 04 27 D5 */	bl firstCarryPellet__Q24Game8PlayDataFPQ24Game6Pellet
/* 801A4D94 001A1CD4  7C 7E 1B 78 */	mr r30, r3
.L_801A4D98:
/* 801A4D98 001A1CD8  7F 83 E3 78 */	mr r3, r28
/* 801A4D9C 001A1CDC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A4DA0 001A1CE0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4DA4 001A1CE4  7D 89 03 A6 */	mtctr r12
/* 801A4DA8 001A1CE8  4E 80 04 21 */	bctrl 
/* 801A4DAC 001A1CEC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A4DB0 001A1CF0  28 00 00 02 */	cmplwi r0, 2
/* 801A4DB4 001A1CF4  40 82 00 08 */	bne .L_801A4DBC
/* 801A4DB8 001A1CF8  3B C0 00 01 */	li r30, 1
.L_801A4DBC:
/* 801A4DBC 001A1CFC  7F 83 E3 78 */	mr r3, r28
/* 801A4DC0 001A1D00  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A4DC4 001A1D04  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4DC8 001A1D08  7D 89 03 A6 */	mtctr r12
/* 801A4DCC 001A1D0C  4E 80 04 21 */	bctrl 
/* 801A4DD0 001A1D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4DD4 001A1D14  40 82 00 08 */	bne .L_801A4DDC
/* 801A4DD8 001A1D18  3B C0 00 01 */	li r30, 1
.L_801A4DDC:
/* 801A4DDC 001A1D1C  80 7C 03 5C */	lwz r3, 0x35c(r28)
/* 801A4DE0 001A1D20  38 82 AE 34 */	addi r4, r2, lbl_80519194@sda21
/* 801A4DE4 001A1D24  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801A4DE8 001A1D28  4B F2 58 D9 */	bl strcmp
/* 801A4DEC 001A1D2C  2C 03 00 00 */	cmpwi r3, 0
/* 801A4DF0 001A1D30  40 82 00 4C */	bne .L_801A4E3C
/* 801A4DF4 001A1D34  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801A4DF8 001A1D38  38 60 00 00 */	li r3, 0
/* 801A4DFC 001A1D3C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801A4E00 001A1D40  2C 00 00 02 */	cmpwi r0, 2
/* 801A4E04 001A1D44  41 82 00 0C */	beq .L_801A4E10
/* 801A4E08 001A1D48  2C 00 00 03 */	cmpwi r0, 3
/* 801A4E0C 001A1D4C  40 82 00 08 */	bne .L_801A4E14
.L_801A4E10:
/* 801A4E10 001A1D50  38 60 00 01 */	li r3, 1
.L_801A4E14:
/* 801A4E14 001A1D54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4E18 001A1D58  40 82 00 54 */	bne .L_801A4E6C
/* 801A4E1C 001A1D5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E20 001A1D60  48 27 E1 11 */	bl getPlayCommonData__6SystemFv
/* 801A4E24 001A1D64  48 08 F9 8D */	bl enableChallengeGame__Q24Game14PlayCommonDataFv
/* 801A4E28 001A1D68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E2C 001A1D6C  38 00 00 01 */	li r0, 1
/* 801A4E30 001A1D70  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801A4E34 001A1D74  98 03 00 42 */	stb r0, 0x42(r3)
/* 801A4E38 001A1D78  48 00 00 34 */	b .L_801A4E6C
.L_801A4E3C:
/* 801A4E3C 001A1D7C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801A4E40 001A1D80  38 60 00 00 */	li r3, 0
/* 801A4E44 001A1D84  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801A4E48 001A1D88  2C 00 00 02 */	cmpwi r0, 2
/* 801A4E4C 001A1D8C  41 82 00 0C */	beq .L_801A4E58
/* 801A4E50 001A1D90  2C 00 00 03 */	cmpwi r0, 3
/* 801A4E54 001A1D94  40 82 00 08 */	bne .L_801A4E5C
.L_801A4E58:
/* 801A4E58 001A1D98  38 60 00 01 */	li r3, 1
.L_801A4E5C:
/* 801A4E5C 001A1D9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4E60 001A1DA0  41 82 00 0C */	beq .L_801A4E6C
/* 801A4E64 001A1DA4  38 60 00 00 */	li r3, 0
/* 801A4E68 001A1DA8  48 00 0C 48 */	b .L_801A5AB0
.L_801A4E6C:
/* 801A4E6C 001A1DAC  80 7C 03 5C */	lwz r3, 0x35c(r28)
/* 801A4E70 001A1DB0  38 82 AE 38 */	addi r4, r2, lbl_80519198@sda21
/* 801A4E74 001A1DB4  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801A4E78 001A1DB8  4B F2 58 49 */	bl strcmp
/* 801A4E7C 001A1DBC  2C 03 00 00 */	cmpwi r3, 0
/* 801A4E80 001A1DC0  40 82 00 30 */	bne .L_801A4EB0
/* 801A4E84 001A1DC4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E88 001A1DC8  48 27 E0 A9 */	bl getPlayCommonData__6SystemFv
/* 801A4E8C 001A1DCC  48 08 F9 55 */	bl enableLouieRescue__Q24Game14PlayCommonDataFv
/* 801A4E90 001A1DD0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E94 001A1DD4  38 00 00 01 */	li r0, 1
/* 801A4E98 001A1DD8  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801A4E9C 001A1DDC  98 03 00 42 */	stb r0, 0x42(r3)
/* 801A4EA0 001A1DE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4EA4 001A1DE4  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801A4EA8 001A1DE8  60 00 00 04 */	ori r0, r0, 4
/* 801A4EAC 001A1DEC  98 03 00 2F */	stb r0, 0x2f(r3)
.L_801A4EB0:
/* 801A4EB0 001A1DF0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801A4EB4 001A1DF4  3B C0 00 00 */	li r30, 0
/* 801A4EB8 001A1DF8  3B A0 00 00 */	li r29, 0
/* 801A4EBC 001A1DFC  41 82 0B 18 */	beq .L_801A59D4
/* 801A4EC0 001A1E00  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A4EC4 001A1E04  38 80 00 00 */	li r4, 0
/* 801A4EC8 001A1E08  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801A4ECC 001A1E0C  28 00 04 03 */	cmplwi r0, 0x403
/* 801A4ED0 001A1E10  41 82 00 0C */	beq .L_801A4EDC
/* 801A4ED4 001A1E14  28 00 04 02 */	cmplwi r0, 0x402
/* 801A4ED8 001A1E18  40 82 00 08 */	bne .L_801A4EE0
.L_801A4EDC:
/* 801A4EDC 001A1E1C  7C 64 1B 78 */	mr r4, r3
.L_801A4EE0:
/* 801A4EE0 001A1E20  28 04 00 00 */	cmplwi r4, 0
/* 801A4EE4 001A1E24  41 82 06 C0 */	beq .L_801A55A4
/* 801A4EE8 001A1E28  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 801A4EEC 001A1E2C  28 00 00 04 */	cmplwi r0, 4
/* 801A4EF0 001A1E30  40 82 06 B4 */	bne .L_801A55A4
/* 801A4EF4 001A1E34  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4EF8 001A1E38  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4EFC 001A1E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4F00 001A1E40  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A4F04 001A1E44  7D 89 03 A6 */	mtctr r12
/* 801A4F08 001A1E48  4E 80 04 21 */	bctrl 
/* 801A4F0C 001A1E4C  28 03 00 00 */	cmplwi r3, 0
/* 801A4F10 001A1E50  41 82 0A C4 */	beq .L_801A59D4
/* 801A4F14 001A1E54  7F 83 E3 78 */	mr r3, r28
/* 801A4F18 001A1E58  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A4F1C 001A1E5C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4F20 001A1E60  7D 89 03 A6 */	mtctr r12
/* 801A4F24 001A1E64  4E 80 04 21 */	bctrl 
/* 801A4F28 001A1E68  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A4F2C 001A1E6C  28 00 00 02 */	cmplwi r0, 2
/* 801A4F30 001A1E70  40 82 04 80 */	bne .L_801A53B0
/* 801A4F34 001A1E74  A0 9C 04 3E */	lhz r4, 0x43e(r28)
/* 801A4F38 001A1E78  2C 04 00 00 */	cmpwi r4, 0
/* 801A4F3C 001A1E7C  7C 9A 23 78 */	mr r26, r4
/* 801A4F40 001A1E80  40 82 02 38 */	bne .L_801A5178
/* 801A4F44 001A1E84  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F48 001A1E88  48 04 36 91 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F4C 001A1E8C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F50 001A1E90  38 80 00 1B */	li r4, 0x1b
/* 801A4F54 001A1E94  48 04 24 8D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A4F58 001A1E98  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F5C 001A1E9C  38 80 00 1D */	li r4, 0x1d
/* 801A4F60 001A1EA0  48 04 24 81 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A4F64 001A1EA4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F68 001A1EA8  7F 44 D3 78 */	mr r4, r26
/* 801A4F6C 001A1EAC  48 04 36 6D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F70 001A1EB0  7C 7B 1B 78 */	mr r27, r3
/* 801A4F74 001A1EB4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F78 001A1EB8  7F 44 D3 78 */	mr r4, r26
/* 801A4F7C 001A1EBC  48 04 36 D5 */	bl addDopeFruit__Q24Game8PlayDataFi
/* 801A4F80 001A1EC0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F84 001A1EC4  38 80 00 00 */	li r4, 0
/* 801A4F88 001A1EC8  48 04 36 51 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F8C 001A1ECC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F90 001A1ED0  38 80 00 01 */	li r4, 1
/* 801A4F94 001A1ED4  48 04 36 45 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F98 001A1ED8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F9C 001A1EDC  38 80 00 1B */	li r4, 0x1b
/* 801A4FA0 001A1EE0  48 04 24 41 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A4FA4 001A1EE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4FA8 001A1EE8  40 82 00 94 */	bne .L_801A503C
/* 801A4FAC 001A1EEC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4FB0 001A1EF0  38 80 00 1B */	li r4, 0x1b
/* 801A4FB4 001A1EF4  48 04 23 F1 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A4FB8 001A1EF8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4FBC 001A1EFC  7F 84 E3 78 */	mr r4, r28
/* 801A4FC0 001A1F00  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4FC4 001A1F04  48 09 65 D5 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A4FC8 001A1F08  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4FCC 001A1F0C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4FD0 001A1F10  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4FD4 001A1F14  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A4FD8 001A1F18  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A4FDC 001A1F1C  7D 89 03 A6 */	mtctr r12
/* 801A4FE0 001A1F20  4E 80 04 21 */	bctrl 
/* 801A4FE4 001A1F24  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A4FE8 001A1F28  38 00 00 00 */	li r0, 0
/* 801A4FEC 001A1F2C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A4FF0 001A1F30  38 7F 00 44 */	addi r3, r31, 0x44
/* 801A4FF4 001A1F34  90 61 02 68 */	stw r3, 0x268(r1)
/* 801A4FF8 001A1F38  38 81 02 68 */	addi r4, r1, 0x268
/* 801A4FFC 001A1F3C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5000 001A1F40  90 A1 02 6C */	stw r5, 0x26c(r1)
/* 801A5004 001A1F44  93 61 02 74 */	stw r27, 0x274(r1)
/* 801A5008 001A1F48  D0 01 02 80 */	stfs f0, 0x280(r1)
/* 801A500C 001A1F4C  D0 01 02 84 */	stfs f0, 0x284(r1)
/* 801A5010 001A1F50  D0 01 02 88 */	stfs f0, 0x288(r1)
/* 801A5014 001A1F54  D0 01 02 8C */	stfs f0, 0x28c(r1)
/* 801A5018 001A1F58  90 01 02 90 */	stw r0, 0x290(r1)
/* 801A501C 001A1F5C  90 01 02 78 */	stw r0, 0x278(r1)
/* 801A5020 001A1F60  90 01 02 70 */	stw r0, 0x270(r1)
/* 801A5024 001A1F64  90 01 02 94 */	stw r0, 0x294(r1)
/* 801A5028 001A1F68  90 01 02 7C */	stw r0, 0x27c(r1)
/* 801A502C 001A1F6C  90 01 02 98 */	stw r0, 0x298(r1)
/* 801A5030 001A1F70  48 28 79 A1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5034 001A1F74  3B A0 00 01 */	li r29, 1
/* 801A5038 001A1F78  48 00 09 9C */	b .L_801A59D4
.L_801A503C:
/* 801A503C 001A1F7C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5040 001A1F80  38 80 00 1D */	li r4, 0x1d
/* 801A5044 001A1F84  48 04 23 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A5048 001A1F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A504C 001A1F8C  40 82 09 88 */	bne .L_801A59D4
/* 801A5050 001A1F90  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5054 001A1F94  7F 44 D3 78 */	mr r4, r26
/* 801A5058 001A1F98  48 04 35 81 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A505C 001A1F9C  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801A5060 001A1FA0  38 9B 00 01 */	addi r4, r27, 1
/* 801A5064 001A1FA4  80 03 00 38 */	lwz r0, 0x38(r3)
/* 801A5068 001A1FA8  7C 04 00 00 */	cmpw r4, r0
/* 801A506C 001A1FAC  41 80 09 68 */	blt .L_801A59D4
/* 801A5070 001A1FB0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5074 001A1FB4  38 80 00 1D */	li r4, 0x1d
/* 801A5078 001A1FB8  48 04 23 2D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A507C 001A1FBC  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801A5080 001A1FC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5084 001A1FC4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801A5088 001A1FC8  7D 89 03 A6 */	mtctr r12
/* 801A508C 001A1FCC  4E 80 04 21 */	bctrl 
/* 801A5090 001A1FD0  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801A5094 001A1FD4  38 00 00 01 */	li r0, 1
/* 801A5098 001A1FD8  38 A4 A2 F4 */	addi r5, r4, __vt__Q24Game15CreatureInitArg@l
/* 801A509C 001A1FDC  98 01 00 14 */	stb r0, 0x14(r1)
/* 801A50A0 001A1FE0  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney7InitArg@ha
/* 801A50A4 001A1FE4  7C 7A 1B 78 */	mr r26, r3
/* 801A50A8 001A1FE8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801A50AC 001A1FEC  38 A4 A2 E8 */	addi r5, r4, __vt__Q34Game9ItemHoney7InitArg@l
/* 801A50B0 001A1FF0  38 81 00 10 */	addi r4, r1, 0x10
/* 801A50B4 001A1FF4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801A50B8 001A1FF8  98 01 00 15 */	stb r0, 0x15(r1)
/* 801A50BC 001A1FFC  4B F9 5F 0D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801A50C0 001A2000  C0 22 AE 28 */	lfs f1, lbl_80519188@sda21(r2)
/* 801A50C4 001A2004  7F 43 D3 78 */	mr r3, r26
/* 801A50C8 001A2008  C0 02 AE 40 */	lfs f0, lbl_805191A0@sda21(r2)
/* 801A50CC 001A200C  38 81 00 54 */	addi r4, r1, 0x54
/* 801A50D0 001A2010  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801A50D4 001A2014  38 A0 00 00 */	li r5, 0
/* 801A50D8 001A2018  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801A50DC 001A201C  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801A50E0 001A2020  4B F9 60 C9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801A50E4 001A2024  7F 43 D3 78 */	mr r3, r26
/* 801A50E8 001A2028  38 80 00 00 */	li r4, 0
/* 801A50EC 001A202C  4B F9 69 65 */	bl movie_begin__Q24Game8CreatureFb
/* 801A50F0 001A2030  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A50F4 001A2034  7F 44 D3 78 */	mr r4, r26
/* 801A50F8 001A2038  3B C0 00 01 */	li r30, 1
/* 801A50FC 001A203C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5100 001A2040  48 09 64 99 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A5104 001A2044  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5108 001A2048  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A510C 001A204C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5110 001A2050  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A5114 001A2054  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5118 001A2058  7D 89 03 A6 */	mtctr r12
/* 801A511C 001A205C  4E 80 04 21 */	bctrl 
/* 801A5120 001A2060  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A5124 001A2064  38 00 00 00 */	li r0, 0
/* 801A5128 001A2068  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A512C 001A206C  38 7F 00 58 */	addi r3, r31, 0x58
/* 801A5130 001A2070  90 61 02 34 */	stw r3, 0x234(r1)
/* 801A5134 001A2074  38 81 02 34 */	addi r4, r1, 0x234
/* 801A5138 001A2078  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A513C 001A207C  90 A1 02 38 */	stw r5, 0x238(r1)
/* 801A5140 001A2080  93 61 02 40 */	stw r27, 0x240(r1)
/* 801A5144 001A2084  D0 01 02 4C */	stfs f0, 0x24c(r1)
/* 801A5148 001A2088  D0 01 02 50 */	stfs f0, 0x250(r1)
/* 801A514C 001A208C  D0 01 02 54 */	stfs f0, 0x254(r1)
/* 801A5150 001A2090  D0 01 02 58 */	stfs f0, 0x258(r1)
/* 801A5154 001A2094  90 01 02 5C */	stw r0, 0x25c(r1)
/* 801A5158 001A2098  90 01 02 44 */	stw r0, 0x244(r1)
/* 801A515C 001A209C  90 01 02 3C */	stw r0, 0x23c(r1)
/* 801A5160 001A20A0  90 01 02 60 */	stw r0, 0x260(r1)
/* 801A5164 001A20A4  90 01 02 48 */	stw r0, 0x248(r1)
/* 801A5168 001A20A8  90 01 02 64 */	stw r0, 0x264(r1)
/* 801A516C 001A20AC  48 28 78 65 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5170 001A20B0  3B A0 00 01 */	li r29, 1
/* 801A5174 001A20B4  48 00 08 60 */	b .L_801A59D4
.L_801A5178:
/* 801A5178 001A20B8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A517C 001A20BC  48 04 34 5D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A5180 001A20C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5184 001A20C4  38 80 00 1C */	li r4, 0x1c
/* 801A5188 001A20C8  48 04 22 59 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A518C 001A20CC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5190 001A20D0  38 80 00 1E */	li r4, 0x1e
/* 801A5194 001A20D4  48 04 22 4D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A5198 001A20D8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A519C 001A20DC  7F 44 D3 78 */	mr r4, r26
/* 801A51A0 001A20E0  48 04 34 39 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A51A4 001A20E4  7C 7B 1B 78 */	mr r27, r3
/* 801A51A8 001A20E8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51AC 001A20EC  7F 44 D3 78 */	mr r4, r26
/* 801A51B0 001A20F0  48 04 34 A1 */	bl addDopeFruit__Q24Game8PlayDataFi
/* 801A51B4 001A20F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51B8 001A20F8  38 80 00 00 */	li r4, 0
/* 801A51BC 001A20FC  48 04 34 1D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A51C0 001A2100  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51C4 001A2104  38 80 00 01 */	li r4, 1
/* 801A51C8 001A2108  48 04 34 11 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A51CC 001A210C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51D0 001A2110  38 80 00 1C */	li r4, 0x1c
/* 801A51D4 001A2114  48 04 22 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A51D8 001A2118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A51DC 001A211C  40 82 00 94 */	bne .L_801A5270
/* 801A51E0 001A2120  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51E4 001A2124  38 80 00 1C */	li r4, 0x1c
/* 801A51E8 001A2128  48 04 21 BD */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A51EC 001A212C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A51F0 001A2130  7F 84 E3 78 */	mr r4, r28
/* 801A51F4 001A2134  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A51F8 001A2138  48 09 63 A1 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A51FC 001A213C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5200 001A2140  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5204 001A2144  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5208 001A2148  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A520C 001A214C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5210 001A2150  7D 89 03 A6 */	mtctr r12
/* 801A5214 001A2154  4E 80 04 21 */	bctrl 
/* 801A5218 001A2158  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A521C 001A215C  38 00 00 00 */	li r0, 0
/* 801A5220 001A2160  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5224 001A2164  38 7F 00 6C */	addi r3, r31, 0x6c
/* 801A5228 001A2168  90 61 02 00 */	stw r3, 0x200(r1)
/* 801A522C 001A216C  38 81 02 00 */	addi r4, r1, 0x200
/* 801A5230 001A2170  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5234 001A2174  90 A1 02 04 */	stw r5, 0x204(r1)
/* 801A5238 001A2178  93 61 02 0C */	stw r27, 0x20c(r1)
/* 801A523C 001A217C  D0 01 02 18 */	stfs f0, 0x218(r1)
/* 801A5240 001A2180  D0 01 02 1C */	stfs f0, 0x21c(r1)
/* 801A5244 001A2184  D0 01 02 20 */	stfs f0, 0x220(r1)
/* 801A5248 001A2188  D0 01 02 24 */	stfs f0, 0x224(r1)
/* 801A524C 001A218C  90 01 02 28 */	stw r0, 0x228(r1)
/* 801A5250 001A2190  90 01 02 10 */	stw r0, 0x210(r1)
/* 801A5254 001A2194  90 01 02 08 */	stw r0, 0x208(r1)
/* 801A5258 001A2198  90 01 02 2C */	stw r0, 0x22c(r1)
/* 801A525C 001A219C  90 01 02 14 */	stw r0, 0x214(r1)
/* 801A5260 001A21A0  90 01 02 30 */	stw r0, 0x230(r1)
/* 801A5264 001A21A4  48 28 77 6D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5268 001A21A8  3B A0 00 01 */	li r29, 1
/* 801A526C 001A21AC  48 00 07 68 */	b .L_801A59D4
.L_801A5270:
/* 801A5270 001A21B0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5274 001A21B4  38 80 00 1E */	li r4, 0x1e
/* 801A5278 001A21B8  48 04 21 69 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A527C 001A21BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5280 001A21C0  40 82 07 54 */	bne .L_801A59D4
/* 801A5284 001A21C4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5288 001A21C8  7F 44 D3 78 */	mr r4, r26
/* 801A528C 001A21CC  48 04 33 4D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A5290 001A21D0  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801A5294 001A21D4  38 9B 00 01 */	addi r4, r27, 1
/* 801A5298 001A21D8  80 03 00 38 */	lwz r0, 0x38(r3)
/* 801A529C 001A21DC  7C 04 00 00 */	cmpw r4, r0
/* 801A52A0 001A21E0  41 80 07 34 */	blt .L_801A59D4
/* 801A52A4 001A21E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A52A8 001A21E8  38 80 00 1E */	li r4, 0x1e
/* 801A52AC 001A21EC  48 04 20 F9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A52B0 001A21F0  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801A52B4 001A21F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A52B8 001A21F8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801A52BC 001A21FC  7D 89 03 A6 */	mtctr r12
/* 801A52C0 001A2200  4E 80 04 21 */	bctrl 
/* 801A52C4 001A2204  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801A52C8 001A2208  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney7InitArg@ha
/* 801A52CC 001A220C  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 801A52D0 001A2210  7C 7A 1B 78 */	mr r26, r3
/* 801A52D4 001A2214  90 01 00 08 */	stw r0, 8(r1)
/* 801A52D8 001A2218  38 A0 00 02 */	li r5, 2
/* 801A52DC 001A221C  38 84 A2 E8 */	addi r4, r4, __vt__Q34Game9ItemHoney7InitArg@l
/* 801A52E0 001A2220  38 00 00 01 */	li r0, 1
/* 801A52E4 001A2224  90 81 00 08 */	stw r4, 8(r1)
/* 801A52E8 001A2228  38 81 00 08 */	addi r4, r1, 8
/* 801A52EC 001A222C  98 A1 00 0C */	stb r5, 0xc(r1)
/* 801A52F0 001A2230  98 01 00 0D */	stb r0, 0xd(r1)
/* 801A52F4 001A2234  4B F9 5C D5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801A52F8 001A2238  C0 22 AE 28 */	lfs f1, lbl_80519188@sda21(r2)
/* 801A52FC 001A223C  7F 43 D3 78 */	mr r3, r26
/* 801A5300 001A2240  C0 02 AE 40 */	lfs f0, lbl_805191A0@sda21(r2)
/* 801A5304 001A2244  38 81 00 48 */	addi r4, r1, 0x48
/* 801A5308 001A2248  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801A530C 001A224C  38 A0 00 00 */	li r5, 0
/* 801A5310 001A2250  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801A5314 001A2254  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 801A5318 001A2258  4B F9 5E 91 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801A531C 001A225C  7F 43 D3 78 */	mr r3, r26
/* 801A5320 001A2260  38 80 00 00 */	li r4, 0
/* 801A5324 001A2264  4B F9 67 2D */	bl movie_begin__Q24Game8CreatureFb
/* 801A5328 001A2268  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A532C 001A226C  7F 44 D3 78 */	mr r4, r26
/* 801A5330 001A2270  3B C0 00 01 */	li r30, 1
/* 801A5334 001A2274  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5338 001A2278  48 09 62 61 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A533C 001A227C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5340 001A2280  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5344 001A2284  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5348 001A2288  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A534C 001A228C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5350 001A2290  7D 89 03 A6 */	mtctr r12
/* 801A5354 001A2294  4E 80 04 21 */	bctrl 
/* 801A5358 001A2298  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A535C 001A229C  38 00 00 00 */	li r0, 0
/* 801A5360 001A22A0  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5364 001A22A4  38 7F 00 80 */	addi r3, r31, 0x80
/* 801A5368 001A22A8  90 61 01 CC */	stw r3, 0x1cc(r1)
/* 801A536C 001A22AC  38 81 01 CC */	addi r4, r1, 0x1cc
/* 801A5370 001A22B0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5374 001A22B4  90 A1 01 D0 */	stw r5, 0x1d0(r1)
/* 801A5378 001A22B8  93 61 01 D8 */	stw r27, 0x1d8(r1)
/* 801A537C 001A22BC  D0 01 01 E4 */	stfs f0, 0x1e4(r1)
/* 801A5380 001A22C0  D0 01 01 E8 */	stfs f0, 0x1e8(r1)
/* 801A5384 001A22C4  D0 01 01 EC */	stfs f0, 0x1ec(r1)
/* 801A5388 001A22C8  D0 01 01 F0 */	stfs f0, 0x1f0(r1)
/* 801A538C 001A22CC  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 801A5390 001A22D0  90 01 01 DC */	stw r0, 0x1dc(r1)
/* 801A5394 001A22D4  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 801A5398 001A22D8  90 01 01 F8 */	stw r0, 0x1f8(r1)
/* 801A539C 001A22DC  90 01 01 E0 */	stw r0, 0x1e0(r1)
/* 801A53A0 001A22E0  90 01 01 FC */	stw r0, 0x1fc(r1)
/* 801A53A4 001A22E4  48 28 76 2D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A53A8 001A22E8  3B A0 00 01 */	li r29, 1
/* 801A53AC 001A22EC  48 00 06 28 */	b .L_801A59D4
.L_801A53B0:
/* 801A53B0 001A22F0  7F 83 E3 78 */	mr r3, r28
/* 801A53B4 001A22F4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A53B8 001A22F8  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A53BC 001A22FC  7D 89 03 A6 */	mtctr r12
/* 801A53C0 001A2300  4E 80 04 21 */	bctrl 
/* 801A53C4 001A2304  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A53C8 001A2308  28 00 00 03 */	cmplwi r0, 3
/* 801A53CC 001A230C  40 82 00 94 */	bne .L_801A5460
/* 801A53D0 001A2310  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A53D4 001A2314  7F 84 E3 78 */	mr r4, r28
/* 801A53D8 001A2318  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A53DC 001A231C  48 09 61 BD */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A53E0 001A2320  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A53E4 001A2324  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A53E8 001A2328  81 83 00 00 */	lwz r12, 0(r3)
/* 801A53EC 001A232C  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A53F0 001A2330  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A53F4 001A2334  7D 89 03 A6 */	mtctr r12
/* 801A53F8 001A2338  4E 80 04 21 */	bctrl 
/* 801A53FC 001A233C  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A5400 001A2340  38 00 00 00 */	li r0, 0
/* 801A5404 001A2344  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5408 001A2348  38 7F 00 94 */	addi r3, r31, 0x94
/* 801A540C 001A234C  90 61 01 98 */	stw r3, 0x198(r1)
/* 801A5410 001A2350  38 81 01 98 */	addi r4, r1, 0x198
/* 801A5414 001A2354  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5418 001A2358  90 A1 01 9C */	stw r5, 0x19c(r1)
/* 801A541C 001A235C  93 61 01 A4 */	stw r27, 0x1a4(r1)
/* 801A5420 001A2360  D0 01 01 B0 */	stfs f0, 0x1b0(r1)
/* 801A5424 001A2364  D0 01 01 B4 */	stfs f0, 0x1b4(r1)
/* 801A5428 001A2368  D0 01 01 B8 */	stfs f0, 0x1b8(r1)
/* 801A542C 001A236C  D0 01 01 BC */	stfs f0, 0x1bc(r1)
/* 801A5430 001A2370  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 801A5434 001A2374  90 01 01 A8 */	stw r0, 0x1a8(r1)
/* 801A5438 001A2378  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 801A543C 001A237C  90 01 01 C4 */	stw r0, 0x1c4(r1)
/* 801A5440 001A2380  90 01 01 AC */	stw r0, 0x1ac(r1)
/* 801A5444 001A2384  90 01 01 C8 */	stw r0, 0x1c8(r1)
/* 801A5448 001A2388  80 BC 03 5C */	lwz r5, 0x35c(r28)
/* 801A544C 001A238C  80 05 00 40 */	lwz r0, 0x40(r5)
/* 801A5450 001A2390  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 801A5454 001A2394  48 28 75 7D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5458 001A2398  3B A0 00 01 */	li r29, 1
/* 801A545C 001A239C  48 00 05 78 */	b .L_801A59D4
.L_801A5460:
/* 801A5460 001A23A0  7F 83 E3 78 */	mr r3, r28
/* 801A5464 001A23A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5468 001A23A8  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A546C 001A23AC  7D 89 03 A6 */	mtctr r12
/* 801A5470 001A23B0  4E 80 04 21 */	bctrl 
/* 801A5474 001A23B4  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A5478 001A23B8  28 00 00 04 */	cmplwi r0, 4
/* 801A547C 001A23BC  40 82 00 B4 */	bne .L_801A5530
/* 801A5480 001A23C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5484 001A23C4  7F 84 E3 78 */	mr r4, r28
/* 801A5488 001A23C8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A548C 001A23CC  48 09 61 0D */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A5490 001A23D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5494 001A23D4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5498 001A23D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A549C 001A23DC  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A54A0 001A23E0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A54A4 001A23E4  7D 89 03 A6 */	mtctr r12
/* 801A54A8 001A23E8  4E 80 04 21 */	bctrl 
/* 801A54AC 001A23EC  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A54B0 001A23F0  38 80 00 00 */	li r4, 0
/* 801A54B4 001A23F4  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A54B8 001A23F8  38 1F 00 A8 */	addi r0, r31, 0xa8
/* 801A54BC 001A23FC  90 01 01 64 */	stw r0, 0x164(r1)
/* 801A54C0 001A2400  3C 60 C0 01 */	lis r3, 0xC001100B@ha
/* 801A54C4 001A2404  38 03 10 0B */	addi r0, r3, 0xC001100B@l
/* 801A54C8 001A2408  90 A1 01 68 */	stw r5, 0x168(r1)
/* 801A54CC 001A240C  93 61 01 70 */	stw r27, 0x170(r1)
/* 801A54D0 001A2410  D0 01 01 7C */	stfs f0, 0x17c(r1)
/* 801A54D4 001A2414  D0 01 01 80 */	stfs f0, 0x180(r1)
/* 801A54D8 001A2418  D0 01 01 84 */	stfs f0, 0x184(r1)
/* 801A54DC 001A241C  D0 01 01 88 */	stfs f0, 0x188(r1)
/* 801A54E0 001A2420  90 81 01 8C */	stw r4, 0x18c(r1)
/* 801A54E4 001A2424  90 81 01 74 */	stw r4, 0x174(r1)
/* 801A54E8 001A2428  90 81 01 6C */	stw r4, 0x16c(r1)
/* 801A54EC 001A242C  90 81 01 90 */	stw r4, 0x190(r1)
/* 801A54F0 001A2430  90 81 01 78 */	stw r4, 0x178(r1)
/* 801A54F4 001A2434  90 81 01 94 */	stw r4, 0x194(r1)
/* 801A54F8 001A2438  80 BC 03 5C */	lwz r5, 0x35c(r28)
/* 801A54FC 001A243C  80 85 00 40 */	lwz r4, 0x40(r5)
/* 801A5500 001A2440  90 81 01 6C */	stw r4, 0x16c(r1)
/* 801A5504 001A2444  90 01 01 90 */	stw r0, 0x190(r1)
/* 801A5508 001A2448  A8 05 02 58 */	lha r0, 0x258(r5)
/* 801A550C 001A244C  2C 00 00 08 */	cmpwi r0, 8
/* 801A5510 001A2450  41 80 00 0C */	blt .L_801A551C
/* 801A5514 001A2454  38 03 10 0A */	addi r0, r3, 0x100a
/* 801A5518 001A2458  90 01 01 90 */	stw r0, 0x190(r1)
.L_801A551C:
/* 801A551C 001A245C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5520 001A2460  38 81 01 64 */	addi r4, r1, 0x164
/* 801A5524 001A2464  48 28 74 AD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5528 001A2468  3B A0 00 01 */	li r29, 1
/* 801A552C 001A246C  48 00 04 A8 */	b .L_801A59D4
.L_801A5530:
/* 801A5530 001A2470  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5534 001A2474  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5538 001A2478  81 83 00 00 */	lwz r12, 0(r3)
/* 801A553C 001A247C  83 63 00 C8 */	lwz r27, 0xe8(r3)
/* 801A5540 001A2480  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5544 001A2484  7D 89 03 A6 */	mtctr r12
/* 801A5548 001A2488  4E 80 04 21 */	bctrl 
/* 801A554C 001A248C  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A5550 001A2490  38 00 00 00 */	li r0, 0
/* 801A5554 001A2494  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5558 001A2498  38 7F 00 BC */	addi r3, r31, 0xbc
/* 801A555C 001A249C  90 61 01 30 */	stw r3, 0x130(r1)
/* 801A5560 001A24A0  38 81 01 30 */	addi r4, r1, 0x130
/* 801A5564 001A24A4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5568 001A24A8  90 A1 01 34 */	stw r5, 0x134(r1)
/* 801A556C 001A24AC  93 61 01 3C */	stw r27, 0x13c(r1)
/* 801A5570 001A24B0  D0 01 01 48 */	stfs f0, 0x148(r1)
/* 801A5574 001A24B4  D0 01 01 4C */	stfs f0, 0x14c(r1)
/* 801A5578 001A24B8  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 801A557C 001A24BC  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 801A5580 001A24C0  90 01 01 58 */	stw r0, 0x158(r1)
/* 801A5584 001A24C4  90 01 01 40 */	stw r0, 0x140(r1)
/* 801A5588 001A24C8  90 01 01 38 */	stw r0, 0x138(r1)
/* 801A558C 001A24CC  90 01 01 5C */	stw r0, 0x15c(r1)
/* 801A5590 001A24D0  90 01 01 44 */	stw r0, 0x144(r1)
/* 801A5594 001A24D4  90 01 01 60 */	stw r0, 0x160(r1)
/* 801A5598 001A24D8  48 28 74 39 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A559C 001A24DC  3B A0 00 01 */	li r29, 1
/* 801A55A0 001A24E0  48 00 04 34 */	b .L_801A59D4
.L_801A55A4:
/* 801A55A4 001A24E4  28 04 00 00 */	cmplwi r4, 0
/* 801A55A8 001A24E8  41 82 03 24 */	beq .L_801A58CC
/* 801A55AC 001A24EC  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 801A55B0 001A24F0  28 00 00 03 */	cmplwi r0, 3
/* 801A55B4 001A24F4  40 82 03 18 */	bne .L_801A58CC
/* 801A55B8 001A24F8  7F 83 E3 78 */	mr r3, r28
/* 801A55BC 001A24FC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A55C0 001A2500  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A55C4 001A2504  7D 89 03 A6 */	mtctr r12
/* 801A55C8 001A2508  4E 80 04 21 */	bctrl 
/* 801A55CC 001A250C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A55D0 001A2510  28 00 00 03 */	cmplwi r0, 3
/* 801A55D4 001A2514  40 82 00 E0 */	bne .L_801A56B4
/* 801A55D8 001A2518  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A55DC 001A251C  7F 84 E3 78 */	mr r4, r28
/* 801A55E0 001A2520  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A55E4 001A2524  48 09 5F B5 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A55E8 001A2528  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A55EC 001A252C  38 9F 00 C8 */	addi r4, r31, 0xc8
/* 801A55F0 001A2530  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A55F4 001A2534  38 00 00 00 */	li r0, 0
/* 801A55F8 001A2538  80 A3 00 58 */	lwz r5, 0x58(r3)
/* 801A55FC 001A253C  38 61 00 3C */	addi r3, r1, 0x3c
/* 801A5600 001A2540  80 A5 00 C8 */	lwz r5, 0xe8(r5)
/* 801A5604 001A2544  90 81 00 FC */	stw r4, 0xfc(r1)
/* 801A5608 001A2548  90 01 01 00 */	stw r0, 0x100(r1)
/* 801A560C 001A254C  90 A1 01 08 */	stw r5, 0x108(r1)
/* 801A5610 001A2550  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 801A5614 001A2554  D0 01 01 18 */	stfs f0, 0x118(r1)
/* 801A5618 001A2558  D0 01 01 1C */	stfs f0, 0x11c(r1)
/* 801A561C 001A255C  D0 01 01 20 */	stfs f0, 0x120(r1)
/* 801A5620 001A2560  90 01 01 24 */	stw r0, 0x124(r1)
/* 801A5624 001A2564  90 01 01 0C */	stw r0, 0x10c(r1)
/* 801A5628 001A2568  90 01 01 04 */	stw r0, 0x104(r1)
/* 801A562C 001A256C  90 01 01 28 */	stw r0, 0x128(r1)
/* 801A5630 001A2570  90 01 01 10 */	stw r0, 0x110(r1)
/* 801A5634 001A2574  90 01 01 2C */	stw r0, 0x12c(r1)
/* 801A5638 001A2578  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A563C 001A257C  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5640 001A2580  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5644 001A2584  7D 89 03 A6 */	mtctr r12
/* 801A5648 001A2588  4E 80 04 21 */	bctrl 
/* 801A564C 001A258C  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 801A5650 001A2590  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801A5654 001A2594  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 801A5658 001A2598  D0 41 01 14 */	stfs f2, 0x114(r1)
/* 801A565C 001A259C  D0 21 01 18 */	stfs f1, 0x118(r1)
/* 801A5660 001A25A0  D0 01 01 1C */	stfs f0, 0x11c(r1)
/* 801A5664 001A25A4  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A5668 001A25A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A566C 001A25AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A5670 001A25B0  7D 89 03 A6 */	mtctr r12
/* 801A5674 001A25B4  4E 80 04 21 */	bctrl 
/* 801A5678 001A25B8  D0 21 01 20 */	stfs f1, 0x120(r1)
/* 801A567C 001A25BC  38 81 00 FC */	addi r4, r1, 0xfc
/* 801A5680 001A25C0  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801A5684 001A25C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5688 001A25C8  80 A5 00 58 */	lwz r5, 0x58(r5)
/* 801A568C 001A25CC  80 05 00 CC */	lwz r0, 0xec(r5)
/* 801A5690 001A25D0  90 01 01 0C */	stw r0, 0x10c(r1)
/* 801A5694 001A25D4  80 05 00 C8 */	lwz r0, 0xe8(r5)
/* 801A5698 001A25D8  90 01 01 08 */	stw r0, 0x108(r1)
/* 801A569C 001A25DC  80 BC 03 5C */	lwz r5, 0x35c(r28)
/* 801A56A0 001A25E0  80 05 00 40 */	lwz r0, 0x40(r5)
/* 801A56A4 001A25E4  90 01 01 04 */	stw r0, 0x104(r1)
/* 801A56A8 001A25E8  48 28 73 29 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A56AC 001A25EC  3B A0 00 01 */	li r29, 1
/* 801A56B0 001A25F0  48 00 03 24 */	b .L_801A59D4
.L_801A56B4:
/* 801A56B4 001A25F4  7F 83 E3 78 */	mr r3, r28
/* 801A56B8 001A25F8  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A56BC 001A25FC  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A56C0 001A2600  7D 89 03 A6 */	mtctr r12
/* 801A56C4 001A2604  4E 80 04 21 */	bctrl 
/* 801A56C8 001A2608  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A56CC 001A260C  28 00 00 04 */	cmplwi r0, 4
/* 801A56D0 001A2610  40 82 00 F4 */	bne .L_801A57C4
/* 801A56D4 001A2614  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A56D8 001A2618  7F 84 E3 78 */	mr r4, r28
/* 801A56DC 001A261C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A56E0 001A2620  48 09 5E B9 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A56E4 001A2624  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A56E8 001A2628  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 801A56EC 001A262C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A56F0 001A2630  38 00 00 00 */	li r0, 0
/* 801A56F4 001A2634  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 801A56F8 001A2638  38 61 00 30 */	addi r3, r1, 0x30
/* 801A56FC 001A263C  80 A6 00 C8 */	lwz r5, 0xe8(r6)
/* 801A5700 001A2640  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 801A5704 001A2644  90 01 00 CC */	stw r0, 0xcc(r1)
/* 801A5708 001A2648  90 A1 00 D4 */	stw r5, 0xd4(r1)
/* 801A570C 001A264C  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 801A5710 001A2650  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 801A5714 001A2654  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 801A5718 001A2658  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 801A571C 001A265C  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 801A5720 001A2660  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 801A5724 001A2664  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 801A5728 001A2668  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801A572C 001A266C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 801A5730 001A2670  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 801A5734 001A2674  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801A5738 001A2678  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801A573C 001A267C  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 801A5740 001A2680  80 06 00 CC */	lwz r0, 0xec(r6)
/* 801A5744 001A2684  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 801A5748 001A2688  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A574C 001A268C  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5750 001A2690  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5754 001A2694  7D 89 03 A6 */	mtctr r12
/* 801A5758 001A2698  4E 80 04 21 */	bctrl 
/* 801A575C 001A269C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 801A5760 001A26A0  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801A5764 001A26A4  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801A5768 001A26A8  D0 41 00 E0 */	stfs f2, 0xe0(r1)
/* 801A576C 001A26AC  D0 21 00 E4 */	stfs f1, 0xe4(r1)
/* 801A5770 001A26B0  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 801A5774 001A26B4  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A5778 001A26B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A577C 001A26BC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A5780 001A26C0  7D 89 03 A6 */	mtctr r12
/* 801A5784 001A26C4  4E 80 04 21 */	bctrl 
/* 801A5788 001A26C8  3C 80 C0 01 */	lis r4, 0xC001100B@ha
/* 801A578C 001A26CC  D0 21 00 EC */	stfs f1, 0xec(r1)
/* 801A5790 001A26D0  38 04 10 0B */	addi r0, r4, 0xC001100B@l
/* 801A5794 001A26D4  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801A5798 001A26D8  80 7C 03 5C */	lwz r3, 0x35c(r28)
/* 801A579C 001A26DC  A8 03 02 58 */	lha r0, 0x258(r3)
/* 801A57A0 001A26E0  2C 00 00 08 */	cmpwi r0, 8
/* 801A57A4 001A26E4  41 80 00 0C */	blt .L_801A57B0
/* 801A57A8 001A26E8  38 04 10 0A */	addi r0, r4, 0x100a
/* 801A57AC 001A26EC  90 01 00 F4 */	stw r0, 0xf4(r1)
.L_801A57B0:
/* 801A57B0 001A26F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A57B4 001A26F4  38 81 00 C8 */	addi r4, r1, 0xc8
/* 801A57B8 001A26F8  48 28 72 19 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A57BC 001A26FC  3B A0 00 01 */	li r29, 1
/* 801A57C0 001A2700  48 00 02 14 */	b .L_801A59D4
.L_801A57C4:
/* 801A57C4 001A2704  7F 83 E3 78 */	mr r3, r28
/* 801A57C8 001A2708  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A57CC 001A270C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A57D0 001A2710  7D 89 03 A6 */	mtctr r12
/* 801A57D4 001A2714  4E 80 04 21 */	bctrl 
/* 801A57D8 001A2718  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A57DC 001A271C  28 00 00 01 */	cmplwi r0, 1
/* 801A57E0 001A2720  40 82 01 F4 */	bne .L_801A59D4
/* 801A57E4 001A2724  88 1C 03 2C */	lbz r0, 0x32c(r28)
/* 801A57E8 001A2728  28 00 00 01 */	cmplwi r0, 1
/* 801A57EC 001A272C  41 82 01 E8 */	beq .L_801A59D4
/* 801A57F0 001A2730  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A57F4 001A2734  38 80 00 28 */	li r4, 0x28
/* 801A57F8 001A2738  48 04 1B E9 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A57FC 001A273C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5800 001A2740  40 82 01 D4 */	bne .L_801A59D4
/* 801A5804 001A2744  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5808 001A2748  38 80 00 28 */	li r4, 0x28
/* 801A580C 001A274C  48 04 1B 99 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A5810 001A2750  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5814 001A2754  38 9F 00 F8 */	addi r4, r31, 0xf8
/* 801A5818 001A2758  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A581C 001A275C  38 00 00 00 */	li r0, 0
/* 801A5820 001A2760  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 801A5824 001A2764  38 61 00 24 */	addi r3, r1, 0x24
/* 801A5828 001A2768  80 A6 00 C8 */	lwz r5, 0xe8(r6)
/* 801A582C 001A276C  90 81 00 94 */	stw r4, 0x94(r1)
/* 801A5830 001A2770  90 01 00 98 */	stw r0, 0x98(r1)
/* 801A5834 001A2774  90 A1 00 A0 */	stw r5, 0xa0(r1)
/* 801A5838 001A2778  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 801A583C 001A277C  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 801A5840 001A2780  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801A5844 001A2784  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 801A5848 001A2788  90 01 00 BC */	stw r0, 0xbc(r1)
/* 801A584C 001A278C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801A5850 001A2790  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801A5854 001A2794  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 801A5858 001A2798  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801A585C 001A279C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801A5860 001A27A0  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801A5864 001A27A4  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801A5868 001A27A8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801A586C 001A27AC  80 06 00 CC */	lwz r0, 0xec(r6)
/* 801A5870 001A27B0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801A5874 001A27B4  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A5878 001A27B8  81 84 00 00 */	lwz r12, 0(r4)
/* 801A587C 001A27BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5880 001A27C0  7D 89 03 A6 */	mtctr r12
/* 801A5884 001A27C4  4E 80 04 21 */	bctrl 
/* 801A5888 001A27C8  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 801A588C 001A27CC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 801A5890 001A27D0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801A5894 001A27D4  D0 41 00 AC */	stfs f2, 0xac(r1)
/* 801A5898 001A27D8  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 801A589C 001A27DC  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801A58A0 001A27E0  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A58A4 001A27E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A58A8 001A27E8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A58AC 001A27EC  7D 89 03 A6 */	mtctr r12
/* 801A58B0 001A27F0  4E 80 04 21 */	bctrl 
/* 801A58B4 001A27F4  D0 21 00 B8 */	stfs f1, 0xb8(r1)
/* 801A58B8 001A27F8  38 81 00 94 */	addi r4, r1, 0x94
/* 801A58BC 001A27FC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A58C0 001A2800  48 28 71 11 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A58C4 001A2804  3B A0 00 01 */	li r29, 1
/* 801A58C8 001A2808  48 00 01 0C */	b .L_801A59D4
.L_801A58CC:
/* 801A58CC 001A280C  28 04 00 00 */	cmplwi r4, 0
/* 801A58D0 001A2810  41 82 01 04 */	beq .L_801A59D4
/* 801A58D4 001A2814  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 801A58D8 001A2818  28 00 00 02 */	cmplwi r0, 2
/* 801A58DC 001A281C  41 81 00 F8 */	bgt .L_801A59D4
/* 801A58E0 001A2820  7F 83 E3 78 */	mr r3, r28
/* 801A58E4 001A2824  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A58E8 001A2828  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A58EC 001A282C  7D 89 03 A6 */	mtctr r12
/* 801A58F0 001A2830  4E 80 04 21 */	bctrl 
/* 801A58F4 001A2834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A58F8 001A2838  40 82 00 DC */	bne .L_801A59D4
/* 801A58FC 001A283C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5900 001A2840  38 80 00 31 */	li r4, 0x31
/* 801A5904 001A2844  48 04 1A DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A5908 001A2848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A590C 001A284C  40 82 00 C8 */	bne .L_801A59D4
/* 801A5910 001A2850  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5914 001A2854  38 80 00 31 */	li r4, 0x31
/* 801A5918 001A2858  48 04 1A 8D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A591C 001A285C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5920 001A2860  38 9F 01 0C */	addi r4, r31, 0x10c
/* 801A5924 001A2864  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5928 001A2868  38 00 00 00 */	li r0, 0
/* 801A592C 001A286C  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 801A5930 001A2870  38 61 00 18 */	addi r3, r1, 0x18
/* 801A5934 001A2874  80 A6 00 C8 */	lwz r5, 0xe8(r6)
/* 801A5938 001A2878  90 81 00 60 */	stw r4, 0x60(r1)
/* 801A593C 001A287C  90 01 00 64 */	stw r0, 0x64(r1)
/* 801A5940 001A2880  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 801A5944 001A2884  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801A5948 001A2888  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 801A594C 001A288C  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801A5950 001A2890  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801A5954 001A2894  90 01 00 88 */	stw r0, 0x88(r1)
/* 801A5958 001A2898  90 01 00 70 */	stw r0, 0x70(r1)
/* 801A595C 001A289C  90 01 00 68 */	stw r0, 0x68(r1)
/* 801A5960 001A28A0  90 01 00 8C */	stw r0, 0x8c(r1)
/* 801A5964 001A28A4  90 01 00 74 */	stw r0, 0x74(r1)
/* 801A5968 001A28A8  90 01 00 90 */	stw r0, 0x90(r1)
/* 801A596C 001A28AC  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801A5970 001A28B0  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801A5974 001A28B4  90 01 00 68 */	stw r0, 0x68(r1)
/* 801A5978 001A28B8  80 06 00 CC */	lwz r0, 0xec(r6)
/* 801A597C 001A28BC  90 01 00 70 */	stw r0, 0x70(r1)
/* 801A5980 001A28C0  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A5984 001A28C4  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5988 001A28C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A598C 001A28CC  7D 89 03 A6 */	mtctr r12
/* 801A5990 001A28D0  4E 80 04 21 */	bctrl 
/* 801A5994 001A28D4  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801A5998 001A28D8  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 801A599C 001A28DC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801A59A0 001A28E0  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 801A59A4 001A28E4  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 801A59A8 001A28E8  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801A59AC 001A28EC  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A59B0 001A28F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A59B4 001A28F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A59B8 001A28F8  7D 89 03 A6 */	mtctr r12
/* 801A59BC 001A28FC  4E 80 04 21 */	bctrl 
/* 801A59C0 001A2900  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 801A59C4 001A2904  38 81 00 60 */	addi r4, r1, 0x60
/* 801A59C8 001A2908  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A59CC 001A290C  48 28 70 05 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A59D0 001A2910  3B A0 00 01 */	li r29, 1
.L_801A59D4:
/* 801A59D4 001A2914  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 801A59D8 001A2918  41 82 00 D4 */	beq .L_801A5AAC
/* 801A59DC 001A291C  7F 83 E3 78 */	mr r3, r28
/* 801A59E0 001A2920  3B 40 00 00 */	li r26, 0
/* 801A59E4 001A2924  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A59E8 001A2928  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A59EC 001A292C  7D 89 03 A6 */	mtctr r12
/* 801A59F0 001A2930  4E 80 04 21 */	bctrl 
/* 801A59F4 001A2934  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A59F8 001A2938  28 00 00 01 */	cmplwi r0, 1
/* 801A59FC 001A293C  40 82 00 18 */	bne .L_801A5A14
/* 801A5A00 001A2940  80 7C 03 58 */	lwz r3, 0x358(r28)
/* 801A5A04 001A2944  38 80 00 00 */	li r4, 0
/* 801A5A08 001A2948  80 63 00 08 */	lwz r3, 8(r3)
/* 801A5A0C 001A294C  4B F9 60 45 */	bl movie_begin__Q24Game8CreatureFb
/* 801A5A10 001A2950  48 00 00 78 */	b .L_801A5A88
.L_801A5A14:
/* 801A5A14 001A2954  7F 83 E3 78 */	mr r3, r28
/* 801A5A18 001A2958  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5A1C 001A295C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A5A20 001A2960  7D 89 03 A6 */	mtctr r12
/* 801A5A24 001A2964  4E 80 04 21 */	bctrl 
/* 801A5A28 001A2968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5A2C 001A296C  40 82 00 14 */	bne .L_801A5A40
/* 801A5A30 001A2970  7F 83 E3 78 */	mr r3, r28
/* 801A5A34 001A2974  38 80 00 00 */	li r4, 0
/* 801A5A38 001A2978  4B F9 60 19 */	bl movie_begin__Q24Game8CreatureFb
/* 801A5A3C 001A297C  48 00 00 4C */	b .L_801A5A88
.L_801A5A40:
/* 801A5A40 001A2980  7F 83 E3 78 */	mr r3, r28
/* 801A5A44 001A2984  7F 9A E3 78 */	mr r26, r28
/* 801A5A48 001A2988  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5A4C 001A298C  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801A5A50 001A2990  7D 89 03 A6 */	mtctr r12
/* 801A5A54 001A2994  4E 80 04 21 */	bctrl 
/* 801A5A58 001A2998  7F 83 E3 78 */	mr r3, r28
/* 801A5A5C 001A299C  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5A60 001A29A0  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 801A5A64 001A29A4  7D 89 03 A6 */	mtctr r12
/* 801A5A68 001A29A8  4E 80 04 21 */	bctrl 
/* 801A5A6C 001A29AC  80 7C 03 58 */	lwz r3, 0x358(r28)
/* 801A5A70 001A29B0  28 03 00 00 */	cmplwi r3, 0
/* 801A5A74 001A29B4  41 82 00 14 */	beq .L_801A5A88
/* 801A5A78 001A29B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5A7C 001A29BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801A5A80 001A29C0  7D 89 03 A6 */	mtctr r12
/* 801A5A84 001A29C4  4E 80 04 21 */	bctrl 
.L_801A5A88:
/* 801A5A88 001A29C8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801A5A8C 001A29CC  40 82 00 14 */	bne .L_801A5AA0
/* 801A5A90 001A29D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5A94 001A29D4  7F 44 D3 78 */	mr r4, r26
/* 801A5A98 001A29D8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5A9C 001A29DC  48 09 5A FD */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
.L_801A5AA0:
/* 801A5AA0 001A29E0  7F 83 E3 78 */	mr r3, r28
/* 801A5AA4 001A29E4  38 80 00 00 */	li r4, 0
/* 801A5AA8 001A29E8  4B F9 5F A9 */	bl movie_begin__Q24Game8CreatureFb
.L_801A5AAC:
/* 801A5AAC 001A29EC  7F A3 EB 78 */	mr r3, r29
.L_801A5AB0:
/* 801A5AB0 001A29F0  BB 41 02 A8 */	lmw r26, 0x2a8(r1)
/* 801A5AB4 001A29F4  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 801A5AB8 001A29F8  7C 08 03 A6 */	mtlr r0
/* 801A5ABC 001A29FC  38 21 02 C0 */	addi r1, r1, 0x2c0
/* 801A5AC0 001A2A00  4E 80 00 20 */	blr 
.endfn checkMovie__Q24Game15PelletGoalStateFPQ24Game6Pellet
.else
.fn checkMovie__Q24Game15PelletGoalStateFPQ24Game6Pellet, global
/* 801A4D58 001A1C98  94 21 FD 40 */	stwu r1, -0x2c0(r1)
/* 801A4D5C 001A1C9C  7C 08 02 A6 */	mflr r0
/* 801A4D60 001A1CA0  3C C0 80 48 */	lis r6, lbl_8047F490@ha
/* 801A4D64 001A1CA4  90 01 02 C4 */	stw r0, 0x2c4(r1)
/* 801A4D68 001A1CA8  BF 41 02 A8 */	stmw r26, 0x2a8(r1)
/* 801A4D6C 001A1CAC  7C 7B 1B 78 */	mr r27, r3
/* 801A4D70 001A1CB0  7C 9C 23 78 */	mr r28, r4
/* 801A4D74 001A1CB4  3B E6 F4 90 */	addi r31, r6, lbl_8047F490@l
/* 801A4D78 001A1CB8  3B C0 00 00 */	li r30, 0
/* 801A4D7C 001A1CBC  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801A4D80 001A1CC0  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801A4D84 001A1CC4  2C 00 00 00 */	cmpwi r0, 0
/* 801A4D88 001A1CC8  40 82 00 10 */	bne .L_801A4D98
/* 801A4D8C 001A1CCC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4D90 001A1CD0  48 04 27 D5 */	bl firstCarryPellet__Q24Game8PlayDataFPQ24Game6Pellet
/* 801A4D94 001A1CD4  7C 7E 1B 78 */	mr r30, r3
.L_801A4D98:
/* 801A4D98 001A1CD8  7F 83 E3 78 */	mr r3, r28
/* 801A4D9C 001A1CDC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A4DA0 001A1CE0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4DA4 001A1CE4  7D 89 03 A6 */	mtctr r12
/* 801A4DA8 001A1CE8  4E 80 04 21 */	bctrl 
/* 801A4DAC 001A1CEC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A4DB0 001A1CF0  28 00 00 02 */	cmplwi r0, 2
/* 801A4DB4 001A1CF4  40 82 00 08 */	bne .L_801A4DBC
/* 801A4DB8 001A1CF8  3B C0 00 01 */	li r30, 1
.L_801A4DBC:
/* 801A4DBC 001A1CFC  7F 83 E3 78 */	mr r3, r28
/* 801A4DC0 001A1D00  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A4DC4 001A1D04  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4DC8 001A1D08  7D 89 03 A6 */	mtctr r12
/* 801A4DCC 001A1D0C  4E 80 04 21 */	bctrl 
/* 801A4DD0 001A1D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4DD4 001A1D14  40 82 00 08 */	bne .L_801A4DDC
/* 801A4DD8 001A1D18  3B C0 00 01 */	li r30, 1
.L_801A4DDC:
/* 801A4DDC 001A1D1C  80 7C 03 5C */	lwz r3, 0x35c(r28)
/* 801A4DE0 001A1D20  38 82 AE 34 */	addi r4, r2, lbl_80519194@sda21
/* 801A4DE4 001A1D24  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801A4DE8 001A1D28  4B F2 58 D9 */	bl strcmp
/* 801A4DEC 001A1D2C  2C 03 00 00 */	cmpwi r3, 0
/* 801A4DF0 001A1D30  40 82 00 4C */	bne .L_801A4E3C
/* 801A4DF4 001A1D34  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801A4DF8 001A1D38  38 60 00 00 */	li r3, 0
/* 801A4DFC 001A1D3C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801A4E00 001A1D40  2C 00 00 02 */	cmpwi r0, 2
/* 801A4E04 001A1D44  41 82 00 0C */	beq .L_801A4E10
/* 801A4E08 001A1D48  2C 00 00 03 */	cmpwi r0, 3
/* 801A4E0C 001A1D4C  40 82 00 08 */	bne .L_801A4E14
.L_801A4E10:
/* 801A4E10 001A1D50  38 60 00 01 */	li r3, 1
.L_801A4E14:
/* 801A4E14 001A1D54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4E18 001A1D58  40 82 00 54 */	bne .L_801A4E6C
/* 801A4E1C 001A1D5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E20 001A1D60  48 27 E1 11 */	bl getPlayCommonData__6SystemFv
/* 801A4E24 001A1D64  48 08 F9 8D */	bl enableChallengeGame__Q24Game14PlayCommonDataFv
/* 801A4E28 001A1D68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E2C 001A1D6C  38 00 00 01 */	li r0, 1
/* 801A4E30 001A1D70  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801A4E34 001A1D74  98 03 00 42 */	stb r0, 0x42(r3)
/* 801A4E38 001A1D78  48 00 00 34 */	b .L_801A4E6C
.L_801A4E3C:
/* 801A4E3C 001A1D7C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801A4E40 001A1D80  38 60 00 00 */	li r3, 0
/* 801A4E44 001A1D84  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801A4E48 001A1D88  2C 00 00 02 */	cmpwi r0, 2
/* 801A4E4C 001A1D8C  41 82 00 0C */	beq .L_801A4E58
/* 801A4E50 001A1D90  2C 00 00 03 */	cmpwi r0, 3
/* 801A4E54 001A1D94  40 82 00 08 */	bne .L_801A4E5C
.L_801A4E58:
/* 801A4E58 001A1D98  38 60 00 01 */	li r3, 1
.L_801A4E5C:
/* 801A4E5C 001A1D9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4E60 001A1DA0  41 82 00 0C */	beq .L_801A4E6C
/* 801A4E64 001A1DA4  38 60 00 00 */	li r3, 0
/* 801A4E68 001A1DA8  48 00 0C 48 */	b .L_801A5AB0
.L_801A4E6C:
/* 801A4E6C 001A1DAC  80 7C 03 5C */	lwz r3, 0x35c(r28)
/* 801A4E70 001A1DB0  38 82 AE 38 */	addi r4, r2, lbl_80519198@sda21
/* 801A4E74 001A1DB4  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801A4E78 001A1DB8  4B F2 58 49 */	bl strcmp
/* 801A4E7C 001A1DBC  2C 03 00 00 */	cmpwi r3, 0
/* 801A4E80 001A1DC0  40 82 00 30 */	bne .L_801A4EB0
/* 801A4E84 001A1DC4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E88 001A1DC8  48 27 E0 A9 */	bl getPlayCommonData__6SystemFv
/* 801A4E8C 001A1DCC  48 08 F9 55 */	bl enableLouieRescue__Q24Game14PlayCommonDataFv
/* 801A4E90 001A1DD0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A4E94 001A1DD4  38 00 00 01 */	li r0, 1
/* 801A4E98 001A1DD8  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801A4E9C 001A1DDC  98 03 00 42 */	stb r0, 0x42(r3)
/* 801A4EA0 001A1DE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4EA4 001A1DE4  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801A4EA8 001A1DE8  60 00 00 04 */	ori r0, r0, 4
/* 801A4EAC 001A1DEC  98 03 00 2F */	stb r0, 0x2f(r3)
.L_801A4EB0:
/* 801A4EB0 001A1DF0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801A4EB4 001A1DF4  3B C0 00 00 */	li r30, 0
/* 801A4EB8 001A1DF8  3B A0 00 00 */	li r29, 0
/* 801A4EBC 001A1DFC  41 82 0B 18 */	beq .L_801A59D4
/* 801A4EC0 001A1E00  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A4EC4 001A1E04  38 80 00 00 */	li r4, 0
/* 801A4EC8 001A1E08  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801A4ECC 001A1E0C  28 00 04 03 */	cmplwi r0, 0x403
/* 801A4ED0 001A1E10  41 82 00 0C */	beq .L_801A4EDC
/* 801A4ED4 001A1E14  28 00 04 02 */	cmplwi r0, 0x402
/* 801A4ED8 001A1E18  40 82 00 08 */	bne .L_801A4EE0
.L_801A4EDC:
/* 801A4EDC 001A1E1C  7C 64 1B 78 */	mr r4, r3
.L_801A4EE0:
/* 801A4EE0 001A1E20  28 04 00 00 */	cmplwi r4, 0
/* 801A4EE4 001A1E24  41 82 06 C0 */	beq .L_801A55A4
/* 801A4EE8 001A1E28  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 801A4EEC 001A1E2C  28 00 00 04 */	cmplwi r0, 4
/* 801A4EF0 001A1E30  40 82 06 B4 */	bne .L_801A55A4
/* 801A4EF4 001A1E34  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4EF8 001A1E38  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4EFC 001A1E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4F00 001A1E40  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A4F04 001A1E44  7D 89 03 A6 */	mtctr r12
/* 801A4F08 001A1E48  4E 80 04 21 */	bctrl 
/* 801A4F0C 001A1E4C  28 03 00 00 */	cmplwi r3, 0
/* 801A4F10 001A1E50  41 82 0A C4 */	beq .L_801A59D4
/* 801A4F14 001A1E54  7F 83 E3 78 */	mr r3, r28
/* 801A4F18 001A1E58  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A4F1C 001A1E5C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A4F20 001A1E60  7D 89 03 A6 */	mtctr r12
/* 801A4F24 001A1E64  4E 80 04 21 */	bctrl 
/* 801A4F28 001A1E68  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A4F2C 001A1E6C  28 00 00 02 */	cmplwi r0, 2
/* 801A4F30 001A1E70  40 82 04 80 */	bne .L_801A53B0
/* 801A4F34 001A1E74  A0 9C 04 3E */	lhz r4, 0x43e(r28)
/* 801A4F38 001A1E78  2C 04 00 00 */	cmpwi r4, 0
/* 801A4F3C 001A1E7C  7C 9A 23 78 */	mr r26, r4
/* 801A4F40 001A1E80  40 82 02 38 */	bne .L_801A5178
/* 801A4F44 001A1E84  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F48 001A1E88  48 04 36 91 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F4C 001A1E8C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F50 001A1E90  38 80 00 1B */	li r4, 0x1b
/* 801A4F54 001A1E94  48 04 24 8D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A4F58 001A1E98  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F5C 001A1E9C  38 80 00 1D */	li r4, 0x1d
/* 801A4F60 001A1EA0  48 04 24 81 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A4F64 001A1EA4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F68 001A1EA8  7F 44 D3 78 */	mr r4, r26
/* 801A4F6C 001A1EAC  48 04 36 6D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F70 001A1EB0  7C 7B 1B 78 */	mr r27, r3
/* 801A4F74 001A1EB4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F78 001A1EB8  7F 44 D3 78 */	mr r4, r26
/* 801A4F7C 001A1EBC  48 04 36 D5 */	bl addDopeFruit__Q24Game8PlayDataFi
/* 801A4F80 001A1EC0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F84 001A1EC4  38 80 00 00 */	li r4, 0
/* 801A4F88 001A1EC8  48 04 36 51 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F8C 001A1ECC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F90 001A1ED0  38 80 00 01 */	li r4, 1
/* 801A4F94 001A1ED4  48 04 36 45 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A4F98 001A1ED8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4F9C 001A1EDC  38 80 00 1B */	li r4, 0x1b
/* 801A4FA0 001A1EE0  48 04 24 41 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A4FA4 001A1EE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A4FA8 001A1EE8  40 82 00 94 */	bne .L_801A503C
/* 801A4FAC 001A1EEC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A4FB0 001A1EF0  38 80 00 1B */	li r4, 0x1b
/* 801A4FB4 001A1EF4  48 04 23 F1 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A4FB8 001A1EF8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4FBC 001A1EFC  7F 84 E3 78 */	mr r4, r28
/* 801A4FC0 001A1F00  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4FC4 001A1F04  48 09 65 D5 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A4FC8 001A1F08  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A4FCC 001A1F0C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A4FD0 001A1F10  81 83 00 00 */	lwz r12, 0(r3)
/* 801A4FD4 001A1F14  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A4FD8 001A1F18  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A4FDC 001A1F1C  7D 89 03 A6 */	mtctr r12
/* 801A4FE0 001A1F20  4E 80 04 21 */	bctrl 
/* 801A4FE4 001A1F24  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A4FE8 001A1F28  38 00 00 00 */	li r0, 0
/* 801A4FEC 001A1F2C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A4FF0 001A1F30  38 7F 00 44 */	addi r3, r31, 0x44
/* 801A4FF4 001A1F34  90 61 02 68 */	stw r3, 0x268(r1)
/* 801A4FF8 001A1F38  38 81 02 68 */	addi r4, r1, 0x268
/* 801A4FFC 001A1F3C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5000 001A1F40  90 A1 02 6C */	stw r5, 0x26c(r1)
/* 801A5004 001A1F44  93 61 02 74 */	stw r27, 0x274(r1)
/* 801A5008 001A1F48  D0 01 02 80 */	stfs f0, 0x280(r1)
/* 801A500C 001A1F4C  D0 01 02 84 */	stfs f0, 0x284(r1)
/* 801A5010 001A1F50  D0 01 02 88 */	stfs f0, 0x288(r1)
/* 801A5014 001A1F54  D0 01 02 8C */	stfs f0, 0x28c(r1)
/* 801A5018 001A1F58  90 01 02 90 */	stw r0, 0x290(r1)
/* 801A501C 001A1F5C  90 01 02 78 */	stw r0, 0x278(r1)
/* 801A5020 001A1F60  90 01 02 70 */	stw r0, 0x270(r1)
/* 801A5024 001A1F64  90 01 02 94 */	stw r0, 0x294(r1)
/* 801A5028 001A1F68  90 01 02 7C */	stw r0, 0x27c(r1)
/* 801A502C 001A1F6C  90 01 02 98 */	stw r0, 0x298(r1)
/* 801A5030 001A1F70  48 28 79 A1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5034 001A1F74  3B A0 00 01 */	li r29, 1
/* 801A5038 001A1F78  48 00 09 9C */	b .L_801A59D4
.L_801A503C:
/* 801A503C 001A1F7C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5040 001A1F80  38 80 00 1D */	li r4, 0x1d
/* 801A5044 001A1F84  48 04 23 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A5048 001A1F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A504C 001A1F8C  40 82 09 88 */	bne .L_801A59D4
/* 801A5050 001A1F90  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5054 001A1F94  7F 44 D3 78 */	mr r4, r26
/* 801A5058 001A1F98  48 04 35 81 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A505C 001A1F9C  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801A5060 001A1FA0  38 9B 00 01 */	addi r4, r27, 1
/* 801A5064 001A1FA4  80 03 00 38 */	lwz r0, 0x38(r3)
/* 801A5068 001A1FA8  7C 04 00 00 */	cmpw r4, r0
/* 801A506C 001A1FAC  41 80 09 68 */	blt .L_801A59D4
/* 801A5070 001A1FB0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5074 001A1FB4  38 80 00 1D */	li r4, 0x1d
/* 801A5078 001A1FB8  48 04 23 2D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A507C 001A1FBC  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801A5080 001A1FC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5084 001A1FC4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801A5088 001A1FC8  7D 89 03 A6 */	mtctr r12
/* 801A508C 001A1FCC  4E 80 04 21 */	bctrl 
/* 801A5090 001A1FD0  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801A5094 001A1FD4  38 00 00 01 */	li r0, 1
/* 801A5098 001A1FD8  38 A4 A2 F4 */	addi r5, r4, __vt__Q24Game15CreatureInitArg@l
/* 801A509C 001A1FDC  98 01 00 14 */	stb r0, 0x14(r1)
/* 801A50A0 001A1FE0  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney7InitArg@ha
/* 801A50A4 001A1FE4  7C 7A 1B 78 */	mr r26, r3
/* 801A50A8 001A1FE8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801A50AC 001A1FEC  38 A4 A2 E8 */	addi r5, r4, __vt__Q34Game9ItemHoney7InitArg@l
/* 801A50B0 001A1FF0  38 81 00 10 */	addi r4, r1, 0x10
/* 801A50B4 001A1FF4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801A50B8 001A1FF8  98 01 00 15 */	stb r0, 0x15(r1)
/* 801A50BC 001A1FFC  4B F9 5F 0D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801A50C0 001A2000  C0 22 AE 28 */	lfs f1, lbl_80519188@sda21(r2)
/* 801A50C4 001A2004  7F 43 D3 78 */	mr r3, r26
/* 801A50C8 001A2008  C0 02 AE 40 */	lfs f0, lbl_805191A0@sda21(r2)
/* 801A50CC 001A200C  38 81 00 54 */	addi r4, r1, 0x54
/* 801A50D0 001A2010  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801A50D4 001A2014  38 A0 00 00 */	li r5, 0
/* 801A50D8 001A2018  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801A50DC 001A201C  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801A50E0 001A2020  4B F9 60 C9 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801A50E4 001A2024  7F 43 D3 78 */	mr r3, r26
/* 801A50E8 001A2028  38 80 00 00 */	li r4, 0
/* 801A50EC 001A202C  4B F9 69 65 */	bl movie_begin__Q24Game8CreatureFb
/* 801A50F0 001A2030  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A50F4 001A2034  7F 44 D3 78 */	mr r4, r26
/* 801A50F8 001A2038  3B C0 00 01 */	li r30, 1
/* 801A50FC 001A203C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5100 001A2040  48 09 64 99 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A5104 001A2044  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5108 001A2048  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A510C 001A204C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5110 001A2050  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A5114 001A2054  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5118 001A2058  7D 89 03 A6 */	mtctr r12
/* 801A511C 001A205C  4E 80 04 21 */	bctrl 
/* 801A5120 001A2060  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A5124 001A2064  38 00 00 00 */	li r0, 0
/* 801A5128 001A2068  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A512C 001A206C  38 7F 00 58 */	addi r3, r31, 0x58
/* 801A5130 001A2070  90 61 02 34 */	stw r3, 0x234(r1)
/* 801A5134 001A2074  38 81 02 34 */	addi r4, r1, 0x234
/* 801A5138 001A2078  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A513C 001A207C  90 A1 02 38 */	stw r5, 0x238(r1)
/* 801A5140 001A2080  93 61 02 40 */	stw r27, 0x240(r1)
/* 801A5144 001A2084  D0 01 02 4C */	stfs f0, 0x24c(r1)
/* 801A5148 001A2088  D0 01 02 50 */	stfs f0, 0x250(r1)
/* 801A514C 001A208C  D0 01 02 54 */	stfs f0, 0x254(r1)
/* 801A5150 001A2090  D0 01 02 58 */	stfs f0, 0x258(r1)
/* 801A5154 001A2094  90 01 02 5C */	stw r0, 0x25c(r1)
/* 801A5158 001A2098  90 01 02 44 */	stw r0, 0x244(r1)
/* 801A515C 001A209C  90 01 02 3C */	stw r0, 0x23c(r1)
/* 801A5160 001A20A0  90 01 02 60 */	stw r0, 0x260(r1)
/* 801A5164 001A20A4  90 01 02 48 */	stw r0, 0x248(r1)
/* 801A5168 001A20A8  90 01 02 64 */	stw r0, 0x264(r1)
/* 801A516C 001A20AC  48 28 78 65 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5170 001A20B0  3B A0 00 01 */	li r29, 1
/* 801A5174 001A20B4  48 00 08 60 */	b .L_801A59D4
.L_801A5178:
/* 801A5178 001A20B8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A517C 001A20BC  48 04 34 5D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A5180 001A20C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5184 001A20C4  38 80 00 1C */	li r4, 0x1c
/* 801A5188 001A20C8  48 04 22 59 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A518C 001A20CC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5190 001A20D0  38 80 00 1E */	li r4, 0x1e
/* 801A5194 001A20D4  48 04 22 4D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A5198 001A20D8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A519C 001A20DC  7F 44 D3 78 */	mr r4, r26
/* 801A51A0 001A20E0  48 04 34 39 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A51A4 001A20E4  7C 7B 1B 78 */	mr r27, r3
/* 801A51A8 001A20E8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51AC 001A20EC  7F 44 D3 78 */	mr r4, r26
/* 801A51B0 001A20F0  48 04 34 A1 */	bl addDopeFruit__Q24Game8PlayDataFi
/* 801A51B4 001A20F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51B8 001A20F8  38 80 00 00 */	li r4, 0
/* 801A51BC 001A20FC  48 04 34 1D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A51C0 001A2100  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51C4 001A2104  38 80 00 01 */	li r4, 1
/* 801A51C8 001A2108  48 04 34 11 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A51CC 001A210C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51D0 001A2110  38 80 00 1C */	li r4, 0x1c
/* 801A51D4 001A2114  48 04 22 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A51D8 001A2118  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A51DC 001A211C  40 82 00 94 */	bne .L_801A5270
/* 801A51E0 001A2120  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A51E4 001A2124  38 80 00 1C */	li r4, 0x1c
/* 801A51E8 001A2128  48 04 21 BD */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A51EC 001A212C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A51F0 001A2130  7F 84 E3 78 */	mr r4, r28
/* 801A51F4 001A2134  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A51F8 001A2138  48 09 63 A1 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A51FC 001A213C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5200 001A2140  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5204 001A2144  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5208 001A2148  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A520C 001A214C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5210 001A2150  7D 89 03 A6 */	mtctr r12
/* 801A5214 001A2154  4E 80 04 21 */	bctrl 
/* 801A5218 001A2158  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A521C 001A215C  38 00 00 00 */	li r0, 0
/* 801A5220 001A2160  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5224 001A2164  38 7F 00 6C */	addi r3, r31, 0x6c
/* 801A5228 001A2168  90 61 02 00 */	stw r3, 0x200(r1)
/* 801A522C 001A216C  38 81 02 00 */	addi r4, r1, 0x200
/* 801A5230 001A2170  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5234 001A2174  90 A1 02 04 */	stw r5, 0x204(r1)
/* 801A5238 001A2178  93 61 02 0C */	stw r27, 0x20c(r1)
/* 801A523C 001A217C  D0 01 02 18 */	stfs f0, 0x218(r1)
/* 801A5240 001A2180  D0 01 02 1C */	stfs f0, 0x21c(r1)
/* 801A5244 001A2184  D0 01 02 20 */	stfs f0, 0x220(r1)
/* 801A5248 001A2188  D0 01 02 24 */	stfs f0, 0x224(r1)
/* 801A524C 001A218C  90 01 02 28 */	stw r0, 0x228(r1)
/* 801A5250 001A2190  90 01 02 10 */	stw r0, 0x210(r1)
/* 801A5254 001A2194  90 01 02 08 */	stw r0, 0x208(r1)
/* 801A5258 001A2198  90 01 02 2C */	stw r0, 0x22c(r1)
/* 801A525C 001A219C  90 01 02 14 */	stw r0, 0x214(r1)
/* 801A5260 001A21A0  90 01 02 30 */	stw r0, 0x230(r1)
/* 801A5264 001A21A4  48 28 77 6D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5268 001A21A8  3B A0 00 01 */	li r29, 1
/* 801A526C 001A21AC  48 00 07 68 */	b .L_801A59D4
.L_801A5270:
/* 801A5270 001A21B0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5274 001A21B4  38 80 00 1E */	li r4, 0x1e
/* 801A5278 001A21B8  48 04 21 69 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A527C 001A21BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5280 001A21C0  40 82 07 54 */	bne .L_801A59D4
/* 801A5284 001A21C4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5288 001A21C8  7F 44 D3 78 */	mr r4, r26
/* 801A528C 001A21CC  48 04 33 4D */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 801A5290 001A21D0  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 801A5294 001A21D4  38 9B 00 01 */	addi r4, r27, 1
/* 801A5298 001A21D8  80 03 00 38 */	lwz r0, 0x38(r3)
/* 801A529C 001A21DC  7C 04 00 00 */	cmpw r4, r0
/* 801A52A0 001A21E0  41 80 07 34 */	blt .L_801A59D4
/* 801A52A4 001A21E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A52A8 001A21E8  38 80 00 1E */	li r4, 0x1e
/* 801A52AC 001A21EC  48 04 20 F9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A52B0 001A21F0  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801A52B4 001A21F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A52B8 001A21F8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801A52BC 001A21FC  7D 89 03 A6 */	mtctr r12
/* 801A52C0 001A2200  4E 80 04 21 */	bctrl 
/* 801A52C4 001A2204  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801A52C8 001A2208  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney7InitArg@ha
/* 801A52CC 001A220C  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 801A52D0 001A2210  7C 7A 1B 78 */	mr r26, r3
/* 801A52D4 001A2214  90 01 00 08 */	stw r0, 8(r1)
/* 801A52D8 001A2218  38 A0 00 02 */	li r5, 2
/* 801A52DC 001A221C  38 84 A2 E8 */	addi r4, r4, __vt__Q34Game9ItemHoney7InitArg@l
/* 801A52E0 001A2220  38 00 00 01 */	li r0, 1
/* 801A52E4 001A2224  90 81 00 08 */	stw r4, 8(r1)
/* 801A52E8 001A2228  38 81 00 08 */	addi r4, r1, 8
/* 801A52EC 001A222C  98 A1 00 0C */	stb r5, 0xc(r1)
/* 801A52F0 001A2230  98 01 00 0D */	stb r0, 0xd(r1)
/* 801A52F4 001A2234  4B F9 5C D5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801A52F8 001A2238  C0 22 AE 28 */	lfs f1, lbl_80519188@sda21(r2)
/* 801A52FC 001A223C  7F 43 D3 78 */	mr r3, r26
/* 801A5300 001A2240  C0 02 AE 40 */	lfs f0, lbl_805191A0@sda21(r2)
/* 801A5304 001A2244  38 81 00 48 */	addi r4, r1, 0x48
/* 801A5308 001A2248  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801A530C 001A224C  38 A0 00 00 */	li r5, 0
/* 801A5310 001A2250  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801A5314 001A2254  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 801A5318 001A2258  4B F9 5E 91 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801A531C 001A225C  7F 43 D3 78 */	mr r3, r26
/* 801A5320 001A2260  38 80 00 00 */	li r4, 0
/* 801A5324 001A2264  4B F9 67 2D */	bl movie_begin__Q24Game8CreatureFb
/* 801A5328 001A2268  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A532C 001A226C  7F 44 D3 78 */	mr r4, r26
/* 801A5330 001A2270  3B C0 00 01 */	li r30, 1
/* 801A5334 001A2274  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5338 001A2278  48 09 62 61 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A533C 001A227C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5340 001A2280  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5344 001A2284  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5348 001A2288  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A534C 001A228C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5350 001A2290  7D 89 03 A6 */	mtctr r12
/* 801A5354 001A2294  4E 80 04 21 */	bctrl 
/* 801A5358 001A2298  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A535C 001A229C  38 00 00 00 */	li r0, 0
/* 801A5360 001A22A0  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5364 001A22A4  38 7F 00 80 */	addi r3, r31, 0x80
/* 801A5368 001A22A8  90 61 01 CC */	stw r3, 0x1cc(r1)
/* 801A536C 001A22AC  38 81 01 CC */	addi r4, r1, 0x1cc
/* 801A5370 001A22B0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5374 001A22B4  90 A1 01 D0 */	stw r5, 0x1d0(r1)
/* 801A5378 001A22B8  93 61 01 D8 */	stw r27, 0x1d8(r1)
/* 801A537C 001A22BC  D0 01 01 E4 */	stfs f0, 0x1e4(r1)
/* 801A5380 001A22C0  D0 01 01 E8 */	stfs f0, 0x1e8(r1)
/* 801A5384 001A22C4  D0 01 01 EC */	stfs f0, 0x1ec(r1)
/* 801A5388 001A22C8  D0 01 01 F0 */	stfs f0, 0x1f0(r1)
/* 801A538C 001A22CC  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 801A5390 001A22D0  90 01 01 DC */	stw r0, 0x1dc(r1)
/* 801A5394 001A22D4  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 801A5398 001A22D8  90 01 01 F8 */	stw r0, 0x1f8(r1)
/* 801A539C 001A22DC  90 01 01 E0 */	stw r0, 0x1e0(r1)
/* 801A53A0 001A22E0  90 01 01 FC */	stw r0, 0x1fc(r1)
/* 801A53A4 001A22E4  48 28 76 2D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A53A8 001A22E8  3B A0 00 01 */	li r29, 1
/* 801A53AC 001A22EC  48 00 06 28 */	b .L_801A59D4
.L_801A53B0:
/* 801A53B0 001A22F0  7F 83 E3 78 */	mr r3, r28
/* 801A53B4 001A22F4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A53B8 001A22F8  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A53BC 001A22FC  7D 89 03 A6 */	mtctr r12
/* 801A53C0 001A2300  4E 80 04 21 */	bctrl 
/* 801A53C4 001A2304  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A53C8 001A2308  28 00 00 03 */	cmplwi r0, 3
/* 801A53CC 001A230C  40 82 00 94 */	bne .L_801A5460
/* 801A53D0 001A2310  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A53D4 001A2314  7F 84 E3 78 */	mr r4, r28
/* 801A53D8 001A2318  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A53DC 001A231C  48 09 61 BD */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A53E0 001A2320  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A53E4 001A2324  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A53E8 001A2328  81 83 00 00 */	lwz r12, 0(r3)
/* 801A53EC 001A232C  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A53F0 001A2330  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A53F4 001A2334  7D 89 03 A6 */	mtctr r12
/* 801A53F8 001A2338  4E 80 04 21 */	bctrl 
/* 801A53FC 001A233C  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A5400 001A2340  38 00 00 00 */	li r0, 0
/* 801A5404 001A2344  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5408 001A2348  38 7F 00 94 */	addi r3, r31, 0x94
/* 801A540C 001A234C  90 61 01 98 */	stw r3, 0x198(r1)
/* 801A5410 001A2350  38 81 01 98 */	addi r4, r1, 0x198
/* 801A5414 001A2354  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5418 001A2358  90 A1 01 9C */	stw r5, 0x19c(r1)
/* 801A541C 001A235C  93 61 01 A4 */	stw r27, 0x1a4(r1)
/* 801A5420 001A2360  D0 01 01 B0 */	stfs f0, 0x1b0(r1)
/* 801A5424 001A2364  D0 01 01 B4 */	stfs f0, 0x1b4(r1)
/* 801A5428 001A2368  D0 01 01 B8 */	stfs f0, 0x1b8(r1)
/* 801A542C 001A236C  D0 01 01 BC */	stfs f0, 0x1bc(r1)
/* 801A5430 001A2370  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 801A5434 001A2374  90 01 01 A8 */	stw r0, 0x1a8(r1)
/* 801A5438 001A2378  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 801A543C 001A237C  90 01 01 C4 */	stw r0, 0x1c4(r1)
/* 801A5440 001A2380  90 01 01 AC */	stw r0, 0x1ac(r1)
/* 801A5444 001A2384  90 01 01 C8 */	stw r0, 0x1c8(r1)
/* 801A5448 001A2388  80 BC 03 5C */	lwz r5, 0x35c(r28)
/* 801A544C 001A238C  80 05 00 40 */	lwz r0, 0x40(r5)
/* 801A5450 001A2390  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 801A5454 001A2394  48 28 75 7D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5458 001A2398  3B A0 00 01 */	li r29, 1
/* 801A545C 001A239C  48 00 05 78 */	b .L_801A59D4
.L_801A5460:
/* 801A5460 001A23A0  7F 83 E3 78 */	mr r3, r28
/* 801A5464 001A23A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5468 001A23A8  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A546C 001A23AC  7D 89 03 A6 */	mtctr r12
/* 801A5470 001A23B0  4E 80 04 21 */	bctrl 
/* 801A5474 001A23B4  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A5478 001A23B8  28 00 00 04 */	cmplwi r0, 4
/* 801A547C 001A23BC  40 82 00 B4 */	bne .L_801A5530
/* 801A5480 001A23C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5484 001A23C4  7F 84 E3 78 */	mr r4, r28
/* 801A5488 001A23C8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A548C 001A23CC  48 09 61 0D */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A5490 001A23D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5494 001A23D4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5498 001A23D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A549C 001A23DC  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A54A0 001A23E0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A54A4 001A23E4  7D 89 03 A6 */	mtctr r12
/* 801A54A8 001A23E8  4E 80 04 21 */	bctrl 
/* 801A54AC 001A23EC  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A54B0 001A23F0  38 80 00 00 */	li r4, 0
/* 801A54B4 001A23F4  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A54B8 001A23F8  38 1F 00 A8 */	addi r0, r31, 0xa8
/* 801A54BC 001A23FC  90 01 01 64 */	stw r0, 0x164(r1)
/* 801A54C0 001A2400  3C 60 C0 01 */	lis r3, 0xC001100B@ha
/* 801A54C4 001A2404  38 03 10 0B */	addi r0, r3, 0xC001100B@l
/* 801A54C8 001A2408  90 A1 01 68 */	stw r5, 0x168(r1)
/* 801A54CC 001A240C  93 61 01 70 */	stw r27, 0x170(r1)
/* 801A54D0 001A2410  D0 01 01 7C */	stfs f0, 0x17c(r1)
/* 801A54D4 001A2414  D0 01 01 80 */	stfs f0, 0x180(r1)
/* 801A54D8 001A2418  D0 01 01 84 */	stfs f0, 0x184(r1)
/* 801A54DC 001A241C  D0 01 01 88 */	stfs f0, 0x188(r1)
/* 801A54E0 001A2420  90 81 01 8C */	stw r4, 0x18c(r1)
/* 801A54E4 001A2424  90 81 01 74 */	stw r4, 0x174(r1)
/* 801A54E8 001A2428  90 81 01 6C */	stw r4, 0x16c(r1)
/* 801A54EC 001A242C  90 81 01 90 */	stw r4, 0x190(r1)
/* 801A54F0 001A2430  90 81 01 78 */	stw r4, 0x178(r1)
/* 801A54F4 001A2434  90 81 01 94 */	stw r4, 0x194(r1)
/* 801A54F8 001A2438  80 BC 03 5C */	lwz r5, 0x35c(r28)
/* 801A54FC 001A243C  80 85 00 40 */	lwz r4, 0x40(r5)
/* 801A5500 001A2440  90 81 01 6C */	stw r4, 0x16c(r1)
/* 801A5504 001A2444  90 01 01 90 */	stw r0, 0x190(r1)
/* 801A5508 001A2448  A8 05 02 58 */	lha r0, 0x258(r5)
/* 801A550C 001A244C  2C 00 00 08 */	cmpwi r0, 8
/* 801A5510 001A2450  41 80 00 0C */	blt .L_801A551C
/* 801A5514 001A2454  38 03 10 0A */	addi r0, r3, 0x100a
/* 801A5518 001A2458  90 01 01 90 */	stw r0, 0x190(r1)
.L_801A551C:
/* 801A551C 001A245C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5520 001A2460  38 81 01 64 */	addi r4, r1, 0x164
/* 801A5524 001A2464  48 28 74 AD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A5528 001A2468  3B A0 00 01 */	li r29, 1
/* 801A552C 001A246C  48 00 04 A8 */	b .L_801A59D4
.L_801A5530:
/* 801A5530 001A2470  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5534 001A2474  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5538 001A2478  81 83 00 00 */	lwz r12, 0(r3)
/* 801A553C 001A247C  83 63 00 C8 */	lwz r27, 0xc8(r3)
/* 801A5540 001A2480  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5544 001A2484  7D 89 03 A6 */	mtctr r12
/* 801A5548 001A2488  4E 80 04 21 */	bctrl 
/* 801A554C 001A248C  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 801A5550 001A2490  38 00 00 00 */	li r0, 0
/* 801A5554 001A2494  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5558 001A2498  38 7F 00 BC */	addi r3, r31, 0xbc
/* 801A555C 001A249C  90 61 01 30 */	stw r3, 0x130(r1)
/* 801A5560 001A24A0  38 81 01 30 */	addi r4, r1, 0x130
/* 801A5564 001A24A4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5568 001A24A8  90 A1 01 34 */	stw r5, 0x134(r1)
/* 801A556C 001A24AC  93 61 01 3C */	stw r27, 0x13c(r1)
/* 801A5570 001A24B0  D0 01 01 48 */	stfs f0, 0x148(r1)
/* 801A5574 001A24B4  D0 01 01 4C */	stfs f0, 0x14c(r1)
/* 801A5578 001A24B8  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 801A557C 001A24BC  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 801A5580 001A24C0  90 01 01 58 */	stw r0, 0x158(r1)
/* 801A5584 001A24C4  90 01 01 40 */	stw r0, 0x140(r1)
/* 801A5588 001A24C8  90 01 01 38 */	stw r0, 0x138(r1)
/* 801A558C 001A24CC  90 01 01 5C */	stw r0, 0x15c(r1)
/* 801A5590 001A24D0  90 01 01 44 */	stw r0, 0x144(r1)
/* 801A5594 001A24D4  90 01 01 60 */	stw r0, 0x160(r1)
/* 801A5598 001A24D8  48 28 74 39 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A559C 001A24DC  3B A0 00 01 */	li r29, 1
/* 801A55A0 001A24E0  48 00 04 34 */	b .L_801A59D4
.L_801A55A4:
/* 801A55A4 001A24E4  28 04 00 00 */	cmplwi r4, 0
/* 801A55A8 001A24E8  41 82 03 24 */	beq .L_801A58CC
/* 801A55AC 001A24EC  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 801A55B0 001A24F0  28 00 00 03 */	cmplwi r0, 3
/* 801A55B4 001A24F4  40 82 03 18 */	bne .L_801A58CC
/* 801A55B8 001A24F8  7F 83 E3 78 */	mr r3, r28
/* 801A55BC 001A24FC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A55C0 001A2500  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A55C4 001A2504  7D 89 03 A6 */	mtctr r12
/* 801A55C8 001A2508  4E 80 04 21 */	bctrl 
/* 801A55CC 001A250C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A55D0 001A2510  28 00 00 03 */	cmplwi r0, 3
/* 801A55D4 001A2514  40 82 00 E0 */	bne .L_801A56B4
/* 801A55D8 001A2518  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A55DC 001A251C  7F 84 E3 78 */	mr r4, r28
/* 801A55E0 001A2520  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A55E4 001A2524  48 09 5F B5 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A55E8 001A2528  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A55EC 001A252C  38 9F 00 C8 */	addi r4, r31, 0xc8
/* 801A55F0 001A2530  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A55F4 001A2534  38 00 00 00 */	li r0, 0
/* 801A55F8 001A2538  80 A3 00 58 */	lwz r5, 0x58(r3)
/* 801A55FC 001A253C  38 61 00 3C */	addi r3, r1, 0x3c
/* 801A5600 001A2540  80 A5 00 C8 */	lwz r5, 0xc8(r5)
/* 801A5604 001A2544  90 81 00 FC */	stw r4, 0xfc(r1)
/* 801A5608 001A2548  90 01 01 00 */	stw r0, 0x100(r1)
/* 801A560C 001A254C  90 A1 01 08 */	stw r5, 0x108(r1)
/* 801A5610 001A2550  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 801A5614 001A2554  D0 01 01 18 */	stfs f0, 0x118(r1)
/* 801A5618 001A2558  D0 01 01 1C */	stfs f0, 0x11c(r1)
/* 801A561C 001A255C  D0 01 01 20 */	stfs f0, 0x120(r1)
/* 801A5620 001A2560  90 01 01 24 */	stw r0, 0x124(r1)
/* 801A5624 001A2564  90 01 01 0C */	stw r0, 0x10c(r1)
/* 801A5628 001A2568  90 01 01 04 */	stw r0, 0x104(r1)
/* 801A562C 001A256C  90 01 01 28 */	stw r0, 0x128(r1)
/* 801A5630 001A2570  90 01 01 10 */	stw r0, 0x110(r1)
/* 801A5634 001A2574  90 01 01 2C */	stw r0, 0x12c(r1)
/* 801A5638 001A2578  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A563C 001A257C  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5640 001A2580  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5644 001A2584  7D 89 03 A6 */	mtctr r12
/* 801A5648 001A2588  4E 80 04 21 */	bctrl 
/* 801A564C 001A258C  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 801A5650 001A2590  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801A5654 001A2594  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 801A5658 001A2598  D0 41 01 14 */	stfs f2, 0x114(r1)
/* 801A565C 001A259C  D0 21 01 18 */	stfs f1, 0x118(r1)
/* 801A5660 001A25A0  D0 01 01 1C */	stfs f0, 0x11c(r1)
/* 801A5664 001A25A4  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A5668 001A25A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A566C 001A25AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A5670 001A25B0  7D 89 03 A6 */	mtctr r12
/* 801A5674 001A25B4  4E 80 04 21 */	bctrl 
/* 801A5678 001A25B8  D0 21 01 20 */	stfs f1, 0x120(r1)
/* 801A567C 001A25BC  38 81 00 FC */	addi r4, r1, 0xfc
/* 801A5680 001A25C0  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801A5684 001A25C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5688 001A25C8  80 A5 00 58 */	lwz r5, 0x58(r5)
/* 801A568C 001A25CC  80 05 00 CC */	lwz r0, 0xcc(r5)
/* 801A5690 001A25D0  90 01 01 0C */	stw r0, 0x10c(r1)
/* 801A5694 001A25D4  80 05 00 C8 */	lwz r0, 0xc8(r5)
/* 801A5698 001A25D8  90 01 01 08 */	stw r0, 0x108(r1)
/* 801A569C 001A25DC  80 BC 03 5C */	lwz r5, 0x35c(r28)
/* 801A56A0 001A25E0  80 05 00 40 */	lwz r0, 0x40(r5)
/* 801A56A4 001A25E4  90 01 01 04 */	stw r0, 0x104(r1)
/* 801A56A8 001A25E8  48 28 73 29 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A56AC 001A25EC  3B A0 00 01 */	li r29, 1
/* 801A56B0 001A25F0  48 00 03 24 */	b .L_801A59D4
.L_801A56B4:
/* 801A56B4 001A25F4  7F 83 E3 78 */	mr r3, r28
/* 801A56B8 001A25F8  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A56BC 001A25FC  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A56C0 001A2600  7D 89 03 A6 */	mtctr r12
/* 801A56C4 001A2604  4E 80 04 21 */	bctrl 
/* 801A56C8 001A2608  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A56CC 001A260C  28 00 00 04 */	cmplwi r0, 4
/* 801A56D0 001A2610  40 82 00 F4 */	bne .L_801A57C4
/* 801A56D4 001A2614  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A56D8 001A2618  7F 84 E3 78 */	mr r4, r28
/* 801A56DC 001A261C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A56E0 001A2620  48 09 5E B9 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 801A56E4 001A2624  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A56E8 001A2628  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 801A56EC 001A262C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A56F0 001A2630  38 00 00 00 */	li r0, 0
/* 801A56F4 001A2634  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 801A56F8 001A2638  38 61 00 30 */	addi r3, r1, 0x30
/* 801A56FC 001A263C  80 A6 00 C8 */	lwz r5, 0xc8(r6)
/* 801A5700 001A2640  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 801A5704 001A2644  90 01 00 CC */	stw r0, 0xcc(r1)
/* 801A5708 001A2648  90 A1 00 D4 */	stw r5, 0xd4(r1)
/* 801A570C 001A264C  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 801A5710 001A2650  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 801A5714 001A2654  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 801A5718 001A2658  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 801A571C 001A265C  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 801A5720 001A2660  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 801A5724 001A2664  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 801A5728 001A2668  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801A572C 001A266C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 801A5730 001A2670  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 801A5734 001A2674  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801A5738 001A2678  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801A573C 001A267C  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 801A5740 001A2680  80 06 00 CC */	lwz r0, 0xcc(r6)
/* 801A5744 001A2684  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 801A5748 001A2688  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A574C 001A268C  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5750 001A2690  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5754 001A2694  7D 89 03 A6 */	mtctr r12
/* 801A5758 001A2698  4E 80 04 21 */	bctrl 
/* 801A575C 001A269C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 801A5760 001A26A0  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801A5764 001A26A4  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801A5768 001A26A8  D0 41 00 E0 */	stfs f2, 0xe0(r1)
/* 801A576C 001A26AC  D0 21 00 E4 */	stfs f1, 0xe4(r1)
/* 801A5770 001A26B0  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 801A5774 001A26B4  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A5778 001A26B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A577C 001A26BC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A5780 001A26C0  7D 89 03 A6 */	mtctr r12
/* 801A5784 001A26C4  4E 80 04 21 */	bctrl 
/* 801A5788 001A26C8  3C 80 C0 01 */	lis r4, 0xC001100B@ha
/* 801A578C 001A26CC  D0 21 00 EC */	stfs f1, 0xec(r1)
/* 801A5790 001A26D0  38 04 10 0B */	addi r0, r4, 0xC001100B@l
/* 801A5794 001A26D4  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801A5798 001A26D8  80 7C 03 5C */	lwz r3, 0x35c(r28)
/* 801A579C 001A26DC  A8 03 02 58 */	lha r0, 0x258(r3)
/* 801A57A0 001A26E0  2C 00 00 08 */	cmpwi r0, 8
/* 801A57A4 001A26E4  41 80 00 0C */	blt .L_801A57B0
/* 801A57A8 001A26E8  38 04 10 0A */	addi r0, r4, 0x100a
/* 801A57AC 001A26EC  90 01 00 F4 */	stw r0, 0xf4(r1)
.L_801A57B0:
/* 801A57B0 001A26F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A57B4 001A26F4  38 81 00 C8 */	addi r4, r1, 0xc8
/* 801A57B8 001A26F8  48 28 72 19 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A57BC 001A26FC  3B A0 00 01 */	li r29, 1
/* 801A57C0 001A2700  48 00 02 14 */	b .L_801A59D4
.L_801A57C4:
/* 801A57C4 001A2704  7F 83 E3 78 */	mr r3, r28
/* 801A57C8 001A2708  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A57CC 001A270C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A57D0 001A2710  7D 89 03 A6 */	mtctr r12
/* 801A57D4 001A2714  4E 80 04 21 */	bctrl 
/* 801A57D8 001A2718  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A57DC 001A271C  28 00 00 01 */	cmplwi r0, 1
/* 801A57E0 001A2720  40 82 01 F4 */	bne .L_801A59D4
/* 801A57E4 001A2724  88 1C 03 2C */	lbz r0, 0x32c(r28)
/* 801A57E8 001A2728  28 00 00 01 */	cmplwi r0, 1
/* 801A57EC 001A272C  41 82 01 E8 */	beq .L_801A59D4
/* 801A57F0 001A2730  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A57F4 001A2734  38 80 00 28 */	li r4, 0x28
/* 801A57F8 001A2738  48 04 1B E9 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A57FC 001A273C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5800 001A2740  40 82 01 D4 */	bne .L_801A59D4
/* 801A5804 001A2744  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5808 001A2748  38 80 00 28 */	li r4, 0x28
/* 801A580C 001A274C  48 04 1B 99 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A5810 001A2750  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5814 001A2754  38 9F 00 F8 */	addi r4, r31, 0xf8
/* 801A5818 001A2758  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A581C 001A275C  38 00 00 00 */	li r0, 0
/* 801A5820 001A2760  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 801A5824 001A2764  38 61 00 24 */	addi r3, r1, 0x24
/* 801A5828 001A2768  80 A6 00 C8 */	lwz r5, 0xc8(r6)
/* 801A582C 001A276C  90 81 00 94 */	stw r4, 0x94(r1)
/* 801A5830 001A2770  90 01 00 98 */	stw r0, 0x98(r1)
/* 801A5834 001A2774  90 A1 00 A0 */	stw r5, 0xa0(r1)
/* 801A5838 001A2778  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 801A583C 001A277C  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 801A5840 001A2780  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801A5844 001A2784  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 801A5848 001A2788  90 01 00 BC */	stw r0, 0xbc(r1)
/* 801A584C 001A278C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801A5850 001A2790  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801A5854 001A2794  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 801A5858 001A2798  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801A585C 001A279C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801A5860 001A27A0  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801A5864 001A27A4  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801A5868 001A27A8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801A586C 001A27AC  80 06 00 CC */	lwz r0, 0xcc(r6)
/* 801A5870 001A27B0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801A5874 001A27B4  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A5878 001A27B8  81 84 00 00 */	lwz r12, 0(r4)
/* 801A587C 001A27BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5880 001A27C0  7D 89 03 A6 */	mtctr r12
/* 801A5884 001A27C4  4E 80 04 21 */	bctrl 
/* 801A5888 001A27C8  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 801A588C 001A27CC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 801A5890 001A27D0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801A5894 001A27D4  D0 41 00 AC */	stfs f2, 0xac(r1)
/* 801A5898 001A27D8  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 801A589C 001A27DC  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801A58A0 001A27E0  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A58A4 001A27E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A58A8 001A27E8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A58AC 001A27EC  7D 89 03 A6 */	mtctr r12
/* 801A58B0 001A27F0  4E 80 04 21 */	bctrl 
/* 801A58B4 001A27F4  D0 21 00 B8 */	stfs f1, 0xb8(r1)
/* 801A58B8 001A27F8  38 81 00 94 */	addi r4, r1, 0x94
/* 801A58BC 001A27FC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A58C0 001A2800  48 28 71 11 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A58C4 001A2804  3B A0 00 01 */	li r29, 1
/* 801A58C8 001A2808  48 00 01 0C */	b .L_801A59D4
.L_801A58CC:
/* 801A58CC 001A280C  28 04 00 00 */	cmplwi r4, 0
/* 801A58D0 001A2810  41 82 01 04 */	beq .L_801A59D4
/* 801A58D4 001A2814  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 801A58D8 001A2818  28 00 00 02 */	cmplwi r0, 2
/* 801A58DC 001A281C  41 81 00 F8 */	bgt .L_801A59D4
/* 801A58E0 001A2820  7F 83 E3 78 */	mr r3, r28
/* 801A58E4 001A2824  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A58E8 001A2828  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A58EC 001A282C  7D 89 03 A6 */	mtctr r12
/* 801A58F0 001A2830  4E 80 04 21 */	bctrl 
/* 801A58F4 001A2834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A58F8 001A2838  40 82 00 DC */	bne .L_801A59D4
/* 801A58FC 001A283C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5900 001A2840  38 80 00 31 */	li r4, 0x31
/* 801A5904 001A2844  48 04 1A DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801A5908 001A2848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A590C 001A284C  40 82 00 C8 */	bne .L_801A59D4
/* 801A5910 001A2850  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801A5914 001A2854  38 80 00 31 */	li r4, 0x31
/* 801A5918 001A2858  48 04 1A 8D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801A591C 001A285C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5920 001A2860  38 9F 01 0C */	addi r4, r31, 0x10c
/* 801A5924 001A2864  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5928 001A2868  38 00 00 00 */	li r0, 0
/* 801A592C 001A286C  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 801A5930 001A2870  38 61 00 18 */	addi r3, r1, 0x18
/* 801A5934 001A2874  80 A6 00 C8 */	lwz r5, 0xc8(r6)
/* 801A5938 001A2878  90 81 00 60 */	stw r4, 0x60(r1)
/* 801A593C 001A287C  90 01 00 64 */	stw r0, 0x64(r1)
/* 801A5940 001A2880  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 801A5944 001A2884  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801A5948 001A2888  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 801A594C 001A288C  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801A5950 001A2890  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801A5954 001A2894  90 01 00 88 */	stw r0, 0x88(r1)
/* 801A5958 001A2898  90 01 00 70 */	stw r0, 0x70(r1)
/* 801A595C 001A289C  90 01 00 68 */	stw r0, 0x68(r1)
/* 801A5960 001A28A0  90 01 00 8C */	stw r0, 0x8c(r1)
/* 801A5964 001A28A4  90 01 00 74 */	stw r0, 0x74(r1)
/* 801A5968 001A28A8  90 01 00 90 */	stw r0, 0x90(r1)
/* 801A596C 001A28AC  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801A5970 001A28B0  80 04 00 40 */	lwz r0, 0x40(r4)
/* 801A5974 001A28B4  90 01 00 68 */	stw r0, 0x68(r1)
/* 801A5978 001A28B8  80 06 00 CC */	lwz r0, 0xcc(r6)
/* 801A597C 001A28BC  90 01 00 70 */	stw r0, 0x70(r1)
/* 801A5980 001A28C0  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 801A5984 001A28C4  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5988 001A28C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A598C 001A28CC  7D 89 03 A6 */	mtctr r12
/* 801A5990 001A28D0  4E 80 04 21 */	bctrl 
/* 801A5994 001A28D4  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801A5998 001A28D8  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 801A599C 001A28DC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801A59A0 001A28E0  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 801A59A4 001A28E4  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 801A59A8 001A28E8  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801A59AC 001A28EC  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 801A59B0 001A28F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A59B4 001A28F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801A59B8 001A28F8  7D 89 03 A6 */	mtctr r12
/* 801A59BC 001A28FC  4E 80 04 21 */	bctrl 
/* 801A59C0 001A2900  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 801A59C4 001A2904  38 81 00 60 */	addi r4, r1, 0x60
/* 801A59C8 001A2908  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A59CC 001A290C  48 28 70 05 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801A59D0 001A2910  3B A0 00 01 */	li r29, 1
.L_801A59D4:
/* 801A59D4 001A2914  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 801A59D8 001A2918  41 82 00 D4 */	beq .L_801A5AAC
/* 801A59DC 001A291C  7F 83 E3 78 */	mr r3, r28
/* 801A59E0 001A2920  3B 40 00 00 */	li r26, 0
/* 801A59E4 001A2924  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A59E8 001A2928  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A59EC 001A292C  7D 89 03 A6 */	mtctr r12
/* 801A59F0 001A2930  4E 80 04 21 */	bctrl 
/* 801A59F4 001A2934  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A59F8 001A2938  28 00 00 01 */	cmplwi r0, 1
/* 801A59FC 001A293C  40 82 00 18 */	bne .L_801A5A14
/* 801A5A00 001A2940  80 7C 03 58 */	lwz r3, 0x358(r28)
/* 801A5A04 001A2944  38 80 00 00 */	li r4, 0
/* 801A5A08 001A2948  80 63 00 08 */	lwz r3, 8(r3)
/* 801A5A0C 001A294C  4B F9 60 45 */	bl movie_begin__Q24Game8CreatureFb
/* 801A5A10 001A2950  48 00 00 78 */	b .L_801A5A88
.L_801A5A14:
/* 801A5A14 001A2954  7F 83 E3 78 */	mr r3, r28
/* 801A5A18 001A2958  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5A1C 001A295C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A5A20 001A2960  7D 89 03 A6 */	mtctr r12
/* 801A5A24 001A2964  4E 80 04 21 */	bctrl 
/* 801A5A28 001A2968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5A2C 001A296C  40 82 00 14 */	bne .L_801A5A40
/* 801A5A30 001A2970  7F 83 E3 78 */	mr r3, r28
/* 801A5A34 001A2974  38 80 00 00 */	li r4, 0
/* 801A5A38 001A2978  4B F9 60 19 */	bl movie_begin__Q24Game8CreatureFb
/* 801A5A3C 001A297C  48 00 00 4C */	b .L_801A5A88
.L_801A5A40:
/* 801A5A40 001A2980  7F 83 E3 78 */	mr r3, r28
/* 801A5A44 001A2984  7F 9A E3 78 */	mr r26, r28
/* 801A5A48 001A2988  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5A4C 001A298C  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801A5A50 001A2990  7D 89 03 A6 */	mtctr r12
/* 801A5A54 001A2994  4E 80 04 21 */	bctrl 
/* 801A5A58 001A2998  7F 83 E3 78 */	mr r3, r28
/* 801A5A5C 001A299C  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A5A60 001A29A0  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 801A5A64 001A29A4  7D 89 03 A6 */	mtctr r12
/* 801A5A68 001A29A8  4E 80 04 21 */	bctrl 
/* 801A5A6C 001A29AC  80 7C 03 58 */	lwz r3, 0x358(r28)
/* 801A5A70 001A29B0  28 03 00 00 */	cmplwi r3, 0
/* 801A5A74 001A29B4  41 82 00 14 */	beq .L_801A5A88
/* 801A5A78 001A29B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5A7C 001A29BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801A5A80 001A29C0  7D 89 03 A6 */	mtctr r12
/* 801A5A84 001A29C4  4E 80 04 21 */	bctrl 
.L_801A5A88:
/* 801A5A88 001A29C8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801A5A8C 001A29CC  40 82 00 14 */	bne .L_801A5AA0
/* 801A5A90 001A29D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A5A94 001A29D4  7F 44 D3 78 */	mr r4, r26
/* 801A5A98 001A29D8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801A5A9C 001A29DC  48 09 5A FD */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
.L_801A5AA0:
/* 801A5AA0 001A29E0  7F 83 E3 78 */	mr r3, r28
/* 801A5AA4 001A29E4  38 80 00 00 */	li r4, 0
/* 801A5AA8 001A29E8  4B F9 5F A9 */	bl movie_begin__Q24Game8CreatureFb
.L_801A5AAC:
/* 801A5AAC 001A29EC  7F A3 EB 78 */	mr r3, r29
.L_801A5AB0:
/* 801A5AB0 001A29F0  BB 41 02 A8 */	lmw r26, 0x2a8(r1)
/* 801A5AB4 001A29F4  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 801A5AB8 001A29F8  7C 08 03 A6 */	mtlr r0
/* 801A5ABC 001A29FC  38 21 02 C0 */	addi r1, r1, 0x2c0
/* 801A5AC0 001A2A00  4E 80 00 20 */	blr 
.endfn checkMovie__Q24Game15PelletGoalStateFPQ24Game6Pellet
.endif

.fn exec__Q24Game15PelletGoalStateFPQ24Game6Pellet, global
/* 801A5AC4 001A2A04  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801A5AC8 001A2A08  7C 08 02 A6 */	mflr r0
/* 801A5ACC 001A2A0C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801A5AD0 001A2A10  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 801A5AD4 001A2A14  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 801A5AD8 001A2A18  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 801A5ADC 001A2A1C  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 801A5AE0 001A2A20  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 801A5AE4 001A2A24  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 801A5AE8 001A2A28  93 E1 00 AC */	stw r31, 0xac(r1)
/* 801A5AEC 001A2A2C  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 801A5AF0 001A2A30  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 801A5AF4 001A2A34  93 81 00 A0 */	stw r28, 0xa0(r1)
/* 801A5AF8 001A2A38  7C 9E 23 78 */	mr r30, r4
/* 801A5AFC 001A2A3C  3C 80 80 48 */	lis r4, lbl_8047F490@ha
/* 801A5B00 001A2A40  80 BE 03 58 */	lwz r5, 0x358(r30)
/* 801A5B04 001A2A44  7C 7D 1B 78 */	mr r29, r3
/* 801A5B08 001A2A48  3B E4 F4 90 */	addi r31, r4, lbl_8047F490@l
/* 801A5B0C 001A2A4C  28 05 00 00 */	cmplwi r5, 0
/* 801A5B10 001A2A50  41 82 00 3C */	beq .L_801A5B4C
/* 801A5B14 001A2A54  80 65 00 08 */	lwz r3, 8(r5)
/* 801A5B18 001A2A58  28 03 00 00 */	cmplwi r3, 0
/* 801A5B1C 001A2A5C  41 82 00 44 */	beq .L_801A5B60
/* 801A5B20 001A2A60  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5B24 001A2A64  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A5B28 001A2A68  7D 89 03 A6 */	mtctr r12
/* 801A5B2C 001A2A6C  4E 80 04 21 */	bctrl 
/* 801A5B30 001A2A70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5B34 001A2A74  41 82 00 2C */	beq .L_801A5B60
/* 801A5B38 001A2A78  80 7E 03 58 */	lwz r3, 0x358(r30)
/* 801A5B3C 001A2A7C  C0 22 AE 44 */	lfs f1, lbl_805191A4@sda21(r2)
/* 801A5B40 001A2A80  80 63 00 08 */	lwz r3, 8(r3)
/* 801A5B44 001A2A84  4B F6 18 4D */	bl setAnimSpeed__Q24Game9EnemyBaseFf
/* 801A5B48 001A2A88  48 00 00 18 */	b .L_801A5B60
.L_801A5B4C:
/* 801A5B4C 001A2A8C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A5B50 001A2A90  C0 22 AE 48 */	lfs f1, lbl_805191A8@sda21(r2)
/* 801A5B54 001A2A94  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 801A5B58 001A2A98  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A5B5C 001A2A9C  D0 1E 04 38 */	stfs f0, 0x438(r30)
.L_801A5B60:
/* 801A5B60 001A2AA0  88 1D 00 3C */	lbz r0, 0x3c(r29)
/* 801A5B64 001A2AA4  28 00 00 00 */	cmplwi r0, 0
/* 801A5B68 001A2AA8  41 82 00 4C */	beq .L_801A5BB4
/* 801A5B6C 001A2AAC  88 1D 00 3E */	lbz r0, 0x3e(r29)
/* 801A5B70 001A2AB0  28 00 00 00 */	cmplwi r0, 0
/* 801A5B74 001A2AB4  40 82 00 40 */	bne .L_801A5BB4
/* 801A5B78 001A2AB8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801A5B7C 001A2ABC  28 03 00 00 */	cmplwi r3, 0
/* 801A5B80 001A2AC0  41 82 00 34 */	beq .L_801A5BB4
/* 801A5B84 001A2AC4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801A5B88 001A2AC8  2C 00 00 05 */	cmpwi r0, 5
/* 801A5B8C 001A2ACC  40 82 00 28 */	bne .L_801A5BB4
/* 801A5B90 001A2AD0  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A5B94 001A2AD4  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801A5B98 001A2AD8  2C 00 04 02 */	cmpwi r0, 0x402
/* 801A5B9C 001A2ADC  41 82 00 0C */	beq .L_801A5BA8
/* 801A5BA0 001A2AE0  2C 00 04 03 */	cmpwi r0, 0x403
/* 801A5BA4 001A2AE4  40 82 00 10 */	bne .L_801A5BB4
.L_801A5BA8:
/* 801A5BA8 001A2AE8  4B FD 36 3D */	bl efxSuikomi__Q24Game5OnyonFv
/* 801A5BAC 001A2AEC  38 00 00 01 */	li r0, 1
/* 801A5BB0 001A2AF0  98 1D 00 3E */	stb r0, 0x3e(r29)
.L_801A5BB4:
/* 801A5BB4 001A2AF4  88 1D 00 34 */	lbz r0, 0x34(r29)
/* 801A5BB8 001A2AF8  28 00 00 00 */	cmplwi r0, 0
/* 801A5BBC 001A2AFC  41 82 00 BC */	beq .L_801A5C78
/* 801A5BC0 001A2B00  7F C4 F3 78 */	mr r4, r30
/* 801A5BC4 001A2B04  38 61 00 3C */	addi r3, r1, 0x3c
/* 801A5BC8 001A2B08  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A5BCC 001A2B0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5BD0 001A2B10  7D 89 03 A6 */	mtctr r12
/* 801A5BD4 001A2B14  4E 80 04 21 */	bctrl 
/* 801A5BD8 001A2B18  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 801A5BDC 001A2B1C  38 00 00 00 */	li r0, 0
/* 801A5BE0 001A2B20  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5BE4 001A2B24  38 61 00 30 */	addi r3, r1, 0x30
/* 801A5BE8 001A2B28  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 801A5BEC 001A2B2C  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 801A5BF0 001A2B30  D0 3D 00 2C */	stfs f1, 0x2c(r29)
/* 801A5BF4 001A2B34  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 801A5BF8 001A2B38  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 801A5BFC 001A2B3C  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 801A5C00 001A2B40  98 1D 00 34 */	stb r0, 0x34(r29)
/* 801A5C04 001A2B44  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 801A5C08 001A2B48  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5C0C 001A2B4C  81 8C 01 94 */	lwz r12, 0x194(r12)
/* 801A5C10 001A2B50  7D 89 03 A6 */	mtctr r12
/* 801A5C14 001A2B54  4E 80 04 21 */	bctrl 
/* 801A5C18 001A2B58  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801A5C1C 001A2B5C  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 801A5C20 001A2B60  C0 61 00 38 */	lfs f3, 0x38(r1)
/* 801A5C24 001A2B64  EC 81 00 28 */	fsubs f4, f1, f0
/* 801A5C28 001A2B68  C0 5D 00 30 */	lfs f2, 0x30(r29)
/* 801A5C2C 001A2B6C  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801A5C30 001A2B70  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 801A5C34 001A2B74  EC 43 10 28 */	fsubs f2, f3, f2
/* 801A5C38 001A2B78  EC 64 01 32 */	fmuls f3, f4, f4
/* 801A5C3C 001A2B7C  EC 21 00 28 */	fsubs f1, f1, f0
/* 801A5C40 001A2B80  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5C44 001A2B84  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801A5C48 001A2B88  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 801A5C4C 001A2B8C  EC 22 08 2A */	fadds f1, f2, f1
/* 801A5C50 001A2B90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A5C54 001A2B94  40 81 00 14 */	ble .L_801A5C68
/* 801A5C58 001A2B98  40 81 00 14 */	ble .L_801A5C6C
/* 801A5C5C 001A2B9C  FC 00 08 34 */	frsqrte f0, f1
/* 801A5C60 001A2BA0  EC 20 00 72 */	fmuls f1, f0, f1
/* 801A5C64 001A2BA4  48 00 00 08 */	b .L_801A5C6C
.L_801A5C68:
/* 801A5C68 001A2BA8  FC 20 00 90 */	fmr f1, f0
.L_801A5C6C:
/* 801A5C6C 001A2BAC  D0 3D 00 18 */	stfs f1, 0x18(r29)
/* 801A5C70 001A2BB0  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5C74 001A2BB4  D0 1D 00 38 */	stfs f0, 0x38(r29)
.L_801A5C78:
/* 801A5C78 001A2BB8  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 801A5C7C 001A2BBC  38 61 00 24 */	addi r3, r1, 0x24
/* 801A5C80 001A2BC0  81 84 00 00 */	lwz r12, 0(r4)
/* 801A5C84 001A2BC4  81 8C 01 94 */	lwz r12, 0x194(r12)
/* 801A5C88 001A2BC8  7D 89 03 A6 */	mtctr r12
/* 801A5C8C 001A2BCC  4E 80 04 21 */	bctrl 
/* 801A5C90 001A2BD0  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801A5C94 001A2BD4  C0 BD 00 30 */	lfs f5, 0x30(r29)
/* 801A5C98 001A2BD8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801A5C9C 001A2BDC  C0 DD 00 2C */	lfs f6, 0x2c(r29)
/* 801A5CA0 001A2BE0  EC 41 28 28 */	fsubs f2, f1, f5
/* 801A5CA4 001A2BE4  C0 9D 00 24 */	lfs f4, 0x24(r29)
/* 801A5CA8 001A2BE8  EC 60 30 28 */	fsubs f3, f0, f6
/* 801A5CAC 001A2BEC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801A5CB0 001A2BF0  C0 FD 00 28 */	lfs f7, 0x28(r29)
/* 801A5CB4 001A2BF4  EC 02 01 32 */	fmuls f0, f2, f4
/* 801A5CB8 001A2BF8  88 1D 00 3D */	lbz r0, 0x3d(r29)
/* 801A5CBC 001A2BFC  EC 41 38 28 */	fsubs f2, f1, f7
/* 801A5CC0 001A2C00  EC 23 01 32 */	fmuls f1, f3, f4
/* 801A5CC4 001A2C04  28 00 00 00 */	cmplwi r0, 0
/* 801A5CC8 001A2C08  EF A5 00 2A */	fadds f29, f5, f0
/* 801A5CCC 001A2C0C  EC 02 01 32 */	fmuls f0, f2, f4
/* 801A5CD0 001A2C10  EF C6 08 2A */	fadds f30, f6, f1
/* 801A5CD4 001A2C14  EF E7 00 2A */	fadds f31, f7, f0
/* 801A5CD8 001A2C18  41 82 00 5C */	beq .L_801A5D34
/* 801A5CDC 001A2C1C  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A5CE0 001A2C20  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5CE4 001A2C24  81 8C 01 A0 */	lwz r12, 0x1a0(r12)
/* 801A5CE8 001A2C28  7D 89 03 A6 */	mtctr r12
/* 801A5CEC 001A2C2C  4E 80 04 21 */	bctrl 
/* 801A5CF0 001A2C30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5CF4 001A2C34  40 82 08 CC */	bne .L_801A65C0
/* 801A5CF8 001A2C38  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801A5CFC 001A2C3C  3C 60 80 4B */	lis r3, __vt__Q24Game18InteractSuckArrive@ha
/* 801A5D00 001A2C40  38 A4 A3 00 */	addi r5, r4, __vt__Q24Game11Interaction@l
/* 801A5D04 001A2C44  93 C1 00 14 */	stw r30, 0x14(r1)
/* 801A5D08 001A2C48  38 03 29 58 */	addi r0, r3, __vt__Q24Game18InteractSuckArrive@l
/* 801A5D0C 001A2C4C  38 81 00 10 */	addi r4, r1, 0x10
/* 801A5D10 001A2C50  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801A5D14 001A2C54  90 01 00 10 */	stw r0, 0x10(r1)
/* 801A5D18 001A2C58  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A5D1C 001A2C5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5D20 001A2C60  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801A5D24 001A2C64  7D 89 03 A6 */	mtctr r12
/* 801A5D28 001A2C68  4E 80 04 21 */	bctrl 
/* 801A5D2C 001A2C6C  38 00 00 00 */	li r0, 0
/* 801A5D30 001A2C70  98 1D 00 3D */	stb r0, 0x3d(r29)
.L_801A5D34:
/* 801A5D34 001A2C74  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 801A5D38 001A2C78  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5D3C 001A2C7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A5D40 001A2C80  41 81 00 20 */	bgt .L_801A5D60
/* 801A5D44 001A2C84  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A5D48 001A2C88  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5D4C 001A2C8C  81 8C 01 9C */	lwz r12, 0x19c(r12)
/* 801A5D50 001A2C90  7D 89 03 A6 */	mtctr r12
/* 801A5D54 001A2C94  4E 80 04 21 */	bctrl 
/* 801A5D58 001A2C98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5D5C 001A2C9C  40 82 00 78 */	bne .L_801A5DD4
.L_801A5D60:
/* 801A5D60 001A2CA0  7F C4 F3 78 */	mr r4, r30
/* 801A5D64 001A2CA4  38 61 00 18 */	addi r3, r1, 0x18
/* 801A5D68 001A2CA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A5D6C 001A2CAC  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801A5D70 001A2CB0  7D 89 03 A6 */	mtctr r12
/* 801A5D74 001A2CB4  4E 80 04 21 */	bctrl 
/* 801A5D78 001A2CB8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801A5D7C 001A2CBC  7F C3 F3 78 */	mr r3, r30
/* 801A5D80 001A2CC0  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 801A5D84 001A2CC4  38 81 00 64 */	addi r4, r1, 0x64
/* 801A5D88 001A2CC8  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801A5D8C 001A2CCC  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801A5D90 001A2CD0  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5D94 001A2CD4  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 801A5D98 001A2CD8  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 801A5D9C 001A2CDC  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 801A5DA0 001A2CE0  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801A5DA4 001A2CE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A5DA8 001A2CE8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801A5DAC 001A2CEC  7D 89 03 A6 */	mtctr r12
/* 801A5DB0 001A2CF0  4E 80 04 21 */	bctrl 
/* 801A5DB4 001A2CF4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A5DB8 001A2CF8  38 00 00 01 */	li r0, 1
/* 801A5DBC 001A2CFC  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 801A5DC0 001A2D00  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 801A5DC4 001A2D04  EC 01 00 28 */	fsubs f0, f1, f0
/* 801A5DC8 001A2D08  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 801A5DCC 001A2D0C  98 1D 00 34 */	stb r0, 0x34(r29)
/* 801A5DD0 001A2D10  48 00 07 F0 */	b .L_801A65C0
.L_801A5DD4:
/* 801A5DD4 001A2D14  D3 FE 01 B0 */	stfs f31, 0x1b0(r30)
/* 801A5DD8 001A2D18  C0 A2 AE 30 */	lfs f5, lbl_80519190@sda21(r2)
/* 801A5DDC 001A2D1C  D3 DE 01 B4 */	stfs f30, 0x1b4(r30)
/* 801A5DE0 001A2D20  C0 22 AE 58 */	lfs f1, lbl_805191B8@sda21(r2)
/* 801A5DE4 001A2D24  D3 BE 01 B8 */	stfs f29, 0x1b8(r30)
/* 801A5DE8 001A2D28  C0 42 AE 54 */	lfs f2, lbl_805191B4@sda21(r2)
/* 801A5DEC 001A2D2C  D3 FE 03 AC */	stfs f31, 0x3ac(r30)
/* 801A5DF0 001A2D30  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A5DF4 001A2D34  D3 DE 03 B0 */	stfs f30, 0x3b0(r30)
/* 801A5DF8 001A2D38  D3 BE 03 B4 */	stfs f29, 0x3b4(r30)
/* 801A5DFC 001A2D3C  C0 9D 00 24 */	lfs f4, 0x24(r29)
/* 801A5E00 001A2D40  C0 7D 00 20 */	lfs f3, 0x20(r29)
/* 801A5E04 001A2D44  EC 85 20 28 */	fsubs f4, f5, f4
/* 801A5E08 001A2D48  EC 21 01 32 */	fmuls f1, f1, f4
/* 801A5E0C 001A2D4C  EC 84 00 F2 */	fmuls f4, f4, f3
/* 801A5E10 001A2D50  EC 22 00 72 */	fmuls f1, f2, f1
/* 801A5E14 001A2D54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A5E18 001A2D58  40 80 00 30 */	bge .L_801A5E48
/* 801A5E1C 001A2D5C  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A5E20 001A2D60  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A5E24 001A2D64  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A5E28 001A2D68  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A5E2C 001A2D6C  FC 00 00 1E */	fctiwz f0, f0
/* 801A5E30 001A2D70  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 801A5E34 001A2D74  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801A5E38 001A2D78  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A5E3C 001A2D7C  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A5E40 001A2D80  FC 20 00 50 */	fneg f1, f0
/* 801A5E44 001A2D84  48 00 00 28 */	b .L_801A5E6C
.L_801A5E48:
/* 801A5E48 001A2D88  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A5E4C 001A2D8C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A5E50 001A2D90  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A5E54 001A2D94  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A5E58 001A2D98  FC 00 00 1E */	fctiwz f0, f0
/* 801A5E5C 001A2D9C  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 801A5E60 001A2DA0  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801A5E64 001A2DA4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A5E68 001A2DA8  7C 23 04 2E */	lfsx f1, r3, r0
.L_801A5E6C:
/* 801A5E6C 001A2DAC  C0 02 AE 5C */	lfs f0, lbl_805191BC@sda21(r2)
/* 801A5E70 001A2DB0  C0 62 AE 60 */	lfs f3, lbl_805191C0@sda21(r2)
/* 801A5E74 001A2DB4  EC 20 00 72 */	fmuls f1, f0, f1
/* 801A5E78 001A2DB8  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A5E7C 001A2DBC  EC 84 08 2A */	fadds f4, f4, f1
/* 801A5E80 001A2DC0  D0 9E 01 68 */	stfs f4, 0x168(r30)
/* 801A5E84 001A2DC4  D0 9E 01 6C */	stfs f4, 0x16c(r30)
/* 801A5E88 001A2DC8  D0 9E 01 70 */	stfs f4, 0x170(r30)
/* 801A5E8C 001A2DCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A5E90 001A2DD0  C0 9D 00 38 */	lfs f4, 0x38(r29)
/* 801A5E94 001A2DD4  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 801A5E98 001A2DD8  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 801A5E9C 001A2DDC  EC 44 00 B2 */	fmuls f2, f4, f2
/* 801A5EA0 001A2DE0  C0 9D 00 24 */	lfs f4, 0x24(r29)
/* 801A5EA4 001A2DE4  EC 22 08 24 */	fdivs f1, f2, f1
/* 801A5EA8 001A2DE8  EC 24 08 2A */	fadds f1, f4, f1
/* 801A5EAC 001A2DEC  D0 3D 00 24 */	stfs f1, 0x24(r29)
/* 801A5EB0 001A2DF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A5EB4 001A2DF4  C0 3D 00 38 */	lfs f1, 0x38(r29)
/* 801A5EB8 001A2DF8  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 801A5EBC 001A2DFC  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 801A5EC0 001A2E00  D0 3D 00 38 */	stfs f1, 0x38(r29)
/* 801A5EC4 001A2E04  C0 3D 00 24 */	lfs f1, 0x24(r29)
/* 801A5EC8 001A2E08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A5ECC 001A2E0C  4C 41 13 82 */	cror 2, 1, 2
/* 801A5ED0 001A2E10  40 82 06 F0 */	bne .L_801A65C0
/* 801A5ED4 001A2E14  7F C4 F3 78 */	mr r4, r30
/* 801A5ED8 001A2E18  38 61 00 70 */	addi r3, r1, 0x70
/* 801A5EDC 001A2E1C  4B FF 9D 81 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 801A5EE0 001A2E20  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 801A5EE4 001A2E24  38 A0 00 00 */	li r5, 0
/* 801A5EE8 001A2E28  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 801A5EEC 001A2E2C  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 801A5EF0 001A2E30  3C 80 80 4E */	lis r4, __vt__Q24Game18InteractSuckFinish@ha
/* 801A5EF4 001A2E34  90 01 00 08 */	stw r0, 8(r1)
/* 801A5EF8 001A2E38  38 C3 BC 84 */	addi r6, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 801A5EFC 001A2E3C  38 61 00 70 */	addi r3, r1, 0x70
/* 801A5F00 001A2E40  38 04 D1 50 */	addi r0, r4, __vt__Q24Game18InteractSuckFinish@l
/* 801A5F04 001A2E44  28 05 00 00 */	cmplwi r5, 0
/* 801A5F08 001A2E48  90 C1 00 54 */	stw r6, 0x54(r1)
/* 801A5F0C 001A2E4C  90 A1 00 60 */	stw r5, 0x60(r1)
/* 801A5F10 001A2E50  90 A1 00 58 */	stw r5, 0x58(r1)
/* 801A5F14 001A2E54  90 61 00 5C */	stw r3, 0x5c(r1)
/* 801A5F18 001A2E58  93 C1 00 0C */	stw r30, 0xc(r1)
/* 801A5F1C 001A2E5C  90 01 00 08 */	stw r0, 8(r1)
/* 801A5F20 001A2E60  40 82 00 1C */	bne .L_801A5F3C
/* 801A5F24 001A2E64  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5F28 001A2E68  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A5F2C 001A2E6C  7D 89 03 A6 */	mtctr r12
/* 801A5F30 001A2E70  4E 80 04 21 */	bctrl 
/* 801A5F34 001A2E74  90 61 00 58 */	stw r3, 0x58(r1)
/* 801A5F38 001A2E78  48 00 01 74 */	b .L_801A60AC
.L_801A5F3C:
/* 801A5F3C 001A2E7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5F40 001A2E80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A5F44 001A2E84  7D 89 03 A6 */	mtctr r12
/* 801A5F48 001A2E88  4E 80 04 21 */	bctrl 
/* 801A5F4C 001A2E8C  90 61 00 58 */	stw r3, 0x58(r1)
/* 801A5F50 001A2E90  48 00 00 58 */	b .L_801A5FA8
.L_801A5F54:
/* 801A5F54 001A2E94  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A5F58 001A2E98  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A5F5C 001A2E9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5F60 001A2EA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A5F64 001A2EA4  7D 89 03 A6 */	mtctr r12
/* 801A5F68 001A2EA8  4E 80 04 21 */	bctrl 
/* 801A5F6C 001A2EAC  7C 64 1B 78 */	mr r4, r3
/* 801A5F70 001A2EB0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 801A5F74 001A2EB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5F78 001A2EB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A5F7C 001A2EBC  7D 89 03 A6 */	mtctr r12
/* 801A5F80 001A2EC0  4E 80 04 21 */	bctrl 
/* 801A5F84 001A2EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5F88 001A2EC8  40 82 01 24 */	bne .L_801A60AC
/* 801A5F8C 001A2ECC  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A5F90 001A2ED0  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A5F94 001A2ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5F98 001A2ED8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A5F9C 001A2EDC  7D 89 03 A6 */	mtctr r12
/* 801A5FA0 001A2EE0  4E 80 04 21 */	bctrl 
/* 801A5FA4 001A2EE4  90 61 00 58 */	stw r3, 0x58(r1)
.L_801A5FA8:
/* 801A5FA8 001A2EE8  81 81 00 54 */	lwz r12, 0x54(r1)
/* 801A5FAC 001A2EEC  38 61 00 54 */	addi r3, r1, 0x54
/* 801A5FB0 001A2EF0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A5FB4 001A2EF4  7D 89 03 A6 */	mtctr r12
/* 801A5FB8 001A2EF8  4E 80 04 21 */	bctrl 
/* 801A5FBC 001A2EFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A5FC0 001A2F00  41 82 FF 94 */	beq .L_801A5F54
/* 801A5FC4 001A2F04  48 00 00 E8 */	b .L_801A60AC
.L_801A5FC8:
/* 801A5FC8 001A2F08  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A5FCC 001A2F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5FD0 001A2F10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A5FD4 001A2F14  7D 89 03 A6 */	mtctr r12
/* 801A5FD8 001A2F18  4E 80 04 21 */	bctrl 
/* 801A5FDC 001A2F1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A5FE0 001A2F20  38 81 00 08 */	addi r4, r1, 8
/* 801A5FE4 001A2F24  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801A5FE8 001A2F28  7D 89 03 A6 */	mtctr r12
/* 801A5FEC 001A2F2C  4E 80 04 21 */	bctrl 
/* 801A5FF0 001A2F30  80 01 00 60 */	lwz r0, 0x60(r1)
/* 801A5FF4 001A2F34  28 00 00 00 */	cmplwi r0, 0
/* 801A5FF8 001A2F38  40 82 00 24 */	bne .L_801A601C
/* 801A5FFC 001A2F3C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A6000 001A2F40  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A6004 001A2F44  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6008 001A2F48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A600C 001A2F4C  7D 89 03 A6 */	mtctr r12
/* 801A6010 001A2F50  4E 80 04 21 */	bctrl 
/* 801A6014 001A2F54  90 61 00 58 */	stw r3, 0x58(r1)
/* 801A6018 001A2F58  48 00 00 94 */	b .L_801A60AC
.L_801A601C:
/* 801A601C 001A2F5C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A6020 001A2F60  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A6024 001A2F64  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6028 001A2F68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A602C 001A2F6C  7D 89 03 A6 */	mtctr r12
/* 801A6030 001A2F70  4E 80 04 21 */	bctrl 
/* 801A6034 001A2F74  90 61 00 58 */	stw r3, 0x58(r1)
/* 801A6038 001A2F78  48 00 00 58 */	b .L_801A6090
.L_801A603C:
/* 801A603C 001A2F7C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A6040 001A2F80  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A6044 001A2F84  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6048 001A2F88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A604C 001A2F8C  7D 89 03 A6 */	mtctr r12
/* 801A6050 001A2F90  4E 80 04 21 */	bctrl 
/* 801A6054 001A2F94  7C 64 1B 78 */	mr r4, r3
/* 801A6058 001A2F98  80 61 00 60 */	lwz r3, 0x60(r1)
/* 801A605C 001A2F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6060 001A2FA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A6064 001A2FA4  7D 89 03 A6 */	mtctr r12
/* 801A6068 001A2FA8  4E 80 04 21 */	bctrl 
/* 801A606C 001A2FAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A6070 001A2FB0  40 82 00 3C */	bne .L_801A60AC
/* 801A6074 001A2FB4  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A6078 001A2FB8  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A607C 001A2FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6080 001A2FC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A6084 001A2FC4  7D 89 03 A6 */	mtctr r12
/* 801A6088 001A2FC8  4E 80 04 21 */	bctrl 
/* 801A608C 001A2FCC  90 61 00 58 */	stw r3, 0x58(r1)
.L_801A6090:
/* 801A6090 001A2FD0  81 81 00 54 */	lwz r12, 0x54(r1)
/* 801A6094 001A2FD4  38 61 00 54 */	addi r3, r1, 0x54
/* 801A6098 001A2FD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A609C 001A2FDC  7D 89 03 A6 */	mtctr r12
/* 801A60A0 001A2FE0  4E 80 04 21 */	bctrl 
/* 801A60A4 001A2FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A60A8 001A2FE8  41 82 FF 94 */	beq .L_801A603C
.L_801A60AC:
/* 801A60AC 001A2FEC  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801A60B0 001A2FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A60B4 001A2FF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A60B8 001A2FF8  7D 89 03 A6 */	mtctr r12
/* 801A60BC 001A2FFC  4E 80 04 21 */	bctrl 
/* 801A60C0 001A3000  80 81 00 58 */	lwz r4, 0x58(r1)
/* 801A60C4 001A3004  7C 04 18 40 */	cmplw r4, r3
/* 801A60C8 001A3008  40 82 FF 00 */	bne .L_801A5FC8
/* 801A60CC 001A300C  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801A60D0 001A3010  3C 60 80 4B */	lis r3, __vt__Q24Game16InteractSuckDone@ha
/* 801A60D4 001A3014  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 801A60D8 001A3018  38 00 00 00 */	li r0, 0
/* 801A60DC 001A301C  90 81 00 48 */	stw r4, 0x48(r1)
/* 801A60E0 001A3020  38 63 29 20 */	addi r3, r3, __vt__Q24Game16InteractSuckDone@l
/* 801A60E4 001A3024  38 81 00 48 */	addi r4, r1, 0x48
/* 801A60E8 001A3028  93 C1 00 4C */	stw r30, 0x4c(r1)
/* 801A60EC 001A302C  90 61 00 48 */	stw r3, 0x48(r1)
/* 801A60F0 001A3030  98 01 00 50 */	stb r0, 0x50(r1)
/* 801A60F4 001A3034  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 801A60F8 001A3038  81 83 00 00 */	lwz r12, 0(r3)
/* 801A60FC 001A303C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801A6100 001A3040  7D 89 03 A6 */	mtctr r12
/* 801A6104 001A3044  4E 80 04 21 */	bctrl 
/* 801A6108 001A3048  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 801A610C 001A304C  28 00 00 00 */	cmplwi r0, 0
/* 801A6110 001A3050  41 82 00 48 */	beq .L_801A6158
/* 801A6114 001A3054  48 07 85 1D */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 801A6118 001A3058  48 07 85 19 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 801A611C 001A305C  7F C3 F3 78 */	mr r3, r30
/* 801A6120 001A3060  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6124 001A3064  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A6128 001A3068  7D 89 03 A6 */	mtctr r12
/* 801A612C 001A306C  4E 80 04 21 */	bctrl 
/* 801A6130 001A3070  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A6134 001A3074  20 00 00 03 */	subfic r0, r0, 3
/* 801A6138 001A3078  7C 00 00 34 */	cntlzw r0, r0
/* 801A613C 001A307C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 801A6140 001A3080  40 82 00 18 */	bne .L_801A6158
/* 801A6144 001A3084  7F C3 F3 78 */	mr r3, r30
/* 801A6148 001A3088  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A614C 001A308C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A6150 001A3090  7D 89 03 A6 */	mtctr r12
/* 801A6154 001A3094  4E 80 04 21 */	bctrl 
.L_801A6158:
/* 801A6158 001A3098  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A615C 001A309C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801A6160 001A30A0  2C 00 00 01 */	cmpwi r0, 1
/* 801A6164 001A30A4  41 82 02 F4 */	beq .L_801A6458
/* 801A6168 001A30A8  7F C3 F3 78 */	mr r3, r30
/* 801A616C 001A30AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6170 001A30B0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A6174 001A30B4  7D 89 03 A6 */	mtctr r12
/* 801A6178 001A30B8  4E 80 04 21 */	bctrl 
/* 801A617C 001A30BC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A6180 001A30C0  28 00 00 03 */	cmplwi r0, 3
/* 801A6184 001A30C4  41 82 00 24 */	beq .L_801A61A8
/* 801A6188 001A30C8  7F C3 F3 78 */	mr r3, r30
/* 801A618C 001A30CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6190 001A30D0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A6194 001A30D4  7D 89 03 A6 */	mtctr r12
/* 801A6198 001A30D8  4E 80 04 21 */	bctrl 
/* 801A619C 001A30DC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A61A0 001A30E0  28 00 00 04 */	cmplwi r0, 4
/* 801A61A4 001A30E4  40 82 02 B4 */	bne .L_801A6458
.L_801A61A8:
/* 801A61A8 001A30E8  48 07 84 89 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 801A61AC 001A30EC  2C 03 00 01 */	cmpwi r3, 1
/* 801A61B0 001A30F0  41 81 02 A8 */	bgt .L_801A6458
/* 801A61B4 001A30F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A61B8 001A30F8  88 03 00 48 */	lbz r0, 0x48(r3)
/* 801A61BC 001A30FC  28 00 00 00 */	cmplwi r0, 0
/* 801A61C0 001A3100  41 82 01 DC */	beq .L_801A639C
/* 801A61C4 001A3104  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801A61C8 001A3108  28 00 00 00 */	cmplwi r0, 0
/* 801A61CC 001A310C  40 82 00 18 */	bne .L_801A61E4
/* 801A61D0 001A3110  38 7F 01 28 */	addi r3, r31, 0x128
/* 801A61D4 001A3114  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A61D8 001A3118  38 80 01 D3 */	li r4, 0x1d3
/* 801A61DC 001A311C  4C C6 31 82 */	crclr 6
/* 801A61E0 001A3120  4B E8 44 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A61E4:
/* 801A61E4 001A3124  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 801A61E8 001A3128  28 1C 00 00 */	cmplwi r28, 0
/* 801A61EC 001A312C  40 82 00 18 */	bne .L_801A6204
/* 801A61F0 001A3130  38 7F 01 28 */	addi r3, r31, 0x128
/* 801A61F4 001A3134  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A61F8 001A3138  38 80 01 DC */	li r4, 0x1dc
/* 801A61FC 001A313C  4C C6 31 82 */	crclr 6
/* 801A6200 001A3140  4B E8 44 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6204:
/* 801A6204 001A3144  80 1C 00 04 */	lwz r0, 4(r28)
/* 801A6208 001A3148  28 00 00 00 */	cmplwi r0, 0
/* 801A620C 001A314C  40 82 00 18 */	bne .L_801A6224
/* 801A6210 001A3150  38 7F 01 34 */	addi r3, r31, 0x134
/* 801A6214 001A3154  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A6218 001A3158  38 80 00 CF */	li r4, 0xcf
/* 801A621C 001A315C  4C C6 31 82 */	crclr 6
/* 801A6220 001A3160  4B E8 44 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6224:
/* 801A6224 001A3164  80 7C 00 04 */	lwz r3, 4(r28)
/* 801A6228 001A3168  83 83 00 04 */	lwz r28, 4(r3)
/* 801A622C 001A316C  28 1C 00 00 */	cmplwi r28, 0
/* 801A6230 001A3170  40 82 00 18 */	bne .L_801A6248
/* 801A6234 001A3174  38 7F 01 34 */	addi r3, r31, 0x134
/* 801A6238 001A3178  38 BF 01 40 */	addi r5, r31, 0x140
/* 801A623C 001A317C  38 80 00 D1 */	li r4, 0xd1
/* 801A6240 001A3180  4C C6 31 82 */	crclr 6
/* 801A6244 001A3184  4B E8 43 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6248:
/* 801A6248 001A3188  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A624C 001A318C  7F 83 E3 78 */	mr r3, r28
/* 801A6250 001A3190  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801A6254 001A3194  7D 89 03 A6 */	mtctr r12
/* 801A6258 001A3198  4E 80 04 21 */	bctrl 
/* 801A625C 001A319C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A6260 001A31A0  40 82 00 18 */	bne .L_801A6278
/* 801A6264 001A31A4  38 7F 01 64 */	addi r3, r31, 0x164
/* 801A6268 001A31A8  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A626C 001A31AC  38 80 01 77 */	li r4, 0x177
/* 801A6270 001A31B0  4C C6 31 82 */	crclr 6
/* 801A6274 001A31B4  4B E8 43 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6278:
/* 801A6278 001A31B8  7F 83 E3 78 */	mr r3, r28
/* 801A627C 001A31BC  48 2C 3E 79 */	bl stopPollutionSe__Q23PSM10Scene_CaveFv
/* 801A6280 001A31C0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801A6284 001A31C4  38 60 00 00 */	li r3, 0
/* 801A6288 001A31C8  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801A628C 001A31CC  2C 00 00 02 */	cmpwi r0, 2
/* 801A6290 001A31D0  41 82 00 0C */	beq .L_801A629C
/* 801A6294 001A31D4  2C 00 00 03 */	cmpwi r0, 3
/* 801A6298 001A31D8  40 82 00 08 */	bne .L_801A62A0
.L_801A629C:
/* 801A629C 001A31DC  38 60 00 01 */	li r3, 1
.L_801A62A0:
/* 801A62A0 001A31E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A62A4 001A31E4  41 82 01 B4 */	beq .L_801A6458
/* 801A62A8 001A31E8  80 7E 03 5C */	lwz r3, 0x35c(r30)
/* 801A62AC 001A31EC  38 82 AE 34 */	addi r4, r2, lbl_80519194@sda21
/* 801A62B0 001A31F0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801A62B4 001A31F4  4B F2 44 0D */	bl strcmp
/* 801A62B8 001A31F8  2C 03 00 00 */	cmpwi r3, 0
/* 801A62BC 001A31FC  41 82 01 9C */	beq .L_801A6458
/* 801A62C0 001A3200  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801A62C4 001A3204  28 00 00 00 */	cmplwi r0, 0
/* 801A62C8 001A3208  40 82 00 18 */	bne .L_801A62E0
/* 801A62CC 001A320C  38 7F 01 28 */	addi r3, r31, 0x128
/* 801A62D0 001A3210  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A62D4 001A3214  38 80 01 D3 */	li r4, 0x1d3
/* 801A62D8 001A3218  4C C6 31 82 */	crclr 6
/* 801A62DC 001A321C  4B E8 43 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A62E0:
/* 801A62E0 001A3220  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 801A62E4 001A3224  28 1C 00 00 */	cmplwi r28, 0
/* 801A62E8 001A3228  40 82 00 18 */	bne .L_801A6300
/* 801A62EC 001A322C  38 7F 01 28 */	addi r3, r31, 0x128
/* 801A62F0 001A3230  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A62F4 001A3234  38 80 01 DC */	li r4, 0x1dc
/* 801A62F8 001A3238  4C C6 31 82 */	crclr 6
/* 801A62FC 001A323C  4B E8 43 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6300:
/* 801A6300 001A3240  80 1C 00 04 */	lwz r0, 4(r28)
/* 801A6304 001A3244  28 00 00 00 */	cmplwi r0, 0
/* 801A6308 001A3248  40 82 00 18 */	bne .L_801A6320
/* 801A630C 001A324C  38 7F 01 34 */	addi r3, r31, 0x134
/* 801A6310 001A3250  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A6314 001A3254  38 80 00 CF */	li r4, 0xcf
/* 801A6318 001A3258  4C C6 31 82 */	crclr 6
/* 801A631C 001A325C  4B E8 43 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6320:
/* 801A6320 001A3260  80 7C 00 04 */	lwz r3, 4(r28)
/* 801A6324 001A3264  83 83 00 04 */	lwz r28, 4(r3)
/* 801A6328 001A3268  28 1C 00 00 */	cmplwi r28, 0
/* 801A632C 001A326C  40 82 00 18 */	bne .L_801A6344
/* 801A6330 001A3270  38 7F 01 34 */	addi r3, r31, 0x134
/* 801A6334 001A3274  38 BF 01 40 */	addi r5, r31, 0x140
/* 801A6338 001A3278  38 80 00 D1 */	li r4, 0xd1
/* 801A633C 001A327C  4C C6 31 82 */	crclr 6
/* 801A6340 001A3280  4B E8 43 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6344:
/* 801A6344 001A3284  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A6348 001A3288  7F 83 E3 78 */	mr r3, r28
/* 801A634C 001A328C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801A6350 001A3290  7D 89 03 A6 */	mtctr r12
/* 801A6354 001A3294  4E 80 04 21 */	bctrl 
/* 801A6358 001A3298  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A635C 001A329C  40 82 00 18 */	bne .L_801A6374
/* 801A6360 001A32A0  38 7F 01 64 */	addi r3, r31, 0x164
/* 801A6364 001A32A4  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A6368 001A32A8  38 80 01 77 */	li r4, 0x177
/* 801A636C 001A32AC  4C C6 31 82 */	crclr 6
/* 801A6370 001A32B0  4B E8 42 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6374:
/* 801A6374 001A32B4  7F 83 E3 78 */	mr r3, r28
/* 801A6378 001A32B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A637C 001A32BC  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 801A6380 001A32C0  7D 89 03 A6 */	mtctr r12
/* 801A6384 001A32C4  4E 80 04 21 */	bctrl 
/* 801A6388 001A32C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A638C 001A32CC  41 82 00 CC */	beq .L_801A6458
/* 801A6390 001A32D0  7F 83 E3 78 */	mr r3, r28
/* 801A6394 001A32D4  48 2C 3D AD */	bl startPollutUpSe__Q23PSM10Scene_CaveFv
/* 801A6398 001A32D8  48 00 00 C0 */	b .L_801A6458
.L_801A639C:
/* 801A639C 001A32DC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801A63A0 001A32E0  28 00 00 00 */	cmplwi r0, 0
/* 801A63A4 001A32E4  40 82 00 18 */	bne .L_801A63BC
/* 801A63A8 001A32E8  38 7F 01 28 */	addi r3, r31, 0x128
/* 801A63AC 001A32EC  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A63B0 001A32F0  38 80 01 D3 */	li r4, 0x1d3
/* 801A63B4 001A32F4  4C C6 31 82 */	crclr 6
/* 801A63B8 001A32F8  4B E8 42 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A63BC:
/* 801A63BC 001A32FC  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 801A63C0 001A3300  28 1C 00 00 */	cmplwi r28, 0
/* 801A63C4 001A3304  40 82 00 18 */	bne .L_801A63DC
/* 801A63C8 001A3308  38 7F 01 28 */	addi r3, r31, 0x128
/* 801A63CC 001A330C  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A63D0 001A3310  38 80 01 DC */	li r4, 0x1dc
/* 801A63D4 001A3314  4C C6 31 82 */	crclr 6
/* 801A63D8 001A3318  4B E8 42 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A63DC:
/* 801A63DC 001A331C  80 1C 00 04 */	lwz r0, 4(r28)
/* 801A63E0 001A3320  28 00 00 00 */	cmplwi r0, 0
/* 801A63E4 001A3324  40 82 00 18 */	bne .L_801A63FC
/* 801A63E8 001A3328  38 7F 01 34 */	addi r3, r31, 0x134
/* 801A63EC 001A332C  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A63F0 001A3330  38 80 00 CF */	li r4, 0xcf
/* 801A63F4 001A3334  4C C6 31 82 */	crclr 6
/* 801A63F8 001A3338  4B E8 42 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A63FC:
/* 801A63FC 001A333C  80 7C 00 04 */	lwz r3, 4(r28)
/* 801A6400 001A3340  83 83 00 04 */	lwz r28, 4(r3)
/* 801A6404 001A3344  28 1C 00 00 */	cmplwi r28, 0
/* 801A6408 001A3348  40 82 00 18 */	bne .L_801A6420
/* 801A640C 001A334C  38 7F 01 34 */	addi r3, r31, 0x134
/* 801A6410 001A3350  38 BF 01 40 */	addi r5, r31, 0x140
/* 801A6414 001A3354  38 80 00 D1 */	li r4, 0xd1
/* 801A6418 001A3358  4C C6 31 82 */	crclr 6
/* 801A641C 001A335C  4B E8 42 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6420:
/* 801A6420 001A3360  81 9C 00 00 */	lwz r12, 0(r28)
/* 801A6424 001A3364  7F 83 E3 78 */	mr r3, r28
/* 801A6428 001A3368  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801A642C 001A336C  7D 89 03 A6 */	mtctr r12
/* 801A6430 001A3370  4E 80 04 21 */	bctrl 
/* 801A6434 001A3374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A6438 001A3378  40 82 00 18 */	bne .L_801A6450
/* 801A643C 001A337C  38 7F 01 64 */	addi r3, r31, 0x164
/* 801A6440 001A3380  38 BF 00 28 */	addi r5, r31, 0x28
/* 801A6444 001A3384  38 80 01 77 */	li r4, 0x177
/* 801A6448 001A3388  4C C6 31 82 */	crclr 6
/* 801A644C 001A338C  4B E8 41 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A6450:
/* 801A6450 001A3390  7F 83 E3 78 */	mr r3, r28
/* 801A6454 001A3394  48 2C 36 B5 */	bl setPollutUp__Q23PSM12Scene_GroundFv
.L_801A6458:
/* 801A6458 001A3398  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A645C 001A339C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801A6460 001A33A0  2C 00 00 01 */	cmpwi r0, 1
/* 801A6464 001A33A4  40 82 00 20 */	bne .L_801A6484
/* 801A6468 001A33A8  88 01 00 50 */	lbz r0, 0x50(r1)
/* 801A646C 001A33AC  28 00 00 00 */	cmplwi r0, 0
/* 801A6470 001A33B0  41 82 00 14 */	beq .L_801A6484
/* 801A6474 001A33B4  38 61 00 70 */	addi r3, r1, 0x70
/* 801A6478 001A33B8  38 80 FF FF */	li r4, -1
/* 801A647C 001A33BC  4B FF 98 E9 */	bl __dt__Q24Game8StickersFv
/* 801A6480 001A33C0  48 00 01 40 */	b .L_801A65C0
.L_801A6484:
/* 801A6484 001A33C4  88 1D 00 3C */	lbz r0, 0x3c(r29)
/* 801A6488 001A33C8  28 00 00 00 */	cmplwi r0, 0
/* 801A648C 001A33CC  40 82 00 48 */	bne .L_801A64D4
/* 801A6490 001A33D0  80 9E 03 5C */	lwz r4, 0x35c(r30)
/* 801A6494 001A33D4  38 62 AE 64 */	addi r3, r2, lbl_805191C4@sda21
/* 801A6498 001A33D8  80 84 00 40 */	lwz r4, 0x40(r4)
/* 801A649C 001A33DC  4B F2 42 25 */	bl strcmp
/* 801A64A0 001A33E0  2C 03 00 00 */	cmpwi r3, 0
/* 801A64A4 001A33E4  40 82 00 20 */	bne .L_801A64C4
/* 801A64A8 001A33E8  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 801A64AC 001A33EC  38 80 38 06 */	li r4, 0x3806
/* 801A64B0 001A33F0  38 A0 00 00 */	li r5, 0
/* 801A64B4 001A33F4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801A64B8 001A33F8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A64BC 001A33FC  7D 89 03 A6 */	mtctr r12
/* 801A64C0 001A3400  4E 80 04 21 */	bctrl 
.L_801A64C4:
/* 801A64C4 001A3404  7F C3 F3 78 */	mr r3, r30
/* 801A64C8 001A3408  38 80 00 00 */	li r4, 0
/* 801A64CC 001A340C  4B F9 4C 25 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801A64D0 001A3410  48 00 00 B0 */	b .L_801A6580
.L_801A64D4:
/* 801A64D4 001A3414  7F C3 F3 78 */	mr r3, r30
/* 801A64D8 001A3418  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A64DC 001A341C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A64E0 001A3420  7D 89 03 A6 */	mtctr r12
/* 801A64E4 001A3424  4E 80 04 21 */	bctrl 
/* 801A64E8 001A3428  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A64EC 001A342C  28 00 00 01 */	cmplwi r0, 1
/* 801A64F0 001A3430  41 82 00 20 */	beq .L_801A6510
/* 801A64F4 001A3434  7F C3 F3 78 */	mr r3, r30
/* 801A64F8 001A3438  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A64FC 001A343C  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A6500 001A3440  7D 89 03 A6 */	mtctr r12
/* 801A6504 001A3444  4E 80 04 21 */	bctrl 
/* 801A6508 001A3448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A650C 001A344C  40 82 00 14 */	bne .L_801A6520
.L_801A6510:
/* 801A6510 001A3450  7F C3 F3 78 */	mr r3, r30
/* 801A6514 001A3454  38 80 00 00 */	li r4, 0
/* 801A6518 001A3458  4B F9 4B D9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801A651C 001A345C  48 00 00 64 */	b .L_801A6580
.L_801A6520:
/* 801A6520 001A3460  7F C3 F3 78 */	mr r3, r30
/* 801A6524 001A3464  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6528 001A3468  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A652C 001A346C  7D 89 03 A6 */	mtctr r12
/* 801A6530 001A3470  4E 80 04 21 */	bctrl 
/* 801A6534 001A3474  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A6538 001A3478  28 00 00 04 */	cmplwi r0, 4
/* 801A653C 001A347C  41 82 00 24 */	beq .L_801A6560
/* 801A6540 001A3480  7F C3 F3 78 */	mr r3, r30
/* 801A6544 001A3484  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6548 001A3488  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801A654C 001A348C  7D 89 03 A6 */	mtctr r12
/* 801A6550 001A3490  4E 80 04 21 */	bctrl 
/* 801A6554 001A3494  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801A6558 001A3498  28 00 00 03 */	cmplwi r0, 3
/* 801A655C 001A349C  40 82 00 24 */	bne .L_801A6580
.L_801A6560:
/* 801A6560 001A34A0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801A6564 001A34A4  38 7E 04 1C */	addi r3, r30, 0x41c
/* 801A6568 001A34A8  C0 22 AE 6C */	lfs f1, lbl_805191CC@sda21(r2)
/* 801A656C 001A34AC  38 80 00 00 */	li r4, 0
/* 801A6570 001A34B0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801A6574 001A34B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A6578 001A34B8  D0 1E 04 38 */	stfs f0, 0x438(r30)
/* 801A657C 001A34BC  48 28 28 85 */	bl setFrameByKeyType__Q28SysShape8AnimatorFUl
.L_801A6580:
/* 801A6580 001A34C0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 801A6584 001A34C4  28 03 00 00 */	cmplwi r3, 0
/* 801A6588 001A34C8  41 82 00 0C */	beq .L_801A6594
/* 801A658C 001A34CC  7F C4 F3 78 */	mr r4, r30
/* 801A6590 001A34D0  48 09 B7 61 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_801A6594:
/* 801A6594 001A34D4  7F A3 EB 78 */	mr r3, r29
/* 801A6598 001A34D8  7F C4 F3 78 */	mr r4, r30
/* 801A659C 001A34DC  81 9D 00 00 */	lwz r12, 0(r29)
/* 801A65A0 001A34E0  38 A0 00 00 */	li r5, 0
/* 801A65A4 001A34E4  38 C0 00 00 */	li r6, 0
/* 801A65A8 001A34E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A65AC 001A34EC  7D 89 03 A6 */	mtctr r12
/* 801A65B0 001A34F0  4E 80 04 21 */	bctrl 
/* 801A65B4 001A34F4  38 61 00 70 */	addi r3, r1, 0x70
/* 801A65B8 001A34F8  38 80 FF FF */	li r4, -1
/* 801A65BC 001A34FC  4B FF 97 A9 */	bl __dt__Q24Game8StickersFv
.L_801A65C0:
/* 801A65C0 001A3500  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801A65C4 001A3504  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801A65C8 001A3508  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 801A65CC 001A350C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801A65D0 001A3510  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 801A65D4 001A3514  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 801A65D8 001A3518  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 801A65DC 001A351C  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 801A65E0 001A3520  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 801A65E4 001A3524  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801A65E8 001A3528  83 81 00 A0 */	lwz r28, 0xa0(r1)
/* 801A65EC 001A352C  7C 08 03 A6 */	mtlr r0
/* 801A65F0 001A3530  38 21 00 E0 */	addi r1, r1, 0xe0
/* 801A65F4 001A3534  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PelletGoalStateFPQ24Game6Pellet

.fn cleanup__Q24Game15PelletGoalStateFPQ24Game6Pellet, global
/* 801A65F8 001A3538  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PelletGoalStateFPQ24Game6Pellet

.fn init__Q24Game17PelletAppearStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A65FC 001A353C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801A6600 001A3540  7C 08 02 A6 */	mflr r0
/* 801A6604 001A3544  90 01 00 34 */	stw r0, 0x34(r1)
/* 801A6608 001A3548  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801A660C 001A354C  7C 9F 23 78 */	mr r31, r4
/* 801A6610 001A3550  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801A6614 001A3554  7C 7E 1B 78 */	mr r30, r3
/* 801A6618 001A3558  7F E3 FB 78 */	mr r3, r31
/* 801A661C 001A355C  4B FB F8 09 */	bl clearClaim__Q24Game6PelletFv
/* 801A6620 001A3560  C0 42 AE 70 */	lfs f2, lbl_805191D0@sda21(r2)
/* 801A6624 001A3564  C0 22 AE 30 */	lfs f1, lbl_80519190@sda21(r2)
/* 801A6628 001A3568  D0 5F 01 68 */	stfs f2, 0x168(r31)
/* 801A662C 001A356C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6630 001A3570  D0 5F 01 6C */	stfs f2, 0x16c(r31)
/* 801A6634 001A3574  D0 5F 01 70 */	stfs f2, 0x170(r31)
/* 801A6638 001A3578  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 801A663C 001A357C  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 801A6640 001A3580  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 801A6644 001A3584  4B F2 2F 5D */	bl rand
/* 801A6648 001A3588  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801A664C 001A358C  3C 00 43 30 */	lis r0, 0x4330
/* 801A6650 001A3590  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A6654 001A3594  C8 62 AE 90 */	lfd f3, lbl_805191F0@sda21(r2)
/* 801A6658 001A3598  90 01 00 08 */	stw r0, 8(r1)
/* 801A665C 001A359C  C0 42 AE 74 */	lfs f2, lbl_805191D4@sda21(r2)
/* 801A6660 001A35A0  C8 01 00 08 */	lfd f0, 8(r1)
/* 801A6664 001A35A4  C0 22 AE 78 */	lfs f1, lbl_805191D8@sda21(r2)
/* 801A6668 001A35A8  EC 60 18 28 */	fsubs f3, f0, f3
/* 801A666C 001A35AC  C0 02 AE 58 */	lfs f0, lbl_805191B8@sda21(r2)
/* 801A6670 001A35B0  EC 43 10 24 */	fdivs f2, f3, f2
/* 801A6674 001A35B4  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801A6678 001A35B8  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 801A667C 001A35BC  4B F2 2F 25 */	bl rand
/* 801A6680 001A35C0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801A6684 001A35C4  3C 00 43 30 */	lis r0, 0x4330
/* 801A6688 001A35C8  90 61 00 14 */	stw r3, 0x14(r1)
/* 801A668C 001A35CC  C8 62 AE 90 */	lfd f3, lbl_805191F0@sda21(r2)
/* 801A6690 001A35D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 801A6694 001A35D4  C0 42 AE 74 */	lfs f2, lbl_805191D4@sda21(r2)
/* 801A6698 001A35D8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801A669C 001A35DC  C0 22 AE 80 */	lfs f1, lbl_805191E0@sda21(r2)
/* 801A66A0 001A35E0  EC 60 18 28 */	fsubs f3, f0, f3
/* 801A66A4 001A35E4  C0 02 AE 7C */	lfs f0, lbl_805191DC@sda21(r2)
/* 801A66A8 001A35E8  EC 43 10 24 */	fdivs f2, f3, f2
/* 801A66AC 001A35EC  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801A66B0 001A35F0  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 801A66B4 001A35F4  4B F2 2E ED */	bl rand
/* 801A66B8 001A35F8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801A66BC 001A35FC  3C 00 43 30 */	lis r0, 0x4330
/* 801A66C0 001A3600  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801A66C4 001A3604  C8 62 AE 90 */	lfd f3, lbl_805191F0@sda21(r2)
/* 801A66C8 001A3608  90 01 00 18 */	stw r0, 0x18(r1)
/* 801A66CC 001A360C  C0 42 AE 74 */	lfs f2, lbl_805191D4@sda21(r2)
/* 801A66D0 001A3610  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 801A66D4 001A3614  C0 22 AE 88 */	lfs f1, lbl_805191E8@sda21(r2)
/* 801A66D8 001A3618  EC 60 18 28 */	fsubs f3, f0, f3
/* 801A66DC 001A361C  C0 02 AE 84 */	lfs f0, lbl_805191E4@sda21(r2)
/* 801A66E0 001A3620  EC 43 10 24 */	fdivs f2, f3, f2
/* 801A66E4 001A3624  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801A66E8 001A3628  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801A66EC 001A362C  4B F2 2E B5 */	bl rand
/* 801A66F0 001A3630  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801A66F4 001A3634  3C 60 43 30 */	lis r3, 0x4330
/* 801A66F8 001A3638  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A66FC 001A363C  38 00 00 00 */	li r0, 0
/* 801A6700 001A3640  C8 62 AE 90 */	lfd f3, lbl_805191F0@sda21(r2)
/* 801A6704 001A3644  90 61 00 20 */	stw r3, 0x20(r1)
/* 801A6708 001A3648  C0 22 AE 74 */	lfs f1, lbl_805191D4@sda21(r2)
/* 801A670C 001A364C  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 801A6710 001A3650  C0 02 AE 8C */	lfs f0, lbl_805191EC@sda21(r2)
/* 801A6714 001A3654  EC 42 18 28 */	fsubs f2, f2, f3
/* 801A6718 001A3658  EC 22 08 24 */	fdivs f1, f2, f1
/* 801A671C 001A365C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801A6720 001A3660  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801A6724 001A3664  98 1E 00 2C */	stb r0, 0x2c(r30)
/* 801A6728 001A3668  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801A672C 001A366C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801A6730 001A3670  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801A6734 001A3674  7C 08 03 A6 */	mtlr r0
/* 801A6738 001A3678  38 21 00 30 */	addi r1, r1, 0x30
/* 801A673C 001A367C  4E 80 00 20 */	blr 
.endfn init__Q24Game17PelletAppearStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game17PelletAppearStateFPQ24Game6Pellet, global
/* 801A6740 001A3680  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801A6744 001A3684  7C 08 02 A6 */	mflr r0
/* 801A6748 001A3688  90 01 00 64 */	stw r0, 0x64(r1)
/* 801A674C 001A368C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 801A6750 001A3690  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 801A6754 001A3694  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 801A6758 001A3698  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 801A675C 001A369C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801A6760 001A36A0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801A6764 001A36A4  7C 7E 1B 78 */	mr r30, r3
/* 801A6768 001A36A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A676C 001A36AC  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801A6770 001A36B0  7C 9F 23 78 */	mr r31, r4
/* 801A6774 001A36B4  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801A6778 001A36B8  C3 E3 00 54 */	lfs f31, 0x54(r3)
/* 801A677C 001A36BC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801A6780 001A36C0  C3 C2 AE 28 */	lfs f30, lbl_80519188@sda21(r2)
/* 801A6784 001A36C4  41 80 01 AC */	blt .L_801A6930
/* 801A6788 001A36C8  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 801A678C 001A36CC  EC 01 18 2A */	fadds f0, f1, f3
/* 801A6790 001A36D0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801A6794 001A36D4  40 80 00 14 */	bge .L_801A67A8
/* 801A6798 001A36D8  EC 02 08 28 */	fsubs f0, f2, f1
/* 801A679C 001A36DC  EC 00 18 24 */	fdivs f0, f0, f3
/* 801A67A0 001A36E0  EF C0 00 32 */	fmuls f30, f0, f0
/* 801A67A4 001A36E4  48 00 01 8C */	b .L_801A6930
.L_801A67A8:
/* 801A67A8 001A36E8  88 1E 00 2C */	lbz r0, 0x2c(r30)
/* 801A67AC 001A36EC  28 00 00 00 */	cmplwi r0, 0
/* 801A67B0 001A36F0  40 82 00 8C */	bne .L_801A683C
/* 801A67B4 001A36F4  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801A67B8 001A36F8  C0 1F 01 44 */	lfs f0, 0x144(r31)
/* 801A67BC 001A36FC  C0 3F 01 54 */	lfs f1, 0x154(r31)
/* 801A67C0 001A3700  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801A67C4 001A3704  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 801A67C8 001A3708  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801A67CC 001A370C  38 A3 6A 78 */	addi r5, r3, __vt__Q23efx8TSimple1@l
/* 801A67D0 001A3710  3C 80 80 4B */	lis r4, __vt__Q23efx12TTsuyuGrowon@ha
/* 801A67D4 001A3714  90 01 00 18 */	stw r0, 0x18(r1)
/* 801A67D8 001A3718  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801A67DC 001A371C  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801A67E0 001A3720  38 E0 01 C1 */	li r7, 0x1c1
/* 801A67E4 001A3724  38 C0 00 00 */	li r6, 0
/* 801A67E8 001A3728  90 A1 00 18 */	stw r5, 0x18(r1)
/* 801A67EC 001A372C  38 A4 50 F0 */	addi r5, r4, __vt__Q23efx12TTsuyuGrowon@l
/* 801A67F0 001A3730  38 61 00 18 */	addi r3, r1, 0x18
/* 801A67F4 001A3734  B0 E1 00 1C */	sth r7, 0x1c(r1)
/* 801A67F8 001A3738  38 81 00 08 */	addi r4, r1, 8
/* 801A67FC 001A373C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801A6800 001A3740  90 A1 00 18 */	stw r5, 0x18(r1)
/* 801A6804 001A3744  90 01 00 08 */	stw r0, 8(r1)
/* 801A6808 001A3748  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801A680C 001A374C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801A6810 001A3750  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801A6814 001A3754  48 20 87 71 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 801A6818 001A3758  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801A681C 001A375C  38 80 38 40 */	li r4, 0x3840
/* 801A6820 001A3760  38 A0 00 00 */	li r5, 0
/* 801A6824 001A3764  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801A6828 001A3768  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A682C 001A376C  7D 89 03 A6 */	mtctr r12
/* 801A6830 001A3770  4E 80 04 21 */	bctrl 
/* 801A6834 001A3774  38 00 00 01 */	li r0, 1
/* 801A6838 001A3778  98 1E 00 2C */	stb r0, 0x2c(r30)
.L_801A683C:
/* 801A683C 001A377C  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 801A6840 001A3780  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 801A6844 001A3784  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 801A6848 001A3788  48 26 B3 89 */	bl roundAng__Ff
/* 801A684C 001A378C  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 801A6850 001A3790  C0 42 AE 98 */	lfs f2, lbl_805191F8@sda21(r2)
/* 801A6854 001A3794  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 801A6858 001A3798  C0 7E 00 14 */	lfs f3, 0x14(r30)
/* 801A685C 001A379C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6860 001A37A0  EC A2 00 72 */	fmuls f5, f2, f1
/* 801A6864 001A37A4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801A6868 001A37A8  40 80 00 30 */	bge .L_801A6898
/* 801A686C 001A37AC  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A6870 001A37B0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A6874 001A37B4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A6878 001A37B8  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A687C 001A37BC  FC 00 00 1E */	fctiwz f0, f0
/* 801A6880 001A37C0  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801A6884 001A37C4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801A6888 001A37C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A688C 001A37CC  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A6890 001A37D0  FC 80 00 50 */	fneg f4, f0
/* 801A6894 001A37D4  48 00 00 28 */	b .L_801A68BC
.L_801A6898:
/* 801A6898 001A37D8  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A689C 001A37DC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A68A0 001A37E0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A68A4 001A37E4  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A68A8 001A37E8  FC 00 00 1E */	fctiwz f0, f0
/* 801A68AC 001A37EC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801A68B0 001A37F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801A68B4 001A37F4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A68B8 001A37F8  7C 83 04 2E */	lfsx f4, r3, r0
.L_801A68BC:
/* 801A68BC 001A37FC  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801A68C0 001A3800  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 801A68C4 001A3804  C0 62 AE 30 */	lfs f3, lbl_80519190@sda21(r2)
/* 801A68C8 001A3808  EC 21 00 2A */	fadds f1, f1, f0
/* 801A68CC 001A380C  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801A68D0 001A3810  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 801A68D4 001A3814  EF C5 19 3A */	fmadds f30, f5, f4, f3
/* 801A68D8 001A3818  EC 22 08 28 */	fsubs f1, f2, f1
/* 801A68DC 001A381C  EC 01 00 24 */	fdivs f0, f1, f0
/* 801A68E0 001A3820  EC 00 18 3C */	fnmsubs f0, f0, f0, f3
/* 801A68E4 001A3824  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 801A68E8 001A3828  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801A68EC 001A382C  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 801A68F0 001A3830  C0 5E 00 24 */	lfs f2, 0x24(r30)
/* 801A68F4 001A3834  EC 01 00 2A */	fadds f0, f1, f0
/* 801A68F8 001A3838  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 801A68FC 001A383C  EC 02 00 2A */	fadds f0, f2, f0
/* 801A6900 001A3840  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A6904 001A3844  4C 41 13 82 */	cror 2, 1, 2
/* 801A6908 001A3848  40 82 00 28 */	bne .L_801A6930
/* 801A690C 001A384C  7F C3 F3 78 */	mr r3, r30
/* 801A6910 001A3850  FF C0 18 90 */	fmr f30, f3
/* 801A6914 001A3854  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6918 001A3858  7F E4 FB 78 */	mr r4, r31
/* 801A691C 001A385C  38 A0 00 00 */	li r5, 0
/* 801A6920 001A3860  38 C0 00 00 */	li r6, 0
/* 801A6924 001A3864  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A6928 001A3868  7D 89 03 A6 */	mtctr r12
/* 801A692C 001A386C  4E 80 04 21 */	bctrl 
.L_801A6930:
/* 801A6930 001A3870  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 801A6934 001A3874  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6938 001A3878  EC 21 F8 2A */	fadds f1, f1, f31
/* 801A693C 001A387C  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 801A6940 001A3880  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 801A6944 001A3884  40 82 00 08 */	bne .L_801A694C
/* 801A6948 001A3888  C3 C2 AE 70 */	lfs f30, lbl_805191D0@sda21(r2)
.L_801A694C:
/* 801A694C 001A388C  D3 DF 01 68 */	stfs f30, 0x168(r31)
/* 801A6950 001A3890  D3 DF 01 6C */	stfs f30, 0x16c(r31)
/* 801A6954 001A3894  D3 DF 01 70 */	stfs f30, 0x170(r31)
/* 801A6958 001A3898  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 801A695C 001A389C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 801A6960 001A38A0  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 801A6964 001A38A4  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 801A6968 001A38A8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801A696C 001A38AC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801A6970 001A38B0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801A6974 001A38B4  7C 08 03 A6 */	mtlr r0
/* 801A6978 001A38B8  38 21 00 60 */	addi r1, r1, 0x60
/* 801A697C 001A38BC  4E 80 00 20 */	blr 
.endfn exec__Q24Game17PelletAppearStateFPQ24Game6Pellet

.fn cleanup__Q24Game17PelletAppearStateFPQ24Game6Pellet, global
/* 801A6980 001A38C0  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17PelletAppearStateFPQ24Game6Pellet

.fn init__Q24Game22PelletScaleAppearStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A6984 001A38C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801A6988 001A38C8  7C 08 02 A6 */	mflr r0
/* 801A698C 001A38CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801A6990 001A38D0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801A6994 001A38D4  7C 9F 23 78 */	mr r31, r4
/* 801A6998 001A38D8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801A699C 001A38DC  7C 7E 1B 78 */	mr r30, r3
/* 801A69A0 001A38E0  7F E3 FB 78 */	mr r3, r31
/* 801A69A4 001A38E4  4B FB F4 81 */	bl clearClaim__Q24Game6PelletFv
/* 801A69A8 001A38E8  C0 42 AE 70 */	lfs f2, lbl_805191D0@sda21(r2)
/* 801A69AC 001A38EC  C0 22 AE 30 */	lfs f1, lbl_80519190@sda21(r2)
/* 801A69B0 001A38F0  D0 5F 01 68 */	stfs f2, 0x168(r31)
/* 801A69B4 001A38F4  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A69B8 001A38F8  D0 5F 01 6C */	stfs f2, 0x16c(r31)
/* 801A69BC 001A38FC  D0 5F 01 70 */	stfs f2, 0x170(r31)
/* 801A69C0 001A3900  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 801A69C4 001A3904  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 801A69C8 001A3908  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 801A69CC 001A390C  4B F2 2B D5 */	bl rand
/* 801A69D0 001A3910  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801A69D4 001A3914  3C 00 43 30 */	lis r0, 0x4330
/* 801A69D8 001A3918  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A69DC 001A391C  C8 62 AE 90 */	lfd f3, lbl_805191F0@sda21(r2)
/* 801A69E0 001A3920  90 01 00 08 */	stw r0, 8(r1)
/* 801A69E4 001A3924  C0 42 AE 74 */	lfs f2, lbl_805191D4@sda21(r2)
/* 801A69E8 001A3928  C8 01 00 08 */	lfd f0, 8(r1)
/* 801A69EC 001A392C  C0 22 AE 78 */	lfs f1, lbl_805191D8@sda21(r2)
/* 801A69F0 001A3930  EC 60 18 28 */	fsubs f3, f0, f3
/* 801A69F4 001A3934  C0 02 AE 9C */	lfs f0, lbl_805191FC@sda21(r2)
/* 801A69F8 001A3938  EC 43 10 24 */	fdivs f2, f3, f2
/* 801A69FC 001A393C  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801A6A00 001A3940  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 801A6A04 001A3944  4B F2 2B 9D */	bl rand
/* 801A6A08 001A3948  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801A6A0C 001A394C  3C 00 43 30 */	lis r0, 0x4330
/* 801A6A10 001A3950  90 61 00 14 */	stw r3, 0x14(r1)
/* 801A6A14 001A3954  C8 62 AE 90 */	lfd f3, lbl_805191F0@sda21(r2)
/* 801A6A18 001A3958  90 01 00 10 */	stw r0, 0x10(r1)
/* 801A6A1C 001A395C  C0 42 AE 74 */	lfs f2, lbl_805191D4@sda21(r2)
/* 801A6A20 001A3960  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801A6A24 001A3964  C0 22 AE A4 */	lfs f1, lbl_80519204@sda21(r2)
/* 801A6A28 001A3968  EC 60 18 28 */	fsubs f3, f0, f3
/* 801A6A2C 001A396C  C0 02 AE A0 */	lfs f0, lbl_80519200@sda21(r2)
/* 801A6A30 001A3970  EC 43 10 24 */	fdivs f2, f3, f2
/* 801A6A34 001A3974  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801A6A38 001A3978  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 801A6A3C 001A397C  4B F2 2B 65 */	bl rand
/* 801A6A40 001A3980  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801A6A44 001A3984  3C 80 43 30 */	lis r4, 0x4330
/* 801A6A48 001A3988  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801A6A4C 001A398C  38 00 00 00 */	li r0, 0
/* 801A6A50 001A3990  C8 22 AE 90 */	lfd f1, lbl_805191F0@sda21(r2)
/* 801A6A54 001A3994  7F E3 FB 78 */	mr r3, r31
/* 801A6A58 001A3998  90 81 00 18 */	stw r4, 0x18(r1)
/* 801A6A5C 001A399C  38 80 00 00 */	li r4, 0
/* 801A6A60 001A39A0  C0 62 AE 74 */	lfs f3, lbl_805191D4@sda21(r2)
/* 801A6A64 001A39A4  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 801A6A68 001A39A8  C0 42 AE 98 */	lfs f2, lbl_805191F8@sda21(r2)
/* 801A6A6C 001A39AC  EC 80 08 28 */	fsubs f4, f0, f1
/* 801A6A70 001A39B0  C0 22 AE A8 */	lfs f1, lbl_80519208@sda21(r2)
/* 801A6A74 001A39B4  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6A78 001A39B8  EC 64 18 24 */	fdivs f3, f4, f3
/* 801A6A7C 001A39BC  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 801A6A80 001A39C0  D0 3E 00 24 */	stfs f1, 0x24(r30)
/* 801A6A84 001A39C4  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801A6A88 001A39C8  98 1E 00 2C */	stb r0, 0x2c(r30)
/* 801A6A8C 001A39CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A6A90 001A39D0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 801A6A94 001A39D4  7D 89 03 A6 */	mtctr r12
/* 801A6A98 001A39D8  4E 80 04 21 */	bctrl 
/* 801A6A9C 001A39DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801A6AA0 001A39E0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801A6AA4 001A39E4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801A6AA8 001A39E8  7C 08 03 A6 */	mtlr r0
/* 801A6AAC 001A39EC  38 21 00 30 */	addi r1, r1, 0x30
/* 801A6AB0 001A39F0  4E 80 00 20 */	blr 
.endfn init__Q24Game22PelletScaleAppearStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet, global
/* 801A6AB4 001A39F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801A6AB8 001A39F8  7C 08 02 A6 */	mflr r0
/* 801A6ABC 001A39FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801A6AC0 001A3A00  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801A6AC4 001A3A04  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801A6AC8 001A3A08  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 801A6ACC 001A3A0C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 801A6AD0 001A3A10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A6AD4 001A3A14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A6AD8 001A3A18  7C 7E 1B 78 */	mr r30, r3
/* 801A6ADC 001A3A1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A6AE0 001A3A20  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801A6AE4 001A3A24  7C 9F 23 78 */	mr r31, r4
/* 801A6AE8 001A3A28  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801A6AEC 001A3A2C  C3 E3 00 54 */	lfs f31, 0x54(r3)
/* 801A6AF0 001A3A30  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801A6AF4 001A3A34  C3 C2 AE 28 */	lfs f30, lbl_80519188@sda21(r2)
/* 801A6AF8 001A3A38  41 80 01 28 */	blt .L_801A6C20
/* 801A6AFC 001A3A3C  C0 7E 00 20 */	lfs f3, 0x20(r30)
/* 801A6B00 001A3A40  EC 01 18 2A */	fadds f0, f1, f3
/* 801A6B04 001A3A44  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801A6B08 001A3A48  40 80 00 10 */	bge .L_801A6B18
/* 801A6B0C 001A3A4C  EC 02 08 28 */	fsubs f0, f2, f1
/* 801A6B10 001A3A50  EF C0 18 24 */	fdivs f30, f0, f3
/* 801A6B14 001A3A54  48 00 01 0C */	b .L_801A6C20
.L_801A6B18:
/* 801A6B18 001A3A58  88 1E 00 2C */	lbz r0, 0x2c(r30)
/* 801A6B1C 001A3A5C  28 00 00 00 */	cmplwi r0, 0
/* 801A6B20 001A3A60  40 82 00 0C */	bne .L_801A6B2C
/* 801A6B24 001A3A64  38 00 00 01 */	li r0, 1
/* 801A6B28 001A3A68  98 1E 00 2C */	stb r0, 0x2c(r30)
.L_801A6B2C:
/* 801A6B2C 001A3A6C  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 801A6B30 001A3A70  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 801A6B34 001A3A74  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 801A6B38 001A3A78  48 26 B0 99 */	bl roundAng__Ff
/* 801A6B3C 001A3A7C  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 801A6B40 001A3A80  C0 42 AE A0 */	lfs f2, lbl_80519200@sda21(r2)
/* 801A6B44 001A3A84  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 801A6B48 001A3A88  C0 7E 00 14 */	lfs f3, 0x14(r30)
/* 801A6B4C 001A3A8C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6B50 001A3A90  EC A2 00 72 */	fmuls f5, f2, f1
/* 801A6B54 001A3A94  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801A6B58 001A3A98  40 80 00 30 */	bge .L_801A6B88
/* 801A6B5C 001A3A9C  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A6B60 001A3AA0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A6B64 001A3AA4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A6B68 001A3AA8  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A6B6C 001A3AAC  FC 00 00 1E */	fctiwz f0, f0
/* 801A6B70 001A3AB0  D8 01 00 08 */	stfd f0, 8(r1)
/* 801A6B74 001A3AB4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801A6B78 001A3AB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A6B7C 001A3ABC  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A6B80 001A3AC0  FC 80 00 50 */	fneg f4, f0
/* 801A6B84 001A3AC4  48 00 00 28 */	b .L_801A6BAC
.L_801A6B88:
/* 801A6B88 001A3AC8  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A6B8C 001A3ACC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A6B90 001A3AD0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A6B94 001A3AD4  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A6B98 001A3AD8  FC 00 00 1E */	fctiwz f0, f0
/* 801A6B9C 001A3ADC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801A6BA0 001A3AE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A6BA4 001A3AE4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A6BA8 001A3AE8  7C 83 04 2E */	lfsx f4, r3, r0
.L_801A6BAC:
/* 801A6BAC 001A3AEC  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801A6BB0 001A3AF0  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 801A6BB4 001A3AF4  C0 62 AE 30 */	lfs f3, lbl_80519190@sda21(r2)
/* 801A6BB8 001A3AF8  EC 21 00 2A */	fadds f1, f1, f0
/* 801A6BBC 001A3AFC  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801A6BC0 001A3B00  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 801A6BC4 001A3B04  EF C5 19 3A */	fmadds f30, f5, f4, f3
/* 801A6BC8 001A3B08  EC 22 08 28 */	fsubs f1, f2, f1
/* 801A6BCC 001A3B0C  EC 01 00 24 */	fdivs f0, f1, f0
/* 801A6BD0 001A3B10  EC 00 18 3C */	fnmsubs f0, f0, f0, f3
/* 801A6BD4 001A3B14  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 801A6BD8 001A3B18  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801A6BDC 001A3B1C  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 801A6BE0 001A3B20  C0 5E 00 24 */	lfs f2, 0x24(r30)
/* 801A6BE4 001A3B24  EC 01 00 2A */	fadds f0, f1, f0
/* 801A6BE8 001A3B28  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 801A6BEC 001A3B2C  EC 02 00 2A */	fadds f0, f2, f0
/* 801A6BF0 001A3B30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A6BF4 001A3B34  4C 41 13 82 */	cror 2, 1, 2
/* 801A6BF8 001A3B38  40 82 00 28 */	bne .L_801A6C20
/* 801A6BFC 001A3B3C  7F C3 F3 78 */	mr r3, r30
/* 801A6C00 001A3B40  FF C0 18 90 */	fmr f30, f3
/* 801A6C04 001A3B44  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A6C08 001A3B48  7F E4 FB 78 */	mr r4, r31
/* 801A6C0C 001A3B4C  38 A0 00 00 */	li r5, 0
/* 801A6C10 001A3B50  38 C0 00 00 */	li r6, 0
/* 801A6C14 001A3B54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A6C18 001A3B58  7D 89 03 A6 */	mtctr r12
/* 801A6C1C 001A3B5C  4E 80 04 21 */	bctrl 
.L_801A6C20:
/* 801A6C20 001A3B60  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 801A6C24 001A3B64  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6C28 001A3B68  EC 21 F8 2A */	fadds f1, f1, f31
/* 801A6C2C 001A3B6C  FC 00 F0 00 */	fcmpu cr0, f0, f30
/* 801A6C30 001A3B70  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 801A6C34 001A3B74  40 82 00 08 */	bne .L_801A6C3C
/* 801A6C38 001A3B78  C3 C2 AE 70 */	lfs f30, lbl_805191D0@sda21(r2)
.L_801A6C3C:
/* 801A6C3C 001A3B7C  D3 DF 01 68 */	stfs f30, 0x168(r31)
/* 801A6C40 001A3B80  D3 DF 01 6C */	stfs f30, 0x16c(r31)
/* 801A6C44 001A3B84  D3 DF 01 70 */	stfs f30, 0x170(r31)
/* 801A6C48 001A3B88  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801A6C4C 001A3B8C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801A6C50 001A3B90  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 801A6C54 001A3B94  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 801A6C58 001A3B98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A6C5C 001A3B9C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801A6C60 001A3BA0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A6C64 001A3BA4  7C 08 03 A6 */	mtlr r0
/* 801A6C68 001A3BA8  38 21 00 40 */	addi r1, r1, 0x40
/* 801A6C6C 001A3BAC  4E 80 00 20 */	blr 
.endfn exec__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet

.fn cleanup__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet, global
/* 801A6C70 001A3BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A6C74 001A3BB4  7C 08 02 A6 */	mflr r0
/* 801A6C78 001A3BB8  7C 83 23 78 */	mr r3, r4
/* 801A6C7C 001A3BBC  38 80 00 01 */	li r4, 1
/* 801A6C80 001A3BC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A6C84 001A3BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6C88 001A3BC8  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 801A6C8C 001A3BCC  7D 89 03 A6 */	mtctr r12
/* 801A6C90 001A3BD0  4E 80 04 21 */	bctrl 
/* 801A6C94 001A3BD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A6C98 001A3BD8  7C 08 03 A6 */	mtlr r0
/* 801A6C9C 001A3BDC  38 21 00 10 */	addi r1, r1, 0x10
/* 801A6CA0 001A3BE0  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game22PelletScaleAppearStateFPQ24Game6Pellet

.fn init__Q24Game15PelletBuryStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A6CA4 001A3BE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A6CA8 001A3BE8  7C 08 02 A6 */	mflr r0
/* 801A6CAC 001A3BEC  7C 83 23 78 */	mr r3, r4
/* 801A6CB0 001A3BF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A6CB4 001A3BF4  4B FB F1 71 */	bl clearClaim__Q24Game6PelletFv
/* 801A6CB8 001A3BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A6CBC 001A3BFC  7C 08 03 A6 */	mtlr r0
/* 801A6CC0 001A3C00  38 21 00 10 */	addi r1, r1, 0x10
/* 801A6CC4 001A3C04  4E 80 00 20 */	blr 
.endfn init__Q24Game15PelletBuryStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game15PelletBuryStateFPQ24Game6Pellet, global
/* 801A6CC8 001A3C08  4E 80 00 20 */	blr 
.endfn exec__Q24Game15PelletBuryStateFPQ24Game6Pellet

.fn cleanup__Q24Game15PelletBuryStateFPQ24Game6Pellet, global
/* 801A6CCC 001A3C0C  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game15PelletBuryStateFPQ24Game6Pellet

.fn init__Q24Game16PelletZukanStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A6CD0 001A3C10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A6CD4 001A3C14  7C 08 02 A6 */	mflr r0
/* 801A6CD8 001A3C18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A6CDC 001A3C1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A6CE0 001A3C20  7C 7F 1B 78 */	mr r31, r3
/* 801A6CE4 001A3C24  7C 83 23 78 */	mr r3, r4
/* 801A6CE8 001A3C28  4B FB F1 3D */	bl clearClaim__Q24Game6PelletFv
/* 801A6CEC 001A3C2C  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6CF0 001A3C30  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 801A6CF4 001A3C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A6CF8 001A3C38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A6CFC 001A3C3C  7C 08 03 A6 */	mtlr r0
/* 801A6D00 001A3C40  38 21 00 10 */	addi r1, r1, 0x10
/* 801A6D04 001A3C44  4E 80 00 20 */	blr 
.endfn init__Q24Game16PelletZukanStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game16PelletZukanStateFPQ24Game6Pellet, global
/* 801A6D08 001A3C48  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801A6D0C 001A3C4C  7C 08 02 A6 */	mflr r0
/* 801A6D10 001A3C50  C0 62 AE AC */	lfs f3, lbl_8051920C@sda21(r2)
/* 801A6D14 001A3C54  90 01 00 34 */	stw r0, 0x34(r1)
/* 801A6D18 001A3C58  C0 02 AE 58 */	lfs f0, lbl_805191B8@sda21(r2)
/* 801A6D1C 001A3C5C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801A6D20 001A3C60  7C 9F 23 78 */	mr r31, r4
/* 801A6D24 001A3C64  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801A6D28 001A3C68  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 801A6D2C 001A3C6C  C0 45 00 54 */	lfs f2, 0x54(r5)
/* 801A6D30 001A3C70  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 801A6D34 001A3C74  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 801A6D38 001A3C78  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 801A6D3C 001A3C7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A6D40 001A3C80  40 81 00 0C */	ble .L_801A6D4C
/* 801A6D44 001A3C84  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A6D48 001A3C88  D0 03 00 10 */	stfs f0, 0x10(r3)
.L_801A6D4C:
/* 801A6D4C 001A3C8C  7F E4 FB 78 */	mr r4, r31
/* 801A6D50 001A3C90  38 61 00 08 */	addi r3, r1, 8
/* 801A6D54 001A3C94  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A6D58 001A3C98  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A6D5C 001A3C9C  7D 89 03 A6 */	mtctr r12
/* 801A6D60 001A3CA0  4E 80 04 21 */	bctrl 
/* 801A6D64 001A3CA4  C0 41 00 08 */	lfs f2, 8(r1)
/* 801A6D68 001A3CA8  38 7F 01 38 */	addi r3, r31, 0x138
/* 801A6D6C 001A3CAC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801A6D70 001A3CB0  38 81 00 14 */	addi r4, r1, 0x14
/* 801A6D74 001A3CB4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801A6D78 001A3CB8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801A6D7C 001A3CBC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801A6D80 001A3CC0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801A6D84 001A3CC4  48 28 1A BD */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 801A6D88 001A3CC8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801A6D8C 001A3CCC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801A6D90 001A3CD0  7C 08 03 A6 */	mtlr r0
/* 801A6D94 001A3CD4  38 21 00 30 */	addi r1, r1, 0x30
/* 801A6D98 001A3CD8  4E 80 00 20 */	blr 
.endfn exec__Q24Game16PelletZukanStateFPQ24Game6Pellet

.fn cleanup__Q24Game16PelletZukanStateFPQ24Game6Pellet, global
/* 801A6D9C 001A3CDC  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game16PelletZukanStateFPQ24Game6Pellet

.fn init__Q24Game13PelletUpStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A6DA0 001A3CE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A6DA4 001A3CE4  7C 08 02 A6 */	mflr r0
/* 801A6DA8 001A3CE8  7C 83 23 78 */	mr r3, r4
/* 801A6DAC 001A3CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A6DB0 001A3CF0  4B FB F0 75 */	bl clearClaim__Q24Game6PelletFv
/* 801A6DB4 001A3CF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A6DB8 001A3CF8  7C 08 03 A6 */	mtlr r0
/* 801A6DBC 001A3CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 801A6DC0 001A3D00  4E 80 00 20 */	blr 
.endfn init__Q24Game13PelletUpStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game13PelletUpStateFPQ24Game6Pellet, global
/* 801A6DC4 001A3D04  4E 80 00 20 */	blr 
.endfn exec__Q24Game13PelletUpStateFPQ24Game6Pellet

.fn cleanup__Q24Game13PelletUpStateFPQ24Game6Pellet, global
/* 801A6DC8 001A3D08  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game13PelletUpStateFPQ24Game6Pellet

.fn __ct__Q24Game17PelletReturnStateFv, global
/* 801A6DCC 001A3D0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A6DD0 001A3D10  7C 08 02 A6 */	mflr r0
/* 801A6DD4 001A3D14  3C 80 80 4B */	lis r4, __vt__Q24Game11PelletState@ha
/* 801A6DD8 001A3D18  3C A0 80 4B */	lis r5, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@ha
/* 801A6DDC 001A3D1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A6DE0 001A3D20  38 05 51 E0 */	addi r0, r5, "__vt__Q24Game24FSMState<Q24Game6Pellet>"@l
/* 801A6DE4 001A3D24  38 C0 00 08 */	li r6, 8
/* 801A6DE8 001A3D28  38 A0 00 00 */	li r5, 0
/* 801A6DEC 001A3D2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A6DF0 001A3D30  7C 7F 1B 78 */	mr r31, r3
/* 801A6DF4 001A3D34  38 84 51 B4 */	addi r4, r4, __vt__Q24Game11PelletState@l
/* 801A6DF8 001A3D38  3C 60 80 4B */	lis r3, __vt__Q24Game17PelletReturnState@ha
/* 801A6DFC 001A3D3C  93 C1 00 08 */	stw r30, 8(r1)
/* 801A6E00 001A3D40  90 1F 00 00 */	stw r0, 0(r31)
/* 801A6E04 001A3D44  38 03 50 14 */	addi r0, r3, __vt__Q24Game17PelletReturnState@l
/* 801A6E08 001A3D48  90 DF 00 04 */	stw r6, 4(r31)
/* 801A6E0C 001A3D4C  90 BF 00 08 */	stw r5, 8(r31)
/* 801A6E10 001A3D50  90 9F 00 00 */	stw r4, 0(r31)
/* 801A6E14 001A3D54  90 1F 00 00 */	stw r0, 0(r31)
/* 801A6E18 001A3D58  90 BF 00 38 */	stw r5, 0x38(r31)
/* 801A6E1C 001A3D5C  90 BF 00 3C */	stw r5, 0x3c(r31)
/* 801A6E20 001A3D60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801A6E24 001A3D64  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801A6E28 001A3D68  2C 00 00 01 */	cmpwi r0, 1
/* 801A6E2C 001A3D6C  40 82 00 74 */	bne .L_801A6EA0
/* 801A6E30 001A3D70  38 60 00 30 */	li r3, 0x30
/* 801A6E34 001A3D74  4B E7 D0 71 */	bl __nw__FUl
/* 801A6E38 001A3D78  7C 7E 1B 79 */	or. r30, r3, r3
/* 801A6E3C 001A3D7C  41 82 00 28 */	beq .L_801A6E64
/* 801A6E40 001A3D80  38 80 00 00 */	li r4, 0
/* 801A6E44 001A3D84  38 A0 01 23 */	li r5, 0x123
/* 801A6E48 001A3D88  38 C0 01 23 */	li r6, 0x123
/* 801A6E4C 001A3D8C  48 20 96 51 */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 801A6E50 001A3D90  3C 60 80 4E */	lis r3, __vt__Q23efx11TOrimaLight@ha
/* 801A6E54 001A3D94  38 00 00 00 */	li r0, 0
/* 801A6E58 001A3D98  38 63 72 E8 */	addi r3, r3, __vt__Q23efx11TOrimaLight@l
/* 801A6E5C 001A3D9C  90 7E 00 00 */	stw r3, 0(r30)
/* 801A6E60 001A3DA0  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_801A6E64:
/* 801A6E64 001A3DA4  93 DF 00 38 */	stw r30, 0x38(r31)
/* 801A6E68 001A3DA8  38 60 00 30 */	li r3, 0x30
/* 801A6E6C 001A3DAC  4B E7 D0 39 */	bl __nw__FUl
/* 801A6E70 001A3DB0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801A6E74 001A3DB4  41 82 00 28 */	beq .L_801A6E9C
/* 801A6E78 001A3DB8  38 80 00 00 */	li r4, 0
/* 801A6E7C 001A3DBC  38 A0 01 24 */	li r5, 0x124
/* 801A6E80 001A3DC0  38 C0 01 25 */	li r6, 0x125
/* 801A6E84 001A3DC4  48 20 96 19 */	bl __ct__Q23efx10TChaseMtx2FPA4_fUsUs
/* 801A6E88 001A3DC8  3C 60 80 4E */	lis r3, __vt__Q23efx14TOrimaLightAct@ha
/* 801A6E8C 001A3DCC  38 00 00 00 */	li r0, 0
/* 801A6E90 001A3DD0  38 63 72 CC */	addi r3, r3, __vt__Q23efx14TOrimaLightAct@l
/* 801A6E94 001A3DD4  90 7E 00 00 */	stw r3, 0(r30)
/* 801A6E98 001A3DD8  90 1E 00 2C */	stw r0, 0x2c(r30)
.L_801A6E9C:
/* 801A6E9C 001A3DDC  93 DF 00 3C */	stw r30, 0x3c(r31)
.L_801A6EA0:
/* 801A6EA0 001A3DE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A6EA4 001A3DE4  7F E3 FB 78 */	mr r3, r31
/* 801A6EA8 001A3DE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A6EAC 001A3DEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A6EB0 001A3DF0  7C 08 03 A6 */	mtlr r0
/* 801A6EB4 001A3DF4  38 21 00 10 */	addi r1, r1, 0x10
/* 801A6EB8 001A3DF8  4E 80 00 20 */	blr 
.endfn __ct__Q24Game17PelletReturnStateFv

.fn init__Q24Game17PelletReturnStateFPQ24Game6PelletPQ24Game8StateArg, global
/* 801A6EBC 001A3DFC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801A6EC0 001A3E00  7C 08 02 A6 */	mflr r0
/* 801A6EC4 001A3E04  28 05 00 00 */	cmplwi r5, 0
/* 801A6EC8 001A3E08  90 01 00 54 */	stw r0, 0x54(r1)
/* 801A6ECC 001A3E0C  38 00 00 00 */	li r0, 0
/* 801A6ED0 001A3E10  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801A6ED4 001A3E14  3B E0 00 00 */	li r31, 0
/* 801A6ED8 001A3E18  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801A6EDC 001A3E1C  7C 9E 23 78 */	mr r30, r4
/* 801A6EE0 001A3E20  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801A6EE4 001A3E24  7C 7D 1B 78 */	mr r29, r3
/* 801A6EE8 001A3E28  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801A6EEC 001A3E2C  41 82 00 2C */	beq .L_801A6F18
/* 801A6EF0 001A3E30  C0 05 00 00 */	lfs f0, 0(r5)
/* 801A6EF4 001A3E34  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 801A6EF8 001A3E38  C0 05 00 04 */	lfs f0, 4(r5)
/* 801A6EFC 001A3E3C  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 801A6F00 001A3E40  C0 05 00 08 */	lfs f0, 8(r5)
/* 801A6F04 001A3E44  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 801A6F08 001A3E48  48 00 04 41 */	bl initPathfinding__Q24Game17PelletReturnStateFPQ24Game6Pellet
/* 801A6F0C 001A3E4C  2C 03 00 01 */	cmpwi r3, 1
/* 801A6F10 001A3E50  40 82 00 08 */	bne .L_801A6F18
/* 801A6F14 001A3E54  3B E0 00 01 */	li r31, 1
.L_801A6F18:
/* 801A6F18 001A3E58  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801A6F1C 001A3E5C  40 82 00 28 */	bne .L_801A6F44
/* 801A6F20 001A3E60  7F A3 EB 78 */	mr r3, r29
/* 801A6F24 001A3E64  7F C4 F3 78 */	mr r4, r30
/* 801A6F28 001A3E68  81 9D 00 00 */	lwz r12, 0(r29)
/* 801A6F2C 001A3E6C  38 A0 00 00 */	li r5, 0
/* 801A6F30 001A3E70  38 C0 00 00 */	li r6, 0
/* 801A6F34 001A3E74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A6F38 001A3E78  7D 89 03 A6 */	mtctr r12
/* 801A6F3C 001A3E7C  4E 80 04 21 */	bctrl 
/* 801A6F40 001A3E80  48 00 00 74 */	b .L_801A6FB4
.L_801A6F44:
/* 801A6F44 001A3E84  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 801A6F48 001A3E88  28 03 00 00 */	cmplwi r3, 0
/* 801A6F4C 001A3E8C  41 82 00 68 */	beq .L_801A6FB4
/* 801A6F50 001A3E90  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 801A6F54 001A3E94  28 00 00 00 */	cmplwi r0, 0
/* 801A6F58 001A3E98  41 82 00 5C */	beq .L_801A6FB4
/* 801A6F5C 001A3E9C  38 00 00 00 */	li r0, 0
/* 801A6F60 001A3EA0  38 9E 01 38 */	addi r4, r30, 0x138
/* 801A6F64 001A3EA4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801A6F68 001A3EA8  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 801A6F6C 001A3EAC  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801A6F70 001A3EB0  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 801A6F74 001A3EB4  48 20 96 2D */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 801A6F78 001A3EB8  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 801A6F7C 001A3EBC  38 9E 01 38 */	addi r4, r30, 0x138
/* 801A6F80 001A3EC0  48 20 96 21 */	bl setMtxptr__Q23efx10TChaseMtx2FPA4_f
/* 801A6F84 001A3EC4  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 801A6F88 001A3EC8  38 80 00 00 */	li r4, 0
/* 801A6F8C 001A3ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6F90 001A3ED0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A6F94 001A3ED4  7D 89 03 A6 */	mtctr r12
/* 801A6F98 001A3ED8  4E 80 04 21 */	bctrl 
/* 801A6F9C 001A3EDC  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 801A6FA0 001A3EE0  38 80 00 00 */	li r4, 0
/* 801A6FA4 001A3EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A6FA8 001A3EE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A6FAC 001A3EEC  7D 89 03 A6 */	mtctr r12
/* 801A6FB0 001A3EF0  4E 80 04 21 */	bctrl 
.L_801A6FB4:
/* 801A6FB4 001A3EF4  C0 22 AE 28 */	lfs f1, lbl_80519188@sda21(r2)
/* 801A6FB8 001A3EF8  38 00 00 00 */	li r0, 0
/* 801A6FBC 001A3EFC  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A6FC0 001A3F00  7F C3 F3 78 */	mr r3, r30
/* 801A6FC4 001A3F04  D0 3D 00 10 */	stfs f1, 0x10(r29)
/* 801A6FC8 001A3F08  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 801A6FCC 001A3F0C  98 1D 00 18 */	stb r0, 0x18(r29)
/* 801A6FD0 001A3F10  98 1D 00 19 */	stb r0, 0x19(r29)
/* 801A6FD4 001A3F14  4B FF 8B C9 */	bl endCapture__Q24Game8CreatureFv
/* 801A6FD8 001A3F18  7F C3 F3 78 */	mr r3, r30
/* 801A6FDC 001A3F1C  4B FF 84 49 */	bl endStick__Q24Game8CreatureFv
/* 801A6FE0 001A3F20  7F C4 F3 78 */	mr r4, r30
/* 801A6FE4 001A3F24  38 61 00 18 */	addi r3, r1, 0x18
/* 801A6FE8 001A3F28  4B FF 8C 75 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 801A6FEC 001A3F2C  38 00 00 00 */	li r0, 0
/* 801A6FF0 001A3F30  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 801A6FF4 001A3F34  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 801A6FF8 001A3F38  38 61 00 18 */	addi r3, r1, 0x18
/* 801A6FFC 001A3F3C  28 00 00 00 */	cmplwi r0, 0
/* 801A7000 001A3F40  90 81 00 08 */	stw r4, 8(r1)
/* 801A7004 001A3F44  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A7008 001A3F48  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A700C 001A3F4C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A7010 001A3F50  40 82 00 1C */	bne .L_801A702C
/* 801A7014 001A3F54  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7018 001A3F58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A701C 001A3F5C  7D 89 03 A6 */	mtctr r12
/* 801A7020 001A3F60  4E 80 04 21 */	bctrl 
/* 801A7024 001A3F64  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A7028 001A3F68  48 00 01 64 */	b .L_801A718C
.L_801A702C:
/* 801A702C 001A3F6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7030 001A3F70  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A7034 001A3F74  7D 89 03 A6 */	mtctr r12
/* 801A7038 001A3F78  4E 80 04 21 */	bctrl 
/* 801A703C 001A3F7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A7040 001A3F80  48 00 00 58 */	b .L_801A7098
.L_801A7044:
/* 801A7044 001A3F84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7048 001A3F88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A704C 001A3F8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7050 001A3F90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A7054 001A3F94  7D 89 03 A6 */	mtctr r12
/* 801A7058 001A3F98  4E 80 04 21 */	bctrl 
/* 801A705C 001A3F9C  7C 64 1B 78 */	mr r4, r3
/* 801A7060 001A3FA0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A7064 001A3FA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7068 001A3FA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A706C 001A3FAC  7D 89 03 A6 */	mtctr r12
/* 801A7070 001A3FB0  4E 80 04 21 */	bctrl 
/* 801A7074 001A3FB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7078 001A3FB8  40 82 01 14 */	bne .L_801A718C
/* 801A707C 001A3FBC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7080 001A3FC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7084 001A3FC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7088 001A3FC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A708C 001A3FCC  7D 89 03 A6 */	mtctr r12
/* 801A7090 001A3FD0  4E 80 04 21 */	bctrl 
/* 801A7094 001A3FD4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A7098:
/* 801A7098 001A3FD8  81 81 00 08 */	lwz r12, 8(r1)
/* 801A709C 001A3FDC  38 61 00 08 */	addi r3, r1, 8
/* 801A70A0 001A3FE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A70A4 001A3FE4  7D 89 03 A6 */	mtctr r12
/* 801A70A8 001A3FE8  4E 80 04 21 */	bctrl 
/* 801A70AC 001A3FEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A70B0 001A3FF0  41 82 FF 94 */	beq .L_801A7044
/* 801A70B4 001A3FF4  48 00 00 D8 */	b .L_801A718C
.L_801A70B8:
/* 801A70B8 001A3FF8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A70BC 001A3FFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A70C0 001A4000  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A70C4 001A4004  7D 89 03 A6 */	mtctr r12
/* 801A70C8 001A4008  4E 80 04 21 */	bctrl 
/* 801A70CC 001A400C  4B FF 83 59 */	bl endStick__Q24Game8CreatureFv
/* 801A70D0 001A4010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A70D4 001A4014  28 00 00 00 */	cmplwi r0, 0
/* 801A70D8 001A4018  40 82 00 24 */	bne .L_801A70FC
/* 801A70DC 001A401C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A70E0 001A4020  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A70E4 001A4024  81 83 00 00 */	lwz r12, 0(r3)
/* 801A70E8 001A4028  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A70EC 001A402C  7D 89 03 A6 */	mtctr r12
/* 801A70F0 001A4030  4E 80 04 21 */	bctrl 
/* 801A70F4 001A4034  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A70F8 001A4038  48 00 00 94 */	b .L_801A718C
.L_801A70FC:
/* 801A70FC 001A403C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7100 001A4040  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7104 001A4044  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7108 001A4048  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A710C 001A404C  7D 89 03 A6 */	mtctr r12
/* 801A7110 001A4050  4E 80 04 21 */	bctrl 
/* 801A7114 001A4054  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A7118 001A4058  48 00 00 58 */	b .L_801A7170
.L_801A711C:
/* 801A711C 001A405C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7120 001A4060  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7124 001A4064  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7128 001A4068  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A712C 001A406C  7D 89 03 A6 */	mtctr r12
/* 801A7130 001A4070  4E 80 04 21 */	bctrl 
/* 801A7134 001A4074  7C 64 1B 78 */	mr r4, r3
/* 801A7138 001A4078  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A713C 001A407C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7140 001A4080  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A7144 001A4084  7D 89 03 A6 */	mtctr r12
/* 801A7148 001A4088  4E 80 04 21 */	bctrl 
/* 801A714C 001A408C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7150 001A4090  40 82 00 3C */	bne .L_801A718C
/* 801A7154 001A4094  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7158 001A4098  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A715C 001A409C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7160 001A40A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A7164 001A40A4  7D 89 03 A6 */	mtctr r12
/* 801A7168 001A40A8  4E 80 04 21 */	bctrl 
/* 801A716C 001A40AC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A7170:
/* 801A7170 001A40B0  81 81 00 08 */	lwz r12, 8(r1)
/* 801A7174 001A40B4  38 61 00 08 */	addi r3, r1, 8
/* 801A7178 001A40B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A717C 001A40BC  7D 89 03 A6 */	mtctr r12
/* 801A7180 001A40C0  4E 80 04 21 */	bctrl 
/* 801A7184 001A40C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7188 001A40C8  41 82 FF 94 */	beq .L_801A711C
.L_801A718C:
/* 801A718C 001A40CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7190 001A40D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7194 001A40D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A7198 001A40D8  7D 89 03 A6 */	mtctr r12
/* 801A719C 001A40DC  4E 80 04 21 */	bctrl 
/* 801A71A0 001A40E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A71A4 001A40E4  7C 04 18 40 */	cmplw r4, r3
/* 801A71A8 001A40E8  40 82 FF 10 */	bne .L_801A70B8
/* 801A71AC 001A40EC  38 61 00 18 */	addi r3, r1, 0x18
/* 801A71B0 001A40F0  38 80 FF FF */	li r4, -1
/* 801A71B4 001A40F4  4B FF 8B B1 */	bl __dt__Q24Game8StickersFv
/* 801A71B8 001A40F8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801A71BC 001A40FC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801A71C0 001A4100  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801A71C4 001A4104  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801A71C8 001A4108  7C 08 03 A6 */	mtlr r0
/* 801A71CC 001A410C  38 21 00 50 */	addi r1, r1, 0x50
/* 801A71D0 001A4110  4E 80 00 20 */	blr 
.endfn init__Q24Game17PelletReturnStateFPQ24Game6PelletPQ24Game8StateArg

.fn exec__Q24Game17PelletReturnStateFPQ24Game6Pellet, global
/* 801A71D4 001A4114  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A71D8 001A4118  7C 08 02 A6 */	mflr r0
/* 801A71DC 001A411C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A71E0 001A4120  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A71E4 001A4124  3B E0 00 00 */	li r31, 0
/* 801A71E8 001A4128  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A71EC 001A412C  7C 9E 23 78 */	mr r30, r4
/* 801A71F0 001A4130  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A71F4 001A4134  7C 7D 1B 78 */	mr r29, r3
/* 801A71F8 001A4138  A0 03 00 1A */	lhz r0, 0x1a(r3)
/* 801A71FC 001A413C  2C 00 00 01 */	cmpwi r0, 1
/* 801A7200 001A4140  41 82 00 34 */	beq .L_801A7234
/* 801A7204 001A4144  40 80 00 10 */	bge .L_801A7214
/* 801A7208 001A4148  2C 00 00 00 */	cmpwi r0, 0
/* 801A720C 001A414C  40 80 00 14 */	bge .L_801A7220
/* 801A7210 001A4150  48 00 00 58 */	b .L_801A7268
.L_801A7214:
/* 801A7214 001A4154  2C 00 00 03 */	cmpwi r0, 3
/* 801A7218 001A4158  40 80 00 50 */	bge .L_801A7268
/* 801A721C 001A415C  48 00 00 3C */	b .L_801A7258
.L_801A7220:
/* 801A7220 001A4160  48 00 02 DD */	bl execPathfinding__Q24Game17PelletReturnStateFPQ24Game6Pellet
/* 801A7224 001A4164  2C 03 00 02 */	cmpwi r3, 2
/* 801A7228 001A4168  40 82 00 40 */	bne .L_801A7268
/* 801A722C 001A416C  3B E0 00 01 */	li r31, 1
/* 801A7230 001A4170  48 00 00 38 */	b .L_801A7268
.L_801A7234:
/* 801A7234 001A4174  48 00 03 59 */	bl execMove__Q24Game17PelletReturnStateFPQ24Game6Pellet
/* 801A7238 001A4178  2C 03 00 02 */	cmpwi r3, 2
/* 801A723C 001A417C  40 82 00 0C */	bne .L_801A7248
/* 801A7240 001A4180  3B E0 00 01 */	li r31, 1
/* 801A7244 001A4184  48 00 00 24 */	b .L_801A7268
.L_801A7248:
/* 801A7248 001A4188  2C 03 00 01 */	cmpwi r3, 1
/* 801A724C 001A418C  40 82 00 1C */	bne .L_801A7268
/* 801A7250 001A4190  3B E0 00 01 */	li r31, 1
/* 801A7254 001A4194  48 00 00 14 */	b .L_801A7268
.L_801A7258:
/* 801A7258 001A4198  48 00 0B 8D */	bl execMoveGoal__Q24Game17PelletReturnStateFPQ24Game6Pellet
/* 801A725C 001A419C  2C 03 00 02 */	cmpwi r3, 2
/* 801A7260 001A41A0  40 82 00 08 */	bne .L_801A7268
/* 801A7264 001A41A4  3B E0 00 01 */	li r31, 1
.L_801A7268:
/* 801A7268 001A41A8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801A726C 001A41AC  41 82 00 24 */	beq .L_801A7290
/* 801A7270 001A41B0  7F A3 EB 78 */	mr r3, r29
/* 801A7274 001A41B4  7F C4 F3 78 */	mr r4, r30
/* 801A7278 001A41B8  81 9D 00 00 */	lwz r12, 0(r29)
/* 801A727C 001A41BC  38 A0 00 00 */	li r5, 0
/* 801A7280 001A41C0  38 C0 00 00 */	li r6, 0
/* 801A7284 001A41C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A7288 001A41C8  7D 89 03 A6 */	mtctr r12
/* 801A728C 001A41CC  4E 80 04 21 */	bctrl 
.L_801A7290:
/* 801A7290 001A41D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A7294 001A41D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A7298 001A41D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A729C 001A41DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A72A0 001A41E0  7C 08 03 A6 */	mtlr r0
/* 801A72A4 001A41E4  38 21 00 20 */	addi r1, r1, 0x20
/* 801A72A8 001A41E8  4E 80 00 20 */	blr 
.endfn exec__Q24Game17PelletReturnStateFPQ24Game6Pellet

.fn cleanup__Q24Game17PelletReturnStateFPQ24Game6Pellet, global
/* 801A72AC 001A41EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A72B0 001A41F0  7C 08 02 A6 */	mflr r0
/* 801A72B4 001A41F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A72B8 001A41F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A72BC 001A41FC  7C 9F 23 78 */	mr r31, r4
/* 801A72C0 001A4200  93 C1 00 08 */	stw r30, 8(r1)
/* 801A72C4 001A4204  7C 7E 1B 78 */	mr r30, r3
/* 801A72C8 001A4208  80 63 00 38 */	lwz r3, 0x38(r3)
/* 801A72CC 001A420C  28 03 00 00 */	cmplwi r3, 0
/* 801A72D0 001A4210  41 82 00 34 */	beq .L_801A7304
/* 801A72D4 001A4214  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 801A72D8 001A4218  28 00 00 00 */	cmplwi r0, 0
/* 801A72DC 001A421C  41 82 00 28 */	beq .L_801A7304
/* 801A72E0 001A4220  81 83 00 00 */	lwz r12, 0(r3)
/* 801A72E4 001A4224  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A72E8 001A4228  7D 89 03 A6 */	mtctr r12
/* 801A72EC 001A422C  4E 80 04 21 */	bctrl 
/* 801A72F0 001A4230  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 801A72F4 001A4234  81 83 00 00 */	lwz r12, 0(r3)
/* 801A72F8 001A4238  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A72FC 001A423C  7D 89 03 A6 */	mtctr r12
/* 801A7300 001A4240  4E 80 04 21 */	bctrl 
.L_801A7304:
/* 801A7304 001A4244  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A7308 001A4248  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 801A730C 001A424C  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 801A7310 001A4250  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 801A7314 001A4254  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 801A7318 001A4258  28 04 00 00 */	cmplwi r4, 0
/* 801A731C 001A425C  41 82 00 14 */	beq .L_801A7330
/* 801A7320 001A4260  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801A7324 001A4264  4B FF C7 3D */	bl release__Q24Game10PathfinderFUl
/* 801A7328 001A4268  38 00 00 00 */	li r0, 0
/* 801A732C 001A426C  90 1E 00 1C */	stw r0, 0x1c(r30)
.L_801A7330:
/* 801A7330 001A4270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A7334 001A4274  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A7338 001A4278  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A733C 001A427C  7C 08 03 A6 */	mtlr r0
/* 801A7340 001A4280  38 21 00 10 */	addi r1, r1, 0x10
/* 801A7344 001A4284  4E 80 00 20 */	blr 
.endfn cleanup__Q24Game17PelletReturnStateFPQ24Game6Pellet

.fn initPathfinding__Q24Game17PelletReturnStateFPQ24Game6Pellet, global
/* 801A7348 001A4288  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801A734C 001A428C  7C 08 02 A6 */	mflr r0
/* 801A7350 001A4290  90 01 00 64 */	stw r0, 0x64(r1)
/* 801A7354 001A4294  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801A7358 001A4298  7C 7F 1B 78 */	mr r31, r3
/* 801A735C 001A429C  38 61 00 10 */	addi r3, r1, 0x10
/* 801A7360 001A42A0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801A7364 001A42A4  7C 9E 23 78 */	mr r30, r4
/* 801A7368 001A42A8  81 84 00 00 */	lwz r12, 0(r4)
/* 801A736C 001A42AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A7370 001A42B0  7D 89 03 A6 */	mtctr r12
/* 801A7374 001A42B4  4E 80 04 21 */	bctrl 
/* 801A7378 001A42B8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801A737C 001A42BC  38 80 00 00 */	li r4, 0
/* 801A7380 001A42C0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 801A7384 001A42C4  38 00 FF FF */	li r0, -1
/* 801A7388 001A42C8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801A738C 001A42CC  7F C3 F3 78 */	mr r3, r30
/* 801A7390 001A42D0  90 81 00 50 */	stw r4, 0x50(r1)
/* 801A7394 001A42D4  90 81 00 4C */	stw r4, 0x4c(r1)
/* 801A7398 001A42D8  98 81 00 40 */	stb r4, 0x40(r1)
/* 801A739C 001A42DC  B0 01 00 48 */	sth r0, 0x48(r1)
/* 801A73A0 001A42E0  90 81 00 44 */	stw r4, 0x44(r1)
/* 801A73A4 001A42E4  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801A73A8 001A42E8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801A73AC 001A42EC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801A73B0 001A42F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A73B4 001A42F4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801A73B8 001A42F8  7D 89 03 A6 */	mtctr r12
/* 801A73BC 001A42FC  4E 80 04 21 */	bctrl 
/* 801A73C0 001A4300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A73C4 001A4304  41 82 00 0C */	beq .L_801A73D0
/* 801A73C8 001A4308  38 00 00 01 */	li r0, 1
/* 801A73CC 001A430C  98 01 00 40 */	stb r0, 0x40(r1)
.L_801A73D0:
/* 801A73D0 001A4310  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801A73D4 001A4314  38 81 00 34 */	addi r4, r1, 0x34
/* 801A73D8 001A4318  80 63 00 08 */	lwz r3, 8(r3)
/* 801A73DC 001A431C  4B FC BF 91 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 801A73E0 001A4320  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A73E4 001A4324  41 82 00 24 */	beq .L_801A7408
/* 801A73E8 001A4328  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A73EC 001A432C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801A73F0 001A4330  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801A73F4 001A4334  40 82 00 0C */	bne .L_801A7400
/* 801A73F8 001A4338  7C 7E 1B 78 */	mr r30, r3
/* 801A73FC 001A433C  48 00 00 4C */	b .L_801A7448
.L_801A7400:
/* 801A7400 001A4340  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 801A7404 001A4344  48 00 00 44 */	b .L_801A7448
.L_801A7408:
/* 801A7408 001A4348  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801A740C 001A434C  38 81 00 34 */	addi r4, r1, 0x34
/* 801A7410 001A4350  80 63 00 08 */	lwz r3, 8(r3)
/* 801A7414 001A4354  4B FC BF 59 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 801A7418 001A4358  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A741C 001A435C  41 82 00 24 */	beq .L_801A7440
/* 801A7420 001A4360  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801A7424 001A4364  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801A7428 001A4368  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801A742C 001A436C  41 82 00 0C */	beq .L_801A7438
/* 801A7430 001A4370  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 801A7434 001A4374  48 00 00 14 */	b .L_801A7448
.L_801A7438:
/* 801A7438 001A4378  7C 7E 1B 78 */	mr r30, r3
/* 801A743C 001A437C  48 00 00 0C */	b .L_801A7448
.L_801A7440:
/* 801A7440 001A4380  38 60 00 02 */	li r3, 2
/* 801A7444 001A4384  48 00 00 A0 */	b .L_801A74E4
.L_801A7448:
/* 801A7448 001A4388  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 801A744C 001A438C  28 04 00 00 */	cmplwi r4, 0
/* 801A7450 001A4390  41 82 00 14 */	beq .L_801A7464
/* 801A7454 001A4394  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801A7458 001A4398  4B FF C6 09 */	bl release__Q24Game10PathfinderFUl
/* 801A745C 001A439C  38 00 00 00 */	li r0, 0
/* 801A7460 001A43A0  90 1F 00 1C */	stw r0, 0x1c(r31)
.L_801A7464:
/* 801A7464 001A43A4  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 801A7468 001A43A8  38 00 00 00 */	li r0, 0
/* 801A746C 001A43AC  C0 02 AE B8 */	lfs f0, lbl_80519218@sda21(r2)
/* 801A7470 001A43B0  38 81 00 1C */	addi r4, r1, 0x1c
/* 801A7474 001A43B4  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801A7478 001A43B8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801A747C 001A43BC  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 801A7480 001A43C0  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 801A7484 001A43C4  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 801A7488 001A43C8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801A748C 001A43CC  90 01 00 28 */	stw r0, 0x28(r1)
/* 801A7490 001A43D0  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801A7494 001A43D4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801A7498 001A43D8  80 63 00 08 */	lwz r3, 8(r3)
/* 801A749C 001A43DC  4B FC BB 29 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 801A74A0 001A43E0  28 03 00 00 */	cmplwi r3, 0
/* 801A74A4 001A43E4  40 82 00 0C */	bne .L_801A74B0
/* 801A74A8 001A43E8  38 60 00 02 */	li r3, 2
/* 801A74AC 001A43EC  48 00 00 38 */	b .L_801A74E4
.L_801A74B0:
/* 801A74B0 001A43F0  A8 C3 00 36 */	lha r6, 0x36(r3)
/* 801A74B4 001A43F4  38 00 00 01 */	li r0, 1
/* 801A74B8 001A43F8  A8 BE 00 36 */	lha r5, 0x36(r30)
/* 801A74BC 001A43FC  38 81 00 08 */	addi r4, r1, 8
/* 801A74C0 001A4400  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801A74C4 001A4404  B0 A1 00 08 */	sth r5, 8(r1)
/* 801A74C8 001A4408  B0 C1 00 0A */	sth r6, 0xa(r1)
/* 801A74CC 001A440C  98 01 00 0C */	stb r0, 0xc(r1)
/* 801A74D0 001A4410  4B FF C3 85 */	bl start__Q24Game10PathfinderFRQ24Game15PathfindRequest
/* 801A74D4 001A4414  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 801A74D8 001A4418  38 00 00 00 */	li r0, 0
/* 801A74DC 001A441C  38 60 00 01 */	li r3, 1
/* 801A74E0 001A4420  B0 1F 00 1A */	sth r0, 0x1a(r31)
.L_801A74E4:
/* 801A74E4 001A4424  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801A74E8 001A4428  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801A74EC 001A442C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801A74F0 001A4430  7C 08 03 A6 */	mtlr r0
/* 801A74F4 001A4434  38 21 00 60 */	addi r1, r1, 0x60
/* 801A74F8 001A4438  4E 80 00 20 */	blr 
.endfn initPathfinding__Q24Game17PelletReturnStateFPQ24Game6Pellet

.fn execPathfinding__Q24Game17PelletReturnStateFPQ24Game6Pellet, global
/* 801A74FC 001A443C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A7500 001A4440  7C 08 02 A6 */	mflr r0
/* 801A7504 001A4444  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A7508 001A4448  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A750C 001A444C  7C 7F 1B 78 */	mr r31, r3
/* 801A7510 001A4450  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 801A7514 001A4454  28 04 00 00 */	cmplwi r4, 0
/* 801A7518 001A4458  40 82 00 0C */	bne .L_801A7524
/* 801A751C 001A445C  38 60 00 02 */	li r3, 2
/* 801A7520 001A4460  48 00 00 58 */	b .L_801A7578
.L_801A7524:
/* 801A7524 001A4464  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801A7528 001A4468  4B FF C5 A9 */	bl check__Q24Game10PathfinderFUl
/* 801A752C 001A446C  2C 03 00 01 */	cmpwi r3, 1
/* 801A7530 001A4470  41 82 00 3C */	beq .L_801A756C
/* 801A7534 001A4474  40 80 00 40 */	bge .L_801A7574
/* 801A7538 001A4478  2C 03 00 00 */	cmpwi r3, 0
/* 801A753C 001A447C  40 80 00 08 */	bge .L_801A7544
/* 801A7540 001A4480  48 00 00 34 */	b .L_801A7574
.L_801A7544:
/* 801A7544 001A4484  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 801A7548 001A4488  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801A754C 001A448C  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 801A7550 001A4490  4B FF C4 51 */	bl makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
/* 801A7554 001A4494  90 7F 00 34 */	stw r3, 0x34(r31)
/* 801A7558 001A4498  38 00 00 01 */	li r0, 1
/* 801A755C 001A449C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 801A7560 001A44A0  90 7F 00 30 */	stw r3, 0x30(r31)
/* 801A7564 001A44A4  B0 1F 00 1A */	sth r0, 0x1a(r31)
/* 801A7568 001A44A8  48 00 00 0C */	b .L_801A7574
.L_801A756C:
/* 801A756C 001A44AC  38 60 00 02 */	li r3, 2
/* 801A7570 001A44B0  48 00 00 08 */	b .L_801A7578
.L_801A7574:
/* 801A7574 001A44B4  38 60 00 00 */	li r3, 0
.L_801A7578:
/* 801A7578 001A44B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A757C 001A44BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A7580 001A44C0  7C 08 03 A6 */	mtlr r0
/* 801A7584 001A44C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801A7588 001A44C8  4E 80 00 20 */	blr 
.endfn execPathfinding__Q24Game17PelletReturnStateFPQ24Game6Pellet

.fn execMove__Q24Game17PelletReturnStateFPQ24Game6Pellet, global
/* 801A758C 001A44CC  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 801A7590 001A44D0  7C 08 02 A6 */	mflr r0
/* 801A7594 001A44D4  90 01 01 54 */	stw r0, 0x154(r1)
/* 801A7598 001A44D8  DB E1 01 40 */	stfd f31, 0x140(r1)
/* 801A759C 001A44DC  F3 E1 01 48 */	psq_st f31, 328(r1), 0, qr0
/* 801A75A0 001A44E0  DB C1 01 30 */	stfd f30, 0x130(r1)
/* 801A75A4 001A44E4  F3 C1 01 38 */	psq_st f30, 312(r1), 0, qr0
/* 801A75A8 001A44E8  DB A1 01 20 */	stfd f29, 0x120(r1)
/* 801A75AC 001A44EC  F3 A1 01 28 */	psq_st f29, 296(r1), 0, qr0
/* 801A75B0 001A44F0  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 801A75B4 001A44F4  F3 81 01 18 */	psq_st f28, 280(r1), 0, qr0
/* 801A75B8 001A44F8  DB 61 01 00 */	stfd f27, 0x100(r1)
/* 801A75BC 001A44FC  F3 61 01 08 */	psq_st f27, 264(r1), 0, qr0
/* 801A75C0 001A4500  DB 41 00 F0 */	stfd f26, 0xf0(r1)
/* 801A75C4 001A4504  F3 41 00 F8 */	psq_st f26, 248(r1), 0, qr0
/* 801A75C8 001A4508  DB 21 00 E0 */	stfd f25, 0xe0(r1)
/* 801A75CC 001A450C  F3 21 00 E8 */	psq_st f25, 232(r1), 0, qr0
/* 801A75D0 001A4510  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801A75D4 001A4514  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 801A75D8 001A4518  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 801A75DC 001A451C  93 81 00 D0 */	stw r28, 0xd0(r1)
/* 801A75E0 001A4520  80 CD 93 08 */	lwz r6, mapMgr__4Game@sda21(r13)
/* 801A75E4 001A4524  7C 7E 1B 78 */	mr r30, r3
/* 801A75E8 001A4528  80 A3 00 2C */	lwz r5, 0x2c(r3)
/* 801A75EC 001A452C  7C 9F 23 78 */	mr r31, r4
/* 801A75F0 001A4530  80 66 00 08 */	lwz r3, 8(r6)
/* 801A75F4 001A4534  A8 85 00 20 */	lha r4, 0x20(r5)
/* 801A75F8 001A4538  81 83 00 00 */	lwz r12, 0(r3)
/* 801A75FC 001A453C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801A7600 001A4540  7D 89 03 A6 */	mtctr r12
/* 801A7604 001A4544  4E 80 04 21 */	bctrl 
/* 801A7608 001A4548  7F E4 FB 78 */	mr r4, r31
/* 801A760C 001A454C  C3 23 00 4C */	lfs f25, 0x4c(r3)
/* 801A7610 001A4550  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A7614 001A4554  C3 43 00 54 */	lfs f26, 0x54(r3)
/* 801A7618 001A4558  38 61 00 3C */	addi r3, r1, 0x3c
/* 801A761C 001A455C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A7620 001A4560  7D 89 03 A6 */	mtctr r12
/* 801A7624 001A4564  4E 80 04 21 */	bctrl 
/* 801A7628 001A4568  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 801A762C 001A456C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801A7630 001A4570  EF 9A 08 28 */	fsubs f28, f26, f1
/* 801A7634 001A4574  C3 A2 AE 28 */	lfs f29, lbl_80519188@sda21(r2)
/* 801A7638 001A4578  EF D9 00 28 */	fsubs f30, f25, f0
/* 801A763C 001A457C  EC 3C 07 32 */	fmuls f1, f28, f28
/* 801A7640 001A4580  EC 1E EF BA */	fmadds f0, f30, f30, f29
/* 801A7644 001A4584  EC 21 00 2A */	fadds f1, f1, f0
/* 801A7648 001A4588  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 801A764C 001A458C  40 81 00 14 */	ble .L_801A7660
/* 801A7650 001A4590  40 81 00 14 */	ble .L_801A7664
/* 801A7654 001A4594  FC 00 08 34 */	frsqrte f0, f1
/* 801A7658 001A4598  EC 20 00 72 */	fmuls f1, f0, f1
/* 801A765C 001A459C  48 00 00 08 */	b .L_801A7664
.L_801A7660:
/* 801A7660 001A45A0  FC 20 E8 90 */	fmr f1, f29
.L_801A7664:
/* 801A7664 001A45A4  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A7668 001A45A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A766C 001A45AC  40 81 00 1C */	ble .L_801A7688
/* 801A7670 001A45B0  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A7674 001A45B4  EC 00 08 24 */	fdivs f0, f0, f1
/* 801A7678 001A45B8  EF DE 00 32 */	fmuls f30, f30, f0
/* 801A767C 001A45BC  EF BD 00 32 */	fmuls f29, f29, f0
/* 801A7680 001A45C0  EF 9C 00 32 */	fmuls f28, f28, f0
/* 801A7684 001A45C4  48 00 00 08 */	b .L_801A768C
.L_801A7688:
/* 801A7688 001A45C8  FC 20 00 90 */	fmr f1, f0
.L_801A768C:
/* 801A768C 001A45CC  C0 02 AE BC */	lfs f0, lbl_8051921C@sda21(r2)
/* 801A7690 001A45D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A7694 001A45D4  40 80 00 44 */	bge .L_801A76D8
/* 801A7698 001A45D8  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801A769C 001A45DC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801A76A0 001A45E0  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 801A76A4 001A45E4  80 1E 00 2C */	lwz r0, 0x2c(r30)
/* 801A76A8 001A45E8  28 00 00 00 */	cmplwi r0, 0
/* 801A76AC 001A45EC  40 82 00 2C */	bne .L_801A76D8
/* 801A76B0 001A45F0  7F C3 F3 78 */	mr r3, r30
/* 801A76B4 001A45F4  7F E4 FB 78 */	mr r4, r31
/* 801A76B8 001A45F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A76BC 001A45FC  38 A0 00 00 */	li r5, 0
/* 801A76C0 001A4600  38 C0 00 00 */	li r6, 0
/* 801A76C4 001A4604  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A76C8 001A4608  7D 89 03 A6 */	mtctr r12
/* 801A76CC 001A460C  4E 80 04 21 */	bctrl 
/* 801A76D0 001A4610  38 60 00 01 */	li r3, 1
/* 801A76D4 001A4614  48 00 06 B8 */	b .L_801A7D8C
.L_801A76D8:
/* 801A76D8 001A4618  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 801A76DC 001A461C  C0 02 AE A0 */	lfs f0, lbl_80519200@sda21(r2)
/* 801A76E0 001A4620  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801A76E4 001A4624  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A76E8 001A4628  C3 E3 00 54 */	lfs f31, 0x54(r3)
/* 801A76EC 001A462C  40 80 00 88 */	bge .L_801A7774
/* 801A76F0 001A4630  EC 01 00 24 */	fdivs f0, f1, f0
/* 801A76F4 001A4634  C0 22 AE AC */	lfs f1, lbl_8051920C@sda21(r2)
/* 801A76F8 001A4638  C0 42 AE C0 */	lfs f2, lbl_80519220@sda21(r2)
/* 801A76FC 001A463C  C3 62 AE 28 */	lfs f27, lbl_80519188@sda21(r2)
/* 801A7700 001A4640  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A7704 001A4644  EC 22 00 32 */	fmuls f1, f2, f0
/* 801A7708 001A4648  FC 01 D8 40 */	fcmpo cr0, f1, f27
/* 801A770C 001A464C  40 80 00 30 */	bge .L_801A773C
/* 801A7710 001A4650  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A7714 001A4654  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7718 001A4658  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A771C 001A465C  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A7720 001A4660  FC 00 00 1E */	fctiwz f0, f0
/* 801A7724 001A4664  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 801A7728 001A4668  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801A772C 001A466C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7730 001A4670  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A7734 001A4674  FC 40 00 50 */	fneg f2, f0
/* 801A7738 001A4678  48 00 00 28 */	b .L_801A7760
.L_801A773C:
/* 801A773C 001A467C  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A7740 001A4680  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7744 001A4684  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7748 001A4688  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A774C 001A468C  FC 00 00 1E */	fctiwz f0, f0
/* 801A7750 001A4690  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 801A7754 001A4694  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 801A7758 001A4698  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A775C 001A469C  7C 43 04 2E */	lfsx f2, r3, r0
.L_801A7760:
/* 801A7760 001A46A0  C0 22 AE 7C */	lfs f1, lbl_805191DC@sda21(r2)
/* 801A7764 001A46A4  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A7768 001A46A8  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 801A776C 001A46AC  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 801A7770 001A46B0  48 00 04 C4 */	b .L_801A7C34
.L_801A7774:
/* 801A7774 001A46B4  C0 02 AE C4 */	lfs f0, lbl_80519224@sda21(r2)
/* 801A7778 001A46B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A777C 001A46BC  40 80 03 40 */	bge .L_801A7ABC
/* 801A7780 001A46C0  88 1E 00 19 */	lbz r0, 0x19(r30)
/* 801A7784 001A46C4  28 00 00 00 */	cmplwi r0, 0
/* 801A7788 001A46C8  40 82 02 44 */	bne .L_801A79CC
/* 801A778C 001A46CC  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801A7790 001A46D0  38 80 58 26 */	li r4, 0x5826
/* 801A7794 001A46D4  38 A0 00 00 */	li r5, 0
/* 801A7798 001A46D8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801A779C 001A46DC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A77A0 001A46E0  7D 89 03 A6 */	mtctr r12
/* 801A77A4 001A46E4  4E 80 04 21 */	bctrl 
/* 801A77A8 001A46E8  38 00 00 01 */	li r0, 1
/* 801A77AC 001A46EC  7F E4 FB 78 */	mr r4, r31
/* 801A77B0 001A46F0  98 1E 00 19 */	stb r0, 0x19(r30)
/* 801A77B4 001A46F4  38 61 00 80 */	addi r3, r1, 0x80
/* 801A77B8 001A46F8  4B FF 84 A5 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 801A77BC 001A46FC  38 00 00 00 */	li r0, 0
/* 801A77C0 001A4700  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 801A77C4 001A4704  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 801A77C8 001A4708  38 61 00 80 */	addi r3, r1, 0x80
/* 801A77CC 001A470C  28 00 00 00 */	cmplwi r0, 0
/* 801A77D0 001A4710  90 81 00 08 */	stw r4, 8(r1)
/* 801A77D4 001A4714  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A77D8 001A4718  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A77DC 001A471C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A77E0 001A4720  40 82 00 1C */	bne .L_801A77FC
/* 801A77E4 001A4724  81 83 00 00 */	lwz r12, 0(r3)
/* 801A77E8 001A4728  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A77EC 001A472C  7D 89 03 A6 */	mtctr r12
/* 801A77F0 001A4730  4E 80 04 21 */	bctrl 
/* 801A77F4 001A4734  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A77F8 001A4738  48 00 00 8C */	b .L_801A7884
.L_801A77FC:
/* 801A77FC 001A473C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7800 001A4740  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A7804 001A4744  7D 89 03 A6 */	mtctr r12
/* 801A7808 001A4748  4E 80 04 21 */	bctrl 
/* 801A780C 001A474C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A7810 001A4750  48 00 00 58 */	b .L_801A7868
.L_801A7814:
/* 801A7814 001A4754  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7818 001A4758  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A781C 001A475C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7820 001A4760  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A7824 001A4764  7D 89 03 A6 */	mtctr r12
/* 801A7828 001A4768  4E 80 04 21 */	bctrl 
/* 801A782C 001A476C  7C 64 1B 78 */	mr r4, r3
/* 801A7830 001A4770  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A7834 001A4774  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7838 001A4778  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A783C 001A477C  7D 89 03 A6 */	mtctr r12
/* 801A7840 001A4780  4E 80 04 21 */	bctrl 
/* 801A7844 001A4784  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7848 001A4788  40 82 00 3C */	bne .L_801A7884
/* 801A784C 001A478C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7850 001A4790  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7854 001A4794  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7858 001A4798  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A785C 001A479C  7D 89 03 A6 */	mtctr r12
/* 801A7860 001A47A0  4E 80 04 21 */	bctrl 
/* 801A7864 001A47A4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A7868:
/* 801A7868 001A47A8  81 81 00 08 */	lwz r12, 8(r1)
/* 801A786C 001A47AC  38 61 00 08 */	addi r3, r1, 8
/* 801A7870 001A47B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A7874 001A47B4  7D 89 03 A6 */	mtctr r12
/* 801A7878 001A47B8  4E 80 04 21 */	bctrl 
/* 801A787C 001A47BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7880 001A47C0  41 82 FF 94 */	beq .L_801A7814
.L_801A7884:
/* 801A7884 001A47C4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801A7888 001A47C8  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 801A788C 001A47CC  C3 22 AE B0 */	lfs f25, lbl_80519210@sda21(r2)
/* 801A7890 001A47D0  3B 84 A3 00 */	addi r28, r4, __vt__Q24Game11Interaction@l
/* 801A7894 001A47D4  C3 42 AE 28 */	lfs f26, lbl_80519188@sda21(r2)
/* 801A7898 001A47D8  3B A3 4E 04 */	addi r29, r3, __vt__Q24Game13InteractFlick@l
/* 801A789C 001A47DC  C3 62 AE B4 */	lfs f27, lbl_80519214@sda21(r2)
/* 801A78A0 001A47E0  48 00 01 00 */	b .L_801A79A0
.L_801A78A4:
/* 801A78A4 001A47E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A78A8 001A47E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A78AC 001A47EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A78B0 001A47F0  7D 89 03 A6 */	mtctr r12
/* 801A78B4 001A47F4  4E 80 04 21 */	bctrl 
/* 801A78B8 001A47F8  93 81 00 9C */	stw r28, 0x9c(r1)
/* 801A78BC 001A47FC  38 81 00 9C */	addi r4, r1, 0x9c
/* 801A78C0 001A4800  93 E1 00 A0 */	stw r31, 0xa0(r1)
/* 801A78C4 001A4804  93 A1 00 9C */	stw r29, 0x9c(r1)
/* 801A78C8 001A4808  D3 21 00 A4 */	stfs f25, 0xa4(r1)
/* 801A78CC 001A480C  D3 41 00 A8 */	stfs f26, 0xa8(r1)
/* 801A78D0 001A4810  D3 61 00 AC */	stfs f27, 0xac(r1)
/* 801A78D4 001A4814  81 83 00 00 */	lwz r12, 0(r3)
/* 801A78D8 001A4818  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801A78DC 001A481C  7D 89 03 A6 */	mtctr r12
/* 801A78E0 001A4820  4E 80 04 21 */	bctrl 
/* 801A78E4 001A4824  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A78E8 001A4828  28 00 00 00 */	cmplwi r0, 0
/* 801A78EC 001A482C  40 82 00 24 */	bne .L_801A7910
/* 801A78F0 001A4830  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A78F4 001A4834  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A78F8 001A4838  81 83 00 00 */	lwz r12, 0(r3)
/* 801A78FC 001A483C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A7900 001A4840  7D 89 03 A6 */	mtctr r12
/* 801A7904 001A4844  4E 80 04 21 */	bctrl 
/* 801A7908 001A4848  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A790C 001A484C  48 00 00 94 */	b .L_801A79A0
.L_801A7910:
/* 801A7910 001A4850  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7914 001A4854  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7918 001A4858  81 83 00 00 */	lwz r12, 0(r3)
/* 801A791C 001A485C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A7920 001A4860  7D 89 03 A6 */	mtctr r12
/* 801A7924 001A4864  4E 80 04 21 */	bctrl 
/* 801A7928 001A4868  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A792C 001A486C  48 00 00 58 */	b .L_801A7984
.L_801A7930:
/* 801A7930 001A4870  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A7934 001A4874  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7938 001A4878  81 83 00 00 */	lwz r12, 0(r3)
/* 801A793C 001A487C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A7940 001A4880  7D 89 03 A6 */	mtctr r12
/* 801A7944 001A4884  4E 80 04 21 */	bctrl 
/* 801A7948 001A4888  7C 64 1B 78 */	mr r4, r3
/* 801A794C 001A488C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A7950 001A4890  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7954 001A4894  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A7958 001A4898  7D 89 03 A6 */	mtctr r12
/* 801A795C 001A489C  4E 80 04 21 */	bctrl 
/* 801A7960 001A48A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7964 001A48A4  40 82 00 3C */	bne .L_801A79A0
/* 801A7968 001A48A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A796C 001A48AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A7970 001A48B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A7974 001A48B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A7978 001A48B8  7D 89 03 A6 */	mtctr r12
/* 801A797C 001A48BC  4E 80 04 21 */	bctrl 
/* 801A7980 001A48C0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A7984:
/* 801A7984 001A48C4  81 81 00 08 */	lwz r12, 8(r1)
/* 801A7988 001A48C8  38 61 00 08 */	addi r3, r1, 8
/* 801A798C 001A48CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A7990 001A48D0  7D 89 03 A6 */	mtctr r12
/* 801A7994 001A48D4  4E 80 04 21 */	bctrl 
/* 801A7998 001A48D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A799C 001A48DC  41 82 FF 94 */	beq .L_801A7930
.L_801A79A0:
/* 801A79A0 001A48E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A79A4 001A48E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A79A8 001A48E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A79AC 001A48EC  7D 89 03 A6 */	mtctr r12
/* 801A79B0 001A48F0  4E 80 04 21 */	bctrl 
/* 801A79B4 001A48F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A79B8 001A48F8  7C 04 18 40 */	cmplw r4, r3
/* 801A79BC 001A48FC  40 82 FE E8 */	bne .L_801A78A4
/* 801A79C0 001A4900  38 61 00 80 */	addi r3, r1, 0x80
/* 801A79C4 001A4904  38 80 FF FF */	li r4, -1
/* 801A79C8 001A4908  4B FF 83 9D */	bl __dt__Q24Game8StickersFv
.L_801A79CC:
/* 801A79CC 001A490C  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801A79D0 001A4910  C0 02 AE A0 */	lfs f0, lbl_80519200@sda21(r2)
/* 801A79D4 001A4914  C0 22 AE C4 */	lfs f1, lbl_80519224@sda21(r2)
/* 801A79D8 001A4918  EC 42 00 28 */	fsubs f2, f2, f0
/* 801A79DC 001A491C  C0 62 AE AC */	lfs f3, lbl_8051920C@sda21(r2)
/* 801A79E0 001A4920  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A79E4 001A4924  EC 22 08 24 */	fdivs f1, f2, f1
/* 801A79E8 001A4928  EC 63 00 72 */	fmuls f3, f3, f1
/* 801A79EC 001A492C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801A79F0 001A4930  40 80 00 30 */	bge .L_801A7A20
/* 801A79F4 001A4934  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A79F8 001A4938  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A79FC 001A493C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7A00 001A4940  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A7A04 001A4944  FC 00 00 1E */	fctiwz f0, f0
/* 801A7A08 001A4948  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 801A7A0C 001A494C  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 801A7A10 001A4950  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7A14 001A4954  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A7A18 001A4958  FC 40 00 50 */	fneg f2, f0
/* 801A7A1C 001A495C  48 00 00 28 */	b .L_801A7A44
.L_801A7A20:
/* 801A7A20 001A4960  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A7A24 001A4964  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7A28 001A4968  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7A2C 001A496C  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A7A30 001A4970  FC 00 00 1E */	fctiwz f0, f0
/* 801A7A34 001A4974  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 801A7A38 001A4978  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801A7A3C 001A497C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7A40 001A4980  7C 43 04 2E */	lfsx f2, r3, r0
.L_801A7A44:
/* 801A7A44 001A4984  C0 22 AE C8 */	lfs f1, lbl_80519228@sda21(r2)
/* 801A7A48 001A4988  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A7A4C 001A498C  EF 61 00 B2 */	fmuls f27, f1, f2
/* 801A7A50 001A4990  C0 42 AE CC */	lfs f2, lbl_8051922C@sda21(r2)
/* 801A7A54 001A4994  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801A7A58 001A4998  40 80 00 30 */	bge .L_801A7A88
/* 801A7A5C 001A499C  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A7A60 001A49A0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7A64 001A49A4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7A68 001A49A8  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A7A6C 001A49AC  FC 00 00 1E */	fctiwz f0, f0
/* 801A7A70 001A49B0  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 801A7A74 001A49B4  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801A7A78 001A49B8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7A7C 001A49BC  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A7A80 001A49C0  FC 20 00 50 */	fneg f1, f0
/* 801A7A84 001A49C4  48 00 00 28 */	b .L_801A7AAC
.L_801A7A88:
/* 801A7A88 001A49C8  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A7A8C 001A49CC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7A90 001A49D0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7A94 001A49D4  EC 03 00 32 */	fmuls f0, f3, f0
/* 801A7A98 001A49D8  FC 00 00 1E */	fctiwz f0, f0
/* 801A7A9C 001A49DC  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 801A7AA0 001A49E0  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 801A7AA4 001A49E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7AA8 001A49E8  7C 23 04 2E */	lfsx f1, r3, r0
.L_801A7AAC:
/* 801A7AAC 001A49EC  C0 02 AE 8C */	lfs f0, lbl_805191EC@sda21(r2)
/* 801A7AB0 001A49F0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801A7AB4 001A49F4  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 801A7AB8 001A49F8  48 00 01 7C */	b .L_801A7C34
.L_801A7ABC:
/* 801A7ABC 001A49FC  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 801A7AC0 001A4A00  28 00 00 00 */	cmplwi r0, 0
/* 801A7AC4 001A4A04  40 82 00 D4 */	bne .L_801A7B98
/* 801A7AC8 001A4A08  7F E3 FB 78 */	mr r3, r31
/* 801A7ACC 001A4A0C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A7AD0 001A4A10  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801A7AD4 001A4A14  7D 89 03 A6 */	mtctr r12
/* 801A7AD8 001A4A18  4E 80 04 21 */	bctrl 
/* 801A7ADC 001A4A1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7AE0 001A4A20  40 82 00 B8 */	bne .L_801A7B98
/* 801A7AE4 001A4A24  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801A7AE8 001A4A28  38 80 58 27 */	li r4, 0x5827
/* 801A7AEC 001A4A2C  38 A0 00 00 */	li r5, 0
/* 801A7AF0 001A4A30  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801A7AF4 001A4A34  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A7AF8 001A4A38  7D 89 03 A6 */	mtctr r12
/* 801A7AFC 001A4A3C  4E 80 04 21 */	bctrl 
/* 801A7B00 001A4A40  7F E4 FB 78 */	mr r4, r31
/* 801A7B04 001A4A44  38 61 00 30 */	addi r3, r1, 0x30
/* 801A7B08 001A4A48  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A7B0C 001A4A4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A7B10 001A4A50  7D 89 03 A6 */	mtctr r12
/* 801A7B14 001A4A54  4E 80 04 21 */	bctrl 
/* 801A7B18 001A4A58  C3 21 00 30 */	lfs f25, 0x30(r1)
/* 801A7B1C 001A4A5C  7F E3 FB 78 */	mr r3, r31
/* 801A7B20 001A4A60  C3 41 00 34 */	lfs f26, 0x34(r1)
/* 801A7B24 001A4A64  C3 61 00 38 */	lfs f27, 0x38(r1)
/* 801A7B28 001A4A68  4B FB EE AD */	bl getCylinderHeight__Q24Game6PelletFv
/* 801A7B2C 001A4A6C  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801A7B30 001A4A70  C0 42 AE C0 */	lfs f2, lbl_80519220@sda21(r2)
/* 801A7B34 001A4A74  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801A7B38 001A4A78  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A7B3C 001A4A7C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801A7B40 001A4A80  90 01 00 60 */	stw r0, 0x60(r1)
/* 801A7B44 001A4A84  EF 42 D0 7C */	fnmsubs f26, f2, f1, f26
/* 801A7B48 001A4A88  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801A7B4C 001A4A8C  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 801A7B50 001A4A90  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801A7B54 001A4A94  3C 60 80 4F */	lis r3, __vt__Q23efx15TEnemyDownSmoke@ha
/* 801A7B58 001A4A98  38 C0 00 53 */	li r6, 0x53
/* 801A7B5C 001A4A9C  38 E4 A7 EC */	addi r7, r4, __vt__Q23efx3Arg@l
/* 801A7B60 001A4AA0  38 A0 00 00 */	li r5, 0
/* 801A7B64 001A4AA4  90 01 00 60 */	stw r0, 0x60(r1)
/* 801A7B68 001A4AA8  38 03 86 10 */	addi r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
/* 801A7B6C 001A4AAC  38 61 00 60 */	addi r3, r1, 0x60
/* 801A7B70 001A4AB0  38 81 00 70 */	addi r4, r1, 0x70
/* 801A7B74 001A4AB4  90 E1 00 70 */	stw r7, 0x70(r1)
/* 801A7B78 001A4AB8  D3 21 00 74 */	stfs f25, 0x74(r1)
/* 801A7B7C 001A4ABC  D3 41 00 78 */	stfs f26, 0x78(r1)
/* 801A7B80 001A4AC0  D3 61 00 7C */	stfs f27, 0x7c(r1)
/* 801A7B84 001A4AC4  B0 C1 00 64 */	sth r6, 0x64(r1)
/* 801A7B88 001A4AC8  90 A1 00 68 */	stw r5, 0x68(r1)
/* 801A7B8C 001A4ACC  90 01 00 60 */	stw r0, 0x60(r1)
/* 801A7B90 001A4AD0  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 801A7B94 001A4AD4  48 22 0B D1 */	bl create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg
.L_801A7B98:
/* 801A7B98 001A4AD8  38 00 00 01 */	li r0, 1
/* 801A7B9C 001A4ADC  C0 02 AE C4 */	lfs f0, lbl_80519224@sda21(r2)
/* 801A7BA0 001A4AE0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 801A7BA4 001A4AE4  C0 22 AE D0 */	lfs f1, lbl_80519230@sda21(r2)
/* 801A7BA8 001A4AE8  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 801A7BAC 001A4AEC  C0 62 AE AC */	lfs f3, lbl_8051920C@sda21(r2)
/* 801A7BB0 001A4AF0  EC 42 00 28 */	fsubs f2, f2, f0
/* 801A7BB4 001A4AF4  C0 82 AE C0 */	lfs f4, lbl_80519220@sda21(r2)
/* 801A7BB8 001A4AF8  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A7BBC 001A4AFC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801A7BC0 001A4B00  EC 23 00 72 */	fmuls f1, f3, f1
/* 801A7BC4 001A4B04  EC 24 00 72 */	fmuls f1, f4, f1
/* 801A7BC8 001A4B08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A7BCC 001A4B0C  40 80 00 30 */	bge .L_801A7BFC
/* 801A7BD0 001A4B10  C0 02 AE 4C */	lfs f0, lbl_805191AC@sda21(r2)
/* 801A7BD4 001A4B14  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7BD8 001A4B18  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7BDC 001A4B1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A7BE0 001A4B20  FC 00 00 1E */	fctiwz f0, f0
/* 801A7BE4 001A4B24  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 801A7BE8 001A4B28  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 801A7BEC 001A4B2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7BF0 001A4B30  7C 03 04 2E */	lfsx f0, r3, r0
/* 801A7BF4 001A4B34  FC 40 00 50 */	fneg f2, f0
/* 801A7BF8 001A4B38  48 00 00 28 */	b .L_801A7C20
.L_801A7BFC:
/* 801A7BFC 001A4B3C  C0 02 AE 50 */	lfs f0, lbl_805191B0@sda21(r2)
/* 801A7C00 001A4B40  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A7C04 001A4B44  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801A7C08 001A4B48  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A7C0C 001A4B4C  FC 00 00 1E */	fctiwz f0, f0
/* 801A7C10 001A4B50  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 801A7C14 001A4B54  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801A7C18 001A4B58  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801A7C1C 001A4B5C  7C 43 04 2E */	lfsx f2, r3, r0
.L_801A7C20:
/* 801A7C20 001A4B60  C0 22 AE 7C */	lfs f1, lbl_805191DC@sda21(r2)
/* 801A7C24 001A4B64  C0 02 AE 8C */	lfs f0, lbl_805191EC@sda21(r2)
/* 801A7C28 001A4B68  C3 62 AE 28 */	lfs f27, lbl_80519188@sda21(r2)
/* 801A7C2C 001A4B6C  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801A7C30 001A4B70  D0 1E 00 14 */	stfs f0, 0x14(r30)
.L_801A7C34:
/* 801A7C34 001A4B74  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 801A7C38 001A4B78  C0 22 AE 30 */	lfs f1, lbl_80519190@sda21(r2)
/* 801A7C3C 001A4B7C  EC 00 F8 2A */	fadds f0, f0, f31
/* 801A7C40 001A4B80  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 801A7C44 001A4B84  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 801A7C48 001A4B88  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801A7C4C 001A4B8C  40 81 00 1C */	ble .L_801A7C68
/* 801A7C50 001A4B90  C0 02 AE 28 */	lfs f0, lbl_80519188@sda21(r2)
/* 801A7C54 001A4B94  38 00 00 00 */	li r0, 0
/* 801A7C58 001A4B98  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 801A7C5C 001A4B9C  D0 3E 00 14 */	stfs f1, 0x14(r30)
/* 801A7C60 001A4BA0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 801A7C64 001A4BA4  98 1E 00 19 */	stb r0, 0x19(r30)
.L_801A7C68:
/* 801A7C68 001A4BA8  C0 02 AE D4 */	lfs f0, lbl_80519234@sda21(r2)
/* 801A7C6C 001A4BAC  7F E4 FB 78 */	mr r4, r31
/* 801A7C70 001A4BB0  38 61 00 24 */	addi r3, r1, 0x24
/* 801A7C74 001A4BB4  EC 5E 00 32 */	fmuls f2, f30, f0
/* 801A7C78 001A4BB8  EC 3D 00 32 */	fmuls f1, f29, f0
/* 801A7C7C 001A4BBC  EC 1C 00 32 */	fmuls f0, f28, f0
/* 801A7C80 001A4BC0  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 801A7C84 001A4BC4  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801A7C88 001A4BC8  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801A7C8C 001A4BCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A7C90 001A4BD0  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801A7C94 001A4BD4  7D 89 03 A6 */	mtctr r12
/* 801A7C98 001A4BD8  4E 80 04 21 */	bctrl 
/* 801A7C9C 001A4BDC  C0 81 00 28 */	lfs f4, 0x28(r1)
/* 801A7CA0 001A4BE0  7F E4 FB 78 */	mr r4, r31
/* 801A7CA4 001A4BE4  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801A7CA8 001A4BE8  38 61 00 18 */	addi r3, r1, 0x18
/* 801A7CAC 001A4BEC  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 801A7CB0 001A4BF0  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 801A7CB4 001A4BF4  EC 00 20 28 */	fsubs f0, f0, f4
/* 801A7CB8 001A4BF8  C0 42 AE 98 */	lfs f2, lbl_805191F8@sda21(r2)
/* 801A7CBC 001A4BFC  EC 21 28 28 */	fsubs f1, f1, f5
/* 801A7CC0 001A4C00  C0 61 00 54 */	lfs f3, 0x54(r1)
/* 801A7CC4 001A4C04  C0 C1 00 24 */	lfs f6, 0x24(r1)
/* 801A7CC8 001A4C08  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801A7CCC 001A4C0C  EC 63 30 28 */	fsubs f3, f3, f6
/* 801A7CD0 001A4C10  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801A7CD4 001A4C14  EC 84 00 2A */	fadds f4, f4, f0
/* 801A7CD8 001A4C18  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801A7CDC 001A4C1C  EC 25 08 2A */	fadds f1, f5, f1
/* 801A7CE0 001A4C20  D0 81 00 58 */	stfs f4, 0x58(r1)
/* 801A7CE4 001A4C24  EC 06 00 2A */	fadds f0, f6, f0
/* 801A7CE8 001A4C28  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801A7CEC 001A4C2C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 801A7CF0 001A4C30  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A7CF4 001A4C34  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A7CF8 001A4C38  7D 89 03 A6 */	mtctr r12
/* 801A7CFC 001A4C3C  4E 80 04 21 */	bctrl 
/* 801A7D00 001A4C40  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801A7D04 001A4C44  7F E3 FB 78 */	mr r3, r31
/* 801A7D08 001A4C48  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 801A7D0C 001A4C4C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801A7D10 001A4C50  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 801A7D14 001A4C54  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 801A7D18 001A4C58  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801A7D1C 001A4C5C  4B FB EC B9 */	bl getCylinderHeight__Q24Game6PelletFv
/* 801A7D20 001A4C60  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801A7D24 001A4C64  38 81 00 48 */	addi r4, r1, 0x48
/* 801A7D28 001A4C68  C0 02 AE C0 */	lfs f0, lbl_80519220@sda21(r2)
/* 801A7D2C 001A4C6C  81 83 00 04 */	lwz r12, 4(r3)
/* 801A7D30 001A4C70  EF 20 00 72 */	fmuls f25, f0, f1
/* 801A7D34 001A4C74  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801A7D38 001A4C78  7D 89 03 A6 */	mtctr r12
/* 801A7D3C 001A4C7C  4E 80 04 21 */	bctrl 
/* 801A7D40 001A4C80  EC 19 08 2A */	fadds f0, f25, f1
/* 801A7D44 001A4C84  7F E3 FB 78 */	mr r3, r31
/* 801A7D48 001A4C88  38 81 00 48 */	addi r4, r1, 0x48
/* 801A7D4C 001A4C8C  38 A0 00 00 */	li r5, 0
/* 801A7D50 001A4C90  EC 1B 00 2A */	fadds f0, f27, f0
/* 801A7D54 001A4C94  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801A7D58 001A4C98  4B F9 34 51 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801A7D5C 001A4C9C  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 801A7D60 001A4CA0  7F E3 FB 78 */	mr r3, r31
/* 801A7D64 001A4CA4  C0 02 AE 30 */	lfs f0, lbl_80519190@sda21(r2)
/* 801A7D68 001A4CA8  38 81 00 54 */	addi r4, r1, 0x54
/* 801A7D6C 001A4CAC  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 801A7D70 001A4CB0  D0 3F 01 6C */	stfs f1, 0x16c(r31)
/* 801A7D74 001A4CB4  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 801A7D78 001A4CB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A7D7C 001A4CBC  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801A7D80 001A4CC0  7D 89 03 A6 */	mtctr r12
/* 801A7D84 001A4CC4  4E 80 04 21 */	bctrl 
/* 801A7D88 001A4CC8  38 60 00 00 */	li r3, 0
.L_801A7D8C:
/* 801A7D8C 001A4CCC  E3 E1 01 48 */	psq_l f31, 328(r1), 0, qr0
/* 801A7D90 001A4CD0  CB E1 01 40 */	lfd f31, 0x140(r1)
/* 801A7D94 001A4CD4  E3 C1 01 38 */	psq_l f30, 312(r1), 0, qr0
/* 801A7D98 001A4CD8  CB C1 01 30 */	lfd f30, 0x130(r1)
/* 801A7D9C 001A4CDC  E3 A1 01 28 */	psq_l f29, 296(r1), 0, qr0
/* 801A7DA0 001A4CE0  CB A1 01 20 */	lfd f29, 0x120(r1)
/* 801A7DA4 001A4CE4  E3 81 01 18 */	psq_l f28, 280(r1), 0, qr0
/* 801A7DA8 001A4CE8  CB 81 01 10 */	lfd f28, 0x110(r1)
/* 801A7DAC 001A4CEC  E3 61 01 08 */	psq_l f27, 264(r1), 0, qr0
/* 801A7DB0 001A4CF0  CB 61 01 00 */	lfd f27, 0x100(r1)
/* 801A7DB4 001A4CF4  E3 41 00 F8 */	psq_l f26, 248(r1), 0, qr0
/* 801A7DB8 001A4CF8  CB 41 00 F0 */	lfd f26, 0xf0(r1)
/* 801A7DBC 001A4CFC  E3 21 00 E8 */	psq_l f25, 232(r1), 0, qr0
/* 801A7DC0 001A4D00  CB 21 00 E0 */	lfd f25, 0xe0(r1)
/* 801A7DC4 001A4D04  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 801A7DC8 001A4D08  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 801A7DCC 001A4D0C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 801A7DD0 001A4D10  80 01 01 54 */	lwz r0, 0x154(r1)
/* 801A7DD4 001A4D14  83 81 00 D0 */	lwz r28, 0xd0(r1)
/* 801A7DD8 001A4D18  7C 08 03 A6 */	mtlr r0
/* 801A7DDC 001A4D1C  38 21 01 50 */	addi r1, r1, 0x150
/* 801A7DE0 001A4D20  4E 80 00 20 */	blr 
.endfn execMove__Q24Game17PelletReturnStateFPQ24Game6Pellet

.fn execMoveGoal__Q24Game17PelletReturnStateFPQ24Game6Pellet, global
/* 801A7DE4 001A4D24  38 60 00 00 */	li r3, 0
/* 801A7DE8 001A4D28  4E 80 00 20 */	blr 
.endfn execMoveGoal__Q24Game17PelletReturnStateFPQ24Game6Pellet

.fn isBuried__Q24Game11PelletStateFv, weak
/* 801A7DEC 001A4D2C  38 60 00 00 */	li r3, 0
/* 801A7DF0 001A4D30  4E 80 00 20 */	blr 
.endfn isBuried__Q24Game11PelletStateFv

.fn appeared__Q24Game11PelletStateFv, weak
/* 801A7DF4 001A4D34  38 60 00 01 */	li r3, 1
/* 801A7DF8 001A4D38  4E 80 00 20 */	blr 
.endfn appeared__Q24Game11PelletStateFv

.fn isBuried__Q24Game13PelletUpStateFv, weak
/* 801A7DFC 001A4D3C  38 60 00 01 */	li r3, 1
/* 801A7E00 001A4D40  4E 80 00 20 */	blr 
.endfn isBuried__Q24Game13PelletUpStateFv

.fn isBuried__Q24Game15PelletBuryStateFv, weak
/* 801A7E04 001A4D44  38 60 00 01 */	li r3, 1
/* 801A7E08 001A4D48  4E 80 00 20 */	blr 
.endfn isBuried__Q24Game15PelletBuryStateFv

.fn appeared__Q24Game22PelletScaleAppearStateFv, weak
/* 801A7E0C 001A4D4C  38 60 00 00 */	li r3, 0
/* 801A7E10 001A4D50  4E 80 00 20 */	blr 
.endfn appeared__Q24Game22PelletScaleAppearStateFv

.fn appeared__Q24Game17PelletAppearStateFv, weak
/* 801A7E14 001A4D54  38 60 00 00 */	li r3, 0
/* 801A7E18 001A4D58  4E 80 00 20 */	blr 
.endfn appeared__Q24Game17PelletAppearStateFv

.fn isPickable__Q24Game17PelletNormalStateFv, weak
/* 801A7E1C 001A4D5C  38 60 00 01 */	li r3, 1
/* 801A7E20 001A4D60  4E 80 00 20 */	blr 
.endfn isPickable__Q24Game17PelletNormalStateFv

.fn "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 801A7E24 001A4D64  4E 80 00 20 */	blr 
.endfn "resume__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet", weak
/* 801A7E28 001A4D68  4E 80 00 20 */	blr 
.endfn "restart__Q24Game24FSMState<Q24Game6Pellet>FPQ24Game6Pellet"

.fn "create__Q24Game28StateMachine<Q24Game6Pellet>Fi", weak
/* 801A7E2C 001A4D6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A7E30 001A4D70  7C 08 02 A6 */	mflr r0
/* 801A7E34 001A4D74  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A7E38 001A4D78  38 00 00 00 */	li r0, 0
/* 801A7E3C 001A4D7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A7E40 001A4D80  7C 7F 1B 78 */	mr r31, r3
/* 801A7E44 001A4D84  90 83 00 0C */	stw r4, 0xc(r3)
/* 801A7E48 001A4D88  90 03 00 08 */	stw r0, 8(r3)
/* 801A7E4C 001A4D8C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801A7E50 001A4D90  54 03 10 3A */	slwi r3, r0, 2
/* 801A7E54 001A4D94  4B E7 C1 59 */	bl __nwa__FUl
/* 801A7E58 001A4D98  90 7F 00 04 */	stw r3, 4(r31)
/* 801A7E5C 001A4D9C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801A7E60 001A4DA0  54 03 10 3A */	slwi r3, r0, 2
/* 801A7E64 001A4DA4  4B E7 C1 49 */	bl __nwa__FUl
/* 801A7E68 001A4DA8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801A7E6C 001A4DAC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801A7E70 001A4DB0  54 03 10 3A */	slwi r3, r0, 2
/* 801A7E74 001A4DB4  4B E7 C1 39 */	bl __nwa__FUl
/* 801A7E78 001A4DB8  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801A7E7C 001A4DBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A7E80 001A4DC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A7E84 001A4DC4  7C 08 03 A6 */	mtlr r0
/* 801A7E88 001A4DC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801A7E8C 001A4DCC  4E 80 00 20 */	blr 
.endfn "create__Q24Game28StateMachine<Q24Game6Pellet>Fi"

.fn "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>", weak
/* 801A7E90 001A4DD0  80 C3 00 08 */	lwz r6, 8(r3)
/* 801A7E94 001A4DD4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801A7E98 001A4DD8  7C 06 00 00 */	cmpw r6, r0
/* 801A7E9C 001A4DDC  4C 80 00 20 */	bgelr 
/* 801A7EA0 001A4DE0  80 A3 00 04 */	lwz r5, 4(r3)
/* 801A7EA4 001A4DE4  54 C0 10 3A */	slwi r0, r6, 2
/* 801A7EA8 001A4DE8  7C 85 01 2E */	stwx r4, r5, r0
/* 801A7EAC 001A4DEC  80 A4 00 04 */	lwz r5, 4(r4)
/* 801A7EB0 001A4DF0  2C 05 00 00 */	cmpwi r5, 0
/* 801A7EB4 001A4DF4  41 80 00 10 */	blt .L_801A7EC4
/* 801A7EB8 001A4DF8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801A7EBC 001A4DFC  7C 05 00 00 */	cmpw r5, r0
/* 801A7EC0 001A4E00  41 80 00 0C */	blt .L_801A7ECC
.L_801A7EC4:
/* 801A7EC4 001A4E04  38 00 00 00 */	li r0, 0
/* 801A7EC8 001A4E08  48 00 00 08 */	b .L_801A7ED0
.L_801A7ECC:
/* 801A7ECC 001A4E0C  38 00 00 01 */	li r0, 1
.L_801A7ED0:
/* 801A7ED0 001A4E10  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801A7ED4 001A4E14  4D 82 00 20 */	beqlr 
/* 801A7ED8 001A4E18  90 64 00 08 */	stw r3, 8(r4)
/* 801A7EDC 001A4E1C  80 03 00 08 */	lwz r0, 8(r3)
/* 801A7EE0 001A4E20  80 C4 00 04 */	lwz r6, 4(r4)
/* 801A7EE4 001A4E24  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801A7EE8 001A4E28  54 00 10 3A */	slwi r0, r0, 2
/* 801A7EEC 001A4E2C  7C C5 01 2E */	stwx r6, r5, r0
/* 801A7EF0 001A4E30  80 04 00 04 */	lwz r0, 4(r4)
/* 801A7EF4 001A4E34  80 A3 00 08 */	lwz r5, 8(r3)
/* 801A7EF8 001A4E38  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801A7EFC 001A4E3C  54 00 10 3A */	slwi r0, r0, 2
/* 801A7F00 001A4E40  7C A4 01 2E */	stwx r5, r4, r0
/* 801A7F04 001A4E44  80 83 00 08 */	lwz r4, 8(r3)
/* 801A7F08 001A4E48  38 04 00 01 */	addi r0, r4, 1
/* 801A7F0C 001A4E4C  90 03 00 08 */	stw r0, 8(r3)
/* 801A7F10 001A4E50  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game24FSMState<Q24Game6Pellet>"

.fn __sinit_pelletState_cpp, local
/* 801A7F14 001A4E54  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801A7F18 001A4E58  38 00 FF FF */	li r0, -1
/* 801A7F1C 001A4E5C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801A7F20 001A4E60  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 801A7F24 001A4E64  90 0D 93 88 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 801A7F28 001A4E68  D4 03 50 08 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801A7F2C 001A4E6C  D0 0D 93 8C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801A7F30 001A4E70  D0 03 00 04 */	stfs f0, 4(r3)
/* 801A7F34 001A4E74  D0 03 00 08 */	stfs f0, 8(r3)
/* 801A7F38 001A4E78  4E 80 00 20 */	blr 
.endfn __sinit_pelletState_cpp
