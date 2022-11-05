#ifndef _GAME_DYNCREATURE_H
#define _GAME_DYNCREATURE_H

#include "Game/Creature.h"
#include "Game/Rigid.h"
#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Cylinder;
struct Sphere;
} // namespace Sys

namespace Game {
struct DynParticle;
struct DynCreature : public Creature {
	DynCreature();

	virtual Vector3f getPosition();                       // _08
	virtual void getBoundingSphere(Sys::Sphere&) = 0;     // _10
	virtual float getFaceDir()                   = 0;     // _64
	virtual void setVelocity(Vector3f& vel);              // _68
	virtual Vector3f getVelocity();                       // _6C
	virtual void onSetPosition(Vector3f& dest);           // _70
	virtual void updateTrMatrix() = 0;                    // _78
	virtual void getVelocityAt(Vector3f&, Vector3f&);     // _184
	virtual float getAngularEffect(Vector3f&, Vector3f&); // _188
	virtual void applyImpulse(Vector3f&, Vector3f&);      // _18C
	virtual void onSetPosition();                         // _1B0 (weak)

	void createParticles(int);
	void releaseParticles();
	void updateParticlePositions();
	void computeForces(float);
	void tracemoveCallback(Vector3f&, Vector3f&);
	void simulate(float);

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
