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
} // namespace P2JST
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

	bool isPointVisible(Vector3f&, float);
	bool isVisible(Sys::Sphere&);
	bool isCylinderVisible(Sys::Cylinder&);
};

// Size: 0x34
struct CullFrustum : public CullPlane {

	// needed for Camera ctor
	inline CullFrustum(int a)
	    : CullPlane(a)
	{
		_28        = 60.0f;
		u16 height = sys->getRenderModeObj()->efbHeight;
		u16 width  = sys->getRenderModeObj()->fbWidth;

		_2C = width / height;
	}

	virtual ~CullFrustum() { }                                    // _08
	virtual Matrixf* getViewMatrix(bool) { return m_viewMatrix; } // _48 (weak)
	virtual Vector3f getPosition();                               // _4C
	virtual void updatePlanes();                                  // _50

	Vector3f getSideVector();
	Vector3f getUpVector();
	Vector3f getViewVector();

	// CullPlane _00 - _24
	float _28;             // _28
	float _2C;             // _2C - aspect ratio? see ctor
	Matrixf* m_viewMatrix; // _30
};

// Size: 0x144
struct Camera : public CullFrustum {
	Camera();

	virtual ~Camera() { }                   // _08 (weak)
	virtual Matrixf* getViewMatrix(bool);   // _48
	virtual Vector3f getPosition();         // _4C
	virtual void updatePlanes();            // _50
	virtual void updateScreenConstants();   // _54
	virtual Vector3f getLookAtPosition_();  // _58 (weak)
	virtual float getTargetDistance();      // _5C (weak)
	virtual Vector3f* getPositionPtr();     // _60 (weak)
	virtual Vector3f* on_getPositionPtr();  // _64 (weak)
	virtual Vector3f* getSoundPositionPtr() // _68 (weak)
	{
		return &m_soundPosition;
	}
	virtual Matrixf* getSoundMatrixPtr() // _6C (weak)
	{
		return &m_soundMatrix;
	}
	virtual bool isSpecialCamera(); // _70 (weak)
	virtual void updateMatrix();    // _74 (weak)
	virtual void doUpdate();        // _78 (weak)

	void calcProperDistance(float, float);
	float calcScreenSize(Sys::Sphere&);
	void copyFrom(Camera*);
	float getFar();
	Vector3f getLookAtPosition();
	float getNear();
	void setFixNearFar(bool, float, float);
	void setProjection();
	void update();
	// void updatePlanes();
	void updateSoundCamera(float);

	inline bool isRunning() { return (m_jstObject && m_jstObject->isRunning()); }

	// CullFrustum _00 - _34
	Matrixf _34;                            // _034
	float m_nearMaybe;                      // _064
	float m_farMaybe;                       // _068
	bool _6C;                               // _06C
	float m_projectionNearMaybe;            // _070
	float m_projectionFarMaybe;             // _074
	Vector3f m_soundPosition;               // _078
	Matrixf m_soundMatrix;                  // _084
	float _B4[4][4];                        // _0B4
	float _F4[4][4];                        // _0F4
	float _134;                             // _134
	float _138;                             // _138
	float _13C;                             // _13C
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
	BlendCamera(int, struct Camera**);

	virtual ~BlendCamera();  // _08 (weak)
	virtual void doUpdate(); // _78

	void setBlendFactor(float);
	void setCameras(Camera**);

	// Camera _00 - _144
	int m_cameraCount;   // _144
	Camera** m_cameras;  // _148
	float m_blendFactor; // _14C
	Matrixf _150;        // _150
};

#endif
