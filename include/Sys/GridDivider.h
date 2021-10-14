#ifndef _SYS_GRIDDIVIDER_H
#define _SYS_GRIDDIVIDER_H

#include "Vector3.h"

namespace Game {
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct CreateTriangleArg;
struct Sphere;

struct GridDivider {
	~GridDivider();

	void create(struct BoundBox&, int, int, Sys::VertexTable*,
	            Sys::TriangleTable*);
	void createTriangles(Sys::CreateTriangleArg&);
	void do_clone(struct Matrixf&, Sys::VertexTable*, Sys::TriangleTable*);
	void findTriLists(Sys::Sphere&);
	void getBoundBox(BoundBox&);
	void getCurrTri(Game::CurrTriInfo&);
	void getMinY(Vector3f&);
	void read(Stream&);
};
} // namespace Sys

#endif