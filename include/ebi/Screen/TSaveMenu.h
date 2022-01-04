#ifndef _EBI_SCREEN_TSAVEMENU_H
#define _EBI_SCREEN_TSAVEMENU_H

#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
struct TSaveMenu : public TScreenBase {
	virtual void doSetArchive(JKRArchive*); // _1C
	virtual void doOpenScreen(ArgOpen*);    // _20
	virtual void doCloseScreen(ArgClose*);  // _24
	virtual void doKillScreen();            // _28
	virtual bool doUpdateStateOpen();       // _30
	virtual bool doUpdateStateWait();       // _34
	virtual bool doUpdateStateClose();      // _38
	virtual void doDraw();                  // _3C
	virtual char* getName();                // _40

	// _00 VTBL
};
} // namespace Screen
} // namespace ebi

#endif
