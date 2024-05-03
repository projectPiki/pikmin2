#ifndef _GAME_MOVEINFO_H
#define _GAME_MOVEINFO_H

#include "IDelegate.h"
#include "Sys/Sphere.h"
#include "mapCode.h"
#include "Vector3.h"
#include "types.h"

namespace Sys {
struct Triangle;
} // namespace Sys

namespace Game {
struct BaseItem;
struct DynCreature;
struct Creature;
struct TDispTriangleArray;

typedef Delegate2<DynCreature, Vector3f&, Vector3f&> RigidBodyCallback;

struct MoveInfo {
	inline MoveInfo(Sys::Sphere* sphere, Vector3f* velocity, f32 restitution)
	    : mMoveSphere(sphere)
	    , mVelocity(velocity)
	    , mRestitution(restitution)
	{
		mUnused0           = 0.0f;
		mIntersectCallback = nullptr;
		mFloorTriangle     = nullptr;
		mUnused3           = 0;
		mDoHardIntersect   = false;
		mUnused1           = 0;
		mWallTriangle      = nullptr;
		mMovingCreature    = nullptr;
		mMapCode.mContents = 0;
		mTriangleArray     = nullptr;
		mWallThreshold     = JMASinShort(8192); // pi/2
		mFloorThreshold    = 0.6f;
		mRoomIndex         = -1;
		mOtherTriangle     = nullptr;
		mIntersectType     = IT_Triangle;
	}

	inline MoveInfo(Sys::Sphere* sphere, Vector3f* velocity, f32 restitution, RigidBodyCallback* delegate)
	    : mMoveSphere(sphere)
	    , mVelocity(velocity)
	    , mRestitution(restitution)
	{
		mUnused0           = 0.0f;
		mIntersectCallback = delegate;
		mFloorTriangle     = nullptr;
		mUnused3           = 0;
		mDoHardIntersect   = false;
		mUnused1           = 0;
		mWallTriangle      = nullptr;
		mMovingCreature    = nullptr;
		mMapCode.mContents = 0;
		mTriangleArray     = nullptr;
		mWallThreshold     = JMASinShort(8192); // pi/2
		mFloorThreshold    = 0.6f;
		mRoomIndex         = -1;
		mOtherTriangle     = nullptr;
		mIntersectType     = IT_Triangle;
	}

	enum IntersectType { IT_Triangle = 0, IT_Cylinder = 1 };

	Sys::Sphere* mMoveSphere;              // _00
	Vector3f* mVelocity;                   // _04
	f32 mRestitution;                      // _08, how elastic to make the collision (1=perfectly elastic, 0=perfectly inelastic)
	f32 mUnused0;                          // _0C
	RigidBodyCallback* mIntersectCallback; // _10
	Creature* mMovingCreature;             // _14
	u8 mUnused1;                           // _18
	bool mDoHardIntersect;                 // _19
	u8 mIntersectType;                     // _1A, see IntersectType enum - always IT_Triangle
	Vector3f mCylinderAxis;                // _1C, axis for cylinder-like collisions - never used
	f32 mCylinderHeight;                   // _28, length for cylinder-like collisions - never used
	f32 mWallThreshold;                    // _2C
	f32 mFloorThreshold;                   // _30, how vertical does the normal have to be to be considered floor?
	u8 mUnused2[16];                       // _34
	Sys::Triangle* mFloorTriangle;         // _44
	Sys::Triangle* mWallTriangle;          // _48
	Sys::Triangle* mOtherTriangle;         // _4C, not flat enough to be floor, not vertical enough to be wall
	Vector3f mFloorNormal;                 // _50, normal to mFloorTriangle
	Vector3f mWallNormal;                  // _5C, normal to mWallTriangle
	Vector3f mOtherNormal;                 // _68, normal to mOtherTriangle
	u8 mUnused3;                           // _74
	Vector3f mUnusedNormal;                // _78, only set, never used
	Vector3f mBaseSpherePos;               // _84, the bottom of the move sphere
	MapCode::Code mMapCode;                // _90
	TDispTriangleArray* mTriangleArray;    // _94
	int mRoomIndex;                        // _98
};
} // namespace Game

#endif
