#include "Morimura/challengeSelect2D.h"
#include "Morimura/VsSelect.h"
#include "Morimura/Zukan.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "og/newScreen/WorldMapInfoWindow.h"
#include "trig.h"
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
	mDispWmap    = nullptr;
	mName        = name;
	mScreenPause = nullptr;
	mMenuMgr     = nullptr;
	mAnimText1   = nullptr;
	mAnimText2   = nullptr;
	mPrevSel     = 0;
	mCurrMenuSel = mPrevSel;
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
		mDispWmap = reinterpret_cast<Screen::DispMemberWorldMapInfoWin0*>(disp);
	} else if (disp->isID(OWNER_MRMR, MEMBER_VS_SELECT)) {
		mDispWmap = reinterpret_cast<Morimura::DispMemberVsSelect*>(disp)->mDispWorldMapInfoWin0;
	} else if (disp->isID(OWNER_MRMR, MEMBER_CHALLENGE_SELECT)) {
		mDispWmap = reinterpret_cast<Morimura::DispMemberChallengeSelect*>(disp)->mDispWorldMapInfoWin0;
	} else if (disp->isID(OWNER_MRMR, MEMBER_ZUKAN_ENEMY)) {
		mDispWmap = reinterpret_cast<Morimura::DispMemberZukanEnemy*>(disp)->mDispWorldMapInfoWin0;
		P2ASSERTLINE(125, mDispWmap != nullptr);
	} else if (disp->isID(OWNER_MRMR, MEMBER_ZUKAN_ITEM)) {
		mDispWmap = reinterpret_cast<Morimura::DispMemberZukanItem*>(disp)->mDispWorldMapInfoWin0;
		P2ASSERTLINE(129, mDispWmap != nullptr);
	}

	if (!mDispWmap) {
		mDispWmap = new Screen::DispMemberWorldMapInfoWin0;
	}

	mScreenPause = new P2DScreen::Mgr_tuning;
	mScreenPause->set("info_window.blo", 0x1100000, arc);
	Screen::TagSearch(mScreenPause, 'Nmenu00')->hide();
	Screen::TagSearch(mScreenPause, 'Nmenu02')->hide();
	Screen::setFurikoScreen(mScreenPause);

	mMenuMgr = new Screen::MenuMgr;
	mMenuMgr->init2taku(mScreenPause, 'Nm01y', 'Tm01y', 'Pm01y_il', 'Pm01y_ir', 'Nm01n', 'Tm01n', 'Pm01n_il', 'Pm01n_ir');
	mScreenPause->search('Tm01y')->setMsgID(mDispWmap->mMsgIDYes);
	mScreenPause->search('Tm01n')->setMsgID(mDispWmap->mMsgIDNo);
	Screen::setCallBackMessage(mScreenPause);
	mAnimText1 = Screen::setMenuScreen(arc, mScreenPause, 'Tm01y');
	mAnimText2 = Screen::setMenuScreen(arc, mScreenPause, 'Tm01n');
	mAnimText1->open(0.5f);
	mAnimText2->open(0.6f);
}

/*
 * --INFO--
 * Address:	8032B788
 * Size:	00008C
 */
bool ObjWorldMapInfoWindow0::doStart(::Screen::StartSceneArg const*)
{
	mPrevSel = mDispWmap->mStartSelection;
	mMenuMgr->initSelNum(mPrevSel);
	mCurrMenuSel = mPrevSel;
	blink_Menu(mCurrMenuSel);
	ogSound->setOpenWMapMenu();

	Screen::getFurikoPtr(mScreenPause, 'furiko00')->stop();
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
	mFadeLevel += sys->mDeltaTime;
	bool result = false;
	if (mFadeLevel > msBaseVal._08) {
		result = true;
	}
	mMovePos = (1.0f - Screen::calcSmooth0to1(mFadeLevel, msBaseVal._08)) * 800.0f;
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
	mDispWmap->mResult = 0;
	out_L();
}

/*
 * --INFO--
 * Address:	8032B8FC
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_menu_0()
{
	mDispWmap->mResult = 0;
	out_L();
}

/*
 * --INFO--
 * Address:	8032B934
 * Size:	000038
 */
void ObjWorldMapInfoWindow0::out_menu_1()
{
	mDispWmap->mResult = 1;
	out_L();
}

/*
 * --INFO--
 * Address:	8032B96C
 * Size:	00000C
 */
void ObjWorldMapInfoWindow0::out_L() { mState = 2; }

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
int ObjWorldMapInfoWindow0::getResult() { return mDispWmap->mResult; }

} // namespace newScreen
} // namespace og
