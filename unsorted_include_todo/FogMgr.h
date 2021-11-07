#ifndef _FOGMGR_H
#define _FOGMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct FogMgr : public CNode {
	virtual ~FogMgr();            // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
