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

struct MoveInfo {
	inline MoveInfo(Sys::Sphere* sphere, Vector3f* velocity, f32 radius)
	    : mMoveSphere(sphere)
	    , mVelocity(velocity)
	    , mTraceRadius(radius)
	{
		mUnused0             = 0.0f;
		mIntersectCallback   = nullptr;
		mBounceTriangle      = nullptr;
		mUnused3             = 0;
		mUseIntersectionAlgo = 0;
		mUnused1             = 0;
		mWallTriangle        = nullptr;
		mInfoOrigin          = nullptr;
		mMapCode.mContents   = 0;
		mTriangleArray       = nullptr;
		mWallThreshold       = JMath::sincosTable_.mTable[256].first; // pi/2
		mBounceThreshold     = 0.6f;
		mRoomIndex           = -1;
		mOtherTriangle       = nullptr;
		mIntersectType       = IT_Triangle;
	}

	inline MoveInfo(Sys::Sphere* sphere, Vector3f* velocity, f32 radius, Delegate2<DynCreature, Vector3f&, Vector3f&>* delegate)
	    : mMoveSphere(sphere)
	    , mVelocity(velocity)
	    , mTraceRadius(radius)
	{
		mUnused0             = 0.0f;
		mIntersectCallback   = delegate;
		mBounceTriangle      = nullptr;
		mUnused3             = 0;
		mUseIntersectionAlgo = 0;
		mUnused1             = 0;
		mWallTriangle        = nullptr;
		mInfoOrigin          = nullptr;
		mMapCode.mContents   = 0;
		mTriangleArray       = nullptr;
		mWallThreshold       = JMath::sincosTable_.mTable[256].first; // pi/2
		mBounceThreshold     = 0.6f;
		mRoomIndex           = -1;
		mOtherTriangle       = nullptr;
		mIntersectType       = IT_Triangle;
	}

	enum IntersectType { IT_Triangle = 0, IT_Cylinder = 1 };

	Sys::Sphere* mMoveSphere;                                         // _00
	Vector3f* mVelocity;                                              // _04
	f32 mTraceRadius;                                                 // _08
	f32 mUnused0;                                                     // _0C
	Delegate2<DynCreature, Vector3f&, Vector3f&>* mIntersectCallback; // _10
	Creature* mInfoOrigin;                                            // _14
	u8 mUnused1;                                                      // _18
	u8 mUseIntersectionAlgo;                                          // _19
	u8 mIntersectType;                                                // _1A (IntersectType)
	Vector3f mDirection;                                              // _1C
	f32 mDistance;                                                    // _28
	f32 mWallThreshold;                                               // _2C
	f32 mBounceThreshold;                                             // _30
	u8 mUnused2[16];                                                  // _34
	Sys::Triangle* mBounceTriangle;                                   // _44
	Sys::Triangle* mWallTriangle;                                     // _48
	Sys::Triangle* mOtherTriangle;                                    // _4C, water triangle?
	Vector3f mPosition;                                               // _50
	Vector3f mReflectPosition;                                        // _5C
	Vector3f mOtherPosition;                                          // _68
	u8 mUnused3;                                                      // _74
	Vector3f mUpDirection;                                            // _78
	Vector3f mBaseSpherePos;                                          // _84, the bottom of the move sphere
	MapCode::Code mMapCode;                                           // _90
	TDispTriangleArray* mTriangleArray;                               // _94
	int mRoomIndex;                                                   // _98
};
} // namespace Game

#endif
