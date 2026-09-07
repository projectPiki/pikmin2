#include "Game/Entities/DangoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace DangoMushi {

/**
 * @note Address: 0x802F9A8C
 * @note Size: 0x320
 */
void FSM::init(EnemyBase* enemy)
{
	create(DANGOMUSHI_StateCount);

	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateAttack);
	registerState(new StateTurn);
	registerState(new StateRecover);
	registerState(new StateFlick);
}

/**
 * @note Address: 0x802F9DAC
 * @note Size: 0x88
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab     = OBJ(enemy);
	crab->mIsBall = false;
	crab->deathProcedure();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->setEmotionCaution();

	if (stateArg) {
		crab->startBlendAnimation(DANGOANIM_Dead, true);
	} else {
		crab->startBlendAnimation(DANGOANIM_Dead, false);
	}
}

/**
 * @note Address: 0x802F9E34
 * @note Size: 0x13C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);

	if (crab->getMotionFrame() > 50.0f) {
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(VIBTYPE_LightFastShort, crabPos, CAMNAVI_Both);
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createDeadSmokeEffect();

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->createDeadBombEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastLong, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);
		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			crab->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802F9F70
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802F9F74
 * @note Size: 0x94
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->enableEvent(0, EB_BitterImmune);
	crab->hardConstraintOn();
	crab->enableEvent(0, EB_ModelHidden);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Fly, false);
	crab->stopMotion();
}

/**
 * @note Address: 0x802FA008
 * @note Size: 0x144
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mShadowScale > 0.0f) {
		if (crab->addShadowScale()) {
			transit(crab, DANGOMUSHI_Appear, nullptr);
		}
		return;
	}

	f32 privateRad = CG_GENERALPARMS(crab).mPrivateRadius.mValue;

	bool isTarget;
	if (EnemyFunc::isThereOlimar(crab, privateRad, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(crab, privateRad, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		shadowMgr->addShadow(crab);
		crab->getJAIObject()->startSound(PSSE_EN_DANGO_FALL, 0);
		if (crab->addShadowScale()) {
			transit(crab, DANGOMUSHI_Appear, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FA14C
 * @note Size: 0x4
 */
void StateStay::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802FA150
 * @note Size: 0x8C
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->enableEvent(0, EB_BitterImmune);
	crab->hardConstraintOn();
	crab->disableEvent(0, EB_ModelHidden);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Fly, false);
}

/**
 * @note Address: 0x802FA1DC
 * @note Size: 0x400
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createAppearSmokeEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_Crash, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->setBossAppearBGM();

		} else if (crab->mCurAnim->mType == KEYEVENT_4) {
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			Creature* target = crab->getSearchedTarget();
			if (target && gameSystem && !gameSystem->isZukanMode()) {
				f32 maxAttackRange, minAttackRange;
				minAttackRange = CG_GENERALPARMS(crab).mMaxAttackAngle();
				maxAttackRange = CG_GENERALPARMS(crab).mMaxAttackRange();

				f32 viewAngle = crab->getAngDist(target);
				if (crab->isTargetAttackable(target, viewAngle, maxAttackRange, minAttackRange)) {
					transit(crab, DANGOMUSHI_Attack, nullptr);
				} else {
					crab->setRandTarget();
					transit(crab, DANGOMUSHI_Move, nullptr);
				}

			} else {
				transit(crab, DANGOMUSHI_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802FA5DC
 * @note Size: 0x30
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_BitterImmune);
	enemy->hardConstraintOff();
}

/**
 * @note Address: 0x802FA60C
 * @note Size: 0x9C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->setRandTarget();
	crab->mIsBall = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->mTargetVelocity = Vector3f(0.0f);

	if (stateArg) {
		crab->startBlendAnimation(DANGOANIM_Wait, true);
	} else {
		crab->startBlendAnimation(DANGOANIM_Wait, false);
	}
}

/**
 * @note Address: 0x802FA6A8
 * @note Size: 0x364
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);

	if (crab->mHealth <= 0.0f) {
		crab->mNextState = DANGOMUSHI_Dead;
		transit(crab, DANGOMUSHI_Dead, (DangoStateArg*)("blend")); // sure Nishimura
		return;
	}

	Creature* target = crab->getSearchedTarget();
	if (target && gameSystem && !gameSystem->isZukanMode()) {
		f32 maxAttackRange, minAttackRange;
		minAttackRange = CG_GENERALPARMS(crab).mMaxAttackAngle();
		maxAttackRange = CG_GENERALPARMS(crab).mMaxAttackRange();

		f32 viewAngle = crab->getAngDist(target);
		if (crab->isTargetAttackable(target, viewAngle, maxAttackRange, minAttackRange)) {
			crab->mNextState = DANGOMUSHI_Attack;
			crab->finishMotion();
		} else {
			crab->mNextState = DANGOMUSHI_Move;
			crab->finishMotion();
		}
	} else if (crab->mStateTimer > 3.0f) {
		crab->mNextState = DANGOMUSHI_Move;
		crab->finishMotion();
	}

	crab->mStateTimer += sys->mDeltaTime;

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();
		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FAA0C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802FAA10
 * @note Size: 0x5C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mStateTimer = 0.0f;
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_Invulnerable);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Move, false);
}

/**
 * @note Address: 0x802FAA6C
 * @note Size: 0x7A8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mHealth <= 0.0f) {
		crab->mNextState = DANGOMUSHI_Dead;
		transit(crab, DANGOMUSHI_Dead, (DangoStateArg*)("blend"));
		return;
	}

	Creature* target = crab->getSearchedTarget();
	if (target && gameSystem && !gameSystem->isZukanMode()) {
		f32 viewAngle = crab->getAngDist(target);

		if (crab->isTargetAttackable(target, viewAngle, CG_GENERALPARMS(crab).mMaxAttackRange(), CG_GENERALPARMS(crab).mMaxAttackAngle())) {
			crab->mNextState = DANGOMUSHI_Attack;
			crab->finishMotion();

		} else {
			crab->turnToTarget(target, CG_GENERALPARMS(crab).mTurnSpeed(), CG_GENERALPARMS(crab).mMaxTurnAngle());
			if (isAngleWithin(viewAngle, CG_GENERALPARMS(crab).mMaxAttackAngle())) {
				crab->setTargetSpeed(CG_GENERALPARMS(crab).mMoveSpeed());
			} else {
				crab->mTargetVelocity = Vector3f(0.0f);
			}
		}

	} else if (crab->isReachedTarget()) {
		crab->mNextState = DANGOMUSHI_Wait;
		crab->finishMotion();
	} else if (crab->mStateTimer > 10.0f) {
		crab->mNextState = DANGOMUSHI_Wait;
		crab->finishMotion();
	} else {
		Vector3f targetPos = crab->mTargetPosition;
		f32 viewAngle      = crab->getAngDist(targetPos);
		crab->turnToTarget(targetPos, CG_GENERALPARMS(crab).mTurnSpeed(), CG_GENERALPARMS(crab).mMaxTurnAngle());

		if (isAngleWithin(viewAngle, 30.0f)) {
			crab->setTargetSpeed(CG_GENERALPARMS(crab).mMoveSpeed());
		} else {
			crab->setTargetVelocity(Vector3f(0.0f));
		}
	}

	if (crab->isFinishMotion()) {
		crab->setTargetVelocity(Vector3f(0.0f));
	}

	crab->mStateTimer += sys->mDeltaTime;

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightMidShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FB214
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802FB218
 * @note Size: 0x88
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsRolling  = false;
	crab->mIsBall     = true;
	crab->enableEvent(0, EB_Invulnerable);
	crab->enableEvent(0, EB_BitterImmune);
	crab->setEmotionExcitement();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Attack, false);
}

/**
 * @note Address: 0x802FB2A0
 * @note Size: 0x288
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mStateTimer > 15.0f) {
		crab->mNextState = DANGOMUSHI_Wait;
		crab->finishMotion();
	}

	if (crab->mIsRolling) {
		crab->rollingMove();
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
		crab->getJAIObject()->startSound(PSSE_EN_DANGO_ROLL_GROUND, 0);
	} else {
		crab->mTargetVelocity = Vector3f(0.0f);
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createEnemyBounceEffect();

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->startBossAttackLoopBGM();
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_4) {
			if (!crab->mIsRolling) {
				crab->mIsRolling = true;
				crab->startRollingMoveEffect();
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_LOOP_END) {
			if (crab->isFinishMotion()) {
				crab->mIsRolling = false;
				crab->mIsBall    = false;
				crab->finishRollingMoveEffect();
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_5) {
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FB528
 * @note Size: 0x58
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	crab->disableEvent(0, EB_BitterImmune);
	crab->setEmotionCaution();
	crab->mIsRolling = false;
	crab->mIsBall    = false;
	crab->finishRollingMoveEffect();
	crab->finishBossAttackLoopBGM();
}

/**
 * @note Address: 0x802FB580
 * @note Size: 0xD4
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab         = OBJ(enemy);
	crab->mNextState  = DANGOMUSHI_NULL;
	crab->mStateTimer = 0.0f;
	crab->mIsBall     = false;
	crab->enableEvent(0, EB_NoInterrupt);
	crab->enableEvent(0, EB_Invulnerable);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Turn, false);
	crab->createCrashEnemy();

	Vector3f crabPos = crab->getPosition();
	cameraMgr->startVibration(VIBTYPE_Crash, crabPos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed15, crabPos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802FB654
 * @note Size: 0x270
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mHealth <= 0.0f) {
		crab->mNextState = DANGOMUSHI_Dead;
		crab->finishMotion();
	} else if (crab->mStateTimer > CG_PROPERPARMS(crab).mFlipTime.mValue) {
		crab->mNextState = DANGOMUSHI_Recover;
		crab->finishMotion();
	}

	crab->mStateTimer += sys->mDeltaTime;

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardMidShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_LOOP_START) {
			if (crab->isEvent(0, EB_Invulnerable)) {
				crab->disableEvent(0, EB_NoInterrupt);
				crab->disableEvent(0, EB_Invulnerable);
				crab->setBodyCollision(false);
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->enableEvent(0, EB_Invulnerable);
			crab->setBodyCollision(true);
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_4) {
			crab->createBodyTurnEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, crab->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FB8C4
 * @note Size: 0x68
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	EnemyFunc::flickStickPikmin(crab, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	crab->enableEvent(0, EB_Invulnerable);
	crab->disableEvent(0, EB_NoInterrupt);
	crab->setBodyCollision(true);
}

/**
 * @note Address: 0x802FB92C
 * @note Size: 0x50
 */
void StateRecover::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab             = OBJ(enemy);
	crab->mNextState      = DANGOMUSHI_NULL;
	crab->mStateTimer     = 0.0f;
	crab->mIsBall         = false;
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Recover, false);
}

/**
 * @note Address: 0x802FB97C
 * @note Size: 0xFC
 */
void StateRecover::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createEnemyBounceEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);
			crab->startBossFlickBGM();

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			crab->mFaceDir += PI;
			crab->mRotation.y = crab->mFaceDir;
			transit(crab, DANGOMUSHI_Flick, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FBA78
 * @note Size: 0x4
 */
void StateRecover::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x802FBA7C
 * @note Size: 0x6C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab            = OBJ(enemy);
	crab->mNextState     = DANGOMUSHI_NULL;
	crab->mStateTimer    = 0.0f;
	crab->mIsArmSwinging = false;
	crab->mIsBall        = false;
	crab->setEmotionExcitement();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(DANGOANIM_Attack2, false);
}

/**
 * @note Address: 0x802FBAE8
 * @note Size: 0x1E0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);
	if (crab->flickHandCollision()) {
		crab->createWallBreakEffect();
		crab->getJAIObject()->startSound(PSSE_EN_DANGO_ARM_GROUND, 0);
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(VIBTYPE_HardFastMid, crabPos, CAMNAVI_Both);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed14, crabPos, RUMBLEID_Both);
		transit(crab, DANGOMUSHI_Wait, (DangoStateArg*)("blend"));
		return;
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->mIsArmSwinging = true;
			if (crab->getMotionFrame() < 30.0f) {
				crab->createFlickAttackEffect();
			}

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->mIsArmSwinging = false;
			Vector3f crabPos     = crab->getPosition();
			cameraMgr->startVibration(VIBTYPE_MidFastShort, crabPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, crabPos, RUMBLEID_Both);

		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			transit(crab, DANGOMUSHI_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x802FBCC8
 * @note Size: 0x2C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* crab            = OBJ(enemy);
	crab->mIsArmSwinging = false;
	crab->setEmotionCaution();
}

} // namespace DangoMushi
} // namespace Game
