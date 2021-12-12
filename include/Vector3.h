#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "stream.h"
#include "Dolphin/math.h"
#include "sysMath.h"

template <typename T> struct Vector3 {
	T x, y, z;
	inline Vector3() {};
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
	// inline void operator*=(const float other) {
	//     this->x *= other;
	//     this->y *= other;
	//     this->z *= other;
	// }
	// inline void operator+=(const Vector3& other) {
	//     this->x += other.x;
	//     this->y += other.y;
	//     this->z += other.z;
	// }
	inline T distance(Vector3<T>&);
	void length() const;
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

#endif
