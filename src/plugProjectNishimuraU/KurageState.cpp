#include "Game/Entities/Kurage.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/TNewkurage.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace Kurage {

/**
 * @note Address: 0x802AB5F0
 * @note Size: 0x3D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(KURAGE_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateChase);
	registerState(new StateAttack);
	registerState(new StateFall);
	registerState(new StateLand);
	registerState(new StateGround);
	registerState(new StateTakeOff);
	registerState(new StateFlyFlick);
	registerState(new StateGroundFlick);
}

/**
 * @note Address: 0x802AB9C0
 * @note Size: 0xCC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->disableEvent(0, EB_Cullable);
	kurage->disableEvent(0, EB_DamageAnimEnabled);
	kurage->mTargetVelocity = Vector3f(0.0f);

	if (kurage->isFlying()) {
		kurage->startMotion(KURAGEANIM_DeadFly, nullptr);
	} else {
		kurage->startMotion(KURAGEANIM_DeadGround, nullptr);
	}

	kurage->enableEvent(0, EB_Untargetable);
	kurage->createDeadBombEffect();
	kurage->finishEyeBodyEffect();
	PSStartEnemyFatalHitSE(kurage, 0.0f);
	kurage->mSoundObj->setKilled();
}

/**
 * @note Address: 0x802ABA8C
 * @note Size: 0x14C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	f32 frame   = kurage->getMotionFrame();
	if (frame > 65.0f) {
		s16 arg = (16.0f - 15.0f * ((frame - 65.0f) / 30.0f));
		kurage->setHireEffectLife(arg);
	}

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(kurage, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_3) {
			kurage->deathProcedure();
			kurage->finishHireEffect();
			kurage->createBodyBombEffect();
			kurage->getJAIObject()->startSound(PSSE_EN_KURAGE_HARETSU, 0);

			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, position, RUMBLEID_Both);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			kurage->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802ABBD8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802ABBDC
 * @note Size: 0x5C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = KURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->mMovePitchTimer = 3.5f;
	kurage->startMotion(KURAGEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802ABC38
 * @note Size: 0x174
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	kurage->getJAIObject()->startSound(PSSE_EN_KURAGE_SING, 0);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->mNextState = KURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->mNextState = KURAGE_Chase;
			kurage->finishMotion();
		}

	} else if (kurage->mStateTimer > 3.0f) {
		kurage->mNextState = KURAGE_Move;
		kurage->finishMotion();
	}

	StateID flyingNextState = kurage->getFlyingNextState();
	if (flyingNextState >= 0) {
		transit(kurage, flyingNextState, nullptr);
		return;
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		transit(kurage, kurage->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802ABDAC
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802ABDB0
 * @note Size: 0x74
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = KURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->setRandTarget();
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->mMovePitchTimer = 3.5f;
	kurage->startMotion(KURAGEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802ABE24
 * @note Size: 0x208
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	kurage->getJAIObject()->startSound(PSSE_EN_KURAGE_SING, 0);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->mNextState = KURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->mNextState = KURAGE_Chase;
			kurage->finishMotion();
		}

	} else {
		Vector3f position  = kurage->getPosition();
		Vector3f targetPos = Vector3f(kurage->mTargetPosition);
		if (kurage->mStateTimer > 10.0f || (sqrDistanceXZ(position, targetPos)) < 625.0f) {
			kurage->mNextState = KURAGE_Wait;
			kurage->finishMotion();

		} else {
			Parms* parms = CG_PARMS(kurage);
			EnemyFunc::walkToTarget(kurage, targetPos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
			                        parms->mGeneral.mMaxTurnAngle.mValue);
		}
	}

	StateID flyingNextState = kurage->getFlyingNextState();
	if (flyingNextState >= 0) {
		transit(kurage, flyingNextState, nullptr);
		return;
	}

	if (kurage->isFinishMotion()) {
		kurage->mTargetVelocity = Vector3f(0.0f);
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		transit(kurage, kurage->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802AC02C
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802AC030
 * @note Size: 0x6C
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mNextState = KURAGE_NULL;
	kurage->setEmotionExcitement();
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->mMovePitchTimer = 3.5f;
	kurage->startMotion(KURAGEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802AC09C
 * @note Size: 0x15C
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* kurage         = OBJ(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->mNextState = KURAGE_Attack;
			kurage->finishMotion();

		} else {
			Parms* parms = CG_PARMS(kurage);
			EnemyFunc::walkToTarget(kurage, target, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
			                        parms->mGeneral.mMaxTurnAngle.mValue);
		}

	} else {
		kurage->mNextState = KURAGE_Move;
		kurage->finishMotion();
	}

	StateID flyingNextState = kurage->getFlyingNextState();
	if (flyingNextState >= 0) {
		transit(kurage, flyingNextState, nullptr);
		return;
	}

	if (kurage->isFinishMotion()) {
		kurage->mTargetVelocity = Vector3f(0.0f);
	}

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		transit(kurage, kurage->mNextState, nullptr);
	}
}

/**
 * @note Address: 0x802AC1F8
 * @note Size: 0x24
 */
void StateChase::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802AC21C
 * @note Size: 0x80
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mNextState  = KURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->mSuckedPiki = 0;
	kurage->mIsSucking  = false;
	kurage->disableEvent(0, EB_Cullable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802AC29C
 * @note Size: 0x244
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->mHealth <= 0.0f || kurage->mStateTimer > CG_PROPERPARMS(kurage).mSuckTime.mValue
	    || kurage->mFallTimer > CG_PROPERPARMS(kurage).mShakeTime.mValue) {
		kurage->finishMotion();
	}

	f32 offset = kurage->getAttackPitchOffset();
	f32 val    = kurage->setHeightVelocity(offset, 5.0f);

	if (kurage->mIsSucking) {
		if (kurage->suckPikmin(val)) {
			kurage->finishMotion();
		}

		Vector3f suckPos = kurage->getPosition();
		suckPos.y -= val;
		kurage->updateSuckEffect(suckPos);
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			Vector3f suckPos = kurage->getPosition();
			suckPos.y -= val;
			kurage->startSuckEffect(suckPos);
			kurage->mIsSucking = true;

		} else if ((u32)kurage->mCurAnim->mType == 1) {
			if (kurage->isFinishMotion()) {
				kurage->finishSuckEffect();
				kurage->mIsSucking = false;
			}

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			StateID nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, KURAGE_Attack, nullptr);

			} else {
				transit(kurage, KURAGE_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802AC4E0
 * @note Size: 0x38
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* kurage        = OBJ(enemy);
	kurage->mIsSucking = false;
	kurage->enableEvent(0, EB_Cullable);
	kurage->setEmotionCaution();
}

/**
 * @note Address: 0x802AC518
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = KURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_Fall, nullptr);
}

/**
 * @note Address: 0x802AC580
 * @note Size: 0x180
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->isFlying()) {
		f32 timer = kurage->mStateTimer;
		kurage->setHeightVelocity(kurage->getFallPitchOffset(timer), 2.0f);

		f32 limit = timer;
		limit *= 30.0f;
		if (limit > 65.0f) {
			Vector3f velocity = kurage->getVelocity();
			velocity.y -= 100.0f;
			kurage->setVelocity(velocity);
			kurage->disableEvent(0, EB_Untargetable);
			kurage->finishMotion();
		}
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		if (kurage->mHealth <= 0.0f) {
			transit(kurage, KURAGE_Dead, nullptr);
		} else {
			transit(kurage, KURAGE_Land, nullptr);
		}
	}
}

/**
 * @note Address: 0x802AC700
 * @note Size: 0x24
 */
void StateFall::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802AC724
 * @note Size: 0xC0
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_Land, nullptr);
	kurage->createDownEffect();

	Vector3f position = kurage->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed9, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802AC7E4
 * @note Size: 0x80
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		if (kurage->mHealth <= 0.0f) {
			transit(kurage, KURAGE_Dead, nullptr);
		} else {
			transit(kurage, KURAGE_Ground, nullptr);
		}
	}
}

/**
 * @note Address: 0x802AC864
 * @note Size: 0x24
 */
void StateLand::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802AC888
 * @note Size: 0x68
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = KURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x802AC8F0
 * @note Size: 0xF0
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->isFlying()) {
		kurage->setHeightVelocity(kurage->getTakeOffPitchOffset(), 2.0f);
	}

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			kurage->enableEvent(0, EB_Untargetable);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			if (kurage->mHealth <= 0.0f) {
				transit(kurage, KURAGE_Dead, nullptr);
			} else {
				transit(kurage, KURAGE_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802AC9E0
 * @note Size: 0x24
 */
void StateTakeOff::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802ACA04
 * @note Size: 0x60
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802ACA64
 * @note Size: 0x114
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->mStuckPikminCount == 0 || kurage->mStateTimer > CG_PROPERPARMS(kurage).mGroundTime.mValue) {
		kurage->finishMotion();
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		if (kurage->mHealth <= 0.0f) {
			transit(kurage, KURAGE_Dead, nullptr);
		} else if (kurage->mStuckPikminCount != 0) {
			transit(kurage, KURAGE_GroundFlick, nullptr);
		} else {
			transit(kurage, KURAGE_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802ACB78
 * @note Size: 0x24
 */
void StateGround::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802ACB9C
 * @note Size: 0xE0
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mNextState      = KURAGE_NULL;
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_FlickFly, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TNewkurageFlick flickFx;
	flickFx.create(&fxArg);
}

/**
 * @note Address: 0x802ACC7C
 * @note Size: 0x17C
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	f32 val     = kurage->setHeightVelocity(kurage->getFlickPitchOffset(), 5.0f);
	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(kurage);
			EnemyFunc::flickStickPikmin(kurage, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			kurage->mFlickTimer = 0.0f;
			Vector3f position   = kurage->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, position, RUMBLEID_Both);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			int nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, KURAGE_Attack, nullptr);

			} else {
				transit(kurage, KURAGE_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802ACDF8
 * @note Size: 0x24
 */
void StateFlyFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802ACE1C
 * @note Size: 0xDC
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(KURAGEANIM_FlickGround, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TNewkurageFlick flickFx;
	flickFx.create(&fxArg);
}

/**
 * @note Address: 0x802ACEF8
 * @note Size: 0x14C
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, position, RUMBLEID_Both);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_3) {
			Parms* parms1 = CG_PARMS(kurage);
			EnemyFunc::flickNearbyNavi(kurage, parms1->mGeneral.mShakeRange.mValue, parms1->mGeneral.mShakeKnockback.mValue,
			                           parms1->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			Parms* parms2 = CG_PARMS(kurage);
			EnemyFunc::flickNearbyPikmin(kurage, parms2->mGeneral.mShakeRange.mValue, parms2->mGeneral.mShakeKnockback.mValue,
			                             parms2->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			Parms* parms3 = CG_PARMS(kurage);
			EnemyFunc::flickStickPikmin(kurage, parms3->mGeneral.mShakeChance.mValue, parms3->mGeneral.mShakeKnockback.mValue,
			                            parms3->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			kurage->mFlickTimer = 0.0f;

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			if (kurage->mHealth <= 0.0f) {
				transit(kurage, KURAGE_Dead, nullptr);

			} else {
				transit(kurage, KURAGE_TakeOff, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802AD044
 * @note Size: 0x24
 */
void StateGroundFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

} // namespace Kurage
} // namespace Game
