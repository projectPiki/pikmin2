#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
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
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game3Egg5State
    __vt__Q34Game3Egg5State:
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
   __vt__Q34Game3Egg3FSM
    __vt__Q34Game3Egg3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game3Egg3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
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
*/

namespace Game {

/*
 * --INFO--
 * Address:	8034B3C4
 * Size:	000054
 */
void Egg::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8034B3FC
	li       r4, 0
	bl       __ct__Q34Game3Egg9StateWaitFi
	mr       r4, r3

lbl_8034B3FC:
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
 * Address:	8034B418
 * Size:	00003C
 */
Egg::StateWait::StateWait(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game3Egg5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game3Egg9StateWait@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game3Egg5State@l
	addi     r5, r5, __vt__Q34Game3Egg9StateWait@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051E370@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B454
 * Size:	000040
 */
void Egg::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034B494
 * Size:	0001A8
 */
void Egg::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lfs      f0, lbl_8051E378@sda21(r2)
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8034B5D0
	mr       r3, r31
	bl       genItem__Q34Game3Egg3ObjFv
	mr       r3, r31
	addi     r4, r1, 0x24
	lwz      r12, 0(r31)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lwz      r7, 0x24(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r6, 0x28(r1)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lwz      r5, 0x2c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r7, 0xc(r1)
	lis      r7, __vt__Q23efx8TSimple1@ha
	addi     r9, r4, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051E37C@sda21(r2)
	stw      r6, 0x10(r1)
	lis      r8, __vt__Q23efx12ArgEnemyType@ha
	lfs      f3, 0xc(r1)
	lis      r4, __vt__Q23efx8TEggdown@ha
	stw      r5, 0x14(r1)
	li       r6, 0x49
	lfs      f2, 0x10(r1)
	li       r5, 0
	lfs      f1, 0x14(r1)
	addi     r7, r7, __vt__Q23efx8TSimple1@l
	stw      r0, 0x18(r1)
	addi     r8, r8, __vt__Q23efx12ArgEnemyType@l
	addi     r0, r4, __vt__Q23efx8TEggdown@l
	addi     r4, r1, 0x30
	stw      r9, 0x30(r1)
	stw      r7, 0x18(r1)
	stw      r3, 0x40(r1)
	addi     r3, r1, 0x18
	stfs     f3, 0x34(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stw      r8, 0x30(r1)
	stfs     f0, 0x44(r1)
	sth      r6, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x18(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx10TEnemyBomb@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	addi     r3, r1, 8
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx10TEnemyBomb@l
	addi     r4, r1, 0x30
	stw      r0, 8(r1)
	bl       create__Q23efx10TEnemyBombFPQ23efx3Arg
	lwz      r3, 0x28c(r31)
	li       r4, 0x58dc
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8034B5D0:
	lfs      f1, 0x20c(r31)
	lfs      f0, lbl_8051E37C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8034B5F4
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051E378@sda21(r2)
	stfs     f0, 0x20c(r31)

lbl_8034B5F4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8034B628
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8034B628
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv

lbl_8034B628:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}
} // namespace Game
