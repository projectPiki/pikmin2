#include "Game/Entities/KochappyBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/gamePlayData.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace KochappyBase {

/**
 * @note Address: 0x8010F874
 * @note Size: 0x198
 */
void FSM::init(EnemyBase* enemy)
{
	create(KOCHAPPY_Count);
	registerState(new StateWait(KOCHAPPY_Wait));
	registerState(new StateDead(KOCHAPPY_Dead));
	registerState(new StateTurn(KOCHAPPY_Turn));
	registerState(new StateWalk(KOCHAPPY_Walk));
	registerState(new StateAttack(KOCHAPPY_Attack));
	registerState(new StateFlick(KOCHAPPY_Flick));
	registerState(new StateTurnToHome(KOCHAPPY_TurnToHome));
	registerState(new StateGoHome(KOCHAPPY_GoHome));
	registerState(new StatePress(KOCHAPPY_Press));
	registerState(new StateDemo(KOCHAPPY_Demo));
}

/**
 * @note Address: 0x8010FA0C
 * @note Size: 0x3C
 */
StatePress::StatePress(int stateID)
    : State(stateID)
{
	mName = "press";
}

/**
 * @note Address: 0x8010FA48
 * @note Size: 0x54
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->startMotion(KOCHAPPYANIM_Press, nullptr);
	enemy->deathProcedure();
	enemy->mCurAnim->mIsPlaying = false;
}

/**
 * @note Address: 0x8010FA9C
 * @note Size: 0x50
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, KOCHAPPY_Demo, nullptr);
	}
}

/**
 * @note Address: 0x8010FAEC
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x8010FB28
 * @note Size: 0xC8
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(KOCHAPPYANIM_Wait, nullptr);
	enemy->mTargetCreature = nullptr;
	if ((int)stateArg == 'rand') {
		enemy->setMotionFrame(randFloat() * enemy->getFirstKeyFrame());
	}

	OBJ(enemy)->setAnimationSpeed(30.0f);
	enemy->enableEvent(0, EB_Constrained);
}

/**
 * @note Address: 0x8010FBF0
 * @note Size: 0x308
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (EnemyFunc::isStartFlick(enemy, true)) {
		FlickArg flickArg;
		flickArg._00 = 2;
		transit(enemy, KOCHAPPY_Flick, &flickArg);
	} else {
		if (!enemy->mTargetCreature) {
			Parms* parms = CG_PARMS(enemy);
			Creature* target
			    = EnemyFunc::getNearestPikminOrNavi(enemy, 180.0f, parms->mGeneral.mSightRadius.mValue, nullptr, nullptr, nullptr);
			if (target) {
				enemy->mTargetCreature = target;
				enemy->finishMotion();
			}
		}

		if (enemy->mCurAnim->mIsPlaying) {
			switch (enemy->mCurAnim->mType) {
			case KEYEVENT_2:
				enemy->getJAIObject()->startSound(PSSE_EN_KOCHAPPY_NOTICE, 0);
				break;
			case KEYEVENT_END:
				Parms* parms = CG_PARMS(enemy);
				if (enemy->turnToTarget(enemy->mTargetCreature, CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle(),
				                        parms->mProperParms.mRotationEndAngle())) {
					transit(enemy, KOCHAPPY_Walk, nullptr);
				} else {
					transit(enemy, KOCHAPPY_Turn, nullptr);
				}
				break;
			}
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x8010FEF8
 * @note Size: 0x24
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
}

/**
 * @note Address: 0x8010FF1C
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x8010FF58
 * @note Size: 0x40
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(KOCHAPPYANIM_Dead, nullptr);
	enemy->deathProcedure();
}

/**
 * @note Address: 0x8010FF98
 * @note Size: 0x50
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, KOCHAPPY_Demo, nullptr);
	}
}

/**
 * @note Address: 0x8010FFE8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8010FFEC
 * @note Size: 0x3C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	mName = "turn";
}

/**
 * @note Address: 0x80110028
 * @note Size: 0x54
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(KOCHAPPYANIM_Turn, nullptr);
	mNextState = -1;
}

/**
 * @note Address: 0x8011007C
 * @note Size: 0x710
 */
void StateTurn::exec(EnemyBase* enemy)
{
	if (EnemyFunc::isStartFlick(enemy, true)) {
		transit(enemy, KOCHAPPY_Flick, nullptr);
	} else {
		f32 privateRadius = CG_GENERALPARMS(enemy).mPrivateRadius();
		bool check        = EnemyFunc::isPikminOrNaviInRange(enemy, privateRadius) || enemy->isAlertLife();
		if (check) {
			OBJ(enemy)->mAlertTime = 0.0f;
		}
		f32 viewAngle, searchAngle;
		if (OBJ(enemy)->mAlertTime < CG_GENERALPARMS(enemy).mAlertDuration()) {
			viewAngle = 180.0f;
			OBJ(enemy)->mAlertTime += sys->mDeltaTime;
			searchAngle = viewAngle;
		} else {
			viewAngle   = CG_GENERALPARMS(enemy).mViewAngle();
			searchAngle = CG_GENERALPARMS(enemy).mSearchAngle();
		}
		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(enemy, searchAngle, CG_GENERALPARMS(enemy).mSearchDistance, nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;
			f32 angle              = enemy->getAngDist(enemy->mTargetCreature);
			if (enemy->isTargetAttackable(angle, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				mNextState = KOCHAPPY_Attack;
				enemy->finishMotion();
				OBJ(enemy)->setAnimationSpeed(60.0f);
			} else {
				if (enemy->isTargetOutOfRange(enemy->mTargetCreature, angle, CG_GENERALPARMS(enemy).mPrivateRadius(),
				                              CG_GENERALPARMS(enemy).mSightRadius(), CG_GENERALPARMS(enemy).mFov(), viewAngle)) {
					mNextState = KOCHAPPY_TurnToHome;
					enemy->finishMotion();
				} else {
					if (enemy->turnToTarget(enemy->mTargetCreature, CG_GENERALPARMS(enemy).mTurnSpeed(),
					                        CG_GENERALPARMS(enemy).mMaxTurnAngle(), CG_PROPERPARMS(enemy).mRotationEndAngle())) {
						mNextState = KOCHAPPY_Walk;
						enemy->finishMotion();
						OBJ(enemy)->setAnimationSpeed(60.0f);
					}
				}
			}
		} else {
			mNextState = KOCHAPPY_TurnToHome;
			enemy->finishMotion();
		}

		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, mNextState, nullptr);
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x8011078C
 * @note Size: 0x24
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x801107B0
 * @note Size: 0x44
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mNextState = -1;
	mName      = "Walk";
}

/**
 * @note Address: 0x801107F4
 * @note Size: 0x80
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kochappy = OBJ(enemy);
	kochappy->setEmotionExcitement();
	Parms* parms = kochappy->getParms();
	kochappy->setAnimationSpeed(40.0f * (parms->mGeneral.mMoveSpeed.mValue / 50.0f));
	kochappy->startMotion(KOCHAPPYANIM_Move, nullptr);
	mNextState = -1;
}

/**
 * @note Address: 0x80110874
 * @note Size: 0x6E4
 */
void StateWalk::exec(EnemyBase* enemy)
{
	if (EnemyFunc::isStartFlick(enemy, true)) {
		transit(enemy, KOCHAPPY_Flick, nullptr);
	} else {
		f32 privateRadius = CG_GENERALPARMS(enemy).mPrivateRadius();
		bool check        = EnemyFunc::isPikminOrNaviInRange(enemy, privateRadius) || enemy->isAlertLife();
		if (check) {
			OBJ(enemy)->mAlertTime = 0.0f;
		}
		f32 searchAngle;
		if (OBJ(enemy)->mAlertTime < CG_GENERALPARMS(enemy).mAlertDuration()) {
			searchAngle = 180.0f;
			OBJ(enemy)->mAlertTime += sys->mDeltaTime;
		} else {
			searchAngle = CG_GENERALPARMS(enemy).mSearchAngle();
		}
		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(enemy, searchAngle, CG_GENERALPARMS(enemy).mSearchDistance(), nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;
			f32 angle              = enemy->getAngDist(enemy->mTargetCreature);
			if (enemy->isTargetAttackable(angle, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				mNextState = KOCHAPPY_Attack;
				enemy->finishMotion();
				enemy->mTargetVelocity = Vector3f(0.0f);
				OBJ(enemy)->setAnimationSpeed(60.0f);
			} else if (enemy->isTargetOutOfRange(enemy->mTargetCreature, angle, CG_GENERALPARMS(enemy).mPrivateRadius(),
			                                     CG_GENERALPARMS(enemy).mSightRadius(), CG_GENERALPARMS(enemy).mFov(),
			                                     CG_GENERALPARMS(enemy).mViewAngle())) {
				mNextState = KOCHAPPY_TurnToHome;
				enemy->finishMotion();
				enemy->mTargetVelocity = Vector3f(0.0f);
			} else {
				f32 max = CG_GENERALPARMS(enemy).mViewAngle();
				if (absF(angle) <= TORADIANS(max)) {
					EnemyFunc::walkToTarget(enemy, enemy->mTargetCreature, CG_GENERALPARMS(enemy).mMoveSpeed(),
					                        CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle());
				} else {
					mNextState = KOCHAPPY_Turn;
					enemy->finishMotion();
					enemy->mTargetVelocity = Vector3f(0.0f);
				}
			}
		} else {
			if (enemy->mFlickTimer) {
				mNextState = KOCHAPPY_Flick;
			} else {
				mNextState = KOCHAPPY_TurnToHome;
			}
			enemy->finishMotion();
		}

		if (enemy->distanceFromHome() > CG_GENERALPARMS(enemy).mTerritoryRadius()) {
			mNextState = KOCHAPPY_TurnToHome;
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}

		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, mNextState, nullptr);
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80110F58
 * @note Size: 0x48
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->resetAnimSpeed();
	enemy->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x80110FA0
 * @note Size: 0x3C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	mName = "Attack";
}

/**
 * @note Address: 0x80110FDC
 * @note Size: 0x48
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(KOCHAPPYANIM_Attack, nullptr);
	enemy->resetAnimSpeed();
}

/**
 * @note Address: 0x80111024
 * @note Size: 0x3F0
 */
void StateAttack::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			EnemyFunc::attackNavi(enemy, CG_GENERALPARMS(enemy).mAttackRadius(), CG_GENERALPARMS(enemy).mAttackHitAngle(),
			                      CG_GENERALPARMS(enemy).mAttackDamage(), nullptr, nullptr);
			if (!EnemyFunc::eatPikmin(enemy, nullptr)) {
				enemy->startMotion(KOCHAPPYANIM_Eat, nullptr);
			}

			EnemyFunc::flickStickPikmin(enemy, CG_GENERALPARMS(enemy).mShakeChance(), CG_GENERALPARMS(enemy).mShakeKnockback(),
			                            CG_GENERALPARMS(enemy).mShakeDamage(), enemy->getFaceDir(), nullptr);
			break;

		case KEYEVENT_3:
			EnemyFunc::swallowPikmin(enemy, CG_PROPERPARMS(enemy).mPoisonDamage(), nullptr);
			break;

		case KEYEVENT_END:
			Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, CG_GENERALPARMS(enemy).mSearchAngle(),
			                                                     CG_GENERALPARMS(enemy).mSearchDistance(), nullptr, nullptr, nullptr);
			if (target) {
				enemy->mTargetCreature = target;
				f32 angle              = enemy->getAngDist(enemy->mTargetCreature);
				if (enemy->isTargetAttackable(angle, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
					transit(enemy, KOCHAPPY_Attack, nullptr);
				} else {
					transit(enemy, KOCHAPPY_Turn, nullptr);
				}
			} else {
				transit(enemy, KOCHAPPY_TurnToHome, nullptr);
			}
			break;
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}

}

/**
 * @note Address: 0x80111414
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80111438
 * @note Size: 0x44
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName      = "Flick";
	mNextState = -1;
}

/**
 * @note Address: 0x8011147C
 * @note Size: 0x94
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();

	FlickArg* flickArg = static_cast<FlickArg*>(stateArg);
	if (flickArg) {
		mNextState = flickArg->_00;
	} else {
		mNextState = -1;
	}

	enemy->startMotion(KOCHAPPYANIM_Flick, nullptr);
	enemy->disableEvent(0, EB_FlickEnabled);
	OBJ(enemy)->resetEnemyNonStone();
}

/**
 * @note Address: 0x80111510
 * @note Size: 0x178
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* obj = OBJ(enemy);

	if (obj->mCurAnim->mIsPlaying) {
		switch (obj->mCurAnim->mType) {
		case 2:
			EnemyParmsBase* parm = CG_PARMS(obj);
			EnemyFunc::flickStickPikmin(obj, parm->mGeneral.mShakeChance, parm->mGeneral.mShakeKnockback, parm->mGeneral.mShakeDamage,
			                            FLICK_BACKWARD_ANGLE, nullptr);
			parm = CG_PARMS(obj);
			EnemyFunc::flickNearbyPikmin(obj, parm->mGeneral.mShakeRange, parm->mGeneral.mShakeKnockback, parm->mGeneral.mShakeDamage,
			                             FLICK_BACKWARD_ANGLE, nullptr);
			parm = CG_PARMS(obj);
			EnemyFunc::flickNearbyNavi(obj, parm->mGeneral.mShakeRange, parm->mGeneral.mShakeKnockback, parm->mGeneral.mShakeDamage,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			obj->mFlickTimer = 0.0f;
			obj->setEnemyNonStone();
			break;
		case 3:
			obj->resetEnemyNonStone();
			break;
		case 1000:
			if (mNextState != -1) {
				transit(obj, mNextState, nullptr);
			} else {
				transit(obj, mStateMachine->mPreviousID, nullptr);
			}
			break;
		}
	}

	if (obj->mHealth <= 0.0f) {
		transit(obj, KOCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80111688
 * @note Size: 0x50
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* kochappy = OBJ(enemy);
	kochappy->setEmotionCaution();
	kochappy->enableEvent(0, EB_FlickEnabled);
	kochappy->resetEnemyNonStone();
}

/**
 * @note Address: 0x801116D8
 * @note Size: 0x40
 */
StateTurnToHome::StateTurnToHome(int stateID)
    : State(stateID)
{
	mName = "TurnToHome";
}

/**
 * @note Address: 0x80111718
 * @note Size: 0x120
 */
void StateTurnToHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	Vector3f homePos       = enemy->mHomePosition;
	Vector3f kochappyPos   = enemy->getPosition();
	if (kochappyPos.distance(homePos) < CG_GENERALPARMS(enemy).mHomeRadius()) {
		transit(enemy, KOCHAPPY_Wait, nullptr);
	} else {
		enemy->startMotion(KOCHAPPYANIM_Turn, nullptr);
	}
}

/**
 * @note Address: 0x80111838
 * @note Size: 0x46C
 */
void StateTurnToHome::exec(EnemyBase* enemy)
{
	if (EnemyFunc::isStartFlick(enemy, true)) {
		transit(enemy, KOCHAPPY_Flick, nullptr);
		return;
	} else {
		Vector3f targetPos = enemy->mHomePosition;
		if (enemy->turnToTargetPos(targetPos, CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle(),
		                           CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
			enemy->finishMotion();
		}
		if (enemy->mCurAnim->mIsPlaying) {
			switch (enemy->mCurAnim->mType) {
			case KEYEVENT_END:
				transit(enemy, KOCHAPPY_GoHome, nullptr);
				break;
			}
		}
		Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, CG_GENERALPARMS(enemy).mSearchAngle(),
		                                                     CG_GENERALPARMS(enemy).mSearchDistance(), nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;
			if (enemy->isTargetAttackable(enemy->mTargetCreature, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				transit(enemy, KOCHAPPY_Attack, nullptr);
			}
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80111CA4
 * @note Size: 0x4
 */
void StateTurnToHome::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80111CA8
 * @note Size: 0x3C
 */
StateGoHome::StateGoHome(int stateID)
    : State(stateID)
{
	mName = "GoHome";
}

/**
 * @note Address: 0x80111CE4
 * @note Size: 0x64
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kochappy = OBJ(enemy);
	kochappy->setAnimationSpeed(40.0f);
	kochappy->startMotion(KOCHAPPYANIM_Move, nullptr);
	mNextState = -1;
}

/**
 * @note Address: 0x80111D48
 * @note Size: 0x440
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	if (EnemyFunc::isStartFlick(enemy, true)) {
		transit(enemy, KOCHAPPY_Flick, nullptr);
	} else {
		Vector3f targetPos = Vector3f(enemy->mHomePosition);
		EnemyFunc::walkToTarget(enemy, targetPos, CG_GENERALPARMS(enemy).mMoveSpeed(), CG_GENERALPARMS(enemy).mTurnSpeed(),
		                        CG_GENERALPARMS(enemy).mMaxTurnAngle());

		Vector3f homePos     = enemy->mHomePosition;
		Vector3f kochappyPos = enemy->getPosition();
		if (kochappyPos.distance(homePos) < CG_GENERALPARMS(enemy).mHomeRadius()) {
			enemy->finishMotion();
			enemy->mTargetVelocity = 0.0f;
			mNextState             = KOCHAPPY_Wait;
		}
		Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, CG_GENERALPARMS(enemy).mSearchAngle(),
		                                                     CG_GENERALPARMS(enemy).mSearchDistance(), nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;
			if (enemy->isTargetAttackable(enemy->mTargetCreature, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				enemy->finishMotion();
				OBJ(enemy)->setAnimationSpeed(60.0f);
				mNextState = KOCHAPPY_Attack;
			} else {
				enemy->finishMotion();
				mNextState = KOCHAPPY_Walk;
			}
		}
		if (enemy->mCurAnim->mIsPlaying) {
			switch (enemy->mCurAnim->mType) {
			case KEYEVENT_END:
				transit(enemy, mNextState, nullptr);
				break;
			}
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80112188
 * @note Size: 0x40
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	enemy->resetAnimSpeed();
	enemy->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x801121C8
 * @note Size: 0x3C
 */
StateDemo::StateDemo(int stateID)
    : State(stateID)
{
	mName = "demo";
}

/**
 * @note Address: 0x80112204
 * @note Size: 0x7C
 */
void StateDemo::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->kill(nullptr);
	if (gameSystem->mSection->getTimerType() != DEMOTIMER_Unlock_Switch_To_Louie && !playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {
		gameSystem->mSection->enableTimer(5.0f, DEMOTIMER_Unlock_Switch_To_Louie);
	}
}

} // namespace KochappyBase
} // namespace Game
