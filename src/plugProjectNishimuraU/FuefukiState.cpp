#include "Game/Entities/Fuefuki.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Fuefuki {

/**
 * @note Address: 0x8029A63C
 * @note Size: 0x324
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

/**
 * @note Address: 0x8029A960
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(FUEFUKIANIM_Dead, nullptr);
}

/**
 * @note Address: 0x8029A9BC
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8029AA00
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8029AA04
 * @note Size: 0xA0
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

/**
 * @note Address: 0x8029AAA4
 * @note Size: 0x5C
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->mStateTimer += sys->mDeltaTime;
	if (fuefuki->mStateTimer > CG_PROPERPARMS(fuefuki).mAirborneTime.mValue) {
		transit(fuefuki, FUEFUKI_Land, nullptr);
	}
}

/**
 * @note Address: 0x8029AB00
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8029AB04
 * @note Size: 0x18C
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

/**
 * @note Address: 0x8029AC90
 * @note Size: 0x124
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

/**
 * @note Address: 0x8029ADB4
 * @note Size: 0x50
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->disableEvent(0, EB_BitterImmune);
	fuefuki->disableEvent(0, EB_NoInterrupt);
	fuefuki->enableEvent(0, EB_LifegaugeVisible);
	fuefuki->setTargetPosition(false);
}

/**
 * @note Address: 0x8029AE04
 * @note Size: 0x5C
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

/**
 * @note Address: 0x8029AE60
 * @note Size: 0x30C
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

		EnemyFunc::flickStickPikmin(fuefuki, CG_GENERALPARMS(fuefuki).mShakeChance.mValue, CG_GENERALPARMS(fuefuki).mShakeKnockback.mValue,
		                            CG_GENERALPARMS(fuefuki).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
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

			EnemyFunc::flickNearbyNavi(fuefuki, CG_GENERALPARMS(fuefuki).mShakeRange.mValue,
			                           CG_GENERALPARMS(fuefuki).mShakeKnockback.mValue, CG_GENERALPARMS(fuefuki).mShakeDamage.mValue,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(fuefuki, CG_GENERALPARMS(fuefuki).mShakeRange.mValue,
			                             CG_GENERALPARMS(fuefuki).mShakeKnockback.mValue, CG_GENERALPARMS(fuefuki).mShakeDamage.mValue,
			                             FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(fuefuki, CG_GENERALPARMS(fuefuki).mShakeChance.mValue,
			                            CG_GENERALPARMS(fuefuki).mShakeKnockback.mValue, CG_GENERALPARMS(fuefuki).mShakeDamage.mValue,
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

/**
 * @note Address: 0x8029B16C
 * @note Size: 0x10
 */
void StateJump::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_BitterImmune); }

/**
 * @note Address: 0x8029B17C
 * @note Size: 0x60
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

/**
 * @note Address: 0x8029B1DC
 * @note Size: 0x11C
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

/**
 * @note Address: 0x8029B2F8
 * @note Size: 0x24
 */
void StateWait::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x8029B31C
 * @note Size: 0x60
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

/**
 * @note Address: 0x8029B37C
 * @note Size: 0x248
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

/**
 * @note Address: 0x8029B5C4
 * @note Size: 0x24
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x8029B5E8
 * @note Size: 0x50
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* fuefuki         = OBJ(enemy);
	fuefuki->mNextState  = FUEFUKI_NULL;
	fuefuki->mStateTimer = 0.0f;
	fuefuki->setEmotionExcitement();
	fuefuki->startMotion(FUEFUKIANIM_Move, nullptr);
}

/**
 * @note Address: 0x8029B638
 * @note Size: 0x1CC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* fuefuki       = OBJ(enemy);
	Vector3f targetPos = Vector3f(fuefuki->mTargetPosition);
	if (!fuefuki->isFinishMotion()) {
		EnemyFunc::walkToTarget(fuefuki, targetPos, CG_GENERALPARMS(fuefuki).mMoveSpeed.mValue, CG_GENERALPARMS(fuefuki).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(fuefuki).mMaxTurnAngle.mValue);
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

/**
 * @note Address: 0x8029B804
 * @note Size: 0x3C
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->setEmotionCaution();
	fuefuki->setTargetPosition(false);
}

/**
 * @note Address: 0x8029B840
 * @note Size: 0x68
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

/**
 * @note Address: 0x8029B8A8
 * @note Size: 0x10C
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

/**
 * @note Address: 0x8029B9B4
 * @note Size: 0x64
 */
void StateWhisle::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->setEmotionCaution();
	fuefuki->finishWhisle();
	fuefuki->getJAIObject()->startSound(PSSE_EN_FUEFUKI_WHISTLE_ECHO, 0);
}

/**
 * @note Address: 0x8029BA18
 * @note Size: 0x68
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

/**
 * @note Address: 0x8029BA80
 * @note Size: 0x10C
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

/**
 * @note Address: 0x8029BB8C
 * @note Size: 0x38
 */
void StateStruggle::cleanup(EnemyBase* enemy)
{
	Obj* fuefuki = OBJ(enemy);
	fuefuki->setEmotionCaution();
	fuefuki->mCanStruggle = true;
}
} // namespace Fuefuki
} // namespace Game
