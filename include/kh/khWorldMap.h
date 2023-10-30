#ifndef _KH_WORLDMAP_H
#define _KH_WORLDMAP_H

#include "JSystem/JGeometry.h"
#include "JSystem/JKernel/JKRDisposer.h"
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
		mCurrentDay                 = 0;
		mInitialCourseIndex         = 0;
		mHasNewTreasureHoardEntries = false;
		mHasNewPiklopediaEntries    = false;
		mDoNewEntriesEfx            = 0;
	}

	JKRHeap* mHeap;                   // _00
	Stages* mStages;                  // _04
	Controller* mController;          // _08
	u32 mCurrentDay;                  // _0C
	int mInitialCourseIndex;          // _10
	bool mHasNewPiklopediaEntries;    // _14
	bool mHasNewTreasureHoardEntries; // _15
	u8 mDoNewEntriesEfx;              // _16
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

	enum WorldMapState {
		WMAP_NewMapOpened,
		WMAP_RocketMoving,
		WMAP_Idle,
		WMAP_RocketMoving2,
		WMAP_RocketMoving3,
		WMAP_InputTarget,
		WMAP_GoToZukan1,
		WMAP_GoToZukan2,
		WMAP_InSelection1,
		WMAP_InSelection2
	};
	/**
	 * @size{0x34}
	 */
	struct OnyonDynamics {
		OnyonDynamics();

		void initPtcl();
		Vector2f move(WorldMap*, const JGeometry::TVec2f&);
		void update(WorldMap*);
		void kill();
		~OnyonDynamics() { }

		J2DPane* mOnyonPane;                       // _00
		Vector2f mOffset;                          // _04
		Vector2f mVelocity;                        // _0C
		Vector2f mAngle;                           // _14
		efx2d::WorldMap::T2DOnyonKira* mOnyonKira; // _1C
		Vector2f mEfxPosition;                     // _20
		Vector2f _28;                              // _28
		s16 mRotateAngle;                          // _30
	};

	WorldMap();

	virtual ~WorldMap() { }                          // _08 (weak)
	virtual void loadResource();                     // _0C
	virtual void init(Game::WorldMap::InitArg&);     // _10
	virtual void update(Game::WorldMap::UpdateArg&); // _14
	virtual void draw1st(Graphics&);                 // _1C
	virtual void draw2nd(Graphics&);                 // _20
	virtual void draw3rd(Graphics&);                 // _24
	virtual void draw4th(Graphics&);                 // _28

	void changeInfo();
	bool changeState();
	void effectFirstTime();
	void finish();
	void getRotDir(const JGeometry::TVec2f&, f32);
	int getTarget();
	bool newMapOpen();
	void onyonMove();
	void onyonUpdate();
	void postureControl(J2DPane*);
	f32 rocketMove(J2DPane*, bool);
	void rocketUpdate(J2DPane*);
	f32 tag2num(u64);

	// _00     = VTBL
	// _00-_18 = Game::WorldMap::Base
	Game::WorldMap::InitArg mInitArg;                          // _18
	P2DScreen::Mgr_tuning* mScreenKitagawa;                    // _30
	J2DAnmTransform* mKitaAnim1;                               // _34
	J2DAnmTransformKey* mKitaAnim2;                            // _38
	J2DAnmColorKey* mKitaAnim3;                                // _3C
	J2DAnmTextureSRTKey* mKitaAnim4;                           // _40
	J2DAnmTextureSRTKey* mKitaAnim5;                           // _44
	P2DScreen::Mgr* mScreenRocket;                             // _48
	J2DAnmTransformKey* mRocketAnim1;                          // _4C
	J2DAnmTexPattern* mRocketAnim2;                            // _50
	P2DScreen::Mgr_tuning* mScreenInfo;                        // _54
	J2DAnmTextureSRTKey* mInfoAnim1;                           // _58
	J2DAnmTextureSRTKey* mInfoAnim2;                           // _5C
	J2DAnmTextureSRTKey* mInfoAnim3;                           // _60
	og::Screen::ScaleMgr* mScaleMgr;                           // _64
	f32 mAnimTimers[10];                                       // _68
	f32 mCameraZoomMinFrame;                                   // _90
	f32 mCameraZoomX;                                          // _94
	f32 _98;                                                   // _98
	Vector2f mRocketPosition;                                  // _9C
	Vector2f mRocketPosition2;                                 // _A4
	Vector2f mRocketAngle;                                     // _AC
	f32 mRocketAngleSin;                                       // _B4
	f32 mRocketAngleCos;                                       // _B8
	f32 mRocketScale;                                          // _BC
	efx2d::WorldMap::T2DRocketGlow* mEfxRocketGlow;            // _C0
	efx2d::WorldMap::T2DRocketB* mEfxRocketSparks;             // _C4
	efx2d::WorldMap::T2DMapFlare* mEfxMapFlare;                // _C8
	efx2d::WorldMap::T2DShstar1* mEfxShstar1;                  // _CC
	Vector2f _D0;                                              // _D0
	Vector2f _D8;                                              // _D8
	Vector2f mLight01Center;                                   // _E0
	Vector2f mStarCenter;                                      // _E8
	OnyonDynamics* mOnyonArray;                                // _F0
	int mOnyonCount;                                           // _F4
	int mCurrentCourseIndex;                                   // _F8
	int mRocketMoveCounter;                                    // _FC
	og::Screen::CallBack_CounterRV* mPokoCounter;              // _100
	og::Screen::CallBack_CounterRV* mGroundTreasureCounter;    // _104
	og::Screen::CallBack_CounterRV* mGroundTreasureMaxCounter; // _108
	og::Screen::CallBack_CounterRV* mCaveTreasureCounters[4];  // _10C
	og::Screen::CallBack_CounterRV* mCaveTreasureCounters2[4]; // _11C
	u32 mGroundTreasureCount;                                  // _12C
	u32 mGroundTreasureMax;                                    // _130
	u32 mCaveOtaNum[4];                                        // _134
	u32 mCaveOtaMax[4];                                        // _144
	khUtilFadePaneWM* mCaveFadePane;                           // _154
	khUtilColorAnmWM* mColorAnims[5];                          // _158
	khUtilColorAnm* mColorAnim2;                               // _16C
	og::Screen::ArrowAlphaBlink* mArrowBlink;                  // _170
	int mCurrentState;                                         // _174
	int mRocketAngleMode;                                      // _178
	u32 mFlags;                                                // _17C
	u8 mInputState;                                            // _180
	u8 mOpenCourses;                                           // _181
	u8 mCourseJustOpenFlags;                                   // _182
	u8 mZukanFadeout;                                          // _183

	static struct StaticValues {
		inline StaticValues()
		{
			_00      = 4500.0f;
			_04      = 0.01f;
			_08      = 0.92f;
			_0C      = 800.0f;
			_10      = 0.97f;
			_14      = 800.0f;
			_18      = 6000.0f;
			_1C[0]   = 0.8f;
			_1C[1]   = 1.0f;
			_1C[2]   = 0.9f;
			_28[0]   = 0.8f;
			_28[1]   = 0.8f;
			_28[2]   = 1.2f;
			_28[3]   = 0.8f;
			_38      = 0.5f;
			_3C      = 0.05f;
			_40      = 0.7f;
			_44      = 0.95f;
			_48      = -0.01f;
			_4C      = 0.88f;
			_50[0].x = 0.0f;
			_50[0].y = 0.0f;
			_50[1].x = 0.0f;
			_50[1].y = 0.0f;
			_60      = 0.7f;
			_64      = 20.0f;
			_68      = 20.0f;
			_6C.set(255, 255, 64, 255);
			_70.set(255, 128, 32, 255);
			_74.set(255, 255, 128, 140);
			_78 = 8;
			_79 = 8;
		}

		f32 _00; // _00
		f32 _04;
		f32 _08;
		f32 _0C;
		f32 _10;
		f32 _14;
		f32 _18;
		f32 _1C[3];
		f32 _28[4];
		f32 _38;
		f32 _3C;
		f32 _40;
		f32 _44;
		f32 _48;
		f32 _4C;
		JGeometry::TVec2f _50[2];
		f32 _60;
		f32 _64;
		f32 _68;
		JUtility::TColor _6C;
		JUtility::TColor _70;
		JUtility::TColor _74;
		u8 _78;
		u8 _79;
	} msVal;
};
} // namespace Screen
} // namespace kh

#endif
