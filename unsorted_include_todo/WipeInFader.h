#ifndef _WIPEINFADER_H
#define _WIPEINFADER_H

/*
    __vt__11WipeInFader:
    .4byte 0
    .4byte 0
    .4byte __dt__11WipeInFaderFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8WipeBaseFv
    .4byte draw__8WipeBaseFv
    .4byte isWhite__11WipeInFaderFv
    .4byte isBlack__11WipeInFaderFv
    .4byte on_start__8WipeBaseFv
    .4byte do_draw__11WipeInFaderFf
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct WipeBase {
	virtual void _08() = 0;  // _08
	virtual void _0C() = 0;  // _0C
	virtual void update();   // _10
	virtual void draw();     // _14
	virtual void _18() = 0;  // _18
	virtual void _1C() = 0;  // _1C
	virtual void on_start(); // _20

	// _00 VTBL
};

struct WipeInFader : public CNode, public WipeBase {
	virtual ~WipeInFader();      // _08
	virtual void isWhite();      // _18
	virtual void isBlack();      // _1C
	virtual void do_draw(float); // _24

	// _00 VTBL
};

#endif
