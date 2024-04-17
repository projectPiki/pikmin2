#include "Game/Entities/Miulin.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/rumble.h"

namespace Game {
namespace Miulin {

/**
 * @note Address: 0x80362618
 * @note Size: 0x150
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

/**
 * @note Address: 0x80362768
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "wait";
}

/**
 * @note Address: 0x803627A4
 * @note Size: 0x8C
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

/**
 * @note Address: 0x80362830
 * @note Size: 0x118
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

/**
 * @note Address: 0x80362948
 * @note Size: 0x3C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/**
 * @note Address: 0x80362984
 * @note Size: 0x16C
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

/**
 * @note Address: 0x80362AF0
 * @note Size: 0x364
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

/**
 * @note Address: 0x80362E54
 * @note Size: 0x40
 */
StateAttackStart::StateAttackStart(int stateID)
    : State(stateID)
{
	mName = "attackstart";
}

/**
 * @note Address: 0x80362E94
 * @note Size: 0x4C
 */
void StateAttackStart::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_AttackStart, nullptr);
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x80362EE0
 * @note Size: 0x50
 */
void StateAttackStart::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, MIULIN_Attacking, nullptr);
	}
}

/**
 * @note Address: 0x80362F30
 * @note Size: 0x40
 */
StateAttacking::StateAttacking(int stateID)
    : State(stateID)
{
	mName = "attackind"; // thanks devs
}

/**
 * @note Address: 0x80362F70
 * @note Size: 0x58
 */
void StateAttacking::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_Attacking, nullptr);
	mIsTransitioning = true;
}

/**
 * @note Address: 0x80362FC8
 * @note Size: 0x82C
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
			f32 radius = SQUARE(CG_GENERALPARMS(enemy).mAttackRadius.mValue);

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

			f32 chance    = CG_GENERALPARMS(enemy).mShakeChance.mValue;
			f32 knockback = CG_GENERALPARMS(enemy).mShakeKnockback.mValue;
			f32 damage    = CG_GENERALPARMS(enemy).mShakeDamage.mValue;
			f32 range     = CG_GENERALPARMS(enemy).mShakeRange.mValue;

			EnemyFunc::flickNearbyPikmin(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, chance, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(enemy, range, knockback, damage, FLICK_BACKWARD_ANGLE, nullptr);

			enemy->mFlickTimer = 0.0f;
			effectPos          = Vector3f(-20.0f, 0.0f, 31.0f);
			OBJ(enemy)->attackEffect(effectPos);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed12, pos, RUMBLEID_Both);
			break;

		case KEYEVENT_3:
			effectPos = Vector3f(11.0f, 0.0f, 56.0f);
			OBJ(enemy)->attackEffect(effectPos);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed12, pos, RUMBLEID_Both);
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

/**
 * @note Address: 0x803637F4
 * @note Size: 0x40
 */
StateAttackEnd::StateAttackEnd(int stateID)
    : State(stateID)
{
	mName = "attackend";
}

/**
 * @note Address: 0x80363834
 * @note Size: 0x54
 */
void StateAttackEnd::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_AttackEnd, nullptr);
	OBJ(enemy)->mNextState = MIULIN_Turn;
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80363888
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80363934
 * @note Size: 0x3C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	mName = "turn";
}

/**
 * @note Address: 0x80363970
 * @note Size: 0xF4
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

/**
 * @note Address: 0x80363A64
 * @note Size: 0x178
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

/**
 * @note Address: 0x80363BDC
 * @note Size: 0x3C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	mName = "flick";
}

/**
 * @note Address: 0x80363C18
 * @note Size: 0x4C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_Flick, nullptr);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80363C64
 * @note Size: 0x190
 */
void StateFlick::exec(EnemyBase* enemy)
{
	if (!enemy->mCurAnim->mIsPlaying) {
		return;
	}

	if (enemy->mCurAnim->mType == KEYEVENT_3) {
		f32 rate      = CG_GENERALPARMS(enemy).mShakeChance.mValue;
		f32 knockback = CG_GENERALPARMS(enemy).mShakeKnockback.mValue;
		f32 damage    = CG_GENERALPARMS(enemy).mShakeDamage.mValue;
		f32 range     = CG_GENERALPARMS(enemy).mShakeRange.mValue;

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

/**
 * @note Address: 0x80363DF4
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x80363E30
 * @note Size: 0x54
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(MIULINANIM_Dead, nullptr);
	enemy->setEmotionCaution();
	enemy->deathProcedure();
}

/**
 * @note Address: 0x80363E84
 * @note Size: 0x60
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
