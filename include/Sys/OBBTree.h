#ifndef _SYS_OBBTREE_H
#define _SYS_OBBTREE_H

#include "Vector3.h"

namespace Game {
struct MoveInfo;
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct RayIntersectInfo;
struct Sphere;

struct OBBTree {
	OBBTree();
	~OBBTree();

	void clone(struct Matrixf&);
	void construct(Sys::VertexTable*, Sys::TriangleTable*, int, int);
	void findRayIntersection(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void findTriLists(Sys::Sphere&);
	void getBoundBox(struct BoundBox&);
	void getCurrTri(Game::CurrTriInfo&);
	void getMinY(Vector3f&);
	void read(Stream&);
	void readWithoutVerts(Stream&, Sys::VertexTable&);
	void traceMove_global(Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, float);
};
} // namespace Sys

#endif
