#include "Game/Entities/TamagoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "efx/TEnemyBomb.h"
#include "efx/TEnemyDead.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace TamagoMushi {

/*
 * --INFO--
 * Address:	8036CCF0
 * Size:	000108
 */
void FSM::init(EnemyBase* enemy)
{
	create(TAMAGOMUSHI_Count);
	registerState(new StateWalk(TAMAGOMUSHI_Walk));
	registerState(new StateTurn(TAMAGOMUSHI_Turn));
	registerState(new StateAppear(TAMAGOMUSHI_Appear));
	registerState(new StateHide(TAMAGOMUSHI_Hide));
	registerState(new StateDead(TAMAGOMUSHI_Dead));
	registerState(new StateWait(TAMAGOMUSHI_Wait));
}

/*
 * --INFO--
 * Address:	8036CDF8
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	m_name = "walk";
}

/*
 * --INFO--
 * Address:	8036CE34
 * Size:	000108
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	int p1;
	int diff;
	Obj* mitite = static_cast<Obj*>(enemy);
	mitite->startMotion(2, nullptr);
	mitite->resetWalkParm();
	Parms* parms = static_cast<Parms*>(mitite->m_parms);
	p1           = parms->m_properParms.m_ip01.m_value;
	diff         = parms->m_properParms.m_ip02.m_value - p1;

	f32 r = (f32)diff * randFloat() + (f32)p1;
	_14   = (int)r;
	_10   = 0;
	mitite->setAtari(true);
	mitite->setAlive(true);
}

/*
 * --INFO--
 * Address:	8036CF3C
 * Size:	0000EC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* mitite = static_cast<Obj*>(enemy);
	_10++;
	if (mitite->m_curTriangle) {
		mitite->walkFunc();
	} else {
		mitite->ballMove();
	}

	if (mitite->isReachToGoal(10.0f) || _10 > _14) {
		mitite->m_simVelocity = Vector3f(0.0f);
		mitite->m_impVelocity = Vector3f(0.0f);
		mitite->finishMotion();
	}

	if (mitite->m_curAnim->m_isRunning && (u32)mitite->m_curAnim->m_type == KEYEVENT_END) {
		mitite->setGoalRandom();
		transit(mitite, TAMAGOMUSHI_Turn, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8036D028
 * Size:	00003C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	m_name = "turn";
}

/*
 * --INFO--
 * Address:	8036D064
 * Size:	000054
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(4, nullptr);
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->m_impVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	8036D0B8
 * Size:	000088
 */
void StateTurn::exec(EnemyBase* enemy)
{
	Obj* mitite = static_cast<Obj*>(enemy);
	if (mitite->turnFunc()) {
		mitite->finishMotion();
	}

	if (mitite->m_curAnim->m_isRunning && (u32)mitite->m_curAnim->m_type == KEYEVENT_END) {
		transit(mitite, TAMAGOMUSHI_Walk, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8036D140
 * Size:	00003C
 */
StateAppear::StateAppear(int stateID)
    : State(stateID)
{
	m_name = "appear";
}

/*
 * --INFO--
 * Address:	8036D17C
 * Size:	000160
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	int p1;
	int diff;

	enemy->startMotion(3, nullptr);
	enemy->stopMotion();
	enemy->setEvent(0, EB_BitterImmune);

	Obj* mitite  = static_cast<Obj*>(enemy);
	Parms* parms = static_cast<Parms*>(mitite->m_parms);
	p1           = parms->m_properParms.m_ip03.m_value;
	diff         = parms->m_properParms.m_ip04.m_value - p1;

	f32 r = (f32)diff * randFloat() + (f32)p1;
	_18   = (int)r;
	_14   = 0;

	mitite->setAtari(false);
	mitite->setAlive(false);

	mitite->hardConstraintOn();

	_10           = false;
	_20           = true;
	m_appearFrame = 15.0f * randFloat();
}

/*
 * --INFO--
 * Address:	8036D2DC
 * Size:	0001AC
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* mitite = static_cast<Obj*>(enemy);
	if (!_10 && mitite->isFound()) {
		_10 = true;
		mitite->createFellow();
	}

	if (_10) {
		_14++;
	}

	if (!mitite->isEvent(0, EB_Bittered) && (_14 > _18)) {
		mitite->setEmotionExcitement();
		if (mitite->isStopMotion()) {
			mitite->createAppearEffect();
		}
		mitite->startMotion();
	}

	if (mitite->m_curAnim->m_isRunning) {
		if ((u32)mitite->m_curAnim->m_type == KEYEVENT_2) {
			mitite->appearPanic();
			mitite->setAtari(true);
			mitite->setAlive(true);
			mitite->resetEvent(0, EB_BitterImmune);
		}
		if ((u32)mitite->m_curAnim->m_type == KEYEVENT_END) {
			transit(mitite, TAMAGOMUSHI_Walk, nullptr);
			mitite->hardConstraintOff();
		}
	}

	if (_20 && !mitite->isStopMotion() && mitite->getMotionFrame() >= m_appearFrame) {
		_20 = false;
		mitite->m_soundObj->startSound(PSSE_EN_TAMAGOMUSHI_APPEAR, 0);
	}
}

/*
 * --INFO--
 * Address:	8036D488
 * Size:	00003C
 */
StateHide::StateHide(int stateID)
    : State(stateID)
{
	m_name = "hide";
}

/*
 * --INFO--
 * Address:	8036D4C4
 * Size:	00006C
 */
void StateHide::init(EnemyBase* enemy, StateArg* stateArg)
{

	enemy->startMotion(1, nullptr);
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->m_impVelocity = Vector3f(0.0f);
	enemy->hardConstraintOn();
	enemy->setEmotionCaution();

	Obj* mitite = static_cast<Obj*>(enemy);
	mitite->createHideEffect();
}

/*
 * --INFO--
 * Address:	8036D530
 * Size:	000044
 */
void StateHide::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8036D574
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	m_name = "dead";
}

/*
 * --INFO--
 * Address:	8036D5B0
 * Size:	000108
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(0, nullptr);
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->m_impVelocity = Vector3f(0.0f);
	enemy->setEvent(0, EB_LeaveCarcass);
	enemy->deathProcedure();
	PSStartEnemyFatalHitSE(enemy, 0.0f);

	Vector3f fxPos;
	enemy->getCommonEffectPos(fxPos);

	efx::ArgEnemyType arg(fxPos, EnemyTypeID::EnemyID_Kochappy, 1.0f); // not a dwarf bulborb but sure.
	efx::TEnemyBomb bombFx;
	bombFx.create(&arg);
}

/*
 * --INFO--
 * Address:	8036D6B8
 * Size:	000114
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* mitite = static_cast<Obj*>(enemy);
	if (mitite->m_curAnim->m_isRunning && (u32)mitite->m_curAnim->m_type == KEYEVENT_END) {
		mitite->genItem();
		mitite->kill(nullptr);
		PSStartEnemyGhostSE(mitite, 0.0f);

		Vector3f fxPos;
		mitite->getCommonEffectPos(fxPos);

		efx::ArgEnemyType arg(fxPos, EnemyTypeID::EnemyID_Kochappy, 1.0f); // not a dwarf bulborb but sure.
		efx::TEnemyDead deadFx;
		deadFx.create(&arg);
	}
}

/*
 * --INFO--
 * Address:	8036D7CC
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	m_name = "Wait";
}

/*
 * --INFO--
 * Address:	8036D808
 * Size:	000074
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(4, nullptr);
	enemy->setEmotionExcitement();
	enemy->hardConstraintOff();
	enemy->resetEvent(0, EB_Cullable);
	enemy->setAtari(false);

	Obj* mitite  = static_cast<Obj*>(enemy);
	mitite->_300 = 1;
}

/*
 * --INFO--
 * Address:	8036D87C
 * Size:	000098
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* mitite = static_cast<Obj*>(enemy);
	if (mitite->_300 == 0) {
		mitite->setAlive(true);
		mitite->setAtari(true);
		transit(mitite, TAMAGOMUSHI_Walk, nullptr);
	}

	mitite->ballMove();
}

} // namespace TamagoMushi
} // namespace Game
