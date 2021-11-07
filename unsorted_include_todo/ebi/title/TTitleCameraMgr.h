#ifndef _EBI_TITLE_TTITLECAMERAMGR_H
#define _EBI_TITLE_TTITLECAMERAMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct Container<Plane> {
	virtual void _00() = 0;        // _00
	virtual void _04() = 0;        // _04
	virtual void getObject(void*); // _08

	// _00 VTBL
};

struct ArrayContainer<Plane> {
	virtual void _00() = 0;             // _00
	virtual void _04() = 0;             // _04
	virtual void _08() = 0;             // _08
	virtual void getNext(void*);        // _0C
	virtual void getStart();            // _10
	virtual void getEnd();              // _14
	virtual void get(void*);            // _18
	virtual void getAt(int);            // _1C
	virtual void getTo();               // _20
	virtual void _24() = 0;             // _24
	virtual void _28() = 0;             // _28
	virtual void write(Stream&);        // _2C
	virtual void _30() = 0;             // _30
	virtual void alloc(int);            // _34
	virtual void addOne(Plane&);        // _38
	virtual void setArray(Plane*, int); // _3C

	// _00 VTBL
};

struct CullPlane {
	virtual void _00() = 0;                    // _00
	virtual void _04() = 0;                    // _04
	virtual void _08() = 0;                    // _08
	virtual void _0C() = 0;                    // _0C
	virtual void _10() = 0;                    // _10
	virtual void _14() = 0;                    // _14
	virtual void _18() = 0;                    // _18
	virtual void _1C() = 0;                    // _1C
	virtual void _20() = 0;                    // _20
	virtual void writeObject(Stream&, Plane&); // _24
	virtual void readObject(Stream&, Plane&);  // _28

	// _00 VTBL
};

struct Camera {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void _20() = 0;               // _20
	virtual void _24() = 0;               // _24
	virtual void _28() = 0;               // _28
	virtual void _2C() = 0;               // _2C
	virtual void _30() = 0;               // _30
	virtual void _34() = 0;               // _34
	virtual void _38() = 0;               // _38
	virtual void _3C() = 0;               // _3C
	virtual void getViewMatrix(bool);     // _40
	virtual void getPosition();           // _44
	virtual void updatePlanes();          // _48
	virtual void updateScreenConstants(); // _4C
	virtual void _50() = 0;               // _50
	virtual void getTargetDistance();     // _54
	virtual void getPositionPtr();        // _58
	virtual void _5C() = 0;               // _5C
	virtual void getSoundPositionPtr();   // _60
	virtual void getSoundMatrixPtr();     // _64
	virtual void isSpecialCamera();       // _68
	virtual void _6C() = 0;               // _6C
	virtual void doUpdate();              // _70

	// _00 VTBL
};

struct LookAtCamera {
	virtual void _00() = 0;            // _00
	virtual void _04() = 0;            // _04
	virtual void _08() = 0;            // _08
	virtual void _0C() = 0;            // _0C
	virtual void _10() = 0;            // _10
	virtual void _14() = 0;            // _14
	virtual void _18() = 0;            // _18
	virtual void _1C() = 0;            // _1C
	virtual void _20() = 0;            // _20
	virtual void _24() = 0;            // _24
	virtual void _28() = 0;            // _28
	virtual void _2C() = 0;            // _2C
	virtual void _30() = 0;            // _30
	virtual void _34() = 0;            // _34
	virtual void _38() = 0;            // _38
	virtual void _3C() = 0;            // _3C
	virtual void _40() = 0;            // _40
	virtual void _44() = 0;            // _44
	virtual void _48() = 0;            // _48
	virtual void _4C() = 0;            // _4C
	virtual void getLookAtPosition_(); // _50
	virtual void _54() = 0;            // _54
	virtual void _58() = 0;            // _58
	virtual void on_getPositionPtr();  // _5C
	virtual void _60() = 0;            // _60
	virtual void _64() = 0;            // _64
	virtual void _68() = 0;            // _68
	virtual void updateMatrix();       // _6C
	virtual void _70() = 0;            // _70
	virtual void startVibration(int);  // _74

	// _00 VTBL
};

namespace ebi {
namespace title {
	struct TTitleCameraMgr : public CNode,
	                         public Container<Plane>,
	                         public ArrayContainer<Plane>,
	                         public CullPlane,
	                         public Camera,
	                         public LookAtCamera {
		virtual ~TTitleCameraMgr();                // _00
		virtual void getChildCount();              // _04
		virtual void getObject(void*);             // _08
		virtual void getNext(void*);               // _0C
		virtual void getStart();                   // _10
		virtual void getEnd();                     // _14
		virtual void get(void*);                   // _18
		virtual void getAt(int);                   // _1C
		virtual void getTo();                      // _20
		virtual void writeObject(Stream&, Plane&); // _24
		virtual void readObject(Stream&, Plane&);  // _28
		virtual void write(Stream&);               // _2C
		virtual void read(Stream&);                // _30
		virtual void alloc(int);                   // _34
		virtual void addOne(Plane&);               // _38
		virtual void setArray(Plane*, int);        // _3C
		virtual void getViewMatrix(bool);          // _40
		virtual void getPosition();                // _44
		virtual void updatePlanes();               // _48
		virtual void updateScreenConstants();      // _4C
		virtual void getLookAtPosition_();         // _50
		virtual void getTargetDistance();          // _54
		virtual void getPositionPtr();             // _58
		virtual void on_getPositionPtr();          // _5C
		virtual void getSoundPositionPtr();        // _60
		virtual void getSoundMatrixPtr();          // _64
		virtual void isSpecialCamera();            // _68
		virtual void updateMatrix();               // _6C
		virtual void doUpdate();                   // _70
		virtual void startVibration(int);          // _74

		// _00 VTBL
	};
} // namespace title
} // namespace ebi

#endif
