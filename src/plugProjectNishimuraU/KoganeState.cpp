#include "Game/Entities/Kogane.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TKogane.h"

namespace Game {
namespace Kogane {

/*
 * --INFO--
 * Address:	8025CD48
 * Size:	0001D4
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

/*
 * --INFO--
 * Address:	8025CF1C
 * Size:	000098
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

/*
 * --INFO--
 * Address:	8025CFB4
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);
	if (kogane->isAppear()) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025D018
 * Size:	0001A0
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
	efx::ArgScale scaleArg(kogane->getPosition(), static_cast<Parms*>(kogane->mParms)->mProperParms.mScale.mValue);
	diveEffect.create(&scaleArg);

	kogane->startBodyEffect();
	kogane->getJAIObject()->startSound(PSSE_EN_TAMAGOMUSHI_APPEAR, 0);
}

/*
 * --INFO--
 * Address:	8025D1BC
 * Size:	000138
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	kogane->enableEvent(0, EB_BitterImmune);

	efx::TKoganeDive diveEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), static_cast<Parms*>(kogane->mParms)->mProperParms.mScale.mValue);
	diveEffect.create(&scaleArg);

	kogane->finishBodyEffect();
	kogane->getJAIObject()->startSound(PSSE_EN_TAMAGOMUSHI_DIVE, 0);
}

/*
 * --INFO--
 * Address:	8025D2F8
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8025D364
 * Size:	000004
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D368
 * Size:	00006C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	Parms* parms = static_cast<Parms*>(kogane->mParms);
	kogane->resetMoveTimer(parms->mProperParms.mMinTravelTime.mValue, parms->mProperParms.mMaxTravelTime.mValue);
	kogane->setTargetPosition(nullptr);
	kogane->startMotion(KOGANEANIM_Move, nullptr);
	kogane->createFartEffect();
}

/*
 * --INFO--
 * Address:	8025D3D8
 * Size:	000138
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);

	kogane->koganeScaleUp();
	Vector3f targetPos = Vector3f(kogane->mTargetPosition);
	Parms* parms       = static_cast<Parms*>(kogane->mParms);
	EnemyFunc::walkToTarget(kogane, targetPos, parms->mGeneral.mMoveSpeed.mValue, parms->mGeneral.mTurnSpeed.mValue,
	                        parms->mGeneral.mMaxTurnAngle.mValue);

	if ((kogane->mAppearTimer > static_cast<Parms*>(kogane->mParms)->mProperParms.mMaxAppearTime.mValue)
	    || (kogane->mMoveTimer > static_cast<Parms*>(kogane->mParms)->mProperParms.mMaxTravelTime.mValue)) {
		kogane->finishMotion();
	}

	kogane->mAppearTimer += sys->mDeltaTime;
	kogane->mMoveTimer += sys->mDeltaTime;

	if (kogane->mCurAnim->mIsPlaying && (u32)kogane->mCurAnim->mType == KEYEVENT_END) {
		if (kogane->mAppearTimer > static_cast<Parms*>(kogane->mParms)->mProperParms.mMaxAppearTime.mValue) {
			transit(kogane, KOGANE_Disappear, nullptr);
		} else {
			transit(kogane, KOGANE_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8025D510
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D514
 * Size:	00005C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	Parms* parms = static_cast<Parms*>(kogane->mParms);
	kogane->resetMoveTimer(parms->mProperParms.mMinStopTime.mValue, parms->mProperParms.mMaxStopTime.mValue);

	kogane->mTargetVelocity = Vector3f(0.0f);
	kogane->startMotion(KOGANEANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	8025D570
 * Size:	0000BC
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kogane = OBJ(enemy);

	kogane->koganeScaleUp();
	if (kogane->mMoveTimer > static_cast<Parms*>(kogane->mParms)->mProperParms.mMaxStopTime.mValue) {
		kogane->finishMotion();
	}

	kogane->mAppearTimer += sys->mDeltaTime;
	kogane->mMoveTimer += sys->mDeltaTime;

	if (kogane->mCurAnim->mIsPlaying && (u32)kogane->mCurAnim->mType == KEYEVENT_END) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025D62C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D630
 * Size:	00011C
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = OBJ(enemy);

	kogane->disableEvent(0, EB_NoInterrupt);

	efx::TKoganeHit hitEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), static_cast<Parms*>(kogane->mParms)->mProperParms.mScale.mValue);
	hitEffect.create(&scaleArg);

	kogane->startMotion(KOGANEANIM_Damage, nullptr);
	kogane->createPressSENormal();
}

/*
 * --INFO--
 * Address:	8025D750
 * Size:	000130
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

/*
 * --INFO--
 * Address:	8025D888
 * Size:	000010
 */
void StatePress::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

} // namespace Kogane
} // namespace Game
