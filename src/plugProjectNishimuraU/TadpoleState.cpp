#include "Game/Entities/Tadpole.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Tadpole {

/**
 * @note Address: 0x8027730C
 * @note Size: 0x224
 */
void FSM::init(EnemyBase* enemy)
{
	create(TADPOLE_StateCount);

	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateAmaze);
	registerState(new StateEscape);
	registerState(new StateLeap);
}

/**
 * @note Address: 0x80277530
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TADPOLEANIM_Dead, nullptr);
}

/**
 * @note Address: 0x8027758C
 * @note Size: 0x58
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);
	if (tadpole->mCurAnim->mIsPlaying) {
		if (tadpole->mCurAnim->mType == KEYEVENT_2) {
			tadpole->createLeapEffect();
		} else if (tadpole->mCurAnim->mType == KEYEVENT_END) {
			tadpole->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802775E4
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802775E8
 * @note Size: 0x48
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole             = OBJ(enemy);
	tadpole->mStateTimer     = 0.0f;
	tadpole->mNextState      = TADPOLE_Move;
	tadpole->mTargetVelocity = Vector3f(0.0f);
	tadpole->startMotion(TADPOLEANIM_Wait, nullptr);
}

/**
 * @note Address: 0x80277630
 * @note Size: 0x15C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);
	if (tadpole->mStateTimer > 3.0f) {
		tadpole->finishMotion();
	}

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_GENERALPARMS(tadpole).mViewAngle.mValue,
	                                       CG_GENERALPARMS(tadpole).mSightRadius.mValue, nullptr, nullptr);
	if (navi) {
		tadpole->mTargetPosition = Vector3f(tadpole->getTargetPosition(navi));
		tadpole->mNextState      = TADPOLE_Amaze;
		tadpole->finishMotion();
	}

	tadpole->mStateTimer += sys->mDeltaTime;

	if (tadpole->mHealth <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (!tadpole->mWaterBox) {
		transit(tadpole, TADPOLE_Leap, nullptr);
	}

	if (tadpole->mCurAnim->mIsPlaying && tadpole->mCurAnim->mType == KEYEVENT_END) {
		transit(tadpole, tadpole->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8027778C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80277790
 * @note Size: 0x54
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole         = OBJ(enemy);
	tadpole->mStateTimer = 0.0f;
	tadpole->setRandTarget(false);
	tadpole->mNextState = TADPOLE_Wait;
	tadpole->startMotion(TADPOLEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802777E4
 * @note Size: 0x210
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* tadpole        = OBJ(enemy);
	Vector3f tadpolePos = tadpole->getPosition();
	Vector3f targetPos  = Vector3f(tadpole->mTargetPosition);

	EnemyFunc::walkToTarget(tadpole, targetPos, CG_GENERALPARMS(tadpole).mMoveSpeed.mValue, CG_GENERALPARMS(tadpole).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(tadpole).mMaxTurnAngle.mValue);

	if (tadpole->mStateTimer > 3.0f || sqrDistanceXZ(tadpolePos, targetPos) < 100.0f) {
		tadpole->mTargetVelocity = Vector3f(0.0f);
		tadpole->finishMotion();
	}

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_GENERALPARMS(tadpole).mViewAngle.mValue,
	                                       CG_GENERALPARMS(tadpole).mSightRadius.mValue, nullptr, nullptr);
	if (navi) {
		tadpole->mTargetPosition = Vector3f(tadpole->getTargetPosition(navi));
		tadpole->mNextState      = TADPOLE_Amaze;
		tadpole->mTargetVelocity = Vector3f(0.0f);
		tadpole->finishMotion();
	}

	tadpole->mStateTimer += sys->mDeltaTime;

	if (tadpole->mHealth <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (!tadpole->mWaterBox) {
		transit(tadpole, TADPOLE_Leap, nullptr);
	}

	if (tadpole->mCurAnim->mIsPlaying && tadpole->mCurAnim->mType == KEYEVENT_END) {
		transit(tadpole, tadpole->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802779F4
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802779F8
 * @note Size: 0x5C
 */
void StateAmaze::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(TADPOLEANIM_Amaze, nullptr);
}

/**
 * @note Address: 0x80277A54
 * @note Size: 0xB4
 */
void StateAmaze::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);
	if (tadpole->mCurAnim->mIsPlaying) {
		if (tadpole->mCurAnim->mType == KEYEVENT_2) {
			tadpole->enableEvent(0, EB_NoInterrupt);
			tadpole->createLeapEffect();
			EnemyFunc::flickNearbyPikmin(tadpole, CG_GENERALPARMS(tadpole).mShakeRange.mValue,
			                             CG_GENERALPARMS(tadpole).mShakeKnockback.mValue, CG_GENERALPARMS(tadpole).mShakeDamage.mValue,
			                             FLICK_BACKWARD_ANGLE, nullptr);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_3) {
			tadpole->disableEvent(0, EB_NoInterrupt);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_END) {
			transit(tadpole, TADPOLE_Escape, nullptr);
		}
	}
}

/**
 * @note Address: 0x80277B08
 * @note Size: 0x30
 */
void StateAmaze::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80277B38
 * @note Size: 0x40
 */
void StateEscape::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(TADPOLEANIM_Move, nullptr);
}

/**
 * @note Address: 0x80277B78
 * @note Size: 0x168
 */
void StateEscape::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_GENERALPARMS(tadpole).mViewAngle.mValue,
	                                       CG_GENERALPARMS(tadpole).mSightRadius.mValue, nullptr, nullptr);
	if (navi) {
		Vector3f tadpolePos = tadpole->getPosition(); // this is pointless
		Vector3f targetPos  = tadpole->getTargetPosition(navi);

		EnemyFunc::walkToTarget(tadpole, targetPos, CG_GENERALPARMS(tadpole).mMoveSpeed.mValue, CG_GENERALPARMS(tadpole).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(tadpole).mMaxTurnAngle.mValue);

	} else {
		tadpole->finishMotion();
	}

	if (tadpole->mHealth <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (!tadpole->mWaterBox) {
		transit(tadpole, TADPOLE_Leap, nullptr);
	}

	if (tadpole->mCurAnim->mIsPlaying && tadpole->mCurAnim->mType == KEYEVENT_END) {
		transit(tadpole, TADPOLE_Wait, nullptr);
	}
}

/**
 * @note Address: 0x80277CE0
 * @note Size: 0x24
 */
void StateEscape::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x80277D04
 * @note Size: 0xE0
 */
void StateLeap::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole         = OBJ(enemy);
	tadpole->mStateTimer = 0.0f;
	tadpole->setRandTarget(true);
	if (randWeightFloat(1.0f) < 0.5f) {
		tadpole->mLeapDirection = true;
	} else {
		tadpole->mLeapDirection = false;
	}

	tadpole->mNextState = TADPOLE_NULL;
	tadpole->enableEvent(0, EB_NoInterrupt);
	tadpole->startMotion(TADPOLEANIM_Piti, nullptr);
	tadpole->mTargetVelocity = Vector3f(tadpole->getVelocity());
}

/**
 * @note Address: 0x80277DE4
 * @note Size: 0x3FC
 */
void StateLeap::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);

	if (tadpole->isFinishMotion()) {
		tadpole->mTargetVelocity = Vector3f(0.0f);
	} else if (tadpole->getMotionFrame() >= 15.0f) {
		Vector3f tadpolePos = tadpole->getPosition();
		Vector3f targetPos  = tadpole->mTargetPosition;
		if (tadpole->mWaterBox) {
			tadpole->mNextState = TADPOLE_Wait;
			tadpole->finishMotion();
		} else if (tadpole->mStateTimer > 10.0f || sqrDistanceXZ(tadpolePos, targetPos) < 100.0f) {
			tadpole->mStateTimer = 0.0f;
			tadpole->setRandTarget(true);
		}

		f32 angle = 0.0f;
		if (tadpole->mLeapDirection) {
			angle += 0.15f;
		} else {
			angle -= 0.15f;
		}

		f32 adjustedDir = angle + tadpole->getFaceDir();
		clampAngle(adjustedDir);

		// f1-f2 regswap. smfh.
		tadpole->mFaceDir    = adjustedDir;
		tadpole->mRotation.y = tadpole->mFaceDir;

		Vector3f targetVel = tadpole->mTargetVelocity;
		Vector3f diff(targetPos.x - tadpolePos.x, 0.0f, targetPos.z - tadpolePos.z);

		diff.normalise();

		diff *= CG_PROPERPARMS(tadpole).mPitterPatterMoveSpeed.mValue;

		tadpole->mTargetVelocity.x = 0.1f * (diff.x - targetVel.x) + targetVel.x;
		tadpole->mTargetVelocity.y = diff.y;
		tadpole->mTargetVelocity.z = 0.1f * (diff.z - targetVel.z) + targetVel.z;
	}

	tadpole->mStateTimer += sys->mDeltaTime;

	if (tadpole->mHealth <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (tadpole->mCurAnim->mIsPlaying) {
		if (tadpole->mCurAnim->mType == KEYEVENT_2) {
			tadpole->createLeapEffect();

		} else if (tadpole->mCurAnim->mType == KEYEVENT_3) {
			tadpole->disableEvent(0, EB_NoInterrupt);
			tadpole->createLeapEffect();

		} else if (tadpole->mCurAnim->mType == KEYEVENT_4) {
			tadpole->enableEvent(0, EB_NoInterrupt);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_LOOP_START) {
			tadpole->enableEvent(0, EB_NoInterrupt);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_LOOP_END) {
			tadpole->disableEvent(0, EB_NoInterrupt);
			tadpole->createLeapEffect();
			if (randWeightFloat(1.0f) < 0.5f) {
				tadpole->mLeapDirection = true;
			} else {
				tadpole->mLeapDirection = false;
			}

		} else if (tadpole->mCurAnim->mType == KEYEVENT_END) {
			Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_GENERALPARMS(tadpole).mViewAngle.mValue,
			                                       CG_GENERALPARMS(tadpole).mSightRadius.mValue, nullptr, nullptr);
			if (navi) {
				tadpole->mTargetPosition = Vector3f(tadpole->getTargetPosition(navi));
				tadpole->mNextState      = TADPOLE_Amaze;
			}

			transit(tadpole, tadpole->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802781E0
 * @note Size: 0x10
 */
void StateLeap::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }
} // namespace Tadpole
} // namespace Game
