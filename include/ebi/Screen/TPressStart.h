#ifndef _EBI_SCREEN_TPRESSSTART_H
#define _EBI_SCREEN_TPRESSSTART_H

#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
struct TPressStart : public TScreenBase {
	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48 (weak)

	void startLoop_();

	// _00     = VTBL
	// _00-_08 = TScreenBase
};
} // namespace Screen
} // namespace ebi

#endif
