#include "og/newScreen/UfoMenu.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/MenuMgr.h"
#include "og/Screen/anime.h"
#include "Controller.h"
#include "og/Sound.h"
#include "System.h"
#include "trig.h"

namespace og {
namespace newScreen {

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	80323798
 * Size:	0000B0
 */
ObjUfoMenu::ObjUfoMenu(char const* name)
{
	mName            = name;
	mDisp            = nullptr;
	mUfoScreen       = nullptr;
	mPikiScreen      = nullptr;
	mSelectIndex     = 0;
	mMenu            = nullptr;
	mDoEnd           = false;
	mScreenMovePos   = 800.0f;
	mLightAnims      = nullptr;
	mPikiAnims       = nullptr;
	mFadeTimer       = 0.0f;
	mPaneWhiteWalk   = nullptr;
	mPaneWhiteStand  = nullptr;
	mPanePurpleWalk  = nullptr;
	mPanePurpleStand = nullptr;
	mPaneAllWhite    = nullptr;
	mPaneAllPurple   = nullptr;
	mPaneN00         = nullptr;
	mPaneN01         = nullptr;
	_8C              = 0;
	mDoDraw          = false;
}

/*
 * --INFO--
 * Address:	80323848
 * Size:	0000AC
 */
ObjUfoMenu::~ObjUfoMenu() { }

/*
 * --INFO--
 * Address:	803238F4
 * Size:	000490
 */
void ObjUfoMenu::doCreate(JKRArchive* arc)
{
	mDisp                                = nullptr;
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_UFO_GROUP)) {
		mDisp = disp;
	} else {
		mDisp = new og::Screen::DispMemberUfoGroup();
	}

	mUfoScreen = new P2DScreen::Mgr_tuning;
	mUfoScreen->set("ufo.blo", 0x1040000, arc);
	mPikiScreen = new P2DScreen::Mgr;
	mPikiScreen->set("ufo_pikmin_icon.blo", 0x1040000, arc);

	mPaneWhiteWalk   = og::Screen::TagSearch(mPikiScreen, 'P_w_00');
	mPaneWhiteStand  = og::Screen::TagSearch(mPikiScreen, 'P_w_s00');
	mPanePurpleWalk  = og::Screen::TagSearch(mPikiScreen, 'P_b_00');
	mPanePurpleStand = og::Screen::TagSearch(mPikiScreen, 'P_b_s_00');
	mPaneAllWhite    = og::Screen::TagSearch(mPikiScreen, 'Nall_w');
	mPaneAllPurple   = og::Screen::TagSearch(mPikiScreen, 'Nall_b');
	mPaneN00         = og::Screen::TagSearch(mUfoScreen, 'N00_c');
	mPaneN01         = og::Screen::TagSearch(mUfoScreen, 'N01_c');

	og::Screen::setCallBack_Furiko(mUfoScreen, 'furiko00');
	og::Screen::setCallBack_CounterRV(mUfoScreen, 'Ppi00_1', &mDisp->mContena1.mInOnion, 10, 0, 1, arc);
	og::Screen::setCallBack_CounterRV(mUfoScreen, 'Ppi01_1', &mDisp->mContena2.mInOnion, 10, 0, 1, arc);
	og::Screen::setCallBackMessage(mUfoScreen);
	mSelectIndex = 0;
	setSelectPikmin(mSelectIndex);
	mMenu = new og::Screen::MenuMgr;
	mMenu->init(mUfoScreen, 2, 'N00', 'h_00', 's_00', 'il00', 'ir00');
	mMenu->mDoScale = true;
	mMenu->_74      = msVal._24;
	mLightAnims     = new og::Screen::AnimGroup(3);
	og::Screen::registAnimGroupPane(mLightAnims, arc, mUfoScreen, 'Plight00', "ufo.bck", 0.5f);
	og::Screen::registAnimGroupPane(mLightAnims, arc, mUfoScreen, 'Plight01', "ufo.bck", 0.5f);
	og::Screen::registAnimGroupScreen(mLightAnims, arc, mUfoScreen, "ufo.bpk", 0.5f);
	mPikiAnims = new og::Screen::AnimGroup(1);
	og::Screen::registAnimGroupScreen(mPikiAnims, arc, mPikiScreen, "ufo_pikmin_icon.btp", 0.5f);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void ObjUfoMenu::commonUpdate()
{
	mLightAnims->update();
	mPikiAnims->update();
	mPaneN00->move(msVal._0C, msVal._10);
	J2DPane* pane = mPaneN00;
	pane->updateScale(msVal._14);
	mPaneN01->move(msVal._18, msVal._1C);
	pane = mPaneN01;
	pane->updateScale(msVal._20);
	mDoDraw = true;
	mUfoScreen->setXY(mScreenMovePos, 0.0f);
	mUfoScreen->update();
	mMenu->update();
	mPikiScreen->update();
}

/*
 * --INFO--
 * Address:	80323D84
 * Size:	0000F4
 */
void ObjUfoMenu::setSelectPikmin(int doEnable)
{
	if (!doEnable) {
		mPaneWhiteStand->setAlpha(255);
		mPanePurpleWalk->setAlpha(255);
		mPaneWhiteWalk->setAlpha(0);
		mPanePurpleStand->setAlpha(0);
	} else {
		mPaneWhiteStand->setAlpha(0);
		mPanePurpleWalk->setAlpha(0);
		mPaneWhiteWalk->setAlpha(255);
		mPanePurpleStand->setAlpha(255);
	}
}

/*
 * --INFO--
 * Address:	80323E78
 * Size:	000524
 */
bool ObjUfoMenu::doUpdate()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	if (mDisp->mHasWhite && mDisp->mHasPurple) {
		if (pad->mButton.mButtonDown & Controller::PRESS_UP) {
			if (mSelectIndex > 0) {
				mSelectIndex--;
				mMenu->select(mSelectIndex & 0xffff);
				setSelectPikmin(mSelectIndex);
			}

		} else if (pad->mButton.mButtonDown & Controller::PRESS_DOWN) {
			if (mSelectIndex < 1) {
				mSelectIndex++;
				mMenu->select(mSelectIndex & 0xffff);
				if (!mSelectIndex) {
					mPaneWhiteStand->setAlpha(255);
					mPanePurpleWalk->setAlpha(255);
					mPaneWhiteWalk->setAlpha(0);
					mPanePurpleStand->setAlpha(0);
				} else {
					mPaneWhiteStand->setAlpha(0);
					mPanePurpleWalk->setAlpha(0);
					mPaneWhiteWalk->setAlpha(255);
					mPanePurpleStand->setAlpha(255);
				}
			}
		}
	}
	if (pad->mButton.mButtonDown & Controller::PRESS_A) {
		ogSound->setDecide();
		ret = 1;
		if (mSelectIndex == 0) {
			mDisp->mUfoMenu.mContenaType = 1;
			::Screen::SetSceneArg arg(SCENE_CONTENA_WHITE, getDispMember(), 0, true);
			::Screen::SceneBase* base = getOwner();
			arg._09                   = false;
			bool check                = base->setScene(arg);
			if (check) {
				check = base->startScene(nullptr);
				JUT_ASSERTLINE(356, check, "‚¾‚ß‚Å‚·\n");
			}
		} else if (mSelectIndex == 1) {
			mDisp->mUfoMenu.mContenaType = 2;
			::Screen::SetSceneArg arg(SCENE_CONTENA_PURPLE, getDispMember(), 0, true);
			::Screen::SceneBase* base = getOwner();
			arg._09                   = false;
			bool check                = base->setScene(arg);
			if (check) {
				check = base->startScene(nullptr);
				JUT_ASSERTLINE(372, check, "‚¾‚ß‚Å‚·\n");
			}
		}
	} else if (pad->mButton.mButtonDown & Controller::PRESS_B) {
		ogSound->setClose();
		mDisp->mUfoMenu.mContenaType = 0;
		setBackupScene();
		ret = 1;
	}
	commonUpdate();
	return ret;
}

/*
 * --INFO--
 * Address:	8032439C
 * Size:	000094
 */
void ObjUfoMenu::setBackupScene()
{
	if (!mDoEnd) {
		::Screen::SceneBase* base = getOwner();
		if (base->setBackupScene()) {
			if (!base->startScene(nullptr)) {
				JUT_PANICLINE(409, "‚¾‚ß‚Å‚·\n");
			}
		}
		mDoEnd = true;
	}
}

/*
 * --INFO--
 * Address:	80324430
 * Size:	0000B4
 */
void ObjUfoMenu::doDraw(Graphics& gfx)
{
	J2DPerspGraph& graf = gfx.mPerspGraph;
	if (mDoDraw) {
		mUfoScreen->draw(gfx, graf);
		PSMTXCopy(mPaneN00->mGlobalMtx, mPaneAllWhite->mPositionMtx);
		PSMTXCopy(mPaneN01->mGlobalMtx, mPaneAllPurple->mPositionMtx);
		mPikiScreen->draw(gfx, graf);
		mMenu->draw(&graf);
	}
}

/*
 * --INFO--
 * Address:	803244E4
 * Size:	000020
 */
bool ObjUfoMenu::doStart(::Screen::StartSceneArg const*)
{
	mFadeTimer     = 0.0f;
	mScreenMovePos = 800.0f;
	mDoDraw        = false;
	return true;
}

/*
 * --INFO--
 * Address:	80324504
 * Size:	000008
 */
bool ObjUfoMenu::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	8032450C
 * Size:	000044
 */
void ObjUfoMenu::doUpdateFadeinFinish()
{
	mMenu->initSelNum(mSelectIndex);
	mMenu->startCursor(0.1f);
}

/*
 * --INFO--
 * Address:	80324550
 * Size:	00002C
 */
void ObjUfoMenu::doUpdateFinish()
{
	mFadeTimer = 0.0f;
	mMenu->killCursor();
}

/*
 * --INFO--
 * Address:	8032457C
 * Size:	000024
 */
void ObjUfoMenu::doUpdateFadeoutFinish() { mMenu->killCursor(); }

/*
 * --INFO--
 * Address:	803245A0
 * Size:	000188
 */
bool ObjUfoMenu::doUpdateFadein()
{
	bool check = false;
	commonUpdate();
	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer >= msVal._08) {
		check = true;
	}

	mScreenMovePos = (1.0f - og::Screen::calcSmooth0to1(mFadeTimer, msVal._08)) * 800.0f;
	return check;
}

/*
 * --INFO--
 * Address:	80324728
 * Size:	00017C
 */
bool ObjUfoMenu::doUpdateFadeout()
{
	bool check = false;
	commonUpdate();
	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer > msVal._08) {
		check = true;
	}
	mScreenMovePos = (og::Screen::calcSmooth0to1(mFadeTimer, msVal._08)) * -800.0f;
	return check;
}

ObjUfoMenu::StaticValues ObjUfoMenu::msVal = ObjUfoMenu::StaticValues();

} // namespace newScreen
} // namespace og
