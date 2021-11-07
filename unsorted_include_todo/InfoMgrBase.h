#ifndef _INFOMGRBASE_H
#define _INFOMGRBASE_H

struct InfoMgrBase {
	virtual ~InfoMgrBase(); // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};

#endif
