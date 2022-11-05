#include "Game/Entities/BigTreasure.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace BigTreasure {

static const int someBigTreasureStateArray[3] = { 0, 0, 0 };

static const char debugBigTreasureStateName[] = "246-BigTreasureState";

/*
 * --INFO--
 * Address:	802D72CC
 * Size:	00042C
 */
void FSM::init(EnemyBase* enemy)
{
	create(BIGTREASURE_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateLand);
	registerState(new StateWait);
	registerState(new StateItemWait);
	registerState(new StateFlick);
	registerState(new StatePreAttack);
	registerState(new StateAttack);
	registerState(new StatePutItem);
	registerState(new StateDropItem);
	registerState(new StateWalk);
	registerState(new StateItemWalk);
}

/*
 * --INFO--
 * Address:	802D76F8
 * Size:	000080
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->setAttackMaterialColor(false);
	titan->forceFinishIKMotion();
	titan->checkJointScaleOn();
	titan->deathProcedure();
	titan->m_simVelocity = Vector3f(0.0f);
	titan->setEmotionCaution();
	titan->startBlendAnimation(27, true);
	titan->createDeadBombFootEffect();
}

/*
 * --INFO--
 * Address:	802D7778
 * Size:	000230
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	f32 frame  = titan->getMotionFrame();
	if (frame > 280.0f) {
		titan->subShadowScale();
	}

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_2) {
			titan->startDeadBubbleMouthEffect();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_3) {
			titan->startDeadBubbleBodyEffect();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_4) {
			titan->startDeadBubbleLegEffect(0);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_5) {
			titan->startDeadBubbleLegEffect(1);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_6) {
			titan->startDeadBubbleLegEffect(2);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_7) {
			titan->startDeadBubbleLegEffect(3);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_8) {
			titan->createDeadBombLegEffect(0);
			titan->finishDeadBubbleLegEffect(0);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_9) {
			titan->createDeadBombLegEffect(1);
			titan->finishDeadBubbleLegEffect(1);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_10) {
			titan->createDeadBombLegEffect(2);
			titan->finishDeadBubbleLegEffect(2);
			titan->finishDeadBubbleMouthEffect();
			Vector3f position = titan->getPosition();
			cameraMgr->startVibration(21, position, 2);
			rumbleMgr->startRumble(12, position, 2);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_11) {
			titan->createDeadBombLegEffect(3);
			titan->finishDeadBubbleLegEffect(3);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_100) {
			titan->throwupItem();
			titan->releaseItemLoozy();
			titan->createDeadBombBodyEffect();
			titan->finishDeadBubbleBodyEffect();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			titan->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D79A8
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802D79AC
 * Size:	000080
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = 0.0f;
	titan->setAttackMaterialColor(false);
	titan->setEvent(0, EB_BitterImmune);
	titan->m_simVelocity    = Vector3f(0.0f);
	titan->m_targetCreature = nullptr;
	titan->startBlendAnimation(0, false);
	titan->stopMotion();
}

/*
 * --INFO--
 * Address:	802D7A2C
 * Size:	0000FC
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (titan->m_stateTimer < 0.01f) {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(titan->m_parms)->m_general.m_privateRadius.m_value;
		if (EnemyFunc::isThereOlimar(titan, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(titan, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			if (titan->startBigTreasureBootUpDemo()) {
				titan->m_stateTimer = 0.01f;
			} else {
				titan->m_stateTimer = 4.0f;
			}
		}
	} else {
		titan->m_stateTimer += sys->m_deltaTime;
		if (titan->m_stateTimer > 4.0f) {
			transit(titan, BIGTREASURE_Land, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D7B28
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802D7B2C
 * Size:	0000AC
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan         = static_cast<Obj*>(enemy);
	titan->m_nextState = BIGTREASURE_NULL;
	titan->setAttackMaterialColor(false);
	titan->m_simVelocity    = Vector3f(0.0f);
	titan->m_targetCreature = nullptr;
	titan->setEmotionExcitement();
	shadowMgr->addJointShadow(titan);
	titan->startMotion();
	titan->createAppearBodyEffect();
	titan->createAppearLegEffect(1);
	Parms* parms = static_cast<Parms*>(titan->m_parms);
	EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
	titan->setBossAppearBGM();
}

/*
 * --INFO--
 * Address:	802D7BD8
 * Size:	000324
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_2) {
			titan->createOnGroundEffect(1, titan->m_waterBox);
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_3) {
			titan->createAppearLegEffect(2);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_4) {
			titan->createOnGroundEffect(2, titan->m_waterBox);
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_5) {
			titan->createAppearLegEffect(0);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_6) {
			titan->createOnGroundEffect(0, titan->m_waterBox);
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_7) {
			titan->createAppearLegEffect(3);

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_8) {
			titan->createOnGroundEffect(3, titan->m_waterBox);
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);

		} else if ((u32)titan->m_curAnim->m_type == 9) {
			Vector3f position = titan->getPosition();
			cameraMgr->startVibration(2, position, 2);
			rumbleMgr->startRumble(5, position, 2);
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);

		} else if ((u32)titan->m_curAnim->m_type == 10) {
			if (!titan->isCapturedTreasure()) {
				titan->startMotion(1, nullptr);
			}

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			if (titan->m_health <= 0.0f) {
				transit(titan, BIGTREASURE_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(titan, false)) {
				if (titan->isCapturedTreasure()) {
					transit(titan, BIGTREASURE_PreAttack, nullptr);
				} else {
					transit(titan, BIGTREASURE_Flick, nullptr);
				}
			} else if (titan->isCapturedTreasure()) {
				transit(titan, BIGTREASURE_ItemWalk, nullptr);
			} else {
				transit(titan, BIGTREASURE_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D7EFC
 * Size:	000030
 */
void StateLand::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->resetEvent(0, EB_BitterImmune);
	titan->startProgramedIK();
}

/*
 * --INFO--
 * Address:	802D7F2C
 * Size:	0000A0
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = randWeightFloat(5.0f);
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	titan->startBlendAnimation(25, true);
	titan->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802D7FCC
 * Size:	000140
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->m_stateTimer += sys->m_deltaTime;

	if (titan->m_health <= 0.0f) {
		titan->m_nextState = BIGTREASURE_Dead;
		titan->finishMotion();
	} else if (EnemyFunc::isStartFlick(titan, false)) {
		titan->m_nextState = BIGTREASURE_Flick;
		titan->finishMotion();
	} else if (titan->m_stateTimer > 5.0f) {
		titan->m_nextState = BIGTREASURE_Walk;
		titan->finishMotion();
	}

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		} else if ((u32)titan->m_curAnim->m_type == 0) {
			titan->getJAIObject()->startSound(PSSE_EN_BIGTAKARA_WAIT2, nullptr);
		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			transit(titan, titan->m_nextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D810C
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802D8130
 * Size:	0000A0
 */
void StateItemWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = randWeightFloat(5.0f);
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	titan->startBlendAnimation(2, true);
	titan->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802D81D0
 * Size:	000124
 */
void StateItemWait::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(titan, false) || titan->isAttackLimitTime()) {
		titan->m_nextState = BIGTREASURE_PreAttack;
		titan->finishMotion();

	} else if (titan->m_stateTimer > 5.0f) {
		titan->m_nextState = BIGTREASURE_ItemWalk;
		titan->finishMotion();
	}

	titan->m_stateTimer += sys->m_deltaTime;

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			transit(titan, titan->m_nextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D82F4
 * Size:	000024
 */
void StateItemWait::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802D8318
 * Size:	000074
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = 0.0f;
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	titan->startBlendAnimation(26, true);
	titan->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802D838C
 * Size:	0000DC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			titan->m_toFlick = 0.0f;
			titan->startBossFlickBGM();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			if (titan->m_health <= 0.0f) {
				transit(titan, BIGTREASURE_Dead, nullptr);

			} else {
				transit(titan, BIGTREASURE_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D8468
 * Size:	000024
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802D848C
 * Size:	000098
 */
void StatePreAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = 0.0f;
	titan->resetAttackLimitTimer();
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	titan->setTreasureAttack();
	int animIdx = titan->getPreAttackAnimIndex();
	titan->startBlendAnimation(animIdx, true);
	titan->startBlendMotion();
	titan->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802D8524
 * Size:	00019C
 */
void StatePreAttack::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (!titan->isCapturedTreasure(titan->m_attackIndex)) {
		transit(titan, BIGTREASURE_PreAttack, nullptr);
		return;
	}

	f32 timer = titan->m_stateTimer;
	if (timer > titan->getPreAttackTimeMax()) {
		titan->finishMotion();
	}

	titan->m_stateTimer += sys->m_deltaTime;

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_2) {
			titan->setAttackMaterialColor(true);
			Parms* parms = static_cast<Parms*>(titan->m_parms);
			EnemyFunc::flickStickPikmin(titan, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			titan->m_toFlick = 0.0f;

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_3) {
			int fireIdx = titan->getFireAttackAnimIndex();
			if (fireIdx != 3) {
				titan->startMotion(fireIdx, nullptr);
			}

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			transit(titan, BIGTREASURE_Attack, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D86C0
 * Size:	000024
 */
void StatePreAttack::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802D86E4
 * Size:	000078
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = 0.0f;

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	int animIdx = titan->getAttackAnimIndex();
	titan->startBlendAnimation(animIdx, true);
	titan->startBlendMotion();
	titan->startBossAttackBGM();
}

/*
 * --INFO--
 * Address:	802D875C
 * Size:	000148
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (!titan->isCapturedTreasure(titan->m_attackIndex)) {
		transit(titan, BIGTREASURE_PreAttack, nullptr);
		return;
	}

	f32 timer = titan->m_stateTimer;
	if (timer > titan->getAttackTimeMax()) {
		titan->finishMotion();
	}

	titan->m_stateTimer += sys->m_deltaTime;

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		}

		if ((u32)titan->m_curAnim->m_type == KEYEVENT_2) {
			titan->startAttack();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			transit(titan, BIGTREASURE_PutItem, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D88A4
 * Size:	000040
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
	titan->finishAttack();
	titan->finishBossAttackBGM();
}

/*
 * --INFO--
 * Address:	802D88E4
 * Size:	000080
 */
void StatePutItem::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = 0.0f;
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	int animIdx = titan->getPutItemAnimIndex();
	titan->startBlendAnimation(animIdx, true);
	titan->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802D8964
 * Size:	000128
 */
void StatePutItem::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (!titan->isCapturedTreasure()) {
		transit(titan, BIGTREASURE_DropItem, nullptr);
		return;
	}

	if (!titan->isCapturedTreasure(titan->m_attackIndex)) {
		transit(titan, BIGTREASURE_PreAttack, nullptr);
		return;
	}

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();
		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			if (EnemyFunc::isStartFlick(titan, false)) {
				transit(titan, BIGTREASURE_PreAttack, nullptr);
			} else {
				transit(titan, BIGTREASURE_ItemWalk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D8A8C
 * Size:	000024
 */
void StatePutItem::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802D8AB0
 * Size:	000074
 */
void StateDropItem::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = 0.0f;
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);
	titan->startBlendAnimation(24, true);
	titan->startBlendMotion();
}

/*
 * --INFO--
 * Address:	802D8B24
 * Size:	0000EC
 */
void StateDropItem::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			if (titan->m_health <= 0.0f) {
				transit(titan, BIGTREASURE_Dead, nullptr);
			} else if (EnemyFunc::isStartFlick(titan, false)) {
				transit(titan, BIGTREASURE_Flick, nullptr);
			} else {
				transit(titan, BIGTREASURE_Walk, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D8C10
 * Size:	000024
 */
void StateDropItem::cleanup(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->finishBlendMotion();
}

/*
 * --INFO--
 * Address:	802D8C34
 * Size:	0000A8
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = randWeightFloat(10.0f);
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	titan->startBlendAnimation(29, true);
	titan->startIKMotion();
	titan->getTargetPosition();
}

/*
 * --INFO--
 * Address:	802D8CDC
 * Size:	000144
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->getTargetPosition();

	if (titan->m_health <= 0.0f) {
		transit(titan, BIGTREASURE_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(titan, false)) {
		titan->m_nextState = BIGTREASURE_Flick;
		titan->finishIKMotion();

	} else if (titan->m_stateTimer > 10.0f) {
		titan->m_nextState = BIGTREASURE_Wait;
		titan->finishIKMotion();
	}

	titan->m_stateTimer += sys->m_deltaTime;

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			if (titan->isFinishIKMotion()) {
				transit(titan, titan->m_nextState, nullptr);
			} else {
				titan->startBlendAnimation(29, false);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D8E20
 * Size:	000004
 */
void StateWalk::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802D8E24
 * Size:	0000A8
 */
void StateItemWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* titan          = static_cast<Obj*>(enemy);
	titan->m_nextState  = BIGTREASURE_NULL;
	titan->m_stateTimer = randWeightFloat(10.0f);
	titan->setAttackMaterialColor(false);

	titan->m_targetCreature = nullptr;
	titan->m_simVelocity    = Vector3f(0.0f);

	titan->startBlendAnimation(28, true);
	titan->startIKMotion();
	titan->getTargetPosition();
}

/*
 * --INFO--
 * Address:	802D8ECC
 * Size:	0001EC
 */
void StateItemWalk::exec(EnemyBase* enemy)
{
	Obj* titan = static_cast<Obj*>(enemy);
	titan->getTargetPosition();

	if (titan->m_health <= 0.0f) {
		transit(titan, BIGTREASURE_Dead, nullptr);
		return;
	}

	if (titan->getCurrAnimationIndex() == 28 && !titan->isCapturedTreasure()) {
		titan->setAttackMaterialColor(false);
		titan->startBlendAnimation(24, true);
	} else {
		if (EnemyFunc::isStartFlick(titan, false) || titan->isAttackLimitTime()) {
			if (titan->isCapturedTreasure()) {
				titan->m_nextState = BIGTREASURE_PreAttack;
			} else {
				titan->m_nextState = BIGTREASURE_Flick;
			}

			titan->finishIKMotion();

		} else if (titan->m_stateTimer > 10.0f) {
			if (titan->isCapturedTreasure()) {
				titan->m_nextState = BIGTREASURE_ItemWait;
			} else {
				titan->m_nextState = BIGTREASURE_Wait;
			}

			titan->finishIKMotion();
		}
	}

	titan->m_stateTimer += sys->m_deltaTime;

	if (titan->isFinishIKMotion()) {
		transit(titan, titan->m_nextState, nullptr);
	}

	if (titan->m_curAnim->m_isRunning) {
		if ((u32)titan->m_curAnim->m_type == KEYEVENT_END_BLEND) {
			titan->endBlendAnimation();

		} else if ((u32)titan->m_curAnim->m_type == KEYEVENT_END) {
			if (titan->isCapturedTreasure()) {
				titan->startBlendAnimation(28, false);
			} else {
				titan->startBlendAnimation(25, false);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D90B8
 * Size:	000004
 */
void StateItemWalk::cleanup(EnemyBase* enemy) { }

} // namespace BigTreasure
} // namespace Game
