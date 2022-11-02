#ifndef _GAME_DYNPARTICLE_H
#define _GAME_DYNPARTICLE_H

#include "MonoObjectMgr.h"
#include "Vector3.h"

struct Matrixf;

namespace Game {
/**
 * @fabricatedName
 */
struct _DynParticleParent {
	Vector3f _00;               // _00
	Vector3f _0C;               // _0C
	f32 _18;                    // _18
	_DynParticleParent* m_next; // _1C
	u8 _20[0x10];               // _18
};

/**
 * @size{0x34}
 * TODO: I suspect there's a common erased base interface that defines this
 * vtable.
 */
struct DynParticle : _DynParticleParent {
	DynParticle();

	virtual void constructor();               // _08 (weak)
	virtual void doAnimation();               // _0C (weak)
	virtual void doEntry();                   // _10 (weak)
	virtual void doSetView(u32);              // _14 (weak)
	virtual void doViewCalc();                // _18 (weak)
	virtual void doSimulation(f32);           // _1C (weak)
	virtual void doDirectDraw(Graphics& gfx); // _20 (weak)

	DynParticle* getAt(int);

	// Unused/inlined:
	void release();
	void updateGlobal(Matrixf&);
};

struct DynParticleMgr : public MonoObjectMgr<DynParticle> {
	DynParticleMgr(int);

	// vtable 1
	virtual ~DynParticleMgr(); // _08 (weak)
	// vtable 2
	virtual void resetMgr(); // _80 (weak)
};
} // namespace Game

#endif
