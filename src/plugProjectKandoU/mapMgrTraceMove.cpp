#include "Game/MapMgr.h"
#include "Sys/TriangleTable.h"
#include "Sys/Cylinder.h"
#include "Game/TDispTriangle.h"
#include "nans.h"

namespace Game {

u8 MapMgr::mTraceMoveOptLevel = 1;

/**
 * @brief This function traces the movement of an object in the game world.
 * It divides the movement into smaller steps if the movement length is greater than the object's radius.
 * It returns a list of triangles that the object would collide with during its movement.
 *
 * @note Address: 0x8020508C
 * @note Size: 0x114
 */
Sys::TriIndexList* ShapeMapMgr::traceMove(Game::MoveInfo& info, f32 stepLength)
{
	Sys::TriIndexList* triList;
	mTotalTraceCount++;
	f32 len    = stepLength;
	int steps  = 1;
	f32 radius = info.mMoveSphere->mRadius;
	f32 length = info.mVelocity->length();

	do {
		if (len * length > radius) {
			steps *= 2;
			len *= 0.5f;
			continue;
		}

		break;
	} while (steps <= 8);

	for (int i = 0; i < steps; i++) {
		triList = MapMgr::traceMove(mMapCollision, info, len);
	}

	mTotalStepCount += steps;

	return triList;
}

/**
 * @note Address: 0x802051A0
 * @note Size: 0x20
 */
Sys::TriIndexList* MapMgr::traceMove(MapCollision& coll, Game::MoveInfo& info, f32 p1)
{
	return traceMove_test1203_cylinder(coll, info, p1);
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x30C
//  */
// void MapMgr::traceMove_test1030_1(MapCollision&, Game::MoveInfo&, f32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x802051C0
 * @note Size: 0x3BC
 */
Sys::TriIndexList* MapMgr::traceMove_test1203_cylinder(MapCollision& coll, Game::MoveInfo& info, f32 deltaTime)
{
	Sys::Sphere* moveSphere = info.mMoveSphere; // r26
	Vector3f* velocity      = info.mVelocity;   // r25

	Sys::VertexTable* vertTable = coll.mDivider->mVertexTable; // r24

	// some debug printing
	if (MapMgr::traceMoveDebug) {
		P2DEBUG(getMinY(moveSphere->mPosition));
	}

	Vector3f startPos = moveSphere->mPosition;

	// update position one step
	moveSphere->mPosition = moveSphere->mPosition + (*velocity) * deltaTime;

	Sys::TriangleTable* triTable = coll.mDivider->mTriangleTable;            // r19
	Sys::TriIndexList* triList   = coll.mDivider->findTriLists(*moveSphere); // r23

	// loop through all triangles in all lists to see what we're interacting with
	for (triList; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
		mTotalTriCount += triList->getNum();

		for (int i = 0; i < triList->getNum(); i++) {
			int idx            = triList->getIndex(i);       // r21
			Sys::Triangle* tri = triTable->getTriangle(idx); // r29

			// if optimisation level is high enough, get rid of things we're not even barely touching
			// (NB: opt level is 1 in vanilla)
			if (mTraceMoveOptLevel >= 1) {
				if (!tri->fastIntersect(*moveSphere)) {
					mMissedIntersectionCount++;
					continue;
				}
			}

			// debug printing enabled probably
			if (traceMoveDebug) {
				Sys::Triangle::debug = true;
			}

			Sys::Triangle::SphereSweep sweep;
			sweep.mStartPos = startPos;
			sweep.mSphere   = *moveSphere;

			if (info.mDoHardIntersect) {
				sweep.mSweepType = Sys::Triangle::SphereSweep::ST_SphereIntersectPlane;
			}

			bool isIntersecting;
			// this is never not IT_Triangle, so this cylinder code never runs
			if (info.mIntersectType != Game::MoveInfo::IT_Triangle) {
				// check cylinder instead of triangle
				Sys::Cylinder cylinder(moveSphere->mPosition, info.mCylinderAxis, info.mCylinderHeight, moveSphere->mRadius);
				f32 overlap;
				isIntersecting = cylinder.intersect(*tri, overlap);

				// update sweep intersection "results"
				sweep.mNormal             = tri->mTrianglePlane.mNormal;
				sweep.mDistanceFromRadius = overlap;
				sweep.mIntersectionPoint  = moveSphere->mPosition;
			} else {
				// intersect with tri
				isIntersecting = tri->intersect(*vertTable, sweep);
			}

			// we're intersecting something!
			if (isIntersecting) {
				// add info of triangle to array
				if (info.mTriangleArray) {
					info.mTriangleArray->store(*tri, *vertTable, idx);
				}

				// if we're a rigid body with a resolveCollision callback, do said callback
				if (info.mIntersectCallback) {
					info.mIntersectCallback->invoke(sweep.mIntersectionPoint, sweep.mNormal);
				}

				if (sweep.mNormal.y >= info.mFloorThreshold) {
					// triangle we're intersecting is flat enough to be floor
					info.mFloorTriangle = tri;
					info.mFloorNormal   = sweep.mNormal;

				} else if (FABS(sweep.mNormal.y) <= info.mWallThreshold) {
					// triangle we're intersecting is vertical enough to be wall
					info.mWallTriangle = tri;
					info.mWallNormal   = sweep.mNormal;
				}

				// update position and velocity based on rigid body collision
				f32 impactAmt     = sweep.mNormal.dot(*velocity);
				f32 elasticFactor = (1.0f + info.mRestitution); // res of 0 = perfectly inelastic; res of 1 = perfectly elastic

				// slow velocity backward along line of impact, proportional to elasticity and how head-on it was
				*velocity = *velocity - sweep.mNormal * (elasticFactor * impactAmt);

				// shift position along line of impact so we're not physically overlapping the object
				moveSphere->mPosition = moveSphere->mPosition + sweep.mNormal * sweep.mDistanceFromRadius;
			}
			Sys::Triangle::debug = false;
		}
	}

	return triList;
}

} // namespace Game
