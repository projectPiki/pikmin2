#ifndef _EBI_SCREEN_TSAVEMENU_H
#define _EBI_SCREEN_TSAVEMENU_H

#include "ebi/Screen/TScreenBase.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "ebi/TYesNoCursor.h"

struct Controller;

namespace ebi {
namespace Screen {
struct TSaveMenu : public TScreenBase {
	enum enumMsgState { MSG_Kill, MSG_Open, MSG_Idle, MSG_Close };
	enum MsgType { MESSAGE_SaveOption, MESSAGE_Saving, MESSAGE_SaveSuccess, MESSAGE_NoSaveOption };

	TSaveMenu()
	    : _14(0, 0, 0, 255)
	    , mAlpha(255)
	    , mDrawState(0)
	    , mOpenCloseCounter(0)
	    , mOpenCloseCounterMax(0)
	    , mStateID(0)
	    , mTextCounter(0)
	    , mTextCounterMax(0)
	    , mCursor1()
	    , mCursor2()
	{
		for (int i = 0; i < 4; i++) {
			mCursorEfxPane[i] = nullptr;
		}

		mPaneYesText      = nullptr;
		mPaneNoText       = nullptr;
		mPaneQuestionText = nullptr;
	}

	virtual void doSetArchive(JKRArchive*);         // _24
	virtual void doOpenScreen(ArgOpen*);            // _28
	virtual void doCloseScreen(ArgClose*);          // _2C
	virtual void doKillScreen();                    // _30
	virtual bool doUpdateStateOpen();               // _38
	virtual bool doUpdateStateWait();               // _3C
	virtual bool doUpdateStateClose();              // _40
	virtual void doDraw();                          // _44
	virtual char* getName() { return "TSaveMenu"; } // _48 (weak)

	void loadResource();
	bool openMsg(long);
	bool closeMsg();
	void noMsg();
	bool isFinishMsg();
	void startMsgState_(enumMsgState);
	void updateMsg_();

	// _00     = VTBL
	// _00-_08 = TScreenBase
	Controller* mController;                     // _0C
	int _10;                                     // _10
	JUtility::TColor _14;                        // _14
	u8 mAlpha;                                   // _18
	int mDrawState;                              // _1C
	u32 mOpenCloseCounter;                       // _20
	u32 mOpenCloseCounterMax;                    // _24
	int mStateID;                                // _28
	int mMesgState;                              // _2C
	int mSelectState;                            // _30
	u32 mTextCounter;                            // _34
	u32 mTextCounterMax;                         // _38
	bool mSelectedOption;                        // _3C
	bool mPressedA;                              // _3D
	P2DScreen::Mgr_tuning* mScreenObj;           // _40
	J2DPane* mCursorEfxPane[4];                  // _44
	J2DPane* mPaneYesText;                       // _54
	J2DPane* mPaneNoText;                        // _58
	J2DPane* mPaneQuestionText;                  // _5C
	og::Screen::AnimText_Screen* mAnimScreen[3]; // _60
	// These two TYesNowCursors are emiting vtables for some reason
	TYesNoCursor mCursor1;                // _6C
	TYesNoCursor mCursor2;                // _A4
	og::Screen::CallBack_Furiko* mFuriko; // _DC
	f32 mScreenMovePos;                   // _E0
	f32 mFadeTimer;                       // _E4
};
} // namespace Screen
} // namespace ebi

#endif
