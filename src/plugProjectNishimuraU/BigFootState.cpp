#include "Game/Entities/BigFoot.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace BigFoot {

/**
 * @note Address: 0x802C62E8
 * @note Size: 0x224
 */
void FSM::init(EnemyBase* enemy)
{
	create(BIGFOOT_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
}

/**
 * @note Address: 0x802C650C
 * @note Size: 0xCC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->forceFinishIKMotion();
	bigfoot->startDeadEffect();
	bigfoot->deathProcedure();
	bigfoot->disableEvent(0, EB_Cullable);

	bigfoot->mTargetVelocity = 0.0f;
	bigfoot->setEmotionCaution();
	bigfoot->startMotion(BIGFOOTANIM_Dead, nullptr);

	Vector3f position = bigfoot->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed10, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802C65D8
 * @note Size: 0x94
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->updateDeadFurEffect();

	if (bigfoot->mCurAnim->mIsPlaying) {
		if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_2) {
			bigfoot->throwupItem();
			bigfoot->createItemAndEnemy();
		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_3) {
			bigfoot->mUpdateMaterialAnim = 1;
		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
			bigfoot->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802C666C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802C6670
 * @note Size: 0x84
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot        = OBJ(enemy);
	bigfoot->mNextState = BIGFOOT_NULL;
	bigfoot->enableEvent(0, EB_BitterImmune);
	bigfoot->disableEvent(0, EB_Animating);
	bigfoot->enableEvent(0, EB_ModelHidden);
	bigfoot->mTargetCreature = nullptr;

	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startMotion(BIGFOOTANIM_Landing, nullptr);
	bigfoot->stopMotion();
}

/**
 * @note Address: 0x802C66F4
 * @note Size: 0xB8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bool isTarget;
	f32 detectRadius = CG_GENERALPARMS(bigfoot).mPrivateRadius.mValue;
	if (EnemyFunc::isThereOlimar(bigfoot, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(bigfoot, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(bigfoot, BIGFOOT_Land, nullptr);
	}
}

/**
 * @note Address: 0x802C67AC
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802C67B0
 * @note Size: 0xB4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot          = OBJ(enemy);
	bigfoot->mNextState   = BIGFOOT_NULL;
	bigfoot->mShadowScale = 0.001f;

	bigfoot->enableEvent(0, EB_BitterImmune);
	bigfoot->disableEvent(0, EB_Cullable);
	bigfoot->enableEvent(0, EB_Animating);
	bigfoot->disableEvent(0, EB_ModelHidden);

	bigfoot->setEmotionExcitement();
	bigfoot->mTargetCreature = nullptr;

	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startMotion(BIGFOOTANIM_Landing, nullptr);

	shadowMgr->addJointShadow(bigfoot);
	shadowMgr->setForceVisible(bigfoot, true);
}

/**
 * @note Address: 0x802C6864
 * @note Size: 0x178
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->addShadowScale();

	if (bigfoot->mCurAnim->mIsPlaying) {
		if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_2) {
			bigfoot->disableEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				bigfoot->createOnGroundEffect(i, bigfoot->mWaterBox);
			}

			Vector3f position = bigfoot->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, position, RUMBLEID_Both);

		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
			if (bigfoot->mHealth <= 0.0f) {
				transit(bigfoot, BIGFOOT_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(bigfoot, false)) {
				transit(bigfoot, BIGFOOT_Flick, nullptr);
			} else {
				transit(bigfoot, BIGFOOT_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802C69DC
 * @note Size: 0x5C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->startProgramedIK();
	bigfoot->setBossAppearBGM();
	bigfoot->enableEvent(0, EB_Cullable);
	bigfoot->mShadowScale = 1.0f;
	shadowMgr->setForceVisible(bigfoot, false);
}

/**
 * @note Address: 0x802C6A38
 * @note Size: 0x70
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot         = OBJ(enemy);
	bigfoot->mNextState  = BIGFOOT_NULL;
	bigfoot->mStateTimer = 0.0f;
	bigfoot->resetFlickWalkTimeMax();
	bigfoot->setIKParameter();
	bigfoot->mTargetCreature = nullptr;
	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startMotion(BIGFOOTANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802C6AA8
 * @note Size: 0xF4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->mStateTimer += sys->mDeltaTime;

	if (bigfoot->mHealth <= 0.0f) {
		bigfoot->mNextState = BIGFOOT_Dead;
		bigfoot->finishMotion();
	} else if (EnemyFunc::isStartFlick(bigfoot, false)) {
		bigfoot->mNextState = BIGFOOT_Flick;
		bigfoot->finishMotion();
	} else if (bigfoot->mStateTimer > 5.0f) {
		bigfoot->mNextState = BIGFOOT_Walk;
		bigfoot->finishMotion();
	}

	if (bigfoot->mCurAnim->mIsPlaying && (u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
		transit(bigfoot, bigfoot->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802C6B9C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802C6BA0
 * @note Size: 0x6C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot             = OBJ(enemy);
	bigfoot->mNextState      = BIGFOOT_NULL;
	bigfoot->mStateTimer     = 0.0f;
	bigfoot->mTargetCreature = nullptr;
	bigfoot->mTargetVelocity = Vector3f(0.0f);

	bigfoot->startMotion(BIGFOOTANIM_Flick, nullptr);
	bigfoot->startBlendMotion();
	bigfoot->startBossChargeBGM();
}

/**
 * @note Address: 0x802C6C0C
 * @note Size: 0xC0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	if (bigfoot->mCurAnim->mIsPlaying) {
		if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(bigfoot);
			EnemyFunc::flickStickPikmin(bigfoot, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			bigfoot->mFlickTimer = 0.0f;
		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
			if (bigfoot->mHealth <= 0.0f) {
				transit(bigfoot, BIGFOOT_Dead, nullptr);
			} else {
				transit(bigfoot, BIGFOOT_Walk, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802C6CCC
 * @note Size: 0x48
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->finishBlendMotion();
	bigfoot->setFlickWalkTimeMax();
	bigfoot->mIsEnraged = true;
	bigfoot->setIKParameter();
}

/**
 * @note Address: 0x802C6D14
 * @note Size: 0x70
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot             = OBJ(enemy);
	bigfoot->mNextState      = BIGFOOT_NULL;
	bigfoot->mStateTimer     = 0.0f;
	bigfoot->mTargetCreature = nullptr;
	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startIKMotion();
	bigfoot->getTargetPosition();

	if (bigfoot->mIsEnraged) {
		bigfoot->startBossAttackLoopBGM();
	}
}

/**
 * @note Address: 0x802C6D84
 * @note Size: 0x100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->getTargetPosition();
	bigfoot->mStateTimer += sys->mDeltaTime;
	if (bigfoot->mHealth <= 0.0f) {
		transit(bigfoot, BIGFOOT_Dead, nullptr);
	} else {
		if (EnemyFunc::isStartFlick(bigfoot, false)) {
			bigfoot->mNextState = BIGFOOT_Flick;
			bigfoot->finishIKMotion();
		} else if (bigfoot->mStateTimer > bigfoot->mFlickWalkTimeMax) {
			bigfoot->mNextState = BIGFOOT_Wait;
			bigfoot->finishIKMotion();
		}

		if (bigfoot->isFinishIKMotion()) {
			transit(bigfoot, bigfoot->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802C6E84
 * @note Size: 0x38
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	if (bigfoot->mIsEnraged) {
		bigfoot->mIsEnraged = false;
		bigfoot->finishBossAttackLoopBGM();
	}
}

} // namespace BigFoot
} // namespace Game
