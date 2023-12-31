#include "Game/Entities/Qurione.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Qurione {

/**
 * @note Address: 0x8025F094
 * @note Size: 0x228
 */
void FSM::init(EnemyBase* enemy)
{
	create(QURIONE_Count);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateMove);
	registerState(new StateDrop);
	registerState(new StateDead);
}

/**
 * @note Address: 0x8025F2BC
 * @note Size: 0xD0
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->resetUtilityTimer();
	wisp->mQurioneScale = 0.0f;

	Vector3f position = Vector3f(wisp->mSpawnPositions[wisp->mSpawnIndex]);
	wisp->onSetPosition(position);

	wisp->setAtari(false);
	wisp->disableEvent(0, EB_Animating);
	wisp->enableEvent(0, EB_ModelHidden);

	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Appear, nullptr);
	wisp->stopMotion();
}

/**
 * @note Address: 0x8025F38C
 * @note Size: 0x88
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->mUtilityTimer += sys->mDeltaTime;

	if ((wisp->mUtilityTimer > 1.0f) && wisp->isAppear()) {
		transit(wisp, QURIONE_Appear, nullptr);
	}
}

/**
 * @note Address: 0x8025F414
 * @note Size: 0x5C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(true);
	wisp->enableEvent(0, EB_Animating);
	wisp->disableEvent(0, EB_ModelHidden);
}

/**
 * @note Address: 0x8025F470
 * @note Size: 0x74
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(false);
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Appear, nullptr);

	wisp->createAppearEffect();
	wisp->startGlowEffect();
}

/**
 * @note Address: 0x8025F4E4
 * @note Size: 0x80
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->addQurioneScale();
	wisp->setGlowEffectScale();
	if (wisp->mCurAnim->mIsPlaying && (u32)wisp->mCurAnim->mType == KEYEVENT_END) {
		transit(wisp, QURIONE_Move, nullptr);
	}
}

/**
 * @note Address: 0x8025F564
 * @note Size: 0x54
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(true);
	wisp->mQurioneScale = 1.0f;
	wisp->setGlowEffectScale();
}

/**
 * @note Address: 0x8025F5B8
 * @note Size: 0x6C
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(false);
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Hide, nullptr);
	wisp->createDisppearEffect();
}

/**
 * @note Address: 0x8025F624
 * @note Size: 0x80
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->subQurioneScale();
	wisp->setGlowEffectScale();
	if (wisp->mCurAnim->mIsPlaying && (u32)wisp->mCurAnim->mType == KEYEVENT_END) {
		transit(wisp, QURIONE_Stay, nullptr);
	}
}

/**
 * @note Address: 0x8025F6A4
 * @note Size: 0x90
 */
void StateDisappear::cleanup(EnemyBase* enemy)
{
	Obj* wisp   = OBJ(enemy);
	f32 faceDir = wisp->getFaceDir() + PI;
	if (faceDir >= TAU) {
		faceDir -= TAU;
	}
	wisp->mFaceDir    = faceDir;
	wisp->mRotation.y = wisp->mFaceDir;

	wisp->mSpawnIndex ^= 1;
	wisp->setAtari(true);
	wisp->finishGlowEffect();
}

/**
 * @note Address: 0x8025F734
 * @note Size: 0x3C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp             = OBJ(enemy);
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Wait, nullptr);
}

/**
 * @note Address: 0x8025F770
 * @note Size: 0x130
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->moveFaceDir();

	Vector3f position      = wisp->getPosition();
	Vector3f spawnPosition = wisp->mSpawnPositions[wisp->mSpawnIndex];
	f32 flyDist            = wisp->getFlyDist();

	wisp->getJAIObject()->startSound(PSSE_EN_PIKIMAKI_FLY, 0);

	Vector2f delta(spawnPosition.x - position.x, spawnPosition.z - position.z);
	if (SQUARE(delta.x) + SQUARE(delta.y) > SQUARE(flyDist)) {
		transit(wisp, QURIONE_Disappear, nullptr);
	}
}

/**
 * @note Address: 0x8025F8A0
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025F8A4
 * @note Size: 0x5C
 */
void StateDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->disableEvent(0, EB_Cullable);
	wisp->createHitEffect();
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Damage, nullptr);
}

/**
 * @note Address: 0x8025F900
 * @note Size: 0x68
 */
void StateDrop::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	if (wisp->mCurAnim->mIsPlaying) {
		if ((u32)wisp->mCurAnim->mType == KEYEVENT_2) {
			wisp->dropItem();
		} else if ((u32)wisp->mCurAnim->mType == KEYEVENT_END) {
			transit(wisp, QURIONE_Dead, nullptr);
		}
	}
}

/**
 * @note Address: 0x8025F968
 * @note Size: 0x10
 */
void StateDrop::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/**
 * @note Address: 0x8025F978
 * @note Size: 0xB0
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAlive(false);
	wisp->disableEvent(0, EB_Cullable);

	Vector3f velocity(0.0f, CG_PROPERPARMS(wisp).mDeathRate.mValue, 0.0f);
	wisp->setVelocity(velocity);
	wisp->mTargetVelocity = velocity;

	wisp->resetUtilityTimer();
	wisp->startMotion(QURIONEANIM_Run, nullptr);
}

/**
 * @note Address: 0x8025FA28
 * @note Size: 0x60
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->mUtilityTimer += sys->mDeltaTime;

	if (wisp->isFlyKill()) {
		wisp->finishGlowEffect();
		wisp->kill(nullptr);
	}
}

/**
 * @note Address: 0x8025FA88
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Qurione
} // namespace Game
