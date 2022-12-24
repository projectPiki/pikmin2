#include "og/newScreen/SMenu.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "System.h"
#include "Controller.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80329190
 * Size:	000080
 */
ObjSMenuPauseVS::ObjSMenuPauseVS(char const* name)
{
	m_disp        = nullptr;
	m_name        = name;
	m_currMenuSel = 0;
	m_screenPause = nullptr;
	m_menuMgr     = nullptr;
	m_animText1   = nullptr;
	m_animText2   = nullptr;
	m_menuOpen    = false;
	m_menuTimer   = 0.0f;
	m_type        = 0;
}

/*
 * --INFO--
 * Address:	80329210
 * Size:	0000C4
 */
ObjSMenuPauseVS::~ObjSMenuPauseVS() { }

/*
 * --INFO--
 * Address:	803292D4
 * Size:	000334
 */
void ObjSMenuPauseVS::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberBase* newdisp = getDispMember();
	m_disp = static_cast<og::Screen::DispMemberSMenuPauseVS*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS));
	if (!m_disp) {
		newdisp = new og::Screen::DispMemberSMenuPauseVS;
		m_disp  = static_cast<og::Screen::DispMemberSMenuPauseVS*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS));
	}

	if (newdisp->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		if (static_cast<og::Screen::DispMemberSMenuAll*>(newdisp)->m_pauseVSType == 2) {
			m_type = 1;
		}
	}

	m_screenPause = new P2DScreen::Mgr_tuning;
	m_screenPause->set("info_window.blo", 0x1100000, arc);
	og::Screen::TagSearch(m_screenPause, 'Nmenu00')->hide();
	og::Screen::TagSearch(m_screenPause, 'Nmenu02')->hide();
	og::Screen::setFurikoScreen(m_screenPause);
	m_menuMgr = new og::Screen::MenuMgr;

	m_menuMgr->init2taku(m_screenPause, 'Nm01y', 'Tm01y', 'Pm01y_il', 'Pm01y_ir', 'Nm01n', 'Tm01n', 'Pm01n_il', 'Pm01n_ir');
	m_currMenuSel = 0;

	m_screenPause->search('Tm01y')->setMsgID('6080_00'); // "Continue"
	if (m_type != 0) {
		m_screenPause->search('Tm01n')->setMsgID('6082_00'); // "Give Up"
	} else {
		m_screenPause->search('Tm01n')->setMsgID('6081_00'); // "Quit"
	}

	og::Screen::setCallBackMessage(m_screenPause);
	m_animText1 = og::Screen::setMenuScreen(arc, m_screenPause, 'Tm01y');
	m_animText2 = og::Screen::setMenuScreen(arc, m_screenPause, 'Tm01n');
	m_animText1->open(0.5f);
	m_animText2->open(0.6f);
	blink_Menu(m_currMenuSel);
}

/*
 * --INFO--
 * Address:	80329608
 * Size:	000074
 */
void ObjSMenuPauseVS::blink_Menu(int id)
{
	f32 blinks[2];
	blinks[0] = 0.0f;
	blinks[1] = 0.0f;
	if (id >= 0 && id <= 1) {
		blinks[id] = 0.6f;
	}
	m_animText1->blink(blinks[0], 0.0f);
	m_animText2->blink(blinks[1], 0.0f);
}

/*
 * --INFO--
 * Address:	8032967C
 * Size:	000068
 */
void ObjSMenuPauseVS::commonUpdate()
{
	m_menuMgr->update();
	m_screenPause->setXY(m_movePos, 0.0f);
	m_screenPause->update();
}

/*
 * --INFO--
 * Address:	803296E4
 * Size:	000060
 */
bool ObjSMenuPauseVS::doUpdate()
{
	bool ret = false;
	commonUpdate();
	if (m_state == MENUSTATE_Default) {
		ret = menu();
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80329744
 * Size:	000230
 */
bool ObjSMenuPauseVS::menu()
{
	bool ret = false;
	if (!m_menuOpen) {
		m_menuTimer += sys->m_deltaTime;
		if (m_menuTimer >= 0.8f) {
			m_menuOpen = true;
		}
	}

	u32 input = getGamePad()->m_padButton.m_buttonDown;
	if (input & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currMenuSel > 0) {
			m_currMenuSel--;
			m_menuMgr->select(m_currMenuSel);
			blink_Menu(m_currMenuSel);
		}

	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currMenuSel < 1) {
			m_currMenuSel++;
			m_menuMgr->select(m_currMenuSel);
			blink_Menu(m_currMenuSel);
		}

	} else if (m_menuOpen && input & Controller::PRESS_A) {
		if (m_currMenuSel == 0) {
			out_menu_0();
			ret = true;
			ogSound->setDecide();

		} else if (m_currMenuSel == 1) {
			out_menu_1();
			ret = true;
			ogSound->setDecide();
		}

		m_menuMgr->killCursor();

	} else if (input & (Controller::PRESS_B | Controller::PRESS_START)) {
		out_cancel();
		ret = true;
		ogSound->setClose();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	80329974
 * Size:	000038
 */
void ObjSMenuPauseVS::out_cancel()
{
	m_disp->m_state = 2;
	out_L();
}

/*
 * --INFO--
 * Address:	803299AC
 * Size:	000038
 */
void ObjSMenuPauseVS::out_menu_0()
{
	m_disp->m_state = 2;
	out_L();
}

/*
 * --INFO--
 * Address:	803299E4
 * Size:	000038
 */
void ObjSMenuPauseVS::out_menu_1()
{
	m_disp->m_state = 7;
	out_L();
}

/*
 * --INFO--
 * Address:	80329A1C
 * Size:	000010
 */
void ObjSMenuPauseVS::doUpdateCancelAction() { m_disp->m_state = 2; }

/*
 * --INFO--
 * Address:	80329A2C
 * Size:	000060
 */
void ObjSMenuPauseVS::doDraw(Graphics& gfx)
{
	if (m_screenPause) {
		J2DPerspGraph* graf = &gfx.m_perspGraph;
		m_screenPause->draw(gfx, *graf);
		m_menuMgr->draw(graf);
	}
}

/*
 * --INFO--
 * Address:	80329A8C
 * Size:	000044
 */
bool ObjSMenuPauseVS::doStart(::Screen::StartSceneArg const*)
{
	start_LR(nullptr);
	m_menuOpen  = false;
	m_menuTimer = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	80329AD0
 * Size:	000008
 */
bool ObjSMenuPauseVS::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80329AD8
 * Size:	00004C
 */
bool ObjSMenuPauseVS::doUpdateFadein()
{
	commonUpdate();
	return updateFadeIn();
}

/*
 * --INFO--
 * Address:	80329B24
 * Size:	000048
 */
void ObjSMenuPauseVS::doUpdateFadeinFinish()
{
	m_menuMgr->startCursor(0.0f);
	wait();
}

/*
 * --INFO--
 * Address:	80329B6C
 * Size:	000048
 */
void ObjSMenuPauseVS::doUpdateFinish()
{
	m_fadeLevel = 0.0f;
	out_L();
	m_menuMgr->killCursor();
}

/*
 * --INFO--
 * Address:	80329BB4
 * Size:	00004C
 */
bool ObjSMenuPauseVS::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/*
 * --INFO--
 * Address:	80329C00
 * Size:	0000AC
 */
void ObjSMenuPauseVS::doUpdateFadeoutFinish()
{
	SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
	switch (getResult()) {
	case 2:
		startBackupScene();
		break;
	case 7:
		scene->endScene(nullptr);
		break;
	}
	setFinishState(getResult());
}

/*
 * --INFO--
 * Address:	80329CAC
 * Size:	00000C
 */
int ObjSMenuPauseVS::getResult() { return m_disp->m_state; }

/*
 * --INFO--
 * Address:	80329CB8
 * Size:	000014
 */
void ObjSMenuPauseVS::in_L()
{
	m_state = MENUSTATE_OpenL;
	m_angle = 15.0f;
}

/*
 * --INFO--
 * Address:	80329CCC
 * Size:	00000C
 */
void ObjSMenuPauseVS::wait() { m_state = MENUSTATE_Default; }

/*
 * --INFO--
 * Address:	80329CD8
 * Size:	00000C
 */
void ObjSMenuPauseVS::out_L() { m_state = MENUSTATE_CloseL; }

/*
 * --INFO--
 * Address:	80329CE4
 * Size:	000004
 */
void ObjSMenuPauseVS::doUpdateRAction() { }

/*
 * --INFO--
 * Address:	80329CE8
 * Size:	000004
 */
void ObjSMenuPauseVS::doUpdateLAction() { }

/*
 * --INFO--
 * Address:	80329CEC
 * Size:	000004
 */
void ObjSMenuPauseVS::in_R() { }

/*
 * --INFO--
 * Address:	80329CF0
 * Size:	000004
 */
void ObjSMenuPauseVS::out_R() { }

} // namespace newScreen
} // namespace og
