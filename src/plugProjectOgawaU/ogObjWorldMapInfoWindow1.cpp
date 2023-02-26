#include "og/newScreen/WorldMapInfoWindow.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "trig.h"

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
	mDispWmap      = nullptr;
	mName          = name;
	mCurrMenuSel   = 0;
	mScreenPause   = nullptr;
	mMenuMgr       = nullptr;
	mAnimTextTitle = nullptr;
	mAnimText1     = nullptr;
	mAnimText2     = nullptr;
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
		mDispWmap = disp;
	}

	if (!mDispWmap) {
		mDispWmap = new og::Screen::DispMemberWorldMapInfoWin1;
	}

	mScreenPause = new P2DScreen::Mgr_tuning;
	mScreenPause->set("info_window.blo", 0x1100000, arc);
	Screen::TagSearch(mScreenPause, 'Nmenu01')->hide();
	Screen::TagSearch(mScreenPause, 'Nmenu02')->hide();
	Screen::setFurikoScreen(mScreenPause);

	mMenuMgr = new Screen::MenuMgr;
	mMenuMgr->init2takuTitle(mScreenPause, 'Nm00y', 'Tm00y', 'Pm00y_il', 'Pm00y_ir', 'Nm00n', 'Tm00n', 'Pm00n_il', 'Pm00n_ir');
	mCurrMenuSel = 0;
	mScreenPause->search('Tm00q')->setMsgID('4712_00'); // "Land in this area?"
	mScreenPause->search('Tm00y')->setMsgID('4713_00'); // "Yes"
	mScreenPause->search('Tm00n')->setMsgID('4714_00'); // "No"

	Screen::setCallBackMessage(mScreenPause);
	mAnimTextTitle = Screen::setMenuTitleScreen(arc, mScreenPause, 'Tm00q');
	mAnimText1     = Screen::setMenuScreen(arc, mScreenPause, 'Tm00y');
	mAnimText2     = Screen::setMenuScreen(arc, mScreenPause, 'Tm00n');
	mAnimTextTitle->open(0.5f);
	mAnimText1->open(0.6f);
	mAnimText2->open(0.7f);
	blink_Menu(mCurrMenuSel);
}

/*
 * --INFO--
 * Address:	8032BFC8
 * Size:	00005C
 */
bool ObjWorldMapInfoWindow1::doStart(::Screen::StartSceneArg const*)
{
	ogSound->setOpenWMapMenu();
	Screen::getFurikoPtr(mScreenPause, 'furiko00')->stop();
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
	mDispWmap->mResult = 1;
	out_L();
}

/*
 * --INFO--
 * Address:	8032C07C
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_menu_0()
{
	mDispWmap->mResult = 0;
	out_L();
}

/*
 * --INFO--
 * Address:	8032C0B4
 * Size:	000038
 */
void ObjWorldMapInfoWindow1::out_menu_1()
{
	mDispWmap->mResult = 1;
	out_L();
}

/*
 * --INFO--
 * Address:	8032C0EC
 * Size:	00000C
 */
void ObjWorldMapInfoWindow1::out_L() { mState = ObjSMenuBase::MENUSTATE_CloseL; }

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
int ObjWorldMapInfoWindow1::getResult() { return mDispWmap->mResult; }

} // namespace newScreen
} // namespace og
