#ifndef _GENERICOBJECTMGR_H
#define _GENERICOBJECTMGR_H

#include "types.h"

struct Graphics;
struct Viewport;

struct GenericObject {
	virtual void doAnimation()           = 0; // _00
	virtual void doEntry()               = 0; // _04
	virtual void doSetView(int)          = 0; // _08
	virtual void doViewCalc()            = 0; // _0C
	virtual void doSimulation(float)     = 0; // _10
	virtual void doDirectDraw(Graphics&) = 0; // _14
};

struct GenericObjectMgr {
	virtual void doAnimation() = 0;           // _00
	virtual void doEntry();                   // _04
	virtual void doSetView(int)          = 0; // _08
	virtual void doViewCalc()            = 0; // _0C
	virtual void doSimulation(float)     = 0; // _10
	virtual void doDirectDraw(Graphics&) = 0; // _14
	/**
	 * @reifiedAddress{8010A7C4}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void doSimpleDraw(Viewport*) { } // _18
	/**
	 * @reifiedAddress{8010A7C8}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void loadResources() { } // _1C
	/**
	 * @reifiedAddress{8010A7CC}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void resetMgr() { } // _20
	/**
	 * @reifiedAddress{8010A7D0}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual bool pausable() { return true; } // _24
	/**
	 * @reifiedAddress{8010A7D8}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual bool frozenable() { return true; } // _28
	/**
	 * @reifiedAddress{8010A7E0}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual u32 getMatrixLoadType() { return 0x0; } // _2C

	// VTBL _00
};

#endif
