#ifndef _VECTOR2_H
#define _VECTOR2_H

template <typename T> struct Vector2 {
	T x, y;
};

// Use instead of Vector2<float> or Vector2<f32>
typedef Vector2<float> Vector2f;

#endif
