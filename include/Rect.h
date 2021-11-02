#ifndef _RECT_H
#define _RECT_H

#include "types.h"

template <typename T> struct Rect {
	T x1, x2, y1, y2;
};

typedef Rect<int> Recti;
typedef Rect<float> Rectf;

#endif
