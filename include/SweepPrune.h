#ifndef _SWEEPPRUNE_H
#define _SWEEPPRUNE_H

#include "types.h"

struct Callback;

namespace SweepPrune {
struct Object;
struct Node {
	void insertBefore(Node*);
	void insertAfter(Node*);
	void insertSort(Node&);

	float m_radius;   // _00
	Node* m_prev;     // _04
	Node* m_next;     // _08
	Object* m_object; // _0C
	u8 m_flags;       // _10
};

struct Object {
	Object();
	Node m_minX; // _00
	Node m_maxX; // _14
	Node m_minZ; // _28
	Node m_maxZ; // _3C
};

struct World {
	struct Callback {
		virtual void invoke(Object*, Object*) = 0; // _08
	};

	struct ResolveArg {
		Callback* m_callback;
		u32 _04;
		u32 _08;
	};

	World();

	~World();
	void resolve(ResolveArg&);

	Node _00;
	Node _14;
};
} // namespace SweepPrune

struct SweepCallback : public SweepPrune::World::Callback {
	virtual void invoke(SweepPrune::Object*, SweepPrune::Object*);

	// vt _00
};

#endif
