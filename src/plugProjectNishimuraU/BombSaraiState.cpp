#include "Game/Entities/BombSarai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace BombSarai {

static const int unusedBombSaraiArray[] = { 0, 0, 0 };
static const char bombSaraiStateName[]  = "246-BombSaraiState";

/**
 * @note Address: 0x802AFC74
 * @note Size: 0x480
 */
void FSM::init(EnemyBase* enemy)
{
	create(BOMBSARAI_StateCount);
	registerState(new StateDead);
	registerState(new StateDamage);
	registerState(new StateWait);
	registerState(new StateBombWait);
	registerState(new StateMove);
	registerState(new StateBombMove);
	registerState(new StateSupply);
	registerState(new StateRelease);
	registerState(new StateFall);
	registerState(new StateTakeOff1);
	registerState(new StateTakeOff2);
	registerState(new StateFlick);
	registerState(new StateBombFlick);
}

/**
 * @note Address: 0x802B00F4
 * @note Size: 0x94
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->disableEvent(0, EB_Cullable);
	enemy->startMotion(BOMBSARAIANIM_Dead, nullptr);
	enemy->getJAIObject()->startSound(PSSE_EN_BOMBSARAI_DEAD, 0);
}

/**
 * @note Address: 0x802B0188
 * @note Size: 0x134
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			sarai->createBalloonEffect(0);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->createBalloonEffect(1);

		} else if (sarai->mCurAnim->mType == KEYEVENT_4) {
			sarai->createBalloonEffect(2);

		} else if (sarai->mCurAnim->mType == KEYEVENT_5) {
			sarai->createBalloonEffect(3);

		} else if (sarai->mCurAnim->mType == KEYEVENT_6) {
			sarai->createBalloonEffect(4);

		} else if (sarai->mCurAnim->mType == KEYEVENT_7) {
			Vector3f pos = sarai->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
			sarai->createDownEffect(0.9f);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			sarai->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802B02BC
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802B02C0
 * @note Size: 0xB0
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai         = OBJ(enemy);
	sarai->mStateTimer = 0.0f;
	sarai->disableEvent(0, EB_NoInterrupt);
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_Struggle, nullptr);

	Vector3f pos = sarai->getPosition();
	rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802B0370
 * @note Size: 0x1B4
 */
void StateDamage::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	if (sarai->mHealth <= 0.0f || sarai->mStuckPikminCount == 0 || sarai->mStateTimer > CG_PROPERPARMS(sarai).mStruggleTime.mValue) {
		sarai->finishMotion();
	}

	sarai->mStateTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			sarai->enableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->disableEvent(0, EB_NoInterrupt);
			sarai->createDownEffect(0.8f);

			Vector3f pos = sarai->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->mHealth <= 0.0f) {
				transit(sarai, BOMBSARAI_Dead, nullptr);
				return;
			}
			if (sarai->mHealth / CG_GENERALPARMS(sarai).mHealth.mValue > 0.5f) {
				transit(sarai, BOMBSARAI_TakeOff1, nullptr);
			} else {
				transit(sarai, BOMBSARAI_TakeOff2, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802B0524
 * @note Size: 0x30
 */
void StateDamage::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B0554
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->mNextState      = BOMBSARAI_NULL;
	sarai->mStateTimer     = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802B05A8
 * @note Size: 0x148
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = sarai->setHeightVelocity(false);
	if (!sarai->isFinishMotion()) {
		Creature* target = sarai->getAttackablePikmin();
		if (target) {
			sarai->mNextState = BOMBSARAI_Supply;
			sarai->finishMotion();
		} else {
			sarai->mStateTimer += sys->mDeltaTime;
			if (sarai->mStateTimer > 3.0f) {
				sarai->mNextState = BOMBSARAI_Move;
				sarai->finishMotion();
			}
		}
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight.mValue || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B06F0
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802B06F4
 * @note Size: 0x74
 */
void StateBombWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState      = BOMBSARAI_NULL;
	sarai->mStateTimer     = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_BombWait, nullptr);
}

/**
 * @note Address: 0x802B0768
 * @note Size: 0x454
 */
void StateBombWait::exec(EnemyBase* enemy)
{
	Obj* sarai       = OBJ(enemy);
	f32 height       = sarai->setHeightVelocity(false);
	Creature* target = sarai->getAttackablePikmin();
	if (sarai->mBombCarryTimer > 15.0f) {
		sarai->mNextState = BOMBSARAI_Release;
		sarai->finishMotion();
	} else if (target) {

		if (sarai->isTargetAttackable(target, sarai->getAngDist(target), CG_GENERALPARMS(sarai).mMaxAttackRange(),
		                              CG_GENERALPARMS(sarai).mMaxAttackAngle())) {
			sarai->mNextState = BOMBSARAI_Release;
			sarai->finishMotion();
		} else {
			Vector3f saraiPos  = sarai->getPosition();
			Vector3f targetPos = target->getPosition();

			if (sqrDistanceXZ(saraiPos, targetPos) < SQUARE(CG_GENERALPARMS(sarai).mAttackRadius())) {
				sarai->mNextState = BOMBSARAI_Release;
				sarai->finishMotion();
			} else {
				sarai->mNextState = BOMBSARAI_BombMove;
				sarai->finishMotion();
			}
		}
	} else if (sarai->mStateTimer > 3.0f) {
		sarai->mNextState = BOMBSARAI_BombMove;
		sarai->finishMotion();
	}

	if (sarai->isEvent(0, EB_BitterQueued)) {
		transit(sarai, BOMBSARAI_Fall, nullptr);
		return;
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight() || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	sarai->mStateTimer += sys->getDeltaTime();
	sarai->mBombCarryTimer += sys->getDeltaTime();

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B0BBC
 * @note Size: 0x30
 */
void StateBombWait::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B0BEC
 * @note Size: 0x6C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->mNextState  = BOMBSARAI_NULL;
	sarai->mStateTimer = 0.0f;
	sarai->setRandTarget();
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_Run, nullptr);
}

/**
 * @note Address: 0x802B0C58
 * @note Size: 0x1CC
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = sarai->setHeightVelocity(false);
	if (!sarai->isFinishMotion()) {
		Creature* target = sarai->getAttackablePikmin();
		if (target) {
			sarai->mNextState = BOMBSARAI_Supply;
			sarai->finishMotion();
		} else {
			sarai->mStateTimer += sys->mDeltaTime;

			Vector3f pos       = sarai->getPosition();
			Vector3f targetPos = Vector3f(sarai->mTargetPosition);
			if (sarai->mStateTimer > 5.0f || sqrDistanceXZ(pos, targetPos) < 625.0f) {
				sarai->mNextState = BOMBSARAI_Wait;
				sarai->finishMotion();
			}

			EnemyFunc::walkToTarget(sarai, targetPos, CG_GENERALPARMS(sarai).mMoveSpeed.mValue, CG_GENERALPARMS(sarai).mTurnSpeed.mValue,
			                        CG_GENERALPARMS(sarai).mMaxTurnAngle.mValue);
		}
	} else {
		sarai->mTargetVelocity = Vector3f(0.0f);
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight.mValue || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B0E24
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802B0E28
 * @note Size: 0x80
 */
void StateBombMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState  = BOMBSARAI_NULL;
	sarai->mStateTimer = 0.0f;
	sarai->setRandTarget();
	sarai->setEmotionExcitement();
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_BombRun, nullptr);
}

/**
 * @note Address: 0x802B0EA8
 * @note Size: 0x4E4
 */
void StateBombMove::exec(EnemyBase* enemy)
{
	Obj* sarai       = OBJ(enemy);
	f32 height       = sarai->setHeightVelocity(false);
	Creature* target = sarai->getAttackablePikmin();
	Vector3f targetPos;
	Vector3f saraiPos = sarai->getPosition();
	if (sarai->mBombCarryTimer > 15.0f) {
		sarai->mNextState = BOMBSARAI_Release;
		sarai->finishMotion();
	} else if (target) {

		if (sarai->isTargetAttackable(target, sarai->getAngDist(target), CG_GENERALPARMS(sarai).mMaxAttackRange(),
		                              CG_GENERALPARMS(sarai).mMaxAttackAngle())) {
			sarai->mNextState = BOMBSARAI_Release;
			sarai->finishMotion();
		} else {
			targetPos = target->getPosition();
			if (sqrDistanceXZ(saraiPos, targetPos) < SQUARE(CG_GENERALPARMS(sarai).mAttackRadius())) {
				sarai->mNextState = BOMBSARAI_Release;
				sarai->finishMotion();
			}
		}
	} else {
		targetPos = Vector3f(sarai->mTargetPosition);

		if (sarai->mStateTimer > 5.0f || sqrDistanceXZ(saraiPos, targetPos) < 625.0f) {
			sarai->mNextState = BOMBSARAI_BombMove;
			sarai->finishMotion();
		}
	}

	if (sarai->isFinishMotion()) {
		sarai->mTargetVelocity = Vector3f(0.0f);
	} else {
		EnemyFunc::walkToTarget(sarai, targetPos, CG_GENERALPARMS(sarai).mMoveSpeed(), CG_GENERALPARMS(sarai).mTurnSpeed(),
		                        CG_GENERALPARMS(sarai).mMaxTurnAngle());
	}

	if (sarai->isEvent(0, EB_BitterQueued)) {
		transit(sarai, BOMBSARAI_Fall, nullptr);
		return;
	}

	if (height > CG_PROPERPARMS(sarai).mTransitHeight() || sarai->mStateTimer > 5.0f) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}
	}

	sarai->mStateTimer += sys->mDeltaTime;
	sarai->mBombCarryTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, sarai->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802B138C
 * @note Size: 0x30
 */
void StateBombMove::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B13BC
 * @note Size: 0x80
 */
void StateSupply::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState = BOMBSARAI_NULL;
	sarai->supplyBomb();
	sarai->setEmotionExcitement();
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->startMotion(BOMBSARAIANIM_Supply, nullptr);
	sarai->createSupliEffect();
}

/**
 * @note Address: 0x802B143C
 * @note Size: 0xAC
 */
void StateSupply::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);
	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		StateID nextState = sarai->getNextStateOnHeight();
		if (nextState >= 0) {
			transit(sarai, nextState, nullptr);
		} else {
			transit(sarai, BOMBSARAI_BombMove, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B14E8
 * @note Size: 0x38
 */
void StateSupply::cleanup(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->disableEvent(0, EB_NoInterrupt);
	sarai->mBombCarryTimer = 0.0f;
	sarai->setEmotionCaution();
}

/**
 * @note Address: 0x802B1520
 * @note Size: 0x70
 */
void StateRelease::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mNextState      = BOMBSARAI_NULL;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_Release, nullptr);
}

/**
 * @note Address: 0x802B1590
 * @note Size: 0x184
 */
void StateRelease::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			const f32 angle = sarai->getFaceDir();
			Vector3f vel(50.0f * sinf(angle), 100.0f, 50.0f * cosf(angle));
			sarai->throwBomb(vel);

			sarai->disableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			StateID stateID = sarai->getNextStateOnHeight();
			if (stateID >= 0) {
				transit(sarai, stateID, nullptr);
				return;
			}

			transit(sarai, BOMBSARAI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B1714
 * @note Size: 0x30
 */
void StateRelease::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1744
 * @note Size: 0xC4
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai         = OBJ(enemy);
	sarai->mStateTimer = 0.0f;
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(BOMBSARAIANIM_Fall, nullptr);

	Vector3f pos = sarai->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802B1808
 * @note Size: 0x2D8
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* sarai        = OBJ(enemy);
	Vector3f saraiPos = sarai->getPosition();
	f32 minY          = mapMgr->getMinY(saraiPos);
	if (saraiPos.y - minY < 35.0f || sarai->mStateTimer > 1.0f) {
		sarai->finishMotion();
	}

	sarai->mStateTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			const f32 angle = sarai->getFaceDir();
			Vector3f vel(100.0f * sinf(angle), 300.0f, 100.0f * cosf(angle));
			sarai->throwBomb(vel);
			sarai->disableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->createBalloonEffect(0);

		} else if (sarai->mCurAnim->mType == KEYEVENT_4) {
			sarai->createBalloonEffect(1);

		} else if (sarai->mCurAnim->mType == KEYEVENT_5) {
			sarai->createBalloonEffect(2);

		} else if (sarai->mCurAnim->mType == KEYEVENT_6) {
			sarai->createBalloonEffect(3);

		} else if (sarai->mCurAnim->mType == KEYEVENT_7) {
			sarai->createBalloonEffect(4);

		} else if (sarai->mCurAnim->mType == KEYEVENT_8) {
			Vector3f pos = sarai->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
			sarai->createDownEffect(0.9f);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->mHealth <= 0.0f) {
				transit(sarai, BOMBSARAI_Dead, nullptr);
			} else {
				transit(sarai, BOMBSARAI_Damage, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802B1AE0
 * @note Size: 0x30
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1B10
 * @note Size: 0x54
 */
void StateTakeOff1::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mFlickTimer = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_TakeOff1, nullptr);
}

/**
 * @note Address: 0x802B1B64
 * @note Size: 0x110
 */
void StateTakeOff1::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = 0.0f;
	if (sarai->getMotionFrame() > 45.0f) {
		sarai->enableEvent(0, EB_Untargetable);
		height = sarai->setHeightVelocity(false);
	}

	if (sarai->mHealth <= 0.0f || height > CG_PROPERPARMS(sarai).mTransitHeight.mValue) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}

		sarai->finishMotion();
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, BOMBSARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x802B1C74
 * @note Size: 0x24
 */
void StateTakeOff1::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1C98
 * @note Size: 0x54
 */
void StateTakeOff2::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mFlickTimer = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_TakeOff2, nullptr);
}

/**
 * @note Address: 0x802B1CEC
 * @note Size: 0x110
 */
void StateTakeOff2::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 height = 0.0f;
	if (sarai->getMotionFrame() > 21.0f) {
		sarai->enableEvent(0, EB_Untargetable);
		height = sarai->setHeightVelocity(true);
	}

	if (sarai->mHealth <= 0.0f || height > CG_PROPERPARMS(sarai).mTransitHeight.mValue) {
		StateID stateID = sarai->getNextStateOnHeight();
		if (stateID >= 0) {
			transit(sarai, stateID, nullptr);
			return;
		}

		sarai->finishMotion();
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, BOMBSARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x802B1DFC
 * @note Size: 0x24
 */
void StateTakeOff2::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1E20
 * @note Size: 0x4C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802B1E6C
 * @note Size: 0xE0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(sarai, CG_GENERALPARMS(sarai).mShakeChance.mValue, CG_GENERALPARMS(sarai).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(sarai).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			sarai->mFlickTimer = 0.0f;

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			StateID stateID = sarai->getNextStateOnHeight();
			if (stateID >= 0) {
				transit(sarai, stateID, nullptr);
				return;
			}

			transit(sarai, BOMBSARAI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B1F4C
 * @note Size: 0x24
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802B1F70
 * @note Size: 0x58
 */
void StateBombFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->enableEvent(0, EB_NoInterrupt);
	enemy->setEmotionExcitement();
	enemy->startMotion(BOMBSARAIANIM_BombFlick, nullptr);
}

/**
 * @note Address: 0x802B1FC8
 * @note Size: 0x110
 */
void StateBombFlick::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity(false);

	if (sarai->isEvent(0, EB_BitterQueued)) {
		transit(sarai, BOMBSARAI_Fall, nullptr);
		return;
	}

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(sarai, CG_GENERALPARMS(sarai).mShakeChance.mValue, CG_GENERALPARMS(sarai).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(sarai).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			sarai->mFlickTimer = 0.0f;

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			StateID stateID = sarai->getNextStateOnHeight();
			if (stateID >= 0) {
				transit(sarai, stateID, nullptr);
				return;
			}

			transit(sarai, BOMBSARAI_BombMove, nullptr);
		}
	}
}

/**
 * @note Address: 0x802B20D8
 * @note Size: 0x30
 */
void StateBombFlick::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}
} // namespace BombSarai
} // namespace Game
