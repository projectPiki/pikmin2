#include "Game/Entities/OniKurage.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/MapMgr.h"
#include "efx/TKurage.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace OniKurage {

/**
 * @note Address: 0x802D1AE0
 * @note Size: 0x424
 */
void FSM::init(EnemyBase* enemy)
{
	create(ONIKURAGE_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateChase);
	registerState(new StateAttack);
	registerState(new StateFall);
	registerState(new StateDrop);
	registerState(new StateLand);
	registerState(new StateGround);
	registerState(new StateTakeOff);
	registerState(new StateFlyFlick);
	registerState(new StateGroundFlick);
}

/**
 * @note Address: 0x802D1F04
 * @note Size: 0xCC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->disableEvent(0, EB_Cullable);
	kurage->disableEvent(0, EB_DamageAnimEnabled);
	kurage->mTargetVelocity = Vector3f(0.0f);

	if (kurage->isFlying()) {
		kurage->startMotion(ONIKURAGEANIM_DeadFly, nullptr);
	} else {
		kurage->startMotion(ONIKURAGEANIM_DeadGround, nullptr);
	}

	kurage->enableEvent(0, EB_Untargetable);
	kurage->createDeadBombEffect();
	kurage->finishEyeBodyEffect();
	PSStartEnemyFatalHitSE(kurage, 0.0f);
	kurage->mSoundObj->setKilled();
}

/**
 * @note Address: 0x802D1FD0
 * @note Size: 0x18C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	f32 frame   = kurage->getMotionFrame();
	if (frame > 30.0f) {
		kurage->flickStickNavi(true);
	}

	if (frame > 65.0f) {
		s16 arg = (20.0f - 19.0f * ((frame - 65.0f) / 30.0f));
		kurage->setHireEffectLife(arg);
	}

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(kurage, 1.0f, 100.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_3) {
			kurage->deathProcedure();
			kurage->finishHireEffect();
			kurage->createBodyBombEffect();
			kurage->getJAIObject()->startSound(PSSE_EN_ONIKURAGE_HARETSU, 0);

			Vector3f position = kurage->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed10, position, RUMBLEID_Both);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			kurage->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x802D215C
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802D2160
 * @note Size: 0x5C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = ONIKURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->mMovePitchTimer = 3.5f;
	kurage->startMotion(ONIKURAGEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802D21BC
 * @note Size: 0x148
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kurage         = OBJ(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->mNextState = ONIKURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->mNextState = ONIKURAGE_Chase;
			kurage->finishMotion();
		}

	} else if (kurage->mStateTimer > 3.0f) {
		kurage->mNextState = ONIKURAGE_Move;
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
 * @note Address: 0x802D2304
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802D2308
 * @note Size: 0x74
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = ONIKURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->setRandTarget();
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->mMovePitchTimer = 3.5f;
	kurage->startMotion(ONIKURAGEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802D237C
 * @note Size: 0x1DC
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kurage         = OBJ(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->mNextState = ONIKURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->mNextState = ONIKURAGE_Chase;
			kurage->finishMotion();
		}

	} else {
		Vector3f position  = kurage->getPosition();
		Vector3f targetPos = Vector3f(kurage->mTargetPosition);
		if (kurage->mStateTimer > 10.0f || (sqrDistanceXZ(position, targetPos)) < 625.0f) {
			kurage->mNextState = ONIKURAGE_Wait;
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
 * @note Address: 0x802D2558
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802D255C
 * @note Size: 0x6C
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mNextState = ONIKURAGE_NULL;
	kurage->setEmotionExcitement();
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->mMovePitchTimer = 3.5f;
	kurage->startMotion(ONIKURAGEANIM_Move, nullptr);
}

/**
 * @note Address: 0x802D25C8
 * @note Size: 0x15C
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* kurage         = OBJ(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->mNextState = ONIKURAGE_Attack;
			kurage->finishMotion();

		} else {
			Parms* parms = CG_PARMS(kurage);
			EnemyFunc::walkToTarget(kurage, target, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
			                        parms->mGeneral.mMaxTurnAngle.mValue);
		}

	} else {
		kurage->mNextState = ONIKURAGE_Move;
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
 * @note Address: 0x802D2724
 * @note Size: 0x24
 */
void StateChase::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D2748
 * @note Size: 0x80
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mNextState  = ONIKURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->mSuckedPiki = 0;
	kurage->mIsSucking  = false;
	kurage->disableEvent(0, EB_Cullable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802D27C8
 * @note Size: 0x320
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if ((kurage->mHealth <= 0.0f || kurage->isFinishNaviSuck())
	    && (kurage->isNaviSucked() || kurage->mStateTimer > CG_PROPERPARMS(kurage).mSuckTime.mValue
	        || kurage->mFallTimer > CG_PROPERPARMS(kurage).mShakeTime.mValue)) {
		kurage->finishMotion();
	}

	f32 offset = kurage->getAttackPitchOffset();
	f32 val    = kurage->setHeightVelocity(offset, 0.0f);

	if (kurage->mIsSucking) {
		if (kurage->suckPikmin(val)) {
			if (kurage->isFinishNaviSuck()) {
				kurage->finishMotion();
			}
		} else if (!kurage->isFinishMotion()) {
			kurage->suckNavi(val);
		}

		Vector3f suckPos = kurage->getPosition();
		suckPos.y -= val;
		kurage->updateSuckEffect(suckPos);
		kurage->updateCollPartOffset();
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			Vector3f suckPos = kurage->getPosition();
			suckPos.y -= val;
			kurage->startSuckEffect(suckPos);
			kurage->mIsSucking = true;
			kurage->enableEvent(0, EB_NoInterrupt);

		} else if ((u32)kurage->mCurAnim->mType == 1) {
			if (kurage->isFinishMotion()) {
				kurage->finishSuckEffect();
				kurage->mIsSucking = false;
				kurage->disableEvent(0, EB_NoInterrupt);
			}

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			if (kurage->mHealth <= 0.0f) {
				transit(kurage, ONIKURAGE_Dead, nullptr);
				return;
			}

			if (kurage->isNaviSucked()) {
				transit(kurage, ONIKURAGE_Drop, nullptr);
				return;
			}

			StateID nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, ONIKURAGE_Attack, nullptr);

			} else {
				transit(kurage, ONIKURAGE_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D2AE8
 * @note Size: 0x44
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* kurage        = OBJ(enemy);
	kurage->mIsSucking = false;
	kurage->disableEvent(0, EB_NoInterrupt);
	kurage->enableEvent(0, EB_Cullable);
	kurage->setEmotionCaution();
}

/**
 * @note Address: 0x802D2B2C
 * @note Size: 0x68
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = ONIKURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_Fall, nullptr);
}

/**
 * @note Address: 0x802D2B94
 * @note Size: 0x180
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->isFlying()) {
		f32 timer = kurage->mStateTimer;
		kurage->setHeightVelocity(kurage->getFallPitchOffset(timer), 0.0f);

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
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else {
			transit(kurage, ONIKURAGE_Land, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D2D14
 * @note Size: 0x24
 */
void StateFall::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D2D38
 * @note Size: 0x94
 */
void StateDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = ONIKURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_Fall, nullptr);
	kurage->getJAIObject()->startSound(PSSE_EN_ONIKURAGE_BOWEL, 0);
}

/**
 * @note Address: 0x802D2DCC
 * @note Size: 0x164
 */
void StateDrop::exec(EnemyBase* enemy)
{
	Obj* kurage       = OBJ(enemy);
	Vector3f position = kurage->getPosition();
	Vector3f velocity = kurage->getVelocity();

	if (position.y - mapMgr->getMinY(position) < 25.0f || velocity.y > 0.0f || kurage->mStateTimer > 3.0f) {
		kurage->finishMotion();
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		if (kurage->mHealth <= 0.0f) {
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else {
			transit(kurage, ONIKURAGE_Land, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D2F30
 * @note Size: 0x24
 */
void StateDrop::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D2F54
 * @note Size: 0xC0
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_Land, nullptr);
	kurage->createDownEffect();

	Vector3f position = kurage->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed9, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802D3014
 * @note Size: 0x80
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		if (kurage->mHealth <= 0.0f) {
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else {
			transit(kurage, ONIKURAGE_Ground, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D3094
 * @note Size: 0x24
 */
void StateLand::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D30B8
 * @note Size: 0x68
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mNextState  = ONIKURAGE_NULL;
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_TakeOff, nullptr);
}

/**
 * @note Address: 0x802D3120
 * @note Size: 0xF0
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->isFlying()) {
		kurage->setHeightVelocity(kurage->getTakeOffPitchOffset(), 0.0f);
	}

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			kurage->enableEvent(0, EB_Untargetable);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			if (kurage->mHealth <= 0.0f) {
				transit(kurage, ONIKURAGE_Dead, nullptr);
			} else {
				transit(kurage, ONIKURAGE_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D3210
 * @note Size: 0x24
 */
void StateTakeOff::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D3234
 * @note Size: 0x60
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802D3294
 * @note Size: 0x138
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->mHealth <= 0.0f || kurage->mStuckPikminCount == 0 || kurage->mStateTimer > CG_PROPERPARMS(kurage).mGroundTime.mValue) {
		kurage->finishMotion();
	}

	kurage->mStateTimer += sys->mDeltaTime;

	if (kurage->mCurAnim->mIsPlaying && (u32)kurage->mCurAnim->mType == KEYEVENT_END) {
		if (kurage->mHealth <= 0.0f) {
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else if (kurage->mStuckPikminCount != 0 || kurage->isNaviSucked()) {
			transit(kurage, ONIKURAGE_GroundFlick, nullptr);
		} else {
			transit(kurage, ONIKURAGE_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D33CC
 * @note Size: 0x24
 */
void StateGround::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D33F0
 * @note Size: 0xE0
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = OBJ(enemy);
	kurage->enableEvent(0, EB_Untargetable);
	kurage->mNextState      = ONIKURAGE_NULL;
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_FlickFly, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TKurageFlick flickFx;
	flickFx.create(&fxArg);
}

/**
 * @note Address: 0x802D34D0
 * @note Size: 0x17C
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	f32 val     = kurage->setHeightVelocity(kurage->getFlickPitchOffset(), 0.0f);
	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(kurage);
			EnemyFunc::flickStickPikmin(kurage, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			kurage->mFlickTimer = 0.0f;
			Vector3f position   = kurage->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed12, position, RUMBLEID_Both);

		} else if ((u32)kurage->mCurAnim->mType == KEYEVENT_END) {
			int nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, ONIKURAGE_Attack, nullptr);

			} else {
				transit(kurage, ONIKURAGE_Wait, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D364C
 * @note Size: 0x24
 */
void StateFlyFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802D3670
 * @note Size: 0xDC
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage         = OBJ(enemy);
	kurage->mStateTimer = 0.0f;
	kurage->disableEvent(0, EB_Untargetable);
	kurage->mTargetVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(ONIKURAGEANIM_FlickGround, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TKurageFlick flickFx;
	flickFx.create(&fxArg);
}

/**
 * @note Address: 0x802D374C
 * @note Size: 0x18C
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = OBJ(enemy);
	if (kurage->getMotionFrame() > 25.0f) {
		kurage->flickStickNavi(false);
	}

	if (kurage->mCurAnim->mIsPlaying) {
		if ((u32)kurage->mCurAnim->mType == KEYEVENT_2) {
			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed12, position, RUMBLEID_Both);

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
				transit(kurage, ONIKURAGE_Dead, nullptr);

			} else {
				transit(kurage, ONIKURAGE_TakeOff, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802D38D8
 * @note Size: 0x24
 */
void StateGroundFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

} // namespace OniKurage
} // namespace Game
