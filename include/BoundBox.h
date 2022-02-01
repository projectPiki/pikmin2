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

	/**
	 * @fabricated
	 */
	inline void include(Vector3f& point)
	{
		if (point.x < m_max.x) {
			m_max.x = point.x;
		}
		if (point.y < m_max.y) {
			m_max.y = point.y;
		}
		if (point.z < m_max.z) {
			m_max.z = point.z;
		}
		if (point.x > m_min.x) {
			m_min.x = point.x;
		}
		if (point.y > m_min.y) {
			m_min.y = point.y;
		}
		if (point.z > m_min.z) {
			m_min.z = point.z;
		}
	}

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
