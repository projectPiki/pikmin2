#ifndef _WIPEOUTFADER_H
#define _WIPEOUTFADER_H

/*
    __vt__12WipeOutFader:
    .4byte 0
    .4byte 0
    .4byte __dt__12WipeOutFaderFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8WipeBaseFv
    .4byte draw__8WipeBaseFv
    .4byte isWhite__12WipeOutFaderFv
    .4byte isBlack__12WipeOutFaderFv
    .4byte on_start__12WipeOutFaderFv
    .4byte do_draw__12WipeOutFaderFf
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct WipeBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void update();  // _10
	virtual void draw();    // _14

	// _00 VTBL
};

struct WipeOutFader : public CNode, public WipeBase {
	virtual ~WipeOutFader();     // _08
	virtual void isWhite();      // _18
	virtual void isBlack();      // _1C
	virtual void on_start();     // _20
	virtual void do_draw(float); // _24

	// _00 VTBL
};

#endif
