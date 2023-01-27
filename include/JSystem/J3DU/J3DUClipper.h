#ifndef _JSYSTEM_J3D_J3DUCLIPPER_H
#define _JSYSTEM_J3D_J3DUCLIPPER_H

#include "Dolphin/vec.h"
#include "Dolphin/mtx.h"

struct J3DUClipper {
	J3DUClipper() { init(); }

	// NB: vtable is stripped
	virtual ~J3DUClipper(); // _08

	void init();
	void calcViewFrustum();
	u32 clip(const Mtx, Vec, f32) const;
	u32 clip(const Mtx, Vec*, Vec*) const;

	void setFovy(f32 fovy) { mFovY = fovy; }
	void setAspect(f32 aspect) { mAspect = aspect; }
	void setNear(f32 near) { mNear = near; }
	void setFar(f32 far) { mFar = far; }

	// _00 = VTBL
	Vec _04;      // _04
	Vec _10;      // _10
	Vec _1C;      // _1C
	Vec _28;      // _28
	u8 _34[0x18]; // _34, unknown
	f32 mFovY;    // _4C
	f32 mAspect;  // _50
	f32 mNear;    // _54
	f32 mFar;     // _58
};

#endif
