#include "Game/Entities/Qurione.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Qurione {

/*
 * --INFO--
 * Address:	8025F094
 * Size:	000228
 */
void FSM::init(EnemyBase* enemy)
{
	create(QURIONE_Count);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDisappear);
	registerState(new StateMove);
	registerState(new StateDrop);
	registerState(new StateDead);
}

/*
 * --INFO--
 * Address:	8025F2BC
 * Size:	0000D0
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->resetUtilityTimer();
	wisp->m_qurioneScale = 0.0f;

	Vector3f position = Vector3f(wisp->m_spawnPositions[wisp->m_spawnIndex]);
	wisp->onSetPosition(position);

	wisp->setAtari(false);
	wisp->resetEvent(0, EB_16);
	wisp->setEvent(0, EB_31);

	wisp->m_simVelocity = Vector3f(0.0f);
	wisp->startMotion(3, nullptr);
	wisp->stopMotion();
}

/*
 * --INFO--
 * Address:	8025F38C
 * Size:	000088
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->m_utilityTimer += sys->m_deltaTime;

	if ((wisp->m_utilityTimer > 1.0f) && wisp->isAppear()) {
		transit(wisp, QURIONE_Appear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025F414
 * Size:	00005C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->setAtari(true);
	wisp->setEvent(0, EB_16);
	wisp->resetEvent(0, EB_31);
}

/*
 * --INFO--
 * Address:	8025F470
 * Size:	000074
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->setAtari(false);
	wisp->m_simVelocity = Vector3f(0.0f);
	wisp->startMotion(3, nullptr);

	wisp->createAppearEffect();
	wisp->startGlowEffect();
}

/*
 * --INFO--
 * Address:	8025F4E4
 * Size:	000080
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->addQurioneScale();
	wisp->setGlowEffectScale();
	if (wisp->m_curAnim->m_isRunning && (u32)wisp->m_curAnim->m_type == KEYEVENT_END) {
		transit(wisp, QURIONE_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025F564
 * Size:	000054
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->setAtari(true);
	wisp->m_qurioneScale = 1.0f;
	wisp->setGlowEffectScale();
}

/*
 * --INFO--
 * Address:	8025F5B8
 * Size:	00006C
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->setAtari(false);
	wisp->m_simVelocity = Vector3f(0.0f);
	wisp->startMotion(4, nullptr);
	wisp->createDisppearEffect();
}

/*
 * --INFO--
 * Address:	8025F624
 * Size:	000080
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->subQurioneScale();
	wisp->setGlowEffectScale();
	if (wisp->m_curAnim->m_isRunning && (u32)wisp->m_curAnim->m_type == KEYEVENT_END) {
		transit(wisp, QURIONE_Stay, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025F6A4
 * Size:	000090
 */
void StateDisappear::cleanup(EnemyBase* enemy)
{
	Obj* wisp   = static_cast<Obj*>(enemy);
	f32 faceDir = wisp->getFaceDir() + PI;
	if (faceDir >= TAU) {
		faceDir -= TAU;
	}
	wisp->m_faceDir    = faceDir;
	wisp->m_rotation.y = wisp->m_faceDir;

	wisp->m_spawnIndex ^= 1;
	wisp->setAtari(true);
	wisp->finishGlowEffect();
}

/*
 * --INFO--
 * Address:	8025F734
 * Size:	00003C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp           = static_cast<Obj*>(enemy);
	wisp->m_simVelocity = Vector3f(0.0f);
	wisp->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	8025F770
 * Size:	000130
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->moveFaceDir();

	Vector3f position      = wisp->getPosition();
	Vector3f spawnPosition = wisp->m_spawnPositions[wisp->m_spawnIndex];
	f32 moveRadius         = wisp->getMoveRadius();

	wisp->getJAIObject()->startSound(PSSE_EN_PIKIMAKI_FLY, 0);

	Vector2f delta(spawnPosition.x - position.x, spawnPosition.z - position.z);
	if (SQUARE(delta.x) + SQUARE(delta.y) > SQUARE(moveRadius)) {
		transit(wisp, QURIONE_Disappear, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025F8A0
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025F8A4
 * Size:	00005C
 */
void StateDrop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->resetEvent(0, EB_Cullable);
	wisp->createHitEffect();
	wisp->m_simVelocity = Vector3f(0.0f);
	wisp->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	8025F900
 * Size:	000068
 */
void StateDrop::exec(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	if (wisp->m_curAnim->m_isRunning) {
		if ((u32)wisp->m_curAnim->m_type == KEYEVENT_2) {
			wisp->dropItem();
		} else if ((u32)wisp->m_curAnim->m_type == KEYEVENT_END) {
			transit(wisp, QURIONE_Dead, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8025F968
 * Size:	000010
 */
void StateDrop::cleanup(EnemyBase* enemy) { enemy->setEvent(0, EB_Cullable); }

/*
 * --INFO--
 * Address:	8025F978
 * Size:	0000B0
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->setAlive(false);
	wisp->resetEvent(0, EB_Cullable);

	Vector3f velocity(0.0f, static_cast<Parms*>(wisp->m_parms)->m_properParms.m_fp04.m_value, 0.0f);
	wisp->setVelocity(velocity);
	wisp->m_simVelocity = velocity;

	wisp->resetUtilityTimer();
	wisp->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	8025FA28
 * Size:	000060
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* wisp = static_cast<Obj*>(enemy);
	wisp->m_utilityTimer += sys->m_deltaTime;

	if (wisp->isFlyKill()) {
		wisp->finishGlowEffect();
		wisp->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8025FA88
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

} // namespace Qurione
} // namespace Game
