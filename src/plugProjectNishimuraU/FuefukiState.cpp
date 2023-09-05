#include "Game/Entities/Fuefuki.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Fuefuki {

/*
 * --INFO--
 * Address:	8029A63C
 * Size:	000324
 */
void FSM::init(EnemyBase* enemy)
{
	create(FUEFUKI_StateCount);

	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateJump);
	registerState(new StateWait);
	registerState(new StateTurn);
	registerState(new StateWalk);
	registerState(new StateWhisle);
	registerState(new StateStruggle);
}

/*
 * --INFO--
 * Address:	8029A960
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_IsCullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	8029A9BC
 * Size:	000044
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029AA00
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8029AA04
 * Size:	0000A0
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki  = OBJ(enemy);
	fuefuki->_2C0 = 0;
	fuefuki->resetAppearTimer();
	fuefuki->mStateTimer = 0.0f;
	fuefuki->enableEvent(0, EB_IsImmuneBitter);
	fuefuki->disableEvent(0, EB_IsEnemyNotBitter);
	fuefuki->enableEvent(0, EB_IsFlying);
	fuefuki->disableEvent(0, EB_LifegaugeVisible);
	fuefuki->disableEvent(0, EB_IsCullable);
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(1, nullptr);
	fuefuki->stopMotion();
}

/*
 * --INFO--
 * Address:	8029AAA4
 * Size:	00005C
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->mStateTimer += sys->mDeltaTime;
	if (fuefuki->mStateTimer > CG_PROPERPARMS(fuefuki).mAirborneTime.mValue) {
		transit(fuefuki, FUEFUKI_Land, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029AB00
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8029AB04
 * Size:	00018C
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->_2C0        = 0;
	fuefuki->mNextState  = FUEFUKI_Wait;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->resetAppearTimer();
	fuefuki->resetWhisleTimer(true);
	fuefuki->mWhistleTimer += sys->mDeltaTime;
	fuefuki->setTargetPosition(true);
	Vector3f pos = Vector3f(fuefuki->mTargetPosition);
	fuefuki->onSetPosition(pos);
	fuefuki->mFaceDir    = randWeightFloat(TAU);
	fuefuki->mRotation.y = fuefuki->mFaceDir;
	fuefuki->disableEvent(0, EB_IsImmuneBitter);
	fuefuki->enableEvent(0, EB_IsEnemyNotBitter);
	fuefuki->disableEvent(0, EB_IsFlying);
	fuefuki->disableEvent(0, EB_IsCullable);
	fuefuki->mTargetVelocity = Vector3f(0.0f);

	if (randWeightFloat(1.0f) < *CG_PROPERPARMS(fuefuki).mFp31()) {
		fuefuki->startMotion(1, nullptr);
	} else {
		fuefuki->startMotion(2, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029AC90
 * Size:	000124
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	if (fuefuki->isJumpAway()) {
		fuefuki->mNextState = FUEFUKI_Jump;
		fuefuki->finishMotion();
	} else if (fuefuki->isWhisleTimeMax()) {
		fuefuki->mNextState = FUEFUKI_Whisle;
		fuefuki->finishMotion();
	}

	if (fuefuki->mCurAnim->mIsPlaying) {
		if (fuefuki->mCurAnim->mType == KEYEVENT_2) {
			fuefuki->disableEvent(0, EB_IsEnemyNotBitter);
			fuefuki->enableEvent(0, EB_LifegaugeVisible);
			fuefuki->createDownEffect(0.85f);
			if (fuefuki->mWaterBox) {
				fuefuki->createEfxHamon();
			}
		} else if (fuefuki->mCurAnim->mType == KEYEVENT_3) {
			fuefuki->_2C0 = 1;
			fuefuki->enableEvent(0, EB_IsCullable);
		} else if (fuefuki->mCurAnim->mType == KEYEVENT_END) {
			transit(fuefuki, fuefuki->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8029ADB4
 * Size:	000050
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->disableEvent(0, EB_IsImmuneBitter);
	fuefuki->disableEvent(0, EB_IsEnemyNotBitter);
	fuefuki->enableEvent(0, EB_LifegaugeVisible);
	fuefuki->setTargetPosition(false);
}

/*
 * --INFO--
 * Address:	8029AE04
 * Size:	00005C
 */
void StateJump::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->_2C0        = 1;
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->disableEvent(0, EB_IsImmuneBitter);
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(8, nullptr);
}

/*
 * --INFO--
 * Address:	8029AE60
 * Size:	00030C
 */
void StateJump::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	if (fuefuki->_2C0) {
		fuefuki->mTargetVelocity = Vector3f(0.0f);
		if (fuefuki->mHealth <= 0.0f) {
			transit(fuefuki, FUEFUKI_Dead, nullptr);
			return;
		}
	} else {
		// regswap here
		f32 sinTheta = (f32)sin(fuefuki->getFaceDir());
		f32 y        = fuefuki->getTargetVelocity().y;
		f32 cosTheta = (f32)cos(fuefuki->getFaceDir());

		fuefuki->mTargetVelocity = Vector3f(1500.0f * sinTheta, y, 1500.0f * cosTheta);

		EnemyFunc::flickStickPikmin(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeRateMaybe.mValue,
		                            CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue, CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue,
		                            -1000.0f, nullptr);
	}

	if (fuefuki->mStateTimer > CG_PROPERPARMS(fuefuki).mFp22.mValue) {
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying) {
		if (fuefuki->mCurAnim->mType == KEYEVENT_2) {
			fuefuki->enableEvent(0, EB_IsImmuneBitter);
		} else if (fuefuki->mCurAnim->mType == KEYEVENT_3) {
			fuefuki->_2C0 = 0;
			fuefuki->enableEvent(0, EB_IsFlying);
			fuefuki->disableEvent(0, EB_LifegaugeVisible);
			fuefuki->disableEvent(0, EB_IsCullable);

			f32 sinTheta = (f32)sin(fuefuki->getFaceDir());
			f32 y        = fuefuki->getTargetVelocity().y;
			f32 cosTheta = (f32)cos(fuefuki->getFaceDir());

			fuefuki->mTargetVelocity = Vector3f(1500.0f * sinTheta, y, 1500.0f * cosTheta);

			Vector3f targetVel = Vector3f(fuefuki->mTargetVelocity);
			fuefuki->setVelocity(targetVel);

			EnemyFunc::flickNearbyNavi(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeRange.mValue,
			                           CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue, CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue,
			                           -1000.0f, nullptr);
			EnemyFunc::flickNearbyPikmin(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeRange.mValue,
			                             CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue,
			                             CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue, -1000.0f, nullptr);
			EnemyFunc::flickStickPikmin(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeRateMaybe.mValue,
			                            CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue, CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue,
			                            -1000.0f, nullptr);

			fuefuki->mToFlick = 0.0f;
			fuefuki->createDownEffect(0.7f);

			if (fuefuki->mWaterBox) {
				fuefuki->fadeEfxHamon();
			}
		} else if (fuefuki->mCurAnim->mType == KEYEVENT_END) {
			transit(fuefuki, FUEFUKI_Stay, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8029B16C
 * Size:	000010
 */
void StateJump::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_IsImmuneBitter); }

/*
 * --INFO--
 * Address:	8029B17C
 * Size:	000060
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->setEmotionExcitement();
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	8029B1DC
 * Size:	00011C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	if (fuefuki->mStateTimer > 0.0f) {
		fuefuki->mNextState = FUEFUKI_Turn;
		fuefuki->finishMotion();
	}

	if (fuefuki->isWhisleTimeMax()) {
		fuefuki->mNextState = FUEFUKI_Whisle;
		fuefuki->finishMotion();
	}

	if (fuefuki->isJumpAway()) {
		fuefuki->mNextState = FUEFUKI_Jump;
		fuefuki->finishMotion();
	}

	if (fuefuki->mHealth <= 0.0f) {
		fuefuki->mNextState = FUEFUKI_Dead;
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;
	fuefuki->mWhistleTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying && fuefuki->mCurAnim->mType == KEYEVENT_END) {
		transit(fuefuki, fuefuki->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029B2F8
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	8029B31C
 * Size:	000060
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->mStateTimer = 0.0f;
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->setEmotionExcitement();
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(4, nullptr);
}

/*
 * --INFO--
 * Address:	8029B37C
 * Size:	000248
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* fuefuki       = OBJ(enemy);
	Vector3f targetPos = Vector3f(fuefuki->mTargetPosition);

	// this is close.
	f32 angleDist = fuefuki->turnToTarget(targetPos, *CG_PARMS(fuefuki)->mGeneral.mRotationalAccel(),
	                                      *CG_PARMS(fuefuki)->mGeneral.mRotationalSpeed());

	if (FABS(angleDist) <= PI / 6) {
		fuefuki->mNextState = FUEFUKI_Walk;
		fuefuki->finishMotion();
	}

	if (fuefuki->isWhisleTimeMax()) {
		fuefuki->mNextState = FUEFUKI_Whisle;
		fuefuki->finishMotion();
	}

	if (fuefuki->isJumpAway()) {
		fuefuki->mNextState = FUEFUKI_Jump;
		fuefuki->finishMotion();
	}

	if (fuefuki->mHealth <= 0.0f) {
		fuefuki->mNextState = FUEFUKI_Dead;
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;
	fuefuki->mWhistleTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying && fuefuki->mCurAnim->mType == KEYEVENT_END) {
		transit(fuefuki, fuefuki->mNextState, nullptr);
	}
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	lwz      r5, 0xc0(r4)
	mr       r31, r4
	lwz      r12, 8(r12)
	addi     r3, r1, 0x14
	lfs      f31, 0x2dc(r4)
	lfs      f28, 0x2e4(r4)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051BC5C@sda21(r2)
	lfs      f1, lbl_8051BC58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8029B474
	lfs      f0, lbl_8051BC30@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8029B470
	fmr      f29, f1
	b        lbl_8029B474

lbl_8029B470:
	fneg     f29, f1

lbl_8029B474:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051BC60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8029B4C4
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029B4C4:
	mr       r3, r31
	bl       isWhisleTimeMax__Q34Game7Fuefuki3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029B4E4
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029B4E4:
	mr       r3, r31
	bl       isJumpAway__Q34Game7Fuefuki3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029B504
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029B504:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BC30@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8029B528
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029B528:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2cc(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8029B58C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8029B58C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029B58C:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029B5C4
 * Size:	000024
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	8029B5E8
 * Size:	000050
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->setEmotionExcitement();
	fuefuki->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	8029B638
 * Size:	0001CC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* fuefuki       = OBJ(enemy);
	Vector3f targetPos = Vector3f(fuefuki->mTargetPosition);
	if (!fuefuki->isFinishMotion()) {
		EnemyFunc::walkToTarget(fuefuki, targetPos, CG_PARMS(fuefuki)->mGeneral.mMoveSpeed.mValue,
		                        CG_PARMS(fuefuki)->mGeneral.mRotationalAccel.mValue, CG_PARMS(fuefuki)->mGeneral.mRotationalSpeed.mValue);
		if (fuefuki->isArriveTarget()) {
			if (fuefuki->mTurnTimer > 0.0f) {
				fuefuki->mNextState = FUEFUKI_Turn;
			} else {
				fuefuki->mNextState = FUEFUKI_Wait;
			}
			fuefuki->finishMotion();
		}
	} else {
		fuefuki->mTargetVelocity = Vector3f(0.0f);
	}

	if (fuefuki->mStateTimer > 5.0f) {
		if (fuefuki->mTurnTimer > 0.0f) {
			fuefuki->mNextState = FUEFUKI_Turn;
		} else {
			fuefuki->mNextState = FUEFUKI_Wait;
		}

		fuefuki->finishMotion();
	}

	if (fuefuki->isWhisleTimeMax()) {
		fuefuki->mNextState = FUEFUKI_Whisle;
		fuefuki->finishMotion();
	}

	if (fuefuki->isJumpAway()) {
		fuefuki->mNextState = FUEFUKI_Jump;
		fuefuki->finishMotion();
	}

	if (fuefuki->mHealth <= 0.0f) {
		fuefuki->mNextState = FUEFUKI_Dead;
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;
	fuefuki->mWhistleTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying && fuefuki->mCurAnim->mType == KEYEVENT_END) {
		transit(fuefuki, fuefuki->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029B804
 * Size:	00003C
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->setEmotionCaution();
	fuefuki->setTargetPosition(false);
}

/*
 * --INFO--
 * Address:	8029B840
 * Size:	000068
 */
void StateWhisle::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->startWhisle();
	fuefuki->setEmotionExcitement();
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(6, nullptr);
}

/*
 * --INFO--
 * Address:	8029B8A8
 * Size:	00010C
 */
void StateWhisle::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->updateWhisle();
	if (fuefuki->mStateTimer > 3.0f) {
		if (fuefuki->mTurnTimer > 0.0f) {
			fuefuki->mNextState = FUEFUKI_Turn;
		} else {
			fuefuki->mNextState = FUEFUKI_Wait;
		}

		fuefuki->finishMotion();
	}

	if (fuefuki->isJumpAway()) {
		fuefuki->mNextState = FUEFUKI_Jump;
		fuefuki->finishMotion();
	}

	if (fuefuki->mHealth <= 0.0f) {
		fuefuki->mNextState = FUEFUKI_Dead;
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying && fuefuki->mCurAnim->mType == KEYEVENT_END) {
		transit(fuefuki, fuefuki->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029B9B4
 * Size:	000064
 */
void StateWhisle::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->setEmotionCaution();
	fuefuki->finishWhisle();
	fuefuki->getJAIObject()->startSound(PSSE_EN_FUEFUKI_WHISTLE_ECHO, 0);
}

/*
 * --INFO--
 * Address:	8029BA18
 * Size:	000068
 */
void StateStruggle::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->_2C0        = 0;
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->setEmotionExcitement();
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	8029BA80
 * Size:	00010C
 */
void StateStruggle::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	if (fuefuki->mHealth <= 0.0f || (fuefuki->mStuckPikminCount == 0 && fuefuki->mStateTimer > 3.0f)
	    || fuefuki->mStateTimer > CG_PROPERPARMS(fuefuki).mStruggleTime.mValue) {
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;
	fuefuki->mWhistleTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying && fuefuki->mCurAnim->mType == KEYEVENT_END) {
		if (fuefuki->mHealth <= 0.0f) {
			fuefuki->mNextState = FUEFUKI_Dead;
		} else {
			fuefuki->mNextState = FUEFUKI_Jump;
		}

		transit(fuefuki, fuefuki->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8029BB8C
 * Size:	000038
 */
void StateStruggle::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->setEmotionCaution();
	fuefuki->_2C0 = 1;
}
} // namespace Fuefuki
} // namespace Game
