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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct WipeBase : public CNode {
	virtual ~WipeBase();         // _08
	virtual void update();       // _10
	virtual void draw();         // _14
	virtual void isWhite();      // _18
	virtual void isBlack();      // _1C
	virtual void on_start();     // _20
	virtual void do_draw(float); // _24
	virtual void _28() = 0;      // _28

	// _00 VTBL
};

#endif
