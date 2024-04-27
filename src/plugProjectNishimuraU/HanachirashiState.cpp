#include "Game/Entities/Hanachirashi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Hanachirashi {

static const char unusedName[] = "246-HanachirashiState";

/**
 * @note Address: 0x8029F228
 * @note Size: 0x480
 */
void FSM::init(EnemyBase* enemy)
{
	create(HANACHIRASHI_StateCount);
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
	registerState(new StateLaugh);
}

/**
 * @note Address: 0x8029F6A8
 * @note Size: 0xAC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->disableEvent(0, EB_Cullable);
	hanachirashi->disableEvent(0, EB_DamageAnimEnabled);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->deathProcedure();

	if (hanachirashi->isFlying()) {
		hanachirashi->startMotion(HANACHIANIM_DeadFly, nullptr);
	} else {
		hanachirashi->startMotion(HANACHIANIM_DeadGround, nullptr);
	}

	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->startDeadEffect();
}

/**
 * @note Address: 0x8029F754
 * @note Size: 0xB8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (!hanachirashi->getCurrAnimIndex()) {
		if (hanachirashi->getMotionFrame() > 45.0f) {
			hanachirashi->subShadowRadius();
		}
	}

	else if (hanachirashi->getMotionFrame() > 60.0f) {
		hanachirashi->subShadowRadius();
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		hanachirashi->throwupItem();
		hanachirashi->finishWindEffect();
		hanachirashi->kill(nullptr);
	}
}

/**
 * @note Address: 0x8029F80C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8029F810
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->startMotion(HANACHIANIM_WaitFly, nullptr);
}

/**
 * @note Address: 0x8029F864
 * @note Size: 0x138
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	Creature* target = hanachirashi->getSearchedPikmin();
	if (!target) {
		target = hanachirashi->isAttackable();
	}

	if (target) {
		hanachirashi->mTargetCreature = target;
		transit(hanachirashi, HANACHIRASHI_Chase, nullptr);

	} else if (hanachirashi->mAirWaitTime > CG_PROPERPARMS(hanachirashi).mAirWaitTime.mValue) {
		transit(hanachirashi, HANACHIRASHI_Move, nullptr);
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	StateID nextState = hanachirashi->getFlyingNextState();

	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8029F99C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8029F9A0
 * @note Size: 0x4C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setRandTarget();
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
}

/**
 * @note Address: 0x8029F9EC
 * @note Size: 0x1A0
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	// this bit is being weird
	Vector3f pos       = hanachirashi->getPosition();
	f32 sqrDist        = sqrDistanceXZ(pos, hanachirashi->mTargetPosition);
	Vector3f targetPos = hanachirashi->mTargetPosition;

	Creature* target = hanachirashi->getSearchedPikmin();
	if (target) {
		hanachirashi->mTargetCreature = target;
		transit(hanachirashi, HANACHIRASHI_Chase, nullptr);
	} else if (sqrDist < 10000.0f || hanachirashi->mAirWaitTime > 7.5f) {
		hanachirashi->mTargetVelocity = Vector3f(0.0f);
		hanachirashi->finishMotion();
	} else {
		EnemyFunc::walkToTarget(hanachirashi, targetPos, CG_GENERALPARMS(hanachirashi).mMoveSpeed.mValue,
		                        CG_GENERALPARMS(hanachirashi).mTurnSpeed.mValue, CG_GENERALPARMS(hanachirashi).mMaxTurnAngle.mValue);
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	StateID nextState = hanachirashi->getFlyingNextState();

	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
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
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	mr       r3, r31
	lfs      f5, 0x2e0(r31)
	lfs      f1, 0x2d8(r31)
	fsubs    f2, f0, f5
	lfs      f0, 8(r1)
	lfs      f4, 0x2dc(r31)
	fsubs    f3, f0, f1
	fmuls    f0, f2, f2
	stfs     f1, 0x14(r1)
	stfs     f4, 0x18(r1)
	fmadds   f31, f3, f3, f0
	stfs     f5, 0x1c(r1)
	bl       getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_8029FA98
	stw      r3, 0x230(r31)
	mr       r3, r30
	mr       r4, r31
	li       r5, 3
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029FAEC

lbl_8029FA98:
	lfs      f0, lbl_8051BD64@sda21(r2)
	fcmpo    cr0, f31, f0
	blt      lbl_8029FAB4
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051BD68@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029FAD0

lbl_8029FAB4:
	lfs      f0, lbl_8051BD58@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8029FAEC

lbl_8029FAD0:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_8029FAEC:
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_8029FB30
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029FB6C

lbl_8029FB30:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8029FB6C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8029FB6C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029FB6C:
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
 * @note Address: 0x8029FB8C
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8029FB90
 * @note Size: 0x30
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x8029FBC0
 * @note Size: 0x530
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	if (!hanachirashi->isFinishMotion()) {
		Creature* target = hanachirashi->mTargetCreature;
		if (target) {
			Vector3f homePos         = hanachirashi->mHomePosition; // f28, f27
			Vector3f hanachirashiPos = hanachirashi->getPosition(); // f26, f25
			Vector3f targetPos       = target->getPosition();       //

			Vector3f sep(hanachirashiPos.x - targetPos.x, 0.0f, hanachirashiPos.z - targetPos.z);
			sep.normalise();
			sep *= CG_GENERALPARMS(hanachirashi).mMaxAttackRange();
			Vector3f newPos = targetPos + sep;                                                            // f24, f23
			f32 angle       = JMAAtan2Radian(newPos.x - hanachirashiPos.x, newPos.z - hanachirashiPos.z); // f29

			hanachirashi->turnToTarget(target, CG_GENERALPARMS(hanachirashi).mTurnSpeed(), CG_GENERALPARMS(hanachirashi).mMaxTurnAngle());

			if (sqrDistanceXZ(hanachirashiPos, newPos) > 225.0f) {
				f32 x = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * sinf(angle);
				f32 y = hanachirashi->getTargetVelocity().y;
				f32 z = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * cosf(angle);

				hanachirashi->mTargetVelocity = Vector3f(x, y, z);
			} else {
				hanachirashi->mTargetVelocity = Vector3f(0.0f);
			}

			if (sqrDistanceXZ(hanachirashiPos, homePos) > SQUARE(CG_GENERALPARMS(hanachirashi).mTerritoryRadius())) {
				transit(hanachirashi, HANACHIRASHI_ChaseInside, nullptr);
			} else if (hanachirashi->isTargetLost()) {
				Piki* piki = hanachirashi->getSearchedPikmin();
				if (piki) {
					hanachirashi->mTargetCreature = piki;
				} else {
					transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
				}
			}
		}

		Creature* attackTarget = hanachirashi->isAttackable();
		if (attackTarget) {
			hanachirashi->mTargetCreature = attackTarget;
			hanachirashi->mTargetVelocity = Vector3f(0.0f);
			hanachirashi->finishMotion();
		}
	}

	StateID nextState = hanachirashi->getFlyingNextState();

	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		if (hanachirashi->mTargetCreature) {
			transit(hanachirashi, HANACHIRASHI_Attack, nullptr);
		} else {
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
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
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029FFE8
	lwz      r29, 0x230(r31)
	cmplwi   r29, 0
	beq      lbl_8029FFBC
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
	lfs      f1, lbl_8051BD58@sda21(r2)
	fsubs    f4, f25, f6
	fmadds   f0, f3, f3, f1
	fmuls    f2, f4, f4
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8029FCCC
	ble      lbl_8029FCD0
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8029FCD0

lbl_8029FCCC:
	fmr      f2, f1

lbl_8029FCD0:
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8029FCEC
	lfs      f0, lbl_8051BD6C@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8029FCEC:
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
	lfs      f0, lbl_8051BD74@sda21(r2)
	lfs      f1, lbl_8051BD70@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8029FE08
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8029FE04
	fmr      f31, f1
	b        lbl_8029FE08

lbl_8029FE04:
	fneg     f31, f1

lbl_8029FE08:
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
	lfs      f0, lbl_8051BD78@sda21(r2)
	lfs      f2, 0x1fc(r31)
	fmuls    f1, f3, f3
	stfs     f2, 0x1a8(r31)
	fmadds   f1, f4, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8029FF1C
	lfs      f0, lbl_8051BD58@sda21(r2)
	lwz      r4, 0xc0(r31)
	fcmpo    cr0, f29, f0
	lfs      f3, 0x2e4(r4)
	bge      lbl_8029FE8C
	lfs      f0, lbl_8051BD7C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8029FEB0

lbl_8029FE8C:
	lfs      f0, lbl_8051BD80@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8029FEB0:
	lfs      f0, lbl_8051BD58@sda21(r2)
	fmuls    f3, f3, f2
	lfs      f1, 0x1d4(r31)
	lfs      f2, 0x1d8(r31)
	fcmpo    cr0, f29, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bge      lbl_8029FEDC
	fneg     f29, f29

lbl_8029FEDC:
	lfs      f0, lbl_8051BD80@sda21(r2)
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
	b        lbl_8029FF2C

lbl_8029FF1C:
	lfs      f0, lbl_8051BD58@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8029FF2C:
	fsubs    f1, f25, f27
	lwz      r3, 0xc0(r31)
	fsubs    f2, f26, f28
	lfs      f0, 0x35c(r3)
	fmuls    f1, f1, f1
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8029FF74
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029FFBC

lbl_8029FF74:
	mr       r3, r31
	bl       isTargetLost__Q34Game12Hanachirashi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029FFBC
	mr       r3, r31
	bl       getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_8029FF9C
	stw      r3, 0x230(r31)
	b        lbl_8029FFBC

lbl_8029FF9C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029FFBC:
	mr       r3, r31
	bl       isAttackable__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_8029FFE8
	stw      r3, 0x230(r31)
	mr       r3, r31
	lfs      f0, lbl_8051BD58@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029FFE8:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_802A0018
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0084

lbl_802A0018:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A0084
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802A0084
	lwz      r0, 0x230(r31)
	cmplwi   r0, 0
	beq      lbl_802A0064
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0084

lbl_802A0064:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0084:
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
 * @note Address: 0x802A00F0
 * @note Size: 0x24
 */
void StateChase::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802A0114
 * @note Size: 0x124
 */
void StateChaseInside::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	Vector3f homePos  = hanachirashi->mHomePosition;
	if (hanachirashi->mTargetCreature) {
		Vector3f pos = hanachirashi->mTargetCreature->getPosition();
		Vector3f sep = homePos - pos;
		sep.y        = 0.0f;

		sep.normalise();

		sep *= CG_GENERALPARMS(hanachirashi).mSightRadius();
		pos += sep;
		hanachirashi->mTargetPosition = pos;
	} else {
		hanachirashi->mTargetPosition = homePos;
	}

	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->setEmotionExcitement();
}

/**
 * @note Address: 0x802A0238
 * @note Size: 0x37C
 */
void StateChaseInside::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	Vector3f hanachirashiPos = hanachirashi->getPosition();   // f28, f31
	Vector3f targetPos       = hanachirashi->mTargetPosition; // f30, f29
	if (sqrDistanceXZ(hanachirashiPos, targetPos) < 10000.0f) {
		transit(hanachirashi, HANACHIRASHI_Chase, nullptr);
	} else {
		Creature* target = hanachirashi->mTargetCreature;
		if (target) {
			hanachirashi->turnToTarget(target, CG_GENERALPARMS(hanachirashi).mTurnSpeed(), CG_GENERALPARMS(hanachirashi).mMaxTurnAngle());
		}

		f32 angle = JMAAtan2Radian(targetPos.x - hanachirashiPos.x, targetPos.z - hanachirashiPos.z);
		f32 x     = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * sinf(angle);
		f32 y     = hanachirashi->getTargetVelocity().y;
		f32 z     = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * cosf(angle);

		hanachirashi->mTargetVelocity = Vector3f(x, y, z);
	}

	int nextState = hanachirashi->getFlyingNextState();
	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802A05B4
 * @note Size: 0x24
 */
void StateChaseInside::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802A05D8
 * @note Size: 0x90
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->disableEvent(0, EB_Cullable);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Attack, nullptr);
	hanachirashi->mNextState           = HANACHIRASHI_NULL;
	hanachirashi->mIsWindAttackActive  = false;
	hanachirashi->mCurrentAttackRadius = 0.0f;
	hanachirashi->createSuckEffect();
}

/**
 * @note Address: 0x802A0668
 * @note Size: 0x11C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();
	if (hanachirashi->mIsWindAttackActive) {
		if (hanachirashi->windTarget()) {
			hanachirashi->mNextState = HANACHIRASHI_Laugh;
		}
	}

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying) {
		if (hanachirashi->mCurAnim->mType == KEYEVENT_2) {
			hanachirashi->mIsWindAttackActive = true;
			hanachirashi->startWindEffect();
		} else if (hanachirashi->mCurAnim->mType == KEYEVENT_END) {
			if (hanachirashi->mNextState >= 0) {
				transit(hanachirashi, hanachirashi->mNextState, nullptr);
				return;
			}
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0784
 * @note Size: 0x54
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->enableEvent(0, EB_Cullable);
	hanachirashi->setEmotionCaution();
	hanachirashi->mIsWindAttackActive  = false;
	hanachirashi->mCurrentAttackRadius = 0.0f;
	hanachirashi->finishWindEffect();
}

/**
 * @note Address: 0x802A07D8
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Fall, nullptr);
}

/**
 * @note Address: 0x802A0840
 * @note Size: 0x1A4
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (hanachirashi->isFlying()) {
		hanachirashi->setHeightVelocity();
	} else {
		Vector3f pos = hanachirashi->getPosition();
		Vector3f vel = hanachirashi->getVelocity();

		f32 fallSpeed = vel.y;

		f32 heightDiff = pos.y - mapMgr->getMinY(pos);
		if (heightDiff < 50.0f || fallSpeed > 0.0f) {
			hanachirashi->finishMotion();
		}

		hanachirashi->addShadowOffset();
	}

	if (hanachirashi->mAirWaitTime > 0.75f) {
		hanachirashi->disableEvent(0, EB_Untargetable);
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Land, nullptr);
	}
}

/**
 * @note Address: 0x802A09E4
 * @note Size: 0x38
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setShadowOffsetMax();
	hanachirashi->setEmotionCaution();
}

/**
 * @note Address: 0x802A0A1C
 * @note Size: 0x70
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Land, nullptr);
	hanachirashi->createDownEffect();
}

/**
 * @note Address: 0x802A0A8C
 * @note Size: 0x80
 */
void StateLand::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, HANACHIRASHI_Ground, nullptr);
	}
}

/**
 * @note Address: 0x802A0B0C
 * @note Size: 0x24
 */
void StateLand::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802A0B30
 * @note Size: 0x68
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_WaitGround, nullptr);
}

/**
 * @note Address: 0x802A0B98
 * @note Size: 0x114
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (hanachirashi->mStuckPikminCount == 0 || hanachirashi->mAirWaitTime > CG_PROPERPARMS(hanachirashi).mGroundWaitTime.mValue) {
		hanachirashi->finishMotion();
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		if (hanachirashi->mStuckPikminCount) {
			transit(hanachirashi, HANACHIRASHI_GroundFlick, nullptr);
		} else {
			transit(hanachirashi, HANACHIRASHI_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0CAC
 * @note Size: 0x24
 */
void StateGround::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802A0CD0
 * @note Size: 0x64
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x802A0D34
 * @note Size: 0xEC
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (hanachirashi->isFlying()) {
		hanachirashi->setHeightVelocity();
		hanachirashi->subShadowOffset();
	}

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying) {
		if (hanachirashi->mCurAnim->mType == KEYEVENT_2) {
			hanachirashi->enableEvent(0, EB_Untargetable);
		} else if (hanachirashi->mCurAnim->mType == KEYEVENT_END) {
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0E20
 * @note Size: 0x38
 */
void StateTakeOff::cleanup(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->resetShadowOffset();
	hanachirashi->setEmotionCaution();
}

/**
 * @note Address: 0x802A0E58
 * @note Size: 0x64
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_FlickFly, nullptr);
}

/**
 * @note Address: 0x802A0EBC
 * @note Size: 0xE4
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying) {
		if (hanachirashi->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(hanachirashi, CG_GENERALPARMS(hanachirashi).mShakeChance.mValue,
			                            CG_GENERALPARMS(hanachirashi).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(hanachirashi).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			hanachirashi->mFlickTimer = 0.0f;

		} else if (hanachirashi->mCurAnim->mType == KEYEVENT_END) {
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0FA0
 * @note Size: 0x24
 */
void StateFlyFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802A0FC4
 * @note Size: 0x64
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_FlickGround, nullptr);
}

/**
 * @note Address: 0x802A1028
 * @note Size: 0x100
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, HANACHIRASHI_Dead, nullptr);
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
			transit(enemy, HANACHIRASHI_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A1128
 * @note Size: 0x24
 */
void StateGroundFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802A114C
 * @note Size: 0x68
 */
void StateLaugh::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Laugh, nullptr);
}

/**
 * @note Address: 0x802A11B4
 * @note Size: 0xDC
 */
void StateLaugh::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();
	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		int nextState = hanachirashi->getFlyingNextState();
		if (nextState >= 0) {
			transit(hanachirashi, nextState, nullptr);
			return;
		}

		if (hanachirashi->isAttackable()) {
			transit(hanachirashi, HANACHIRASHI_Attack, nullptr);
			return;
		}

		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802A1290
 * @note Size: 0x24
 */
void StateLaugh::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }
} // namespace Hanachirashi
} // namespace Game
