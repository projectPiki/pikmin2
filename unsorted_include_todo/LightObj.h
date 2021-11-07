#ifndef _LIGHTOBJ_H
#define _LIGHTOBJ_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct LightObj : public CNode {
	virtual ~LightObj();                       // _00
	virtual void getChildCount();              // _04
	virtual void update();                     // _08
	virtual void set(Matrixf&);                // _0C
	virtual void drawPos(Graphics&);           // _10
	virtual void drawPos(Graphics&, Matrixf&); // _14
	virtual void drawPos(Graphics&, Camera&);  // _18

	// _00 VTBL
};

#endif
