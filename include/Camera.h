#ifndef _CAMERA_H
#define _CAMERA_H

#include "types.h"

namespace Sys {
struct Sphere;
} // namespace Sys

struct Camera {
	u8 _00[40];    // _00
	float float28; // _28
	u8 _2C[140];   // _2C
	f32 _B4[4][4];
	u8 gapB8[124]; // _B8

	Camera();
	~Camera();

	void calcProperDistance(float, float);
	void calcScreenSize(Sys::Sphere&);
	void copyFrom(Camera*);
	void doUpdate();
	float getFar();
	void getLookAtPosition_();
	void getLookAtPosition();
	float getNear();
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
