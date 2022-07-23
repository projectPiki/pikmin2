#ifndef _SYS_EDGE_H
#define _SYS_EDGE_H

#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Edge {
	// Unused/inlined:
	void calcNearestEdgePoint(Vector3f&, Vector3f&);

	Vector3f m_startPos; // _00
	Vector3f m_endPos;   // _0C
};
} // namespace Sys

#endif
