#ifndef _OG_SCREEN_OTAKARASENSOR_H
#define _OG_SCREEN_OTAKARASENSOR_H

#include "types.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/PictureTreeColor.h"

namespace og {
namespace Screen {

struct ScaleMgr;
struct AngleMgr;

struct OtakaraSensor {
	OtakaraSensor();
	void init(J2DPane*, J2DPane*, int);
	void startSensorEff();
	void setParam(f32, int, bool, bool);
	void updateInit();
	void show();
	void update();
	void adjPos(f32, f32);
	void adjScale(f32);
	void draw(J2DGrafContext&);
	void hide();
	f32 calcLevel(f32);
	void calcGrayColor();
	void calcAppear();
	void startGraySensor();
	void calcAngle();
	void calcReaction();

	inline void setSensorVec1(f32 x, f32 y) { _4C = Vector2f(x, y); }

	inline void setCompleteEfxOffset(f32 x, f32 y) { mCompleteEfxOffset = Vector2f(x, y); }

	inline void setAppearEfxOffset(f32 x, f32 y) { mAppearEfxOffset = Vector2f(x, y); }

	f32 mCurrReactionLevel;                  // _00
	f32 mAngle;                              // _04
	J2DPane* mPane1;                         // _08
	J2DPane* mPane2;                         // _0C
	f32 mCurrAngle;                          // _10
	f32 mReactTimer;                         // _14
	Vector2f mPanePos;                       // _18
	f32 mScale;                              // _20
	ScaleMgr* mScaleMgr;                     // _24
	f32 mAngleOffsetMod;                     // _28
	bool mDoAngleOffset;                     // _2C
	bool mEfxActive;                         // _2D
	AngleMgr* mAngleMgr;                     // _30
	f32 mTimer;                              // _34
	f32 mAngleOffs;                          // _38
	f32 mAngleOffsetMod2;                    // _3C
	bool mDoStartAppear;                     // _40
	f32 mAppearTimer;                        // _44
	f32 mSensorGetTimer;                     // _48
	Vector2f _4C;                            // _4C
	bool mIsFuefukid;                        // _54
	f32 mRandAngle;                          // _58
	Vector2f mCompleteEfxOffset;             // _5C
	Vector2f mAppearEfxOffset;               // _64
	bool mDoIncNoise;                        // _6C
	bool mIsInit;                            // _6D
	PictureTreeColorCaptureInfo* mTreeColor; // _70
	f32 mNoiseLevel;                         // _74
	bool mIsPoweredOff;                      // _78
	f32 mSetGrayTimer;                       // _7C
	int mState;                              // _80
	bool mEnabled;                           // _84
	bool mNotreasures;                       // _85
	bool mIsPoweringOff;                     // _86
	f32 mPowerOffTimer;                      // _88
	f32 mNoiseTimer;                         // _8C
	bool mCanIncNoise;                       // _90
};

} // namespace Screen
} // namespace og

#endif
