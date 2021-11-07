#ifndef _GRAPHICS_H
#define _GRAPHICS_H

struct Graphics {
	virtual void doJ3DDrawInit();   // _00
	virtual void doJ3DDraw(int);    // _04
	virtual void doJ3DFrameInit();  // _08
	virtual void doJ3DAnimation();  // _0C
	virtual void doJ3DUpdateInit(); // _10
	virtual void doJ3DSetView(int); // _14
	virtual void doJ3DViewCalc();   // _18
	virtual void _1C() = 0;         // _1C

	// _00 VTBL
};

#endif
