#ifndef _EBI_PROGRE_H
#define _EBI_PROGRE_H

#include "types.h"
#include "P2DScreen.h"
#include "ebi/E2DCallBack.h"
#include "ebi/TYesNoCursor.h"

struct JKRArchive;
struct Controller;

namespace ebi {
struct TScreenProgre {
	enum enumState { Progre_NULL, Progre_Fadein, Progre_Select, Progre_Fadeout };
	enum screenState { ProgreScreen_Msg00, ProgreScreen_Msg01, ProgreScreen_Msg02 };

	TScreenProgre()
	    : mSelect(1)
	    , mCounterFadein(0)
	    , mCounterFadeinMax(0)
	    , mCounterFadeout(0)
	    , mCounterFadeoutMax(0)
	    , mState(Progre_NULL)
	    , mPaneMg00(nullptr)
	    , mPaneMg01(nullptr)
	    , mPaneMg02(nullptr)
	    , mPaneYes(nullptr)
	    , mPaneNo(nullptr)
	{
	}

	virtual void setArchive(JKRArchive*); // _08

	void loadResource();
	void startScreen(s32, u32);
	bool fadeout(u32);
	bool isFinish();
	void startState(enumState, u32);
	void update();
	void draw();
	void setDecide();

	// unused/inlined:
	void killScreen();

	// _00 = VTBL
	Controller* mController;                  // _04
	u8 mSelect;                               // _08, (currently selected option)
	bool mSelected;                           // _09, (has picked an option)
	u32 mCounterFadein;                       // _0C
	u32 mCounterFadeinMax;                    // _10
	u32 mCounterFadeout;                      // _14
	u32 mCounterFadeoutMax;                   // _18
	int mState;                               // _1C
	int mStateScreen;                         // _20
	P2DScreen::Mgr_tuning* mScreenObj;        // _24
	J2DTextBox* mPaneMg00;                    // _28
	J2DTextBox* mPaneMg01;                    // _2C
	J2DTextBox* mPaneMg02;                    // _30
	J2DPane* mPaneWin00;                      // _34
	J2DTextBox* mPaneYes;                     // _38
	J2DTextBox* mPaneNo;                      // _3C
	J2DPane* mPane_il00;                      // _40
	J2DPane* mPane_ir00;                      // _44
	J2DPane* mPane_il01;                      // _48
	J2DPane* mPane_ir01;                      // _4C
	E2DCallBack_BlinkFontColor mBlinkFontYes; // _50
	E2DCallBack_BlinkFontColor mBlinkFontNo;  // _9C
	TYesNoCursor mCursor1;                    // _E8
	TYesNoCursor mCursor2;                    // _120
};
} // namespace ebi

#endif
