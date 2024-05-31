#include "og/newScreen/SMenu.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/anime.h"
#include "og/Sound.h"
#include "Game/gamePlayData.h"
#include "System.h"
#include "Controller.h"
#include "trig.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80314238
 * @note Size: 0x1F4
 */
void ObjSMenuPause::ObjHIOVal::getMenuColor(JUtility::TColor* greyedBodyWhite, JUtility::TColor* greyedBodyBlack,
                                            JUtility::TColor* menuBodyBlink1, JUtility::TColor* menuBodyBlink2,
                                            JUtility::TColor* menuBodyWhite, JUtility::TColor* menuBodyBlack, JUtility::TColor* menuBgWhite,
                                            JUtility::TColor* menuBgBlack, JUtility::TColor* greyedBgWhite, JUtility::TColor* greyedBgBlack,
                                            JUtility::TColor* titleBodyWhite, JUtility::TColor* titleBodyBlack,
                                            JUtility::TColor* titleBgWhite, JUtility::TColor* titleBgBlack)
{
	*greyedBodyWhite = ObjSMenuPause::msVal.mGreyedOutBodyWhite;
	*greyedBodyBlack = ObjSMenuPause::msVal.mGreyedOutBodyBlack;

	*menuBodyBlink1 = ObjSMenuPause::msVal.mMenuBodyBlink1;
	*menuBodyBlink2 = ObjSMenuPause::msVal.mMenuBodyBlink2;
	*menuBodyWhite  = ObjSMenuPause::msVal.mMenuBodyWhite;

	*menuBodyBlack = ObjSMenuPause::msVal.mMenuBodyBlack;
	*menuBgWhite   = ObjSMenuPause::msVal.mMenuBgWhite;
	*menuBgBlack   = ObjSMenuPause::msVal.mMenuBgBlack;

	*greyedBgWhite = ObjSMenuPause::msVal.mGreyedOutBgWhite;
	*greyedBgBlack = ObjSMenuPause::msVal.mGreyedOutBgBlack;

	*titleBodyWhite = ObjSMenuPause::msVal.mTitleBodyWhite;
	*titleBodyBlack = ObjSMenuPause::msVal.mTitleBodyBlack;
	*titleBgWhite   = ObjSMenuPause::msVal.mTitleBgWhite;
	*titleBgBlack   = ObjSMenuPause::msVal.mTitleBgBlack;
}

/**
 * @note Address: 0x8031442C
 * @note Size: 0xD0
 */
ObjSMenuPause::ObjSMenuPause(char const* name)
{
	mDisp          = nullptr;
	mName          = name;
	mCurrSelPause  = SELPAUSE_Continue;
	mCurrSelSunset = SELSUNSET_Yes;
	mCurrSelReturn = 0;
	mMenuState     = PAUSEMENU_Normal;
	_BC            = 0;

	mScreenPause = nullptr;
	mMenuPause   = nullptr;
	mMenuSunset  = nullptr;
	mMenuReturn  = nullptr;
	_D0          = 0;
	_D4          = 0;

	mTextContinue = nullptr;
	mTextGoSunset = nullptr;
	mTextReturn   = nullptr;
	mTextSunsetQ  = nullptr;
	mTextSunsetY  = nullptr;
	mTextSunsetN  = nullptr;
	mTextReturnQ  = nullptr;
	mTextReturnY  = nullptr;
	mTextReturnN  = nullptr;

	mAnims = nullptr;

	mPauseOpened     = false;
	mMenuPauseTimer  = 0.0f;
	mSunsetOpened    = false;
	mMenuSunsetTimer = 0.0f;
	mReturnOpened    = false;
	mMenuReturnTimer = 0.0f;
}

/**
 * @note Address: 0x803144FC
 * @note Size: 0xC4
 */
ObjSMenuPause::~ObjSMenuPause() { }

/**
 * @note Address: 0x803145C0
 * @note Size: 0x54C
 */
void ObjSMenuPause::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberBase* dispfull = getDispMember();
	mDisp = static_cast<og::Screen::DispMemberSMenuPause*>(dispfull->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE));
	if (!mDisp) {
		og::Screen::DispMemberSMenuAll* newdisp = new og::Screen::DispMemberSMenuAll;
		dispfull                                = newdisp;
		mDisp = static_cast<og::Screen::DispMemberSMenuPause*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE));
	}
	mIsDay1 = static_cast<og::Screen::DispMemberSMenuAll*>(dispfull)->mIsDay1;

	mScreenPause = new P2DScreen::Mgr_tuning;
	mScreenPause->set("s_menu_pause_l.blo", 0x1040000, arc);

	// set up selection options
	mMenuPause  = new og::Screen::MenuMgr;
	mMenuSunset = new og::Screen::MenuMgr;
	mMenuReturn = new og::Screen::MenuMgr;
	mMenuState  = PAUSEMENU_Normal;

	// main pause menu (pane, text, ?, left dot, right dot) - 3 options
	mMenuPause->init(mScreenPause, 3, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
	mCurrSelPause = SELPAUSE_Continue;

	// "Go to Sunset" submenu (pane, text, ?, left dot, right dot) - 2 options
	mMenuSunset->init(mScreenPause, 2, 'nu_04', 'h_04', 's_04', 'il04', 'ir04');
	mCurrSelSunset = SELSUNSET_No;

	// "Return to Last Save" submenu (pane, text, ?, left dot, right dot) - 2 options
	mMenuReturn->init(mScreenPause, 2, 'nu_07', 'h_07', 's_07', 'il07', 'ir07');
	mCurrSelReturn = SELSUNSET_No;

	mTextContinue = og::Screen::setMenuScreen(arc, mScreenPause, 'h_00');
	mTextGoSunset = og::Screen::setMenuScreen(arc, mScreenPause, 'h_01');
	mTextReturn   = og::Screen::setMenuScreen(arc, mScreenPause, 'h_02');

	mTextSunsetQ = og::Screen::setMenuTitleScreen(arc, mScreenPause, 'h_03');
	mTextSunsetY = og::Screen::setMenuScreen(arc, mScreenPause, 'h_04');
	mTextSunsetN = og::Screen::setMenuScreen(arc, mScreenPause, 'h_05');

	mTextReturnQ = og::Screen::setMenuTitleScreen(arc, mScreenPause, 'h_06');
	mTextReturnY = og::Screen::setMenuScreen(arc, mScreenPause, 'h_07');
	mTextReturnN = og::Screen::setMenuScreen(arc, mScreenPause, 'h_08');

	f32 delay = msVal.mOptionBaseDelayTime;
	mTextContinue->open(delay);
	mTextGoSunset->open(delay + 0.1f);
	mTextReturn->open(delay + 0.2f);
	blink_TopMenu(mCurrSelPause);

	mAnims = new og::Screen::AnimGroup(4);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l_02.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l_03.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l_04.btk", msBaseVal.mAnimSpeed);

	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pfin01', &mDisp->mPokoCount, 10, false, true, arc);  // pre-debt counter
	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pcomp01', &mDisp->mPokoCount, 10, false, true, arc); // post-debt counter

	if (mDisp->mPokoCount < DEBT_AMOUNT) {
		// pre-debt paid, show counter with / 10000
		og::Screen::TagSearch(mScreenPause, 'Nfin')->show();
		og::Screen::TagSearch(mScreenPause, 'Ncomp')->hide();
	} else {
		// post-debt paid, show counter without / 10000
		og::Screen::TagSearch(mScreenPause, 'Ncomp')->show();
		og::Screen::TagSearch(mScreenPause, 'Nfin')->hide();
	}

	doCreateAfter(arc, mScreenPause);
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void ObjSMenuPause::open_TopMenu()
{
	mTextContinue->open(0.5f);
	mTextGoSunset->open(0.6f);
	mTextReturn->open(0.7f);
	blink_TopMenu(mCurrSelPause);
	mMenuPause->initSelNum(mCurrSelPause);
	mMenuPause->startCursor(0.5f);
	mPauseOpened    = false;
	mMenuPauseTimer = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void ObjSMenuPause::close_TopMenu()
{
	mTextContinue->close();
	mTextGoSunset->close();
	mTextReturn->close();
}

/**
 * @note Address: 0x80314B0C
 * @note Size: 0xDC
 */
void ObjSMenuPause::blink_TopMenu(int pauseSelID)
{
	// only blinkable option on day 1 is continue
	if (mIsDay1) {
		if (mCurrSelPause == SELPAUSE_Continue) {
			mTextContinue->blink(0.6f, 0.0f); // make continue blink
		} else {
			mTextContinue->blink(0.0f, 0.0f); // no blink
		}
		mTextGoSunset->mColorType = og::Screen::ANIMTEXTCOLOR_GreyedOut;
		mTextReturn->mColorType   = og::Screen::ANIMTEXTCOLOR_GreyedOut;
		return;
	}

	f32 blinks[SELPAUSE_Count];
	blinks[SELPAUSE_Continue]   = 0.0f;
	blinks[SELPAUSE_GoToSunset] = 0.0f;
	blinks[SELPAUSE_Return]     = 0.0f;

	if (pauseSelID >= SELPAUSE_Min && pauseSelID <= SELPAUSE_Max) {
		blinks[pauseSelID] = 0.6f;
	}

	mTextContinue->blink(blinks[SELPAUSE_Continue], blinks[SELPAUSE_Continue]);
	mTextGoSunset->blink(blinks[SELPAUSE_GoToSunset], blinks[SELPAUSE_GoToSunset]);
	mTextReturn->blink(blinks[SELPAUSE_Return], blinks[SELPAUSE_Return]);
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void ObjSMenuPause::open_Yuugata()
{
	// open "go to sunset" submenu

	mTextSunsetQ->open(0.5f);
	mTextSunsetY->open(0.6f);
	mTextSunsetN->open(0.7f);
	blink_Yuugata(mCurrSelSunset);
	mMenuSunset->initSelNum(mCurrSelSunset);
	mMenuSunset->startCursor(0.5f);
	mSunsetOpened    = false;
	mMenuSunsetTimer = 0.0f;
	mMenuState       = PAUSEMENU_Yuugata;
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void ObjSMenuPause::close_Yuugata()
{
	// close "go to sunset" submenu
	mTextSunsetQ->close();
	mTextSunsetY->close();
	mTextSunsetN->close();
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void ObjSMenuPause::blink_Yuugata(int selSunsetID)
{
	// control blinking text on "go to sunset" submenu
	f32 blinks[SELSUNSET_Count];
	blinks[SELSUNSET_Yes] = 0.0f;
	blinks[SELSUNSET_No]  = 0.0f;

	if (selSunsetID >= SELSUNSET_Min && selSunsetID <= SELSUNSET_Max) {
		blinks[selSunsetID] = 0.6f;
	}

	mTextSunsetY->blink(blinks[SELSUNSET_Yes], 0.0f);
	mTextSunsetN->blink(blinks[SELSUNSET_No], 0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void ObjSMenuPause::open_Zenkai()
{
	// open "Return to Last Save" menu
	mTextReturnQ->open(0.5f);
	mTextReturnY->open(0.6f);
	mTextReturnN->open(0.7f);
	blink_Zenkai(mCurrSelReturn);
	mMenuReturn->initSelNum(mCurrSelReturn);
	mMenuReturn->startCursor(0.5f);
	mReturnOpened    = false;
	mMenuReturnTimer = 0.0f;
	mMenuState       = PAUSEMENU_Zenkai;
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void ObjSMenuPause::close_Zenkai()
{
	// close "Return to Last Save" menu
	mTextReturnQ->close();
	mTextReturnY->close();
	mTextReturnN->close();
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void ObjSMenuPause::blink_Zenkai(int id)
{
	f32 blinks[2];
	blinks[0] = 0.0f;
	blinks[1] = 0.0f;

	if (id >= 0 && id <= 1) {
		blinks[id] = 0.6f;
	}

	mTextReturnY->blink(blinks[0], 0.0f);
	mTextReturnN->blink(blinks[1], 0.0f);
}

/**
 * @note Address: 0x80314BE8
 * @note Size: 0x6C
 */
void ObjSMenuPause::doUpdateLAction()
{
	// LEFT = MAP
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_MAP, getDispMember());
	jump_L(arg);
}

/**
 * @note Address: 0x80314C54
 * @note Size: 0xC8
 */
void ObjSMenuPause::doUpdateRAction()
{
	// R = CONTROLLER OR ITEMS
	if (msBaseVal.mUseControlMenu) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_CONTROLS, getDispMember());
		jump_R(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember());
		jump_R(arg);
	}
}

/**
 * @note Address: 0x80314D1C
 * @note Size: 0x10
 */
void ObjSMenuPause::doUpdateCancelAction() { mDisp->mExitStatus = 2; }

/**
 * @note Address: 0x80314D2C
 * @note Size: 0x84
 */
void ObjSMenuPause::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal.mPauseScreenScale.x, msVal.mPauseScreenScale.y);
	mScreenPause->setXY(mMovePos, 0.0f);
	mScreenPause->update();
	mAnims->update();
}

/**
 * @note Address: 0x80314DB0
 * @note Size: 0xB0
 */
bool ObjSMenuPause::doUpdate()
{
	bool doClose = false;
	commonUpdate();
	if (mExiting) {
		doClose = true;
	} else if (mState == MENUSTATE_Default) {
		if (mMenuState == PAUSEMENU_Normal && !mMenuPause->mIsCursorActive) {
			mMenuPause->startCursor(0.2f);
		}
		doClose = menu();
	} else if (mMenuPause->mIsCursorActive) {
		mMenuPause->killCursor();
	}
	return doClose;
}

/**
 * @note Address: 0x80314E60
 * @note Size: 0x98
 */
void ObjSMenuPause::doDraw(Graphics& gfx)
{
	if (mScreenPause) {
		J2DPerspGraph* graf = &gfx.mPerspGraph;
		mMenuPause->draw(graf);
		mMenuSunset->draw(graf);
		mMenuReturn->draw(graf);
		mScreenPause->draw(gfx, *graf);
	}
	drawYaji(gfx);
}

/**
 * @note Address: 0x80314EF8
 * @note Size: 0xA4
 */
bool ObjSMenuPause::doStart(::Screen::StartSceneArg const* arg)
{
	mAnims->setFrame(0.0f);
	mAnims->setRepeat(true);
	mAnims->setSpeed(1.0f);
	mAnims->start();

	setYajiName('6050_00', '6051_00', '6052_00'); // "Radar" "Items" "Menu"
	stopYaji();
	start_LR(arg);
}

/**
 * @note Address: 0x80314F9C
 * @note Size: 0x8
 */
bool ObjSMenuPause::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80314FA4
 * @note Size: 0x34
 */
void ObjSMenuPause::doUpdateFinish()
{
	ObjSMenuBase::doUpdateFinish();
	killCursorAll();
}

/**
 * @note Address: 0x80314FD8
 * @note Size: 0x4C
 */
bool ObjSMenuPause::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/**
 * @note Address: 0x80315024
 * @note Size: 0x12C
 */
void ObjSMenuPause::doUpdateFadeoutFinish()
{
	switch (mCancelToState) {
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
		switch (mDisp->mExitStatus) {
		case og::Screen::MENUFINISH_ContinueGround:
			startBackupScene();
			killCursorAll();
			break;

		case og::Screen::MENUFINISH_GoToSunset:
		case og::Screen::MENUFINISH_ReturnToLastSave:
			scene->endScene(nullptr);
			killCursorAll();
			break;
		}
		setFinishState(mDisp->mExitStatus);
		break;

	default:
		JUT_PANICLINE(670, "updateFinish ERR!\n");
	}
}

/**
 * @note Address: 0x80315150
 * @note Size: 0x4C0
 */
bool ObjSMenuPause::menu_pause()
{
	// main (top-level) pause menu

	bool doClose = false;
	if (!mPauseOpened) {
		mMenuPauseTimer += sys->mDeltaTime;
		if (mMenuPauseTimer >= 1.0f) {
			mPauseOpened = true;
		}
	}
	Controller* pad = getGamePad();
	mMenuPause->update();

	u32 input = pad->getButtonDown();
	if (input & Controller::PRESS_UP) {
		if (mCurrSelPause > SELPAUSE_Min) {
			mCurrSelPause--;
			mMenuPause->select(mCurrSelPause);
			blink_TopMenu(mCurrSelPause);
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrSelPause < SELPAUSE_GoToSunset) { // NB: return is unselectable
			mCurrSelPause++;
			mMenuPause->select(mCurrSelPause);
			blink_TopMenu(mCurrSelPause);
		}

	} else if (mPauseOpened && (input & Controller::PRESS_A)) {

		if (mCurrSelPause == SELPAUSE_GoToSunset) {
			if (mIsDay1) {
				ogSound->setError();
			} else {
				mCurrSelSunset = SELSUNSET_No;
				close_TopMenu();
				open_Yuugata();
				mMenuPause->killCursor();
				ogSound->setDecide();
			}

		} else if (mCurrSelPause == SELPAUSE_Return) {
			if (mIsDay1) {
				ogSound->setError();
			} else {
				mCurrSelReturn = SELRETURN_No;
				close_TopMenu();
				open_Zenkai();
				mMenuPause->killCursor();
				ogSound->setDecide();
			}

		} else if (mCurrSelPause == SELPAUSE_Continue) {
			mDisp->mExitStatus = og::Screen::MENUFINISH_ContinueGround;
			out_L();
			doClose = true;
			ogSound->setDecide();
		}

	} else {
		doClose = ObjSMenuBase::doUpdate();
	}

	return doClose;
}

/**
 * @note Address: 0x80315610
 * @note Size: 0x478
 */
bool ObjSMenuPause::menu_yuugata()
{
	// go to sunset submenu

	bool doClose = false;
	if (!mSunsetOpened) {
		mMenuSunsetTimer += sys->mDeltaTime;
		if (mMenuSunsetTimer >= 1.0f) {
			mSunsetOpened = true;
		}
	}
	Controller* pad = getGamePad();
	mMenuSunset->update();

	u32 input = pad->getButtonDown();
	if (input & Controller::PRESS_UP) {
		if (mCurrSelSunset > SELSUNSET_Min) {
			mCurrSelSunset--;
			mMenuSunset->select(mCurrSelSunset);
			blink_Yuugata(mCurrSelSunset);
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrSelSunset < SELSUNSET_Max) {
			mCurrSelSunset++;
			mMenuSunset->select(mCurrSelSunset);
			blink_Yuugata(mCurrSelSunset);
		}

	} else if (mSunsetOpened && (input & Controller::PRESS_B)) {
		mMenuState = PAUSEMENU_Normal;
		mMenuSunset->killCursor();
		open_TopMenu();
		close_Yuugata();
		ogSound->setCancel();

	} else if (mSunsetOpened && (input & Controller::PRESS_A)) {
		if (mCurrSelSunset == SELSUNSET_Yes) {
			mDisp->mExitStatus = og::Screen::MENUFINISH_GoToSunset;
			out_L();
			doClose = true;
		} else {
			mMenuState = PAUSEMENU_Normal;
			open_TopMenu();
			close_Yuugata();
		}
		mMenuSunset->killCursor();
		ogSound->setDecide();

	} else {
		doClose = ObjSMenuBase::doUpdate();
	}
	return doClose;
}

/**
 * @note Address: 0x80315A88
 * @note Size: 0x478
 */
bool ObjSMenuPause::menu_zenkai()
{
	bool doClose = false;
	if (!mReturnOpened) {
		mMenuReturnTimer += sys->mDeltaTime;
		if (mMenuReturnTimer >= 1.0f) {
			mReturnOpened = true;
		}
	}
	Controller* pad = getGamePad();
	mMenuReturn->update();

	u32 input = pad->getButtonDown();
	if (input & Controller::PRESS_UP) {
		if (mCurrSelReturn > 0) {
			mCurrSelReturn--;
			mMenuReturn->select(mCurrSelReturn);
			blink_Zenkai(mCurrSelReturn);
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrSelReturn < 1) {
			mCurrSelReturn++;
			mMenuReturn->select(mCurrSelReturn);
			blink_Zenkai(mCurrSelReturn);
		}

	} else if (mReturnOpened && (input & Controller::PRESS_B)) {
		mMenuState = PAUSEMENU_Normal;
		mMenuReturn->killCursor();
		open_TopMenu();
		close_Zenkai();
		ogSound->setCancel();

	} else if (mReturnOpened && (input & Controller::PRESS_A)) {
		if (mCurrSelReturn == SELRETURN_Yes) {
			mDisp->mExitStatus = og::Screen::MENUFINISH_ReturnToLastSave;
			out_L();
			doClose = true;
		} else {
			open_TopMenu();
			close_Zenkai();
			mMenuState = PAUSEMENU_Normal;
		}

		ogSound->setDecide();
		mMenuReturn->killCursor();

	} else {
		doClose = ObjSMenuBase::doUpdate();
	}

	return doClose;
}

/**
 * @note Address: 0x80315F00
 * @note Size: 0x40
 */
void ObjSMenuPause::killCursorAll()
{
	mMenuPause->killCursor();
	mMenuSunset->killCursor();
	mMenuReturn->killCursor();
}

/**
 * @note Address: 0x80315F40
 * @note Size: 0x6C
 */
bool ObjSMenuPause::menu()
{
	bool ret = false;

	switch (mMenuState) {
	case PAUSEMENU_Normal:
		ret = menu_pause();
		break;

	case PAUSEMENU_Yuugata:
		ret = menu_yuugata();
		break;

	case PAUSEMENU_Zenkai:
		ret = menu_zenkai();
		break;
	}

	return ret;
}

/**
 * @note Address: 0x80315FAC
 * @note Size: 0x14
 */
void ObjSMenuPause::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80315FC0
 * @note Size: 0x14
 */
void ObjSMenuPause::in_R()
{
	mState = MENUSTATE_OpenR;
	mAngle = 15.0f;
}

/**
 * @note Address: 0x80315FD4
 * @note Size: 0x30
 */
void ObjSMenuPause::wait()
{
	mState = MENUSTATE_Default;
	mMenuPause->startCursor(0.2f);
}

/**
 * @note Address: 0x80316004
 * @note Size: 0x2C
 */
void ObjSMenuPause::out_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/**
 * @note Address: 0x80316030
 * @note Size: 0x2C
 */
void ObjSMenuPause::out_R()
{
	mState = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

ObjSMenuPause::ObjHIOVal ObjSMenuPause::msVal;

} // namespace newScreen
} // namespace og
