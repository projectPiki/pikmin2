#ifndef _BOUNDBOX_H
#define _BOUNDBOX_H

#include "Vector3.h"

namespace Sys {
struct Sphere;
} // namespace Sys

struct BoundBox {
	void makeBoundSphere(Sys::Sphere&);
	void read(struct Stream&);
	void transform(struct Matrixf&);

	Vector3f m_min;
	Vector3f m_max;
};

struct BoundBox2d {
	float _00;
	float _04;
	float _08;
	float _0C;
};

#endif
