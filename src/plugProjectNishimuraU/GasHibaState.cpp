#include "types.h"
#include "Game/Entities/GasHiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace GasHiba {
/**
 * @note Address: 0x8026C68C
 * @note Size: 0x128
 */
void FSM::init(EnemyBase* enemy)
{
	create(GASHIBA_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateAttack);
}

/**
 * @note Address: 0x8026C7B4
 * @note Size: 0x17C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba = OBJ(enemy);

	hiba->enableEvent(0, EB_Untargetable);
	hiba->disableEvent(0, EB_LifegaugeVisible);
	hiba->enableEvent(0, EB_Invulnerable);
	hiba->disableEvent(0, EB_DamageAnimEnabled);

	hiba->mIsAlive = false;
	hiba->generatorKill();

	hiba->startMotion(GASHIBAANIM_Wait, nullptr);
	hiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
	PSStartEnemyFatalHitSE(hiba, 0.0f);

	Vector3f position            = hiba->getPosition();
	f32 scale                    = hiba->mScaleModifier;
	EnemyTypeID::EEnemyTypeID id = hiba->getEnemyTypeID();
	efx::ArgEnemyType arg(position, id, scale);
	efx::TEnemyBomb bombEffect;
	bombEffect.create(&arg);
}

/**
 * @note Address: 0x8026C938
 * @note Size: 0x4
 */
void StateDead::exec(Game::EnemyBase*) { }

/**
 * @note Address: 0x8026C93C
 * @note Size: 0x4
 */
void StateDead::cleanup(Game::EnemyBase*) { }

/**
 * @note Address: 0x8026C940
 * @note Size: 0x48
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba         = OBJ(enemy);
	WaitStateArg* arg = static_cast<WaitStateArg*>(stateArg);
	if (arg) {
		hiba->mTimer = arg->mWaitTimer;
	} else {
		hiba->mTimer = 0.0f;
	}

	hiba->startMotion(GASHIBAANIM_Wait, nullptr);
}

/**
 * @note Address: 0x8026C988
 * @note Size: 0xC4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);
	hiba->mTimer += sys->mDeltaTime;

	hiba->setInitLivingThing();
	hiba->updateLivingThing();

	if (hiba->mHealth <= 0.0f) {
		transit(hiba, GASHIBA_Dead, nullptr);
		return;
	}

	// If enough time has passed, attack
	if (hiba->mTimer > CG_PROPERPARMS(hiba).mWaitTime.mValue) {
		transit(hiba, GASHIBA_Attack, nullptr);
	}
}

/**
 * @note Address: 0x8026CA4C
 * @note Size: 0x4
 */
void StateWait::cleanup(Game::EnemyBase*) { }

/**
 * @note Address: 0x8026CA50
 * @note Size: 0x48
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba    = OBJ(enemy);
	hiba->mTimer = 0.0f;
	hiba->startMotion(GASHIBAANIM_Attack, nullptr);
	hiba->startGasEffect();
}

/**
 * @note Address: 0x8026CA98
 * @note Size: 0x150
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);

	// If dead or we're done attacking, then finish
	if ((hiba->mHealth <= 0.0f)
	    || ((CG_PROPERPARMS(hiba).mWaitTime.mValue > 0.0f) && (hiba->mTimer > CG_PROPERPARMS(hiba).mActiveTime.mValue))) {
		hiba->finishMotion();
	}

	hiba->mTimer += sys->mDeltaTime;

	hiba->updateEfxLod();
	hiba->updateLivingThing();

	if (hiba->mTimer > CG_PROPERPARMS(hiba).mAttackStartTime.mValue) {
		hiba->interactGasAttack();
	}

	hiba->getJAIObject()->startSound(PSSE_EN_GAS_HIBA_VOMIT, 0);

	if (hiba->mCurAnim->mIsPlaying
	    && ((u32)hiba->mCurAnim->mType == KEYEVENT_END) /* Epoch: wtf is this, needs cleanup. Surely an enum (+1 from INTNS)? */) {
		if (hiba->mHealth <= 0.0f) {
			transit(hiba, GASHIBA_Dead, nullptr);
			return;
		}

		transit(hiba, GASHIBA_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8026CBE8
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);
	hiba->finishGasEffect();
}
} // namespace GasHiba
} // namespace Game
