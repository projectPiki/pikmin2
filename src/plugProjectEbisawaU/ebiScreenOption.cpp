#include "ebi/Screen/TOption.h"
#include "ebi/E2DGraph.h"
#include "Game/Data.h"
#include "og/newScreen/ogUtil.h"
#include "P2Macros.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* name, ...) { OSReport("ebiScreenOption"); }

using namespace Game::CommonSaveData;

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803CADC8
 * @note Size: 0x100
 */
void TOptionParameter::loadRam()
{
	Mgr* mgr    = sys->mPlayData;
	mIsRubyFont = mgr->mIsRubyFont;
	mIsRumble   = mgr->mIsRumble;
	switch (mgr->mSoundMode) {
	case Mgr::SM_Mono:
		if (true) {
			mSoundMode = Mgr::SM_Mono;
		}
		break;
	case Mgr::SM_Stereo:
		mSoundMode = Mgr::SM_Stereo;
		break;
	case Mgr::SM_SurroundSound:
		mSoundMode = Mgr::SM_SurroundSound;
		break;
	}
	mBgmVolume    = (f32)mgr->mMusicVol / 255.0f * 10.0f;
	mSeVolume     = (f32)mgr->mSeVol / 255.0f * 10.0f;
	mUseDeflicker = mgr->mUseDeflicker;
}

/**
 * @note Address: 0x803CAEC8
 * @note Size: 0xFC
 */
void TOptionParameter::saveRam()
{
	Mgr* mgr         = sys->mPlayData;
	mgr->mIsRubyFont = mIsRubyFont;
	mgr->mIsRumble   = mIsRumble;
	switch (mSoundMode) {
	case Mgr::SM_Mono:
		mgr->setSoundModeMono();
		break;
	case Mgr::SM_Stereo:
		mgr->setSoundModeStereo();
		break;
	case Mgr::SM_SurroundSound:
		mgr->setSoundModeSurround();
		break;
	}
	mgr->setBgmVolume(mBgmVolume / 10.0f);
	mgr->setSeVolume(mSeVolume / 10.0f);
	mgr->setDeflicker(mUseDeflicker);
}

/**
 * @note Address: 0x803CAFC4
 * @note Size: 0x24
 */
void TOptionParameter::initParamForTest()
{
	mIsRubyFont   = false;
	mIsRumble     = false;
	mSoundMode    = Mgr::SM_Mono;
	mBgmVolume    = 1;
	mSeVolume     = 1;
	mUseDeflicker = false;
}

/**
 * @note Address: 0x803CAFE8
 * @note Size: 0x8D4
 */
void TOption::doSetArchive(JKRArchive* archive)
{
	sys->heapStatusStart("Screen::TOption::setArchive", nullptr);

	sys->heapStatusStart("Screen::TOption::set_blo_P2DScreen::Mgr", nullptr);
	mMainScreen = new P2DScreen::Mgr_tuning;
	mMainScreen->set("option.blo", 0x1100000, archive);
	sys->heapStatusEnd("Screen::TOption::set_blo_P2DScreen::Mgr");
	mPaneRumbleYes    = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tsin_y');
	mPaneRumbleNo     = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tsin_n');
	mPaneSoundType[0] = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tmon');
	mPaneSoundType[1] = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tste');
	mPaneSoundType[2] = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tsro');
	mPaneDeflickerYes = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tdef_y');
	mPaneDeflickerNo  = (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tdef_n');
	for (int i = 0; i < 10; i++) {
		mPaneBgmVolume[i] = E2DScreen_searchAssert(mMainScreen, 'Pbgmm00' + i);
		mPaneSfxVolume[i] = E2DScreen_searchAssert(mMainScreen, 'Psem00' + i);
	}
	mDeflickerScreen = E2DScreen_searchAssert(mMainScreen, 'NDEF');
	mOptionPanes[7]  = E2DScreen_searchAssert(mMainScreen, 'Tdefmg0');
	mOptionPanes[8]  = E2DScreen_searchAssert(mMainScreen, 'Tdefmg0s');
	mOptionPanes[0]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpfri');
	mOptionPanes[1]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpsin');
	mOptionPanes[2]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpsou');
	mOptionPanes[3]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpbgm');
	mOptionPanes[4]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpse');
	mOptionPanes[5]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpdef');
	mOptionPanes[6]  = E2DScreen_searchAssert(mMainScreen, 'Ngrpsav');
	mOptionPanes[9]  = E2DScreen_searchAssert(mMainScreen, 'Wselctw');

	mButtonPaneList[0] = E2DScreen_searchAssert(mMainScreen, 'Wsetfri');
	mButtonPaneList[1] = E2DScreen_searchAssert(mMainScreen, 'Wsetsin');
	mButtonPaneList[2] = E2DScreen_searchAssert(mMainScreen, 'Wsetsro');
	mButtonPaneList[3] = E2DScreen_searchAssert(mMainScreen, 'Wsetbgm');
	mButtonPaneList[4] = E2DScreen_searchAssert(mMainScreen, 'Wsetse');
	mButtonPaneList[5] = E2DScreen_searchAssert(mMainScreen, 'Wsetdef');
	mButtonPaneList[6] = E2DScreen_searchAssert(mMainScreen, 'Wsetsav');

	sys->heapStatusStart("Screen::TOption::new_ogCallBack", nullptr);
	E2DPane_setTreeCallBackMessage(mMainScreen, mMainScreen);
	sys->heapStatusEnd("Screen::TOption::new_ogCallBack");
	mMainScreen->addCallBackPane(mMainScreen, &mAnimOpenScreen);
	mMainScreen->addCallBackPane(mMainScreen, &mAnimCalc);
	mAnimOpenScreen.loadAnm("option.bck", archive, 20, 41);

	mMainScreen->addCallBack('Psin_yc', &mButtonPuruAnim[0]);
	mMainScreen->addCallBack('Psin_nc', &mButtonPuruAnim[1]);
	mMainScreen->addCallBack('Pmonc', &mButtonPuruAnim[2]);
	mMainScreen->addCallBack('Pstec', &mButtonPuruAnim[3]);
	mMainScreen->addCallBack('Psroc', &mButtonPuruAnim[4]);
	mMainScreen->addCallBack('Pdef_yc', &mButtonPuruAnim[5]);
	mMainScreen->addCallBack('Pdef_nc', &mButtonPuruAnim[6]);

	for (int i = 0; i < 10; i++) {
		mMainScreen->addCallBack('Pbgmm00' + i, &mBgmSelPuruAnimA[i]);
		mMainScreen->addCallBack('Pbgmm00c' + i * 0x100, &mBgmSelPuruAnimB[i]);
		mMainScreen->addCallBack('Psem00' + i, &mSfxSelPuruAnimA[i]);
		mMainScreen->addCallBack('Psem00c' + i * 0x100, &mSfxSelPuruAnimB[i]);
	}

	mFontColorActiveSel.setColors((J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tsin_y'));
	mFontColorInactiveSel.setColors((J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Thscolor'));

	mBlinkColor.set((J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tsin_y'),
	                (J2DTextBox*)E2DScreen_searchAssert(mMainScreen, 'Tscolor'));

	mBlinkColor.enable();
	mMainScreen->addCallBackPane(nullptr, &mBlinkColor);
	mMainScreen->addCallBackPane(nullptr, &mBlinkAlphaA);
	mBlinkAlphaA.enable();
	J2DPane* Nbotn = E2DScreen_searchAssert(mMainScreen, 'Nbotn');
	mMainScreen->addCallBackPane(Nbotn, &mBlinkAlphaB);
	E2DPane_setTreeInfluencedAlpha(Nbotn, true);
	mMainScreen->addCallBack('Wselctw', &mWindowCursor);
	E2DPane_setTreeShow(mMainScreen);
	E2DScreen_searchAssert(mMainScreen, 'Ngrpwset')->setAlpha(0);
	for (int i = 0; i < 7; i++) {
		E2DPane_setTreeInfluencedAlpha(mButtonPaneList[i], true);
		mButtonPaneList[i]->setAlpha(0);
	}
	E2DPane_setTreeHide(E2DScreen_searchAssert(mMainScreen, 'DATA'));
	E2DPane_setTreeInfluencedAlpha(mDeflickerScreen, true);
	mDeflickerScreen->setAlpha(0);

	sys->heapStatusEnd("Screen::TOption::setArchive");
}

/**
 * @note Address: 0x803CB8BC
 * @note Size: 0x134
 */
void TOption::doOpenScreen(ArgOpen*)
{
	JGeometry::TBox2f bounds;

	mAnimOpenScreen.play(60.0f * sys->mDeltaTime, J3DAA_UNKNOWN_0, true);
	setOptionParamToScreen_();

	u32 count       = (E2DFader::kFadeTime / sys->mDeltaTime);
	mCounterOpen    = count;
	mCounterOpenMax = count;

	mState             = 1;
	mCurrMainSelection = 1;
	mNextSelection     = 1;
	mOptionPanes[0]->hide();
	bounds = *mButtonPaneList[mCurrMainSelection]->getBounds();

	count                     = (0.1f / sys->mDeltaTime);
	mWindowCursor.mCounter    = count;
	mWindowCursor.mCounterMax = count;

	mWindowCursor.mBounds1    = bounds;
	mWindowCursor.mBounds2    = bounds;
	mWindowCursor.mIsEnabled  = true;
	mWindowCursor.mWindowPane = mOptionPanes[mCurrMainSelection];
	initScreen_();
}

/**
 * @note Address: 0x803CB9F0
 * @note Size: 0x4C
 */
void TOption::doCloseScreen(ArgClose*)
{
	u32 v1          = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounterOpen    = v1;
	mCounterOpenMax = v1;
	mState          = 2;
}

/**
 * @note Address: 0x803CBA3C
 * @note Size: 0x24
 */
void TOption::doInitWaitState() { mAnimOpenScreen.stop(); }

/**
 * @note Address: 0x803CBA60
 * @note Size: 0x84
 */
bool TOption::doUpdateStateOpen()
{
	if (mState != 0 && mCounterOpen != 0) {
		mCounterOpen--;
	}
	mMainScreen->update();

#if BUILDTARGET == USADEMO1 // demo
	mOptionPanes[0]->hide();
#endif

	if (mAnimOpenScreen.isFinish() && isClosed()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803CBAE4
 * @note Size: 0x9B4
 */
bool TOption::doUpdateStateWait()
{
	setOptionParamToScreen_();
	mMainScreen->update();
	if (mEnabled) {
		mInputMainSel.update();
		if (mInputMainSel.mSelectionChanged) {
			mNextSelection = mInputMainSel.mLastIndex;
			if (mCurrMainSelection == 0) {
				mCurrMainSelection = 1;
			}

			if (mNextSelection != mCurrMainSelection) {
				JGeometry::TBox2f bounds;
				bounds                 = *mButtonPaneList[mCurrMainSelection]->getBounds();
				mWindowCursor.mBounds1 = mWindowCursor.mBounds2;
				mWindowCursor.mBounds2 = bounds;
				mWindowCursor.mCounter = mWindowCursor.mCounterMax;
				mWindowCursor.mScaleMgr.up(0.1f, 30.0f, 0.6f, 0.0f);
				mWindowCursor.mWindowPane = mOptionPanes[mCurrMainSelection];
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			}

			if (mCurrMainSelection == 6) {
				mBlinkAlphaB.startToward0();
			} else if (mNextSelection == 6) {
				mBlinkAlphaB.disable();
			}
		}
	}
	mExitStatus = OptionState_NULL;

	if (mEnabled && !mWindowCursor.mCounter) {
		if (mController->getButtonDown() & Controller::PRESS_B) {
			mExitStatus = OptionState_Exit;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		}
		switch (mCurrMainSelection) {
		case 0: // language
			break;

		case 1: // Rumble
			if (mController->isMoveRight()) {
				if (mOptionParamA.mIsRumble == true) {
					mOptionParamA.mIsRumble = false;
					mButtonPuruAnim[1].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					mExitStatus = OptionState_SelRumble;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
				}
			} else if (mController->isMoveLeft()) {
				if (!mOptionParamA.mIsRumble) {
					mOptionParamA.mIsRumble = true;
					mButtonPuruAnim[0].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					mExitStatus = OptionState_SelRumble;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
				}
			}
			break;

		case 2: // Sound Mode
			mInputStereo.update();
			if (mInputStereo.mSelectionChanged) {
				mExitStatus = OptionState_SelSoundMode;
				switch (mOptionParamA.mSoundMode) {
				case 0:
					mButtonPuruAnim[2].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
					break;
				case 1:
					mButtonPuruAnim[3].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
					break;
				case 2:
					mButtonPuruAnim[4].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
					break;
				}
			}
			break;

		case 3: // music volume
			mInputBgmVol.update();
			if (mInputBgmVol.mSelectionChanged) {
				mExitStatus = OptionState_SelBgmVol;
				int prev    = mOptionParamA.mBgmVolume;
				if (prev != 0) {
					mBgmSelPuruAnimA[prev - 1].mScaleMgr.up(0.5f, 30.0f, 0.6f, 0.0f);
					mBgmSelPuruAnimB[mOptionParamA.mBgmVolume - 1].mScaleMgr.up(0.5f, 30.0f, 0.6f, 0.0f);
				}
				for (int i = 0; i < mOptionParamA.mBgmVolume - 1; i++) {
					mPaneBgmVolume[i]->setAlpha(255);
				}
				PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
			}
			break;

		case 4: // sound volume
			mInputSfxVol.update();
			if (mInputSfxVol.mSelectionChanged) {
				mExitStatus = OptionState_SelSfxVol;
				int prev    = mOptionParamA.mSeVolume;
				if (prev != 0) {
					mSfxSelPuruAnimA[prev - 1].mScaleMgr.up(0.5f, 30.0f, 0.6f, 0.0f);
					mSfxSelPuruAnimB[mOptionParamA.mSeVolume - 1].mScaleMgr.up(0.5f, 30.0f, 0.6f, 0.0f);
				}
				PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
			}
			break;

		case 5: // Deflicker
			if (mController->isMoveRight()) {
				if (mOptionParamA.mUseDeflicker == true) {
					mOptionParamA.mUseDeflicker = false;
					mButtonPuruAnim[6].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
					mExitStatus = OptionState_SelDeflicker;
				}
			} else if (mController->isMoveLeft()) {
				if (!mOptionParamA.mUseDeflicker) {
					mOptionParamA.mUseDeflicker = true;
					mButtonPuruAnim[5].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
					mExitStatus = OptionState_SelDeflicker;
				}
			}
			break;

		case 6: // Save Game
			if (mController->getButtonDown() & Controller::PRESS_A) {
				mExitStatus = OptionState_SelSaveGame;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
			}
			break;
		}
	}

	u64 mesg;
	if (mOptionParamA.mUseDeflicker == true) {
		mesg = '8335_00'; // When On
	} else {
		mesg = '8336_00'; // When Off
	}

	mOptionPanes[7]->setMsgID(mesg);
	mOptionPanes[8]->setMsgID(mesg);
	if (mCurrMainSelection == 5) {

		for (int i = 0; i < 7; i++) {
			if (i != 5 && i != 6) {
				mOptionPanes[i]->hide();
			}
		}
		f32 calc;
		if (mWindowCursor.mCounterMax) {
			calc = (f32)mWindowCursor.mCounter / (f32)mWindowCursor.mCounterMax;
		} else {
			calc = 0.0f;
		}
		u8 alpha = (1.0f - calc) * 255.0f;
		mDeflickerScreen->setAlpha(alpha);
	} else if (mNextSelection == 5) {

		for (int i = 0; i < 7; i++) {
			if (i != 5) {
				mOptionPanes[i]->show();
			}
		}
		f32 calc;
		if (mWindowCursor.mCounterMax) {
			calc = (f32)mWindowCursor.mCounter / (f32)mWindowCursor.mCounterMax;
		} else {
			calc = 0.0f;
		}
		u8 alpha = calc * 255.0f;
		mDeflickerScreen->setAlpha(alpha);
	} else {
		mDeflickerScreen->setAlpha(0);
	}

	mPaneRumbleYes->updateScale(mButtonPuruAnim[0].mScale);
	mPaneRumbleNo->updateScale(mButtonPuruAnim[1].mScale);
	mPaneSoundType[0]->updateScale(mButtonPuruAnim[2].mScale);
	mPaneSoundType[1]->updateScale(mButtonPuruAnim[3].mScale);
	mPaneSoundType[2]->updateScale(mButtonPuruAnim[4].mScale);
	mPaneDeflickerYes->updateScale(mButtonPuruAnim[5].mScale);
	mPaneDeflickerNo->updateScale(mButtonPuruAnim[6].mScale);

#if BUILDTARGET == USADEMO1 // demo
	mOptionPanes[0]->hide();
#endif

	return false;
}

/**
 * @note Address: 0x803CC498
 * @note Size: 0x74
 */
bool TOption::doUpdateStateClose()
{
	mMainScreen->update();
	if (mState != 0 && mCounterOpen != 0) {
		mCounterOpen--;
	}

	if (isClosed()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803CC50C
 * @note Size: 0x244
 */
void TOption::doDraw()
{
	J2DPerspGraph* graf;
	Graphics* gfx = sys->mGfx;
	graf          = &gfx->mPerspGraph;
	graf->setPort();
	mMainScreen->draw(*gfx, *graf);

	if (mState) {
		f32 factor;
		graf = &sys->mGfx->mPerspGraph;
		graf->setPort();
		JUtility::TColor color(mColor);
		switch (mState) {
		case 1:
			if (mCounterOpenMax) {
				factor = (f32)mCounterOpen / (f32)mCounterOpenMax;
			} else {
				factor = 0.0f;
			}
			color.a = mAlpha * factor;
			break;
		case 2:
			if (mCounterOpenMax) {
				factor = (f32)mCounterOpen / (f32)mCounterOpenMax;
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
}

/**
 * @note Address: 0x803CC750
 * @note Size: 0xB0
 */
void TOption::loadResource()
{
	char resName[PATH_MAX];
	sys->heapStatusStart("TOption::loadResource", nullptr);
	og::newScreen::makeLanguageResName(resName, "option_us.szs");
	JKRArchive* archive = JKRMountArchive(resName, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#if BUILDTARGET == USADEMO1 // demo
	P2ASSERTLINE(768, (archive != nullptr));
#else
	P2ASSERTLINE(757, (archive != nullptr));
#endif
	sys->heapStatusEnd("TOption::loadResource");
	setArchive(archive);
}

/**
 * @note Address: 0x803CC800
 * @note Size: 0xBC
 */
void TOption::setController(Controller* controller)
{
	mController = controller;
	mInputBgmVol.init(mController, 0, 10, &mOptionParamA.mBgmVolume, EUTPadInterface_countNum::MODE_RIGHTLEFT, 0.66f, 0.15f);
	mInputSfxVol.init(mController, 0, 10, &mOptionParamA.mSeVolume, EUTPadInterface_countNum::MODE_RIGHTLEFT, 0.66f, 0.15f);
	mInputStereo.init(mController, 0, 2, &mOptionParamA.mSoundMode, EUTPadInterface_countNum::MODE_RIGHTLEFT, 0.66f, 0.15f);
	mInputMainSel.init(mController, 0, 6, &mCurrMainSelection, EUTPadInterface_countNum::MODE_DOWNUP, 0.66f, 0.15f);
}

/**
 * @note Address: 0x803CC8BC
 * @note Size: 0x174
 */
void TOption::initScreen_()
{
	mBlinkColor.mPane  = nullptr;
	mBlinkAlphaA.mPane = nullptr;

	mBlinkAlphaB.mIsEnabled = false;
	J2DPane* pane           = mBlinkAlphaB.mPane;
	if (pane) {
		pane->setAlpha(0);
	}

	for (int i = 0; i < mOptionParamA.mBgmVolume; i++) {
		mPaneBgmVolume[i]->setAlpha(255);
	}

	for (int i = 0; i < mOptionParamA.mSeVolume; i++) {
		mPaneSfxVolume[i]->setAlpha(255);
	}

	for (int i = 0; i < 7; i++) {
		if (i != 5) {
			mOptionPanes[i]->show();
		}
	}

	mDeflickerScreen->setAlpha(0);
}

/**
 * @note Address: 0x803CCA30
 * @note Size: 0xC9C
 */
void TOption::setOptionParamToScreen_()
{
	if (mOptionParamA.mIsRumble) {
		mFontColorActiveSel.applyColorsToPane(mPaneRumbleYes);
		mFontColorInactiveSel.applyColorsToPane(mPaneRumbleNo);
	} else {
		mFontColorInactiveSel.applyColorsToPane(mPaneRumbleYes);
		mFontColorActiveSel.applyColorsToPane(mPaneRumbleNo);
	}

	switch (mOptionParamA.mSoundMode) {
	case 0:
		mFontColorActiveSel.applyColorsToPane(mPaneSoundType[0]);
		mFontColorInactiveSel.applyColorsToPane(mPaneSoundType[1]);
		mFontColorInactiveSel.applyColorsToPane(mPaneSoundType[2]);
		break;
	case 1:
		mFontColorInactiveSel.applyColorsToPane(mPaneSoundType[0]);
		mFontColorActiveSel.applyColorsToPane(mPaneSoundType[1]);
		mFontColorInactiveSel.applyColorsToPane(mPaneSoundType[2]);
		break;
	case 2:
		mFontColorInactiveSel.applyColorsToPane(mPaneSoundType[0]);
		mFontColorInactiveSel.applyColorsToPane(mPaneSoundType[1]);
		mFontColorActiveSel.applyColorsToPane(mPaneSoundType[2]);
		break;
	}

	for (int i = 0; i < 10; i++) {
		if (i < mOptionParamA.mBgmVolume) {
			mPaneBgmVolume[i]->show();
			mPaneBgmVolume[i]->setAlpha(255);
		} else {
			mPaneBgmVolume[i]->hide();
		}
	}
	for (int i = 0; i < 10; i++) {
		if (i < mOptionParamA.mSeVolume) {
			mPaneSfxVolume[i]->show();
			mPaneSfxVolume[i]->setAlpha(255);
		} else {
			mPaneSfxVolume[i]->hide();
		}
	}

	if (mOptionParamA.mUseDeflicker) {
		mFontColorActiveSel.applyColorsToPane(mPaneDeflickerYes);
		mFontColorInactiveSel.applyColorsToPane(mPaneDeflickerNo);
	} else {
		mFontColorInactiveSel.applyColorsToPane(mPaneDeflickerYes);
		mFontColorActiveSel.applyColorsToPane(mPaneDeflickerNo);
	}

	switch (mCurrMainSelection) {
	case 0:
		break;
	case 1:
		if (mOptionParamA.mIsRumble) {
			mBlinkColor.mPane = mPaneRumbleYes;
		} else {
			mBlinkColor.mPane = mPaneRumbleNo;
		}
		mBlinkAlphaA.mPane = nullptr;
		break;
	case 2:
		mBlinkColor.mPane  = mPaneSoundType[mOptionParamA.mSoundMode];
		mBlinkAlphaA.mPane = nullptr;
		break;
	case 3:
		mBlinkColor.mPane = nullptr;
		if (mOptionParamA.mBgmVolume == 0) {
			mBlinkAlphaA.mPane = nullptr;
		} else {
			mBlinkAlphaA.mPane = mPaneBgmVolume[mOptionParamA.mBgmVolume - 1];
		}
		break;
	case 4:
		mBlinkColor.mPane = nullptr;
		if (mOptionParamA.mSeVolume == 0) {
			mBlinkAlphaA.mPane = nullptr;
		} else {
			mBlinkAlphaA.mPane = mPaneSfxVolume[mOptionParamA.mSeVolume - 1];
		}
		break;
	case 5:
		if (mOptionParamA.mUseDeflicker) {
			mBlinkColor.mPane = mPaneDeflickerYes;
		} else {
			mBlinkColor.mPane = mPaneDeflickerNo;
		}
		mBlinkAlphaA.mPane = nullptr;
		break;
	case 6:
		mBlinkColor.mPane  = nullptr;
		mBlinkAlphaA.mPane = nullptr;
		break;
	default:
		mBlinkColor.mPane  = nullptr;
		mBlinkAlphaA.mPane = nullptr;
	}
}

} // namespace Screen
} // namespace ebi
