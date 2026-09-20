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
	inline void operator=(Vector3& other);
	inline void operator=(const Vec& other);

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
	static inline Vector3<T> add2(const Vector3& a, const Vector3& b);
	static inline Vector3<T> sub2(const Vector3& a, const Vector3& b);

	// Direction Functions
	static inline T getDirectionFromTo(const Vector3& from, Vector3& to);
	static inline T getFlatDirectionFromTo(Vector3& from, Vector3& to);
	inline T setDirectionFromTo(const Vector3& from, const Vector3& to);
	inline void setFlatDirectionFromTo(Vector3& from, Vector3& to);
	inline void toFlatDirection();

	// Calculation Functions
	inline T dot(const Vector3& other) const;
	inline Vector3 cross(const Vector3& other);
	inline void cross(const Vector3& v1, const Vector3& v2);
	inline void CP(const Vector3& other);
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
	static inline T distance(Vector3& a, Vector3& b);
	T distance(Vector3&);
	T distance2D(Vector3&);
	T sqrDistance(Vector3&);
	T sqrDistance2D(Vector3&);
	T distance(JGeometry::TVec3f&);

	// Length and Normalise Functions
	T length() const;
	T magnitude() const; // this is only used once in Kando's library, but seems necessary
	T normalise();
	T normalize(); // this is ALSO only used once in Kando's library, but seems necessary
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

inline Vector3f operator+(const Vector3f& a, const Vector3f& b)
{
	return Vector3f::add2(a, b);
}

inline Vector3f operator-(const Vector3f& a, const Vector3f& b)
{
	return Vector3f::sub2(a, b);
}

inline Vector3f operator*(const Vector3f& a, const f32 b)
{
	return Vector3f(a.x * b, a.y * b, a.z * b);
}
inline Vector3f operator/(const Vector3f& a, const f32 b)
{
	return Vector3f(a.x / b, a.y / b, a.z / b);
}
inline Vector3f operator*=(const Vector3f& a, const f32 b)
{
	return Vector3f(a.x * b, a.y * b, a.z * b);
}

inline Vector3i operator+(const Vector3i& a, const Vector3i& b)
{
	return Vector3i(a.x + b.x, a.y + b.y, a.z + b.z);
}
inline Vector3i operator-(const Vector3i& a, const Vector3i& b)
{
	return Vector3i(a.x - b.x, a.y - b.y, a.z - b.z);
}
inline Vector3i operator*(const Vector3i& a, const int b)
{
	return Vector3i(a.x * b, a.y * b, a.z * b);
}
inline Vector3i operator/(const Vector3i& a, const int b)
{
	return Vector3i(a.x / b, a.y / b, a.z / b);
}
inline Vector3i operator*=(const Vector3i& a, const int b)
{
	return Vector3i(a.x * b, a.y * b, a.z * b);
}

inline bool operator==(const Vector3f& a, const Vector3f& b)
{
	return (a.x == b.x && a.y == b.y && a.z == b.z);
}
inline bool operator!=(const Vector3f& a, const Vector3f& b)
{
	return (a.x != b.x || a.y != b.y || a.z != b.z);
}

inline bool operator==(const Vector3i& a, const Vector3i& b)
{
	return (a.x == b.x && a.y == b.y && a.z == b.z);
}
inline bool operator!=(const Vector3i& a, const Vector3i& b)
{
	return (a.x != b.x || a.y != b.y || a.z != b.z);
}

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
	FAST_COPY(this, &vec, sizeof(Vector3));
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
inline T Vector3<T>::dot(const Vector3& other) const
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
	Vector3 outVec;
	outVec.y = v1.z * v2.x - v1.x * v2.z;
	outVec.z = v1.x * v2.y - v1.y * v2.x;
	outVec.x = v1.y * v2.z - v1.z * v2.y;
	*this    = outVec;
}

template <typename T>
inline void Vector3<T>::CP(const Vector3& other)
{
	Vector3 tmp;
	tmp.x = y * other.z - z * other.y;
	tmp.y = z * other.x - x * other.z;
	tmp.z = x * other.y - y * other.x;
	x     = tmp.x;
	y     = tmp.y;
	z     = tmp.z;
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
inline Vector3<T> Vector3<T>::add2(const Vector3& a, const Vector3& b)
{
	return Vector3(a.x + b.x, a.y + b.y, a.z + b.z);
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

template <>
inline f32 Vector3f::length() const
{
	if (sqrMagnitude() > 0.0f) {
		Vector3f vec = Vector3f(x, y, z);
		f32 sqrLen   = SQUARE(vec.x) + SQUARE(y) + SQUARE(z);
		return sqrtfInPlace(sqrLen);
	} else {
		return 0.0f;
	}
}

template <>
inline f32 Vector3f::magnitude() const
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
		return sqrtfInPlace(sqrLen);
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
inline f32 Vector3f::normalize()
{
	Vector3f vec = *this;
	vec.y *= vec.y;
	vec.z *= vec.z;
	f32 dist = vec.y + vec.x * vec.x + vec.z;
	dist     = (dist > 0.0f) ? sqrtfInPlace(dist) : 0.0f;
	if (dist > 0.0f) {
		f32 norm = 1.0f / dist;
		*this    = *this * norm;
		return dist;
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

template <typename T>
inline T Vector3<T>::sqrDistance(Vector3& them)
{
	T diffX = this->x - them.x;
	T diffY = this->y - them.y;
	T diffZ = this->z - them.z;

	return SQUARE(diffX) + SQUARE(diffY) + SQUARE(diffZ);
}

template <>
inline f32 Vector3f::sqrDistance2D(Vector3f& them)
{
	f32 diffX = this->x - them.x;
	f32 diffZ = this->z - them.z;

	return SQUARE(diffX) + SQUARE(diffZ);
}

// JGeometry distances use their own sqrt function, not ours
template <>
inline f32 Vector3f::distance(JGeometry::TVec3f& them)
{
	f32 diffX = them.x - this->x;
	f32 diffY = them.y - this->y;
	f32 diffZ = them.z - this->z;

	f32 X = diffX * diffX;
	f32 Y = diffY * diffY;
	f32 Z = diffZ * diffZ;

	return JGeometry::TUtil<f32>::sqrt(X + Y + Z);
}

inline f32 qdist3(const Vector3f& a, const Vector3f& b)
{
	return qdist3(a.x, a.y, a.z, b.x, b.y, b.z);
}

inline bool inRadius2D(f32 r, Vector3f& vec1, Vector3f& vec2)
{
	return vec1.sqrDistance2D(vec2) < r * r;
}

inline bool outsideRadius2D(f32 r, Vector3f& vec1, Vector3f& vec2)
{
	return vec1.sqrDistance2D(vec2) > r * r;
}

inline Vector3f cross(Vector3f& vec1, Vector3f& vec2)
{
	return Vector3f(vec1.y * vec2.z - vec1.z * vec2.y, vec1.z * vec2.x - vec1.x * vec2.z, vec1.x * vec2.y - vec1.y * vec2.x);
}

#endif
