#ifndef _SYS_TRIDIVIDER_H
#define _SYS_TRIDIVIDER_H

/*
    __vt__Q23Sys10TriDivider:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys10TriDividerFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte createTriangles__Q23Sys10TriDividerFRQ23Sys17CreateTriangleArg
    .4byte 0
    .4byte clone__Q23Sys10TriDividerFR7Matrixf
    .4byte
   do_clone__Q23Sys10TriDividerFR7MatrixfPQ23Sys11VertexTablePQ23Sys13TriangleTable
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Sys {
struct TriDivider : public CNode {
	virtual ~TriDivider();                                         // _00
	virtual void getChildCount();                                  // _04
	virtual void _08() = 0;                                        // _08
	virtual void _0C() = 0;                                        // _0C
	virtual void _10() = 0;                                        // _10
	virtual void _14() = 0;                                        // _14
	virtual void createTriangles(CreateTriangleArg&);              // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void clone(Matrixf&);                                  // _20
	virtual void do_clone(Matrixf&, VertexTable*, TriangleTable*); // _24

	// _00 VTBL
};
} // namespace Sys

#endif
