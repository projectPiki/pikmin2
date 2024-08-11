#include "ebi/Screen/TSaveMenu.h"
#include "System.h"
#include "og/newScreen/ogUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "ebi/E2DGraph.h"
#include "Controller.h"

static const char name[] = "ebiScreenSaveMenu";

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803DD0A8
 * @note Size: 0x350
 */
void TSaveMenu::doSetArchive(JKRArchive* arc)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set("info_window.blo", 0x1100000, arc);

	mPaneYesText      = E2DScreen_searchAssert(mScreenObj, 'Tm01y');
	mPaneNoText       = E2DScreen_searchAssert(mScreenObj, 'Tm01n');
	mPaneQuestionText = E2DScreen_searchAssert(mScreenObj, 'Tm02');

	mCursorEfxPane[0] = E2DScreen_searchAssert(mScreenObj, 'Pm01y_il');
	mCursorEfxPane[1] = E2DScreen_searchAssert(mScreenObj, 'Pm01y_ir');
	mCursorEfxPane[2] = E2DScreen_searchAssert(mScreenObj, 'Pm01n_il');
	mCursorEfxPane[3] = E2DScreen_searchAssert(mScreenObj, 'Pm01n_ir');

	mAnimScreen[0] = og::Screen::setMenuScreen(arc, mScreenObj, 'Tm01y');
	mAnimScreen[1] = og::Screen::setMenuScreen(arc, mScreenObj, 'Tm01n');
	mAnimScreen[2] = og::Screen::setMenuTitleScreen(arc, mScreenObj, 'Tm02');

	E2DPane_setTreeShow(mScreenObj);

	E2DScreen_searchAssert(mScreenObj, 'Pm00y_il')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm00y_ir')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm00n_il')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm00n_ir')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm01y_il')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm01y_ir')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm01n_il')->setAlpha(0);
	E2DScreen_searchAssert(mScreenObj, 'Pm01n_ir')->setAlpha(0);

	for (int i = 0; i < 4; i++) {
		mCursorEfxPane[i]->setAlpha(0);
	}

	mCursor1.setPanes(mCursorEfxPane[0], mCursorEfxPane[2]);
	mCursor2.setPanes(mCursorEfxPane[1], mCursorEfxPane[3]);

	mFuriko = og::Screen::setCallBack_Furiko(mScreenObj, 'furiko00');
}

/**
 * @note Address: 0x803DD3F8
 * @note Size: 0x7C
 */
void TSaveMenu::doOpenScreen(ArgOpen*)
{
	mAlpha               = 200;
	mDrawState           = 0;
	u32 count            = E2DFader::kFadeTime / sys->mDeltaTime;
	mOpenCloseCounter    = count;
	mOpenCloseCounterMax = count;
	mDrawState           = 2;
	mFadeTimer           = 0.0f;
	mFuriko->stop();
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
}

/**
 * @note Address: 0x803DD474
 * @note Size: 0x64
 */
void TSaveMenu::doCloseScreen(ArgClose*)
{
	mFadeTimer           = 0.0f;
	u32 count            = E2DFader::kFadeTime / sys->mDeltaTime;
	mOpenCloseCounter    = count;
	mOpenCloseCounterMax = count;
	mDrawState           = 1;
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
}

/**
 * @note Address: 0x803DD4D8
 * @note Size: 0x84
 */
void TSaveMenu::doKillScreen()
{
	startMsgState_(MSG_Kill);
	mDrawState = 0;
	mCursor1.mCursor.kill();
	mCursor2.mCursor.kill();
	for (int i = 0; i < 3; i++) {
		mAnimScreen[i]->stop();
	}
}

/**
 * @note Address: 0x803DD55C
 * @note Size: 0xDC
 */
bool TSaveMenu::doUpdateStateOpen()
{
	updateMsg_();
	if (mDrawState && mOpenCloseCounter) {
		mOpenCloseCounter--;
	}
	mScreenObj->update();
	mCursor1.update();
	mCursor2.update();

	mFadeTimer += sys->mDeltaTime;

	mScreenMovePos = (1.0f - og::Screen::calcSmooth0to1(mFadeTimer, 0.3f)) * 800.0f;
	mScreenObj->setXY(mScreenMovePos, 0.0f);
	return u8(mScreenMovePos <= 0.0f);
}

/**
 * @note Address: 0x803DD638
 * @note Size: 0x74
 */
bool TSaveMenu::doUpdateStateWait()
{
	updateMsg_();
	if (mDrawState && mOpenCloseCounter) {
		mOpenCloseCounter--;
	}
	mScreenObj->update();
	mCursor1.update();
	mCursor2.update();
	return false;
}

/**
 * @note Address: 0x803DD6AC
 * @note Size: 0xD4
 */
bool TSaveMenu::doUpdateStateClose()
{
	updateMsg_();
	if (mDrawState && mOpenCloseCounter) {
		mOpenCloseCounter--;
	}
	mScreenObj->update();
	mCursor1.update();
	mCursor2.update();

	mFadeTimer += sys->mDeltaTime;

	mScreenMovePos = (og::Screen::calcSmooth0to1(mFadeTimer, 0.3f)) * -800.0f;
	mScreenObj->setXY(mScreenMovePos, 0.0f);
	return u8(mFadeTimer > 0.3f);
}

/**
 * @note Address: 0x803DD780
 * @note Size: 0x234
 */
void TSaveMenu::doDraw()
{
	J2DPerspGraph* graf2;
	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph* graf = &gfx->mPerspGraph;
	graf->setPort();

	if (mDrawState) {
		graf2 = &sys->mGfx->mPerspGraph;
		graf2->setPort();
		u8 alpha = mBGColor;
		JUtility::TColor color(mBGColor);
		switch (mDrawState) {
		case 1: {
			f32 calc;
			if (mOpenCloseCounterMax) {
				calc = (f32)mOpenCloseCounter / (f32)mOpenCloseCounterMax;
			} else {
				calc = 0.0f;
			}
			color.a = mAlpha * calc;
			break;
		}
		case 2: {
			f32 calc;
			if (mOpenCloseCounterMax) {
				calc = (f32)mOpenCloseCounter / (f32)mOpenCloseCounterMax;
			} else {
				calc = 0.0f;
			}
			color.a = mAlpha * (1.0f - calc);
			break;
		}
		}
		graf2->setColor(color);
		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		graf2->fillBox(box);
	}

	mScreenObj->draw(*gfx, *graf);
}

/**
 * @note Address: 0x803DD9B4
 * @note Size: 0xB0
 */
void TSaveMenu::loadResource()
{
	sys->heapStatusStart("TScreenSaveMenu::loadResource", nullptr);

	char buf[PATH_MAX];
	og::newScreen::makeLanguageResName(buf, "info_window.szs");
	JKRArchive* arc = JKRMountArchive(buf, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(226, arc);
	sys->heapStatusEnd("TScreenSaveMenu::loadResource");

	setArchive(arc);
}

/**
 * @note Address: 0x803DDA64
 * @note Size: 0x94
 */
bool TSaveMenu::openMsg(s32 id)
{
	P2ASSERTBOUNDSLINE(239, 0, id, 4);

	mMesgState = id;
	if (mStateID != MSG_Kill) {
		return false;
	}
	startMsgState_(MSG_Open);
	return true;
}

/**
 * @note Address: 0x803DDAF8
 * @note Size: 0x3C
 */
bool TSaveMenu::closeMsg()
{
	if (mStateID != MSG_Idle) {
		return false;
	}
	startMsgState_(MSG_Close);
	return true;
}

/**
 * @note Address: 0x803DDB34
 * @note Size: 0x54
 */
void TSaveMenu::noMsg()
{
	mStateID = MSG_Kill;
	for (int i = 0; i < 3; i++) {
		mAnimScreen[i]->stop();
	}
}

/**
 * @note Address: 0x803DDB88
 * @note Size: 0x10
 */
bool TSaveMenu::isFinishMsg() { return u8(mStateID == MSG_Kill); }

/**
 * @note Address: 0x803DDB98
 * @note Size: 0x3B4
 */
void TSaveMenu::startMsgState_(enumMsgState state)
{
	mStateID = state;
	switch (mStateID) {
	case MSG_Kill:
		mCursor1.mCursor.kill();
		mCursor2.mCursor.kill();
		break;
	case MSG_Open:
		mCursor1.mCursor.kill();
		mCursor2.mCursor.kill();
		// yes this isnt a switch
		if (mMesgState == MESSAGE_SaveOption) {
			mPressedA       = false;
			mSelectedOption = true;
			mAnimScreen[0]->setText('8370_00'); // "Save"
			mAnimScreen[1]->setText('8371_00'); // "Don't Save"
			mAnimScreen[0]->open(0.0f);
			mAnimScreen[0]->blink(0.6f, 0.0f);
			mAnimScreen[1]->open(0.0f);
			mAnimScreen[1]->blink(0.0f, 0.0f);
			mCursor1.setPanes(mCursorEfxPane[0], mCursorEfxPane[2]);
			mCursor2.setPanes(mCursorEfxPane[1], mCursorEfxPane[3]);
			mCursor1.start();
			mCursor2.start();
			mCursor1.mCursor.create(nullptr);
			mCursor2.mCursor.create(nullptr);
		} else if (mMesgState == MESSAGE_NoSaveOption) {
			mPressedA       = false;
			mSelectedOption = true;
			mAnimScreen[0]->setText('8374_00'); // "Continue"
			mAnimScreen[1]->setText('8375_00'); // "Start Over From Last Save"
			mAnimScreen[0]->open(0.0f);
			mAnimScreen[0]->blink(0.6f, 0.0f);
			mAnimScreen[1]->open(0.0f);
			mAnimScreen[1]->blink(0.0f, 0.0f);
			mCursor1.setPanes(mCursorEfxPane[0], mCursorEfxPane[2]);
			mCursor2.setPanes(mCursorEfxPane[1], mCursorEfxPane[3]);
			mCursor1.start();
			mCursor2.start();
			mCursor1.mCursor.create(nullptr);
			mCursor2.mCursor.create(nullptr);
		} else if (mMesgState == MESSAGE_Saving) {
			mAnimScreen[2]->setText('8372_00'); // "Saving... Do not touch the Memory Card in Slot A or the POWER Button."
			mAnimScreen[2]->open(0.0f);
		} else if (mMesgState == MESSAGE_SaveSuccess) {
			mAnimScreen[2]->setText('8373_00'); // "The game has been saved."
			mAnimScreen[2]->open(0.0f);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		}
		u32 count       = 0.8f / sys->mDeltaTime;
		mTextCounter    = count;
		mTextCounterMax = count;
		break;
	case MSG_Close:
		switch (mMesgState) {
		case MESSAGE_SaveOption:
		case MESSAGE_NoSaveOption:
			mAnimScreen[0]->close();
			mAnimScreen[1]->close();
			mCursor1.mCursor.fade();
			mCursor2.mCursor.fade();
			break;
		case MESSAGE_Saving:
		case MESSAGE_SaveSuccess:
			mAnimScreen[2]->close();
			break;
		default:
			JUT_PANICLINE(395, "ありえない！ありえない！たはあっ！\n"); // "Impossible! Impossible! Tahaha"
		}
		u32 count2      = 0.5f / sys->mDeltaTime;
		mTextCounter    = count2;
		mTextCounterMax = count2;
		break;
	}
}

/**
 * @note Address: 0x803DDF4C
 * @note Size: 0x368
 */
void TSaveMenu::updateMsg_()
{
	if (mTextCounter) {
		mTextCounter--;
	}
	switch (mStateID) {
	case MSG_Open:
		if (!mTextCounter) {
			startMsgState_(MSG_Idle);
		}
		break;
	case MSG_Idle: {
		switch (mMesgState) {
		default:
			break;
		case MESSAGE_SaveOption:
		case MESSAGE_NoSaveOption:
			int index1, index2;
			getMenuMinMax(index1, index2);
			if (mController->isMoveUp()) {
				if (!mSelectedOption) {
					mSelectedOption = true;
					mAnimScreen[index1]->blink(0.6f, 0.0f);
					mAnimScreen[index2]->blink(0.0f, 0.0f);
					mCursor1.mIsLeft = mSelectedOption;
					mCursor2.mIsLeft = mSelectedOption;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
				}
			} else if (mController->isMoveDown()) {
				if (mSelectedOption == true) {
					mSelectedOption = false;
					mAnimScreen[index1]->blink(0.0f, 0.0f);
					mAnimScreen[index2]->blink(0.6f, 0.0f);
					mCursor1.mIsLeft = mSelectedOption;
					mCursor2.mIsLeft = mSelectedOption;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
				}
			} else if (mController->getButtonDown() & Controller::PRESS_A) {
				mPressedA = true;
				if (mSelectedOption) {
					mSelectState = 0;
					mCursor1.start();
					mCursor2.start();
				} else {
					mSelectState = 1;
					mCursor1.stop();
					mCursor2.stop();
				}
				startMsgState_(MSG_Close);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
			} else if (mController->getButtonDown() & Controller::PRESS_B) {
				mSelectState = 2;
				mPressedA    = true;
				mCursor1.mCursor.kill();
				mCursor2.mCursor.kill();
				startMsgState_(MSG_Close);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			}
			break;
		case MESSAGE_Saving:
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ACCESS, 0);
		}

	} break;
	case MSG_Close:
		og::Screen::AnimText_Screen* screen;
		switch (mMesgState) {
		case MESSAGE_SaveOption:
			screen = mAnimScreen[0];
			break;
		case MESSAGE_NoSaveOption:
			screen = mAnimScreen[0];
			break;
		case MESSAGE_Saving:
			screen = mAnimScreen[2];
			break;
		case MESSAGE_SaveSuccess:
			screen = mAnimScreen[2];
			break;
		}
		if (screen->mIsUpdateSuccess && !mTextCounter) {
			startMsgState_(MSG_Kill);
		}
		break;
	}
}

} // namespace Screen
} // namespace ebi
