#include "ebi/Omake.h"
#include "ebi/E2DCallBack.h"
#include "ebi/E2DGraph.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"

static const char className[] = "ebiScreenOmake";

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803ED2A8
 * @note Size: 0x274
 */
TOmake::TOmake()
    : mController(nullptr)
    , mColorBase(0, 0, 0, 255)
    , mAlpha(255)
    , mState(0)
    , mCounter(0)
    , mCounterMax(0)
    , mScreenMain(nullptr)
{
}

/**
 * @note Address: 0x803ED51C
 * @note Size: 0x5F0
 */
void TOmake::doSetArchive(JKRArchive* arc)
{
	sys->heapStatusStart("Screen_newScreen_of_TOmake", nullptr);
	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("omake.blo", 0x1100000, arc);
	sys->heapStatusEnd("Screen_newScreen_of_TOmake");

	mPaneWindow  = E2DScreen_searchAssert(mScreenMain, 'Nwin0');
	mPaneTitle   = E2DScreen_searchAssert(mScreenMain, 'Ntitl0');
	mPaneAButton = E2DScreen_searchAssert(mScreenMain, 'Nabtn');
	mPaneBButton = E2DScreen_searchAssert(mScreenMain, 'Nbbtn');

	E2DPane_setTreeInfluencedAlpha(mPaneTitle, true);
	E2DPane_setTreeInfluencedAlpha(mPaneAButton, true);
	E2DPane_setTreeInfluencedAlpha(mPaneBButton, true);

	for (int i = 0; i < 7; i++) {
		mPaneList1[i]          = E2DScreen_searchAssert(mScreenMain, i + 'Nn00');
		mPaneList2[i]          = E2DScreen_searchAssert(mScreenMain, i + 'Ww00');
		mPaneListMesg[i]       = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, i + 'Tt00'));
		mPaneListMesgShadow[i] = E2DScreen_searchAssert(mScreenMain, i + 'Tts00');
	}

	mPaneSelect = E2DScreen_searchAssert(mScreenMain, 'Wselctw');

	for (int i = 0; i < 7; i++) {
		mMesgTags[i] = mPaneListMesg[i]->mMessageID;
	}

	E2DScreen_searchAssert(mScreenMain, 'DATA')->hide();

	sys->heapStatusStart("Screen_setCallBackMessage_of_TOmake", nullptr);
	E2DPane_setTreeCallBackMessage(mScreenMain, mScreenMain);
	sys->heapStatusEnd("Screen_setCallBackMessage_of_TOmake");

	mScreenMain->addCallBackPane(mScreenMain, &mAnims1);
	mScreenMain->addCallBackPane(mScreenMain, &mAnims2);
	mScreenMain->addCallBackPane(mScreenMain, &mAnims3);

	mAnims1.loadAnm("omake.bck", arc, 21, 40);
	mAnims2.loadAnm("omake.bck", arc, 0, 20);
	mScreenMain->addCallBack('Wselctw', &mCursor);

	for (int i = 0; i < 7; i++) {

		// J2DTextBox* pane1 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Tscolor'));
		// J2DTextBox* pane2 = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Tt00'));
		mFonts[i].set(static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Tt00')),
		              static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Tscolor')));
		mScreenMain->addCallBackPane(mPaneListMesg[i], &mFonts[i]);
	}

	mFontColorSelect.setColors(static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Tscolor')));
	mFontColorDefault.setColors(static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Tt00')));
	mFontColorInactive.setColors(static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenMain, 'Thscolor')));
}

/**
 * @note Address: 0x803EDB0C
 * @note Size: 0x5F0
 */
void TOmake::doOpenScreen(ArgOpen* arg)
{
	P2ASSERTLINE(109, arg);

	ArgOpenOmake* oarg = static_cast<ArgOpenOmake*>(arg);
	u8 flag1           = oarg->mIsDebtComplete;
	u8 flag2           = oarg->mIsAllTreasures;
	u32 flag3          = oarg->mIsLouieDarkSecret;

	// enable all options by default
	for (int i = 0; i < 7; i++) {
		mFonts[i].setPaneColors(0);
		mPaneListMesg[i]->setMsgID(mMesgTags[i]);
		mPaneListMesgShadow[i]->setMsgID(mMesgTags[i]);
	}

	// disable both post-debt cutscenes if not viewable
	if (!flag1) {
		for (int i = 1; i <= 3; i++) {
			// this inline needs adjustment for stack order
			setMsgColor(mPaneListMesg[i]);

			mPaneListMesg[i]->setMsgID('4844_00');
			mPaneListMesgShadow[i]->setMsgID('4844_00');
		}
	}

	// disable all treasures cutscene if not reached
	if (!flag2) {
		setMsgColor(mPaneListMesg[4]);
		mPaneListMesg[4]->setMsgID('4844_00');
		mPaneListMesgShadow[4]->setMsgID('4844_00');
	}

	// disable louies dark secret if not reached
	if (!flag3) {
		setMsgColor(mPaneListMesg[5]);

		mPaneListMesg[5]->setMsgID('4844_00');
		mPaneListMesgShadow[5]->setMsgID('4844_00');
	}

	// disable e-reader if not on JP version
#if defined(VERSION_PAL)
	if (sys->getLanguage() != System::LANG_Japanese) {
#else
	if (sys->mRegion != System::LANG_Japanese) {
#endif
		setMsgColor(mPaneListMesg[6]);

		mPaneListMesg[6]->setMsgID('4844_00');       // "?"
		mPaneListMesgShadow[6]->setMsgID('4844_00'); // "?"
		mPaneList1[6]->hide();
	}

	mAnims1.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	u32 count   = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounter    = count;
	mCounterMax = count;
	mState      = 1;
	showPanes_();
	mPaneTitle->setAlpha(255);
	mPaneAButton->setAlpha(255);
	mPaneBButton->setAlpha(255);

	mCurrSel = 0;

	JGeometry::TBox2f bounds;
	bounds = *mPaneList2[mCurrSel]->getBounds();

	count               = (0.1f / sys->mDeltaTime);
	mCursor.mCounter    = count;
	mCursor.mCounterMax = count;

	mCursor.mBounds1    = bounds;
	mCursor.mBounds2    = bounds;
	mCursor.mIsEnabled  = true;
	mCursor.mWindowPane = mPaneList1[mCurrSel];
}

/**
 * @note Address: 0x803EE0FC
 * @note Size: 0x4C
 */
void TOmake::doCloseScreen(ArgClose* arg)
{
	u32 count   = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounter    = count;
	mCounterMax = count;
	mState      = 2;
}

/**
 * @note Address: 0x803EE148
 * @note Size: 0x48
 */
void TOmake::doInitWaitState()
{
	E2DCallBack_BlinkFontColor* font = &mFonts[mCurrSel];
	font->mIsEnabled                 = true;
	font->mSpeed                     = sys->mDeltaTime * 3.3333333f;
	font->mColor1Weight              = 0.0f;
	font->mIsTowardColor1            = true;
	font->_49                        = false;
	mState2                          = 0;
}

/**
 * @note Address: 0x803EE190
 * @note Size: 0x84
 */
bool TOmake::doUpdateStateOpen()
{
	mScreenMain->update();
	if (mState && mCounter) {
		mCounter--;
	}

	if (mAnims1.isFinish() && !mCounter) {
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803EE214
 * @note Size: 0x484
 */
bool TOmake::doUpdateStateWait()
{
	mScreenMain->update();
	if (mState != 0 && mCounter) {
		mCounter--;
	}

	switch (mState2) {
	case 0:
		mInput.update();
		if (mInput.mSelectionChanged) {

			int id = mInput.mLastIndex;
			if (id < mCurrSel) {
				while (mPaneListMesg[mCurrSel]->getUserInfo() == '4844_00') {
					mCurrSel++;
					if (mCurrSel >= 7) {
						mCurrSel = id;
						break;
					}
				}
			} else {
				while (mPaneListMesg[mCurrSel]->getUserInfo() == '4844_00') {
					mCurrSel--;
					if (mCurrSel < 0) {
						mCurrSel = id;
						break;
					}
				}
			}

			if (mCurrSel != id) {
				JGeometry::TBox2f bounds;
				bounds           = *mPaneList2[mCurrSel]->getBounds();
				mCursor.mBounds1 = mCursor.mBounds2;
				mCursor.mBounds2 = bounds;
				mCursor.mCounter = mCursor.mCounterMax;
				mCursor.mScaleMgr.up(0.1f, 30.0f, 0.6f, 0.0f);
				mCursor.mWindowPane = mPaneList1[mCurrSel];
				mFonts[id].disable();
				mFonts[mCurrSel].enable();
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			}
		}
		if (!mCursor.mCounter) {
			u32 input = mController->getButtonDown();
			if (input & Controller::PRESS_A) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				switch (mCurrSel) {
				case 6:
					mAnims2.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
					mState2 = 2;
					break;
				default:
					u32 count   = ebi::E2DFader::kFadeTime / sys->mDeltaTime;
					mCounter    = count;
					mCounterMax = count;
					mState      = 2;
					mState2     = 5;
					break;
				}
			} else if (input & Controller::PRESS_B) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
				return true;
			}
		}
		break;
	case 2:
		f32 calc  = 1.0f - mAnims2.getPlayFinRate();
		f32 alpha = calc * 255.0f;
		mPaneTitle->setAlpha(alpha);
		mPaneAButton->setAlpha(alpha);
		mPaneBButton->setAlpha(alpha);
		if (mAnims2.isFinish()) {
			hidePanes_();
			mState2 = 1;
		}
		break;
	case 3:
		calc  = mAnims1.getPlayFinRate();
		alpha = calc * 255.0f;
		mPaneTitle->setAlpha(alpha);
		mPaneAButton->setAlpha(alpha);
		mPaneBButton->setAlpha(alpha);
		if (mAnims1.isFinish()) {
			mState2 = 0;
		}
		break;
	case 5:
		if (mCounter == 0) {
			mState2 = 4;
		}
		break;
	case 6:
		if (mCounter == 0) {
			mState2 = 0;
		}
		break;
	}
	return false;
}

/**
 * @note Address: 0x803EE698
 * @note Size: 0x74
 */
bool TOmake::doUpdateStateClose()
{
	mScreenMain->update();
	if (mState && mCounter) {
		mCounter--;
	}

	if (isFadeoutFinished())
		return true;
	else
		return false;
}

/**
 * @note Address: 0x803EE70C
 * @note Size: 0x244
 */
void TOmake::doDraw()
{
	Graphics* gfx       = sys->getGfx();
	J2DPerspGraph* graf = sys->getGfx()->getPerspGraph();
	graf->setPort();
	mScreenMain->draw(*gfx, *graf);

	if (!mState) {
		return;
	}

	f32 factor;
	graf = sys->getGfx()->getPerspGraph();
	graf->setPort();
	JUtility::TColor color(mColorBase);
	switch (mState) {
	case 1:
		if (mCounterMax) {
			factor = mCounter / (f32)mCounterMax;
		} else {
			factor = 0.0f;
		}
		color.a = mAlpha * factor;
		break;
	case 2:
		if (mCounterMax) {
			factor = mCounter / (f32)mCounterMax;
		} else {
			factor = 0.0f;
		}
		color.a = mAlpha * (1.0f - factor);
		break;
	}
	graf->setColor(color);
	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
}

/**
 * @note Address: 0x803EE950
 * @note Size: 0x44
 */
void TOmake::setController(Controller* in)
{
	mController = in;
	mInput.init(in, 0, 6, (s32*)&mCurrSel, EUTPadInterface_countNum::MODE_DOWNUP, 0.66f, 0.15f);
}

/**
 * @note Address: 0x803EE994
 * @note Size: 0x64
 */
void TOmake::showPanes_()
{
	mPaneWindow->show();
	mPaneTitle->show();
	mPaneAButton->show();
	mPaneBButton->show();
	for (int i = 0; i < 7; i++) {
		mPaneList2[i]->hide();
	}
}

/**
 * @note Address: 0x803EE9F8
 * @note Size: 0x28
 */
void TOmake::hidePanes_()
{
	mPaneWindow->hide();
	mPaneTitle->hide();
	mPaneAButton->hide();
	mPaneBButton->hide();
}

/**
 * @note Address: 0x803EEA20
 * @note Size: 0x54
 */
void TOmake::openFromMovie_()
{
	u32 count   = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounter    = count;
	mCounterMax = count;
	mState      = 1;
	mState2     = 6;
}

/**
 * @note Address: 0x803EEA74
 * @note Size: 0xB0
 */
void TOmake::openFromCardE_()
{
	showPanes_();
	mAnims1.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mState2 = 3;
}

} // namespace Screen
} // namespace ebi
