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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct LightObj : public CNode {
	virtual ~LightObj();                       // _08 (weak)
	virtual void update();                     // _10 (weak)
	virtual void set(Matrixf&);                // _14
	virtual void drawPos(Graphics&);           // _18
	virtual void drawPos(Graphics&, Matrixf&); // _1C
	virtual void drawPos(Graphics&, Camera&);  // _20
};

#endif
