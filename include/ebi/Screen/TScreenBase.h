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
		virtual void setArchive(JKRArchive*);
		virtual bool openScreen(ArgOpen*);
		virtual bool closeScreen(ArgClose*);
		virtual void killScreen();
		virtual void update();
		virtual void draw();
		virtual u8 isFinishScreen();
		virtual void doSetArchive(JKRArchive*);
		virtual void doOpenScreen(ArgOpen*);
		virtual void doCloseScreen(ArgClose*);
		virtual void doKillScreen();
		virtual void doInitWaitState();
		virtual bool doUpdateStateOpen();
		virtual bool doUpdateStateWait();
		virtual bool doUpdateStateClose();
		virtual void doDraw();
		virtual char* getName();

		u8 isOpenScreen(void);
		u8 isWaitScreen(void);
		u8 isCloseScreen(void);

		JKRArchive* m_archive; // _04
		s32 m_state;           // _08
	};
} // namespace Screen
} // namespace ebi

#endif
