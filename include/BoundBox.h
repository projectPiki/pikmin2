#ifndef _BOUNDBOX_H
#define _BOUNDBOX_H

#include "Vector3.h"

namespace Sys {
struct Sphere;
} // namespace Sys

struct BoundBox {
	BoundBox()
	    : m_max(32768.0f)
	    , m_min(-32768.0f)
	{
	}
	/**
	 * @fabricated
	 */
	BoundBox(float max, float min)
	    : m_max(max)
	    , m_min(min)
	{
	}
	void makeBoundSphere(Sys::Sphere&);
	void read(struct Stream&);
	void transform(struct Matrixf&);

	Vector3f m_max;
	Vector3f m_min;
};

struct BoundBox2d {
	float _00;
	float _04;
	float _08;
	float _0C;
};

#endif
