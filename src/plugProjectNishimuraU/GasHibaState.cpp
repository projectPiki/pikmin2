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
	Obj* hiba = static_cast<Obj*>(enemy);

	hiba->setEvent(0, EB_3);
	hiba->resetEvent(0, EB_LifegaugeVisible);
	hiba->setEvent(0, EB_Vulnerable);
	hiba->resetEvent(0, EB_Flying);

	hiba->m_isAlive = false;
	hiba->generatorKill();

	hiba->startMotion(0, nullptr);
	hiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
	PSStartEnemyFatalHitSE(hiba, 0.0f);

	Vector3f position            = hiba->getPosition();
	f32 scale                    = hiba->m_scaleModifier;
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
	Obj* hiba         = static_cast<Obj*>(enemy);
	WaitStateArg* arg = static_cast<WaitStateArg*>(stateArg);
	if (arg) {
		hiba->m_timer = arg->m_waitTimer;
	} else {
		hiba->m_timer = 0.0f;
	}

	hiba->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	8026C988
 * Size:	0000C4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* hiba = static_cast<Obj*>(enemy);
	hiba->m_timer += sys->m_deltaTime;

	hiba->setInitLivingThing();
	hiba->updateLivingThing();

	if (hiba->m_health <= 0.0f) {
		transit(hiba, GASHIBA_Dead, nullptr);
		return;
	}

	// If enough time has passed, attack
	if (hiba->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_waitTime.m_value) {
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
	Obj* hiba     = static_cast<Obj*>(enemy);
	hiba->m_timer = 0.0f;
	hiba->startMotion(1, nullptr);
	hiba->startGasEffect();
}

/*
 * --INFO--
 * Address:	8026CA98
 * Size:	000150
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hiba = static_cast<Obj*>(enemy);

	// If dead or we're done attacking, then finish
	if ((hiba->m_health <= 0.0f)
	    || ((static_cast<Parms*>(hiba->m_parms)->m_properParms.m_waitTime.m_value > 0.0f)
	        && (hiba->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_activeTime.m_value))) {
		hiba->finishMotion();
	}

	hiba->m_timer += sys->m_deltaTime;

	hiba->updateEfxLod();
	hiba->updateLivingThing();

	if (hiba->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_fp03.m_value) {
		hiba->interactGasAttack();
	}

	hiba->getJAIObject()->startSound(PSSE_EN_GAS_HIBA_VOMIT, 0);

	if (hiba->m_curAnim->m_isRunning
	    && ((u32)hiba->m_curAnim->m_type == KEYEVENT_END) /* Epoch: wtf is this, needs cleanup. Surely an enum (+1 from INTNS)? */) {
		if (hiba->m_health <= 0.0f) {
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
	Obj* hiba = static_cast<Obj*>(enemy);
	hiba->finishGasEffect();
}
} // namespace GasHiba
} // namespace Game
