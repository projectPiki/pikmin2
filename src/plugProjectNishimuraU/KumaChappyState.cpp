#include "Game/Entities/KumaChappy.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace KumaChappy {

/**
 * @note Address: 0x80295E28
 * @note Size: 0x328
 */
void FSM::init(EnemyBase* enemy)
{
	create(KUMACHAPPY_StateCount);
	registerState(new StateDead);
	registerState(new StateRebirth);
	registerState(new StateLost);
	registerState(new StateAttack);
	registerState(new StateFlick);
	registerState(new StateTurn);
	registerState(new StateTurnPath);
	registerState(new StateWalk);
	registerState(new StateWalkPath);
}

/**
 * @note Address: 0x80296150
 * @note Size: 0x50
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(KUMACHAPPYANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802961A0
 * @note Size: 0x98
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			chappy->startEnemyRumble();
		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->getEnemyTypeID() == EnemyTypeID::EnemyID_KumaChappy) {
				chappy->disableEvent(0, EB_DeathEffectEnabled);
			}

			chappy->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80296240
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80296244
 * @note Size: 0x58
 */
void StateRebirth::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->disableEvent(0, EB_NoInterrupt);
	chappy->mTargetCreature = nullptr;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Rebirth, nullptr);
}

/**
 * @note Address: 0x8029629C
 * @note Size: 0x5B0
 */
void StateRebirth::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(chappy, CG_GENERALPARMS(chappy).mShakeChance(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                            CG_GENERALPARMS(chappy).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                             CG_GENERALPARMS(chappy).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                           CG_GENERALPARMS(chappy).mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
			chappy->mFlickTimer = 0.0f;

		} else if (chappy->mCurAnim->mType == KEYEVENT_3) {
			chappy->enableEvent(0, EB_NoInterrupt);

		} else if (chappy->mCurAnim->mType == KEYEVENT_4) {
			chappy->disableEvent(0, EB_NoInterrupt);

		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->mHealth <= 0.0f) {
				transit(chappy, KUMACHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(chappy, false)) {
				transit(chappy, KUMACHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = chappy->getSearchedTarget();
			if (target) {
				f32 angleDist = chappy->getAngDist(target);
				if (chappy->isTargetAttackable(target, CG_GENERALPARMS(chappy).mMaxAttackRange(),
				                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Attack, nullptr);
					return;
				}

				if (isAngleWithin(angleDist, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Walk, nullptr);
					return;
				}

				transit(chappy, KUMACHAPPY_Turn, nullptr);
				return;
			}
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleDist      = chappy->getAngDist(targetPos);
			if (absF(angleDist) <= (PI / 4)) {
				transit(chappy, KUMACHAPPY_WalkPath, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_TurnPath, nullptr);
		}
	}
}

/**
 * @note Address: 0x8029684C
 * @note Size: 0x10
 */
void StateRebirth::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x8029685C
 * @note Size: 0x4C
 */
void StateLost::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy             = OBJ(enemy);
	chappy->mNextState      = KUMACHAPPY_NULL;
	chappy->mTargetCreature = nullptr;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Lost, nullptr);
}

/**
 * @note Address: 0x802968A8
 * @note Size: 0x45C
 */
void StateLost::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		if (chappy->mHealth <= 0.0f) {
			transit(chappy, KUMACHAPPY_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(chappy, false)) {
			transit(chappy, KUMACHAPPY_Flick, nullptr);
			return;
		}

		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->getAngDist(target);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				transit(chappy, KUMACHAPPY_Attack, nullptr);
				return;
			}

			if (isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				transit(chappy, KUMACHAPPY_Walk, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_Turn, nullptr);
			return;
		}

		chappy->setNearestWayPoint();
		Vector3f targetPos = chappy->mTargetPos;
		f32 angleSep       = chappy->getAngDist(targetPos);
		if (isAngleWithin(angleSep, 45.0f)) {
			transit(chappy, KUMACHAPPY_WalkPath, nullptr);
			return;
		}

		transit(chappy, KUMACHAPPY_TurnPath, nullptr);
	}
}

/**
 * @note Address: 0x80296D04
 * @note Size: 0x4
 */
void StateLost::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80296D08
 * @note Size: 0x58
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy             = OBJ(enemy);
	chappy->mNextState      = KUMACHAPPY_NULL;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->setEmotionExcitement();
	chappy->startMotion(KUMACHAPPYANIM_Attack, nullptr);
}

/**
 * @note Address: 0x80296D60
 * @note Size: 0x550
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			if (chappy->getCurrAnimIndex() == KUMACHAPPYANIM_Attack) {
				int naviCheck
				    = EnemyFunc::attackNavi(chappy, CG_GENERALPARMS(chappy).mAttackRadius(), CG_GENERALPARMS(chappy).mAttackHitAngle(),
				                            CG_GENERALPARMS(chappy).mAttackDamage(), nullptr, nullptr);
				int eatCheck = naviCheck + EnemyFunc::eatPikmin(chappy, nullptr);

				EnemyFunc::flickStickPikmin(chappy, CG_GENERALPARMS(chappy).mShakeChance(), CG_GENERALPARMS(chappy).mShakeKnockback(),
				                            CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
				if (eatCheck != 0) {
					return;
				}

				chappy->startMotion(KUMACHAPPYANIM_Eat, nullptr);
				return;
			}

			chappy->startEnemyRumble();

		} else if (chappy->mCurAnim->mType == KEYEVENT_3) {
			EnemyFunc::swallowPikmin(chappy, CG_PROPERPARMS(chappy).mPoisonDamage(), nullptr);
			if (chappy->mHealth <= 0.0f) {
				chappy->setAnimSpeed(60.0f);
			}

		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->mHealth <= 0.0f) {
				transit(chappy, KUMACHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(chappy, false)) {
				transit(chappy, KUMACHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = chappy->getSearchedTarget();
			if (target) {
				f32 angleSep = chappy->getAngDist(target);
				if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
				                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Attack, nullptr);
					return;
				}

				if (isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Walk, nullptr);
					return;
				}

				transit(chappy, KUMACHAPPY_Turn, nullptr);
				return;
			}

			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep       = chappy->getAngDist(targetPos);
			if (isAngleWithin(angleSep, 45.0f)) {
				transit(chappy, KUMACHAPPY_WalkPath, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_TurnPath, nullptr);
		}
	}
}

/**
 * @note Address: 0x802972B0
 * @note Size: 0x3C
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802972EC
 * @note Size: 0x64
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->setEmotionExcitement();
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Flick, nullptr);
	chappy->setAnimSpeed(45.0f);
}

/**
 * @note Address: 0x80297350
 * @note Size: 0x4D4
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mCurAnim->mIsPlaying) {
		if (chappy->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(chappy, CG_GENERALPARMS(chappy).mShakeChance(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                            CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                             CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyNavi(chappy, CG_GENERALPARMS(chappy).mShakeRange(), CG_GENERALPARMS(chappy).mShakeKnockback(),
			                           CG_GENERALPARMS(chappy).mShakeDamage(), chappy->getFaceDir(), nullptr);
			chappy->mFlickTimer = 0.0f;

		} else if (chappy->mCurAnim->mType == KEYEVENT_END) {
			if (chappy->mHealth <= 0.0f) {
				transit(chappy, KUMACHAPPY_Dead, nullptr);
				return;
			}

			Creature* target = chappy->getSearchedTarget();
			if (target) {
				f32 angleSep = chappy->getAngDist(target);
				if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
				                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Attack, nullptr);
					return;
				}

				if (isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
					transit(chappy, KUMACHAPPY_Walk, nullptr);
					return;
				}

				transit(chappy, KUMACHAPPY_Turn, nullptr);
				return;
			}

			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			f32 angleSep       = chappy->getAngDist(targetPos);
			if (isAngleWithin(angleSep, 45.0f)) {
				transit(chappy, KUMACHAPPY_WalkPath, nullptr);
				return;
			}

			transit(chappy, KUMACHAPPY_TurnPath, nullptr);
		}
	}
}

/**
 * @note Address: 0x80297824
 * @note Size: 0x3C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80297860
 * @note Size: 0x60
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mTimer     = 0.0f;
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->setEmotionExcitement();
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Turn, nullptr);
}

/**
 * @note Address: 0x802978C0
 * @note Size: 0x670
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->turnToTarget(target, CG_GENERALPARMS(chappy).mTurnSpeed(), CG_GENERALPARMS(chappy).mMaxTurnAngle());
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (chappy->isTargetOutOfRange(target, angleSep, CG_GENERALPARMS(chappy).mPrivateRadius(),
			                                      CG_GENERALPARMS(chappy).mSightRadius(), CG_GENERALPARMS(chappy).mFov(),
			                                      chappy->getViewAngle())) {
				chappy->mNextState = KUMACHAPPY_Lost;
				chappy->finishMotion();
			} else if (isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Walk;
				chappy->finishMotion();
			}
		} else {
			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			if (chappy->turnToTargetPos(targetPos, CG_GENERALPARMS(chappy).mTurnSpeed(), CG_GENERALPARMS(chappy).mMaxTurnAngle(), 45.0f)) {
				chappy->mNextState = KUMACHAPPY_WalkPath;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_TurnPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80297F30
 * @note Size: 0x3C
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80297F6C
 * @note Size: 0x44
 */
void StateTurnPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy             = OBJ(enemy);
	chappy->mNextState      = KUMACHAPPY_NULL;
	chappy->mTargetVelocity = Vector3f(0.0f);
	chappy->startMotion(KUMACHAPPYANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80297FB0
 * @note Size: 0x4E0
 */
void StateTurnPath::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	chappy->updateHomePosition();
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->turnToTarget(target, CG_GENERALPARMS(chappy).mTurnSpeed(), CG_GENERALPARMS(chappy).mMaxTurnAngle());
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Walk;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_Turn;
				chappy->finishMotion();
			}
		} else {
			Vector3f targetPos = chappy->mTargetPos;
			if (chappy->turnToTargetPos(targetPos, CG_GENERALPARMS(chappy).mTurnSpeed(), CG_GENERALPARMS(chappy).mMaxTurnAngle(), 45.0f)) {
				chappy->mNextState = KUMACHAPPY_WalkPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80298490
 * @note Size: 0x28
 */
void StateTurnPath::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802984B8
 * @note Size: 0x50
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mTimer     = 0.0f;
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->setEmotionExcitement();
	chappy->startMotion(KUMACHAPPYANIM_Move, nullptr);
}

/**
 * @note Address: 0x80298508
 * @note Size: 0x70C
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* chappy      = OBJ(enemy);
	f32 turnSpeed    = CG_GENERALPARMS(chappy).mTurnSpeed();    // f30
	f32 maxTurnAngle = CG_GENERALPARMS(chappy).mMaxTurnAngle(); // f29
	if (chappy->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->turnToTarget(target, turnSpeed, maxTurnAngle);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (chappy->isTargetOutOfRange(target, angleSep, CG_GENERALPARMS(chappy).mPrivateRadius(),
			                                      CG_GENERALPARMS(chappy).mSightRadius(), CG_GENERALPARMS(chappy).mFov(),
			                                      chappy->getViewAngle())) {
				chappy->mNextState = KUMACHAPPY_Lost;
				chappy->finishMotion();
			} else if (!isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Turn;
				chappy->finishMotion();
			}
		} else {
			chappy->setNearestWayPoint();
			Vector3f targetPos = chappy->mTargetPos;
			if (chappy->turnToTargetPos(targetPos, turnSpeed, maxTurnAngle, 45.0f)) {
				chappy->mNextState = KUMACHAPPY_WalkPath;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_TurnPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->isFinishMotion()) {
		chappy->mTargetVelocity = Vector3f(0.0f);
	} else {
		chappy->setTargetSpeed(CG_GENERALPARMS(chappy).mMoveSpeed());
	}

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80298C14
 * @note Size: 0x3C
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80298C50
 * @note Size: 0x34
 */
void StateWalkPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* chappy        = OBJ(enemy);
	chappy->mNextState = KUMACHAPPY_NULL;
	chappy->startMotion(KUMACHAPPYANIM_Move, nullptr);
}

/**
 * @note Address: 0x80298C84
 * @note Size: 0x594
 */
void StateWalkPath::exec(EnemyBase* enemy)
{
	Obj* chappy = OBJ(enemy);
	chappy->updateHomePosition();
	f32 turnSpeed    = CG_GENERALPARMS(chappy).mTurnSpeed();    // f30
	f32 maxTurnAngle = CG_GENERALPARMS(chappy).mMaxTurnAngle(); // f29
	if (chappy->isFinishMotion()) {
		turnSpeed    = 0.01f;
		maxTurnAngle = 1.0f;
	}
	if (chappy->mHealth <= 0.0f) {
		chappy->mNextState = KUMACHAPPY_Dead;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else if (EnemyFunc::isStartFlick(chappy, false)) {
		chappy->mNextState = KUMACHAPPY_Flick;
		chappy->finishMotion();
		chappy->setAnimSpeed(60.0f);
	} else {
		Creature* target = chappy->getSearchedTarget();
		if (target) {
			f32 angleSep = chappy->turnToTarget(target, turnSpeed, maxTurnAngle);
			if (chappy->isTargetAttackable(target, angleSep, CG_GENERALPARMS(chappy).mMaxAttackRange(),
			                               CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Attack;
				chappy->finishMotion();
				chappy->setAnimSpeed(60.0f);

			} else if (isAngleWithin(angleSep, CG_GENERALPARMS(chappy).mMaxAttackAngle())) {
				chappy->mNextState = KUMACHAPPY_Walk;
				chappy->finishMotion();
			} else {
				chappy->mNextState = KUMACHAPPY_Turn;
				chappy->finishMotion();
			}
		} else {
			Vector3f targetPos = chappy->mTargetPos;
			if (!chappy->turnToTargetPos(targetPos, turnSpeed, maxTurnAngle, 45.0f)) {
				chappy->mNextState = KUMACHAPPY_TurnPath;
				chappy->finishMotion();
			}
		}
	}

	if (chappy->isFinishMotion()) {
		chappy->mTargetVelocity = Vector3f(0.0f);
	} else {
		chappy->setTargetSpeed(CG_GENERALPARMS(chappy).mMoveSpeed());
	}

	chappy->mTimer += 0.5f * sys->mDeltaTime;

	if (chappy->mCurAnim->mIsPlaying && chappy->mCurAnim->mType == KEYEVENT_END) {
		transit(chappy, chappy->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80299218
 * @note Size: 0x28
 */
void StateWalkPath::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
}
} // namespace KumaChappy
} // namespace Game
