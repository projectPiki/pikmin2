#ifndef _EBI_SCREEN_TSAVEMENU_H
#define _EBI_SCREEN_TSAVEMENU_H

#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
struct TSaveMenu : public TScreenBase {
	enum enumMsgState { UNKNOWN };

	TSaveMenu();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doKillScreen();            // _30
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48 (weak)

	void loadResource();
	void openMsg(long);
	void closeMsg();
	void noMsg();
	void isFinishMsg();
	void startMsgState_(enumMsgState);
	void updateMsg_();

	// _00     = VTBL
	// _00-_08 = TScreenBase
	u8 _08[0xDC]; // _08, to do
};
} // namespace Screen
} // namespace ebi

#endif
