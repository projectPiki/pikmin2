#ifndef _PARTICLEMGR_H
#define _PARTICLEMGR_H

/*
    __vt__11ParticleMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__11ParticleMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte update__11ParticleMgrFv
    .4byte doAnimation__11ParticleMgrFv
    .4byte doEntry__11ParticleMgrFv
    .4byte doSetView__11ParticleMgrFi
    .4byte doViewCalc__11ParticleMgrFv
    .4byte draw__11ParticleMgrFP8ViewportUc
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct ParticleMgr : public CNode {
	virtual ~ParticleMgr();                      // _08
	virtual void update();                       // _10
	virtual void doAnimation();                  // _14
	virtual void doEntry();                      // _18
	virtual void doSetView(int);                 // _1C
	virtual void doViewCalc();                   // _20
	virtual void draw(Viewport*, unsigned char); // _24

	// _00 VTBL
};

#endif
