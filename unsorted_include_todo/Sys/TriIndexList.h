#ifndef _SYS_TRIINDEXLIST_H
#define _SYS_TRIINDEXLIST_H

/*
    __vt__Q23Sys12TriIndexList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys12TriIndexListFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__12Container<i>FPv"
    .4byte "getNext__17ArrayContainer<i>FPv"
    .4byte "getStart__17ArrayContainer<i>Fv"
    .4byte "getEnd__17ArrayContainer<i>Fv"
    .4byte "get__17ArrayContainer<i>FPv"
    .4byte "getAt__17ArrayContainer<i>Fi"
    .4byte "getTo__17ArrayContainer<i>Fv"
    .4byte writeObject__Q23Sys9IndexListFR6StreamRi
    .4byte readObject__Q23Sys9IndexListFR6StreamRi
    .4byte "write__17ArrayContainer<i>FR6Stream"
    .4byte "read__17ArrayContainer<i>FR6Stream"
    .4byte "alloc__17ArrayContainer<i>Fi"
    .4byte "addOne__17ArrayContainer<i>FRi"
    .4byte "setArray__17ArrayContainer<i>FPii"
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct Container<int> {
	virtual ~Container<int>();     // _08 (weak)
	virtual void _0C() = 0;        // _0C
	virtual void getObject(void*); // _10 (weak)
};

struct ArrayContainer<int> {
	virtual ~ArrayContainer<int>();   // _08 (weak)
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void getNext(void*);      // _14 (weak)
	virtual void getStart();          // _18 (weak)
	virtual void getEnd();            // _1C (weak)
	virtual void get(void*);          // _20 (weak)
	virtual void getAt(int);          // _24 (weak)
	virtual void getTo();             // _28 (weak)
	virtual void _2C() = 0;           // _2C
	virtual void _30() = 0;           // _30
	virtual void write(Stream&);      // _34 (weak)
	virtual void read(Stream&);       // _38 (weak)
	virtual void alloc(int);          // _3C (weak)
	virtual void addOne(int&);        // _40 (weak)
	virtual void setArray(int*, int); // _44 (weak)
};

namespace Sys {
struct IndexList {
	virtual ~IndexList();                    // _08 (weak)
	virtual void _0C() = 0;                  // _0C
	virtual void _10() = 0;                  // _10
	virtual void _14() = 0;                  // _14
	virtual void _18() = 0;                  // _18
	virtual void _1C() = 0;                  // _1C
	virtual void _20() = 0;                  // _20
	virtual void _24() = 0;                  // _24
	virtual void _28() = 0;                  // _28
	virtual void writeObject(Stream&, int&); // _2C (weak)
	virtual void readObject(Stream&, int&);  // _30 (weak)
};
} // namespace Sys

namespace Sys {
struct TriIndexList : public CNode, public Container<int>, public ArrayContainer<int>, public IndexList {
	virtual ~TriIndexList(); // _08 (weak)

	TriIndexList();
	void constructClone(Sys::TriangleTable&);
	void getMinMax(Sys::VertexTable&, Sys::TriangleTable&, Vector3<float>&, Vector3<float>&, float&, float&);
	void makeCovarianceMatrix(Sys::VertexTable&, Sys::TriangleTable&, Matrix3f&, Vector3<float>&);
	void draw(Graphics&, Sys::VertexTable&, Sys::TriangleTable&, bool);
};
} // namespace Sys

#endif
