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
	virtual ~CarryInfoMgr();               // _00
	virtual void loadResource();           // _04
	virtual void update();                 // _08
	virtual void draw(Graphics&);          // _0C
	virtual void regist(CarryInfoOwner*);  // _10
	virtual void scratch(CarryInfoOwner*); // _14

	// _00 VTBL
};

#endif
