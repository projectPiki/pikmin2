#ifndef _CAMERA_H
#define _CAMERA_H

#include "types.h"

namespace Sys {
struct Sphere;
} // namespace Sys

struct Camera {
	u32 _00; // _00

	Camera();
	~Camera();

	void calcProperDistance(float, float);
	void calcScreenSize(Sys::Sphere&);
	void copyFrom(Camera*);
	void doUpdate();
	void getFar();
	void getLookAtPosition_();
	void getLookAtPosition();
	void getNear();
	void getPosition();
	void getPositionPtr();
	void getSoundMatrixPtr();
	void getSoundPositionPtr();
	void getTargetDistance();
	void getViewMatrix(bool);
	void isSpecialCamera();
	void on_getPositionPtr();
	void setFixNearFar(bool, float, float);
	void setProjection();
	void update();
	void updateMatrix();
	void updatePlanes();
	void updateScreenConstants();
	void updateSoundCamera(float);
};

#endif