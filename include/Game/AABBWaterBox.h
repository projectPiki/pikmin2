#ifndef _GAME_AABBWATERBOX_H
#define _GAME_AABBWATERBOX_H

#include "BoundBox.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DTexture.h"
#include "Sys/MatBaseAnimator.h"
#include "types.h"
#include "Vector3.h"

struct Matrixf;

namespace Sys {
struct MatTexAnimation;
struct Sphere;
} // namespace Sys

namespace SysShape {
struct Model;
} // namespace SysShape

namespace Game {
struct WaterBox {
	WaterBox();

	/**
	 * @reifiedAddress{80106CE8}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual bool inWater(Sys::Sphere&) // _00
	{
		return false;
	}
	virtual bool inWater2d(Sys::Sphere&);        // _04
	virtual float getSeaLevel();                 // _08
	virtual float* getSeaHeightPtr();            // _0C
	virtual bool update();                       // _10
	virtual void startDown(float);               // _14
	virtual void startUp(float);                 // _18
	virtual void directDraw(struct Graphics&);   // _1C
	virtual void doAnimation();                  // _20
	virtual void doEntry();                      // _24
	virtual void doSetView(int);                 // _28
	virtual void doViewCalc();                   // _2C
	virtual void doSimulation(float);            // _30
	virtual void doDirectDraw(struct Graphics&); // _34
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*,
	                         float); // _38
	virtual void calcMatrix();       // _3C

	u8 m_flags; // _04
};

struct AABBWaterBox : public WaterBox {
	AABBWaterBox();

	virtual bool inWater(Sys::Sphere&);        // _00
	virtual bool inWater2d(Sys::Sphere&);      // _04
	virtual float getSeaLevel();               // _08
	virtual float* getSeaHeightPtr();          // _0C
	virtual bool update();                     // _10
	virtual void startDown(float);             // _14
	virtual void startUp(float);               // _18
	virtual void directDraw(struct Graphics&); // _1C
	virtual void doAnimation();                // _20
	virtual void doEntry();                    // _24
	virtual void doSetView(int);               // _28
	virtual void doViewCalc();                 // _2C
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*,
	                         float); // _38
	virtual void calcMatrix();       // _3C

	void create(Vector3f&, Vector3f&);
	void globalise(Game::AABBWaterBox*, Matrixf&);

	u16 _08;                            // _08
	float _0C;                          // _0C
	float _10;                          // _10
	float _14;                          // _14
	BoundBox m_bounds;                  // _18
	float _30;                          // _30
	float _34;                          // _34
	float _38;                          // _38
	float _3C;                          // _3C
	float _40;                          // _40
	Vector3f _44;                       // _44
	SysShape::Model* m_model;           // _50
	Sys::MatLoopAnimator m_matAnimator; // _54
	J3DTexture* _60;                    // _60
	short _64;                          // _64
};
} // namespace Game

#endif
