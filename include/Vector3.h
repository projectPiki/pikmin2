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

	inline void operator=(const Vector3<T>& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}
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
