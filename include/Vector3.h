#ifndef _VECTOR3_H
#define _VECTOR3_H

#include "Stream.h"

template <typename T> struct Vector3 {
	T x, y, z;

	void read(Stream&);
	void write(Stream&);
};

// Use instead of Vector3<float> or Vector3<f32>
typedef Vector3<float> Vector3f;

#endif