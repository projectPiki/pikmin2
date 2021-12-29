#ifndef _PLATFORM_H
#define _PLATFORM_H

/*
    __vt__8Platform:
    .4byte 0
    .4byte 0
    .4byte __dt__8PlatformFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct Platform : public CNode {
	virtual ~Platform();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
