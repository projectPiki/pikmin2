#ifndef _SYS_OBB_H
#define _SYS_OBB_H

#include "CNode.h"
#include "Plane.h"
#include "Sys/Sphere.h"
#include "Sys/TriIndexList.h"
#include "Vector3.h"
#include "Matrix3f.h"
#include "Matrixf.h"
#include "types.h"

namespace Game {
struct MoveInfo;
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct Triangle;
struct RayIntersectInfo;
struct CurrTriInfo;

/**
 * @size{0x110}
 */
struct OBB : public CNode {
	OBB();

	virtual ~OBB() { } // _08 (weak)

	void create2(VertexTable&, TriangleTable&, Matrix3f&, Matrix3f&, Vector3f&);
	bool intersect(Sphere&);
	void autoDivide(VertexTable&, TriangleTable&, int, int);
	void determineDivPlane(VertexTable&, TriangleTable&);
	bool divide(VertexTable&, TriangleTable&);
	void getCurrTri(Game::CurrTriInfo&);
	void getCurrTriTriList(Game::CurrTriInfo&);
	bool findRayIntersection(RayIntersectInfo&, Matrixf&, Matrixf&);
	bool findRayIntersectionTriList(RayIntersectInfo&, Matrixf&, Matrixf&);
	TriIndexList* findTriLists(Sphere&);
	f32 getMinY(Vector3f&, TriangleTable&, f32);
	f32 getMinYTriList(Vector3f&, TriangleTable&);
	void read(Stream&);
	void traceMoveTriList_new(Game::MoveInfo&, VertexTable&, TriangleTable&, Matrixf&, Matrixf&, int&, Triangle**, f32*, Vector3f*);
	void traceMove_new(Game::MoveInfo&, VertexTable&, TriangleTable&, Matrixf&, Matrixf&, int&, Triangle**, f32*, Vector3f*);
	void traceMoveTriList_new_global(Game::MoveInfo&, VertexTable&, TriangleTable&, int&, Triangle**, f32*, Vector3f*);
	void traceMove_new_global(Game::MoveInfo&, VertexTable&, TriangleTable&, int&, Triangle**, f32*, Vector3f*);

	f32 calcPointDist(Vector3f&);
	bool intersect(Vector3f&);
	bool intersect(Sys::VertexTable&, Sys::Triangle&);
	void draw(Graphics&, Sys::VertexTable&, Sys::TriangleTable&);
	void constructOBB2(Sys::VertexTable&, Sys::TriangleTable&);
	void countDivResult(Sys::VertexTable&, Sys::TriangleTable&, int, int&, int&);
	void testIntersectionTriList(Sys::Sphere&, Vector3f&, Sys::VertexTable&, Sys::TriangleTable&);
	void testIntersection(Sys::Sphere&, Vector3f&, Sys::VertexTable&, Sys::TriangleTable&);
	void traceMoveTriList_original(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, f32*,
	                               Vector3f*);
	void traceMove_original(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, f32*,
	                        Vector3f*);
	void write(Stream&);

	bool isLeaf() { return (!mHalfA && !mHalfB); }

	inline void setMaxPlane(Vector3f* axisVec, int i)
	{
		f32 max    = mMaxXYZ[i];
		axisVec->x = mAxes[i].x;
		axisVec->y = mAxes[i].y;
		axisVec->z = mAxes[i].z;

		Vector3f scaledVec       = *axisVec * max;
		mSidePlanes[i].mNormal.x = axisVec->x;
		mSidePlanes[i].mNormal.y = axisVec->y;
		mSidePlanes[i].mNormal.z = axisVec->z;
		mSidePlanes[i].mOffset   = mSidePlanes[i].mNormal.x * (mPosition.x + scaledVec.x)
		                       + mSidePlanes[i].mNormal.y * (mPosition.y + scaledVec.y)
		                       + mSidePlanes[i].mNormal.z * (mPosition.z + scaledVec.z);
	}

	inline void setMinPlane(int i)
	{
		mSidePlanes[i + 3].mNormal.x = -mAxes[i].x;
		mSidePlanes[i + 3].mNormal.y = -mAxes[i].y;
		mSidePlanes[i + 3].mNormal.z = -mAxes[i].z;
		mSidePlanes[i + 3].mOffset   = mSidePlanes[i + 3].mNormal.x * (mPosition.x + (-mAxes[i].x * mMinXYZ[i]))
		                           + mSidePlanes[i + 3].mNormal.y * (mPosition.y + (-mAxes[i].y * mMinXYZ[i]))
		                           + mSidePlanes[i + 3].mNormal.z * (mPosition.z + (-mAxes[i].z * mMinXYZ[i]));
	}

	Plane mSidePlanes[6];       // _18
	Vector3f mPosition;         // _78
	Vector3f mAxes[3];          // _84
	f32 mMinXYZ[3];             // _A8
	f32 mMaxXYZ[3];             // _B4
	OBB* mHalfA;                // _C0
	OBB* mHalfB;                // _C4
	Plane mDivPlane;            // _C8
	TriIndexList mTriIndexList; // _D8
	Sphere mSphere;             // _100
};
} // namespace Sys

#endif
