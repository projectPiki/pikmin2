#ifndef _EBI_SCREEN_TSCREENBASE_H
#define _EBI_SCREEN_TSCREENBASE_H

#include "types.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "ebi/E2DCallBack.h"
#include "ebi/TYesNoCursor.h"

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

namespace Screen {
enum UpdateState { TSB_US_Finish = 0, TSB_US_Open = 1, TSB_US_Wait = 2, TSB_US_Close = 3 };

struct ArgOpen {
	virtual char* getName() { return "ArgOpen"; } // _08 (weak)

	// _00 = VTBL
};

struct ArgOpenOmake : public ArgOpen {
	virtual char* getName() { return "ArgOpenOmake"; } // _08 (weak)

	ArgOpenOmake(u8 a1, u8 a2, bool a3)
	{
		mFlag1 = a1;
		mFlag2 = a2;
		mFlag3 = a3;
	}

	// _00 = VTBL
	u8 mFlag1;
	u8 mFlag2;
	bool mFlag3;
	int _08;
};

struct ArgOpenTitleMenu : public ArgOpen {
	ArgOpenTitleMenu(int a1, int a2)
	{
		_04       = a1;
		mSelectID = a2;
	}

	// _00 = VTBL
	int _04;
	int mSelectID;
};

struct ArgOpenTMBack : public ArgOpen {

	ArgOpenTMBack(f32 a) { _04 = a; }

	// _00 = VTBL
	f32 _04; // _04
};

struct ArgClose {
	virtual char* getName() { return "ArgClose"; } // _08 (weak)
};

struct ArgCloseTMBack : public ArgClose {
	ArgCloseTMBack(f32 a) { _04 = a; }

	f32 _04;
};

struct TScreenBaseInterface {
	virtual void setArchive(JKRArchive*) = 0; // _08
	virtual bool openScreen(ArgOpen*)    = 0; // _0C
	virtual bool closeScreen(ArgClose*)  = 0; // _10
	virtual void killScreen()            = 0; // _14
	virtual void update()                = 0; // _18
	virtual void draw()                  = 0; // _1C
	virtual u8 isFinishScreen()          = 0; // _20

	// _00 = VTBL
};

struct TScreenBase : public TScreenBaseInterface {
	inline TScreenBase()
	    : mArchive(nullptr)
	    , mState(0)
	{
	}

	virtual void setArchive(JKRArchive*);   // _08
	virtual bool openScreen(ArgOpen*);      // _0C
	virtual bool closeScreen(ArgClose*);    // _10
	virtual void killScreen();              // _14
	virtual void update();                  // _18
	virtual void draw();                    // _1C
	virtual u8 isFinishScreen();            // _20
	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doKillScreen();            // _30 (weak)
	virtual void doInitWaitState();         // _34 (weak)
	virtual bool doUpdateStateOpen();       // _38 (weak)
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48 (weak) [not actually weak?]

	u8 isOpenScreen();
	u8 isWaitScreen();
	u8 isCloseScreen();

	// _00 = VTBL
	JKRArchive* mArchive; // _04
	s32 mState;           // _08
};
} // namespace Screen
} // namespace ebi

#endif
