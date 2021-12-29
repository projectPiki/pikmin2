#ifndef _BLACKFADER_H
#define _BLACKFADER_H

/*
    __vt__10BlackFader:
    .4byte 0
    .4byte 0
    .4byte __dt__10BlackFaderFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8WipeBaseFv
    .4byte draw__8WipeBaseFv
    .4byte isWhite__10BlackFaderFv
    .4byte isBlack__10BlackFaderFv
    .4byte on_start__8WipeBaseFv
    .4byte do_draw__10BlackFaderFf
*/

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct WipeBase {
	virtual void _00() = 0;  // _00
	virtual void _04() = 0;  // _04
	virtual void update();   // _08
	virtual void draw();     // _0C
	virtual void _10() = 0;  // _10
	virtual void _14() = 0;  // _14
	virtual void on_start(); // _18

	// _00 VTBL
};

struct BlackFader : public CNode, public WipeBase {
	virtual ~BlackFader();        // _00
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
