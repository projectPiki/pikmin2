#include "Game/Entities/Rock.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Rock {

/*
 * --INFO--
 * Address:	80261D8C
 * Size:	000228
 */
void FSM::init(EnemyBase* enemy)
{
	create(ROCK_Count);
	registerState(new StateWait);
	registerState(new StateAppear);
	registerState(new StateDropWait);
	registerState(new StateFall);
	registerState(new StateMove);
	registerState(new StateDead);
}

/*
 * --INFO--
 * Address:	80261FB4
 * Size:	000098
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->setAtari(false);
	rock->setEvent(0, EB_3);
	rock->hardConstraintOn();
	rock->resetEvent(0, EB_16);
	rock->setEvent(0, EB_31);

	rock->m_simVelocity = Vector3f(0.0f);
	rock->startMotion(1, nullptr);
	rock->stopMotion();
}

/*
 * --INFO--
 * Address:	8026204C
 * Size:	000108
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	if (rock->m_maxExistTime != 0.0f) {
		rock->m_timer += sys->m_deltaTime;
		if (rock->m_timer > 1.5f) {
			transit(rock, ROCK_Appear, nullptr);
		}
	} else {
		bool isTarget;
		f32 detectRadius = static_cast<Parms*>(rock->m_parms)->m_general.m_sightRadius.m_value;
		if (EnemyFunc::isThereOlimar(rock, detectRadius, nullptr)) {
			isTarget = true;
		} else if (EnemyFunc::isTherePikmin(rock, detectRadius, nullptr)) {
			isTarget = true;
		} else {
			isTarget = false;
		}

		if (isTarget) {
			transit(rock, ROCK_Appear, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80262154
 * Size:	000048
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->hardConstraintOff();
	rock->setEvent(0, EB_16);
	rock->resetEvent(0, EB_31);
}

/*
 * --INFO--
 * Address:	8026219C
 * Size:	000104
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock         = static_cast<Obj*>(enemy);
	Vector3f position = rock->getPosition();
	position.y += rock->_2D0;
	rock->onSetPosition(position);

	rock->setEvent(0, EB_31);
	rock->resetEvent(0, EB_Cullable);
	rock->resetEvent(0, EB_SoundCullable);

	rock->m_simVelocity = Vector3f(0.0f);
	rock->startMotion(1, nullptr);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);

	rock->getJAIObject()->startSound(PSSE_EN_ROCK_FALL, 0);
}

/*
 * --INFO--
 * Address:	802622A0
 * Size:	000064
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	if (rock->fallRockScaleUp()) {
		transit(rock, ROCK_Fall, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80262304
 * Size:	00005C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->setAtari(true);
	rock->resetEvent(0, EB_3);
	rock->resetEvent(0, EB_31);
}

/*
 * --INFO--
 * Address:	80262360
 * Size:	00002C
 */
void StateDropWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	8026238C
 * Size:	000034
 */
void StateDropWait::exec(EnemyBase* enemy) { transit(enemy, ROCK_Fall, nullptr); }

/*
 * --INFO--
 * Address:	802623C0
 * Size:	000058
 */
void StateDropWait::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->resetEvent(0, EB_Cullable);
	rock->resetEvent(0, EB_SoundCullable);

	shadowMgr->addShadow(rock);
	shadowMgr->setForceVisible(rock, true);
}

/*
 * --INFO--
 * Address:	80262418
 * Size:	000060
 */
void StateFall::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = static_cast<Obj*>(enemy);
	Vector3f velocity(0.0f, -rock->m_fallSpeed, 0.0f);
	rock->setVelocity(velocity);
	rock->startFallEffect();
}

/*
 * --INFO--
 * Address:	80262478
 * Size:	000068
 */
void StateFall::exec(EnemyBase* enemy)
{
	if (enemy->m_curTriangle) {
		transit(enemy, ROCK_Dead, nullptr);
	} else if (enemy->isEvent(0, EB_Collision)) {
		transit(enemy, ROCK_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802624E0
 * Size:	000094
 */
void StateFall::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	shadowMgr->setForceVisible(rock, false);
	rock->finishFallEffect();

	Vector3f position = rock->getPosition();
	cameraMgr->startVibration(27, position, 2);
	rumbleMgr->startRumble(14, position, 2);
}

/*
 * --INFO--
 * Address:	80262574
 * Size:	00007C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->resetEvent(0, EB_Cullable);
	rock->resetEvent(0, EB_SoundCullable);
	rock->startMotion(1, nullptr);
	rock->m_timer = 0.0f;

	if (rock->m_waterBox) {
		rock->startRollingWaterEffect();
	} else {
		rock->startRollingGroundEffect();
	}
}

/*
 * --INFO--
 * Address:	802625F0
 * Size:	0000D0
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->updateMoveVelocity();
	rock->moveRockScaleUp();
	rock->m_timer += sys->m_deltaTime;
	rock->updateWaterEffectPosition();
	rock->getJAIObject()->startSound(PSSE_EN_ROCK_ROLL, 0);

	if (rock->m_health <= 0.0f || rock->m_timer > 15.0f) {
		transit(rock, ROCK_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802626C0
 * Size:	00007C
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	rock->finishRollingGroundEffect();
	rock->finishRollingWaterEffect();

	Vector3f position = rock->getPosition();
	rumbleMgr->startRumble(14, position, 2);
}

/*
 * --INFO--
 * Address:	8026273C
 * Size:	000088
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* rock           = static_cast<Obj*>(enemy);
	rock->m_simVelocity = Vector3f(0.0f);
	rock->startMotion(0, nullptr);
	shadowMgr->delShadow(rock);
	rock->createRockDeadEffect();
	rock->getJAIObject()->startSound(PSSE_EN_ROCK_BREAK, 0);
}

/*
 * --INFO--
 * Address:	802627C4
 * Size:	00008C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* rock = static_cast<Obj*>(enemy);
	if (rock->isAtari()) {
		rock->setAtari(false);
		rock->hardConstraintOn();
	}

	if (rock->m_curAnim->m_isRunning && (u32)rock->m_curAnim->m_type == KEYEVENT_END) {
		rock->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80262850
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Rock
} // namespace Game
