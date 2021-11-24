#ifndef _GAME_GENERICOBJECTMGR_H
#define _GAME_GENERICOBJECTMGR_H

#include "types.h"

struct Graphics;
struct Viewport;

struct GenericObjectMgr {
	virtual void doAnimation() = 0;           // _00
	virtual void doEntry();                   // _04
	virtual void doSetView(int)          = 0; // _08
	virtual void doViewCalc()            = 0; // _0C
	virtual void doSimulation(float)     = 0; // _10
	virtual void doDirectDraw(Graphics&) = 0; // _14
	virtual void doSimpleDraw(Viewport*);     // _18
	virtual void loadResources();             // _1C
	virtual void resetMgr();                  // _20
	virtual bool pausable();                  // _24
	virtual bool frozenable();                // _28
	virtual u32 getMatrixLoadType();          // _2C
};

#endif
