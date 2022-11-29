#ifndef _GAME_FOOTMARK_H
#define _GAME_FOOTMARK_H

#include "types.h"
#include "Vector3.h"

namespace Game {
struct Footmark {
	Footmark();

	Vector3f m_position; // _00
	u32 m_flags;         // _0C
};

struct Footmarks {
	Footmarks();

	void alloc(int count);
	void add(Footmark& mark);
	Footmark* get(int index);
	Footmark* findNearest2(Vector3f&, int);

	Footmark* m_marks;   // _00
	int _04;             // _04
	int _08;             // _08
	int m_count;         // _0C
	int _10;             // _10
	Vector3f m_position; // _14
};

} // namespace Game

#endif