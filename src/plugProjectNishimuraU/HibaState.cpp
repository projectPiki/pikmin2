#include "types.h"
#include "Game/Entities/Hiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace Hiba {

/**
 * @note Address: 0x8026B354
 * @note Size: 0x128
 */
void FSM::init(EnemyBase* enemy)
{
	create(HIBA_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateAttack);
}

/**
 * @note Address: 0x8026B47C
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

	hiba->startMotion(HIBAANIM_Wait, nullptr);
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
 * @note Address: 0x8026B600
 * @note Size: 0x4
 */
void StateDead::exec(EnemyBase*) { }

/**
 * @note Address: 0x8026B604
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase*) { }

/**
 * @note Address: 0x8026B608
 * @note Size: 0x48
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba         = OBJ(enemy);
	WaitStateArg* arg = static_cast<WaitStateArg*>(stateArg);
	if (stateArg) {
		hiba->mTimer = arg->mWaitTimer;
	} else {
		hiba->mTimer = 0.0f;
	}

	hiba->startMotion(HIBAANIM_Wait, nullptr);
}

/**
 * @note Address: 0x8026B650
 * @note Size: 0x8C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);
	hiba->mTimer += sys->mDeltaTime;

	if (hiba->mHealth <= 0.0f) {
		transit(hiba, HIBA_Dead, nullptr);
		return;
	}

	// If enough time has passed, attack
	if (hiba->mTimer > CG_PROPERPARMS(hiba).mWaitTime.mValue) {
		transit(hiba, HIBA_Attack, nullptr);
	}
}

/**
 * @note Address: 0x8026B6DC
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase*) { }

/**
 * @note Address: 0x8026B6E0
 * @note Size: 0x48
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba    = OBJ(enemy);
	hiba->mTimer = 0.0f;
	hiba->startMotion(HIBAANIM_Attack, nullptr);
	hiba->startFireEffect();
}

/**
 * @note Address: 0x8026B728
 * @note Size: 0xFC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);

	// If dead or we're done being active, then finish
	if ((hiba->mHealth <= 0.0f) || (hiba->mTimer > CG_PROPERPARMS(hiba).mActiveTime.mValue)) {
		hiba->finishMotion();
	}

	hiba->mTimer += sys->mDeltaTime;

	hiba->updateEfxLod();
	hiba->interactFireAttack();

	if (hiba->mCurAnim->mIsPlaying && (hiba->mCurAnim->mType == KEYEVENT_END)) {
		if (hiba->mHealth <= 0.0f) {
			transit(hiba, HIBA_Dead, nullptr);
			return;
		}

		transit(hiba, HIBA_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8026B824
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);
	hiba->finishFireEffect();
}

} // namespace Hiba
} // namespace Game
