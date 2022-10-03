#include "Game/Entities/BigFoot.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace BigFoot {

/*
 * --INFO--
 * Address:	802C62E8
 * Size:	000224
 */
void FSM::init(EnemyBase* enemy)
{
	create(BIGFOOT_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
}

/*
 * --INFO--
 * Address:	802C650C
 * Size:	0000CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->forceFinishIKMotion();
	raging->startDeadEffect();
	raging->deathProcedure();
	raging->resetEvent(0, EB_Cullable);

	raging->m_velocity2 = 0.0f;
	raging->setEmotionCaution();
	raging->startMotion(0, nullptr);

	Vector3f position = raging->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(10, position, 2);
}

/*
 * --INFO--
 * Address:	802C65D8
 * Size:	000094
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->updateDeadFurEffect();

	if (raging->m_animKeyEvent->m_running) {
		if ((u32)raging->m_animKeyEvent->m_type == 2) {
			raging->throwupItem();
			raging->createItemAndEnemy();
		} else if ((u32)raging->m_animKeyEvent->m_type == 3) {
			raging->_2DC = 1;
		} else if ((u32)raging->m_animKeyEvent->m_type == 1000) {
			raging->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802C666C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C6670
 * Size:	000084
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* raging         = static_cast<Obj*>(enemy);
	raging->m_nextState = BIGFOOT_NULL;
	raging->setEvent(0, EB_BitterImmune);
	raging->resetEvent(0, EB_16);
	raging->setEvent(0, EB_31);
	raging->m_targetCreature = nullptr;

	raging->m_velocity2 = Vector3f(0.0f);
	raging->startMotion(1, nullptr);
	raging->stopMotion();
}

/*
 * --INFO--
 * Address:	802C66F4
 * Size:	0000B8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	bool isTarget;
	f32 detectRadius = static_cast<Parms*>(raging->m_parms)->m_general.m_privateRadius.m_value;
	if (EnemyFunc::isThereOlimar(raging, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(raging, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(raging, BIGFOOT_Land, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C67AC
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C67B0
 * Size:	0000B4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* raging         = static_cast<Obj*>(enemy);
	raging->m_nextState = BIGFOOT_NULL;
	raging->_2D4        = 0.001f;

	raging->setEvent(0, EB_BitterImmune);
	raging->resetEvent(0, EB_Cullable);
	raging->setEvent(0, EB_16);
	raging->resetEvent(0, EB_31);

	raging->setEmotionExcitement();
	raging->m_targetCreature = nullptr;

	raging->m_velocity2 = Vector3f(0.0f);
	raging->startMotion(1, nullptr);

	shadowMgr->addJointShadow(raging);
	shadowMgr->setForceVisible(raging, true);
}

/*
 * --INFO--
 * Address:	802C6864
 * Size:	000178
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->addShadowScale();

	if (raging->m_animKeyEvent->m_running) {
		if ((u32)raging->m_animKeyEvent->m_type == 2) {
			raging->resetEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				raging->createOnGroundEffect(i, raging->m_waterBox);
			}

			Vector3f position = raging->getPosition();
			cameraMgr->startVibration(15, position, 2);
			rumbleMgr->startRumble(15, position, 2);

		} else if ((u32)raging->m_animKeyEvent->m_type == 1000) {
			if (raging->m_health <= 0.0f) {
				transit(raging, BIGFOOT_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(raging, false)) {
				transit(raging, BIGFOOT_Flick, nullptr);
			} else {
				transit(raging, BIGFOOT_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802C69DC
 * Size:	00005C
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->startProgramedIK();
	raging->setBossAppearBGM();
	raging->setEvent(0, EB_Cullable);
	raging->_2D4 = 1.0f;
	shadowMgr->setForceVisible(raging, false);
}

/*
 * --INFO--
 * Address:	802C6A38
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* raging         = static_cast<Obj*>(enemy);
	raging->m_nextState = BIGFOOT_NULL;
	raging->m_timer     = 0.0f;
	raging->resetFlickWalkTimeMax();
	raging->setIKParameter();
	raging->m_targetCreature = nullptr;
	raging->m_velocity2      = Vector3f(0.0f);
	raging->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802C6AA8
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->m_timer += sys->m_secondsPerFrame;

	if (raging->m_health <= 0.0f) {
		raging->m_nextState = BIGFOOT_Dead;
		raging->finishMotion();
	} else if (EnemyFunc::isStartFlick(raging, false)) {
		raging->m_nextState = BIGFOOT_Flick;
		raging->finishMotion();
	} else if (raging->m_timer > 5.0f) {
		raging->m_nextState = BIGFOOT_Walk;
		raging->finishMotion();
	}

	if (raging->m_animKeyEvent->m_running && (u32)raging->m_animKeyEvent->m_type == 1000) {
		transit(raging, raging->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C6B9C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802C6BA0
 * Size:	00006C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* raging              = static_cast<Obj*>(enemy);
	raging->m_nextState      = BIGFOOT_NULL;
	raging->m_timer          = 0.0f;
	raging->m_targetCreature = nullptr;
	raging->m_velocity2      = Vector3f(0.0f);

	raging->startMotion(3, nullptr);
	raging->startBlendMotion();
	raging->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802C6C0C
 * Size:	0000C0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	if (raging->m_animKeyEvent->m_running) {
		if ((u32)raging->m_animKeyEvent->m_type == 2) {
			Parms* parms = static_cast<Parms*>(raging->m_parms);
			EnemyFunc::flickStickPikmin(raging, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			raging->m_toFlick = 0.0f;
		} else if ((u32)raging->m_animKeyEvent->m_type == 1000) {
			if (raging->m_health <= 0.0f) {
				transit(raging, BIGFOOT_Dead, nullptr);
			} else {
				transit(raging, BIGFOOT_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802C6CCC
 * Size:	000048
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->finishBlendMotion();
	raging->setFlickWalkTimeMax();
	raging->m_isRaging = true;
	raging->setIKParameter();
}

/*
 * --INFO--
 * Address:	802C6D14
 * Size:	000070
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* raging              = static_cast<Obj*>(enemy);
	raging->m_nextState      = BIGFOOT_NULL;
	raging->m_timer          = 0.0f;
	raging->m_targetCreature = nullptr;
	raging->m_velocity2      = Vector3f(0.0f);
	raging->startIKMotion();
	raging->getTargetPosition();

	if (raging->m_isRaging) {
		raging->startBossAttackLoopBGM();
	}
}

/*
 * --INFO--
 * Address:	802C6D84
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	raging->getTargetPosition();
	raging->m_timer += sys->m_secondsPerFrame;
	if (raging->m_health <= 0.0f) {
		transit(raging, BIGFOOT_Dead, nullptr);
	} else {
		if (EnemyFunc::isStartFlick(raging, false)) {
			raging->m_nextState = BIGFOOT_Flick;
			raging->finishIKMotion();
		} else if (raging->m_timer > raging->m_flickWalkTimeMax) {
			raging->m_nextState = BIGFOOT_Wait;
			raging->finishIKMotion();
		}

		if (raging->isFinishIKMotion()) {
			transit(raging, raging->m_nextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802C6E84
 * Size:	000038
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	Obj* raging = static_cast<Obj*>(enemy);
	if (raging->m_isRaging) {
		raging->m_isRaging = false;
		raging->finishBossAttackLoopBGM();
	}
}

} // namespace BigFoot
} // namespace Game
