#ifndef _SYSTIMERS_H
#define _SYSTIMERS_H

/*
    __vt__9SysTimers:
    .4byte 0
    .4byte 0
    .4byte __dt__9SysTimersFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C
};

struct SysTimers : public CNode {
	virtual ~SysTimers(); // _08
};

#endif
