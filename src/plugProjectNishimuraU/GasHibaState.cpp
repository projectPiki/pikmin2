#include "types.h"
#include "Game/Entities/GasHiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace GasHiba {
/*
 * --INFO--
 * Address:	8026C68C
 * Size:	000128
 */
void FSM::init(EnemyBase* enemy)
{
	create(GASHIBA_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateAttack);
}

/*
 * --INFO--
 * Address:	8026C7B4
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

/*
 * --INFO--
 * Address:	8026C938
 * Size:	000004
 */
void StateDead::exec(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026C93C
 * Size:	000004
 */
void StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026C940
 * Size:	000048
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

/*
 * --INFO--
 * Address:	8026C988
 * Size:	0000C4
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
	if (hiba->mTimer > static_cast<Parms*>(hiba->mParms)->mProperParms.mWaitTime.mValue) {
		transit(hiba, GASHIBA_Attack, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026CA4C
 * Size:	000004
 */
void StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8026CA50
 * Size:	000048
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* hiba    = OBJ(enemy);
	hiba->mTimer = 0.0f;
	hiba->startMotion(GASHIBAANIM_Attack, nullptr);
	hiba->startGasEffect();
}

/*
 * --INFO--
 * Address:	8026CA98
 * Size:	000150
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);

	// If dead or we're done attacking, then finish
	if ((hiba->mHealth <= 0.0f)
	    || ((static_cast<Parms*>(hiba->mParms)->mProperParms.mWaitTime.mValue > 0.0f)
	        && (hiba->mTimer > static_cast<Parms*>(hiba->mParms)->mProperParms.mActiveTime.mValue))) {
		hiba->finishMotion();
	}

	hiba->mTimer += sys->mDeltaTime;

	hiba->updateEfxLod();
	hiba->updateLivingThing();

	if (hiba->mTimer > static_cast<Parms*>(hiba->mParms)->mProperParms.mFp03.mValue) {
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

/*
 * --INFO--
 * Address:	8026CBE8
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* hiba = OBJ(enemy);
	hiba->finishGasEffect();
}
} // namespace GasHiba
} // namespace Game
