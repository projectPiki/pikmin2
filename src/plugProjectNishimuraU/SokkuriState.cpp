#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

const char statename[] = "246-SokkuriState";

/**
 * @note Address: 0x802EFA24
 * @note Size: 0x330
 */
void FSM::init(EnemyBase* enemy)
{
	create(SOKKURI_Count);
	registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateWait);
	registerState(new StateMoveGround);
	registerState(new StateMoveWater);
	registerState(new StateFlick);
}

/**
 * @note Address: 0x802EFD54
 * @note Size: 0x64
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri = OBJ(enemy);
	sokkuri->deathProcedure();
	sokkuri->disableEvent(0, EB_Cullable);
	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->setEmotionCaution();
	sokkuri->startMotion(SOKKURIANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802EFDB8
 * @note Size: 0x60
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->mCurAnim->mIsPlaying) {
		if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_2) {
			sokkuri->createDownEffect(0.5f, 0.55f);

		} else if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
			sokkuri->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802EFE18
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802EFE1C
 * @note Size: 0x70
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri     = OBJ(enemy);
	sokkuri->mHealth = 0.0f;
	sokkuri->deathProcedure();
	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->setEmotionCaution();
	sokkuri->startMotion(SOKKURIANIM_PressDead, nullptr);
	sokkuri->createDownEffect(0.75f, 0.0f);
}

/**
 * @note Address: 0x802EFE8C
 * @note Size: 0x60
 */
void StatePress::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->mCurAnim->mIsPlaying) {
		if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_2) {
			sokkuri->createDownEffect(0.0f, 0.55f);

		} else if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
			sokkuri->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802EFEEC
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802EFEF0
 * @note Size: 0xC4
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();

	sokkuri->disableEvent(0, EB_LifegaugeVisible);
	sokkuri->enableEvent(0, EB_BitterImmune);
	sokkuri->mIsHiding = true;
	sokkuri->setEmotionNone();
	sokkuri->hardConstraintOn();
	sokkuri->disableEvent(0, EB_Animating);

	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->startMotion(SOKKURIANIM_Appear, nullptr);
	sokkuri->stopMotion();

	if (sokkuri->mWaterBox) {
		sokkuri->fadeEfxHamon();
	}
}

/**
 * @note Address: 0x802EFFB4
 * @note Size: 0x64
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->isAppear()) {
		transit(sokkuri, SOKKURI_Appear, nullptr);
	}
}

/**
 * @note Address: 0x802F0018
 * @note Size: 0x7C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	sokkuri->enableEvent(0, EB_LifegaugeVisible);
	sokkuri->disableEvent(0, EB_BitterImmune);
	sokkuri->mIsHiding = false;
	sokkuri->hardConstraintOff();
	sokkuri->enableEvent(0, EB_Animating);

	if (sokkuri->mWaterBox) {
		sokkuri->createEfxHamon();
	}
}

/**
 * @note Address: 0x802F0094
 * @note Size: 0x78
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->setEmotionExcitement();
	sokkuri->startMotion(SOKKURIANIM_Appear, nullptr);
	sokkuri->createDownEffect(0.35f, 0.0f);
}

/**
 * @note Address: 0x802F010C
 * @note Size: 0xD8
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);

	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);

	} else if (sokkuri->mCurAnim->mIsPlaying && (u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
		transit(sokkuri, SOKKURI_MoveGround, nullptr);
	}
}

/**
 * @note Address: 0x802F01E4
 * @note Size: 0x4
 */
void StateAppear::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802F01E8
 * @note Size: 0x70
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->setEmotionCaution();
	sokkuri->startMotion(SOKKURIANIM_Hide, nullptr);
	sokkuri->createBubbleEffect();
}

/**
 * @note Address: 0x802F0258
 * @note Size: 0x9C
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (sokkuri->mCurAnim->mIsPlaying) {
		if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_2) {
			sokkuri->createDownEffect(0.35f, 0.0f);

		} else if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
			transit(sokkuri, SOKKURI_Stay, nullptr);
		}
	}
}

/**
 * @note Address: 0x802F02F4
 * @note Size: 0x4
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802F02F8
 * @note Size: 0x68
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->setNextWaitInfo();
	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->startMotion(SOKKURIANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802F0360
 * @note Size: 0x154
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);

	} else {
		if (sokkuri->mTimer > CG_PROPERPARMS(sokkuri).mMaxWaitingTime.mValue) {
			if (sokkuri->isDisappear()) {
				sokkuri->mNextState = SOKKURI_Disappear;
				sokkuri->finishMotion();

			} else if (sokkuri->mWaterBox) {
				sokkuri->mNextState = SOKKURI_MoveWater;
				sokkuri->finishMotion();

			} else {
				sokkuri->mNextState = SOKKURI_MoveGround;
				sokkuri->finishMotion();
			}
		}

		sokkuri->mTimer += sys->mDeltaTime;

		if (sokkuri->mCurAnim->mIsPlaying && (u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
			transit(sokkuri, sokkuri->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802F04B4
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802F04B8
 * @note Size: 0x60
 */
void StateMoveGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->setNextMoveInfo();
	sokkuri->startMotion(SOKKURIANIM_RunGround, nullptr);
	sokkuri->createDownEffect(0.28f, 0.0f);
}

/**
 * @note Address: 0x802F0518
 * @note Size: 0x234
 */
void StateMoveGround::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	sokkuri->updateMoveState();

	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);
		return;
	}

	Parms* parms = CG_PARMS(sokkuri);
	if (sokkuri->mTimer > parms->mProperParms.mMaxTravelTime.mValue) {
		if (sokkuri->isDisappear()) {
			sokkuri->mNextState = SOKKURI_Disappear;
			sokkuri->finishMotion();

		} else {
			Parms* parms = CG_PARMS(sokkuri);
			if (randWeightFloat(1.0f) < parms->mProperParms.mWaitingProbability.mValue) {
				sokkuri->mNextState = SOKKURI_Wait;
				sokkuri->finishMotion();

			} else if (sokkuri->mWaterBox) {
				sokkuri->mTargetVelocity = Vector3f(0.0f);
				sokkuri->mNextState      = SOKKURI_MoveWater;
				sokkuri->finishMotion();

			} else {
				sokkuri->mNextState = SOKKURI_MoveGround;
				sokkuri->finishMotion();
			}
		}
	} else if (sokkuri->mWaterBox) {
		sokkuri->mTargetVelocity = Vector3f(0.0f);
		sokkuri->mNextState      = SOKKURI_MoveWater;
		sokkuri->finishMotion();

	} else {
		Vector3f targetPos = Vector3f(sokkuri->mTargetPosition);
		EnemyFunc::walkToTarget(sokkuri, targetPos, sokkuri->mMoveVelocity, parms->mGeneral.mTurnSpeed.mValue,
		                        parms->mGeneral.mMaxTurnAngle.mValue);
	}

	sokkuri->mTimer += sys->mDeltaTime;

	if (sokkuri->mCurAnim->mIsPlaying && (u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, sokkuri->mNextState,
		        nullptr); // no idea why this is enemy rather than sokkuri but it makes it match
	}
}

/**
 * @note Address: 0x802F074C
 * @note Size: 0x4
 */
void StateMoveGround::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802F0750
 * @note Size: 0x50
 */
void StateMoveWater::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->setNextMoveInfo();
	sokkuri->startMotion(SOKKURIANIM_RunWater, nullptr);
}

/**
 * @note Address: 0x802F07A0
 * @note Size: 0x1D8
 */
void StateMoveWater::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	sokkuri->updateMoveState();

	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);
		return;
	}
	if (sokkuri->isDisappear()) {
		sokkuri->mNextState = SOKKURI_Disappear;
		sokkuri->finishMotion();

	} else {
		Parms* parms = CG_PARMS(sokkuri);
		if (sokkuri->mTimer > parms->mProperParms.mMaxTravelTime.mValue) {
			if (sokkuri->mWaterBox) {
				sokkuri->mTimer = 0.0f;
				sokkuri->setNextMoveInfo();

			} else {
				sokkuri->mTargetVelocity = Vector3f(0.0f);
				sokkuri->mNextState      = SOKKURI_MoveGround;
				sokkuri->finishMotion();
			}

		} else if (sokkuri->mWaterBox == nullptr) {
			sokkuri->mTargetVelocity = Vector3f(0.0f);
			sokkuri->mNextState      = SOKKURI_MoveGround;
			sokkuri->finishMotion();

		} else {
			Vector3f targetPos = Vector3f(sokkuri->mTargetPosition);
			EnemyFunc::walkToTarget(sokkuri, targetPos, sokkuri->mMoveVelocity, parms->mProperParms.mUnderwaterRotationRate.mValue,
			                        parms->mProperParms.mUnderwaterRotationMaxSpeed.mValue);
		}
	}

	sokkuri->mTimer += sys->mDeltaTime;

	if (sokkuri->mCurAnim->mIsPlaying && (u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, sokkuri->mNextState,
		        nullptr); // no idea why this is enemy rather than sokkuri but it makes it match
	}
}

/**
 * @note Address: 0x802F0978
 * @note Size: 0x4
 */
void StateMoveWater::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802F097C
 * @note Size: 0x6C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->disableEvent(0, EB_NoInterrupt);
	sokkuri->mTargetVelocity = Vector3f(0.0f);
	sokkuri->startMotion(SOKKURIANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802F09E8
 * @note Size: 0x198
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);

	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);
		return;
	}

	if (sokkuri->mWaterBox) {
		sokkuri->mNextState = SOKKURI_MoveWater;
		sokkuri->finishMotion();

	} else {
		sokkuri->mNextState = SOKKURI_MoveGround;
		sokkuri->finishMotion();
	}

	sokkuri->mTimer += sys->mDeltaTime;

	if (sokkuri->mCurAnim->mIsPlaying) {
		if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_2) {
			sokkuri->enableEvent(0, EB_NoInterrupt);
			sokkuri->createDownEffect(0.6f, 0.55f);

		} else if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_3) {
			Parms* parms1 = CG_PARMS(sokkuri);
			EnemyFunc::flickNearbyNavi(sokkuri, parms1->mGeneral.mShakeRange.mValue, parms1->mGeneral.mShakeKnockback.mValue,
			                           parms1->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			Parms* parms2 = CG_PARMS(sokkuri);
			EnemyFunc::flickNearbyPikmin(sokkuri, parms2->mGeneral.mShakeRange.mValue, parms2->mGeneral.mShakeKnockback.mValue,
			                             parms2->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			Parms* parms3 = CG_PARMS(sokkuri);
			EnemyFunc::flickStickPikmin(sokkuri, parms3->mGeneral.mShakeChance.mValue, parms3->mGeneral.mShakeKnockback.mValue,
			                            parms3->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			sokkuri->mFlickTimer = 0.0f;
		} else if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_4) {
			sokkuri->disableEvent(0, EB_NoInterrupt);

		} else if ((u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
			transit(sokkuri, sokkuri->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802F0B80
 * @note Size: 0x10
 */
void StateFlick::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

} // namespace Sokkuri
} // namespace Game
