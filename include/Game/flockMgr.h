#ifndef _FLOCKMGR_H
#define _FLOCKMGR_H

#include "types.h"
#include "Sys/Sphere.h"
#include "MonoObjectMgr.h"
#include "Container.h"

struct Viewport;
struct J3DModelData;

namespace Game {
struct TFlock {
	Vector3f _00; // _00

	virtual void makeMatrix() = 0; // _08
	virtual bool isVisible();      // _0C
	virtual bool isWeed();         // _10
	virtual bool fear();           // _14
	virtual f32 getRadius();       // _18
	virtual bool damaged(f32);     // _1C
	virtual void constructor();    // _20

	// _0C VTBL
};

struct BaseFlockMgr {
	virtual int getMaxObjects()     = 0;                       // _08
	virtual int getNumObjects()     = 0;                       // _0C
	virtual bool isFlagAlive(int)   = 0;                       // _10
	virtual TFlock* getFlock(int)   = 0;                       // _14
	virtual void killFlock(TFlock*) = 0;                       // _18
	virtual void do_update();                                  // _1C (weak)
	virtual void do_update_boundSphere() = 0;                  // _20
	virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _24
	virtual bool isWeed(int);                                  // _28 (weak)
	virtual bool fear(int);                                    // _2C (weak)

	void update();
	void getNearestFlock(Vector3f&);
	void attackFlock(int, f32);
	void resolveCollision(f32);

	// _00 VTBL
	int _04;                // _04
	u32 _08;                // _08
	Sys::Sphere _0C;        // _0C
	bool* m_isAgentVisible; // _1C
};

template <typename T>
struct TFlockMgr : public BaseFlockMgr, public Container<T> {
	virtual int getMaxObjects();     // _08
	virtual int getNumObjects();     // _0C
	virtual bool isFlagAlive(int);   // _10
	virtual TFlock* getFlock(int);   // _14
	virtual void killFlock(TFlock*); // _18
	virtual T* get(void*);           // _5C
	virtual void* getNext(void*);    // _60
	virtual void* getStart();        // _64
	virtual void* getEnd();          // _68
	virtual ~TFlockMgr();            // _6C

	// _00     = VTBL
	// _00-_20 = BaseFlockMgr
	// _20-_3C = Container
	MonoObjectMgr<T> m_monoObjectMgr; // _3C
};
} // namespace Game

#endif
