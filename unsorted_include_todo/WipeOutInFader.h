#ifndef _WIPEOUTINFADER_H
#define _WIPEOUTINFADER_H

/*
    __vt__14WipeOutInFader:
    .4byte 0
    .4byte 0
    .4byte __dt__14WipeOutInFaderFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8WipeBaseFv
    .4byte draw__8WipeBaseFv
    .4byte isWhite__14WipeOutInFaderFv
    .4byte isBlack__14WipeOutInFaderFv
    .4byte on_start__14WipeOutInFaderFv
    .4byte do_draw__14WipeOutInFaderFf
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

struct WipeOutInFader : public CNode, public WipeBase {
	virtual ~WipeOutInFader();   // _08
	virtual void isWhite();      // _18
	virtual void isBlack();      // _1C
	virtual void on_start();     // _20
	virtual void do_draw(float); // _24

	// _00 VTBL
};

#endif
