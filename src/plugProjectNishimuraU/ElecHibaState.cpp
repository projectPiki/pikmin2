#include "Game/Entities/ElecHiba.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "PS.h"

namespace Game {
namespace ElecHiba {

/*
 * --INFO--
 * Address:	8026DFD8
 * Size:	00017C
 */
void FSM::init(EnemyBase* enemy)
{
	create(ELECHIBA_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateSign);
	registerState(new StateAttack);
}

/*
 * --INFO--
 * Address:	8026E154
 * Size:	0002CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->setEvent(0, EB_3);
	elecHiba->resetEvent(0, EB_LifegaugeVisible);
	elecHiba->setEvent(0, EB_Vulnerable);
	elecHiba->resetEvent(0, EB_Flying);

	elecHiba->_2C0 = 0;
	elecHiba->generatorKill();
	elecHiba->startMotion(0, nullptr);
	elecHiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
	PSStartEnemyFatalHitSE(elecHiba, 0.0f);

	Vector3f position            = elecHiba->getPosition();
	f32 scale                    = elecHiba->m_scaleModifier;
	EnemyTypeID::EEnemyTypeID id = elecHiba->getEnemyTypeID();

	efx::ArgEnemyType fxArg(position, id, scale);
	efx::TEnemyBomb bombEffect;
	bombEffect.create(&fxArg);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->setEvent(0, EB_3);
		childHiba->resetEvent(0, EB_LifegaugeVisible);
		childHiba->setEvent(0, EB_Vulnerable);
		childHiba->resetEvent(0, EB_Flying);

		childHiba->_2C0 = 0;
		childHiba->generatorKill();
		childHiba->startMotion(0, nullptr);
		childHiba->getJAIObject()->startSound(PSSE_EN_HIBA_STOP, 0);
		PSStartEnemyFatalHitSE(childHiba, 0.0f);

		Vector3f childPosition            = childHiba->getPosition();
		f32 childScale                    = childHiba->m_scaleModifier;
		EnemyTypeID::EEnemyTypeID childID = childHiba->getEnemyTypeID();

		efx::ArgEnemyType childFxArg(childPosition, childID, childScale);
		efx::TEnemyBomb childBombEffect;

		childBombEffect.create(&childFxArg);
	}
}

/*
 * --INFO--
 * Address:	8026E428
 * Size:	000004
 */
void StateDead::exec(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8026E42C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8026E430
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba     = static_cast<Obj*>(enemy);
	WaitStateArg* arg = static_cast<WaitStateArg*>(stateArg);

	if (arg) {
		elecHiba->m_waitTimer = arg->m_waitTimer;
	} else {
		elecHiba->m_waitTimer = 0.0f;
	}

	elecHiba->startMotion(0, nullptr);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->startMotion(0, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026E4A0
 * Size:	0000E4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->m_waitTimer += sys->m_deltaTime;

	if (elecHiba->_2F4 != 0) {
		if (elecHiba->isWaitFinish()) {
			transit(elecHiba, ELECHIBA_Sign, nullptr);
		}
	} else if (elecHiba->m_health <= 0.0f) {
		transit(elecHiba, ELECHIBA_Dead, nullptr);
	} else if (elecHiba->m_waitTimer > CG_PROPERPARMS(elecHiba).m_waitTime.m_value) {
		transit(elecHiba, ELECHIBA_Sign, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026E584
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8026E588
 * Size:	000088
 */
void StateSign::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->m_waitTimer = 0.0f;
	elecHiba->resetEvent(0, EB_Cullable);
	elecHiba->startMotion(0, nullptr);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->resetEvent(0, EB_Cullable);
		childHiba->startMotion(0, nullptr);
		elecHiba->startChargeEffect(childHiba);
	}
}

/*
 * --INFO--
 * Address:	8026E610
 * Size:	0000F8
 */
void StateSign::exec(EnemyBase* enemy)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->m_waitTimer += sys->m_deltaTime;
	elecHiba->getJAIObject()->startSound(PSSE_EN_ELEC_HIBA_CHARGE, 0);

	if (elecHiba->m_health <= 0.0f) {
		Obj* childHiba = elecHiba->getChildObjPtr();
		if (childHiba) {
			elecHiba->finishChargeEffect();
		}

		transit(elecHiba, ELECHIBA_Dead, nullptr);
	} else if (elecHiba->m_waitTimer > CG_PROPERPARMS(elecHiba).m_warningTime.m_value) {
		transit(elecHiba, ELECHIBA_Attack, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8026E708
 * Size:	000044
 */
void StateSign::cleanup(EnemyBase* enemy)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->setEvent(0, EB_Cullable);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->setEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	8026E74C
 * Size:	000084
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->m_waitTimer = 0.0f;
	elecHiba->resetEvent(0, EB_Cullable);
	elecHiba->startMotion(0, nullptr);
	elecHiba->setVersusHibaType();

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->resetEvent(0, EB_Cullable);
		childHiba->startMotion(0, nullptr);
		elecHiba->startDisChargeEffect();
	}
}

/*
 * --INFO--
 * Address:	8026E7D0
 * Size:	000164
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->m_waitTimer += sys->m_deltaTime;

	if (elecHiba->_2F4 != 0) {
		if (elecHiba->isAttackFinish()) {
			transit(elecHiba, ELECHIBA_Wait, nullptr);
		}
	} else if (elecHiba->m_health <= 0.0f) {
		transit(elecHiba, ELECHIBA_Dead, nullptr);
	} else if (elecHiba->m_waitTimer > CG_PROPERPARMS(elecHiba).m_activeTime.m_value) {
		transit(elecHiba, ELECHIBA_Wait, nullptr);
	}

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		Vector3f childPos = childHiba->getPosition();
		elecHiba->interactDenkiAttack(childPos);
		elecHiba->updateEfxLod();
	}

	elecHiba->getJAIObject()->startSound(PSSE_EN_ELEC_HIBA_SPARK, 0);
}

/*
 * --INFO--
 * Address:	8026E934
 * Size:	000060
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* elecHiba = static_cast<Obj*>(enemy);

	elecHiba->setEvent(0, EB_Cullable);

	Obj* childHiba = elecHiba->getChildObjPtr();
	if (childHiba) {
		childHiba->setEvent(0, EB_Cullable);
		elecHiba->finishDisChargeEffect();
	}

	elecHiba->resetAttrHitCount();
}

} // namespace ElecHiba
} // namespace Game
