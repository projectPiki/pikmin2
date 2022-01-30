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
struct OBBTree : TriDivider {
	OBBTree();

	virtual ~OBBTree();                               // _00
	virtual float getMinY(Vector3f&);                 // _08
	virtual TriIndexList* findTriLists(Sys::Sphere&); // _0C
	virtual void read(Stream&);                       // _10
	virtual void getCurrTri(Game::CurrTriInfo&);      // _14
	virtual void getBoundBox(BoundBox&);              // _1C
	virtual TriDivider* clone(Matrixf&);              // _20

	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);
	void readWithoutVerts(Stream&, Sys::VertexTable&);

	VertexTable* m_vertexTable;     // _18
	TriangleTable* m_triangleTable; // _1C
	OBB m_obb;                      // _20
};
} // namespace Sys

#endif
