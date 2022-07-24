#ifndef _EBI_SCREEN_TTMBACK_H
#define _EBI_SCREEN_TTMBACK_H

/*
    __vt__Q33ebi6Screen7TTMBack:
    .4byte 0
    .4byte 0
    .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
    .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
    .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
    .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte update__Q33ebi6Screen11TScreenBaseFv
    .4byte draw__Q33ebi6Screen11TScreenBaseFv
    .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte doSetArchive__Q33ebi6Screen7TTMBackFP10JKRArchive
    .4byte doOpenScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen7ArgOpen
    .4byte doCloseScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen8ArgClose
    .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
    .4byte doUpdateStateOpen__Q33ebi6Screen7TTMBackFv
    .4byte doUpdateStateWait__Q33ebi6Screen7TTMBackFv
    .4byte doUpdateStateClose__Q33ebi6Screen7TTMBackFv
    .4byte doDraw__Q33ebi6Screen7TTMBackFv
    .4byte getName__Q33ebi6Screen7TTMBackFv
*/

namespace ebi {
namespace Screen {
struct TScreenBase {
	virtual void setArchive(JKRArchive*);   // _08
	virtual void openScreen(ArgOpen*);      // _0C
	virtual void closeScreen(ArgClose*);    // _10
	virtual void killScreen();              // _14
	virtual void update();                  // _18
	virtual void draw();                    // _1C
	virtual void isFinishScreen();          // _20
	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doKillScreen();            // _30
	virtual void doInitWaitState();         // _34

	// _00 VTBL
};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
struct TTMBack : public TScreenBase {
	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doUpdateStateOpen();       // _38
	virtual void doUpdateStateWait();       // _3C
	virtual void doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual void getName();                 // _48

	// _00 VTBL
};
} // namespace Screen
} // namespace ebi

#endif
