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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Container < Sys
{
	struct Triangle >
	{
		virtual ~Triangle > ();                       // _08 (weak)
		virtual void _0C() = 0;                       // _0C
		virtual void getObject(void*);                // _10 (weak)
		virtual void getNext(void*);                  // _14 (weak)
		virtual void getStart();                      // _18 (weak)
		virtual void getEnd();                        // _1C (weak)
		virtual void get(void*);                      // _20 (weak)
		virtual void getAt(int);                      // _24 (weak)
		virtual void getTo();                         // _28 (weak)
		virtual void writeObject(Stream&, Triangle&); // _2C (weak)
		virtual void readObject(Stream&, Triangle&);  // _30 (weak)
		virtual void write(Stream&);                  // _34 (weak)
		virtual void read(Stream&);                   // _38 (weak)
		virtual void alloc(int);                      // _3C (weak)
		virtual void addOne(Sys::Triangle&);          // _40 (weak)
		virtual void setArray(Sys::Triangle*, int);   // _44 (weak)
	};
} // namespace Sys

namespace Sys {
struct TriangleTable : public CNode, public Triangle > {
	virtual ~TriangleTable();                     // _08 (weak)
	virtual void writeObject(Stream&, Triangle&); // _2C (weak)
	virtual void readObject(Stream&, Triangle&);  // _30 (weak)

	void createTriangleSphere(Sys::VertexTable&);
	TriangleTable();
	void cloneFrom(Matrixf&, Sys::TriangleTable*, Sys::VertexTable*);
};
} // namespace Sys

#endif
