#include "Dolphin/rand.h"
#include "Dolphin/string.h"

#include "JSystem/JUT/JUTException.h"

#include "Game/Navi.h"
#include "Game/Piki.h"
#include "Game/rumble.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"

#include "PikiAI.h"

namespace PikiAI {

/*
 * --INFO--
 * Address:	8019FF38
 * Size:	0000D0
 */
ActFree::ActFree(Game::Piki* p)
    : Action(p)
    , m_gather(new ActGather(p))
    , m_bore(new ActBore(p))
{
	m_name = "Free";
}

/*
 * --INFO--
 * Address:	801A0008
 * Size:	000190
 */
void ActFree::init(ActionArg* settings)
{
	m_parent->m_navi = nullptr;
	m_parent->m_soundObj->becomeFree();

	ActFreeArg* freeArg = static_cast<ActFreeArg*>(settings);

	m_state = PIKIAI_FREE_DEFAULT;
	if (freeArg) {
		bool isFreeArg = strcmp("ActFreeArg", settings->getName()) == 0;
		P2ASSERTLINE(119, isFreeArg);

		freeArg = static_cast<ActFreeArg*>(settings);
		if (freeArg->_04) {
			m_state = PIKIAI_FREE_GATHER;
		}
	}

	switch (m_state) {
	case PIKIAI_FREE_GATHER:
		GatherActionArg gatherArg(freeArg);
		m_gather->init(&gatherArg);
		break;
	default:
		m_parent->startMotion(31, 31, nullptr, nullptr);
		m_parent->m_velocity = Vector3f(0.0f);
		break;
	}

	m_parent->setPastel(true);
	m_parent->setFreeLightEffect(true);
	m_parent->attachRadar(true);

	m_delayTimer = 0;
}

/*
 * --INFO--
 * Address:	801A0198
 * Size:	0001D0
 */
int ActFree::exec()
{
	switch (m_state) {
	case PIKIAI_FREE_GATHER: {
		// If we finished the gather state
		if (m_gather->exec() == 0) {
			m_state = PIKIAI_FREE_DEFAULT;

			// Wait for a bit of time to cool off
			u16 frameDelay = 30 * randFloat();
			m_delayTimer   = frameDelay + 150;
		}
		break;
	}

	case PIKIAI_FREE_BORE: {
		int status = m_bore->exec();

		// Let's try invoke the AI, and finish the boredom if we succeed
		Game::Piki::InvokeAIFreeArg settings(0, 0);
		settings._01 = 1;
		if (m_parent->invokeAIFree(settings)) {
			m_bore->finish();
		}

		// Assuming we finished or failed being bored, we'll be free again
		if (status == 0 || status == 2) {
			m_state      = PIKIAI_FREE_DEFAULT;
			m_delayTimer = 90;
		}
		break;
	}

	default: {
		// We aren't moving anywhere anymore
		m_parent->m_velocity = Vector3f(0.0f);

		Game::Piki::InvokeAIFreeArg settings(0, 0);
		if (m_parent->invokeAIFree(settings)) {
			return 0;
		}

		// If the delay timer is done we have a 50/50 chance of starting a boredom state
		if (m_delayTimer) {
			m_delayTimer--;
		} else if (randFloat() > 0.5f) {
			m_bore->init(nullptr);
			m_state = PIKIAI_FREE_BORE;
		}

		break;
	}
	}

	return 1;
}

/*
 * --INFO--
 * Address:	801A0368
 * Size:	00004C
 */
void ActFree::cleanup()
{
	m_parent->setFreeLightEffect(false);
	m_parent->attachRadar(false);
	m_parent->m_soundObj->becomeNotFree();
}

/*
 * --INFO--
 * Address:	801A03B4
 * Size:	000004
 */
void ActFree::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801A03B8
 * Size:	0000EC
 */
void ActFree::collisionCallback(Game::Piki* p, Game::CollEvent& event)
{
	if (!event.m_collidingCreature->isNavi()) {
		return;
	}

	Game::Navi* navi = static_cast<Game::Navi*>(event.m_collidingCreature);
	if (!navi->isAlive()) {
		return;
	}

	// If the Navi who touched us isn't being used right now (by controller)
	if (!navi->m_padinput) {
		return;
	}

	// If the Navi can't call us into formation
	if (!navi->formationable()) {
		return;
	}

	// Assuming the Navi touched us, rumble and call to squad (eventually)
	Game::rumbleMgr->startRumble(2, navi->m_naviIndex.typeView);
	Game::InteractFue fue(event.m_collidingCreature, 0, 1);
	p->stimulate(fue);
}

/*
 * --INFO--
 * Address:	801A04A4
 * Size:	00000C
 */
char* GatherActionArg::getName() { return "GatherActionArg"; }

/*
 * --INFO--
 * Address:	801A04B0
 * Size:	000008
 */
u32 ActFree::getNextAIType() { return PIKIAI_FREE_BORE; }

} // namespace PikiAI
