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
 * Address:	8032208C
 * Size:	0000B0
 */
ObjSMenuPauseDoukutu::ObjSMenuPauseDoukutu(char const* name)
{
	m_disp          = nullptr;
	m_name          = name;
	m_currPauseSel  = 0;
	m_currGiveupSel = 0;
	m_menuState     = PAUSEMENU_Normal;
	_B8             = 0;

	m_screenPause = nullptr;
	m_menuPause   = nullptr;
	m_menuGiveup  = nullptr;
	m_menuPane    = nullptr;

	m_textContinue = nullptr;
	m_textDoGiveup = nullptr;
	m_textGiveupQ  = nullptr;
	m_textGiveupY  = nullptr;
	m_textGiveupN  = nullptr;

	m_anims = nullptr;

	m_pauseOpened     = false;
	m_menuPauseTimer  = 0.0f;
	m_giveupOpened    = false;
	m_menuGiveupTimer = 0.0f;
	m_warningTimer    = 0.0f;
}

/*
 * --INFO--
 * Address:	8032213C
 * Size:	0000C4
 */
ObjSMenuPauseDoukutu::~ObjSMenuPauseDoukutu() { }

/*
 * --INFO--
 * Address:	80322200
 * Size:	000574
 */
void ObjSMenuPauseDoukutu::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberBase* newdisp = getDispMember();
	m_disp = static_cast<og::Screen::DispMemberSMenuPauseDoukutu*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_DOUKUTU));
	if (!m_disp) {
		newdisp = new og::Screen::DispMemberSMenuPauseDoukutu;
		m_disp  = static_cast<og::Screen::DispMemberSMenuPauseDoukutu*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_DOUKUTU));
	}

	m_isDay1 = static_cast<og::Screen::DispMemberSMenuAll*>(newdisp)->m_isDay1; // hmm.

	m_screenPause = new P2DScreen::Mgr_tuning;
	m_screenPause->set("s_menu_pause_doukutu_l.blo", 0x1040000, arc);

	if (m_disp->m_pikisInDanger) {
		m_screenPause->search('h_03')->setMsgID('8610_00'); // "Pikmin sprouts remain. Do you still want to return to the surface?"
		m_screenPause->search('h_04')->setMsgID('8611_00'); // "Return to the Surface"
		m_screenPause->search('h_05')->setMsgID('8612_00'); // "Don't return to the Surface"
	}

	m_menuPause  = new og::Screen::MenuMgr;
	m_menuGiveup = new og::Screen::MenuMgr;
	m_menuState  = PAUSEMENU_Normal;
	m_menuPause->init(m_screenPause, 2, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
	m_currPauseSel = 0;
	m_menuGiveup->init(m_screenPause, 2, 'nu_04', 'h_04', 's_04', 'il04', 'ir04');
	m_currGiveupSel = 1;

	m_menuPane = m_screenPause->search('Nmenu1');

	m_textContinue = og::Screen::setMenuScreen(arc, m_screenPause, 'h_00');
	m_textDoGiveup = og::Screen::setMenuScreen(arc, m_screenPause, 'h_01');
	m_textGiveupQ  = og::Screen::setMenuTitleScreen(arc, m_screenPause, 'h_03');
	m_textGiveupY  = og::Screen::setMenuScreen(arc, m_screenPause, 'h_04');
	m_textGiveupN  = og::Screen::setMenuScreen(arc, m_screenPause, 'h_05');

	set_Blink_Normal();
	m_textContinue->open(0.5f);
	m_textDoGiveup->open(0.6f);
	og::Screen::setCallBack_CounterRV(m_screenPause, 'Pana01', &m_disp->m_cavePokos, 10, false, true, arc);
	m_pokos = m_disp->m_preCavePokos + m_disp->m_cavePokos;
	og::Screen::setCallBack_CounterRV(m_screenPause, 'Pfin01', &m_pokos, 10, false, true, arc);
	og::Screen::setCallBack_CounterRV(m_screenPause, 'Pcomp01', &m_pokos, 10, false, true, arc);

	if (m_disp->m_payDebt) {
		og::Screen::TagSearch(m_screenPause, 'Nfin')->show();
		og::Screen::TagSearch(m_screenPause, 'Ncomp')->hide();
	} else {
		og::Screen::TagSearch(m_screenPause, 'Ncomp')->show();
		og::Screen::TagSearch(m_screenPause, 'Nfin')->hide();
	}

	m_anims = new og::Screen::AnimGroup(4);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_doukutu_l.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_doukutu_l_02.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_doukutu_l_03.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(m_anims, arc, m_screenPause, "s_menu_pause_doukutu_l_04.btk", msBaseVal._00);
	doCreateAfter(arc, m_screenPause);
}

/*
 * --INFO--
 * Address:	80322774
 * Size:	000094
 */
void ObjSMenuPauseDoukutu::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal._00, msVal._04);
	m_pokos = m_disp->m_preCavePokos + m_disp->m_cavePokos;
	m_anims->update();
	m_screenPause->setXY(m_movePos, 0.0f);
	m_screenPause->update();
}

/*
 * --INFO--
 * Address:	80322808
 * Size:	0000B0
 */
bool ObjSMenuPauseDoukutu::doUpdate()
{
	bool ret = false;
	commonUpdate();
	if (m_exiting) {
		ret = true;
	} else {
		if (m_state == MENUSTATE_Default) {
			if (m_menuState == PAUSEMENU_Normal && !m_menuPause->m_isCursorActive) {
				m_menuPause->startCursor(0.0f);
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
 * Address:	803228B8
 * Size:	00008C
 */
void ObjSMenuPauseDoukutu::doDraw(Graphics& gfx)
{
	if (m_screenPause) {
		J2DPerspGraph* graf = &gfx.m_perspGraph;
		m_menuPause->draw(graf);
		m_menuGiveup->draw(graf);
		m_screenPause->draw(gfx, *graf);
	}
	drawYaji(gfx);
}

/*
 * --INFO--
 * Address:	80322944
 * Size:	0000A4
 */
bool ObjSMenuPauseDoukutu::doStart(::Screen::StartSceneArg const* arg)
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
 * Address:	803229E8
 * Size:	000008
 */
bool ObjSMenuPauseDoukutu::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	803229F0
 * Size:	00003C
 */
void ObjSMenuPauseDoukutu::doUpdateFinish()
{
	ObjSMenuBase::doUpdateFinish();
	m_menuPause->killCursor();
	m_menuGiveup->killCursor();
}

/*
 * --INFO--
 * Address:	80322A2C
 * Size:	00004C
 */
bool ObjSMenuPauseDoukutu::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/*
 * --INFO--
 * Address:	80322A78
 * Size:	000158
 */
void ObjSMenuPauseDoukutu::doUpdateFadeoutFinish()
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
		case 5:
			scene->setBackupScene();
			scene->startScene(nullptr);
			finishPause();
			break;
		case 6:
			scene->endScene(nullptr);
			finishPause();
			scene->setColorBG(0, 0, 0, 0);
			break;
		}
		setFinishState(m_disp->m_exitStatus);
		break;

	default:
		JUT_PANICLINE(456, "updateFinish ERR!\n");
	}
}

/*
 * --INFO--
 * Address:	80322BD0
 * Size:	0001D8
 */
bool ObjSMenuPauseDoukutu::menu_pause()
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
		if (m_currPauseSel > 0) {
			m_currPauseSel--;
			m_menuPause->select(m_currPauseSel);
			set_Blink_Normal();
		}

	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currPauseSel < 1) {
			m_currPauseSel++;
			m_menuPause->select(m_currPauseSel);
			set_Blink_Normal();
		}

	} else if (m_pauseOpened && (input & Controller::PRESS_A)) {
		if (m_currPauseSel == 1) {
			if (m_isDay1) {
				ogSound->setError();
			} else {
				m_menuPause->killCursor();
				m_currGiveupSel = 1;
				m_menuGiveup->initSelNum(m_currGiveupSel);
				m_menuGiveup->startCursor(0.5f);
				set_Menu_YesNo();
				ogSound->setDecide();
			}

		} else if (m_currPauseSel == 0) {
			m_menuPause->killCursor();
			m_disp->m_exitStatus = 5;
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
 * Address:	80322DA8
 * Size:	000010
 */
void ObjSMenuPauseDoukutu::doUpdateCancelAction() { m_disp->m_exitStatus = 5; }

/*
 * --INFO--
 * Address:	80322DB8
 * Size:	00006C
 */
void ObjSMenuPauseDoukutu::doUpdateLAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_MAP, getDispMember(), 0, true);
	jump_L(arg);
}

/*
 * --INFO--
 * Address:	80322E24
 * Size:	0000C8
 */
void ObjSMenuPauseDoukutu::doUpdateRAction()
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
 * Address:	80322EEC
 * Size:	0001E8
 */
bool ObjSMenuPauseDoukutu::menu_giveup()
{
	bool ret = false;
	if (!m_giveupOpened) {
		m_menuGiveupTimer += sys->m_deltaTime;
		if (m_menuGiveupTimer >= 1.0f) {
			m_giveupOpened = true;
		}
	}
	Controller* pad = getGamePad();
	m_menuGiveup->update();

	u32 input = pad->m_padButton.m_buttonDown;
	if (input & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
		if (m_currGiveupSel > 0) {
			m_currGiveupSel--;
			m_menuGiveup->select(m_currGiveupSel);
			set_Blink_YesNo();
		}

	} else if (input & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
		if (m_currGiveupSel < 1) {
			m_currGiveupSel++;
			m_menuGiveup->select(m_currGiveupSel);
			set_Blink_YesNo();
		}

	} else if (m_giveupOpened && (input & Controller::PRESS_B)) {
		set_Menu_Normal();
		m_menuPause->initSelNum(m_currPauseSel);
		m_menuPause->startCursor(0.5f);
		m_menuGiveup->killCursor();
		ogSound->setCancel();

	} else if (m_giveupOpened && (input & Controller::PRESS_A)) {
		if (m_currGiveupSel == 0) {
			m_disp->m_exitStatus = 6;
			out_L();
			ret = true;

		} else {
			set_Menu_Normal();
			m_menuPause->initSelNum(m_currPauseSel);
			m_menuPause->startCursor(0.5f);
			m_menuGiveup->killCursor();
		}

		ogSound->setDecide();

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	803230D4
 * Size:	000038
 */
void ObjSMenuPauseDoukutu::finishPause()
{
	m_menuPause->killCursor();
	m_menuGiveup->killCursor();
}

/*
 * --INFO--
 * Address:	8032310C
 * Size:	0000A8
 */
bool ObjSMenuPauseDoukutu::menu()
{
	bool ret = false;

	switch (m_menuState) {
	case PAUSEMENU_Normal:
		ret = menu_pause();
		break;

	case PAUSEMENU_YesNo:
		if (m_disp->m_pikisInDanger && m_warningTimer > 0.0f) {
			m_warningTimer -= sys->m_deltaTime;
			if (m_warningTimer < 0.0f) {
				ogSound->setWarning();
			}
		}
		ret = menu_giveup();
		break;
	}

	return ret;
}

/*
 * --INFO--
 * Address:	803231B4
 * Size:	000014
 */
void ObjSMenuPauseDoukutu::in_L()
{
	m_state = MENUSTATE_OpenL;
	m_angle = 15.0f;
}

/*
 * --INFO--
 * Address:	803231C8
 * Size:	000014
 */
void ObjSMenuPauseDoukutu::in_R()
{
	m_state = MENUSTATE_OpenR;
	m_angle = 15.0f;
}

/*
 * --INFO--
 * Address:	803231DC
 * Size:	00000C
 */
void ObjSMenuPauseDoukutu::wait() { m_state = MENUSTATE_Default; }

/*
 * --INFO--
 * Address:	803231E8
 * Size:	00002C
 */
void ObjSMenuPauseDoukutu::out_L()
{
	m_state = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80323214
 * Size:	00002C
 */
void ObjSMenuPauseDoukutu::out_R()
{
	m_state = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80323240
 * Size:	0000C4
 */
void ObjSMenuPauseDoukutu::set_Blink_Normal()
{
	if (m_isDay1) {
		if (m_currPauseSel == 0) {
			m_textContinue->blink(0.6f, 0.0f);
		} else {
			m_textContinue->blink(0.0f, 0.0f);
		}
		m_textDoGiveup->m_colorType = 2;
	} else {
		if (m_currPauseSel == 0) {
			m_textContinue->blink(0.6f, 0.0f);
			m_textDoGiveup->blink(0.0f, 0.0f);
		} else {
			m_textContinue->blink(0.0f, 0.0f);
			m_textDoGiveup->blink(0.6f, 0.0f);
		}
	}
}

/*
 * --INFO--
 * Address:	80323304
 * Size:	000078
 */
void ObjSMenuPauseDoukutu::set_Blink_YesNo()
{
	if (m_currGiveupSel == 0) {
		m_textGiveupY->blink(0.6f, 0.0f);
		m_textGiveupN->blink(0.0f, 0.0f);
	} else {
		m_textGiveupY->blink(0.0f, 0.0f);
		m_textGiveupN->blink(0.6f, 0.0f);
	}
}

/*
 * --INFO--
 * Address:	8032337C
 * Size:	00010C
 */
void ObjSMenuPauseDoukutu::set_Menu_Normal()
{
	m_menuState = PAUSEMENU_Normal;
	m_textContinue->open(0.6f);
	m_textDoGiveup->open(0.7f);
	m_textGiveupQ->close();
	m_textGiveupY->close();
	m_textGiveupN->close();
	set_Blink_Normal();
	m_pauseOpened    = false;
	m_menuPauseTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	80323488
 * Size:	0000D4
 */
void ObjSMenuPauseDoukutu::set_Menu_YesNo()
{
	m_menuState = PAUSEMENU_YesNo;
	m_textContinue->close();
	m_textDoGiveup->close();
	m_textGiveupQ->open(0.6f);
	m_textGiveupY->open(0.7f);
	m_textGiveupN->open(0.8f);
	set_Blink_YesNo();
	m_giveupOpened    = false;
	m_menuGiveupTimer = 0.0f;
	m_warningTimer    = msVal._08;
}

ObjSMenuPauseDoukutu::StaticValues ObjSMenuPauseDoukutu::msVal;

} // namespace newScreen
} // namespace og
