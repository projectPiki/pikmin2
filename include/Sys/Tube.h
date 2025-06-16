#ifndef _SYS_TUBE_H
#define _SYS_TUBE_H

#include "Vector3.h"

namespace Sys {
struct Sphere;
struct Tube {
	inline Tube() {};
	Tube(Vector3f& pos1, Vector3f& pos2, f32 rad1, f32 rad2)
	    : mStartPos(pos1)
	    , mEndPos(pos2)
	    , mStartRadius(rad1)
	    , mEndRadius(rad2)
	{
	}

	void getAxisVector(Vector3f&);
	bool collide(Sphere&, Vector3f&, f32&);
	f32 getPosRatio(const Vector3f&);
	Vector3f setPos(f32);

	// Unused/inlined:
	void getYRatio(f32);
	void getRatioRadius(f32);
	void getPosGradient(Vector3f&, f32, Vector3f&, Vector3f&);

	Vector3f mStartPos; // _00 - position of start of tube
	Vector3f mEndPos;   // _0C - position of end of tube
	f32 mStartRadius;   // _18 - radius of tube at start
	f32 mEndRadius;     // _1C - radius of tube at end
};
} // namespace Sys

#endif
