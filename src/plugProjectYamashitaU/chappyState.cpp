#include "Game/Entities/ChappyBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace ChappyBase {

/**
 * @note Address: 0x80116648
 * @note Size: 0x150
 */
void ChappyBase::FSM::init(EnemyBase* base)
{
	create(CHAPPY_Count);

	registerState(new StateDead(CHAPPY_Dead));
	registerState(new StateTurn(CHAPPY_Turn));
	registerState(new StateWalk(CHAPPY_Walk));
	registerState(new StateAttack(CHAPPY_Attack));
	registerState(new StateFlick(CHAPPY_Flick));
	registerState(new StateTurnToHome(CHAPPY_TurnToHome));
	registerState(new StateGoHome(CHAPPY_GoHome));
	registerState(new StateSleep(CHAPPY_Sleep));
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
StateCautionBase::StateCautionBase(int stateID)
    : State(stateID)
{
	mName = "StateCautionBase";
}

/**
 * Executes the caution behavior for the enemy.
 * Determines if the enemy should be alerted based on its type and health.
 * Updates the enemy's alert timer and view/search angles accordingly.
 *
 * @param enemy A pointer to the EnemyBase object.
 *
 * @note Address: N/A
 * @note Size: 0x194
 */
void StateCautionBase::cautionProc(EnemyBase* enemy)
{
	bool doAlert;
	switch (enemy->getEnemyTypeID()) {
	case EnemyTypeID::EnemyID_BlueChappy: {
		doAlert = EnemyFunc::isPikminOrNaviInRange(enemy, CG_PROPERPARMS(OBJ(enemy)).mBulborbWakeRadius.mValue);

		if (!doAlert) {
			doAlert = enemy->mHealth < CG_GENERALPARMS(enemy).mLifeBeforeAlert.mValue;
		}
		break;
	}

	default: {
		doAlert = EnemyFunc::isPikminOrNaviInRange(enemy, CG_GENERALPARMS(enemy).mPrivateRadius.mValue);

		if (!doAlert) {
			doAlert = enemy->mHealth < CG_GENERALPARMS(enemy).mLifeBeforeAlert.mValue;
		}
		break;
	}
	}

	if (doAlert) {
		OBJ(enemy)->mAlertTimer = 0.0f;
	}

	if (OBJ(enemy)->mAlertTimer < CG_GENERALPARMS(enemy).mAlertDuration.mValue) {
		OBJ(enemy)->mAlertTimer += sys->mDeltaTime;
		OBJ(enemy)->mViewAngle   = 180.0f;
		OBJ(enemy)->mSearchAngle = 180.0f;

	} else {
		OBJ(enemy)->mViewAngle   = CG_GENERALPARMS(enemy).mViewAngle.mValue;
		OBJ(enemy)->mSearchAngle = CG_GENERALPARMS(enemy).mSearchAngle.mValue;
	}
}

/**
 * @note Address: 0x80116798
 * @note Size: 0x3C
 */
StateSleep::StateSleep(int stateID)
    : State(stateID)
{
	mName = "sleep";
}

/**
 * @note Address: 0x801167D4
 * @note Size: 0xBC
 */
void StateSleep::init(EnemyBase* enemy, StateArg* stateArg)
{
	SleepArg* arg = static_cast<SleepArg*>(stateArg);
	if (arg && arg->mDoSkipSleepStart) {
		enemy->startMotion(CHAPPYANIM_Sleep, nullptr);
		enemy->setMotionFrame(70.0f);
	} else {
		enemy->startMotion(CHAPPYANIM_Wait2, nullptr);
	}

	enemy->mTargetCreature = nullptr;

	// Creeping Chrysanthemum
	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Hana) {
		enemy->hardConstraintOn();
	} else {
		enemy->enableEvent(0, EB_Constrained);
	}

	OBJ(enemy)->setUnderGround();
}

/**
 * @note Address: 0x80116890
 * @note Size: 0x1B0
 * 70%
 */
void StateSleep::exec(EnemyBase* enemy)
{
	if (enemy->getCurrAnimIndex() == CHAPPYANIM_Wait2) {
		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			if (enemy->isEvent(0, EB_TakingDamage)) {
				transit(enemy, CHAPPY_Turn, nullptr);
			} else {
				enemy->startMotion(CHAPPYANIM_Sleep, nullptr);
			}
		}

	} else {
		if (!enemy->isFinishMotion() && OBJ(enemy)->isWakeup()) {
			setNextState(enemy, CHAPPY_Turn);
		}

		if (enemy->mCurAnim->mIsPlaying) {
			// WTF?
			if (enemy->mCurAnim->mType == KEYEVENT_LOOP_START) {
				OBJ(enemy)->startSleepEffect();

			} else if (enemy->mCurAnim->mType == KEYEVENT_3) {
				OBJ(enemy)->finishSleepEffect();

			} else if (enemy->mCurAnim->mType == KEYEVENT_4) {
				OBJ(enemy)->createSmokeEffect();

			} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
				transit(enemy, mNextState, nullptr);
			}
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80116A40
 * @note Size: 0x98
 */
void StateSleep::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->setAnimationSpeed(30.0f);

	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_Hana) {
		enemy->hardConstraintOff();
	} else {
		enemy->constraintOff();
	}

	OBJ(enemy)->resetUnderGround();
	OBJ(enemy)->finishSleepEffect();
}

/**
 * @note Address: 0x80116AD8
 * @note Size: 0x64
 */
void StateSleep::setNextState(EnemyBase* enemy, int stateID)
{
	OBJ(enemy)->setAnimationSpeed(60.0f);
	enemy->finishMotion();
	mNextState = stateID;
}

/**
 * @note Address: 0x80116B3C
 * @note Size: 0x54
 */
StateDead::StateDead(int stateID)
    : StateCautionBase(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x80116B90
 * @note Size: 0x40
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(CHAPPYANIM_Dead, nullptr);
	enemy->deathProcedure();
}

/**
 * @note Address: 0x80116BD0
 * @note Size: 0x64
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->flickAttackBomb();
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			enemy->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80116C34
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
StateTurnBase::StateTurnBase(int stateID)
    : StateCautionBase(stateID)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x1E0
 */
bool StateTurnBase::turnToTarget(EnemyBase* enemy, Vector3f& targetPos)
{
	int pikiNum = EnemyFunc::getSurroundPikminNum(enemy, CG_PROPERPARMS(enemy).mFootRange(), nullptr);
	if (pikiNum > 10) {
		pikiNum = 10;
	}
	f32 endAngle     = CG_GENERALPARMS(enemy).mMaxAttackAngle;
	f32 maxTurnAngle = (1.0f - (0.9f * (f32)pikiNum / 10.0f)) * CG_GENERALPARMS(enemy).mMaxTurnAngle();
	f32 turnSpeed    = CG_GENERALPARMS(enemy).mTurnSpeed();
	f32 angleDist    = enemy->getAngDist(targetPos);
	f32 angle        = clamp(angleDist * turnSpeed, TORADIANS(maxTurnAngle));
	enemy->updateFaceDir(roundAng(angle + enemy->getFaceDir()));
	return isAngleWithin(angleDist, endAngle);
}

/**
 * @note Address: 0x80116C38
 * @note Size: 0x60
 */
StateTurn::StateTurn(int stateID)
    : StateTurnBase(stateID)
{
	mName = "turn";
}

/**
 * @note Address: 0x80116C98
 * @note Size: 0x58
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	OBJ(enemy)->setAnimationSpeed(40.0f);
	enemy->startMotion(CHAPPYANIM_WaitAct1, nullptr);
}

/**
 * @note Address: 0x80116CF0
 * @note Size: 0x7F0
 */
void StateTurn::exec(EnemyBase* enemy)
{
	cautionProc(enemy);

	if (!enemy->isFinishMotion()) {
		Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, OBJ(enemy)->mSearchAngle, CG_GENERALPARMS(enemy).mSearchDistance(),
		                                                     nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;

			f32 angleDist = enemy->getAngDist(enemy->mTargetCreature);

			if (enemy->isTargetAttackable(angleDist, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				enemy->finishMotion();
				OBJ(enemy)->setAnimationSpeed(60.0f);
				mNextState = CHAPPY_Attack;

			} else {
				f32 viewAngle = OBJ(enemy)->mViewAngle;
				if (enemy->isTargetOutOfRange(enemy->mTargetCreature, angleDist, CG_GENERALPARMS(enemy).mPrivateRadius(),
				                              CG_GENERALPARMS(enemy).mSightRadius(), CG_GENERALPARMS(enemy).mFov(), viewAngle)) {
					mNextState = CHAPPY_TurnToHome;
					enemy->finishMotion();
				} else {
					Vector3f targetPos = enemy->mTargetCreature->getPosition();
					if (turnToTarget(enemy, targetPos)) {
						mNextState = CHAPPY_Walk;
						enemy->finishMotion();
					}
				}
			}
		} else {
			mNextState = CHAPPY_TurnToHome;
			enemy->finishMotion();
		}
		if (EnemyFunc::isStartFlick(enemy, true)) {
			transit(enemy, CHAPPY_Flick, nullptr);
		}
	} else if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, mNextState, nullptr);
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x801174E0
 * @note Size: 0x38
 */
void ChappyBase::StateTurn::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->resetAnimSpeed();
}

/**
 * @note Address: 0x80117518
 * @note Size: 0x54
 */
StateWalk::StateWalk(int stateID)
    : StateCautionBase(stateID)
{
	mName = "Walk";
}

/**
 * @note Address: 0x8011756C
 * @note Size: 0x58
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	OBJ(enemy)->setAnimationSpeed(40.0f);
	enemy->startMotion(CHAPPYANIM_Move1, nullptr);
}

/**
 * @note Address: 0x801175C4
 * @note Size: 0x7FC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	cautionProc(enemy);
	if (!enemy->isFinishMotion()) {
		Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, OBJ(enemy)->mSearchAngle, CG_GENERALPARMS(enemy).mSearchDistance(),
		                                                     nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;
			f32 angle              = enemy->getAngDist(enemy->mTargetCreature);
			if (enemy->isTargetAttackable(angle, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				mNextState = CHAPPY_Attack;
				enemy->finishMotion();
				enemy->mTargetVelocity = Vector3f(0.0f);
				if (mNextState == CHAPPY_Attack) {
					OBJ(enemy)->setAnimationSpeed(60.0f);
				}
			} else if (enemy->isTargetOutOfRange(enemy->mTargetCreature, angle, CG_GENERALPARMS(enemy).mPrivateRadius(),
			                                     CG_GENERALPARMS(enemy).mSightRadius(), CG_GENERALPARMS(enemy).mFov(),
			                                     OBJ(enemy)->mViewAngle)) {
				mNextState = CHAPPY_TurnToHome;
				enemy->finishMotion();
				enemy->mTargetVelocity = Vector3f(0.0f);
				if (mNextState == CHAPPY_Attack) {
					OBJ(enemy)->setAnimationSpeed(60.0f);
				}
			} else if (isAngleWithin(angle, CG_GENERALPARMS(enemy).mViewAngle())) {
				EnemyFunc::walkToTarget(enemy, enemy->mTargetCreature, CG_GENERALPARMS(enemy).mMoveSpeed(),
				                        CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle());
			} else {
				mNextState = CHAPPY_Turn;
				enemy->finishMotion();
				enemy->mTargetVelocity = Vector3f(0.0f);
				if (mNextState == CHAPPY_Attack) {
					OBJ(enemy)->setAnimationSpeed(60.0f);
				}
			}

		} else {
			mNextState = CHAPPY_TurnToHome;
			enemy->finishMotion();
		}

		if (enemy->distanceFromHome() > CG_GENERALPARMS(enemy).mTerritoryRadius()) {
			mNextState = CHAPPY_TurnToHome;
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			if (mNextState == CHAPPY_Attack) {
				OBJ(enemy)->setAnimationSpeed(60.0f);
			}
		}

		if (EnemyFunc::isStartFlick(enemy, true)) {
			transit(enemy, CHAPPY_Flick, nullptr);
		}

	} else if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, mNextState, nullptr);
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80117DC0
 * @note Size: 0x48
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->resetAnimSpeed();
	enemy->mTargetVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x80117E08
 * @note Size: 0x54
 */
StateAttack::StateAttack(int stateID)
    : StateCautionBase(stateID)
{
	mName = "Attack";
}

/**
 * @note Address: 0x80117E5C
 * @note Size: 0x48
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(CHAPPYANIM_Attack, nullptr);
	enemy->resetAnimSpeed();
}

/**
 * @note Address: 0x80117EA4
 * @note Size: 0x33C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	cautionProc(enemy);
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->getCurrAnimIndex()) {
		case CHAPPYANIM_Attack: {
			switch (enemy->mCurAnim->mType) {
			case KEYEVENT_2:
				int attackCheck = 0;
				attackCheck += EnemyFunc::attackNavi(enemy, CG_GENERALPARMS(enemy).mAttackRadius(), CG_GENERALPARMS(enemy).mAttackHitAngle(),
				                                     CG_GENERALPARMS(enemy).mAttackDamage(), nullptr, nullptr);
				attackCheck += OBJ(enemy)->eatAttackPikmin();
				if (attackCheck == 0) {
					enemy->startMotion(CHAPPYANIM_WaitAct2, nullptr);
				}

				OBJ(enemy)->flickAttackFail();
				break;
			case KEYEVENT_3:
				EnemyFunc::swallowPikmin(enemy, CG_PROPERPARMS(enemy).mPoisonDamage(), nullptr);
				break;
			case KEYEVENT_4:
			case KEYEVENT_END:
				transitState(enemy);
				break;
			}
		} break;
		case CHAPPYANIM_WaitAct2: {
			switch (enemy->mCurAnim->mType) {
			case KEYEVENT_2:
				OBJ(enemy)->flickAttackBomb();
				break;
			case KEYEVENT_3:
				OBJ(enemy)->createSmokeEffect();
				break;
			case KEYEVENT_END:
				transitState(enemy);
				break;
			}
		} break;
		default:
			transitState(enemy);
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x801181E0
 * @note Size: 0x2F0
 */
void StateAttack::transitState(EnemyBase* enemy)
{
	Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, OBJ(enemy)->mSearchAngle, CG_GENERALPARMS(enemy).mSearchDistance(), nullptr,
	                                                     nullptr, nullptr);
	if (target) {
		enemy->mTargetCreature = target;

		f32 angle = enemy->getAngDist(enemy->mTargetCreature);
		if (enemy->isTargetAttackable(angle, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
			transit(enemy, CHAPPY_Attack, nullptr);
			return;
		}

		transit(enemy, CHAPPY_Turn, nullptr);
		return;
	}

	transit(enemy, CHAPPY_TurnToHome, nullptr);
}

/**
 * @note Address: 0x801184D0
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x801184F4
 * @note Size: 0x4
 */
void StateAttack::doDirectDraw(EnemyBase* enemy, Graphics&)
{
}

/**
 * @note Address: 0x801184F8
 * @note Size: 0x54
 */
StateFlick::StateFlick(int stateID)
    : StateCautionBase(stateID)
{
	mName = "Flick";
}

/**
 * @note Address: 0x8011854C
 * @note Size: 0x78
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(CHAPPYANIM_Flick, nullptr);
	OBJ(enemy)->setAnimationSpeed(40.0f);
	enemy->disableEvent(0, EB_FlickEnabled);
	OBJ(enemy)->createFlickEffect();
}

/**
 * @note Address: 0x801185C4
 * @note Size: 0x23C
 */
void StateFlick::exec(EnemyBase* enemy)
{
	cautionProc(enemy);
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			OBJ(enemy)->flickStatePikmin();
			enemy->mFlickTimer = 0.0f;
			break;
		case KEYEVENT_END:
			transit(enemy, mStateMachine->mPreviousID, nullptr);
			break;
		}
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80118800
 * @note Size: 0x54
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	OBJ(enemy)->setAnimationSpeed(30.0f);
	enemy->enableEvent(0, EB_FlickEnabled);
}

/**
 * @note Address: 0x80118854
 * @note Size: 0x64
 */
StateTurnToHome::StateTurnToHome(int stateID)
    : StateTurnBase(stateID)
{
	mName = "TurnToHome";
}

/**
 * @note Address: 0x801188B8
 * @note Size: 0x150
 */
void StateTurnToHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	Vector3f homePos       = enemy->mHomePosition;
	Vector3f chappyPos     = enemy->getPosition();

	if (chappyPos.distance(homePos) < CG_GENERALPARMS(enemy).mHomeRadius()) {
		transit(enemy, CHAPPY_Sleep, nullptr);
		return;
	}

	if (enemy->isEvent(0, EB_TakingDamage)) {
		transit(enemy, CHAPPY_Turn, nullptr);
		return;
	}

	enemy->startMotion(CHAPPYANIM_Wait2, nullptr);
}

/**
 * @note Address: 0x80118A08
 * @note Size: 0x6AC
 */
void StateTurnToHome::exec(EnemyBase* enemy)
{
	cautionProc(enemy);
	if (enemy->getCurrAnimIndex() == CHAPPYANIM_Wait2) {
		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			if (enemy->isEvent(0, EB_TakingDamage)) {
				transit(enemy, CHAPPY_Turn, nullptr);
			} else {
				enemy->startMotion(CHAPPYANIM_WaitAct1, nullptr);
			}
		}

	} else if (EnemyFunc::isStartFlick(enemy, true)) {
		enemy->finishMotion();
		mNextState = CHAPPY_Flick;

	} else {
		Vector3f homePos = enemy->mHomePosition;
		if (turnToTarget(enemy, homePos)) {
			enemy->finishMotion();
			mNextState = CHAPPY_GoHome;
		} else {
			Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, OBJ(enemy)->mSearchAngle, CG_GENERALPARMS(enemy).mSearchDistance(),
			                                                     nullptr, nullptr, nullptr);
			if (target) {
				enemy->mTargetCreature = target;

				if (enemy->isTargetAttackable(enemy->mTargetCreature, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
					enemy->finishMotion();
					OBJ(enemy)->setAnimationSpeed(60.0f);
					mNextState = CHAPPY_Attack;
				}

			} else if (enemy->isEvent(0, EB_TakingDamage)) {
				enemy->finishMotion();
				mNextState = CHAPPY_Turn;
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
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x801190B4
 * @note Size: 0x4
 */
void StateTurnToHome::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x801190B8
 * @note Size: 0x54
 */
StateGoHome::StateGoHome(int stateID)
    : StateCautionBase(stateID)
{
	mName = "GoHome";
}

/**
 * @note Address: 0x8011910C
 * @note Size: 0x2C
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(CHAPPYANIM_Move1, nullptr);
}

/**
 * @note Address: 0x80119138
 * @note Size: 0x5C4
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	cautionProc(enemy);

	if (EnemyFunc::isStartFlick(enemy, true)) {
		transit(enemy, CHAPPY_Flick, nullptr);

	} else {
		Vector3f targetPos = Vector3f(enemy->mHomePosition);
		EnemyFunc::walkToTarget(enemy, targetPos, CG_GENERALPARMS(enemy).mMoveSpeed(), CG_GENERALPARMS(enemy).mTurnSpeed(),
		                        CG_GENERALPARMS(enemy).mMaxTurnAngle());

		Vector3f homePos   = enemy->mHomePosition;
		Vector3f chappyPos = enemy->getPosition();
		if (chappyPos.distance(homePos) < CG_GENERALPARMS(enemy).mHomeRadius()) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			mNextState             = CHAPPY_Sleep;
		}

		Creature* target = EnemyFunc::getNearestPikminOrNavi(enemy, OBJ(enemy)->mSearchAngle, CG_GENERALPARMS(enemy).mSearchDistance(),
		                                                     nullptr, nullptr, nullptr);
		if (target) {
			enemy->mTargetCreature = target;

			if (enemy->isTargetAttackable(enemy->mTargetCreature, CG_GENERALPARMS(enemy).mMaxAttackRange(), CG_GENERALPARMS(enemy).mMaxAttackAngle())) {
				enemy->finishMotion();
				enemy->mTargetVelocity = Vector3f(0.0f);
				OBJ(enemy)->setAnimationSpeed(60.0f);
				mNextState = CHAPPY_Attack;
			} else {
				enemy->finishMotion();
				mNextState = CHAPPY_Walk;
			}
		} else if (enemy->isEvent(0, EB_TakingDamage)) {
			enemy->finishMotion();
			mNextState = CHAPPY_Turn;
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
		transit(enemy, CHAPPY_Dead, nullptr);
	}
}

/**
 * @note Address: 0x801196FC
 * @note Size: 0x14
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
}
} // namespace ChappyBase
} // namespace Game
