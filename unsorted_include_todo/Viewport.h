#ifndef _VIEWPORT_H
#define _VIEWPORT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct Viewport : public CNode {
	virtual ~Viewport();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
