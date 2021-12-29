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
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Container < Sys
{
	struct Triangle >
	{
		virtual void _00() = 0;                     // _00
		virtual void _04() = 0;                     // _04
		virtual void getObject(void*);              // _08
		virtual void getNext(void*);                // _0C
		virtual void getStart();                    // _10
		virtual void getEnd();                      // _14
		virtual void get(void*);                    // _18
		virtual void getAt(int);                    // _1C
		virtual void getTo();                       // _20
		virtual void _24() = 0;                     // _24
		virtual void _28() = 0;                     // _28
		virtual void write(Stream&);                // _2C
		virtual void read(Stream&);                 // _30
		virtual void alloc(int);                    // _34
		virtual void addOne(Sys::Triangle&);        // _38
		virtual void setArray(Sys::Triangle*, int); // _3C

		// _00 VTBL
	};
} // namespace Sys

namespace Sys {
struct TriangleTable : public CNode, public Triangle > {
	virtual ~TriangleTable();                     // _00
	virtual void getChildCount();                 // _04
	virtual void getObject(void*);                // _08
	virtual void getNext(void*);                  // _0C
	virtual void getStart();                      // _10
	virtual void getEnd();                        // _14
	virtual void get(void*);                      // _18
	virtual void getAt(int);                      // _1C
	virtual void getTo();                         // _20
	virtual void writeObject(Stream&, Triangle&); // _24
	virtual void readObject(Stream&, Triangle&);  // _28
	virtual void write(Stream&);                  // _2C
	virtual void read(Stream&);                   // _30
	virtual void alloc(int);                      // _34
	virtual void addOne(Sys::Triangle&);          // _38
	virtual void setArray(Sys::Triangle*, int);   // _3C

	// _00 VTBL
};
} // namespace Sys

#endif
