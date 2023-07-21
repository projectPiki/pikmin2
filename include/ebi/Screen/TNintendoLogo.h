#ifndef _EBI_SCREEN_TNINTENDOLOGO_H
#define _EBI_SCREEN_TNINTENDOLOGO_H

#include "ebi/Screen/TScreenBase.h"
#include "P2DScreen.h"

namespace ebi {
namespace Screen {
struct TNintendoLogo : public TScreenBase {
	TNintendoLogo()
	    : mScreenObj(nullptr)
	{
	}

	virtual void doSetArchive(JKRArchive*);             // _24
	virtual bool doUpdateStateWait();                   // _3C
	virtual void doDraw();                              // _44
	virtual char* getName() { return "TNintendoLogo"; } // _48 (weak)

	// _00     = VTBL
	// _00-_08 = TScreenBase
	P2DScreen::Mgr_tuning* mScreenObj; // _0C
};
} // namespace Screen
} // namespace ebi

#endif
