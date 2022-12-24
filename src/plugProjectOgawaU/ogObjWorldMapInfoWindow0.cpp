#include "Morimura/Challenge.h"
#include "Morimura/VsSelect.h"
#include "Morimura/Zukan.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "og/newScreen/WorldMapInfoWindow.h"
#include "System.h"

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
 * Address:	8032B340
 * Size:	000084
 */
ObjWorldMapInfoWindow0::ObjWorldMapInfoWindow0(char const* name)
    : ObjSMenuPauseVS("SMenuPauseVS screen")
{
	m_dispWmap    = nullptr;
	m_name        = name;
	m_screenPause = nullptr;
	m_menuMgr     = nullptr;
	m_animText1   = nullptr;
	m_animText2   = nullptr;
	m_prevSel     = 0;
	m_currMenuSel = m_prevSel;
}

/*
 * --INFO--
 * Address:	8032B3C4
 * Size:	0003C4
 */
void ObjWorldMapInfoWindow0::doCreate(JKRArchive* arc)
{
	Screen::DispMemberBase* disp = getDispMember();
	if (disp->isID(OWNER_OGA, MEMBER_WORLD_MAP_INFO_WINDOW_0)) {
		m_dispWmap = reinterpret_cast<Screen::DispMemberWorldMapInfoWin0*>(disp);
	} else if (disp->isID(OWNER_MRMR, MEMBER_VS_SELECT)) {
		m_dispWmap = reinterpret_cast<Morimura::DispMemberVsSelect*>(disp)->m_dispWorldMapInfoWin0;
	} else if (disp->isID(OWNER_MRMR, MEMBER_CHALLENGE_SELECT)) {
		m_dispWmap = reinterpret_cast<Morimura::DispMemberChallengeSelect*>(disp)->m_dispWorldMapInfoWin0;
	} else if (disp->isID(OWNER_MRMR, MEMBER_ZUKAN_ENEMY)) {
		m_dispWmap = reinterpret_cast<Morimura::DispMemberZukanEnemy*>(disp)->m_dispWorldMapInfoWin0;
		P2ASSERTLINE(125, m_dispWmap != nullptr);
	} else if (disp->isID(OWNER_MRMR, MEMBER_ZUKAN_ITEM)) {
		m_dispWmap = reinterpret_cast<Morimura::DispMemberZukanItem*>(disp)->m_dispWorldMapInfoWin0;
		P2ASSERTLINE(129, m_dispWmap != nullptr);
	}

	if (!m_dispWmap) {
		m_dispWmap = new Screen::DispMemberWorldMapInfoWin0;
	}

	m_screenPause = new P2DScreen::Mgr_tuning;
	m_screenPause->set("info_window.blo", 0x1100000, arc);
	Screen::TagSearch(m_screenPause, 'Nmenu00')->hide();
	Screen::TagSearch(m_screenPause, 'Nmenu02')->hide();
	Screen::setFurikoScreen(m_screenPause);

	m_menuMgr = new Screen::MenuMgr;
	m_menuMgr->init2taku(m_screenPause, 'Nm01y', 'Tm01y', 'Pm01y_il', 'Pm01y_ir', 'Nm01n', 'Tm01n', 'Pm01n_il', 'Pm01n_ir');
	m_screenPause->search('Tm01y')->setMsgID(m_dispWmap->m_msgIDYes);
	m_screenPause->search('Tm01n')->setMsgID(m_dispWmap->m_msgIDNo);
	Screen::setCallBackMessage(m_screenPause);
	m_animText1 = Screen::setMenuScreen(arc, m_screenPause, 'Tm01y');
	m_animText2 = Screen::setMenuScreen(arc, m_screenPause, 'Tm01n');
	m_animText1->open(0.5f);
	m_animText2->open(0.6f);
}

/*
 * --INFO--
 * Address:	8032B788
 * Size:	00008C
 */
bool ObjWorldMapInfoWindow0::doStart(::Screen::StartSceneArg const*)
{
	m_prevSel = m_dispWmap->m_startSelection;
	m_menuMgr->initSelNum(m_prevSel);
	m_currMenuSel = m_prevSel;
	blink_Menu(m_currMenuSel);
	ogSound->setOpenWMapMenu();

	Screen::getFurikoPtr(m_screenPause, 'furiko00')->stop();
	start_LR(nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8032B814
 * Size:	000090
 */
bool ObjWorldMapInfoWindow0::doUpdateFadein()
{
	commonUpdate();
	m_fadeLevel += sys->m_deltaTime;
	bool result = false;
	if (m_fadeLevel > msBaseVal._08) {
		result = true;
	}
	m_movePos = (1.0f - Screen::calcSmooth0to1(m_fadeLevel, msBaseVal._08)) * 800.0f;
	return result;
}

/*
 * --INFO--
 * Address:	8032B8A4
 * Size:	000020
 */
void ObjWorldMapInfoWindow0::commonUpdate() { ObjSMenuPauseVS::commonUpdate(); }

/*
 * --INFO--
 * Address:	8032B8C4
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_cancel()
{
	m_dispWmap->m_result = 0;
	out_L();
}

/*
 * --INFO--
 * Address:	8032B8FC
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_menu_0()
{
	m_dispWmap->m_result = 0;
	out_L();
}

/*
 * --INFO--
 * Address:	8032B934
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_menu_1()
{
	m_dispWmap->m_result = 1;
	out_L();
}

/*
 * --INFO--
 * Address:	8032B96C
 * Size:	00000C
 */
void ObjWorldMapInfoWindow0::out_L() { m_state = 2; }

/*
 * --INFO--
 * Address:	8032B978
 * Size:	000088
 */
void ObjWorldMapInfoWindow0::doUpdateFadeoutFinish()
{
	setFinishState(getResult());
	if (!getResult()) {
		getOwner()->setColorBG(0, 0, 0, 0);
	}
}

/*
 * --INFO--
 * Address:	8032BA00
 * Size:	00000C
 */
int ObjWorldMapInfoWindow0::getResult() { return m_dispWmap->m_result; }

} // namespace newScreen
} // namespace og
