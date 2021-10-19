#ifndef _PLANE_H
#define _PLANE_H

#include "Vector3.h"

struct Plane {
	Plane();

	void read(Stream&);
	void write(Stream&);
	void calcDist(const Vector3f&) const;

	f32 a;
	f32 b;
	f32 c;
	f32 d;
};

#endif
