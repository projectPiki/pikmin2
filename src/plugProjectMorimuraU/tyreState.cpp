#include "Game/Entities/Tyre.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Tyre {
/*
 * --INFO--
 * Address:	803AB864
 * Size:	0000C0
 */
void Tyre::FSM::init(EnemyBase* enemy)
{
	create(4);
	registerState(new StateMove(TYRE_Move));
	registerState(new StateLand(TYRE_Land));
	registerState(new StateFreeze(TYRE_Freeze));
	registerState(new StateDead(TYRE_Dead));
}

/*
 * --INFO--
 * Address:	803AB924
 * Size:	00003C
 */
StateMove::StateMove(int stateID)
    : State(stateID)
{
	m_name = "move";
}

/*
 * --INFO--
 * Address:	803AB960
 * Size:	000048
 */
void Tyre::StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(0, nullptr);

	Obj* tyre = static_cast<Obj*>(enemy);
	tyre->collisionStOff();
	tyre->createSmokeEffect();
}

/*
 * --INFO--
 * Address:	803AB9A8
 * Size:	0000BC
 */
void Tyre::StateMove::exec(EnemyBase* enemy)
{
	Obj* tyre    = static_cast<Obj*>(enemy);
	f32 p1       = tyre->_30C;
	Parms* parms = static_cast<Parms*>(tyre->m_parms);
	p1 *= parms->m_properParms.m_tyreRotationSpeed.m_value;

	if (parms->_832 != 0) {
		f32 p2     = 0.2f * FABS(p1 - tyre->_2C4);
		tyre->_2C4 = p2;
		p2 += tyre->_2C0;
		if (p2 > TAU) {
			p2 -= TAU;
		}
		tyre->_2C0 = p2;
	} else {
		p1 *= EnemyAnimatorBase::defaultAnimSpeed;
		tyre->m_animator->m_animSpeed = p1;
	}

	if ((tyre->m_health <= 0.0f) && tyre->isEvent(0, EB_Vulnerable)) {
		transit(tyre, TYRE_Dead, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803ABA64
 * Size:	000024
 */
void Tyre::StateMove::cleanup(EnemyBase* enemy) { static_cast<Obj*>(enemy)->fadeSmokeEffect(); }

/*
 * --INFO--
 * Address:	803ABA88
 * Size:	00003C
 */
StateLand::StateLand(int stateID)
    : State(stateID)
{
	m_name = "land";
}

/*
 * --INFO--
 * Address:	803ABAC4
 * Size:	000048
 */
void Tyre::StateLand::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(0, nullptr);
	shadowMgr->setForceVisible(enemy, true);
}

/*
 * --INFO--
 * Address:	803ABB0C
 * Size:	0000B4
 */
void Tyre::StateLand::exec(EnemyBase* enemy)
{
	Obj* tyre = static_cast<Obj*>(enemy);
	if (tyre->m_curTriangle) {
		tyre->flick();
		Vector3f position = tyre->getPosition();
		tyre->landEffect(position);
		shadowMgr->setForceVisible(tyre, false);
		transit(tyre, TYRE_Freeze, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803ABBC0
 * Size:	00003C
 */
StateFreeze::StateFreeze(int stateID)
    : State(stateID)
{
	m_name = "freeze";
}

/*
 * --INFO--
 * Address:	803ABBFC
 * Size:	000074
 */
void Tyre::StateFreeze::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tyre = static_cast<Obj*>(enemy);
	tyre->stopMotion();
	_10                 = 0;
	tyre->m_impVelocity = Vector3f(0.0f);
	tyre->m_simVelocity = Vector3f(0.0f);
	tyre->setEvent(0, EB_Constraint);
	tyre->collisionStOn();
}

/*
 * --INFO--
 * Address:	803ABC70
 * Size:	0000B4
 */
void Tyre::StateFreeze::exec(EnemyBase* enemy)
{
	Obj* tyre           = static_cast<Obj*>(enemy);
	tyre->m_impVelocity = Vector3f(0.0f);
	tyre->m_simVelocity = Vector3f(0.0f);
	_10++;
	if ((tyre->m_health <= 0.0f) && tyre->isEvent(0, EB_Vulnerable)) {
		transit(tyre, TYRE_Dead, nullptr);
	}

	EnemyBase* wraith = tyre->_2BC;
	if (wraith) {
		if (wraith->isEvent(1, EB2_1)) {
			tyre->constraintOff();
		} else {
			tyre->setEvent(0, EB_Constraint);
		}
	}
}

/*
 * --INFO--
 * Address:	803ABD24
 * Size:	00003C
 */
Tyre::StateDead::StateDead(int stateID)
    : State(stateID)
{
	m_name = "dead";
}

/*
 * --INFO--
 * Address:	803ABD60
 * Size:	000048
 */
void Tyre::StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(1, nullptr);
	Obj* tyre = static_cast<Obj*>(enemy);
	tyre->deathProcedure();
	tyre->deadEffect();
}

/*
 * --INFO--
 * Address:	803ABDA8
 * Size:	000044
 */
void Tyre::StateDead::exec(EnemyBase* enemy)
{
	if ((enemy->m_curAnim->m_isRunning != 0) && ((u32)enemy->m_curAnim->m_type == KEYEVENT_END)) {
		enemy->kill(nullptr);
	}
}
} // namespace Tyre
} // namespace Game
