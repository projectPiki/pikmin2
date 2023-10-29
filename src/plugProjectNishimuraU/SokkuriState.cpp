#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

const char statename[] = "246-SokkuriState";

/*
 * --INFO--
 * Address:	802EFA24
 * Size:	000330
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

/*
 * --INFO--
 * Address:	802EFD54
 * Size:	000064
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

/*
 * --INFO--
 * Address:	802EFDB8
 * Size:	000060
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

/*
 * --INFO--
 * Address:	802EFE18
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EFE1C
 * Size:	000070
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

/*
 * --INFO--
 * Address:	802EFE8C
 * Size:	000060
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

/*
 * --INFO--
 * Address:	802EFEEC
 * Size:	000004
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EFEF0
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	802EFFB4
 * Size:	000064
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->isAppear()) {
		transit(sokkuri, SOKKURI_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802F0018
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	802F0094
 * Size:	000078
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

/*
 * --INFO--
 * Address:	802F010C
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	802F01E4
 * Size:	000004
 */
void StateAppear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F01E8
 * Size:	000070
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

/*
 * --INFO--
 * Address:	802F0258
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	802F02F4
 * Size:	000004
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F02F8
 * Size:	000068
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

/*
 * --INFO--
 * Address:	802F0360
 * Size:	000154
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* sokkuri = OBJ(enemy);
	if (sokkuri->mHealth <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);

	} else {
		if (sokkuri->mTimer > static_cast<Parms*>(sokkuri->mParms)->mProperParms.mFp12.mValue) {
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

/*
 * --INFO--
 * Address:	802F04B4
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F04B8
 * Size:	000060
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

/*
 * --INFO--
 * Address:	802F0518
 * Size:	000234
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

	Parms* parms = static_cast<Parms*>(sokkuri->mParms);
	if (sokkuri->mTimer > parms->mProperParms.mFp01.mValue) {
		if (sokkuri->isDisappear()) {
			sokkuri->mNextState = SOKKURI_Disappear;
			sokkuri->finishMotion();

		} else {
			Parms* parms = static_cast<Parms*>(sokkuri->mParms);
			if (randWeightFloat(1.0f) < parms->mProperParms.mFp11.mValue) {
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

/*
 * --INFO--
 * Address:	802F074C
 * Size:	000004
 */
void StateMoveGround::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F0750
 * Size:	000050
 */
void StateMoveWater::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri        = OBJ(enemy);
	sokkuri->mTimer     = 0.0f;
	sokkuri->mNextState = SOKKURI_NULL;
	sokkuri->setNextMoveInfo();
	sokkuri->startMotion(SOKKURIANIM_RunWater, nullptr);
}

/*
 * --INFO--
 * Address:	802F07A0
 * Size:	0001D8
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
		Parms* parms = static_cast<Parms*>(sokkuri->mParms);
		if (sokkuri->mTimer > parms->mProperParms.mFp01.mValue) {
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
			EnemyFunc::walkToTarget(sokkuri, targetPos, sokkuri->mMoveVelocity, parms->mProperParms.mFp22.mValue,
			                        parms->mProperParms.mFp23.mValue);
		}
	}

	sokkuri->mTimer += sys->mDeltaTime;

	if (sokkuri->mCurAnim->mIsPlaying && (u32)sokkuri->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, sokkuri->mNextState,
		        nullptr); // no idea why this is enemy rather than sokkuri but it makes it match
	}
}

/*
 * --INFO--
 * Address:	802F0978
 * Size:	000004
 */
void StateMoveWater::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F097C
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	802F09E8
 * Size:	000198
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
			Parms* parms1 = static_cast<Parms*>(sokkuri->mParms);
			EnemyFunc::flickNearbyNavi(sokkuri, parms1->mGeneral.mShakeRange.mValue, parms1->mGeneral.mShakeKnockback.mValue,
			                           parms1->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			Parms* parms2 = static_cast<Parms*>(sokkuri->mParms);
			EnemyFunc::flickNearbyPikmin(sokkuri, parms2->mGeneral.mShakeRange.mValue, parms2->mGeneral.mShakeKnockback.mValue,
			                             parms2->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			Parms* parms3 = static_cast<Parms*>(sokkuri->mParms);
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

/*
 * --INFO--
 * Address:	802F0B80
 * Size:	000010
 */
void StateFlick::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

} // namespace Sokkuri
} // namespace Game
