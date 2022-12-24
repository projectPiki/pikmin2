#include "og/newScreen/SMenu.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/anime.h"
#include "og/Sound.h"
#include "System.h"
#include "Controller.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80314238
 * Size:	0001F4
 */
void ObjSMenuPause::ObjHIOVal::getMenuColor(JUtility::TColor* col1, JUtility::TColor* col2, JUtility::TColor* col3, JUtility::TColor* col4,
                                            JUtility::TColor* col5, JUtility::TColor* col6, JUtility::TColor* col7, JUtility::TColor* col8,
                                            JUtility::TColor* col9, JUtility::TColor* col10, JUtility::TColor* col11,
                                            JUtility::TColor* col12, JUtility::TColor* col13, JUtility::TColor* col14)
{
	*col1 = ObjSMenuPause::msVal.m_color4;
	*col2 = ObjSMenuPause::msVal.m_color5;

	*col3 = ObjSMenuPause::msVal.m_color1;
	*col4 = ObjSMenuPause::msVal.m_color2;
	*col5 = ObjSMenuPause::msVal.m_color3;

	*col6 = ObjSMenuPause::msVal.m_color6;
	*col7 = ObjSMenuPause::msVal.m_color7;
	*col8 = ObjSMenuPause::msVal.m_color8;

	*col9  = ObjSMenuPause::msVal.m_color9;
	*col10 = ObjSMenuPause::msVal.m_color10;

	*col11 = ObjSMenuPause::msVal.m_color11;
	*col12 = ObjSMenuPause::msVal.m_color12;
	*col13 = ObjSMenuPause::msVal.m_color13;
	*col14 = ObjSMenuPause::msVal.m_color14;
}

/*
 * --INFO--
 * Address:	8031442C
 * Size:	0000D0
 */
ObjSMenuPause::ObjSMenuPause(char const* name)
{
	m_disp          = nullptr;
	m_name          = name;
	m_currSelPause  = 0;
	m_currSelSunset = 0;
	m_currSelReturn = 0;
	m_menuState     = PAUSEMENU_Normal;
	_BC             = 0;

	m_screenPause = nullptr;
	m_menuPause   = nullptr;
	m_menuSunset  = nullptr;
	m_menuReturn  = nullptr;
	_D0           = 0;
	_D4           = 0;

	m_textContinue = nullptr;
	m_textGoSunset = nullptr;
	m_textReturn   = nullptr;
	m_textSunsetQ  = nullptr;
	m_textSunsetY  = nullptr;
	m_textSunsetN  = nullptr;
	m_textReturnQ  = nullptr;
	m_textReturnY  = nullptr;
	m_textReturnN  = nullptr;

	m_anims = nullptr;

	m_pauseOpened     = false;
	m_menuPauseTimer  = 0.0f;
	m_sunsetOpened    = false;
	m_menuSunsetTimer = 0.0f;
	m_returnOpened    = false;
	m_menuReturnTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	803144FC
 * Size:	0000C4
 */
ObjSMenuPause::~ObjSMenuPause() { }

/*
 * --INFO--
 * Address:	803145C0
 * Size:	00054C
 */
void ObjSMenuPause::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberBase* dispfull = getDispMember();
	m_disp = static_cast<og::Screen::DispMemberSMenuPause*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE));
	if (!m_disp) {
		og::Screen::DispMemberSMenuAll* newdisp = new og::Screen::DispMemberSMenuAll;
		dispfull                                = newdisp;
		m_disp = static_cast<og::Screen::DispMemberSMenuPause*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE));
	}
	m_isDay1 = static_cast<og::Screen::DispMemberSMenuAll*>(dispfull)->m_isDay1;

	m_screenPause = new P2DScreen::Mgr_tuning;
	m_screenPause->set("s_menu_pause_l.blo", 0x1040000, arc);

	m_menuPause  = new og::Screen::MenuMgr;
	m_menuSunset = new og::Screen::MenuMgr;
	m_menuReturn = new og::Screen::MenuMgr;
	m_menuState  = PAUSEMENU_Normal;
	m_menuPause->init(m_screenPause, 3, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
	m_currSelPause = 0;
	m_menuSunset->init(m_screenPause, 2, 'nu_04', 'h_04', 's_04', 'il04', 'ir04');
	m_currSelSunset = 1;
	m_menuReturn->init(m_screenPause, 2, 'nu_07', 'h_07', 's_07', 'il07', 'ir07');
	m_currSelReturn = 1;

	m_textContinue = og::Screen::setMenuScreen(arc, m_screenPause, 'h_00');
	m_textGoSunset = og::Screen::setMenuScreen(arc, m_screenPause, 'h_01');
	m_textReturn   = og::Screen::setMenuScreen(arc, m_screenPause, 'h_02');

	m_textSunsetQ = og::Screen::setMenuTitleScreen(arc, m_screenPause, 'h_03');
	m_textSunsetY = og::Screen::setMenuScreen(arc, m_screenPause, 'h_04');
	m_textSunsetN = og::Screen::setMenuScreen(arc, m_screenPause, 'h_05');

	m_textReturnQ = og::Screen::setMenuTitleScreen(arc, m_screenPause, 'h_06');
	m_textReturnY = og::Screen::setMenuScreen(arc, m_screenPause, 'h_07');
	m_textReturnN = og::Screen::setMenuScreen(arc, m_screenPause, 'h_08');

	f32 delay = msVal._00;
	m_textContinue->open(delay);
	m_textGoSunset->open(delay + 0.1f);
	m_textReturn->open(delay + 0.2f);
	blink_TopMenu(m_currSelPause);

	m_anims = new og::Screen::AnimGroup(4);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_l.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_l_02.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_l_03.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_l_04.btk", msBaseVal._00);

	og::Screen::setCallBack_CounterRV(m_screenPause, 'Pfin01', &m_disp->m_pokoCount, 10, false, true, arc);
	og::Screen::setCallBack_CounterRV(m_screenPause, 'Pcomp01', &m_disp->m_pokoCount, 10, false, true, arc);

	if (m_disp->m_pokoCount < 10000) {
		og::Screen::TagSearch(m_screenPause, 'Nfin')->show();
		og::Screen::TagSearch(m_screenPause, 'Ncomp')->hide();
	} else {
		og::Screen::TagSearch(m_screenPause, 'Ncomp')->show();
		og::Screen::TagSearch(m_screenPause, 'Nfin')->hide();
	}
	doCreateAfter(arc, m_screenPause);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ObjSMenuPause::open_TopMenu()
{
	m_textContinue->open(0.5f);
	m_textGoSunset->open(0.6f);
	m_textReturn->open(0.7f);
	blink_TopMenu(m_currSelPause);
	m_menuPause->initSelNum(m_currSelPause);
	m_menuPause->startCursor(0.5f);
	m_pauseOpened    = false;
	m_menuPauseTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void ObjSMenuPause::close_TopMenu()
{
	m_textContinue->close();
	m_textGoSunset->close();
	m_textReturn->close();
}

/*
 * --INFO--
 * Address:	80314B0C
 * Size:	0000DC
 */
void ObjSMenuPause::blink_TopMenu(int id)
{
	if (m_isDay1) {
		if (m_currSelPause == 0) {
			m_textContinue->blink(0.6f, 0.0f);
		} else {
			m_textContinue->blink(0.0f, 0.0f);
		}
		m_textGoSunset->m_colorType = 2;
		m_textReturn->m_colorType   = 2;
	} else {
		f32 blinks[3];
		blinks[0] = 0.0f;
		blinks[1] = 0.0f;
		blinks[2] = 0.0f;

		if (id >= 0 && id <= 2) {
			blinks[id] = 0.6f;
		}

		m_textContinue->blink(blinks[0], blinks[0]);
		m_textGoSunset->blink(blinks[1], blinks[1]);
		m_textReturn->blink(blinks[2], blinks[2]);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ObjSMenuPause::open_Yuugata()
{
	m_textSunsetQ->open(0.5f);
	m_textSunsetY->open(0.6f);
	m_textSunsetN->open(0.7f);
	blink_Yuugata(m_currSelSunset);
	m_menuSunset->initSelNum(m_currSelSunset);
	m_menuSunset->startCursor(0.5f);
	m_sunsetOpened    = false;
	m_menuSunsetTimer = 0.0f;
	m_menuState       = PAUSEMENU_Yuugata;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void ObjSMenuPause::close_Yuugata()
{
	m_textSunsetQ->close();
	m_textSunsetY->close();
	m_textSunsetN->close();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void ObjSMenuPause::blink_Yuugata(int id)
{
	f32 blinks[2];
	blinks[0] = 0.0f;
	blinks[1] = 0.0f;

	if (id >= 0 && id <= 1) {
		blinks[id] = 0.6f;
	}

	m_textSunsetY->blink(blinks[0], 0.0f);
	m_textSunsetN->blink(blinks[1], 0.0f);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ObjSMenuPause::open_Zenkai()
{
	m_textReturnQ->open(0.5f);
	m_textReturnY->open(0.6f);
	m_textReturnN->open(0.7f);
	blink_Zenkai(m_currSelReturn);
	m_menuReturn->initSelNum(m_currSelReturn);
	m_menuReturn->startCursor(0.5f);
	m_returnOpened    = false;
	m_menuReturnTimer = 0.0f;
	m_menuState       = PAUSEMENU_Zenkai;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void ObjSMenuPause::close_Zenkai()
{
	m_textReturnQ->close();
	m_textReturnY->close();
	m_textReturnN->close();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void ObjSMenuPause::blink_Zenkai(int id)
{
	f32 blinks[2];
	blinks[0] = 0.0f;
	blinks[1] = 0.0f;

	if (id >= 0 && id <= 1) {
		blinks[id] = 0.6f;
	}

	m_textReturnY->blink(blinks[0], 0.0f);
	m_textReturnN->blink(blinks[1], 0.0f);
}

/*
 * --INFO--
 * Address:	80314BE8
 * Size:	00006C
 */
void ObjSMenuPause::doUpdateLAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_MAP, getDispMember(), 0, true);
	jump_L(arg);
}

/*
 * --INFO--
 * Address:	80314C54
 * Size:	0000C8
 */
void ObjSMenuPause::doUpdateRAction()
{
	if (msBaseVal.m_useController) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_CONTROLS, getDispMember(), 0, true);
		jump_R(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember(), 0, true);
		jump_R(arg);
	}
}

/*
 * --INFO--
 * Address:	80314D1C
 * Size:	000010
 */
void ObjSMenuPause::doUpdateCancelAction() { m_disp->m_exitStatus = 2; }

/*
 * --INFO--
 * Address:	80314D2C
 * Size:	000084
 */
void ObjSMenuPause::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal._3C, msVal._40);
	m_screenPause->setXY(m_movePos, 0.0f);
	m_screenPause->update();
	m_anims->update();
}

/*
 * --INFO--
 * Address:	80314DB0
 * Size:	0000B0
 */
bool ObjSMenuPause::doUpdate()
{
	bool ret = false;
	commonUpdate();
	if (m_exiting) {
		ret = true;
	} else {
		if (m_state == MENUSTATE_Default) {
			if (m_menuState == PAUSEMENU_Normal && !m_menuPause->m_isCursorActive) {
				m_menuPause->startCursor(0.2f);
			}
			ret = menu();
		} else {
			if (m_menuPause->m_isCursorActive) {
				m_menuPause->killCursor();
			}
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80314E60
 * Size:	000098
 */
void ObjSMenuPause::doDraw(Graphics& gfx)
{
	if (m_screenPause) {
		J2DPerspGraph* graf = &gfx.m_perspGraph;
		m_menuPause->draw(graf);
		m_menuSunset->draw(graf);
		m_menuReturn->draw(graf);
		m_screenPause->draw(gfx, *graf);
	}
	drawYaji(gfx);
}

/*
 * --INFO--
 * Address:	80314EF8
 * Size:	0000A4
 */
bool ObjSMenuPause::doStart(::Screen::StartSceneArg const* arg)
{
	m_anims->setFrame(0.0f);
	m_anims->setRepeat(true);
	m_anims->setSpeed(1.0f);
	m_anims->start();

	setYajiName('6050_00', '6051_00', '6052_00'); // "Radar" "Items" "Menu"
	stopYaji();
	start_LR(arg);
}

/*
 * --INFO--
 * Address:	80314F9C
 * Size:	000008
 */
bool ObjSMenuPause::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80314FA4
 * Size:	000034
 */
void ObjSMenuPause::doUpdateFinish()
{
	ObjSMenuBase::doUpdateFinish();
	killCursorAll();
}

/*
 * --INFO--
 * Address:	80314FD8
 * Size:	00004C
 */
bool ObjSMenuPause::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/*
 * --INFO--
 * Address:	80315024
 * Size:	00012C
 */
void ObjSMenuPause::doUpdateFadeoutFinish()
{
	switch (m_cancelToState) {
	case MENUCLOSE_Finish:
		startBackupScene();
		setFinishState(2);
		break;

	case MENUCLOSE_R:
		doUpdateRAction();
		setFinishState(1);
		break;

	case MENUCLOSE_L:
		doUpdateLAction();
		setFinishState(1);
		break;

	case MENUCLOSE_None:
		SceneSMenuBase* scene = static_cast<SceneSMenuBase*>(getOwner());
		switch (m_disp->m_exitStatus) {
		case 2:
			startBackupScene();
			killCursorAll();
			break;

		case 3:
		case 4:
			scene->endScene(nullptr);
			killCursorAll();
			break;
		}
		setFinishState(m_disp->m_exitStatus);
		break;

	default:
		JUT_PANICLINE(670, "updateFinish ERR!\n");
	}
}

/*
 * --INFO--
 * Address:	80315150
 * Size:	0004C0
 */
bool ObjSMenuPause::menu_pause()
{
	bool ret = false;
	if (!m_pauseOpened) {
		m_menuPauseTimer += sys->m_deltaTime;
		if (m_menuPauseTimer >= 1.0f) {
			m_pauseOpened = true;
		}
	}
	Controller* pad = getGamePad();
	m_menuPause->update();

	u32 input = pad->m_padButton.m_buttonDown;
	if (input & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currSelPause > 0) {
			m_currSelPause--;
			m_menuPause->select(m_currSelPause);
			blink_TopMenu(m_currSelPause);
		}

	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currSelPause < 1) {
			m_currSelPause++;
			m_menuPause->select(m_currSelPause);
			blink_TopMenu(m_currSelPause);
		}

	} else if (m_pauseOpened && (input & Controller::PRESS_A)) {

		if (m_currSelPause == 1) {
			if (m_isDay1) {
				ogSound->setError();
			} else {
				m_currSelSunset = 1;
				close_TopMenu();
				open_Yuugata();
				m_menuPause->killCursor();
				ogSound->setDecide();
			}

		} else if (m_currSelPause == 2) {
			if (m_isDay1) {
				ogSound->setError();
			} else {
				m_currSelReturn = 1;
				close_TopMenu();
				open_Zenkai();
				m_menuPause->killCursor();
				ogSound->setDecide();
			}

		} else if (m_currSelPause == 0) {
			m_disp->m_exitStatus = 2;
			out_L();
			ret = 1;
			ogSound->setDecide();
		}

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	80315610
 * Size:	000478
 */
bool ObjSMenuPause::menu_yuugata()
{
	bool ret = false;
	if (!m_sunsetOpened) {
		m_menuSunsetTimer += sys->m_deltaTime;
		if (m_menuSunsetTimer >= 1.0f) {
			m_sunsetOpened = true;
		}
	}
	Controller* pad = getGamePad();
	m_menuSunset->update();

	u32 input = pad->m_padButton.m_buttonDown;
	if (input & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currSelSunset > 0) {
			m_currSelSunset--;
			m_menuSunset->select(m_currSelSunset);
			blink_Yuugata(m_currSelSunset);
		}

	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currSelSunset < 1) {
			m_currSelSunset++;
			m_menuSunset->select(m_currSelSunset);
			blink_Yuugata(m_currSelSunset);
		}

	} else if (m_sunsetOpened && (input & Controller::PRESS_B)) {
		m_menuState = PAUSEMENU_Normal;
		m_menuSunset->killCursor();
		open_TopMenu();
		close_Yuugata();
		ogSound->setCancel();

	} else if (m_sunsetOpened && (input & Controller::PRESS_A)) {
		if (m_currSelSunset == 0) {
			m_disp->m_exitStatus = 3;
			out_L();
			ret = 1;
		} else {
			m_menuState = PAUSEMENU_Normal;
			open_TopMenu();
			close_Yuugata();
		}
		m_menuSunset->killCursor();
		ogSound->setDecide();

	} else {
		ret = ObjSMenuBase::doUpdate();
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80315A88
 * Size:	000478
 */
bool ObjSMenuPause::menu_zenkai()
{
	bool ret = false;
	if (!m_returnOpened) {
		m_menuReturnTimer += sys->m_deltaTime;
		if (m_menuReturnTimer >= 1.0f) {
			m_returnOpened = true;
		}
	}
	Controller* pad = getGamePad();
	m_menuReturn->update();

	u32 input = pad->m_padButton.m_buttonDown;
	if (input & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currSelReturn > 0) {
			m_currSelReturn--;
			m_menuReturn->select(m_currSelReturn);
			blink_Zenkai(m_currSelReturn);
		}

	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currSelReturn < 1) {
			m_currSelReturn++;
			m_menuReturn->select(m_currSelReturn);
			blink_Zenkai(m_currSelReturn);
		}

	} else if (m_returnOpened && (input & Controller::PRESS_B)) {
		m_menuState = PAUSEMENU_Normal;
		m_menuReturn->killCursor();
		open_TopMenu();
		close_Zenkai();
		ogSound->setCancel();

	} else if (m_returnOpened && (input & Controller::PRESS_A)) {
		if (m_currSelReturn == 0) {
			m_disp->m_exitStatus = 4;
			out_L();
			ret = 1;
		} else {
			open_TopMenu();
			close_Zenkai();
			m_menuState = PAUSEMENU_Normal;
		}

		ogSound->setDecide();
		m_menuReturn->killCursor();

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	80315F00
 * Size:	000040
 */
void ObjSMenuPause::killCursorAll()
{
	m_menuPause->killCursor();
	m_menuSunset->killCursor();
	m_menuReturn->killCursor();
}

/*
 * --INFO--
 * Address:	80315F40
 * Size:	00006C
 */
bool ObjSMenuPause::menu()
{
	bool ret = false;

	switch (m_menuState) {
	case PAUSEMENU_Normal:
		ret = menu_pause();
		break;

	case PAUSEMENU_Yuugata:
		ret = menu_yuugata();
		break;

	case PAUSEMENU_Zenkai:
		ret = menu_zenkai();
		break;
	}

	return ret;
}

/*
 * --INFO--
 * Address:	80315FAC
 * Size:	000014
 */
void ObjSMenuPause::in_L()
{
	m_state = MENUSTATE_OpenL;
	m_angle = 15.0f;
}

/*
 * --INFO--
 * Address:	80315FC0
 * Size:	000014
 */
void ObjSMenuPause::in_R()
{
	m_state = MENUSTATE_OpenR;
	m_angle = 15.0f;
}

/*
 * --INFO--
 * Address:	80315FD4
 * Size:	000030
 */
void ObjSMenuPause::wait()
{
	m_state = MENUSTATE_Default;
	m_menuPause->startCursor(0.2f);
}

/*
 * --INFO--
 * Address:	80316004
 * Size:	00002C
 */
void ObjSMenuPause::out_L()
{
	m_state = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80316030
 * Size:	00002C
 */
void ObjSMenuPause::out_R()
{
	m_state = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

ObjSMenuPause::ObjHIOVal ObjSMenuPause::msVal;

} // namespace newScreen
} // namespace og
