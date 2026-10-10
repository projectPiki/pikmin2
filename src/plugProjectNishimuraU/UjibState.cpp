#include "Game/Entities/Ujib.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Ujib {

/**
 * @note Address: 0x8025B1A8
 * @note Size: 0x478
 */
void FSM::init(EnemyBase* enemy)
{
	create(UJIB_StateCount);

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
	registerState(new StateAttack1);
	registerState(new StateAttack2);
	registerState(new StateEat);
}

/**
 * @note Address: 0x8025B620
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIBANIM_Dead, nullptr);
}

/**
 * @note Address: 0x8025B67C
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8025B6C0
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025B6C4
 * @note Size: 0x64
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIBANIM_PressDead, nullptr);
}

/**
 * @note Address: 0x8025B728
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8025B76C
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025B770
 * @note Size: 0xBC
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->resetAppearCheck();
	uji->setAtari(false);
	uji->enableEvent(0, EB_Invulnerable);
	uji->mIsUnderground = true;
	uji->enableEvent(0, EB_BitterImmune);
	uji->hardConstraintOn();
	uji->disableEvent(0, EB_LifegaugeVisible);
	uji->disableEvent(0, EB_Animating);
	uji->enableEvent(0, EB_ModelHidden);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIBANIM_Appear, nullptr);
	uji->stopMotion();
}

/**
 * @note Address: 0x8025B82C
 * @note Size: 0xB0
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setBridgeSearch();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue,
	                                                     CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr, nullptr, nullptr);
	if ((target || uji->isBreakBridge()) && uji->isAppearCheck()) {
		uji->mTargetCreature = target;
		transit(uji, UJIB_Appear, nullptr);
	}
}

/**
 * @note Address: 0x8025B8DC
 * @note Size: 0x84
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setAtari(true);
	uji->disableEvent(0, EB_Invulnerable);
	uji->mIsUnderground = false;
	uji->disableEvent(0, EB_BitterImmune);
	uji->hardConstraintOff();
	uji->enableEvent(0, EB_Animating);
	uji->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x8025B960
 * @note Size: 0x80
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->lifeIncrement();
	uji->hardConstraintOn();
	uji->enableEvent(0, EB_NoInterrupt);
	uji->enableEvent(0, EB_LifegaugeVisible);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->setEmotionExcitement();
	uji->startMotion(UJIBANIM_Appear, nullptr);
	uji->createAppearEffect();
}

/**
 * @note Address: 0x8025B9E0
 * @note Size: 0x80
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		if (uji->mHealth <= 0.0f) {
			transit(uji, UJIB_Dead, nullptr);
			return;
		}

		transit(uji, UJIB_Move, nullptr);
	}
}

/**
 * @note Address: 0x8025BA60
 * @note Size: 0x3C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x8025BA9C
 * @note Size: 0x6C
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->hardConstraintOn();
	uji->enableEvent(0, EB_BitterImmune);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->setEmotionCaution();
	uji->startMotion(UJIBANIM_Dive, nullptr);
	uji->createDisAppearEffect();
}

/**
 * @note Address: 0x8025BB08
 * @note Size: 0x50
 */
void StateDive::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, UJIB_Stay, nullptr);
	}
}

/**
 * @note Address: 0x8025BB58
 * @note Size: 0x3C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_BitterImmune);
}

/**
 * @note Address: 0x8025BB94
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025BBC8
 * @note Size: 0x4C8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* uji         = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle(), CG_GENERALPARMS(uji).mSightRadius(),
	                                                     nullptr, nullptr, nullptr);

	if (target) {
		uji->mTargetCreature = target;
		f32 angleDist        = uji->turnToTarget(target, CG_GENERALPARMS(uji).mTurnSpeed(), CG_GENERALPARMS(uji).mMaxTurnAngle());
		uji->setTargetSpeed(CG_GENERALPARMS(uji).mMoveSpeed());

		if (uji->isTargetAttackable(target, angleDist, CG_GENERALPARMS(uji).mMaxAttackRange(), CG_GENERALPARMS(uji).mMaxAttackAngle())) {
			uji->mNextState = UJIB_Attack2;
			uji->finishMotion();
		} else {

			if (uji->distanceFromHome() > CG_GENERALPARMS(uji).mTerritoryRadius()) {
				uji->mNextState = UJIB_GoHome;
				uji->finishMotion();
			} else if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mMaxAttackAngle(),
			                                             CG_GENERALPARMS(uji).mMaxAttackRange(), nullptr, nullptr, nullptr)) {
				uji->mNextState = UJIB_Attack2;
				uji->finishMotion();
			}
		}
	} else {
		if (uji->isBreakBridge()) {
			uji->mNextState = (StateID)uji->checkBreakOrMove();
			uji->finishMotion();
		} else {
			uji->mNextState = UJIB_GoHome;
			uji->finishMotion();
		}
	}

	uji->setInWaterDamage();

	if (uji->isDead()) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C090
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025C094
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C0C8
 * @note Size: 0x130
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
		uji->finishMotion();
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeSide()) {
			uji->mNextState = UJIB_MoveCentre;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIB_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C1F8
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025C1FC
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C230
 * @note Size: 0x130
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
		uji->finishMotion();
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeCentre()) {
			uji->mNextState = UJIB_MoveTop;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIB_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C360
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025C364
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C398
 * @note Size: 0x130
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
		uji->finishMotion();
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeTop()) {
			uji->mNextState = UJIB_Attack1;
			uji->finishMotion();
		}
	} else {
		uji->mNextState = UJIB_GoHome;
		uji->finishMotion();
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C4C8
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025C4CC
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji        = OBJ(enemy);
	uji->mNextState = UJIB_NULL;
	uji->startMotion(UJIBANIM_Move, nullptr);
}

/**
 * @note Address: 0x8025C500
 * @note Size: 0x1DC
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* uji         = OBJ(enemy);
	Vector3f homePos = Vector3f(uji->mHomePosition);
	EnemyFunc::walkToTarget(uji, homePos, CG_GENERALPARMS(uji).mMoveSpeed.mValue, CG_GENERALPARMS(uji).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(uji).mMaxTurnAngle.mValue);

	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mMaxAttackRange.mValue, CG_GENERALPARMS(uji).mMaxAttackAngle.mValue,
	                                      nullptr, nullptr, nullptr)) {
		uji->mNextState = UJIB_Attack2;
		uji->finishMotion();
	} else {
		Vector3f homePos2 = uji->mHomePosition;
		Vector3f position = uji->getPosition();

		if (position.distance(homePos2) < CG_GENERALPARMS(uji).mHomeRadius.mValue) {
			uji->mNextState = UJIB_Dive;
			uji->finishMotion();
		}
	}

	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying && uji->mCurAnim->mType == KEYEVENT_END) {
		transit(uji, uji->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x8025C6DC
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025C6E0
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji             = OBJ(enemy);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIBANIM_Attack1, nullptr);
	uji->mNextState = UJIB_NULL;
	uji->createBridgeEffect();
}

/**
 * @note Address: 0x8025C738
 * @note Size: 0x140
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	if (EnemyFunc::getNearestPikminOrNavi(uji, CG_GENERALPARMS(uji).mViewAngle.mValue, CG_GENERALPARMS(uji).mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		uji->mNextState = UJIB_Move;
	} else if (uji->isBreakBridge()) {
		if (uji->moveBridgeTop()) {
			uji->mNextState = UJIB_Attack1;
		} else {
			uji->mNextState = UJIB_MoveTop;
		}
	} else {
		uji->mNextState = UJIB_GoHome;
	}

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying) {
		if (uji->mCurAnim->mType == KEYEVENT_2) {
			if (uji->isBreakBridge()) {
				uji->breakTargetBridge();
			}

		} else if (uji->mCurAnim->mType == KEYEVENT_END) {
			transit(uji, uji->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025C878
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025C87C
 * @note Size: 0x48
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* uji = OBJ(enemy);
	uji->disableEvent(0, EB_NoInterrupt);
	uji->mTargetVelocity = Vector3f(0.0f);
	uji->startMotion(UJIBANIM_Attack2, nullptr);
}

/**
 * @note Address: 0x8025C8C4
 * @note Size: 0x218
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setInWaterDamage();

	if (uji->mCurAnim->mIsPlaying) {
		if (uji->mCurAnim->mType == KEYEVENT_2) {
			uji->enableEvent(0, EB_NoInterrupt);

		} else if (uji->mCurAnim->mType == KEYEVENT_3) {
			uji->disableEvent(0, EB_NoInterrupt);

		} else if (uji->mCurAnim->mType == KEYEVENT_4) {
			EnemyFunc::attackNavi(uji, CG_GENERALPARMS(uji).mAttackRadius.mValue, CG_GENERALPARMS(uji).mAttackHitAngle.mValue,
			                      CG_GENERALPARMS(uji).mAttackDamage.mValue, nullptr, nullptr);
			EnemyFunc::eatPikmin(uji, nullptr);

		} else if (uji->mCurAnim->mType == KEYEVENT_END) {
			if (uji->mHealth <= 0.0f) {
				transit(uji, UJIB_Dead, nullptr);
				return;
			}

			if (uji->mStuckPikminCount) {
				transit(uji, UJIB_Eat, nullptr);
				return;
			}

			Vector3f homePos2 = uji->mHomePosition;
			Vector3f position = uji->getPosition();

			if (position.distance(homePos2) > CG_GENERALPARMS(uji).mTerritoryRadius.mValue) {
				transit(uji, UJIB_GoHome, nullptr);
				return;
			}

			transit(uji, UJIB_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025CADC
 * @note Size: 0x10
 */
void StateAttack2::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
}

/**
 * @note Address: 0x8025CAEC
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(UJIBANIM_Eat, nullptr);
}

/**
 * @note Address: 0x8025CB28
 * @note Size: 0x1A8
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* uji = OBJ(enemy);
	uji->setInWaterDamage();

	if (uji->mHealth <= 0.0f) {
		transit(uji, UJIB_Dead, nullptr);
		return;
	}

	if (uji->mCurAnim->mIsPlaying) {
		if (uji->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::swallowPikmin(uji, CG_PROPERPARMS(uji).mPoisonDamage.mValue, nullptr);
			uji->createEatEffect();

		} else if (uji->mCurAnim->mType == KEYEVENT_END) {

			Vector3f homePos2 = uji->mHomePosition;
			Vector3f position = uji->getPosition();

			if (position.distance(homePos2) > CG_GENERALPARMS(uji).mTerritoryRadius.mValue) {
				transit(uji, UJIB_GoHome, nullptr);
				return;
			}

			transit(uji, UJIB_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025CCD0
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy)
{
}

} // namespace Ujib
} // namespace Game
