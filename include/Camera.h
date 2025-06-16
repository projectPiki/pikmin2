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
	CullPlane(int a);

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
	CullFrustum(int a);

	virtual ~CullFrustum() { }                                   // _08
	virtual Matrixf* getViewMatrix(bool) { return mViewMatrix; } // _48 (weak)
	virtual Vector3f getPosition();                              // _4C
	virtual void updatePlanes();                                 // _50

	Vector3f getSideVector();
	Vector3f getUpVector();
	Vector3f getViewVector();

	inline f32 getFOV(f32 viewAngle) { return (f32)atan(mAspectRatio * (f32)tan(viewAngle)); }

	// CullPlane _00 - _24
	f32 mViewAngle;       // _28
	f32 mAspectRatio;     // _2C
	Matrixf* mViewMatrix; // _30
};

// Size: 0x144
struct Camera : public CullFrustum {
	Camera();

	virtual ~Camera() { }                 // _08 (weak)
	virtual Matrixf* getViewMatrix(bool); // _48
	virtual Vector3f getPosition();       // _4C
	virtual void updatePlanes();          // _50
	virtual void updateScreenConstants(); // _54
	virtual Vector3f getLookAtPosition_() // _58 (weak)
	{
		return Vector3f::zero;
	}
	virtual f32 getTargetDistance() { return 0.0f; }          // _5C (weak)
	virtual Vector3f* getPositionPtr();                       // _60
	virtual Vector3f* on_getPositionPtr() { return nullptr; } // _64 (weak)
	virtual Vector3f* getSoundPositionPtr()                   // _68 (weak)
	{
		return &mSoundPosition;
	}
	virtual Matrixf* getSoundMatrixPtr() // _6C (weak)
	{
		return &mSoundMatrix;
	}
	virtual bool isSpecialCamera() { return false; } // _70 (weak)
	virtual void updateMatrix() { }                  // _74 (weak)
	virtual void doUpdate() { }                      // _78 (weak)

	f32 calcProperDistance(f32, f32);
	f32 calcScreenSize(Sys::Sphere&);
	void copyFrom(Camera*);
	f32 getFar();
	Vector3f getLookAtPosition();
	f32 getNear();
	void setFixNearFar(bool isFixed, f32 nearZ, f32 farZ);
	void setProjection();
	void update();
	void updateSoundCamera(f32);

	inline bool isRunning() { return (mJstObject && mJstObject->isRunning()); }

	inline void setProjectionNearFar(f32 near, f32 far)
	{
		mProjectionNear = near;
		mProjectionFar  = far;
	}

	// CullFrustum _00 - _34
	Matrixf mCurViewMatrix;                // _034
	f32 mNear;                             // _064 - distance to 'near' plane
	f32 mFar;                              // _068 - distance to 'far' plane
	bool mIsFixed;                         // _06C - determines which near/far values should be used
	f32 mProjectionNear;                   // _070 - projected distance to 'near' plane when not in fixed camera
	f32 mProjectionFar;                    // _074 - projected distance to 'far' plane when not in fixed camera
	Vector3f mSoundPosition;               // _078
	Matrixf mSoundMatrix;                  // _084
	Mtx44 mProjectionMtx;                  // _0B4
	Mtx44 mBackupMtx;                      // _0F4
	f32 mFieldOfViewRatio;                 // _134, from 0.0 when FOV is 0, to 1.0 when FOV is 180
	f32 mFieldOfViewTangent;               // _138, tangent from cos/sin of mFieldOfViewRatio
	f32 mCameraSizeModifier;               // _13C, used for detecting when things are far away? Stays very close to -0.5
	Game::P2JST::ObjectCamera* mJstObject; // _140
};

struct LookAtCamera : public Camera {
	LookAtCamera();

	virtual ~LookAtCamera() { }                                       // _08 (weak)
	virtual Vector3f getLookAtPosition_() { return mLookAtPosition; } // _58 (weak)
	virtual Vector3f* on_getPositionPtr() { return &mPosition; }      // _64 (weak)
	virtual void updateMatrix();                                      // _74
	virtual void startVibration(int) { }                              // _7C (weak)

	inline void setPosition(Vector3f& pos) { mPosition = pos; }

	// Camera _00 - _144
	Matrixf mLookMatrix;      // _144
	Vector3f mPosition;       // _174
	Vector3f mLookAtPosition; // _180
	Vector3f mLookAtRotation; // _18C
};

struct BlendCamera : public Camera {
	BlendCamera(int, Camera**);

	virtual ~BlendCamera() { } // _08 (weak)
	virtual void doUpdate();   // _78

	void setBlendFactor(f32);
	void setCameras(Camera**);

	// Camera _00 - _144
	int mCameraCount;      // _144
	Camera** mCameras;     // _148
	f32 mBlendFactor;      // _14C
	Matrixf mTargetMatrix; // _150
};

namespace PSM {
extern f32 sCamFov;
}

#endif
