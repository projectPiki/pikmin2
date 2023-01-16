#include "ebi/Screen/TPressStart.h"
#include "System.h"
#include "P2DScreen.h"
#include "ebi/Utility.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "ebi/E2DGraph.h"
#include "PSSystem/PSSystemIF.h"
#include "Graphics.h"
#include "SoundID.h"
#include "Dolphin/rand.h"

static const char name[] = "ebiScreenPushStart";

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803D3B10
 * Size:	000324
 */
void TPressStart::doSetArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_a", nullptr);
	m_screens[0] = new P2DScreen::Mgr_tuning;
	m_screens[0]->set("push_start_a.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_a");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_b", nullptr);
	m_screens[1] = new P2DScreen::Mgr_tuning;
	m_screens[1]->set("push_start_b.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_b");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_c", nullptr);
	m_screens[2] = new P2DScreen::Mgr_tuning;
	m_screens[2]->set("push_start_c.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_c");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_d", nullptr);
	m_screens[3] = new P2DScreen::Mgr_tuning;
	m_screens[3]->set("push_start_d.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_d");

	sys->heapStatusStart("TScreenPushStart::setArchive--makeAnmPointer", nullptr);
	for (int i = 0; i < 4; i++) {
		m_screens[i]->makeAnmPointer();
	}
	sys->heapStatusEnd("TScreenPushStart::setArchive--makeAnmPointer");

	for (int i = 0; i < 4; i++) {
		static_cast<P2DScreen::Mgr*>(m_screens[i])->addCallBackPane(m_screens[i], &m_anims1[i]);
		static_cast<P2DScreen::Mgr*>(m_screens[i])->addCallBackPane(m_screens[i], &m_anims2[i]);
		static_cast<P2DScreen::Mgr*>(m_screens[i])->addCallBackPane(m_screens[i], &m_anims3[i]);
		E2DPane_setTreeInfluencedAlpha(m_screens[i], true);
		m_screens[i]->setAlpha(255);
	}

	m_anims1[0].loadAnm("push_start_a.bck", arc, 0, 99999);
	m_anims2[0].loadAnm("push_start_a.bpk", arc, 0, 99999);

	m_anims1[1].loadAnm("push_start_b.bck", arc, 0, 99999);
	m_anims2[1].loadAnm("push_start_b.bpk", arc, 0, 99999);

	m_anims1[2].loadAnm("push_start_c.bck", arc, 0, 99999);
	m_anims2[2].loadAnm("push_start_c.bpk", arc, 0, 99999);

	m_anims1[3].loadAnm("push_start_d.bck", arc, 0, 99999);
	m_anims2[3].loadAnm("push_start_d.bpk", arc, 0, 99999);
}

/*
 * --INFO--
 * Address:	803D3E34
 * Size:	000028
 */
void TPressStart::doOpenScreen(ArgOpen*)
{
	m_isOpen = true;
	startLoop_();
}

/*
 * --INFO--
 * Address:	803D3E5C
 * Size:	000044
 */
void TPressStart::doCloseScreen(ArgClose*)
{
	u32 time   = 0.2f / sys->m_deltaTime;
	m_alpha    = time;
	m_alphaMax = time;
}

/*
 * --INFO--
 * Address:	803D3EA0
 * Size:	0000A4
 */
bool TPressStart::doUpdateStateWait()
{
	m_screens[m_currentScreen]->update();
	if (m_isOpen && m_control->m_padButton.m_mask & (Controller::PRESS_START | Controller::PRESS_A)) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		return true;
	} else {
		if (m_anims1[m_currentScreen].isFinish()) {
			startLoop_();
		}
		return false;
	}
}

/*
 * --INFO--
 * Address:	803D3F44
 * Size:	000108
 */
bool TPressStart::doUpdateStateClose()
{
	m_screens[m_currentScreen]->update();
	if (m_alpha) {
		m_alpha--;
	}
	f32 alpha;
	if (m_alphaMax) {
		alpha = (f32)m_alpha / (f32)m_alphaMax;
	} else {
		alpha = 0.0f;
	}

	m_screens[m_currentScreen]->setAlpha(alpha * 255.0f);

	if (!m_alpha || m_anims1[m_currentScreen].isFinish()) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803D404C
 * Size:	000080
 */
void TPressStart::doDraw()
{
	Graphics* gfx       = sys->m_gfx;
	J2DPerspGraph& graf = gfx->m_perspGraph;
	graf.setPort();
	m_screens[m_currentScreen]->draw(*gfx, graf);
}

/*
 * --INFO--
 * Address:	803D40CC
 * Size:	00016C
 */
void TPressStart::startLoop_()
{
	f32 r = randEbisawaFloat(); // this divides by 32767 instead of 32768. why. WHY.
	if (r < 0.25f) {
		m_currentScreen = 0;
	} else if (r < 0.5f) {
		m_currentScreen = 1;
	} else if (r < 0.75f) {
		m_currentScreen = 2;
	} else {
		m_currentScreen = 3;
	}

	for (int i = 0; i < 4; i++) {
		m_screens[i]->setAlpha(255);
		m_anims1[i].stop();
		m_anims2[i].stop();
	}
	m_anims1[m_currentScreen].play(sys->m_deltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	m_anims2[m_currentScreen].play(sys->m_deltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	m_screens[m_currentScreen]->animation();
}

/*
 * --INFO--
 * Address:	803D4238
 * Size:	00000C
 */
char* TPressStart::getName() { return "TPressStart"; }
} // namespace Screen
} // namespace ebi
