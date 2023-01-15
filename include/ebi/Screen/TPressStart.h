#ifndef _EBI_SCREEN_TPRESSSTART_H
#define _EBI_SCREEN_TPRESSSTART_H

#include "ebi/Screen/TScreenBase.h"
#include "ebi/E2DCallBack.h"

struct Controller;
struct J2DScreen;

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
	Controller* m_control;
	bool m_isOpen;
	int m_currentScreen;
	P2DScreen::Mgr_tuning* m_screens[4];
	u32 m_alpha;
	u32 m_alphaMax;
	E2DCallBack_AnmBase m_anims1[4];
	E2DCallBack_AnmBase m_anims2[4];
	E2DCallBack_CalcAnimation m_anims3[4];
};
} // namespace Screen
} // namespace ebi

#endif
