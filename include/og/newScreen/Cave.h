#ifndef _OG_NEWSCREEN_CAVE_H
#define _OG_NEWSCREEN_CAVE_H

#include "Screen/screenObj.h"
#include "JSystem/J2D/J2DPane.h"
#include "og/Screen/OtakaraSensor.h"
#include "og/Screen/DispMember.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberCave;
struct OtakaraSensor;
struct BloGroup;
struct DopingScreen;
struct NaviLifeGauge;
struct PikminCounterCave;
struct TotalPokoScreen;
} // namespace Screen

namespace newScreen {
struct Cave : public ::Screen::SceneBase {
	Cave();

	virtual const char* getResName() const { return "res_cave.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_CAVE; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }          // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CAVE; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }               // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                            // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);           // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjCave : public ::Screen::ObjBase {
	ObjCave(const char*);

	virtual ~ObjCave();                                   // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics&);                       // _68

	void commonUpdate();

	void setSensorParam(u8 allTreasureGotten, u8 radarEnabled, u32 radarState, f32 treasureDist)
	{
		mOtakara->setParam(treasureDist, radarState, radarEnabled, allTreasureGotten);
	}

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberCave* mDisp;           // _38
	og::Screen::OtakaraSensor* mOtakara;         // _3C
	og::Screen::BloGroup* mBloGroup;             // _40
	og::Screen::DopingScreen* mDoping;           // _44
	og::Screen::NaviLifeGauge* mLifeGauge1;      // _48
	og::Screen::NaviLifeGauge* mLifeGauge2;      // _4C
	og::Screen::PikminCounterCave* mPikiCounter; // _50
	og::Screen::TotalPokoScreen* mTotalPoko;     // _54
	P2DScreen::Mgr_tuning* mSensorScreen;        // _58
	f32 mFadeLevel;                              // _5C
	f32 mScale;                                  // _60
	bool mTotalPokoActive;                       // _64
	u32 mPokos;                                  // _68
	f32 mTotalPokoTimer;                         // _6C
	J2DPane* mPaneChika;                         // _70
	J2DPane* mPaneFinalf;                        // _74
	bool mDoSensorEff;                           // _78

	static struct StaticValues {
		inline StaticValues()
		{
			mFadeinTime                     = 0.3f;
			mFadeoutTime                    = 0.1f;
			mTotalPokoXPos                  = -50.0f;
			mTotalPokoYPos                  = 0.0f;
			mTotalPokoXScale                = 1.0f;
			mTotalPokoYScale                = 1.0f;
			mTreasureRadarXPos              = 0.0f;
			mTreasureRadarYPos              = 2.0f;
			mTreasureRadarScale             = 0.9f;
			mDopingScreenXPos               = 0.0f;
			mDopingScreenYPos               = -30.0f;
			mTreasureRadarVecX              = 0.2f;
			mTreasureRadarVecY              = 0.25f;
			mTreasureRadarCompEfxXPos       = 0.0f;
			mTreasureRadarCompEfxYPos       = -15.0f;
			mTreasureRadarAppearEfxXPos     = 0.0f;
			mTreasureRadarAppearEfxYPos     = -32.0f;
			mTreasureRadarNoiseModifierHigh = 5.0f;
			mTreasureRadarNoiseModifierLow  = 0.4f;
		}

		f32 mFadeinTime;                     // _00
		f32 mFadeoutTime;                    // _04
		f32 mTotalPokoXPos;                  // _08
		f32 mTotalPokoYPos;                  // _0C
		f32 mTotalPokoXScale;                // _10
		f32 mTotalPokoYScale;                // _14
		f32 mTreasureRadarXPos;              // _18
		f32 mTreasureRadarYPos;              // _1C
		f32 mTreasureRadarScale;             // _20
		f32 mDopingScreenXPos;               // _24
		f32 mDopingScreenYPos;               // _28
		f32 mTreasureRadarVecX;              // _2C
		f32 mTreasureRadarVecY;              // _30
		f32 mTreasureRadarCompEfxXPos;       // _34
		f32 mTreasureRadarCompEfxYPos;       // _38
		f32 mTreasureRadarAppearEfxXPos;     // _3C
		f32 mTreasureRadarAppearEfxYPos;     // _40
		f32 mTreasureRadarNoiseModifierHigh; // _44
		f32 mTreasureRadarNoiseModifierLow;  // _48
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
