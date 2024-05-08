#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "math.h"
#include "sysMath.h"
#include "Vector2.h"
#include "sqrt.h"

struct Matrixf;

// TODO: Implement the global namespace Vector3 functions into the class itself
template <typename T>
struct Vector3 {
	T x, y, z;

	inline Vector3() { }

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

	inline Vector3(Vec& vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	/**
	 * Calculates the direction vector from 'from' to 'to' and stores the result in 'to'.
	 *
	 * @param from The starting point of the direction vector.
	 * @param to The ending point of the direction vector.
	 */
	static inline void getDirectionFromTo(Vector3& from, Vector3& to)
	{
		to -= from;
		to.normalise();
	}

	/**
	 * Calculates the direction vector from 'from' to 'to' and stores the result in 'to'.
	 * The y-component of the resulting vector is set to 0.
	 *
	 * @param from The starting point of the direction vector.
	 * @param to The ending point of the direction vector.
	 */
	static inline void getFlatDirectionFromTo(Vector3& from, Vector3& to)
	{
		to -= from;
		to.y = 0.0f;
		to.normalise();
	}

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

	inline void operator=(const Vec& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}

	inline operator Vector2f() const { return Vector2f(x, y); }

	// /**
	//  * @fabricated
	//  */
	// inline Vector3<T> operator-(const Vector3<T>& other) const {
	// 	return Vector3<T>(x - other.x, y - other.y, z - other.z);
	// }

	/**
	 * @fabricated
	 */
	inline Vector3<T> operator*(const Vector3<T>& other) const { return Vector3<T>(x * other.x, y * other.y, z * other.z); }

	/**
	 * @fabricated
	 */
	inline f32 magnitude() { return x * x + y * y + z * z; }

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

	inline void set(const Vector3& vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	inline void set(f32 _x, f32 _y, f32 _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	inline void set(f32 xyz) { x = y = z = xyz; }

	/**
	 * @fabricated
	 */
	inline void setTVec(JGeometry::TVec3<T>& vec)
	{
		vec.x = x;
		vec.y = y;
		vec.z = z;
	}

	inline void setVec(Vec& vec)
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
	// inline Vector3& operator*(const f32 other) {
	//     Vector3 newVector = *this;
	//     newVector.x *= other;
	//     newVector.y *= other;
	//     newVector.z *= other;
	//     return newVector;
	// }
	// inline void operator*=(const f32 other) { *this = Vector3(x * other, y * other, z * other); }
	inline void operator*=(Matrixf& other);
	inline void operator*=(const f32 other)
	{
		this->x *= other;
		this->y *= other;
		this->z *= other;
	}
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
	inline void operator/=(const Vector3& other)
	{
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
	}

	inline void addXZ(const Vector3& other)
	{
		this->x += other.x;
		this->z += other.z;
	}

	inline void addXY(const Vector3& other)
	{
		this->x += other.x;
		this->y += other.y;
	}

	inline void scaleXY(const Vector3& other)
	{
		f32 newVal = this->x * other.x;
		this->x    = newVal;

		newVal  = this->y * other.y;
		this->y = newVal;
	}

	inline T dot(const Vector3& other) { return this->x * other.x + this->y * other.y + this->z * other.z; }

	inline Vector3 cross(const Vector3& other)
	{
		Vector3 outVec;
		outVec.x = y * other.z - z * other.y;
		outVec.y = z * other.x - x * other.z;
		outVec.z = x * other.y - y * other.x;
		return outVec;
	}

	inline void cross(const Vector3& v1, const Vector3& v2)
	{
		set(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.z);
	}

	inline void setZero() { this->x = this->y = this->z = 0; }

	/**
	 * Sets the direction of the vector from one point to another.
	 *
	 * @param from The starting point of the direction.
	 * @param to The ending point of the direction.
	 */
	inline void setDirectionFromTo(Vector3& from, Vector3& to)
	{
		*this = to - from;
		this->normalise();
	}

	static inline f32 distance(Vector3& a, Vector3& b) { return (a - b).length(); }

	inline void sub(Vector3& a, Vector3& b) { set(a.x - b.x, a.y - b.y, a.z - b.z); }

	inline f32 absX() { return (f32)absF(x); }
	inline f32 absY() { return absF(y); }
	inline f32 absZ() { return (f32)absF(z); }

	inline boundedX(f32 bound) { return absX() < bound; }
	inline boundedY(f32 bound) { return absY() < bound; }
	inline boundedZ(f32 bound) { return absZ() < bound; }

	/**
	 * Sets the flat direction from one vector to another.
	 * The resulting vector will have a zero y-component.
	 *
	 * @param from The starting vector.
	 * @param to The target vector.
	 */
	inline void setFlatDirectionFromTo(Vector3& from, Vector3& to)
	{
		*this   = to - from;
		this->y = 0.0f;
		this->normalise();
	}

	/**
	 * Sets the y component of the vector to 0 and normalizes the vector.
	 */
	inline void toFlatDirection()
	{
		this->y = 0.0f;
		this->normalise();
	}

	// Squared magnitude
	inline f32 sqrMagnitude() const { return this->x * this->x + this->y * this->y + this->z * this->z; }
	// 2D magnitude
	inline f32 sqrMagnitude2D() const { return this->x * this->x + this->z * this->z; }
	// Quick length
	inline f32 qLength() const { return pikmin2_sqrtf(this->sqrMagnitude()); }
	inline f32 qLength2D() const { return pikmin2_sqrtf(this->sqrMagnitude2D()); }

	inline f32 qNormalise()
	{
		f32 length = this->qLength();
		if (length > 0.0f) {
			f32 len = 1.0f / length;
			this->x *= len;
			this->y *= len;
			this->z *= len;
			return length;
		}
		return 0.0f;
	}

	inline f32 qDistance(Vector3& them)
	{
		f32 diffX = this->x - them.x;
		f32 diffY = this->y - them.y;
		f32 diffZ = this->z - them.z;

		return pikmin2_sqrtf(SQUARE(diffX) + SQUARE(diffY) + SQUARE(diffZ));
	}

	f32 length() const;
	f32 distance(Vector3&);
	f32 distance2D(Vector3&);
	f32 sqrDistance(Vector3&);
	f32 distance(JGeometry::TVec3f&);
	f32 normalise();
	f32 length2D() const;
	f32 normalise2D();

	void read(Stream&);
	void write(Stream&);

	static Vector3<T> zero;
};

// template <> struct Vector3<f32> {
// 	static Vector3<f32> zero;
// };

// Use instead of Vector3<f32>
typedef Vector3<f32> Vector3f;
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

inline Vector3f operator*(const Vector3f& a, const f32 b) { return Vector3f(a.x * b, a.y * b, a.z * b); }

inline Vector3f operator/(const Vector3f& a, const f32 b) { return Vector3f(a.x / b, a.y / b, a.z / b); }

inline Vector3f operator*=(const Vector3f& a, const f32 b) { return Vector3f(a.x * b, a.y * b, a.z * b); }

inline f32 dot(const Vector3f& a, const Vector3f& b) { return a.x * b.x + a.y * b.y + a.z * b.z; }

inline bool operator==(const Vector3f& a, const Vector3f& b) { return (a.x == b.x && a.y == b.y && a.z == b.z); }

inline void weightVecXZ(Vector3f& vec, f32 weight)
{
	Vector3f temp = vec;
	temp.x *= weight;
	temp.z *= weight;
	vec = temp;
}

inline void getScaledXZVec(Vector3f& vec, f32 x, f32 z, f32 scale)
{
	vec.x = x * scale;
	vec.z = z * scale;
}

inline void getScaledXYVec(Vector3f& vec, const f32& x, const f32& z, f32 scale)
{
	vec.x = x * scale;
	vec.y = z * scale;
}

template <>
inline f32 Vector3f::length() const
{
	if (sqrMagnitude() > 0.0f) {
		Vector3f vec = Vector3f(x, y, z);
		f32 sqrLen   = SQUARE(vec.x) + SQUARE(y) + SQUARE(z);
		return sqrtf(sqrLen);
	} else {
		return 0.0f;
	}
}

template <>
inline f32 Vector3f::length2D() const
{
	if (sqrMagnitude2D() > 0.0f) {
		Vector3f vec = Vector3f(x, y, z);
		f32 sqrLen   = SQUARE(vec.x) + SQUARE(z);
		return sqrtf(sqrLen);
	} else {
		return 0.0f;
	}
}

template <>
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

template <>
inline f32 Vector3f::normalise2D()
{
	f32 len = length2D();

	if (len > 0.0f) {
		x /= len;
		z /= len;
	} else {
		x = z = 0.0f;
	}

	return len;
}

inline f32 _lenVec(Vector3f& vec)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	return _sqrtf(sqr.x + sqr.y);
}

inline f32 stickMagnitude(Vector3f& vec)
{
	Vector3f a = vec;
	a.z *= a.z;
	return _sqrtf(a.x * a.x + a.y * a.y + a.z);
}

inline f32 _length(Vector3f& vec)
{
	Vector3f a = vec;
	a.y *= a.y;
	a.z *= a.z;
	return _sqrtf(a.y + a.x * a.x + a.z);
}

inline f32 _length2(Vector3f& vec)
{
	Vector3f a = vec;
	a.x *= a.x;
	a.y *= a.y;
	return _sqrtf(a.x + a.z * a.z + a.y);
}

inline f32 _lengthXZ(Vector3f& vec)
{
	Vector3f a = vec;
	return _sqrtf(a.x * a.x + a.z * a.z);
}

inline f32 _normalise2(Vector3f& diff)
{
	f32 dist = _length(diff);
	if (dist > 0.0f) {
		f32 norm = 1.0f / dist;
		diff     = diff * norm;
		return dist;
	}
	return 0.0f;
}

inline void _normalise(Vector3f& vec)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	__sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec.x *= norm;
		vec.y *= norm;
		vec.z *= norm;
	}
}

inline void _normaliseScale(Vector3f& vec, f32 scale)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	__sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec *= norm;
	}

	vec *= scale;
}

inline f32 _normaliseXZ(Vector3f& vec)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	__sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec.x *= norm;
		vec.z *= norm;
	}

	return length;
}

inline f32 _normaliseVec(Vector3f& vec)
{
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	__sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec      = vec * norm;
		return length;
	}
	return 0.0f;
}

inline f32 sqrDistanceXZ(Vector3f& vec1, Vector3f& vec2)
{
	f32 x = vec1.x - vec2.x;
	f32 z = vec1.z - vec2.z;
	return x * x + z * z;
}

inline bool inRadius(f32 r, Vector3f& vec1, Vector3f& vec2) { return sqrDistanceXZ(vec1, vec2) < r * r; }

inline bool outsideRadius(f32 r, Vector3f& vec1, Vector3f& vec2) { return sqrDistanceXZ(vec1, vec2) > r * r; }

inline f32 _distanceXZ(Vector3f& vec1, Vector3f& vec2)
{
	Vector2f vec;
	vec.x = vec1.x - vec2.x;
	vec.y = vec1.z - vec2.z;
	return _sqrtf(vec.x * vec.x + vec.y * vec.y);
}

inline f32 _distanceXZflag(Vector3f& vec1, Vector3f& vec2)
{
	Vector2f vec;
	vec.x = vec1.x - vec2.x;
	vec.y = vec1.z - vec2.z;
	vec.y *= vec.y;
	return _sqrtf(vec.y + vec.x * vec.x);
}

inline void sumXY(Vector3f vec, f32* sum) { *sum = (vec.x *= vec.x) + (vec.y *= vec.y); }

inline void sumZ(Vector3f vec, f32* sum)
{
	f32 z = vec.z * vec.z;
	*sum  = z + *sum;
}

template <>
inline f32 Vector3f::distance(Vector3f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffY = this->y - them.y;
	f32 diffZ = this->z - them.z;

	return Vector3f(diffX, diffY, diffZ).length();
}

template <>
inline f32 Vector3f::distance2D(Vector3f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffY = this->y - them.y;
	f32 diffZ = this->z - them.z;

	return Vector3f(diffX, diffY, diffZ).length2D();
}

template <>
inline f32 Vector3f::sqrDistance(Vector3f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffY = this->y - them.y;
	f32 diffZ = this->z - them.z;

	return diffX * diffX + diffY * diffY + diffZ * diffZ;
}

// this is wacky and shows up in efxEnemy.cpp
template <>
inline f32 Vector3f::distance(JGeometry::TVec3f& them)
{
	f32 diffX = them.x - this->x;
	f32 diffY = them.y - this->y;
	f32 diffZ = them.z - this->z;

	f32 X = diffX * diffX;
	f32 Y = diffY * diffY;
	f32 Z = diffZ * diffZ;

	f32 mag = X + Y + Z;
	if (mag <= 0.0f) {
		return mag;
	}

	f32 root = __frsqrte(mag);
	f32 v1   = root * root;
	f32 v2   = 0.5f * root;
	f32 v3   = v2 * (3.0f - mag * v1);
	return mag * v3;
}

inline f32 _normaliseDistance(Vector3f& vec1, Vector3f& vec2)
{
	Vector3f vec = vec1 - vec2;
	Vector2f sqr(vec.z * vec.z, vec.x * vec.x + vec.y * vec.y);
	f32 length = sqr.x + sqr.y;
	__sqrtf(length, &length);

	if (length > 0.0f) {
		f32 norm = 1.0f / length;
		vec      = vec * norm;
		return length;
	}
	return 0.0f;
}

inline void setAccel(Vector3f& outputVec, const Vector3f& inputVec, f32 massRatio, f32 fps, f32 groundFactor, f32 airFactor)
{
	outputVec.x = inputVec.x * (groundFactor * fps * massRatio);
	outputVec.z = inputVec.z * (groundFactor * fps * massRatio);
	outputVec.y = inputVec.y * (airFactor * fps * massRatio);
}

inline void setOpAccel(Vector3f& outputVec, const Vector3f& inputVec, f32 massRatio, f32 fps, f32 groundFactor, f32 airFactor)
{
	outputVec.x = -inputVec.x * (groundFactor * fps * massRatio);
	outputVec.z = -inputVec.z * (groundFactor * fps * massRatio);
	outputVec.y = -inputVec.y * (airFactor * fps * massRatio);
}

inline void addAccel(Vector3f& outputVec, const Vector3f& inputVec, f32 massRatio, f32 fps, f32 groundFactor, f32 airFactor)
{
	outputVec.x += inputVec.x * (groundFactor * fps * massRatio);
	outputVec.z += inputVec.z * (groundFactor * fps * massRatio);
	outputVec.y += inputVec.y * (airFactor * fps * massRatio);
}

inline Vector3f cross(Vector3f& vec1, Vector3f& vec2)
{
	Vector3f outVec;
	outVec.x = vec1.y * vec2.z - vec1.z * vec2.y;
	outVec.y = vec1.z * vec2.x - vec1.x * vec2.z;
	outVec.z = vec1.x * vec2.y - vec1.y * vec2.x;
	return outVec;
}

inline f32 sqrDistance(Vector3f& vec1, Vector3f& vec2)
{
	f32 x = vec1.x - vec2.x;
	f32 y = vec1.y - vec2.y;
	f32 z = vec1.z - vec2.z;
	return x * x + y * y + z * z;
}

#endif

// I saw this constant being used a lot, if you have a better name please replace it
#define FLOAT_DIST_MAX 128000.0
#define FLOAT_DIST_MIN -128000.0
