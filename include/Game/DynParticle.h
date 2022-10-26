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
	float _18;                  // _18
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

	virtual void constructor();               // _00
	virtual void doAnimation();               // _04
	virtual void doEntry();                   // _08
	virtual void doSetView(u32);              // _0C
	virtual void doViewCalc();                // _10
	virtual void doSimulation(float);         // _14
	virtual void doDirectDraw(Graphics& gfx); // _18

	DynParticle* getAt(int);

	// Unused/inlined:
	void release();
	void updateGlobal(Matrixf&);
};

struct DynParticleMgr : MonoObjectMgr<DynParticle> {
	DynParticleMgr(int);

	// vtable 1
	virtual ~DynParticleMgr(); // _00
	// vtable 2
	virtual void resetMgr(); // _4C
};
} // namespace Game

#endif
