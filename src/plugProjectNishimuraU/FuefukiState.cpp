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
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(FUEFUKIANIM_Dead, nullptr);
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
	Obj* fuefuki          = OBJ(enemy);
	fuefuki->mCanStruggle = false;
	fuefuki->resetAppearTimer();
	fuefuki->mStateTimer = 0.0f;
	fuefuki->enableEvent(0, EB_BitterImmune);
	fuefuki->disableEvent(0, EB_NoInterrupt);
	fuefuki->enableEvent(0, EB_Untargetable);
	fuefuki->disableEvent(0, EB_LifegaugeVisible);
	fuefuki->disableEvent(0, EB_Cullable);
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(FUEFUKIANIM_Landing, nullptr);
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
	Obj* fuefuki          = OBJ(enemy);
	fuefuki->mCanStruggle = false;
	fuefuki->mNextState   = FUEFUKI_Wait;
	fuefuki->mStateTimer  = 0.0f;
	fuefuki->resetAppearTimer();
	fuefuki->resetWhisleTimer(true);
	fuefuki->mWhistleTimer += sys->mDeltaTime;
	fuefuki->setTargetPosition(true);
	Vector3f pos = Vector3f(fuefuki->mTargetPosition);
	fuefuki->onSetPosition(pos);
	fuefuki->mFaceDir    = randWeightFloat(TAU);
	fuefuki->mRotation.y = fuefuki->mFaceDir;
	fuefuki->disableEvent(0, EB_BitterImmune);
	fuefuki->enableEvent(0, EB_NoInterrupt);
	fuefuki->disableEvent(0, EB_Untargetable);
	fuefuki->disableEvent(0, EB_Cullable);
	fuefuki->mTargetVelocity = Vector3f(0.0f);

	if (randWeightFloat(1.0f) < CG_PROPERPARMS(fuefuki).mNormalLandingChance()) {
		fuefuki->startMotion(FUEFUKIANIM_Landing, nullptr);
	} else {
		fuefuki->startMotion(FUEFUKIANIM_LandFail, nullptr);
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
			fuefuki->disableEvent(0, EB_NoInterrupt);
			fuefuki->enableEvent(0, EB_LifegaugeVisible);
			fuefuki->createDownEffect(0.85f);
			if (fuefuki->mWaterBox) {
				fuefuki->createEfxHamon();
			}
		} else if (fuefuki->mCurAnim->mType == KEYEVENT_3) {
			fuefuki->mCanStruggle = true;
			fuefuki->enableEvent(0, EB_Cullable);
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
	fuefuki->disableEvent(0, EB_BitterImmune);
	fuefuki->disableEvent(0, EB_NoInterrupt);
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
	Obj* fuefuki          = OBJ(enemy);
	fuefuki->mCanStruggle = true;
	fuefuki->mNextState   = FUEFUKI_NULL;
	fuefuki->mStateTimer  = 0.0f;
	fuefuki->disableEvent(0, EB_BitterImmune);
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(FUEFUKIANIM_Jump, nullptr);
}

/*
 * --INFO--
 * Address:	8029AE60
 * Size:	00030C
 */
void StateJump::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	if (fuefuki->mCanStruggle) {
		fuefuki->mTargetVelocity = Vector3f(0.0f);
		if (fuefuki->mHealth <= 0.0f) {
			transit(fuefuki, FUEFUKI_Dead, nullptr);
			return;
		}
	} else {
		f32 sinTheta = (f32)sin(fuefuki->getFaceDir());
		f32 y        = fuefuki->getTargetVelocity().y;
		f32 cosTheta = (f32)cos(fuefuki->getFaceDir());

		fuefuki->mTargetVelocity = Vector3f(1500.0f * sinTheta, y, 1500.0f * cosTheta);

		EnemyFunc::flickStickPikmin(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeChance.mValue,
		                            CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue, CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue,
		                            FLICK_BACKWARD_ANGLE, nullptr);
	}

	if (fuefuki->mStateTimer > CG_PROPERPARMS(fuefuki).mJumpTime.mValue) {
		fuefuki->finishMotion();
	}

	fuefuki->mStateTimer += sys->mDeltaTime;

	if (fuefuki->mCurAnim->mIsPlaying) {
		if (fuefuki->mCurAnim->mType == KEYEVENT_2) {
			fuefuki->enableEvent(0, EB_BitterImmune);
		} else if (fuefuki->mCurAnim->mType == KEYEVENT_3) {
			fuefuki->mCanStruggle = false;
			fuefuki->enableEvent(0, EB_Untargetable);
			fuefuki->disableEvent(0, EB_LifegaugeVisible);
			fuefuki->disableEvent(0, EB_Cullable);

			f32 sinTheta = (f32)sin(fuefuki->getFaceDir());
			f32 y        = fuefuki->getTargetVelocity().y;
			f32 cosTheta = (f32)cos(fuefuki->getFaceDir());

			fuefuki->mTargetVelocity = Vector3f(1500.0f * sinTheta, y, 1500.0f * cosTheta);

			Vector3f targetVel = Vector3f(fuefuki->mTargetVelocity);
			fuefuki->setVelocity(targetVel);

			EnemyFunc::flickNearbyNavi(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeRange.mValue,
			                           CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue, CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeRange.mValue,
			                             CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue,
			                             CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(fuefuki, CG_PARMS(fuefuki)->mGeneral.mShakeChance.mValue,
			                            CG_PARMS(fuefuki)->mGeneral.mShakeKnockback.mValue, CG_PARMS(fuefuki)->mGeneral.mShakeDamage.mValue,
			                            FLICK_BACKWARD_ANGLE, nullptr);

			fuefuki->mFlickTimer = 0.0f;
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
void StateJump::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_BitterImmune); }

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
	fuefuki->startMotion(FUEFUKIANIM_Wait, nullptr);
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
	fuefuki->startMotion(FUEFUKIANIM_Pivot, nullptr);
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
	f32 angleDist = fuefuki->turnToTarget(targetPos);
	f64 abs       = fabs(angleDist);
	if ((f32)abs <= PI / 6) {
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
	fuefuki->startMotion(FUEFUKIANIM_Move, nullptr);
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
		                        CG_PARMS(fuefuki)->mGeneral.mTurnSpeed.mValue, CG_PARMS(fuefuki)->mGeneral.mMaxTurnAngle.mValue);
		if (fuefuki->isArriveTarget()) {
			if (fuefuki->mSquadTimer > 0.0f) {
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
		if (fuefuki->mSquadTimer > 0.0f) {
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
	fuefuki->startMotion(FUEFUKIANIM_Whisle, nullptr);
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
		if (fuefuki->mSquadTimer > 0.0f) {
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
	Obj* fuefuki          = OBJ(enemy);
	fuefuki->mCanStruggle = false;
	fuefuki->mNextState   = FUEFUKI_NULL;
	fuefuki->mStateTimer  = 0.0f;
	fuefuki->setEmotionExcitement();
	fuefuki->mTargetVelocity = Vector3f(0.0f);
	fuefuki->startMotion(FUEFUKIANIM_Struggle, nullptr);
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
	fuefuki->mCanStruggle = true;
}
} // namespace Fuefuki
} // namespace Game
