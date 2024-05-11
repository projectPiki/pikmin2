#include "Game/Entities/Pelplant.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/GameSystem.h"
#include "Game/MapMgr.h"

#include "Dolphin/rand.h"

#include "efx/TPplGrow.h"

#include "System.h"

namespace Game {
namespace Pelplant {
/**
 * @note Address: 0x8010AB38
 * @note Size: 0x1E0
 */
void FSM::init(EnemyBase* enemy)
{
	create(PELPLANT_StateCount);

	registerState(new StateWait(PELPLANT_WaitSmall, PELPLANTSIZE_Small));
	registerState(new StateWait(PELPLANT_WaitMiddle, PELPLANTSIZE_Middle));
	registerState(new StateWait(PELPLANT_WaitFull, PELPLANTSIZE_Full));

	registerState(new StateGrow(PELPLANT_GrowSmallMid, PELPLANTANIM_GrowSmallMed, PELPLANT_WaitMiddle));
	registerState(new StateGrow(PELPLANT_GrowMidFull, PELPLANTANIM_GrowMedFull, PELPLANT_WaitFull));

	registerState(new StateDamage(PELPLANT_Damage, PELPLANTANIM_Damage));
	registerState(new StateDead(PELPLANT_Dead, PELPLANTANIM_Dead));

	registerState(new StateWither(PELPLANT_WitherFull, PELPLANT_WaitSmall, PELPLANTANIM_WaitFull, PELPLANTANIM_WaitSmall));
	registerState(new StateWither(PELPLANT_WitherMiddle, PELPLANT_WaitSmall, PELPLANTANIM_WaitMedium, PELPLANTANIM_WaitSmall));
	registerState(new StateWither(PELPLANT_WitherSmall, PELPLANT_WaitSmall, PELPLANTANIM_WaitSmall, PELPLANTANIM_WaitSmall));
}

/**
 * --INLINED--
 * NB: required to generate vtables in correct order.
 * @note Address: N/A
 * @note Size: 0x40
 */
StateBlendAnim::StateBlendAnim(int stateID, int nextState, int startAnimIdx, int endAnimIdx)
    : State(stateID)
    , mNextState(nextState)
    , mStartAnimIdx(startAnimIdx)
    , mEndAnimIdx(endAnimIdx)
{
}

/**
 * @note Address: 0x8010AD18
 * @note Size: 0x3C
 */
void StateBlendAnim::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startBlend(mStartAnimIdx, mEndAnimIdx, &EnemyBlendAnimatorBase::sBlendQuadraticFun, 30.0f, nullptr);
}

/**
 * @note Address: 0x8010AD54
 * @note Size: 0x7C
 */
void StateBlendAnim::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			enemy->endBlend();
			transit(enemy, mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x8010ADD0
 * @note Size: 0x98
 */
StateWither::StateWither(int stateID, int nextState, int startAnimIdx, int endAnimIdx)
    : StateBlendAnim(stateID, nextState, startAnimIdx, endAnimIdx)
{
	switch (stateID) {
	case PELPLANT_WitherFull:
		mName = "wither_big";
		return;
	case PELPLANT_WitherMiddle:
		mName = "wither_Middle";
		return;
	case PELPLANT_WitherSmall:
		mName = "wither_Small";
		return;
	}
}

/**
 * @note Address: 0x8010AE68
 * @note Size: 0x70
 */
void StateWither::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startBlend(mStartAnimIdx, mEndAnimIdx, &EnemyBlendAnimatorBase::sBlendQuadraticFun, 30.0f, nullptr);
	enemy->enableEvent(0, EB_Invulnerable);
	EnemyFunc::flickStickPikmin(enemy, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x8010AED8
 * @note Size: 0x7C
 */
void StateWither::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END_BLEND:
			enemy->endBlend();
			transit(enemy, mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x8010AF54
 * @note Size: 0x28
 */
void StateWither::cleanup(EnemyBase* enemy) { OBJ(enemy)->updateLODSphereRadius(PELPLANTSIZE_Small); }

/**
 * @note Address: 0x8010AF7C
 * @note Size: 0x88
 */
StateWait::StateWait(int stateID, int pelSize)
    : State(stateID)
{
	mPelSize = pelSize;
	switch (mPelSize) {
	case PELPLANTSIZE_Small:
		mName = "wait_small";
		return;
	case PELPLANTSIZE_Middle:
		mName = "wait_middle";
		return;
	case PELPLANTSIZE_Full:
		mName = "wait_big";
		return;
	}
}

/**
 * @note Address: 0x8010B004
 * @note Size: 0x144
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pellet = OBJ(enemy);

	pellet->disableEvent(0, EB_Cullable);
	pellet->resetPelFlag(PELPLANTFLAG_Full);
	pellet->enableEvent(0, EB_Invulnerable);

	switch (mPelSize) {
	case PELPLANTSIZE_Small:
		pellet->startMotion(PELPLANTANIM_WaitSmall, nullptr);
		break;
	case PELPLANTSIZE_Middle:
		pellet->startMotion(PELPLANTANIM_WaitMedium, nullptr);
		break;
	case PELPLANTSIZE_Full:
		pellet->setPelFlag(PELPLANTFLAG_Full);
		pellet->disableEvent(0, EB_Invulnerable);
		pellet->startMotion(PELPLANTANIM_WaitFull, nullptr);
		pellet->updateLODSphereRadius(2);
		pellet->enableEvent(0, EB_Cullable);
		break;
	}

	Vector3f position = pellet->getPosition();
	position.y        = mapMgr->getMinY(position);

	Obj::sCurrentObj = pellet;
	pellet->setPosition(position, false);
	Obj::sCurrentObj = nullptr;
}

/**
 * @note Address: 0x8010B148
 * @note Size: 0x278
 */
void StateWait::exec(EnemyBase* enemy)
{
	f32 frameTime = sys->mDeltaTime;
	if (OBJ(enemy)->isPelFlag(PELPLANTFLAG_Growing)) {
		OBJ(enemy)->mGrowTimer += frameTime;
	}

	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END:
		case KEYEVENT_LOOP_END:
			f32 maxGrowTime;
			if (gameSystem->isZukanMode()) {
				maxGrowTime = 5.0f * randFloat();
			} else if (mPelSize == PELPLANTSIZE_Small) {
				maxGrowTime = CG_PARMS(enemy)->mPelplantParms.mSmallToMedGrowth.mValue;
			} else {
				maxGrowTime = CG_PARMS(enemy)->mPelplantParms.mMedToLargeGrowth.mValue;
			}

			if ((OBJ(enemy)->mGrowTimer > maxGrowTime) || (OBJ(enemy)->mFarmPow > 0)) {
				OBJ(enemy)->mGrowTimer = 0.0f;
				switch (mPelSize) {
				case PELPLANTSIZE_Small:
					transit(enemy, PELPLANT_GrowSmallMid, nullptr);
					break;
				case PELPLANTSIZE_Middle:
					transit(enemy, PELPLANT_GrowMidFull, nullptr);
					break;
				case PELPLANTSIZE_Full:
					break;
				}

			} else if (OBJ(enemy)->mFarmPow < 0) {
				switch (mPelSize) {
				case PELPLANTSIZE_Small:
					break;
				case PELPLANTSIZE_Middle:
					transit(enemy, PELPLANT_WitherMiddle, nullptr);
					break;
				case PELPLANTSIZE_Full:
					transit(enemy, PELPLANT_WitherFull, nullptr);
					break;
				}
			}
		}
	} else {
		OBJ(enemy)->changePelletColor();
		if (enemy->injure()) {
			if (enemy->mHealth <= 0.0f) {
				switch (mPelSize) {
				case PELPLANTSIZE_Full:
					transit(enemy, PELPLANT_Dead, nullptr);
					return;
				}
			} else {
				switch (mPelSize) {
				case PELPLANTSIZE_Full:
					transit(enemy, PELPLANT_Damage, nullptr);
					return;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8010B3C0
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase*) { }

/**
 * @note Address: 0x8010B3C4
 * @note Size: 0x44
 */
StateGrow::StateGrow(int stateID, int animIdx, int nextState)
    : State(stateID)
{
	mAnimIdx   = animIdx;
	mNextState = nextState;
	mName      = "grow";
}

/**
 * @note Address: 0x8010B408
 * @note Size: 0x2E0
 */
void StateGrow::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->enableEvent(0, EB_Invulnerable);

	if (mAnimIdx == PELPLANTANIM_GrowMedFull) {
		OBJ(enemy)->attachPellet();
	}

	Vector3f position = enemy->getPosition();
	efx::Arg effectArg(position);

	switch (mNextState) {
	case PELPLANT_WaitMiddle:
		efx::TPplGrow1 grow1;
		grow1.create(&effectArg);
		enemy->startMotion(mAnimIdx, nullptr);
		return;
	case PELPLANT_WaitFull:
		switch (OBJ(enemy)->mSize) {
		case PELLET_NUMBER_ONE:
			efx::TPplGrow2 grow2;
			grow2.create(&effectArg);
			break;
		case PELLET_NUMBER_FIVE:
			efx::TPpl5Grow2 grow5;
			grow5.create(&effectArg);
			break;
		case PELLET_NUMBER_TEN:
			efx::TPpl10Grow2 grow10;
			grow10.create(&effectArg);
			break;
		case PELLET_NUMBER_TWENTY:
			efx::TPpl20Grow2 grow20;
			grow20.create(&effectArg);
			break;
		}

		OBJ(enemy)->updateLODSphereRadius(PELPLANTSIZE_Full);
		if ((OBJ(enemy)->mSize == PELLET_NUMBER_TEN) || (OBJ(enemy)->mSize == PELLET_NUMBER_TWENTY)) {
			enemy->startMotion(PELPLANTANIM_BigGrow, nullptr);
			return;
		}
		enemy->startMotion(mAnimIdx, nullptr);
		return;
	}
}

/**
 * @note Address: 0x8010B6E8
 * @note Size: 0x60
 */
void StateGrow::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying) {
		switch (enemy->mCurAnim->mType) {
		case KEYEVENT_END:
		case KEYEVENT_LOOP_END:
			transit(enemy, mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x8010B748
 * @note Size: 0x4
 */
void StateGrow::cleanup(Game::EnemyBase*) { }

/**
 * @note Address: 0x8010B74C
 * @note Size: 0x40
 */
StateDamage::StateDamage(int stateID, int animIdx)
    : State(stateID)
{
	mName    = "damage";
	mAnimIdx = animIdx;
}

/**
 * @note Address: 0x8010B78C
 * @note Size: 0x8C
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (mAnimIdx != PELPLANTANIM_WaitMedium) {
		enemy->startMotion(mAnimIdx, nullptr);

	} else if ((OBJ(enemy)->mSize == PELLET_NUMBER_TEN) || (OBJ(enemy)->mSize == PELLET_NUMBER_TWENTY)) {
		enemy->startMotion(PELPLANTANIM_BigDamage, nullptr);

	} else {
		enemy->startMotion(mAnimIdx, nullptr);
	}

	enemy->disableEvent(0, EB_Invulnerable);
}

/**
 * @note Address: 0x8010B818
 * @note Size: 0x68
 */
void StateDamage::exec(Game::EnemyBase* enemy)
{
	if ((enemy->mCurAnim->mIsPlaying) && (enemy->mCurAnim->mType == KEYEVENT_END)) {
		transit(enemy, mStateMachine->mPreviousID, nullptr);
	}
	OBJ(enemy)->changePelletColor();
}

/**
 * @note Address: 0x8010B880
 * @note Size: 0x10
 */
void StateDamage::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Invulnerable); }

/**
 * @note Address: 0x8010B890
 * @note Size: 0x40
 */
StateDead::StateDead(int stateID, int animIdx)
    : State(stateID)
{
	mName    = "dead";
	mAnimIdx = animIdx;
}

/**
 * @note Address: 0x8010B8D0
 * @note Size: 0xB4
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	if (mAnimIdx != PELPLANTANIM_Dead) {
		enemy->startMotion(mAnimIdx, nullptr);
	} else if ((OBJ(enemy)->mSize == PELLET_NUMBER_TEN) || (OBJ(enemy)->mSize == PELLET_NUMBER_TWENTY)) {
		enemy->startMotion(PELPLANTANIM_BigDead, nullptr);
	} else {
		enemy->startMotion(mAnimIdx, nullptr);
	}

	enemy->deathProcedure();

	if (mAnimIdx != PELPLANTANIM_Dead) {
		if (OBJ(enemy)->mPellet) {
			OBJ(enemy)->mPellet->kill(nullptr);
			OBJ(enemy)->mPellet = nullptr;
		}
	}
}

/**
 * @note Address: 0x8010B984
 * @note Size: 0x68
 */
void StateDead::exec(EnemyBase* enemy)
{
	if ((enemy->mCurAnim->mIsPlaying) && (enemy->mCurAnim->mType == KEYEVENT_END)) {
		if (OBJ(enemy)->mPellet) {
			OBJ(enemy)->mPellet->endCapture();
			OBJ(enemy)->mPellet = nullptr;
		}
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8010B9EC
 * @note Size: 0x4
 */
void StateDead::cleanup(Game::EnemyBase*) { }

} // namespace Pelplant
} // namespace Game
