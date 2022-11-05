#include "Game/Entities/Houdai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Houdai {

/*
 * --INFO--
 * Address:	802BDAB0
 * Size:	000278
 */
void FSM::init(EnemyBase* enemy)
{
	create(HOUDAI_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateFlick);
	registerState(new StateWalk);
	registerState(new StateShot);
}

/*
 * --INFO--
 * Address:	802BDD28
 * Size:	0000BC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	houdai->forceFinishIKMotion();
	houdai->deathProcedure();
	houdai->m_simVelocity = Vector3f(0.0f);
	houdai->setEmotionCaution();
	houdai->startMotion(0, nullptr);
	houdai->createHoudaiDeadEffect();
	houdai->startChimneyEffect();
	houdai->finishSteamEffect();

	Vector3f position = houdai->getPosition();
	rumbleMgr->startRumble(7, position, 2);
}

/*
 * --INFO--
 * Address:	802BDDE4
 * Size:	0000B8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	if (houdai->m_curAnim->m_isRunning && (u32)houdai->m_curAnim->m_type == KEYEVENT_END) {
		houdai->throwupItem();
		houdai->finishChimneyEffect();
		houdai->createDeadBombEffect();

		Vector3f position = houdai->getPosition();
		cameraMgr->startVibration(21, position, 2);
		houdai->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BDE9C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BDEA0
 * Size:	000078
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai         = static_cast<Obj*>(enemy);
	houdai->m_nextState = HOUDAI_NULL;
	houdai->setEvent(0, EB_BitterImmune);
	houdai->resetEvent(0, EB_16);
	houdai->m_targetCreature = nullptr;
	houdai->m_simVelocity    = Vector3f(0.0f);
	houdai->startMotion(1, nullptr);
	houdai->stopMotion();
}

/*
 * --INFO--
 * Address:	802BDF18
 * Size:	0000C4
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	if (!houdai->isEvent(0, EB_Damage)) {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(houdai->m_parms)->m_general.m_privateRadius.m_value;
		if (EnemyFunc::isThereOlimar(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (!isTarget) {
			return;
		}
	}

	transit(houdai, HOUDAI_Land, nullptr);
}

/*
 * --INFO--
 * Address:	802BDFDC
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BDFE0
 * Size:	0000E4
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai         = static_cast<Obj*>(enemy);
	houdai->m_nextState = HOUDAI_NULL;
	houdai->setEvent(0, EB_BitterImmune);
	houdai->setEvent(0, EB_16);
	houdai->setEmotionExcitement();
	houdai->m_targetCreature = nullptr;
	houdai->m_simVelocity    = Vector3f(0.0f);

	houdai->startMotion(1, nullptr);
	houdai->createAppearEffect();
	shadowMgr->addJointShadow(houdai);

	Vector3f position = houdai->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(6, position, 2);
}

/*
 * --INFO--
 * Address:	802BE0C4
 * Size:	0002F0
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	if (houdai->isStopMotion()) {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(houdai->m_parms)->m_general.m_privateRadius.m_value;
		if (EnemyFunc::isThereOlimar(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(houdai, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			houdai->startMotion();
			houdai->setEmotionExcitement();
			houdai->createAppearEffect();
			shadowMgr->addJointShadow(houdai);

			Vector3f position = houdai->getPosition();
			cameraMgr->startVibration(0, position, 2);
			rumbleMgr->startRumble(6, position, 2);
		}
	}

	if (houdai->m_curAnim->m_isRunning) {
		if ((u32)houdai->m_curAnim->m_type == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);
			houdai->startChimneyEffect();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_3) {
			houdai->finishChimneyEffect();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_4) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);
			houdai->createAppearFootEffect(0);

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_5) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);
			houdai->createOnGroundEffect(0, houdai->m_waterBox);
			houdai->createAppearFootEffect(2);
			houdai->createAppearFootEffect(1);

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_6) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);
			houdai->createAppearHahenEffect();
			houdai->createAppearFootEffect(3);

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_END) {
			EnemyFunc::flickStickPikmin(houdai, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);
			if (houdai->m_health <= 0.0f) {
				transit(houdai, HOUDAI_Dead, nullptr);

			} else if (EnemyFunc::isStartFlick(houdai, false)) {
				transit(houdai, HOUDAI_Flick, nullptr);

			} else {
				transit(houdai, HOUDAI_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802BE3B4
 * Size:	000050
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	houdai->resetEvent(0, EB_BitterImmune);
	houdai->startProgramedIK();
	houdai->startSteamEffect(true);
	houdai->setBossAppearBGM();
}

/*
 * --INFO--
 * Address:	802BE404
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai              = static_cast<Obj*>(enemy);
	houdai->m_nextState      = HOUDAI_NULL;
	houdai->m_stateTimer     = 0.0f;
	houdai->m_stateDuration  = 1.5f + randWeightFloat(1.5f);
	houdai->m_targetCreature = nullptr;
	houdai->m_simVelocity    = Vector3f(0.0f);
	houdai->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802BE49C
 * Size:	000118
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	houdai->m_stateTimer += sys->m_deltaTime;

	if (houdai->m_health <= 0.0f) {
		houdai->m_nextState = HOUDAI_Dead;
		houdai->finishMotion();
	} else if (EnemyFunc::isStartFlick(houdai, false)) {
		houdai->m_nextState = HOUDAI_Flick;
		houdai->finishMotion();
	} else if (houdai->isTransitShotGunState()) {
		houdai->m_nextState = HOUDAI_Shot;
		houdai->finishMotion();
	} else if (houdai->m_stateTimer > houdai->m_stateDuration) {
		houdai->m_nextState = HOUDAI_Walk;
		houdai->finishMotion();
	}

	if (houdai->m_curAnim->m_isRunning && (u32)houdai->m_curAnim->m_type == KEYEVENT_END) {
		transit(houdai, houdai->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BE5B4
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BE5B8
 * Size:	000064
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai              = static_cast<Obj*>(enemy);
	houdai->m_nextState      = HOUDAI_NULL;
	houdai->m_stateTimer     = 0.0f;
	houdai->m_targetCreature = nullptr;
	houdai->m_simVelocity    = Vector3f(0.0f);
	houdai->startMotion(3, nullptr);
	houdai->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802BE61C
 * Size:	0000F0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	if (houdai->m_curAnim->m_isRunning) {
		if ((u32)houdai->m_curAnim->m_type == KEYEVENT_2) {
			houdai->startChimneyEffect();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_3) {
			Parms* parms = static_cast<Parms*>(houdai->m_parms);
			EnemyFunc::flickStickPikmin(houdai, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			houdai->m_toFlick = 0.0f;
			houdai->startBossFlickBGM();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_4) {
			houdai->finishChimneyEffect();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_END) {
			if (houdai->m_health <= 0.0f) {
				transit(houdai, HOUDAI_Dead, nullptr);

			} else {
				transit(houdai, HOUDAI_Shot, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802BE70C
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	houdai->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802BE730
 * Size:	000098
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai              = static_cast<Obj*>(enemy);
	houdai->m_nextState      = HOUDAI_NULL;
	houdai->m_stateTimer     = 0.0f;
	houdai->m_stateDuration  = 3.5f + randWeightFloat(3.5f);
	houdai->m_targetCreature = nullptr;
	houdai->m_simVelocity    = Vector3f(0.0f);
	houdai->startIKMotion();
	houdai->getTargetPosition();
}

/*
 * --INFO--
 * Address:	802BE7C8
 * Size:	000100
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	houdai->getTargetPosition();
	houdai->m_stateTimer += sys->m_deltaTime;

	if (EnemyFunc::isStartFlick(houdai, false)) {
		houdai->m_nextState = HOUDAI_Flick;
		houdai->finishIKMotion();
	} else if (houdai->m_stateTimer > houdai->m_stateDuration) {
		houdai->m_nextState = HOUDAI_Wait;
		houdai->finishIKMotion();
	}

	if (houdai->m_health <= 0.0f) {
		transit(houdai, HOUDAI_Dead, nullptr);
	} else if (houdai->isFinishIKMotion()) {
		transit(houdai, houdai->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BE8C8
 * Size:	000004
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BE8CC
 * Size:	000090
 */
void StateShot::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* houdai          = static_cast<Obj*>(enemy);
	houdai->m_nextState  = HOUDAI_NULL;
	houdai->m_stateTimer = 0.0f;
	houdai->setTargetPattern();
	houdai->_2ED             = 0;
	houdai->_2CC             = 0.0f;
	houdai->m_targetCreature = nullptr;
	houdai->m_simVelocity    = Vector3f(0.0f);
	houdai->startMotion(4, nullptr);
	houdai->startBlendMotion();
	houdai->createShotGunOpenEffect();
	houdai->_2EF = 0;
	houdai->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802BE95C
 * Size:	0003B0
 */
void StateShot::exec(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);

	if (houdai->isStopMotion()) {
		if (houdai->_2ED != 0) {
			if (houdai->isFinishMotion() || houdai->_2CC > static_cast<Parms*>(houdai->m_parms)->m_properParms.m_fp12.m_value) {
				houdai->setShotGunEmitKeepTimerOn();
				houdai->startMotion();
			}

			houdai->getJAIObject()->startSound(PSSE_EN_HOUDAI_MOTOR, 0);

		} else if (houdai->isFinishShotGun()) {
			if (houdai->isShotGunLockOn()) {
				if (houdai->m_stateTimer > 2.0f) {
					houdai->_2ED         = 0;
					houdai->m_stateTimer = 0.0f;
					houdai->startMotion();
				}
			} else {
				houdai->getJAIObject()->startSound(PSSE_EN_HOUDAI_MOTOR, 0);
			}
		} else {
			if (houdai->isShotGunLockOn() && (houdai->m_stateTimer > 2.0f)) {
				houdai->_2ED         = 1;
				houdai->_2CC         = 0.0f;
				houdai->m_stateTimer = 0.0f;
				houdai->startMotion();
				houdai->startBossAttackLoopBGM();
			}

			houdai->getJAIObject()->startSound(PSSE_EN_HOUDAI_MOTOR, 0);
		}
	}

	if (houdai->isShotGunRotation()) {
		houdai->setShotGunTargetPosition();
		if (houdai->m_stateTimer > static_cast<Parms*>(houdai->m_parms)->m_general.m_fp15.m_value) {
			houdai->m_stateTimer = 0.0f;
			houdai->finishMotion();
		}
	}

	houdai->_2CC += sys->m_deltaTime;
	houdai->m_stateTimer += sys->m_deltaTime;

	if (houdai->m_health <= 0.0f) {
		if (houdai->isStopMotion()) {
			houdai->startMotion();
		}
		houdai->finishBossAttackLoopBGM();
		houdai->finishMotion();
	}

	if (houdai->m_curAnim->m_isRunning) {
		if ((u32)houdai->m_curAnim->m_type == KEYEVENT_2) {
			houdai->m_stateTimer = 0.0f;
			houdai->stopMotion();
			houdai->startShotGunRotation();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_3) {
			if (!houdai->isFinishMotion()) {
				Parms* parms = static_cast<Parms*>(houdai->m_parms);
				EnemyFunc::flickStickPikmin(houdai, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
				                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
				houdai->m_toFlick = 0.0f;
				houdai->emitShotGun();
			}

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_4) {
			if (!houdai->isFinishMotion()) {
				Parms* parms2 = static_cast<Parms*>(houdai->m_parms);
				if (parms2->m_general.m_fp15.m_value - houdai->m_stateTimer > parms2->m_properParms.m_fp12.m_value
				    && houdai->_2CC > parms2->m_properParms.m_fp10.m_value) {
					houdai->setShotGunEmitKeepTimerOff();
					houdai->stopMotion();
				}
			}
		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_5) {
			houdai->_2ED         = 0;
			houdai->m_stateTimer = 0.0f;
			houdai->stopMotion();
			houdai->finishShotGunRotation();
			houdai->finishBossAttackLoopBGM();

		} else if ((u32)houdai->m_curAnim->m_type == KEYEVENT_END) {
			if (houdai->m_health <= 0.0f) {
				transit(houdai, HOUDAI_Dead, nullptr);

			} else {
				transit(houdai, HOUDAI_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802BED0C
 * Size:	000038
 */
void StateShot::cleanup(EnemyBase* enemy)
{
	Obj* houdai = static_cast<Obj*>(enemy);
	houdai->finishBlendMotion();
	houdai->finishBossAttackLoopBGM();
}

} // namespace Houdai
} // namespace Game
