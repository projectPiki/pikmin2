#ifndef _GAME_DYNPARTICLE_H
#define _GAME_DYNPARTICLE_H

#include "MonoObjectMgr.h"
#include "Vector3.h"

struct Matrixf;

namespace Game {
/**
 * @size{0x34}
 */
struct DynParticle {
	DynParticle()
	{
		mRadius          = 1.0f;
		mIsTouching      = false;
		mNext            = nullptr;
		mCollisionNormal = Vector3f(0.0f);
	}

	DynParticle* getAt(int);

	// Unused/inlined:
	void release();
	void updateGlobal(Matrixf&);

	// _30 = VTBL
	Vector3f mRotation;        // _00
	Vector3f mPosition;        // _0C
	f32 mRadius;               // _18
	DynParticle* mNext;        // _1C
	Vector3f mCollisionNormal; // _20
	u8 mIsTouching;            // _2C

	// NB: vtable has to go after the member declarations
	virtual void constructor() { }               // _08 (weak)
	virtual void doAnimation() { }               // _0C (weak)
	virtual void doEntry() { }                   // _10 (weak)
	virtual void doSetView(u32) { }              // _14 (weak)
	virtual void doViewCalc() { }                // _18 (weak)
	virtual void doSimulation(f32) { }           // _1C (weak)
	virtual void doDirectDraw(Graphics& gfx) { } // _20 (weak)
};

struct DynParticleMgr : public MonoObjectMgr<DynParticle> {
	DynParticleMgr(int);

	// vtable 1
	// virtual ~DynParticleMgr(); // _08 (weak)
	// vtable 2
	virtual void resetMgr(); // _80 (weak)

	// _00     = VTBL
	// _00-_30 = MonoObjectMgr
};

extern DynParticleMgr* dynParticleMgr;
} // namespace Game

#endif
