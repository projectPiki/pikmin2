#include "Game/Navi.h"
#include "Game/Piki.h"
#include "Game/rumble.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"
#include "Game/gameStat.h"
#include "Game/PlatInstance.h"
#include "Game/Entities/ItemBridge.h"

#include "PikiAI.h"

namespace PikiAI {

static const char aiBridgeName[] = "actBridge";

/*
 * --INFO--
 * Address:	80212288
 * Size:	0000FC
 */
ActBridge::ActBridge(Game::Piki* parent)
    : Action(parent)
{
	_30 = 0;

	m_stickAttack = new ActStickAttack(parent);
	m_gotoPos     = new ActGotoPos(parent);
	m_followField = new ActFollowVectorField(parent);

	m_name = "Bridge";
}

/*
 * --INFO--
 * Address:	80212384
 * Size:	0000C8
 */
void ActBridge::init(ActionArg* actionArg)
{
	bool isCorrectArg = false;
	if (actionArg) {
		bool strCheck = strcmp("ActBridgeArg", actionArg->getName()) == 0;
		if (strCheck) {
			isCorrectArg = true;
		}
	}

	P2ASSERTLINE(62, isCorrectArg);

	Game::GameStat::workPikis.inc(m_parent);

	m_bridge = static_cast<ActBridgeArg*>(actionArg)->m_bridge;
	_30      = 0;

	initFollow();
}

static const char stickAttackArgName[] = "StickAttackActionArg";
static const char gotoPosArgName[]     = "GotoPosActionArg";
static const char followFieldArgName[] = "FollowVectorFieldActionArg";

/*
 * --INFO--
 * Address:	8021244C
 * Size:	000068
 */
void ActBridge::initFollow()
{
	FollowVectorFieldActionArg followArg(m_bridge);
	m_followField->init(&followArg);
	m_state = 1;
}

/*
 * --INFO--
 * Address: --------
 * Size:    0000BC
 * --INLINE--
 */
void ActBridge::initStickAttack()
{
	f32 attackDamage = m_parent->getAttackDamage();
	StickAttackActionArg stickAttackArg(attackDamage, m_bridge, -1, 4);

	bool check = false;
	if ((_30 & 1) && m_parent->m_collisionPosition.y > 0.5f) {
		check = true;
	}

	if (check) {
		stickAttackArg.m_nextState = 25;
	}

	m_stickAttack->init(&stickAttackArg);

	m_state = 2;
}

/*
 * --INFO--
 * Address:	802124B4
 * Size:	00031C
 */
int ActBridge::exec()
{
	if (!m_bridge->isAlive()) {
		_30 = 0;
		return 0;
	}

	if (m_parent->inWater()) {
		return 2;
	}

	switch (m_state) {
	case 2:
		bool checkCode = m_followField->exec() != 0;
		if (!checkCode) {
			return 0;
		}

		int stickResult = m_stickAttack->exec();
		if (stickResult == 0 || stickResult == 2) {
			initStickAttack();
		} else {
			_30 = 0;
			return stickResult;
		}
		break;

	case 1:
		int followResult = m_followField->exec();
		if (followResult == 0) {
			initStickAttack();
		} else {
			_30 = 0;
			return followResult;
		}
		break;

	case 0:
		int gotoResult = m_gotoPos->exec();
		if (gotoResult == 0) {
			initStickAttack();
		} else {
			_30 = 0;
			return gotoResult;
		}
		break;
	}

	_30 = 0;
	return 1;
}

/*
 * --INFO--
 * Address:	802127D0
 * Size:	00005C
 */
void ActBridge::cleanup()
{
	Game::GameStat::workPikis.dec(m_parent);

	switch (m_state) {
	case 2:
		m_stickAttack->cleanup();
		break;
	}
}

/*
 * --INFO--
 * Address:	8021282C
 * Size:	000110
 */
void ActBridge::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	Game::PlatInstance* instance = platEvent.m_instance;
	if (platEvent.m_item == m_bridge) {
		if (instance->m_id.getID() == 'brbk') {
			_30 |= 0x1;
		} else if (instance->m_id.getID() == 'br__') {
			_30 |= 0x2;
		}
	}

	if (m_state == 1) {
		initStickAttack();
	}
}

/*
 * --INFO--
 * Address:	8021293C
 * Size:	000004
 */
void ActBridge::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	80212940
 * Size:	000004
 */
void ActBridge::bounceCallback(Game::Piki*, Sys::Triangle*) { }

} // namespace PikiAI
