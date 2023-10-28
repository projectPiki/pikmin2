#include "Game/Entities/UmiMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "nans.h"

namespace Game {
namespace UmiMushi {

/*
 * --INFO--
 * Address:	80380A2C
 * Size:	000198
 */
void FSM::init(EnemyBase* enemy)
{
	create(UMIMUSHI_StateCount);

	registerState(new StateWait(UMIMUSHI_Wait));
	registerState(new StateWalk(UMIMUSHI_Walk));
	registerState(new StateFind(UMIMUSHI_Find));
	registerState(new StateSearch(UMIMUSHI_Search));
	registerState(new StateTurn(UMIMUSHI_Turn));
	registerState(new StateFlick(UMIMUSHI_Flick));
	registerState(new StateAttack(UMIMUSHI_Attack));
	registerState(new StateEat(UMIMUSHI_Eat));
	registerState(new StateDead(UMIMUSHI_Dead));
	registerState(new StateLost(UMIMUSHI_Lost));
}

/*
 * --INFO--
 * Address:	80380BC4
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	80380C00
 * Size:	000054
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_SRun, nullptr);
	OBJ(enemy)->mNextState = UMIMUSHI_NULL;
	mWaitTimer             = 0;
}

/*
 * --INFO--
 * Address:	80380C54
 * Size:	000214
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (!enemy->isFinishMotion()) {
		mWaitTimer++;
		if (mWaitTimer > CG_PROPERPARMS(enemy).mWaitTimeAfterAttack.mValue) {
			enemy->finishMotion();
		}
	}

	if (enemy->mHealth <= 0.0f) {
		enemy->finishMotion();
		OBJ(enemy)->mNextState = UMIMUSHI_Dead;
	}

	if (CG_PARMS(OBJ(enemy))->_A11 || (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END)) {
		if (OBJ(enemy)->mNextState < 0) {
			if (EnemyFunc::isStartFlick(enemy, false)) {
				transit(enemy, UMIMUSHI_Flick, nullptr);
				OBJ(enemy)->mNextState = UMIMUSHI_Search;

			} else if (OBJ(enemy)->isChangeNavi()) {
				transit(enemy, UMIMUSHI_Find, nullptr);

			} else if (OBJ(enemy)->isAttackStart()) {
				transit(enemy, UMIMUSHI_Attack, nullptr);

			} else if (OBJ(enemy)->mTargetNavi) {
				if (OBJ(enemy)->isNeedTurn()) {
					transit(enemy, UMIMUSHI_Turn, nullptr);

				} else {
					transit(enemy, UMIMUSHI_Search, nullptr);
				}

			} else {
				transit(enemy, UMIMUSHI_Walk, nullptr);
			}

		} else {
			transit(enemy, OBJ(enemy)->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80380E68
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/*
 * --INFO--
 * Address:	80380EA4
 * Size:	000060
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_Run, nullptr);
	OBJ(enemy)->mNextState = UMIMUSHI_NULL;
	OBJ(enemy)->resetWalkParm();
	mBlindWaitTimer = 0;
	mBlindMoveTimer = 0;
}

/*
 * --INFO--
 * Address:	80380F04
 * Size:	0002C0
 */
void StateWalk::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->isReachToGoal(50.0f)) {
		if (OBJ(enemy)->isOutOfTerritory(1.0f)) {
			OBJ(enemy)->setNextGoal();

		} else if (!OBJ(enemy)->isFindTarget()) {
			OBJ(enemy)->setNextGoal();
		}
	}

	if (enemy->mHealth <= 0.0f) {
		enemy->finishMotion();
		enemy->mTargetVelocity = Vector3f(0.0f);
		OBJ(enemy)->mNextState = UMIMUSHI_Dead;

	} else if (OBJ(enemy)->mNextState < 0) {
		// if Ranging Bloyster, just do walkFunc
		if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_UmiMushi) {
			OBJ(enemy)->walkFunc();

			// if Toady Bloyster, check if we're waiting
			// if we're waiting, keep waiting til we've waited max time
		} else if (mBlindWaitTimer > 0) {
			enemy->mTargetVelocity = Vector3f(0.0f);
			mBlindWaitTimer++;

			// if we've waited max time, reset timers
			if (mBlindWaitTimer > CG_PROPERPARMS(enemy).mBlindWaitTime.mValue) {
				mBlindWaitTimer = 0;
				mBlindMoveTimer = 0;
			}

			// if wait timer has been reset, move for a bit
		} else {
			mBlindMoveTimer++;
			OBJ(enemy)->walkFunc();

			// if we've moved for max time, put us in wait mode
			if (mBlindMoveTimer > CG_PROPERPARMS(enemy).mBlindMoveTime.mValue) {
				mBlindMoveTimer = 0;
				mBlindWaitTimer = 1;
			}
		}

		if (EnemyFunc::isStartFlick(enemy, false)) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			OBJ(enemy)->mNextState = UMIMUSHI_Flick;

		} else if (OBJ(enemy)->isAttackStart()) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			OBJ(enemy)->mNextState = UMIMUSHI_Attack;

		} else if (OBJ(enemy)->isChangeNavi()) {
			enemy->mTargetVelocity  = Vector3f(0.0f);
			enemy->mCurrentVelocity = Vector3f(0.0f);
			transit(enemy, UMIMUSHI_Find, nullptr);
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->mCurrentVelocity = Vector3f(0.0f);
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
		if (OBJ(enemy)->mNextState == UMIMUSHI_Flick) {
			OBJ(enemy)->mNextState = UMIMUSHI_Walk;
		}
	}
}

/*
 * --INFO--
 * Address:	803811C4
 * Size:	00003C
 */
StateFind::StateFind(int stateID)
    : State(stateID)
{
	mName = "find";
}

/*
 * --INFO--
 * Address:	80381200
 * Size:	00008C
 */
void StateFind::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (OBJ(enemy)->mTargetNavi) {
		enemy->setEmotionExcitement();
		OBJ(enemy)->setFindAnim();
		OBJ(enemy)->mNextState = UMIMUSHI_NULL;
	} else {
		enemy->setEmotionCaution();
		OBJ(enemy)->fadeColorEffect();
		transit(enemy, UMIMUSHI_Lost, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8038128C
 * Size:	00012C
 */
void StateFind::exec(EnemyBase* enemy)
{
	OBJ(enemy)->changeColor();

	if (enemy->mCurAnim->mIsPlaying) {
		enemy->getCurrAnimIndex();
		if (enemy->mCurAnim->mType == KEYEVENT_END) {
			OBJ(enemy)->createColorEffect();

			if (enemy->mHealth <= 0.0f) {
				transit(enemy, UMIMUSHI_Dead, nullptr);

			} else if (OBJ(enemy)->isNeedTurn()) {
				transit(enemy, UMIMUSHI_Turn, nullptr);

			} else if (OBJ(enemy)->isAttackStart()) {
				transit(enemy, UMIMUSHI_Attack, nullptr);

			} else {
				transit(enemy, UMIMUSHI_Search, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803813B8
 * Size:	00003C
 */
StateSearch::StateSearch(int stateID)
    : State(stateID)
{
	mName = "search";
}

/*
 * --INFO--
 * Address:	803813F4
 * Size:	000040
 */
void StateSearch::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_SRun, nullptr);
	OBJ(enemy)->mNextState = UMIMUSHI_NULL;
}

/*
 * --INFO--
 * Address:	80381434
 * Size:	000294
 */
void StateSearch::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		enemy->finishMotion();
		enemy->mTargetVelocity = Vector3f(0.0f);
		OBJ(enemy)->mNextState = UMIMUSHI_Dead;

	} else if (OBJ(enemy)->mNextState < 0) {
		bool check = true;
		if (OBJ(enemy)->canMove()) {
			f32 speed    = CG_PROPERPARMS(enemy).mMoveSpeed.mValue;
			f32 sinTheta = (f32)sin(enemy->getFaceDir());
			f32 y        = enemy->getTargetVelocity().y;
			f32 cosTheta = (f32)cos(enemy->getFaceDir());

			enemy->setTargetVelocity(Vector3f(speed * sinTheta, y, speed * cosTheta));
			enemy->mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);

		} else {
			check = OBJ(enemy)->outMove();
		}

		if (EnemyFunc::isStartFlick(enemy, false)) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			OBJ(enemy)->mNextState = UMIMUSHI_Flick;

		} else if (OBJ(enemy)->isChangeNavi()) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			OBJ(enemy)->mNextState = UMIMUSHI_Find;

		} else if (OBJ(enemy)->isAttackStart()) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			OBJ(enemy)->mNextState = UMIMUSHI_Attack;

		} else if (check && OBJ(enemy)->isNeedTurn()) {
			enemy->finishMotion();
			enemy->mTargetVelocity = Vector3f(0.0f);
			OBJ(enemy)->mNextState = UMIMUSHI_Turn;
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->mCurrentVelocity = Vector3f(0.0f);
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
		if (OBJ(enemy)->mNextState == UMIMUSHI_Flick) {
			OBJ(enemy)->mNextState = UMIMUSHI_Search;
		}
	}
}

/*
 * --INFO--
 * Address:	803816C8
 * Size:	00003C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	mName = "turn";
}

/*
 * --INFO--
 * Address:	80381704
 * Size:	000040
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_STurn, nullptr);
	OBJ(enemy)->mNextState = UMIMUSHI_NULL;
}

/*
 * --INFO--
 * Address:	80381744
 * Size:	0001EC
 */
void StateTurn::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		enemy->finishMotion();
		OBJ(enemy)->mNextState = UMIMUSHI_Dead;

	} else {
		int nextState = OBJ(enemy)->mNextState;
		if (nextState < 0) {
			if (EnemyFunc::isStartFlick(enemy, false)) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = UMIMUSHI_Flick;

			} else if (OBJ(enemy)->isChangeNavi()) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = UMIMUSHI_Find;

			} else if (OBJ(enemy)->turnFunc() < PI * (DEG2RAD * CG_PROPERPARMS(enemy).mTurnEndAngle.mValue)) {
				if (OBJ(enemy)->isAttackStart()) {
					enemy->finishMotion();
					OBJ(enemy)->mNextState = UMIMUSHI_Attack;

				} else {
					enemy->finishMotion();
					OBJ(enemy)->mNextState = UMIMUSHI_Search;
				}
			}

		} else {
			if (nextState != UMIMUSHI_Find && nextState != UMIMUSHI_Flick) {
				OBJ(enemy)->turnFunc();
				if (CG_PARMS(OBJ(enemy))->_A12 && OBJ(enemy)->isChangeNavi()) {
					OBJ(enemy)->mNextState = UMIMUSHI_Find;
				}
			}

			if (OBJ(enemy)->mNextState == UMIMUSHI_Attack && !naviMgr->getActiveNavi()) {
				OBJ(enemy)->mNextState = UMIMUSHI_Turn;
			}
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {

		JUT_ASSERTLINE(406, OBJ(enemy)->mNextState >= 0, nullptr); // really? no assert message?

		transit(enemy, OBJ(enemy)->mNextState, nullptr);
		if (OBJ(enemy)->mNextState == UMIMUSHI_Flick) {
			OBJ(enemy)->mNextState = UMIMUSHI_Turn;
		}
	}
}

/*
 * --INFO--
 * Address:	80381930
 * Size:	00003C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/*
 * --INFO--
 * Address:	8038196C
 * Size:	000160
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_Flick, nullptr);
	OBJ(enemy)->flickEffect();

	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_UmiMushi) {
		Vector3f pos = enemy->getPosition();
		cameraMgr->startVibration(9, pos, 2);
		rumbleMgr->startRumble(13, pos, 2);

		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(enemy->mSoundObj); // get sound object
		PSM::checkBoss(soundObj);                                                  // make sure we have sound object
		if (soundObj) {                                                            // REALLY MAKE SURE WE HAVE SOUND OBJECT
			soundObj->jumpRequest(4);
		}
	}
}

/*
 * --INFO--
 * Address:	80381ACC
 * Size:	000190
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			f32 rate      = CG_PARMS(enemy)->mGeneral.mShakeChance.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			enemy->mFlickTimer = 0.0f;

		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			if (enemy->mHealth <= 0.0f) {
				transit(enemy, UMIMUSHI_Dead, nullptr);

			} else if (OBJ(enemy)->isChangeNavi()) {
				transit(enemy, UMIMUSHI_Find, nullptr);

			} else {
				transit(enemy, OBJ(enemy)->mNextState, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80381C5C
 * Size:	00003C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	mName = "attack";
}

/*
 * --INFO--
 * Address:	80381C98
 * Size:	000118
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_Attack, nullptr);
	OBJ(enemy)->mNextState = UMIMUSHI_NULL;
	mIsTongueActive        = false;
	mTongueHasPiki         = false;

	if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_UmiMushi) {

		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(enemy->mSoundObj); // get sound object
		PSM::checkBoss(soundObj);                                                  // make sure we have sound object
		if (soundObj) {                                                            // REALLY MAKE SURE WE HAVE SOUND OBJECT
			soundObj->jumpRequest(3);
		}
	}
}

/*
 * --INFO--
 * Address:	80381DB0
 * Size:	000520
 */
void StateAttack::exec(EnemyBase* enemy)
{
	if (mIsTongueActive) {
		if (EnemyFunc::eatPikmin(enemy, nullptr) > 0) {
			mTongueHasPiki = true;
		}
	}

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			// probably commented out code - required to match though.
			break;

		case KEYEVENT_3:
			mIsTongueActive = true;
			break;

		case KEYEVENT_4:
			OBJ(enemy)->attackEffect();
			if (enemy->getEnemyTypeID() == EnemyTypeID::EnemyID_UmiMushi) {
				Vector3f pos = enemy->getPosition();
				rumbleMgr->startRumble(12, pos, 2);
			}
			break;

		case KEYEVENT_5:
			if (CG_PARMS(enemy)->_A13) {
				Iterator<Navi> iter(naviMgr);
				CI_LOOP(iter)
				{
					Navi* navi = *iter;
					for (int i = 0; i < enemy->getMouthSlots()->mMax; i++) {
						MouthCollPart* slot = enemy->getMouthSlots()->getSlot(i);
						Vector3f slotPos;
						slot->getPosition(slotPos);
						Vector3f naviPos = navi->getPosition();
						Vector3f sep     = Vector3f(slotPos.y - naviPos.y, slotPos.z - naviPos.z, slotPos.x - naviPos.x); // why.
						f32 dist         = _length2(sep);
						if (dist < slot->mRadius) {
							InteractAttack attack(enemy, CG_PARMS(enemy)->mGeneral.mAttackDamage.mValue, nullptr);
							navi->stimulate(attack);
						}
					}
				}
			}
			break;

		case KEYEVENT_6:
			f32 rate      = CG_PARMS(enemy)->mGeneral.mShakeChance.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			enemy->mFlickTimer = 0.0f;
			mIsTongueActive    = false;
			break;

		case KEYEVENT_END:
			if (mTongueHasPiki) {
				transit(enemy, UMIMUSHI_Eat, nullptr);
			} else {
				transit(enemy, UMIMUSHI_Wait, nullptr);
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803822D0
 * Size:	00003C
 */
StateEat::StateEat(int stateID)
    : State(stateID)
{
	mName = "eat";
}

/*
 * --INFO--
 * Address:	8038230C
 * Size:	000040
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_Eat, nullptr);
	OBJ(enemy)->eatEffect();
}

/*
 * --INFO--
 * Address:	8038234C
 * Size:	0000B8
 */
void StateEat::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		EnemyFunc::swallowPikmin(enemy, 300.0f, nullptr);

		if (enemy->mHealth <= 0.0f) {
			transit(enemy, UMIMUSHI_Dead, nullptr);

		} else {
			transit(enemy, UMIMUSHI_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80382404
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	80382440
 * Size:	000088
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_Dead, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->deathProcedure();
	OBJ(enemy)->fadeAllEffect();
	OBJ(enemy)->bubbleEffect();
	enemy->mSoundObj->startSound(PSSE_EN_UMI_DEAD, 0);
}

/*
 * --INFO--
 * Address:	803824C8
 * Size:	0000B8
 */
void StateDead::exec(EnemyBase* enemy)
{
	OBJ(enemy)->changeColor();

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			OBJ(enemy)->flickEffect();
			break;

		case KEYEVENT_3:
			OBJ(enemy)->meltEffect();
			enemy->mSoundObj->startSound(PSSE_EN_UMI_DEAD_GND, 0);
			break;

		case KEYEVENT_4:
			OBJ(enemy)->delShadow();
			break;

		case KEYEVENT_END:
			enemy->kill(nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80382580
 * Size:	00003C
 */
StateLost::StateLost(int stateID)
    : State(stateID)
{
	mName = "lost";
}

/*
 * --INFO--
 * Address:	803825BC
 * Size:	000054
 */
void StateLost::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(UMIANIM_OutView, nullptr);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->mTargetVelocity  = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	80382610
 * Size:	000090
 */
void StateLost::exec(EnemyBase* enemy)
{
	OBJ(enemy)->resetColor();
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		OBJ(enemy)->mGoalPosition = enemy->mHomePosition;
		transit(enemy, UMIMUSHI_Walk, nullptr);
	}
}

} // namespace UmiMushi
} // namespace Game
