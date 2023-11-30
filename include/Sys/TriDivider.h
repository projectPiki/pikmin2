#ifndef _SYS_TRIDIVIDER_H
#define _SYS_TRIDIVIDER_H

#include "BoundBox.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "Graphics.h"
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

	virtual ~TriDivider() { }                                                                // _08 (weak)
	virtual f32 getMinY(Vector3f&)              = 0;                                         // _10
	virtual TriIndexList* findTriLists(Sphere&) = 0;                                         // _14
	virtual void read(Stream&)                  = 0;                                         // _18
	virtual void getCurrTri(Game::CurrTriInfo&) = 0;                                         // _1C
	virtual void createTriangles(CreateTriangleArg&) { }                                     // _20 (weak)
	virtual void getBoundBox(BoundBox&) = 0;                                                 // _24
	virtual TriDivider* clone(Matrixf&);                                                     // _28 (weak)
	virtual TriDivider* do_clone(Matrixf&, VertexTable*, TriangleTable*) { return nullptr; } // _2C

	void construct(VertexTable*, TriangleTable*, int, int);
	bool findRayIntersection(RayIntersectInfo&, Matrixf&, Matrixf&);
	void traceMove_global(Game::MoveInfo&, f32);
	void traceMove_new_global(Game::MoveInfo&, f32);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, f32);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, f32);

	void drawTriList(Graphics&, Sys::TriIndexList*);

	VertexTable* mVertexTable;     // _18
	TriangleTable* mTriangleTable; // _1C
};
} // namespace Sys

#endif
