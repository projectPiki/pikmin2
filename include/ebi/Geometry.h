#ifndef _EBI_GEOMETRY_H
#define _EBI_GEOMETRY_H

#include "JSystem/JGeometry.h"
#include "Vector2.h"
#include "types.h"

namespace ebi {
struct EGEBox2f : JGeometry::TBox2f {
	bool isIn(Vector2f&, float);
	bool isOut(Vector2f&);
	bool isOut(Vector2f&, float);
	void in(Vector2f*, float);

	// Unused/inlined:
	bool isIn(Vector2f&);
	void in(Vector2f*);
};

struct EGECircle2f {
	bool isOut(Vector2f&);
	void in(Vector2f*);
	void out(Vector2f*);

	Vector2f m_center; // _00
	float m_radius;    // _08
};
} // namespace ebi

#endif
