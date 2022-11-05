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
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->forceFinishIKMotion();
	bigfoot->startDeadEffect();
	bigfoot->deathProcedure();
	bigfoot->resetEvent(0, EB_Cullable);

	bigfoot->m_simVelocity = 0.0f;
	bigfoot->setEmotionCaution();
	bigfoot->startMotion(0, nullptr);

	Vector3f position = bigfoot->getPosition();
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
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->updateDeadFurEffect();

	if (bigfoot->m_curAnim->m_isRunning) {
		if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_2) {
			bigfoot->throwupItem();
			bigfoot->createItemAndEnemy();
		} else if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_3) {
			bigfoot->_2DC = 1;
		} else if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_END) {
			bigfoot->kill(nullptr);
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
	Obj* bigfoot         = static_cast<Obj*>(enemy);
	bigfoot->m_nextState = BIGFOOT_NULL;
	bigfoot->setEvent(0, EB_BitterImmune);
	bigfoot->resetEvent(0, EB_16);
	bigfoot->setEvent(0, EB_31);
	bigfoot->m_targetCreature = nullptr;

	bigfoot->m_simVelocity = Vector3f(0.0f);
	bigfoot->startMotion(1, nullptr);
	bigfoot->stopMotion();
}

/*
 * --INFO--
 * Address:	802C66F4
 * Size:	0000B8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bool isTarget;
	f32 detectRadius = static_cast<Parms*>(bigfoot->m_parms)->m_general.m_privateRadius.m_value;
	if (EnemyFunc::isThereOlimar(bigfoot, detectRadius, nullptr)) {
		isTarget = true;
	} else if (EnemyFunc::isTherePikmin(bigfoot, detectRadius, nullptr)) {
		isTarget = true;
	} else {
		isTarget = false;
	}

	if (isTarget) {
		transit(bigfoot, BIGFOOT_Land, nullptr);
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
	Obj* bigfoot         = static_cast<Obj*>(enemy);
	bigfoot->m_nextState = BIGFOOT_NULL;
	bigfoot->_2D4        = 0.001f;

	bigfoot->setEvent(0, EB_BitterImmune);
	bigfoot->resetEvent(0, EB_Cullable);
	bigfoot->setEvent(0, EB_16);
	bigfoot->resetEvent(0, EB_31);

	bigfoot->setEmotionExcitement();
	bigfoot->m_targetCreature = nullptr;

	bigfoot->m_simVelocity = Vector3f(0.0f);
	bigfoot->startMotion(1, nullptr);

	shadowMgr->addJointShadow(bigfoot);
	shadowMgr->setForceVisible(bigfoot, true);
}

/*
 * --INFO--
 * Address:	802C6864
 * Size:	000178
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->addShadowScale();

	if (bigfoot->m_curAnim->m_isRunning) {
		if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_2) {
			bigfoot->resetEvent(0, EB_BitterImmune);

			for (int i = 0; i < 4; i++) {
				bigfoot->createOnGroundEffect(i, bigfoot->m_waterBox);
			}

			Vector3f position = bigfoot->getPosition();
			cameraMgr->startVibration(15, position, 2);
			rumbleMgr->startRumble(15, position, 2);

		} else if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_END) {
			if (bigfoot->m_health <= 0.0f) {
				transit(bigfoot, BIGFOOT_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(bigfoot, false)) {
				transit(bigfoot, BIGFOOT_Flick, nullptr);
			} else {
				transit(bigfoot, BIGFOOT_Wait, nullptr);
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
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->startProgramedIK();
	bigfoot->setBossAppearBGM();
	bigfoot->setEvent(0, EB_Cullable);
	bigfoot->_2D4 = 1.0f;
	shadowMgr->setForceVisible(bigfoot, false);
}

/*
 * --INFO--
 * Address:	802C6A38
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot          = static_cast<Obj*>(enemy);
	bigfoot->m_nextState  = BIGFOOT_NULL;
	bigfoot->m_stateTimer = 0.0f;
	bigfoot->resetFlickWalkTimeMax();
	bigfoot->setIKParameter();
	bigfoot->m_targetCreature = nullptr;
	bigfoot->m_simVelocity    = Vector3f(0.0f);
	bigfoot->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802C6AA8
 * Size:	0000F4
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->m_stateTimer += sys->m_deltaTime;

	if (bigfoot->m_health <= 0.0f) {
		bigfoot->m_nextState = BIGFOOT_Dead;
		bigfoot->finishMotion();
	} else if (EnemyFunc::isStartFlick(bigfoot, false)) {
		bigfoot->m_nextState = BIGFOOT_Flick;
		bigfoot->finishMotion();
	} else if (bigfoot->m_stateTimer > 5.0f) {
		bigfoot->m_nextState = BIGFOOT_Walk;
		bigfoot->finishMotion();
	}

	if (bigfoot->m_curAnim->m_isRunning && (u32)bigfoot->m_curAnim->m_type == KEYEVENT_END) {
		transit(bigfoot, bigfoot->m_nextState, nullptr);
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
	Obj* bigfoot              = static_cast<Obj*>(enemy);
	bigfoot->m_nextState      = BIGFOOT_NULL;
	bigfoot->m_stateTimer     = 0.0f;
	bigfoot->m_targetCreature = nullptr;
	bigfoot->m_simVelocity    = Vector3f(0.0f);

	bigfoot->startMotion(3, nullptr);
	bigfoot->startBlendMotion();
	bigfoot->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802C6C0C
 * Size:	0000C0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* bigfoot = static_cast<Obj*>(enemy);
	if (bigfoot->m_curAnim->m_isRunning) {
		if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(bigfoot->m_parms);
			EnemyFunc::flickStickPikmin(bigfoot, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			bigfoot->m_toFlick = 0.0f;
		} else if ((u32)bigfoot->m_curAnim->m_type == KEYEVENT_END) {
			if (bigfoot->m_health <= 0.0f) {
				transit(bigfoot, BIGFOOT_Dead, nullptr);
			} else {
				transit(bigfoot, BIGFOOT_Walk, nullptr);
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
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->finishBlendMotion();
	bigfoot->setFlickWalkTimeMax();
	bigfoot->m_isEnraged = true;
	bigfoot->setIKParameter();
}

/*
 * --INFO--
 * Address:	802C6D14
 * Size:	000070
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* bigfoot              = static_cast<Obj*>(enemy);
	bigfoot->m_nextState      = BIGFOOT_NULL;
	bigfoot->m_stateTimer     = 0.0f;
	bigfoot->m_targetCreature = nullptr;
	bigfoot->m_simVelocity    = Vector3f(0.0f);
	bigfoot->startIKMotion();
	bigfoot->getTargetPosition();

	if (bigfoot->m_isEnraged) {
		bigfoot->startBossAttackLoopBGM();
	}
}

/*
 * --INFO--
 * Address:	802C6D84
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* bigfoot = static_cast<Obj*>(enemy);
	bigfoot->getTargetPosition();
	bigfoot->m_stateTimer += sys->m_deltaTime;
	if (bigfoot->m_health <= 0.0f) {
		transit(bigfoot, BIGFOOT_Dead, nullptr);
	} else {
		if (EnemyFunc::isStartFlick(bigfoot, false)) {
			bigfoot->m_nextState = BIGFOOT_Flick;
			bigfoot->finishIKMotion();
		} else if (bigfoot->m_stateTimer > bigfoot->m_flickWalkTimeMax) {
			bigfoot->m_nextState = BIGFOOT_Wait;
			bigfoot->finishIKMotion();
		}

		if (bigfoot->isFinishIKMotion()) {
			transit(bigfoot, bigfoot->m_nextState, nullptr);
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
	Obj* bigfoot = static_cast<Obj*>(enemy);
	if (bigfoot->m_isEnraged) {
		bigfoot->m_isEnraged = false;
		bigfoot->finishBossAttackLoopBGM();
	}
}

} // namespace BigFoot
} // namespace Game
