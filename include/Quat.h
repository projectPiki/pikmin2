#ifndef _QUAT_H
#define _QUAT_H

#include "types.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "Matrix3f.h"

struct RPY {
	// roll-pitch-yaw angles
	// not entirely confident this isn't just a goddamn vector3 but it's a struct as per map
	// use to set quats (but unused)

	f32 mRoll;  // _00
	f32 mPitch; // _04
	f32 mYaw;   // _08
};

// Quat(ernion)
struct Quat {
	Quat();
	Quat(Quat& arg0);
	Quat(f32 _w, Vector3f vec);
	Quat(RPY& rpy); // unused/inlined

	void set(Vector3f& vec);
	void set(f32 a, f32 b, f32 c, f32 d);
	void set(f32, Vector3f& vec);
	void set(RPY& rpy);
	void norm();
	void conjugate();
	void rotate(Quat&, Vector3f&);
	Quat inverse();
	void normalise();
	void slerp(Quat& q1, f32 f, Quat& q2);
	void toMatrix(Matrix3f& arg0);
	void fromMatrixf(Matrixf& arg0);

	inline Quat operator*(f32 f)
	{
		Quat result;
		result.w = f * w;
		result.x = f * x;
		result.y = f * y;
		result.z = f * z;
		return result;
	}

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

Quat operator*(Quat& q1, Quat& q2);

#endif
