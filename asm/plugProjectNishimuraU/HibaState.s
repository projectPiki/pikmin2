.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game4Hiba11StateAttack
__vt__Q34Game4Hiba11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Hiba9StateWait
__vt__Q34Game4Hiba9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Hiba9StateDead
__vt__Q34Game4Hiba9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Hiba5State
__vt__Q34Game4Hiba5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Hiba3FSM
__vt__Q34Game4Hiba3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Hiba3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game4Hiba3FSMFPQ24Game9EnemyBase
init__Q34Game4Hiba3FSMFPQ24Game9EnemyBase:
/* 8026B354 00268294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B358 00268298  7C 08 02 A6 */	mflr r0
/* 8026B35C 0026829C  38 80 00 03 */	li r4, 3
/* 8026B360 002682A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B364 002682A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026B368 002682A8  7C 7F 1B 78 */	mr r31, r3
/* 8026B36C 002682AC  4B EC 54 F9 */	bl create__Q24Game17EnemyStateMachineFi
/* 8026B370 002682B0  38 60 00 10 */	li r3, 0x10
/* 8026B374 002682B4  4B DB 8B 31 */	bl __nw__FUl
/* 8026B378 002682B8  7C 64 1B 79 */	or. r4, r3, r3
/* 8026B37C 002682BC  41 82 00 3C */	beq lbl_8026B3B8
/* 8026B380 002682C0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026B384 002682C4  3C A0 80 4C */	lis r5, __vt__Q34Game4Hiba5State@ha
/* 8026B388 002682C8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026B38C 002682CC  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba9StateDead@ha
/* 8026B390 002682D0  90 04 00 00 */	stw r0, 0(r4)
/* 8026B394 002682D4  38 E0 00 00 */	li r7, 0
/* 8026B398 002682D8  38 C5 52 74 */	addi r6, r5, __vt__Q34Game4Hiba5State@l
/* 8026B39C 002682DC  38 A2 CC 80 */	addi r5, r2, lbl_8051AFE0@sda21
/* 8026B3A0 002682E0  90 E4 00 04 */	stw r7, 4(r4)
/* 8026B3A4 002682E4  38 03 52 50 */	addi r0, r3, __vt__Q34Game4Hiba9StateDead@l
/* 8026B3A8 002682E8  90 E4 00 08 */	stw r7, 8(r4)
/* 8026B3AC 002682EC  90 C4 00 00 */	stw r6, 0(r4)
/* 8026B3B0 002682F0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026B3B4 002682F4  90 04 00 00 */	stw r0, 0(r4)
lbl_8026B3B8:
/* 8026B3B8 002682F8  7F E3 FB 78 */	mr r3, r31
/* 8026B3BC 002682FC  4B EC 55 4D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026B3C0 00268300  38 60 00 10 */	li r3, 0x10
/* 8026B3C4 00268304  4B DB 8A E1 */	bl __nw__FUl
/* 8026B3C8 00268308  7C 64 1B 79 */	or. r4, r3, r3
/* 8026B3CC 0026830C  41 82 00 40 */	beq lbl_8026B40C
/* 8026B3D0 00268310  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026B3D4 00268314  3C A0 80 4C */	lis r5, __vt__Q34Game4Hiba5State@ha
/* 8026B3D8 00268318  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026B3DC 0026831C  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba9StateWait@ha
/* 8026B3E0 00268320  90 04 00 00 */	stw r0, 0(r4)
/* 8026B3E4 00268324  38 00 00 01 */	li r0, 1
/* 8026B3E8 00268328  38 E0 00 00 */	li r7, 0
/* 8026B3EC 0026832C  38 C5 52 74 */	addi r6, r5, __vt__Q34Game4Hiba5State@l
/* 8026B3F0 00268330  90 04 00 04 */	stw r0, 4(r4)
/* 8026B3F4 00268334  38 A2 CC 88 */	addi r5, r2, lbl_8051AFE8@sda21
/* 8026B3F8 00268338  38 03 52 2C */	addi r0, r3, __vt__Q34Game4Hiba9StateWait@l
/* 8026B3FC 0026833C  90 E4 00 08 */	stw r7, 8(r4)
/* 8026B400 00268340  90 C4 00 00 */	stw r6, 0(r4)
/* 8026B404 00268344  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026B408 00268348  90 04 00 00 */	stw r0, 0(r4)
lbl_8026B40C:
/* 8026B40C 0026834C  7F E3 FB 78 */	mr r3, r31
/* 8026B410 00268350  4B EC 54 F9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026B414 00268354  38 60 00 10 */	li r3, 0x10
/* 8026B418 00268358  4B DB 8A 8D */	bl __nw__FUl
/* 8026B41C 0026835C  7C 64 1B 79 */	or. r4, r3, r3
/* 8026B420 00268360  41 82 00 40 */	beq lbl_8026B460
/* 8026B424 00268364  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026B428 00268368  3C A0 80 4C */	lis r5, __vt__Q34Game4Hiba5State@ha
/* 8026B42C 0026836C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026B430 00268370  3C 60 80 4C */	lis r3, __vt__Q34Game4Hiba11StateAttack@ha
/* 8026B434 00268374  90 04 00 00 */	stw r0, 0(r4)
/* 8026B438 00268378  38 00 00 02 */	li r0, 2
/* 8026B43C 0026837C  38 E0 00 00 */	li r7, 0
/* 8026B440 00268380  38 C5 52 74 */	addi r6, r5, __vt__Q34Game4Hiba5State@l
/* 8026B444 00268384  90 04 00 04 */	stw r0, 4(r4)
/* 8026B448 00268388  38 A2 CC 90 */	addi r5, r2, lbl_8051AFF0@sda21
/* 8026B44C 0026838C  38 03 52 08 */	addi r0, r3, __vt__Q34Game4Hiba11StateAttack@l
/* 8026B450 00268390  90 E4 00 08 */	stw r7, 8(r4)
/* 8026B454 00268394  90 C4 00 00 */	stw r6, 0(r4)
/* 8026B458 00268398  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026B45C 0026839C  90 04 00 00 */	stw r0, 0(r4)
lbl_8026B460:
/* 8026B460 002683A0  7F E3 FB 78 */	mr r3, r31
/* 8026B464 002683A4  4B EC 54 A5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026B468 002683A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B46C 002683AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026B470 002683B0  7C 08 03 A6 */	mtlr r0
/* 8026B474 002683B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B478 002683B8  4E 80 00 20 */	blr 

.global init__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026B47C 002683BC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8026B480 002683C0  7C 08 02 A6 */	mflr r0
/* 8026B484 002683C4  90 01 00 64 */	stw r0, 0x64(r1)
/* 8026B488 002683C8  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8026B48C 002683CC  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8026B490 002683D0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8026B494 002683D4  7C 9F 23 78 */	mr r31, r4
/* 8026B498 002683D8  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 8026B49C 002683DC  38 00 00 00 */	li r0, 0
/* 8026B4A0 002683E0  60 84 00 04 */	ori r4, r4, 4
/* 8026B4A4 002683E4  7F E3 FB 78 */	mr r3, r31
/* 8026B4A8 002683E8  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026B4AC 002683EC  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8026B4B0 002683F0  54 84 05 66 */	rlwinm r4, r4, 0, 0x15, 0x13
/* 8026B4B4 002683F4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026B4B8 002683F8  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8026B4BC 002683FC  60 84 00 01 */	ori r4, r4, 1
/* 8026B4C0 00268400  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026B4C4 00268404  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8026B4C8 00268408  54 84 07 76 */	rlwinm r4, r4, 0, 0x1d, 0x1b
/* 8026B4CC 0026840C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026B4D0 00268410  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 8026B4D4 00268414  48 00 10 E5 */	bl generatorKill__Q34Game4Hiba3ObjFv
/* 8026B4D8 00268418  7F E3 FB 78 */	mr r3, r31
/* 8026B4DC 0026841C  38 80 00 00 */	li r4, 0
/* 8026B4E0 00268420  38 A0 00 00 */	li r5, 0
/* 8026B4E4 00268424  4B E9 9B 21 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026B4E8 00268428  7F E3 FB 78 */	mr r3, r31
/* 8026B4EC 0026842C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026B4F0 00268430  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8026B4F4 00268434  7D 89 03 A6 */	mtctr r12
/* 8026B4F8 00268438  4E 80 04 21 */	bctrl 
/* 8026B4FC 0026843C  81 83 00 00 */	lwz r12, 0(r3)
/* 8026B500 00268440  38 80 58 0C */	li r4, 0x580c
/* 8026B504 00268444  38 A0 00 00 */	li r5, 0
/* 8026B508 00268448  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026B50C 0026844C  7D 89 03 A6 */	mtctr r12
/* 8026B510 00268450  4E 80 04 21 */	bctrl 
/* 8026B514 00268454  C0 22 CC 98 */	lfs f1, lbl_8051AFF8@sda21(r2)
/* 8026B518 00268458  7F E3 FB 78 */	mr r3, r31
/* 8026B51C 0026845C  48 20 2E F9 */	bl PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
/* 8026B520 00268460  7F E4 FB 78 */	mr r4, r31
/* 8026B524 00268464  38 61 00 18 */	addi r3, r1, 0x18
/* 8026B528 00268468  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026B52C 0026846C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026B530 00268470  7D 89 03 A6 */	mtctr r12
/* 8026B534 00268474  4E 80 04 21 */	bctrl 
/* 8026B538 00268478  7F E3 FB 78 */	mr r3, r31
/* 8026B53C 0026847C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8026B540 00268480  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026B544 00268484  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8026B548 00268488  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8026B54C 0026848C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8026B550 00268490  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8026B554 00268494  C3 FF 01 F8 */	lfs f31, 0x1f8(r31)
/* 8026B558 00268498  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8026B55C 0026849C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8026B560 002684A0  7D 89 03 A6 */	mtctr r12
/* 8026B564 002684A4  4E 80 04 21 */	bctrl 
/* 8026B568 002684A8  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 8026B56C 002684AC  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8026B570 002684B0  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8026B574 002684B4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026B578 002684B8  81 01 00 2C */	lwz r8, 0x2c(r1)
/* 8026B57C 002684BC  38 E5 A7 EC */	addi r7, r5, __vt__Q23efx3Arg@l
/* 8026B580 002684C0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8026B584 002684C4  38 A4 A7 F8 */	addi r5, r4, __vt__Q23efx5TBase@l
/* 8026B588 002684C8  3C C0 80 4B */	lis r6, __vt__Q23efx12ArgEnemyType@ha
/* 8026B58C 002684CC  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyBomb@ha
/* 8026B590 002684D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8026B594 002684D4  38 C6 A7 E0 */	addi r6, r6, __vt__Q23efx12ArgEnemyType@l
/* 8026B598 002684D8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8026B59C 002684DC  38 04 85 D4 */	addi r0, r4, __vt__Q23efx10TEnemyBomb@l
/* 8026B5A0 002684E0  91 01 00 14 */	stw r8, 0x14(r1)
/* 8026B5A4 002684E4  38 81 00 30 */	addi r4, r1, 0x30
/* 8026B5A8 002684E8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8026B5AC 002684EC  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8026B5B0 002684F0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8026B5B4 002684F4  90 A1 00 08 */	stw r5, 8(r1)
/* 8026B5B8 002684F8  90 61 00 40 */	stw r3, 0x40(r1)
/* 8026B5BC 002684FC  38 61 00 08 */	addi r3, r1, 8
/* 8026B5C0 00268500  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8026B5C4 00268504  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8026B5C8 00268508  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8026B5CC 0026850C  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8026B5D0 00268510  D3 E1 00 44 */	stfs f31, 0x44(r1)
/* 8026B5D4 00268514  90 01 00 08 */	stw r0, 8(r1)
/* 8026B5D8 00268518  48 15 D7 AD */	bl create__Q23efx10TEnemyBombFPQ23efx3Arg
/* 8026B5DC 0026851C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8026B5E0 00268520  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8026B5E4 00268524  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8026B5E8 00268528  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8026B5EC 0026852C  7C 08 03 A6 */	mtlr r0
/* 8026B5F0 00268530  38 21 00 60 */	addi r1, r1, 0x60
/* 8026B5F4 00268534  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Hiba3ObjFv
getEnemyTypeID__Q34Game4Hiba3ObjFv:
/* 8026B5F8 00268538  38 60 00 14 */	li r3, 0x14
/* 8026B5FC 0026853C  4E 80 00 20 */	blr 

.global exec__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase
exec__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase:
/* 8026B600 00268540  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase:
/* 8026B604 00268544  4E 80 00 20 */	blr 

.global init__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026B608 00268548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B60C 0026854C  7C 08 02 A6 */	mflr r0
/* 8026B610 00268550  28 05 00 00 */	cmplwi r5, 0
/* 8026B614 00268554  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B618 00268558  41 82 00 10 */	beq lbl_8026B628
/* 8026B61C 0026855C  C0 05 00 00 */	lfs f0, 0(r5)
/* 8026B620 00268560  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 8026B624 00268564  48 00 00 0C */	b lbl_8026B630
lbl_8026B628:
/* 8026B628 00268568  C0 02 CC 98 */	lfs f0, lbl_8051AFF8@sda21(r2)
/* 8026B62C 0026856C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
lbl_8026B630:
/* 8026B630 00268570  7C 83 23 78 */	mr r3, r4
/* 8026B634 00268574  38 80 00 00 */	li r4, 0
/* 8026B638 00268578  38 A0 00 00 */	li r5, 0
/* 8026B63C 0026857C  4B E9 99 C9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026B640 00268580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B644 00268584  7C 08 03 A6 */	mtlr r0
/* 8026B648 00268588  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B64C 0026858C  4E 80 00 20 */	blr 

.global exec__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase
exec__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase:
/* 8026B650 00268590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B654 00268594  7C 08 02 A6 */	mflr r0
/* 8026B658 00268598  C0 02 CC 98 */	lfs f0, lbl_8051AFF8@sda21(r2)
/* 8026B65C 0026859C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B660 002685A0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8026B664 002685A4  C0 44 02 C4 */	lfs f2, 0x2c4(r4)
/* 8026B668 002685A8  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 8026B66C 002685AC  EC 22 08 2A */	fadds f1, f2, f1
/* 8026B670 002685B0  D0 24 02 C4 */	stfs f1, 0x2c4(r4)
/* 8026B674 002685B4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 8026B678 002685B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026B67C 002685BC  4C 40 13 82 */	cror 2, 0, 2
/* 8026B680 002685C0  40 82 00 20 */	bne lbl_8026B6A0
/* 8026B684 002685C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026B688 002685C8  38 A0 00 00 */	li r5, 0
/* 8026B68C 002685CC  38 C0 00 00 */	li r6, 0
/* 8026B690 002685D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026B694 002685D4  7D 89 03 A6 */	mtctr r12
/* 8026B698 002685D8  4E 80 04 21 */	bctrl 
/* 8026B69C 002685DC  48 00 00 30 */	b lbl_8026B6CC
lbl_8026B6A0:
/* 8026B6A0 002685E0  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 8026B6A4 002685E4  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 8026B6A8 002685E8  C0 05 08 1C */	lfs f0, 0x81c(r5)
/* 8026B6AC 002685EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026B6B0 002685F0  40 81 00 1C */	ble lbl_8026B6CC
/* 8026B6B4 002685F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8026B6B8 002685F8  38 A0 00 02 */	li r5, 2
/* 8026B6BC 002685FC  38 C0 00 00 */	li r6, 0
/* 8026B6C0 00268600  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026B6C4 00268604  7D 89 03 A6 */	mtctr r12
/* 8026B6C8 00268608  4E 80 04 21 */	bctrl 
lbl_8026B6CC:
/* 8026B6CC 0026860C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B6D0 00268610  7C 08 03 A6 */	mtlr r0
/* 8026B6D4 00268614  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B6D8 00268618  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase:
/* 8026B6DC 0026861C  4E 80 00 20 */	blr 

.global init__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026B6E0 00268620  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B6E4 00268624  7C 08 02 A6 */	mflr r0
/* 8026B6E8 00268628  C0 02 CC 98 */	lfs f0, lbl_8051AFF8@sda21(r2)
/* 8026B6EC 0026862C  38 A0 00 00 */	li r5, 0
/* 8026B6F0 00268630  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B6F4 00268634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026B6F8 00268638  7C 9F 23 78 */	mr r31, r4
/* 8026B6FC 0026863C  38 80 00 01 */	li r4, 1
/* 8026B700 00268640  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026B704 00268644  7F E3 FB 78 */	mr r3, r31
/* 8026B708 00268648  4B E9 98 FD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026B70C 0026864C  7F E3 FB 78 */	mr r3, r31
/* 8026B710 00268650  48 00 0E 21 */	bl startFireEffect__Q34Game4Hiba3ObjFv
/* 8026B714 00268654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B718 00268658  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026B71C 0026865C  7C 08 03 A6 */	mtlr r0
/* 8026B720 00268660  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B724 00268664  4E 80 00 20 */	blr 

.global exec__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase
exec__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase:
/* 8026B728 00268668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B72C 0026866C  7C 08 02 A6 */	mflr r0
/* 8026B730 00268670  C0 02 CC 98 */	lfs f0, lbl_8051AFF8@sda21(r2)
/* 8026B734 00268674  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B738 00268678  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026B73C 0026867C  7C 9F 23 78 */	mr r31, r4
/* 8026B740 00268680  93 C1 00 08 */	stw r30, 8(r1)
/* 8026B744 00268684  7C 7E 1B 78 */	mr r30, r3
/* 8026B748 00268688  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 8026B74C 0026868C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026B750 00268690  4C 40 13 82 */	cror 2, 0, 2
/* 8026B754 00268694  41 82 00 18 */	beq lbl_8026B76C
/* 8026B758 00268698  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026B75C 0026869C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8026B760 002686A0  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 8026B764 002686A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026B768 002686A8  40 81 00 0C */	ble lbl_8026B774
lbl_8026B76C:
/* 8026B76C 002686AC  7F E3 FB 78 */	mr r3, r31
/* 8026B770 002686B0  4B E9 9B 31 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_8026B774:
/* 8026B774 002686B4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8026B778 002686B8  7F E3 FB 78 */	mr r3, r31
/* 8026B77C 002686BC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8026B780 002686C0  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8026B784 002686C4  EC 01 00 2A */	fadds f0, f1, f0
/* 8026B788 002686C8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026B78C 002686CC  48 00 0D 15 */	bl updateEfxLod__Q34Game4Hiba3ObjFv
/* 8026B790 002686D0  7F E3 FB 78 */	mr r3, r31
/* 8026B794 002686D4  48 00 0B 19 */	bl interactFireAttack__Q34Game4Hiba3ObjFv
/* 8026B798 002686D8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8026B79C 002686DC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8026B7A0 002686E0  28 00 00 00 */	cmplwi r0, 0
/* 8026B7A4 002686E4  41 82 00 68 */	beq lbl_8026B80C
/* 8026B7A8 002686E8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8026B7AC 002686EC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8026B7B0 002686F0  40 82 00 5C */	bne lbl_8026B80C
/* 8026B7B4 002686F4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8026B7B8 002686F8  C0 02 CC 98 */	lfs f0, lbl_8051AFF8@sda21(r2)
/* 8026B7BC 002686FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026B7C0 00268700  4C 40 13 82 */	cror 2, 0, 2
/* 8026B7C4 00268704  40 82 00 28 */	bne lbl_8026B7EC
/* 8026B7C8 00268708  7F C3 F3 78 */	mr r3, r30
/* 8026B7CC 0026870C  7F E4 FB 78 */	mr r4, r31
/* 8026B7D0 00268710  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026B7D4 00268714  38 A0 00 00 */	li r5, 0
/* 8026B7D8 00268718  38 C0 00 00 */	li r6, 0
/* 8026B7DC 0026871C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026B7E0 00268720  7D 89 03 A6 */	mtctr r12
/* 8026B7E4 00268724  4E 80 04 21 */	bctrl 
/* 8026B7E8 00268728  48 00 00 24 */	b lbl_8026B80C
lbl_8026B7EC:
/* 8026B7EC 0026872C  7F C3 F3 78 */	mr r3, r30
/* 8026B7F0 00268730  7F E4 FB 78 */	mr r4, r31
/* 8026B7F4 00268734  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026B7F8 00268738  38 A0 00 01 */	li r5, 1
/* 8026B7FC 0026873C  38 C0 00 00 */	li r6, 0
/* 8026B800 00268740  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026B804 00268744  7D 89 03 A6 */	mtctr r12
/* 8026B808 00268748  4E 80 04 21 */	bctrl 
lbl_8026B80C:
/* 8026B80C 0026874C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B810 00268750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026B814 00268754  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026B818 00268758  7C 08 03 A6 */	mtlr r0
/* 8026B81C 0026875C  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B820 00268760  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase:
/* 8026B824 00268764  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026B828 00268768  7C 08 02 A6 */	mflr r0
/* 8026B82C 0026876C  7C 83 23 78 */	mr r3, r4
/* 8026B830 00268770  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026B834 00268774  48 00 0D 55 */	bl finishFireEffect__Q34Game4Hiba3ObjFv
/* 8026B838 00268778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026B83C 0026877C  7C 08 03 A6 */	mtlr r0
/* 8026B840 00268780  38 21 00 10 */	addi r1, r1, 0x10
/* 8026B844 00268784  4E 80 00 20 */	blr 
