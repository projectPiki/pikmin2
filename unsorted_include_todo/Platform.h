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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct Platform : public CNode {
	virtual ~Platform(); // _08 (weak)
};

#endif
