#ifndef _QUAT_H
#define _QUAT_H

#include "types.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "Matrix3f.h"

// Quat(ernion)
struct Quat {
	Quat();
	Quat(Quat& arg0);
	Quat(f32 _w, Vector3f vec);

	void set(Vector3f& vec);
	void set(f32 a, f32 b, f32 c, f32 d);
	void set(f32, Vector3f& vec);
	void norm();
	void conjugate();
	void rotate(Quat&, Vector3f&);
	Quat operator*(Quat& q2);
	Quat inverse();
	void normalise();
	void slerp(Quat& q1, f32 f, Quat& q2);
	void toMatrix(Matrix3f& arg0);
	void fromMatrixf(Matrixf& arg0);

	inline Quat& operator=(const Quat& other)
	{
		w = other.w;
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}

	inline void operator=(Quat& other)
	{
		w = other.w;
		x = other.x;
		y = other.y;
		z = other.z;
	}

	f32 w, x, y, z;
};

#endif
