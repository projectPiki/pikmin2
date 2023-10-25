#include "Game/Entities/BigFoot.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace BigFoot {

/*
 * --INFO--
 * Address:	802C62E8
 * Size:	000224
 */
void FSM::init(EnemyBase* enemy)
{
	create(BIGFOOT_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
}

/*
 * --INFO--
 * Address:	802C650C
 * Size:	0000CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->forceFinishIKMotion();
	bigfoot->startDeadEffect();
	bigfoot->deathProcedure();
	bigfoot->disableEvent(0, EB_Cullable);

	bigfoot->mTargetVelocity = 0.0f;
	bigfoot->setEmotionCaution();
	bigfoot->startMotion(BIGFOOTANIM_Dead, nullptr);

	Vector3f position = bigfoot->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(10, position, 2);
}

/*
 * --INFO--
 * Address:	802C65D8
 * Size:	000094
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->updateDeadFurEffect();

	if (bigfoot->mCurAnim->mIsPlaying) {
		if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_2) {
			bigfoot->throwupItem();
			bigfoot->createItemAndEnemy();
		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_3) {
			bigfoot->_2DC = 1;
		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
			bigfoot->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802C666C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C6670
 * Size:	000084
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot        = OBJ(enemy);
	bigfoot->mNextState = BIGFOOT_NULL;
	bigfoot->enableEvent(0, EB_BitterImmune);
	bigfoot->disableEvent(0, EB_Animating);
	bigfoot->enableEvent(0, EB_ModelHidden);
	bigfoot->mTargetCreature = nullptr;

	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startMotion(BIGFOOTANIM_Landing, nullptr);
	bigfoot->stopMotion();
}

/*
 * --INFO--
 * Address:	802C66F4
 * Size:	0000B8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bool isTarget;
	f32 detectRadius = static_cast<Parms*>(bigfoot->mParms)->mGeneral.mPrivateRadius.mValue;
	if (EnemyFunc::isThereOlimar(bigfoot, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(bigfoot, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(bigfoot, BIGFOOT_Land, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C67AC
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C67B0
 * Size:	0000B4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot          = OBJ(enemy);
	bigfoot->mNextState   = BIGFOOT_NULL;
	bigfoot->mShadowScale = 0.001f;

	bigfoot->enableEvent(0, EB_BitterImmune);
	bigfoot->disableEvent(0, EB_Cullable);
	bigfoot->enableEvent(0, EB_Animating);
	bigfoot->disableEvent(0, EB_ModelHidden);

	bigfoot->setEmotionExcitement();
	bigfoot->mTargetCreature = nullptr;

	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startMotion(BIGFOOTANIM_Landing, nullptr);

	shadowMgr->addJointShadow(bigfoot);
	shadowMgr->setForceVisible(bigfoot, true);
}

/*
 * --INFO--
 * Address:	802C6864
 * Size:	000178
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->addShadowScale();

	if (bigfoot->mCurAnim->mIsPlaying) {
		if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_2) {
			bigfoot->disableEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				bigfoot->createOnGroundEffect(i, bigfoot->mWaterBox);
			}

			Vector3f position = bigfoot->getPosition();
			cameraMgr->startVibration(15, position, 2);
			rumbleMgr->startRumble(15, position, 2);

		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
			if (bigfoot->mHealth <= 0.0f) {
				transit(bigfoot, BIGFOOT_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(bigfoot, false)) {
				transit(bigfoot, BIGFOOT_Flick, nullptr);
			} else {
				transit(bigfoot, BIGFOOT_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802C69DC
 * Size:	00005C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->startProgramedIK();
	bigfoot->setBossAppearBGM();
	bigfoot->enableEvent(0, EB_Cullable);
	bigfoot->mShadowScale = 1.0f;
	shadowMgr->setForceVisible(bigfoot, false);
}

/*
 * --INFO--
 * Address:	802C6A38
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot         = OBJ(enemy);
	bigfoot->mNextState  = BIGFOOT_NULL;
	bigfoot->mStateTimer = 0.0f;
	bigfoot->resetFlickWalkTimeMax();
	bigfoot->setIKParameter();
	bigfoot->mTargetCreature = nullptr;
	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startMotion(BIGFOOTANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802C6AA8
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->mStateTimer += sys->mDeltaTime;

	if (bigfoot->mHealth <= 0.0f) {
		bigfoot->mNextState = BIGFOOT_Dead;
		bigfoot->finishMotion();
	} else if (EnemyFunc::isStartFlick(bigfoot, false)) {
		bigfoot->mNextState = BIGFOOT_Flick;
		bigfoot->finishMotion();
	} else if (bigfoot->mStateTimer > 5.0f) {
		bigfoot->mNextState = BIGFOOT_Walk;
		bigfoot->finishMotion();
	}

	if (bigfoot->mCurAnim->mIsPlaying && (u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
		transit(bigfoot, bigfoot->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C6B9C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C6BA0
 * Size:	00006C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot             = OBJ(enemy);
	bigfoot->mNextState      = BIGFOOT_NULL;
	bigfoot->mStateTimer     = 0.0f;
	bigfoot->mTargetCreature = nullptr;
	bigfoot->mTargetVelocity = Vector3f(0.0f);

	bigfoot->startMotion(BIGFOOTANIM_Flick, nullptr);
	bigfoot->startBlendMotion();
	bigfoot->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802C6C0C
 * Size:	0000C0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	if (bigfoot->mCurAnim->mIsPlaying) {
		if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(bigfoot->mParms);
			EnemyFunc::flickStickPikmin(bigfoot, parms->mGeneral.mShakeChance.mValue, parms->mGeneral.mShakeKnockback.mValue,
			                            parms->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
			bigfoot->mFlickTimer = 0.0f;
		} else if ((u32)bigfoot->mCurAnim->mType == KEYEVENT_END) {
			if (bigfoot->mHealth <= 0.0f) {
				transit(bigfoot, BIGFOOT_Dead, nullptr);
			} else {
				transit(bigfoot, BIGFOOT_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802C6CCC
 * Size:	000048
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->finishBlendMotion();
	bigfoot->setFlickWalkTimeMax();
	bigfoot->mIsEnraged = true;
	bigfoot->setIKParameter();
}

/*
 * --INFO--
 * Address:	802C6D14
 * Size:	000070
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot             = OBJ(enemy);
	bigfoot->mNextState      = BIGFOOT_NULL;
	bigfoot->mStateTimer     = 0.0f;
	bigfoot->mTargetCreature = nullptr;
	bigfoot->mTargetVelocity = Vector3f(0.0f);
	bigfoot->startIKMotion();
	bigfoot->getTargetPosition();

	if (bigfoot->mIsEnraged) {
		bigfoot->startBossAttackLoopBGM();
	}
}

/*
 * --INFO--
 * Address:	802C6D84
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	bigfoot->getTargetPosition();
	bigfoot->mStateTimer += sys->mDeltaTime;
	if (bigfoot->mHealth <= 0.0f) {
		transit(bigfoot, BIGFOOT_Dead, nullptr);
	} else {
		if (EnemyFunc::isStartFlick(bigfoot, false)) {
			bigfoot->mNextState = BIGFOOT_Flick;
			bigfoot->finishIKMotion();
		} else if (bigfoot->mStateTimer > bigfoot->mFlickWalkTimeMax) {
			bigfoot->mNextState = BIGFOOT_Wait;
			bigfoot->finishIKMotion();
		}

		if (bigfoot->isFinishIKMotion()) {
			transit(bigfoot, bigfoot->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802C6E84
 * Size:	000038
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* bigfoot = OBJ(enemy);
	if (bigfoot->mIsEnraged) {
		bigfoot->mIsEnraged = false;
		bigfoot->finishBossAttackLoopBGM();
	}
}

} // namespace BigFoot
} // namespace Game
