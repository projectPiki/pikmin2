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

	VertexTable* m_vertexTable;     // _18
	TriangleTable* m_triangleTable; // _1C
	OBB m_obb;                      // _20
};
} // namespace Sys

#endif
