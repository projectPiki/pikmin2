#ifndef _FLOCKMGR_H
#define _FLOCKMGR_H

#include "Matrixf.h"
#include "types.h"
#include "Sys/Sphere.h"
#include "MonoObjectMgr.h"
#include "Container.h"

struct Viewport;
struct J3DModelData;

namespace Game {
struct TFlock : public Vector3f {
	inline TFlock()
	    : _40(0)
	{
	}

	virtual void makeMatrix() = 0;             // _08
	virtual bool isVisible() { return true; }  // _0C
	virtual bool isWeed() { return false; }    // _10
	virtual bool fear() { return false; }      // _14
	virtual f32 getRadius() { return 0.0f; }   // _18
	virtual bool damaged(f32) { return true; } // _1C
	virtual void constructor() { }             // _20

	// _00 - _0C Vector3f
	// _0C VTBL
	Matrixf _10; // _10
	u8 _40;      // _40
};

struct BaseFlockMgr {
	inline BaseFlockMgr()
	{
		mIsAgentVisible[1] = true;
		mIsAgentVisible[0] = true;
		_04                = -1;
		_08                = 0;
	}

	virtual int getMaxObjects()     = 0;                       // _08
	virtual int getNumObjects()     = 0;                       // _0C
	virtual bool isFlagAlive(int)   = 0;                       // _10
	virtual TFlock* getFlock(int)   = 0;                       // _14
	virtual void killFlock(TFlock*) = 0;                       // _18
	virtual void do_update() { }                               // _1C (weak)
	virtual void do_update_boundSphere() = 0;                  // _20
	virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _24
	virtual bool isWeed(int idx)                               // _28 (weak)
	{
		P2ASSERTBOUNDSLINE(145, 0, idx, getMaxObjects());
		return getFlock(idx)->isWeed();
	}
	virtual bool fear(int idx) // _2C (weak)
	{
		P2ASSERTBOUNDSLINE(152, 0, idx, getMaxObjects());
		return getFlock(idx)->fear();
	}

	void update();
	void getNearestFlock(Vector3f&);
	int attackFlock(int, f32);
	void resolveCollision(f32);

	// _00 VTBL
	int _04;                 // _04
	u32 _08;                 // _08
	Sys::Sphere _0C;         // _0C
	bool mIsAgentVisible[2]; // _1C, might be 4, IDK
};

template <typename T>
struct TFlockMgr : public BaseFlockMgr, public Container<T> {
	inline TFlockMgr()
	    : BaseFlockMgr()
	    , Container<T>()
	    , mMonoObjectMgr()
	{
	}

	virtual int getMaxObjects() { return mMonoObjectMgr.mMax; }                     // _08
	virtual int getNumObjects() { return mMonoObjectMgr.mActiveCount; }             // _0C
	virtual bool isFlagAlive(int idx) { return mMonoObjectMgr.mOpenIds[idx] == 0; } // _10
	virtual TFlock* getFlock(int idx) { return mMonoObjectMgr.getAt(idx); }         // _14
	virtual void killFlock(TFlock* flock) { mMonoObjectMgr.kill((T*)flock); }       // _18
	virtual T* get(void* idx) { return mMonoObjectMgr.get(idx); }                   // _5C
	virtual void* getNext(void* idx) { return mMonoObjectMgr.getNext(idx); }        // _60
	virtual void* getStart() { return mMonoObjectMgr.getStart(); }                  // _64
	virtual void* getEnd() { return mMonoObjectMgr.getEnd(); }                      // _68

	TFlock* getValidFlock(int idx)
	{
		P2ASSERTBOUNDSLINE(171, 0, idx, getMaxObjects());
		return getFlock(idx);
	}

	// _00     = VTBL
	// _00-_20 = BaseFlockMgr
	// _20-_3C = Container
	MonoObjectMgr<T> mMonoObjectMgr; // _3C
};
} // namespace Game

#endif
