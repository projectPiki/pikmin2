#ifndef _QUAT_H
#define _QUAT_H

#include "types.h"
#include "Vector3.h"
#include "Matrixf.h"

// Quat(ernion)
struct Quat {
	f32 w, x, y, z;
	Quat();
	// {
	// w = 0.0f;
	// x = 0.0f;
	// y = 0.0f;
	// z = 0.0f;
	// };
	Quat(Quat& arg0);
	// {
	//     w = arg0.w;
	//     x = arg0.x;
	//     y = arg0.y;
	//     z = arg0.z;
	// };
	Quat(float _w, Vector3f vec);
	// {
	// w = _w;
	// x = vec.x;
	// y = vec.y;
	// z = vec.z;
	// };
	void set(Vector3f& vec);
	void set(float a, float b, float c, float d)
	{
		w = a;
		x = b;
		y = c;
		z = d;
	};
	Quat operator*(Quat& q2);
	void inverse();
	void normalise();
	void slerp(Quat& q1, float f, Quat& q2);
	void fromMatrixf(Matrixf& arg0);
};

#endif
