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

	virtual Vector3f getPosition();                     // _08
	virtual void getBoundingSphere(Sys::Sphere&) = 0;   // _10
	virtual f32 getFaceDir()                     = 0;   // _64
	virtual void setVelocity(Vector3f& vel);            // _68
	virtual Vector3f getVelocity();                     // _6C
	virtual void onSetPosition(Vector3f& dest);         // _70
	virtual void updateTrMatrix() = 0;                  // _78
	virtual void getVelocityAt(Vector3f&, Vector3f&);   // _184
	virtual f32 getAngularEffect(Vector3f&, Vector3f&); // _188
	virtual void applyImpulse(Vector3f&, Vector3f&);    // _18C
	virtual void onSetPosition() { }                    // _1B0 (weak)

	bool createParticles(int);
	void releaseParticles();
	void updateParticlePositions();
	void computeForces(f32);
	void tracemoveCallback(Vector3f&, Vector3f&);
	void simulate(f32);

	// Unused/inlined:
	void getContactParticeRatio();
	int getContactParticleNum();
	int getParticleNum();
	void simulateCylinder(Sys::Cylinder&, f32);

	DynParticle* mDynParticle;      // _178
	Rigid mRigid;                   // _17C
	Vector3f mRotation;             // _2F4
	Vector3f mTransformedPosition;  // _300
	DynParticle* mCurrentChildPtcl; // _30C
	u8 mCanBounce;                  // _310
	bool mHasCollided;              // _311
};
} // namespace Game

#endif
