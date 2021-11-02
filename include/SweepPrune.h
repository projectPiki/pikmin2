#ifndef _SWEEPPRUNE_H
#define _SWEEPPRUNE_H

#include "types.h"

namespace SweepPrune {
struct Node {
	float m_radius;  // _00
	Node* m_prev;    // _04
	Node* m_next;    // _08
	Node* m_current; // _0C
	uint m_flags;    // _10
};

struct Object {
	Node m_minX; // _00
	Node m_maxX; // _14
	Node m_minZ; // _28
	Node m_maxZ; // _3C
};

struct World {
	u8 _00[0x24]; // _00
};
} // namespace SweepPrune

#endif
