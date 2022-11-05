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
	Obj* hiba         = static_cast<Obj*>(enemy);
	WaitStateArg* arg = static_cast<WaitStateArg*>(stateArg);
	if (stateArg) {
		hiba->m_timer = arg->m_waitTimer;
	} else {
		hiba->m_timer = 0.0f;
	}

	hiba->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	8026B650
 * Size:	00008C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* hiba = static_cast<Obj*>(enemy);
	hiba->m_timer += sys->m_deltaTime;

	if (hiba->m_health <= 0.0f) {
		transit(hiba, HIBA_Dead, nullptr);
		return;
	}

	// If enough time has passed, attack
	if (hiba->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_waitTime.m_value) {
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
	Obj* hiba     = static_cast<Obj*>(enemy);
	hiba->m_timer = 0.0f;
	hiba->startMotion(1, nullptr);
	hiba->startFireEffect();
}

/*
 * --INFO--
 * Address:	8026B728
 * Size:	0000FC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* hiba = static_cast<Obj*>(enemy);

	// If dead or we're done being active, then finish
	if ((hiba->m_health <= 0.0f) || (hiba->m_timer > static_cast<Parms*>(hiba->m_parms)->m_properParms.m_activeTime.m_value)) {
		hiba->finishMotion();
	}

	hiba->m_timer += sys->m_deltaTime;

	hiba->updateEfxLod();
	hiba->interactFireAttack();

	if (hiba->m_curAnim->m_isRunning
	    && ((u32)hiba->m_curAnim->m_type == 0x3E8) /* Epoch: wtf is this, needs cleanup. Surely an enum (+1 from INTNS)? */) {
		if (hiba->m_health <= 0.0f) {
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
	Obj* hiba = static_cast<Obj*>(enemy);
	hiba->finishFireEffect();
}

} // namespace Hiba
} // namespace Game
