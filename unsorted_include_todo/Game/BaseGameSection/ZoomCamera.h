#ifndef _GAME_BASEGAMESECTION_ZOOMCAMERA_H
#define _GAME_BASEGAMESECTION_ZOOMCAMERA_H

/*
    __vt__Q34Game15BaseGameSection10ZoomCamera:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15BaseGameSection10ZoomCameraFv
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
    .4byte doUpdate__Q34Game15BaseGameSection10ZoomCameraFv
    .4byte startVibration__12LookAtCameraFi
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
	virtual ~ArrayContainer<Plane>();   // _08 (weak)
	virtual void _0C() = 0;             // _0C
	virtual void _10() = 0;             // _10
	virtual void getNext(void*);        // _14 (weak)
	virtual void getStart();            // _18 (weak)
	virtual void getEnd();              // _1C (weak)
	virtual void get(void*);            // _20 (weak)
	virtual void getAt(int);            // _24 (weak)
	virtual void getTo();               // _28 (weak)
	virtual void _2C() = 0;             // _2C
	virtual void _30() = 0;             // _30
	virtual void write(Stream&);        // _34 (weak)
	virtual void read(Stream&);         // _38 (weak)
	virtual void alloc(int);            // _3C (weak)
	virtual void addOne(Plane&);        // _40 (weak)
	virtual void setArray(Plane*, int); // _44 (weak)
};

struct CullPlane {
	virtual ~CullPlane();                      // _08 (weak)
	virtual void _0C() = 0;                    // _0C
	virtual void _10() = 0;                    // _10
	virtual void _14() = 0;                    // _14
	virtual void _18() = 0;                    // _18
	virtual void _1C() = 0;                    // _1C
	virtual void _20() = 0;                    // _20
	virtual void _24() = 0;                    // _24
	virtual void _28() = 0;                    // _28
	virtual void writeObject(Stream&, Plane&); // _2C (weak)
	virtual void readObject(Stream&, Plane&);  // _30 (weak)
};

struct Camera {
	virtual ~Camera();                    // _08 (weak)
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
	virtual void _40() = 0;               // _40
	virtual void _44() = 0;               // _44
	virtual void getViewMatrix(bool);     // _48
	virtual void getPosition();           // _4C
	virtual void updatePlanes();          // _50
	virtual void updateScreenConstants(); // _54
	virtual void _58() = 0;               // _58
	virtual void getTargetDistance();     // _5C (weak)
	virtual void getPositionPtr();        // _60 (weak)
	virtual void _64() = 0;               // _64
	virtual void getSoundPositionPtr();   // _68 (weak)
	virtual void getSoundMatrixPtr();     // _6C (weak)
	virtual void isSpecialCamera();       // _70 (weak)
};

struct LookAtCamera {
	virtual ~LookAtCamera();           // _08 (weak)
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
	virtual void _50() = 0;            // _50
	virtual void _54() = 0;            // _54
	virtual void getLookAtPosition_(); // _58 (weak)
	virtual void _5C() = 0;            // _5C
	virtual void _60() = 0;            // _60
	virtual void on_getPositionPtr();  // _64 (weak)
	virtual void _68() = 0;            // _68
	virtual void _6C() = 0;            // _6C
	virtual void _70() = 0;            // _70
	virtual void updateMatrix();       // _74
	virtual void doUpdate();           // _78
	virtual void startVibration(int);  // _7C (weak)
};

namespace Game {
namespace BaseGameSection {
struct ZoomCamera : public CNode,
                    public Container<Plane>,
                    public ArrayContainer<Plane>,
                    public CullPlane,
                    public Camera,
                    public LookAtCamera {
	virtual ~ZoomCamera();   // _08 (weak)
	virtual void doUpdate(); // _78

	void init(float, float, Vector3<float>&, Controller*);
	void makeLookAt();
};
} // namespace BaseGameSection
} // namespace Game

#endif
