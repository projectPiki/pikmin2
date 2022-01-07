#ifndef _EBI_GEOMETRY_H
#define _EBI_GEOMETRY_H

#include "JSystem/JGeometry.h"
#include "Vector2.h"
#include "types.h"

namespace ebi {
struct EGEBox2f : JGeometry::TBox2f {
	bool isIn(Vector2f&);
	bool isIn(Vector2f&, float) const;
	bool isOut(Vector2f&);
	bool isOut(Vector2f&, float) const;
	void in(Vector2f*) const;
	void in(Vector2f*, float) const;
};

struct EGECircle2f {
	bool isOut(Vector2f&) const;
	void in(Vector2f*) const;
	void out(Vector2f*) const;

	Vector2f m_center;
	float m_radius;
};
} // namespace ebi

#endif
