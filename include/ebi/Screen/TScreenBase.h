#ifndef _EBI_SCREEN_TSCREENBASE_H
#define _EBI_SCREEN_TSCREENBASE_H

#include "types.h"
#include "JSystem/JKR/JKRArchive.h"

namespace ebi {
	namespace Screen {
	enum UpdateState { Open = 1, Wait = 2, Close = 3 };
	struct ArgOpen {
		virtual char* getName(void) { return "ArgOpen"; }
	};
	struct ArgClose {
		virtual char* getName(void) { return "ArgClose"; }
	};
	struct TScreenBase {
		virtual void setArchive(JKRArchive*);
		virtual bool openScreen(ArgOpen*);
		virtual uint closeScreen(ArgClose*);
		virtual void killScreen();
		virtual void update();
		virtual void draw();
		virtual uchar isFinishScreen();
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

		uchar isOpenScreen(void);
		uchar isWaitScreen(void);
		uchar isCloseScreen(void);

		JKRArchive* pArchive;	// _04
		int _08;				// _08
	};
	} // namespace Screen
} // namespace ebi

#endif
