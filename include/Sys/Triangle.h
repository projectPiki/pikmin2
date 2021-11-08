#ifndef _SYS_TRIANGLE_H
#define _SYS_TRIANGLE_H

#include "types.h"
#include "Vector3.h"
#include "Sys/Sphere.h"
#include "mapCode.h"

namespace Sys {
struct Triangle { // PlaceHolder Structure
	int m_vertices[3];        // _00
	Vector3f m_normalVector;  // _0C
	float m_distNormal;       // _18
	Vector3f m_edgeTangent12; // _1C
	float m_distTan1;         // _28
	Vector3f m_edgeTangent23; // _2C
	float m_distTan2;         // _38
	Vector3f m_edgeTangent31; // _3C
	float m_distTan3;         // _48
	Sphere m_sphere;          // _4C
	MapCode::Code m_code;     // _5C

	// 1 -> 2 -> 3
	// ^----<----^
};
} // namespace Sys

#endif
