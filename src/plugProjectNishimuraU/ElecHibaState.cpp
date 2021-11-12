#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game8ElecHiba11StateAttack
    __vt__Q34Game8ElecHiba11StateAttack:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ElecHiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game8ElecHiba11StateAttackFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game8ElecHiba11StateAttackFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game8ElecHiba9StateSign
    __vt__Q34Game8ElecHiba9StateSign:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ElecHiba9StateSignFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game8ElecHiba9StateSignFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game8ElecHiba9StateSignFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game8ElecHiba9StateWait
    __vt__Q34Game8ElecHiba9StateWait:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ElecHiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game8ElecHiba9StateWaitFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game8ElecHiba9StateWaitFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game8ElecHiba9StateDead
    __vt__Q34Game8ElecHiba9StateDead:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game8ElecHiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game8ElecHiba9StateDeadFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game8ElecHiba9StateDeadFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game8ElecHiba5State
    __vt__Q34Game8ElecHiba5State:
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
   __vt__Q34Game8ElecHiba3FSM
    __vt__Q34Game8ElecHiba3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game8ElecHiba3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B098
    lbl_8051B098:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051B0A0
    lbl_8051B0A0:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051B0A8
    lbl_8051B0A8:
        .4byte 0x7369676E
        .4byte 0x00000000
    .global lbl_8051B0B0
    lbl_8051B0B0:
        .4byte 0x61747461
        .4byte 0x636B0000
    .global lbl_8051B0B8
    lbl_8051B0B8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8026DFD8
 * Size:	00017C
 */
void ElecHiba::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026E03C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game8ElecHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game8ElecHiba9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game8ElecHiba5State@l
	addi     r5, r2, lbl_8051B098@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game8ElecHiba9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026E03C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026E090
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game8ElecHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game8ElecHiba9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game8ElecHiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051B0A0@sda21
	addi     r0, r3, __vt__Q34Game8ElecHiba9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026E090:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026E0E4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game8ElecHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game8ElecHiba9StateSign@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game8ElecHiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051B0A8@sda21
	addi     r0, r3, __vt__Q34Game8ElecHiba9StateSign@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026E0E4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8026E138
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game8ElecHiba5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game8ElecHiba11StateAttack@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q34Game8ElecHiba5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051B0B0@sda21
	addi     r0, r3, __vt__Q34Game8ElecHiba11StateAttack@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8026E138:
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
 * Address:	8026E154
 * Size:	0002CC
 */
void ElecHiba::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
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
	bl       generatorKill__Q34Game8ElecHiba3ObjFv
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
	lfs      f1, lbl_8051B0B8@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
	mr       r4, r31
	addi     r3, r1, 0x34
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lfs      f2, 0x34(r1)
	lwz      r12, 0(r31)
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	lwz      r12, 0x258(r12)
	stfs     f2, 0x4c(r1)
	lfs      f31, 0x1f8(r31)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	mtctr    r12
	bctrl
	lwz      r6, 0x4c(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r0, 0x50(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r8, 0x54(r1)
	addi     r7, r5, __vt__Q23efx3Arg@l
	stw      r6, 0x28(r1)
	addi     r5, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx12ArgEnemyType@ha
	lis      r4, __vt__Q23efx10TEnemyBomb@ha
	stw      r0, 0x2c(r1)
	addi     r6, r6, __vt__Q23efx12ArgEnemyType@l
	lfs      f2, 0x28(r1)
	addi     r0, r4, __vt__Q23efx10TEnemyBomb@l
	stw      r8, 0x30(r1)
	addi     r4, r1, 0x70
	lfs      f1, 0x2c(r1)
	stw      r7, 0x70(r1)
	lfs      f0, 0x30(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x80(r1)
	addi     r3, r1, 0xc
	stfs     f2, 0x74(r1)
	stfs     f1, 0x78(r1)
	stfs     f0, 0x7c(r1)
	stw      r6, 0x70(r1)
	stfs     f31, 0x84(r1)
	stw      r0, 0xc(r1)
	bl       create__Q23efx10TEnemyBombFPQ23efx3Arg
	mr       r3, r31
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	or.      r31, r3, r3
	beq      lbl_8026E404
	lwz      r4, 0x1e0(r31)
	li       r0, 0
	ori      r4, r4, 4
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
	bl       generatorKill__Q34Game8ElecHiba3ObjFv
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
	lfs      f1, lbl_8051B0B8@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
	mr       r4, r31
	addi     r3, r1, 0x1c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lfs      f2, 0x1c(r1)
	lwz      r12, 0(r31)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x24(r1)
	lwz      r12, 0x258(r12)
	stfs     f2, 0x40(r1)
	lfs      f31, 0x1f8(r31)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	mtctr    r12
	bctrl
	lwz      r6, 0x40(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r0, 0x44(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r8, 0x48(r1)
	addi     r7, r5, __vt__Q23efx3Arg@l
	stw      r6, 0x10(r1)
	addi     r5, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx12ArgEnemyType@ha
	lis      r4, __vt__Q23efx10TEnemyBomb@ha
	stw      r0, 0x14(r1)
	addi     r6, r6, __vt__Q23efx12ArgEnemyType@l
	lfs      f2, 0x10(r1)
	addi     r0, r4, __vt__Q23efx10TEnemyBomb@l
	stw      r8, 0x18(r1)
	addi     r4, r1, 0x58
	lfs      f1, 0x14(r1)
	stw      r7, 0x58(r1)
	lfs      f0, 0x18(r1)
	stw      r5, 8(r1)
	stw      r3, 0x68(r1)
	addi     r3, r1, 8
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	stw      r6, 0x58(r1)
	stfs     f31, 0x6c(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx10TEnemyBombFPQ23efx3Arg

lbl_8026E404:
	psq_l    f31, 152(r1), 0, qr0
	lwz      r0, 0xa4(r1)
	lfd      f31, 0x90(r1)
	lwz      r31, 0x8c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026E420
 * Size:	000008
 */
u32 ElecHiba::Obj::getEnemyTypeID() { return 0x16; }

/*
 * --INFO--
 * Address:	8026E428
 * Size:	000004
 */
void ElecHiba::StateDead::exec(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026E42C
 * Size:	000004
 */
void ElecHiba::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026E430
 * Size:	000070
 */
void ElecHiba::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	beq      lbl_8026E458
	lfs      f0, 0(r5)
	stfs     f0, 0x2c4(r31)
	b        lbl_8026E460

lbl_8026E458:
	lfs      f0, lbl_8051B0B8@sda21(r2)
	stfs     f0, 0x2c4(r31)

lbl_8026E460:
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026E48C
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_8026E48C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026E4A0
 * Size:	0000E4
 */
void ElecHiba::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x2c4(r4)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r4)
	lbz      r0, 0x2f4(r4)
	cmplwi   r0, 0
	beq      lbl_8026E510
	mr       r3, r31
	bl       isWaitFinish__Q34Game8ElecHiba3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026E56C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026E56C

lbl_8026E510:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B0B8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026E540
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026E56C

lbl_8026E540:
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x81c(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_8026E56C
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026E56C:
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
 * Address:	8026E584
 * Size:	000004
 */
void ElecHiba::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026E588
 * Size:	000088
 */
void ElecHiba::StateSign::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B0B8@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r3, r31
	stfs     f0, 0x2c4(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	or.      r30, r3, r3
	beq      lbl_8026E5F8
	lwz      r0, 0x1e0(r30)
	li       r4, 0
	li       r5, 0
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r30)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	mr       r4, r30
	bl       startChargeEffect__Q34Game8ElecHiba3ObjFPQ24Game8Creature

lbl_8026E5F8:
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
 * Address:	8026E610
 * Size:	0000F8
 */
void ElecHiba::StateSign::exec(Game::EnemyBase*)
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
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50ac
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B0B8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026E6BC
	mr       r3, r31
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026E698
	mr       r3, r31
	bl       finishChargeEffect__Q34Game8ElecHiba3ObjFv

lbl_8026E698:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026E6F0

lbl_8026E6BC:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8026E6F0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026E6F0:
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
 * Address:	8026E708
 * Size:	000044
 */
void ElecHiba::StateSign::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r4)
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026E73C
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r3)

lbl_8026E73C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026E74C
 * Size:	000084
 */
void ElecHiba::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B0B8@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stfs     f0, 0x2c4(r31)
	mr       r3, r31
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       setVersusHibaType__Q34Game8ElecHiba3ObjFv
	mr       r3, r31
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026E7BC
	lwz      r0, 0x1e0(r3)
	li       r4, 0
	li       r5, 0
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r3)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startDisChargeEffect__Q34Game8ElecHiba3ObjFv

lbl_8026E7BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026E7D0
 * Size:	000164
 */
void ElecHiba::StateAttack::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x2c4(r4)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r4)
	lbz      r0, 0x2f4(r4)
	cmplwi   r0, 0
	beq      lbl_8026E840
	mr       r3, r31
	bl       isAttackFinish__Q34Game8ElecHiba3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026E89C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026E89C

lbl_8026E840:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B0B8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026E870
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026E89C

lbl_8026E870:
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_8026E89C
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026E89C:
	mr       r3, r31
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026E8F0
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	addi     r4, r1, 0x14
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "interactDenkiAttack__Q34Game8ElecHiba3ObjFR10Vector3<f>"
	mr       r3, r31
	bl       updateEfxLod__Q34Game8ElecHiba3ObjFv

lbl_8026E8F0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50ad
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026E934
 * Size:	000060
 */
void ElecHiba::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r4)
	bl       getChildObjPtr__Q34Game8ElecHiba3ObjFv
	cmplwi   r3, 0
	beq      lbl_8026E978
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r3)
	mr       r3, r31
	bl       finishDisChargeEffect__Q34Game8ElecHiba3ObjFv

lbl_8026E978:
	mr       r3, r31
	bl       resetAttrHitCount__Q34Game8ElecHiba3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
