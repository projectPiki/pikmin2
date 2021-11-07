#ifndef _SYS_OBBTREE_H
#define _SYS_OBBTREE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Sys {
struct TriDivider {
	virtual void _00() = 0;                                        // _00
	virtual void _04() = 0;                                        // _04
	virtual void _08() = 0;                                        // _08
	virtual void _0C() = 0;                                        // _0C
	virtual void _10() = 0;                                        // _10
	virtual void _14() = 0;                                        // _14
	virtual void createTriangles(CreateTriangleArg&);              // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void _20() = 0;                                        // _20
	virtual void do_clone(Matrixf&, VertexTable*, TriangleTable*); // _24

	// _00 VTBL
};
} // namespace Sys

namespace Sys {
struct OBBTree : public CNode, public TriDivider {
	virtual ~OBBTree();                                            // _00
	virtual void getChildCount();                                  // _04
	virtual void getMinY(Vector3<float>&);                         // _08
	virtual void findTriLists(Sphere&);                            // _0C
	virtual void read(Stream&);                                    // _10
	virtual void getCurrTri(Game::CurrTriInfo&);                   // _14
	virtual void createTriangles(CreateTriangleArg&);              // _18
	virtual void getBoundBox(BoundBox&);                           // _1C
	virtual void clone(Matrixf&);                                  // _20
	virtual void do_clone(Matrixf&, VertexTable*, TriangleTable*); // _24

	// _00 VTBL
};
} // namespace Sys

#endif
