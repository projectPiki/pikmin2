#ifndef _EBI_SCREEN_TSCREENBASE_H
#define _EBI_SCREEN_TSCREENBASE_H

#include "types.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "ebi/E2DCallBack.h"
#include "ebi/TYesNoCursor.h"

struct Controller;

namespace ebi {

namespace Screen {
enum UpdateState { TSB_US_Finish = 0, TSB_US_Open = 1, TSB_US_Wait = 2, TSB_US_Close = 3 };

struct ArgOpen {
	virtual char* getName() { return "ArgOpen"; } // _08 (weak)

	// _00 = VTBL
};

struct ArgOpenOmake : public ArgOpen {
	virtual char* getName() { return "ArgOpenOmake"; } // _08 (weak)

	ArgOpenOmake(u8 debt, u8 comp, bool louie)
	{
		mIsDebtComplete    = debt;
		mIsAllTreasures    = comp;
		mIsLouieDarkSecret = louie;
	}

	// _00 = VTBL
	u8 mIsDebtComplete;      // _04
	u8 mIsAllTreasures;      // _05
	bool mIsLouieDarkSecret; // _06
	int mUnusedVal;          // related to e-reader screen?
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

	virtual void setArchive(JKRArchive*);              // _08
	virtual bool openScreen(ArgOpen*);                 // _0C
	virtual bool closeScreen(ArgClose*);               // _10
	virtual void killScreen();                         // _14
	virtual void update();                             // _18
	virtual void draw();                               // _1C
	virtual u8 isFinishScreen();                       // _20
	virtual void doSetArchive(JKRArchive*) { }         // _24 (weak)
	virtual void doOpenScreen(ArgOpen*) { }            // _28 (weak)
	virtual void doCloseScreen(ArgClose*) { }          // _2C (weak)
	virtual void doKillScreen() { }                    // _30 (weak)
	virtual void doInitWaitState() { }                 // _34 (weak)
	virtual bool doUpdateStateOpen() { return true; }  // _38 (weak)
	virtual bool doUpdateStateWait() { return true; }  // _3C (weak)
	virtual bool doUpdateStateClose() { return true; } // _40 (weak) (weak)
	virtual void doDraw() { }                          // _44 (weak)
	virtual char* getName() { return "NoNameScreen"; } // _48 (weak)

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
