#ifndef _EBI_GEOMETRY_H
#define _EBI_GEOMETRY_H

#include "JSystem/JGeometry.h"
#include "Vector2.h"
#include "types.h"

namespace ebi {
struct EGEBox2f : JGeometry::TBox2f {
	EGEBox2f() { }

	EGEBox2f(f32 x1, f32 y1, f32 x2, f32 y2)
	    : JGeometry::TBox2f(x1, y1, x2, y2)
	{
	}
	bool isIn(Vector2f&, f32);
	bool isOut(Vector2f&);
	bool isOut(Vector2f&, f32);
	void in(Vector2f*, f32);

	// Unused/inlined:
	bool isIn(Vector2f&);
	void in(Vector2f*);
};

struct EGECircle2f {
	bool isOut(Vector2f&);
	bool in(Vector2f*);
	bool out(Vector2f*);

	Vector2f mCenter; // _00
	f32 mRadius;      // _08
};
} // namespace ebi

#endif
