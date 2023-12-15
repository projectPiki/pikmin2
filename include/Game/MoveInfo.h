#ifndef _GAME_MOVEINFO_H
#define _GAME_MOVEINFO_H

#include "IDelegate.h"
#include "Sys/Sphere.h"
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
		_0C                  = 0.0f;
		mIntersectCallback   = nullptr;
		mBounceTriangle      = nullptr;
		_74                  = 0;
		mUseIntersectionAlgo = 0;
		_18                  = 0;
		mWallTriangle        = nullptr;
		mInfoOrigin          = nullptr;
		_90                  = 0;
		mTriangleArray       = nullptr;
		mWallThreshold       = JMath::sincosTable_.mTable[256].first; // pi/2
		mBounceThreshold     = 0.6f;
		mRoomIndex           = -1;
		_4C                  = nullptr;
		mIntersectType       = IT_Triangle;
	}

	enum IntersectType { IT_Triangle = 0, IT_Cylinder = 1 };

	Sys::Sphere* mMoveSphere;                                         // _00
	Vector3f* mVelocity;                                              // _04
	f32 mTraceRadius;                                                 // _08
	f32 _0C;                                                          // _0C
	Delegate2<DynCreature, Vector3f&, Vector3f&>* mIntersectCallback; // _10
	Creature* mInfoOrigin;                                            // _14
	u8 _18;                                                           // _18
	u8 mUseIntersectionAlgo;                                          // _19
	u8 mIntersectType;                                                // _1A (IntersectType)
	Vector3f mDirection;                                              // _1C
	f32 mDistance;                                                    // _28
	f32 mWallThreshold;                                               // _2C
	f32 mBounceThreshold;                                             // _30
	u8 _34[16];                                                       // _34
	Sys::Triangle* mBounceTriangle;                                   // _44
	Sys::Triangle* mWallTriangle;                                     // _48
	Sys::Triangle* _4C;                                               // _4C
	Vector3f mPosition;                                               // _50
	Vector3f mReflectPosition;                                        // _5C
	Vector3f _68;                                                     // _68, related to tri at _4C
	u8 _74;                                                           // _74
	Vector3f mUpDirection;                                            // _78
	Vector3f mBaseSpherePos;                                          // _84, the bottom of the move sphere
	u8 _90;                                                           // _90
	TDispTriangleArray* mTriangleArray;                               // _94
	int mRoomIndex;                                                   // _98
};
} // namespace Game

#endif
