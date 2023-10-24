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
	enum enumState { UNKNOWN };

	TScreenProgre();

	virtual void setArchive(JKRArchive*); // _08

	void loadResource();
	void startScreen(long, u32);
	bool fadeout(u32);
	bool isFinish();
	void startState(enumState, u32);
	void update();
	void draw();
	void setDecide();

	// unused/inlined:
	void killScreen();

	// _00 = VTBL
	Controller* mController; // _04
	u8 mSelect;
	bool mSelected;
	u32 mCounter1;
	u32 mCounter1Max;
	u32 mCounter2;
	u32 mCounter2Max;
	int mState;
	int mState2;
	P2DScreen::Mgr_tuning* mScreenObj;
	J2DPane* mPaneMg00;
	J2DPane* mPaneMg01;
	J2DPane* mPaneMg02;
	J2DPane* mPaneWin00;
	J2DPane* mPaneYes;
	J2DPane* mPaneNo;
	J2DPane* mPane_il00;
	J2DPane* mPane_ir00;
	J2DPane* mPane_il01;
	J2DPane* mPane_ir01;
	E2DCallBack_BlinkFontColor mBlinkFont[2];
	TYesNoCursor mCursor[2];
};
} // namespace ebi

#endif
