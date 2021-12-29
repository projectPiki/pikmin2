#ifndef _EBI_SCREEN_FILESELECT_TMAINSCREEN_H
#define _EBI_SCREEN_FILESELECT_TMAINSCREEN_H

/*
    __vt__Q43ebi6Screen10FileSelect11TMainScreen:
    .4byte 0
    .4byte 0
    .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
    .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
    .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
    .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte update__Q33ebi6Screen11TScreenBaseFv
    .4byte draw__Q33ebi6Screen11TScreenBaseFv
    .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte doSetArchive__Q43ebi6Screen10FileSelect11TMainScreenFP10JKRArchive
    .4byte
   doOpenScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen7ArgOpen
    .4byte
   doCloseScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen8ArgClose
    .4byte doKillScreen__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doInitWaitState__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doUpdateStateOpen__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doUpdateStateWait__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doUpdateStateClose__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doDraw__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte getName__Q43ebi6Screen10FileSelect11TMainScreenFv
*/

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
