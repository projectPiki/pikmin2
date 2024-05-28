#include "Game/Entities/Rock.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Rock {

/**
 * @note Address: 0x80261D8C
 * @note Size: 0x228
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

/**
 * @note Address: 0x80261FB4
 * @note Size: 0x98
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

/**
 * @note Address: 0x8026204C
 * @note Size: 0x108
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
		f32 detectRadius = CG_GENERALPARMS(rock).mSightRadius.mValue;
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

/**
 * @note Address: 0x80262154
 * @note Size: 0x48
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->hardConstraintOff();
	rock->enableEvent(0, EB_Animating);
	rock->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x8026219C
 * @note Size: 0x104
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock         = OBJ(enemy);
	Vector3f position = rock->getPosition();
	position.y += rock->mFallOffset;
	rock->onSetPosition(position);

	rock->enableEvent(0, EB_ModelHidden);
	rock->disableEvent(0, EB_Cullable);
	rock->disableEvent(0, EB_CullSound);

	rock->mTargetVelocity = Vector3f(0.0f);
	rock->startMotion(ROCKANIM_Run, nullptr);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);

	rock->getJAIObject()->startSound(PSSE_EN_ROCK_FALL, 0);
}

/**
 * @note Address: 0x802622A0
 * @note Size: 0x64
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	if (rock->fallRockScaleUp()) {
		transit(rock, ROCK_Fall, nullptr);
	}
}

/**
 * @note Address: 0x80262304
 * @note Size: 0x5C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->setAtari(true);
	rock->disableEvent(0, EB_Untargetable);
	rock->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x80262360
 * @note Size: 0x2C
 */
void StateDropWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	rock->startMotion(ROCKANIM_Run, nullptr);
}

/**
 * @note Address: 0x8026238C
 * @note Size: 0x34
 */
void StateDropWait::exec(EnemyBase* enemy) { transit(enemy, ROCK_Fall, nullptr); }

/**
 * @note Address: 0x802623C0
 * @note Size: 0x58
 */
void StateDropWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->disableEvent(0, EB_Cullable);
	rock->disableEvent(0, EB_CullSound);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);
}

/**
 * @note Address: 0x80262418
 * @note Size: 0x60
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	Vector3f velocity(0.0f, -rock->mFallSpeed, 0.0f);
	rock->setVelocity(velocity);
	rock->startFallEffect();
}

/**
 * @note Address: 0x80262478
 * @note Size: 0x68
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->mFloorTriangle) {
		transit(enemy, ROCK_Dead, nullptr);
	} else if (enemy->isEvent(0, EB_Colliding)) {
		transit(enemy, ROCK_Dead, nullptr);
	}
}

/**
 * @note Address: 0x802624E0
 * @note Size: 0x94
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	shadowMgr->setForceVisible(rock, false);
	rock->finishFallEffect();

	Vector3f position = rock->getPosition();
	cameraMgr->startVibration(VIBTYPE_Crash, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x80262574
 * @note Size: 0x7C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = OBJ(enemy);
	rock->disableEvent(0, EB_Cullable);
	rock->disableEvent(0, EB_CullSound);
	rock->startMotion(ROCKANIM_Run, nullptr);
	rock->mTimer = 0.0f;

	if (rock->mWaterBox) {
		rock->startRollingWaterEffect();
	} else {
		rock->startRollingGroundEffect();
	}
}

/**
 * @note Address: 0x802625F0
 * @note Size: 0xD0
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

/**
 * @note Address: 0x802626C0
 * @note Size: 0x7C
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* rock = OBJ(enemy);
	rock->finishRollingGroundEffect();
	rock->finishRollingWaterEffect();

	Vector3f position = rock->getPosition();
	rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x8026273C
 * @note Size: 0x88
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

/**
 * @note Address: 0x802627C4
 * @note Size: 0x8C
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

/**
 * @note Address: 0x80262850
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Rock
} // namespace Game
