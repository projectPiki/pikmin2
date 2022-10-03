#include "Game/Entities/Rock.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "nans.h"

namespace Game {
namespace Rock {

/*
 * --INFO--
 * Address:	80261D8C
 * Size:	000228
 */
void FSM::init(EnemyBase* enemy)
{
	create(ROCK_Count);
	registerState(new StateWait);
	registerState(new StateAppear);
	registerState(new StateDropWait);
	registerState(new StateFall);
	registerState(new StateMove);
	registerState(new StateDead);
}

/*
 * --INFO--
 * Address:	80261FB4
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->setAtari(false);
	rock->setEvent(0, EB_3);
	rock->hardConstraintOn();
	rock->resetEvent(0, EB_16);
	rock->setEvent(0, EB_31);

	rock->m_velocity2 = Vector3f(0.0f);
	rock->startMotion(1, nullptr);
	rock->stopMotion();
}

/*
 * --INFO--
 * Address:	8026204C
 * Size:	000108
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	if (rock->_2AC != 0.0f) {
		rock->_2C8 += sys->m_secondsPerFrame;
		if (rock->_2C8 > 1.5f) {
			transit(rock, ROCK_Appear, nullptr);
		}
	} else {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(rock->m_parms)->m_general.m_sightRadius.m_value;
		if (EnemyFunc::isThereOlimar(rock, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(rock, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			transit(rock, ROCK_Appear, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80262154
 * Size:	000048
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->hardConstraintOff();
	rock->setEvent(0, EB_16);
	rock->resetEvent(0, EB_31);
}

/*
 * --INFO--
 * Address:	8026219C
 * Size:	000104
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = static_cast<Obj*>(enemy);
	Vector3f position = rock->getPosition();
	position.y += rock->_2D0;
	rock->onSetPosition(position);

	rock->setEvent(0, EB_31);
	rock->resetEvent(0, EB_Cullable);
	rock->resetEvent(0, EB_SoundCullable);

	rock->m_velocity2 = Vector3f(0.0f);
	rock->startMotion(1, nullptr);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);

	rock->getJAIObject()->startSound(PSSE_EN_ROCK_FALL, 0);
}

/*
 * --INFO--
 * Address:	802622A0
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	if (rock->fallRockScaleUp()) {
		transit(rock, ROCK_Fall, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80262304
 * Size:	00005C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	mr       r0, r4
	li       r4, 1
	stw      r31, 0xc(r1)
	mr       r31, r0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 2, 0
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80262360
 * Size:	00002C
 */
void StateDropWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	li       r4, 1
	stw      r0, 0x14(r1)
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
 * Address:	8026238C
 * Size:	000034
 */
void StateDropWait::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 3
	li       r6, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802623C0
 * Size:	000058
 */
void StateDropWait::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x13, 0x11
	stw      r0, 0x1e0(r4)
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
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
 * Address:	80262418
 * Size:	000060
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051AD70@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 8
	lfs      f1, 0x2cc(r31)
	mr       r3, r31
	fneg     f1, f1
	stfs     f0, 8(r1)
	stfs     f0, 0x10(r1)
	stfs     f1, 0xc(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       startFallEffect__Q34Game4Rock3ObjFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80262478
 * Size:	000068
 */
void StateFall::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0xc8(r4)
	cmplwi   r0, 0
	beq      lbl_802624AC
	lwz      r12, 0(r3)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802624D0

lbl_802624AC:
	lwz      r0, 0x1e0(r4)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_802624D0
	lwz      r12, 0(r3)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802624D0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802624E0
 * Size:	000094
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
	mr       r3, r31
	bl       finishFallEffect__Q34Game4Rock3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0x1b
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80262574
 * Size:	00007C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	mr       r0, r4
	li       r4, 1
	stw      r31, 0xc(r1)
	mr       r31, r0
	mr       r3, r31
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x13, 0x11
	stw      r0, 0x1e0(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f0, lbl_8051AD70@sda21(r2)
	stfs     f0, 0x2c8(r31)
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_802625D4
	mr       r3, r31
	bl       startRollingWaterEffect__Q34Game4Rock3ObjFv
	b        lbl_802625DC

lbl_802625D4:
	mr       r3, r31
	bl       startRollingGroundEffect__Q34Game4Rock3ObjFv

lbl_802625DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802625F0
 * Size:	0000D0
 */
void StateMove::exec(EnemyBase* enemy)
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
	bl       updateMoveVelocity__Q34Game4Rock3ObjFv
	mr       r3, r31
	bl       moveRockScaleUp__Q34Game4Rock3ObjFv
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	bl       updateWaterEffectPosition__Q34Game4Rock3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x506a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051AD70@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_80262688
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051AD78@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802626A8

lbl_80262688:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802626A8:
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
 * Address:	802626C0
 * Size:	00007C
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       finishRollingGroundEffect__Q34Game4Rock3ObjFv
	mr       r3, r31
	bl       finishRollingWaterEffect__Q34Game4Rock3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0xe
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026273C
 * Size:	000088
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051AD70@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stfs     f0, 0x1d4(r31)
	mr       r3, r31
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r31
	bl       createRockDeadEffect__Q34Game4Rock3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x586b
	li       r5, 0
	lwz      r12, 0xc(r12)
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
 * Address:	802627C4
 * Size:	00008C
 */
void StateDead::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80262814
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv

lbl_80262814:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8026283C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8026283C
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8026283C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80262850
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Rock
} // namespace Game
