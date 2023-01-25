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
			_00 = 0.3f;
			_04 = 0.1f;
			_08 = -50.0f;
			_0C = 0.0f;
			_10 = 1.0f;
			_14 = 1.0f;
			_18 = 0.0f;
			_1C = 2.0f;
			_20 = 0.9f;
			_24 = 0.0f;
			_28 = -30.0f;
			_2C = 0.2f;
			_30 = 0.25f;
			_34 = 0.0f;
			_38 = -15.0f;
			_3C = 0.0f;
			_40 = -32.0f;
			_44 = 5.0f;
			_48 = 0.4f;
		}

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
		f32 _10; // _10
		f32 _14; // _14
		f32 _18; // _18
		f32 _1C; // _1C
		f32 _20; // _20
		f32 _24; // _24
		f32 _28; // _28
		f32 _2C; // _2C
		f32 _30; // _30
		f32 _34; // _34
		f32 _38; // _38
		f32 _3C; // _3C
		f32 _40; // _40
		f32 _44; // _44
		f32 _48; // _48
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
