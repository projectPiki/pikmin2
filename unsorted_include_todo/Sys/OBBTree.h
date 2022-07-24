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
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Sys {
struct TriDivider {
	virtual void _08() = 0;                                        // _08
	virtual void _0C() = 0;                                        // _0C
	virtual void _10() = 0;                                        // _10
	virtual void _14() = 0;                                        // _14
	virtual void _18() = 0;                                        // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void createTriangles(CreateTriangleArg&);              // _20
	virtual void _24() = 0;                                        // _24
	virtual void _28() = 0;                                        // _28
	virtual void do_clone(Matrixf&, VertexTable*, TriangleTable*); // _2C

	// _00 VTBL
};
} // namespace Sys

namespace Sys {
struct OBBTree : public CNode, public TriDivider {
	virtual ~OBBTree();                          // _08
	virtual void getMinY(Vector3<float>&);       // _10
	virtual void findTriLists(Sphere&);          // _14
	virtual void read(Stream&);                  // _18
	virtual void getCurrTri(Game::CurrTriInfo&); // _1C
	virtual void getBoundBox(BoundBox&);         // _24
	virtual void clone(Matrixf&);                // _28

	// _00 VTBL
};
} // namespace Sys

#endif
