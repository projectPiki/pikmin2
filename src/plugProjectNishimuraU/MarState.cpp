#include "Game/Entities/Mar.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Mar {

static const char unusedMarStateName[] = "246-MarState";

/**
 * @note Address: 0x80282614
 * @note Size: 0x42C
 */
void FSM::init(EnemyBase* enemy)
{
	create(MAR_StateCount);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateChase);
	registerState(new StateChaseInside);
	registerState(new StateAttack);
	registerState(new StateFall);
	registerState(new StateLand);
	registerState(new StateGround);
	registerState(new StateTakeOff);
	registerState(new StateFlyFlick);
	registerState(new StateGroundFlick);
}

/**
 * @note Address: 0x80282A40
 * @note Size: 0xAC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar = OBJ(enemy);
	mar->disableEvent(0, EB_Cullable);
	mar->disableEvent(0, EB_DamageAnimEnabled);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->deathProcedure();

	if (mar->isFlying()) {
		mar->startMotion(MARANIM_DeadFly, nullptr);
	} else {
		mar->startMotion(MARANIM_DeadGround, nullptr);
	}

	mar->enableEvent(0, EB_Untargetable);
	mar->startDeadEffect();
}

/**
 * @note Address: 0x80282AEC
 * @note Size: 0x88
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->getMotionFrame() > 45.0f) {
		mar->subShadowRadius();
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		mar->throwupItem();
		mar->finishWindEffect();
		mar->kill(nullptr);
	}
}

/**
 * @note Address: 0x80282B74
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80282B78
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
	mar->startMotion(MARANIM_WaitFly, nullptr);
}

/**
 * @note Address: 0x80282BCC
 * @note Size: 0x138
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	Creature* target = mar->getSearchedPikmin();
	if (!target) {
		target = mar->isAttackable();
	}

	if (target) {
		mar->mTargetCreature = target;
		transit(mar, MAR_Chase, nullptr);

	} else if (mar->mGeneralTimer > CG_PROPERPARMS(mar).mAirWaitTime.mValue) {
		transit(mar, MAR_Move, nullptr);
	}

	StateID nextState = mar->getFlyingNextState();

	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Wait, nullptr);
	}
}

/**
 * @note Address: 0x80282D04
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80282D08
 * @note Size: 0x4C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar = OBJ(enemy);
	mar->setRandTarget();
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
}

/**
 * @note Address: 0x80282D54
 * @note Size: 0x1A0
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	// this bit is being weird
	Vector3f pos       = mar->getPosition();
	f32 sqrDist        = sqrDistanceXZ(pos, mar->mTargetPosition);
	Vector3f targetPos = mar->mTargetPosition;

	Creature* target = mar->getSearchedPikmin();
	if (target) {
		mar->mTargetCreature = target;
		transit(mar, MAR_Chase, nullptr);
	} else if (sqrDist < 10000.0f || mar->mGeneralTimer > 7.5f) {
		mar->mTargetVelocity = Vector3f(0.0f);
		mar->finishMotion();
	} else {
		EnemyFunc::walkToTarget(mar, targetPos, CG_GENERALPARMS(mar).mMoveSpeed.mValue, CG_GENERALPARMS(mar).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(mar).mMaxTurnAngle.mValue);
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	StateID nextState = mar->getFlyingNextState();

	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Wait, nullptr);
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game3Mar3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	mr       r3, r31
	lfs      f5, 0x2d8(r31)
	lfs      f1, 0x2d0(r31)
	fsubs    f2, f0, f5
	lfs      f0, 8(r1)
	lfs      f4, 0x2d4(r31)
	fsubs    f3, f0, f1
	fmuls    f0, f2, f2
	stfs     f1, 0x14(r1)
	stfs     f4, 0x18(r1)
	fmadds   f31, f3, f3, f0
	stfs     f5, 0x1c(r1)
	bl       getSearchedPikmin__Q34Game3Mar3ObjFv
	cmplwi   r3, 0
	beq      lbl_80282E00
	stw      r3, 0x230(r31)
	mr       r3, r30
	mr       r4, r31
	li       r5, 3
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80282E54

lbl_80282E00:
	lfs      f0, lbl_8051B690@sda21(r2)
	fcmpo    cr0, f31, f0
	blt      lbl_80282E1C
	lfs      f1, 0x2c0(r31)
	lfs      f0, lbl_8051B694@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80282E38

lbl_80282E1C:
	lfs      f0, lbl_8051B688@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80282E54

lbl_80282E38:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_80282E54:
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c0(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c0(r31)
	bl       getFlyingNextState__Q34Game3Mar3ObjFv
	or.      r5, r3, r3
	blt      lbl_80282E98
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80282ED4

lbl_80282E98:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80282ED4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80282ED4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80282ED4:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80282EF4
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80282EF8
 * @note Size: 0x30
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x80282F28
 * @note Size: 0x530
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	if (!mar->isFinishMotion()) {
		Creature* target = mar->mTargetCreature;
		if (target) {
			Vector3f homePos   = mar->mHomePosition;    // f28, f27
			Vector3f marPos    = mar->getPosition();    // f26, f25
			Vector3f targetPos = target->getPosition(); //

			Vector3f sep(marPos.x - targetPos.x, 0.0f, marPos.z - targetPos.z);
			sep.normalise();
			sep *= CG_GENERALPARMS(mar).mMaxAttackRange();
			Vector3f newPos = targetPos + sep;                                          // f24, f23
			f32 angle       = JMAAtan2Radian(newPos.x - marPos.x, newPos.z - marPos.z); // f29

			mar->turnToTarget(target, CG_GENERALPARMS(mar).mTurnSpeed(), CG_GENERALPARMS(mar).mMaxTurnAngle());

			if (sqrDistanceXZ(marPos, newPos) > 225.0f) {
				f32 x = CG_GENERALPARMS(mar).mMoveSpeed() * sinf(angle);
				f32 y = mar->getTargetVelocity().y;
				f32 z = CG_GENERALPARMS(mar).mMoveSpeed() * cosf(angle);

				mar->mTargetVelocity = Vector3f(x, y, z);
			} else {
				mar->mTargetVelocity = Vector3f(0.0f);
			}

			if (sqrDistanceXZ(marPos, homePos) > SQUARE(CG_GENERALPARMS(mar).mTerritoryRadius())) {
				transit(mar, MAR_ChaseInside, nullptr);
			} else if (mar->isTargetLost()) {
				Piki* piki = mar->getSearchedPikmin();
				if (piki) {
					mar->mTargetCreature = piki;
				} else {
					transit(mar, MAR_Wait, nullptr);
				}
			}
		}

		Creature* attackTarget = mar->isAttackable();
		if (attackTarget) {
			mar->mTargetCreature = attackTarget;
			mar->mTargetVelocity = Vector3f(0.0f);
			mar->finishMotion();
		}
	}

	StateID nextState = mar->getFlyingNextState();

	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		if (mar->mTargetCreature) {
			transit(mar, MAR_Attack, nullptr);
		} else {
			transit(mar, MAR_Wait, nullptr);
		}
	}
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game3Mar3ObjFv
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80283350
	lwz      r29, 0x230(r31)
	cmplwi   r29, 0
	beq      lbl_80283324
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lfs      f28, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x1a0(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x44
	lwz      r12, 0(r29)
	lfs      f26, 0x50(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x44(r1)
	lfs      f6, 0x4c(r1)
	fsubs    f3, f26, f5
	lfs      f1, lbl_8051B688@sda21(r2)
	fsubs    f4, f25, f6
	fmadds   f0, f3, f3, f1
	fmuls    f2, f4, f4
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80283034
	ble      lbl_80283038
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80283038

lbl_80283034:
	fmr      f2, f1

lbl_80283038:
	lfs      f0, lbl_8051B688@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80283054
	lfs      f0, lbl_8051B698@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_80283054:
	lwz      r4, 0xc0(r31)
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	lfs      f0, 0x564(r4)
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fadds    f24, f5, f3
	fadds    f23, f6, f4
	fsubs    f1, f24, f26
	fsubs    f2, f23, f25
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r12, 0(r29)
	fmr      f29, f1
	lwz      r5, 0xc0(r31)
	mr       r4, r29
	lwz      r12, 8(r12)
	addi     r3, r1, 0x20
	lfs      f30, 0x334(r5)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f22, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051B6A0@sda21(r2)
	lfs      f1, lbl_8051B69C@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80283170
	lfs      f0, lbl_8051B688@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8028316C
	fmr      f31, f1
	b        lbl_80283170

lbl_8028316C:
	fneg     f31, f1

lbl_80283170:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	fsubs    f3, f25, f23
	stfs     f1, 0x1fc(r31)
	fsubs    f4, f26, f24
	lfs      f0, lbl_8051B6A4@sda21(r2)
	lfs      f2, 0x1fc(r31)
	fmuls    f1, f3, f3
	stfs     f2, 0x1a8(r31)
	fmadds   f1, f4, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80283284
	lfs      f0, lbl_8051B688@sda21(r2)
	lwz      r4, 0xc0(r31)
	fcmpo    cr0, f29, f0
	lfs      f3, 0x2e4(r4)
	bge      lbl_802831F4
	lfs      f0, lbl_8051B6A8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80283218

lbl_802831F4:
	lfs      f0, lbl_8051B6AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80283218:
	lfs      f0, lbl_8051B688@sda21(r2)
	fmuls    f3, f3, f2
	lfs      f1, 0x1d4(r31)
	lfs      f2, 0x1d8(r31)
	fcmpo    cr0, f29, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bge      lbl_80283244
	fneg     f29, f29

lbl_80283244:
	lfs      f0, lbl_8051B6AC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f1, 0x2e4(r4)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	stfs     f3, 0x1d4(r31)
	fmuls    f0, f1, f0
	stfs     f2, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80283294

lbl_80283284:
	lfs      f0, lbl_8051B688@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80283294:
	fsubs    f1, f25, f27
	lwz      r3, 0xc0(r31)
	fsubs    f2, f26, f28
	lfs      f0, 0x35c(r3)
	fmuls    f1, f1, f1
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802832DC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80283324

lbl_802832DC:
	mr       r3, r31
	bl       isTargetLost__Q34Game3Mar3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80283324
	mr       r3, r31
	bl       getSearchedPikmin__Q34Game3Mar3ObjFv
	cmplwi   r3, 0
	beq      lbl_80283304
	stw      r3, 0x230(r31)
	b        lbl_80283324

lbl_80283304:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80283324:
	mr       r3, r31
	bl       isAttackable__Q34Game3Mar3ObjFv
	cmplwi   r3, 0
	beq      lbl_80283350
	stw      r3, 0x230(r31)
	mr       r3, r31
	lfs      f0, lbl_8051B688@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80283350:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game3Mar3ObjFv
	or.      r5, r3, r3
	blt      lbl_80283380
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802833EC

lbl_80283380:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802833EC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802833EC
	lwz      r0, 0x230(r31)
	cmplwi   r0, 0
	beq      lbl_802833CC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802833EC

lbl_802833CC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802833EC:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/**
 * @note Address: 0x80283458
 * @note Size: 0x24
 */
void StateChase::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x8028347C
 * @note Size: 0x124
 */
void StateChaseInside::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar         = OBJ(enemy);
	Vector3f homePos = mar->mHomePosition;
	if (mar->mTargetCreature) {
		Vector3f pos = mar->mTargetCreature->getPosition();
		Vector3f sep = homePos - pos;
		sep.y        = 0.0f;

		sep.normalise();

		sep *= CG_GENERALPARMS(mar).mSightRadius();
		pos += sep;
		mar->mTargetPosition = pos;
	} else {
		mar->mTargetPosition = homePos;
	}

	mar->enableEvent(0, EB_Untargetable);
	mar->setEmotionExcitement();
}

/**
 * @note Address: 0x802835A0
 * @note Size: 0x37C
 */
void StateChaseInside::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	Vector3f marPos    = mar->getPosition();   // f28, f31
	Vector3f targetPos = mar->mTargetPosition; // f30, f29
	if (sqrDistanceXZ(marPos, targetPos) < 10000.0f) {
		transit(mar, MAR_Chase, nullptr);
	} else {
		Creature* target = mar->mTargetCreature;
		if (target) {
			mar->turnToTarget(target, CG_GENERALPARMS(mar).mTurnSpeed(), CG_GENERALPARMS(mar).mMaxTurnAngle());
		}

		f32 angle = JMAAtan2Radian(targetPos.x - marPos.x, targetPos.z - marPos.z);
		f32 x     = CG_GENERALPARMS(mar).mMoveSpeed() * sinf(angle);
		f32 y     = mar->getTargetVelocity().y;
		f32 z     = CG_GENERALPARMS(mar).mMoveSpeed() * cosf(angle);

		mar->mTargetVelocity = Vector3f(x, y, z);
	}

	int nextState = mar->getFlyingNextState();
	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8028391C
 * @note Size: 0x24
 */
void StateChaseInside::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x80283940
 * @note Size: 0x88
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar = OBJ(enemy);
	mar->disableEvent(0, EB_Cullable);
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_Attack, nullptr);
	mar->mIsWindAttackActive = false;
	mar->mWindScaleTimer     = 0.0f;
	mar->createSuckEffect();
}

/**
 * @note Address: 0x802839C8
 * @note Size: 0xE0
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();
	if (mar->mIsWindAttackActive) {
		mar->windTarget();
	}

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying) {
		if (mar->mCurAnim->mType == KEYEVENT_2) {
			mar->mIsWindAttackActive = true;
			mar->startWindEffect();
		} else if (mar->mCurAnim->mType == KEYEVENT_END) {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80283AA8
 * @note Size: 0x54
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->enableEvent(0, EB_Cullable);
	mar->setEmotionCaution();
	mar->mIsWindAttackActive = false;
	mar->mWindScaleTimer     = 0.0f;
	mar->finishWindEffect();
}

/**
 * @note Address: 0x80283AFC
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_Fall, nullptr);
}

/**
 * @note Address: 0x80283B64
 * @note Size: 0x1A4
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->isFlying()) {
		mar->setHeightVelocity();
	} else {
		Vector3f pos = mar->getPosition();
		Vector3f vel = mar->getVelocity();

		f32 fallSpeed = vel.y;

		f32 heightDiff = pos.y - mapMgr->getMinY(pos);
		if (heightDiff < 50.0f || fallSpeed > 0.0f) {
			mar->finishMotion();
		}

		mar->addShadowOffset();
	}

	if (mar->mGeneralTimer > 0.75f) {
		mar->disableEvent(0, EB_Untargetable);
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Land, nullptr);
	}
}

/**
 * @note Address: 0x80283D08
 * @note Size: 0x38
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setShadowOffsetMax();
	mar->setEmotionCaution();
}

/**
 * @note Address: 0x80283D40
 * @note Size: 0x70
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->disableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_Land, nullptr);
	mar->createDownEffect();
}

/**
 * @note Address: 0x80283DB0
 * @note Size: 0x80
 */
void StateLand::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, MAR_Dead, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, MAR_Ground, nullptr);
	}
}

/**
 * @note Address: 0x80283E30
 * @note Size: 0x24
 */
void StateLand::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x80283E54
 * @note Size: 0x68
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->disableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_WaitGround, nullptr);
}

/**
 * @note Address: 0x80283EBC
 * @note Size: 0x114
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->mStuckPikminCount == 0 || mar->mGeneralTimer > CG_PROPERPARMS(mar).mGroundWaitTime.mValue) {
		mar->finishMotion();
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		if (mar->mStuckPikminCount) {
			transit(mar, MAR_GroundFlick, nullptr);
		} else {
			transit(mar, MAR_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x80283FD0
 * @note Size: 0x24
 */
void StateGround::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x80283FF4
 * @note Size: 0x64
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetCreature = nullptr;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(MARANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x80284058
 * @note Size: 0xEC
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->isFlying()) {
		mar->setHeightVelocity();
		mar->subShadowOffset();
	}

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying) {
		if (mar->mCurAnim->mType == KEYEVENT_2) {
			mar->enableEvent(0, EB_Untargetable);
		} else if (mar->mCurAnim->mType == KEYEVENT_END) {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80284144
 * @note Size: 0x38
 */
void StateTakeOff::cleanup(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->resetShadowOffset();
	mar->setEmotionCaution();
}

/**
 * @note Address: 0x8028417C
 * @note Size: 0x64
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetCreature = nullptr;
	enemy->enableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(MARANIM_FlickFly, nullptr);
}

/**
 * @note Address: 0x802841E0
 * @note Size: 0xE4
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying) {
		if (mar->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(mar, CG_GENERALPARMS(mar).mShakeChance.mValue, CG_GENERALPARMS(mar).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(mar).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			mar->mFlickTimer = 0.0f;

		} else if (mar->mCurAnim->mType == KEYEVENT_END) {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802842C4
 * @note Size: 0x24
 */
void StateFlyFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802842E8
 * @note Size: 0x64
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetCreature = nullptr;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(MARANIM_FlickGround, nullptr);
}

/**
 * @note Address: 0x8028434C
 * @note Size: 0x100
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, MAR_Dead, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(enemy, CG_GENERALPARMS(enemy).mShakeRange.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(enemy, CG_GENERALPARMS(enemy).mShakeRange.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, CG_GENERALPARMS(enemy).mShakeChance.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			enemy->mFlickTimer = 0.0f;
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, MAR_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x8028444C
 * @note Size: 0x24
 */
void StateGroundFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }
} // namespace Mar
} // namespace Game
