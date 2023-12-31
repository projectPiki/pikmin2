#include "Game/Entities/Kogane.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TKogane.h"

namespace Game {
namespace Kogane {

/**
 * @note Address: 0x8025CD48
 * @note Size: 0x1D4
 */
void FSM::init(EnemyBase* enemy)
{
	create(KOGANE_Count);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateMove);
	registerState(new StateWait);
	registerState(new StatePress);
}

/**
 * @note Address: 0x8025CF1C
 * @note Size: 0x98
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);
	kogane->setAtari(false);
	kogane->enableEvent(0, EB_BitterImmune);
	kogane->hardConstraintOn();
	kogane->disableEvent(0, EB_Animating);
	kogane->enableEvent(0, EB_ModelHidden);

	kogane->mTargetVelocity = Vector3f(0.0f);
	kogane->startMotion(KOGANEANIM_Move, nullptr);
	kogane->stopMotion();
}

/**
 * @note Address: 0x8025CFB4
 * @note Size: 0x64
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);
	if (kogane->isAppear()) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/**
 * @note Address: 0x8025D018
 * @note Size: 0x1A0
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);
	kogane->setAtari(true);

	kogane->disableEvent(0, EB_BitterImmune);
	kogane->enableEvent(0, EB_NoInterrupt);
	kogane->disableEvent(0, EB_Cullable);
	kogane->hardConstraintOff();
	kogane->enableEvent(0, EB_Animating);
	kogane->disableEvent(0, EB_ModelHidden);

	kogane->setEmotionExcitement();
	kogane->startMotion();

	efx::TKoganeDive diveEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), CG_PROPERPARMS(kogane).mScale.mValue);
	diveEffect.create(&scaleArg);

	kogane->startBodyEffect();
	kogane->getJAIObject()->startSound(PSSE_EN_TAMAGOMUSHI_APPEAR, 0);
}

/**
 * @note Address: 0x8025D1BC
 * @note Size: 0x138
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	kogane->enableEvent(0, EB_BitterImmune);

	efx::TKoganeDive diveEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), CG_PROPERPARMS(kogane).mScale.mValue);
	diveEffect.create(&scaleArg);

	kogane->finishBodyEffect();
	kogane->getJAIObject()->startSound(PSSE_EN_TAMAGOMUSHI_DIVE, 0);
}

/**
 * @note Address: 0x8025D2F8
 * @note Size: 0x6C
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);

	if (kogane->koganeScaleDown()) {
		if (kogane->transitDisappear()) {
			kogane->mInPiklopedia = false;
			kogane->kill(nullptr);
		} else {
			kogane->init(nullptr);
		}
	}
}

/**
 * @note Address: 0x8025D364
 * @note Size: 0x4
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025D368
 * @note Size: 0x6C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	Parms* parms = CG_PARMS(kogane);
	kogane->resetMoveTimer(parms->mProperParms.mMinTravelTime.mValue, parms->mProperParms.mMaxTravelTime.mValue);
	kogane->setTargetPosition(nullptr);
	kogane->startMotion(KOGANEANIM_Move, nullptr);
	kogane->createFartEffect();
}

/**
 * @note Address: 0x8025D3D8
 * @note Size: 0x138
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);

	kogane->koganeScaleUp();
	Vector3f targetPos = Vector3f(kogane->mTargetPosition);
	Parms* parms       = CG_PARMS(kogane);
	EnemyFunc::walkToTarget(kogane, targetPos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
	                        parms->mGeneral.mMaxTurnAngle.mValue);

	if ((kogane->mAppearTimer > CG_PROPERPARMS(kogane).mMaxAppearTime.mValue)
	    || (kogane->mMoveTimer > CG_PROPERPARMS(kogane).mMaxTravelTime.mValue)) {
		kogane->finishMotion();
	}

	kogane->mAppearTimer += sys->mDeltaTime;
	kogane->mMoveTimer += sys->mDeltaTime;

	if (kogane->mCurAnim->mIsPlaying && (u32)kogane->mCurAnim->mType == KEYEVENT_END) {
		if (kogane->mAppearTimer > CG_PROPERPARMS(kogane).mMaxAppearTime.mValue) {
			transit(kogane, KOGANE_Disappear, nullptr);
		} else {
			transit(kogane, KOGANE_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025D510
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025D514
 * @note Size: 0x5C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	Parms* parms = CG_PARMS(kogane);
	kogane->resetMoveTimer(parms->mProperParms.mMinStopTime.mValue, parms->mProperParms.mMaxStopTime.mValue);

	kogane->mTargetVelocity = Vector3f(0.0f);
	kogane->startMotion(KOGANEANIM_Wait, nullptr);
}

/**
 * @note Address: 0x8025D570
 * @note Size: 0xBC
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);

	kogane->koganeScaleUp();
	if (kogane->mMoveTimer > CG_PROPERPARMS(kogane).mMaxStopTime.mValue) {
		kogane->finishMotion();
	}

	kogane->mAppearTimer += sys->mDeltaTime;
	kogane->mMoveTimer += sys->mDeltaTime;

	if (kogane->mCurAnim->mIsPlaying && (u32)kogane->mCurAnim->mType == KEYEVENT_END) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/**
 * @note Address: 0x8025D62C
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025D630
 * @note Size: 0x11C
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	kogane->disableEvent(0, EB_NoInterrupt);

	efx::TKoganeHit hitEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), CG_PROPERPARMS(kogane).mScale.mValue);
	hitEffect.create(&scaleArg);

	kogane->startMotion(KOGANEANIM_Damage, nullptr);
	kogane->createPressSENormal();
}

/**
 * @note Address: 0x8025D750
 * @note Size: 0x130
 */
void StatePress::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);

	kogane->koganeScaleUp();
	kogane->mAppearTimer += sys->mDeltaTime;

	if (kogane->mCurAnim->mIsPlaying) {
		if ((u32)kogane->mCurAnim->mType == KEYEVENT_2) {
			kogane->enableEvent(0, EB_NoInterrupt);
			kogane->createPressSESpecial();
		} else if ((u32)kogane->mCurAnim->mType == KEYEVENT_3) {
			kogane->createItem();
			kogane->setZukanVisible(false);
		} else if ((u32)kogane->mCurAnim->mType == KEYEVENT_4) {
			kogane->disableEvent(0, EB_NoInterrupt);
		} else if ((u32)kogane->mCurAnim->mType == KEYEVENT_END) {
			if (kogane->mAppearTimer > 12800.0f) {
				transit(kogane, KOGANE_Disappear, nullptr);
			} else {
				transit(kogane, KOGANE_Move, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x8025D888
 * @note Size: 0x10
 */
void StatePress::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

} // namespace Kogane
} // namespace Game
