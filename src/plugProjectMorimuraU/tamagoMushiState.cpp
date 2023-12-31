#include "Game/Entities/TamagoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "efx/TEnemyDead.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace TamagoMushi {

/**
 * @note Address: 0x8036CCF0
 * @note Size: 0x108
 */
void FSM::init(EnemyBase* enemy)
{
	create(TAMAGOMUSHI_Count);
	registerState(new StateWalk(TAMAGOMUSHI_Walk));
	registerState(new StateTurn(TAMAGOMUSHI_Turn));
	registerState(new StateAppear(TAMAGOMUSHI_Appear));
	registerState(new StateHide(TAMAGOMUSHI_Hide));
	registerState(new StateDead(TAMAGOMUSHI_Dead));
	registerState(new StateWait(TAMAGOMUSHI_Wait));
}

/**
 * @note Address: 0x8036CDF8
 * @note Size: 0x3C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	mName = "walk";
}

/**
 * @note Address: 0x8036CE34
 * @note Size: 0x108
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	int p1;
	int diff;
	Obj* mitite = OBJ(enemy);
	mitite->startMotion(TAMAGOANIM_Move, nullptr);
	mitite->resetWalkParm();
	Parms* parms = CG_PARMS(mitite);
	p1           = parms->mProperParms.mMinimumWalkTime.mValue;
	diff         = parms->mProperParms.mMaximumWalkTime.mValue - p1;

	f32 r = (f32)diff * randFloat() + (f32)p1;
	_14   = (int)r;
	_10   = 0;
	mitite->setAtari(true);
	mitite->setAlive(true);
}

/**
 * @note Address: 0x8036CF3C
 * @note Size: 0xEC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* mitite = OBJ(enemy);
	_10++;
	if (mitite->mBounceTriangle) {
		mitite->walkFunc();
	} else {
		mitite->ballMove();
	}

	if (mitite->isReachToGoal(10.0f) || _10 > _14) {
		mitite->mTargetVelocity  = Vector3f(0.0f);
		mitite->mCurrentVelocity = Vector3f(0.0f);
		mitite->finishMotion();
	}

	if (mitite->mCurAnim->mIsPlaying && (u32)mitite->mCurAnim->mType == KEYEVENT_END) {
		mitite->setGoalRandom();
		transit(mitite, TAMAGOMUSHI_Turn, nullptr);
	}
}

/**
 * @note Address: 0x8036D028
 * @note Size: 0x3C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	mName = "turn";
}

/**
 * @note Address: 0x8036D064
 * @note Size: 0x54
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TAMAGOANIM_Wait, nullptr);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
}

/**
 * @note Address: 0x8036D0B8
 * @note Size: 0x88
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* mitite = OBJ(enemy);
	if (mitite->turnFunc()) {
		mitite->finishMotion();
	}

	if (mitite->mCurAnim->mIsPlaying && (u32)mitite->mCurAnim->mType == KEYEVENT_END) {
		transit(mitite, TAMAGOMUSHI_Walk, nullptr);
	}
}

/**
 * @note Address: 0x8036D140
 * @note Size: 0x3C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	mName = "appear";
}

/**
 * @note Address: 0x8036D17C
 * @note Size: 0x160
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	int p1;
	int diff;

	enemy->startMotion(TAMAGOANIM_Appear, nullptr);
	enemy->stopMotion();
	enemy->enableEvent(0, EB_BitterImmune);

	Obj* mitite  = OBJ(enemy);
	Parms* parms = CG_PARMS(mitite);
	p1           = parms->mProperParms.mMinimumAppearanceTime.mValue;
	diff         = parms->mProperParms.mMaximumAppearanceTime.mValue - p1;

	f32 r = (f32)diff * randFloat() + (f32)p1;
	_18   = (int)r;
	_14   = 0;

	mitite->setAtari(false);
	mitite->setAlive(false);

	mitite->hardConstraintOn();

	_10          = false;
	_20          = true;
	mAppearFrame = 15.0f * randFloat();
}

/**
 * @note Address: 0x8036D2DC
 * @note Size: 0x1AC
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* mitite = OBJ(enemy);
	if (!_10 && mitite->isFound()) {
		_10 = true;
		mitite->createFellow();
	}

	if (_10) {
		_14++;
	}

	if (!mitite->isEvent(0, EB_Bittered) && (_14 > _18)) {
		mitite->setEmotionExcitement();
		if (mitite->isStopMotion()) {
			mitite->createAppearEffect();
		}
		mitite->startMotion();
	}

	if (mitite->mCurAnim->mIsPlaying) {
		if ((u32)mitite->mCurAnim->mType == KEYEVENT_2) {
			mitite->appearPanic();
			mitite->setAtari(true);
			mitite->setAlive(true);
			mitite->disableEvent(0, EB_BitterImmune);
		}
		if ((u32)mitite->mCurAnim->mType == KEYEVENT_END) {
			transit(mitite, TAMAGOMUSHI_Walk, nullptr);
			mitite->hardConstraintOff();
		}
	}

	if (_20 && !mitite->isStopMotion() && mitite->getMotionFrame() >= mAppearFrame) {
		_20 = false;
		mitite->mSoundObj->startSound(PSSE_EN_TAMAGOMUSHI_APPEAR, 0);
	}
}

/**
 * @note Address: 0x8036D488
 * @note Size: 0x3C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	mName = "hide";
}

/**
 * @note Address: 0x8036D4C4
 * @note Size: 0x6C
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{

	enemy->startMotion(TAMAGOANIM_Dive, nullptr);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->hardConstraintOn();
	enemy->setEmotionCaution();

	Obj* mitite = OBJ(enemy);
	mitite->createHideEffect();
}

/**
 * @note Address: 0x8036D530
 * @note Size: 0x44
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8036D574
 * @note Size: 0x3C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	mName = "dead";
}

/**
 * @note Address: 0x8036D5B0
 * @note Size: 0x108
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TAMAGOANIM_Dead, nullptr);
	enemy->mTargetVelocity  = Vector3f(0.0f);
	enemy->mCurrentVelocity = Vector3f(0.0f);
	enemy->enableEvent(0, EB_LeaveCarcass);
	enemy->deathProcedure();
	PSStartEnemyFatalHitSE(enemy, 0.0f);

	Vector3f fxPos;
	enemy->getCommonEffectPos(fxPos);

	efx::ArgEnemyType arg(fxPos, EnemyTypeID::EnemyID_Kochappy, 1.0f); // not a dwarf bulborb but sure.
	efx::TEnemyBomb bombFx;
	bombFx.create(&arg);
}

/**
 * @note Address: 0x8036D6B8
 * @note Size: 0x114
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* mitite = OBJ(enemy);
	if (mitite->mCurAnim->mIsPlaying && (u32)mitite->mCurAnim->mType == KEYEVENT_END) {
		mitite->genItem();
		mitite->kill(nullptr);
		PSStartEnemyGhostSE(mitite, 0.0f);

		Vector3f fxPos;
		mitite->getCommonEffectPos(fxPos);

		efx::ArgEnemyType arg(fxPos, EnemyTypeID::EnemyID_Kochappy, 1.0f); // not a dwarf bulborb but sure.
		efx::TEnemyDead deadFx;
		deadFx.create(&arg);
	}
}

/**
 * @note Address: 0x8036D7CC
 * @note Size: 0x3C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	mName = "Wait";
}

/**
 * @note Address: 0x8036D808
 * @note Size: 0x74
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(TAMAGOANIM_Wait, nullptr);
	enemy->setEmotionExcitement();
	enemy->hardConstraintOff();
	enemy->disableEvent(0, EB_Cullable);
	enemy->setAtari(false);

	Obj* mitite  = OBJ(enemy);
	mitite->_300 = 1;
}

/**
 * @note Address: 0x8036D87C
 * @note Size: 0x98
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* mitite = OBJ(enemy);
	if (mitite->_300 == 0) {
		mitite->setAlive(true);
		mitite->setAtari(true);
		transit(mitite, TAMAGOMUSHI_Walk, nullptr);
	}

	mitite->ballMove();
}

} // namespace TamagoMushi
} // namespace Game
