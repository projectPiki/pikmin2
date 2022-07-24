#ifndef _SYS_GRIDDIVIDER_H
#define _SYS_GRIDDIVIDER_H

/*
    __vt__Q23Sys11GridDivider:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys11GridDividerFv
    .4byte getChildCount__5CNodeFv
    .4byte "getMinY__Q23Sys11GridDividerFR10Vector3<f>"
    .4byte findTriLists__Q23Sys11GridDividerFRQ23Sys6Sphere
    .4byte read__Q23Sys11GridDividerFR6Stream
    .4byte getCurrTri__Q23Sys11GridDividerFRQ24Game11CurrTriInfo
    .4byte createTriangles__Q23Sys11GridDividerFRQ23Sys17CreateTriangleArg
    .4byte getBoundBox__Q23Sys11GridDividerFR8BoundBox
    .4byte clone__Q23Sys10TriDividerFR7Matrixf
    .4byte do_clone__Q23Sys11GridDividerFR7MatrixfPQ23Sys11VertexTablePQ23Sys13TriangleTable
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Sys {
struct TriDivider {
	virtual ~TriDivider();                            // _08 (inline)
	virtual void _0C() = 0;                           // _0C
	virtual void getMinY(Vector3<float>&);            // _10
	virtual void findTriLists(Sphere&);               // _14
	virtual void read(Stream&);                       // _18
	virtual void getCurrTri(Game::CurrTriInfo&);      // _1C
	virtual void createTriangles(CreateTriangleArg&); // _20
	virtual void getBoundBox(BoundBox&);              // _24 (inline)
	virtual void clone(Matrixf&);                     // _28 (inline)
};
} // namespace Sys

namespace Sys {
struct GridDivider : public CNode, public TriDivider {
	virtual ~GridDivider();                                        // _08 (inline)
	virtual void getMinY(Vector3<float>&);                         // _10
	virtual void findTriLists(Sphere&);                            // _14
	virtual void read(Stream&);                                    // _18
	virtual void getCurrTri(Game::CurrTriInfo&);                   // _1C
	virtual void createTriangles(CreateTriangleArg&);              // _20
	virtual void getBoundBox(BoundBox&);                           // _24 (inline)
	virtual void do_clone(Matrixf&, VertexTable*, TriangleTable*); // _2C
	virtual void _30() = 0;                                        // _30

	void create(BoundBox&, int, int, Sys::VertexTable*, Sys::TriangleTable*);
};
} // namespace Sys

#endif
