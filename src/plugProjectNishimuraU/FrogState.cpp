#include "Game/Entities/Frog.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Frog {

/**
 * @note Address: 0x802563C4
 * @note Size: 0x37C
 */
void FSM::init(EnemyBase* enemy)
{
	create(FROG_StateCount);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateTurn);
	registerState(new StateJump);
	registerState(new StateJumpWait);
	registerState(new StateFall);
	registerState(new StateAttack);
	registerState(new StateFail);
	registerState(new StateTurnToHome);
	registerState(new StateGoHome);
}

/**
 * @note Address: 0x80256740
 * @note Size: 0x68
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_Cullable);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->deathProcedure();
	enemy->startMotion(FROGANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802567A8
 * @note Size: 0x78
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);

	if (frog->mCurAnim->mIsPlaying) {
		if (frog->mCurAnim->mType == KEYEVENT_2) {
			frog->createDownEffect(frog->getDownSmokeScale());
		} else if (frog->mCurAnim->mType == KEYEVENT_END) {
			frog->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80256828
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8025682C
 * @note Size: 0xA0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->mTargetCreature = nullptr;
	if (randWeightFloat(1.0f) < 0.2f) {
		enemy->startMotion(FROGANIM_Wait2, nullptr);
	} else {
		enemy->startMotion(FROGANIM_Wait1, nullptr);
	}
}

/**
 * @note Address: 0x802568CC
 * @note Size: 0x440
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->isDead()) {
		transit(frog, FROG_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		Vector3f pos          = frog->getPosition();
		frog->mTargetPosition = pos;

		frog->attackNaviPosition();
		transit(frog, FROG_Jump, nullptr);
		return;
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		Creature* target = EnemyFunc::getNearestPikminOrNavi(frog, frog->getViewAngle(), CG_GENERALPARMS(frog).mSightRadius(), nullptr,
		                                                     nullptr, nullptr);
		if (target) {
			frog->mTargetCreature = target;
			frog->mAlertTimer     = 0.0f;

			f32 angdist = frog->getAngDist(target);

			if (frog->isTargetAttackable(target, angdist, CG_GENERALPARMS(frog).mMaxAttackRange(),
			                             CG_GENERALPARMS(frog).mMaxAttackAngle())) {
				Vector3f targetPos    = target->getPosition();
				frog->mTargetPosition = targetPos;
				frog->attackNaviPosition();
				transit(frog, FROG_Jump, nullptr);
				return;
			}

			if (isAngleWithin(angdist, 10.0f)) {
				transit(frog, FROG_Wait, nullptr);
				return;
			}

			transit(frog, FROG_Turn, nullptr);
			return;
		}

		transit(frog, FROG_Wait, nullptr);
	}
}

/**
 * @note Address: 0x80256D10
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80256D14
 * @note Size: 0x60
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog             = OBJ(enemy);
	frog->mNextState      = FROG_NULL;
	frog->mTargetCreature = nullptr;
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->setEmotionExcitement();
	frog->startMotion(FROGANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80256D74
 * @note Size: 0x3AC
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	Creature* target
	    = EnemyFunc::getNearestPikminOrNavi(frog, frog->getViewAngle(), CG_GENERALPARMS(frog).mSightRadius(), nullptr, nullptr, nullptr);

	if (target) {
		frog->mAlertTimer = 0.0f;
		f32 angdist       = frog->turnToTarget(target, CG_GENERALPARMS(frog).mTurnSpeed(), CG_GENERALPARMS(frog).mMaxTurnAngle());

		if (frog->isTargetAttackable(target, angdist, CG_GENERALPARMS(frog).mMaxAttackRange(), CG_GENERALPARMS(frog).mMaxAttackAngle())) {
			frog->mTargetCreature = target;
			frog->mNextState      = FROG_Jump;
			frog->finishMotion();
		} else if (FABS(angdist) <= PI / 18.0f) {
			frog->mNextState = FROG_Wait;
			frog->finishMotion();
		}

	} else {
		frog->mNextState = FROG_Wait;
		frog->finishMotion();
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		frog->mNextState = FROG_Jump;
		frog->finishMotion();
	}

	if (frog->mHealth <= 0.0f) {
		frog->mNextState = FROG_Dead;
		frog->finishMotion();
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		transit(frog, frog->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80257120
 * @note Size: 0xAC
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	frog->setEmotionCaution();

	if (frog->mNextState == FROG_Jump) {
		Vector3f pos = frog->getPosition();
		if (frog->mTargetCreature) {
			pos = frog->mTargetCreature->getPosition();
		}

		frog->mTargetPosition = pos;
		frog->attackNaviPosition();
	}
}

/**
 * @note Address: 0x802571CC
 * @note Size: 0xE8
 */
void StateJump::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog = OBJ(enemy);
	frog->disableEvent(0, EB_Cullable);
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->setEmotionExcitement();

	if (frog->mStuckPikminCount) {
		Parms::ProperParms* parms = &CG_PROPERPARMS(frog);
		if (randWeightFloat(1.0f) < parms->mJumpFailChance.mValue) {
			transit(frog, FROG_Fail, nullptr);
			return;
		}
	}

	frog->startJumpEffect();
	frog->startMotion(FROGANIM_Jump, nullptr);
}

/**
 * @note Address: 0x802572B4
 * @note Size: 0x118
 */
void StateJump::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);

	if (frog->mCurAnim->mIsPlaying) {
		if (frog->mCurAnim->mType == KEYEVENT_2) {
			frog->startJumpAttack();

			EnemyFunc::flickNearbyNavi(frog, CG_GENERALPARMS(frog).mShakeRange.mValue, 0.0f, CG_GENERALPARMS(frog).mShakeDamage.mValue,
			                           FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(frog, CG_GENERALPARMS(frog).mShakeRange.mValue, 0.0f, CG_GENERALPARMS(frog).mShakeDamage.mValue,
			                             FLICK_BACKWARD_ANGLE, nullptr);

			if (frog->mWaterBox) {
				frog->getJAIObject()->startSound(PSSE_EN_FROG_WATERJUMP, 0);
			} else {
				frog->getJAIObject()->startSound(PSSE_EN_FROG_HIGHJUMP, 0);
			}
		} else if (frog->mCurAnim->mType == KEYEVENT_END) {
			transit(frog, FROG_JumpWait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802573CC
 * @note Size: 0x48
 */
void StateJump::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
	enemy->setEmotionCaution();
	enemy->disableEvent(0, EB_Untargetable);
}

/**
 * @note Address: 0x80257414
 * @note Size: 0x58
 */
void StateJumpWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_Cullable);
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(FROGANIM_JumpWait, nullptr);
}

/**
 * @note Address: 0x8025746C
 * @note Size: 0x8C
 */
void StateJumpWait::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mAirTimer > CG_PROPERPARMS(frog).mAirTime.mValue) {
		frog->finishMotion();
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		transit(frog, FROG_Fall, nullptr);
	}
}

/**
 * @note Address: 0x802574F8
 * @note Size: 0x3C
 */
void StateJumpWait::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
	enemy->disableEvent(0, EB_Untargetable);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80257534
 * @note Size: 0x8C
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog        = OBJ(enemy);
	frog->mIsFalling = true;
	frog->disableEvent(0, EB_Cullable);
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->disableEvent(0, EB_Untargetable);
	frog->setEmotionExcitement();
	frog->startMotion(FROGANIM_Fall, nullptr);
	frog->mCurrentVelocity = Vector3f(0.0f, -CG_PROPERPARMS(frog).mFallSpeed.mValue, 0.0f);
}

/**
 * @note Address: 0x802575C0
 * @note Size: 0x40
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->mFloorTriangle) {
		transit(enemy, FROG_Attack, nullptr);
	}
}

/**
 * @note Address: 0x80257600
 * @note Size: 0x38
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* frog        = OBJ(enemy);
	frog->mIsFalling = false;
	frog->enableEvent(0, EB_Cullable);
	frog->setEmotionCaution();
}

/**
 * @note Address: 0x80257638
 * @note Size: 0x74
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog        = OBJ(enemy);
	frog->mIsFalling = false;
	frog->pressOnGround();
	frog->mAlertTimer = 0.0f;
	frog->disableEvent(0, EB_Cullable);
	frog->setEmotionExcitement();
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->startMotion(FROGANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802576AC
 * @note Size: 0x16C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	// nothing in here strictly needs this obj cast, but the codegen does. wack.
	Obj* frog = OBJ(enemy);
	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		if (frog->mHealth <= 0.0f) {
			transit(frog, FROG_Dead, nullptr);
			return;
		}
		Vector3f homePos = frog->mHomePosition;
		Vector3f pos     = frog->getPosition();

		f32 sep = pos.distance(homePos);

		if (sep > CG_GENERALPARMS(frog).mTerritoryRadius.mValue) {
			transit(frog, FROG_TurnToHome, nullptr);
		} else {
			transit(frog, FROG_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80257818
 * @note Size: 0x44
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	frog->finishJumpEffect();
	frog->enableEvent(0, EB_Cullable);
	frog->setEmotionCaution();
}

/**
 * @note Address: 0x8025785C
 * @note Size: 0x54
 */
void StateFail::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mFlickTimer     = 0.0f;
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(FROGANIM_Fail, nullptr);
}

/**
 * @note Address: 0x802578B0
 * @note Size: 0x1A8
 */
void StateFail::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		if (frog->mHealth <= 0.0f) {
			transit(frog, FROG_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(frog, false)) {
			transit(frog, FROG_Jump, nullptr);
			return;
		}

		Vector3f homePos = frog->mHomePosition;
		Vector3f pos     = frog->getPosition();

		f32 sep = pos.distance(homePos);

		if (sep > CG_GENERALPARMS(frog).mTerritoryRadius.mValue) {
			transit(frog, FROG_TurnToHome, nullptr);
		} else {
			transit(frog, FROG_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80257A58
 * @note Size: 0x24
 */
void StateFail::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80257A7C
 * @note Size: 0x44
 */
void StateTurnToHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog             = OBJ(enemy);
	frog->mNextState      = FROG_NULL;
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->startMotion(FROGANIM_Turn, nullptr);
}

/**
 * @note Address: 0x80257AC0
 * @note Size: 0x224
 */
void StateTurnToHome::exec(EnemyBase* enemy)
{
	Obj* frog        = OBJ(enemy);
	Vector3f homePos = frog->mHomePosition;

	if (frog->turnToTargetPos(homePos, CG_GENERALPARMS(frog).mTurnSpeed(), CG_GENERALPARMS(frog).mMaxTurnAngle(),
	                          CG_GENERALPARMS(frog).mMaxAttackAngle())) {
		frog->mNextState = FROG_GoHome;
		frog->finishMotion();
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		frog->mNextState = FROG_Jump;
		frog->finishMotion();
	}

	if (frog->mHealth <= 0.0f) {
		frog->mNextState = FROG_Dead;
		frog->finishMotion();
	}

	if (frog->mCurAnim->mIsPlaying && frog->mCurAnim->mType == KEYEVENT_END) {
		transit(frog, frog->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x80257CE4
 * @note Size: 0x60
 */
void StateTurnToHome::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mNextState == FROG_Jump) {
		Vector3f pos          = frog->getPosition();
		frog->mTargetPosition = pos;
	}
}

/**
 * @note Address: 0x80257D44
 * @note Size: 0x5C
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* frog        = OBJ(enemy);
	frog->mNextState = FROG_NULL;
	frog->mIsInAir   = false;
	frog->mAirTimer  = 0.0f;
	frog->disableEvent(0, EB_NoInterrupt);
	frog->mTargetVelocity = Vector3f(0.0f);
	frog->startMotion(FROGANIM_Move, nullptr);
}

/**
 * @note Address: 0x80257DA0
 * @note Size: 0x200
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	if (frog->mIsInAir) {
		Vector3f pos     = frog->getPosition();
		Vector3f homePos = Vector3f(frog->mHomePosition);
		EnemyFunc::walkToTarget(frog, homePos, CG_GENERALPARMS(frog).mMoveSpeed.mValue, CG_GENERALPARMS(frog).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(frog).mMaxTurnAngle.mValue);

		if (sqrDistanceXZ(pos, homePos) < SQUARE(CG_GENERALPARMS(frog).mHomeRadius())) {
			frog->mNextState = FROG_Wait;
			frog->finishMotion();
		} else if (frog->mAirTimer > 7.5f) {
			frog->resetHomePosition();
		}
	} else {
		frog->mTargetVelocity = Vector3f(0.0f);
	}

	if (EnemyFunc::isStartFlick(frog, false)) {
		frog->mNextState = FROG_Jump;
		frog->finishMotion();
	}

	if (frog->mHealth <= 0.0f) {
		frog->mNextState = FROG_Dead;
		frog->finishMotion();
	}

	frog->mAirTimer += sys->mDeltaTime;

	if (frog->mCurAnim->mIsPlaying) {
		if (frog->mCurAnim->mType == KEYEVENT_2) {
			frog->mIsInAir = true;
			frog->enableEvent(0, EB_NoInterrupt);
		} else if (frog->mCurAnim->mType == KEYEVENT_3) {
			frog->mIsInAir = false;
			frog->disableEvent(0, EB_NoInterrupt);
			frog->createDownEffect(0.5f);
		} else if (frog->mCurAnim->mType == KEYEVENT_END) {
			transit(frog, frog->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80257FA0
 * @note Size: 0x10C
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	Obj* frog = OBJ(enemy);
	frog->disableEvent(0, EB_NoInterrupt);
	if (frog->mNextState == FROG_Jump) {
		Vector3f pos     = frog->getPosition();
		Vector3f homePos = frog->mHomePosition;
		Vector3f sep     = homePos - pos;
		sep.y            = 0.0f;

		f32 dist = sep.normalise();
		if (dist < CG_GENERALPARMS(frog).mMaxAttackRange.mValue) {
			frog->mTargetPosition = homePos;
		} else {
			sep *= CG_GENERALPARMS(frog).mMaxAttackRange.mValue;

			sep += pos;
			frog->mTargetPosition = sep;
		}
	}
}
} // namespace Frog
} // namespace Game
