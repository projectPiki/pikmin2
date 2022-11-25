#ifndef _VECTOR2_H
#define _VECTOR2_H

#include "types.h"
#include "sqrt.h"

template <typename T>
struct Vector2 {
	Vector2() { }
	Vector2(T _x, T _y)
	{
		x = _x;
		y = _y;
	}

	T x, y;
};

// Use instead of Vector2<float> or Vector2<f32>
typedef Vector2<float> Vector2f;
typedef Vector2<int> Vector2i;

inline Vector2f operator+(const Vector2f& a, const Vector2f& b) { return Vector2f(a.x + b.x, a.y + b.y); }

inline f32 _lenVec2D(Vector2f& vec)
{
	f32 length = vec.x * vec.x + vec.y * vec.y;
	_sqrtf(length, &length);
	return length;
}

#endif
