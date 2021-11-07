#ifndef _PLATFORM_H
#define _PLATFORM_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct Platform : public CNode {
	virtual ~Platform();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
