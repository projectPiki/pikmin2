#ifndef _SYS_INDEXLIST_H
#define _SYS_INDEXLIST_H

/*
    __vt__Q23Sys9IndexList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys9IndexListFv
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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

struct Container<int> {
	virtual ~Container<int>();     // _08 (inline)
	virtual void _0C() = 0;        // _0C
	virtual void getObject(void*); // _10 (inline)
};

struct ArrayContainer<int> {
	virtual ~ArrayContainer<int>();          // _08 (inline)
	virtual void _0C() = 0;                  // _0C
	virtual void _10() = 0;                  // _10
	virtual void getNext(void*);             // _14 (inline)
	virtual void getStart();                 // _18 (inline)
	virtual void getEnd();                   // _1C (inline)
	virtual void get(void*);                 // _20 (inline)
	virtual void getAt(int);                 // _24 (inline)
	virtual void getTo();                    // _28 (inline)
	virtual void writeObject(Stream&, int&); // _2C (inline)
	virtual void readObject(Stream&, int&);  // _30 (inline)
	virtual void write(Stream&);             // _34 (inline)
	virtual void read(Stream&);              // _38 (inline)
	virtual void alloc(int);                 // _3C (inline)
	virtual void addOne(int&);               // _40 (inline)
	virtual void setArray(int*, int);        // _44 (inline)
};

namespace Sys {
struct IndexList : public CNode, public Container<int>, public ArrayContainer<int> {
	virtual ~IndexList();                    // _08 (inline)
	virtual void writeObject(Stream&, int&); // _2C (inline)
	virtual void readObject(Stream&, int&);  // _30 (inline)
};
} // namespace Sys

#endif
