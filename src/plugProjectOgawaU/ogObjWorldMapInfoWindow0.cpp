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
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen22ObjWorldMapInfoWindow0
    __vt__Q32og9newScreen22ObjWorldMapInfoWindow0:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte
   doStart__Q32og9newScreen22ObjWorldMapInfoWindow0FPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow0FP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte loop__Q32og9newScreen12ObjSMenuBaseFv
        .4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
        .4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
        .4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
        .4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
    .global __vt__Q32og6Screen26DispMemberWorldMapInfoWin0
    __vt__Q32og6Screen26DispMemberWorldMapInfoWin0:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
        .4byte getOwnerID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
        .4byte getMemberID__Q32og6Screen26DispMemberWorldMapInfoWin0Fv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF08
    lbl_8051DF08:
        .float 0.5
    .global lbl_8051DF0C
    lbl_8051DF0C:
        .4byte 0x3F19999A
    .global lbl_8051DF10
    lbl_8051DF10:
        .4byte 0x44480000
    .global lbl_8051DF14
    lbl_8051DF14:
        .float 1.0
*/

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

// /*
//  * __dt
//  * --INFO--
//  * Address:	8032BA0C
//  * Size:	000068
//  */
// ObjWorldMapInfoWindow0::~ObjWorldMapInfoWindow0()
// {
// }
} // namespace newScreen
} // namespace og

// namespace Screen {

// /*
//  * --INFO--
//  * Address:	8032BA74
//  * Size:	000008
//  */
// u32 DispMemberWorldMapInfoWin0::getSize(void) { return 0x28; }

// /*
//  * --INFO--
//  * Address:	8032BA7C
//  * Size:	00000C
//  */
// void DispMemberWorldMapInfoWin0::getOwnerID(void)
// {
// 	/*
// lis      r3, 0x004F4741@ha
// addi     r3, r3, 0x004F4741@l
// blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8032BA88
//  * Size:	000014
//  */
// void DispMemberWorldMapInfoWin0::getMemberID(void)
// {
// 	/*
// lis      r4, 0x57696E30@ha
// lis      r3, 0x574D6170@ha
// addi     r4, r4, 0x57696E30@l
// addi     r3, r3, 0x574D6170@l
// blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8032BA9C
//  * Size:	000008
//  */
// @24 @og::newScreen::ObjWorldMapInfoWindow0::~ObjWorldMapInfoWindow0(void)
// {
// 	/*
// addi     r3, r3, -24
// b        __dt__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
// 	*/
// }
// } // namespace Screen
