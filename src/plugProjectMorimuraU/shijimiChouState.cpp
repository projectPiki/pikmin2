#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TEnemyDead.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace ShijimiChou {

/**
 * @note Address: 0x80387718
 * @note Size: 0x108
 */
void FSM::init(EnemyBase* enemy)
{
	create(SHIJIMICHOU_StateCount);

	registerState(new StateWait(SHIJIMICHOU_Wait));
	registerState(new StateFly(SHIJIMICHOU_Fly));
	registerState(new StateFall(SHIJIMICHOU_Fall));
	registerState(new StateDead(SHIJIMICHOU_Dead));
	registerState(new StateLeave(SHIJIMICHOU_Leave));
	registerState(new StateRest(SHIJIMICHOU_Rest));
}

/**
 * @note Address: 0x80387820
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x8038785C
 * @note Size: 0xC0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->startMotion(SHIJIMIANIM_Move, nullptr);
	enemy->setMotionFrame(enemy->getMotionFrameMax() * randFloat());
	mWaitTimer = 0;
}

/**
 * @note Address: 0x8038791C
 * @note Size: 0x140
 */
void StateWait::exec(EnemyBase* enemy)
{
	mWaitTimer++;

	if (mWaitTimer > 10) {
		if (OBJ(enemy)->mSpawnSource == SHIJIMISOURCE_Enemy) {
			if (OBJ(enemy)->mGroupLeader != enemy) {
				transit(enemy, SHIJIMICHOU_Rest, nullptr);
				return;
			}

			EnemyBase* spawnEnemy = OBJ(enemy)->mSpawningEnemy;
			if (spawnEnemy && !spawnEnemy->isConstrained()) {
				transit(enemy, SHIJIMICHOU_Fly, nullptr);
				return;
			}

		} else if (OBJ(enemy)->mGroupLeader != enemy || EnemyFunc::getNearestPikmin(enemy, 180.0f, 150.0f, nullptr, nullptr)) {
			transit(enemy, SHIJIMICHOU_Fly, nullptr);
			return;
		}
	} else if (OBJ(enemy)->mGroupLeader == enemy) {
		OBJ(enemy)->leaderInit();
	}

	OBJ(enemy)->fly();
}

/**
 * @note Address: 0x80387A5C
 * @note Size: 0x3C
 */
StateFly::StateFly(int stateID)
    : State(stateID)
{
	mName = "fly";
}

/**
 * @note Address: 0x80387A98
 * @note Size: 0x54
 */
void StateFly::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->setNextGoal();
	OBJ(enemy)->mFlyTime = 0;
	enemy->disableEvent(0, EB_Cullable);
	mFlyTimer = 0;
}

/**
 * @note Address: 0x80387AEC
 * @note Size: 0xE8
 */
void StateFly::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->checkFlyStart()) {
		OBJ(enemy)->mFlyTime++;
	}

	if (mFlyTimer == 10) {
		OBJ(enemy)->fadeAppearEffect();
	} else {
		mFlyTimer++;
	}

	f32 flyMax = CG_PROPERPARMS(OBJ(enemy)).mMaxFlyTime.mValue;
	if (OBJ(enemy)->mSpawnSource == SHIJIMISOURCE_Plants) {
		flyMax = CG_PROPERPARMS(OBJ(enemy)).mMaxFlyTimePlant.mValue;
	}
	if (OBJ(enemy)->mSpawnSource == SHIJIMISOURCE_Enemy) {
		flyMax = 60.0f;
	}

	if (OBJ(enemy)->mFlyTime > flyMax) {
		transit(enemy, SHIJIMICHOU_Leave, nullptr);
	} else {
		OBJ(enemy)->fly();
	}
}

/**
 * @note Address: 0x80387BD4
 * @note Size: 0x3C
 */
StateFall::StateFall(int stateID)
    : State(stateID)
{
	mName = "fall";
}

/**
 * @note Address: 0x80387C10
 * @note Size: 0xD0
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_Untargetable);

	if (CG_PARMS(OBJ(enemy))->mCanFall) {
		f32 x = enemy->getTargetVelocity().x;
		f32 y = -20.0f;
		f32 z = enemy->getTargetVelocity().z;
		enemy->setTargetVelocity(Vector3f(x, y, z));
	}

	OBJ(enemy)->mFallStartPosition = enemy->getPosition();
	enemy->mSoundObj->startSound(PSSE_EN_BUTTERFLY_HIT, 0);
	mFallTimer = 0;
}

/**
 * @note Address: 0x80387CE0
 * @note Size: 0x94
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (CG_PARMS(OBJ(enemy))->mCanFall) {
		OBJ(enemy)->fallBehavior();
	}

	if (OBJ(enemy)->isFallEnd() || mFallTimer > 100) {
		transit(enemy, SHIJIMICHOU_Dead, nullptr);
	}
	mFallTimer++;
}

/**
 * @note Address: 0x80387D74
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x80387DB0
 * @note Size: 0xA0
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAlive(false);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->enableEvent(0, EB_LeaveCarcass);
	enemy->deathProcedure();
	enemy->startMotion(SHIJIMIANIM_Dead, nullptr);
	PSStartEnemyFatalHitSE(enemy, 0.0f);
	OBJ(enemy)->deadEffect();
}

/**
 * @note Address: 0x80387E50
 * @note Size: 0x114
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		OBJ(enemy)->genItem();
		PSStartEnemyGhostSE(enemy, 0.0f);
		Vector3f effectPos;
		enemy->getCommonEffectPos(effectPos);
		efx::ArgEnemyType fxArg(effectPos, EnemyTypeID::EnemyID_UjiA, 1.0f); // sure, use the female sheargrub type. whatever.
		efx::TEnemyDead deadFX;
		deadFX.create(&fxArg);
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80387F64
 * @note Size: 0x3C
 */
StateLeave::StateLeave(int stateID)
    : State(stateID)
{
	mName = "leave";
}

/**
 * @note Address: 0x80387FA0
 * @note Size: 0x44
 */
void StateLeave::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionCaution();
	enemy->enableEvent(0, EB_Cullable);
	OBJ(enemy)->leaveInit();
}

/**
 * @note Address: 0x80387FE4
 * @note Size: 0x24
 */
void StateLeave::exec(EnemyBase* enemy) { OBJ(enemy)->leave(); }

/**
 * @note Address: 0x80388008
 * @note Size: 0x3C
 */
StateRest::StateRest(int stateID)
    : State(stateID)
{
	mName = "rest";
}

/**
 * @note Address: 0x80388044
 * @note Size: 0xBC
 */
void StateRest::init(EnemyBase* enemy, StateArg* stateArg)
{
	mNeedFinishRest  = true;
	mRestTimer       = 0;
	mRestMaxTime     = 30.0f + 100.0f * randFloat();
	mIsInRest        = false;
	mRestWaitCounter = 0;
	mIsLanded        = false;

	if (gameSystem && gameSystem->isZukanMode()) {
		enemy->disableEvent(0, EB_Cullable);
	}
}

/**
 * @note Address: 0x80388100
 * @note Size: 0x34C
 */
void StateRest::exec(EnemyBase* enemy)
{
	if (!mIsInRest) {
		if (!enemy->isConstrained()) {
			OBJ(enemy)->restFly();
		}
	}

	mRestTimer++;

	if (mIsInRest) {
		mRestWaitCounter = 0;
		if (mIsLanded) {
			enemy->stopMotion();
		}

		if (mNeedFinishRest) {
			mRestTimer      = 0;
			mRestMaxTime    = 50.0f * randFloat() + 50.0f;
			mNeedFinishRest = false;
			mIsLanded       = false;
			enemy->finishMotion();

		} else if (enemy->isFinishMotion() && enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			mIsLanded = true;
			enemy->setMotionFrame(0.0f);
		}

		OBJ(enemy)->resetRestPos();

		if (mRestTimer >= mRestMaxTime) {
			if (mRestTimer == mRestMaxTime) {
				enemy->startMotion(SHIJIMIANIM_Move, nullptr);
				mIsLanded = false;
			}

			if (OBJ(enemy)->checkRestOff()) {
				enemy->hardConstraintOff();

				mNeedFinishRest = true;
				mIsInRest       = false;

				enemy->startMotion();

				Vector3f landPos = OBJ(enemy)->mSpawningEnemy->getPosition();
				Vector3f chouPos = enemy->getPosition();

				landPos.x += (chouPos.x - landPos.x);
				landPos.y += (chouPos.y - landPos.y);
				landPos.z += (chouPos.z - landPos.z);

				OBJ(enemy)->mGoalPosition = landPos;

				mRestTimer   = 0;
				mRestMaxTime = 600.0f + 400.0f * randFloat();
				enemy->startMotion(SHIJIMIANIM_Move, nullptr);
			}
		}

	} else {
		if (mRestTimer > mRestMaxTime) {
			OBJ(enemy)->mGoalPosition = Vector3f(OBJ(enemy)->mSpawningEnemy->getPosition());
		}

		mRestWaitCounter++;

		if (mRestWaitCounter > 20 && OBJ(enemy)->checkRestOn()) {
			mIsInRest       = true;
			mNeedFinishRest = true;

			enemy->mCurrentVelocity = Vector3f(0.0f);
			enemy->mTargetVelocity  = Vector3f(0.0f);
			enemy->hardConstraintOn();
		}
	}

	OBJ(enemy)->restCheck();
}
} // namespace ShijimiChou
} // namespace Game
