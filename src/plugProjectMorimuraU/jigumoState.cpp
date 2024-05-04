#include "Game/Entities/Jigumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/FakePiki.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Jigumo {

/**
 * @note Address: 0x80365FF4
 * @note Size: 0x204
 */
void FSM::init(EnemyBase* enemy)
{
	create(JIGUMO_StateCount);
	registerState(new StateWait(JIGUMO_Wait));
	registerState(new StateAppear(JIGUMO_Appear));
	registerState(new StateHide(JIGUMO_Hide));
	registerState(new StateDead(JIGUMO_Dead));
	registerState(new StateAttack(JIGUMO_Attack));
	registerState(new StateMiss(JIGUMO_Miss));
	registerState(new StateReturn(JIGUMO_Return));
	registerState(new StateCarry(JIGUMO_Carry));
	registerState(new StateFlick(JIGUMO_Flick));
	registerState(new StateEat(JIGUMO_Eat));
	registerState(new StateSearch(JIGUMO_Search));
	registerState(new StateSAttack(JIGUMO_SAttack));
	registerState(new StateSMiss(JIGUMO_SMiss));
}

/**
 * @note Address: 0x803661F8
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x80366234
 * @note Size: 0x60
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Wait, nullptr);
	enemy->mPosition       = enemy->mHomePosition;
	enemy->mTargetCreature = nullptr;
	OBJ(enemy)->mNextState = JIGUMO_NULL;
}

/**
 * @note Address: 0x80366294
 * @note Size: 0x100
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->mNextState < 0) {
		FakePiki* target
		    = OBJ(enemy)->getNearestPikiOrNavi(CG_GENERALPARMS(enemy).mViewAngle.mValue, CG_GENERALPARMS(enemy).mSightRadius.mValue);
		if (target) {
			enemy->mTargetCreature = target;
			enemy->finishMotion();
			Vector3f targetPos        = target->getPosition();
			OBJ(enemy)->mGoalPosition = targetPos;
			OBJ(enemy)->mNextState    = JIGUMO_Search;
		} else {
			enemy->finishMotion();
			OBJ(enemy)->mIsReversing = true;
			OBJ(enemy)->mNextState   = JIGUMO_Hide;
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80366394
 * @note Size: 0x3C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/**
 * @note Address: 0x803663D0
 * @note Size: 0x138
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Appear, nullptr);
	enemy->stopMotion();
	enemy->hardConstraintOn();
	enemy->setAtari(false);
	enemy->setAlive(false);
	enemy->mFlickTimer = 0.0f;
	enemy->enableEvent(0, EB_BitterImmune);
	enemy->mPosition                                  = enemy->mHomePosition;
	OBJ(enemy)->mIsReversing                          = false;
	enemy->mCollTree->getCollPart('body')->mSpecialID = '____';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '____';
	OBJ(enemy)->mIsOutsideHouse                       = false;
	if (enemy->mHealth < 1.0f) {
		enemy->mHealth += 5.0f;
		enemy->mInstantDamage = 0.0f;
		enemy->disableEvent(0, EB_TakingDamage);
	}

	mAppearTimer = 0;
}

/**
 * @note Address: 0x80366508
 * @note Size: 0x324
 */
void StateAppear::exec(EnemyBase* enemy)
{
	mAppearTimer++;
	if (mAppearTimer > CG_PROPERPARMS(enemy).mHidingTime.mValue) {
		if (enemy->isStopMotion()) {
			f32 terrRad = CG_GENERALPARMS(enemy).mTerritoryRadius.mValue;
			bool check;
			if (EnemyFunc::isThereOlimar(enemy, terrRad, nullptr)) {
				check = true;
			} else if (EnemyFunc::isTherePikmin(enemy, terrRad, nullptr)) {
				check = true;
			} else {
				check = false;
			}

			if (check) {
				enemy->startMotion();

				Vector3f pos = enemy->getPosition();
				rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);

				FakePiki* target       = OBJ(enemy)->getNearestPikiOrNavi(360.0f, terrRad);
				enemy->mTargetCreature = target;
				if (target) {
					f32 turnSpeed = 1.0f;
					f32 maxAngle  = 360.0f; // becomes TAU during inline
					enemy->turnToTarget(target, turnSpeed, maxAngle);
					OBJ(enemy)->mNextFaceDir = enemy->mFaceDir;
				}
			}

		} else if (enemy->mCurAnim->mIsPlaying) {
			if (enemy->mCurAnim->mType == KEYEVENT_2) {
				if (enemy->mWaterBox) {
					enemy->createEfxHamon();
				} else {
					Vector3f dropPos = enemy->getPosition();
					enemy->createDropEffect(dropPos, 0.53f * enemy->mScaleModifier);
				}

				enemy->disableEvent(0, EB_BitterImmune);
			}
			if (enemy->mCurAnim->mType == KEYEVENT_END) {
				transit(enemy, JIGUMO_Wait, nullptr);
				enemy->setAlive(true);
				enemy->enableEvent(0, EB_LifegaugeVisible);
			}
		}
	}
}

/**
 * @note Address: 0x8036682C
 * @note Size: 0x3C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/**
 * @note Address: 0x80366868
 * @note Size: 0x128
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (OBJ(enemy)->mIsReversing) {
		enemy->startMotion(JIGUMOANIM_Hide, nullptr);
	} else {
		enemy->startMotion(JIGUMOANIM_RDive, nullptr);
	}

	OBJ(enemy)->mHideAnimPosition = enemy->mPosition;
	enemy->mCurrentVelocity       = Vector3f(0.0f);
	enemy->mTargetVelocity        = Vector3f(0.0f);
	enemy->hardConstraintOn();
	enemy->setAtari(false);
	enemy->mCollTree->getCollPart('body')->mSpecialID = '____';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '____';
	OBJ(enemy)->mIsOutsideHouse                       = false;
	enemy->disableEvent(0, EB_LifegaugeVisible);

	EnemyFunc::flickStickPikmin(enemy, CG_GENERALPARMS(enemy).mShakeChance.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
	                            CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80366990
 * @note Size: 0x170
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (!OBJ(enemy)->mIsReversing) {
		OBJ(enemy)->revisionAnimPos(0.05f * enemy->getMotionFrame());
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->enableEvent(0, EB_Cullable);
		enemy->fadeEfxHamon();
		if (enemy->mWaterBox) {
			efx::TJgmBubble bubbleFX;
			efx::Arg fxArg(enemy->getPosition());
			bubbleFX.create(&fxArg);
		}

		OBJ(enemy)->mNextFaceDir = roundAng(PI + enemy->mFaceDir);

		OBJ(enemy)->mGoalPosition    = enemy->mHomePosition;
		OBJ(enemy)->mCarryAngleSpeed = 0.0f;
		transit(enemy, JIGUMO_Appear, nullptr);
	}
}

/**
 * @note Address: 0x80366B00
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x80366B3C
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Dead, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->deathProcedure();
}

/**
 * @note Address: 0x80366B98
 * @note Size: 0xC0
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->boundEffect();
			Vector3f pos = enemy->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);
		}

		if (enemy->mCurAnim->mType == KEYEVENT_END) {
			enemy->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80366C58
 * @note Size: 0x3C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	mName = "attack";
}

/**
 * @note Address: 0x80366C94
 * @note Size: 0xBC
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Attack, nullptr);
	enemy->disableEvent(0, EB_Cullable);
	OBJ(enemy)->mNextState                            = JIGUMO_Miss;
	OBJ(enemy)->mIsReversing                          = false;
	mIsAttackActive                                   = 0;
	mDoTurnToTarget                                   = 1;
	enemy->mCollTree->getCollPart('body')->mSpecialID = 'st__';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '_t__';
	OBJ(enemy)->mIsOutsideHouse                       = true;
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x80366D50
 * @note Size: 0x488
 */
void StateAttack::exec(EnemyBase* enemy)
{
	if (mDoTurnToTarget) {
		FakePiki* target
		    = OBJ(enemy)->getNearestPikiOrNavi(CG_GENERALPARMS(enemy).mSearchAngle.mValue, CG_GENERALPARMS(enemy).mSearchDistance.mValue);
		if (target) {
			enemy->turnToTarget(target, CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle());
			OBJ(enemy)->mGoalPosition = Vector3f(target->getPosition());
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			mIsAttackActive = 1;
			enemy->hardConstraintOff();
			enemy->setAtari(true);
			enemy->setAlive(true);
			mDoTurnToTarget = 0;
			OBJ(enemy)->effectStart();
			if (enemy->mWaterBox) {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_WATER, 0);
			} else {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_SOIL, 0);
			}

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			mIsAttackActive              = 0;
			enemy->mCurrentVelocity      = Vector3f(0.0f);
			enemy->mTargetVelocity       = Vector3f(0.0f);
			OBJ(enemy)->mNextFaceDir     = roundAng(PI + enemy->mFaceDir);
			OBJ(enemy)->mGoalPosition    = enemy->mHomePosition;
			OBJ(enemy)->mCarryAngleSpeed = 0.0f;
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}

	if (mIsAttackActive) {
		EnemyFunc::attackNavi(enemy, CG_GENERALPARMS(enemy).mAttackRadius.mValue, CG_GENERALPARMS(enemy).mAttackHitAngle.mValue,
		                      CG_GENERALPARMS(enemy).mAttackDamage.mValue, nullptr, nullptr);
		OBJ(enemy)->walkFunc();

		ConditionHeightCheckPiki heightCheck(enemy);
		if (EnemyFunc::eatPikmin(enemy, &heightCheck) > 0) {
			OBJ(enemy)->mNextState   = JIGUMO_Carry;
			OBJ(enemy)->mIsReversing = true;
			mIsAttackActive          = 0;
			OBJ(enemy)->effectStop();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}

		Vector3f pos     = OBJ(enemy)->getPosition();
		Vector3f goalPos = OBJ(enemy)->getGoalPos();
		if (pos.sqrDistance(goalPos) < 100.0f) {
			mIsAttackActive = 0;
			OBJ(enemy)->effectStop();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}
	}

	OBJ(enemy)->velocityControl();
}

/**
 * @note Address: 0x803671F4
 * @note Size: 0x38
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->effectStop();
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x8036722C
 * @note Size: 0x3C
 */
StateMiss::StateMiss(int stateID)
    : State(stateID)
{
	mName = "miss";
}

/**
 * @note Address: 0x80367268
 * @note Size: 0x4C
 */
void StateMiss::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->mNextFaceDir = enemy->mFaceDir;
	enemy->startMotion(JIGUMOANIM_Miss, nullptr);
	mUnused = 0;
}

/**
 * @note Address: 0x803672B4
 * @note Size: 0x200
 */
void StateMiss::exec(EnemyBase* enemy)
{
	if (CG_PARMS(enemy)->_8FC) {
		Vector3f goalPos = OBJ(enemy)->getGoalPos();
		f32 angleDist    = enemy->turnToTarget2(goalPos, CG_GENERALPARMS(enemy).mTurnSpeed(), CG_GENERALPARMS(enemy).mMaxTurnAngle());
		if (absF(angleDist) < 0.05f) {
			enemy->finishMotion();
		}

		if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, JIGUMO_Return, nullptr);
		}

	} else if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, JIGUMO_Return, nullptr);
	}
}

/**
 * @note Address: 0x803674B4
 * @note Size: 0x3C
 */
StateReturn::StateReturn(int stateID)
    : State(stateID)
{
	mName = "return";
}

/**
 * @note Address: 0x803674F0
 * @note Size: 0x40
 */
void StateReturn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_RunAway, nullptr);
	OBJ(enemy)->effectStart();
}

/**
 * @note Address: 0x80367530
 * @note Size: 0x174
 */
void StateReturn::exec(EnemyBase* enemy)
{
	OBJ(enemy)->walkFunc();

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, JIGUMO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = JIGUMO_Return;
		transit(enemy, JIGUMO_Flick, nullptr);

	} else if (OBJ(enemy)->getGoalDist() < SQUARE(20.0f * enemy->mScaleModifier)) {
		OBJ(enemy)->mCanBeEarthquaked = false;
		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->mCurrentVelocity = Vector3f(0.0f);
		enemy->mTargetVelocity  = Vector3f(0.0f);
		if (enemy->mStuckPikminCount > 0) {
			transit(enemy, JIGUMO_Flick, nullptr);
			OBJ(enemy)->mNextState = JIGUMO_Hide;
		} else {
			transit(enemy, JIGUMO_Hide, nullptr);
		}
	}
}

/**
 * @note Address: 0x803676A4
 * @note Size: 0x2C
 */
void StateReturn::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->mCanBeEarthquaked = true;
	OBJ(enemy)->effectStop();
}

/**
 * @note Address: 0x803676D0
 * @note Size: 0x3C
 */
StateCarry::StateCarry(int stateID)
    : State(stateID)
{
	mName = "carry";
}

/**
 * @note Address: 0x8036770C
 * @note Size: 0x40
 */
void StateCarry::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_BackRun, nullptr);
	OBJ(enemy)->effectStart();
}

/**
 * @note Address: 0x8036774C
 * @note Size: 0x190
 */
void StateCarry::exec(EnemyBase* enemy)
{
	OBJ(enemy)->walkFunc();

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, JIGUMO_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = JIGUMO_Carry;
		transit(enemy, JIGUMO_Flick, nullptr);
		return;
	}

	f32 goalDist = OBJ(enemy)->getGoalDist();
	f32 limit    = 10.0f * enemy->mScaleModifier + 20.0f;
	limit *= limit;
	if (goalDist < 1.1f * limit) {
		enemy->finishMotion();
		OBJ(enemy)->mCanBeEarthquaked = false;
	}

	if (goalDist < limit) {
		enemy->mCurrentVelocity = Vector3f(0.0f);
		enemy->mTargetVelocity  = Vector3f(0.0f);

		if (enemy->mStuckPikminCount > 1) {
			transit(enemy, JIGUMO_Flick, nullptr);
			OBJ(enemy)->mNextState = JIGUMO_Eat;

		} else {
			transit(enemy, JIGUMO_Eat, nullptr);
		}
	}
}

/**
 * @note Address: 0x803678DC
 * @note Size: 0x2C
 */
void StateCarry::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->mCanBeEarthquaked = true;
	OBJ(enemy)->effectStop();
}

/**
 * @note Address: 0x80367908
 * @note Size: 0x3C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/**
 * @note Address: 0x80367944
 * @note Size: 0xCC
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	if (OBJ(enemy)->mIsReversing) {
		enemy->startMotion(JIGUMOANIM_Flick, nullptr);
	} else {
		enemy->startMotion(JIGUMOANIM_RFlick, nullptr);
	}

	Vector3f pos = enemy->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed8, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x80367A10
 * @note Size: 0xFC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			f32 chance    = CG_GENERALPARMS(enemy).mShakeChance.mValue;
			f32 knockback = CG_GENERALPARMS(enemy).mShakeKnockback.mValue;
			f32 damage    = CG_GENERALPARMS(enemy).mShakeDamage.mValue;
			f32 range     = CG_GENERALPARMS(enemy).mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, chance, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			enemy->mFlickTimer = 0.0f;
			return;
		}

		if (enemy->mCurAnim->mType == KEYEVENT_3) {
			OBJ(enemy)->boundEffect();
			return;
		}

		if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80367B0C
 * @note Size: 0x3C
 */
StateEat::StateEat(int stateID)
    : State(stateID)
{
	mName = "eat";
}

/**
 * @note Address: 0x80367B48
 * @note Size: 0x58
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->mHideAnimPosition = enemy->mPosition;
	enemy->startMotion(JIGUMOANIM_Eat, nullptr);
	enemy->hardConstraintOn();
}

/**
 * @note Address: 0x80367BA0
 * @note Size: 0x120
 */
void StateEat::exec(EnemyBase* enemy)
{
	OBJ(enemy)->revisionAnimPos(0.1f * enemy->getMotionFrame());

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
		case KEYEVENT_3:
		case KEYEVENT_4:
		case KEYEVENT_5:
		case KEYEVENT_6:
			if (enemy->mWaterBox) {
				OBJ(enemy)->eatWaterEffect();
			}
			break;
		case KEYEVENT_7:
			OBJ(enemy)->mDoScaleDownMouth = true;
			break;
		case KEYEVENT_8:
			EnemyFunc::swallowPikmin(enemy, 300.0f, nullptr);
			OBJ(enemy)->mDoScaleDownMouth = false;
			break;
		case KEYEVENT_END:
			if (enemy->mHealth == 0.0f) {
				transit(enemy, JIGUMO_Dead, nullptr);

			} else {
				transit(enemy, JIGUMO_Hide, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80367CC0
 * @note Size: 0x3C
 */
StateSearch::StateSearch(int stateID)
    : State(stateID)
{
	mName = "search";
}

/**
 * @note Address: 0x80367CFC
 * @note Size: 0x88
 */
void StateSearch::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Turn, nullptr);
	enemy->setAtari(false);
	enemy->setAlive(false);
	enemy->mTargetCreature        = nullptr;
	OBJ(enemy)->mDoScaleDownMouth = false;
	mAnimIdx                      = JIGUMOANIM_NULL;
}

/**
 * @note Address: 0x80367D84
 * @note Size: 0x614
 */
void StateSearch::exec(EnemyBase* enemy)
{
	int animIdx = enemy->getCurrAnimIndex(); // r29
	FakePiki* target
	    = OBJ(enemy)->getNearestPikiOrNavi(CG_GENERALPARMS(enemy).mSearchAngle(), CG_GENERALPARMS(enemy).mSearchDistance()); // r28
	enemy->mTargetCreature = target;
	if (target) {
		f32 angleDist = enemy->getCreatureViewAngle(target);
		if (absF(angleDist) < 0.01f) {
			enemy->finishMotion();
			mAnimIdx                  = JIGUMOANIM_NULL;
			OBJ(enemy)->mGoalPosition = Vector3f(target->getPosition());
		} else if (animIdx == JIGUMOANIM_Wait) {
			enemy->finishMotion();
			mAnimIdx = JIGUMOANIM_Turn;
		} else {
			enemy->turnToTarget(target);
		}
	} else {
		target = OBJ(enemy)->getNearestPikiOrNavi(CG_GENERALPARMS(enemy).mViewAngle(), CG_GENERALPARMS(enemy).mSightRadius());
		if (target) {
			f32 angleDist = enemy->getCreatureViewAngle(target);
			if (absF(angleDist) < 0.1f) {
				if (animIdx == JIGUMOANIM_Turn) {
					mAnimIdx = JIGUMOANIM_Wait;
					enemy->finishMotion();
				}
			} else if (enemy->getCurrAnimIndex() == JIGUMOANIM_Wait) {
				mAnimIdx = JIGUMOANIM_Turn;
				enemy->finishMotion();
			} else {
				enemy->turnToTarget(target);
			}
		} else {
			transit(enemy, JIGUMO_Wait, nullptr);
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		if (mAnimIdx < 0) {
			Vector3f pos     = enemy->getPosition();
			Vector3f goalPos = enemy->getGoalPos();
			f32 dist         = pos.sqrDistance(goalPos);
			f32 rad          = CG_GENERALPARMS(enemy).mAttackRadius() * enemy->getScaleMod();
			rad *= rad;
			if (dist < rad) {
				transit(enemy, JIGUMO_SAttack, nullptr);
				return;
			}
			transit(enemy, JIGUMO_Attack, nullptr);
			return;
		}

		enemy->startMotion(mAnimIdx, nullptr);
	}
}

/**
 * @note Address: 0x80368398
 * @note Size: 0x3C
 */
StateSAttack::StateSAttack(int stateID)
    : State(stateID)
{
	mName = "sattack";
}

/**
 * @note Address: 0x803683D4
 * @note Size: 0x58
 */
void StateSAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_SAttack, nullptr);
	mDidCatchTarget = 0;
	mIsAttackActive = 0;
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x8036842C
 * @note Size: 0x238
 */
void StateSAttack::exec(EnemyBase* enemy)
{
	if (enemy->getMotionFrame() == CG_PARMS(enemy)->_924) {
		mIsAttackActive = 1;
		enemy->setAtari(true);
		enemy->setAlive(true);
	}

	if (mIsAttackActive) {
		if (EnemyFunc::eatPikmin(enemy, nullptr)) {
			mDidCatchTarget = 1;
		}

		EnemyFunc::attackNavi(enemy, 50.0f * enemy->mScaleModifier, CG_GENERALPARMS(enemy).mAttackHitAngle.mValue,
		                      CG_GENERALPARMS(enemy).mAttackDamage.mValue, nullptr, nullptr);
	}

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			if (enemy->mWaterBox) {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_WATER, 0);
			} else {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_SOIL, 0);
			}
			break;

		case KEYEVENT_3:
			mIsAttackActive = 0;
			enemy->setAtari(false);
			enemy->setAlive(false);
			if (!mDidCatchTarget) {
				transit(enemy, JIGUMO_SMiss, nullptr);
			}
			break;

		case KEYEVENT_4:
		case KEYEVENT_5:
		case KEYEVENT_6:
		case KEYEVENT_7:
		case KEYEVENT_8:
			if (enemy->mWaterBox) {
				OBJ(enemy)->eatWaterEffect();
			}
			break;

		case KEYEVENT_9:
			OBJ(enemy)->mDoScaleDownMouth = true;
			break;

		case KEYEVENT_10:
			EnemyFunc::swallowPikmin(enemy, 300.0f, nullptr);
			OBJ(enemy)->mDoScaleDownMouth = false;
			break;

		case KEYEVENT_END:
			transit(enemy, JIGUMO_Search, nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x80368664
 * @note Size: 0x24
 */
void StateSAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x80368688
 * @note Size: 0x3C
 */
StateSMiss::StateSMiss(int stateID)
    : State(stateID)
{
	mName = "smiss";
}

/**
 * @note Address: 0x803686C4
 * @note Size: 0x2C
 */
void StateSMiss::init(EnemyBase* enemy, StateArg* stateArg) { enemy->startMotion(JIGUMOANIM_SMiss, nullptr); }

/**
 * @note Address: 0x803686F0
 * @note Size: 0x50
 */
void StateSMiss::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, JIGUMO_Search, nullptr);
	}
}
} // namespace Jigumo
} // namespace Game
