#ifndef _GAME_FOOTMARK_H
#define _GAME_FOOTMARK_H

#include "types.h"
#include "Vector3.h"

namespace Game {
struct Footmark {
	Footmark();

	Vector3f mPosition; // _00
	u32 mFlags;         // _0C
};

struct Footmarks {
	Footmarks();

	void alloc(int count);
	void add(Footmark& mark);
	Footmark* get(int index);
	Footmark* findNearest2(Vector3f&, int);

	Footmark* mMarks;    // _00
	int mCurrentIndex;   // _04
	int mCapacity;       // _08
	int mCount;          // _0C
	int mLastUpdateTime; // _10
	Vector3f mPosition;  // _14
};

} // namespace Game

#endif
