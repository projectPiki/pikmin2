#include "Dolphin/rand.h"
#include "Dolphin/string.h"

#include "JSystem/JUT/JUTException.h"

#include "Game/Navi.h"
#include "Game/Piki.h"
#include "Game/rumble.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"

#include "PikiAI.h"

// TODO: Matching but MotionListener VTBL generates, when that's fixed. Link it.

/*
 * --INFO--
 * Address:	8019FF38
 * Size:	0000D0
 */
PikiAI::ActFree::ActFree(Game::Piki* parent)
    : Action(parent)
    , m_actGather(new ActGather(parent))
    , m_actBore(new ActBore(parent))
{
	m_info = "Free";
}

/*
 * --INFO--
 * Address:	801A0008
 * Size:	000190
 */
void PikiAI::ActFree::init(PikiAI::ActionArg* arg)
{
	m_parent->m_navi = nullptr;
	m_parent->m_soundObj->becomeFree();

	PikiAI::ActFreeArg* freeArg = (PikiAI::ActFreeArg*)arg;

	m_state = PIKIAI_FREE_DEFAULT;
	if (freeArg) {
		char* name     = arg->getName();
		bool isFreeArg = strcmp("ActFreeArg", name) == 0;
		P2ASSERTLINE(119, !isFreeArg);

		freeArg = (PikiAI::ActFreeArg*)arg;
		if (freeArg->_04) {
			m_state = PIKIAI_FREE_GATHER;
		}
	}

	switch (m_state) {
	case PIKIAI_FREE_GATHER:
		GatherActionArg gatherArg(freeArg);
		m_actGather->init(&gatherArg);
		break;
	default:
		m_parent->startMotion(31, 31, 0, 0);
		m_parent->m_velocity = Vector3f(0, 0, 0);
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
s32 PikiAI::ActFree::exec(void)
{
	switch (m_state) {
	case PIKIAI_FREE_GATHER: {
		// If we finished the gather state
		if (m_actGather->exec() == 0) {
			m_state = PIKIAI_FREE_DEFAULT;

			// Wait for a bit of time to cool off
			u16 frameDelay = 30 * randFloat();
			m_delayTimer   = frameDelay + 150;
		}
		break;
	}

	case PIKIAI_FREE_BORE: {
		s32 status = m_actBore->exec();

		// Let's try invoke the AI, and finish the boredom if we succeed
		Game::Piki::InvokeAIFreeArg invokeArg(0, 0);
		invokeArg._01 = 1;
		if (m_parent->invokeAIFree(invokeArg)) {
			m_actBore->finish();
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
		m_parent->m_velocity = Vector3f(0, 0, 0);

		Game::Piki::InvokeAIFreeArg invokeArg(0, 0);
		if (m_parent->invokeAIFree(invokeArg)) {
			return 0;
		}

		// If the delay timer is done we have a 50/50 chance of starting a boredom state
		if (m_delayTimer) {
			m_delayTimer--;
		} else if (randFloat() > 0.5f) {
			m_actBore->init(nullptr);
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
void PikiAI::ActFree::cleanup(void)
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
void PikiAI::ActFree::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801A03B8
 * Size:	0000EC
 */
void PikiAI::ActFree::collisionCallback(Game::Piki* piki, Game::CollEvent& event)
{
	if (!event.m_collidingCreature->isNavi()) {
		return;
	}

	Game::Navi* navi = (Game::Navi*)event.m_collidingCreature;
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
	Game::rumbleMgr->startRumble(2, navi->m_naviIndex.m_shortView);
	Game::InteractFue fue(event.m_collidingCreature, 0, 1);
	piki->stimulate(fue);
}

const char str_LINK[] = "ActionArg";

/*
 * --INFO--
 * Address:	801A04A4
 * Size:	00000C
 */
char* PikiAI::GatherActionArg::getName() { return "GatherActionArg"; }

/*
 * --INFO--
 * Address:	801A04B0
 * Size:	000008
 */
u32 PikiAI::ActFree::getNextAIType() { return PIKIAI_FREE_BORE; }

/*
 * --INFO--
 * Address:	801A04B8
 * Size:	000014
 */
// void @32 @4 @PikiAI::ActFree::onKeyEvent(SysShape::KeyEvent const&)
