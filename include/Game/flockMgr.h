#ifndef _FLOCKMGR_H
#define _FLOCKMGR_H

#include "types.h"
#include "Sys/Sphere.h"

struct Viewport;
struct J3DModelData;

namespace Game {
struct TFlock;

struct BaseFlockMgr {
	virtual void getMaxObjects()    = 0;                       // _08
	virtual void getNumObjects()    = 0;                       // _0C
	virtual void isFlagAlive(int)   = 0;                       // _10
	virtual void getFlock(int)      = 0;                       // _14
	virtual void killFlock(TFlock*) = 0;                       // _18
	virtual void do_update();                                  // _1C
	virtual void do_update_boundSphere() = 0;                  // _20
	virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _24
	virtual void isWeed(int);                                  // _28
	virtual void fear(int);                                    // _2C

	void update();
	void getNearestFlock(Vector3f&);
	void attackFlock(int, float);
	void resolveCollision(float);

	// _00 VTBL
	u32 _04;         // _04
	u32 _08;         // _08
	Sys::Sphere _0C; // _0C
	bool* _1C;       // _1C
};
} // namespace Game

#endif
