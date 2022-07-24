#ifndef _GRAPHICS_H
#define _GRAPHICS_H

/*
    __vt__8Graphics:
    .4byte 0
    .4byte 0
    .4byte doJ3DDrawInit__8GraphicsFv
    .4byte doJ3DDraw__8GraphicsFi
    .4byte doJ3DFrameInit__8GraphicsFv
    .4byte doJ3DAnimation__8GraphicsFv
    .4byte doJ3DUpdateInit__8GraphicsFv
    .4byte doJ3DSetView__8GraphicsFi
    .4byte doJ3DViewCalc__8GraphicsFv
    .4byte 0
*/

struct Graphics {
	virtual void doJ3DDrawInit();   // _08 (inline)
	virtual void doJ3DDraw(int);    // _0C (inline)
	virtual void doJ3DFrameInit();  // _10 (inline)
	virtual void doJ3DAnimation();  // _14 (inline)
	virtual void doJ3DUpdateInit(); // _18 (inline)
	virtual void doJ3DSetView(int); // _1C (inline)
	virtual void doJ3DViewCalc();   // _20 (inline)
	virtual void _24() = 0;         // _24
};

#endif
