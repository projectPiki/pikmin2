#include "types.h"
#include "og/newScreen/UfoMenu.h"
#include "P2DScreen.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/anime.h"
#include "Controller.h"
#include "og/Sound.h"
#include "System.h"

namespace og {
namespace newScreen {

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	80323798
 * Size:	0000B0
 */
ObjUfoMenu::ObjUfoMenu(char const* name)
{
	m_name            = name;
	m_disp            = nullptr;
	m_ufoScreen       = nullptr;
	m_pikiScreen      = nullptr;
	m_selectIndex     = 0;
	m_menu            = nullptr;
	m_doEnd           = false;
	m_screenMovePos   = 800.0f;
	m_lightAnims      = nullptr;
	m_pikiAnims       = nullptr;
	m_fadeTimer       = 0.0f;
	m_paneWhiteWalk   = nullptr;
	m_paneWhiteStand  = nullptr;
	m_panePurpleWalk  = nullptr;
	m_panePurpleStand = nullptr;
	m_paneAllWhite    = nullptr;
	m_paneAllPurple   = nullptr;
	m_paneN00         = nullptr;
	m_paneN01         = nullptr;
	_8C               = 0;
	m_doDraw          = false;
}

/*
 * --INFO--
 * Address:	80323848
 * Size:	0000AC
 */
ObjUfoMenu::~ObjUfoMenu() { }

/*
 * --INFO--
 * Address:	803238F4
 * Size:	000490
 */
void ObjUfoMenu::doCreate(JKRArchive* arc)
{
	m_disp                               = nullptr;
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_UFO_GROUP)) {
		m_disp = disp;
	} else {
		m_disp = new og::Screen::DispMemberUfoGroup();
	}

	m_ufoScreen = new P2DScreen::Mgr_tuning;
	m_ufoScreen->set("ufo.blo", 0x1040000, arc);
	m_pikiScreen = new P2DScreen::Mgr;
	m_pikiScreen->set("ufo_pikmin_icon.blo", 0x1040000, arc);

	m_paneWhiteWalk   = og::Screen::TagSearch(m_pikiScreen, 'P_w_00');
	m_paneWhiteStand  = og::Screen::TagSearch(m_pikiScreen, 'P_w_s00');
	m_panePurpleWalk  = og::Screen::TagSearch(m_pikiScreen, 'P_b_00');
	m_panePurpleStand = og::Screen::TagSearch(m_pikiScreen, 'P_b_s_00');
	m_paneAllWhite    = og::Screen::TagSearch(m_pikiScreen, 'Nall_w');
	m_paneAllPurple   = og::Screen::TagSearch(m_pikiScreen, 'Nall_b');
	m_paneN00         = og::Screen::TagSearch(m_ufoScreen, 'N00_c');
	m_paneN01         = og::Screen::TagSearch(m_ufoScreen, 'N01_c');

	og::Screen::setCallBack_Furiko(m_ufoScreen, 'furiko00');
	og::Screen::setCallBack_CounterRV(m_ufoScreen, 'Ppi00_1', &m_disp->m_contena1.m_inOnion, 10, 0, 1, arc);
	og::Screen::setCallBack_CounterRV(m_ufoScreen, 'Ppi01_1', &m_disp->m_contena2.m_inOnion, 10, 0, 1, arc);
	og::Screen::setCallBackMessage(m_ufoScreen);
	m_selectIndex = 0;
	setSelectPikmin(m_selectIndex);
	m_menu = new og::Screen::MenuMgr;
	m_menu->init(m_ufoScreen, 2, 'N00', 'h_00', 's_00', 'il00', 'ir00');
	m_menu->m_doScale = true;
	m_menu->_74       = msVal._24;
	m_lightAnims      = new og::Screen::AnimGroup(3);
	og::Screen::registAnimGroupPane(m_lightAnims, arc, m_ufoScreen, 'Plight00', "ufo.bck", 0.5f);
	og::Screen::registAnimGroupPane(m_lightAnims, arc, m_ufoScreen, 'Plight01', "ufo.bck", 0.5f);
	og::Screen::registAnimGroupScreen(m_lightAnims, arc, m_ufoScreen, "ufo.bpk", 0.5f);
	m_pikiAnims = new og::Screen::AnimGroup(1);
	og::Screen::registAnimGroupScreen(m_pikiAnims, arc, m_pikiScreen, "ufo_pikmin_icon.btp", 0.5f);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void ObjUfoMenu::commonUpdate()
{
	m_lightAnims->update();
	m_pikiAnims->update();
	m_paneN00->move(msVal._0C, msVal._10);
	J2DPane* pane = m_paneN00;
	pane->updateScale(msVal._14);
	m_paneN01->move(msVal._18, msVal._1C);
	pane = m_paneN01;
	pane->updateScale(msVal._20);
	m_doDraw = true;
	m_ufoScreen->setXY(m_screenMovePos, 0.0f);
	m_ufoScreen->update();
	m_menu->update();
	m_pikiScreen->update();
}

/*
 * --INFO--
 * Address:	80323D84
 * Size:	0000F4
 */
void ObjUfoMenu::setSelectPikmin(int doEnable)
{
	if (!doEnable) {
		m_paneWhiteStand->setAlpha(255);
		m_panePurpleWalk->setAlpha(255);
		m_paneWhiteWalk->setAlpha(0);
		m_panePurpleStand->setAlpha(0);
	} else {
		m_paneWhiteStand->setAlpha(0);
		m_panePurpleWalk->setAlpha(0);
		m_paneWhiteWalk->setAlpha(255);
		m_panePurpleStand->setAlpha(255);
	}
}

/*
 * --INFO--
 * Address:	80323E78
 * Size:	000524
 */
bool ObjUfoMenu::doUpdate()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	if (m_disp->m_hasPurple && m_disp->m_hasWhite) {
		if (pad->m_padButton.m_buttonDown & (Controller::PRESS_DPAD_UP | Controller::UNKNOWN_32)) {
			if (m_selectIndex > 0) {
				m_selectIndex--;
				m_menu->select(m_selectIndex & 0xffff);
				setSelectPikmin(m_selectIndex);
			}

		} else if (pad->m_padButton.m_buttonDown & (Controller::PRESS_DPAD_DOWN | Controller::UNKNOWN_31)) {
			if (m_selectIndex < 1) {
				m_selectIndex++;
				m_menu->select(m_selectIndex & 0xffff);
				if (!m_selectIndex) {
					m_paneWhiteStand->setAlpha(255);
					m_panePurpleWalk->setAlpha(255);
					m_paneWhiteWalk->setAlpha(0);
					m_panePurpleStand->setAlpha(0);
				} else {
					m_paneWhiteStand->setAlpha(0);
					m_panePurpleWalk->setAlpha(0);
					m_paneWhiteWalk->setAlpha(255);
					m_panePurpleStand->setAlpha(255);
				}
			}
		}
	}
	if (pad->m_padButton.m_buttonDown & Controller::PRESS_A) {
		ogSound->setDecide();
		ret = 1;
		if (m_selectIndex == 0) {
			m_disp->m_ufoMenu.m_contenaType = 1;
			::Screen::SetSceneArg arg(SCENE_CONTENA_WHITE, getDispMember(), 0, true);
			::Screen::SceneBase* base = getOwner();
			arg._09                   = false;
			bool check                = base->setScene(arg);
			if (check) {
				check = base->startScene(nullptr);
				JUT_ASSERTLINE(356, check, "‚¾‚ß‚Å‚·\n");
			}
		} else if (m_selectIndex == 1) {
			m_disp->m_ufoMenu.m_contenaType = 2;
			::Screen::SetSceneArg arg(SCENE_CONTENA_PURPLE, getDispMember(), 0, true);
			::Screen::SceneBase* base = getOwner();
			arg._09                   = false;
			bool check                = base->setScene(arg);
			if (check) {
				check = base->startScene(nullptr);
				JUT_ASSERTLINE(372, check, "‚¾‚ß‚Å‚·\n");
			}
		}
	} else if (pad->m_padButton.m_buttonDown & Controller::PRESS_B) {
		ogSound->setClose();
		m_disp->m_ufoMenu.m_contenaType = 0;
		setBackupScene();
		ret = 1;
	}
	commonUpdate();
	return ret;
}

/*
 * --INFO--
 * Address:	8032439C
 * Size:	000094
 */
void ObjUfoMenu::setBackupScene()
{
	if (!m_doEnd) {
		::Screen::SceneBase* base = getOwner();
		if (base->setBackupScene()) {
			if (!base->startScene(nullptr)) {
				JUT_PANICLINE(409, "‚¾‚ß‚Å‚·\n");
			}
		}
		m_doEnd = true;
	}
}

/*
 * --INFO--
 * Address:	80324430
 * Size:	0000B4
 */
void ObjUfoMenu::doDraw(Graphics& gfx)
{
	J2DPerspGraph& graf = gfx.m_perspGraph;
	if (m_doDraw) {
		m_ufoScreen->draw(gfx, graf);
		PSMTXCopy(m_paneN00->_080, m_paneAllWhite->_050);
		PSMTXCopy(m_paneN01->_080, m_paneAllPurple->_050);
		m_pikiScreen->draw(gfx, graf);
		m_menu->draw(&graf);
	}
}

/*
 * --INFO--
 * Address:	803244E4
 * Size:	000020
 */
bool ObjUfoMenu::doStart(::Screen::StartSceneArg const*)
{
	m_fadeTimer     = 0.0f;
	m_screenMovePos = 800.0f;
	m_doDraw        = false;
	return true;
}

/*
 * --INFO--
 * Address:	80324504
 * Size:	000008
 */
bool ObjUfoMenu::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	8032450C
 * Size:	000044
 */
void ObjUfoMenu::doUpdateFadeinFinish()
{
	m_menu->initSelNum(m_selectIndex);
	m_menu->startCursor(0.1f);
}

/*
 * --INFO--
 * Address:	80324550
 * Size:	00002C
 */
void ObjUfoMenu::doUpdateFinish()
{
	m_fadeTimer = 0.0f;
	m_menu->killCursor();
}

/*
 * --INFO--
 * Address:	8032457C
 * Size:	000024
 */
void ObjUfoMenu::doUpdateFadeoutFinish() { m_menu->killCursor(); }

/*
 * --INFO--
 * Address:	803245A0
 * Size:	000188
 */
bool ObjUfoMenu::doUpdateFadein()
{
	bool check = false;
	commonUpdate();
	m_fadeTimer += sys->m_deltaTime;
	if (m_fadeTimer >= msVal._08) {
		check = true;
	}

	m_screenMovePos = (1.0f - og::Screen::calcSmooth0to1(m_fadeTimer, msVal._08)) * 800.0f;
	return check;
}

/*
 * --INFO--
 * Address:	80324728
 * Size:	00017C
 */
bool ObjUfoMenu::doUpdateFadeout()
{
	bool check = false;
	commonUpdate();
	m_fadeTimer += sys->m_deltaTime;
	if (m_fadeTimer > msVal._08) {
		check = true;
	}
	m_screenMovePos = (og::Screen::calcSmooth0to1(m_fadeTimer, msVal._08)) * -800.0f;
	return check;
}

ObjUfoMenu::StaticValues ObjUfoMenu::msVal = ObjUfoMenu::StaticValues();

} // namespace newScreen
} // namespace og
