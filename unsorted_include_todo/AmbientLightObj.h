#ifndef _AMBIENTLIGHTOBJ_H
#define _AMBIENTLIGHTOBJ_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct AmbientLightObj : public CNode {
	virtual ~AmbientLightObj();   // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

#endif
