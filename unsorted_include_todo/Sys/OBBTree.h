#ifndef _SYS_OBBTREE_H
#define _SYS_OBBTREE_H

/*
    __vt__Q23Sys7OBBTree:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys7OBBTreeFv
    .4byte getChildCount__5CNodeFv
    .4byte "getMinY__Q23Sys7OBBTreeFR10Vector3<f>"
    .4byte findTriLists__Q23Sys7OBBTreeFRQ23Sys6Sphere
    .4byte read__Q23Sys7OBBTreeFR6Stream
    .4byte getCurrTri__Q23Sys7OBBTreeFRQ24Game11CurrTriInfo
    .4byte createTriangles__Q23Sys10TriDividerFRQ23Sys17CreateTriangleArg
    .4byte getBoundBox__Q23Sys7OBBTreeFR8BoundBox
    .4byte clone__Q23Sys7OBBTreeFR7Matrixf
    .4byte do_clone__Q23Sys10TriDividerFR7MatrixfPQ23Sys11VertexTablePQ23Sys13TriangleTable
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Sys {
struct TriDivider {
	virtual ~TriDivider();                                         // _08 (inline)
	virtual void _0C() = 0;                                        // _0C
	virtual void getMinY(Vector3<float>&);                         // _10
	virtual void findTriLists(Sphere&);                            // _14 (inline)
	virtual void read(Stream&);                                    // _18
	virtual void getCurrTri(Game::CurrTriInfo&);                   // _1C
	virtual void createTriangles(CreateTriangleArg&);              // _20 (inline)
	virtual void getBoundBox(BoundBox&);                           // _24 (inline)
	virtual void clone(Matrixf&);                                  // _28
	virtual void do_clone(Matrixf&, VertexTable*, TriangleTable*); // _2C (inline)
};
} // namespace Sys

namespace Sys {
struct OBBTree : public CNode, public TriDivider {
	virtual ~OBBTree();                          // _08 (inline)
	virtual void getMinY(Vector3<float>&);       // _10
	virtual void findTriLists(Sphere&);          // _14 (inline)
	virtual void read(Stream&);                  // _18
	virtual void getCurrTri(Game::CurrTriInfo&); // _1C
	virtual void getBoundBox(BoundBox&);         // _24 (inline)
	virtual void clone(Matrixf&);                // _28

	OBBTree();
	void construct(Sys::VertexTable*, Sys::TriangleTable*, int, int);
	void readWithoutVerts(Stream&, Sys::VertexTable&);
	void traceMove(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove_global(Game::MoveInfo&, float);
	void findRayIntersection(Sys::RayIntersectInfo&, Matrixf&, Matrixf&);
	void traceMove_new(Matrixf&, Matrixf&, Game::MoveInfo&, float);
	void traceMove_new_global(Game::MoveInfo&, float);
};
} // namespace Sys

#endif
