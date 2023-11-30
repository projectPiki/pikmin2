#ifndef _SYS_OBBTREE_H
#define _SYS_OBBTREE_H

#include "Vector3.h"
#include "Sys/TriDivider.h"
#include "Sys/OBB.h"
#include "Sys/TriangleTable.h"
#include "Sys/Sphere.h"

namespace Game {
struct MoveInfo;
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct RayIntersectInfo;

struct OBBTree : public TriDivider {
	OBBTree();

	virtual ~OBBTree() { }                             // _08 (weak)
	virtual f32 getMinY(Vector3f&);                    // _10
	virtual TriIndexList* findTriLists(Sphere& sphere) // _14 (weak)
	{
		return mRoot.findTriLists(sphere);
	}
	virtual void read(Stream&);                  // _18
	virtual void getCurrTri(Game::CurrTriInfo&); // _1C
	virtual void getBoundBox(BoundBox&) { }      // _24 (weak)
	virtual OBBTree* clone(Matrixf&);            // _28

	void construct(VertexTable*, TriangleTable*, int, int);
	void readWithoutVerts(Stream&, VertexTable&);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, f32);
	void traceMove_global(Game::MoveInfo&, f32);
	bool findRayIntersection(RayIntersectInfo&, Matrixf&, Matrixf&);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, f32);
	void traceMove_new_global(Game::MoveInfo&, f32);
	void traceMove_original(Matrixf&, Matrixf&, Game::MoveInfo&, f32);

	void draw(Graphics&);
	void write(Stream&);
	void writeVertsOnly(Stream&);
	void writeWithoutVerts(Stream&);
	void testIntersection(Sys::Sphere&, Vector3f&);

	inline OBB* getOBB() { return &mRoot; }

	static bool debugTraceMove;

	OBB mRoot; // _20
};
} // namespace Sys

#endif
