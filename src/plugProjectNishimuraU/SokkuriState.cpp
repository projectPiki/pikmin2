#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

const char statename[] = "246-SokkuriState";

/*
 * --INFO--
 * Address:	802EFA24
 * Size:	000330
 */
void FSM::init(EnemyBase* enemy)
{
	create(SOKKURI_Count);
	registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateWait);
	registerState(new StateMoveGround);
	registerState(new StateMoveWater);
	registerState(new StateFlick);
}

/*
 * --INFO--
 * Address:	802EFD54
 * Size:	000064
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	sokkuri->deathProcedure();
	sokkuri->resetEvent(0, EB_Cullable);
	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->setEmotionCaution();
	sokkuri->startMotion(4, nullptr);
}

/*
 * --INFO--
 * Address:	802EFDB8
 * Size:	000060
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	if (sokkuri->m_curAnim->m_isRunning) {
		if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_2) {
			sokkuri->createDownEffect(0.5f, 0.55f);

		} else if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
			sokkuri->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802EFE18
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EFE1C
 * Size:	000070
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri      = static_cast<Obj*>(enemy);
	sokkuri->m_health = 0.0f;
	sokkuri->deathProcedure();
	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->setEmotionCaution();
	sokkuri->startMotion(5, nullptr);
	sokkuri->createDownEffect(0.75f, 0.0f);
}

/*
 * --INFO--
 * Address:	802EFE8C
 * Size:	000060
 */
void StatePress::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	if (sokkuri->m_curAnim->m_isRunning) {
		if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_2) {
			sokkuri->createDownEffect(0.0f, 0.55f);

		} else if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
			sokkuri->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802EFEEC
 * Size:	000004
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EFEF0
 * Size:	0000C4
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();

	sokkuri->resetEvent(0, EB_LifegaugeVisible);
	sokkuri->setEvent(0, EB_BitterImmune);
	sokkuri->_2C0 = true;
	sokkuri->setEmotionNone();
	sokkuri->hardConstraintOn();
	sokkuri->resetEvent(0, EB_16);

	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->startMotion(1, nullptr);
	sokkuri->stopMotion();

	if (sokkuri->m_waterBox) {
		sokkuri->fadeEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	802EFFB4
 * Size:	000064
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	if (sokkuri->isAppear()) {
		transit(sokkuri, SOKKURI_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802F0018
 * Size:	00007C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	sokkuri->setEvent(0, EB_LifegaugeVisible);
	sokkuri->resetEvent(0, EB_BitterImmune);
	sokkuri->_2C0 = false;
	sokkuri->hardConstraintOff();
	sokkuri->setEvent(0, EB_16);

	if (sokkuri->m_waterBox) {
		sokkuri->createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	802F0094
 * Size:	000078
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->setEmotionExcitement();
	sokkuri->startMotion(1, nullptr);
	sokkuri->createDownEffect(0.35f, 0.0f);
}

/*
 * --INFO--
 * Address:	802F010C
 * Size:	0000D8
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);

	if (sokkuri->m_health <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);

	} else if (sokkuri->m_curAnim->m_isRunning && (u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
		transit(sokkuri, SOKKURI_MoveGround, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802F01E4
 * Size:	000004
 */
void StateAppear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F01E8
 * Size:	000070
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->setEmotionCaution();
	sokkuri->startMotion(3, nullptr);
	sokkuri->createBubbleEffect();
}

/*
 * --INFO--
 * Address:	802F0258
 * Size:	00009C
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	if (sokkuri->m_health <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (sokkuri->m_curAnim->m_isRunning) {
		if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_2) {
			sokkuri->createDownEffect(0.35f, 0.0f);

		} else if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
			transit(sokkuri, SOKKURI_Stay, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802F02F4
 * Size:	000004
 */
void StateDisappear::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F02F8
 * Size:	000068
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->setNextWaitInfo();
	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802F0360
 * Size:	000154
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	if (sokkuri->m_health <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);

	} else if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);

	} else {
		if (sokkuri->m_timer > static_cast<Parms*>(sokkuri->m_parms)->m_properParms.m_fp12.m_value) {
			if (sokkuri->isDisappear()) {
				sokkuri->m_nextState = SOKKURI_Disappear;
				sokkuri->finishMotion();

			} else if (sokkuri->m_waterBox) {
				sokkuri->m_nextState = SOKKURI_MoveWater;
				sokkuri->finishMotion();

			} else {
				sokkuri->m_nextState = SOKKURI_MoveGround;
				sokkuri->finishMotion();
			}
		}

		sokkuri->m_timer += sys->m_deltaTime;

		if (sokkuri->m_curAnim->m_isRunning && (u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
			transit(sokkuri, sokkuri->m_nextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802F04B4
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F04B8
 * Size:	000060
 */
void StateMoveGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->setNextMoveInfo();
	sokkuri->startMotion(0, nullptr);
	sokkuri->createDownEffect(0.28f, 0.0f);
}

/*
 * --INFO--
 * Address:	802F0518
 * Size:	000234
 */
void StateMoveGround::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	sokkuri->updateMoveState();

	if (sokkuri->m_health <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);
		return;
	}

	Parms* parms = static_cast<Parms*>(sokkuri->m_parms);
	if (sokkuri->m_timer > parms->m_properParms.m_fp01.m_value) {
		if (sokkuri->isDisappear()) {
			sokkuri->m_nextState = SOKKURI_Disappear;
			sokkuri->finishMotion();

		} else {
			Parms* parms = static_cast<Parms*>(sokkuri->m_parms);
			if (randWeightFloat(1.0f) < parms->m_properParms.m_fp11.m_value) {
				sokkuri->m_nextState = SOKKURI_Wait;
				sokkuri->finishMotion();

			} else if (sokkuri->m_waterBox) {
				sokkuri->m_simVelocity = Vector3f(0.0f);
				sokkuri->m_nextState   = SOKKURI_MoveWater;
				sokkuri->finishMotion();

			} else {
				sokkuri->m_nextState = SOKKURI_MoveGround;
				sokkuri->finishMotion();
			}
		}
	} else if (sokkuri->m_waterBox) {
		sokkuri->m_simVelocity = Vector3f(0.0f);
		sokkuri->m_nextState   = SOKKURI_MoveWater;
		sokkuri->finishMotion();

	} else {
		Vector3f targetPos = Vector3f(sokkuri->m_targetPosition);
		EnemyFunc::walkToTarget(sokkuri, targetPos, sokkuri->_2CC, parms->m_general.m_rotationalAccel.m_value,
		                        parms->m_general.m_rotationalSpeed.m_value);
	}

	sokkuri->m_timer += sys->m_deltaTime;

	if (sokkuri->m_curAnim->m_isRunning && (u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, sokkuri->m_nextState, nullptr); // no idea why this is enemy rather than sokkuri but it makes it match
	}
}

/*
 * --INFO--
 * Address:	802F074C
 * Size:	000004
 */
void StateMoveGround::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F0750
 * Size:	000050
 */
void StateMoveWater::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->setNextMoveInfo();
	sokkuri->startMotion(6, nullptr);
}

/*
 * --INFO--
 * Address:	802F07A0
 * Size:	0001D8
 */
void StateMoveWater::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);
	sokkuri->updateMoveState();

	if (sokkuri->m_health <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(sokkuri, false)) {
		transit(sokkuri, SOKKURI_Flick, nullptr);
		return;
	}
	if (sokkuri->isDisappear()) {
		sokkuri->m_nextState = SOKKURI_Disappear;
		sokkuri->finishMotion();

	} else {
		Parms* parms = static_cast<Parms*>(sokkuri->m_parms);
		if (sokkuri->m_timer > parms->m_properParms.m_fp01.m_value) {
			if (sokkuri->m_waterBox) {
				sokkuri->m_timer = 0.0f;
				sokkuri->setNextMoveInfo();

			} else {
				sokkuri->m_simVelocity = Vector3f(0.0f);
				sokkuri->m_nextState   = SOKKURI_MoveGround;
				sokkuri->finishMotion();
			}

		} else if (sokkuri->m_waterBox == nullptr) {
			sokkuri->m_simVelocity = Vector3f(0.0f);
			sokkuri->m_nextState   = SOKKURI_MoveGround;
			sokkuri->finishMotion();

		} else {
			Vector3f targetPos = Vector3f(sokkuri->m_targetPosition);
			EnemyFunc::walkToTarget(sokkuri, targetPos, sokkuri->_2CC, parms->m_properParms.m_fp22.m_value,
			                        parms->m_properParms.m_fp23.m_value);
		}
	}

	sokkuri->m_timer += sys->m_deltaTime;

	if (sokkuri->m_curAnim->m_isRunning && (u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, sokkuri->m_nextState, nullptr); // no idea why this is enemy rather than sokkuri but it makes it match
	}
}

/*
 * --INFO--
 * Address:	802F0978
 * Size:	000004
 */
void StateMoveWater::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F097C
 * Size:	00006C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* sokkuri         = static_cast<Obj*>(enemy);
	sokkuri->m_timer     = 0.0f;
	sokkuri->m_nextState = SOKKURI_NULL;
	sokkuri->resetMoveVelocity();
	sokkuri->resetEvent(0, EB_22);
	sokkuri->m_simVelocity = Vector3f(0.0f);
	sokkuri->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802F09E8
 * Size:	000198
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* sokkuri = static_cast<Obj*>(enemy);

	if (sokkuri->m_health <= 0.0f) {
		transit(sokkuri, SOKKURI_Dead, nullptr);
		return;
	}

	if (sokkuri->m_waterBox) {
		sokkuri->m_nextState = SOKKURI_MoveWater;
		sokkuri->finishMotion();

	} else {
		sokkuri->m_nextState = SOKKURI_MoveGround;
		sokkuri->finishMotion();
	}

	sokkuri->m_timer += sys->m_deltaTime;

	if (sokkuri->m_curAnim->m_isRunning) {
		if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_2) {
			sokkuri->setEvent(0, EB_22);
			sokkuri->createDownEffect(0.6f, 0.55f);

		} else if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_3) {
			Parms* parms1 = static_cast<Parms*>(sokkuri->m_parms);
			EnemyFunc::flickNearbyNavi(sokkuri, parms1->m_general.m_shakeRange.m_value, parms1->m_general.m_shakeKnockback.m_value,
			                           parms1->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			Parms* parms2 = static_cast<Parms*>(sokkuri->m_parms);
			EnemyFunc::flickNearbyPikmin(sokkuri, parms2->m_general.m_shakeRange.m_value, parms2->m_general.m_shakeKnockback.m_value,
			                             parms2->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

			Parms* parms3 = static_cast<Parms*>(sokkuri->m_parms);
			EnemyFunc::flickStickPikmin(sokkuri, parms3->m_general.m_shakeRateMaybe.m_value, parms3->m_general.m_shakeKnockback.m_value,
			                            parms3->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			sokkuri->m_toFlick = 0.0f;
		} else if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_4) {
			sokkuri->resetEvent(0, EB_22);

		} else if ((u32)sokkuri->m_curAnim->m_type == KEYEVENT_END) {
			transit(sokkuri, sokkuri->m_nextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802F0B80
 * Size:	000010
 */
void StateFlick::cleanup(EnemyBase* enemy) { enemy->resetEvent(0, EB_22); }

} // namespace Sokkuri
} // namespace Game
