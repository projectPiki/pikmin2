#include "Game/Entities/Tobi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Tobi {

/**
 * @note Address: 0x8026759C
 * @note Size: 0x4CC
 */
void FSM::init(EnemyBase* enemy)
{
	create(TOBI_StateCount);

	registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDive);
	registerState(new StateMove);
	registerState(new StateMoveSide);
	registerState(new StateMoveCentre);
	registerState(new StateMoveTop);
	registerState(new StateGoHome);
	registerState(new StateFly);
	registerState(new StateAttack1);
	registerState(new StateAttack2);
	registerState(new StateEat);
}

/**
 * @note Address: 0x80267A68
 * @note Size: 0x70
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TOBIANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80267AD8
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80267B1C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80267B20
 * @note Size: 0x70
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TOBIANIM_PressDead, nullptr);
}

/**
 * @note Address: 0x80267B90
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80267BD4
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80267BD8
 * @note Size: 0xBC
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->resetAppearCheck();
	tobi->setAtari(false);
	tobi->enableEvent(0, EB_Invulnerable);
	tobi->mIsUnderground = true;
	tobi->enableEvent(0, EB_BitterImmune);
	tobi->hardConstraintOn();
	tobi->disableEvent(0, EB_LifegaugeVisible);
	tobi->disableEvent(0, EB_Animating);
	tobi->enableEvent(0, EB_ModelHidden);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Appear, nullptr);
	tobi->stopMotion();
}

/**
 * @note Address: 0x80267C94
 * @note Size: 0xB0
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setBridgeSearch();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue,
	                                                     CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr, nullptr, nullptr);
	if ((target || tobi->isBreakBridge()) && tobi->isAppearCheck()) {
		tobi->mTargetCreature = target;
		transit(tobi, TOBI_Appear, nullptr);
	}
}

/**
 * @note Address: 0x80267D44
 * @note Size: 0x84
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setAtari(true);
	tobi->disableEvent(0, EB_Invulnerable);
	tobi->mIsUnderground = false;
	tobi->disableEvent(0, EB_BitterImmune);
	tobi->hardConstraintOff();
	tobi->enableEvent(0, EB_Animating);
	tobi->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x80267DC8
 * @note Size: 0x80
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->lifeIncrement();
	tobi->hardConstraintOn();
	tobi->enableEvent(0, EB_NoInterrupt);
	tobi->enableEvent(0, EB_LifegaugeVisible);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->setEmotionExcitement();
	tobi->startMotion(TOBIANIM_Appear, nullptr);
	tobi->createAppearEffect();
}

/**
 * @note Address: 0x80267E48
 * @note Size: 0x80
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		if (tobi->mHealth <= 0.0f) {
			transit(tobi, TOBI_Dead, nullptr);
			return;
		}

		transit(tobi, TOBI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80267EC8
 * @note Size: 0x3C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x80267F04
 * @note Size: 0x6C
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->hardConstraintOn();
	tobi->enableEvent(0, EB_BitterImmune);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->setEmotionCaution();
	tobi->startMotion(TOBIANIM_Dive, nullptr);
	tobi->createDisAppearEffect();
}

/**
 * @note Address: 0x80267F70
 * @note Size: 0x50
 */
void StateDive::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, TOBI_Stay, nullptr);
	}
}

/**
 * @note Address: 0x80267FC0
 * @note Size: 0x3C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x80267FFC
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80268030
 * @note Size: 0x4E8
 */
void StateMove::exec(EnemyBase* enemy)
{
	// NON-MATCHING //
	Obj* tobi        = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle(), CG_GENERALPARMS(tobi).mSightRadius(),
	                                                     nullptr, nullptr, nullptr);
	if (target) {
		tobi->mTargetCreature = target;
		f32 angleDist         = tobi->changeFaceDir2(target);
		f32 x, y, z;
		f32 speed = CG_GENERALPARMS(tobi).mMoveSpeed();
		x         = (f32)sin(tobi->getFaceDir());
		y         = tobi->getTargetVelocity().y;
		z         = (f32)cos(tobi->getFaceDir());

		tobi->mTargetVelocity = Vector3f(speed * x, y, speed * z);

		if (tobi->isTargetAttackable(target, angleDist, CG_GENERALPARMS(tobi).mMaxAttackRange(), CG_GENERALPARMS(tobi).mMaxAttackAngle())) {
			tobi->mNextState = TOBI_Attack2;
			tobi->finishMotion();
		} else {
			Vector3f homePos = tobi->mHomePosition;
			Vector3f tobiPos = tobi->getPosition();

			f32 dist = tobiPos.distance(homePos);

			if (dist > CG_GENERALPARMS(tobi).mTerritoryRadius()) {
				tobi->mNextState = TOBI_GoHome;
				tobi->finishMotion();
			} else {
				Creature* newTarget = EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mMaxAttackAngle(),
				                                                        CG_GENERALPARMS(tobi).mMaxAttackRange(), nullptr, nullptr, nullptr);
				if (newTarget) {
					tobi->mNextState = TOBI_Attack2;
					tobi->finishMotion();
				}
			}
		}
	} else if (tobi->isBreakBridge()) {
		tobi->mNextState = (Tobi::StateID)tobi->checkBreakOrMove();
		tobi->finishMotion();
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80268518
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8026851C
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80268550
 * @note Size: 0x150
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
		tobi->finishMotion();
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeSide()) {
			tobi->mNextState = TOBI_MoveCentre;
			tobi->finishMotion();
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802686A0
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802686A4
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x802686D8
 * @note Size: 0x150
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
		tobi->finishMotion();
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeCentre()) {
			tobi->mNextState = TOBI_MoveTop;
			tobi->finishMotion();
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80268828
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8026882C
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80268860
 * @note Size: 0x150
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
		tobi->finishMotion();
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeTop()) {
			tobi->mNextState = TOBI_Attack1;
			tobi->finishMotion();
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
		tobi->finishMotion();
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802689B0
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802689B4
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi        = OBJ(enemy);
	tobi->mNextState = TOBI_NULL;
	tobi->startMotion(TOBIANIM_Move, nullptr);
}

/**
 * @note Address: 0x802689E8
 * @note Size: 0x1FC
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* tobi        = OBJ(enemy);
	Vector3f homePos = Vector3f(tobi->mHomePosition);
	EnemyFunc::walkToTarget(tobi, homePos, CG_GENERALPARMS(tobi).mMoveSpeed.mValue, CG_GENERALPARMS(tobi).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(tobi).mMaxTurnAngle.mValue);

	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mMaxAttackRange.mValue, CG_GENERALPARMS(tobi).mMaxAttackAngle.mValue,
	                                      nullptr, nullptr, nullptr)) {
		tobi->mNextState = TOBI_Attack2;
		tobi->finishMotion();
	} else {
		Vector3f homePos2 = tobi->mHomePosition;
		Vector3f position = tobi->getPosition();
		Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

		if (_length2(diff) < CG_GENERALPARMS(tobi).mHomeRadius.mValue) {
			tobi->mNextState = TOBI_Dive;
			tobi->finishMotion();
		}
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
		tobi->finishMotion();
	}

	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, tobi->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80268BE4
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80268BE8
 * @note Size: 0x94
 */
void StateFly::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi             = OBJ(enemy);
	tobi->mTargetPosition = Vector3f(tobi->getPosition());
	tobi->randomFlyingTarget();
	tobi->enableEvent(0, EB_Invulnerable);
	tobi->enableEvent(0, EB_Untargetable);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Fly, nullptr);
}

/**
 * @note Address: 0x80268C7C
 * @note Size: 0x130
 */
void StateFly::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->randomFlyingTarget();
	Vector3f targetPos = Vector3f(tobi->mTargetPosition);
	EnemyFunc::walkToTarget(tobi, targetPos, CG_GENERALPARMS(tobi).mMoveSpeed.mValue, CG_GENERALPARMS(tobi).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(tobi).mMaxTurnAngle.mValue);

	if (tobi->mHealth / CG_GENERALPARMS(tobi).mHealth.mValue > CG_PROPERPARMS(tobi).mLandHealthRatio.mValue) {
		tobi->disableEvent(0, EB_Untargetable);
		tobi->finishMotion();

		Vector3f vel = tobi->getVelocity();
		vel.y *= 0.5f;
		tobi->setVelocity(vel);
	}

	if (tobi->mCurAnim->mIsPlaying && tobi->mCurAnim->mType == KEYEVENT_END) {
		transit(tobi, TOBI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80268DAC
 * @note Size: 0x1C
 */
void StateFly::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_Untargetable);
	enemy->disableEvent(0, EB_Invulnerable);
}

/**
 * @note Address: 0x80268DC8
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi             = OBJ(enemy);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Attack1, nullptr);
	tobi->mNextState = TOBI_NULL;
	tobi->createBridgeEffect();
}

/**
 * @note Address: 0x80268E20
 * @note Size: 0x158
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	if (EnemyFunc::getNearestPikminOrNavi(tobi, CG_GENERALPARMS(tobi).mViewAngle.mValue, CG_GENERALPARMS(tobi).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		tobi->mNextState = TOBI_Move;
	} else if (tobi->isBreakBridge()) {
		if (tobi->moveBridgeTop()) {
			tobi->mNextState = TOBI_Attack1;
		} else {
			tobi->mNextState = TOBI_MoveTop;
		}
	} else {
		tobi->mNextState = TOBI_GoHome;
	}

	if (tobi->isFlyingLife()) {
		tobi->mNextState = TOBI_Fly;
	}

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying) {
		if (tobi->mCurAnim->mType == KEYEVENT_2) {
			if (tobi->isBreakBridge()) {
				tobi->breakTargetBridge();
			}

		} else if (tobi->mCurAnim->mType == KEYEVENT_END) {
			transit(tobi, tobi->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80268F78
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80268F7C
 * @note Size: 0x48
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tobi = OBJ(enemy);
	tobi->disableEvent(0, EB_NoInterrupt);
	tobi->mTargetVelocity = Vector3f(0.0f);
	tobi->startMotion(TOBIANIM_Attack2, nullptr);
}

/**
 * @note Address: 0x80268FC4
 * @note Size: 0x218
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setInWaterDamage();

	if (tobi->mCurAnim->mIsPlaying) {
		if (tobi->mCurAnim->mType == KEYEVENT_2) {
			tobi->enableEvent(0, EB_NoInterrupt);

		} else if (tobi->mCurAnim->mType == KEYEVENT_3) {
			tobi->disableEvent(0, EB_NoInterrupt);

		} else if (tobi->mCurAnim->mType == KEYEVENT_4) {
			EnemyFunc::attackNavi(tobi, CG_GENERALPARMS(tobi).mAttackRadius.mValue, CG_GENERALPARMS(tobi).mAttackHitAngle.mValue,
			                      CG_GENERALPARMS(tobi).mAttackDamage.mValue, nullptr, nullptr);
			EnemyFunc::eatPikmin(tobi, nullptr);

		} else if (tobi->mCurAnim->mType == KEYEVENT_END) {
			if (tobi->mHealth <= 0.0f) {
				transit(tobi, TOBI_Dead, nullptr);
				return;
			}

			if (tobi->mStuckPikminCount) {
				transit(tobi, TOBI_Eat, nullptr);
				return;
			}

			Vector3f homePos2 = tobi->mHomePosition;
			Vector3f position = tobi->getPosition();
			Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

			if (_length2(diff) > CG_GENERALPARMS(tobi).mTerritoryRadius.mValue) {
				transit(tobi, TOBI_GoHome, nullptr);
				return;
			}

			transit(tobi, TOBI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802691DC
 * @note Size: 0x10
 */
void StateAttack2::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x802691EC
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(TOBIANIM_Eat, nullptr);
}

/**
 * @note Address: 0x80269228
 * @note Size: 0x1A8
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* tobi = OBJ(enemy);
	tobi->setInWaterDamage();

	if (tobi->mHealth <= 0.0f) {
		transit(tobi, TOBI_Dead, nullptr);
		return;
	}

	if (tobi->mCurAnim->mIsPlaying) {
		if (tobi->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::swallowPikmin(tobi, CG_PROPERPARMS(tobi).mPoisonDamage.mValue, nullptr);
			tobi->createEatEffect();

		} else if (tobi->mCurAnim->mType == KEYEVENT_END) {

			Vector3f homePos2 = tobi->mHomePosition;
			Vector3f position = tobi->getPosition();
			Vector3f diff     = Vector3f(position.y - homePos2.y, position.z - homePos2.z, position.x - homePos2.x);

			if (_length2(diff) > CG_GENERALPARMS(tobi).mTerritoryRadius.mValue) {
				transit(tobi, TOBI_GoHome, nullptr);
				return;
			}

			transit(tobi, TOBI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802693D0
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy)
{
}
} // namespace Tobi
} // namespace Game
