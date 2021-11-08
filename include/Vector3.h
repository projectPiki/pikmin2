#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "stream.h"

template <typename T> struct Vector3 {
	T x, y, z;
	inline Vector3() {};
	Vector3(const Vector3<T>&);

	void operator=(const Vector3<T>&);
	inline T distance(Vector3<T>&);
	void length() const;
	void normalise();

	void read(Stream&);
	void write(Stream&);
};

// Use instead of Vector3<float> or Vector3<f32>
typedef Vector3<float> Vector3f;

#endif
