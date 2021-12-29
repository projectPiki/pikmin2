#ifndef _LIGHTOBJ_H
#define _LIGHTOBJ_H

/*
    __vt__8LightObj:
    .4byte 0
    .4byte 0
    .4byte __dt__8LightObjFv
    .4byte getChildCount__5CNodeFv
    .4byte update__8LightObjFv
    .4byte set__8LightObjFR7Matrixf
    .4byte drawPos__8LightObjFR8Graphics
    .4byte drawPos__8LightObjFR8GraphicsR7Matrixf
    .4byte drawPos__8LightObjFR8GraphicsR6Camera
*/

struct CNode {
	virtual ~CNode();             // _00
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
