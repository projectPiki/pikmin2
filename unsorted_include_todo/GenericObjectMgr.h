#ifndef _GENERICOBJECTMGR_H
#define _GENERICOBJECTMGR_H

/*
    __vt__16GenericObjectMgr:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte doEntry__16GenericObjectMgrFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__16GenericObjectMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
*/

struct GenericObjectMgr {
	virtual void _08() = 0;               // _08
	virtual void doEntry();               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void doSimpleDraw(Viewport*); // _20
	virtual void loadResources();         // _24
	virtual void resetMgr();              // _28
	virtual void pausable();              // _2C
	virtual void frozenable();            // _30
	virtual void getMatrixLoadType();     // _34

	// _00 VTBL
};

#endif
