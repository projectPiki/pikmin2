#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Hiba11StateAttack
    __vt__Q34Game4Hiba11StateAttack:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game4Hiba11StateAttackFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Hiba9StateWait
    __vt__Q34Game4Hiba9StateWait:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game4Hiba9StateWaitFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Hiba9StateDead
    __vt__Q34Game4Hiba9StateDead:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game4Hiba9StateDeadFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Hiba5State
    __vt__Q34Game4Hiba5State:
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
   __vt__Q34Game4Hiba3FSM
    __vt__Q34Game4Hiba3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Hiba3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051AFE0
    lbl_8051AFE0:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051AFE8
    lbl_8051AFE8:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051AFF0
    lbl_8051AFF0:
        .4byte 0x61747461
        .4byte 0x636B0000
    .global lbl_8051AFF8
    lbl_8051AFF8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8026B354
 * Size:	000128
 */
void Hiba::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 3
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026B3B8
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game4Hiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game4Hiba9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game4Hiba5State@l
	addi     r5, r2, lbl_8051AFE0@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game4Hiba9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026B3B8:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026B40C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game4Hiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game4Hiba9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game4Hiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051AFE8@sda21
	addi     r0, r3, __vt__Q34Game4Hiba9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026B40C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026B460
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game4Hiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game4Hiba11StateAttack@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game4Hiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051AFF0@sda21
	addi     r0, r3, __vt__Q34Game4Hiba11StateAttack@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026B460:
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
 * Address:	8026B47C
 * Size:	00017C
 */
void Hiba::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r4
	lwz      r4, 0x1e0(r4)
	li       r0, 0
	ori      r4, r4, 4
	mr       r3, r31
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x15, 0x13
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	ori      r4, r4, 1
	stw      r4, 0x1e0(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm   r4, r4, 0, 0x1d, 0x1b
	stw      r4, 0x1e0(r31)
	stb      r0, 0x2c0(r31)
	bl       generatorKill__Q34Game4Hiba3ObjFv
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x580c
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051AFF8@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
	mr       r4, r31
	addi     r3, r1, 0x18
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lfs      f2, 0x18(r1)
	lwz      r12, 0(r31)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x20(r1)
	lwz      r12, 0x258(r12)
	stfs     f2, 0x24(r1)
	lfs      f31, 0x1f8(r31)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	mtctr    r12
	bctrl
	lwz      r6, 0x24(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r0, 0x28(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r8, 0x2c(r1)
	addi     r7, r5, __vt__Q23efx3Arg@l
	stw      r6, 0xc(r1)
	addi     r5, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx12ArgEnemyType@ha
	lis      r4, __vt__Q23efx10TEnemyBomb@ha
	stw      r0, 0x10(r1)
	addi     r6, r6, __vt__Q23efx12ArgEnemyType@l
	lfs      f2, 0xc(r1)
	addi     r0, r4, __vt__Q23efx10TEnemyBomb@l
	stw      r8, 0x14(r1)
	addi     r4, r1, 0x30
	lfs      f1, 0x10(r1)
	stw      r7, 0x30(r1)
	lfs      f0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r3, 0x40(r1)
	addi     r3, r1, 8
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r6, 0x30(r1)
	stfs     f31, 0x44(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx10TEnemyBombFPQ23efx3Arg
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026B5F8
 * Size:	000008
 */
u32 Hiba::Obj::getEnemyTypeID() { return 0x14; }

/*
 * --INFO--
 * Address:	8026B600
 * Size:	000004
 */
void Hiba::StateDead::exec(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B604
 * Size:	000004
 */
void Hiba::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B608
 * Size:	000048
 */
void Hiba::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_8026B628
	lfs      f0, 0(r5)
	stfs     f0, 0x2c4(r4)
	b        lbl_8026B630

lbl_8026B628:
	lfs      f0, lbl_8051AFF8@sda21(r2)
	stfs     f0, 0x2c4(r4)

lbl_8026B630:
	mr       r3, r4
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026B650
 * Size:	00008C
 */
void Hiba::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051AFF8@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x2c4(r4)
	lfs      f1, 0x54(r5)
	fadds    f1, f2, f1
	stfs     f1, 0x2c4(r4)
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026B6A0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026B6CC

lbl_8026B6A0:
	lwz      r5, 0xc0(r4)
	lfs      f1, 0x2c4(r4)
	lfs      f0, 0x81c(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_8026B6CC
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026B6CC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026B6DC
 * Size:	000004
 */
void Hiba::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B6E0
 * Size:	000048
 */
void Hiba::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051AFF8@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stfs     f0, 0x2c4(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startFireEffect__Q34Game4Hiba3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026B728
 * Size:	0000FC
 */
void Hiba::StateAttack::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051AFF8@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_8026B76C
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8026B774

lbl_8026B76C:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8026B774:
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	bl       updateEfxLod__Q34Game4Hiba3ObjFv
	mr       r3, r31
	bl       interactFireAttack__Q34Game4Hiba3ObjFv
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8026B80C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8026B80C
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051AFF8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026B7EC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026B80C

lbl_8026B7EC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026B80C:
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
 * Address:	8026B824
 * Size:	000024
 */
void Hiba::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       finishFireEffect__Q34Game4Hiba3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
