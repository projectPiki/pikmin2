#include "Game/Entities/KumaKochappy.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace KumaKochappy {

/**
 * @note Address: 0x802E4EE8
 * @note Size: 0x27C
 */
void FSM::init(EnemyBase* enemy)
{
	create(KUMAKOCHAPPY_StateCount);
	registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateWait);
	registerState(new StateAttack);
	registerState(new StateFlick);
	registerState(new StateWalk);
	registerState(new StateWalkPath);
}

/**
 * @note Address: 0x802E5164
 * @note Size: 0x50
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(KUMAKOCHAPPYANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802E51B4
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802E51F8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802E51FC
 * @note Size: 0x58
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(KUMAKOCHAPPYANIM_Press, nullptr);
}

/**
 * @note Address: 0x802E5254
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802E5298
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802E529C
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma          = OBJ(enemy);
	kuma->mUnusedValue = 0.0f;
	kuma->mNextState   = KUMAKOCHAPPY_NULL;
	kuma->enableEvent(0, EB_Constrained);
	kuma->mTargetVelocity = Vector3f(0.0f);
	kuma->startMotion(KUMAKOCHAPPYANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802E52F0
 * @note Size: 0x3A8
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kuma, false)) {
		transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
		return;
	}

	Creature* target = kuma->getSearchedTarget();
	if (target) {
		if (kuma->isTargetAttackable(target, CG_GENERALPARMS(kuma).mMaxAttackRange(), CG_GENERALPARMS(kuma).mMaxAttackAngle())) {
			kuma->mNextState = KUMAKOCHAPPY_Attack;
			kuma->finishMotion();
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Walk;
			kuma->finishMotion();
		}
	} else if (kuma->setTargetParentPosition()) {
		kuma->mNextState = KUMAKOCHAPPY_WalkPath;
		kuma->finishMotion();
	}

	if (kuma->isFinishMotion()) {
		kuma->setAnimSpeed(60.0f);
	}

	if (kuma->mCurAnim->mIsPlaying) {
		if (kuma->mCurAnim->mType == KEYEVENT_2) {
			kuma->getJAIObject()->startSound(PSSE_EN_KOCHAPPY_NOTICE, 0);

		} else if (kuma->mCurAnim->mType == KEYEVENT_END) {
			transit(kuma, kuma->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E5698
 * @note Size: 0x3C
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802E56D4
 * @note Size: 0x58
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma             = OBJ(enemy);
	kuma->mNextState      = KUMAKOCHAPPY_NULL;
	kuma->mTargetVelocity = Vector3f(0.0f);
	kuma->setEmotionExcitement();
	kuma->startMotion(KUMAKOCHAPPYANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802E572C
 * @note Size: 0x4CC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (kuma->mCurAnim->mIsPlaying) {
		if (kuma->mCurAnim->mType == KEYEVENT_2) {
			int naviEat
			    = EnemyFunc::attackNavi(kuma, CG_GENERALPARMS(kuma).mAttackRadius.mValue, CG_GENERALPARMS(kuma).mAttackHitAngle.mValue,
			                            CG_GENERALPARMS(kuma).mAttackDamage.mValue, nullptr, nullptr);
			int totalEat = naviEat + EnemyFunc::eatPikmin(kuma, nullptr);

			EnemyFunc::flickStickPikmin(kuma, CG_GENERALPARMS(kuma).mShakeChance.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);

			if (!totalEat) {
				kuma->startMotion(KUMAKOCHAPPYANIM_Eat, nullptr);
			}

		} else if (kuma->mCurAnim->mType == KEYEVENT_3) {
			EnemyFunc::swallowPikmin(kuma, CG_PROPERPARMS(kuma).mPoisonDamage.mValue, nullptr);

		} else if (kuma->mCurAnim->mType == KEYEVENT_END) {
			if (kuma->mHealth <= 0.0f) {
				transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(kuma, false)) {
				transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = kuma->getSearchedTarget();
			if (target) {

				if (kuma->isTargetAttackable(target, CG_GENERALPARMS(kuma).mMaxAttackRange(), CG_GENERALPARMS(kuma).mMaxAttackAngle())) {
					transit(kuma, KUMAKOCHAPPY_Attack, nullptr);
					return;
				} else {
					transit(kuma, KUMAKOCHAPPY_Walk, nullptr);
					return;
				}

			} else {
				Vector3f* parentPos = kuma->setTargetParentPosition();
				if (parentPos) {
					Vector3f pos = kuma->getPosition();
					f32 dist     = sqrDistanceXZ(pos, *parentPos);
					if (dist < SQUARE(CG_GENERALPARMS(kuma).mHomeRadius())) {
						transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
						return;
					} else {
						transit(kuma, KUMAKOCHAPPY_WalkPath, nullptr);
						return;
					}
				}
			}

			transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E5BF8
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802E5C1C
 * @note Size: 0x44
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma             = OBJ(enemy);
	kuma->mNextState      = KUMAKOCHAPPY_NULL;
	kuma->mTargetVelocity = Vector3f(0.0f);
	kuma->startMotion(KUMAKOCHAPPYANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802E5C60
 * @note Size: 0x4D0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (kuma->mCurAnim->mIsPlaying) {
		if (kuma->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(kuma, CG_GENERALPARMS(kuma).mShakeChance.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(kuma, CG_GENERALPARMS(kuma).mShakeRange.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyNavi(kuma, CG_GENERALPARMS(kuma).mShakeRange.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);
			kuma->mFlickTimer = 0.0f;

		} else if (kuma->mCurAnim->mType == KEYEVENT_END) {
			if (kuma->mHealth <= 0.0f) {
				transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(kuma, false)) {
				transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = kuma->getSearchedTarget();
			if (target) {
				if (kuma->isTargetAttackable(target, CG_GENERALPARMS(kuma).mMaxAttackRange(), CG_GENERALPARMS(kuma).mMaxAttackAngle())) {
					transit(kuma, KUMAKOCHAPPY_Attack, nullptr);
					return;
				} else {
					transit(kuma, KUMAKOCHAPPY_Walk, nullptr);
					return;
				}

			} else {
				Vector3f* parentPos = kuma->setTargetParentPosition();
				if (parentPos) {
					Vector3f pos = kuma->getPosition();
					f32 dist     = sqrDistanceXZ(pos, *parentPos);
					if (dist < SQUARE(CG_GENERALPARMS(kuma).mHomeRadius())) {
						transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
						return;
					} else {
						transit(kuma, KUMAKOCHAPPY_WalkPath, nullptr);
						return;
					}
				}
			}

			transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802E6130
 * @note Size: 0x4
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802E6134
 * @note Size: 0x34
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma        = OBJ(enemy);
	kuma->mNextState = KUMAKOCHAPPY_NULL;
	kuma->startMotion(KUMAKOCHAPPYANIM_Move, nullptr);
}

/**
 * @note Address: 0x802E6168
 * @note Size: 0x538
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* kuma  = OBJ(enemy);
	bool check = true;
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kuma, false)) {
		transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
		return;
	}

	Creature* target = kuma->getSearchedTarget();
	if (target) {
		// more nonsense going on in here than this
		f32 dist = kuma->turnToTarget(target, CG_GENERALPARMS(kuma).mTurnSpeed(), CG_GENERALPARMS(kuma).mMaxTurnAngle());

		// this isn't the comparison, probably a bool spat out from an inline
		if (kuma->isTargetAttackable(target, dist, CG_GENERALPARMS(kuma).mMaxAttackRange(), CG_GENERALPARMS(kuma).mMaxAttackAngle())) {
			kuma->mNextState = KUMAKOCHAPPY_Attack;
			kuma->finishMotion();
			kuma->setAnimSpeed(60.0f);
		} else if (!isAngleWithin(dist, CG_GENERALPARMS(kuma).mMaxAttackAngle())) {
			check = false;
		}

	} else {
		Vector3f* parentPos = kuma->setTargetParentPosition();
		if (parentPos) {
			Vector3f pos = kuma->getPosition();
			f32 dist     = sqrDistanceXZ(pos, *parentPos);
			if (dist < SQUARE(CG_GENERALPARMS(kuma).mHomeRadius())) {
				kuma->mNextState = KUMAKOCHAPPY_Wait;
				kuma->finishMotion();
			} else {
				kuma->mNextState = KUMAKOCHAPPY_WalkPath;
				kuma->finishMotion();
			}
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Wait;
			kuma->finishMotion();
		}
	}

	if (kuma->isFinishMotion()) {
		kuma->mTargetVelocity = Vector3f(0.0f);
	} else if (check) {
		kuma->setTargetSpeed(CG_GENERALPARMS(kuma).mMoveSpeed());
	} else {
		kuma->setTargetSpeed(0.5f * CG_GENERALPARMS(kuma).mMoveSpeed());
	}

	if (kuma->mCurAnim->mIsPlaying && kuma->mCurAnim->mType == KEYEVENT_END) {
		transit(kuma, kuma->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802E66A0
 * @note Size: 0x28
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802E66C8
 * @note Size: 0x4C
 */
void StateWalkPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma        = OBJ(enemy);
	kuma->mNextState = KUMAKOCHAPPY_NULL;
	kuma->startMotion(KUMAKOCHAPPYANIM_Move, nullptr);
	kuma->setAnimSpeed(45.0f);
}

/**
 * @note Address: 0x802E6714
 * @note Size: 0x534
 */
void StateWalkPath::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kuma, true)) {
		transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
		return;
	}

	Creature* target = kuma->getSearchedTarget();
	if (target) {
		if (kuma->isTargetAttackable(target, CG_GENERALPARMS(kuma).mMaxAttackRange(), CG_GENERALPARMS(kuma).mMaxAttackAngle())) {
			kuma->mNextState = KUMAKOCHAPPY_Attack;
			kuma->finishMotion();
			kuma->setAnimSpeed(60.0f);
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Walk;
			kuma->finishMotion();
		}

	} else {
		Vector3f* parentPos = kuma->setTargetParentPosition();
		if (parentPos) {
			Vector3f pos = kuma->getPosition();
			f32 dist     = sqrDistanceXZ(pos, *parentPos);
			if (dist < SQUARE(CG_GENERALPARMS(kuma).mHomeRadius())) {
				kuma->mNextState = KUMAKOCHAPPY_Wait;
				kuma->finishMotion();
			} else {
				kuma->turnToTarget(*parentPos, CG_GENERALPARMS(kuma).mTurnSpeed(), CG_GENERALPARMS(kuma).mMaxTurnAngle());
			}
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Wait;
			kuma->finishMotion();
		}
	}

	if (kuma->isFinishMotion()) {
		kuma->mTargetVelocity = Vector3f(0.0f);
	} else {
		kuma->setTargetSpeed(CG_GENERALPARMS(kuma).mSearchHeight()); // ????
	}

	if (kuma->mCurAnim->mIsPlaying && kuma->mCurAnim->mType == KEYEVENT_END) {
		transit(kuma, kuma->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802E6C48
 * @note Size: 0x28
 */
void StateWalkPath::cleanup(EnemyBase* enemy)
{
	enemy->setAnimSpeed(30.0f);
}
} // namespace KumaKochappy
} // namespace Game
