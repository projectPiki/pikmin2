#ifndef _VECTOR2_H
#define _VECTOR2_H

template <typename T> struct Vector2 {
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

#endif
