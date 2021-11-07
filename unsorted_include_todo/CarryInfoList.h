#ifndef _CARRYINFOLIST_H
#define _CARRYINFOLIST_H

struct CarryInfoList {
	virtual ~CarryInfoList();     // _00
	virtual void init();          // _04
	virtual void update();        // _08
	virtual void draw(Graphics&); // _0C
	virtual void isFinish();      // _10

	// _00 VTBL
};

#endif
