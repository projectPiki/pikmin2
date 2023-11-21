#ifndef _GAME_WATERBOX_H
#define _GAME_WATERBOX_H

#include "BoundBox.h"
#include "Graphics.h"
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
enum WBFlags {
	WBF_Unset    = 0x0,
	WBF_Unknown1 = 0x1,
};

struct WaterBox {
	WaterBox();

	virtual bool inWater(Sys::Sphere&) // _08 (weak)
	{
		return false;
	}
	virtual bool inWater2d(Sys::Sphere&) { return false; }                  // _0C (weak)
	virtual f32 getSeaLevel()      = 0;                                     // _10
	virtual f32* getSeaHeightPtr() = 0;                                     // _14
	virtual bool update()          = 0;                                     // _18
	virtual void startDown(f32) { }                                         // _1C (weak)
	virtual void startUp(f32) { }                                           // _20 (weak)
	virtual void directDraw(Graphics&) { }                                  // _24 (weak)
	virtual void doAnimation() { }                                          // _28 (weak)
	virtual void doEntry() { }                                              // _2C (weak)
	virtual void doSetView(int viewportNumber) { }                          // _30 (weak)
	virtual void doViewCalc() { }                                           // _34 (weak)
	virtual void doSimulation(f32) { }                                      // _38 (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                            // _3C (weak)
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*, f32) { } // _40 (weak)
	virtual void calcMatrix() { }                                           // _44 (weak)

	inline void setFlag(u8 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u8 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u8 flag) const { return mFlags.typeView & flag; }

	// _00
	BitFlag<u8> mFlags; // _04
};

struct AABBWaterBox : public WaterBox {
	AABBWaterBox();

	enum StateID {
		WaterBox_Active,
		WaterBox_Lowering,
		WaterBox_Unk2,
		WaterBox_Dead,
	};

	virtual bool inWater(Sys::Sphere&);                                  // _08
	virtual bool inWater2d(Sys::Sphere&);                                // _0C
	virtual f32 getSeaLevel() { return mWaterTop + mLoweredAmount; }     // _10 (weak)
	virtual f32* getSeaHeightPtr() { return &mWaterHeight; }             // _14 (weak)
	virtual bool update();                                               // _18
	virtual void startDown(f32);                                         // _1C
	virtual void startUp(f32);                                           // _20
	virtual void directDraw(Graphics&);                                  // _24
	virtual void doAnimation();                                          // _28
	virtual void doEntry();                                              // _2C
	virtual void doSetView(int viewportNumber);                          // _30
	virtual void doViewCalc();                                           // _34
	virtual void attachModel(J3DModelData*, Sys::MatTexAnimation*, f32); // _40
	virtual void calcMatrix();                                           // _44

	void globalise(Game::AABBWaterBox*, Matrixf&);

	void create(Vector3f&, Vector3f&);

	inline J3DTexture* getFbTexture() { return mFbTexture; }

	inline s16 getFbTexIndex() const { return mFbTexIndex; }

	u16 mState;                        // _08 (1 = lowering)
	f32 mLoweredAmount;                // _0C (total amount moved downward)
	f32 mLoweringGoalDiff;             // _10 (how far to move down when lowering starts)
	f32 _14;                           // _14 (is this used for anything?)
	BoundBox mBounds;                  // _18
	f32 mWaterTop;                     // _30 (surface level of water)
	f32 mWaterHeight;                  // _34 (depth of the waterbox, from top to bottom)
	f32 mLowerTimer;                   // _38
	Vector2f mXzPieceSize;             // _3C, length from one side to another, divided by some number (so as to split into pieces)
	Vector3f mCenterPosition;          // _44
	SysShape::Model* mModel;           // _50
	Sys::MatLoopAnimator mMatAnimator; // _54
	J3DTexture* mFbTexture;            // _60
	s16 mFbTexIndex;                   // _64
};
} // namespace Game

#endif
