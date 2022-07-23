#ifndef _SYS_TRIANGLE_H
#define _SYS_TRIANGLE_H

#include "types.h"
#include "Vector3.h"
#include "Sys/Sphere.h"
#include "mapCode.h"
#include "Plane.h"

struct __J3DUTriangle;
struct Graphics;
struct BoundBox2d;
struct Plane;

namespace Sys {
struct Edge;
struct VertexTable;

struct Triangle {
	struct SphereSweep {
		float _00;    // _00
		float _04;    // _04
		float _08;    // _08
		float _0C;    // _0C
		float _10;    // _10
		float _14;    // _14
		float _18;    // _18
		u8 _1C;       // _1C
		Vector3f _20; // _20
		float _2C;    // _2C
		Vector3f _30; // _30
	};

	Triangle();

	void createSphere(VertexTable&);
	bool fastIntersect(Sphere&);
	float calcDist(Plane&, VertexTable&);
	bool intersect(Edge&, float, Vector3f&);
	bool intersect(Edge&, float, Vector3f&, float&);
	bool intersect(VertexTable&, Sphere&);
	bool intersect(VertexTable&, Sphere&, Vector3f&);
	bool intersectHard(VertexTable&, Sphere&, Vector3f&);
	bool insideXZ(Vector3f&);
	void makePlanes(VertexTable&);
	bool intersect(VertexTable&, SphereSweep&);

	// Unused:
	void findNearestPoint(VertexTable&, Vector3f&, Vector3f&);
	void write(Stream&);
	void read(Stream&);
	void constructFromJ3D(VertexTable&, __J3DUTriangle&);
	void draw(Graphics&, VertexTable&, bool);
	bool intersect(VertexTable&, BoundBox2d&);
	bool intersect(Edge&, Vector3f&);
	bool intersectOptimistic(Sphere&, Vector3f&);

	Vector3i m_vertices;   // _00, _04, _08 	- addresses of each vertex in vertex table
	Plane m_trianglePlane; // _0C				- ax + by + cz + d form of plane triangle lies in
	Plane m_edgePlanes[3]; // _1C, _2C, _3C 	- plane through each side of triangle (?)
	Sphere m_sphere;       // _4C				- bounding sphere of triangle
	MapCode::Code m_code;  // _5C				- map code (?)

	// 1 -> 2 -> 3
	// ^----<----^
};
} // namespace Sys

#endif
