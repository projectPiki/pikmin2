#ifndef _SYS_EDGE_H
#define _SYS_EDGE_H

#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Edge {
	// Unused/inlined:
	void calcNearestEdgePoint(Vector3f&, Vector3f&);

	inline void setStartEnd(const Vector3f& start, const Vector3f& end)
	{
		mStartPos = start;
		mEndPos   = end;
	}

	Vector3f mStartPos; // _00
	Vector3f mEndPos;   // _0C
};
} // namespace Sys

#endif
