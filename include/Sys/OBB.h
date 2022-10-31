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

	bool isLeaf() { return (!m_halfA && !m_halfB); }

	Plane m_sidePlanes[6];       // _18
	Vector3f m_position;         // _78
	Vector3f m_axes[3];          // _84
	f32 m_minXYZ[3];             // _A8
	f32 m_maxXYZ[3];             // _B4
	OBB* m_halfA;                // _C0
	OBB* m_halfB;                // _C4
	Plane m_divPlane;            // _C8
	TriIndexList m_triIndexList; // _D8
	Sphere m_sphere;             // _100
};
} // namespace Sys

#endif
