#ifndef _OG_NEWSCREEN_CHALLENGEBASE_H
#define _OG_NEWSCREEN_CHALLENGEBASE_H

#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/callbackNodes.h"
#include "trig.h"
#include "BitFlag.h"

namespace og {
namespace Screen {
struct NaviLifeGauge;
struct PikminCounterChallenge1P;
} // namespace Screen

namespace newScreen {
struct ChallengeBase : public ::Screen::SceneBase {
	ChallengeBase();

	~ChallengeBase();

	virtual void startCountDown() = 0; // _50

	void updateCountDown(f32, og::Screen::DispMemberDayEndCount*);

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	bool isCountingDown; // _220
};

struct Challenge1P : public ChallengeBase {
	Challenge1P();

	virtual const char* getResName() const { return "res_challenge_1p.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_CHALLENGE_1P; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CHALLENGE_1P; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }                       // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                                    // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                   // _24
	virtual void doUpdateActive();                                            // _2C
	virtual bool doStart(::Screen::StartSceneArg*);                           // _3C
	virtual void startCountDown();                                            // _50

	// _00      = VTBL
	// _00-_224 = ChallengeBase
};

struct Challenge2P : public ChallengeBase {
	Challenge2P();

	virtual const char* getResName() const { return "res_challenge_2p.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_CHALLENGE_2P; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CHALLENGE_2P; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }                       // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                                    // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                   // _24
	virtual void doUpdateActive();                                            // _2C
	virtual bool doStart(::Screen::StartSceneArg*);                           // _3C
	virtual void startCountDown();                                            // _50

	// _00      = VTBL
	// _00-_224 = ChallengeBase
};

struct ObjChallengeBase : public ::Screen::ObjBase {
	ObjChallengeBase();

	virtual ~ObjChallengeBase();                                              // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*);                     // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);                         // _48
	virtual void doCreateAfter(JKRArchive*, og::Screen::CallBack_CounterRV*); // _78

	void updateTimer(f32, f32);
	void setSubLevel(u32);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	f32 mFadeLevel;          // _38
	f32 mScale;              // _3C
	u32 mTimeLeftInt;        // _40
	f32 mTimeLeft;           // _44
	u8 mDoneChime1;          // _48
	u8 mDoneChime2;          // _49
	J2DPictureEx* mPaneTime; // _4C
	f32 mIncTimeLeftDelay;   // _50
	JUtility::TColor mWhite; // _54
	JUtility::TColor mBlack; // _58
	u32 mSubLevel;           // _5C

	static struct StaticValues {
		inline StaticValues()
		{
			mFadeinTime  = 0.3f;
			mFadeoutTime = 0.1f;
			mTimerLowWhite.set(255, 0, 0, 255);
			mTimerLowBlack.set(64, 0, 0, 0);
			mTimerLimitLow = 10;
			_14            = 30;
			_18            = 10;
		}

		f32 mFadeinTime;                 // _00
		f32 mFadeoutTime;                // _04
		JUtility::TColor mTimerLowWhite; // _08
		JUtility::TColor mTimerLowBlack; // _0C
		u32 mTimerLimitLow;              // _10
		u32 _14;                         // _14
		u32 _18;                         // _18
	} msBaseVal;
};

struct ObjChallenge1P : public ObjChallengeBase {
	ObjChallenge1P(const char*);

	virtual ~ObjChallenge1P();                            // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics&);                       // _68

	// unused/inline
	inline void commonUpdate();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_60 = ObjChallengeBase
	og::Screen::DispMemberChallenge1P* mDisp;           // _60
	og::Screen::BloGroup* mBloGroup;                    // _64
	og::Screen::DopingScreen* mDoping;                  // _68
	og::Screen::NaviLifeGauge* mLifeGauge1;             // _6C
	og::Screen::NaviLifeGauge* mLifeGauge2;             // _70
	og::Screen::PikminCounterChallenge1P* mPikiCounter; // _74
	P2DScreen::Mgr_tuning* mPokoScreen;                 // _78

	static struct StaticValues {
		inline StaticValues()
		{
			mMenu00        = nullptr;
			mPokoXPos      = 0.0f;
			mPokoYPos      = 0.0f;
			mPokoXScale    = 1.0f;
			mPokoYScale    = 1.0f;
			mPokoXOffset   = 0.0f;
			mPokoYOffset   = 0.0f;
			mPokoXScaleMod = 1.0f;
			mPokoYScaleMod = 1.0f;

			mMenu01         = nullptr;
			mTimerXPos      = 0.0f;
			mTimerYPos      = 0.0f;
			mTimerXScale    = 1.0f;
			mTimerYScale    = 1.0f;
			mTimerXOffset   = 0.0f;
			mTimerYOffset   = 0.0f;
			mTimerXScaleMod = 1.0f;
			mTimerYScaleMod = 1.0f;

			mMenu02         = nullptr;
			mPikisXPos      = 0.0f;
			mPikisYPos      = 0.0f;
			mPikisXScale    = 1.0f;
			mPikisYScale    = 1.0f;
			mPikisXOffset   = 0.0f;
			mPikisYOffset   = 0.0f;
			mPikisXScaleMod = 1.0f;
			mPikisYScaleMod = 1.0f;
		}

		J2DPane* mMenu00;    // _00
		f32 mPokoXPos;       // _04
		f32 mPokoYPos;       // _08
		f32 mPokoXScale;     // _0C
		f32 mPokoYScale;     // _10
		f32 mPokoXOffset;    // _14
		f32 mPokoYOffset;    // _18
		f32 mPokoXScaleMod;  // _1C
		f32 mPokoYScaleMod;  // _20
		J2DPane* mMenu01;    // _24
		f32 mTimerXPos;      // _28
		f32 mTimerYPos;      // _2C
		f32 mTimerXScale;    // _30
		f32 mTimerYScale;    // _34
		f32 mTimerXOffset;   // _38
		f32 mTimerYOffset;   // _3C
		f32 mTimerXScaleMod; // _40
		f32 mTimerYScaleMod; // _44
		J2DPane* mMenu02;    // _48
		f32 mPikisXPos;      // _4C
		f32 mPikisYPos;      // _50
		f32 mPikisXScale;    // _54
		f32 mPikisYScale;    // _58
		f32 mPikisXOffset;   // _5C
		f32 mPikisYOffset;   // _60
		f32 mPikisXScaleMod; // _64
		f32 mPikisYScaleMod; // _68
	} msVal;
};

struct ObjChallenge2P : public ObjChallengeBase {
	struct ScreenSet {
		inline ScreenSet()
		{
			mScreen     = new P2DScreen::Mgr_tuning;
			mLifeGauge  = new og::Screen::CallBack_LifeGauge;
			mDoping     = new og::Screen::DopingCheck;
			mScaleMgr1  = new og::Screen::ScaleMgr;
			mScaleMgr2  = new og::Screen::ScaleMgr;
			mPaneToyo01 = nullptr;
			mPaneToyo00 = nullptr;
		}

		void init(og::Screen::DataNavi*, JKRArchive*, og::Screen::DispMemberChallenge2P*);
		inline void update(og::Screen::DataNavi&);
		P2DScreen::Mgr_tuning* mScreen;             // _00
		og::Screen::CallBack_LifeGauge* mLifeGauge; // _04
		og::Screen::DopingCheck* mDoping;           // _08
		og::Screen::ScaleMgr* mScaleMgr1;           // _0C
		og::Screen::ScaleMgr* mScaleMgr2;           // _10
		J2DPane* mPaneToyo01;                       // _14
		J2DPane* mPaneToyo00;                       // _18
	};

	ObjChallenge2P(const char*);

	virtual ~ObjChallenge2P();                            // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics&);                       // _68

	void commonUpdate();

	inline JGeometry::TBox2f getDividerBar()
	{
		JGeometry::TBox2f box;
		box.i = JGeometry::TVec2f(msVal.mDividerBarXPos, msVal.mDividerBarYPos);
		box.f = box.i;
		box.f.x += msVal.mDividerBarWidth;
		box.f.y += msVal.mDividerBarHeight;
		return box;
	}

	inline JGeometry::TBox2f getDividerBar2()
	{
		JGeometry::TBox2f box;
		box.i = JGeometry::TVec2f(msVal.mDividerBarWidth2, msVal.mDividerBarYPos);
		box.f = box.i;
		box.f.x += msVal.mDividerBarHeight2;
		box.f.y += msVal.mDividerBarHeight;
		return box;
	}

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_60 = ObjChallengeBase
	og::Screen::DispMemberChallenge2P* mDisp; // _60
	og::Screen::BloGroup* mBloGroup;          // _64
	ScreenSet* mScreenP1;                     // _68
	ScreenSet* mScreenP2;                     // _6C
	P2DScreen::Mgr_tuning* mPokoScreen;       // _70

	static struct StaticValues {
		inline StaticValues()
		{
			mMenu00        = nullptr;
			mPokoXPos      = 0.0f;
			mPokoYPos      = 0.0f;
			mPokoXScale    = 1.0f;
			mPokoYScale    = 1.0f;
			mPokoXOffset   = 0.0f;
			mPokoYOffset   = 0.0f;
			mPokoXScaleMod = 1.0f;
			mPokoYScaleMod = 1.0f;

			mMenu01         = nullptr;
			mTimerXPos      = 0.0f;
			mTimerYPos      = 0.0f;
			mTimerXScale    = 1.0f;
			mTimerYScale    = 1.0f;
			mTimerXOffset   = 0.0f;
			mTimerYOffset   = 0.0f;
			mTimerXScaleMod = 1.0f;
			mTimerYScaleMod = 1.0f;

			mMenu02         = nullptr;
			mPikisXPos      = 0.0f;
			mPikisYPos      = 0.0f;
			mPikisXScale    = 1.0f;
			mPikisYScale    = 1.0f;
			mPikisXOffset   = 0.0f;
			mPikisYOffset   = 0.0f;
			mPikisXScaleMod = 1.0f;
			mPikisYScaleMod = 1.0f;

			mFadeinTime        = 0.6f;
			mFadeoutTime       = 0.2f;
			mDividerBarXPos    = 0;
			mDividerBarYPos    = 223;
			mDividerBarWidth   = 640;
			mDividerBarHeight  = 3;
			mDividerBarWidth2  = 640;
			mDividerBarHeight2 = 0;
			mDividerBarColor.r = 0;
			mDividerBarColor.g = 0;
			mDividerBarColor.b = 0;
			mDividerBarColor.a = 200;
		}

		f32 mFadeinTime;
		f32 mFadeoutTime;
		int mDividerBarXPos;
		int mDividerBarYPos;
		int mDividerBarWidth;
		int mDividerBarHeight;
		int mDividerBarWidth2;
		int mDividerBarHeight2;
		JUtility::TColor mDividerBarColor;

		J2DPane* mMenu00;    // _00
		f32 mPokoXPos;       // _04
		f32 mPokoYPos;       // _08
		f32 mPokoXScale;     // _0C
		f32 mPokoYScale;     // _10
		f32 mPokoXOffset;    // _14
		f32 mPokoYOffset;    // _18
		f32 mPokoXScaleMod;  // _1C
		f32 mPokoYScaleMod;  // _20
		J2DPane* mMenu01;    // _24
		f32 mTimerXPos;      // _28
		f32 mTimerYPos;      // _2C
		f32 mTimerXScale;    // _30
		f32 mTimerYScale;    // _34
		f32 mTimerXOffset;   // _38
		f32 mTimerYOffset;   // _3C
		f32 mTimerXScaleMod; // _40
		f32 mTimerYScaleMod; // _44
		J2DPane* mMenu02;    // _48
		f32 mPikisXPos;      // _4C
		f32 mPikisYPos;      // _50
		f32 mPikisXScale;    // _54
		f32 mPikisYScale;    // _58
		f32 mPikisXOffset;   // _5C
		f32 mPikisYOffset;   // _60
		f32 mPikisXScaleMod; // _64
		f32 mPikisYScaleMod; // _68
	} msVal;
};

struct SArgChallengeBase : public ::Screen::StartSceneArg {
	SArgChallengeBase(f32 delay) { mTimeAddDelay = delay; }

	// _00     = VTBL
	f32 mTimeAddDelay; // _04
};

struct SArgChallenge1P : public SArgChallengeBase {
	SArgChallenge1P(f32 data)
	    : SArgChallengeBase(data)
	{
	}
	virtual SceneType getSceneType() const { return SCENE_CHALLENGE_1P; } // _08 (weak)
	virtual int getClassSize() { return sizeof(SArgChallenge1P); }        // _0C (weak)

	// _00     = VTBL
	// _00-_04 = SArgChallengeBase
};

struct SArgChallenge2P : public SArgChallengeBase {
	SArgChallenge2P(f32 data)
	    : SArgChallengeBase(data)
	{
	}

	virtual SceneType getSceneType() const { return SCENE_CHALLENGE_2P; } // _08 (weak)
	virtual int getClassSize() { return sizeof(SArgChallenge2P); }        // _0C (weak)

	// _00     = VTBL
	// _00-_04 = SArgChallengeBase
};
} // namespace newScreen
} // namespace og

#endif
