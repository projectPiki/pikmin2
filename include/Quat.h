#ifndef _QUAT_H
#define _QUAT_H

#include "types.h"
#include "Vector3.h"

// Quat(ernion)
struct Quat {
	Quat();
	Quat(float, Vector3f);

	f32 w, // _00
	    x, // _04
	    y, // _08
	    z; // _0C
};

#endif
