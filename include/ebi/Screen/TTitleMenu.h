#ifndef _EBI_SCREEN_TTITLEMENU_H
#define _EBI_SCREEN_TTITLEMENU_H

#include "ebi/Screen/TScreenBase.h"

struct Controller;

namespace ebi {
namespace Screen {
struct TTitleMenu : public TScreenBase {
	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doInitWaitState();         // _34
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48 (weak)

	void setController(Controller*);
	void openMenuSet(ArgOpen*);
	void isDecide();
	void isCancel();
	void showPika_(long);
	void hidePika_(long);

	// _00     = VTBL
	// _00-_08 = TScreenBase
};
} // namespace Screen
} // namespace ebi

#endif
