#ifndef _KH_WORLDMAP_H
#define _KH_WORLDMAP_H

#include "JSystem/JGeometry.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Vector2.h"
#include "types.h"

struct Controller;
struct Graphics;
struct J2DAnmColorKey;
struct J2DAnmTexPattern;
struct J2DAnmTextureSRTKey;
struct J2DAnmTransform;
struct J2DAnmTransformKey;
struct J2DPane;

namespace efx2d {
namespace WorldMap {
struct T2DMapFlare;
struct T2DOnyonKira;
struct T2DRocketB;
struct T2DRocketGlow;
struct T2DShstar1;
} // namespace WorldMap
} // namespace efx2d

namespace P2DScreen {
struct Mgr;
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct ArrowAlphaBlink;
struct CallBack_CounterRV;
struct ScaleMgr;
} // namespace Screen
} // namespace og

namespace Game {
struct CourseInfo;
struct Stages;

namespace WorldMap {
struct InitArg {
	inline InitArg()
	{
		mHeap                       = nullptr;
		mController                 = nullptr;
		mStages                     = nullptr;
		mDayCount                   = 0;
		mInitialCourseIndex         = 0;
		mHasNewTreasureHoardEntries = false;
		mHasNewPiklopediaEntries    = false;
		_16                         = 0;
	}

	JKRHeap* mHeap;                   // _00
	Stages* mStages;                  // _04
	Controller* mController;          // _08
	int mDayCount;                    // _0C
	int mInitialCourseIndex;          // _10
	bool mHasNewPiklopediaEntries;    // _14
	bool mHasNewTreasureHoardEntries; // _15
	u8 _16;                           // _16
};

enum UpdateArgStatus { WMapUpdate_0, WMapUpdate_GoToLoad, WMapUpdate_2, WMapUpdate_GoToZukan, WMapUpdate_4, WMapUpdate_ReturnToTitle };

struct UpdateArg {
	CourseInfo* mCourseInfo; // _00
	int mStatus;             // _04
};

struct Base : public JKRDisposer {
	virtual ~Base() { }                 // _08 (weak)
	virtual void loadResource() { }     // _0C (weak)
	virtual void init(InitArg&) { }     // _10 (weak)
	virtual void update(UpdateArg&) { } // _14 (weak)
	virtual void draw(Graphics&) { }    // _18 (weak)
	virtual void draw1st(Graphics&) { } // _1C (weak)
	virtual void draw2nd(Graphics&) { } // _20 (weak)
	virtual void draw3rd(Graphics&) { } // _24 (weak)
	virtual void draw4th(Graphics&) { } // _28 (weak)

	// _00     = VTBL
	// _00-_18 = JKRDisposer
};
} // namespace WorldMap
} // namespace Game

namespace kh {
namespace Screen {
struct khUtilColorAnm;
struct khUtilColorAnmWM;
struct khUtilFadePaneWM;
struct WorldMap : public Game::WorldMap::Base {
	/**
	 * @size{0x34}
	 */
	struct OnyonDynamics {
		OnyonDynamics();

		void initPtcl();
		void move(WorldMap*, const JGeometry::TVec2f&);
		void update(WorldMap*);
		void kill();

		J2DPane* _00;                              // _00
		Vector2f _04;                              // _04
		u8 _0C[8];                                 // _0C
		Vector2f _14;                              // _14
		efx2d::WorldMap::T2DOnyonKira* mOnyonKira; // _1C
		f32 _20;                                   // _20
		f32 _24;                                   // _24
		f32 _28;                                   // _28
		f32 _2C;                                   // _2C
		s16 _30;                                   // _30
	};

	WorldMap();

	virtual ~WorldMap();                             // _08 (weak)
	virtual void loadResource();                     // _0C
	virtual void init(Game::WorldMap::InitArg&);     // _10
	virtual void update(Game::WorldMap::UpdateArg&); // _14
	virtual void draw1st(Graphics&);                 // _1C
	virtual void draw2nd(Graphics&);                 // _20
	virtual void draw3rd(Graphics&);                 // _24
	virtual void draw4th(Graphics&);                 // _28

	void changeInfo();
	void changeState();
	void effectFirstTime();
	void finish();
	void getRotDir(const JGeometry::TVec2f&, f32);
	int getTarget();
	void newMapOpen();
	void onyonMove();
	void onyonUpdate();
	void postureControl(J2DPane*);
	void rocketMove(J2DPane*, bool);
	void rocketUpdate(J2DPane*);
	void tag2num(u64);

	// _00     = VTBL
	// _00-_18 = Game::WorldMap::Base
	Game::WorldMap::InitArg mInitArg;                          // _18
	P2DScreen::Mgr_tuning* mScreenKitagawa;                    // _30
	J2DAnmTransform* mBckAnm1;                                 // _34
	J2DAnmTransformKey* mBckAnm2;                              // _38
	J2DAnmColorKey* mKitaAnim1;                                // _3C
	J2DAnmTextureSRTKey* mKitaAnim2;                           // _40
	J2DAnmTextureSRTKey* mKitaAnim3;                           // _44
	P2DScreen::Mgr* mScreenRocket;                             // _48
	J2DAnmTransformKey* mRocketAnim1;                          // _4C
	J2DAnmTexPattern* mRocketAnim2;                            // _50
	P2DScreen::Mgr_tuning* mScreenInfo;                        // _54
	J2DAnmTextureSRTKey* mInfoAnim1;                           // _58
	J2DAnmTextureSRTKey* mInfoAnim2;                           // _5C
	J2DAnmTextureSRTKey* mInfoAnim3;                           // _60
	og::Screen::ScaleMgr* mScaleMgr;                           // _64
	f32 mFrameOf34;                                            // _68
	f32 mFrameOf38;                                            // _6C
	f32 mFrameOf3C;                                            // _70
	f32 mFrameOf40;                                            // _74
	f32 mFrameOf44;                                            // _78
	f32 mFrameOf4C;                                            // _7C
	f32 mFrameOf50;                                            // _80
	f32 mFrameOf58;                                            // _84
	f32 mFrameOf5C;                                            // _88
	f32 mFrameOf60;                                            // _8C
	f32 mCameraZoomMinFrame;                                   // _90
	f32 mCameraZoomX;                                          // _94
	f32 _98;                                                   // _98
	Vector2f mRocketPosition;                                  // _9C
	f32 _A4;                                                   // _A4
	f32 _A8;                                                   // _A8
	Vector2f mRocketAngle;                                     // _AC
	f32 mRocketAngleSin;                                       // _B4
	f32 mRocketAngleCos;                                       // _B8
	f32 mRocketScale;                                          // _BC
	efx2d::WorldMap::T2DRocketGlow* mRocketGlow;               // _C0
	efx2d::WorldMap::T2DRocketB* mRocketB;                     // _C4
	efx2d::WorldMap::T2DMapFlare* mMapFlare;                   // _C8
	efx2d::WorldMap::T2DShstar1* mShstar1;                     // _CC
	f32 _D0;                                                   // _D0
	f32 _D4;                                                   // _D4
	f32 _D8;                                                   // _D8
	f32 _DC;                                                   // _DC
	Vector2f mLight01Center;                                   // _E0
	Vector2f mStarCenter;                                      // _E8
	OnyonDynamics* mOnyonArray;                                // _F0
	int mOnyonCount;                                           // _F4
	int mCurrentCourseIndex;                                   // _F8
	int _FC;                                                   // _FC
	og::Screen::CallBack_CounterRV* mPokoCounter;              // _100
	og::Screen::CallBack_CounterRV* mGroundTreasureCounter;    // _104
	og::Screen::CallBack_CounterRV* _108;                      // _108
	og::Screen::CallBack_CounterRV* mCaveTreasureCounters[4];  // _10C
	og::Screen::CallBack_CounterRV* mCaveTreasureCounters2[4]; // _11C
	int mGroundTreasureCount;                                  // _12C
	int mGroundTreasureMax;                                    // _130
	u32 mCaveOtaNum[4];                                        // _134
	u32 mCaveOtaMax[4];                                        // _144
	khUtilFadePaneWM* mOnyonFadePane;                          // _154
	khUtilColorAnmWM* mColorAnims[5];                          // _158
	khUtilColorAnm* mColorAnim2;                               // _16C
	og::Screen::ArrowAlphaBlink* mArrowAlphaBlink;             // _170
	int mCurrentState;                                         // _174
	int mAngle;                                                // _178
	u32 mFlags;                                                // _17C
	char mStateID;                                             // _180
	u8 mOpenCourses;                                           // _181
	u8 mCourseJustOpenFlags;                                   // _182
	u8 mZukanFadeout;                                          // _183
};
} // namespace Screen
} // namespace kh

#endif
