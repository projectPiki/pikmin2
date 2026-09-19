#include "Game/Entities/Mar.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Mar {

static const char unusedMarStateName[] = "246-MarState";

/**
 * @note Address: 0x80282614
 * @note Size: 0x42C
 */
void FSM::init(EnemyBase* enemy)
{
	create(MAR_StateCount);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateChase);
	registerState(new StateChaseInside);
	registerState(new StateAttack);
	registerState(new StateFall);
	registerState(new StateLand);
	registerState(new StateGround);
	registerState(new StateTakeOff);
	registerState(new StateFlyFlick);
	registerState(new StateGroundFlick);
}

/**
 * @note Address: 0x80282A40
 * @note Size: 0xAC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar = OBJ(enemy);
	mar->disableEvent(0, EB_Cullable);
	mar->disableEvent(0, EB_DamageAnimEnabled);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->deathProcedure();

	if (mar->isFlying()) {
		mar->startMotion(MARANIM_DeadFly, nullptr);
	} else {
		mar->startMotion(MARANIM_DeadGround, nullptr);
	}

	mar->enableEvent(0, EB_Untargetable);
	mar->startDeadEffect();
}

/**
 * @note Address: 0x80282AEC
 * @note Size: 0x88
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->getMotionFrame() > 45.0f) {
		mar->subShadowRadius();
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		mar->throwupItem();
		mar->finishWindEffect();
		mar->kill(nullptr);
	}
}

/**
 * @note Address: 0x80282B74
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80282B78
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
	mar->startMotion(MARANIM_WaitFly, nullptr);
}

/**
 * @note Address: 0x80282BCC
 * @note Size: 0x138
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	Creature* target = mar->getSearchedPikmin();
	if (!target) {
		target = mar->isAttackable();
	}

	if (target) {
		mar->mTargetCreature = target;
		transit(mar, MAR_Chase, nullptr);

	} else if (mar->mGeneralTimer > CG_PROPERPARMS(mar).mAirWaitTime.mValue) {
		transit(mar, MAR_Move, nullptr);
	}

	StateID nextState = mar->getFlyingNextState();

	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Wait, nullptr);
	}
}

/**
 * @note Address: 0x80282D04
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80282D08
 * @note Size: 0x4C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar = OBJ(enemy);
	mar->setRandTarget();
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
}

/**
 * @note Address: 0x80282D54
 * @note Size: 0x1A0
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	Vector3f pos       = Vector3f(mar->getPosition());
	Vector3f targetPos = Vector3f(mar->mTargetPosition);
	f32 sqrDist        = pos.sqrDistance2D(targetPos);

	Creature* target = mar->getSearchedPikmin();
	if (target) {
		mar->mTargetCreature = target;
		transit(mar, MAR_Chase, nullptr);
	} else if (sqrDist < SQUARE(100.0f) || mar->mGeneralTimer > 7.5f) {
		mar->mTargetVelocity = Vector3f(0.0f);
		mar->finishMotion();
	} else {
		EnemyFunc::walkToTarget(mar, targetPos, CG_GENERALPARMS(mar).mMoveSpeed.mValue, CG_GENERALPARMS(mar).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(mar).mMaxTurnAngle.mValue);
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	StateID nextState = mar->getFlyingNextState();

	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Wait, nullptr);
	}
}

/**
 * @note Address: 0x80282EF4
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80282EF8
 * @note Size: 0x30
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x80282F28
 * @note Size: 0x530
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	if (!mar->isFinishMotion()) {
		Creature* target = mar->mTargetCreature;
		if (target) {
			Vector3f homePos   = mar->mHomePosition;
			Vector3f marPos    = mar->getPosition();
			Vector3f targetPos = target->getPosition(); //

			Vector3f sep(marPos.x - targetPos.x, 0.0f, marPos.z - targetPos.z);
			sep.normalise();
			sep *= CG_GENERALPARMS(mar).mMaxAttackRange();
			targetPos += sep;
			f32 angle = JMAAtan2Radian(targetPos.x - marPos.x, targetPos.z - marPos.z);

			mar->turnToTarget(target, CG_GENERALPARMS(mar).mTurnSpeed(), CG_GENERALPARMS(mar).mMaxTurnAngle());

			if (marPos.sqrDistance2D(targetPos) > 225.0f) {
				f32 x = CG_GENERALPARMS(mar).mMoveSpeed() * sinf(angle);
				f32 y = mar->getTargetVelocity().y;
				f32 z = CG_GENERALPARMS(mar).mMoveSpeed() * cosf(angle);

				mar->mTargetVelocity = Vector3f(x, y, z);
			} else {
				mar->mTargetVelocity = Vector3f(0.0f);
			}

			if (marPos.sqrDistance2D(homePos) > SQUARE(CG_GENERALPARMS(mar).mTerritoryRadius())) {
				transit(mar, MAR_ChaseInside, nullptr);
			} else if (mar->isTargetLost()) {
				Piki* piki = mar->getSearchedPikmin();
				if (piki) {
					mar->mTargetCreature = piki;
				} else {
					transit(mar, MAR_Wait, nullptr);
				}
			}
		}

		Creature* attackTarget = mar->isAttackable();
		if (attackTarget) {
			mar->mTargetCreature = attackTarget;
			mar->mTargetVelocity = Vector3f(0.0f);
			mar->finishMotion();
		}
	}

	StateID nextState = mar->getFlyingNextState();

	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		if (mar->mTargetCreature) {
			transit(mar, MAR_Attack, nullptr);
		} else {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80283458
 * @note Size: 0x24
 */
void StateChase::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x8028347C
 * @note Size: 0x124
 */
void StateChaseInside::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar         = OBJ(enemy);
	Vector3f homePos = mar->mHomePosition;
	if (mar->mTargetCreature) {
		Vector3f pos = mar->mTargetCreature->getPosition();
		Vector3f sep = homePos - pos;
		sep.y        = 0.0f;

		sep.normalise();

		sep *= CG_GENERALPARMS(mar).mSightRadius();
		pos += sep;
		mar->mTargetPosition = pos;
	} else {
		mar->mTargetPosition = homePos;
	}

	mar->enableEvent(0, EB_Untargetable);
	mar->setEmotionExcitement();
}

/**
 * @note Address: 0x802835A0
 * @note Size: 0x37C
 */
void StateChaseInside::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	Vector3f marPos    = mar->getPosition();
	Vector3f targetPos = mar->mTargetPosition;
	if (marPos.sqrDistance2D(targetPos) < 10000.0f) {
		transit(mar, MAR_Chase, nullptr);
	} else {
		Creature* target = mar->mTargetCreature;
		if (target) {
			mar->turnToTarget(target, CG_GENERALPARMS(mar).mTurnSpeed(), CG_GENERALPARMS(mar).mMaxTurnAngle());
		}

		f32 angle = JMAAtan2Radian(targetPos.x - marPos.x, targetPos.z - marPos.z);
		f32 x     = CG_GENERALPARMS(mar).mMoveSpeed() * sinf(angle);
		f32 y     = mar->getTargetVelocity().y;
		f32 z     = CG_GENERALPARMS(mar).mMoveSpeed() * cosf(angle);

		mar->mTargetVelocity = Vector3f(x, y, z);
	}

	int nextState = mar->getFlyingNextState();
	if (nextState >= 0) {
		transit(mar, nextState, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8028391C
 * @note Size: 0x24
 */
void StateChaseInside::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80283940
 * @note Size: 0x88
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar = OBJ(enemy);
	mar->disableEvent(0, EB_Cullable);
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_Attack, nullptr);
	mar->mIsWindAttackActive = false;
	mar->mWindScaleTimer     = 0.0f;
	mar->createSuckEffect();
}

/**
 * @note Address: 0x802839C8
 * @note Size: 0xE0
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();
	if (mar->mIsWindAttackActive) {
		mar->windTarget();
	}

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying) {
		if (mar->mCurAnim->mType == KEYEVENT_2) {
			mar->mIsWindAttackActive = true;
			mar->startWindEffect();
		} else if (mar->mCurAnim->mType == KEYEVENT_END) {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80283AA8
 * @note Size: 0x54
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->enableEvent(0, EB_Cullable);
	mar->setEmotionCaution();
	mar->mIsWindAttackActive = false;
	mar->mWindScaleTimer     = 0.0f;
	mar->finishWindEffect();
}

/**
 * @note Address: 0x80283AFC
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->enableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_Fall, nullptr);
}

/**
 * @note Address: 0x80283B64
 * @note Size: 0x1A4
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->isFlying()) {
		mar->setHeightVelocity();
	} else {
		Vector3f pos = mar->getPosition();
		Vector3f vel = mar->getVelocity();

		f32 fallSpeed = vel.y;

		f32 heightDiff = pos.y - mapMgr->getMinY(pos);
		if (heightDiff < 50.0f || fallSpeed > 0.0f) {
			mar->finishMotion();
		}

		mar->addShadowOffset();
	}

	if (mar->mGeneralTimer > 0.75f) {
		mar->disableEvent(0, EB_Untargetable);
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		transit(mar, MAR_Land, nullptr);
	}
}

/**
 * @note Address: 0x80283D08
 * @note Size: 0x38
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setShadowOffsetMax();
	mar->setEmotionCaution();
}

/**
 * @note Address: 0x80283D40
 * @note Size: 0x70
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->disableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_Land, nullptr);
	mar->createDownEffect();
}

/**
 * @note Address: 0x80283DB0
 * @note Size: 0x80
 */
void StateLand::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, MAR_Dead, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, MAR_Ground, nullptr);
	}
}

/**
 * @note Address: 0x80283E30
 * @note Size: 0x24
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80283E54
 * @note Size: 0x68
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mar             = OBJ(enemy);
	mar->mGeneralTimer   = 0.0f;
	mar->mTargetCreature = nullptr;
	mar->disableEvent(0, EB_Untargetable);
	mar->mTargetVelocity = Vector3f(0.0f);
	mar->setEmotionExcitement();
	mar->startMotion(MARANIM_WaitGround, nullptr);
}

/**
 * @note Address: 0x80283EBC
 * @note Size: 0x114
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->mStuckPikminCount == 0 || mar->mGeneralTimer > CG_PROPERPARMS(mar).mGroundWaitTime.mValue) {
		mar->finishMotion();
	}

	mar->mGeneralTimer += sys->mDeltaTime;

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying && mar->mCurAnim->mType == KEYEVENT_END) {
		if (mar->mStuckPikminCount) {
			transit(mar, MAR_GroundFlick, nullptr);
		} else {
			transit(mar, MAR_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x80283FD0
 * @note Size: 0x24
 */
void StateGround::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80283FF4
 * @note Size: 0x64
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetCreature = nullptr;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(MARANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x80284058
 * @note Size: 0xEC
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	if (mar->isFlying()) {
		mar->setHeightVelocity();
		mar->subShadowOffset();
	}

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying) {
		if (mar->mCurAnim->mType == KEYEVENT_2) {
			mar->enableEvent(0, EB_Untargetable);
		} else if (mar->mCurAnim->mType == KEYEVENT_END) {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80284144
 * @note Size: 0x38
 */
void StateTakeOff::cleanup(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->resetShadowOffset();
	mar->setEmotionCaution();
}

/**
 * @note Address: 0x8028417C
 * @note Size: 0x64
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetCreature = nullptr;
	enemy->enableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(MARANIM_FlickFly, nullptr);
}

/**
 * @note Address: 0x802841E0
 * @note Size: 0xE4
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* mar = OBJ(enemy);
	mar->setHeightVelocity();

	if (mar->mHealth <= 0.0f) {
		transit(mar, MAR_Dead, nullptr);
		return;
	}

	if (mar->mCurAnim->mIsPlaying) {
		if (mar->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(mar, CG_GENERALPARMS(mar).mShakeChance.mValue, CG_GENERALPARMS(mar).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(mar).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			mar->mFlickTimer = 0.0f;

		} else if (mar->mCurAnim->mType == KEYEVENT_END) {
			transit(mar, MAR_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802842C4
 * @note Size: 0x24
 */
void StateFlyFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802842E8
 * @note Size: 0x64
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetCreature = nullptr;
	enemy->disableEvent(0, EB_Untargetable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(MARANIM_FlickGround, nullptr);
}

/**
 * @note Address: 0x8028434C
 * @note Size: 0x100
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, MAR_Dead, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(enemy, CG_GENERALPARMS(enemy).mShakeRange.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(enemy, CG_GENERALPARMS(enemy).mShakeRange.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickStickPikmin(enemy, CG_GENERALPARMS(enemy).mShakeChance.mValue, CG_GENERALPARMS(enemy).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(enemy).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			enemy->mFlickTimer = 0.0f;
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			transit(enemy, MAR_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x8028444C
 * @note Size: 0x24
 */
void StateGroundFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}
} // namespace Mar
} // namespace Game
