#include "Game/Entities/Tobi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Tobi {

/**
 * @note Address: 0x8026759C
 * @note Size: 0x4CC
 */
void FSM::init(EnemyBase* enemy)
{
	create(TOBI_StateCount);

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
	registerState(new StateFly);
	registerState(new StateAttack1);
	registerState(new StateAttack2);
	registerState(new StateEat);
}

/**
 * @note Address: 0x80267A68
 * @note Size: 0x70
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TOBIANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80267AD8
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80267B1C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80267B20
 * @note Size: 0x70
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TOBIANIM_PressDead, nullptr);
}

/**
 * @note Address: 0x80267B90
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80267BD4
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80267BD8
 * @note Size: 0xBC
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->resetAppearCheck();
	tobi->setAtari(false);
	tobi->enableEvent(0, EB_Invulnerable);
	tobi->mIsUnderground = true;
	tobi->enableEvent(0, EB_BitterImmune);
	tobi->hardConstraintOn();
	tobi->disableEvent(0, EB_LifegaugeVisible);
	tobi->disableEvent(0, EB_Animating);
	tobi->enableEvent(0, EB_ModelHidden);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Appear, nullptr);
	tobi->stopMotion();
}

/**
 * @note Address: 0x80267C94
 * @note Size: 0xB0
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setBridgeSearch();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue,
	                                                     CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr, nullptr, nullptr);
	if ((target || tobi->isBreakBridge()) && tobi->isAppearCheck()) {
		tobi->mTargetCreature = target;
		transit(tobi, TOBI_Appear, nullptr);
	}
}

/**
 * @note Address: 0x80267D44
 * @note Size: 0x84
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setAtari(true);
	tobi->disableEvent(0, EB_Invulnerable);
	tobi->mIsUnderground = false;
	tobi->disableEvent(0, EB_BitterImmune);
	tobi->hardConstraintOff();
	tobi->enableEvent(0, EB_Animating);
	tobi->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x80267DC8
 * @note Size: 0x80
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->lifeIncrement();
	tobi->hardConstraintOn();
	tobi->enableEvent(0, EB_NoInterrupt);
	tobi->enableEvent(0, EB_LifegaugeVisible);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->setEmotionExcitement();
	tobi->startMotion(TOBIANIM_Appear, nullptr);
	tobi->createAppearEffect();
}

/**
 * @note Address: 0x80267E48
 * @note Size: 0x80
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		if (tobi->mHealth <= 0.0f) {
			transit(tobi, TOBI_Dead, nullptr);
			return;
		}

		transit(tobi, TOBI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80267EC8
 * @note Size: 0x3C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x80267F04
 * @note Size: 0x6C
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->hardConstraintOn();
	tobi->enableEvent(0, EB_BitterImmune);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->setEmotionCaution();
	tobi->startMotion(TOBIANIM_Dive, nullptr);
	tobi->createDisAppearEffect();
}

/**
 * @note Address: 0x80267F70
 * @note Size: 0x50
 */
void StateDive::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, TOBI_Stay, nullptr);
	}
}

/**
 * @note Address: 0x80267FC0
 * @note Size: 0x3C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x80267FFC
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80268030
 * @note Size: 0x4E8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* tobi        = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle(), CG_GENERALPARMS(tobi).mSightRadius(),
	                                                     nullptr, nullptr, nullptr);
	if (target) {
		tobi->mTargetCreature = target;
		f32 angleDist         = tobi->changeFaceDir2(target);
		f32 x, y, z;
		f32 speed = CG_GENERALPARMS(tobi).mMoveSpeed();
		x         = (f32)sin(tobi->getFaceDir());
		y         = tobi->getTargetVelocity().y;
		z         = (f32)cos(tobi->getFaceDir());

		tobi->mTargetVelocity = Vector3f(speed * x, y, speed * z);

		if (tobi->isTargetAttackable(target, angleDist, CG_GENERALPARMS(tobi).mMaxAttackRange(), CG_GENERALPARMS(tobi).mMaxAttackAngle())) {
			tobi->mNextState = TOBI_Attack2;
			tobi->finishMotion();
		} else {
			Vector3f homePos = tobi->mHomePosition;
			Vector3f tobiPos = tobi->getPosition();

			f32 dist = tobiPos.distance(homePos);

			if (dist > CG_GENERALPARMS(tobi).mTerritoryRadius()) {
				tobi->mNextState = TOBI_GoHome;
				tobi->finishMotion();
			} else {
				Creature* newTarget = EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mMaxAttackAngle(),
				                                                        CG_GENERALPARMS(tobi).mMaxAttackRange(), nullptr, nullptr, nullptr);
				if (newTarget) {
					tobi->mNextState = TOBI_Attack2;
					tobi->finishMotion();
				}
			}
		}
	} else if (tobi->isBreakBridge()) {
		tobi->mNextState = (Tobi::StateID)tobi->checkBreakOrMove();
		tobi->finishMotion();
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
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
	beq      lbl_802683F4
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
	lfs      f0, lbl_8051AF38@sda21(r2)
	lfs      f1, lbl_8051AF34@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80268178
	lfs      f0, lbl_8051AF30@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_80268174
	fmr      f28, f1
	b        lbl_80268178

lbl_80268174:
	fneg     f28, f1

lbl_80268178:
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
	bge      lbl_80268310
	lfs      f0, lbl_8051AF38@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051AF34@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80268310
	li       r29, 1

lbl_80268310:
	clrlwi.  r0, r29, 0x18
	beq      lbl_8026832C
	li       r0, 0xc
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8026842C

lbl_8026832C:
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
	lfs      f0, lbl_8051AF30@sda21(r2)
	fsubs    f1, f1, f28
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80268394
	ble      lbl_80268398
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80268398

lbl_80268394:
	fmr      f1, f0

lbl_80268398:
	lwz      r4, 0xc0(r31)
	lfs      f0, 0x35c(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802683BC
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8026842C

lbl_802683BC:
	lfs      f1, 0x58c(r4)
	mr       r3, r31
	lfs      f2, 0x564(r4)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_8026842C
	li       r0, 0xc
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8026842C

lbl_802683F4:
	mr       r3, r31
	bl       isBreakBridge__Q34Game4Tobi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026841C
	mr       r3, r31
	bl       checkBreakOrMove__Q34Game4Tobi3ObjFv
	stw      r3, 0x2c4(r31)
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8026842C

lbl_8026841C:
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8026842C:
	mr       r3, r31
	bl       isFlyingLife__Q34Game4Tobi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026844C
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8026844C:
	mr       r3, r31
	bl       setInWaterDamage__Q34Game4Tobi3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051AF30@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8026848C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802684C8

lbl_8026848C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802684C8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802684C8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802684C8:
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
 * @note Address: 0x80268518
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8026851C
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80268550
 * @note Size: 0x150
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
		tobi->finishMotion();
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeSide()) {
			tobi->mNextState = TOBI_MoveCentre;
			tobi->finishMotion();
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802686A0
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802686A4
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x802686D8
 * @note Size: 0x150
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
		tobi->finishMotion();
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeCentre()) {
			tobi->mNextState = TOBI_MoveTop;
			tobi->finishMotion();
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80268828
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8026882C
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80268860
 * @note Size: 0x150
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
		tobi->finishMotion();
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeTop()) {
			tobi->mNextState = TOBI_Attack1;
			tobi->finishMotion();
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802689B0
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802689B4
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x802689E8
 * @note Size: 0x1FC
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* tobi        = OBJ(enemy);
	Vector3f homePos = Vector3f(tobi->mHomePosition);
	EnemyFunc::walkToTarget(tobi, homePos, CG_GENERALPARMS(tobi).mMoveSpeed.mValue, CG_GENERALPARMS(tobi).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(tobi).mMaxTurnAngle.mValue);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mMaxAttackRange.mValue, CG_GENERALPARMS(tobi).mMaxAttackAngle.mValue,
	                                      nullptr, nullptr, nullptr)) {
		tobi->mNextState = TOBI_Attack2;
		tobi->finishMotion();
	} else {
		Vector3f homePos2 = tobi->mHomePosition;
		Vector3f position = tobi->getPosition();
		Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

		if (_length2(diff) < CG_GENERALPARMS(tobi).mHomeRadius.mValue) {
			tobi->mNextState = TOBI_Dive;
			tobi->finishMotion();
		}
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80268BE4
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80268BE8
 * @note Size: 0x94
 */
void StateFly::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi             = OBJ(enemy);
	tobi->mTargetPosition = Vector3f(tobi->getPosition());
	tobi->randomFlyingTarget();
	tobi->enableEvent(0, EB_Invulnerable);
	tobi->enableEvent(0, EB_Untargetable);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Fly, nullptr);
}

/**
 * @note Address: 0x80268C7C
 * @note Size: 0x130
 */
void StateFly::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->randomFlyingTarget();
	Vector3f targetPos = Vector3f(tobi->mTargetPosition);
	EnemyFunc::walkToTarget(tobi, targetPos, CG_GENERALPARMS(tobi).mMoveSpeed.mValue, CG_GENERALPARMS(tobi).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(tobi).mMaxTurnAngle.mValue);

	if (tobi->mHealth / CG_GENERALPARMS(tobi).mHealth.mValue > CG_PROPERPARMS(tobi).mLandHealthRatio.mValue) {
		tobi->disableEvent(0, EB_Untargetable);
		tobi->finishMotion();

		Vector3f vel = tobi->getVelocity();
		vel.y *= 0.5f;
		tobi->setVelocity(vel);
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, TOBI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80268DAC
 * @note Size: 0x1C
 */
void StateFly::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_Untargetable);
	enemy->disableEvent(0, EB_Invulnerable);
}

/**
 * @note Address: 0x80268DC8
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi             = OBJ(enemy);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Attack1, nullptr);
	tobi->mNextState = TOBI_NULL;
	tobi->createBridgeEffect();
}

/**
 * @note Address: 0x80268E20
 * @note Size: 0x158
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeTop()) {
			tobi->mNextState = TOBI_Attack1;
		} else {
			tobi->mNextState = TOBI_MoveTop;
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
	}

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying) {
		if (tobi->mCurAnim->mType == KEYEVENT_2) {
			if (tobi->isBreakBridge()) {
				tobi->breakTargetBridge();
			}

		} else if (tobi->mCurAnim->mType == KEYEVENT_END) {
			transit(tobi, tobi->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80268F78
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80268F7C
 * @note Size: 0x48
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->disableEvent(0, EB_NoInterrupt);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Attack2, nullptr);
}

/**
 * @note Address: 0x80268FC4
 * @note Size: 0x218
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setInWaterDamage();

	if (tobi->mCurAnim->mIsPlaying) {
		if (tobi->mCurAnim->mType == KEYEVENT_2) {
			tobi->enableEvent(0, EB_NoInterrupt);

		} else if (tobi->mCurAnim->mType == KEYEVENT_3) {
			tobi->disableEvent(0, EB_NoInterrupt);

		} else if (tobi->mCurAnim->mType == KEYEVENT_4) {
			EnemyFunc::attackNavi(tobi, CG_GENERALPARMS(tobi).mAttackRadius.mValue, CG_GENERALPARMS(tobi).mAttackHitAngle.mValue,
			                      CG_GENERALPARMS(tobi).mAttackDamage.mValue, nullptr, nullptr);
			EnemyFunc::eatPikmin(tobi, nullptr);

		} else if (tobi->mCurAnim->mType == KEYEVENT_END) {
			if (tobi->mHealth <= 0.0f) {
				transit(tobi, TOBI_Dead, nullptr);
				return;
			}

			if (tobi->mStuckPikminCount) {
				transit(tobi, TOBI_Eat, nullptr);
				return;
			}

			Vector3f homePos2 = tobi->mHomePosition;
			Vector3f position = tobi->getPosition();
			Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

			if (_length2(diff) > CG_GENERALPARMS(tobi).mTerritoryRadius.mValue) {
				transit(tobi, TOBI_GoHome, nullptr);
				return;
			}

			transit(tobi, TOBI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802691DC
 * @note Size: 0x10
 */
void StateAttack2::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/**
 * @note Address: 0x802691EC
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TOBIANIM_Eat, nullptr);
}

/**
 * @note Address: 0x80269228
 * @note Size: 0x1A8
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying) {
		if (tobi->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::swallowPikmin(tobi, CG_PROPERPARMS(tobi).mPoisonDamage.mValue, nullptr);
			tobi->createEatEffect();

		} else if (tobi->mCurAnim->mType == KEYEVENT_END) {

			Vector3f homePos2 = tobi->mHomePosition;
			Vector3f position = tobi->getPosition();
			Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

			if (_length2(diff) > CG_GENERALPARMS(tobi).mTerritoryRadius.mValue) {
				transit(tobi, TOBI_GoHome, nullptr);
				return;
			}

			transit(tobi, TOBI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802693D0
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy) { }
} // namespace Tobi
} // namespace Game
