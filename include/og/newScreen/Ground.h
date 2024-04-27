#ifndef _OG_NEWSCREEN_GROUND_H
#define _OG_NEWSCREEN_GROUND_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUtility/TColor.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/Data.h"
#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "types.h"

namespace P2DScreen {
struct Mgr_tuning;
}

namespace og {
namespace Screen {
struct BloGroup;
struct DopingScreen;
struct NaviLifeGauge;
struct OtakaraSensor;
struct PikminCounter;
struct SunMeter;
} // namespace Screen

namespace newScreen {
void initGround();

/**
 * @size{0x228}
 */
struct Ground : public ::Screen::SceneBase {
	Ground();

	~Ground(); // unused/inlined

	virtual const char* getResName() const { return "res_ground.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_GROUND; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }            // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_GROUND; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }                 // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                              // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);             // _24
	virtual void doUpdateActive();                                      // _2C
	virtual bool doStart(::Screen::StartSceneArg*);                     // _3C

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	bool mDoStartCountdown;        // _220
	bool mDoStartSunsetBgm;        // _221
	bool mDoStartFadeInSunsetBgm;  // _222
	bool mDoStartFadeOutMainBgm;   // _223
	bool mDoStartFadeOutSunsetBgm; // _224
};

struct ObjGround : public ::Screen::ObjBase {
	ObjGround(char const*);

	virtual ~ObjGround();                                 // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68

	void commonUpdate();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	Screen::DispMemberGround* mDisp;         // _38
	og::Screen::OtakaraSensor* mOtakara;     // _3C
	og::Screen::BloGroup* mBloGroup;         // _40
	og::Screen::SunMeter* mSunMeter;         // _44
	og::Screen::DopingScreen* mDoping;       // _48
	og::Screen::NaviLifeGauge* mLifeGauge1;  // _4C
	og::Screen::NaviLifeGauge* mLifeGauge2;  // _50
	og::Screen::PikminCounter* mPikiCounter; // _54
	P2DScreen::Mgr_tuning* mSensorScreen;    // _58
	f32 mFadeLevel;                          // _5C
	f32 mScale;                              // _60
	u8 mIsTotalPokoActive;                   // _64, unused for ground
	u32 mPokos;                              // _68
	f32 mTotalPokoTimer;                     // _6C, unused for ground

	static struct StaticValues {
		inline StaticValues()
		{
			mFadeinTime  = 0.3f;
			mFadeoutTime = 0.1f;
			_08          = -50.0f;
			_0C          = 0.0f;
			mSensorX     = 10.0f;
			mSensorY     = -40.0f;
			mSensorScale = 0.9f;
			_24          = 0;
			mDopingX     = 0.0f;
			mDopingY     = -30.0f;
		}

		f32 mFadeinTime;  // _00
		f32 mFadeoutTime; // _04
		f32 _08;          // _08
		f32 _0C;          // _0C
		f32 mSensorX;     // _10
		f32 mSensorY;     // _14
		f32 mSensorScale; // _18
		f32 mDopingX;     // _1C
		f32 mDopingY;     // _20
		u8 _24;           // _24
	} msVal;
};

} // namespace newScreen
} // namespace og

#endif
