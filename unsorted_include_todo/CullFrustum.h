#ifndef _CULLFRUSTUM_H
#define _CULLFRUSTUM_H

/*
    __vt__11CullFrustum:
    .4byte 0
    .4byte 0
    .4byte __dt__11CullFrustumFv
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
    .4byte getViewMatrix__11CullFrustumFb
    .4byte getPosition__11CullFrustumFv
    .4byte updatePlanes__11CullFrustumFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

struct Container<Plane> {
	virtual ~Container<Plane>();   // _08 (inline)
	virtual void _0C() = 0;        // _0C
	virtual void getObject(void*); // _10 (inline)
};

struct ArrayContainer<Plane> {
	virtual ~ArrayContainer<Plane>();   // _08 (inline)
	virtual void _0C() = 0;             // _0C
	virtual void _10() = 0;             // _10
	virtual void getNext(void*);        // _14 (inline)
	virtual void getStart();            // _18 (inline)
	virtual void getEnd();              // _1C (inline)
	virtual void get(void*);            // _20 (inline)
	virtual void getAt(int);            // _24 (inline)
	virtual void getTo();               // _28 (inline)
	virtual void _2C() = 0;             // _2C
	virtual void _30() = 0;             // _30
	virtual void write(Stream&);        // _34 (inline)
	virtual void read(Stream&);         // _38 (inline)
	virtual void alloc(int);            // _3C (inline)
	virtual void addOne(Plane&);        // _40 (inline)
	virtual void setArray(Plane*, int); // _44 (inline)
};

struct CullPlane {
	virtual ~CullPlane();                      // _08 (inline)
	virtual void _0C() = 0;                    // _0C
	virtual void _10() = 0;                    // _10
	virtual void _14() = 0;                    // _14
	virtual void _18() = 0;                    // _18
	virtual void _1C() = 0;                    // _1C
	virtual void _20() = 0;                    // _20
	virtual void _24() = 0;                    // _24
	virtual void _28() = 0;                    // _28
	virtual void writeObject(Stream&, Plane&); // _2C (inline)
	virtual void readObject(Stream&, Plane&);  // _30 (inline)
};

struct CullFrustum : public CNode, public Container<Plane>, public ArrayContainer<Plane>, public CullPlane {
	virtual ~CullFrustum();           // _08 (inline)
	virtual void getViewMatrix(bool); // _48 (inline)
	virtual void getPosition();       // _4C
	virtual void updatePlanes();      // _50
};

#endif
