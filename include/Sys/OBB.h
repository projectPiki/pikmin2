#ifndef _SYS_OBB_H
#define _SYS_OBB_H

#include "CNode.h"
#include "Vector3.h"

namespace Game {
struct MoveInfo;
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct Triangle;
struct RayIntersectInfo;
struct Sphere;
struct CurrTriInfo;

/**
 * @size{0x110}
 */
struct OBB : public CNode {
	OBB();

	virtual ~OBB(); // _00

	void autoDivide(Sys::VertexTable&, Sys::TriangleTable&, int, int);
	void create2(Sys::VertexTable&, Sys::TriangleTable&, struct Matrix3f&, Matrix3f&, Vector3f&);
	void determineDivPlane(Sys::VertexTable&, Sys::TriangleTable&);
	void divide(Sys::VertexTable&, Sys::TriangleTable&);
	void findRayIntersection(Sys::RayIntersectInfo&, struct Matrixf&, Matrixf&);
	void findRayIntersectionTriList(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void findTriLists(Sys::Sphere&);
	void getCurrTri(Game::CurrTriInfo&);
	void getCurrTriTriList(Game::CurrTriInfo&);
	void getMinY(Vector3f&, Sys::TriangleTable&, float);
	void getMinYTriList(Vector3f&, Sys::TriangleTable&);
	void isLeaf();
	void read(Stream&);
	void traceMove_new_global(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, int&, Sys::Triangle**, float*, Vector3f*);
	void traceMove_new(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, float*,
	                   Vector3f*);
	void traceMoveTriList_new_global(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, int&, Sys::Triangle**, float*, Vector3f*);
	void traceMoveTriList_new(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, float*,
	                          Vector3f*);
};
} // namespace Sys

#endif
