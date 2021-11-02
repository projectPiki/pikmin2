#ifndef _GAME_GENERICOBJECTMGR_H
#define _GAME_GENERICOBJECTMGR_H

#include "types.h"
#include "Graphics.h"
#include "Viewport.h"

struct GenericObjectMgr {
	virtual void doAnimation();
	virtual void doEntry();
	virtual void doSetView(int);
	virtual void doViewCalc();
	virtual void doSimulation(float);
	virtual void doDirectDraw(Graphics&);
	virtual void doSimpleDraw(Viewport*);
	virtual void loadResources();
	virtual void resetMgr();
	virtual bool pausable();
	virtual bool frozenable();
	virtual u32 getMatrixLoadType();
};

#endif
