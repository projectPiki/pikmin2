#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "math.h"
#include "sysMath.h"
#include "Vector2.h"
#include "sqrt.h"

struct Matrixf;

/**
 * @brief A 3-dimensional vector template class.
 *
 * @tparam T The type of the vector components.
 * @note 2D functions refer to the X and Z components, and ignores the y dimension, a flat plane.
 */
template <typename T>
struct Vector3 {
	T x, y, z;

	// Constructors
	inline Vector3();
	inline Vector3(T value);
	inline Vector3(T x, T y, T z);
	inline Vector3(JGeometry::TVec3<T> vec);
	inline Vector3(Vec& vec);

	// Assignment Operators
	inline Vector3& operator=(const Vector3& other);
	inline void operator    =(Vector3& other);
	inline void operator    =(const Vec& other);

	// Conversion Operators
	inline operator Vector2<T>() const;

	// Arithmetic Operators
	inline Vector3<T> operator*(const Vector3<T>& other) const;
	inline void operator*=(Matrixf& other);
	inline void operator*=(const T other);
	inline void operator+=(const Vector3& other);
	inline void operator-=(const Vector3& other);
	inline void operator/=(const Vector3& other);
	inline Vector3 operator-() const;

	// Set Functions
	inline void set(const Vector3& vec);
	inline void set(T _x, T _y, T _z);
	inline void set(T xyz);
	inline void set(JGeometry::TVec3<T>& vec);
	inline void set(Vec& vec);

	// Utility Functions
	inline void negate();
	inline void negate2();
	inline void addXZ(const Vector3& other);
	inline void addXY(const Vector3& other);
	inline void scaleXY(const Vector3& other);
	inline void scale2D(T other);
	inline void set2D(const Vector3& other);
	inline void setZero();
	inline void add(const Vector3& other);
	inline void add(Vector3& a, Vector3& b);
	inline void sub(const Vector3& other);
	inline void sub(Vector3& a, Vector3& b);
	inline void setMiddle(Vector3& a, Vector3& b);
	static inline Vector3<T> sub2(const Vector3& a, const Vector3& b);

	// Direction Functions
	static inline T getDirectionFromTo(const Vector3& from, Vector3& to);
	static inline T getFlatDirectionFromTo(Vector3& from, Vector3& to);
	inline T setDirectionFromTo(const Vector3& from, const Vector3& to);
	inline void setFlatDirectionFromTo(Vector3& from, Vector3& to);
	inline void toFlatDirection();

	// Calculation Functions
	inline T dot(const Vector3& other);
	inline Vector3 cross(const Vector3& other);
	inline void cross(const Vector3& v1, const Vector3& v2);
	inline T absX();
	inline T absY();
	inline T absZ();
	inline bool isBoundedX(T bound);
	inline bool isBoundedY(T bound);
	inline bool isBoundedZ(T bound);
	inline void scale(T scale);

	// Magnitude Functions
	inline T sqrMagnitude() const;
	inline T sqrMagnitude2D() const;
	inline T qLength() const;
	inline T qLength2D() const;
	inline T qNormalise();

	// Distance Functions
	inline T qDistance(Vector3& them);
	inline T sqrDistanceToSphere(Vector3& them);
	static inline T distance(Vector3& a, Vector3& b);
	T distance(Vector3&);
	T distance2D(Vector3&);
	T sqrDistance(Vector3&);
	T sqrDistance2D(Vector3&);
	T distance(JGeometry::TVec3f&);

	// Length and Normalise Functions
	T length() const;
	T lengthWeird() const;
	T normalise();
	T length2D() const;
	T normalise2D();

	// I/O Functions
	void read(Stream&);
	void write(Stream&);

	// Static Members
	static Vector3<T> zero;
};

typedef Vector3<f32> Vector3f;
typedef Vector3<int> Vector3i;

inline Vector3f operator+(const Vector3f& a, const Vector3f& b) { return Vector3f(a.x + b.x, a.y + b.y, a.z + b.z); }

// Using sub2 here fixes inline depth issues for navi_demoCheck and itemUjamushi
// (panModokiState has an instance of needing to call sub2 directly because its quirky like that)
inline Vector3f operator-(const Vector3f& a, const Vector3f& b) { return Vector3f::sub2(a, b); }

inline Vector3f operator*(const Vector3f& a, const f32 b) { return Vector3f(a.x * b, a.y * b, a.z * b); }
inline Vector3f operator/(const Vector3f& a, const f32 b) { return Vector3f(a.x / b, a.y / b, a.z / b); }
inline Vector3f operator*=(const Vector3f& a, const f32 b) { return Vector3f(a.x * b, a.y * b, a.z * b); }

inline Vector3i operator+(const Vector3i& a, const Vector3i& b) { return Vector3i(a.x + b.x, a.y + b.y, a.z + b.z); }
inline Vector3i operator-(const Vector3i& a, const Vector3i& b) { return Vector3i(a.x - b.x, a.y - b.y, a.z - b.z); }
inline Vector3i operator*(const Vector3i& a, const int b) { return Vector3i(a.x * b, a.y * b, a.z * b); }
inline Vector3i operator/(const Vector3i& a, const int b) { return Vector3i(a.x / b, a.y / b, a.z / b); }
inline Vector3i operator*=(const Vector3i& a, const int b) { return Vector3i(a.x * b, a.y * b, a.z * b); }

inline bool operator==(const Vector3f& a, const Vector3f& b) { return (a.x == b.x && a.y == b.y && a.z == b.z); }
inline bool operator!=(const Vector3f& a, const Vector3f& b) { return (a.x != b.x || a.y != b.y || a.z != b.z); }

inline bool operator==(const Vector3i& a, const Vector3i& b) { return (a.x == b.x && a.y == b.y && a.z == b.z); }
inline bool operator!=(const Vector3i& a, const Vector3i& b) { return (a.x != b.x || a.y != b.y || a.z != b.z); }

template <typename T>
inline Vector3<T>::Vector3()
{
}

template <typename T>
inline Vector3<T>::Vector3(T value)
    : x(value)
    , y(value)
    , z(value)
{
}

template <typename T>
inline Vector3<T>::Vector3(T x, T y, T z)
    : x(x)
    , y(y)
    , z(z)
{
}

template <typename T>
inline Vector3<T>::Vector3(JGeometry::TVec3<T> vec)
{
	__memcpy(this, &vec, sizeof(Vector3));
}

template <typename T>
inline Vector3<T>::Vector3(Vec& vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

template <typename T>
inline T Vector3<T>::getDirectionFromTo(const Vector3& from, Vector3& to)
{
	to -= from;
	return to.normalise();
}

template <typename T>
inline T Vector3<T>::getFlatDirectionFromTo(Vector3& from, Vector3& to)
{
	to -= from;
	to.y = 0.0f;
	return to.normalise();
}

template <typename T>
inline Vector3<T>& Vector3<T>::operator=(const Vector3& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
	return *this;
}

template <typename T>
inline void Vector3<T>::operator=(Vector3& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

template <typename T>
inline void Vector3<T>::operator=(const Vec& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

template <typename T>
inline Vector3<T>::operator Vector2<T>() const
{
	return Vector2<T>(x, y);
}

template <typename T>
inline Vector3<T> Vector3<T>::operator*(const Vector3<T>& other) const
{
	return Vector3<T>(x * other.x, y * other.y, z * other.z);
}

template <typename T>
inline void Vector3<T>::set(const Vector3& vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

template <typename T>
inline void Vector3<T>::set(T _x, T _y, T _z)
{
	x = _x;
	y = _y;
	z = _z;
}

template <typename T>
inline void Vector3<T>::set(T xyz)
{
	x = y = z = xyz;
}

template <typename T>
inline void Vector3<T>::set(JGeometry::TVec3<T>& vec)
{
	vec.x = x;
	vec.y = y;
	vec.z = z;
}

template <typename T>
inline void Vector3<T>::set(Vec& vec)
{
	vec.x = x;
	vec.y = y;
	vec.z = z;
}

template <typename T>
inline void Vector3<T>::negate()
{
	x *= -1.0f;
	y *= -1.0f;
	z *= -1.0f;
}

template <typename T>
inline void Vector3<T>::negate2()
{
	x = -x;
	y = -y;
	z = -z;
}

template <typename T>
inline void Vector3<T>::operator*=(const T other)
{
	this->x *= other;
	this->y *= other;
	this->z *= other;
}

template <typename T>
inline void Vector3<T>::operator+=(const Vector3& other)
{
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;
}

template <typename T>
inline void Vector3<T>::operator-=(const Vector3& other)
{
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;
}

template <typename T>
inline void Vector3<T>::operator/=(const Vector3& other)
{
	this->x /= other.x;
	this->y /= other.y;
	this->z /= other.z;
}

template <typename T>
inline Vector3<T> Vector3<T>::operator-() const
{
	return Vector3<T>(-x, -y, -z);
}

template <typename T>
inline void Vector3<T>::addXZ(const Vector3& other)
{
	this->x += other.x;
	this->z += other.z;
}

template <typename T>
inline void Vector3<T>::addXY(const Vector3& other)
{
	this->x += other.x;
	this->y += other.y;
}

template <typename T>
inline void Vector3<T>::scaleXY(const Vector3& other)
{
	T newVal = this->x * other.x;
	this->x  = newVal;
	newVal   = this->y * other.y;
	this->y  = newVal;
}

template <typename T>
inline void Vector3<T>::scale2D(T other)
{
	T newVal = this->x * other;
	this->x  = newVal;
	newVal   = this->z * other;
	this->z  = newVal;
}

template <typename T>
inline void Vector3<T>::set2D(const Vector3& other)
{
	x = other.x;
	z = other.z;
}

template <typename T>
inline T Vector3<T>::dot(const Vector3& other)
{
	return this->x * other.x + this->y * other.y + this->z * other.z;
}

template <typename T>
inline Vector3<T> Vector3<T>::cross(const Vector3& other)
{
	Vector3 outVec;
	outVec.x = y * other.z - z * other.y;
	outVec.y = z * other.x - x * other.z;
	outVec.z = x * other.y - y * other.x;
	return outVec;
}

template <typename T>
inline void Vector3<T>::cross(const Vector3& v1, const Vector3& v2)
{
	set(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.z);
}

template <typename T>
inline void Vector3<T>::setZero()
{
	this->x = this->y = this->z = 0;
}

template <typename T>
inline T Vector3<T>::setDirectionFromTo(const Vector3& from, const Vector3& to)
{
	*this = to - from;
	return this->normalise();
}

template <typename T>
inline T Vector3<T>::distance(Vector3& a, Vector3& b)
{
	return (a - b).length();
}

template <typename T>
inline void Vector3<T>::add(const Vector3& other)
{
	x += other.x;
	y += other.y;
	z += other.z;
}

template <typename T>
inline void Vector3<T>::add(Vector3& a, Vector3& b)
{
	set(a.x + b.x, a.y + b.y, a.z + b.z);
}

template <typename T>
inline void Vector3<T>::sub(const Vector3& other)
{
	x -= other.x;
	y -= other.y;
	z -= other.z;
}

template <typename T>
inline void Vector3<T>::sub(Vector3& a, Vector3& b)
{
	set(a.x - b.x, a.y - b.y, a.z - b.z);
}

template <typename T>
inline void Vector3<T>::setMiddle(Vector3& a, Vector3& b)
{
	x = (a.x + b.x) * 0.5f;
	y = (a.y + b.y) * 0.5f;
	z = (a.z + b.z) * 0.5f;
}

template <typename T>
inline Vector3<T> Vector3<T>::sub2(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x - b.x, a.y - b.y, a.z - b.z);
}

template <typename T>
inline T Vector3<T>::absX()
{
	return (T)absF(x);
}

template <typename T>
inline T Vector3<T>::absY()
{
	return (T)absF(y);
}

template <typename T>
inline T Vector3<T>::absZ()
{
	return (T)absF(z);
}

template <typename T>
inline bool Vector3<T>::isBoundedX(T bound)
{
	return absX() < bound;
}

template <typename T>
inline bool Vector3<T>::isBoundedY(T bound)
{
	return absY() < bound;
}

template <typename T>
inline bool Vector3<T>::isBoundedZ(T bound)
{
	return absZ() < bound;
}

template <typename T>
inline void Vector3<T>::scale(T scale)
{
	x *= scale;
	y *= scale;
	z *= scale;
}

template <typename T>
inline void Vector3<T>::setFlatDirectionFromTo(Vector3& from, Vector3& to)
{
	*this   = to - from;
	this->y = 0.0f;
	this->normalise();
}

template <typename T>
inline void Vector3<T>::toFlatDirection()
{
	this->y = 0.0f;
	this->normalise();
}

template <typename T>
inline T Vector3<T>::sqrMagnitude() const
{
	return this->x * this->x + this->y * this->y + this->z * this->z;
}

template <typename T>
inline T Vector3<T>::sqrMagnitude2D() const
{
	return this->x * this->x + this->z * this->z;
}

template <typename T>
inline T Vector3<T>::qLength() const
{
	return pikmin2_sqrtf(this->sqrMagnitude());
}

template <typename T>
inline T Vector3<T>::qLength2D() const
{
	return pikmin2_sqrtf(this->sqrMagnitude2D());
}

template <typename T>
inline T Vector3<T>::qNormalise()
{
	T length = this->qLength();
	if (length > 0.0f) {
		T len = 1.0f / length;
		this->x *= len;
		this->y *= len;
		this->z *= len;
		return length;
	}
	return 0.0f;
}

template <typename T>
inline T Vector3<T>::qDistance(Vector3& them)
{
	T diffX = this->x - them.x;
	T diffY = this->y - them.y;
	T diffZ = this->z - them.z;

	return pikmin2_sqrtf(SQUARE(diffX) + SQUARE(diffY) + SQUARE(diffZ));
}

template <typename T>
inline T Vector3<T>::sqrDistanceToSphere(Vector3& them)
{
	T diffX = this->x - them.x;
	T diffY = this->y - them.y;
	T diffZ = this->z - them.z;

	return SQUARE(diffX) + SQUARE(diffY) + SQUARE(diffZ);
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
inline f32 Vector3f::lengthWeird() const
{
	if (sqrMagnitude() > 0.0f) {
		Vector3f vec = Vector3f(x, y, z);
		f32 sqrLen   = SQUARE(vec.x) + SQUARE(y) + SQUARE(z);
		return sqrtf2(sqrLen);
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

	return SQUARE(diffX) + SQUARE(diffY) + SQUARE(diffZ);
}

template <>
inline f32 Vector3f::sqrDistance2D(Vector3f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffZ = this->z - them.z;

	return SQUARE(diffX) + SQUARE(diffZ);
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

inline bool isWithinSphere(Vector3f& pToCheck, f32 pRadius)
{
	f32 distance = pToCheck.sqrMagnitude2D();
	f32 radius   = pRadius;
	radius *= radius;
	return distance > radius;
}

inline f32 stickMagnitude(Vector3f& vec)
{
	Vector3f a = vec;
	a.z *= a.z;
	return _sqrtf(a.x * a.x + a.y * a.y + a.z);
}

inline f32 _length2(Vector3f& vec)
{
	Vector3f a = vec;
	a.x *= a.x;
	a.y *= a.y;
	return _sqrtf(a.x + a.z * a.z + a.y);
}

inline f32 _length(Vector3f& vec)
{
	Vector3f a = vec;
	a.y *= a.y;
	a.z *= a.z;
	return _sqrtf(a.y + a.x * a.x + a.z);
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

inline Vector3f scaleAndTranslate(const Vector3f& vec1, const Vector3f& vec2, f32 scale)
{
	Vector3f outVec;
	outVec.x = vec1.x * scale + vec2.x;
	outVec.y = vec1.y * scale + vec2.y;
	outVec.z = vec1.z * scale + vec2.z;
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
#define FLOAT_DIST_MAX 128000.0f
#define FLOAT_DIST_MIN -128000.0f
