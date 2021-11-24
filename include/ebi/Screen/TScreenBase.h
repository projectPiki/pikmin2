#ifndef _EBI_SCREEN_TSCREENBASE_H
#define _EBI_SCREEN_TSCREENBASE_H

#include "types.h"
#include "JSystem/JKR/JKRArchive.h"

namespace ebi {
namespace Screen {
	enum UpdateState {
		TSB_US_Finish = 0,
		TSB_US_Open   = 1,
		TSB_US_Wait   = 2,
		TSB_US_Close  = 3
	};

	struct ArgOpen {
		virtual char* getName(void) { return "ArgOpen"; }
	};

	struct ArgClose {
		virtual char* getName(void) { return "ArgClose"; }
	};

	struct TScreenBase {
		virtual void setArchive(JKRArchive*);   // _00
		virtual bool openScreen(ArgOpen*);      // _04
		virtual bool closeScreen(ArgClose*);    // _08
		virtual void killScreen();              // _0C
		virtual void update();                  // _10
		virtual void draw();                    // _14
		virtual u8 isFinishScreen();            // _18
		virtual void doSetArchive(JKRArchive*); // _1C
		virtual void doOpenScreen(ArgOpen*);    // _20
		virtual void doCloseScreen(ArgClose*);  // _24
		virtual void doKillScreen();            // _28
		virtual void doInitWaitState();         // _2C
		virtual bool doUpdateStateOpen();       // _30
		virtual bool doUpdateStateWait();       // _34
		virtual bool doUpdateStateClose();      // _38
		virtual void doDraw();                  // _3C
		virtual char* getName();                // _40

		u8 isOpenScreen(void);
		u8 isWaitScreen(void);
		u8 isCloseScreen(void);

		JKRArchive* m_archive; // _04
		s32 m_state;           // _08
	};
} // namespace Screen
} // namespace ebi

#endif
