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
		virtual uint closeScreen(ArgClose*);
		virtual uchar killScreen();
		virtual uchar update();
		virtual uchar draw();
		virtual bool isFinishScreen();
		virtual void doSetArchive(JKRArchive*);
		virtual void doOpenScreen(ArgOpen*);
		virtual void doCloseScreen(ArgClose*);
		virtual uchar doKillScreen();
		virtual uint doUpdateStateOpen();
		virtual uint doUpdateStateWait();
		virtual uint doUpdateStateClose();
		virtual void doDraw();
		virtual char* getName();

		JKRArchive* pArchive; // _04
		int _08;                                      // _08
	};
	} // namespace screen
} // namespace ebi

#endif
