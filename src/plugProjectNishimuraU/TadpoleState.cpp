#include "Game/Entities/Tadpole.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Tadpole {

/*
 * --INFO--
 * Address:	8027730C
 * Size:	000224
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

/*
 * --INFO--
 * Address:	80277530
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TADPOLEANIM_Dead, nullptr);
}

/*
 * --INFO--
 * Address:	8027758C
 * Size:	000058
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

/*
 * --INFO--
 * Address:	802775E4
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802775E8
 * Size:	000048
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole             = OBJ(enemy);
	tadpole->mStateTimer     = 0.0f;
	tadpole->mNextState      = TADPOLE_Move;
	tadpole->mTargetVelocity = Vector3f(0.0f);
	tadpole->startMotion(TADPOLEANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	80277630
 * Size:	00015C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);
	if (tadpole->mStateTimer > 3.0f) {
		tadpole->finishMotion();
	}

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->mGeneral.mViewAngle.mValue,
	                                       CG_PARMS(tadpole)->mGeneral.mSightRadius.mValue, nullptr, nullptr);
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

/*
 * --INFO--
 * Address:	8027778C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80277790
 * Size:	000054
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole         = OBJ(enemy);
	tadpole->mStateTimer = 0.0f;
	tadpole->setRandTarget(false);
	tadpole->mNextState = TADPOLE_Wait;
	tadpole->startMotion(TADPOLEANIM_Move, nullptr);
}

/*
 * --INFO--
 * Address:	802777E4
 * Size:	000210
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* tadpole        = OBJ(enemy);
	Vector3f tadpolePos = tadpole->getPosition();
	Vector3f targetPos  = Vector3f(tadpole->mTargetPosition);

	EnemyFunc::walkToTarget(tadpole, targetPos, CG_PARMS(tadpole)->mGeneral.mMoveSpeed.mValue,
	                        CG_PARMS(tadpole)->mGeneral.mTurnSpeed.mValue, CG_PARMS(tadpole)->mGeneral.mMaxTurnAngle.mValue);

	if (tadpole->mStateTimer > 3.0f || sqrDistanceXZ(tadpolePos, targetPos) < 100.0f) {
		tadpole->mTargetVelocity = Vector3f(0.0f);
		tadpole->finishMotion();
	}

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->mGeneral.mViewAngle.mValue,
	                                       CG_PARMS(tadpole)->mGeneral.mSightRadius.mValue, nullptr, nullptr);
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

/*
 * --INFO--
 * Address:	802779F4
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802779F8
 * Size:	00005C
 */
void StateAmaze::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(TADPOLEANIM_Amaze, nullptr);
}

/*
 * --INFO--
 * Address:	80277A54
 * Size:	0000B4
 */
void StateAmaze::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);
	if (tadpole->mCurAnim->mIsPlaying) {
		if (tadpole->mCurAnim->mType == KEYEVENT_2) {
			tadpole->enableEvent(0, EB_NoInterrupt);
			tadpole->createLeapEffect();
			EnemyFunc::flickNearbyPikmin(tadpole, CG_PARMS(tadpole)->mGeneral.mShakeRange.mValue,
			                             CG_PARMS(tadpole)->mGeneral.mShakeKnockback.mValue,
			                             CG_PARMS(tadpole)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_3) {
			tadpole->disableEvent(0, EB_NoInterrupt);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_END) {
			transit(tadpole, TADPOLE_Escape, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80277B08
 * Size:	000030
 */
void StateAmaze::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80277B38
 * Size:	000040
 */
void StateEscape::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(TADPOLEANIM_Move, nullptr);
}

/*
 * --INFO--
 * Address:	80277B78
 * Size:	000168
 */
void StateEscape::exec(EnemyBase* enemy)
{
	Obj* tadpole = OBJ(enemy);

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->mGeneral.mViewAngle.mValue,
	                                       CG_PARMS(tadpole)->mGeneral.mSightRadius.mValue, nullptr, nullptr);
	if (navi) {
		Vector3f tadpolePos = tadpole->getPosition(); // this is pointless
		Vector3f targetPos  = tadpole->getTargetPosition(navi);

		EnemyFunc::walkToTarget(tadpole, targetPos, CG_PARMS(tadpole)->mGeneral.mMoveSpeed.mValue,
		                        CG_PARMS(tadpole)->mGeneral.mTurnSpeed.mValue, CG_PARMS(tadpole)->mGeneral.mMaxTurnAngle.mValue);

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

/*
 * --INFO--
 * Address:	80277CE0
 * Size:	000024
 */
void StateEscape::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	80277D04
 * Size:	0000E0
 */
void StateLeap::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole         = OBJ(enemy);
	tadpole->mStateTimer = 0.0f;
	tadpole->setRandTarget(true);
	if (randWeightFloat(1.0f) < 0.5f) {
		tadpole->_2C0 = true;
	} else {
		tadpole->_2C0 = false;
	}

	tadpole->mNextState = TADPOLE_NULL;
	tadpole->enableEvent(0, EB_NoInterrupt);
	tadpole->startMotion(TADPOLEANIM_Piti, nullptr);
	tadpole->mTargetVelocity = Vector3f(tadpole->getVelocity());
}

/*
 * --INFO--
 * Address:	80277DE4
 * Size:	0003FC
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
		if (tadpole->_2C0) {
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

		diff *= CG_PARMS(tadpole)->mProperParms.mPitterPatterMoveSpeed.mValue;

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

		} else if (tadpole->mCurAnim->mType == KEYEVENT_NULL) {
			tadpole->enableEvent(0, EB_NoInterrupt);

		} else if (tadpole->mCurAnim->mType == KEYEVENT_1) {
			tadpole->disableEvent(0, EB_NoInterrupt);
			tadpole->createLeapEffect();
			if (randWeightFloat(1.0f) < 0.5f) {
				tadpole->_2C0 = true;
			} else {
				tadpole->_2C0 = false;
			}

		} else if (tadpole->mCurAnim->mType == KEYEVENT_END) {
			Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->mGeneral.mViewAngle.mValue,
			                                       CG_PARMS(tadpole)->mGeneral.mSightRadius.mValue, nullptr, nullptr);
			if (navi) {
				tadpole->mTargetPosition = Vector3f(tadpole->getTargetPosition(navi));
				tadpole->mNextState      = TADPOLE_Amaze;
			}

			transit(tadpole, tadpole->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802781E0
 * Size:	000010
 */
void StateLeap::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }
} // namespace Tadpole
} // namespace Game
