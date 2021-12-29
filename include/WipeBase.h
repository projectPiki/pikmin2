#ifndef _WIPEBASE_H
#define _WIPEBASE_H

#include "CNode.h"

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
