#include "Game/Entities/Ujib.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Ujib {

/**
 * @note Address: 0x8025B1A8
 * @note Size: 0x478
 */
void FSM::init(EnemyBase* enemy)
{
	create(UJIB_StateCount);

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
	registerState(new StateAttack2);
	registerState(new StateEat);
}

/**
 * @note Address: 0x8025B620
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIBANIM_Dead, nullptr);
}

/**
 * @note Address: 0x8025B67C
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8025B6C0
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025B6C4
 * @note Size: 0x64
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIBANIM_PressDead, nullptr);
}

/**
 * @note Address: 0x8025B728
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8025B76C
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025B770
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
	uji->startMotion(UJIBANIM_Appear, nullptr);
	uji->stopMotion();
}

/**
 * @note Address: 0x8025B82C
 * @note Size: 0xB0
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setBridgeSearch();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue,
	                                                     CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr, nullptr, nullptr);
	if ((target || uji->isBreakBridge()) && uji->isAppearCheck()) {
		uji->mTargetCreature = target;
		transit(uji, UJIB_Appear, nullptr);
	}
}

/**
 * @note Address: 0x8025B8DC
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
 * @note Address: 0x8025B960
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
	uji->startMotion(UJIBANIM_Appear, nullptr);
	uji->createAppearEffect();
}

/**
 * @note Address: 0x8025B9E0
 * @note Size: 0x80
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		if (uji->mHealth <= 0.0f) {
			transit(uji, UJIB_Dead, nullptr);
			return;
		}

		transit(uji, UJIB_Move, nullptr);
	}
}

/**
 * @note Address: 0x8025BA60
 * @note Size: 0x3C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x8025BA9C
 * @note Size: 0x6C
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->hardConstraintOn();
	uji->enableEvent(0, EB_BitterImmune);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->setEmotionCaution();
	uji->startMotion(UJIBANIM_Dive, nullptr);
	uji->createDisAppearEffect();
}

/**
 * @note Address: 0x8025BB08
 * @note Size: 0x50
 */
void StateDive::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, UJIB_Stay, nullptr);
	}
}

/**
 * @note Address: 0x8025BB58
 * @note Size: 0x3C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x8025BB94
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025BBC8
 * @note Size: 0x4C8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* uji         = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue,
	                                                     CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr, nullptr, nullptr);

	if (target) {
		uji->mTargetCreature = target;
		// Creature* target = uji->mTargetCreature;
		// if (target && target->isAlive()) {
		f32 rotSpeed = CG_GENERALPARMS(uji).mMaxTurnAngle();
		f32 rotAccel = CG_GENERALPARMS(uji).mTurnSpeed();

		Vector3f ujiPos    = uji->getPosition();
		Vector3f targetPos = target->getPosition();

		f32 angBetween = roundAng(JMAAtan2Radian(ujiPos.x - targetPos.x, ujiPos.z - targetPos.z));
		f32 angleDist  = angDist(angBetween, uji->getFaceDir());

		f32 limit     = PI * (DEG2RAD * rotSpeed);
		f32 turnSpeed = angleDist * rotAccel;
		if (FABS(turnSpeed) > limit) {
			turnSpeed = (turnSpeed > 0.0f) ? limit : -limit;
		}

		uji->mFaceDir    = roundAng(turnSpeed + uji->getFaceDir());
		uji->mRotation.y = uji->mFaceDir;
		// uji->turnToTarget(target, CG_GENERALPARMS(uji).mTurnSpeed.mValue, CG_GENERALPARMS(uji).mMaxTurnAngle.mValue);
		// uji->changeFaceDir(target);
		f32 speed = CG_GENERALPARMS(uji).mMoveSpeed.mValue;

		f32 sinTheta = (f32)sin(uji->getFaceDir());
		f32 y        = uji->getTargetVelocity().y;
		f32 cosTheta = (f32)cos(uji->getFaceDir());

		uji->mTargetVelocity = Vector3f(speed * sinTheta, y, speed * cosTheta);

		f32 sightRad  = CG_GENERALPARMS(uji).mSightRadius(); // f30
		f32 fov       = CG_GENERALPARMS(uji).mFov();         // f25
		f32 viewAngle = CG_GENERALPARMS(uji).mViewAngle();   // f26

		f32 xDiff = target->getPosition().x - uji->getPosition().x;
		f32 yDiff = target->getPosition().y - uji->getPosition().y;
		f32 zDiff = target->getPosition().z - uji->getPosition().z;

		f32 rad1    = SQUARE(viewAngle);
		f32 rad2    = SQUARE(sightRad);
		f32 sqrDiff = SQUARE(xDiff) + SQUARE(yDiff) + SQUARE(zDiff);
		bool check0 = true;
		bool check1 = false;
		bool check2;
		if (sqrDiff > rad1) {
			check2 = false;
			if (sqrDiff > rad2) {
				if (FABS(yDiff) < fov) {
					check2 = true;
				}
			}
			if (check2) {
				check1 = true;
			}
		}

		if (!check1) {
			if (!(FABS(angleDist) <= PI * (DEG2RAD * sightRad))) {
				check0 = false;
			}
		}
		if (check0) {
			uji->mTargetCreature = nullptr;
		} else {
			Vector3f diff = uji->getPosition() - uji->mHomePosition;
			f32 len       = diff.length();
			if (len > CG_GENERALPARMS(uji).mTerritoryRadius()) {
				uji->mTargetCreature = nullptr;
			}
		}

		// } else {
		// 	uji->mNextState = UJIB_GoHome;
		// 	uji->finishMotion();
		// }
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	stw      r28, 0x80(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r7, 0xc0(r31)
	li       r4, 0
	mr       r3, r31
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r28, r3, r3
	beq      lbl_8025BF8C
	stw      r28, 0x230(r31)
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lfs      f26, 0x50(r1)
	lwz      r12, 8(r12)
	lfs      f27, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f26, f1
	fsubs    f2, f27, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051ABF4@sda21(r2)
	lfs      f1, lbl_8051ABF0@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8025BD10
	lfs      f0, lbl_8051ABEC@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8025BD0C
	fmr      f28, f1
	b        lbl_8025BD10

lbl_8025BD0C:
	fneg     f28, f1

lbl_8025BD10:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f29, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f30, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x74(r1)
	stfs     f30, 0x78(r1)
	stfs     f0, 0x7c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f26
	mr       r4, r31
	frsp     f1, f1
	addi     r3, r1, 0x14
	li       r29, 0
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f29, f1
	stfs     f30, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f30, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f30, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f30
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8025BEA8
	lfs      f0, lbl_8051ABF4@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051ABF0@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8025BEA8
	li       r29, 1

lbl_8025BEA8:
	clrlwi.  r0, r29, 0x18
	beq      lbl_8025BEC4
	li       r0, 0xb
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8025BFC4

lbl_8025BEC4:
	mr       r4, r31
	addi     r3, r1, 0x68
	lwz      r12, 0(r31)
	lfs      f26, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x19c(r31)
	lfs      f28, 0x1a0(r31)
	mtctr    r12
	bctrl
	lfs      f0, 0x6c(r1)
	lfs      f2, 0x68(r1)
	fsubs    f3, f0, f27
	lfs      f1, 0x70(r1)
	fsubs    f2, f2, f26
	lfs      f0, lbl_8051ABEC@sda21(r2)
	fsubs    f1, f1, f28
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8025BF2C
	ble      lbl_8025BF30
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8025BF30

lbl_8025BF2C:
	fmr      f1, f0

lbl_8025BF30:
	lwz      r4, 0xc0(r31)
	lfs      f0, 0x35c(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_8025BF54
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8025BFC4

lbl_8025BF54:
	lfs      f1, 0x58c(r4)
	mr       r3, r31
	lfs      f2, 0x564(r4)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_8025BFC4
	li       r0, 0xb
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8025BFC4

lbl_8025BF8C:
	mr       r3, r31
	bl       isBreakBridge__Q34Game4Ujib3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025BFB4
	mr       r3, r31
	bl       checkBreakOrMove__Q34Game4Ujib3ObjFv
	stw      r3, 0x2c4(r31)
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8025BFC4

lbl_8025BFB4:
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8025BFC4:
	mr       r3, r31
	bl       setInWaterDamage__Q34Game4Ujib3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051ABEC@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8025C004
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8025C040

lbl_8025C004:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8025C040
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8025C040
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8025C040:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r0, 0xf4(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x8025C090
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025C094
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C0C8
 * @note Size: 0x130
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
		uji->finishMotion();
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeSide()) {
			uji->mNextState = UJIB_MoveCentre;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIB_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C1F8
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025C1FC
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C230
 * @note Size: 0x130
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
		uji->finishMotion();
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeCentre()) {
			uji->mNextState = UJIB_MoveTop;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIB_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C360
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025C364
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C398
 * @note Size: 0x130
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
		uji->finishMotion();
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeTop()) {
			uji->mNextState = UJIB_Attack1;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIB_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C4C8
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025C4CC
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C500
 * @note Size: 0x1DC
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* uji         = OBJ(enemy);
	Vector3f homePos = Vector3f(uji->mHomePosition);
	EnemyFunc::walkToTarget(uji, homePos, CG_GENERALPARMS(uji).mMoveSpeed.mValue, CG_GENERALPARMS(uji).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(uji).mMaxTurnAngle.mValue);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mMaxAttackRange.mValue, CG_GENERALPARMS(uji).mMaxAttackAngle.mValue,
	                                      nullptr, nullptr, nullptr)) {
		uji->mNextState = UJIB_Attack2;
		uji->finishMotion();
	} else {
		Vector3f homePos2 = uji->mHomePosition;
		Vector3f position = uji->getPosition();
		Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

		if (_length2(diff) < CG_GENERALPARMS(uji).mHomeRadius.mValue) {
			uji->mNextState = UJIB_Dive;
			uji->finishMotion();
		}
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C6DC
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025C6E0
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji             = OBJ(enemy);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIBANIM_Attack1, nullptr);
	uji->mNextState = UJIB_NULL;
	uji->createBridgeEffect();
}

/**
 * @note Address: 0x8025C738
 * @note Size: 0x140
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeTop()) {
			uji->mNextState = UJIB_Attack1;
		} else {
			uji->mNextState = UJIB_MoveTop;
		}
	} else {
		uji->mNextState = UJIB_GoHome;
	}

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
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
 * @note Address: 0x8025C878
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025C87C
 * @note Size: 0x48
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->disableEvent(0, EB_NoInterrupt);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIBANIM_Attack2, nullptr);
}

/**
 * @note Address: 0x8025C8C4
 * @note Size: 0x218
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setInWaterDamage();

	if (uji->mCurAnim->mIsPlaying) {
		if (uji->mCurAnim->mType == KEYEVENT_2) {
			uji->enableEvent(0, EB_NoInterrupt);

		} else if (uji->mCurAnim->mType == KEYEVENT_3) {
			uji->disableEvent(0, EB_NoInterrupt);

		} else if (uji->mCurAnim->mType == KEYEVENT_4) {
			EnemyFunc::attackNavi(uji, CG_GENERALPARMS(uji).mAttackRadius.mValue, CG_GENERALPARMS(uji).mAttackHitAngle.mValue,
			                      CG_GENERALPARMS(uji).mAttackDamage.mValue, nullptr, nullptr);
			EnemyFunc::eatPikmin(uji, nullptr);

		} else if (uji->mCurAnim->mType == KEYEVENT_END) {
			if (uji->mHealth <= 0.0f) {
				transit(uji, UJIB_Dead, nullptr);
				return;
			}

			if (uji->mStuckPikminCount) {
				transit(uji, UJIB_Eat, nullptr);
				return;
			}

			Vector3f homePos2 = uji->mHomePosition;
			Vector3f position = uji->getPosition();
			Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

			if (_length2(diff) > CG_GENERALPARMS(uji).mTerritoryRadius.mValue) {
				transit(uji, UJIB_GoHome, nullptr);
				return;
			}

			transit(uji, UJIB_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025CADC
 * @note Size: 0x10
 */
void StateAttack2::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/**
 * @note Address: 0x8025CAEC
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIBANIM_Eat, nullptr);
}

/**
 * @note Address: 0x8025CB28
 * @note Size: 0x1A8
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying) {
		if (uji->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::swallowPikmin(uji, CG_PROPERPARMS(uji).mPoisonDamage.mValue, nullptr);
			uji->createEatEffect();

		} else if (uji->mCurAnim->mType == KEYEVENT_END) {

			Vector3f homePos2 = uji->mHomePosition;
			Vector3f position = uji->getPosition();
			Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

			if (_length2(diff) > CG_GENERALPARMS(uji).mTerritoryRadius.mValue) {
				transit(uji, UJIB_GoHome, nullptr);
				return;
			}

			transit(uji, UJIB_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025CCD0
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy) { }

} // namespace Ujib
} // namespace Game
