#ifndef _SYS_INDEXLIST_H
#define _SYS_INDEXLIST_H

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
struct IndexList : public CNode,
                   public Container<int>,
                   public ArrayContainer<int> {
	virtual ~IndexList();                    // _00
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
