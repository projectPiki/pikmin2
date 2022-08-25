#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "Dolphin/math.h"
#include "sysMath.h"

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
	inline Vector3(const Vector3<T>& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
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

// inline float Vector3f::distance(register Vector3f& them) {
// #pragma optimizewithasm off
//     register Vector3f* me = this;
//     register float vv0;
//     register float vv1;
//     register float vv2;
//     register float vv3;
//     register float vv4;
// asm {
//     lfs vv1, 4(me)
//     lfs vv0, 4(them)
//     lfs vv3, 0(me)
//     fsubs vv4, vv1, vv0
//     lfs vv2, 0(them)
//     lfs vv1, 8(me)
//     lfs vv0, 8(them)
//     fsubs vv3, vv3, vv2
//     fmuls vv2, vv4, vv4
//     fsubs vv4, vv1, vv0
//     lfs vv0, 0.0f
//     fmadds vv1, vv3, vv3, vv2
//     fmuls vv2, vv4, vv4
//     fadds vv1, vv2, vv1
//     fcmpo cr0, vv1, vv0
//     ble end
//     blelr
//     frsqrte vv0, vv1
//     fmuls vv1, vv0, vv1
// }
//     return vv1;
// asm {
//     end:
//     fmr vv1, vv0
// }
//     return vv1;
// #pragma optimizewithasm on
// }

// inline float Vector3f::length() const {
// #pragma optimizewithasm off
//     register Vector3f* me = (Vector3f*) this;
//     register float vv0;
//     register float vv1;
//     register float vv2;
//     register float vv3;
//     register float vv4;
//     register u8 comp;
// asm {
//     lfs vv3, 0(me)
//     lfs vv1, 4(me)
//     fmuls vv0, vv3, vv3
//     lfs vv4, 8(me)
//     fmuls vv1, vv1, vv1
// }
// vv2 = 0.0f;
// asm {
//     fmuls vv4, vv4, vv4
//     fadds vv0, vv0, vv1
//     fadds vv0, vv4, vv0
//     fcmpo cr0, vv0, vv2
//     ble end
//     fmadds vv0, vv3, vv3, vv1
//     fadds vv1, vv4, vv0
//     fcmpo cr0, vv1, vv2
//     blelr
//     frsqrte vv0, vv1
//     fmuls vv1, vv0, vv1
//     blr
// end:
//     fmr vv1, vv2
// }
//     return vv1;
// #pragma optimizewithasm on
// }

#endif
