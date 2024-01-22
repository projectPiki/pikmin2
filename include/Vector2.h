#ifndef _VECTOR2_H
#define _VECTOR2_H

#include "types.h"
#include "sqrt.h"
#include "JSystem/JGeometry.h"
#include "math.h"

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

	inline void add(const f32& x, const f32& y)
	{
		this->x += x;
		this->y += y;
	}

	inline void set(f32 x, f32 y)
	{
		this->x = x;
		this->y = y;
	}

	inline f32 angleBetween(Vector2& other)
	{
		f32 angle = JMath::atanTable_.atan2_((this->y - other.y), -(this->x - other.x));
		return angle;
	}

	Vector2& operator+=(const Vector2& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Vector2& operator-=(const Vector2& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}

	inline void operator*=(const f32 other)
	{
		this->x *= other;
		this->y *= other;
	}

	inline void operator/=(const f32 other)
	{
		this->x /= other;
		this->y /= other;
	}

	operator JGeometry::TVec2f() { return JGeometry::TVec2f(x, y); }

	inline f32 sqrMagnitude() const { return x * x + y * y; }

	inline f32 length() const;
	inline f32 normalise();
	inline f32 distance(Vector2&);
	inline f32 distance(const JGeometry::TVec2f&);

	T x, y;
};

// Use instead of Vector2<f32>
typedef Vector2<f32> Vector2f;
typedef Vector2<int> Vector2i;

inline Vector2f operator+(const Vector2f& a, f32 b) { return Vector2f(a.x + b, a.y + b); }

inline Vector2f operator*(const Vector2f& a, f32 b) { return Vector2f(a.x * b, a.y * b); }

inline Vector2f operator+(const Vector2f& a, const Vector2f& b) { return Vector2f(a.x + b.x, a.y + b.y); }

inline Vector2f operator-(const Vector2f& a, const Vector2f& b) { return Vector2f(a.x - b.x, a.y - b.y); }

inline f32 _lenVec2D(Vector2f& vec)
{
	Vector2f a = vec;
	a.y *= a.y;
	f32 length = a.y + vec.x * vec.x;
	return _sqrtf(a.y + vec.x * vec.x);
}

// should be
// inline f32 _lenVec2D(Vector2f& vec) { return _sqrtf(SQUARE(vec.x) + SQUARE(vec.y)); }

template <>
inline f32 Vector2f::length() const
{
	if (sqrMagnitude() > 0.0f) {
		Vector2f vec = Vector2f(x, y);
		f32 sqrLen   = SQUARE(vec.x) + SQUARE(y);
		return sqrtf2(sqrLen);
	} else {
		return 0.0f;
	}
}

template <>
inline f32 Vector2f::normalise()
{
	f32 len = length();

	if (len != 0.0f) {
		*this *= 1.0f / len;
		return len;
	}
	return 0.0f;
}

template <>
inline f32 Vector2f::distance(Vector2f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffY = this->y - them.y;

	return Vector2f(diffX, diffY).length();
}

template <>
inline f32 Vector2f::distance(const JGeometry::TVec2f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffY = this->y - them.y;

	return Vector2f(diffX, diffY).length();
}

#endif
