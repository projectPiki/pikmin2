#include "PikiAI.h"
#include "Game/gameStat.h"
#include "Game/Entities/ItemRock.h"
#include "PSGame/SeMgr.h"
#include "SoundID.h"

namespace PikiAI {

static const char breakRockName[] = "actBreakWall";

/*
 * --INFO--
 * Address:	801E36A0
 * Size:	0000F8
 */
ActBreakRock::ActBreakRock(Game::Piki* parent)
    : Action(parent)
{
	m_stickAttack = new ActStickAttack(parent);
	m_gotoPos     = new ActGotoPos(parent);
	m_followField = new ActFollowVectorField(parent);

	m_name = "BreakRock";
}

/*
 * --INFO--
 * Address:	801E3798
 * Size:	0000C0
 */
void ActBreakRock::init(ActionArg* actionArg)
{
	bool isCorrectArg = false;
	if (actionArg) {
		bool strCheck = strcmp("ActBreakRockArg", actionArg->getName()) == 0;
		if (strCheck) {
			isCorrectArg = true;
		}
	}

	P2ASSERTLINE(80, isCorrectArg);

	Game::GameStat::workPikis.inc(m_parent);

	m_rock = static_cast<ActBreakRockArg*>(actionArg)->m_rock;

	initFollow();
}

/*
 * --INFO--
 * Address:	801E3858
 * Size:	000068
 */
void ActBreakRock::initFollow()
{
	FollowVectorFieldActionArg followArg(m_rock);
	m_followField->init(&followArg);
	m_state = 1;
}

static const char stickAttackArgName[] = "StickAttackActionArg";
static const char gotoPosArgName[]     = "GotoPosActionArg";
static const char followFieldArgName[] = "FollowVectorFieldActionArg";

/*
 * --INFO--
 * Address:	--------
 * Size:	0000E4
 * --INLINE--
 */
void ActBreakRock::initStickAttack()
{
	int state = -1;
	if (m_rock->m_objectTypeID == 0x40E) {
		state = 58;
	}
	f32 attackDamage = m_parent->getAttackDamage();
	StickAttackActionArg stickAttackArg(attackDamage, m_rock, state, 0);

	if (m_rock->m_objectTypeID == 0x410 || m_rock->m_objectTypeID == 0x40C) {
		stickAttackArg._10 = 5;
	} else if (m_rock->m_objectTypeID == 0x40E) {
		stickAttackArg._10 = 6;
	} else if (m_rock->m_objectTypeID == 0x409) {
		stickAttackArg._10 = 7;
	}

	m_stickAttack->init(&stickAttackArg);

	m_state = 2;
}

/*
 * --INFO--
 * Address:	801E38C0
 * Size:	00032C
 */
int ActBreakRock::exec()
{
	if (!m_rock->isAlive()) {
		return 0;
	}

	switch (m_state) {
	case 2:
		m_followField->exec();
		int stickResult = m_stickAttack->exec();

		if (m_rock->m_objectTypeID == 0x40E) {
			m_parent->startSound(m_rock, PSSE_PK_VC_DIGGING, PSGame::SeMgr::UNK_1);
		}

		if (stickResult != 1) {
			initStickAttack();
		}
		break;

	case 1:
		int followResult = m_followField->exec();
		if (followResult == 0) {
			initStickAttack();
		}
		break;

	case 0:
		int gotoResult = m_gotoPos->exec();
		if (gotoResult == 0) {
			initStickAttack();
		}
		break;
	}

	return 1;
}

/*
 * --INFO--
 * Address:	801E3BEC
 * Size:	00005C
 */
void ActBreakRock::cleanup()
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
 * Address:	801E3C48
 * Size:	0000F0
 */
void ActBreakRock::platCallback(Game::Piki* p, Game::PlatEvent& platEvent)
{
	if (m_state == 1) {
		initStickAttack();
	}
}

/*
 * --INFO--
 * Address:	801E3D38
 * Size:	0000FC
 */
void ActBreakRock::collisionCallback(Game::Piki* p, Game::CollEvent& collEvent)
{
	if (collEvent.m_collidingCreature == m_rock && m_state == 1) {
		initStickAttack();
	}
}

/*
 * --INFO--
 * Address:	801E3E34
 * Size:	000004
 */
void ActBreakRock::bounceCallback(Game::Piki*, Sys::Triangle*) { }

} // namespace PikiAI
