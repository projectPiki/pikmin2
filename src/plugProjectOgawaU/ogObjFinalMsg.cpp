#include "og/newScreen/FinalMsg.h"
#include "og/newScreen/SMenu.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/Game2DMgr.h"
#include "og/Sound.h"
#include "System.h"
#include "Controller.h"
#include "trig.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80324F2C
 * @note Size: 0x80
 */
ObjFinalMsg::ObjFinalMsg(const char* name)
{
	mDisp    = nullptr;
	mName    = name;
	mCurrSel = 0;
	mScreen  = nullptr;
	mMenuMgr = nullptr;

	mAnimTextQ = nullptr;
	mAnimTextY = nullptr;
	mAnimTextN = nullptr;
	mFadeLevel = 0.0f;
	mMovePos   = 0.0f;
}

/**
 * @note Address: 0x80324FAC
 * @note Size: 0xAC
 */
ObjFinalMsg::~ObjFinalMsg() { }

/**
 * @note Address: 0x80325058
 * @note Size: 0x2CC
 */
void ObjFinalMsg::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberFinalMessage* disp = static_cast<og::Screen::DispMemberFinalMessage*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_FINAL_MSG)) {
		mDisp = disp;
	} else {
		mDisp = new og::Screen::DispMemberFinalMessage;
	}

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set("info_window.blo", 0x1100000, arc);

	og::Screen::TagSearch(mScreen, 'Nmenu01')->hide();
	og::Screen::TagSearch(mScreen, 'Nmenu02')->hide();
	og::Screen::setFurikoScreen(mScreen);

	mMenuMgr = new og::Screen::MenuMgr;
	mMenuMgr->init2takuTitle(mScreen, 'Nm00y', 'Tm00y', 'Pm00y_il', 'Pm00y_ir', 'Nm00n', 'Tm00n', 'Pm00n_il', 'Pm00n_ir');
	mCurrSel = 0;

	mScreen->search('Tm00q')->setMsgID('8480_00'); // "Resume the expedition and return to the planet?"
	mScreen->search('Tm00y')->setMsgID('8481_00'); // "Yes"
	mScreen->search('Tm00n')->setMsgID('8482_00'); // "No"
	og::Screen::setCallBackMessage(mScreen);

	mAnimTextQ = og::Screen::setMenuTitleScreen(arc, mScreen, 'Tm00q');
	mAnimTextY = og::Screen::setMenuScreen(arc, mScreen, 'Tm00y');
	mAnimTextN = og::Screen::setMenuScreen(arc, mScreen, 'Tm00n');

	blink_Menu(mCurrSel);
}

/**
 * @note Address: 0x80325324
 * @note Size: 0x70
 */
void ObjFinalMsg::blink_Menu(int sel)
{
	f32 blink1, blink2;

	if (!sel) {
		blink1 = 0.6f;
		blink2 = 0.0f;
	} else {
		blink1 = 0.0f;
		blink2 = 0.6f;
	}

	mAnimTextY->blink(blink1, 0.0f);
	mAnimTextN->blink(blink2, 0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void ObjFinalMsg::commonUpdate()
{
	mScreen->setXY(mMovePos, 0.0f);
	mScreen->update();
}

/**
 * @note Address: 0x80325394
 * @note Size: 0x68
 */
bool ObjFinalMsg::doUpdate()
{
	commonUpdate();
	return menu();
}

/**
 * @note Address: 0x803253FC
 * @note Size: 0x1C0
 */
bool ObjFinalMsg::menu()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	mMenuMgr->update();

	u32 input = pad->getButtonDown();

	if (input & Controller::PRESS_UP) {
		if (mCurrSel > 0) {
			mCurrSel--;
			mMenuMgr->select(mCurrSel);
			blink_Menu(mCurrSel);
		}
	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrSel < 1) {
			mCurrSel++;
			mMenuMgr->select(mCurrSel);
			blink_Menu(mCurrSel);
		}
	} else if (input & Controller::PRESS_A) {
		if (mCurrSel == 0) {
			ret                = true;
			mDisp->mFinalState = ::Screen::Game2DMgr::CHECK2D_FinalMessage_Continue;
			ogSound->setDecide();
		} else if (mCurrSel == 1) {
			ret                = true;
			mDisp->mFinalState = ::Screen::Game2DMgr::CHECK2D_FinalMessage_ConfirmQuit;
			ogSound->setDecide();
		}
	} else if (input & Controller::PRESS_B) {
		ret                = true;
		mDisp->mFinalState = ::Screen::Game2DMgr::CHECK2D_FinalMessage_ConfirmQuit;
		ogSound->setClose();
	}
	return ret;
}

/**
 * @note Address: 0x803255BC
 * @note Size: 0x60
 */
void ObjFinalMsg::doDraw(Graphics& gfx)
{
	if (mScreen) {
		J2DGrafContext* persp = &gfx.mPerspGraph;
		mScreen->draw(gfx, *persp);
		mMenuMgr->draw(persp);
	}
}

/**
 * @note Address: 0x8032561C
 * @note Size: 0x60
 */
bool ObjFinalMsg::doStart(::Screen::StartSceneArg const*)
{
	og::Screen::getFurikoPtr(mScreen, 'furiko00')->stop();
	mMovePos   = 800.0f;
	mFadeLevel = 0.0f;
	ogSound->setOpenFinalMsg();
	return true;
}

/**
 * @note Address: 0x8032567C
 * @note Size: 0x8
 */
bool ObjFinalMsg::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80325684
 * @note Size: 0xB8
 */
bool ObjFinalMsg::doUpdateFadein()
{
	bool check = false;
	commonUpdate();
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > ObjSMenuBase::msBaseVal.mFadeInOutTime) {
		check = true;
	}
	mMovePos = (1.0f - og::Screen::calcSmooth0to1(mFadeLevel, ObjSMenuBase::msBaseVal.mFadeInOutTime)) * 800.0f;
	return check;
}

/**
 * @note Address: 0x8032573C
 * @note Size: 0x3C
 */
void ObjFinalMsg::doUpdateFadeinFinish()
{
	mMenuMgr->startCursor(0.0f);
	wait();
}

/**
 * @note Address: 0x80325778
 * @note Size: 0x38
 */
void ObjFinalMsg::doUpdateFinish()
{
	mMenuMgr->killCursor();
	mFadeLevel = 0.0f;
}

/**
 * @note Address: 0x803257B0
 * @note Size: 0xB0
 */
bool ObjFinalMsg::doUpdateFadeout()
{
	bool check = false;
	commonUpdate();
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > ObjSMenuBase::msBaseVal.mFadeInOutTime) {
		check = true;
	}
	mMovePos = og::Screen::calcSmooth0to1(mFadeLevel, ObjSMenuBase::msBaseVal.mFadeInOutTime) * -800.0f;
	return check;
}

/**
 * @note Address: 0x80325860
 * @note Size: 0x34
 */
void ObjFinalMsg::doUpdateFadeoutFinish() { getOwner()->endScene(nullptr); }

/**
 * @note Address: 0x80325894
 * @note Size: 0x4C
 */
void ObjFinalMsg::wait()
{
	mAnimTextQ->open(0.0f);
	mAnimTextY->open(0.1f);
	mAnimTextN->open(0.2f);
}

} // namespace newScreen
} // namespace og
