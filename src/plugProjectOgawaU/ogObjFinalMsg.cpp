#include "og/newScreen/FinalMsg.h"
#include "og/newScreen/SMenu.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "P2DScreen.h"
#include "System.h"
#include "Controller.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324F2C
 * Size:	000080
 */
ObjFinalMsg::ObjFinalMsg(const char* name)
{
	m_disp    = nullptr;
	m_name    = name;
	m_currSel = 0;
	m_screen  = nullptr;
	m_menuMgr = nullptr;

	m_animTextQ = nullptr;
	m_animTextY = nullptr;
	m_animTextN = nullptr;
	m_fadeLevel = 0.0f;
	m_movePos   = 0.0f;
}

/*
 * --INFO--
 * Address:	80324FAC
 * Size:	0000AC
 */
ObjFinalMsg::~ObjFinalMsg() { }

/*
 * --INFO--
 * Address:	80325058
 * Size:	0002CC
 */
void ObjFinalMsg::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberFinalMessage* disp = static_cast<og::Screen::DispMemberFinalMessage*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_FINAL_MSG)) {
		m_disp = disp;
	} else {
		m_disp = new og::Screen::DispMemberFinalMessage;
	}

	m_screen = new P2DScreen::Mgr_tuning;
	m_screen->set("info_window.blo", 0x1100000, arc);

	og::Screen::TagSearch(m_screen, 'Nmenu01')->hide();
	og::Screen::TagSearch(m_screen, 'Nmenu02')->hide();
	og::Screen::setFurikoScreen(m_screen);

	m_menuMgr = new og::Screen::MenuMgr;
	m_menuMgr->init2takuTitle(m_screen, 'Nm00y', 'Tm00y', 'Pm00y_il', 'Pm00y_ir', 'Nm00n', 'Tm00n', 'Pm00n_il', 'Pm00n_ir');
	m_currSel = 0;

	m_screen->search('Tm00q')->setMsgID('8480_00'); // "Resume the expedition and return to the planet?"
	m_screen->search('Tm00y')->setMsgID('8481_00'); // "Yes"
	m_screen->search('Tm00n')->setMsgID('8482_00'); // "No"
	og::Screen::setCallBackMessage(m_screen);

	m_animTextQ = og::Screen::setMenuTitleScreen(arc, m_screen, 'Tm00q');
	m_animTextY = og::Screen::setMenuScreen(arc, m_screen, 'Tm00y');
	m_animTextN = og::Screen::setMenuScreen(arc, m_screen, 'Tm00n');

	blink_Menu(m_currSel);
}

/*
 * --INFO--
 * Address:	80325324
 * Size:	000070
 */
void ObjFinalMsg::blink_Menu(int sel)
{
	f32 blink1, blink2;

	if (!sel) {
		blink1 = 0.6f;
		blink2 = 0.0f;
	} else {
		blink1 = 0.0f;
		blink2 = 0.6f;
	}

	m_animTextY->blink(blink1, 0.0f);
	m_animTextN->blink(blink2, 0.0f);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void ObjFinalMsg::commonUpdate()
{
	m_screen->setXY(m_movePos, 0.0f);
	m_screen->update();
}

/*
 * --INFO--
 * Address:	80325394
 * Size:	000068
 */
bool ObjFinalMsg::doUpdate()
{
	commonUpdate();
	return menu();
}

/*
 * --INFO--
 * Address:	803253FC
 * Size:	0001C0
 */
bool ObjFinalMsg::menu()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	m_menuMgr->update();

	u32 input = pad->m_padButton.m_buttonDown;

	if (input & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currSel > 0) {
			m_currSel--;
			m_menuMgr->select(m_currSel);
			blink_Menu(m_currSel);
		}
	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currSel < 1) {
			m_currSel++;
			m_menuMgr->select(m_currSel);
			blink_Menu(m_currSel);
		}
	} else if (input & Controller::PRESS_A) {
		if (m_currSel == 0) {
			ret                  = true;
			m_disp->m_finalState = 1;
			ogSound->setDecide();
		} else if (m_currSel == 1) {
			ret                  = true;
			m_disp->m_finalState = 2;
			ogSound->setDecide();
		}
	} else if (input & Controller::PRESS_B) {
		ret                  = true;
		m_disp->m_finalState = 2;
		ogSound->setClose();
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803255BC
 * Size:	000060
 */
void ObjFinalMsg::doDraw(Graphics& gfx)
{
	if (m_screen) {
		J2DGrafContext* persp = &gfx.m_perspGraph;
		m_screen->draw(gfx, *persp);
		m_menuMgr->draw(persp);
	}
}

/*
 * --INFO--
 * Address:	8032561C
 * Size:	000060
 */
bool ObjFinalMsg::doStart(::Screen::StartSceneArg const*)
{
	og::Screen::getFurikoPtr(m_screen, 'furiko00')->stop();
	m_movePos   = 800.0f;
	m_fadeLevel = 0.0f;
	ogSound->setOpenFinalMsg();
	return true;
}

/*
 * --INFO--
 * Address:	8032567C
 * Size:	000008
 */
bool ObjFinalMsg::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80325684
 * Size:	0000B8
 */
bool ObjFinalMsg::doUpdateFadein()
{
	bool check = false;
	commonUpdate();
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > ObjSMenuBase::msBaseVal._08) {
		check = true;
	}
	m_movePos = (1.0f - og::Screen::calcSmooth0to1(m_fadeLevel, ObjSMenuBase::msBaseVal._08)) * 800.0f;
	return check;
}

/*
 * --INFO--
 * Address:	8032573C
 * Size:	00003C
 */
void ObjFinalMsg::doUpdateFadeinFinish()
{
	m_menuMgr->startCursor(0.0f);
	wait();
}

/*
 * --INFO--
 * Address:	80325778
 * Size:	000038
 */
void ObjFinalMsg::doUpdateFinish()
{
	m_menuMgr->killCursor();
	m_fadeLevel = 0.0f;
}

/*
 * --INFO--
 * Address:	803257B0
 * Size:	0000B0
 */
bool ObjFinalMsg::doUpdateFadeout(void)
{
	bool check = false;
	commonUpdate();
	m_fadeLevel += sys->m_deltaTime;
	if (m_fadeLevel > ObjSMenuBase::msBaseVal._08) {
		check = true;
	}
	m_movePos = og::Screen::calcSmooth0to1(m_fadeLevel, ObjSMenuBase::msBaseVal._08) * -800.0f;
	return check;
}

/*
 * --INFO--
 * Address:	80325860
 * Size:	000034
 */
void ObjFinalMsg::doUpdateFadeoutFinish() { getOwner()->endScene(nullptr); }

/*
 * --INFO--
 * Address:	80325894
 * Size:	00004C
 */
void ObjFinalMsg::wait()
{
	m_animTextQ->open(0.0f);
	m_animTextY->open(0.1f);
	m_animTextN->open(0.2f);
}

} // namespace newScreen
} // namespace og
