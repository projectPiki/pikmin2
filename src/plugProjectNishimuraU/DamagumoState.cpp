#include "Game/Entities/Damagumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Damagumo {

/**
 * @note Address: 0x802A43FC
 * @note Size: 0x224
 */
void FSM::init(EnemyBase* enemy)
{
	create(DAMAGUMO_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
}

/**
 * @note Address: 0x802A4620
 * @note Size: 0xCC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->forceFinishIKMotion();
	damagumo->startDeadEffect();
	damagumo->deathProcedure();
	damagumo->disableEvent(0, EB_Cullable);

	damagumo->mTargetVelocity = 0.0f;
	damagumo->setEmotionCaution();
	damagumo->startMotion(DAMAGUMOANIM_Dead, nullptr);

	Vector3f position = damagumo->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed10, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802A46EC
 * @note Size: 0x8C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	if (damagumo->mCurAnim->mIsPlaying) {
		if ((u32)damagumo->mCurAnim->mType == KEYEVENT_2) {
			damagumo->throwupItem();
			damagumo->createItemAndEnemy();
		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_3) {
			damagumo->mDoPlayDeadMatAnim = true;
		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
			damagumo->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802A4778
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802A477C
 * @note Size: 0x84
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo        = OBJ(enemy);
	damagumo->mNextState = DAMAGUMO_NULL;
	damagumo->enableEvent(0, EB_BitterImmune);
	damagumo->disableEvent(0, EB_Animating);
	damagumo->enableEvent(0, EB_ModelHidden);
	damagumo->mTargetCreature = nullptr;

	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startMotion(DAMAGUMOANIM_Landing, nullptr);
	damagumo->stopMotion();
}

/**
 * @note Address: 0x802A4800
 * @note Size: 0xB8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	bool isTarget;
	f32 detectRadius = CG_GENERALPARMS(damagumo).mPrivateRadius.mValue;
	if (EnemyFunc::isThereOlimar(damagumo, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(damagumo, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(damagumo, DAMAGUMO_Land, nullptr);
	}
}

/**
 * @note Address: 0x802A48B8
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802A48BC
 * @note Size: 0xB4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo          = OBJ(enemy);
	damagumo->mNextState   = DAMAGUMO_NULL;
	damagumo->mShadowScale = 0.001f;

	damagumo->enableEvent(0, EB_BitterImmune);
	damagumo->disableEvent(0, EB_Cullable);
	damagumo->enableEvent(0, EB_Animating);
	damagumo->disableEvent(0, EB_ModelHidden);

	damagumo->setEmotionExcitement();
	damagumo->mTargetCreature = nullptr;

	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startMotion(DAMAGUMOANIM_Landing, nullptr);

	shadowMgr->addJointShadow(damagumo);
	shadowMgr->setForceVisible(damagumo, true);
}

/**
 * @note Address: 0x802A4970
 * @note Size: 0x1E8
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->addShadowScale();

	if (damagumo->mCurAnim->mIsPlaying) {
		if ((u32)damagumo->mCurAnim->mType == KEYEVENT_2) {
			damagumo->disableEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				damagumo->createOnGroundEffect(i, damagumo->mWaterBox);
			}

			Vector3f position = damagumo->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, position, RUMBLEID_Both);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_3) {
			damagumo->createOnGroundEffect(3, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_4) {
			damagumo->createOnGroundEffect(0, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_5) {
			damagumo->createOnGroundEffect(1, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_6) {
			damagumo->createOnGroundEffect(2, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
			if (damagumo->mHealth <= 0.0f) {
				transit(damagumo, DAMAGUMO_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(damagumo, false)) {
				transit(damagumo, DAMAGUMO_Flick, nullptr);
			} else {
				transit(damagumo, DAMAGUMO_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802A4B58
 * @note Size: 0x5C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->startProgramedIK();
	damagumo->setBossAppearBGM();
	damagumo->enableEvent(0, EB_Cullable);
	damagumo->mShadowScale = 1.0f;
	shadowMgr->setForceVisible(damagumo, false);
}

/**
 * @note Address: 0x802A4BB4
 * @note Size: 0x98
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo             = OBJ(enemy);
	damagumo->mNextState      = DAMAGUMO_NULL;
	damagumo->mStateTimer     = 0.0f;
	damagumo->mStateDuration  = 1.75f + randWeightFloat(1.75f);
	damagumo->mTargetCreature = nullptr;
	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startMotion(DAMAGUMOANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802A4C4C
 * @note Size: 0xF4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->mStateTimer += sys->mDeltaTime;

	if (damagumo->mHealth <= 0.0f) {
		damagumo->mNextState = DAMAGUMO_Dead;
		damagumo->finishMotion();
	} else if (EnemyFunc::isStartFlick(damagumo, false)) {
		damagumo->mNextState = DAMAGUMO_Flick;
		damagumo->finishMotion();
	} else if (damagumo->mStateTimer > damagumo->mStateDuration) {
		damagumo->mNextState = DAMAGUMO_Walk;
		damagumo->finishMotion();
	}

	if (damagumo->mCurAnim->mIsPlaying && (u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
		transit(damagumo, damagumo->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802A4D40
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802A4D44
 * @note Size: 0x64
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo             = OBJ(enemy);
	damagumo->mNextState      = DAMAGUMO_NULL;
	damagumo->mStateTimer     = 0.0f;
	damagumo->mTargetCreature = nullptr;
	damagumo->mTargetVelocity = Vector3f(0.0f);

	damagumo->startMotion(DAMAGUMOANIM_Flick, nullptr);
	damagumo->startBlendMotion();
}

/**
 * @note Address: 0x802A4DA8
 * @note Size: 0xC8
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	if (damagumo->mCurAnim->mIsPlaying) {
		if ((u32)damagumo->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(damagumo);
			EnemyFunc::flickStickPikmin(damagumo, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			damagumo->mFlickTimer = 0.0f;
			damagumo->startBossFlickBGM();
		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
			if (damagumo->mHealth <= 0.0f) {
				transit(damagumo, DAMAGUMO_Dead, nullptr);
			} else {
				transit(damagumo, DAMAGUMO_Walk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802A4E70
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->finishBlendMotion();
}

/**
 * @note Address: 0x802A4E94
 * @note Size: 0x98
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo             = OBJ(enemy);
	damagumo->mNextState      = DAMAGUMO_NULL;
	damagumo->mStateTimer     = 0.0f;
	damagumo->mStateDuration  = 3.25f + randWeightFloat(3.25f);
	damagumo->mTargetCreature = nullptr;
	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startIKMotion();
	damagumo->getTargetPosition();
}

/**
 * @note Address: 0x802A4F2C
 * @note Size: 0x100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->getTargetPosition();
	damagumo->mStateTimer += sys->mDeltaTime;

	if (EnemyFunc::isStartFlick(damagumo, false)) {
		damagumo->mNextState = DAMAGUMO_Flick;
		damagumo->finishIKMotion();
	} else if (damagumo->mStateTimer > damagumo->mStateDuration) {
		damagumo->mNextState = DAMAGUMO_Wait;
		damagumo->finishIKMotion();
	}

	if (damagumo->mHealth <= 0.0f) {
		transit(damagumo, DAMAGUMO_Dead, nullptr);
	} else if (damagumo->isFinishIKMotion()) {
		transit(damagumo, damagumo->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802A502C
 * @note Size: 0x4
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

} // namespace Damagumo
} // namespace Game
