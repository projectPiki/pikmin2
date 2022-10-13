#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "Dolphin/math.h"
#include "sysMath.h"
#include "Vector2.h"
#include "sqrt.h"

template <typename T> struct Vector3 {
	T x, y, z;
	inline Vector3() {};
	/**
	 * @fabricated
	 */
	inline Vector3(T value)
	    : x(value)
	    , y(value)
	    , z(value)
	{
	}
	inline Vector3(T x, T y, T z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	inline Vector3(JGeometry::TVec3<T> vec) { __memcpy(this, &vec, sizeof(Vector3)); }

	inline Vector3& operator=(const Vector3& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}

	inline void operator=(Vector3<T>& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}

	/**
	 * @fabricated
	 */
	// inline JGeometry::TVec3<T> toTVec() const
	// {
	// 	JGeometry::TVec3<T> vec;
	// 	vec.x = x;
	// 	vec.y = y;
	// 	vec.z = z;
	// 	return vec;
	// }

	/**
	 * @fabricated
	 */
	inline void setTVec(JGeometry::TVec3<T>& vec)
	{
		vec.x = x;
		vec.y = y;
		vec.z = z;
	}

	inline void negate()
	{
		x *= -1.0f;
		y *= -1.0f;
		z *= -1.0f;
	}

	// 	inline Vector3& operator+(const Vector3 other) {
	//     Vector3 newVector = *this;
	//     x += other.x;
	//     y += other.y;
	//     z += other.z;
	//     return newVector;
	// }
	// inline Vector3& operator*(const float other) {
	//     Vector3 newVector = *this;
	//     newVector.x *= other;
	//     newVector.y *= other;
	//     newVector.z *= other;
	//     return newVector;
	// }
	inline void operator*=(const float other) { *this = Vector3(x * other, y * other, z * other); }
	inline void operator+=(const Vector3& other)
	{
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
	}
	inline void operator-=(const Vector3& other)
	{
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
	}
	inline T distance(Vector3<T>&);
	float length() const;
	float normalise();

	void read(Stream&);
	void write(Stream&);

	static Vector3<T> zero;
};

// template <> struct Vector3<float> {
// 	static Vector3<float> zero;
// };

// Use instead of Vector3<float> or Vector3<f32>
typedef Vector3<float> Vector3f;
typedef Vector3<int> Vector3i;

/**
 * @reifiedAddress{80207BA0}
 * @reifiedFile{plugProjectKandoU/itemUjamushi.cpp}
 */
inline Vector3f operator+(const Vector3f& a, const Vector3f& b) { return Vector3f(a.x + b.x, a.y + b.y, a.z + b.z); }

/**
 * @reifiedAddress{80207E70}
 * @reifiedFile{plugProjectKandoU/itemUjamushi.cpp}
 */
inline Vector3f operator-(const Vector3f& a, const Vector3f& b) { return Vector3f(a.x - b.x, a.y - b.y, a.z - b.z); }

inline Vector3f operator*(const Vector3f& a, const float b) { return Vector3f(a.x * b, a.y * b, a.z * b); }

inline Vector3f operator*=(const Vector3f& a, const float b) { return Vector3f(a.x * b, a.y * b, a.z * b); }

inline float dot(const Vector3f& a, const Vector3f& b) { return a.x * b.x + a.y * b.y + a.z * b.z; }

inline void weightVecXZ(Vector3f& vec, f32 weight)
{
	Vector3f temp = vec;
	temp.x *= weight;
	temp.z *= weight;
	vec = temp;
}

inline f32 Vector3f::length() const
{
	f32 thing = x;
	Vector2f thing2(x * x, y * y);

	if ((z * z + (thing2.x + thing2.y)) > 0.0f) {
		f32 result = z * z + ((thing * thing) + thing2.y);
		if (result > 0.0f) {
			register f32 __frsqrte_v = result;
			asm { frsqrte __frsqrte_v, __frsqrte_v }
			result = __frsqrte_v * result;
		}
		return result;
	}
	return 0.0f;
}

inline f32 Vector3f::normalise()
{
	f32 len = length();

	if (len > 0.0f) {
		f32 norm = 1.0f / len;
		x *= norm;
		y *= norm;
		z *= norm;
		return len;
	}
	return 0.0f;
}

inline void _normalise(Vector3f& vec)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	_sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec.x *= norm;
		vec.y *= norm;
		vec.z *= norm;
	}
}

inline void _normaliseXZ(Vector3f& vec)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	_sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec.x *= norm;
		vec.z *= norm;
	}
}

inline f32 sqrDistanceXZ(Vector3f& vec1, Vector3f& vec2)
{
	f32 x = vec1.x - vec2.x;
	f32 z = vec1.z - vec2.z;
	return x * x + z * z;
}
#endif
