#ifndef _WIPEBASE_H
#define _WIPEBASE_H

/*
    __vt__8WipeBase:
    .4byte 0
    .4byte 0
    .4byte __dt__8WipeBaseFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8WipeBaseFv
    .4byte draw__8WipeBaseFv
    .4byte isWhite__8WipeBaseFv
    .4byte isBlack__8WipeBaseFv
    .4byte on_start__8WipeBaseFv
    .4byte do_draw__8WipeBaseFf
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct WipeBase : public CNode {
	virtual ~WipeBase();          // _00
	virtual void getChildCount(); // _04
	virtual void update();        // _08
	virtual void draw();          // _0C
	virtual void isWhite();       // _10
	virtual void isBlack();       // _14
	virtual void on_start();      // _18
	virtual void do_draw(float);  // _1C
	virtual void _20() = 0;       // _20

	// _00 VTBL
};

#endif
