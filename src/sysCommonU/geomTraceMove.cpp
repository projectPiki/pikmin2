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

		rootSphere.mPosition = rootSphere.mPosition + startMatrix.getPosition();

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

	Sphere sphere0; // 0x44
	Sphere sphere1; // 0x34

	Sphere* sphere0Ptr = &sphere0; // r29
	Sphere* sphere1Ptr = &sphere1; // r28

	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		Triangle* tri = triangleTable.getTriangle(mTriIndexList.mObjects[i]); // r31
		Triangle::SphereSweep sweep;
		sweep.mStartPos = moveSphere->mPosition;
		sweep.mSphere   = *moveSphere;
		if (moveInfo.mUseIntersectionAlgo) {
			sweep.mSweepType = Triangle::SphereSweep::ST_SphereIntersectPlane;
		}
		if (!tri->intersect(vertexTable, sweep)) {
			continue;
		}

		sphere0.mPosition = startMatrix.mtxMult(sphere0Ptr->mPosition);

		Vector3f pos      = sphere1.mPosition;
		sphere1.mPosition = endMatrix.multTranspose(sphere1.mPosition);

		if (moveInfo.mIntersectCallback) {
			moveInfo.mIntersectCallback->invoke(sphere0Ptr->mPosition, sphere1Ptr->mPosition);
		}

		int index = mTriIndexList.mObjects[i]; // r7
		if (moveInfo.mTriangleArray) {
			moveInfo.mTriangleArray->store(startMatrix, *tri, vertexTable, index);
		}

		if (sphere1.mPosition.y >= moveInfo.mBounceThreshold) {
			moveInfo.mBounceTriangle = tri;
			moveInfo.mPosition       = sphere1.mPosition;
		} else if (FABS(sphere1.mPosition.y) <= moveInfo.mWallThreshold) {
			moveInfo.mWallTriangle    = tri;
			moveInfo.mReflectPosition = sphere1.mPosition;
		} else {
			moveInfo._4C = tri;
			moveInfo._68 = sphere1.mPosition;
		}

		Vector3f vel  = *moveVelocity;
		f32 dotProd   = dot(sphere1.mPosition, vel);
		f32 rad       = 1.0f + moveInfo.mTraceRadius;
		f32 factor    = rad * dotProd;
		*moveVelocity = vel - sphere1.mPosition * factor;

		moveSphere->mPosition = moveSphere->mPosition + pos * sphere1.mRadius;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stmw      r19, 0x5C(r1)
	  mr        r20, r4
	  mr        r19, r3
	  lwz       r27, 0x0(r4)
	  mr        r21, r5
	  lwz       r26, 0x4(r4)
	  mr        r22, r6
	  mr        r23, r7
	  mr        r24, r8
	  addi      r29, r1, 0x44
	  addi      r28, r1, 0x34
	  li        r25, 0
	  li        r30, 0
	  b         .loc_0x2C4

	.loc_0x5C:
	  lwz       r3, 0xFC(r19)
	  li        r0, 0
	  lwz       r4, 0x24(r22)
	  lwzx      r3, r3, r30
	  stb       r0, 0x30(r1)
	  mulli     r0, r3, 0x60
	  lfs       f2, 0x0(r27)
	  add       r31, r4, r0
	  stfs      f2, 0x14(r1)
	  lfs       f1, 0x4(r27)
	  stfs      f1, 0x18(r1)
	  lfs       f0, 0x8(r27)
	  stfs      f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0xC(r27)
	  stfs      f0, 0x2C(r1)
	  lbz       r0, 0x19(r20)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  li        r0, 0x1
	  stb       r0, 0x30(r1)

	.loc_0xB8:
	  mr        r3, r31
	  mr        r4, r21
	  addi      r5, r1, 0x14
	  bl        -0x3860
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC
	  mr        r3, r23
	  mr        r4, r29
	  addi      r5, r1, 0x8
	  bl        -0x33566C
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x44(r1)
	  lfs       f6, 0x38(r1)
	  stfs      f1, 0x48(r1)
	  lfs       f29, 0x34(r1)
	  stfs      f0, 0x4C(r1)
	  lfs       f7, 0x3C(r1)
	  lfs       f2, 0x10(r24)
	  lfs       f1, 0x14(r24)
	  lfs       f0, 0x18(r24)
	  fmuls     f4, f6, f2
	  lfs       f5, 0x0(r24)
	  fmuls     f2, f6, f1
	  lfs       f3, 0x4(r24)
	  fmuls     f0, f6, f0
	  lfs       f1, 0x8(r24)
	  fmadds    f4, f29, f5, f4
	  lfs       f5, 0x20(r24)
	  fmadds    f2, f29, f3, f2
	  lfs       f3, 0x24(r24)
	  fmadds    f0, f29, f1, f0
	  lfs       f1, 0x28(r24)
	  fmadds    f4, f7, f5, f4
	  lfs       f31, 0x38(r1)
	  fmadds    f2, f7, f3, f2
	  lfs       f30, 0x3C(r1)
	  fmadds    f0, f7, f1, f0
	  stfs      f4, 0x34(r1)
	  stfs      f2, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  lwz       r3, 0x10(r20)
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x184:
	  lwz       r3, 0x94(r20)
	  lwz       r4, 0xFC(r19)
	  cmplwi    r3, 0
	  lwzx      r7, r4, r30
	  beq-      .loc_0x1A8
	  mr        r4, r23
	  mr        r5, r31
	  mr        r6, r21
	  bl        -0x2BDF2C

	.loc_0x1A8:
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x30(r20)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1DC
	  stw       r31, 0x44(r20)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x50(r20)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x54(r20)
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x58(r20)
	  b         .loc_0x230

	.loc_0x1DC:
	  fabs      f1, f1
	  lfs       f0, 0x2C(r20)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x214
	  stw       r31, 0x48(r20)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x5C(r20)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x60(r20)
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x64(r20)
	  b         .loc_0x230

	.loc_0x214:
	  stw       r31, 0x4C(r20)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x68(r20)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x6C(r20)
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x70(r20)

	.loc_0x230:
	  lfs       f4, 0x38(r1)
	  lfs       f7, 0x4(r26)
	  lfs       f5, 0x34(r1)
	  fmuls     f0, f4, f7
	  lfs       f8, 0x0(r26)
	  lfs       f3, 0x3C(r1)
	  lfs       f6, 0x8(r26)
	  fmadds    f2, f5, f8, f0
	  lfs       f1, 0x2080(r2)
	  lfs       f0, 0x8(r20)
	  fmadds    f2, f3, f6, f2
	  fadds     f0, f1, f0
	  fmuls     f2, f0, f2
	  fmuls     f1, f5, f2
	  fmuls     f0, f4, f2
	  fmuls     f3, f3, f2
	  fsubs     f2, f8, f1
	  fsubs     f1, f7, f0
	  fsubs     f0, f6, f3
	  stfs      f2, 0x0(r26)
	  stfs      f1, 0x4(r26)
	  stfs      f0, 0x8(r26)
	  lfs       f4, 0x40(r1)
	  lfs       f1, 0x0(r27)
	  fmuls     f0, f29, f4
	  lfs       f3, 0x4(r27)
	  fmuls     f2, f31, f4
	  lfs       f5, 0x8(r27)
	  fmuls     f4, f30, f4
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f2, f5, f4
	  stfs      f0, 0x0(r27)
	  stfs      f1, 0x4(r27)
	  stfs      f2, 0x8(r27)

	.loc_0x2BC:
	  addi      r30, r30, 0x4
	  addi      r25, r25, 0x1

	.loc_0x2C4:
	  lwz       r0, 0xF4(r19)
	  cmpw      r25, r0
	  blt+      .loc_0x5C
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  lmw       r19, 0x5C(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
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

	Sphere sphere1; // 0x28
	Sphere sphere0; // 0x38

	Sphere* sphere0Ptr = &sphere0; // r30
	Sphere* sphere1Ptr = &sphere1; // r29

	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		Triangle* tri = triangleTable.getTriangle(mTriIndexList.mObjects[i]); // r31
		Triangle::SphereSweep sweep;
		sweep.mStartPos = moveSphere->mPosition;
		sweep.mSphere   = *moveSphere;
		if (moveInfo.mUseIntersectionAlgo) {
			sweep.mSweepType = Triangle::SphereSweep::ST_SphereIntersectPlane;
		}
		if (!tri->intersect(vertexTable, sweep)) {
			continue;
		}

		Vector3f pos = sphere1.mPosition;

		if (moveInfo.mIntersectCallback) {
			moveInfo.mIntersectCallback->invoke(sphere0Ptr->mPosition, sphere1Ptr->mPosition);
		}

		if (sphere1.mPosition.y >= moveInfo.mBounceThreshold) {
			moveInfo.mBounceTriangle = tri;
			moveInfo.mPosition       = sphere1.mPosition;
		} else if (FABS(sphere1.mPosition.y) <= moveInfo.mWallThreshold) {
			moveInfo.mWallTriangle    = tri;
			moveInfo.mReflectPosition = sphere1.mPosition;
		} else {
			moveInfo._4C = tri;
			moveInfo._68 = sphere1.mPosition;
		}

		Vector3f vel  = *moveVelocity;
		f32 dotProd   = dot(sphere1.mPosition, vel);
		f32 rad       = 1.0f + moveInfo.mTraceRadius;
		f32 factor    = rad * dotProd;
		*moveVelocity = vel - sphere1.mPosition * factor;

		moveSphere->mPosition = moveSphere->mPosition + pos * sphere1.mRadius;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stmw      r21, 0x54(r1)
	  mr        r23, r4
	  mr        r22, r3
	  lwz       r28, 0x0(r4)
	  mr        r24, r5
	  lwz       r27, 0x4(r4)
	  mr        r25, r6
	  addi      r30, r1, 0x28
	  addi      r29, r1, 0x38
	  li        r26, 0
	  li        r31, 0
	  b         .loc_0x214

	.loc_0x54:
	  lwz       r3, 0xFC(r22)
	  li        r0, 0
	  lwz       r4, 0x24(r25)
	  lwzx      r3, r3, r31
	  stb       r0, 0x24(r1)
	  mulli     r0, r3, 0x60
	  lfs       f2, 0x0(r28)
	  add       r21, r4, r0
	  stfs      f2, 0x8(r1)
	  lfs       f1, 0x4(r28)
	  stfs      f1, 0xC(r1)
	  lfs       f0, 0x8(r28)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0xC(r28)
	  stfs      f0, 0x20(r1)
	  lbz       r0, 0x19(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  li        r0, 0x1
	  stb       r0, 0x24(r1)

	.loc_0xB0:
	  mr        r3, r21
	  mr        r4, r24
	  addi      r5, r1, 0x8
	  bl        -0x43DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x20C
	  lwz       r3, 0x10(r23)
	  lfs       f31, 0x28(r1)
	  cmplwi    r3, 0
	  lfs       f30, 0x2C(r1)
	  lfs       f29, 0x30(r1)
	  beq-      .loc_0xF8
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x30(r23)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x12C
	  stw       r21, 0x44(r23)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x50(r23)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x54(r23)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x58(r23)
	  b         .loc_0x180

	.loc_0x12C:
	  fabs      f1, f1
	  lfs       f0, 0x2C(r23)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x164
	  stw       r21, 0x48(r23)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x5C(r23)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x60(r23)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x64(r23)
	  b         .loc_0x180

	.loc_0x164:
	  stw       r21, 0x4C(r23)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x68(r23)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x6C(r23)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x70(r23)

	.loc_0x180:
	  lfs       f4, 0x2C(r1)
	  lfs       f7, 0x4(r27)
	  lfs       f5, 0x28(r1)
	  fmuls     f0, f4, f7
	  lfs       f8, 0x0(r27)
	  lfs       f3, 0x30(r1)
	  lfs       f6, 0x8(r27)
	  fmadds    f2, f5, f8, f0
	  lfs       f1, 0x2080(r2)
	  lfs       f0, 0x8(r23)
	  fmadds    f2, f3, f6, f2
	  fadds     f0, f1, f0
	  fmuls     f2, f0, f2
	  fmuls     f1, f5, f2
	  fmuls     f0, f4, f2
	  fmuls     f3, f3, f2
	  fsubs     f2, f8, f1
	  fsubs     f1, f7, f0
	  fsubs     f0, f6, f3
	  stfs      f2, 0x0(r27)
	  stfs      f1, 0x4(r27)
	  stfs      f0, 0x8(r27)
	  lfs       f4, 0x34(r1)
	  lfs       f1, 0x0(r28)
	  fmuls     f0, f31, f4
	  lfs       f3, 0x4(r28)
	  fmuls     f2, f30, f4
	  lfs       f5, 0x8(r28)
	  fmuls     f4, f29, f4
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f2, f5, f4
	  stfs      f0, 0x0(r28)
	  stfs      f1, 0x4(r28)
	  stfs      f2, 0x8(r28)

	.loc_0x20C:
	  addi      r31, r31, 0x4
	  addi      r26, r26, 0x1

	.loc_0x214:
	  lwz       r0, 0xF4(r22)
	  cmpw      r26, r0
	  blt+      .loc_0x54
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  lmw       r21, 0x54(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
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
