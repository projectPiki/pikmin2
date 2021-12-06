#ifndef _CAMERA_H
#define _CAMERA_H

#include "Matrixf.h"
#include "Vector3.h"
#include "types.h"
#include "Container.h"
#include "Plane.h"

namespace Game {
namespace P2JST {
	struct ObjectCamera;
} // namespace P2JST
} // namespace Game
namespace Sys {
struct Sphere;
struct Cylinder;
} // namespace Sys

struct CullPlane : public ArrayContainer<Plane> {
	CullPlane(int);
	bool isPointVisible(Vector3f&, float);
	bool isVisible(Sys::Sphere&);
	bool isCylinderVisible(Sys::Cylinder&);
};

struct CullFrustum : public CullPlane {
	CullFrustum(int);
	virtual ~CullFrustum();               // _00
	virtual Matrixf* getViewMatrix(bool); // _40
	virtual Vector3f getPosition();       // _44
	virtual void updatePlanes();          // _48

	Vector3f getSideVector();
	Vector3f getUpVector();
	Vector3f getViewVector();

	float _28;             // _28
	float _2C;             // _2C
	Matrixf* m_viewMatrix; // _30
};

// Size: 0x144
struct Camera : public CullFrustum {
	Camera();
	virtual ~Camera();                       // _00
	virtual void updateScreenConstants();    // _4C
	virtual Vector3f getLookAtPosition_();   // _50
	virtual float getTargetDistance();       // _54
	virtual Vector3f* getPositionPtr();      // _58
	virtual Vector3f* on_getPositionPtr();   // _5C
	virtual Vector3f* getSoundPositionPtr(); // _60
	virtual Matrixf* getSoundMatrixPtr();    // _64
	virtual bool isSpecialCamera();          // _68
	virtual void updateMatrix();             // _6C
	virtual void doUpdate();                 // _70

	void calcProperDistance(float, float);
	float calcScreenSize(Sys::Sphere&);
	void copyFrom(Camera*);
	float getFar();
	Vector3f getLookAtPosition();
	float getNear();
	void setFixNearFar(bool, float, float);
	void setProjection();
	void update();
	void updatePlanes();
	void updateSoundCamera(float);

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

	virtual void startVibration(int); // _74

	Matrixf _144;  // _144
	Vector3f _174; // _174 /* Sodium called this `position`, PikDecomp called it
	               // `angle`. :shrug: */
	Vector3f m_lookAtPosition; // _180 /* PikDecomp called this `position`. */
	Vector3f _18C;             // _18C
};

#endif
