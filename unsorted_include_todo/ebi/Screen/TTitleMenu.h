#ifndef _EBI_SCREEN_TTITLEMENU_H
#define _EBI_SCREEN_TTITLEMENU_H

/*
    __vt__Q33ebi6Screen10TTitleMenu:
    .4byte 0
    .4byte 0
    .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
    .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
    .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
    .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte update__Q33ebi6Screen11TScreenBaseFv
    .4byte draw__Q33ebi6Screen11TScreenBaseFv
    .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte doSetArchive__Q33ebi6Screen10TTitleMenuFP10JKRArchive
    .4byte doOpenScreen__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen7ArgOpen
    .4byte doCloseScreen__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen8ArgClose
    .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte doInitWaitState__Q33ebi6Screen10TTitleMenuFv
    .4byte doUpdateStateOpen__Q33ebi6Screen10TTitleMenuFv
    .4byte doUpdateStateWait__Q33ebi6Screen10TTitleMenuFv
    .4byte doUpdateStateClose__Q33ebi6Screen10TTitleMenuFv
    .4byte doDraw__Q33ebi6Screen10TTitleMenuFv
    .4byte getName__Q33ebi6Screen10TTitleMenuFv
    .4byte 0
*/

namespace ebi {
namespace Screen {
	struct TScreenBase {
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

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
	struct TTitleMenu : public TScreenBase {
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
		virtual void _44() = 0;                 // _44

		// _00 VTBL
	};
} // namespace Screen
} // namespace ebi

#endif
