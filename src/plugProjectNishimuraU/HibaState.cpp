#include "types.h"
#include "Game/Entities/Hiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace Hiba {

/*
 * --INFO--
 * Address:	8026B354
 * Size:	000128
 */
void FSM::init(EnemyBase* enemy)
{
	create(HIBA_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateAttack);
}

/*
 * --INFO--
 * Address:	8026B47C
 * Size:	00017C
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

/*
 * --INFO--
 * Address:	8026B600
 * Size:	000004
 */
void StateDead::exec(EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B604
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B608
 * Size:	000048
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

/*
 * --INFO--
 * Address:	8026B650
 * Size:	00008C
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
	if (hiba->mTimer > static_cast<Parms*>(hiba->mParms)->mProperParms.mWaitTime.mValue) {
		transit(hiba, HIBA_Attack, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026B6DC
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026B6E0
 * Size:	000048
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba    = OBJ(enemy);
	hiba->mTimer = 0.0f;
	hiba->startMotion(HIBAANIM_Attack, nullptr);
	hiba->startFireEffect();
}

/*
 * --INFO--
 * Address:	8026B728
 * Size:	0000FC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);

	// If dead or we're done being active, then finish
	if ((hiba->mHealth <= 0.0f) || (hiba->mTimer > static_cast<Parms*>(hiba->mParms)->mProperParms.mActiveTime.mValue)) {
		hiba->finishMotion();
	}

	hiba->mTimer += sys->mDeltaTime;

	hiba->updateEfxLod();
	hiba->interactFireAttack();

	if (hiba->mCurAnim->mIsPlaying
	    && ((u32)hiba->mCurAnim->mType == 0x3E8) /* Epoch: wtf is this, needs cleanup. Surely an enum (+1 from INTNS)? */) {
		if (hiba->mHealth <= 0.0f) {
			transit(hiba, HIBA_Dead, nullptr);
			return;
		}

		transit(hiba, HIBA_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026B824
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);
	hiba->finishFireEffect();
}

} // namespace Hiba
} // namespace Game
