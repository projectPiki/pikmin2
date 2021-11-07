#ifndef _JASINST_H
#define _JASINST_H

struct JASInst {
	virtual ~JASInst();     // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};

#endif
