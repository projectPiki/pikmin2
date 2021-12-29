#ifndef _CARRYINFOLIST_H
#define _CARRYINFOLIST_H

/*
    __vt__13CarryInfoList:
    .4byte 0
    .4byte 0
    .4byte __dt__13CarryInfoListFv
    .4byte init__13CarryInfoListFv
    .4byte update__13CarryInfoListFv
    .4byte draw__13CarryInfoListFR8Graphics
    .4byte isFinish__13CarryInfoListFv
*/

struct CarryInfoList {
	virtual ~CarryInfoList();     // _00
	virtual void init();          // _04
	virtual void update();        // _08
	virtual void draw(Graphics&); // _0C
	virtual void isFinish();      // _10

	// _00 VTBL
};

#endif
