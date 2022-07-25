#ifndef _SYS_OBB_H
#define _SYS_OBB_H

#include "CNode.h"
#include "Plane.h"
#include "Sys/Sphere.h"
#include "Sys/TriIndexList.h"
#include "Vector3.h"
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

	/**
	 * @reifiedAddress{8013948C}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	virtual ~OBB() { } // _08 (weak)

	void create2(Sys::VertexTable&, Sys::TriangleTable&, struct Matrix3f&, Matrix3f&, Vector3f&);
	void autoDivide(Sys::VertexTable&, Sys::TriangleTable&, int, int);
	void determineDivPlane(Sys::VertexTable&, Sys::TriangleTable&);
	void divide(Sys::VertexTable&, Sys::TriangleTable&);
	void getCurrTri(Game::CurrTriInfo&);
	void isLeaf();
	void getCurrTriTriList(Game::CurrTriInfo&);
	void findRayIntersection(Sys::RayIntersectInfo&, struct Matrixf&, Matrixf&);
	void findRayIntersectionTriList(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void findTriLists(Sys::Sphere&);
	void getMinY(Vector3f&, Sys::TriangleTable&, float);
	void getMinYTriList(Vector3f&, Sys::TriangleTable&);
	void read(Stream&);
	void traceMoveTriList_new(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, float*,
	                          Vector3f*);
	void traceMove_new(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, float*,
	                   Vector3f*);
	void traceMoveTriList_new_global(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, int&, Sys::Triangle**, float*, Vector3f*);
	void traceMove_new_global(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, int&, Sys::Triangle**, float*, Vector3f*);

	Plane m_sidePlanes[6];       // _18
	Vector3f m_position;         // _78
	Vector3f m_axes[3];          // _84
	float m_minXYZ[3];           // _A8
	float m_maxXYZ[3];           // _B4
	OBB* _C0;                    // _C0
	OBB* _C4;                    // _C4
	Plane m_divPlane;            // _C8
	TriIndexList m_triIndexList; // _D8
	Sphere m_sphere;             // _100
};
} // namespace Sys

#endif
