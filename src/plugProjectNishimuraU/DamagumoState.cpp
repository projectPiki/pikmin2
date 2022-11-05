#include "Game/Entities/Damagumo.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Damagumo {

/*
 * --INFO--
 * Address:	802A43FC
 * Size:	000224
 */
void FSM::init(EnemyBase* enemy)
{
	create(DAMAGUMO_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
}

/*
 * --INFO--
 * Address:	802A4620
 * Size:	0000CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	damagumo->forceFinishIKMotion();
	damagumo->startDeadEffect();
	damagumo->deathProcedure();
	damagumo->resetEvent(0, EB_Cullable);

	damagumo->m_simVelocity = 0.0f;
	damagumo->setEmotionCaution();
	damagumo->startMotion(0, nullptr);

	Vector3f position = damagumo->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(10, position, 2);
}

/*
 * --INFO--
 * Address:	802A46EC
 * Size:	00008C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	if (damagumo->m_curAnim->m_isRunning) {
		if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_2) {
			damagumo->throwupItem();
			damagumo->createItemAndEnemy();
		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_3) {
			damagumo->_2DC = 1;
		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_END) {
			damagumo->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802A4778
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802A477C
 * Size:	000084
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo         = static_cast<Obj*>(enemy);
	damagumo->m_nextState = DAMAGUMO_NULL;
	damagumo->setEvent(0, EB_BitterImmune);
	damagumo->resetEvent(0, EB_16);
	damagumo->setEvent(0, EB_31);
	damagumo->m_targetCreature = nullptr;

	damagumo->m_simVelocity = Vector3f(0.0f);
	damagumo->startMotion(1, nullptr);
	damagumo->stopMotion();
}

/*
 * --INFO--
 * Address:	802A4800
 * Size:	0000B8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	bool isTarget;
	f32 detectRadius = static_cast<Parms*>(damagumo->m_parms)->m_general.m_privateRadius.m_value;
	if (EnemyFunc::isThereOlimar(damagumo, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(damagumo, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(damagumo, DAMAGUMO_Land, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802A48B8
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802A48BC
 * Size:	0000B4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo         = static_cast<Obj*>(enemy);
	damagumo->m_nextState = DAMAGUMO_NULL;
	damagumo->_2D8        = 0.001f;

	damagumo->setEvent(0, EB_BitterImmune);
	damagumo->resetEvent(0, EB_Cullable);
	damagumo->setEvent(0, EB_16);
	damagumo->resetEvent(0, EB_31);

	damagumo->setEmotionExcitement();
	damagumo->m_targetCreature = nullptr;

	damagumo->m_simVelocity = Vector3f(0.0f);
	damagumo->startMotion(1, nullptr);

	shadowMgr->addJointShadow(damagumo);
	shadowMgr->setForceVisible(damagumo, true);
}

/*
 * --INFO--
 * Address:	802A4970
 * Size:	0001E8
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	damagumo->addShadowScale();

	if (damagumo->m_curAnim->m_isRunning) {
		if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_2) {
			damagumo->resetEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				damagumo->createOnGroundEffect(i, damagumo->m_waterBox);
			}

			Vector3f position = damagumo->getPosition();
			cameraMgr->startVibration(15, position, 2);
			rumbleMgr->startRumble(15, position, 2);

		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_3) {
			damagumo->createOnGroundEffect(3, damagumo->m_waterBox);

		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_4) {
			damagumo->createOnGroundEffect(0, damagumo->m_waterBox);

		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_5) {
			damagumo->createOnGroundEffect(1, damagumo->m_waterBox);

		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_6) {
			damagumo->createOnGroundEffect(2, damagumo->m_waterBox);

		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_END) {
			if (damagumo->m_health <= 0.0f) {
				transit(damagumo, DAMAGUMO_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(damagumo, false)) {
				transit(damagumo, DAMAGUMO_Flick, nullptr);
			} else {
				transit(damagumo, DAMAGUMO_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802A4B58
 * Size:	00005C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	damagumo->startProgramedIK();
	damagumo->setBossAppearBGM();
	damagumo->setEvent(0, EB_Cullable);
	damagumo->_2D8 = 1.0f;
	shadowMgr->setForceVisible(damagumo, false);
}

/*
 * --INFO--
 * Address:	802A4BB4
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo              = static_cast<Obj*>(enemy);
	damagumo->m_nextState      = DAMAGUMO_NULL;
	damagumo->m_stateTimer     = 0.0f;
	damagumo->m_stateDuration  = 1.75f + randWeightFloat(1.75f);
	damagumo->m_targetCreature = nullptr;
	damagumo->m_simVelocity    = Vector3f(0.0f);
	damagumo->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802A4C4C
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	damagumo->m_stateTimer += sys->m_deltaTime;

	if (damagumo->m_health <= 0.0f) {
		damagumo->m_nextState = DAMAGUMO_Dead;
		damagumo->finishMotion();
	} else if (EnemyFunc::isStartFlick(damagumo, false)) {
		damagumo->m_nextState = DAMAGUMO_Flick;
		damagumo->finishMotion();
	} else if (damagumo->m_stateTimer > damagumo->m_stateDuration) {
		damagumo->m_nextState = DAMAGUMO_Walk;
		damagumo->finishMotion();
	}

	if (damagumo->m_curAnim->m_isRunning && (u32)damagumo->m_curAnim->m_type == KEYEVENT_END) {
		transit(damagumo, damagumo->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802A4D40
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802A4D44
 * Size:	000064
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo              = static_cast<Obj*>(enemy);
	damagumo->m_nextState      = DAMAGUMO_NULL;
	damagumo->m_stateTimer     = 0.0f;
	damagumo->m_targetCreature = nullptr;
	damagumo->m_simVelocity    = Vector3f(0.0f);

	damagumo->startMotion(3, nullptr);
	damagumo->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802A4DA8
 * Size:	0000C8
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	if (damagumo->m_curAnim->m_isRunning) {
		if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(damagumo->m_parms);
			EnemyFunc::flickStickPikmin(damagumo, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			damagumo->m_toFlick = 0.0f;
			damagumo->startBossFlickBGM();
		} else if ((u32)damagumo->m_curAnim->m_type == KEYEVENT_END) {
			if (damagumo->m_health <= 0.0f) {
				transit(damagumo, DAMAGUMO_Dead, nullptr);
			} else {
				transit(damagumo, DAMAGUMO_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802A4E70
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	damagumo->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802A4E94
 * Size:	000098
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* damagumo              = static_cast<Obj*>(enemy);
	damagumo->m_nextState      = DAMAGUMO_NULL;
	damagumo->m_stateTimer     = 0.0f;
	damagumo->m_stateDuration  = 3.25f + randWeightFloat(3.25f);
	damagumo->m_targetCreature = nullptr;
	damagumo->m_simVelocity    = Vector3f(0.0f);
	damagumo->startIKMotion();
	damagumo->getTargetPosition();
}

/*
 * --INFO--
 * Address:	802A4F2C
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* damagumo = static_cast<Obj*>(enemy);
	damagumo->getTargetPosition();
	damagumo->m_stateTimer += sys->m_deltaTime;

	if (EnemyFunc::isStartFlick(damagumo, false)) {
		damagumo->m_nextState = DAMAGUMO_Flick;
		damagumo->finishIKMotion();
	} else if (damagumo->m_stateTimer > damagumo->m_stateDuration) {
		damagumo->m_nextState = DAMAGUMO_Wait;
		damagumo->finishIKMotion();
	}

	if (damagumo->m_health <= 0.0f) {
		transit(damagumo, DAMAGUMO_Dead, nullptr);
	} else if (damagumo->isFinishIKMotion()) {
		transit(damagumo, damagumo->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802A502C
 * Size:	000004
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

} // namespace Damagumo
} // namespace Game
