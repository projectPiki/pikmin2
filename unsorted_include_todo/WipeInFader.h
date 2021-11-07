#ifndef _WIPEINFADER_H
#define _WIPEINFADER_H

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

struct WipeInFader : public CNode, public WipeBase {
	virtual ~WipeInFader();       // _00
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
