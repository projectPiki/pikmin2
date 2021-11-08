#ifndef _SYS_TUBE_H
#define _SYS_TUBE_H

#include "Vector3.h"

namespace Sys {
struct Tube {
	Tube(Vector3f&, Vector3f&, float, float);

	Vector3f _00; // _00
	Vector3f _0C; // _0C
	float    _18; // _18
	float    _1C; // _1C
};
} // namespace Sys

#endif
