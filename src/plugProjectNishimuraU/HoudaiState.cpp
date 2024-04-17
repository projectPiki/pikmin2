#include "Game/Entities/Houdai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Houdai {

/**
 * @note Address: 0x802BDAB0
 * @note Size: 0x278
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

/**
 * @note Address: 0x802BDD28
 * @note Size: 0xBC
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
	rumbleMgr->startRumble(RUMBLETYPE_HoudaiDeath, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802BDDE4
 * @note Size: 0xB8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (houdai->mCurAnim->mIsPlaying && (u32)houdai->mCurAnim->mType == KEYEVENT_END) {
		houdai->throwupItem();
		houdai->finishChimneyEffect();
		houdai->createDeadBombEffect();

		Vector3f position = houdai->getPosition();
		cameraMgr->startVibration(VIBTYPE_HardMidShort, position, CAMNAVI_Both);
		houdai->kill(nullptr);
	}
}

/**
 * @note Address: 0x802BDE9C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BDEA0
 * @note Size: 0x78
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

/**
 * @note Address: 0x802BDF18
 * @note Size: 0xC4
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (!houdai->isEvent(0, EB_TakingDamage)) {
		bool isTarget;
		f32 detectRadius = CG_GENERALPARMS(houdai).mPrivateRadius.mValue;
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

/**
 * @note Address: 0x802BDFDC
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BDFE0
 * @note Size: 0xE4
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
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_HoudaiStart, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802BE0C4
 * @note Size: 0x2F0
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (houdai->isStopMotion()) {
		bool isTarget;
		f32 detectRadius = CG_GENERALPARMS(houdai).mPrivateRadius.mValue;
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
			cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_HoudaiStart, position, RUMBLEID_Both);
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

/**
 * @note Address: 0x802BE3B4
 * @note Size: 0x50
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->disableEvent(0, EB_BitterImmune);
	houdai->startProgramedIK();
	houdai->startSteamEffect(true);
	houdai->setBossAppearBGM();
}

/**
 * @note Address: 0x802BE404
 * @note Size: 0x98
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

/**
 * @note Address: 0x802BE49C
 * @note Size: 0x118
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

/**
 * @note Address: 0x802BE5B4
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BE5B8
 * @note Size: 0x64
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

/**
 * @note Address: 0x802BE61C
 * @note Size: 0xF0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	if (houdai->mCurAnim->mIsPlaying) {
		if ((u32)houdai->mCurAnim->mType == KEYEVENT_2) {
			houdai->startChimneyEffect();

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_3) {
			Parms* parms = CG_PARMS(houdai);
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

/**
 * @note Address: 0x802BE70C
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->finishBlendMotion();
}

/**
 * @note Address: 0x802BE730
 * @note Size: 0x98
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

/**
 * @note Address: 0x802BE7C8
 * @note Size: 0x100
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

/**
 * @note Address: 0x802BE8C8
 * @note Size: 0x4
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802BE8CC
 * @note Size: 0x90
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

/**
 * @note Address: 0x802BE95C
 * @note Size: 0x3B0
 */
void StateShot::exec(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);

	if (houdai->isStopMotion()) {
		if (houdai->mShotGunState != 0) {
			if (houdai->isFinishMotion() || houdai->mShotGunSearchTimer > CG_PROPERPARMS(houdai).mMaxShootingOff.mValue) {
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
		if (houdai->mStateTimer > CG_GENERALPARMS(houdai).mSearchAngle.mValue) {
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
				Parms* parms = CG_PARMS(houdai);
				EnemyFunc::flickStickPikmin(houdai, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
				                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
				houdai->mFlickTimer = 0.0f;
				houdai->emitShotGun();
			}

		} else if ((u32)houdai->mCurAnim->mType == KEYEVENT_4) {
			if (!houdai->isFinishMotion()) {
				Parms* parms2 = CG_PARMS(houdai);
				if (parms2->mGeneral.mSearchAngle.mValue - houdai->mStateTimer > parms2->mProperParms.mMaxShootingOff.mValue
				    && houdai->mShotGunSearchTimer > parms2->mProperParms.mMaxShootingOn.mValue) {
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

/**
 * @note Address: 0x802BED0C
 * @note Size: 0x38
 */
void StateShot::cleanup(EnemyBase* enemy)
{
	Obj* houdai = OBJ(enemy);
	houdai->finishBlendMotion();
	houdai->finishBossAttackLoopBGM();
}

} // namespace Houdai
} // namespace Game
