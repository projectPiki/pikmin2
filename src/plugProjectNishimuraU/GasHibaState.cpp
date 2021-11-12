#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game7GasHiba11StateAttack
    __vt__Q34Game7GasHiba11StateAttack:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7GasHiba9StateWait
    __vt__Q34Game7GasHiba9StateWait:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7GasHiba9StateDead
    __vt__Q34Game7GasHiba9StateDead:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game7GasHiba5State
    __vt__Q34Game7GasHiba5State:
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
   __vt__Q34Game7GasHiba3FSM
    __vt__Q34Game7GasHiba3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game7GasHiba3FSMFPQ24Game9EnemyBase
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
    .global lbl_8051B038
    lbl_8051B038:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051B040
    lbl_8051B040:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051B048
    lbl_8051B048:
        .4byte 0x61747461
        .4byte 0x636B0000
    .global lbl_8051B050
    lbl_8051B050:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8026C68C
 * Size:	000128
 */
void GasHiba::FSM::init(Game::EnemyBase*)
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
	beq      lbl_8026C6F0
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7GasHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7GasHiba9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7GasHiba5State@l
	addi     r5, r2, lbl_8051B038@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game7GasHiba9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026C6F0:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026C744
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7GasHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7GasHiba9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7GasHiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051B040@sda21
	addi     r0, r3, __vt__Q34Game7GasHiba9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026C744:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026C798
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game7GasHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game7GasHiba11StateAttack@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game7GasHiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051B048@sda21
	addi     r0, r3, __vt__Q34Game7GasHiba11StateAttack@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026C798:
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
 * Address:	8026C7B4
 * Size:	00017C
 */
void GasHiba::StateDead::init(Game::EnemyBase*, Game::StateArg*)
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
	stb      r0, 0x2c1(r31)
	bl       generatorKill__Q34Game7GasHiba3ObjFv
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
	lfs      f1, lbl_8051B050@sda21(r2)
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
 * Address:	8026C930
 * Size:	000008
 */
u32 GasHiba::Obj::getEnemyTypeID() { return 0x15; }

/*
 * --INFO--
 * Address:	8026C938
 * Size:	000004
 */
void GasHiba::StateDead::exec(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026C93C
 * Size:	000004
 */
void GasHiba::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026C940
 * Size:	000048
 */
void GasHiba::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_8026C960
	lfs      f0, 0(r5)
	stfs     f0, 0x2c4(r4)
	b        lbl_8026C968

lbl_8026C960:
	lfs      f0, lbl_8051B050@sda21(r2)
	stfs     f0, 0x2c4(r4)

lbl_8026C968:
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
 * Address:	8026C988
 * Size:	0000C4
 */
void GasHiba::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x2c4(r4)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r4)
	bl       setInitLivingThing__Q34Game7GasHiba3ObjFv
	mr       r3, r31
	bl       updateLivingThing__Q34Game7GasHiba3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B050@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026CA00
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026CA34

lbl_8026CA00:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8026CA34
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026CA34:
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
 * Address:	8026CA4C
 * Size:	000004
 */
void GasHiba::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026CA50
 * Size:	000048
 */
void GasHiba::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B050@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	stfs     f0, 0x2c4(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startGasEffect__Q34Game7GasHiba3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026CA98
 * Size:	000150
 */
void GasHiba::StateAttack::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051B050@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f0, 0x200(r4)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	beq      lbl_8026CAE8
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_8026CAF0
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8026CAF0

lbl_8026CAE8:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8026CAF0:
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	bl       updateEfxLod__Q34Game7GasHiba3ObjFv
	mr       r3, r31
	bl       updateLivingThing__Q34Game7GasHiba3ObjFv
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8026CB30
	mr       r3, r31
	bl       interactGasAttack__Q34Game7GasHiba3ObjFv

lbl_8026CB30:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50ae
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8026CBD0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8026CBD0
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B050@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026CBB0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026CBD0

lbl_8026CBB0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026CBD0:
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
 * Address:	8026CBE8
 * Size:	000024
 */
void GasHiba::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       finishGasEffect__Q34Game7GasHiba3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
