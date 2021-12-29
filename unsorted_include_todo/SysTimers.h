#ifndef _SYSTIMERS_H
#define _SYSTIMERS_H

/*
    __vt__9SysTimers:
    .4byte 0
    .4byte 0
    .4byte __dt__9SysTimersFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct SysTimers : public CNode {
	virtual ~SysTimers();         // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08

	// _00 VTBL
};

#endif
