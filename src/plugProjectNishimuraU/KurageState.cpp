#include "Game/Entities/Kurage.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "efx/TNewkurage.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace Kurage {

/*
 * --INFO--
 * Address:	802AB5F0
 * Size:	0003D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(KURAGE_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateChase);
	registerState(new StateAttack);
	registerState(new StateFall);
	registerState(new StateLand);
	registerState(new StateGround);
	registerState(new StateTakeOff);
	registerState(new StateFlyFlick);
	registerState(new StateGroundFlick);
}

/*
 * --INFO--
 * Address:	802AB9C0
 * Size:	0000CC
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->resetEvent(0, EB_Cullable);
	kurage->resetEvent(0, EB_Flying);
	kurage->m_simVelocity = Vector3f(0.0f);

	if (kurage->isFlying()) {
		kurage->startMotion(0, nullptr);
	} else {
		kurage->startMotion(1, nullptr);
	}

	kurage->setEvent(0, EB_3);
	kurage->createDeadBombEffect();
	kurage->finishEyeBodyEffect();
	PSStartEnemyFatalHitSE(kurage, 0.0f);
	kurage->m_soundObj->setKilled();
}

/*
 * --INFO--
 * Address:	802ABA8C
 * Size:	00014C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	f32 frame   = kurage->getMotionFrame();
	if (frame > 65.0f) {
		s16 arg = (16.0f - 15.0f * ((frame - 65.0f) / 30.0f));
		kurage->setHireEffectLife(arg);
	}

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(kurage, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_3) {
			kurage->deathProcedure();
			kurage->finishHireEffect();
			kurage->createBodyBombEffect();
			kurage->getJAIObject()->startSound(PSSE_EN_KURAGE_HARETSU, 0);

			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(9, position, 2);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			kurage->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802ABBD8
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802ABBDC
 * Size:	00005C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = KURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->setEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->_2C8          = 3.5f;
	kurage->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802ABC38
 * Size:	000174
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->getJAIObject()->startSound(PSSE_EN_KURAGE_SING, 0);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->m_nextState = KURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->m_nextState = KURAGE_Chase;
			kurage->finishMotion();
		}

	} else if (kurage->m_stateTimer > 3.0f) {
		kurage->m_nextState = KURAGE_Move;
		kurage->finishMotion();
	}

	StateID flyingNextState = kurage->getFlyingNextState();
	if (flyingNextState >= 0) {
		transit(kurage, flyingNextState, nullptr);
		return;
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		transit(kurage, kurage->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802ABDAC
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802ABDB0
 * Size:	000074
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = KURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->setRandTarget();
	kurage->setEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->_2C8          = 3.5f;
	kurage->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802ABE24
 * Size:	000208
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->getJAIObject()->startSound(PSSE_EN_KURAGE_SING, 0);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->m_nextState = KURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->m_nextState = KURAGE_Chase;
			kurage->finishMotion();
		}

	} else {
		Vector3f position  = kurage->getPosition();
		Vector3f targetPos = Vector3f(kurage->m_targetPosition);
		if (kurage->m_stateTimer > 10.0f || (sqrDistanceXZ(position, targetPos)) < 625.0f) {
			kurage->m_nextState = KURAGE_Wait;
			kurage->finishMotion();

		} else {
			Parms* parms = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::walkToTarget(kurage, targetPos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
		}
	}

	StateID flyingNextState = kurage->getFlyingNextState();
	if (flyingNextState >= 0) {
		transit(kurage, flyingNextState, nullptr);
		return;
	}

	if (kurage->isFinishMotion()) {
		kurage->m_simVelocity = Vector3f(0.0f);
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		transit(kurage, kurage->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802AC02C
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802AC030
 * Size:	00006C
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->setEvent(0, EB_3);
	kurage->m_nextState = KURAGE_NULL;
	kurage->setEmotionExcitement();
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->_2C8          = 3.5f;
	kurage->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802AC09C
 * Size:	00015C
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* kurage         = static_cast<Obj*>(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->m_nextState = KURAGE_Attack;
			kurage->finishMotion();

		} else {
			Parms* parms = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::walkToTarget(kurage, target, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
		}

	} else {
		kurage->m_nextState = KURAGE_Move;
		kurage->finishMotion();
	}

	StateID flyingNextState = kurage->getFlyingNextState();
	if (flyingNextState >= 0) {
		transit(kurage, flyingNextState, nullptr);
		return;
	}

	if (kurage->isFinishMotion()) {
		kurage->m_simVelocity = Vector3f(0.0f);
	}

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		transit(kurage, kurage->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802AC1F8
 * Size:	000024
 */
void StateChase::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802AC21C
 * Size:	000080
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->setEvent(0, EB_3);
	kurage->m_nextState  = KURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->_2E0         = 0;
	kurage->m_isSucking  = false;
	kurage->resetEvent(0, EB_Cullable);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(9, nullptr);
}

/*
 * --INFO--
 * Address:	802AC29C
 * Size:	000244
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->m_health <= 0.0f || kurage->m_stateTimer > static_cast<Parms*>(kurage->m_parms)->m_properParms.m_fp11.m_value
	    || kurage->m_fallTimer > static_cast<Parms*>(kurage->m_parms)->m_properParms.m_fp04.m_value) {
		kurage->finishMotion();
	}

	f32 offset = kurage->getAttackPitchOffset();
	f32 val    = kurage->setHeightVelocity(offset, 5.0f);

	if (kurage->m_isSucking) {
		if (kurage->suckPikmin(val)) {
			kurage->finishMotion();
		}

		Vector3f suckPos = kurage->getPosition();
		suckPos.y -= val;
		kurage->updateSuckEffect(suckPos);
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			Vector3f suckPos = kurage->getPosition();
			suckPos.y -= val;
			kurage->startSuckEffect(suckPos);
			kurage->m_isSucking = true;

		} else if ((u32)kurage->m_curAnim->m_type == 1) {
			if (kurage->isFinishMotion()) {
				kurage->finishSuckEffect();
				kurage->m_isSucking = false;
			}

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			StateID nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, KURAGE_Attack, nullptr);

			} else {
				transit(kurage, KURAGE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802AC4E0
 * Size:	000038
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* kurage         = static_cast<Obj*>(enemy);
	kurage->m_isSucking = false;
	kurage->setEvent(0, EB_Cullable);
	kurage->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	802AC518
 * Size:	000068
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = KURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->setEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(8, nullptr);
}

/*
 * --INFO--
 * Address:	802AC580
 * Size:	000180
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->isFlying()) {
		f32 timer = kurage->m_stateTimer;
		kurage->setHeightVelocity(kurage->getFallPitchOffset(timer), 2.0f);

		f32 limit = timer;
		limit *= 30.0f;
		if (limit > 65.0f) {
			Vector3f velocity = kurage->getVelocity();
			velocity.y -= 100.0f;
			kurage->setVelocity(velocity);
			kurage->resetEvent(0, EB_3);
			kurage->finishMotion();
		}
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		if (kurage->m_health <= 0.0f) {
			transit(kurage, KURAGE_Dead, nullptr);
		} else {
			transit(kurage, KURAGE_Land, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802AC700
 * Size:	000024
 */
void StateFall::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802AC724
 * Size:	0000C0
 */
void StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_stateTimer = 0.0f;
	kurage->resetEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(6, nullptr);
	kurage->createDownEffect();

	Vector3f position = kurage->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(9, position, 2);
}

/*
 * --INFO--
 * Address:	802AC7E4
 * Size:	000080
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		if (kurage->m_health <= 0.0f) {
			transit(kurage, KURAGE_Dead, nullptr);
		} else {
			transit(kurage, KURAGE_Ground, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802AC864
 * Size:	000024
 */
void StateLand::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802AC888
 * Size:	000068
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = KURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->resetEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802AC8F0
 * Size:	0000F0
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->isFlying()) {
		kurage->setHeightVelocity(kurage->getTakeOffPitchOffset(), 2.0f);
	}

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			kurage->setEvent(0, EB_3);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			if (kurage->m_health <= 0.0f) {
				transit(kurage, KURAGE_Dead, nullptr);
			} else {
				transit(kurage, KURAGE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802AC9E0
 * Size:	000024
 */
void StateTakeOff::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802ACA04
 * Size:	000060
 */
void StateGround::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_stateTimer = 0.0f;
	kurage->resetEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(4, nullptr);
}

/*
 * --INFO--
 * Address:	802ACA64
 * Size:	000114
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->m_stuckPikminCount == 0 || kurage->m_stateTimer > static_cast<Parms*>(kurage->m_parms)->m_properParms.m_fp10.m_value) {
		kurage->finishMotion();
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		if (kurage->m_health <= 0.0f) {
			transit(kurage, KURAGE_Dead, nullptr);
		} else if (kurage->m_stuckPikminCount != 0) {
			transit(kurage, KURAGE_GroundFlick, nullptr);
		} else {
			transit(kurage, KURAGE_TakeOff, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802ACB78
 * Size:	000024
 */
void StateGround::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802ACB9C
 * Size:	0000E0
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->setEvent(0, EB_3);
	kurage->m_nextState   = KURAGE_NULL;
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(2, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TNewkurageFlick flickFx;
	flickFx.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802ACC7C
 * Size:	00017C
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	f32 val     = kurage->setHeightVelocity(kurage->getFlickPitchOffset(), 5.0f);
	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::flickStickPikmin(kurage, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			kurage->m_toFlick = 0.0f;
			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(9, position, 2);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			int nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, KURAGE_Attack, nullptr);

			} else {
				transit(kurage, KURAGE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802ACDF8
 * Size:	000024
 */
void StateFlyFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802ACE1C
 * Size:	0000DC
 */
void StateGroundFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_stateTimer = 0.0f;
	kurage->resetEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(3, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TNewkurageFlick flickFx;
	flickFx.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802ACEF8
 * Size:	00014C
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(9, position, 2);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_3) {
			Parms* parms1 = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::flickNearbyNavi(kurage, parms1->m_general.m_shakeRange.m_value, parms1->m_general.m_shakeKnockback.m_value,
			                           parms1->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			Parms* parms2 = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::flickNearbyPikmin(kurage, parms2->m_general.m_shakeRange.m_value, parms2->m_general.m_shakeKnockback.m_value,
			                             parms2->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

			Parms* parms3 = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::flickStickPikmin(kurage, parms3->m_general.m_shakeRateMaybe.m_value, parms3->m_general.m_shakeKnockback.m_value,
			                            parms3->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			kurage->m_toFlick = 0.0f;

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			if (kurage->m_health <= 0.0f) {
				transit(kurage, KURAGE_Dead, nullptr);

			} else {
				transit(kurage, KURAGE_TakeOff, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802AD044
 * Size:	000024
 */
void StateGroundFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

} // namespace Kurage
} // namespace Game
