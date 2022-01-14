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
	virtual ~OBBTree();

	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);

	VertexTable* m_vertexTable;     // _18
	TriangleTable* m_triangleTable; // _1C
	OBB m_obb;                      // _20
};
} // namespace Sys

#endif
