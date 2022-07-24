#ifndef _GAME_PLAYCAMERA_H
#define _GAME_PLAYCAMERA_H

/*
    __vt__Q24Game10PlayCamera:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game10PlayCameraFv
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
    .4byte getLookAtPosition___Q24Game10PlayCameraFv
    .4byte getTargetDistance__6CameraFv
    .4byte getPositionPtr__6CameraFv
    .4byte on_getPositionPtr__12LookAtCameraFv
    .4byte getSoundPositionPtr__6CameraFv
    .4byte getSoundMatrixPtr__6CameraFv
    .4byte isSpecialCamera__Q24Game10PlayCameraFv
    .4byte updateMatrix__Q24Game10PlayCameraFv
    .4byte doUpdate__Q24Game10PlayCameraFv
    .4byte startVibration__Q24Game10PlayCameraFi
    .4byte init__Q24Game10PlayCameraFv
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

struct Camera {
	virtual ~Camera();                    // _08 (inline)
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
	virtual void getLookAtPosition_();    // _58 (inline)
	virtual void getTargetDistance();     // _5C (inline)
	virtual void getPositionPtr();        // _60 (inline)
	virtual void _64() = 0;               // _64
	virtual void getSoundPositionPtr();   // _68 (inline)
	virtual void getSoundMatrixPtr();     // _6C (inline)
};

struct LookAtCamera {
	virtual ~LookAtCamera();           // _08 (inline)
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
	virtual void getLookAtPosition_(); // _58 (inline)
	virtual void _5C() = 0;            // _5C
	virtual void _60() = 0;            // _60
	virtual void on_getPositionPtr();  // _64 (inline)
};

namespace Game {
struct PlayCamera : public CNode,
                    public Container<Plane>,
                    public ArrayContainer<Plane>,
                    public CullPlane,
                    public Camera,
                    public LookAtCamera {
	virtual ~PlayCamera();             // _08 (inline)
	virtual void getLookAtPosition_(); // _58 (inline)
	virtual void isSpecialCamera();    // _70
	virtual void updateMatrix();       // _74
	virtual void doUpdate();           // _78
	virtual void startVibration(int);  // _7C (inline)
	virtual void init();               // _80

	PlayCamera();
	void setCameraParms(Game::CameraParms*);
	void setVibrationParms(Game::VibrationParms*);
	void setCameraAngle(float);
	void getCameraData(Game::CameraData&);
	void setCameraData(Game::CameraData&);
	void changePlayerMode(bool);
	void noUpdate();
	void isVibration();
	void startVibration(int, float);
	void startDemoCamera(int);
	void finishDemoCamera();
	void updateCameraMode();
	void startZoomCamera();
	void startGameCamera(int);
	void setTargetParms();
	void setTargetThetaToWhistle();
	void setFollowTime();
	void setSmoothThetaSpeed();
	void changeTargetTheta();
	void changeTargetAtPosition();
	void updateParms(int);
	void updateVibration(int);
	void otherVibFinished(int);
	void isModCameraFinished();
	void setCollisionCameraTargetPhi(int);
	void getCollisionCameraTargetPhi(float, float);
};
} // namespace Game

#endif
