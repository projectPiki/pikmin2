#ifndef _SYS_TUBE_H
#define _SYS_TUBE_H

#include "Vector3.h"

namespace Sys {
struct Sphere;
struct Tube {
	inline Tube() {};
	Tube(Vector3f&, Vector3f&, float, float);

	float getAxisVector(Vector3f&);
	void collide(Sphere&, Vector3f&, float&);
	float getPosRatio(const Vector3f&);
	Vector3f setPos(float);

	// Unused/inlined:
	void getYRatio(float);
	void getRatioRadius(float);
	void getPosGradient(Vector3f&, float, Vector3f&, Vector3f&);

	Vector3f _00; // _00
	Vector3f _0C; // _0C
	float _18;    // _18
	float _1C;    // _1C
};
} // namespace Sys

#endif
