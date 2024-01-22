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

	f32 mRadius;     // _00
	Node* mPrev;     // _04
	Node* mNext;     // _08
	Object* mObject; // _0C
	u8 mFlags;       // _10
};

struct Object {
	Object();
	Node mMinX; // _00
	Node mMaxX; // _14
	Node mMinZ; // _28
	Node mMaxZ; // _3C
};

struct World {
	struct Callback {
		virtual void invoke(Object*, Object*) = 0; // _08
	};

	struct ResolveArg {
		Callback* mCallback;
		u32 mComparisonCount;
		u32 mCollisionCount;
	};

	World();

	~World();
	void resolve(ResolveArg&);

	Node mXNode;
	Node mZNode;
};
} // namespace SweepPrune

#endif
