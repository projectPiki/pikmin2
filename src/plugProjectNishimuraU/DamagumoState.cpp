#include "Game/Entities/Damagumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Damagumo {

/*
 * --INFO--
 * Address:	802A43FC
 * Size:	000224
 */
void FSM::init(EnemyBase* enemy)
{
	create(DAMAGUMO_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
}

/*
 * --INFO--
 * Address:	802A4620
 * Size:	0000CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->forceFinishIKMotion();
	damagumo->startDeadEffect();
	damagumo->deathProcedure();
	damagumo->disableEvent(0, EB_Cullable);

	damagumo->mTargetVelocity = 0.0f;
	damagumo->setEmotionCaution();
	damagumo->startMotion(DAMAGUMOANIM_Dead, nullptr);

	Vector3f position = damagumo->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(10, position, 2);
}

/*
 * --INFO--
 * Address:	802A46EC
 * Size:	00008C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	if (damagumo->mCurAnim->mIsPlaying) {
		if ((u32)damagumo->mCurAnim->mType == KEYEVENT_2) {
			damagumo->throwupItem();
			damagumo->createItemAndEnemy();
		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_3) {
			damagumo->_2DC = 1;
		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
			damagumo->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802A4778
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802A477C
 * Size:	000084
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo        = OBJ(enemy);
	damagumo->mNextState = DAMAGUMO_NULL;
	damagumo->enableEvent(0, EB_BitterImmune);
	damagumo->disableEvent(0, EB_Animating);
	damagumo->enableEvent(0, EB_ModelHidden);
	damagumo->mTargetCreature = nullptr;

	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startMotion(DAMAGUMOANIM_Landing, nullptr);
	damagumo->stopMotion();
}

/*
 * --INFO--
 * Address:	802A4800
 * Size:	0000B8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	bool isTarget;
	f32 detectRadius = static_cast<Parms*>(damagumo->mParms)->mGeneral.mPrivateRadius.mValue;
	if (EnemyFunc::isThereOlimar(damagumo, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(damagumo, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(damagumo, DAMAGUMO_Land, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802A48B8
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802A48BC
 * Size:	0000B4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo          = OBJ(enemy);
	damagumo->mNextState   = DAMAGUMO_NULL;
	damagumo->mShadowScale = 0.001f;

	damagumo->enableEvent(0, EB_BitterImmune);
	damagumo->disableEvent(0, EB_Cullable);
	damagumo->enableEvent(0, EB_Animating);
	damagumo->disableEvent(0, EB_ModelHidden);

	damagumo->setEmotionExcitement();
	damagumo->mTargetCreature = nullptr;

	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startMotion(DAMAGUMOANIM_Landing, nullptr);

	shadowMgr->addJointShadow(damagumo);
	shadowMgr->setForceVisible(damagumo, true);
}

/*
 * --INFO--
 * Address:	802A4970
 * Size:	0001E8
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->addShadowScale();

	if (damagumo->mCurAnim->mIsPlaying) {
		if ((u32)damagumo->mCurAnim->mType == KEYEVENT_2) {
			damagumo->disableEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				damagumo->createOnGroundEffect(i, damagumo->mWaterBox);
			}

			Vector3f position = damagumo->getPosition();
			cameraMgr->startVibration(15, position, 2);
			rumbleMgr->startRumble(15, position, 2);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_3) {
			damagumo->createOnGroundEffect(3, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_4) {
			damagumo->createOnGroundEffect(0, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_5) {
			damagumo->createOnGroundEffect(1, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_6) {
			damagumo->createOnGroundEffect(2, damagumo->mWaterBox);

		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
			if (damagumo->mHealth <= 0.0f) {
				transit(damagumo, DAMAGUMO_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(damagumo, false)) {
				transit(damagumo, DAMAGUMO_Flick, nullptr);
			} else {
				transit(damagumo, DAMAGUMO_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802A4B58
 * Size:	00005C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->startProgramedIK();
	damagumo->setBossAppearBGM();
	damagumo->enableEvent(0, EB_Cullable);
	damagumo->mShadowScale = 1.0f;
	shadowMgr->setForceVisible(damagumo, false);
}

/*
 * --INFO--
 * Address:	802A4BB4
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo             = OBJ(enemy);
	damagumo->mNextState      = DAMAGUMO_NULL;
	damagumo->mStateTimer     = 0.0f;
	damagumo->mStateDuration  = 1.75f + randWeightFloat(1.75f);
	damagumo->mTargetCreature = nullptr;
	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startMotion(DAMAGUMOANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802A4C4C
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->mStateTimer += sys->mDeltaTime;

	if (damagumo->mHealth <= 0.0f) {
		damagumo->mNextState = DAMAGUMO_Dead;
		damagumo->finishMotion();
	} else if (EnemyFunc::isStartFlick(damagumo, false)) {
		damagumo->mNextState = DAMAGUMO_Flick;
		damagumo->finishMotion();
	} else if (damagumo->mStateTimer > damagumo->mStateDuration) {
		damagumo->mNextState = DAMAGUMO_Walk;
		damagumo->finishMotion();
	}

	if (damagumo->mCurAnim->mIsPlaying && (u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
		transit(damagumo, damagumo->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802A4D40
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802A4D44
 * Size:	000064
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo             = OBJ(enemy);
	damagumo->mNextState      = DAMAGUMO_NULL;
	damagumo->mStateTimer     = 0.0f;
	damagumo->mTargetCreature = nullptr;
	damagumo->mTargetVelocity = Vector3f(0.0f);

	damagumo->startMotion(DAMAGUMOANIM_Flick, nullptr);
	damagumo->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802A4DA8
 * Size:	0000C8
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	if (damagumo->mCurAnim->mIsPlaying) {
		if ((u32)damagumo->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(damagumo->mParms);
			EnemyFunc::flickStickPikmin(damagumo, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			damagumo->mFlickTimer = 0.0f;
			damagumo->startBossFlickBGM();
		} else if ((u32)damagumo->mCurAnim->mType == KEYEVENT_END) {
			if (damagumo->mHealth <= 0.0f) {
				transit(damagumo, DAMAGUMO_Dead, nullptr);
			} else {
				transit(damagumo, DAMAGUMO_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802A4E70
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802A4E94
 * Size:	000098
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo             = OBJ(enemy);
	damagumo->mNextState      = DAMAGUMO_NULL;
	damagumo->mStateTimer     = 0.0f;
	damagumo->mStateDuration  = 3.25f + randWeightFloat(3.25f);
	damagumo->mTargetCreature = nullptr;
	damagumo->mTargetVelocity = Vector3f(0.0f);
	damagumo->startIKMotion();
	damagumo->getTargetPosition();
}

/*
 * --INFO--
 * Address:	802A4F2C
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* damagumo = OBJ(enemy);
	damagumo->getTargetPosition();
	damagumo->mStateTimer += sys->mDeltaTime;

	if (EnemyFunc::isStartFlick(damagumo, false)) {
		damagumo->mNextState = DAMAGUMO_Flick;
		damagumo->finishIKMotion();
	} else if (damagumo->mStateTimer > damagumo->mStateDuration) {
		damagumo->mNextState = DAMAGUMO_Wait;
		damagumo->finishIKMotion();
	}

	if (damagumo->mHealth <= 0.0f) {
		transit(damagumo, DAMAGUMO_Dead, nullptr);
	} else if (damagumo->isFinishIKMotion()) {
		transit(damagumo, damagumo->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802A502C
 * Size:	000004
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

} // namespace Damagumo
} // namespace Game
