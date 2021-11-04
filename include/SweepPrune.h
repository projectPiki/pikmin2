#ifndef _SWEEPPRUNE_H
#define _SWEEPPRUNE_H

#include "types.h"

struct Callback;

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
	struct ResolveArg {
		Callback* m_callback;
		u32* _04;
		u32 _08;
	};

	void resolve(ResolveArg&);

	float _00; // _00
	u32 _04;   // _04
	u32 _08;   // _08
	u32 _0C;   // _0C
	u8 _10[4]; // _10
	float _14; // _14
	u32 _18;   // _18
	u32 _1C;   // _1C
	u32 _20;   // _20
};
} // namespace SweepPrune

struct Callback {
	virtual void invoke(SweepPrune::Object*, SweepPrune::Object*);
};

struct SweepCallback : Callback {
	virtual void invoke(SweepPrune::Object*, SweepPrune::Object*);

	// vt _00
};

#endif
