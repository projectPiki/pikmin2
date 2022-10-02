#include "Game/Entities/Kogane.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Kogane {

/*
 * --INFO--
 * Address:	8025CD48
 * Size:	0001D4
 */
void FSM::init(EnemyBase* enemy)
{
	create(KOGANE_Count);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateMove);
	registerState(new StateWait);
	registerState(new StatePress);
}

/*
 * --INFO--
 * Address:	8025CF1C
 * Size:	000098
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = static_cast<Obj*>(enemy);
	kogane->setAtari(false);
	kogane->setEvent(0, EB_BitterImmune);
	kogane->hardConstraintOn();
	kogane->resetEvent(0, EB_16);
	kogane->setEvent(0, EB_31);

	kogane->m_velocity2 = Vector3f(0.0f);
	kogane->startMotion(0, nullptr);
	kogane->stopMotion();
}

/*
 * --INFO--
 * Address:	8025CFB4
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);
	if (kogane->isAppear()) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025D018
 * Size:	0001A0
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r0, r4
	li       r4, 1
	mr       r31, r0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 0x8000
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 2, 0
	stw      r0, 0x1e0(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r3, __vt__Q23efx11TKoganeDive@ha
	li       r7, 0xc3
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx11TKoganeDive@l
	li       r6, 0xc4
	mr       r4, r31
	sth      r7, 0x24(r1)
	addi     r3, r1, 8
	sth      r6, 0x26(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f31, 0x934(r5)
	mtctr    r12
	bctrl
	lwz      r0, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lwz      r7, 0xc(r1)
	addi     r5, r3, __vt__Q23efx3Arg@l
	lwz      r6, 0x10(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	addi     r3, r1, 0x20
	addi     r4, r1, 0x30
	stw      r7, 0x18(r1)
	lfs      f2, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stw      r5, 0x30(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x30(r1)
	stfs     f31, 0x40(r1)
	bl       create__Q23efx11TKoganeDiveFPQ23efx3Arg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5915
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	8025D1BC
 * Size:	000138
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	lwz      r0, 0x1e0(r4)
	lis      r5, __vt__Q23efx8TSimple2@ha
	addi     r8, r5, __vt__Q23efx8TSimple2@l
	lis      r6, __vt__Q23efx5TBase@ha
	oris     r5, r0, 0x40
	lis      r3, __vt__Q23efx11TKoganeDive@ha
	stw      r5, 0x1e0(r4)
	addi     r9, r6, __vt__Q23efx5TBase@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx11TKoganeDive@l
	stw      r9, 0x20(r1)
	li       r7, 0xc3
	li       r6, 0xc4
	mr       r31, r4
	stw      r8, 0x20(r1)
	addi     r3, r1, 8
	sth      r7, 0x24(r1)
	sth      r6, 0x26(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r4)
	lwz      r5, 0xc0(r4)
	lwz      r12, 8(r12)
	lfs      f31, 0x934(r5)
	mtctr    r12
	bctrl
	lwz      r0, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lwz      r7, 0xc(r1)
	addi     r5, r3, __vt__Q23efx3Arg@l
	lwz      r6, 0x10(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	addi     r3, r1, 0x20
	addi     r4, r1, 0x30
	stw      r7, 0x18(r1)
	lfs      f2, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stw      r5, 0x30(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x30(r1)
	stfs     f31, 0x40(r1)
	bl       create__Q23efx11TKoganeDiveFPQ23efx3Arg
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x308(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58a9
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
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
 * Address:	8025D2F8
 * Size:	00006C
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       koganeScaleDown__Q34Game6Kogane3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025D350
	mr       r3, r31
	bl       transitDisappear__Q34Game6Kogane3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025D344
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x1f3(r31)
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_8025D350

lbl_8025D344:
	mr       r3, r31
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg

lbl_8025D350:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025D364
 * Size:	000004
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D368
 * Size:	00006C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r4, 0xc0(r4)
	lfs      f1, 0x86c(r4)
	lfs      f2, 0x894(r4)
	bl       resetMoveTimer__Q34Game6Kogane3ObjFff
	mr       r3, r31
	li       r4, 0
	bl       "setTargetPosition__Q34Game6Kogane3ObjFP10Vector3<f>"
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025D3D8
 * Size:	000138
 */
void StateMove::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       koganeScaleUp__Q34Game6Kogane3ObjFv
	lfs      f1, 0x2d4(r31)
	mr       r3, r31
	lfs      f2, 0x2d8(r31)
	addi     r4, r1, 8
	lfs      f0, 0x2d0(r31)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lwz
r3, 0xc0(r31) lfs      f1, 0x2c4(r31) lfs      f0, 0x844(r3) fcmpo    cr0, f1,
f0 bgt      lbl_8025D454 lfs      f1, 0x2c8(r31) lfs      f0, 0x894(r3) fcmpo
cr0, f1, f0 ble      lbl_8025D45C

lbl_8025D454:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8025D45C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8025D4F8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8025D4F8
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8025D4D8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8025D4F8

lbl_8025D4D8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8025D4F8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025D510
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D514
 * Size:	00005C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r4, 0xc0(r4)
	lfs      f1, 0x8bc(r4)
	lfs      f2, 0x8e4(r4)
	bl       resetMoveTimer__Q34Game6Kogane3ObjFff
	lfs      f0, lbl_8051AC18@sda21(r2)
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025D570
 * Size:	0000BC
 */
void StateWait::exec(EnemyBase* enemy)
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
	bl       koganeScaleUp__Q34Game6Kogane3ObjFv
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x8e4(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8025D5B0
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8025D5B0:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8025D614
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8025D614
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8025D614:
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
 * Address:	8025D62C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D630
 * Size:	00011C
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	lwz      r0, 0x1e0(r4)
	lis      r5, __vt__Q23efx8TSimple2@ha
	addi     r8, r5, __vt__Q23efx8TSimple2@l
	lis      r6, __vt__Q23efx5TBase@ha
	rlwinm   r5, r0, 0, 0xb, 9
	lis      r3, __vt__Q23efx10TKoganeHit@ha
	stw      r5, 0x1e0(r4)
	addi     r9, r6, __vt__Q23efx5TBase@l
	li       r5, 0
	addi     r0, r3, __vt__Q23efx10TKoganeHit@l
	stw      r9, 0x20(r1)
	li       r7, 0xc5
	li       r6, 0xc6
	mr       r31, r4
	stw      r8, 0x20(r1)
	addi     r3, r1, 8
	sth      r7, 0x24(r1)
	sth      r6, 0x26(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r4)
	lwz      r5, 0xc0(r4)
	lwz      r12, 8(r12)
	lfs      f31, 0x934(r5)
	mtctr    r12
	bctrl
	lwz      r0, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lwz      r7, 0xc(r1)
	addi     r5, r3, __vt__Q23efx3Arg@l
	lwz      r6, 0x10(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	addi     r3, r1, 0x20
	addi     r4, r1, 0x30
	stw      r7, 0x18(r1)
	lfs      f2, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stw      r5, 0x30(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x30(r1)
	stfs     f31, 0x40(r1)
	bl       create__Q23efx10TKoganeHitFPQ23efx3Arg
	mr       r3, r31
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x318(r12)
	mtctr    r12
	bctrl
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
 * Address:	8025D750
 * Size:	000130
 */
void StatePress::exec(EnemyBase* enemy)
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
	bl       koganeScaleUp__Q34Game6Kogane3ObjFv
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8025D868
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_8025D7C8
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x31c(r12)
	mtctr    r12
	bctrl
	b        lbl_8025D868

lbl_8025D7C8:
	cmplwi   r0, 3
	bne      lbl_8025D7F4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	bl       setZukanVisible__Q24Game9EnemyBaseFb
	b        lbl_8025D868

lbl_8025D7F4:
	cmplwi   r0, 4
	bne      lbl_8025D80C
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	b        lbl_8025D868

lbl_8025D80C:
	cmplwi   r0, 0x3e8
	bne      lbl_8025D868
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051AC1C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8025D848
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8025D868

lbl_8025D848:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8025D868:
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
 * Address:	8025D888
 * Size:	000010
 */
void StatePress::cleanup(EnemyBase* enemy)
{
	/*
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r4)
	blr
	*/
}

} // namespace Kogane
} // namespace Game
