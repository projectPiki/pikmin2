#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_bombState_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804DB978
    lbl_804DB978:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q23efx13TBombrockEFGH
    __vt__Q23efx13TBombrockEFGH:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple4FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple4Fv
        .4byte fade__Q23efx8TSimple4Fv
    .global __vt__Q23efx13TBombrockABCD
    __vt__Q23efx13TBombrockABCD:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple4FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple4Fv
        .4byte fade__Q23efx8TSimple4Fv
    .global __vt__Q23efx9TBombrock
    __vt__Q23efx9TBombrock:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx9TBombrockFPQ23efx3Arg
        .4byte forceKill__Q23efx9TBombrockFv
        .4byte fade__Q23efx9TBombrockFv
    .global __vt__Q34Game4Bomb9StateBomb
    __vt__Q34Game4Bomb9StateBomb:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Bomb9StateBombFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Bomb9StateBombFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Bomb9StateWait
    __vt__Q34Game4Bomb9StateWait:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Bomb9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Bomb9StateWaitFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Bomb5State
    __vt__Q34Game4Bomb5State:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Bomb3FSM
    __vt__Q34Game4Bomb3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Bomb3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515F28
    lbl_80515F28:
        .skip 0x4
    .global lbl_80515F2C
    lbl_80515F2C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E300
    lbl_8051E300:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051E308
    lbl_8051E308:
        .float 1.0
    .global lbl_8051E30C
    lbl_8051E30C:
        .4byte 0x626F6D62
        .4byte 0x00000000
    .global lbl_8051E314
    lbl_8051E314:
        .4byte 0x00000000
    .global lbl_8051E318
    lbl_8051E318:
        .4byte 0x42C80000
    .global lbl_8051E31C
    lbl_8051E31C:
        .4byte 0x43480000
*/

namespace Game {

/*
 * --INFO--
 * Address:	803493F8
 * Size:	000078
 */
void Bomb::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80349430
	li       r4, 0
	bl       __ct__Q34Game4Bomb9StateWaitFi
	mr       r4, r3

lbl_80349430:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80349454
	li       r4, 1
	bl       __ct__Q34Game4Bomb9StateBombFi
	mr       r4, r3

lbl_80349454:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80349470
 * Size:	00003C
 */
Bomb::StateWait::StateWait(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game4Bomb5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game4Bomb9StateWait@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game4Bomb5State@l
	addi     r5, r5, __vt__Q34Game4Bomb9StateWait@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051E300@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803494AC
 * Size:	00005C
 */
void Bomb::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	li       r0, 0
	stw      r0, 0x10(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80349508
 * Size:	000148
 */
void Bomb::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x2bc(r4)
	cmplwi   r0, 0
	beq      lbl_80349560
	lwz      r0, 0xb8(r31)
	cmplwi   r0, 0
	bne      lbl_80349560
	lwz      r3, 0x10(r30)
	addi     r0, r3, 1
	stw      r0, 0x10(r30)
	lwz      r0, 0x10(r30)
	cmpwi    r0, 0xc8
	ble      lbl_80349560
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80349560:
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803495A4
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f2, lbl_8051E308@sda21(r2)
	lfs      f1, 0x54(r4)
	bl       addDamage__Q24Game9EnemyBaseFff
	lwz      r3, 0x28c(r31)
	li       r4, 0x5009
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_803495DC

lbl_803495A4:
	mr       r3, r31
	bl       isAnimStart__Q34Game4Bomb3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803495DC
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	bl       startMotion__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv

lbl_803495DC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80349638
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0x3e8
	beq      lbl_80349618
	bge      lbl_80349638
	cmpwi    r0, 2
	beq      lbl_80349608
	b        lbl_80349638

lbl_80349608:
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	b        lbl_80349638

lbl_80349618:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80349638:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80349650
 * Size:	00003C
 */
Bomb::StateBomb::StateBomb(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game4Bomb5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game4Bomb9StateBomb@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game4Bomb5State@l
	addi     r5, r5, __vt__Q34Game4Bomb9StateBomb@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051E30C@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034968C
 * Size:	000060
 */
void Bomb::StateBomb::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r0, 0x1e0(r4)
	li       r4, 1
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	li       r0, 0
	stw      r0, 0x10(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803496EC
 * Size:	0005C4
 */
void Bomb::StateBomb::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x1f0(r1)
	mflr     r0
	stw      r0, 0x1f4(r1)
	stfd     f31, 0x1e0(r1)
	psq_st   f31, 488(r1), 0, qr0
	stfd     f30, 0x1d0(r1)
	psq_st   f30, 472(r1), 0, qr0
	stfd     f29, 0x1c0(r1)
	psq_st   f29, 456(r1), 0, qr0
	stfd     f28, 0x1b0(r1)
	psq_st   f28, 440(r1), 0, qr0
	stfd     f27, 0x1a0(r1)
	psq_st   f27, 424(r1), 0, qr0
	stfd     f26, 0x190(r1)
	psq_st   f26, 408(r1), 0, qr0
	stfd     f25, 0x180(r1)
	psq_st   f25, 392(r1), 0, qr0
	stfd     f24, 0x170(r1)
	psq_st   f24, 376(r1), 0, qr0
	stmw     r23, 0x14c(r1)
	mr       r29, r4
	mr       r23, r3
	lwz      r3, 0x28c(r4)
	li       r4, 0x5009
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	mr       r3, r29
	lfs      f2, lbl_8051E308@sda21(r2)
	lfs      f1, 0x54(r4)
	bl       addDamage__Q24Game9EnemyBaseFff
	lfs      f1, 0x200(r29)
	lfs      f0, lbl_8051E314@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80349C5C
	lwz      r3, 0x10(r23)
	addi     r0, r3, 1
	stw      r0, 0x10(r23)
	lwz      r0, 0x10(r23)
	cmpwi    r0, 0xa
	blt      lbl_80349C5C
	li       r0, 0
	mr       r3, r29
	stw      r0, 0x10(r23)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	mr       r3, r29
	addi     r4, r1, 0x48
	lwz      r12, 0(r29)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x48(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	addi     r25, r4, __vt__Q23efx5TBase@l
	lwz      r5, 0x4c(r1)
	lwz      r0, 0x50(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r6, 0x2c(r1)
	lis      r27, __vt__Q23efx8TSimple4@ha
	addi     r31, r4, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051E308@sda21(r2)
	li       r10, 0
	stw      r5, 0x30(r1)
	lfs      f3, 0x2c(r1)
	lis      r24, __vt__Q23efx12ArgEnemyType@ha
	stw      r0, 0x34(r1)
	lis      r26, __vt__Q23efx9TBombrock@ha
	lfs      f2, 0x30(r1)
	lis      r9, __vt__Q23efx13TBombrockABCD@ha
	lfs      f1, 0x34(r1)
	lis      r4, __vt__Q23efx13TBombrockEFGH@ha
	li       r28, 8
	li       r30, 9
	li       r12, 0xa
	li       r11, 0xb
	li       r8, 0xc
	li       r7, 0xd
	li       r6, 0xe
	li       r5, 0xf
	stw      r25, 0xc0(r1)
	addi     r27, r27, __vt__Q23efx8TSimple4@l
	addi     r24, r24, __vt__Q23efx12ArgEnemyType@l
	addi     r26, r26, __vt__Q23efx9TBombrock@l
	stw      r25, 0xdc(r1)
	addi     r9, r9, __vt__Q23efx13TBombrockABCD@l
	addi     r0, r4, __vt__Q23efx13TBombrockEFGH@l
	addi     r23, r1, 0xc0
	stw      r31, 0xa4(r1)
	addi     r31, r1, 0xdc
	addi     r4, r1, 0xa4
	stw      r25, 0xbc(r1)
	stw      r27, 0xc0(r1)
	stw      r27, 0xdc(r1)
	stw      r3, 0xb4(r1)
	mr       r3, r23
	stfs     f3, 0xa8(r1)
	stfs     f2, 0xac(r1)
	stfs     f1, 0xb0(r1)
	stw      r24, 0xa4(r1)
	stfs     f0, 0xb8(r1)
	stw      r26, 0xbc(r1)
	sth      r28, 0xc4(r1)
	sth      r30, 0xc6(r1)
	sth      r12, 0xc8(r1)
	sth      r11, 0xca(r1)
	stw      r10, 0xcc(r1)
	stw      r10, 0xd0(r1)
	stw      r10, 0xd4(r1)
	stw      r10, 0xd8(r1)
	stw      r9, 0xc0(r1)
	sth      r8, 0xe0(r1)
	sth      r7, 0xe2(r1)
	sth      r6, 0xe4(r1)
	sth      r5, 0xe6(r1)
	stw      r10, 0xe8(r1)
	stw      r10, 0xec(r1)
	stw      r10, 0xf0(r1)
	stw      r10, 0xf4(r1)
	stw      r0, 0xdc(r1)
	lwz      r12, 0(r23)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8034991C
	mr       r3, r31
	addi     r4, r1, 0xa4
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8034991C:
	lwz      r3, 0x2d4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28c(r29)
	li       r4, 0x5800
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x280(r29)
	cmplwi   r0, 0
	beq      lbl_80349960
	mr       r3, r29
	bl       bombEffInWater__Q34Game4Bomb3ObjFv

lbl_80349960:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x48
	li       r4, 0xc
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x48
	li       r4, 0xf
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xc0(r29)
	addi     r3, r1, 0x84
	lfs      f29, 0x20(r1)
	addi     r4, r1, 0x38
	lfs      f0, 0x844(r5)
	lfs      f31, 0x24(r1)
	lfs      f30, 0x28(r1)
	stfs     f29, 0x38(r1)
	fadds    f28, f31, f0
	fsubs    f27, f31, f0
	stfs     f31, 0x3c(r1)
	stfs     f30, 0x40(r1)
	lfs      f0, 0x5b4(r5)
	stfs     f0, 0x44(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0xf8
	stw      r0, 0x98(r1)
	addi     r4, r1, 0x84
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0xf8
	bl       first__Q24Game12CellIteratorFv
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r31, r3, "zero__10Vector3<f>"@l
	b        lbl_80349C40

lbl_80349A04:
	addi     r3, r1, 0xf8
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349C38
	cmplw    r30, r29
	beq      lbl_80349C38
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	fcmpo    cr0, f0, f28
	bgt      lbl_80349C38
	fcmpo    cr0, f0, f27
	blt      lbl_80349C38
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349AEC
	lwz      r6, 0xc0(r29)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, 0x81c(r6)
	addi     r0, r5, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051E308@sda21(r2)
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	stw      r0, 0x6c(r1)
	fmuls    f3, f1, f0
	lfs      f2, "zero__10Vector3<f>"@l(r3)
	lfs      f1, 4(r31)
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lfs      f0, 8(r31)
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	stw      r4, 0x6c(r1)
	mr       r3, r30
	addi     r4, r1, 0x6c
	stw      r29, 0x70(r1)
	stfs     f3, 0x74(r1)
	stfs     f2, 0x78(r1)
	stfs     f1, 0x7c(r1)
	stfs     f0, 0x80(r1)
	stw      r0, 0x6c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_80349C38

lbl_80349AEC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80349B24
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349C38

lbl_80349B24:
	lwz      r0, 0x2cc(r29)
	cmplwi   r0, 0
	mr       r23, r0
	bne      lbl_80349B38
	mr       r23, r29

lbl_80349B38:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f26, 8(r1)
	fsubs    f1, f1, f31
	lfs      f25, 0x10(r1)
	fsubs    f26, f26, f29
	lfs      f0, lbl_8051E314@sda21(r2)
	fsubs    f25, f25, f30
	fmuls    f1, f1, f1
	fmuls    f2, f25, f25
	fmadds   f1, f26, f26, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80349B94
	ble      lbl_80349B98
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80349B98

lbl_80349B94:
	fmr      f1, f0

lbl_80349B98:
	lfs      f0, lbl_8051E314@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80349BB4
	lfs      f0, lbl_8051E308@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f26, f26, f0
	fmuls    f25, f25, f0

lbl_80349BB4:
	mr       r3, r30
	lfs      f24, lbl_8051E318@sda21(r2)
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349BD8
	lfs      f24, lbl_8051E31C@sda21(r2)

lbl_80349BD8:
	lwz      r6, 0xc0(r29)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lfs      f0, 0x604(r6)
	addi     r0, r5, __vt__Q24Game11Interaction@l
	fmuls    f26, f26, f24
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	stw      r0, 0x54(r1)
	fmuls    f25, f25, f24
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	mr       r3, r30
	stw      r4, 0x54(r1)
	addi     r4, r1, 0x54
	stw      r23, 0x58(r1)
	stfs     f0, 0x5c(r1)
	stfs     f26, 0x60(r1)
	stfs     f24, 0x64(r1)
	stfs     f25, 0x68(r1)
	stw      r0, 0x54(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80349C38:
	addi     r3, r1, 0xf8
	bl       next__Q24Game12CellIteratorFv

lbl_80349C40:
	addi     r3, r1, 0xf8
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349A04
	mr       r3, r29
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80349C5C:
	psq_l    f31, 488(r1), 0, qr0
	lfd      f31, 0x1e0(r1)
	psq_l    f30, 472(r1), 0, qr0
	lfd      f30, 0x1d0(r1)
	psq_l    f29, 456(r1), 0, qr0
	lfd      f29, 0x1c0(r1)
	psq_l    f28, 440(r1), 0, qr0
	lfd      f28, 0x1b0(r1)
	psq_l    f27, 424(r1), 0, qr0
	lfd      f27, 0x1a0(r1)
	psq_l    f26, 408(r1), 0, qr0
	lfd      f26, 0x190(r1)
	psq_l    f25, 392(r1), 0, qr0
	lfd      f25, 0x180(r1)
	psq_l    f24, 376(r1), 0, qr0
	lfd      f24, 0x170(r1)
	lmw      r23, 0x14c(r1)
	lwz      r0, 0x1f4(r1)
	mtlr     r0
	addi     r1, r1, 0x1f0
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	80349CB0
 * Size:	000084
 */
void TBombrock::create(efx::Arg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r29, 4
	lwz      r12, 4(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349D14
	addi     r3, r29, 0x20
	mr       r4, r30
	lwz      r12, 0x20(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80349D14
	li       r31, 1

lbl_80349D14:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80349D34
 * Size:	000004
 */
void TBombrock::forceKill(void) { }

/*
 * --INFO--
 * Address:	80349D38
 * Size:	000004
 */
void TBombrock::fade(void) { }

} // namespace efx

/*
 * --INFO--
 * Address:	80349D3C
 * Size:	000028
 */
void __sinit_bombState_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804DB978@ha
	stw      r0, lbl_80515F28@sda21(r13)
	stfsu    f0, lbl_804DB978@l(r3)
	stfs     f0, lbl_80515F2C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
