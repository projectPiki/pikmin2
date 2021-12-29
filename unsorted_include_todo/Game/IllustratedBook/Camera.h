#ifndef _GAME_ILLUSTRATEDBOOK_CAMERA_H
#define _GAME_ILLUSTRATEDBOOK_CAMERA_H

/*
    __vt__Q34Game15IllustratedBook6Camera:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook6CameraFv
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
    .4byte getViewMatrix__6CameraFb
    .4byte getPosition__6CameraFv
    .4byte updatePlanes__6CameraFv
    .4byte updateScreenConstants__6CameraFv
    .4byte getLookAtPosition___12LookAtCameraFv
    .4byte getTargetDistance__6CameraFv
    .4byte getPositionPtr__6CameraFv
    .4byte on_getPositionPtr__12LookAtCameraFv
    .4byte getSoundPositionPtr__6CameraFv
    .4byte getSoundMatrixPtr__6CameraFv
    .4byte isSpecialCamera__6CameraFv
    .4byte updateMatrix__12LookAtCameraFv
    .4byte doUpdate__Q34Game15IllustratedBook6CameraFv
    .4byte startVibration__Q34Game15IllustratedBook6CameraFi
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

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
	virtual void read(Stream&);         // _30
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

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct Camera : public CNode,
	                public Container<Plane>,
	                public ArrayContainer<Plane>,
	                public CullPlane,
	                public LookAtCamera {
		virtual ~Camera();                         // _00
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
		virtual void _78()  = 0;                   // _78
		virtual void _7C()  = 0;                   // _7C
		virtual void _80()  = 0;                   // _80
		virtual void _84()  = 0;                   // _84
		virtual void _88()  = 0;                   // _88
		virtual void _8C()  = 0;                   // _8C
		virtual void _90()  = 0;                   // _90
		virtual void _94()  = 0;                   // _94
		virtual void _98()  = 0;                   // _98
		virtual void _9C()  = 0;                   // _9C
		virtual void _A0()  = 0;                   // _A0
		virtual void _A4()  = 0;                   // _A4
		virtual void _A8()  = 0;                   // _A8
		virtual void _AC()  = 0;                   // _AC
		virtual void _B0()  = 0;                   // _B0
		virtual void _B4()  = 0;                   // _B4
		virtual void _B8()  = 0;                   // _B8
		virtual void _BC()  = 0;                   // _BC
		virtual void _C0()  = 0;                   // _C0
		virtual void _C4()  = 0;                   // _C4
		virtual void _C8()  = 0;                   // _C8
		virtual void _CC()  = 0;                   // _CC
		virtual void _D0()  = 0;                   // _D0
		virtual void _D4()  = 0;                   // _D4
		virtual void _D8()  = 0;                   // _D8
		virtual void _DC()  = 0;                   // _DC
		virtual void _E0()  = 0;                   // _E0
		virtual void _E4()  = 0;                   // _E4
		virtual void _E8()  = 0;                   // _E8
		virtual void _EC()  = 0;                   // _EC
		virtual void _F0()  = 0;                   // _F0
		virtual void _F4()  = 0;                   // _F4
		virtual void _F8()  = 0;                   // _F8
		virtual void _FC()  = 0;                   // _FC
		virtual void _100() = 0;                   // _100
		virtual void _104() = 0;                   // _104
		virtual void _108() = 0;                   // _108
		virtual void _10C() = 0;                   // _10C
		virtual void _110() = 0;                   // _110
		virtual void _114() = 0;                   // _114
		virtual void _118() = 0;                   // _118
		virtual void _11C() = 0;                   // _11C
		virtual void _120() = 0;                   // _120
		virtual void _124() = 0;                   // _124
		virtual void _128() = 0;                   // _128
		virtual void _12C() = 0;                   // _12C
		virtual void _130() = 0;                   // _130
		virtual void _134() = 0;                   // _134
		virtual void _138() = 0;                   // _138
		virtual void _13C() = 0;                   // _13C
		virtual void _140() = 0;                   // _140
		virtual void _144() = 0;                   // _144
		virtual void _148() = 0;                   // _148
		virtual void _14C() = 0;                   // _14C
		virtual void _150() = 0;                   // _150

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
