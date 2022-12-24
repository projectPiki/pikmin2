#include "og/newScreen/WorldMapInfoWindow.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032BC48
 * Size:	000080
 */
ObjWorldMapInfoWindow1::ObjWorldMapInfoWindow1(char const* name)
    : ObjSMenuPauseVS("SMenuPauseVS screen")
{
	m_dispWmap      = nullptr;
	m_name          = name;
	m_currMenuSel   = 0;
	m_screenPause   = nullptr;
	m_menuMgr       = nullptr;
	m_animTextTitle = nullptr;
	m_animText1     = nullptr;
	m_animText2     = nullptr;
}

/*
 * --INFO--
 * Address:	8032BCC8
 * Size:	000300
 */
void ObjWorldMapInfoWindow1::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberWorldMapInfoWin1* disp = static_cast<og::Screen::DispMemberWorldMapInfoWin1*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_1)) {
		m_dispWmap = disp;
	}

	if (!m_dispWmap) {
		m_dispWmap = new og::Screen::DispMemberWorldMapInfoWin1;
	}

	m_screenPause = new P2DScreen::Mgr_tuning;
	m_screenPause->set("info_window.blo", 0x1100000, arc);
	Screen::TagSearch(m_screenPause, 'Nmenu01')->hide();
	Screen::TagSearch(m_screenPause, 'Nmenu02')->hide();
	Screen::setFurikoScreen(m_screenPause);

	m_menuMgr = new Screen::MenuMgr;
	m_menuMgr->init2takuTitle(m_screenPause, 'Nm00y', 'Tm00y', 'Pm00y_il', 'Pm00y_ir', 'Nm00n', 'Tm00n', 'Pm00n_il', 'Pm00n_ir');
	m_currMenuSel = 0;
	m_screenPause->search('Tm00q')->setMsgID('4712_00'); // "Land in this area?"
	m_screenPause->search('Tm00y')->setMsgID('4713_00'); // "Yes"
	m_screenPause->search('Tm00n')->setMsgID('4714_00'); // "No"

	Screen::setCallBackMessage(m_screenPause);
	m_animTextTitle = Screen::setMenuTitleScreen(arc, m_screenPause, 'Tm00q');
	m_animText1     = Screen::setMenuScreen(arc, m_screenPause, 'Tm00y');
	m_animText2     = Screen::setMenuScreen(arc, m_screenPause, 'Tm00n');
	m_animTextTitle->open(0.5f);
	m_animText1->open(0.6f);
	m_animText2->open(0.7f);
	blink_Menu(m_currMenuSel);
}

/*
 * --INFO--
 * Address:	8032BFC8
 * Size:	00005C
 */
bool ObjWorldMapInfoWindow1::doStart(::Screen::StartSceneArg const*)
{
	ogSound->setOpenWMapMenu();
	Screen::getFurikoPtr(m_screenPause, 'furiko00')->stop();
	start_LR(nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8032C024
 * Size:	000020
 */
void ObjWorldMapInfoWindow1::commonUpdate() { ObjSMenuPauseVS::commonUpdate(); }

/*
 * --INFO--
 * Address:	8032C044
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_cancel()
{
	m_dispWmap->m_result = 1;
	out_L();
}

/*
 * --INFO--
 * Address:	8032C07C
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_menu_0()
{
	m_dispWmap->m_result = 0;
	out_L();
}

/*
 * --INFO--
 * Address:	8032C0B4
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_menu_1()
{
	m_dispWmap->m_result = 1;
	out_L();
}

/*
 * --INFO--
 * Address:	8032C0EC
 * Size:	00000C
 */
void ObjWorldMapInfoWindow1::out_L() { m_state = ObjSMenuBase::MENUSTATE_CloseL; }

/*
 * --INFO--
 * Address:	8032C0F8
 * Size:	00006C
 */
void ObjWorldMapInfoWindow1::doUpdateFadeoutFinish()
{
	setFinishState(getResult());
	getOwner()->setColorBG(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	8032C164
 * Size:	00000C
 */
int ObjWorldMapInfoWindow1::getResult() { return m_dispWmap->m_result; }

} // namespace newScreen
} // namespace og
