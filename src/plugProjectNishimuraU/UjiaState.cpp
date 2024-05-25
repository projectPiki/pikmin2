#include "Game/Entities/Ujia.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Ujia {

/**
 * @note Address: 0x80264720
 * @note Size: 0x3D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(UJIA_StateCount);

	registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDive);
	registerState(new StateMove);
	registerState(new StateMoveSide);
	registerState(new StateMoveCentre);
	registerState(new StateMoveTop);
	registerState(new StateGoHome);
	registerState(new StateAttack1);
}

/**
 * @note Address: 0x80264AF0
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIAANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80264B4C
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80264B90
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80264B94
 * @note Size: 0x64
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIAANIM_PressDead, nullptr);
}

/**
 * @note Address: 0x80264BF8
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80264C3C
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80264C40
 * @note Size: 0xBC
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->resetAppearCheck();
	uji->setAtari(false);
	uji->enableEvent(0, EB_Invulnerable);
	uji->mIsUnderground = true;
	uji->enableEvent(0, EB_BitterImmune);
	uji->hardConstraintOn();
	uji->disableEvent(0, EB_LifegaugeVisible);
	uji->disableEvent(0, EB_Animating);
	uji->enableEvent(0, EB_ModelHidden);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIAANIM_Appear, nullptr);
	uji->stopMotion();
}

/**
 * @note Address: 0x80264CFC
 * @note Size: 0xD4
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setBridgeSearch();
	if (uji->isBreakBridge()) {
		transit(uji, UJIA_Appear, nullptr);
		return;
	}

	Creature* target = EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue,
	                                                     CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr, nullptr, nullptr);
	if (target && uji->isAppearCheck()) {
		uji->mTargetCreature = target;
		transit(uji, UJIA_Appear, nullptr);
	}
}

/**
 * @note Address: 0x80264DD0
 * @note Size: 0x84
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setAtari(true);
	uji->disableEvent(0, EB_Invulnerable);
	uji->mIsUnderground = false;
	uji->disableEvent(0, EB_BitterImmune);
	uji->hardConstraintOff();
	uji->enableEvent(0, EB_Animating);
	uji->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x80264E54
 * @note Size: 0x80
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->lifeIncrement();
	uji->hardConstraintOn();
	uji->enableEvent(0, EB_NoInterrupt);
	uji->enableEvent(0, EB_LifegaugeVisible);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->setEmotionExcitement();
	uji->startMotion(UJIAANIM_Appear, nullptr);
	uji->createAppearEffect();
}

/**
 * @note Address: 0x80264ED4
 * @note Size: 0xDC
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		if (uji->mHealth <= 0.0f) {
			transit(uji, UJIA_Dead, nullptr);
			return;
		}

		if (uji->isBreakBridge()) {
			transit(uji, uji->checkBreakOrMove(), nullptr);
			return;
		}

		transit(uji, UJIA_Move, nullptr);
	}
}

/**
 * @note Address: 0x80264FB0
 * @note Size: 0x3C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x80264FEC
 * @note Size: 0x6C
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->hardConstraintOn();
	uji->enableEvent(0, EB_BitterImmune);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->setEmotionCaution();
	uji->startMotion(UJIAANIM_Dive, nullptr);
	uji->createDisAppearEffect();
}

/**
 * @note Address: 0x80265058
 * @note Size: 0x50
 */
void StateDive::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, UJIA_Stay, nullptr);
	}
}

/**
 * @note Address: 0x802650A8
 * @note Size: 0x3C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x802650E4
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIA_NULL;
	uji->startMotion(UJIAANIM_Move, nullptr);
}

/**
 * @note Address: 0x80265118
 * @note Size: 0x4C8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->isBreakBridge()) {
		uji->mNextState = (StateID)uji->checkBreakOrMove();
		uji->finishMotion();

	} else {
		Creature* target = uji->mTargetCreature;
		if (target && target->isAlive()) {
			f32 rotSpeed = CG_GENERALPARMS(uji).mMaxTurnAngle();
			f32 rotAccel = CG_GENERALPARMS(uji).mTurnSpeed();

			Vector3f ujiPos    = uji->getPosition();
			Vector3f targetPos = target->getPosition();

			f32 angBetween = roundAng(JMAAtan2Radian(ujiPos.x - targetPos.x, ujiPos.z - targetPos.z));
			f32 angleDist  = angDist(angBetween, uji->getFaceDir());

			f32 limit     = TORADIANS(rotSpeed);
			f32 turnSpeed = angleDist * rotAccel;
			if (absF(turnSpeed) > limit) {
				turnSpeed = (turnSpeed > 0.0f) ? limit : -limit;
			}

			uji->mFaceDir    = roundAng(turnSpeed + uji->getFaceDir());
			uji->mRotation.y = uji->mFaceDir;
			// uji->turnToTarget(target, CG_GENERALPARMS(uji).mTurnSpeed.mValue,
			// CG_GENERALPARMS(uji).mMaxTurnAngle.mValue); uji->changeFaceDir(target);
			f32 speed = CG_GENERALPARMS(uji).mMoveSpeed.mValue;

			f32 sinTheta = sinf_kludge(uji->getFaceDir());
			f32 y        = uji->getTargetVelocity().y;
			f32 cosTheta = cosf_kludge(uji->getFaceDir());

			uji->mTargetVelocity = Vector3f(speed * sinTheta, y, speed * cosTheta);

			if (uji->isTargetWithinRange(target, angleDist, CG_GENERALPARMS(uji).mPrivateRadius(), CG_GENERALPARMS(uji).mSightRadius(),
			                             CG_GENERALPARMS(uji).mFov(), uji->mFaceDir)) {
				uji->mTargetCreature = nullptr;
			} else {
				Vector3f deltaPosition = uji->getPosition() - uji->mHomePosition;
				f32 distance           = deltaPosition.length();
				f32 radius             = CG_GENERALPARMS(uji).mTerritoryRadius();
				if (distance > radius) {
					uji->mTargetCreature = nullptr;
				}
			}

		} else {
			uji->mNextState = UJIA_GoHome;
			uji->finishMotion();
		}
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIA_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stfd     f25, 0x90(r1)
	psq_st   f25, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       isBreakBridge__Q34Game4Ujia3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80265198
	mr       r3, r31
	bl       checkBreakOrMove__Q34Game4Ujia3ObjFv
	stw      r3, 0x2c4(r31)
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80265510

lbl_80265198:
	lwz      r29, 0x230(r31)
	cmplwi   r29, 0
	beq      lbl_80265500
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80265500
	mr       r4, r29
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r29)
	addi     r3, r1, 8
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f25, 8(r1)
	lwz      r12, 8(r12)
	lfs      f26, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f25, f1
	fsubs    f2, f26, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051AE58@sda21(r2)
	lfs      f1, lbl_8051AE54@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f25, f31, f29
	fmuls    f1, f1, f0
	fabs     f0, f25
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80265288
	lfs      f0, lbl_8051AE50@sda21(r2)
	fcmpo    cr0, f25, f0
	ble      lbl_80265284
	fmr      f25, f1
	b        lbl_80265288

lbl_80265284:
	fneg     f25, f1

lbl_80265288:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f25, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f25, f1
	lfs      f29, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x74(r1)
	stfs     f29, 0x78(r1)
	stfs     f0, 0x7c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f25
	mr       r4, r31
	frsp     f1, f1
	addi     r3, r1, 0x38
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f29, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x3d4(r5)
	lfs      f25, 0x3fc(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x2c
	lwz      r12, 0(r29)
	lfs      f29, 0x38(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x2c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x50
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x44
	lwz      r12, 0(r29)
	lfs      f29, 0x54(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x48(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x68
	fsubs    f28, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x5c
	lwz      r12, 0(r29)
	lfs      f29, 0x70(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x64(r1)
	fmuls    f26, f26, f26
	fmuls    f1, f30, f30
	li       r3, 1
	fsubs    f0, f0, f29
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_8026542C
	fcmpo    cr0, f0, f1
	mr       r0, r4
	ble      lbl_80265420
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f25
	bge      lbl_80265420
	mr       r0, r3

lbl_80265420:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8026542C
	li       r4, 1

lbl_8026542C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80265464
	lfs      f0, lbl_8051AE58@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051AE54@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80265464
	li       r3, 0

lbl_80265464:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80265478
	li       r0, 0
	stw      r0, 0x230(r31)
	b        lbl_80265510

lbl_80265478:
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f25, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f26, 0x19c(r31)
	lfs      f27, 0x1a0(r31)
	mtctr    r12
	bctrl
	lfs      f0, 0x24(r1)
	lfs      f2, 0x20(r1)
	fsubs    f3, f0, f26
	lfs      f1, 0x28(r1)
	fsubs    f2, f2, f25
	lfs      f0, lbl_8051AE50@sda21(r2)
	fsubs    f1, f1, f27
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802654E0
	ble      lbl_802654E4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802654E4

lbl_802654E0:
	fmr      f1, f0

lbl_802654E4:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x35c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80265510
	li       r0, 0
	stw      r0, 0x230(r31)
	b        lbl_80265510

lbl_80265500:
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80265510:
	mr       r3, r31
	bl       setInWaterDamage__Q34Game4Ujia3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051AE50@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80265550
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8026558C

lbl_80265550:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8026558C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8026558C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8026558C:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	psq_l    f25, 152(r1), 0, qr0
	lfd      f25, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r0, 0x104(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x802655E0
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802655E4
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIA_NULL;
	uji->startMotion(UJIAANIM_Move, nullptr);
}

/**
 * @note Address: 0x80265618
 * @note Size: 0xF4
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->isBreakBridge()) {
		if (uji->moveBridgeSide()) {
			uji->mNextState = UJIA_MoveCentre;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIA_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIA_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8026570C
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80265710
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIA_NULL;
	uji->startMotion(UJIAANIM_Move, nullptr);
}

/**
 * @note Address: 0x80265744
 * @note Size: 0xF4
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->isBreakBridge()) {
		if (uji->moveBridgeCentre()) {
			uji->mNextState = UJIA_MoveTop;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIA_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIA_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80265838
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8026583C
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIA_NULL;
	uji->startMotion(UJIAANIM_Move, nullptr);
}

/**
 * @note Address: 0x80265870
 * @note Size: 0xF4
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->isBreakBridge()) {
		if (uji->moveBridgeTop()) {
			uji->mNextState = UJIA_Attack1;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIA_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIA_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80265964
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80265968
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIA_NULL;
	uji->startMotion(UJIAANIM_Move, nullptr);
}

/**
 * @note Address: 0x8026599C
 * @note Size: 0x198
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* uji         = OBJ(enemy);
	Vector3f homePos = Vector3f(uji->mHomePosition);
	EnemyFunc::walkToTarget(uji, homePos, CG_GENERALPARMS(uji).mMoveSpeed.mValue, CG_GENERALPARMS(uji).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(uji).mMaxTurnAngle.mValue);

	Vector3f homePos2 = uji->mHomePosition;
	Vector3f position = uji->getPosition();
	Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

	if (_length2(diff) < CG_GENERALPARMS(uji).mHomeRadius.mValue) {
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIA_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, UJIA_Dive, nullptr);
	}
}

/**
 * @note Address: 0x80265B34
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80265B38
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji             = OBJ(enemy);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIAANIM_Attack1, nullptr);
	uji->mNextState = UJIA_NULL;
	uji->createBridgeEffect();
}

/**
 * @note Address: 0x80265B90
 * @note Size: 0x10C
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->isBreakBridge()) {
		if (uji->moveBridgeTop()) {
			uji->mNextState = UJIA_Attack1;
		} else {
			uji->mNextState = UJIA_MoveTop;
		}
	} else {
		uji->mNextState = UJIA_GoHome;
	}

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIA_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying) {
		if (uji->mCurAnim->mType == KEYEVENT_2) {
			if (uji->isBreakBridge()) {
				uji->breakTargetBridge();
			}

		} else if (uji->mCurAnim->mType == KEYEVENT_END) {
			transit(uji, uji->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80265C9C
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy) { }

} // namespace Ujia
} // namespace Game
