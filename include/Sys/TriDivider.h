#ifndef _SYS_TRIDIVIDER_H
#define _SYS_TRIDIVIDER_H

#include "BoundBox.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "CNode.h"

namespace Game {
struct MoveInfo;
struct CurrTriInfo;
} // namespace Game

namespace Sys {
struct VertexTable;
struct TriangleTable;
struct RayIntersectInfo;
struct Sphere;
struct CreateTriangleArg;
struct TriIndexList;

struct TriDivider : public CNode {
	/**
	 * @reifiedAddress{80133F04}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	virtual ~TriDivider() {};                                             // _00
	virtual float getMinY(Vector3f&)                 = 0;                 // _08
	virtual TriIndexList* findTriLists(Sys::Sphere&) = 0;                 // _0C
	virtual void read(Stream&)                       = 0;                 // _10
	virtual void getCurrTri(Game::CurrTriInfo&)      = 0;                 // _14
	virtual void createTriangles(CreateTriangleArg*);                     // _18
	virtual void getBoundBox(BoundBox&) = 0;                              // _1C
	virtual TriDivider* clone(Matrixf&);                                  // _20
	virtual TriDivider* do_clone(Matrixf*, VertexTable*, TriangleTable*); // _24

	void construct(Sys::VertexTable*, Sys::TriangleTable*, int, int);
	void findRayIntersection(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void traceMove_global(Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, float);

	VertexTable* m_vertexTable;     // _18
	TriangleTable* m_triangleTable; // _1C
};
} // namespace Sys

#endif
