#ifndef _SYS_OBB_H
#define _SYS_OBB_H

/*
    __vt__Q23Sys3OBB:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys3OBBFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Sys {
struct OBB : public CNode {
	virtual ~OBB(); // _08 (weak)

	void create2(Sys::VertexTable&, Sys::TriangleTable&, Matrix3f&, Matrix3f&, Vector3<float>&);
	void autoDivide(Sys::VertexTable&, Sys::TriangleTable&, int, int);
	void determineDivPlane(Sys::VertexTable&, Sys::TriangleTable&);
	void divide(Sys::VertexTable&, Sys::TriangleTable&);
	void getCurrTri(Game::CurrTriInfo&);
	void isLeaf();
	void getCurrTriTriList(Game::CurrTriInfo&);
	void findRayIntersection(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void findRayIntersectionTriList(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void findTriLists(Sys::Sphere&);
	void getMinY(Vector3<float>&, Sys::TriangleTable&, float);
	void getMinYTriList(Vector3<float>&, Sys::TriangleTable&);
	void read(Stream&);
	void traceMoveTriList_new(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, float*,
	                          Vector3<float>*);
	void traceMove_new(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, float*,
	                   Vector3<float>*);
	void traceMoveTriList_new_global(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, int&, Sys::Triangle**, float*,
	                                 Vector3<float>*);
	void traceMove_new_global(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, int&, Sys::Triangle**, float*, Vector3<float>*);
};
} // namespace Sys

#endif
