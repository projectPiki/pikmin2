#include "og/newScreen/SMenu.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/anime.h"
#include "og/Sound.h"
#include "System.h"
#include "Controller.h"
#include "trig.h"

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
 * Address:	8032208C
 * Size:	0000B0
 */
ObjSMenuPauseDoukutu::ObjSMenuPauseDoukutu(char const* name)
{
	mDisp          = nullptr;
	mName          = name;
	mCurrPauseSel  = 0;
	mCurrGiveupSel = 0;
	mMenuState     = PAUSEMENU_Normal;
	_B8            = 0;

	mScreenPause = nullptr;
	mMenuPause   = nullptr;
	mMenuGiveup  = nullptr;
	mMenuPane    = nullptr;

	mTextContinue = nullptr;
	mTextDoGiveup = nullptr;
	mTextGiveupQ  = nullptr;
	mTextGiveupY  = nullptr;
	mTextGiveupN  = nullptr;

	mAnims = nullptr;

	mPauseOpened     = false;
	mMenuPauseTimer  = 0.0f;
	mGiveupOpened    = false;
	mMenuGiveupTimer = 0.0f;
	mWarningTimer    = 0.0f;
}

/*
 * --INFO--
 * Address:	8032213C
 * Size:	0000C4
 */
ObjSMenuPauseDoukutu::~ObjSMenuPauseDoukutu() { }

/*
 * --INFO--
 * Address:	80322200
 * Size:	000574
 */
void ObjSMenuPauseDoukutu::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberBase* newdisp = getDispMember();
	mDisp = static_cast<og::Screen::DispMemberSMenuPauseDoukutu*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_DOUKUTU));
	if (!mDisp) {
		newdisp = new og::Screen::DispMemberSMenuPauseDoukutu;
		mDisp   = static_cast<og::Screen::DispMemberSMenuPauseDoukutu*>(newdisp->getSubMember(OWNER_OGA, MEMBER_START_MENU_PAUSE_DOUKUTU));
	}

	mIsDay1 = static_cast<og::Screen::DispMemberSMenuAll*>(newdisp)->mIsDay1; // hmm.

	mScreenPause = new P2DScreen::Mgr_tuning;
	mScreenPause->set("s_menu_pause_doukutu_l.blo", 0x1040000, arc);

	if (mDisp->mPikisInDanger) {
		mScreenPause->search('h_03')->setMsgID('8610_00'); // "Pikmin sprouts remain. Do you still want to return to the surface?"
		mScreenPause->search('h_04')->setMsgID('8611_00'); // "Return to the Surface"
		mScreenPause->search('h_05')->setMsgID('8612_00'); // "Don't return to the Surface"
	}

	mMenuPause  = new og::Screen::MenuMgr;
	mMenuGiveup = new og::Screen::MenuMgr;
	mMenuState  = PAUSEMENU_Normal;
	mMenuPause->init(mScreenPause, 2, 'nu_00', 'h_00', 's_00', 'il00', 'ir00');
	mCurrPauseSel = 0;
	mMenuGiveup->init(mScreenPause, 2, 'nu_04', 'h_04', 's_04', 'il04', 'ir04');
	mCurrGiveupSel = 1;

	mMenuPane = mScreenPause->search('Nmenu1');

	mTextContinue = og::Screen::setMenuScreen(arc, mScreenPause, 'h_00');
	mTextDoGiveup = og::Screen::setMenuScreen(arc, mScreenPause, 'h_01');
	mTextGiveupQ  = og::Screen::setMenuTitleScreen(arc, mScreenPause, 'h_03');
	mTextGiveupY  = og::Screen::setMenuScreen(arc, mScreenPause, 'h_04');
	mTextGiveupN  = og::Screen::setMenuScreen(arc, mScreenPause, 'h_05');

	set_Blink_Normal();
	mTextContinue->open(0.5f);
	mTextDoGiveup->open(0.6f);
	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pana01', &mDisp->mCavePokos, 10, false, true, arc);
	mPokos = mDisp->mPreCavePokos + mDisp->mCavePokos;
	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pfin01', &mPokos, 10, false, true, arc);
	og::Screen::setCallBack_CounterRV(mScreenPause, 'Pcomp01', &mPokos, 10, false, true, arc);

	if (mDisp->mPayDebt) {
		og::Screen::TagSearch(mScreenPause, 'Nfin')->show();
		og::Screen::TagSearch(mScreenPause, 'Ncomp')->hide();
	} else {
		og::Screen::TagSearch(mScreenPause, 'Ncomp')->show();
		og::Screen::TagSearch(mScreenPause, 'Nfin')->hide();
	}

	mAnims = new og::Screen::AnimGroup(4);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_doukutu_l.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_doukutu_l_02.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_doukutu_l_03.btk", msBaseVal._00);
	og::Screen::registAnimGroupScreen(mAnims, arc, mScreenPause, "s_menu_pause_doukutu_l_04.btk", msBaseVal._00);
	doCreateAfter(arc, mScreenPause);
}

/*
 * --INFO--
 * Address:	80322774
 * Size:	000094
 */
void ObjSMenuPauseDoukutu::commonUpdate()
{
	commonUpdateBase();
	setSMenuScale(msVal._00, msVal._04);
	mPokos = mDisp->mPreCavePokos + mDisp->mCavePokos;
	mAnims->update();
	mScreenPause->setXY(mMovePos, 0.0f);
	mScreenPause->update();
}

/*
 * --INFO--
 * Address:	80322808
 * Size:	0000B0
 */
bool ObjSMenuPauseDoukutu::doUpdate()
{
	bool ret = false;
	commonUpdate();

	if (mExiting) {
		ret = true;
	} else if (mState == MENUSTATE_Default) {
		if (mMenuState == PAUSEMENU_Normal && !mMenuPause->mIsCursorActive) {
			mMenuPause->startCursor(0.0f);
		}
		ret = menu();
	} else if (mMenuPause->mIsCursorActive) {
		mMenuPause->killCursor();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	803228B8
 * Size:	00008C
 */
void ObjSMenuPauseDoukutu::doDraw(Graphics& gfx)
{
	if (mScreenPause) {
		J2DPerspGraph* graf = &gfx.mPerspGraph;
		mMenuPause->draw(graf);
		mMenuGiveup->draw(graf);
		mScreenPause->draw(gfx, *graf);
	}
	drawYaji(gfx);
}

/*
 * --INFO--
 * Address:	80322944
 * Size:	0000A4
 */
bool ObjSMenuPauseDoukutu::doStart(::Screen::StartSceneArg const* arg)
{
	mAnims->setFrame(0.0f);
	mAnims->setRepeat(true);
	mAnims->setSpeed(1.0f);
	mAnims->start();

	setYajiName('6050_00', '6051_00', '6052_00'); // "Radar" "Items" "Menu"
	stopYaji();
	start_LR(arg);
}

/*
 * --INFO--
 * Address:	803229E8
 * Size:	000008
 */
bool ObjSMenuPauseDoukutu::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	803229F0
 * Size:	00003C
 */
void ObjSMenuPauseDoukutu::doUpdateFinish()
{
	ObjSMenuBase::doUpdateFinish();
	mMenuPause->killCursor();
	mMenuGiveup->killCursor();
}

/*
 * --INFO--
 * Address:	80322A2C
 * Size:	00004C
 */
bool ObjSMenuPauseDoukutu::doUpdateFadeout()
{
	commonUpdate();
	return updateFadeOut();
}

/*
 * --INFO--
 * Address:	80322A78
 * Size:	000158
 */
void ObjSMenuPauseDoukutu::doUpdateFadeoutFinish()
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
		case 5:
			scene->setBackupScene();
			scene->startScene(nullptr);
			finishPause();
			break;
		case 6:
			scene->endScene(nullptr);
			finishPause();
			scene->setColorBG(0, 0, 0, 0);
			break;
		}
		setFinishState(mDisp->mExitStatus);
		break;

	default:
		JUT_PANICLINE(456, "updateFinish ERR!\n");
	}
}

/*
 * --INFO--
 * Address:	80322BD0
 * Size:	0001D8
 */
bool ObjSMenuPauseDoukutu::menu_pause()
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

	u32 input = pad->mButton.mButtonDown;
	if (input & Controller::PRESS_UP) {
		if (mCurrPauseSel > 0) {
			mCurrPauseSel--;
			mMenuPause->select(mCurrPauseSel);
			set_Blink_Normal();
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrPauseSel < 1) {
			mCurrPauseSel++;
			mMenuPause->select(mCurrPauseSel);
			set_Blink_Normal();
		}

	} else if (mPauseOpened && (input & Controller::PRESS_A)) {
		if (mCurrPauseSel == 1) {
			if (mIsDay1) {
				ogSound->setError();
			} else {
				mMenuPause->killCursor();
				mCurrGiveupSel = 1;
				mMenuGiveup->initSelNum(mCurrGiveupSel);
				mMenuGiveup->startCursor(0.5f);
				set_Menu_YesNo();
				ogSound->setDecide();
			}

		} else if (mCurrPauseSel == 0) {
			mMenuPause->killCursor();
			mDisp->mExitStatus = 5;
			out_L();
			ret = 1;
			ogSound->setDecide();
		}

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	80322DA8
 * Size:	000010
 */
void ObjSMenuPauseDoukutu::doUpdateCancelAction() { mDisp->mExitStatus = 5; }

/*
 * --INFO--
 * Address:	80322DB8
 * Size:	00006C
 */
void ObjSMenuPauseDoukutu::doUpdateLAction()
{
	::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_MAP, getDispMember(), 0, true);
	jump_L(arg);
}

/*
 * --INFO--
 * Address:	80322E24
 * Size:	0000C8
 */
void ObjSMenuPauseDoukutu::doUpdateRAction()
{
	if (msBaseVal.mUseController) {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_CONTROLS, getDispMember(), 0, true);
		jump_R(arg);
	} else {
		::Screen::SetSceneArg arg(SCENE_PAUSE_MENU_ITEMS, getDispMember(), 0, true);
		jump_R(arg);
	}
}

/*
 * --INFO--
 * Address:	80322EEC
 * Size:	0001E8
 */
bool ObjSMenuPauseDoukutu::menu_giveup()
{
	bool ret = false;
	if (!mGiveupOpened) {
		mMenuGiveupTimer += sys->mDeltaTime;
		if (mMenuGiveupTimer >= 1.0f) {
			mGiveupOpened = true;
		}
	}
	Controller* pad = getGamePad();
	mMenuGiveup->update();

	u32 input = pad->mButton.mButtonDown;
	if (input & Controller::PRESS_UP) {
		if (mCurrGiveupSel > 0) {
			mCurrGiveupSel--;
			mMenuGiveup->select(mCurrGiveupSel);
			set_Blink_YesNo();
		}

	} else if (input & Controller::PRESS_DOWN) {
		if (mCurrGiveupSel < 1) {
			mCurrGiveupSel++;
			mMenuGiveup->select(mCurrGiveupSel);
			set_Blink_YesNo();
		}

	} else if (mGiveupOpened && (input & Controller::PRESS_B)) {
		set_Menu_Normal();
		mMenuPause->initSelNum(mCurrPauseSel);
		mMenuPause->startCursor(0.5f);
		mMenuGiveup->killCursor();
		ogSound->setCancel();

	} else if (mGiveupOpened && (input & Controller::PRESS_A)) {
		if (mCurrGiveupSel == 0) {
			mDisp->mExitStatus = 6;
			out_L();
			ret = true;

		} else {
			set_Menu_Normal();
			mMenuPause->initSelNum(mCurrPauseSel);
			mMenuPause->startCursor(0.5f);
			mMenuGiveup->killCursor();
		}

		ogSound->setDecide();

	} else {
		ret = ObjSMenuBase::doUpdate();
	}

	return ret;
}

/*
 * --INFO--
 * Address:	803230D4
 * Size:	000038
 */
void ObjSMenuPauseDoukutu::finishPause()
{
	mMenuPause->killCursor();
	mMenuGiveup->killCursor();
}

/*
 * --INFO--
 * Address:	8032310C
 * Size:	0000A8
 */
bool ObjSMenuPauseDoukutu::menu()
{
	bool ret = false;

	switch (mMenuState) {
	case PAUSEMENU_Normal:
		ret = menu_pause();
		break;

	case PAUSEMENU_YesNo:
		if (mDisp->mPikisInDanger && mWarningTimer > 0.0f) {
			mWarningTimer -= sys->mDeltaTime;
			if (mWarningTimer < 0.0f) {
				ogSound->setWarning();
			}
		}
		ret = menu_giveup();
		break;
	}

	return ret;
}

/*
 * --INFO--
 * Address:	803231B4
 * Size:	000014
 */
void ObjSMenuPauseDoukutu::in_L()
{
	mState = MENUSTATE_OpenL;
	mAngle = 15.0f;
}

/*
 * --INFO--
 * Address:	803231C8
 * Size:	000014
 */
void ObjSMenuPauseDoukutu::in_R()
{
	mState = MENUSTATE_OpenR;
	mAngle = 15.0f;
}

/*
 * --INFO--
 * Address:	803231DC
 * Size:	00000C
 */
void ObjSMenuPauseDoukutu::wait() { mState = MENUSTATE_Default; }

/*
 * --INFO--
 * Address:	803231E8
 * Size:	00002C
 */
void ObjSMenuPauseDoukutu::out_L()
{
	mState = MENUSTATE_CloseL;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80323214
 * Size:	00002C
 */
void ObjSMenuPauseDoukutu::out_R()
{
	mState = MENUSTATE_CloseR;
	ogSound->setSMenuLR();
}

/*
 * --INFO--
 * Address:	80323240
 * Size:	0000C4
 */
void ObjSMenuPauseDoukutu::set_Blink_Normal()
{
	if (mIsDay1) {
		if (mCurrPauseSel == 0) {
			mTextContinue->blink(0.6f, 0.0f);
		} else {
			mTextContinue->blink(0.0f, 0.0f);
		}
		mTextDoGiveup->mColorType = 2;
	} else {
		if (mCurrPauseSel == 0) {
			mTextContinue->blink(0.6f, 0.0f);
			mTextDoGiveup->blink(0.0f, 0.0f);
		} else {
			mTextContinue->blink(0.0f, 0.0f);
			mTextDoGiveup->blink(0.6f, 0.0f);
		}
	}
}

/*
 * --INFO--
 * Address:	80323304
 * Size:	000078
 */
void ObjSMenuPauseDoukutu::set_Blink_YesNo()
{
	if (mCurrGiveupSel == 0) {
		mTextGiveupY->blink(0.6f, 0.0f);
		mTextGiveupN->blink(0.0f, 0.0f);
	} else {
		mTextGiveupY->blink(0.0f, 0.0f);
		mTextGiveupN->blink(0.6f, 0.0f);
	}
}

/*
 * --INFO--
 * Address:	8032337C
 * Size:	00010C
 */
void ObjSMenuPauseDoukutu::set_Menu_Normal()
{
	mMenuState = PAUSEMENU_Normal;
	mTextContinue->open(0.6f);
	mTextDoGiveup->open(0.7f);
	mTextGiveupQ->close();
	mTextGiveupY->close();
	mTextGiveupN->close();
	set_Blink_Normal();
	mPauseOpened    = false;
	mMenuPauseTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	80323488
 * Size:	0000D4
 */
void ObjSMenuPauseDoukutu::set_Menu_YesNo()
{
	mMenuState = PAUSEMENU_YesNo;
	mTextContinue->close();
	mTextDoGiveup->close();
	mTextGiveupQ->open(0.6f);
	mTextGiveupY->open(0.7f);
	mTextGiveupN->open(0.8f);
	set_Blink_YesNo();
	mGiveupOpened    = false;
	mMenuGiveupTimer = 0.0f;
	mWarningTimer    = msVal._08;
}

ObjSMenuPauseDoukutu::StaticValues ObjSMenuPauseDoukutu::msVal;

} // namespace newScreen
} // namespace og
