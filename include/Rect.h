#ifndef _RECT_H
#define _RECT_H

#include "types.h"
#include "Vector2.h"

template <typename T>
struct Rect {
	Vector2<T> p1; // _00 /* topLeft */
	Vector2<T> p2; // _08 /* bottomRight */
};

typedef Rect<int> Recti;
typedef Rect<float> Rectf;

#endif
