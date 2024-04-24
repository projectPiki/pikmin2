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
		enum SweepType { ST_SphereInsidePlane = 0, ST_SphereIntersectPlane = 1, ST_EdgeIntersect = 2 };

		inline SphereSweep()
		    : mSweepType(ST_SphereInsidePlane)
		{
		}

		Vector3f mStartPos;          // _00
		Sys::Sphere mSphere;         // _0C
		u8 mSweepType;               // _1C
		Vector3f mNormal;            // _20
		f32 mDistanceFromRadius;     // _2C
		Vector3f mIntersectionPoint; // _30
	};

	Triangle();

	void createSphere(VertexTable&);
	bool fastIntersect(Sphere&);
	f32 calcDist(Plane&, VertexTable&);
	bool intersect(Edge&, f32, Vector3f&);
	bool intersect(Edge&, f32, Vector3f&, f32&);
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

	static bool debug;

	int mVertices[3];     // _00, _04, _08 	- addresses of each vertex in vertex table
	Plane mTrianglePlane; // _0C				- ax + by + cz + d form of plane triangle lies in
	Plane mEdgePlanes[3]; // _1C, _2C, _3C 	- plane through each side of triangle (?)
	Sphere mSphere;       // _4C				- bounding sphere of triangle
	MapCode::Code mCode;  // _5C				- map code (?)

	// 1 -> 2 -> 3
	// ^----<----^
};
} // namespace Sys

#endif
