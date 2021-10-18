#ifndef _EBI_SCREEN_TSCREENBASE_H
#define _EBI_SCREEN_TSCREENBASE_H

#include "types.h"
#include "JSystem/JKR/JKRArchive.h"

namespace ebi {
	namespace screen {
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
		virtual uchar killScreen();
		virtual uchar update();
		virtual uchar draw();
		virtual bool isFinishScreen();
		virtual void doSetArchive(JKRArchive*);
		virtual void doOpenScreen(ArgOpen*);
		virtual void doCloseScreen(ArgClose*);
		virtual uchar doKillScreen();
		virtual void doInitWaitState();
		virtual bool doUpdateStateOpen();
		virtual bool doUpdateStateWait();
		virtual bool doUpdateStateClose();
		virtual void doDraw();
		virtual char* getName();

		bool isOpenScreen(void);
		bool isWaitScreen(void);
		bool isCloseScreen(void);

		JKRArchive* pArchive;	// _04
		int _08;				// _08
	};
	} // namespace screen
} // namespace ebi

#endif
