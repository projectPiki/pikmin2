#ifndef _SYSTIMERS_H
#define _SYSTIMERS_H

struct CNode {
	virtual void _00() = 0;       // _00
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
