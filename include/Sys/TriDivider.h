#ifndef _SYS_TRIDIVIDER_H
#define _SYS_TRIDIVIDER_H

#include "Vector3.h"
#include "CNode.h"

namespace Game {
struct MoveInfo;
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct RayIntersectInfo;
struct Sphere;
struct CreateTriangleArg;
struct TriIndexList;

struct TriDivider : CNode {
	virtual ~TriDivider();

	virtual void clone(struct Matrixf&);
	void construct(Sys::VertexTable*, Sys::TriangleTable*, int, int);
	virtual void createTriangles(CreateTriangleArg*);
	virtual void* do_clone(Matrixf*, VertexTable*, TriangleTable*);
	void findRayIntersection(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	virtual TriIndexList* findTriLists(Sys::Sphere&);
	virtual void getBoundBox(struct BoundBox&);
	virtual void getCurrTri(Game::CurrTriInfo&);
	virtual float getMinY(Vector3f&);
	virtual void read(Stream&);
	void readWithoutVerts(Stream&, Sys::VertexTable&);
	void traceMove_global(Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, float);
};
} // namespace Sys

#endif
