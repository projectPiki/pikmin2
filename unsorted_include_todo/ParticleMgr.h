#ifndef _PARTICLEMGR_H
#define _PARTICLEMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct ParticleMgr : public CNode {
	virtual ~ParticleMgr();                      // _00
	virtual void getChildCount();                // _04
	virtual void update();                       // _08
	virtual void doAnimation();                  // _0C
	virtual void doEntry();                      // _10
	virtual void doSetView(int);                 // _14
	virtual void doViewCalc();                   // _18
	virtual void draw(Viewport*, unsigned char); // _1C

	// _00 VTBL
};

#endif
