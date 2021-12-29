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
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct Container<int> {
	virtual void _00() = 0;        // _00
	virtual void _04() = 0;        // _04
	virtual void getObject(void*); // _08

	// _00 VTBL
};

struct ArrayContainer<int> {
	virtual void _00() = 0;           // _00
	virtual void _04() = 0;           // _04
	virtual void _08() = 0;           // _08
	virtual void getNext(void*);      // _0C
	virtual void getStart();          // _10
	virtual void getEnd();            // _14
	virtual void get(void*);          // _18
	virtual void getAt(int);          // _1C
	virtual void getTo();             // _20
	virtual void _24() = 0;           // _24
	virtual void _28() = 0;           // _28
	virtual void write(Stream&);      // _2C
	virtual void read(Stream&);       // _30
	virtual void alloc(int);          // _34
	virtual void addOne(int&);        // _38
	virtual void setArray(int*, int); // _3C

	// _00 VTBL
};

namespace Sys {
struct IndexList {
	virtual void _00() = 0;                  // _00
	virtual void _04() = 0;                  // _04
	virtual void _08() = 0;                  // _08
	virtual void _0C() = 0;                  // _0C
	virtual void _10() = 0;                  // _10
	virtual void _14() = 0;                  // _14
	virtual void _18() = 0;                  // _18
	virtual void _1C() = 0;                  // _1C
	virtual void _20() = 0;                  // _20
	virtual void writeObject(Stream&, int&); // _24
	virtual void readObject(Stream&, int&);  // _28

	// _00 VTBL
};
} // namespace Sys

namespace Sys {
struct TriIndexList : public CNode,
                      public Container<int>,
                      public ArrayContainer<int>,
                      public IndexList {
	virtual ~TriIndexList();                 // _00
	virtual void getChildCount();            // _04
	virtual void getObject(void*);           // _08
	virtual void getNext(void*);             // _0C
	virtual void getStart();                 // _10
	virtual void getEnd();                   // _14
	virtual void get(void*);                 // _18
	virtual void getAt(int);                 // _1C
	virtual void getTo();                    // _20
	virtual void writeObject(Stream&, int&); // _24
	virtual void readObject(Stream&, int&);  // _28
	virtual void write(Stream&);             // _2C
	virtual void read(Stream&);              // _30
	virtual void alloc(int);                 // _34
	virtual void addOne(int&);               // _38
	virtual void setArray(int*, int);        // _3C

	// _00 VTBL
};
} // namespace Sys

#endif
