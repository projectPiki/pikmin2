#ifndef _EBI_SCREEN_TNINTENDOLOGO_H
#define _EBI_SCREEN_TNINTENDOLOGO_H

namespace ebi {
namespace Screen {
	struct TScreenBase {
		virtual void setArchive(JKRArchive*);  // _00
		virtual void openScreen(ArgOpen*);     // _04
		virtual void closeScreen(ArgClose*);   // _08
		virtual void killScreen();             // _0C
		virtual void update();                 // _10
		virtual void draw();                   // _14
		virtual void isFinishScreen();         // _18
		virtual void _1C() = 0;                // _1C
		virtual void doOpenScreen(ArgOpen*);   // _20
		virtual void doCloseScreen(ArgClose*); // _24
		virtual void doKillScreen();           // _28
		virtual void doInitWaitState();        // _2C
		virtual void doUpdateStateOpen();      // _30
		virtual void _34() = 0;                // _34
		virtual void doUpdateStateClose();     // _38

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
	struct TNintendoLogo : public TScreenBase {
		virtual void setArchive(JKRArchive*);   // _00
		virtual void openScreen(ArgOpen*);      // _04
		virtual void closeScreen(ArgClose*);    // _08
		virtual void killScreen();              // _0C
		virtual void update();                  // _10
		virtual void draw();                    // _14
		virtual void isFinishScreen();          // _18
		virtual void doSetArchive(JKRArchive*); // _1C
		virtual void doOpenScreen(ArgOpen*);    // _20
		virtual void doCloseScreen(ArgClose*);  // _24
		virtual void doKillScreen();            // _28
		virtual void doInitWaitState();         // _2C
		virtual void doUpdateStateOpen();       // _30
		virtual void doUpdateStateWait();       // _34
		virtual void doUpdateStateClose();      // _38
		virtual void doDraw();                  // _3C
		virtual void getName();                 // _40

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

#endif
