#ifndef _SYS_TRIANGLE_H
#define _SYS_TRIANGLE_H

#include "types.h"
#include "Vector3.h"
#include "Sys/Sphere.h"
#include "mapCode.h"

struct __J3DUTriangle;
struct Graphics;
struct BoundBox2d;
namespace Sys {
struct Edge;
struct Plane;
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
	void calcDist(Plane&, VertexTable&);
	bool intersect(Edge&, float, Vector3f&);
	bool intersect(Edge&, float, Vector3f&, float&);
	bool intersect(VertexTable&, Sphere&);
	bool intersect(VertexTable&, Sphere&, Vector3f&);
	bool intersectHard(VertexTable&, Sphere&, Vector3f&);
	bool insideXZ(Vector3f&);
	void makePlanes(VertexTable&);
	bool intersect(VertexTable&, SphereSweep&);

	// Unused/inlined:
	void findNearestPoint(VertexTable&, Vector3f&, Vector3f&);
	void write(Stream&);
	void read(Stream&);
	void constructFromJ3D(VertexTable&, __J3DUTriangle&);
	void draw(Graphics&, VertexTable&, bool);
	bool intersect(VertexTable&, BoundBox2d&);
	bool intersect(Edge&, Vector3f&);
	bool intersectOptimistic(Sphere&, Vector3f&);

	Vector3i m_vertices;      // _00
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
