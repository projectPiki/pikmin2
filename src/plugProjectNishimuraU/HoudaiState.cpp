#include "Game/Entities/Houdai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Houdai {

/*
 * --INFO--
 * Address:	802BDAB0
 * Size:	000278
 */
void FSM::init(EnemyBase* enemy)
{
	create(HOUDAI_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
	registerState(new StateShot);
}

/*
 * --INFO--
 * Address:	802BDD28
 * Size:	0000BC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai = OBJ(enemy);
	houdai->forceFinishIKMotion();
	houdai->deathProcedure();
	houdai->mTargetVelocity = Vector3f(0.0f);
	houdai->setEmotionCaution();
	houdai->startMotion(HOUDAIANIM_Dead, nullptr);
	houdai->createHoudaiDeadEffect();
	houdai->startChimneyEffect();
	houdai->finishSteamEffect();

	Vector3f position = houdai->getPosition();
	rumbleMgr->startRumble(7, position, 2);
}

/*
 * --INFO--
 * Address:	802BDDE4
 * Size:	0000B8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (houdai->mCurAnim->mIsPlaying && (u32)houdai->mCurAnim->mType == KEYEVENT_END) {
		houdai->throwupItem();
		houdai->finishChimneyEffect();
		houdai->createDeadBombEffect();

		Vector3f position = houdai->getPosition();
		cameraMgr->startVibration(21, position, 2);
		houdai->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BDE9C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BDEA0
 * Size:	000078
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai        = OBJ(enemy);
	houdai->mNextState = HOUDAI_NULL;
	houdai->enableEvent(0, EB_BitterImmune);
	houdai->disableEvent(0, EB_Animating);
	houdai->mTargetCreature = nullptr;
	houdai->mTargetVelocity = Vector3f(0.0f);
	houdai->startMotion(HOUDAIANIM_Dormant, nullptr);
	houdai->stopMotion();
}

/*
 * --INFO--
 * Address:	802BDF18
 * Size:	0000C4
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (!houdai->isEvent(0, EB_TakingDamage)) {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(houdai->mParms)->mGeneral.mPrivateRadius.mValue;
		if (EnemyFunc::isThereOlimar(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (!isTarget) {
			return;
		}
	}

	transit(houdai, HOUDAI_Land, nullptr);
}

/*
 * --INFO--
 * Address:	802BDFDC
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BDFE0
 * Size:	0000E4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai        = OBJ(enemy);
	houdai->mNextState = HOUDAI_NULL;
	houdai->enableEvent(0, EB_BitterImmune);
	houdai->enableEvent(0, EB_Animating);
	houdai->setEmotionExcitement();
	houdai->mTargetCreature = nullptr;
	houdai->mTargetVelocity = Vector3f(0.0f);

	houdai->startMotion(HOUDAIANIM_Dormant, nullptr);
	houdai->createAppearEffect();
	shadowMgr->addJointShadow(houdai);

	Vector3f position = houdai->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(6, position, 2);
}

/*
 * --INFO--
 * Address:	802BE0C4
 * Size:	0002F0
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (houdai->isStopMotion()) {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(houdai->mParms)->mGeneral.mPrivateRadius.mValue;
		if (EnemyFunc::isThereOlimar(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			houdai->startMotion();
			houdai->setEmotionExcitement();
			houdai->createAppearEffect();
			shadowMgr->addJointShadow(houdai);

			Vector3f position = houdai->getPosition();
			cameraMgr->startVibration(0, position, 2);
			rumbleMgr->startRumble(6, position, 2);
		}
	}

	if (houdai->mCurAnim->mIsPlaying) {
		if ((u32)houdai->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
			houdai->startChimneyEffect();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_3) {
			houdai->finishChimneyEffect();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_4) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
			houdai->createAppearFootEffect(0);

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_5) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
			houdai->createOnGroundEffect(0, houdai->mWaterBox);
			houdai->createAppearFootEffect(2);
			houdai->createAppearFootEffect(1);

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_6) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
			houdai->createAppearHahenEffect();
			houdai->createAppearFootEffect(3);

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_END) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
			if (houdai->mHealth <= 0.0f) {
				transit(houdai, HOUDAI_Dead, nullptr);

			} else if (EnemyFunc::isStartFlick(houdai, false)) {
				transit(houdai, HOUDAI_Flick, nullptr);

			} else {
				transit(houdai, HOUDAI_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802BE3B4
 * Size:	000050
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->disableEvent(0, EB_BitterImmune);
	houdai->startProgramedIK();
	houdai->startSteamEffect(true);
	houdai->setBossAppearBGM();
}

/*
 * --INFO--
 * Address:	802BE404
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai             = OBJ(enemy);
	houdai->mNextState      = HOUDAI_NULL;
	houdai->mStateTimer     = 0.0f;
	houdai->mStateDuration  = 1.5f + randWeightFloat(1.5f);
	houdai->mTargetCreature = nullptr;
	houdai->mTargetVelocity = Vector3f(0.0f);
	houdai->startMotion(HOUDAIANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802BE49C
 * Size:	000118
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->mStateTimer += sys->mDeltaTime;

	if (houdai->mHealth <= 0.0f) {
		houdai->mNextState = HOUDAI_Dead;
		houdai->finishMotion();
	} else if (EnemyFunc::isStartFlick(houdai, false)) {
		houdai->mNextState = HOUDAI_Flick;
		houdai->finishMotion();
	} else if (houdai->isTransitShotGunState()) {
		houdai->mNextState = HOUDAI_Shot;
		houdai->finishMotion();
	} else if (houdai->mStateTimer > houdai->mStateDuration) {
		houdai->mNextState = HOUDAI_Walk;
		houdai->finishMotion();
	}

	if (houdai->mCurAnim->mIsPlaying && (u32)houdai->mCurAnim->mType == KEYEVENT_END) {
		transit(houdai, houdai->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BE5B4
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BE5B8
 * Size:	000064
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai             = OBJ(enemy);
	houdai->mNextState      = HOUDAI_NULL;
	houdai->mStateTimer     = 0.0f;
	houdai->mTargetCreature = nullptr;
	houdai->mTargetVelocity = Vector3f(0.0f);
	houdai->startMotion(HOUDAIANIM_Flick, nullptr);
	houdai->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802BE61C
 * Size:	0000F0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (houdai->mCurAnim->mIsPlaying) {
		if ((u32)houdai->mCurAnim->mType == KEYEVENT_2) {
			houdai->startChimneyEffect();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_3) {
			Parms* parms = static_cast<Parms*>(houdai->mParms);
			EnemyFunc::flickStickPikmin(houdai, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			houdai->mFlickTimer = 0.0f;
			houdai->startBossFlickBGM();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_4) {
			houdai->finishChimneyEffect();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_END) {
			if (houdai->mHealth <= 0.0f) {
				transit(houdai, HOUDAI_Dead, nullptr);

			} else {
				transit(houdai, HOUDAI_Shot, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802BE70C
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802BE730
 * Size:	000098
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai             = OBJ(enemy);
	houdai->mNextState      = HOUDAI_NULL;
	houdai->mStateTimer     = 0.0f;
	houdai->mStateDuration  = 3.5f + randWeightFloat(3.5f);
	houdai->mTargetCreature = nullptr;
	houdai->mTargetVelocity = Vector3f(0.0f);
	houdai->startIKMotion();
	houdai->getTargetPosition();
}

/*
 * --INFO--
 * Address:	802BE7C8
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->getTargetPosition();
	houdai->mStateTimer += sys->mDeltaTime;

	if (EnemyFunc::isStartFlick(houdai, false)) {
		houdai->mNextState = HOUDAI_Flick;
		houdai->finishIKMotion();
	} else if (houdai->mStateTimer > houdai->mStateDuration) {
		houdai->mNextState = HOUDAI_Wait;
		houdai->finishIKMotion();
	}

	if (houdai->mHealth <= 0.0f) {
		transit(houdai, HOUDAI_Dead, nullptr);
	} else if (houdai->isFinishIKMotion()) {
		transit(houdai, houdai->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BE8C8
 * Size:	000004
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BE8CC
 * Size:	000090
 */
void StateShot::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai         = OBJ(enemy);
	houdai->mNextState  = HOUDAI_NULL;
	houdai->mStateTimer = 0.0f;
	houdai->setTargetPattern();
	houdai->mShotGunState       = 0;
	houdai->mShotGunSearchTimer = 0.0f;
	houdai->mTargetCreature     = nullptr;
	houdai->mTargetVelocity     = Vector3f(0.0f);
	houdai->startMotion(HOUDAIANIM_Attack, nullptr);
	houdai->startBlendMotion();
	houdai->createShotGunOpenEffect();
	houdai->mIsAttackMusicLooping = false;
	houdai->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802BE95C
 * Size:	0003B0
 */
void StateShot::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);

	if (houdai->isStopMotion()) {
		if (houdai->mShotGunState != 0) {
			if (houdai->isFinishMotion() || houdai->mShotGunSearchTimer > static_cast<Parms*>(houdai->mParms)->mProperParms.mFp12.mValue) {
				houdai->setShotGunEmitKeepTimerOn();
				houdai->startMotion();
			}

			houdai->getJAIObject()->startSound(PSSE_EN_HOUDAI_MOTOR, 0);

		} else if (houdai->isFinishShotGun()) {
			if (houdai->isShotGunLockOn()) {
				if (houdai->mStateTimer > 2.0f) {
					houdai->mShotGunState = 0;
					houdai->mStateTimer   = 0.0f;
					houdai->startMotion();
				}
			} else {
				houdai->getJAIObject()->startSound(PSSE_EN_HOUDAI_MOTOR, 0);
			}
		} else {
			if (houdai->isShotGunLockOn() && (houdai->mStateTimer > 2.0f)) {
				houdai->mShotGunState       = 1;
				houdai->mShotGunSearchTimer = 0.0f;
				houdai->mStateTimer         = 0.0f;
				houdai->startMotion();
				houdai->startBossAttackLoopBGM();
			}

			houdai->getJAIObject()->startSound(PSSE_EN_HOUDAI_MOTOR, 0);
		}
	}

	if (houdai->isShotGunRotation()) {
		houdai->setShotGunTargetPosition();
		if (houdai->mStateTimer > static_cast<Parms*>(houdai->mParms)->mGeneral.mSearchAngle.mValue) {
			houdai->mStateTimer = 0.0f;
			houdai->finishMotion();
		}
	}

	houdai->mShotGunSearchTimer += sys->mDeltaTime;
	houdai->mStateTimer += sys->mDeltaTime;

	if (houdai->mHealth <= 0.0f) {
		if (houdai->isStopMotion()) {
			houdai->startMotion();
		}
		houdai->finishBossAttackLoopBGM();
		houdai->finishMotion();
	}

	if (houdai->mCurAnim->mIsPlaying) {
		if ((u32)houdai->mCurAnim->mType == KEYEVENT_2) {
			houdai->mStateTimer = 0.0f;
			houdai->stopMotion();
			houdai->startShotGunRotation();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_3) {
			if (!houdai->isFinishMotion()) {
				Parms* parms = static_cast<Parms*>(houdai->mParms);
				EnemyFunc::flickStickPikmin(houdai, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
				                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
				houdai->mFlickTimer = 0.0f;
				houdai->emitShotGun();
			}

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_4) {
			if (!houdai->isFinishMotion()) {
				Parms* parms2 = static_cast<Parms*>(houdai->mParms);
				if (parms2->mGeneral.mSearchAngle.mValue - houdai->mStateTimer > parms2->mProperParms.mFp12.mValue
				    && houdai->mShotGunSearchTimer > parms2->mProperParms.mFp10.mValue) {
					houdai->setShotGunEmitKeepTimerOff();
					houdai->stopMotion();
				}
			}
		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_5) {
			houdai->mShotGunState = 0;
			houdai->mStateTimer   = 0.0f;
			houdai->stopMotion();
			houdai->finishShotGunRotation();
			houdai->finishBossAttackLoopBGM();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_END) {
			if (houdai->mHealth <= 0.0f) {
				transit(houdai, HOUDAI_Dead, nullptr);

			} else {
				transit(houdai, HOUDAI_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802BED0C
 * Size:	000038
 */
void StateShot::cleanup(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->finishBlendMotion();
	houdai->finishBossAttackLoopBGM();
}

} // namespace Houdai
} // namespace Game
