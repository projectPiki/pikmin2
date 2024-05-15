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
	    : mModelIdx(0)
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
	Matrixf mTransformationMtx; // _10
	u8 mModelIdx;               // _40
};

struct BaseFlockMgr {
	inline BaseFlockMgr()
	{
		mIsAgentVisible[1] = true;
		mIsAgentVisible[0] = true;
		mMaxAttackers      = -1;
		mNumAttackers      = 0;
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

	/**
	 * @fabricated but likely existed based on asserts
	 * Worth noting that this function is supposed to only be one line long.
	 * @todo make this function one line long... somehow
	 */
	inline Vector3f getPosition(int idx)
	{
		P2ASSERTBOUNDSLINE(171, 0, idx, getMaxObjects());
		return *getFlock(idx);
	}
	/**
	 * @fabricated but likely existed based on asserts
	 */
	inline f32 getRadius(int idx)
	{
		P2ASSERTBOUNDSLINE(172, 0, idx, getMaxObjects());
		return getFlock(idx)->getRadius();
	}

	inline bool isAttackable()
	{
		bool check = false;
		if (mMaxAttackers == -1 || mNumAttackers < mMaxAttackers) {
			check = true;
		}

		return check;
	}

	void update();
	int getNearestFlock(Vector3f& pos);
	int attackFlock(int, f32);
	void resolveCollision(f32);

	// _00 VTBL
	int mMaxAttackers;                     // _04, -1 = no limit (uja), otherwise 5 (stone/weed)
	int mNumAttackers;                     // _08
	Sys::Sphere mActivationSpherePosition; // _0C
	bool mIsAgentVisible[2];               // _1C, might be 4, IDK
};

template <typename T>
struct TFlockMgr : public BaseFlockMgr, public Container<T> {
	inline TFlockMgr() { }

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
