#ifndef _RECT_H
#define _RECT_H

#include "types.h"
#include "Vector2.h"

template <typename T>
struct Rect {
	Vector2<T> p1; // _00 /* topLeft */
	Vector2<T> p2; // _08 /* bottomRight */

	inline void reset()
	{
		p1.x = 0.0f;
		p1.y = 0.0f;

		p2.x = 0.0f;
		p2.y = 0.0f;
	}
};

typedef Rect<int> Recti;
typedef Rect<float> Rectf;

#endif
