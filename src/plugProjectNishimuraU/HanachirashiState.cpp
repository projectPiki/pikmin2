#include "Game/Entities/Hanachirashi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Hanachirashi {

static const char unusedName[] = "246-HanachirashiState";

/**
 * @note Address: 0x8029F228
 * @note Size: 0x480
 */
void FSM::init(EnemyBase* enemy)
{
	create(HANACHIRASHI_StateCount);
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
	registerState(new StateLaugh);
}

/**
 * @note Address: 0x8029F6A8
 * @note Size: 0xAC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->disableEvent(0, EB_Cullable);
	hanachirashi->disableEvent(0, EB_DamageAnimEnabled);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->deathProcedure();

	if (hanachirashi->isFlying()) {
		hanachirashi->startMotion(HANACHIANIM_DeadFly, nullptr);
	} else {
		hanachirashi->startMotion(HANACHIANIM_DeadGround, nullptr);
	}

	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->startDeadEffect();
}

/**
 * @note Address: 0x8029F754
 * @note Size: 0xB8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (!hanachirashi->getCurrAnimIndex()) {
		if (hanachirashi->getMotionFrame() > 45.0f) {
			hanachirashi->subShadowRadius();
		}
	}

	else if (hanachirashi->getMotionFrame() > 60.0f) {
		hanachirashi->subShadowRadius();
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		hanachirashi->throwupItem();
		hanachirashi->finishWindEffect();
		hanachirashi->kill(nullptr);
	}
}

/**
 * @note Address: 0x8029F80C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8029F810
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->startMotion(HANACHIANIM_WaitFly, nullptr);
}

/**
 * @note Address: 0x8029F864
 * @note Size: 0x138
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	Creature* target = hanachirashi->getSearchedPikmin();
	if (!target) {
		target = hanachirashi->isAttackable();
	}

	if (target) {
		hanachirashi->mTargetCreature = target;
		transit(hanachirashi, HANACHIRASHI_Chase, nullptr);

	} else if (hanachirashi->mAirWaitTime > CG_PROPERPARMS(hanachirashi).mAirWaitTime.mValue) {
		transit(hanachirashi, HANACHIRASHI_Move, nullptr);
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	StateID nextState = hanachirashi->getFlyingNextState();

	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8029F99C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8029F9A0
 * @note Size: 0x4C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setRandTarget();
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
}

/**
 * @note Address: 0x8029F9EC
 * @note Size: 0x1A0
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	// this bit is being weird
	Vector3f pos = Vector3f(hanachirashi->getPosition());
	Vector3f targetPos = Vector3f(hanachirashi->mTargetPosition);
	f32 sqrDist = sqrDistanceXZ(pos, targetPos);

	Creature* target = hanachirashi->getSearchedPikmin();
	if (target) {
		hanachirashi->mTargetCreature = target;
		transit(hanachirashi, HANACHIRASHI_Chase, nullptr);
	} else if (sqrDist < SQUARE(100.0f) || hanachirashi->mAirWaitTime > 7.5f) {
		hanachirashi->mTargetVelocity = Vector3f(0.0f);
		hanachirashi->finishMotion();
	} else {
		EnemyFunc::walkToTarget(hanachirashi, targetPos, CG_GENERALPARMS(hanachirashi).mMoveSpeed.mValue,
		                        CG_GENERALPARMS(hanachirashi).mTurnSpeed.mValue, CG_GENERALPARMS(hanachirashi).mMaxTurnAngle.mValue);
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	StateID nextState = hanachirashi->getFlyingNextState();

	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8029FB8C
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8029FB90
 * @note Size: 0x30
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
}

/**
 * @note Address: 0x8029FBC0
 * @note Size: 0x530
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	if (!hanachirashi->isFinishMotion()) {
		Creature* target = hanachirashi->mTargetCreature;
		if (target) {
			Vector3f homePos         = hanachirashi->mHomePosition;
			Vector3f hanachirashiPos = hanachirashi->getPosition();
			Vector3f targetPos       = target->getPosition();       //

			Vector3f sep(hanachirashiPos.x - targetPos.x, 0.0f, hanachirashiPos.z - targetPos.z);
			sep.normalise();
			sep *= CG_GENERALPARMS(hanachirashi).mMaxAttackRange();
			targetPos += sep;
			f32 angle = JMAAtan2Radian(targetPos.x - hanachirashiPos.x, targetPos.z - hanachirashiPos.z);

			hanachirashi->turnToTarget(target, CG_GENERALPARMS(hanachirashi).mTurnSpeed(), CG_GENERALPARMS(hanachirashi).mMaxTurnAngle());

			if (sqrDistanceXZ(hanachirashiPos, targetPos) > 225.0f) {
				f32 x = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * sinf(angle);
				f32 y = hanachirashi->getTargetVelocity().y;
				f32 z = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * cosf(angle);

				hanachirashi->mTargetVelocity = Vector3f(x, y, z);
			} else {
				hanachirashi->mTargetVelocity = Vector3f(0.0f);
			}

			if (sqrDistanceXZ(hanachirashiPos, homePos) > SQUARE(CG_GENERALPARMS(hanachirashi).mTerritoryRadius())) {
				transit(hanachirashi, HANACHIRASHI_ChaseInside, nullptr);
			} else if (hanachirashi->isTargetLost()) {
				Piki* piki = hanachirashi->getSearchedPikmin();
				if (piki) {
					hanachirashi->mTargetCreature = piki;
				} else {
					transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
				}
			}
		}

		Creature* attackTarget = hanachirashi->isAttackable();
		if (attackTarget) {
			hanachirashi->mTargetCreature = attackTarget;
			hanachirashi->mTargetVelocity = Vector3f(0.0f);
			hanachirashi->finishMotion();
		}
	}

	StateID nextState = hanachirashi->getFlyingNextState();

	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		if (hanachirashi->mTargetCreature) {
			transit(hanachirashi, HANACHIRASHI_Attack, nullptr);
		} else {
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A00F0
 * @note Size: 0x24
 */
void StateChase::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802A0114
 * @note Size: 0x124
 */
void StateChaseInside::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	Vector3f homePos  = hanachirashi->mHomePosition;
	if (hanachirashi->mTargetCreature) {
		Vector3f pos = hanachirashi->mTargetCreature->getPosition();
		Vector3f sep = homePos - pos;
		sep.y        = 0.0f;

		sep.normalise();

		sep *= CG_GENERALPARMS(hanachirashi).mSightRadius();
		pos += sep;
		hanachirashi->mTargetPosition = pos;
	} else {
		hanachirashi->mTargetPosition = homePos;
	}

	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->setEmotionExcitement();
}

/**
 * @note Address: 0x802A0238
 * @note Size: 0x37C
 */
void StateChaseInside::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	Vector3f hanachirashiPos = hanachirashi->getPosition();
	Vector3f targetPos       = hanachirashi->mTargetPosition;
	if (sqrDistanceXZ(hanachirashiPos, targetPos) < 10000.0f) {
		transit(hanachirashi, HANACHIRASHI_Chase, nullptr);
	} else {
		Creature* target = hanachirashi->mTargetCreature;
		if (target) {
			hanachirashi->turnToTarget(target, CG_GENERALPARMS(hanachirashi).mTurnSpeed(), CG_GENERALPARMS(hanachirashi).mMaxTurnAngle());
		}

		f32 angle = JMAAtan2Radian(targetPos.x - hanachirashiPos.x, targetPos.z - hanachirashiPos.z);
		f32 x     = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * sinf(angle);
		f32 y     = hanachirashi->getTargetVelocity().y;
		f32 z     = CG_GENERALPARMS(hanachirashi).mMoveSpeed() * cosf(angle);

		hanachirashi->mTargetVelocity = Vector3f(x, y, z);
	}

	int nextState = hanachirashi->getFlyingNextState();
	if (nextState >= 0) {
		transit(hanachirashi, nextState, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802A05B4
 * @note Size: 0x24
 */
void StateChaseInside::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802A05D8
 * @note Size: 0x90
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->disableEvent(0, EB_Cullable);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Attack, nullptr);
	hanachirashi->mNextState          = HANACHIRASHI_NULL;
	hanachirashi->mIsWindAttackActive = false;
	hanachirashi->mWindScaleTimer     = 0.0f;
	hanachirashi->createSuckEffect();
}

/**
 * @note Address: 0x802A0668
 * @note Size: 0x11C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();
	if (hanachirashi->mIsWindAttackActive) {
		if (hanachirashi->windTarget()) {
			hanachirashi->mNextState = HANACHIRASHI_Laugh;
		}
	}

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying) {
		if (hanachirashi->mCurAnim->mType == KEYEVENT_2) {
			hanachirashi->mIsWindAttackActive = true;
			hanachirashi->startWindEffect();
		} else if (hanachirashi->mCurAnim->mType == KEYEVENT_END) {
			if (hanachirashi->mNextState >= 0) {
				transit(hanachirashi, hanachirashi->mNextState, nullptr);
				return;
			}
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0784
 * @note Size: 0x54
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->enableEvent(0, EB_Cullable);
	hanachirashi->setEmotionCaution();
	hanachirashi->mIsWindAttackActive = false;
	hanachirashi->mWindScaleTimer     = 0.0f;
	hanachirashi->finishWindEffect();
}

/**
 * @note Address: 0x802A07D8
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Fall, nullptr);
}

/**
 * @note Address: 0x802A0840
 * @note Size: 0x1A4
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (hanachirashi->isFlying()) {
		hanachirashi->setHeightVelocity();
	} else {
		Vector3f pos = hanachirashi->getPosition();
		Vector3f vel = hanachirashi->getVelocity();

		f32 fallSpeed = vel.y;

		f32 heightDiff = pos.y - mapMgr->getMinY(pos);
		if (heightDiff < 50.0f || fallSpeed > 0.0f) {
			hanachirashi->finishMotion();
		}

		hanachirashi->addShadowOffset();
	}

	if (hanachirashi->mAirWaitTime > 0.75f) {
		hanachirashi->disableEvent(0, EB_Untargetable);
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		transit(hanachirashi, HANACHIRASHI_Land, nullptr);
	}
}

/**
 * @note Address: 0x802A09E4
 * @note Size: 0x38
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setShadowOffsetMax();
	hanachirashi->setEmotionCaution();
}

/**
 * @note Address: 0x802A0A1C
 * @note Size: 0x70
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Land, nullptr);
	hanachirashi->createDownEffect();
}

/**
 * @note Address: 0x802A0A8C
 * @note Size: 0x80
 */
void StateLand::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		transit(enemy, HANACHIRASHI_Ground, nullptr);
	}
}

/**
 * @note Address: 0x802A0B0C
 * @note Size: 0x24
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802A0B30
 * @note Size: 0x68
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_WaitGround, nullptr);
}

/**
 * @note Address: 0x802A0B98
 * @note Size: 0x114
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (hanachirashi->mStuckPikminCount == 0 || hanachirashi->mAirWaitTime > CG_PROPERPARMS(hanachirashi).mGroundWaitTime.mValue) {
		hanachirashi->finishMotion();
	}

	hanachirashi->mAirWaitTime += sys->mDeltaTime;

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		if (hanachirashi->mStuckPikminCount) {
			transit(hanachirashi, HANACHIRASHI_GroundFlick, nullptr);
		} else {
			transit(hanachirashi, HANACHIRASHI_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0CAC
 * @note Size: 0x24
 */
void StateGround::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802A0CD0
 * @note Size: 0x64
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x802A0D34
 * @note Size: 0xEC
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	if (hanachirashi->isFlying()) {
		hanachirashi->setHeightVelocity();
		hanachirashi->subShadowOffset();
	}

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying) {
		if (hanachirashi->mCurAnim->mType == KEYEVENT_2) {
			hanachirashi->enableEvent(0, EB_Untargetable);
		} else if (hanachirashi->mCurAnim->mType == KEYEVENT_END) {
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0E20
 * @note Size: 0x38
 */
void StateTakeOff::cleanup(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->resetShadowOffset();
	hanachirashi->setEmotionCaution();
}

/**
 * @note Address: 0x802A0E58
 * @note Size: 0x64
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_FlickFly, nullptr);
}

/**
 * @note Address: 0x802A0EBC
 * @note Size: 0xE4
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();

	if (hanachirashi->mHealth <= 0.0f) {
		transit(hanachirashi, HANACHIRASHI_Dead, nullptr);
		return;
	}

	if (hanachirashi->mCurAnim->mIsPlaying) {
		if (hanachirashi->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(hanachirashi, CG_GENERALPARMS(hanachirashi).mShakeChance.mValue,
			                            CG_GENERALPARMS(hanachirashi).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(hanachirashi).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			hanachirashi->mFlickTimer = 0.0f;

		} else if (hanachirashi->mCurAnim->mType == KEYEVENT_END) {
			transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A0FA0
 * @note Size: 0x24
 */
void StateFlyFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802A0FC4
 * @note Size: 0x64
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->disableEvent(0, EB_Untargetable);
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_FlickGround, nullptr);
}

/**
 * @note Address: 0x802A1028
 * @note Size: 0x100
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	if (enemy->mHealth <= 0.0f) {
		transit(enemy, HANACHIRASHI_Dead, nullptr);
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
			transit(enemy, HANACHIRASHI_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802A1128
 * @note Size: 0x24
 */
void StateGroundFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802A114C
 * @note Size: 0x68
 */
void StateLaugh::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hanachirashi             = OBJ(enemy);
	hanachirashi->mAirWaitTime    = 0.0f;
	hanachirashi->mTargetVelocity = Vector3f(0.0f);
	hanachirashi->mTargetCreature = nullptr;
	hanachirashi->enableEvent(0, EB_Untargetable);
	hanachirashi->setEmotionExcitement();
	hanachirashi->startMotion(HANACHIANIM_Laugh, nullptr);
}

/**
 * @note Address: 0x802A11B4
 * @note Size: 0xDC
 */
void StateLaugh::exec(EnemyBase* enemy)
{
	Obj* hanachirashi = OBJ(enemy);
	hanachirashi->setHeightVelocity();
	if (hanachirashi->mCurAnim->mIsPlaying && hanachirashi->mCurAnim->mType == KEYEVENT_END) {
		int nextState = hanachirashi->getFlyingNextState();
		if (nextState >= 0) {
			transit(hanachirashi, nextState, nullptr);
			return;
		}

		if (hanachirashi->isAttackable()) {
			transit(hanachirashi, HANACHIRASHI_Attack, nullptr);
			return;
		}

		transit(hanachirashi, HANACHIRASHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x802A1290
 * @note Size: 0x24
 */
void StateLaugh::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}
} // namespace Hanachirashi
} // namespace Game
