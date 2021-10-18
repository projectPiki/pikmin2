.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q23efx8TEggdown
__vt__Q23efx8TEggdown:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game3Egg9StateWait
__vt__Q34Game3Egg9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Egg9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game3Egg9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game3Egg5State
__vt__Q34Game3Egg5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game3Egg3FSM
__vt__Q34Game3Egg3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game3Egg3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051E370
lbl_8051E370:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051E378
lbl_8051E378:
	.4byte 0x00000000
.global lbl_8051E37C
lbl_8051E37C:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game3Egg3FSMFPQ24Game9EnemyBase
init__Q34Game3Egg3FSMFPQ24Game9EnemyBase:
/* 8034B3C4 00348304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B3C8 00348308  7C 08 02 A6 */	mflr r0
/* 8034B3CC 0034830C  38 80 00 01 */	li r4, 1
/* 8034B3D0 00348310  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B3D4 00348314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B3D8 00348318  7C 7F 1B 78 */	mr r31, r3
/* 8034B3DC 0034831C  4B DE 54 89 */	bl create__Q24Game17EnemyStateMachineFi
/* 8034B3E0 00348320  38 60 00 10 */	li r3, 0x10
/* 8034B3E4 00348324  4B CD 8A C1 */	bl __nw__FUl
/* 8034B3E8 00348328  7C 64 1B 79 */	or. r4, r3, r3
/* 8034B3EC 0034832C  41 82 00 10 */	beq lbl_8034B3FC
/* 8034B3F0 00348330  38 80 00 00 */	li r4, 0
/* 8034B3F4 00348334  48 00 00 25 */	bl __ct__Q34Game3Egg9StateWaitFi
/* 8034B3F8 00348338  7C 64 1B 78 */	mr r4, r3
lbl_8034B3FC:
/* 8034B3FC 0034833C  7F E3 FB 78 */	mr r3, r31
/* 8034B400 00348340  4B DE 55 09 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8034B404 00348344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B408 00348348  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B40C 0034834C  7C 08 03 A6 */	mtlr r0
/* 8034B410 00348350  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B414 00348354  4E 80 00 20 */	blr 

.global __ct__Q34Game3Egg9StateWaitFi
__ct__Q34Game3Egg9StateWaitFi:
/* 8034B418 00348358  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8034B41C 0034835C  3C C0 80 4E */	lis r6, __vt__Q34Game3Egg5State@ha
/* 8034B420 00348360  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 8034B424 00348364  3C A0 80 4E */	lis r5, __vt__Q34Game3Egg9StateWait@ha
/* 8034B428 00348368  90 03 00 00 */	stw r0, 0(r3)
/* 8034B42C 0034836C  38 E0 00 00 */	li r7, 0
/* 8034B430 00348370  38 C6 BF 18 */	addi r6, r6, __vt__Q34Game3Egg5State@l
/* 8034B434 00348374  38 A5 BE F4 */	addi r5, r5, __vt__Q34Game3Egg9StateWait@l
/* 8034B438 00348378  90 83 00 04 */	stw r4, 4(r3)
/* 8034B43C 0034837C  38 02 00 10 */	addi r0, r2, lbl_8051E370@sda21
/* 8034B440 00348380  90 E3 00 08 */	stw r7, 8(r3)
/* 8034B444 00348384  90 C3 00 00 */	stw r6, 0(r3)
/* 8034B448 00348388  90 A3 00 00 */	stw r5, 0(r3)
/* 8034B44C 0034838C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8034B450 00348390  4E 80 00 20 */	blr 

.global init__Q34Game3Egg9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game3Egg9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8034B454 00348394  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8034B458 00348398  7C 08 02 A6 */	mflr r0
/* 8034B45C 0034839C  38 A0 00 00 */	li r5, 0
/* 8034B460 003483A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8034B464 003483A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8034B468 003483A8  7C 9F 23 78 */	mr r31, r4
/* 8034B46C 003483AC  38 80 00 00 */	li r4, 0
/* 8034B470 003483B0  7F E3 FB 78 */	mr r3, r31
/* 8034B474 003483B4  4B DB 9B 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8034B478 003483B8  7F E3 FB 78 */	mr r3, r31
/* 8034B47C 003483BC  4B DB BE 65 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 8034B480 003483C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8034B484 003483C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8034B488 003483C8  7C 08 03 A6 */	mtlr r0
/* 8034B48C 003483CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8034B490 003483D0  4E 80 00 20 */	blr 

.global exec__Q34Game3Egg9StateWaitFPQ24Game9EnemyBase
exec__Q34Game3Egg9StateWaitFPQ24Game9EnemyBase:
/* 8034B494 003483D4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034B498 003483D8  7C 08 02 A6 */	mflr r0
/* 8034B49C 003483DC  C0 02 00 18 */	lfs f0, lbl_8051E378@sda21(r2)
/* 8034B4A0 003483E0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8034B4A4 003483E4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8034B4A8 003483E8  7C 9F 23 78 */	mr r31, r4
/* 8034B4AC 003483EC  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 8034B4B0 003483F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8034B4B4 003483F4  4C 40 13 82 */	cror 2, 0, 2
/* 8034B4B8 003483F8  40 82 01 18 */	bne lbl_8034B5D0
/* 8034B4BC 003483FC  7F E3 FB 78 */	mr r3, r31
/* 8034B4C0 00348400  48 00 0D ED */	bl genItem__Q34Game3Egg3ObjFv
/* 8034B4C4 00348404  7F E3 FB 78 */	mr r3, r31
/* 8034B4C8 00348408  38 81 00 24 */	addi r4, r1, 0x24
/* 8034B4CC 0034840C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034B4D0 00348410  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 8034B4D4 00348414  7D 89 03 A6 */	mtctr r12
/* 8034B4D8 00348418  4E 80 04 21 */	bctrl 
/* 8034B4DC 0034841C  7F E3 FB 78 */	mr r3, r31
/* 8034B4E0 00348420  81 9F 00 00 */	lwz r12, 0(r31)
/* 8034B4E4 00348424  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8034B4E8 00348428  7D 89 03 A6 */	mtctr r12
/* 8034B4EC 0034842C  4E 80 04 21 */	bctrl 
/* 8034B4F0 00348430  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 8034B4F4 00348434  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8034B4F8 00348438  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 8034B4FC 0034843C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8034B500 00348440  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 8034B504 00348444  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8034B508 00348448  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8034B50C 0034844C  3C E0 80 4E */	lis r7, __vt__Q23efx8TSimple1@ha
/* 8034B510 00348450  39 24 A7 EC */	addi r9, r4, __vt__Q23efx3Arg@l
/* 8034B514 00348454  C0 02 00 1C */	lfs f0, lbl_8051E37C@sda21(r2)
/* 8034B518 00348458  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8034B51C 0034845C  3D 00 80 4B */	lis r8, __vt__Q23efx12ArgEnemyType@ha
/* 8034B520 00348460  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8034B524 00348464  3C 80 80 4E */	lis r4, __vt__Q23efx8TEggdown@ha
/* 8034B528 00348468  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8034B52C 0034846C  38 C0 00 49 */	li r6, 0x49
/* 8034B530 00348470  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8034B534 00348474  38 A0 00 00 */	li r5, 0
/* 8034B538 00348478  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8034B53C 0034847C  38 E7 6A 78 */	addi r7, r7, __vt__Q23efx8TSimple1@l
/* 8034B540 00348480  90 01 00 18 */	stw r0, 0x18(r1)
/* 8034B544 00348484  39 08 A7 E0 */	addi r8, r8, __vt__Q23efx12ArgEnemyType@l
/* 8034B548 00348488  38 04 BE E0 */	addi r0, r4, __vt__Q23efx8TEggdown@l
/* 8034B54C 0034848C  38 81 00 30 */	addi r4, r1, 0x30
/* 8034B550 00348490  91 21 00 30 */	stw r9, 0x30(r1)
/* 8034B554 00348494  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8034B558 00348498  90 61 00 40 */	stw r3, 0x40(r1)
/* 8034B55C 0034849C  38 61 00 18 */	addi r3, r1, 0x18
/* 8034B560 003484A0  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 8034B564 003484A4  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8034B568 003484A8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8034B56C 003484AC  91 01 00 30 */	stw r8, 0x30(r1)
/* 8034B570 003484B0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8034B574 003484B4  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 8034B578 003484B8  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8034B57C 003484BC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8034B580 003484C0  48 06 3A 05 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8034B584 003484C4  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8034B588 003484C8  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyBomb@ha
/* 8034B58C 003484CC  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8034B590 003484D0  38 61 00 08 */	addi r3, r1, 8
/* 8034B594 003484D4  90 01 00 08 */	stw r0, 8(r1)
/* 8034B598 003484D8  38 04 85 D4 */	addi r0, r4, __vt__Q23efx10TEnemyBomb@l
/* 8034B59C 003484DC  38 81 00 30 */	addi r4, r1, 0x30
/* 8034B5A0 003484E0  90 01 00 08 */	stw r0, 8(r1)
/* 8034B5A4 003484E4  48 07 D7 E1 */	bl create__Q23efx10TEnemyBombFPQ23efx3Arg
/* 8034B5A8 003484E8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 8034B5AC 003484EC  38 80 58 DC */	li r4, 0x58dc
/* 8034B5B0 003484F0  38 A0 00 00 */	li r5, 0
/* 8034B5B4 003484F4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8034B5B8 003484F8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8034B5BC 003484FC  7D 89 03 A6 */	mtctr r12
/* 8034B5C0 00348500  4E 80 04 21 */	bctrl 
/* 8034B5C4 00348504  7F E3 FB 78 */	mr r3, r31
/* 8034B5C8 00348508  38 80 00 00 */	li r4, 0
/* 8034B5CC 0034850C  4B DE FB 25 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_8034B5D0:
/* 8034B5D0 00348510  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 8034B5D4 00348514  C0 02 00 1C */	lfs f0, lbl_8051E37C@sda21(r2)
/* 8034B5D8 00348518  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8034B5DC 0034851C  4C 41 13 82 */	cror 2, 1, 2
/* 8034B5E0 00348520  40 82 00 14 */	bne lbl_8034B5F4
/* 8034B5E4 00348524  7F E3 FB 78 */	mr r3, r31
/* 8034B5E8 00348528  4B DB BC 1D */	bl startMotion__Q24Game9EnemyBaseFv
/* 8034B5EC 0034852C  C0 02 00 18 */	lfs f0, lbl_8051E378@sda21(r2)
/* 8034B5F0 00348530  D0 1F 02 0C */	stfs f0, 0x20c(r31)
lbl_8034B5F4:
/* 8034B5F4 00348534  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8034B5F8 00348538  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8034B5FC 0034853C  28 00 00 00 */	cmplwi r0, 0
/* 8034B600 00348540  41 82 00 28 */	beq lbl_8034B628
/* 8034B604 00348544  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8034B608 00348548  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8034B60C 0034854C  40 82 00 1C */	bne lbl_8034B628
/* 8034B610 00348550  7F E3 FB 78 */	mr r3, r31
/* 8034B614 00348554  38 80 00 00 */	li r4, 0
/* 8034B618 00348558  38 A0 00 00 */	li r5, 0
/* 8034B61C 0034855C  4B DB 99 E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8034B620 00348560  7F E3 FB 78 */	mr r3, r31
/* 8034B624 00348564  4B DB BC BD */	bl stopMotion__Q24Game9EnemyBaseFv
lbl_8034B628:
/* 8034B628 00348568  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8034B62C 0034856C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8034B630 00348570  7C 08 03 A6 */	mtlr r0
/* 8034B634 00348574  38 21 00 50 */	addi r1, r1, 0x50
/* 8034B638 00348578  4E 80 00 20 */	blr 
