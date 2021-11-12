#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Tyre9StateDead
    __vt__Q34Game4Tyre9StateDead:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Tyre9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Tyre9StateDeadFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Tyre11StateFreeze
    __vt__Q34Game4Tyre11StateFreeze:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game4Tyre11StateFreezeFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game4Tyre11StateFreezeFPQ24Game9EnemyBase .4byte
   cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Tyre9StateLand
    __vt__Q34Game4Tyre9StateLand:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Tyre9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Tyre9StateLandFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Tyre9StateMove
    __vt__Q34Game4Tyre9StateMove:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Tyre9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game4Tyre9StateMoveFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game4Tyre9StateMoveFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game4Tyre5State
    __vt__Q34Game4Tyre5State:
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
   __vt__Q34Game4Tyre3FSM
    __vt__Q34Game4Tyre3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game4Tyre3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F568
    lbl_8051F568:
        .4byte 0x6D6F7665
        .4byte 0x00000000
    .global lbl_8051F570
    lbl_8051F570:
        .4byte 0x3E4CCCCD
    .global lbl_8051F574
    lbl_8051F574:
        .4byte 0x40C90FDB
    .global lbl_8051F578
    lbl_8051F578:
        .4byte 0x00000000
    .global lbl_8051F57C
    lbl_8051F57C:
        .4byte 0x6C616E64
        .4byte 0x00000000
    .global lbl_8051F584
    lbl_8051F584:
        .4byte 0x66726565
        .4byte 0x7A650000
    .global lbl_8051F58C
    lbl_8051F58C:
        .4byte 0x64656164
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	803AB864
 * Size:	0000C0
 */
void Tyre::FSM::init(Game::EnemyBase*)
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
	beq      lbl_803AB89C
	li       r4, 0
	bl       __ct__Q34Game4Tyre9StateMoveFi
	mr       r4, r3

lbl_803AB89C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803AB8C0
	li       r4, 1
	bl       __ct__Q34Game4Tyre9StateLandFi
	mr       r4, r3

lbl_803AB8C0:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803AB8E4
	li       r4, 2
	bl       __ct__Q34Game4Tyre11StateFreezeFi
	mr       r4, r3

lbl_803AB8E4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803AB908
	li       r4, 3
	bl       __ct__Q34Game4Tyre9StateDeadFi
	mr       r4, r3

lbl_803AB908:
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
 * Address:	803AB924
 * Size:	00003C
 */
Tyre::StateMove::StateMove(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game4Tyre5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game4Tyre9StateMove@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game4Tyre5State@l
	addi     r5, r5, __vt__Q34Game4Tyre9StateMove@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051F568@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB960
 * Size:	000048
 */
void Tyre::StateMove::init(Game::EnemyBase*, Game::StateArg*)
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
	bl       collisionStOff__Q34Game4Tyre3ObjFv
	mr       r3, r31
	bl       createSmokeEffect__Q34Game4Tyre3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB9A8
 * Size:	0000BC
 */
void Tyre::StateMove::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0xc0(r4)
	lfs      f1, 0x30c(r4)
	lfs      f0, 0x81c(r5)
	lbz      r0, 0x832(r5)
	fmuls    f1, f1, f0
	cmplwi   r0, 0
	beq      lbl_803ABA0C
	lfs      f0, 0x2c4(r4)
	lfs      f2, lbl_8051F570@sda21(r2)
	fsubs    f1, f1, f0
	lfs      f0, lbl_8051F574@sda21(r2)
	fabs     f1, f1
	frsp     f1, f1
	fmuls    f2, f2, f1
	stfs     f2, 0x2c4(r4)
	lfs      f1, 0x2c0(r4)
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_803ABA04
	fsubs    f2, f2, f0

lbl_803ABA04:
	stfs     f2, 0x2c0(r4)
	b        lbl_803ABA1C

lbl_803ABA0C:
	lfs      f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	lwz      r5, 0x184(r4)
	fmuls    f1, f1, f0
	stfs     f1, 4(r5)

lbl_803ABA1C:
	lfs      f1, 0x200(r4)
	lfs      f0, lbl_8051F578@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803ABA54
	lwz      r0, 0x1e0(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803ABA54
	lwz      r12, 0(r3)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803ABA54:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABA64
 * Size:	000024
 */
void Tyre::StateMove::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       fadeSmokeEffect__Q34Game4Tyre3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABA88
 * Size:	00003C
 */
Tyre::StateLand::StateLand(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game4Tyre5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game4Tyre9StateLand@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game4Tyre5State@l
	addi     r5, r5, __vt__Q34Game4Tyre9StateLand@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051F57C@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABAC4
 * Size:	000048
 */
void Tyre::StateLand::init(Game::EnemyBase*, Game::StateArg*)
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
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	li       r5, 1
	bl       setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABB0C
 * Size:	0000B4
 */
void Tyre::StateLand::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0xc8(r4)
	cmplwi   r0, 0
	beq      lbl_803ABBA8
	mr       r3, r31
	bl       flick__Q34Game4Tyre3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
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
	bl       "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	li       r5, 0
	bl       setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803ABBA8:
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
 * Address:	803ABBC0
 * Size:	00003C
 */
Tyre::StateFreeze::StateFreeze(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game4Tyre5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game4Tyre11StateFreeze@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game4Tyre5State@l
	addi     r5, r5, __vt__Q34Game4Tyre11StateFreeze@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051F584@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABBFC
 * Size:	000074
 */
void Tyre::StateFreeze::init(Game::EnemyBase*, Game::StateArg*)
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
	bl       stopMotion__Q24Game9EnemyBaseFv
	li       r0, 0
	lfs      f0, lbl_8051F578@sda21(r2)
	stw      r0, 0x10(r30)
	mr       r3, r31
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)
	bl       collisionStOn__Q34Game4Tyre3ObjFv
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
 * Address:	803ABC70
 * Size:	0000B4
 */
void Tyre::StateFreeze::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051F578@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stfs     f1, 0x1c8(r4)
	stfs     f1, 0x1cc(r4)
	stfs     f1, 0x1d0(r4)
	stfs     f1, 0x1d4(r4)
	stfs     f1, 0x1d8(r4)
	stfs     f1, 0x1dc(r4)
	lwz      r5, 0x10(r3)
	addi     r0, r5, 1
	stw      r0, 0x10(r3)
	lfs      f0, 0x200(r4)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_803ABCE0
	lwz      r0, 0x1e0(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803ABCE0
	lwz      r12, 0(r3)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803ABCE0:
	lwz      r3, 0x2bc(r31)
	cmplwi   r3, 0
	beq      lbl_803ABD10
	lwz      r0, 0x1e4(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803ABD04
	mr       r3, r31
	bl       constraintOff__Q24Game9EnemyBaseFv
	b        lbl_803ABD10

lbl_803ABD04:
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x400
	stw      r0, 0x1e0(r31)

lbl_803ABD10:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABD24
 * Size:	00003C
 */
Tyre::StateDead::StateDead(int)
{
	/*
	lis      r5, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game4Tyre5State@ha
	addi     r0, r5, __vt__Q24Game13EnemyFSMState@l
	lis      r5, __vt__Q34Game4Tyre9StateDead@ha
	stw      r0, 0(r3)
	li       r7, 0
	addi     r6, r6, __vt__Q34Game4Tyre5State@l
	addi     r5, r5, __vt__Q34Game4Tyre9StateDead@l
	stw      r4, 4(r3)
	addi     r0, r2, lbl_8051F58C@sda21
	stw      r7, 8(r3)
	stw      r6, 0(r3)
	stw      r5, 0(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABD60
 * Size:	000048
 */
void Tyre::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 1
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       deathProcedure__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       deadEffect__Q34Game4Tyre3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABDA8
 * Size:	000044
 */
void Tyre::StateDead::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x188(r4)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_803ABDDC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_803ABDDC
	mr       r3, r4
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_803ABDDC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
