#include "ebi/Screen/TOption.h"
#include "ebi/E2DGraph.h"
#include "Game/Data.h"
#include "og/newScreen/ogUtil.h"
#include "P2Macros.h"
#include "System.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("ebiScreenOption"); }

using namespace Game::CommonSaveData;

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803CADC8
 * Size:	000100
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

/*
 * --INFO--
 * Address:	803CAEC8
 * Size:	0000FC
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

/*
 * --INFO--
 * Address:	803CAFC4
 * Size:	000024
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

/*
 * --INFO--
 * Address:	803CAFE8
 * Size:	0008D4
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
	_180[7]          = E2DScreen_searchAssert(mMainScreen, 'Tdefmg0');
	_180[8]          = E2DScreen_searchAssert(mMainScreen, 'Tdefmg0s');
	_180[0]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpfri');
	_180[1]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpsin');
	_180[2]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpsou');
	_180[3]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpbgm');
	_180[4]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpse');
	_180[5]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpdef');
	_180[6]          = E2DScreen_searchAssert(mMainScreen, 'Ngrpsav');
	_180[9]          = E2DScreen_searchAssert(mMainScreen, 'Wselctw');

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

/*
 * --INFO--
 * Address:	803CB8BC
 * Size:	000134
 */
void TOption::doOpenScreen(ArgOpen*)
{
	mAnimOpenScreen.play(60.0f * sys->mDeltaTime, J3DAA_UNKNOWN_0, true);
	setOptionParamToScreen_();

	u32 count       = (E2DFader::kFadeTime / sys->mDeltaTime);
	mCounterOpen    = count;
	mCounterOpenMax = count;

	mState             = 1;
	mCurrMainSelection = 1;
	mNextSelection     = 1;
	_180[0]->hide();
	JGeometry::TBox2f bounds = *mButtonPaneList[mCurrMainSelection]->getBounds();

	count                     = (0.1f / sys->mDeltaTime);
	mWindowCursor.mCounter    = count;
	mWindowCursor.mCounterMax = count;

	mWindowCursor.mBounds1    = bounds;
	mWindowCursor.mBounds2    = bounds;
	mWindowCursor.mIsEnabled  = true;
	mWindowCursor.mWindowPane = _180[mCurrMainSelection];
	initScreen_();
	/*
stwu     r1, -0x30(r1)
mflr     r0
lfs      f1, lbl_8051FA20@sda21(r2)
li       r5, 1
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
addi     r3, r31, 0x1e4
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
li       r4, 0
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
mr       r3, r31
bl       setOptionParamToScreen___Q33ebi6Screen7TOptionFv
lwz      r3, sys@sda21(r13)
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0xfc(r31)
li       r4, 1
li       r0, 0
stw      r3, 0x100(r31)
stw      r4, 0xf8(r31)
stw      r4, 0x104(r31)
stw      r4, 0x108(r31)
lwz      r3, 0x180(r31)
stb      r0, 0xb0(r3)
lwz      r0, 0x104(r31)
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r3, 0x1a8(r3)
bl       getBounds__7J2DPaneFv
lwz      r4, sys@sda21(r13)
lwz      r6, 0(r3)
lfs      f1, lbl_8051FA24@sda21(r2)
lfs      f0, 0x54(r4)
lwz      r5, 4(r3)
fdivs    f1, f1, f0
lwz      r4, 8(r3)
lwz      r0, 0xc(r3)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r4, 0x18(r1)
stw      r0, 0x1c(r1)
bl       __cvt_fp2unsigned
stw      r3, 0xeec(r31)
li       r0, 1
lwz      r4, 0x18(r1)
stw      r3, 0xef0(r31)
mr       r3, r31
lwz      r7, 0x10(r1)
lwz      r6, 0x14(r1)
stw      r7, 0xecc(r31)
lwz      r5, 0x1c(r1)
stw      r6, 0xed0(r31)
stw      r4, 0xed4(r31)
stw      r5, 0xed8(r31)
stw      r7, 0xedc(r31)
stw      r6, 0xee0(r31)
stw      r4, 0xee4(r31)
stw      r5, 0xee8(r31)
stb      r0, 0xec8(r31)
lwz      r0, 0x104(r31)
stw      r4, 8(r1)
slwi     r0, r0, 2
add      r4, r31, r0
stw      r5, 0xc(r1)
lwz      r0, 0x180(r4)
stw      r0, 0xf14(r31)
bl       initScreen___Q33ebi6Screen7TOptionFv
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803CB9F0
 * Size:	00004C
 */
void TOption::doCloseScreen(ArgClose*)
{
	u32 v1          = E2DFader::kFadeTime / sys->mDeltaTime;
	mCounterOpen    = v1;
	mCounterOpenMax = v1;
	mState          = 2;

	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0xfc(r31)
li       r0, 2
stw      r3, 0x100(r31)
stw      r0, 0xf8(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CBA3C
 * Size:	000024
 */
void TOption::doInitWaitState() { mAnimOpenScreen.stop(); }

/*
 * --INFO--
 * Address:	803CBA60
 * Size:	000084
 */
bool TOption::doUpdateStateOpen()
{
	if (mState != 0 && mCounterOpen != 0) {
		mCounterOpen--;
	}
	mMainScreen->update();
	if (mAnimOpenScreen.isFinish() && mCounterOpen == 0) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803CBAE4
 * Size:	0009B4
 */
bool TOption::doUpdateStateWait()
{
	setOptionParamToScreen_();
	mMainScreen->update();
	if (mEnabled) {
		mInputMainSel.update();
		if (mInputMainSel._0D) {
			mNextSelection = mInputMainSel.mLastIndex;
			if (mCurrMainSelection == 0) {
				mCurrMainSelection = 1;
			}

			if (mNextSelection != mCurrMainSelection) {
				JGeometry::TBox2f bounds = *mButtonPaneList[mCurrMainSelection]->getBounds();
				mWindowCursor.mBounds1   = bounds;
				mWindowCursor.mBounds2   = bounds;
				mWindowCursor.mCounter   = mWindowCursor.mCounterMax;
				mWindowCursor.mScaleMgr.up(0.1f, 30.0f, 0.6f, 0.0f);
				mWindowCursor.mWindowPane = _180[mCurrMainSelection];
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			}

			if (mCurrMainSelection == 6) {
				mBlinkAlphaB.startToward0();
			} else if (mNextSelection == 6) {
				mBlinkAlphaB.disable();
			}
		}
	}
	mExitStatus = 0;

	if (mEnabled && !mWindowCursor.mCounter) {
		if (mController->getButtonDown() & Controller::PRESS_B) {
			mExitStatus = 9;
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
					mExitStatus = 2;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
				}
			} else if (mController->isMoveLeft()) {
				if (!mOptionParamA.mIsRumble) {
					mOptionParamA.mIsRumble = true;
					mButtonPuruAnim[0].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					mExitStatus = 2;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
				}
			}
			break;

		case 2: // Sound Mode
			mInputStereo.update();
			if (mInputStereo._0D) {
				mExitStatus = 3;
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
			if (mInputBgmVol._0D) {
				mExitStatus = 4;
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
			if (mInputSfxVol._0D) {
				mExitStatus = 5;
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
					mExitStatus = 6;
				}
			} else if (mController->isMoveLeft()) {
				if (!mOptionParamA.mUseDeflicker) {
					mOptionParamA.mUseDeflicker = true;
					mButtonPuruAnim[5].mScaleMgr.up(0.2f, 30.0f, 0.6f, 0.0f);
					PSSystem::spSysIF->playSystemSe(PSSE_SY_SOUND_CONFIG, 0);
					mExitStatus = 6;
				}
			}
			break;

		case 6: // Save Game
			if (mController->getButtonDown() & Controller::PRESS_A) {
				mExitStatus = 7;
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

	_180[7]->setMsgID(mesg);
	_180[8]->setMsgID(mesg);
	if (mCurrMainSelection == 5) {
		_180[0]->hide();
		_180[1]->hide();
		_180[2]->hide();
		_180[3]->hide();
		_180[4]->hide();
		f32 calc;
		if (mWindowCursor.mCounterMax) {
			calc = (f32)mWindowCursor.mCounter / (f32)mWindowCursor.mCounterMax;
		} else {
			calc = 0.0f;
		}
		u8 alpha = (1.0f - calc) * 255.0f;
		mDeflickerScreen->setAlpha(alpha);
	} else if (mNextSelection == 5) {
		_180[0]->show();
		_180[1]->show();
		_180[2]->show();
		_180[3]->show();
		_180[4]->show();
		_180[6]->show();
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
	return false;
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
mr       r31, r3
stw      r30, 0x38(r1)
stw      r29, 0x34(r1)
bl       setOptionParamToScreen___Q33ebi6Screen7TOptionFv
lwz      r3, 0x10c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lbz      r0, 0x10(r31)
cmplwi   r0, 0
beq      lbl_803CBC64
addi     r3, r31, 0x98
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0xa5(r31)
cmplwi   r0, 0
beq      lbl_803CBC64
lwz      r0, 0xb4(r31)
stw      r0, 0x108(r31)
lwz      r0, 0x104(r31)
cmpwi    r0, 0
bne      lbl_803CBB54
li       r0, 1
stw      r0, 0x104(r31)

lbl_803CBB54:
lwz      r0, 0x108(r31)
lwz      r3, 0x104(r31)
cmpw     r0, r3
beq      lbl_803CBC08
slwi     r0, r3, 2
add      r3, r31, r0
lwz      r3, 0x1a8(r3)
bl       getBounds__7J2DPaneFv
lwz      r8, 0(r3)
lwz      r7, 4(r3)
lwz      r6, 8(r3)
lwz      r5, 0xc(r3)
addi     r3, r31, 0xef4
lwz      r4, 0xedc(r31)
lwz      r0, 0xee0(r31)
stw      r8, 8(r1)
lfs      f1, lbl_8051FA24@sda21(r2)
stw      r4, 0xecc(r31)
lfs      f2, lbl_8051FA28@sda21(r2)
stw      r0, 0xed0(r31)
lfs      f3, lbl_8051FA2C@sda21(r2)
lwz      r4, 0xee4(r31)
lwz      r0, 0xee8(r31)
stw      r7, 0xc(r1)
lfs      f4, lbl_8051FA1C@sda21(r2)
stw      r4, 0xed4(r31)
stw      r0, 0xed8(r31)
stw      r8, 0xedc(r31)
stw      r7, 0xee0(r31)
stw      r6, 0xee4(r31)
stw      r5, 0xee8(r31)
lwz      r0, 0xef0(r31)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r0, 0xeec(r31)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r0, 0x104(r31)
li       r4, 0x1802
li       r5, 0
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r0, 0x180(r3)
stw      r0, 0xf14(r31)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803CBC08:
lwz      r0, 0x104(r31)
cmpwi    r0, 6
bne      lbl_803CBC48
li       r4, 1
lfs      f2, lbl_8051FA30@sda21(r2)
stb      r4, 0x2d8(r31)
li       r0, 0
lfs      f0, lbl_8051FA1C@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x2e0(r31)
stfs     f0, 0x2dc(r31)
stb      r4, 0x2e4(r31)
stb      r0, 0x2e5(r31)
b        lbl_803CBC64

lbl_803CBC48:
lwz      r0, 0x108(r31)
cmpwi    r0, 6
bne      lbl_803CBC64
li       r3, 0
li       r0, 1
stb      r3, 0x2e4(r31)
stb      r0, 0x2e5(r31)

lbl_803CBC64:
li       r0, 0
stw      r0, 0xc4(r31)
lbz      r0, 0x10(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
lwz      r0, 0xeec(r31)
cmplwi   r0, 0
bne      lbl_803CC0F4
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_803CBCAC
li       r0, 9
li       r4, 0x1801
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803CBCAC:
lwz      r0, 0x104(r31)
cmplwi   r0, 6
bgt      lbl_803CC0F4
lis      r3, lbl_804E8750@ha
slwi     r0, r0, 2
addi     r3, r3, lbl_804E8750@l
lwzx     r0, r3, r0
mtctr    r0
bctr
.global  lbl_803CBCD0

lbl_803CBCD0:
lwz      r3, 0xc(r31)
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1e, 0x1e
bne      lbl_803CBCF0
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA34@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803CBCF8

lbl_803CBCF0:
li       r0, 1
b        lbl_803CBCFC

lbl_803CBCF8:
li       r0, 0

lbl_803CBCFC:
clrlwi.  r0, r0, 0x18
beq      lbl_803CBD4C
lbz      r0, 0xc9(r31)
cmplwi   r0, 1
bne      lbl_803CC0F4
li       r0, 0
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xc9(r31)
addi     r3, r31, 0x34c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
li       r0, 2
li       r4, 0x180e
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4

lbl_803CBD4C:
lwz      r0, 0x18(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803CBD68
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA3C@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803CBD70

lbl_803CBD68:
li       r0, 1
b        lbl_803CBD74

lbl_803CBD70:
li       r0, 0

lbl_803CBD74:
clrlwi.  r0, r0, 0x18
beq      lbl_803CC0F4
lbz      r0, 0xc9(r31)
cmplwi   r0, 0
bne      lbl_803CC0F4
li       r0, 1
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xc9(r31)
addi     r3, r31, 0x30c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
li       r0, 2
li       r4, 0x180e
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBDC4

lbl_803CBDC4:
addi     r3, r31, 0x6c
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x79(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
li       r0, 3
stw      r0, 0xc4(r31)
lwz      r0, 0xcc(r31)
cmpwi    r0, 1
beq      lbl_803CBE34
bge      lbl_803CBDFC
cmpwi    r0, 0
bge      lbl_803CBE08
b        lbl_803CC0F4

lbl_803CBDFC:
cmpwi    r0, 3
bge      lbl_803CC0F4
b        lbl_803CBE60

lbl_803CBE08:
lfs      f1, lbl_8051FA38@sda21(r2)
addi     r3, r31, 0x38c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4

lbl_803CBE34:
lfs      f1, lbl_8051FA38@sda21(r2)
addi     r3, r31, 0x3cc
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4

lbl_803CBE60:
lfs      f1, lbl_8051FA38@sda21(r2)
addi     r3, r31, 0x40c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBE8C

lbl_803CBE8C:
addi     r3, r31, 0x14
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x21(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
li       r0, 4
stw      r0, 0xc4(r31)
lwz      r3, 0xd0(r31)
cmpwi    r3, 0
beq      lbl_803CBF00
addi     r0, r3, -1
lfs      f1, lbl_8051FA34@sda21(r2)
slwi     r3, r0, 6
lfs      f2, lbl_8051FA28@sda21(r2)
addi     r3, r3, 0x4cc
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, 0xd0(r31)
lfs      f1, lbl_8051FA34@sda21(r2)
addi     r0, r3, -1
lfs      f2, lbl_8051FA28@sda21(r2)
slwi     r3, r0, 6
lfs      f3, lbl_8051FA2C@sda21(r2)
addi     r3, r3, 0x74c
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_803CBF00:
mr       r30, r31
li       r29, 0
b        lbl_803CBF2C

lbl_803CBF0C:
lwz      r3, 0x154(r30)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r30, r30, 4
addi     r29, r29, 1

lbl_803CBF2C:
lwz      r3, 0xd0(r31)
addi     r0, r3, -1
cmpw     r29, r0
blt      lbl_803CBF0C
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBF50

lbl_803CBF50:
addi     r3, r31, 0x40
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x4d(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
li       r0, 5
stw      r0, 0xc4(r31)
lwz      r3, 0xd4(r31)
cmpwi    r3, 0
beq      lbl_803CBFC4
addi     r0, r3, -1
lfs      f1, lbl_8051FA34@sda21(r2)
slwi     r3, r0, 6
lfs      f2, lbl_8051FA28@sda21(r2)
addi     r3, r3, 0x9cc
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, 0xd4(r31)
lfs      f1, lbl_8051FA34@sda21(r2)
addi     r0, r3, -1
lfs      f2, lbl_8051FA28@sda21(r2)
slwi     r3, r0, 6
lfs      f3, lbl_8051FA2C@sda21(r2)
addi     r3, r3, 0xc4c
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_803CBFC4:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBFD8

lbl_803CBFD8:
lwz      r3, 0xc(r31)
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1e, 0x1e
bne      lbl_803CBFF8
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA34@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803CC000

lbl_803CBFF8:
li       r0, 1
b        lbl_803CC004

lbl_803CC000:
li       r0, 0

lbl_803CC004:
clrlwi.  r0, r0, 0x18
beq      lbl_803CC054
lbz      r0, 0xd8(r31)
cmplwi   r0, 1
bne      lbl_803CC0F4
li       r0, 0
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xd8(r31)
addi     r3, r31, 0x48c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 6
stw      r0, 0xc4(r31)
b        lbl_803CC0F4

lbl_803CC054:
lwz      r0, 0x18(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803CC070
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA3C@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803CC078

lbl_803CC070:
li       r0, 1
b        lbl_803CC07C

lbl_803CC078:
li       r0, 0

lbl_803CC07C:
clrlwi.  r0, r0, 0x18
beq      lbl_803CC0F4
lbz      r0, 0xd8(r31)
cmplwi   r0, 0
bne      lbl_803CC0F4
li       r0, 1
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xd8(r31)
addi     r3, r31, 0x44c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 6
stw      r0, 0xc4(r31)
b        lbl_803CC0F4
.global  lbl_803CC0CC

lbl_803CC0CC:
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_803CC0F4
li       r0, 7
li       r4, 0x1800
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
.global  lbl_803CC0F4

lbl_803CC0F4:
lbz      r0, 0xd8(r31)
cmplwi   r0, 1
bne      lbl_803CC114
lis      r4, 0x355F3030@ha
lis      r3, 0x00383333@ha
addi     r4, r4, 0x355F3030@l
addi     r0, r3, 0x00383333@l
b        lbl_803CC124

lbl_803CC114:
lis      r4, 0x365F3030@ha
lis      r3, 0x00383333@ha
addi     r4, r4, 0x365F3030@l
addi     r0, r3, 0x00383333@l

lbl_803CC124:
lwz      r3, 0x19c(r31)
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r3, 0x1a0(r31)
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r0, 0x104(r31)
cmpwi    r0, 5
bne      lbl_803CC280
li       r3, 0
li       r0, 0
cmpwi    r3, 5
beq      lbl_803CC168
cmpwi    r3, 6
beq      lbl_803CC168
lwz      r3, 0x180(r31)
stb      r0, 0xb0(r3)

lbl_803CC168:
li       r3, 1
cmpwi    r3, 5
beq      lbl_803CC184
cmpwi    r3, 6
beq      lbl_803CC184
lwz      r3, 0x184(r31)
stb      r0, 0xb0(r3)

lbl_803CC184:
li       r3, 2
cmpwi    r3, 5
beq      lbl_803CC1A0
cmpwi    r3, 6
beq      lbl_803CC1A0
lwz      r3, 0x188(r31)
stb      r0, 0xb0(r3)

lbl_803CC1A0:
li       r3, 3
cmpwi    r3, 5
beq      lbl_803CC1BC
cmpwi    r3, 6
beq      lbl_803CC1BC
lwz      r3, 0x18c(r31)
stb      r0, 0xb0(r3)

lbl_803CC1BC:
li       r3, 4
cmpwi    r3, 5
beq      lbl_803CC1D8
cmpwi    r3, 6
beq      lbl_803CC1D8
lwz      r3, 0x190(r31)
stb      r0, 0xb0(r3)

lbl_803CC1D8:
li       r3, 5
b        lbl_803CC1EC
beq      lbl_803CC1EC
lwz      r3, 0x194(r31)
stb      r0, 0xb0(r3)

lbl_803CC1EC:
li       r3, 6
cmpwi    r3, 5
beq      lbl_803CC208
cmpwi    r3, 6
beq      lbl_803CC208
lwz      r3, 0x198(r31)
stb      r0, 0xb0(r3)

lbl_803CC208:
lwz      r4, 0xef0(r31)
cmplwi   r4, 0
beq      lbl_803CC248
lwz      r3, 0xeec(r31)
lis      r0, 0x4330
stw      r0, 0x18(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x1c(r1)
lfd      f0, 0x18(r1)
stw      r4, 0x24(r1)
fsubs    f1, f0, f2
stw      r0, 0x20(r1)
lfd      f0, 0x20(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803CC24C

lbl_803CC248:
lfs      f1, lbl_8051FA1C@sda21(r2)

lbl_803CC24C:
lfs      f0, lbl_8051FA40@sda21(r2)
lwz      r3, 0x17c(r31)
fsubs    f0, f0, f1
lfs      f1, lbl_8051FA04@sda21(r2)
lwz      r12, 0(r3)
fmuls    f0, f1, f0
lwz      r12, 0x24(r12)
fctiwz   f0, f0
stfd     f0, 0x28(r1)
lwz      r4, 0x2c(r1)
mtctr    r12
bctrl
b        lbl_803CC398

lbl_803CC280:
lwz      r0, 0x108(r31)
cmpwi    r0, 5
bne      lbl_803CC380
li       r3, 0
li       r0, 1
cmpwi    r3, 5
beq      lbl_803CC2A4
lwz      r3, 0x180(r31)
stb      r0, 0xb0(r3)

lbl_803CC2A4:
li       r3, 1
cmpwi    r3, 5
beq      lbl_803CC2B8
lwz      r3, 0x184(r31)
stb      r0, 0xb0(r3)

lbl_803CC2B8:
li       r3, 2
cmpwi    r3, 5
beq      lbl_803CC2CC
lwz      r3, 0x188(r31)
stb      r0, 0xb0(r3)

lbl_803CC2CC:
li       r3, 3
cmpwi    r3, 5
beq      lbl_803CC2E0
lwz      r3, 0x18c(r31)
stb      r0, 0xb0(r3)

lbl_803CC2E0:
li       r3, 4
cmpwi    r3, 5
beq      lbl_803CC2FC
lwz      r3, 0x190(r31)
stb      r0, 0xb0(r3)
b        lbl_803CC2FC
stb      r0, 0xb0(r3)

lbl_803CC2FC:
li       r3, 6
cmpwi    r3, 5
beq      lbl_803CC310
lwz      r3, 0x198(r31)
stb      r0, 0xb0(r3)

lbl_803CC310:
lwz      r4, 0xef0(r31)
cmplwi   r4, 0
beq      lbl_803CC350
lwz      r3, 0xeec(r31)
lis      r0, 0x4330
stw      r0, 0x28(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x2c(r1)
lfd      f0, 0x28(r1)
stw      r4, 0x24(r1)
fsubs    f1, f0, f2
stw      r0, 0x20(r1)
lfd      f0, 0x20(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803CC354

lbl_803CC350:
lfs      f1, lbl_8051FA1C@sda21(r2)

lbl_803CC354:
lfs      f0, lbl_8051FA04@sda21(r2)
lwz      r3, 0x17c(r31)
fmuls    f0, f0, f1
lwz      r12, 0(r3)
fctiwz   f0, f0
lwz      r12, 0x24(r12)
stfd     f0, 0x18(r1)
lwz      r4, 0x1c(r1)
mtctr    r12
bctrl
b        lbl_803CC398

lbl_803CC380:
lwz      r3, 0x17c(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_803CC398:
lwz      r3, 0x110(r31)
lfs      f0, 0x328(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x114(r31)
lfs      f0, 0x368(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x118(r31)
lfs      f0, 0x3a8(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x11c(r31)
lfs      f0, 0x3e8(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x120(r31)
lfs      f0, 0x428(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x124(r31)
lfs      f0, 0x468(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x128(r31)
lfs      f0, 0x4a8(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r0, 0x44(r1)
li       r3, 0
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
lwz      r29, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC498
 * Size:	000074
 */
bool TOption::doUpdateStateClose()
{
	mMainScreen->update();
	if (mState != 0 && mCounterOpen != 0) {
		mCounterOpen--;
	}
	if (mCounterOpen == 0) {
		return true;
	}
	return false;

	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x10c(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0xf8(r31)
cmpwi    r0, 0
beq      lbl_803CC4E0
lwz      r3, 0xfc(r31)
cmplwi   r3, 0
beq      lbl_803CC4E0
addi     r0, r3, -1
stw      r0, 0xfc(r31)

lbl_803CC4E0:
lwz      r0, 0xfc(r31)
cmplwi   r0, 0
bne      lbl_803CC4F4
li       r3, 1
b        lbl_803CC4F8

lbl_803CC4F4:
li       r3, 0

lbl_803CC4F8:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC50C
 * Size:	000244
 */
void TOption::doDraw()
{

	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph* graf = &gfx->mPerspGraph;
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
		JGeometry::TBox2f box(0.0f, zero + x, 0.0f, zero + y);
		graf->fillBox(box);
	}

	/*
stwu     r1, -0x60(r1)
mflr     r0
stw      r0, 0x64(r1)
stw      r31, 0x5c(r1)
stw      r30, 0x58(r1)
stw      r29, 0x54(r1)
mr       r29, r3
lwz      r4, sys@sda21(r13)
lwz      r30, 0x24(r4)
addi     r31, r30, 0x190
lwz      r12, 0(r31)
mr       r3, r31
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x10c(r29)
mr       r4, r30
mr       r5, r31
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0xf8(r29)
cmpwi    r0, 0
beq      lbl_803CC734
lwz      r3, sys@sda21(r13)
lwz      r3, 0x24(r3)
addi     r31, r3, 0x190
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r0, 0xf8(r29)
lwz      r3, 0xf0(r29)
cmpwi    r0, 2
stw      r3, 0x18(r1)
beq      lbl_803CC62C
bge      lbl_803CC6A8
cmpwi    r0, 1
bge      lbl_803CC5B4
b        lbl_803CC6A8

lbl_803CC5B4:
lwz      r4, 0x100(r29)
cmplwi   r4, 0
beq      lbl_803CC5F4
lwz      r3, 0xfc(r29)
lis      r0, 0x4330
stw      r0, 0x30(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x34(r1)
lfd      f0, 0x30(r1)
stw      r4, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fsubs    f0, f0, f2
fdivs    f2, f1, f0
b        lbl_803CC5F8

lbl_803CC5F4:
lfs      f2, lbl_8051FA1C@sda21(r2)

lbl_803CC5F8:
lbz      r3, 0xf4(r29)
lis      r0, 0x4330
stw      r0, 0x40(r1)
lfd      f1, lbl_8051FA08@sda21(r2)
stw      r3, 0x44(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f1
fmuls    f0, f0, f2
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r0, 0x4c(r1)
stb      r0, 0x1b(r1)
b        lbl_803CC6A8

lbl_803CC62C:
lwz      r4, 0x100(r29)
cmplwi   r4, 0
beq      lbl_803CC66C
lwz      r3, 0xfc(r29)
lis      r0, 0x4330
stw      r0, 0x48(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x4c(r1)
lfd      f0, 0x48(r1)
stw      r4, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803CC670

lbl_803CC66C:
lfs      f1, lbl_8051FA1C@sda21(r2)

lbl_803CC670:
lbz      r3, 0xf4(r29)
lis      r0, 0x4330
lfs      f0, lbl_8051FA40@sda21(r2)
stw      r3, 0x3c(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
fsubs    f0, f0, f1
stw      r0, 0x38(r1)
lfd      f1, 0x38(r1)
fsubs    f1, f1, f2
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 0x30(r1)
lwz      r0, 0x34(r1)
stb      r0, 0x1b(r1)

lbl_803CC6A8:
lwz      r0, 0x18(r1)
mr       r3, r31
addi     r4, r1, 8
addi     r5, r1, 0xc
stw      r0, 0x14(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r30, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FA1C@sda21(r2)
mr       r3, r31
stw      r4, 0x4c(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r0, 0x48(r1)
lfd      f0, 0x48(r1)
stw      r30, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803CC734:
lwz      r0, 0x64(r1)
lwz      r31, 0x5c(r1)
lwz      r30, 0x58(r1)
lwz      r29, 0x54(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC750
 * Size:	0000B0
 */
void TOption::loadResource()
{
	char resName[256];
	sys->heapStatusStart("TOption::loadResource", nullptr);
	og::newScreen::makeLanguageResName(resName, "option_us.szs");
	JKRArchive* archive = JKRArchive::mount(resName, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(757, (archive != nullptr));
	sys->heapStatusEnd("TOption::loadResource");
	setArchive(archive);
}

/*
 * --INFO--
 * Address:	803CC800
 * Size:	0000BC
 */
void TOption::setController(Controller* controller)
{
	mController = controller;
	mInputBgmVol.init(mController, 0, 10, &mOptionParamA.mBgmVolume, EUTPadInterface_countNum::MODE_RIGHTLEFT, 0.66f, 0.15f);
	mInputSfxVol.init(mController, 0, 10, &mOptionParamA.mSeVolume, EUTPadInterface_countNum::MODE_RIGHTLEFT, 0.66f, 0.15f);
	mInputStereo.init(mController, 0, 2, &mOptionParamA.mSoundMode, EUTPadInterface_countNum::MODE_RIGHTLEFT, 0.66f, 0.15f);
	mInputMainSel.init(mController, 0, 6, &mCurrMainSelection, EUTPadInterface_countNum::MODE_DOWNUP, 0.66f, 0.15f);
}

/*
 * --INFO--
 * Address:	803CC8BC
 * Size:	000174
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

	_180[0]->show(); // ???
	_180[1]->show();
	_180[2]->show();
	_180[3]->show();
	_180[4]->show();
	_180[5]->show();
	_180[6]->show();
	_180[7]->show();

	mMainScreen->setAlpha(0);
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
li       r0, 0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
stw      r0, 0x258(r3)
stw      r0, 0x2a4(r3)
stb      r0, 0x2d8(r3)
lwz      r3, 0x2d4(r3)
cmplwi   r3, 0
beq      lbl_803CC908
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_803CC908:
mr       r31, r29
li       r30, 0
b        lbl_803CC934

lbl_803CC914:
lwz      r3, 0x154(r31)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_803CC934:
lwz      r0, 0xd0(r29)
cmpw     r30, r0
blt      lbl_803CC914
mr       r31, r29
li       r30, 0
b        lbl_803CC96C

lbl_803CC94C:
lwz      r3, 0x12c(r31)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_803CC96C:
lwz      r0, 0xd4(r29)
cmpw     r30, r0
blt      lbl_803CC94C
li       r3, 0
li       r0, 1
cmpwi    r3, 5
beq      lbl_803CC990
lwz      r3, 0x180(r29)
stb      r0, 0xb0(r3)

lbl_803CC990:
li       r3, 1
cmpwi    r3, 5
beq      lbl_803CC9A4
lwz      r3, 0x184(r29)
stb      r0, 0xb0(r3)

lbl_803CC9A4:
li       r3, 2
cmpwi    r3, 5
beq      lbl_803CC9B8
lwz      r3, 0x188(r29)
stb      r0, 0xb0(r3)

lbl_803CC9B8:
li       r3, 3
cmpwi    r3, 5
beq      lbl_803CC9CC
lwz      r3, 0x18c(r29)
stb      r0, 0xb0(r3)

lbl_803CC9CC:
li       r3, 4
cmpwi    r3, 5
beq      lbl_803CC9E8
lwz      r3, 0x190(r29)
stb      r0, 0xb0(r3)
b        lbl_803CC9E8
stb      r0, 0xb0(r3)

lbl_803CC9E8:
li       r3, 6
cmpwi    r3, 5
beq      lbl_803CC9FC
lwz      r3, 0x198(r29)
stb      r0, 0xb0(r3)

lbl_803CC9FC:
lwz      r3, 0x17c(r29)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803CCA30
 * Size:	000C9C
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
