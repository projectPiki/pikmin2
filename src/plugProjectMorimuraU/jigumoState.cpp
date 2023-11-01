#include "Game/Entities/Jigumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/FakePiki.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Jigumo {

/*
 * --INFO--
 * Address:	80365FF4
 * Size:	000204
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

/*
 * --INFO--
 * Address:	803661F8
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	80366234
 * Size:	000060
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Wait, nullptr);
	enemy->mPosition       = enemy->mHomePosition;
	enemy->mTargetCreature = nullptr;
	OBJ(enemy)->mNextState = JIGUMO_NULL;
}

/*
 * --INFO--
 * Address:	80366294
 * Size:	000100
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->mNextState < 0) {
		FakePiki* target
		    = OBJ(enemy)->getNearestPikiOrNavi(CG_PARMS(enemy)->mGeneral.mViewAngle.mValue, CG_PARMS(enemy)->mGeneral.mSightRadius.mValue);
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

/*
 * --INFO--
 * Address:	80366394
 * Size:	00003C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/*
 * --INFO--
 * Address:	803663D0
 * Size:	000138
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

/*
 * --INFO--
 * Address:	80366508
 * Size:	000324
 */
void StateAppear::exec(EnemyBase* enemy)
{
	mAppearTimer++;
	if (mAppearTimer > CG_PROPERPARMS(enemy).mHidingTime.mValue) {
		if (enemy->isStopMotion()) {
			f32 terrRad = CG_PARMS(enemy)->mGeneral.mTerritoryRadius.mValue;
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
				rumbleMgr->startRumble(8, pos, 2);

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

/*
 * --INFO--
 * Address:	8036682C
 * Size:	00003C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/*
 * --INFO--
 * Address:	80366868
 * Size:	000128
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

	EnemyFunc::flickStickPikmin(enemy, CG_PARMS(enemy)->mGeneral.mShakeChance.mValue, CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue,
	                            CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80366990
 * Size:	000170
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

		OBJ(enemy)->mGoalPosition       = enemy->mHomePosition;
		OBJ(enemy)->mCarryAngleModifier = 0.0f;
		transit(enemy, JIGUMO_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80366B00
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	80366B3C
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Dead, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->deathProcedure();
}

/*
 * --INFO--
 * Address:	80366B98
 * Size:	0000C0
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			OBJ(enemy)->boundEffect();
			Vector3f pos = enemy->getPosition();
			cameraMgr->startVibration(0, pos, 2);
			rumbleMgr->startRumble(8, pos, 2);
		}

		if (enemy->mCurAnim->mType == KEYEVENT_END) {
			enemy->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80366C58
 * Size:	00003C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	mName = "attack";
}

/*
 * --INFO--
 * Address:	80366C94
 * Size:	0000BC
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_Attack, nullptr);
	enemy->disableEvent(0, EB_Cullable);
	OBJ(enemy)->mNextState                            = JIGUMO_Miss;
	OBJ(enemy)->mIsReversing                          = false;
	_10                                               = 0;
	_11                                               = 1;
	enemy->mCollTree->getCollPart('body')->mSpecialID = 'st__';
	enemy->mCollTree->getCollPart('head')->mSpecialID = '_t__';
	OBJ(enemy)->mIsOutsideHouse                       = true;
	enemy->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	80366D50
 * Size:	000488
 */
void StateAttack::exec(EnemyBase* enemy)
{
	if (_11) {
		FakePiki* target = OBJ(enemy)->getNearestPikiOrNavi(CG_PARMS(enemy)->mGeneral.mSearchAngle.mValue,
		                                                    CG_PARMS(enemy)->mGeneral.mSearchDistance.mValue);
		if (target) {
			enemy->turnToTarget(target, CG_PARMS(enemy)->mGeneral.mTurnSpeed(), CG_PARMS(enemy)->mGeneral.mMaxTurnAngle());
			OBJ(enemy)->mGoalPosition = Vector3f(target->getPosition());
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			_10 = 1;
			enemy->hardConstraintOff();
			enemy->setAtari(true);
			enemy->setAlive(true);
			_11 = 0;
			OBJ(enemy)->effectStart();
			if (enemy->mWaterBox) {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_WATER, 0);
			} else {
				enemy->mSoundObj->startSound(PSSE_JIGUMO_ATTACK_SOIL, 0);
			}

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			_10                             = 0;
			enemy->mCurrentVelocity         = Vector3f(0.0f);
			enemy->mTargetVelocity          = Vector3f(0.0f);
			OBJ(enemy)->mNextFaceDir        = roundAng(PI + enemy->mFaceDir);
			OBJ(enemy)->mGoalPosition       = enemy->mHomePosition;
			OBJ(enemy)->mCarryAngleModifier = 0.0f;
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}

	if (_10) {
		EnemyFunc::attackNavi(enemy, CG_PARMS(enemy)->mGeneral.mAttackRadius.mValue, CG_PARMS(enemy)->mGeneral.mAttackHitAngle.mValue,
		                      CG_PARMS(enemy)->mGeneral.mAttackDamage.mValue, nullptr, nullptr);
		OBJ(enemy)->walkFunc();

		ConditionHeightCheckPiki heightCheck(enemy);
		if (EnemyFunc::eatPikmin(enemy, &heightCheck) > 0) {
			OBJ(enemy)->mNextState   = JIGUMO_Carry;
			OBJ(enemy)->mIsReversing = true;
			_10                      = 0;
			OBJ(enemy)->effectStop();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}

		Vector3f pos     = OBJ(enemy)->getPosition();
		Vector3f goalPos = OBJ(enemy)->getGoalPos();
		if (pos.sqrDistance(goalPos) < 100.0f) {
			_10 = 0;
			OBJ(enemy)->effectStop();
			enemy->mTargetVelocity = Vector3f(0.0f);
		}
	}

	OBJ(enemy)->velocityControl();
}

/*
 * --INFO--
 * Address:	803671F4
 * Size:	000038
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->effectStop();
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	8036722C
 * Size:	00003C
 */
StateMiss::StateMiss(int stateID)
    : State(stateID)
{
	mName = "miss";
}

/*
 * --INFO--
 * Address:	80367268
 * Size:	00004C
 */
void StateMiss::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->mNextFaceDir = enemy->mFaceDir;
	enemy->startMotion(JIGUMOANIM_Miss, nullptr);
	_10 = 0;
}

/*
 * --INFO--
 * Address:	803672B4
 * Size:	000200
 */
void StateMiss::exec(EnemyBase* enemy)
{
	if (CG_PARMS(enemy)->_8FC) {
		Vector3f goalPos = OBJ(enemy)->getGoalPos();
		f32 angleDist    = enemy->turnToTarget2(goalPos, CG_PARMS(enemy)->mGeneral.mTurnSpeed(), CG_PARMS(enemy)->mGeneral.mMaxTurnAngle());
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

/*
 * --INFO--
 * Address:	803674B4
 * Size:	00003C
 */
StateReturn::StateReturn(int stateID)
    : State(stateID)
{
	mName = "return";
}

/*
 * --INFO--
 * Address:	803674F0
 * Size:	000040
 */
void StateReturn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_RunAway, nullptr);
	OBJ(enemy)->effectStart();
}

/*
 * --INFO--
 * Address:	80367530
 * Size:	000174
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

/*
 * --INFO--
 * Address:	803676A4
 * Size:	00002C
 */
void StateReturn::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->mCanBeEarthquaked = true;
	OBJ(enemy)->effectStop();
}

/*
 * --INFO--
 * Address:	803676D0
 * Size:	00003C
 */
StateCarry::StateCarry(int stateID)
    : State(stateID)
{
	mName = "carry";
}

/*
 * --INFO--
 * Address:	8036770C
 * Size:	000040
 */
void StateCarry::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_BackRun, nullptr);
	OBJ(enemy)->effectStart();
}

/*
 * --INFO--
 * Address:	8036774C
 * Size:	000190
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

/*
 * --INFO--
 * Address:	803678DC
 * Size:	00002C
 */
void StateCarry::cleanup(EnemyBase* enemy)
{
	OBJ(enemy)->mCanBeEarthquaked = true;
	OBJ(enemy)->effectStop();
}

/*
 * --INFO--
 * Address:	80367908
 * Size:	00003C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/*
 * --INFO--
 * Address:	80367944
 * Size:	0000CC
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
	cameraMgr->startVibration(0, pos, 2);
	rumbleMgr->startRumble(8, pos, 2);
}

/*
 * --INFO--
 * Address:	80367A10
 * Size:	0000FC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			f32 chance    = CG_PARMS(enemy)->mGeneral.mShakeChance.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

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

/*
 * --INFO--
 * Address:	80367B0C
 * Size:	00003C
 */
StateEat::StateEat(int stateID)
    : State(stateID)
{
	mName = "eat";
}

/*
 * --INFO--
 * Address:	80367B48
 * Size:	000058
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->mHideAnimPosition = enemy->mPosition;
	enemy->startMotion(JIGUMOANIM_Eat, nullptr);
	enemy->hardConstraintOn();
}

/*
 * --INFO--
 * Address:	80367BA0
 * Size:	000120
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

/*
 * --INFO--
 * Address:	80367CC0
 * Size:	00003C
 */
StateSearch::StateSearch(int stateID)
    : State(stateID)
{
	mName = "search";
}

/*
 * --INFO--
 * Address:	80367CFC
 * Size:	000088
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

/*
 * --INFO--
 * Address:	80367D84
 * Size:	000614
 */
void StateSearch::exec(EnemyBase* enemy)
{
	int animIdx = enemy->getCurrAnimIndex(); // r29
	FakePiki* target
	    = OBJ(enemy)->getNearestPikiOrNavi(CG_PARMS(enemy)->mGeneral.mSearchAngle(), CG_PARMS(enemy)->mGeneral.mSearchDistance()); // r28
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
		target = OBJ(enemy)->getNearestPikiOrNavi(CG_PARMS(enemy)->mGeneral.mViewAngle(), CG_PARMS(enemy)->mGeneral.mSightRadius());
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
			f32 rad          = CG_PARMS(enemy)->mGeneral.mAttackRadius() * enemy->getScaleMod();
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

/*
 * --INFO--
 * Address:	80368398
 * Size:	00003C
 */
StateSAttack::StateSAttack(int stateID)
    : State(stateID)
{
	mName = "sattack";
}

/*
 * --INFO--
 * Address:	803683D4
 * Size:	000058
 */
void StateSAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(JIGUMOANIM_SAttack, nullptr);
	_10 = 0;
	_11 = 0;
	enemy->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	8036842C
 * Size:	000238
 */
void StateSAttack::exec(EnemyBase* enemy)
{
	if (enemy->getMotionFrame() == CG_PARMS(enemy)->_924) {
		_11 = 1;
		enemy->setAtari(true);
		enemy->setAlive(true);
	}

	if (_11) {
		if (EnemyFunc::eatPikmin(enemy, nullptr)) {
			_10 = 1;
		}

		EnemyFunc::attackNavi(enemy, 50.0f * enemy->mScaleModifier, CG_PARMS(enemy)->mGeneral.mAttackHitAngle.mValue,
		                      CG_PARMS(enemy)->mGeneral.mAttackDamage.mValue, nullptr, nullptr);
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
			_11 = 0;
			enemy->setAtari(false);
			enemy->setAlive(false);
			if (!_10) {
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

/*
 * --INFO--
 * Address:	80368664
 * Size:	000024
 */
void StateSAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	80368688
 * Size:	00003C
 */
StateSMiss::StateSMiss(int stateID)
    : State(stateID)
{
	mName = "smiss";
}

/*
 * --INFO--
 * Address:	803686C4
 * Size:	00002C
 */
void StateSMiss::init(EnemyBase* enemy, StateArg* stateArg) { enemy->startMotion(JIGUMOANIM_SMiss, nullptr); }

/*
 * --INFO--
 * Address:	803686F0
 * Size:	000050
 */
void StateSMiss::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, JIGUMO_Search, nullptr);
	}
}
} // namespace Jigumo
} // namespace Game
