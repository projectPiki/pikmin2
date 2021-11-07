#ifndef _SYS_VERTEXTABLE_H
#define _SYS_VERTEXTABLE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct Container<Vector3<float>> {
	virtual void _00() = 0;        // _00
	virtual void _04() = 0;        // _04
	virtual void getObject(void*); // _08

	// _00 VTBL
};

struct ArrayContainer<Vector3<float>> {
	virtual void _00() = 0;                      // _00
	virtual void _04() = 0;                      // _04
	virtual void _08() = 0;                      // _08
	virtual void getNext(void*);                 // _0C
	virtual void getStart();                     // _10
	virtual void getEnd();                       // _14
	virtual void get(void*);                     // _18
	virtual void getAt(int);                     // _1C
	virtual void getTo();                        // _20
	virtual void _24() = 0;                      // _24
	virtual void _28() = 0;                      // _28
	virtual void _2C() = 0;                      // _2C
	virtual void read(Stream&);                  // _30
	virtual void alloc(int);                     // _34
	virtual void _38() = 0;                      // _38
	virtual void setArray(Vector3<float>*, int); // _3C

	// _00 VTBL
};

namespace Sys {
struct VertexTable : public CNode,
                     public Container<Vector3<float>>,
                     public ArrayContainer<Vector3<float>> {
	virtual ~VertexTable();                             // _00
	virtual void getChildCount();                       // _04
	virtual void getObject(void*);                      // _08
	virtual void getNext(void*);                        // _0C
	virtual void getStart();                            // _10
	virtual void getEnd();                              // _14
	virtual void get(void*);                            // _18
	virtual void getAt(int);                            // _1C
	virtual void getTo();                               // _20
	virtual void writeObject(Stream&, Vector3<float>&); // _24
	virtual void readObject(Stream&, Vector3<float>&);  // _28
	virtual void write(Stream&);                        // _2C
	virtual void read(Stream&);                         // _30
	virtual void alloc(int);                            // _34
	virtual void addOne(Vector3<float>&);               // _38
	virtual void setArray(Vector3<float>*, int);        // _3C

	// _00 VTBL
};
} // namespace Sys

#endif
