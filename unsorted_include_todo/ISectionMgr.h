#ifndef _ISECTIONMGR_H
#define _ISECTIONMGR_H

struct ISectionMgr {
	virtual void _00() = 0;           // _00
	virtual void getCurrentSection(); // _04
	virtual void _08() = 0;           // _08

	// _00 VTBL
};

#endif
