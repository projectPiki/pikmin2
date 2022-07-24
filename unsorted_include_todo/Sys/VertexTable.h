#ifndef _SYS_VERTEXTABLE_H
#define _SYS_VERTEXTABLE_H

/*
    __vt__Q23Sys11VertexTable:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys11VertexTableFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__23Container<10Vector3<f>>FPv"
    .4byte "getNext__28ArrayContainer<10Vector3<f>>FPv"
    .4byte "getStart__28ArrayContainer<10Vector3<f>>Fv"
    .4byte "getEnd__28ArrayContainer<10Vector3<f>>Fv"
    .4byte "get__28ArrayContainer<10Vector3<f>>FPv"
    .4byte "getAt__28ArrayContainer<10Vector3<f>>Fi"
    .4byte "getTo__28ArrayContainer<10Vector3<f>>Fv"
    .4byte "writeObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>"
    .4byte "readObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>"
    .4byte write__Q23Sys11VertexTableFR6Stream
    .4byte "read__28ArrayContainer<10Vector3<f>>FR6Stream"
    .4byte "alloc__28ArrayContainer<10Vector3<f>>Fi"
    .4byte "addOne__Q23Sys11VertexTableFR10Vector3<f>"
    .4byte "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i"
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct Container<Vector3<float>> {
	virtual void _08() = 0;        // _08
	virtual void _0C() = 0;        // _0C
	virtual void getObject(void*); // _10

	// _00 VTBL
};

struct ArrayContainer<Vector3<float>> {
	virtual void _08() = 0;                      // _08
	virtual void _0C() = 0;                      // _0C
	virtual void _10() = 0;                      // _10
	virtual void getNext(void*);                 // _14
	virtual void getStart();                     // _18
	virtual void getEnd();                       // _1C
	virtual void get(void*);                     // _20
	virtual void getAt(int);                     // _24
	virtual void getTo();                        // _28
	virtual void _2C() = 0;                      // _2C
	virtual void _30() = 0;                      // _30
	virtual void _34() = 0;                      // _34
	virtual void read(Stream&);                  // _38
	virtual void alloc(int);                     // _3C
	virtual void _40() = 0;                      // _40
	virtual void setArray(Vector3<float>*, int); // _44

	// _00 VTBL
};

namespace Sys {
struct VertexTable : public CNode, public Container<Vector3<float>>, public ArrayContainer<Vector3<float>> {
	virtual ~VertexTable();                             // _08
	virtual void writeObject(Stream&, Vector3<float>&); // _2C
	virtual void readObject(Stream&, Vector3<float>&);  // _30
	virtual void write(Stream&);                        // _34
	virtual void addOne(Vector3<float>&);               // _40

	// _00 VTBL
};
} // namespace Sys

#endif
