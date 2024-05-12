#ifndef _GAME_RIGID_H
#define _GAME_RIGID_H

#include "Matrixf.h"
#include "Quat.h"
#include "types.h"
#include "BitFlag.h"

namespace Game {
/**
 * @size{0x88}
 */
struct RigidConfig {
	RigidConfig() { }

	inline void setMomentum(const Vector3f& momentum)
	{
		mMomentum        = mMomentum + momentum;
		mRotatedMomentum = mRotatedTransform.mtxMult(momentum);
	}

	Vector3f mPosition;        // _00, for mConfigs: (_034, _0BC)
	Vector3f mVelocity;        // _0C, for mConfigs: (_040, _0C8)
	Vector3f mForce;           // _18, for mConfigs: (_04C, _0D4)
	Vector3f mRotatedMomentum; // _24, for mConfigs: (_058, _0E0)
	Vector3f mMomentum;        // _30, for mConfigs: (_064, _0EC)
	Vector3f mTorque;          // _3C, for mConfigs: (_070, _0F8)
	Quat mPrimaryRotation;     // _48, for mConfigs: (_07C, _104)
	Matrixf mRotatedTransform; // _58, for mConfigs: (_08C, _114)
};

struct Rigid {
	Rigid();
	void initPosition(Vector3f&, Vector3f&);
	void initPositionIndex(Vector3f&, int index, Vector3f&);
	void updateMatrix(int index);
	void computeForces(int index);
	void integrate(f32, int);
	bool resolveCollision(int, Vector3f&, Vector3f&, f32);

	f32 mTimeStep;              // _000
	Matrixf mPrimaryMatrix;     // _004
	RigidConfig mConfigs[2];    // _034, [1] at _0BC
	Matrixf mTransformationMtx; // _144
	u8 _174;                    // _174
	BitFlag<u8> mFlags;         // _175
};
} // namespace Game

#endif
