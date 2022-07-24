#ifndef _CARRYINFOMGR_H
#define _CARRYINFOMGR_H

/*
    __vt__12CarryInfoMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__12CarryInfoMgrFv
    .4byte loadResource__12CarryInfoMgrFv
    .4byte update__12CarryInfoMgrFv
    .4byte draw__12CarryInfoMgrFR8Graphics
    .4byte regist__12CarryInfoMgrFP14CarryInfoOwner
    .4byte scratch__12CarryInfoMgrFP14CarryInfoOwner
*/

struct CarryInfoMgr {
	virtual ~CarryInfoMgr();               // _08
	virtual void loadResource();           // _0C
	virtual void update();                 // _10
	virtual void draw(Graphics&);          // _14
	virtual void regist(CarryInfoOwner*);  // _18
	virtual void scratch(CarryInfoOwner*); // _1C

	// _00 VTBL
};

#endif
