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
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct WipeBase {
	virtual void _00() = 0; // _00
	virtual void _04() = 0; // _04
	virtual void update();  // _08
	virtual void draw();    // _0C

	// _00 VTBL
};

struct WipeOutInFader : public CNode, public WipeBase {
	virtual ~WipeOutInFader();    // _00
	virtual void getChildCount(); // _04
	virtual void update();        // _08
	virtual void draw();          // _0C
	virtual void isWhite();       // _10
	virtual void isBlack();       // _14
	virtual void on_start();      // _18
	virtual void do_draw(float);  // _1C

	// _00 VTBL
};

#endif
