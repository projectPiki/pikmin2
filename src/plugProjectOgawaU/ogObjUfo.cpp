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

/**
 * @note Address: 0x80323798
 * @note Size: 0xB0
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

/**
 * @note Address: 0x80323848
 * @note Size: 0xAC
 */
ObjUfoMenu::~ObjUfoMenu() { }

/**
 * @note Address: 0x803238F4
 * @note Size: 0x490
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
	og::Screen::setCallBack_CounterRV(mUfoScreen, 'Ppi00_1', &mDisp->mContena1.mDataContena.mInOnionCount, 10, 0, 1, arc);
	og::Screen::setCallBack_CounterRV(mUfoScreen, 'Ppi01_1', &mDisp->mContena2.mDataContena.mInOnionCount, 10, 0, 1, arc);
	og::Screen::setCallBackMessage(mUfoScreen);
	mSelectIndex = 0;
	setSelectPikmin(mSelectIndex);
	mMenu = new og::Screen::MenuMgr;
	mMenu->init(mUfoScreen, 2, 'N00', 'h_00', 's_00', 'il00', 'ir00');
	mMenu->mDoScale            = true;
	mMenu->mSelectedExtraScale = msVal.mSelectedIconScale;
	mLightAnims                = new og::Screen::AnimGroup(3);
	og::Screen::registAnimGroupPane(mLightAnims, arc, mUfoScreen, 'Plight00', "ufo.bck", 0.5f);
	og::Screen::registAnimGroupPane(mLightAnims, arc, mUfoScreen, 'Plight01', "ufo.bck", 0.5f);
	og::Screen::registAnimGroupScreen(mLightAnims, arc, mUfoScreen, "ufo.bpk", 0.5f);
	mPikiAnims = new og::Screen::AnimGroup(1);
	og::Screen::registAnimGroupScreen(mPikiAnims, arc, mPikiScreen, "ufo_pikmin_icon.btp", 0.5f);
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void ObjUfoMenu::commonUpdate()
{
	mLightAnims->update();
	mPikiAnims->update();
	mPaneN00->move(msVal.mPiki1XPos, msVal.mPiki1YPos);
	J2DPane* pane = mPaneN00;
	pane->updateScale(msVal.mPiki1Scale);
	mPaneN01->move(msVal.mPiki2XPos, msVal.mPiki2YPos);
	pane = mPaneN01;
	pane->updateScale(msVal.mPiki2Scale);
	mDoDraw = true;
	mUfoScreen->setXY(mScreenMovePos, 0.0f);
	mUfoScreen->update();
	mMenu->update();
	mPikiScreen->update();
}

/**
 * @note Address: 0x80323D84
 * @note Size: 0xF4
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

/**
 * @note Address: 0x80323E78
 * @note Size: 0x524
 */
bool ObjUfoMenu::doUpdate()
{
	bool ret        = false;
	Controller* pad = getGamePad();
	if (mDisp->mHasWhite && mDisp->mHasPurple) {
		if (pad->getButtonDown() & Controller::PRESS_UP) {
			if (mSelectIndex > 0) {
				mSelectIndex--;
				mMenu->select(mSelectIndex & 0xffff);
				setSelectPikmin(mSelectIndex);
			}

		} else if (pad->getButtonDown() & Controller::PRESS_DOWN) {
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
	if (pad->getButtonDown() & Controller::PRESS_A) {
		ogSound->setDecide();
		ret = 1;
		if (mSelectIndex == 0) {
			mDisp->mUfoMenu.mContenaType = 1;
			::Screen::SetSceneArg arg(SCENE_CONTENA_WHITE, getDispMember());
			::Screen::SceneBase* base = getOwner();
			arg.mDoCreateBackup       = false;
			bool check                = base->setScene(arg);
			if (check) {
				check = base->startScene(nullptr);
				JUT_ASSERTLINE(356, check, "だめです\n");
			}
		} else if (mSelectIndex == 1) {
			mDisp->mUfoMenu.mContenaType = 2;
			::Screen::SetSceneArg arg(SCENE_CONTENA_PURPLE, getDispMember());
			::Screen::SceneBase* base = getOwner();
			arg.mDoCreateBackup       = false;
			bool check                = base->setScene(arg);
			if (check) {
				check = base->startScene(nullptr);
				JUT_ASSERTLINE(372, check, "だめです\n");
			}
		}
	} else if (pad->getButtonDown() & Controller::PRESS_B) {
		ogSound->setClose();
		mDisp->mUfoMenu.mContenaType = 0;
		setBackupScene();
		ret = 1;
	}
	commonUpdate();
	return ret;
}

/**
 * @note Address: 0x8032439C
 * @note Size: 0x94
 */
void ObjUfoMenu::setBackupScene()
{
	if (!mDoEnd) {
		::Screen::SceneBase* base = getOwner();
		if (base->setBackupScene()) {
			if (!base->startScene(nullptr)) {
				JUT_PANICLINE(409, "だめです\n");
			}
		}
		mDoEnd = true;
	}
}

/**
 * @note Address: 0x80324430
 * @note Size: 0xB4
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

/**
 * @note Address: 0x803244E4
 * @note Size: 0x20
 */
bool ObjUfoMenu::doStart(::Screen::StartSceneArg const*)
{
	mFadeTimer     = 0.0f;
	mScreenMovePos = 800.0f;
	mDoDraw        = false;
	return true;
}

/**
 * @note Address: 0x80324504
 * @note Size: 0x8
 */
bool ObjUfoMenu::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x8032450C
 * @note Size: 0x44
 */
void ObjUfoMenu::doUpdateFadeinFinish()
{
	mMenu->initSelNum(mSelectIndex);
	mMenu->startCursor(0.1f);
}

/**
 * @note Address: 0x80324550
 * @note Size: 0x2C
 */
void ObjUfoMenu::doUpdateFinish()
{
	mFadeTimer = 0.0f;
	mMenu->killCursor();
}

/**
 * @note Address: 0x8032457C
 * @note Size: 0x24
 */
void ObjUfoMenu::doUpdateFadeoutFinish() { mMenu->killCursor(); }

/**
 * @note Address: 0x803245A0
 * @note Size: 0x188
 */
bool ObjUfoMenu::doUpdateFadein()
{
	bool check = false;
	commonUpdate();
	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer >= msVal.mFadeInOutTime) {
		check = true;
	}

	mScreenMovePos = (1.0f - og::Screen::calcSmooth0to1(mFadeTimer, msVal.mFadeInOutTime)) * 800.0f;
	return check;
}

/**
 * @note Address: 0x80324728
 * @note Size: 0x17C
 */
bool ObjUfoMenu::doUpdateFadeout()
{
	bool check = false;
	commonUpdate();
	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer > msVal.mFadeInOutTime) {
		check = true;
	}
	mScreenMovePos = (og::Screen::calcSmooth0to1(mFadeTimer, msVal.mFadeInOutTime)) * -800.0f;
	return check;
}

ObjUfoMenu::StaticValues ObjUfoMenu::msVal = ObjUfoMenu::StaticValues();

} // namespace newScreen
} // namespace og
