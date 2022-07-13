#ifndef _SYS_EDGE_H
#define _SYS_EDGE_H

#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Edge {
	// Unused/inlined:
	void calcNearestEdgePoint(Vector3f&, Vector3f&);

	Vector3f pos1; // _00
	Vector3f pos2; // _0C
};
} // namespace Sys

#endif
