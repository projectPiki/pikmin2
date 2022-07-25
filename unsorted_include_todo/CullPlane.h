#ifndef _CULLPLANE_H
#define _CULLPLANE_H

/*
    __vt__9CullPlane:
    .4byte 0
    .4byte 0
    .4byte __dt__9CullPlaneFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__17Container<5Plane>FPv"
    .4byte "getNext__22ArrayContainer<5Plane>FPv"
    .4byte "getStart__22ArrayContainer<5Plane>Fv"
    .4byte "getEnd__22ArrayContainer<5Plane>Fv"
    .4byte "get__22ArrayContainer<5Plane>FPv"
    .4byte "getAt__22ArrayContainer<5Plane>Fi"
    .4byte "getTo__22ArrayContainer<5Plane>Fv"
    .4byte writeObject__9CullPlaneFR6StreamR5Plane
    .4byte readObject__9CullPlaneFR6StreamR5Plane
    .4byte "write__22ArrayContainer<5Plane>FR6Stream"
    .4byte "read__22ArrayContainer<5Plane>FR6Stream"
    .4byte "alloc__22ArrayContainer<5Plane>Fi"
    .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
    .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct Container<Plane> {
	virtual ~Container<Plane>();   // _08 (weak)
	virtual void _0C() = 0;        // _0C
	virtual void getObject(void*); // _10 (weak)
};

struct ArrayContainer<Plane> {
	virtual ~ArrayContainer<Plane>();          // _08 (weak)
	virtual void _0C() = 0;                    // _0C
	virtual void _10() = 0;                    // _10
	virtual void getNext(void*);               // _14 (weak)
	virtual void getStart();                   // _18 (weak)
	virtual void getEnd();                     // _1C (weak)
	virtual void get(void*);                   // _20 (weak)
	virtual void getAt(int);                   // _24 (weak)
	virtual void getTo();                      // _28 (weak)
	virtual void writeObject(Stream&, Plane&); // _2C (weak)
	virtual void readObject(Stream&, Plane&);  // _30 (weak)
	virtual void write(Stream&);               // _34 (weak)
	virtual void read(Stream&);                // _38 (weak)
	virtual void alloc(int);                   // _3C (weak)
	virtual void addOne(Plane&);               // _40 (weak)
	virtual void setArray(Plane*, int);        // _44 (weak)
};

struct CullPlane : public CNode, public Container<Plane>, public ArrayContainer<Plane> {
	virtual ~CullPlane();                      // _08 (weak)
	virtual void writeObject(Stream&, Plane&); // _2C (weak)
	virtual void readObject(Stream&, Plane&);  // _30 (weak)
};

#endif
