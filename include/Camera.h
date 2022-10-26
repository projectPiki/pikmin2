#ifndef _CAMERA_H
#define _CAMERA_H

#include "Matrixf.h"
#include "Vector3.h"
#include "types.h"
#include "Container.h"
#include "Plane.h"
#include "System.h"
#include "Game/P2JST/ObjectCamera.h"

namespace Game {
namespace P2JST {
struct ObjectCamera;
}
} // namespace Game

namespace Sys {
struct Sphere;
struct Cylinder;
} // namespace Sys

// Size: 0x28
struct CullPlane : public ArrayContainer<Plane> {

	// needed for Camera ctor
	inline CullPlane(int a)
	{
		alloc(6);
		m_count = 6;
	}

	virtual ~CullPlane() { }                      // _08 (weak)
	virtual void writeObject(Stream&, Plane&) {}; // _2C (weak)
	virtual void readObject(Stream&, Plane&) {};  // _30 (weak)

	bool isPointVisible(Vector3f&, f32);
	bool isVisible(Sys::Sphere&);
	bool isCylinderVisible(Sys::Cylinder&);
};

// Size: 0x34
struct CullFrustum : public CullPlane {

	// needed for Camera ctor
	inline CullFrustum(int a)
	    : CullPlane(a)
	{
		m_viewAngle = 60.0f;
		u16 height  = sys->getRenderModeObj()->efbHeight;
		u16 width   = sys->getRenderModeObj()->fbWidth;

		m_aspectRatio = width / height;
	}

	virtual ~CullFrustum() { }                                    // _08
	virtual Matrixf* getViewMatrix(bool) { return m_viewMatrix; } // _48 (weak)
	virtual Vector3f getPosition();                               // _4C
	virtual void updatePlanes();                                  // _50

	Vector3f getSideVector();
	Vector3f getUpVector();
	Vector3f getViewVector();

	// CullPlane _00 - _24
	f32 m_viewAngle;       // _28
	f32 m_aspectRatio;     // _2C
	Matrixf* m_viewMatrix; // _30
};

// Size: 0x144
struct Camera : public CullFrustum {
	Camera();

	virtual ~Camera() { }                                     // _08 (weak)
	virtual Matrixf* getViewMatrix(bool);                     // _48
	virtual Vector3f getPosition();                           // _4C
	virtual void updatePlanes();                              // _50
	virtual void updateScreenConstants();                     // _54
	virtual Vector3f getLookAtPosition_();                    // _58 (weak)
	virtual f32 getTargetDistance();                          // _5C (weak)
	virtual Vector3f* getPositionPtr();                       // _60
	virtual Vector3f* on_getPositionPtr() { return nullptr; } // _64 (weak)
	virtual Vector3f* getSoundPositionPtr()                   // _68 (weak)
	{
		return &m_soundPosition;
	}
	virtual Matrixf* getSoundMatrixPtr() // _6C (weak)
	{
		return &m_soundMatrix;
	}
	virtual bool isSpecialCamera(); // _70 (weak)
	virtual void updateMatrix() { } // _74 (weak)
	virtual void doUpdate();        // _78 (weak)

	void calcProperDistance(f32, f32);
	f32 calcScreenSize(Sys::Sphere&);
	void copyFrom(Camera*);
	f32 getFar();
	Vector3f getLookAtPosition();
	f32 getNear();
	void setFixNearFar(bool, f32, f32);
	void setProjection();
	void update();
	// void updatePlanes();
	void updateSoundCamera(f32);

	inline bool isRunning() { return (m_jstObject && m_jstObject->isRunning()); }

	// CullFrustum _00 - _34
	Matrixf _34;                            // _034
	f32 m_near;                             // _064 - distance to 'near' plane
	f32 m_far;                              // _068 - distance to 'far' plane
	bool isFixed;                           // _06C
	f32 m_projectionNear;                   // _070 - projected distance to 'near' plane when not in fixed camera
	f32 m_projectionFar;                    // _074 - projected distance to 'far' plane when not in fixed camera
	Vector3f m_soundPosition;               // _078
	Matrixf m_soundMatrix;                  // _084
	Mtx44 m_projectionMtx;                  // _0B4
	Mtx44 _F4;                              // _0F4
	f32 _134;                               // _134
	f32 _138;                               // _138
	f32 _13C;                               // _13C
	Game::P2JST::ObjectCamera* m_jstObject; // _140
};

struct LookAtCamera : public Camera {
	LookAtCamera();

	virtual ~LookAtCamera() { }            // _08 (weak)
	virtual Vector3f getLookAtPosition_(); // _58 (weak)
	virtual Vector3f* on_getPositionPtr(); // _64 (weak)
	virtual void updateMatrix();           // _74
	virtual void startVibration(int);      // _7C (weak)

	// Camera _00 - _144
	Matrixf _144;              // _144
	Vector3f _174;             // _174 /* Sodium called this `position`, PikDecomp called it `angle`. :shrug: */
	Vector3f m_lookAtPosition; // _180 /* PikDecomp called this `position`. */
	Vector3f _18C;             // _18C
};

struct BlendCamera : public Camera {
	BlendCamera(int, Camera**);

	virtual ~BlendCamera() { } // _08 (weak)
	virtual void doUpdate();   // _78

	void setBlendFactor(f32);
	void setCameras(Camera**);

	// Camera _00 - _144
	int m_cameraCount;   // _144
	Camera** m_cameras;  // _148
	float m_blendFactor; // _14C
	Matrixf _150;        // _150
};

namespace PSM {
extern float sCamFov;
}

#endif
