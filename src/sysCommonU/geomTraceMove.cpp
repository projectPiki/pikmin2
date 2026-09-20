#include "Game/MoveInfo.h"
#include "Game/TDispTriangle.h"
#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "types.h"
#include "Game/MapMgr.h"

namespace Sys {

/**
 * @note Address: 0x8041FFA8
 * @note Size: 0x1C0
 */
void OBBTree::traceMove_new(Matrixf& startMatrix, Matrixf& endMatrix, Game::MoveInfo& moveInfo, f32 step)
{
	// set up input/outputs for traceMove_new calc
	Vec hitPos[8]; // needs to be Vec to not trigger a construct_array bc of default Vector3f ctor
	Sys::Triangle* resultTriangles[8];
	f32 hitDist[8];
	int hitCount = 0;

	Sphere* moveSphere = moveInfo.mMoveSphere;
	f32 traceRadius    = moveSphere->mRadius;

	// Check if advanced trace optimization is enabled
	if (Game::MapMgr::mTraceMoveOptLevel >= 2) {
		// Create a sphere representing the root sphere in the transformed space
		Sphere rootSphere = mRoot.mSphere;
		// Create a sphere representing the trace movement
		Sphere traceSphere(moveSphere->mPosition, traceRadius);

		rootSphere.mPosition = rootSphere.mPosition + startMatrix.getTranslation();

		// If there's no intersection between the two spheres, return early
		if (!rootSphere.intersect(traceSphere)) {
			return;
		}
	}

	moveSphere->mPosition = endMatrix.mtxMult(moveSphere->mPosition);

	// Create a sphere representing the hit sphere
	Sphere hitSphere(moveSphere->mPosition, traceRadius);

	// If we're using simple optimisation and we're not intersecting the hit sphere, update position
	if (Game::MapMgr::mTraceMoveOptLevel < 2 && !mRoot.mSphere.intersect(hitSphere)) {
		moveSphere->mPosition = startMatrix.mtxMult(moveSphere->mPosition);
		return;
	}

	// Perform the trace movement
	mRoot.traceMove_new(moveInfo, *mVertexTable, *mTriangleTable, startMatrix, endMatrix, hitCount, resultTriangles, hitDist,
	                    (Vector3f*)hitPos);

	moveSphere->mPosition = startMatrix.mtxMult(moveSphere->mPosition);
}

/**
 * @note Address: 0x80420168
 * @note Size: 0x2FC
 */
void OBB::traceMoveTriList_new(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable,
                               Matrixf& startMatrix, Matrixf& endMatrix, int& hitCount, Sys::Triangle** resultTris, f32* hitDists,
                               Vector3f* hitPositions)
{
	Sphere* moveSphere     = moveInfo.mMoveSphere; // r27
	Vector3f* moveVelocity = moveInfo.mVelocity;   // r26

	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		Triangle* tri = triangleTable.getTriangle(mTriIndexList.getIndex(i)); // r31
		Triangle::SphereSweep sweep;
		sweep.mStartPos         = moveSphere->mPosition;
		sweep.mSphere.mPosition = moveSphere->mPosition;
		sweep.mSphere.mRadius   = moveSphere->mRadius;
		if (moveInfo.mDoHardIntersect) {
			sweep.mSweepType = Triangle::SphereSweep::ST_SphereIntersectPlane;
		}
		if (!tri->intersect(vertexTable, sweep)) {
			continue;
		}

		sweep.mIntersectionPoint = startMatrix.mtxMult(sweep.mIntersectionPoint);

		Vector3f localNormal  = sweep.mNormal;
		Vector3f& worldNormal = sweep.mNormal;
		worldNormal           = endMatrix.multTranspose(worldNormal);

		if (moveInfo.mIntersectCallback) {
			moveInfo.mIntersectCallback->invoke(sweep.mIntersectionPoint, sweep.mNormal);
		}

		int index = mTriIndexList.getIndex(i);
		if (moveInfo.mTriangleArray) {
			moveInfo.mTriangleArray->store(startMatrix, *tri, vertexTable, index);
		}

		if (sweep.mNormal.y >= moveInfo.mFloorThreshold) {
			moveInfo.mFloorTriangle = tri;
			moveInfo.mFloorNormal   = sweep.mNormal;
		} else if (FABS(sweep.mNormal.y) <= moveInfo.mWallThreshold) {
			moveInfo.mWallTriangle = tri;
			moveInfo.mWallNormal   = sweep.mNormal;
		} else {
			moveInfo.mOtherTriangle = tri;
			moveInfo.mOtherNormal   = sweep.mNormal;
		}

		f32 impactAmt     = sweep.mNormal.dot(*moveVelocity);
		f32 elasticFactor = 1.0f + moveInfo.mRestitution;
		*moveVelocity     = *moveVelocity - sweep.mNormal * (elasticFactor * impactAmt);

		moveSphere->mPosition = moveSphere->mPosition + localNormal * sweep.mDistanceFromRadius;
	}
}

/**
 * @note Address: 0x80420464
 * @note Size: 0x7F0
 */
void OBB::traceMove_new(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable, Matrixf& startMatrix,
                        Matrixf& endMatrix, int& hitCount, Sys::Triangle** resultTris, f32* hitDists, Vector3f* hitPositions)
{
	Sphere* moveSphere = moveInfo.mMoveSphere;
	if (isLeaf()) {
		traceMoveTriList_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists, hitPositions);
	} else {
		f32 planeDist = mDivPlane.calcDist(moveSphere->mPosition);
		if (planeDist > moveSphere->mRadius) {
			if (mHalfA) {
				mHalfA->traceMove_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists,
				                      hitPositions);
			} else {
				traceMoveTriList_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists,
				                     hitPositions);
			}
			return;
		}

		if (planeDist < -moveSphere->mRadius) {
			if (mHalfB) {
				mHalfB->traceMove_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists,
				                      hitPositions);
			} else {
				traceMoveTriList_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists,
				                     hitPositions);
			}
			return;
		}

		if (mHalfA) {
			mHalfA->traceMove_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists,
			                      hitPositions);
		}

		if (mHalfB) {
			mHalfB->traceMove_new(moveInfo, vertexTable, triangleTable, startMatrix, endMatrix, hitCount, resultTris, hitDists,
			                      hitPositions);
		}
	}
}

/**
 * @note Address: 0x80420C54
 * @note Size: 0x98
 */
void OBBTree::traceMove_new_global(Game::MoveInfo& moveInfo, f32 step)
{
	Triangle* resultTris[8];
	f32 hitDists[8];
	Vec hitPositions[8];
	int hitCount   = 0;
	f32 moveRadius = moveInfo.mMoveSphere->mRadius;
	Sphere hitSphere(moveInfo.mMoveSphere->mPosition, moveRadius);

	if (mRoot.mSphere.intersect(hitSphere)) {
		mRoot.traceMove_new_global(moveInfo, *mVertexTable, *mTriangleTable, hitCount, resultTris, hitDists, (Vector3f*)hitPositions);
	}
}

/**
 * @note Address: 0x80420CEC
 * @note Size: 0x24C
 */
void OBB::traceMoveTriList_new_global(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable,
                                      int& hitCount, Sys::Triangle** resultTris, f32* hitDists, Vector3f* hitPositions)
{
	Sphere* moveSphere     = moveInfo.mMoveSphere; // r28
	Vector3f* moveVelocity = moveInfo.mVelocity;   // r27

	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		Triangle* tri = triangleTable.getTriangle(mTriIndexList.mObjects[i]); // r31
		Triangle::SphereSweep sweep;
		sweep.mStartPos         = moveSphere->mPosition;
		sweep.mSphere.mPosition = moveSphere->mPosition;
		sweep.mSphere.mRadius   = moveSphere->mRadius;
		if (moveInfo.mDoHardIntersect) {
			sweep.mSweepType = Triangle::SphereSweep::ST_SphereIntersectPlane;
		}
		if (!tri->intersect(vertexTable, sweep)) {
			continue;
		}

		Vector3f normal = sweep.mNormal;

		if (moveInfo.mIntersectCallback) {
			moveInfo.mIntersectCallback->invoke(sweep.mIntersectionPoint, sweep.mNormal);
		}

		if (sweep.mNormal.y >= moveInfo.mFloorThreshold) {
			moveInfo.mFloorTriangle = tri;
			moveInfo.mFloorNormal   = sweep.mNormal;
		} else if (FABS(sweep.mNormal.y) <= moveInfo.mWallThreshold) {
			moveInfo.mWallTriangle = tri;
			moveInfo.mWallNormal   = sweep.mNormal;
		} else {
			moveInfo.mOtherTriangle = tri;
			moveInfo.mOtherNormal   = sweep.mNormal;
		}

		f32 impactAmt     = sweep.mNormal.dot(*moveVelocity);
		f32 elasticFactor = 1.0f + moveInfo.mRestitution;
		*moveVelocity     = *moveVelocity - sweep.mNormal * (elasticFactor * impactAmt);

		moveSphere->mPosition = moveSphere->mPosition + normal * sweep.mDistanceFromRadius;
	}
}

/**
 * @note Address: 0x80420F38
 * @note Size: 0x6F0
 */
void OBB::traceMove_new_global(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable, int& hitCount,
                               Sys::Triangle** resultTris, f32* hitDists, Vector3f* hitPositions)
{
	Sphere* moveSphere = moveInfo.mMoveSphere;
	if (isLeaf()) {
		traceMoveTriList_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
	} else {
		f32 planeDist = mDivPlane.calcDist(moveSphere->mPosition);
		if (planeDist > moveSphere->mRadius) {
			if (mHalfA) {
				mHalfA->traceMove_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
			} else {
				traceMoveTriList_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
			}
			return;
		}

		if (planeDist < -moveSphere->mRadius) {
			if (mHalfB) {
				mHalfB->traceMove_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
			} else {
				traceMoveTriList_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
			}
			return;
		}

		if (mHalfA) {
			mHalfA->traceMove_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
		}

		if (mHalfB) {
			mHalfB->traceMove_new_global(moveInfo, vertexTable, triangleTable, hitCount, resultTris, hitDists, hitPositions);
		}
	}
}
} // namespace Sys
