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
	virtual ~CarryInfoList();     // _08
	virtual void init();          // _0C
	virtual void update();        // _10
	virtual void draw(Graphics&); // _14
	virtual void isFinish();      // _18

	// _00 VTBL
};

#endif
