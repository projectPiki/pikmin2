#include "Game/Entities/Rock.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Rock {

/*
 * --INFO--
 * Address:	80261D8C
 * Size:	000228
 */
void FSM::init(EnemyBase* enemy)
{
	create(ROCK_Count);
	registerState(new StateWait);
	registerState(new StateAppear);
	registerState(new StateDropWait);
	registerState(new StateFall);
	registerState(new StateMove);
	registerState(new StateDead);
}

/*
 * --INFO--
 * Address:	80261FB4
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	rock->setAtari(false);
	rock->enableEvent(0, EB_Untargetable);
	rock->hardConstraintOn();
	rock->disableEvent(0, EB_Animating);
	rock->enableEvent(0, EB_ModelHidden);

	rock->mTargetVelocity = Vector3f(0.0f);
	rock->startMotion(ROCKANIM_Run, nullptr);
	rock->stopMotion();
}

/*
 * --INFO--
 * Address:	8026204C
 * Size:	000108
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	if (rock->mExistDuration != 0.0f) {
		rock->mTimer += sys->mDeltaTime;
		if (rock->mTimer > 1.5f) {
			transit(rock, ROCK_Appear, nullptr);
		}
	} else {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(rock->mParms)->mGeneral.mSightRadius.mValue;
		if (EnemyFunc::isThereOlimar(rock, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(rock, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			transit(rock, ROCK_Appear, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80262154
 * Size:	000048
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->hardConstraintOff();
	rock->enableEvent(0, EB_Animating);
	rock->disableEvent(0, EB_ModelHidden);
}

/*
 * --INFO--
 * Address:	8026219C
 * Size:	000104
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock         = OBJ(enemy);
	Vector3f position = rock->getPosition();
	position.y += rock->mFallOffset;
	rock->onSetPosition(position);

	rock->enableEvent(0, EB_ModelHidden);
	rock->disableEvent(0, EB_Cullable);
	rock->disableEvent(0, EB_14);

	rock->mTargetVelocity = Vector3f(0.0f);
	rock->startMotion(ROCKANIM_Run, nullptr);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);

	rock->getJAIObject()->startSound(PSSE_EN_ROCK_FALL, 0);
}

/*
 * --INFO--
 * Address:	802622A0
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	if (rock->fallRockScaleUp()) {
		transit(rock, ROCK_Fall, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80262304
 * Size:	00005C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->setAtari(true);
	rock->disableEvent(0, EB_Untargetable);
	rock->disableEvent(0, EB_ModelHidden);
}

/*
 * --INFO--
 * Address:	80262360
 * Size:	00002C
 */
void StateDropWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	rock->startMotion(ROCKANIM_Run, nullptr);
}

/*
 * --INFO--
 * Address:	8026238C
 * Size:	000034
 */
void StateDropWait::exec(EnemyBase* enemy) { transit(enemy, ROCK_Fall, nullptr); }

/*
 * --INFO--
 * Address:	802623C0
 * Size:	000058
 */
void StateDropWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->disableEvent(0, EB_Cullable);
	rock->disableEvent(0, EB_14);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);
}

/*
 * --INFO--
 * Address:	80262418
 * Size:	000060
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	Vector3f velocity(0.0f, -rock->mFallSpeed, 0.0f);
	rock->setVelocity(velocity);
	rock->startFallEffect();
}

/*
 * --INFO--
 * Address:	80262478
 * Size:	000068
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->mBounceTriangle) {
		transit(enemy, ROCK_Dead, nullptr);
	} else if (enemy->isEvent(0, EB_Colliding)) {
		transit(enemy, ROCK_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802624E0
 * Size:	000094
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	shadowMgr->setForceVisible(rock, false);
	rock->finishFallEffect();

	Vector3f position = rock->getPosition();
	cameraMgr->startVibration(27, position, 2);
	rumbleMgr->startRumble(14, position, 2);
}

/*
 * --INFO--
 * Address:	80262574
 * Size:	00007C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	rock->disableEvent(0, EB_Cullable);
	rock->disableEvent(0, EB_14);
	rock->startMotion(ROCKANIM_Run, nullptr);
	rock->mTimer = 0.0f;

	if (rock->mWaterBox) {
		rock->startRollingWaterEffect();
	} else {
		rock->startRollingGroundEffect();
	}
}

/*
 * --INFO--
 * Address:	802625F0
 * Size:	0000D0
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->updateMoveVelocity();
	rock->moveRockScaleUp();
	rock->mTimer += sys->mDeltaTime;
	rock->updateWaterEffectPosition();
	rock->getJAIObject()->startSound(PSSE_EN_ROCK_ROLL, 0);

	if (rock->mHealth <= 0.0f || rock->mTimer > 15.0f) {
		transit(rock, ROCK_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802626C0
 * Size:	00007C
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->finishRollingGroundEffect();
	rock->finishRollingWaterEffect();

	Vector3f position = rock->getPosition();
	rumbleMgr->startRumble(14, position, 2);
}

/*
 * --INFO--
 * Address:	8026273C
 * Size:	000088
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock             = OBJ(enemy);
	rock->mTargetVelocity = Vector3f(0.0f);
	rock->startMotion(ROCKANIM_Dead, nullptr);
	shadowMgr->delShadow(rock);
	rock->createRockDeadEffect();
	rock->getJAIObject()->startSound(PSSE_EN_ROCK_BREAK, 0);
}

/*
 * --INFO--
 * Address:	802627C4
 * Size:	00008C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	if (rock->isAtari()) {
		rock->setAtari(false);
		rock->hardConstraintOn();
	}

	if (rock->mCurAnim->mIsPlaying && (u32)rock->mCurAnim->mType == KEYEVENT_END) {
		rock->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80262850
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Rock
} // namespace Game
