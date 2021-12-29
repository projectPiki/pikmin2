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
	virtual void _00() = 0;               // _00
	virtual void doEntry();               // _04
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void doSimpleDraw(Viewport*); // _18
	virtual void loadResources();         // _1C
	virtual void resetMgr();              // _20
	virtual void pausable();              // _24
	virtual void frozenable();            // _28
	virtual void getMatrixLoadType();     // _2C

	// _00 VTBL
};

#endif
