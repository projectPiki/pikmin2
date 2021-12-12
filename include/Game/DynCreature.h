#ifndef _GAME_DYNCREATURE_H
#define _GAME_DYNCREATURE_H

#include "Game/Creature.h"
#include "Game/Rigid.h"
#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Cylinder;
} // namespace Sys

namespace Game {
struct DynParticle;
struct DynCreature : public Creature {
	DynCreature();

	void tracemoveCallback(Vector3f&, Vector3f&);

	// Unused/inlined:
	void getContactParticeRatio();
	int getContactParticleNum();
	int getParticleNum();
	void simulateCylinder(Sys::Cylinder&, float);

	DynParticle* m_dynParticle; // _178
	Rigid m_rigid;              // _17C
	Vector3f _2F4;              // _2F4
	Vector3f _300;              // _300
	u32 _30C;                   // _30C
	u8 _310;                    // _310
	u8 _311;                    // _311
};
} // namespace Game

#endif
