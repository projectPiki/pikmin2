#ifndef _SYS_TRIANGLE_H
#define _SYS_TRIANGLE_H

#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Triangle { // PlaceHolder Structure
	int m_vertices[3];
	Vector3f m_normalVector;
	float m_distNormal;
	Vector3f m_edgeTangent12;
	float m_distTan1;
	Vector3f m_edgeTangent23;
	float m_distTan2;
	Vector3f m_edgeTangent31;
	float m_distTan3;

	// 1 -> 2 -> 3
	// ^----<----^
};
} // namespace Sys

#endif