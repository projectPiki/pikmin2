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
	enemy->startMotion(7, nullptr);
	enemy->stopMotion();
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->hardConstraintOn();
	static_cast<Obj*>(enemy)->_2E4 = false;
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
	if (static_cast<Obj*>(enemy)->isStartWalk()) {
		if (enemy->mHealth <= 0.0f) {
			transit(enemy, MIULIN_Dead, nullptr);
		} else if (static_cast<Obj*>(enemy)->isAttackStart()) {
			transit(enemy, MIULIN_AttackStart, nullptr);
		} else if (static_cast<Obj*>(enemy)->nextTargetTurnCheck()) {
			transit(enemy, MIULIN_Turn, nullptr);
		} else {
			transit(enemy, MIULIN_Walk, nullptr);
		}

		enemy->hardConstraintOff();
		enemy->enableEvent(0, EB_LifegaugeVisible);
	}
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
	enemy->startMotion(5, nullptr);
	_14 = 0;
	if (enemy->mTargetCreature) {
		_10                = 0;
		Vector3f targetPos = enemy->mTargetCreature->getPosition();
		Vector3f pos       = enemy->getPosition();

		f32 angle = angDist(angXZ(targetPos.x, targetPos.z, pos), enemy->getFaceDir());
		if (FABS(angle) > 3.0f * (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mFp06.mValue))) {
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
	if (OBJ(enemy)->mNextState < 0) {
		_14++;
		OBJ(enemy)->walkFunc();
		if (OBJ(enemy)->_2E4) {
			OBJ(enemy)->turnFunc(1.0f);
		}

		if (!OBJ(enemy)->_2E4 && (OBJ(enemy)->isOutOfTerritory() || _10 > CG_PROPERPARMS(OBJ(enemy)).mIp01.mValue)) {
			OBJ(enemy)->setReturnState();
			enemy->finishMotion();
			OBJ(enemy)->mNextState = MIULIN_Turn;
			_10                    = 0;

		} else if (OBJ(enemy)->isReachToGoal(10.0f)) {
			if (OBJ(enemy)->_2E4) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = MIULIN_Wait;

			} else if (OBJ(enemy)->nextTargetTurnCheck()) {
				enemy->finishMotion();
				OBJ(enemy)->mNextState = MIULIN_Turn;
			}
		} else if (_14 > 30) {
			f32 x;
			f32 z;
			Creature* creature = enemy->mTargetCreature;
			if (creature) {
				_10                  = 0;
				Vector3f creaturePos = creature->getPosition();
				x                    = creaturePos.x;
				z                    = creaturePos.z;
			} else {
				if (!OBJ(enemy)->isFindTarget()) {
					Vector3f goalPos = enemy->getGoalPos();
					x                = goalPos.x;
					z                = goalPos.z;
				}
				_10++;
			}

			Vector3f pos = enemy->getPosition();
			f32 angle    = angDist(angXZ(x, z, pos), enemy->getFaceDir());
			if (FABS(angle) > 3.0f * (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mFp06.mValue))) {
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
	enemy->startMotion(0, nullptr);
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
	enemy->startMotion(1, nullptr);
	_10 = 1;
}

/*
 * --INFO--
 * Address:	80362FC8
 * Size:	00082C
 */
void StateAttacking::exec(EnemyBase* enemy)
{
	if (_10) {
		OBJ(enemy)->turnFunc(0.5f);
	}

	Vector3f pos;
	Vector3f effectPos;

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_2:
			_10             = 0;
			pos             = enemy->getPosition();
			const f32 theta = enemy->getFaceDir();
			f32 weight      = CG_PROPERPARMS(OBJ(enemy)).mFp08.mValue;
			effectPos       = Vector3f(weight * pikmin2_sinf(theta), 0.0f, weight * pikmin2_cosf(theta));
			pos.x += effectPos.x;
			pos.y += effectPos.y;
			pos.z += effectPos.z;

			f32 maxY   = 20.0f + pos.y;
			f32 minY   = pos.y - 20.0f;
			f32 radius = SQUARE(CG_PARMS(enemy)->mGeneral.mAttackRadius.mValue);

			Iterator<Piki> iterPiki(pikiMgr);

			CI_LOOP(iterPiki)
			{
				Piki* piki = *iterPiki;
				if (piki->isAlive() && piki->mSticker != enemy) {
					Vector3f pikiPos = piki->getPosition();
					if (maxY > pikiPos.y && minY < pikiPos.y && sqrDistanceXZ(pos, pikiPos) < radius) {
						if (enemy->mTargetCreature == piki) {
							enemy->mTargetCreature = nullptr;
						}
						InteractBury bury(enemy, 0.0f);
						piki->stimulate(bury);
					}
				}
			}

			Iterator<Navi> iterNavi(naviMgr);

			CI_LOOP(iterNavi)
			{
				Navi* navi = *iterNavi;
				if (navi->isAlive()) {
					Vector3f naviPos = navi->getPosition();
					if (maxY > naviPos.y && minY < naviPos.y && sqrDistanceXZ(pos, naviPos) < radius) {
						if (enemy->mTargetCreature == navi) {
							enemy->mTargetCreature = nullptr;
						}
						InteractBury bury(enemy, 5.0f);
						navi->stimulate(bury);
					}
				}
			}

			f32 rate      = CG_PARMS(enemy)->mGeneral.mShakeRateMaybe.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, -1000.0f, nullptr);
			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, -1000.0f, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, -1000.0f, nullptr);

			enemy->mToFlick = 0.0f;
			effectPos       = Vector3f(-20.0f, 0.0f, 31.0f);
			OBJ(enemy)->attackEffect(effectPos);
			rumbleMgr->startRumble(12, pos, 2);
			break;

		case KEYEVENT_3:
			effectPos = Vector3f(11.0f, 0.0f, 56.0f);
			OBJ(enemy)->attackEffect(effectPos);
			rumbleMgr->startRumble(12, pos, 2);
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
	enemy->startMotion(2, nullptr);
	static_cast<Obj*>(enemy)->mNextState = MIULIN_Turn;
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
		static_cast<Obj*>(enemy)->mNextState = MIULIN_Dead;
	} else if (EnemyFunc::isStartFlick(enemy, false)) {
		static_cast<Obj*>(enemy)->mNextState = MIULIN_Flick;
	}
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, static_cast<Obj*>(enemy)->mNextState, nullptr);
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

	f32 maxAngle = (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mFp06.mValue));
	if (OBJ(enemy)->_2E4) {
		maxAngle = 0.01f;
	}

	if (OBJ(enemy)->turnFunc(1.0f) < maxAngle) {
		transit(enemy, MIULIN_Walk, nullptr);
	} else {
		enemy->startMotion(8, nullptr);
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

		if (OBJ(enemy)->turnFunc(1.0f) < (PI * (DEG2RAD * CG_PROPERPARMS(OBJ(enemy)).mFp06.mValue))) {
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
	enemy->startMotion(4, nullptr);
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80363C64
 * Size:	000190
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_3) {
			f32 rate      = CG_PARMS(enemy)->mGeneral.mShakeRateMaybe.mValue;
			f32 knockback = CG_PARMS(enemy)->mGeneral.mShakeKnockback.mValue;
			f32 damage    = CG_PARMS(enemy)->mGeneral.mShakeDamage.mValue;
			f32 range     = CG_PARMS(enemy)->mGeneral.mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, -1000.0f, nullptr);
			EnemyFunc::flickStickPikmin(enemy, rate, knockback, damage, -1000.0f, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, -1000.0f, nullptr);

			enemy->mToFlick = 0.0f;

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
	enemy->startMotion(3, nullptr);
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
			static_cast<Obj*>(enemy)->landEffect();
			break;

		case KEYEVENT_END:
			enemy->kill(nullptr);
			break;
		}
	}
}
} // namespace Miulin
} // namespace Game
