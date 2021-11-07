#ifndef _CARRYINFOMGR_H
#define _CARRYINFOMGR_H

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
