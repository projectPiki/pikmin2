#include "ebi/TMainTitleMgr.h"
#include "ebi/title/TTitle.h"
#include "ebi/E2DGraph.h"
#include "nans.h"
#include "og/newScreen/ogUtil.h"
#include "Game/GameConfig.h"
#include "Game/Data.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "ebiMainTitleMgr";

namespace ebi {

const f32 TMainTitleMgr::kFadeOutTime = 1.0f;

/*
 * --INFO--
 * Address:	803EA170
 * Size:	0003B4
 */
TMainTitleMgr::TMainTitleMgr()
    : mDrawColor(0, 0, 0, -1)
    , mDrawAlpha(-1)
    , mDrawState(0)
    , mOpenMenuCounter(0)
    , mOpenMenuCounterMax(0)
    , mExitMenuCounter(0)
    , mExitMenuCounterMax(0)
{
	title::TTitleMgr::globalInstance();
	title::titleMgr->init();
}

/*
 * --INFO--
 * Address:	803EA524
 * Size:	000068
 */
void TMainTitleMgr::setMode(long set)
{
	switch (set) {
	case 0:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Spring;
		break;
	case 1:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Summer;
		break;
	case 2:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Autumn;
		break;
	case 3:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Winter;
		break;
	}
}

/*
 * --INFO--
 * Address:	803EA58C
 * Size:	000124
 */
void TMainTitleMgr::loadResource()
{
	sys->heapStatusStart("TMainTitleMgr::loadResource", nullptr);
	sys->heapStatusStart("TTitleMenu::loadResource", nullptr);

	char buf[256];
	og::newScreen::makeLanguageResName(buf, "title.szs");

	JKRArchive* arc = JKRArchive::mount(buf, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(69, arc);
	sys->heapStatusEnd("TTitleMenu::loadResource");

	mTitleMenu.setArchive(arc);
	mPressStart.setArchive(arc);
	mTMBack.setArchive(arc);
	mLogo.setArchive(arc);

	title::titleMgr->loadResource();
	title::titleMgr->initAfterLoadRes();

	sys->heapStatusEnd("TMainTitleMgr::loadResource");
}

/*
 * --INFO--
 * Address:	803EA6B0
 * Size:	00004C
 */
void TMainTitleMgr::setController(Controller* control)
{
	mTitleMenu.setController(control);
	mPressStart.mControl = control;
	title::titleMgr->setController(control);
	mController = control;
}

/*
 * --INFO--
 * Address:	803EA6FC
 * Size:	0000C0
 */
void TMainTitleMgr::start()
{
	mTitleMenu.killScreen();
	mPressStart.killScreen();

	Screen::ArgOpenTMBack arg(5.0f);
	mTMBack.openScreen(&arg);
	mLogo.openScreen(nullptr);

	title::titleMgr->start();

	mState              = Opening;
	mIsForceSelect      = false;
	mSelectedMenuOption = Select_NULL;
	mDrawState          = 0;
}

/*
 * --INFO--
 * Address:	803EA7BC
 * Size:	0001F0
 */
void TMainTitleMgr::startMenuSet(long, long select)
{
	mSelectedMenuOption = select;
	int id;
	switch (mSelectedMenuOption) {
	case Select_Story:
		id = 0;
		break;
	case Select_Challenge:
		id = 2;
		break;
	case Select_Vs:
		id = 1;
		break;
	case Select_Options:
		id = 3;
		break;
	case Select_HiScore:
		id = 4;
		break;
	case Select_Bonus:
		id = 5;
		break;
	default:
		JUT_PANICLINE(177, "P2Assert");
	}

	if (Game::gGameConfig.mParms.mE3version.mData) {
		Screen::ArgOpenTitleMenu arg(1, id);
		mTitleMenu.openMenuSet(&arg);
	} else {
		Screen::ArgOpenTitleMenu arg(sys->getPlayCommonData()->isChallengeGamePlayable() != 0, id);
		mTitleMenu.openMenuSet(&arg);
	}

	mPressStart.killScreen();
	Screen::ArgOpenTMBack tmarg(0.0f);
	mTMBack.openScreen(&tmarg);
	mLogo.openScreen(nullptr);

	title::titleMgr->start();
	title::titleMgr->setLogo();
	mState              = MainMenu;
	mIsForceSelect      = false;
	u32 count           = E2DFader::kFadeTime / sys->mDeltaTime;
	mOpenMenuCounter    = count;
	mOpenMenuCounterMax = count;
	mDrawState          = 1;
}

/*
 * --INFO--
 * Address:	803EA9AC
 * Size:	00000C
 */
void TMainTitleMgr::forceQuit() { mState = Standby; }

/*
 * --INFO--
 * Address:	803EA9B8
 * Size:	000010
 */
bool TMainTitleMgr::isFinish() { return u8(mState == Standby); }

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
bool TMainTitleMgr::isAnyKey()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EA9C8
 * Size:	000008
 */
int TMainTitleMgr::getSelectedMenu() { return mSelectedMenuOption; }

/*
 * --INFO--
 * Address:	803EA9D0
 * Size:	0004B0
 */
void TMainTitleMgr::update()
{
	mDoEndBGM = false;
	switch (mState) {
	case Opening:
		if (title::titleMgr->isPressStart()) {
			mPressStart.openScreen(nullptr);
			mState = PressStart;
		}
		break;
	case PressStart:
		if (title::titleMgr->isControllerOK()) {
			mPressStart.mIsOpen = true;
		} else {
			mPressStart.mIsOpen = false;
		}
		if (Game::gGameConfig.mParms.mNintendoVersion.mData && mController->mButton.mButtonDown & Controller::PRESS_B) {
			sys->resetOn(false);
		}
		if (mPressStart.isFinishScreen()) {
			if (Game::gGameConfig.mParms.mKFesVersion.mData) {
				mSelectedMenuOption = Select_Challenge;
				mDoEndBGM           = true;
				u32 count           = 1.0f / sys->mDeltaTime;
				mExitMenuCounter    = count;
				mExitMenuCounterMax = count;
				u32 count2          = 1.0f / sys->mDeltaTime;
				mOpenMenuCounter    = count2;
				mOpenMenuCounterMax = count2;
				mDrawState          = 2;
				mState              = Exiting;
			} else if (Game::gGameConfig.mParms.mNintendoVersion.mData) {
				mSelectedMenuOption = Select_Challenge;
				mDoEndBGM           = true;
				u32 count           = 1.0f / sys->mDeltaTime;
				mExitMenuCounter    = count;
				mExitMenuCounterMax = count;
				u32 count2          = 1.0f / sys->mDeltaTime;
				mOpenMenuCounter    = count2;
				mOpenMenuCounterMax = count2;
				mDrawState          = 2;
				mState              = Exiting;
			} else if (Game::gGameConfig.mParms.mE3version.mData) {
				Screen::ArgOpenTitleMenu arg(1, 1);
				mTitleMenu.openScreen(&arg);
				mState = MainMenu;
			} else {
				Screen::ArgOpenTitleMenu arg(sys->getPlayCommonData()->isChallengeGamePlayable() != 0, 0);
				mTitleMenu.openScreen(&arg);
				mState = MainMenu;
			}
		}
		break;
	case MainMenu:
		if (mTitleMenu.isDecide() && !mIsForceSelect) {
			mIsForceSelect = true;
			switch (mTitleMenu.mSelectID) {
			case 0:
				mSelectedMenuOption = Select_Story;
				break;
			case 1:
				mSelectedMenuOption = Select_Vs;
				break;
			case 2:
				mSelectedMenuOption = Select_Challenge;
				break;
			case 3:
				mSelectedMenuOption = Select_Options;
				break;
			case 4:
				mSelectedMenuOption = Select_HiScore;
				break;
			case 5:
				mSelectedMenuOption = Select_Bonus;
				break;
			}
			title::titleMgr->breakup();
			Screen::ArgCloseTMBack arg(1.0f);
			mTMBack.closeScreen(&arg);
			if (!mTitleMenu.isCancel()) {
				u32 count           = 1.0f / sys->mDeltaTime;
				mOpenMenuCounter    = count;
				mOpenMenuCounterMax = count;
				mDrawState          = 2;
				mDoEndBGM           = true;
			}
		}
		u8 end    = mTitleMenu.isFinishScreen();
		bool end2 = mTitleMenu.isCancel();
		if (end) {
			if (end2) {
				mPressStart.openScreen(nullptr);
				mState = PressStart;
			} else {
				if (!mOpenMenuCounter) {
					mState = Standby;
				}
			}
		}
		break;
	case Exiting:
		if (mExitMenuCounter) {
			mExitMenuCounter--;
		}
		if (!mExitMenuCounter) {
			mState = Standby;
		}
		break;
	}

	mTitleMenu.update();
	mPressStart.update();
	mTMBack.update();
	mLogo.update();
	title::titleMgr->update();
	if (mDrawState && mOpenMenuCounter) {
		mOpenMenuCounter--;
	}
}

/*
 * --INFO--
 * Address:	803EAE80
 * Size:	000274
 */
void TMainTitleMgr::draw()
{
	if (mState != Standby) {
		title::titleMgr->draw();
		GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
		mTMBack.draw();
		mTitleMenu.draw();
		mPressStart.draw();
		mLogo.draw();
		if (mDrawState != 0) {
			J2DPerspGraph* graf = &sys->mGfx->mPerspGraph;
			graf->setPort();
			JUtility::TColor color(mDrawColor);
			switch (mDrawState) {
			case 1: {
				f32 calc;
				if (mOpenMenuCounterMax) {
					calc = (f32)mOpenMenuCounter / (f32)mOpenMenuCounterMax;
				} else {
					calc = 0.0f;
				}
				color.a = (f32)mDrawAlpha * calc;
				break;
			}
			case 2: {
				f32 calc;
				if (mOpenMenuCounterMax) {
					calc = (f32)mOpenMenuCounter / (f32)mOpenMenuCounterMax;
				} else {
					calc = 0.0f;
				}
				f32 alpha = 1.0f - calc;
				color.a   = (f32)mDrawAlpha * alpha;
				break;
			}
			}

			graf->setColor(color);
			u32 y    = System::getRenderModeObj()->efbHeight;
			u32 x    = System::getRenderModeObj()->fbWidth;
			f32 zero = 0.0f;
			JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
			graf->fillBox(box);
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void TMainTitleMgr::showInfo()
{
	// UNUSED FUNCTION
}

} // namespace ebi
