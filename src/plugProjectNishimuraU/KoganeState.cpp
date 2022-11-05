#include "Game/Entities/Kogane.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TKogane.h"

namespace Game {
namespace Kogane {

/*
 * --INFO--
 * Address:	8025CD48
 * Size:	0001D4
 */
void FSM::init(EnemyBase* enemy)
{
	create(KOGANE_Count);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateMove);
	registerState(new StateWait);
	registerState(new StatePress);
}

/*
 * --INFO--
 * Address:	8025CF1C
 * Size:	000098
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = static_cast<Obj*>(enemy);
	kogane->setAtari(false);
	kogane->setEvent(0, EB_BitterImmune);
	kogane->hardConstraintOn();
	kogane->resetEvent(0, EB_16);
	kogane->setEvent(0, EB_31);

	kogane->m_simVelocity = Vector3f(0.0f);
	kogane->startMotion(0, nullptr);
	kogane->stopMotion();
}

/*
 * --INFO--
 * Address:	8025CFB4
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);
	if (kogane->isAppear()) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025D018
 * Size:	0001A0
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);
	kogane->setAtari(true);

	kogane->resetEvent(0, EB_BitterImmune);
	kogane->setEvent(0, EB_22);
	kogane->resetEvent(0, EB_Cullable);
	kogane->hardConstraintOff();
	kogane->setEvent(0, EB_16);
	kogane->resetEvent(0, EB_31);

	kogane->setEmotionExcitement();
	kogane->startMotion();

	efx::TKoganeDive diveEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp40.m_value);
	diveEffect.create(&scaleArg);

	kogane->startBodyEffect();
	kogane->getJAIObject()->startSound(PSSE_EN_TAMAGOMUSHI_APPEAR, 0);
}

/*
 * --INFO--
 * Address:	8025D1BC
 * Size:	000138
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	kogane->setEvent(0, EB_BitterImmune);

	efx::TKoganeDive diveEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp40.m_value);
	diveEffect.create(&scaleArg);

	kogane->finishBodyEffect();
	kogane->getJAIObject()->startSound(PSSE_EN_TAMAGOMUSHI_DIVE, 0);
}

/*
 * --INFO--
 * Address:	8025D2F8
 * Size:	00006C
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	if (kogane->koganeScaleDown()) {
		if (kogane->transitDisappear()) {
			kogane->m_inPiklopedia = false;
			kogane->kill(nullptr);
		} else {
			kogane->init(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8025D364
 * Size:	000004
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D368
 * Size:	00006C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	Parms* parms = static_cast<Parms*>(kogane->m_parms);
	kogane->resetMoveTimer(parms->m_properParms.m_fp10.m_value, parms->m_properParms.m_fp11.m_value);
	kogane->setTargetPosition(nullptr);
	kogane->startMotion(0, nullptr);
	kogane->createFartEffect();
}

/*
 * --INFO--
 * Address:	8025D3D8
 * Size:	000138
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	kogane->koganeScaleUp();
	Vector3f targetPos = Vector3f(kogane->m_targetPosition);
	Parms* parms       = static_cast<Parms*>(kogane->m_parms);
	EnemyFunc::walkToTarget(kogane, targetPos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
	                        parms->m_general.m_rotationalSpeed.m_value);

	if ((kogane->m_appearTimer > static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp02.m_value)
	    || (kogane->m_moveTimer > static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp11.m_value)) {
		kogane->finishMotion();
	}

	kogane->m_appearTimer += sys->m_deltaTime;
	kogane->m_moveTimer += sys->m_deltaTime;

	if (kogane->m_curAnim->m_isRunning && (u32)kogane->m_curAnim->m_type == KEYEVENT_END) {
		if (kogane->m_appearTimer > static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp02.m_value) {
			transit(kogane, KOGANE_Disappear, nullptr);
		} else {
			transit(kogane, KOGANE_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8025D510
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D514
 * Size:	00005C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	Parms* parms = static_cast<Parms*>(kogane->m_parms);
	kogane->resetMoveTimer(parms->m_properParms.m_fp20.m_value, parms->m_properParms.m_fp21.m_value);

	kogane->m_simVelocity = Vector3f(0.0f);
	kogane->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	8025D570
 * Size:	0000BC
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	kogane->koganeScaleUp();
	if (kogane->m_moveTimer > static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp21.m_value) {
		kogane->finishMotion();
	}

	kogane->m_appearTimer += sys->m_deltaTime;
	kogane->m_moveTimer += sys->m_deltaTime;

	if (kogane->m_curAnim->m_isRunning && (u32)kogane->m_curAnim->m_type == KEYEVENT_END) {
		transit(kogane, KOGANE_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025D62C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025D630
 * Size:	00011C
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	kogane->resetEvent(0, EB_22);

	efx::TKoganeHit hitEffect;
	efx::ArgScale scaleArg(kogane->getPosition(), static_cast<Parms*>(kogane->m_parms)->m_properParms.m_fp40.m_value);
	hitEffect.create(&scaleArg);

	kogane->startMotion(2, nullptr);
	kogane->createPressSENormal();
}

/*
 * --INFO--
 * Address:	8025D750
 * Size:	000130
 */
void StatePress::exec(EnemyBase* enemy)
{
	Obj* kogane = static_cast<Obj*>(enemy);

	kogane->koganeScaleUp();
	kogane->m_appearTimer += sys->m_deltaTime;

	if (kogane->m_curAnim->m_isRunning) {
		if ((u32)kogane->m_curAnim->m_type == KEYEVENT_2) {
			kogane->setEvent(0, EB_22);
			kogane->createPressSESpecial();
		} else if ((u32)kogane->m_curAnim->m_type == KEYEVENT_3) {
			kogane->createItem();
			kogane->setZukanVisible(false);
		} else if ((u32)kogane->m_curAnim->m_type == KEYEVENT_4) {
			kogane->resetEvent(0, EB_22);
		} else if ((u32)kogane->m_curAnim->m_type == KEYEVENT_END) {
			if (kogane->m_appearTimer > 12800.0f) {
				transit(kogane, KOGANE_Disappear, nullptr);
			} else {
				transit(kogane, KOGANE_Move, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8025D888
 * Size:	000010
 */
void StatePress::cleanup(EnemyBase* enemy) { enemy->resetEvent(0, EB_22); }

} // namespace Kogane
} // namespace Game
