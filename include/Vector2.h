#ifndef _VECTOR2_H
#define _VECTOR2_H

#include "types.h"
#include "sqrt.h"
#include "JSystem/JGeometry.h"

template <typename T>
struct Vector2 {
	Vector2() { }
	Vector2(T _x, T _y)
	{
		x = _x;
		y = _y;
	}

	Vector2(T val)
	{
		x = val;
		y = val;
	}

	operator JGeometry::TVec2f() { return JGeometry::TVec2f(x, y); }

	inline f32 length() const;
	inline f32 normalise();

	T x, y;
};

// Use instead of Vector2<float> or Vector2<f32>
typedef Vector2<float> Vector2f;
typedef Vector2<int> Vector2i;

inline Vector2f operator+(const Vector2f& a, f32 b) { return Vector2f(a.x + b, a.y + b); }

inline Vector2f operator*(const Vector2f& a, f32 b) { return Vector2f(a.x * b, a.y * b); }

inline Vector2f operator+(const Vector2f& a, const Vector2f& b) { return Vector2f(a.x + b.x, a.y + b.y); }

inline Vector2f operator+=(const Vector2f& a, const Vector2f& b) { return Vector2f(a.x + b.x, a.y + b.y); }

inline Vector2f operator-(const Vector2f& a, const Vector2f& b) { return Vector2f(a.x - b.x, a.y - b.y); }

inline f32 _lenVec2D(Vector2f& vec)
{
	Vector2f a = vec;
	a.y *= a.y;
	f32 length = a.y + vec.x * vec.x;
	return _sqrtf(a.y + vec.x * vec.x);
}

template <>
inline f32 Vector2f::length() const
{
	Vector2f vec(x, y);
	f32 x2 = x * x;
	f32 y2 = y * y;

	if (x2 + y2 > 0.0f) {
		f32 sqrLen = vec.x * vec.x + y * y;
		return sqrtf(sqrLen);
	} else {
		return 0.0f;
	}
}

template <>
inline f32 Vector2f::normalise()
{
	f32 len = length();

	if (len != 0.0f) {
		f32 norm = 1.0f / len;
		x *= norm;
		y *= norm;
		return len;
	}
	return 0.0f;
}

#endif
