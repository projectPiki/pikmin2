#ifndef _EBI_SCREEN_TOPTION_H
#define _EBI_SCREEN_TOPTION_H

#include "ebi/E2DCallBack.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Utility.h"
#include "Game/StateMachine.h"
#include "P2DScreen.h"
#include "types.h"

struct Controller;

namespace ebi {
namespace Option {
struct TMgr;
} // namespace Option
namespace Save {
struct TMgr;
} // namespace Save
} // namespace ebi

namespace ebi {
namespace Screen {
struct TOptionParameter {
	TOptionParameter()
	{
		mIsRubyFont   = false;
		mIsRumble     = false;
		mSoundMode    = 0;
		mBgmVolume    = 0;
		mSeVolume     = 0;
		mUseDeflicker = false;
	}
	void initParamForTest();
	void loadRam();
	void saveRam();

	bool mIsRubyFont;   // _00
	bool mIsRumble;     // _01
	s32 mSoundMode;     // _04
	s32 mBgmVolume;     // _08
	s32 mSeVolume;      // _0C
	bool mUseDeflicker; // _10
};

struct TOption : public TScreenBase {
	TOption()
	    : mEnabled(1)
	    , mColor(0, 0, 0, 255)
	    , mAlpha(255)
	    , mState(0)
	    , mCounterOpen(0)
	    , mCounterOpenMax(0)
	{
		mOptionParamA.initParamForTest();
	}

	~TOption() { }

	virtual void doSetArchive(JKRArchive*);       // _24
	virtual void doOpenScreen(ArgOpen*);          // _28
	virtual void doCloseScreen(ArgClose*);        // _2C
	virtual void doInitWaitState();               // _34
	virtual bool doUpdateStateOpen();             // _38
	virtual bool doUpdateStateWait();             // _3C
	virtual bool doUpdateStateClose();            // _40
	virtual void doDraw();                        // _44
	virtual char* getName() { return "TOption"; } // _48

	void initScreen_();
	void setOptionParamToScreen_();
	void loadResource();
	void setController(Controller*);

	inline bool isClosed()
	{
		if (mCounterOpen == 0) {
			return true;
		}
		return false;
	}

	// values assigned to mExitStatus, used in ebi::Option::FSMState_ScreenWait::do_exec
	enum updateStatus {
		OptionState_NULL         = 0,
		OptionState_Unk1         = 1,
		OptionState_SelRumble    = 2,
		OptionState_SelSoundMode = 3,
		OptionState_SelBgmVol    = 4,
		OptionState_SelSfxVol    = 5,
		OptionState_SelDeflicker = 6,
		OptionState_SelSaveGame  = 7,
		OptionState_Unk8         = 8,
		OptionState_Exit         = 9,
	};

	// _00     = VTBL
	// _00-_08 = TScreenBase
	Controller* mController;                   // _00C
	u8 mEnabled;                               // _010
	EUTPadInterface_countNum mInputBgmVol;     // _014
	EUTPadInterface_countNum mInputSfxVol;     // _040
	EUTPadInterface_countNum mInputStereo;     // _06C
	EUTPadInterface_countNum mInputMainSel;    // _098
	int mExitStatus;                           // _0C4
	TOptionParameter mOptionParamA;            // _0C8
	TOptionParameter mOptionParamB;            // _0DC
	JUtility::TColor mColor;                   // _0F0
	u8 mAlpha;                                 // _0F4
	int mState;                                // _0F8
	u32 mCounterOpen;                          // _0FC
	u32 mCounterOpenMax;                       // _100
	s32 mCurrMainSelection;                    // _104
	s32 mNextSelection;                        // _108
	P2DScreen::Mgr_tuning* mMainScreen;        // _10C
	J2DTextBox* mPaneRumbleYes;                // _110
	J2DTextBox* mPaneRumbleNo;                 // _114
	J2DTextBox* mPaneSoundType[3];             // _118, 0 = mono, 1 = stereo, 2 = surround
	J2DTextBox* mPaneDeflickerYes;             // _124
	J2DTextBox* mPaneDeflickerNo;              // _128
	J2DPane* mPaneSfxVolume[10];               // _12C
	J2DPane* mPaneBgmVolume[10];               // _154
	J2DPane* mDeflickerScreen;                 // _17C
	J2DPane* mOptionPanes[10];                 // _180, this might be a smaller array
	J2DPane* mButtonPaneList[7];               // _1A8
	E2DFullFontColor mFontColorActiveSel;      // _1C4
	E2DFullFontColor mFontColorInactiveSel;    // _1D4
	E2DCallBack_AnmBase mAnimOpenScreen;       // _1E4
	E2DCallBack_CalcAnimation mAnimCalc;       // _220
	E2DCallBack_BlinkFontColor mBlinkColor;    // _240
	E2DCallBack_BlinkAlpha mBlinkAlphaA;       // _28C
	E2DCallBack_BlinkAlpha mBlinkAlphaB;       // _2BC
	E2DCallBack_Purupuru mButtonPuruAnim[7];   // _2EC
	E2DCallBack_Purupuru mBgmSelPuruAnimA[10]; // _4AC
	E2DCallBack_Purupuru mBgmSelPuruAnimB[10]; // _72C
	E2DCallBack_Purupuru mSfxSelPuruAnimA[10]; // _9AC
	E2DCallBack_Purupuru mSfxSelPuruAnimB[10]; // _C2C
	E2DCallBack_WindowCursor mWindowCursor;    // _EAC
};
} // namespace Screen
} // namespace ebi

#endif
