#ifndef _EBI_SCREEN_TNINTENDOLOGO_H
#define _EBI_SCREEN_TNINTENDOLOGO_H

#include "ebi/Screen/TScreenBase.h"
#include "P2DScreen.h"

namespace ebi {
namespace Screen {
struct TNintendoLogo : public TScreenBase {
	virtual void doSetArchive(JKRArchive*);             // _1C
	virtual bool doUpdateStateWait();                   // _34
	virtual void doDraw();                              // _3C
	virtual char* getName() { return "TNintendoLogo"; } // _40

	// _00 VTBL
	P2DScreen::Mgr_tuning* m_mgrTuning; // _0C
};
} // namespace Screen
} // namespace ebi

#endif
