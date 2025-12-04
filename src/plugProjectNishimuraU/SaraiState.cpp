#include "Game/Entities/Sarai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sarai {

/**
 * @note Address: 0x802708A0
 * @note Size: 0x3D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(SARAI_StateCount);
	registerState(new StateDead);
	registerState(new StateFall);
	registerState(new StateDamage);
	registerState(new StateTakeOff);
	registerState(new StateFlick);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateAttack);
	registerState(new StateFail);
	registerState(new StateCatchFly);
	registerState(new StateFallMeck);
}

/**
 * @note Address: 0x80270C70
 * @note Size: 0x70
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai = OBJ(enemy);
	sarai->deathProcedure();
	sarai->disableEvent(0, EB_Cullable);
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->flickStickTarget();
	sarai->startMotion(SARAIANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80270CE0
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80270D24
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80270D28
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai             = OBJ(enemy);
	sarai->mGeneralTimer   = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(SARAIANIM_Fall, nullptr);
	sarai->flickStickTarget();
}

/**
 * @note Address: 0x80270D90
 * @note Size: 0x1B8
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* sarai   = OBJ(enemy);
	Vector3f pos = sarai->getPosition();

	f32 minY = mapMgr->getMinY(pos);

	if (pos.y - minY < 10.0f || sarai->mGeneralTimer > 1.0f) {
		sarai->finishMotion();
	}

	if (!sarai->isFinishMotion()) {
		f32 faceDir = sarai->getFaceDir() - 0.275f;

		clampAngle(faceDir);

		sarai->mFaceDir    = faceDir;
		sarai->mRotation.y = sarai->mFaceDir;
	}

	sarai->mGeneralTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			sarai->createDownEffect();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, pos, RUMBLEID_Both);
		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->mHealth <= 0.0f) {
				transit(sarai, SARAI_Dead, nullptr);
			} else {
				transit(sarai, SARAI_Damage, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80270F48
 * @note Size: 0x24
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80270F6C
 * @note Size: 0x68
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai             = OBJ(enemy);
	sarai->mGeneralTimer   = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->disableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(SARAIANIM_Damage, nullptr);
	sarai->flickStickTarget();
}

/**
 * @note Address: 0x80270FD4
 * @note Size: 0x108
 */
void StateDamage::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	if (sarai->mHealth <= 0.0f || sarai->mGeneralTimer > CG_PROPERPARMS(sarai).mStrugglingTime.mValue || sarai->getStickPikminNum() == 0) {
		sarai->finishMotion();
	}

	sarai->mGeneralTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		if (sarai->mHealth <= 0.0f) {
			transit(sarai, SARAI_Dead, nullptr);
		} else {
			transit(sarai, SARAI_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802710DC
 * @note Size: 0x24
 */
void StateDamage::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80271100
 * @note Size: 0x4C
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->setEmotionExcitement();
	enemy->startMotion(SARAIANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x8027114C
 * @note Size: 0x108
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 val    = sarai->setHeightVelocity();

	if (sarai->mHealth <= 0.0f || val > CG_PROPERPARMS(sarai).mStateTransitionHeight.mValue) {
		sarai->finishMotion();
	}

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		int nextState = sarai->getNextStateOnHeight();
		if (nextState >= 0) {
			transit(sarai, nextState, nullptr);
			return;
		}

		if (sarai->getCatchTargetNum()) {
			transit(sarai, SARAI_CatchFly, nullptr);
			return;
		}

		transit(sarai, SARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80271254
 * @note Size: 0x24
 */
void StateTakeOff::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80271278
 * @note Size: 0x58
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->enableEvent(0, EB_NoInterrupt);
	enemy->setEmotionExcitement();
	enemy->startMotion(SARAIANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802712D0
 * @note Size: 0x118
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity();

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(sarai, CG_GENERALPARMS(sarai).mShakeChance.mValue, CG_GENERALPARMS(sarai).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(sarai).mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			sarai->mFlickTimer = 0.0f;

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->mHealth <= 0.0f) {
				transit(sarai, SARAI_Fall, nullptr);
				return;
			}

			if (sarai->getCatchTargetNum()) {
				transit(sarai, SARAI_CatchFly, nullptr);
				return;
			}

			transit(sarai, SARAI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802713E8
 * @note Size: 0x30
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80271418
 * @note Size: 0xB0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai             = OBJ(enemy);
	sarai->mGeneralTimer   = 0.0f;
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->mTargetCreature = nullptr;
	sarai->enableEvent(0, EB_Untargetable);

	if (randWeightFloat(1.0f) < 0.5f) {
		sarai->startMotion(SARAIANIM_Wait, nullptr);
	} else {
		sarai->startMotion(SARAIANIM_Move, nullptr);
	}
}

/**
 * @note Address: 0x802714C8
 * @note Size: 0x160
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	f32 val    = sarai->setHeightVelocity();

	FakePiki* target = sarai->getAttackableTarget();
	if (target || sarai->mGeneralTimer > CG_PROPERPARMS(sarai).mWaitTime.mValue) {
		sarai->finishMotion();
	}

	if (val > CG_PROPERPARMS(sarai).mStateTransitionHeight.mValue || sarai->mGeneralTimer > 3.0f) {
		int nextState = sarai->getNextStateOnHeight();
		if (nextState >= 0) {
			transit(sarai, nextState, nullptr);
			return;
		}
	}

	sarai->mGeneralTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		if (target) {
			sarai->mTargetCreature = target;
			transit(sarai, SARAI_Attack, nullptr);
			return;
		}

		transit(sarai, SARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80271628
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x8027162C
 * @note Size: 0x5C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai           = OBJ(enemy);
	sarai->mGeneralTimer = 0.0f;
	sarai->setRandTarget();
	sarai->mTargetCreature = nullptr;
	sarai->enableEvent(0, EB_Untargetable);
	sarai->startMotion(SARAIANIM_Move, nullptr);
}

/**
 * @note Address: 0x80271688
 * @note Size: 0x208
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);

	f32 height         = sarai->setHeightVelocity();
	Vector3f pos       = sarai->getPosition();
	Vector3f targetPos = Vector3f(sarai->mTargetPos);

	FakePiki* target = sarai->getAttackableTarget();

	if (target || sarai->mGeneralTimer > 10.0f || sqrDistanceXZ(pos, targetPos) < 625.0f) {
		sarai->mTargetVelocity = Vector3f(0.0f);
		sarai->finishMotion();
	} else {
		EnemyFunc::walkToTarget(sarai, targetPos, CG_PROPERPARMS(sarai).mNormalMovementSpeed.mValue,
		                        CG_GENERALPARMS(sarai).mTurnSpeed.mValue, CG_GENERALPARMS(sarai).mMaxTurnAngle.mValue);
	}

	if (height > CG_PROPERPARMS(sarai).mStateTransitionHeight.mValue || sarai->mGeneralTimer > 3.0f) {
		int nextState = sarai->getNextStateOnHeight();
		if (nextState >= 0) {
			transit(sarai, nextState, nullptr);
			return;
		}
	}

	sarai->mGeneralTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		if (target) {
			sarai->mTargetCreature = target;
			transit(sarai, SARAI_Attack, nullptr);
			return;
		}

		transit(sarai, SARAI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x80271890
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy)
{
}

/**
 * @note Address: 0x80271894
 * @note Size: 0x78
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai           = OBJ(enemy);
	sarai->mGeneralTimer = 0.0f;
	sarai->disableEvent(0, EB_Cullable);
	sarai->mTargetVelocity = Vector3f(0.0f);
	sarai->enableEvent(0, EB_NoInterrupt);
	sarai->enableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(SARAIANIM_Attack, nullptr);
}

/**
 * @note Address: 0x8027190C
 * @note Size: 0x614
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* sarai       = OBJ(enemy);
	Creature* target = sarai->mTargetCreature;
	if (target) {
		f32 frame = sarai->getMotionFrame();
		if (frame <= 10.0f) {
			sarai->setHeightVelocity();
			f32 val = sarai->turnToTarget(target, CG_GENERALPARMS(sarai).mTurnSpeed(), CG_GENERALPARMS(sarai).mMaxTurnAngle());

		} else if (frame <= 30.0f) {
			if (sarai->mFloorTriangle) {
				sarai->mGeneralTimer = 30.0f;
			}

			if (sarai->mGeneralTimer < 30.0f) {
				f32 targetHeight = target->getPosition().y;
				targetHeight += 17.5f;                    // f28
				f32 saraiHeight = sarai->getPosition().y; // f29

				Vector3f vel = sarai->getVelocity(); // 0x80
				f32 factor   = ((targetHeight - saraiHeight) / sys->mDeltaTime) * CG_PROPERPARMS(sarai).mHuntDescentFactor();

				f32 vertSpeed;
				if (factor < -2500.0f) {
					vertSpeed = -2500.0f;
				} else if (factor > 1000.0f) {
					vertSpeed = 1000.0f;
				} else {
					vertSpeed = factor;
				}
				vel.y = vertSpeed;
				sarai->setVelocity(vel);
				if (frame > 16.0f) {
					sarai->catchTarget();
				}
				f32 v = sarai->turnToTarget(target, CG_GENERALPARMS(sarai).mTurnSpeed(), CG_GENERALPARMS(sarai).mMaxTurnAngle());
			}
		} else {
			sarai->setHeightVelocity();
			Vector3f targetVel = sarai->getTargetVelocity();
			targetVel *= CG_PROPERPARMS(sarai).mPostHuntDecayRate();
			sarai->setTargetVelocity(targetVel);
		}
	} else {
		transit(sarai, SARAI_Move, nullptr);
	}

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			if (sarai->mTargetCreature) {
				Vector3f targetPos = sarai->mTargetCreature->getPosition(); // f28, f29, f30
				Vector3f saraiPos  = sarai->getPosition();                  // f1, f0, f2

				Vector3f sep = targetPos - saraiPos; // 0x74
				Vector3f dir = sep;
				dir.normalise();
				dir *= 25.0f;
				sep -= dir;
				sep.y = 0.0f;
				sep *= (0.06666667f / sys->mDeltaTime);
				sarai->setVelocity(sep);
				sarai->mTargetVelocity = sep;
			}
		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->disableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_4) {
			if (sarai->getCatchTargetNum() == 0) {
				transit(sarai, SARAI_Fail, nullptr);
			}

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			if (sarai->getCatchTargetNum() != 0) {
				transit(sarai, SARAI_CatchFly, nullptr);
				return;
			}

			transit(sarai, SARAI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80271F20
 * @note Size: 0x44
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->mTargetCreature = nullptr;
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x80271F64
 * @note Size: 0x58
 */
void StateFail::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Untargetable);
	enemy->disableEvent(0, EB_Cullable);
	enemy->setEmotionExcitement();
	enemy->startMotion(SARAIANIM_Fail, nullptr);
}

/**
 * @note Address: 0x80271FBC
 * @note Size: 0xD8
 */
void StateFail::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity();

	Vector3f targetVel = sarai->getTargetVelocity();
	targetVel *= CG_PROPERPARMS(sarai).mPostHuntDecayRate();
	sarai->setTargetVelocity(targetVel);

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		if (sarai->getCatchTargetNum()) {
			transit(sarai, SARAI_CatchFly, nullptr);
			return;
		}

		transit(sarai, SARAI_Move, nullptr);
	}
}

/**
 * @note Address: 0x80272094
 * @note Size: 0x30
 */
void StateFail::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x802720C4
 * @note Size: 0x64
 */
void StateCatchFly::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sarai           = OBJ(enemy);
	sarai->mGeneralTimer = 0.0f;
	sarai->setRandTarget();
	sarai->mTargetCreature = nullptr;
	sarai->enableEvent(0, EB_Untargetable);
	sarai->setEmotionExcitement();
	sarai->startMotion(SARAIANIM_CatchFly, nullptr);
}

/**
 * @note Address: 0x80272128
 * @note Size: 0x1C0
 */
void StateCatchFly::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);

	f32 height         = sarai->setHeightVelocity();
	Vector3f pos       = sarai->getPosition();
	Vector3f targetPos = Vector3f(sarai->mTargetPos);

	if (sarai->mGeneralTimer > 10.0f || sqrDistanceXZ(pos, targetPos) < 625.0f) {
		sarai->mTargetVelocity = Vector3f(0.0f);
		sarai->finishMotion();
	} else {
		EnemyFunc::walkToTarget(sarai, targetPos, CG_PROPERPARMS(sarai).mGrabMovementSpeed.mValue, CG_GENERALPARMS(sarai).mTurnSpeed.mValue,
		                        CG_GENERALPARMS(sarai).mMaxTurnAngle.mValue);
	}

	if (!sarai->getCatchTargetNum()) {
		transit(sarai, SARAI_Move, nullptr);
		return;
	}

	if (height > CG_PROPERPARMS(sarai).mStateTransitionHeight.mValue || sarai->mGeneralTimer > 3.0f) {
		int nextState = sarai->getNextStateOnHeight();
		if (nextState >= 0) {
			transit(sarai, nextState, nullptr);
			return;
		}
	}

	sarai->mGeneralTimer += sys->mDeltaTime;

	if (sarai->mCurAnim->mIsPlaying && sarai->mCurAnim->mType == KEYEVENT_END) {
		transit(sarai, SARAI_FallMeck, nullptr);
	}
}

/**
 * @note Address: 0x802722E8
 * @note Size: 0x24
 */
void StateCatchFly::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
}

/**
 * @note Address: 0x8027230C
 * @note Size: 0x70
 */
void StateFallMeck::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_NoInterrupt);
	enemy->enableEvent(0, EB_Untargetable);
	enemy->mTargetCreature = nullptr;
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(SARAIANIM_FallMeck, nullptr);
}

/**
 * @note Address: 0x8027237C
 * @note Size: 0xBC
 */
void StateFallMeck::exec(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->setHeightVelocity();

	if (sarai->mCurAnim->mIsPlaying) {
		if (sarai->mCurAnim->mType == KEYEVENT_2) {
			sarai->enableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_3) {
			sarai->fallMeckGround();

		} else if (sarai->mCurAnim->mType == KEYEVENT_4) {
			sarai->disableEvent(0, EB_NoInterrupt);

		} else if (sarai->mCurAnim->mType == KEYEVENT_END) {
			transit(sarai, SARAI_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80272438
 * @note Size: 0x54
 */
void StateFallMeck::cleanup(EnemyBase* enemy)
{
	Obj* sarai = OBJ(enemy);
	sarai->disableEvent(0, EB_NoInterrupt);
	sarai->resetAttackableTimer(0.0f);
	sarai->setEmotionCaution();
}

} // namespace Sarai
} // namespace Game
