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

/**
 * @note Address: 0x80329190
 * @note Size: 0x80
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

/**
 * @note Address: 0x80329210
 * @note Size: 0xC4
 */
ObjSMenuPauseVS::~ObjSMenuPauseVS() { }

/**
 * @note Address: 0x803292D4
 * @note Size: 0x334
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

/**
 * @note Address: 0x80329608
 * @note Size: 0x74
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

/**
 * @note Address: 0x8032967C
 * @note Size: 0x68
 */
void ObjSMenuPauseVS::commonUpdate()
{
	mMenuMgr->update();
	mScreenPause->setXY(mMovePos, 0.0f);
	mScreenPause->update();
}

/**
 * @note Address: 0x803296E4
 * @note Size: 0x60
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

/**
 * @note Address: 0x80329744
 * @note Size: 0x230
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

	u32 input = getGamePad()->getButtonDown();
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

/**
 * @note Address: 0x80329974
 * @note Size: 0x38
 */
void ObjSMenuPauseVS::out_cancel()
{
	mDisp->mState = 2;
	out_L();
}

/**
 * @note Address: 0x803299AC
 * @note Size: 0x38
 */
void ObjSMenuPauseVS::out_menu_0()
{
	mDisp->mState = 2;
	out_L();
}

/**
 * @note Address: 0x803299E4
 * @note Size: 0x38
 */
void ObjSMenuPauseVS::out_menu_1()
{
	mDisp->mState = 7;
	out_L();
}

/**
 * @note Address: 0x80329A1C
 * @note Size: 0x10
 */
void ObjSMenuPauseVS::doUpdateCancelAction() { mDisp->mState = 2; }

/**
 * @note Address: 0x80329A2C
 * @note Size: 0x60
 */
void ObjSMenuPauseVS::doDraw(Graphics& gfx)
{
	if (mScreenPause) {
		J2DPerspGraph* graf = &gfx.mPerspGraph;
		mScreenPause->draw(gfx, *graf);
		mMenuMgr->draw(graf);
	}
}

/**
 * @note Address: 0x80329A8C
 * @note Size: 0x44
 */
bool ObjSMenuPauseVS::doStart(::Screen::StartSceneArg const*)
{
	start_LR(nullptr);
	mMenuOpen  = false;
	mMenuTimer = 0.0f;
	return true;
}

/**
 * @note Address: 0x80329AD0
 * @note Size: 0x8
 */
bool ObjSMenuPauseVS::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80329AD8
 * @note Size: 0x4C
 */
bool ObjSMenuPauseVS::doUpdateFadein()
{
	commonUpdate();
	return updateFadeIn();
}

/**
 * @note Address: 0x80329B24
 * @note Size: 0x48
 */
void ObjSMenuPauseVS::doUpdateFadeinFinish()
{
	mMenuMgr->startCursor(0.0f);
	wait();
}

/**
 * @note Address: 0x80329B6C
 * @note Size: 0x48
 */
void ObjSMenuPauseVS::doUpdateFinish()
{
	mFadeLevel = 0.0f;
	out_L();
	mMenuMgr->killCursor();
}

/**
 * @note Address: 0x80329BB4
 * @note Size: 0x4C
 */
bool ObjSMenuPauseVS::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/**
 * @note Address: 0x80329C00
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80329CAC
 * @note Size: 0xC
 */
int ObjSMenuPauseVS::getResult() { return mDisp->mState; }

/**
 * @note Address: 0x80329CB8
 * @note Size: 0x14
 */
void ObjSMenuPauseVS::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80329CCC
 * @note Size: 0xC
 */
void ObjSMenuPauseVS::wait() { mState = MENUSTATE_Default; }

/**
 * @note Address: 0x80329CD8
 * @note Size: 0xC
 */
void ObjSMenuPauseVS::out_L() { mState = MENUSTATE_CloseL; }

/**
 * @note Address: 0x80329CE4
 * @note Size: 0x4
 */
void ObjSMenuPauseVS::doUpdateRAction() { }

/**
 * @note Address: 0x80329CE8
 * @note Size: 0x4
 */
void ObjSMenuPauseVS::doUpdateLAction() { }

/**
 * @note Address: 0x80329CEC
 * @note Size: 0x4
 */
void ObjSMenuPauseVS::in_R() { }

/**
 * @note Address: 0x80329CF0
 * @note Size: 0x4
 */
void ObjSMenuPauseVS::out_R() { }

} // namespace newScreen
} // namespace og
