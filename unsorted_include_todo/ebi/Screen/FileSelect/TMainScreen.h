#ifndef _EBI_SCREEN_FILESELECT_TMAINSCREEN_H
#define _EBI_SCREEN_FILESELECT_TMAINSCREEN_H

namespace ebi {
namespace Screen {
	struct TScreenBase {
		virtual void setArchive(JKRArchive*); // _00
		virtual void openScreen(ArgOpen*);    // _04
		virtual void closeScreen(ArgClose*);  // _08
		virtual void killScreen();            // _0C
		virtual void update();                // _10
		virtual void draw();                  // _14
		virtual void isFinishScreen();        // _18

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
	namespace FileSelect {
		struct TMainScreen : public TScreenBase {
			virtual void setArchive(JKRArchive*);        // _00
			virtual void openScreen(ArgOpen*);           // _04
			virtual void closeScreen(ArgClose*);         // _08
			virtual void killScreen();                   // _0C
			virtual void update();                       // _10
			virtual void draw();                         // _14
			virtual void isFinishScreen();               // _18
			virtual void TMaindoSetArchive(JKRArchive*); // _1C
			virtual void TMaindoOpenScreen(ArgOpen*);    // _20
			virtual void TMaindoCloseScreen(ArgClose*);  // _24
			virtual void TMaindoKillScreen();            // _28
			virtual void TMaindoInitWaitState();         // _2C
			virtual void TMaindoUpdateStateOpen();       // _30
			virtual void TMaindoUpdateStateWait();       // _34
			virtual void TMaindoUpdateStateClose();      // _38
			virtual void TMaindoDraw();                  // _3C
			virtual void TMaingetName();                 // _40

			// _00 VTBL
		};
	} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif
