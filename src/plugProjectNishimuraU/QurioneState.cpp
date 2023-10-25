#include "Game/Entities/Qurione.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Qurione {

/*
 * --INFO--
 * Address:	8025F094
 * Size:	000228
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

/*
 * --INFO--
 * Address:	8025F2BC
 * Size:	0000D0
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

/*
 * --INFO--
 * Address:	8025F38C
 * Size:	000088
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->mUtilityTimer += sys->mDeltaTime;

	if ((wisp->mUtilityTimer > 1.0f) && wisp->isAppear()) {
		transit(wisp, QURIONE_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025F414
 * Size:	00005C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(true);
	wisp->enableEvent(0, EB_Animating);
	wisp->disableEvent(0, EB_ModelHidden);
}

/*
 * --INFO--
 * Address:	8025F470
 * Size:	000074
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

/*
 * --INFO--
 * Address:	8025F4E4
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8025F564
 * Size:	000054
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(true);
	wisp->mQurioneScale = 1.0f;
	wisp->setGlowEffectScale();
}

/*
 * --INFO--
 * Address:	8025F5B8
 * Size:	00006C
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAtari(false);
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Hide, nullptr);
	wisp->createDisppearEffect();
}

/*
 * --INFO--
 * Address:	8025F624
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8025F6A4
 * Size:	000090
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

/*
 * --INFO--
 * Address:	8025F734
 * Size:	00003C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp             = OBJ(enemy);
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	8025F770
 * Size:	000130
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

/*
 * --INFO--
 * Address:	8025F8A0
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025F8A4
 * Size:	00005C
 */
void StateDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->disableEvent(0, EB_Cullable);
	wisp->createHitEffect();
	wisp->mTargetVelocity = Vector3f(0.0f);
	wisp->startMotion(QURIONEANIM_Damage, nullptr);
}

/*
 * --INFO--
 * Address:	8025F900
 * Size:	000068
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

/*
 * --INFO--
 * Address:	8025F968
 * Size:	000010
 */
void StateDrop::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/*
 * --INFO--
 * Address:	8025F978
 * Size:	0000B0
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = OBJ(enemy);
	wisp->setAlive(false);
	wisp->disableEvent(0, EB_Cullable);

	Vector3f velocity(0.0f, static_cast<Parms*>(wisp->mParms)->mProperParms.mFp04.mValue, 0.0f);
	wisp->setVelocity(velocity);
	wisp->mTargetVelocity = velocity;

	wisp->resetUtilityTimer();
	wisp->startMotion(QURIONEANIM_Run, nullptr);
}

/*
 * --INFO--
 * Address:	8025FA28
 * Size:	000060
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

/*
 * --INFO--
 * Address:	8025FA88
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Qurione
} // namespace Game
