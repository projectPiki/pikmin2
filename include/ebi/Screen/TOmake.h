#ifndef _EBI_SCREEN_TOMAKE_H
#define _EBI_SCREEN_TOMAKE_H

#include "ebi/E2DCallBack.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Utility.h"
#include "P2DScreen.h"
#include "types.h"
#include "Morimura/mrUtil.h"

namespace ebi {
namespace Screen {

struct TOmake : public TScreenBase {
	TOmake();

	~TOmake() { }

	virtual void doSetArchive(JKRArchive*);      // _24
	virtual void doOpenScreen(ArgOpen*);         // _28
	virtual void doCloseScreen(ArgClose*);       // _2C
	virtual void doInitWaitState();              // _34
	virtual bool doUpdateStateOpen();            // _38
	virtual bool doUpdateStateWait();            // _3C
	virtual bool doUpdateStateClose();           // _40
	virtual void doDraw();                       // _44
	virtual char* getName() { return "TOmake"; } // _48

	void setController(Controller*);
	void showPanes_();
	void hidePanes_();
	void openFromMovie_();
	void openFromCardE_();

	// this has to exist like this for doUpdateStateClose to work
	inline bool isFadeoutFinished()
	{
		bool ret;
		if (mCounter != 0)
			ret = false;
		else
			ret = true;

		return ret;
	}

	void setMsgColor(J2DTextBox* pane)
	{
		pane->setCharColor(mColor8);
		pane->setGradColor(mColor9);
		pane->setWhite(mColor10);
		pane->setBlack(mColor11);
	}

	// _00     = VTBL
	// _00-_08 = TScreenBase
	int mState2;                          // _0C
	EUTPadInterface_countNum mInput;      // _10
	int mCurrSel;                         // _3C
	Controller* mController;              // _40
	JUtility::TColor mColorBase;          // _44
	u8 mAlpha;                            // _48
	int mState;                           // _4C
	u32 mCounter;                         // _50
	u32 mCounterMax;                      // _54
	P2DScreen::Mgr_tuning* mScreenMain;   // _58
	J2DPane* mPaneWindow;                 // _5C
	J2DPane* mPaneTitle;                  // _60
	J2DPane* mPaneAButton;                // _64
	J2DPane* mPaneBButton;                // _68
	J2DPane* mPaneList1[7];               // _6C
	J2DPane* mPaneSelect;                 // _88
	J2DPane* mPaneList2[7];               // _8C
	J2DTextBox* mPaneListMesg[7];         // _A8
	J2DPane* mPaneListMesgShadow[7];      // _C4
	E2DCallBack_AnmBase mAnims1;          // _E0
	E2DCallBack_AnmBase mAnims2;          // _11C
	E2DCallBack_CalcAnimation mAnims3;    // _158
	E2DCallBack_WindowCursor mCursor;     // _178
	E2DCallBack_BlinkFontColor mFonts[7]; // _1E4
	u64 mMesgTags[7];                     // _3F8
	JUtility::TColor mColor0;             // _430, cant be an array of colors for ctor to work
	JUtility::TColor mColor1;             // _430
	JUtility::TColor mColor2;             // _430
	JUtility::TColor mColor3;             // _430
	JUtility::TColor mColor4;             // _430
	JUtility::TColor mColor5;             // _430
	JUtility::TColor mColor6;             // _430
	JUtility::TColor mColor7;             // _430
	JUtility::TColor mColor8;             // _430
	JUtility::TColor mColor9;             // _430
	JUtility::TColor mColor10;            // _430
	JUtility::TColor mColor11;            // _430
};
struct TOmakeCardE : public TScreenBase {
	TOmakeCardE();
	~TOmakeCardE() { }

	enum CardEState { MainMenu, InZoomed, ExitingZoomed, EnteringZoomed };

	virtual void doSetArchive(JKRArchive*);           // _24
	virtual void doOpenScreen(ArgOpen*);              // _28
	virtual void doCloseScreen(ArgClose*);            // _2C
	virtual void doInitWaitState();                   // _34
	virtual bool doUpdateStateOpen();                 // _38
	virtual bool doUpdateStateWait();                 // _3C
	virtual bool doUpdateStateClose();                // _40
	virtual void doDraw();                            // _44
	virtual char* getName() { return "TOmakeCardE"; } // _48

	// _00     = VTBL
	// _00-_0C = TScreenBase
	Controller* mInput;                        // _0C
	bool mExitState;                           // _10 (false when press A to continue, true when press B to exit)
	P2DScreen::Mgr_tuning* mScreenObj;         // _14
	J2DPane* mPaneArrowUp;                     // _18
	J2DPane* mPaneArrowDown;                   // _1C
	E2DCallBack_AnmBase mAnimationEnter;       // _20
	E2DCallBack_AnmBase mAnimationIdle;        // _5C
	E2DCallBack_AnmBase mAnimationExit;        // _98
	E2DCallBack_AnmBase mAnimationChange;      // _D4
	E2DCallBack_AnmBase mAnimationColor;       // _110
	E2DCallBack_CalcAnimation mAnimCalc;       // _14C
	Morimura::TCallbackScrollMsg* mMesgScroll; // _16C
	int mState;                                // _170
};

struct TOmakeGame : public TScreenBase {
	TOmakeGame();
	~TOmakeGame() { }

	enum MsgDescType { GameDesc = 0, Transferring = 1, TransferFinished = 2, TransferFailed = 3, TransferUnable = 4 };
	enum GameID { PikminPluck, PikminPart, PikminPath, GameCount };

	virtual void doSetArchive(JKRArchive*);          // _24
	virtual void doOpenScreen(ArgOpen*);             // _28
	virtual void doCloseScreen(ArgClose*);           // _2C
	virtual bool doUpdateStateOpen();                // _38
	virtual bool doUpdateStateWait();                // _3C
	virtual bool doUpdateStateClose();               // _40
	virtual void doDraw();                           // _44
	virtual char* getName() { return "TOmakeGame"; } // _48

	bool isDelegateControl();
	bool openMsg(s32);
	void setController(Controller*);
	void setSelfControl();

	// _00     = VTBL
	// _00-_08 = TScreenBase
	Controller* mInput;                               // _0C
	bool mExitState;                                  // _10 (false when press A to continue, true when press B to exit)
	EUTPadInterface_countNum mPad;                    // _14
	s32 mSelection;                                   // _40
	P2DScreen::Mgr_tuning* mScreenObj;                // _44
	J2DPane* mPaneGameSel[GameCount];                 // _48
	J2DPane* mPaneSelectBox[GameCount];               // _54
	J2DPane* mPaneDescription;                        // _60
	J2DPane* mPaneDescriptionS;                       // _64 (text shadow)
	J2DPane* mPaneGameName[GameCount];                // _68
	J2DPane* mPaneGameNameS[GameCount];               // _74 (text shadow)
	J2DPane* mPaneThumbnails[GameCount];              // _80
	E2DCallBack_AnmBase mAnimationEnter;              // _8C
	E2DCallBack_AnmBase mAnimationExit;               // _C8
	E2DCallBack_AnmBase mAnimationChangeGame;         // _104
	E2DCallBack_CalcAnimation mAnimCalc;              // _140
	E2DCallBack_BlinkFontColor mBlinkFont[GameCount]; // _160
	E2DCallBack_WindowCursor mCursor;                 // _244
	bool mIsChangedGameSel;                           // _2B0
};
} // namespace Screen
} // namespace ebi

#endif
