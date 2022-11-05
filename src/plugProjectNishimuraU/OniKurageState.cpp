#include "Game/Entities/OniKurage.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/MapMgr.h"
#include "efx/TKurage.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace OniKurage {

/*
 * --INFO--
 * Address:	802D1AE0
 * Size:	000424
 */
void FSM::init(EnemyBase* enemy)
{
	create(ONIKURAGE_Count);
	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateChase);
	registerState(new StateAttack);
	registerState(new StateFall);
	registerState(new StateDrop);
	registerState(new StateLand);
	registerState(new StateGround);
	registerState(new StateTakeOff);
	registerState(new StateFlyFlick);
	registerState(new StateGroundFlick);
}

/*
 * --INFO--
 * Address:	802D1F04
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
 * Address:	802D1FD0
 * Size:	00018C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	f32 frame   = kurage->getMotionFrame();
	if (frame > 30.0f) {
		kurage->flickStickNavi(true);
	}

	if (frame > 65.0f) {
		s16 arg = (20.0f - 19.0f * ((frame - 65.0f) / 30.0f));
		kurage->setHireEffectLife(arg);
	}

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(kurage, 1.0f, 100.0f, 0.0f, -1000.0f, nullptr);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_3) {
			kurage->deathProcedure();
			kurage->finishHireEffect();
			kurage->createBodyBombEffect();
			kurage->getJAIObject()->startSound(PSSE_EN_ONIKURAGE_HARETSU, 0);

			Vector3f position = kurage->getPosition();
			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(10, position, 2);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			kurage->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D215C
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802D2160
 * Size:	00005C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = ONIKURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->setEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->_2C8          = 3.5f;
	kurage->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802D21BC
 * Size:	000148
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kurage         = static_cast<Obj*>(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->m_nextState = ONIKURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->m_nextState = ONIKURAGE_Chase;
			kurage->finishMotion();
		}

	} else if (kurage->m_stateTimer > 3.0f) {
		kurage->m_nextState = ONIKURAGE_Move;
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
 * Address:	802D2304
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802D2308
 * Size:	000074
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = ONIKURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->setRandTarget();
	kurage->setEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->_2C8          = 3.5f;
	kurage->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802D237C
 * Size:	0001DC
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* kurage         = static_cast<Obj*>(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->m_nextState = ONIKURAGE_Attack;
			kurage->finishMotion();

		} else {
			kurage->m_nextState = ONIKURAGE_Chase;
			kurage->finishMotion();
		}

	} else {
		Vector3f position  = kurage->getPosition();
		Vector3f targetPos = Vector3f(kurage->m_targetPosition);
		if (kurage->m_stateTimer > 10.0f || (sqrDistanceXZ(position, targetPos)) < 625.0f) {
			kurage->m_nextState = ONIKURAGE_Wait;
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
 * Address:	802D2558
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802D255C
 * Size:	00006C
 */
void StateChase::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->setEvent(0, EB_3);
	kurage->m_nextState = ONIKURAGE_NULL;
	kurage->setEmotionExcitement();
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->_2C8          = 3.5f;
	kurage->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802D25C8
 * Size:	00015C
 */
void StateChase::exec(EnemyBase* enemy)
{
	Obj* kurage         = static_cast<Obj*>(enemy);
	f32 movePitchOffset = kurage->getMovePitchOffset();
	f32 val             = kurage->setHeightVelocity(movePitchOffset, 0.0f);

	if (Creature* target = kurage->getSearchedTarget(val)) {
		if (kurage->isSuck(val, target)) {
			kurage->m_nextState = ONIKURAGE_Attack;
			kurage->finishMotion();

		} else {
			Parms* parms = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::walkToTarget(kurage, target, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
		}

	} else {
		kurage->m_nextState = ONIKURAGE_Move;
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
 * Address:	802D2724
 * Size:	000024
 */
void StateChase::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D2748
 * Size:	000080
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->setEvent(0, EB_3);
	kurage->m_nextState  = ONIKURAGE_NULL;
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
 * Address:	802D27C8
 * Size:	000320
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if ((kurage->m_health <= 0.0f || kurage->isFinishNaviSuck())
	    && (kurage->isNaviSucked() || kurage->m_stateTimer > static_cast<Parms*>(kurage->m_parms)->m_properParms.m_fp11.m_value
	        || kurage->m_fallTimer > static_cast<Parms*>(kurage->m_parms)->m_properParms.m_fp04.m_value)) {
		kurage->finishMotion();
	}

	f32 offset = kurage->getAttackPitchOffset();
	f32 val    = kurage->setHeightVelocity(offset, 0.0f);

	if (kurage->m_isSucking) {
		if (kurage->suckPikmin(val)) {
			if (kurage->isFinishNaviSuck()) {
				kurage->finishMotion();
			}
		} else if (!kurage->isFinishMotion()) {
			kurage->suckNavi(val);
		}

		Vector3f suckPos = kurage->getPosition();
		suckPos.y -= val;
		kurage->updateSuckEffect(suckPos);
		kurage->updateCollPartOffset();
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			Vector3f suckPos = kurage->getPosition();
			suckPos.y -= val;
			kurage->startSuckEffect(suckPos);
			kurage->m_isSucking = true;
			kurage->setEvent(0, EB_22);

		} else if ((u32)kurage->m_curAnim->m_type == 1) {
			if (kurage->isFinishMotion()) {
				kurage->finishSuckEffect();
				kurage->m_isSucking = false;
				kurage->resetEvent(0, EB_22);
			}

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			if (kurage->m_health <= 0.0f) {
				transit(kurage, ONIKURAGE_Dead, nullptr);
				return;
			}

			if (kurage->isNaviSucked()) {
				transit(kurage, ONIKURAGE_Drop, nullptr);
				return;
			}

			StateID nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, ONIKURAGE_Attack, nullptr);

			} else {
				transit(kurage, ONIKURAGE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D2AE8
 * Size:	000044
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* kurage         = static_cast<Obj*>(enemy);
	kurage->m_isSucking = false;
	kurage->resetEvent(0, EB_22);
	kurage->setEvent(0, EB_Cullable);
	kurage->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	802D2B2C
 * Size:	000068
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = ONIKURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->setEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(8, nullptr);
}

/*
 * --INFO--
 * Address:	802D2B94
 * Size:	000180
 */
void StateFall::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->isFlying()) {
		f32 timer = kurage->m_stateTimer;
		kurage->setHeightVelocity(kurage->getFallPitchOffset(timer), 0.0f);

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
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else {
			transit(kurage, ONIKURAGE_Land, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D2D14
 * Size:	000024
 */
void StateFall::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D2D38
 * Size:	000094
 */
void StateDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = ONIKURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->resetEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(8, nullptr);
	kurage->getJAIObject()->startSound(PSSE_EN_ONIKURAGE_BOWEL, 0);
}

/*
 * --INFO--
 * Address:	802D2DCC
 * Size:	000164
 */
void StateDrop::exec(EnemyBase* enemy)
{
	Obj* kurage       = static_cast<Obj*>(enemy);
	Vector3f position = kurage->getPosition();
	Vector3f velocity = kurage->getVelocity();

	if (position.y - mapMgr->getMinY(position) < 25.0f || velocity.y > 0.0f || kurage->m_stateTimer > 3.0f) {
		kurage->finishMotion();
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		if (kurage->m_health <= 0.0f) {
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else {
			transit(kurage, ONIKURAGE_Land, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D2F30
 * Size:	000024
 */
void StateDrop::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D2F54
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
	cameraMgr->startVibration(6, position, 2);
	rumbleMgr->startRumble(9, position, 2);
}

/*
 * --INFO--
 * Address:	802D3014
 * Size:	000080
 */
void StateLand::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		if (kurage->m_health <= 0.0f) {
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else {
			transit(kurage, ONIKURAGE_Ground, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D3094
 * Size:	000024
 */
void StateLand::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D30B8
 * Size:	000068
 */
void StateTakeOff::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage          = static_cast<Obj*>(enemy);
	kurage->m_nextState  = ONIKURAGE_NULL;
	kurage->m_stateTimer = 0.0f;
	kurage->resetEvent(0, EB_3);
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802D3120
 * Size:	0000F0
 */
void StateTakeOff::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->isFlying()) {
		kurage->setHeightVelocity(kurage->getTakeOffPitchOffset(), 0.0f);
	}

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			kurage->setEvent(0, EB_3);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			if (kurage->m_health <= 0.0f) {
				transit(kurage, ONIKURAGE_Dead, nullptr);
			} else {
				transit(kurage, ONIKURAGE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D3210
 * Size:	000024
 */
void StateTakeOff::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D3234
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
 * Address:	802D3294
 * Size:	000138
 */
void StateGround::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->m_health <= 0.0f || kurage->m_stuckPikminCount == 0
	    || kurage->m_stateTimer > static_cast<Parms*>(kurage->m_parms)->m_properParms.m_fp10.m_value) {
		kurage->finishMotion();
	}

	kurage->m_stateTimer += sys->m_deltaTime;

	if (kurage->m_curAnim->m_isRunning && (u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
		if (kurage->m_health <= 0.0f) {
			transit(kurage, ONIKURAGE_Dead, nullptr);
		} else if (kurage->m_stuckPikminCount != 0 || kurage->isNaviSucked()) {
			transit(kurage, ONIKURAGE_GroundFlick, nullptr);
		} else {
			transit(kurage, ONIKURAGE_TakeOff, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D33CC
 * Size:	000024
 */
void StateGround::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D33F0
 * Size:	0000E0
 */
void StateFlyFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	kurage->setEvent(0, EB_3);
	kurage->m_nextState   = ONIKURAGE_NULL;
	kurage->m_simVelocity = Vector3f(0.0f);
	kurage->setEmotionExcitement();
	kurage->startMotion(2, nullptr);

	Vector3f position = kurage->getPosition();
	efx::Arg fxArg(position);
	efx::TKurageFlick flickFx;
	flickFx.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802D34D0
 * Size:	00017C
 */
void StateFlyFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	f32 val     = kurage->setHeightVelocity(kurage->getFlickPitchOffset(), 0.0f);
	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(kurage->m_parms);
			EnemyFunc::flickStickPikmin(kurage, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
			                            parms->m_general.m_shakeDamage.m_value, -1000.0, nullptr);
			kurage->m_toFlick = 0.0f;
			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(12, position, 2);

		} else if ((u32)kurage->m_curAnim->m_type == KEYEVENT_END) {
			int nextFlyingState = kurage->getFlyingNextState();
			if (nextFlyingState >= 0) {
				transit(kurage, nextFlyingState, nullptr);

			} else if (kurage->isSuck(val, nullptr)) {
				transit(kurage, ONIKURAGE_Attack, nullptr);

			} else {
				transit(kurage, ONIKURAGE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D364C
 * Size:	000024
 */
void StateFlyFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802D3670
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
	efx::TKurageFlick flickFx;
	flickFx.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802D374C
 * Size:	00018C
 */
void StateGroundFlick::exec(EnemyBase* enemy)
{
	Obj* kurage = static_cast<Obj*>(enemy);
	if (kurage->getMotionFrame() > 25.0f) {
		kurage->flickStickNavi(false);
	}

	if (kurage->m_curAnim->m_isRunning) {
		if ((u32)kurage->m_curAnim->m_type == KEYEVENT_2) {
			Vector3f position = kurage->getPosition();
			rumbleMgr->startRumble(12, position, 2);

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
				transit(kurage, ONIKURAGE_Dead, nullptr);

			} else {
				transit(kurage, ONIKURAGE_TakeOff, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802D38D8
 * Size:	000024
 */
void StateGroundFlick::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

} // namespace OniKurage
} // namespace Game
