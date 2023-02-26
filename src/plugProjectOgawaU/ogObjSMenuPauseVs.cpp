#include "og/newScreen/SMenu.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/callbackNodes.h"
#include "og/Sound.h"
#include "System.h"
#include "Controller.h"
#include "trig.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80329190
 * Size:	000080
 */
ObjSMenuPauseVS::ObjSMenuPauseVS(char const* name)
{
	mDisp        = nullptr;
	mName        = name;
	mCurrMenuSel = 0;
	mScreenPause = nullptr;
	mMenuMgr     = nullptr;
	mAnimText1   = nullptr;
	mAnimText2   = nullptr;
	mMenuOpen    = false;
	mMenuTimer   = 0.0f;
	mType        = 0;
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
	mDisp = static_cast<og::Screen::DispMemberSMenuPauseVS*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS));
	if (!mDisp) {
		newdisp = new og::Screen::DispMemberSMenuPauseVS;
		mDisp   = static_cast<og::Screen::DispMemberSMenuPauseVS*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_VS));
	}

	if (newdisp->isID(OWNER_OGA, MEMBER_START_MENU_ALL)) {
		if (static_cast<og::Screen::DispMemberSMenuAll*>(newdisp)->mOpenMode == og::Screen::DispMemberSMenuAll::Open_Versus) {
			mType = 1;
		}
	}

	mScreenPause = new P2DScreen::Mgr_tuning;
	mScreenPause->set("info_window.blo", 0x1100000, arc);
	og::Screen::TagSearch(mScreenPause, 'Nmenu00')->hide();
	og::Screen::TagSearch(mScreenPause, 'Nmenu02')->hide();
	og::Screen::setFurikoScreen(mScreenPause);
	mMenuMgr = new og::Screen::MenuMgr;

	mMenuMgr->init2taku(mScreenPause, 'Nm01y', 'Tm01y', 'Pm01y_il', 'Pm01y_ir', 'Nm01n', 'Tm01n', 'Pm01n_il', 'Pm01n_ir');
	mCurrMenuSel = 0;

	mScreenPause->search('Tm01y')->setMsgID('6080_00'); // "Continue"
	if (mType != 0) {
		mScreenPause->search('Tm01n')->setMsgID('6082_00'); // "Give Up"
	} else {
		mScreenPause->search('Tm01n')->setMsgID('6081_00'); // "Quit"
	}

	og::Screen::setCallBackMessage(mScreenPause);
	mAnimText1 = og::Screen::setMenuScreen(arc, mScreenPause, 'Tm01y');
	mAnimText2 = og::Screen::setMenuScreen(arc, mScreenPause, 'Tm01n');
	mAnimText1->open(0.5f);
	mAnimText2->open(0.6f);
	blink_Menu(mCurrMenuSel);
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
	mAnimText1->blink(blinks[0], 0.0f);
	mAnimText2->blink(blinks[1], 0.0f);
}

/*
 * --INFO--
 * Address:	8032967C
 * Size:	000068
 */
void ObjSMenuPauseVS::commonUpdate()
{
	mMenuMgr->update();
	mScreenPause->setXY(mMovePos, 0.0f);
	mScreenPause->update();
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
	if (mState == MENUSTATE_Default) {
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
	if (!mMenuOpen) {
		mMenuTimer += sys->mDeltaTime;
		if (mMenuTimer >= 0.8f) {
			mMenuOpen = true;
		}
	}

	u32 input = getGamePad()->mButton.mButtonDown;
	if (input & Controller::PRESS_UP) {
		if (mCurrMenuSel > 0) {
			mCurrMenuSel--;
			mMenuMgr->select(mCurrMenuSel);
			blink_Menu(mCurrMenuSel);
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrMenuSel < 1) {
			mCurrMenuSel++;
			mMenuMgr->select(mCurrMenuSel);
			blink_Menu(mCurrMenuSel);
		}

	} else if (mMenuOpen && input & Controller::PRESS_A) {
		if (mCurrMenuSel == 0) {
			out_menu_0();
			ret = true;
			ogSound->setDecide();

		} else if (mCurrMenuSel == 1) {
			out_menu_1();
			ret = true;
			ogSound->setDecide();
		}

		mMenuMgr->killCursor();

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
	mDisp->mState = 2;
	out_L();
}

/*
 * --INFO--
 * Address:	803299AC
 * Size:	000038
 */
void ObjSMenuPauseVS::out_menu_0()
{
	mDisp->mState = 2;
	out_L();
}

/*
 * --INFO--
 * Address:	803299E4
 * Size:	000038
 */
void ObjSMenuPauseVS::out_menu_1()
{
	mDisp->mState = 7;
	out_L();
}

/*
 * --INFO--
 * Address:	80329A1C
 * Size:	000010
 */
void ObjSMenuPauseVS::doUpdateCancelAction() { mDisp->mState = 2; }

/*
 * --INFO--
 * Address:	80329A2C
 * Size:	000060
 */
void ObjSMenuPauseVS::doDraw(Graphics& gfx)
{
	if (mScreenPause) {
		J2DPerspGraph* graf = &gfx.mPerspGraph;
		mScreenPause->draw(gfx, *graf);
		mMenuMgr->draw(graf);
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
	mMenuOpen  = false;
	mMenuTimer = 0.0f;
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
	mMenuMgr->startCursor(0.0f);
	wait();
}

/*
 * --INFO--
 * Address:	80329B6C
 * Size:	000048
 */
void ObjSMenuPauseVS::doUpdateFinish()
{
	mFadeLevel = 0.0f;
	out_L();
	mMenuMgr->killCursor();
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
int ObjSMenuPauseVS::getResult() { return mDisp->mState; }

/*
 * --INFO--
 * Address:	80329CB8
 * Size:	000014
 */
void ObjSMenuPauseVS::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0f;
}

/*
 * --INFO--
 * Address:	80329CCC
 * Size:	00000C
 */
void ObjSMenuPauseVS::wait() { mState = MENUSTATE_Default; }

/*
 * --INFO--
 * Address:	80329CD8
 * Size:	00000C
 */
void ObjSMenuPauseVS::out_L() { mState = MENUSTATE_CloseL; }

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
