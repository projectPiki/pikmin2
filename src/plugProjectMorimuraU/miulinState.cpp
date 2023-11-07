#include "Game/Entities/Miulin.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/rumble.h"

namespace Game {
namespace Miulin {

/*
 * --INFO--
 * Address:	80362618
 * Size:	000150
 */
void FSM::init(EnemyBase* enemy)
{
	create(MIULIN_StateCount);
	registerState(new StateWait(MIULIN_Wait));
	registerState(new StateWalk(MIULIN_Walk));
	registerState(new StateAttackStart(MIULIN_AttackStart));
	registerState(new StateAttacking(MIULIN_Attacking));
	registerState(new StateAttackEnd(MIULIN_AttackEnd));
	registerState(new StateTurn(MIULIN_Turn));
	registerState(new StateFlick(MIULIN_Flick));
	registerState(new StateDead(MIULIN_Dead));
}

/*
 * --INFO--
 * Address:	80362768
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/*
 * --INFO--
 * Address:	803627A4
 * Size:	00008C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(MIULINANIM_Wait, nullptr);
	enemy->stopMotion();
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->hardConstraintOn();
	OBJ(enemy)->mIsSearching = false;
	enemy->disableEvent(0, EB_LifegaugeVisible);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
}

/*
 * --INFO--
 * Address:	80362830
 * Size:	000118
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (!OBJ(enemy)->isStartWalk()) {
		return;
	}

	if (enemy->mHealth <= 0.0f) {
		transit(enemy, MIULIN_Dead, nullptr);
	} else if (OBJ(enemy)->isAttackStart()) {
		transit(enemy, MIULIN_AttackStart, nullptr);
	} else if (OBJ(enemy)->nextTargetTurnCheck()) {
		transit(enemy, MIULIN_Turn, nullptr);
	} else {
		transit(enemy, MIULIN_Walk, nullptr);
	}

	enemy->hardConstraintOff();
	enemy->enableEvent(0, EB_LifegaugeVisible);
}

/*
 * --INFO--
 * Address:	80362948
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/*
 * --INFO--
 * Address:	80362984
 * Size:	00016C
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);

	OBJ(enemy)->mNextState = MIULIN_NULL;
	enemy->startMotion(MIULINANIM_Move, nullptr);
	mTurnTimer = 0;

	if (enemy->mTargetCreature) {
		mReturnTimer = 0;

		Vector3f targetPos = enemy->mTargetCreature->getPosition();
		Vector3f pos       = enemy->getPosition();

		f32 angleToTarget = angDist(angXZ(targetPos.x, targetPos.z, pos), enemy->getFaceDir());
		if (FABS(angleToTarget) > 3.0f * (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mMaxTurnAngle.mValue))) {
			transit(enemy, MIULIN_Turn, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80362AF0
 * Size:	000364
 */
void StateWalk::exec(EnemyBase* enemy)
{
	if (OBJ(enemy)->mNextState < MIULIN_Wait) {
		mTurnTimer++;
		OBJ(enemy)->walkFunc();

		if (OBJ(enemy)->mIsSearching) {
			OBJ(enemy)->turnFunc(1.0f);
		}

		if (!OBJ(enemy)->mIsSearching && (OBJ(enemy)->isOutOfTerritory() || mReturnTimer > CG_PROPERPARMS(OBJ(enemy)).mReturnTime.mValue)) {
			OBJ(enemy)->setReturnState();
			enemy->finishMotion();
			OBJ(enemy)->mNextState = MIULIN_Turn;
			mReturnTimer           = 0;

		} else if (OBJ(enemy)->isReachToGoal(10.0f)) {
			if (OBJ(enemy)->mIsSearching) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = MIULIN_Wait;

			} else if (OBJ(enemy)->nextTargetTurnCheck()) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = MIULIN_Turn;
			}
		} else if (mTurnTimer > 30) {
			f32 x;
			f32 z;
			Creature* creature = enemy->mTargetCreature;
			if (creature) {
				mReturnTimer         = 0;
				Vector3f creaturePos = creature->getPosition();
				x                    = creaturePos.x;
				z                    = creaturePos.z;
			} else {
				if (!OBJ(enemy)->isFindTarget()) {
					Vector3f goalPos = enemy->getGoalPos();
					x                = goalPos.x;
					z                = goalPos.z;
				}
				mReturnTimer++;
			}

			Vector3f pos = enemy->getPosition();
			f32 angle    = angDist(angXZ(x, z, pos), enemy->getFaceDir());
			if (FABS(angle) > 3.0f * (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mMaxTurnAngle.mValue))) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = MIULIN_Turn;
			}
		}
	}

	if (enemy->mHealth <= 0.0f) {
		OBJ(enemy)->mNextState = MIULIN_Dead;
		enemy->finishMotion();

	} else if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = MIULIN_Flick;
		enemy->finishMotion();

	} else if (OBJ(enemy)->isAttackStart()) {
		OBJ(enemy)->mNextState = MIULIN_AttackStart;
		enemy->finishMotion();
	}

	if (enemy->isFinishMotion()) {
		enemy->setAnimSpeed(1.5f * EnemyAnimatorBase::defaultAnimSpeed);
		enemy->mTargetVelocity = Vector3f(0.0f);
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
		enemy->resetAnimSpeed();
		enemy->mTargetVelocity  = Vector3f(0.0f);
		enemy->mCurrentVelocity = Vector3f(0.0f);
	}
}

/*
 * --INFO--
 * Address:	80362E54
 * Size:	000040
 */
StateAttackStart::StateAttackStart(int stateID)
    : State(stateID)
{
	mName = "attackstart";
}

/*
 * --INFO--
 * Address:	80362E94
 * Size:	00004C
 */
void StateAttackStart::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_AttackStart, nullptr);
	enemy->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	80362EE0
 * Size:	000050
 */
void StateAttackStart::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, MIULIN_Attacking, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80362F30
 * Size:	000040
 */
StateAttacking::StateAttacking(int stateID)
    : State(stateID)
{
	mName = "attackind"; // thanks devs
}

/*
 * --INFO--
 * Address:	80362F70
 * Size:	000058
 */
void StateAttacking::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_Attacking, nullptr);
	mIsTransitioning = true;
}

/*
 * --INFO--
 * Address:	80362FC8
 * Size:	00082C
 */
void StateAttacking::exec(EnemyBase* enemy)
{
	if (mIsTransitioning) {
		OBJ(enemy)->turnFunc(0.5f);
	}

	Vector3f pos;
	Vector3f effectPos;

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			mIsTransitioning = false;
			pos              = enemy->getPosition();
			const f32 theta  = enemy->getFaceDir();

			f32 weight = CG_PROPERPARMS(OBJ(enemy)).mMinAttackRange.mValue;
			effectPos  = Vector3f(weight * sinf(theta), 0.0f, weight * cosf(theta));
			pos += effectPos;

			f32 maxY   = 20.0f + pos.y;
			f32 minY   = pos.y - 20.0f;
			f32 radius = SQUARE(CG_PARMS(enemy)->mGeneral.mAttackRadius.mValue);

			Iterator<Piki> iterPiki(pikiMgr);

			CI_LOOP(iterPiki)
			{
				Piki* piki = *iterPiki;
				if (!piki->isAlive() || piki->mSticker == enemy) {
					continue;
				}

				Vector3f pikiPos = piki->getPosition();
				if (maxY > pikiPos.y && minY < pikiPos.y && sqrDistanceXZ(pos, pikiPos) < radius) {
					if (enemy->mTargetCreature == piki) {
						enemy->mTargetCreature = nullptr;
					}

					InteractBury bury(enemy, 0.0f);
					piki->stimulate(bury);
				}
			}

			Iterator<Navi> iterNavi(naviMgr);

			CI_LOOP(iterNavi)
			{
				Navi* navi = *iterNavi;
				if (!navi->isAlive()) {
					continue;
				}

				Vector3f naviPos = navi->getPosition();
				if (maxY > naviPos.y && minY < naviPos.y && sqrDistanceXZ(pos, naviPos) < radius) {
					if (enemy->mTargetCreature == navi) {
						enemy->mTargetCreature = nullptr;
					}

					InteractBury bury(enemy, 5.0f);
					navi->stimulate(bury);
				}
			}

			f32 chance    = CG_PARMS(enemy)->mGeneral.mShakeChance.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, chance, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);

			enemy->mFlickTimer = 0.0f;
			effectPos          = Vector3f(-20.0f, 0.0f, 31.0f);
			OBJ(enemy)->attackEffect(effectPos);
			rumbleMgr->startRumble(12, pos, RUMBLEID_Both);
			break;

		case KEYEVENT_3:
			effectPos = Vector3f(11.0f, 0.0f, 56.0f);
			OBJ(enemy)->attackEffect(effectPos);
			rumbleMgr->startRumble(12, pos, RUMBLEID_Both);
			break;

		case KEYEVENT_END:
			OBJ(enemy)->mNextState = MIULIN_AttackEnd;
			if (!(enemy->mHealth <= 0.0f) && OBJ(enemy)->isAttackStart()) {
				OBJ(enemy)->mNextState = MIULIN_Attacking;
			}

			transit(enemy, OBJ(enemy)->mNextState, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803637F4
 * Size:	000040
 */
StateAttackEnd::StateAttackEnd(int stateID)
    : State(stateID)
{
	mName = "attackend";
}

/*
 * --INFO--
 * Address:	80363834
 * Size:	000054
 */
void StateAttackEnd::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_AttackEnd, nullptr);
	OBJ(enemy)->mNextState = MIULIN_Turn;
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80363888
 * Size:	0000AC
 */
void StateAttackEnd::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		OBJ(enemy)->mNextState = MIULIN_Dead;
	} else if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = MIULIN_Flick;
	}

	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80363934
 * Size:	00003C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	mName = "turn";
}

/*
 * --INFO--
 * Address:	80363970
 * Size:	0000F4
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	if (!OBJ(enemy)->isFindTarget()) {
		OBJ(enemy)->setNextGoal();
	}

	f32 maxAngle = (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mMaxTurnAngle.mValue));
	if (OBJ(enemy)->mIsSearching) {
		maxAngle = 0.01f;
	}

	if (OBJ(enemy)->turnFunc(1.0f) < maxAngle) {
		transit(enemy, MIULIN_Walk, nullptr);
	} else {
		enemy->startMotion(MIULINANIM_Turn, nullptr);
		enemy->mTargetVelocity  = Vector3f(0.0f);
		enemy->mCurrentVelocity = Vector3f(0.0f);
	}
}

/*
 * --INFO--
 * Address:	80363A64
 * Size:	000178
 */
void StateTurn::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		OBJ(enemy)->mNextState = MIULIN_Dead;
		enemy->finishMotion();

	} else if (EnemyFunc::isStartFlick(enemy, false)) {
		OBJ(enemy)->mNextState = MIULIN_Flick;
		enemy->finishMotion();

	} else if (OBJ(enemy)->isAttackStart()) {
		OBJ(enemy)->mNextState = MIULIN_AttackStart;
		enemy->finishMotion();

	} else {
		if (enemy->isFinishMotion()) {
			enemy->setAnimSpeed(1.5f * EnemyAnimatorBase::defaultAnimSpeed);
		} else {
			OBJ(enemy)->isFindTarget();
		}

		if (OBJ(enemy)->turnFunc(1.0f) < (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mMaxTurnAngle.mValue))) {
			enemy->finishMotion();
			OBJ(enemy)->mNextState = MIULIN_Walk;
		}
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		JUT_ASSERTLINE(497, OBJ(enemy)->mNextState >= 0, "state -1\n");
		transit(enemy, OBJ(enemy)->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80363BDC
 * Size:	00003C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/*
 * --INFO--
 * Address:	80363C18
 * Size:	00004C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_Flick, nullptr);
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80363C64
 * Size:	000190
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (!enemy->mCurAnim->mIsPlaying) {
		return;
	}

	if (enemy->mCurAnim->mType == KEYEVENT_3) {
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
			transit(enemy, MIULIN_Dead, nullptr);

		} else if (OBJ(enemy)->isAttackStart()) {
			transit(enemy, MIULIN_AttackStart, nullptr);

		} else {
			transit(enemy, MIULIN_Turn, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80363DF4
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/*
 * --INFO--
 * Address:	80363E30
 * Size:	000054
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_Dead, nullptr);
	enemy->setEmotionCaution();
	enemy->deathProcedure();
}

/*
 * --INFO--
 * Address:	80363E84
 * Size:	000060
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			OBJ(enemy)->landEffect();
			break;

		case KEYEVENT_END:
			enemy->kill(nullptr);
			break;
		}
	}
}
} // namespace Miulin
} // namespace Game
