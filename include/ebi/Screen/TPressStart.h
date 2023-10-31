#ifndef _EBI_SCREEN_TPRESSSTART_H
#define _EBI_SCREEN_TPRESSSTART_H

#include "ebi/Screen/TScreenBase.h"
#include "ebi/E2DCallBack.h"

struct Controller;
struct J2DScreen;

namespace ebi {
namespace Screen {
struct TPressStart : public TScreenBase {
	TPressStart()
	    : mControl(nullptr)
	    , mCurrentScreen(0)
	    , mAlpha(0)
	    , mAlphaMax(0)
	{
	}

	virtual void doSetArchive(JKRArchive*);           // _24
	virtual void doOpenScreen(ArgOpen*);              // _28
	virtual void doCloseScreen(ArgClose*);            // _2C
	virtual bool doUpdateStateWait();                 // _3C
	virtual bool doUpdateStateClose();                // _40
	virtual void doDraw();                            // _44
	virtual char* getName() { return "TPressStart"; } // _48 (weak)

	void startLoop_();

	// _00     = VTBL
	// _00-_0C = TScreenBase
	Controller* mControl;                 // _0C
	bool mIsOpen;                         // _10
	int mCurrentScreen;                   // _14
	P2DScreen::Mgr_tuning* mScreens[4];   // _18
	u32 mAlpha;                           // _28
	u32 mAlphaMax;                        // _2C
	E2DCallBack_AnmBase mAnims1[4];       // _30
	E2DCallBack_AnmBase mAnims2[4];       // _34
	E2DCallBack_CalcAnimation mAnims3[4]; // _38
};
} // namespace Screen
} // namespace ebi

#endif
