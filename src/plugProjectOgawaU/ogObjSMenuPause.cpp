#include "og/newScreen/SMenu.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/anime.h"
#include "og/Sound.h"
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
void ObjSMenuPause::ObjHIOVal::getMenuColor(JUtility::TColor* col1, JUtility::TColor* col2, JUtility::TColor* col3, JUtility::TColor* col4,
                                            JUtility::TColor* col5, JUtility::TColor* col6, JUtility::TColor* col7, JUtility::TColor* col8,
                                            JUtility::TColor* col9, JUtility::TColor* col10, JUtility::TColor* col11,
                                            JUtility::TColor* col12, JUtility::TColor* col13, JUtility::TColor* col14)
{
	*col1 = ObjSMenuPause::msVal.mColor4;
	*col2 = ObjSMenuPause::msVal.mColor5;

	*col3 = ObjSMenuPause::msVal.mColor1;
	*col4 = ObjSMenuPause::msVal.mColor2;
	*col5 = ObjSMenuPause::msVal.mColor3;

	*col6 = ObjSMenuPause::msVal.mColor6;
	*col7 = ObjSMenuPause::msVal.mColor7;
	*col8 = ObjSMenuPause::msVal.mColor8;

	*col9  = ObjSMenuPause::msVal.mColor9;
	*col10 = ObjSMenuPause::msVal.mColor10;

	*col11 = ObjSMenuPause::msVal.mColor11;
	*col12 = ObjSMenuPause::msVal.mColor12;
	*col13 = ObjSMenuPause::msVal.mColor13;
	*col14 = ObjSMenuPause::msVal.mColor14;
}

/**
 * @note Address: 0x8031442C
 * @note Size: 0xD0
 */
ObjSMenuPause::ObjSMenuPause(char const* name)
{
	mDisp          = nullptr;
	mName          = name;
	mCurrSelPause  = 0;
	mCurrSelSunset = 0;
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

	mMenuPause  = new og::Screen::MenuMgr;
	mMenuSunset = new og::Screen::MenuMgr;
	mMenuReturn = new og::Screen::MenuMgr;
	mMenuState  = PAUSEMENU_Normal;
	mMenuPause->init(mScreenPause, 3, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
	mCurrSelPause = 0;
	mMenuSunset->init(mScreenPause, 2, 'nu_04', 'h_04', 's_04', 'il04', 'ir04');
	mCurrSelSunset = 1;
	mMenuReturn->init(mScreenPause, 2, 'nu_07', 'h_07', 's_07', 'il07', 'ir07');
	mCurrSelReturn = 1;

	mTextContinue = og::Screen::setMenuScreen(arc, mScreenPause, 'h_00');
	mTextGoSunset = og::Screen::setMenuScreen(arc, mScreenPause, 'h_01');
	mTextReturn   = og::Screen::setMenuScreen(arc, mScreenPause, 'h_02');

	mTextSunsetQ = og::Screen::setMenuTitleScreen(arc, mScreenPause, 'h_03');
	mTextSunsetY = og::Screen::setMenuScreen(arc, mScreenPause, 'h_04');
	mTextSunsetN = og::Screen::setMenuScreen(arc, mScreenPause, 'h_05');

	mTextReturnQ = og::Screen::setMenuTitleScreen(arc, mScreenPause, 'h_06');
	mTextReturnY = og::Screen::setMenuScreen(arc, mScreenPause, 'h_07');
	mTextReturnN = og::Screen::setMenuScreen(arc, mScreenPause, 'h_08');

	f32 delay = msVal._00;
	mTextContinue->open(delay);
	mTextGoSunset->open(delay + 0.1f);
	mTextReturn->open(delay + 0.2f);
	blink_TopMenu(mCurrSelPause);

	mAnims = new og::Screen::AnimGroup(4);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l_02.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l_03.btk", msBaseVal.mAnimSpeed);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_l_04.btk", msBaseVal.mAnimSpeed);

	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pfin01', &mDisp->mPokoCount, 10, false, true, arc);
	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pcomp01', &mDisp->mPokoCount, 10, false, true, arc);

	if (mDisp->mPokoCount < 10000) {
		og::Screen::TagSearch(mScreenPause, 'Nfin')->show();
		og::Screen::TagSearch(mScreenPause, 'Ncomp')->hide();
	} else {
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
void ObjSMenuPause::blink_TopMenu(int id)
{
	if (mIsDay1) {
		if (mCurrSelPause == 0) {
			mTextContinue->blink(0.6f, 0.0f);
		} else {
			mTextContinue->blink(0.0f, 0.0f);
		}
		mTextGoSunset->mColorType = 2;
		mTextReturn->mColorType   = 2;
	} else {
		f32 blinks[3];
		blinks[0] = 0.0f;
		blinks[1] = 0.0f;
		blinks[2] = 0.0f;

		if (id >= 0 && id <= 2) {
			blinks[id] = 0.6f;
		}

		mTextContinue->blink(blinks[0], blinks[0]);
		mTextGoSunset->blink(blinks[1], blinks[1]);
		mTextReturn->blink(blinks[2], blinks[2]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void ObjSMenuPause::open_Yuugata()
{
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
	mTextSunsetQ->close();
	mTextSunsetY->close();
	mTextSunsetN->close();
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void ObjSMenuPause::blink_Yuugata(int id)
{
	f32 blinks[2];
	blinks[0] = 0.0f;
	blinks[1] = 0.0f;

	if (id >= 0 && id <= 1) {
		blinks[id] = 0.6f;
	}

	mTextSunsetY->blink(blinks[0], 0.0f);
	mTextSunsetN->blink(blinks[1], 0.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void ObjSMenuPause::open_Zenkai()
{
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
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_MAP, getDispMember());
	jump_L(arg);
}

/**
 * @note Address: 0x80314C54
 * @note Size: 0xC8
 */
void ObjSMenuPause::doUpdateRAction()
{
	if (msBaseVal.mUseController) {
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
	setSMenuScale(msVal._3C, msVal._40);
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
	bool ret = false;
	commonUpdate();
	if (mExiting) {
		ret = true;
	} else if (mState == MENUSTATE_Default) {
		if (mMenuState == PAUSEMENU_Normal && !mMenuPause->mIsCursorActive) {
			mMenuPause->startCursor(0.2f);
		}
		ret = menu();
	} else if (mMenuPause->mIsCursorActive) {
		mMenuPause->killCursor();
	}
	return ret;
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
		case 2:
			startBackupScene();
			killCursorAll();
			break;

		case 3:
		case 4:
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
	bool ret = false;
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
		if (mCurrSelPause > 0) {
			mCurrSelPause--;
			mMenuPause->select(mCurrSelPause);
			blink_TopMenu(mCurrSelPause);
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrSelPause < 1) {
			mCurrSelPause++;
			mMenuPause->select(mCurrSelPause);
			blink_TopMenu(mCurrSelPause);
		}

	} else if (mPauseOpened && (input & Controller::PRESS_A)) {

		if (mCurrSelPause == 1) {
			if (mIsDay1) {
				ogSound->setError();
			} else {
				mCurrSelSunset = 1;
				close_TopMenu();
				open_Yuugata();
				mMenuPause->killCursor();
				ogSound->setDecide();
			}

		} else if (mCurrSelPause == 2) {
			if (mIsDay1) {
				ogSound->setError();
			} else {
				mCurrSelReturn = 1;
				close_TopMenu();
				open_Zenkai();
				mMenuPause->killCursor();
				ogSound->setDecide();
			}

		} else if (mCurrSelPause == 0) {
			mDisp->mExitStatus = 2;
			out_L();
			ret = 1;
			ogSound->setDecide();
		}

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
}

/**
 * @note Address: 0x80315610
 * @note Size: 0x478
 */
bool ObjSMenuPause::menu_yuugata()
{
	bool ret = false;
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
		if (mCurrSelSunset > 0) {
			mCurrSelSunset--;
			mMenuSunset->select(mCurrSelSunset);
			blink_Yuugata(mCurrSelSunset);
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrSelSunset < 1) {
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
		if (mCurrSelSunset == 0) {
			mDisp->mExitStatus = 3;
			out_L();
			ret = 1;
		} else {
			mMenuState = PAUSEMENU_Normal;
			open_TopMenu();
			close_Yuugata();
		}
		mMenuSunset->killCursor();
		ogSound->setDecide();

	} else {
		ret = ObjSMenuBase::doUpdate();
	}
	return ret;
}

/**
 * @note Address: 0x80315A88
 * @note Size: 0x478
 */
bool ObjSMenuPause::menu_zenkai()
{
	bool ret = false;
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
		if (mCurrSelReturn == 0) {
			mDisp->mExitStatus = 4;
			out_L();
			ret = 1;
		} else {
			open_TopMenu();
			close_Zenkai();
			mMenuState = PAUSEMENU_Normal;
		}

		ogSound->setDecide();
		mMenuReturn->killCursor();

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
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
