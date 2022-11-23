#ifndef _EBI_SCREEN_TOMAKE_H
#define _EBI_SCREEN_TOMAKE_H

#include "ebi/E2DCallBack.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Utility.h"
#include "P2DScreen.h"
#include "types.h"

namespace ebi {
namespace Screen {

// TODO: Data members.
struct TOmake : public TScreenBase {
	TOmake();

	~TOmake();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doInitWaitState();         // _34
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48

	void setController(Controller*);
	void showPanes_();
	void hidePanes_();
	void openFromMovie_();
	void openFromCardE_();

	// _00     = VTBL
	// _00-_08 = TScreenBase
	u8 _0C[0x454];
};

// TODO: Data members.
struct TOmakeCardE : public TScreenBase {
	TOmakeCardE();
	~TOmakeCardE();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doInitWaitState();         // _34
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48

	// _00     = VTBL
	// _00-_08 = TScreenBase
	u8 _0C[0x164];
};

// TODO: Data members.
struct TOmakeGame : public TScreenBase {
	TOmakeGame();
	~TOmakeGame();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48

	bool isDelegateControl();
	bool openMsg(long);
	void setController(Controller*);
	void setSelfControl();

	// _00     = VTBL
	// _00-_08 = TScreenBase
	u8 _0C[0x2A8];
};
} // namespace Screen
} // namespace ebi

#endif
