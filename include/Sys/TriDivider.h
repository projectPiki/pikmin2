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

struct TriDivider : public CNode {
	virtual ~TriDivider();

	virtual float getMinY(Vector3f&);
	virtual TriIndexList* findTriLists(Sys::Sphere&);
	virtual void read(Stream&);
	virtual void getCurrTri(Game::CurrTriInfo&);
	virtual void createTriangles(CreateTriangleArg*);
	virtual void getBoundBox(struct BoundBox&);
	virtual void* clone(struct Matrixf&);
	virtual void* do_clone(Matrixf*, VertexTable*, TriangleTable*);

	void construct(Sys::VertexTable*, Sys::TriangleTable*, int, int);
	void findRayIntersection(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void readWithoutVerts(Stream&, Sys::VertexTable&);
	void traceMove_global(Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, float);
};
} // namespace Sys

#endif
