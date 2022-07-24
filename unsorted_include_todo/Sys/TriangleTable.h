#ifndef _SYS_TRIANGLETABLE_H
#define _SYS_TRIANGLETABLE_H

/*
    __vt__Q23Sys13TriangleTable:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys13TriangleTableFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__26Container<Q23Sys8Triangle>FPv"
    .4byte "getNext__31ArrayContainer<Q23Sys8Triangle>FPv"
    .4byte "getStart__31ArrayContainer<Q23Sys8Triangle>Fv"
    .4byte "getEnd__31ArrayContainer<Q23Sys8Triangle>Fv"
    .4byte "get__31ArrayContainer<Q23Sys8Triangle>FPv"
    .4byte "getAt__31ArrayContainer<Q23Sys8Triangle>Fi"
    .4byte "getTo__31ArrayContainer<Q23Sys8Triangle>Fv"
    .4byte writeObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle
    .4byte readObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle
    .4byte "write__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
    .4byte "read__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
    .4byte "alloc__31ArrayContainer<Q23Sys8Triangle>Fi"
    .4byte "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle"
    .4byte "setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei"
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Container < Sys
{
	struct Triangle >
	{
		virtual void _08() = 0;                     // _08
		virtual void _0C() = 0;                     // _0C
		virtual void getObject(void*);              // _10
		virtual void getNext(void*);                // _14
		virtual void getStart();                    // _18
		virtual void getEnd();                      // _1C
		virtual void get(void*);                    // _20
		virtual void getAt(int);                    // _24
		virtual void getTo();                       // _28
		virtual void _2C() = 0;                     // _2C
		virtual void _30() = 0;                     // _30
		virtual void write(Stream&);                // _34
		virtual void read(Stream&);                 // _38
		virtual void alloc(int);                    // _3C
		virtual void addOne(Sys::Triangle&);        // _40
		virtual void setArray(Sys::Triangle*, int); // _44

		// _00 VTBL
	};
} // namespace Sys

namespace Sys {
struct TriangleTable : public CNode, public Triangle > {
	virtual ~TriangleTable();                     // _08
	virtual void writeObject(Stream&, Triangle&); // _2C
	virtual void readObject(Stream&, Triangle&);  // _30

	// _00 VTBL
};
} // namespace Sys

#endif
