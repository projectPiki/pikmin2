#ifndef _EBI_SCREEN_TTMBACK_H
#define _EBI_SCREEN_TTMBACK_H

#include "ebi/Screen/TScreenBase.h"
#include "P2DScreen.h"

namespace ebi {
namespace Screen {
struct TTMBack : public TScreenBase {
	TTMBack()
	{
		mScreenObj           = nullptr;
		mOpenCloseCounter    = 0;
		mOpenCloseCounterMax = 0;
		mOpenCloseCounter    = 0; // Yes it sets them twice, just to be sure
		mOpenCloseCounterMax = 0;
	}

	virtual void doSetArchive(JKRArchive*);             // _24
	virtual void doOpenScreen(ArgOpen*);                // _28
	virtual void doCloseScreen(ArgClose*);              // _2C
	virtual bool doUpdateStateOpen();                   // _38
	virtual bool doUpdateStateWait();                   // _3C
	virtual bool doUpdateStateClose();                  // _40
	virtual void doDraw();                              // _44
	virtual char* getName() { return "TNintendoLogo"; } // _48 (weak)

	// _00     = VTBL
	// _00-_08 = TScreenBase
	P2DScreen::Mgr_tuning* mScreenObj; // _0C
	u32 mOpenCloseCounter;             // _10
	u32 mOpenCloseCounterMax;          // _14
};
} // namespace Screen
} // namespace ebi

#endif
