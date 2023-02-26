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
			_00 = 0.3f;
			_04 = 0.1f;
			mTimerLowWhite.set(255, 0, 0, 255);
			mTimerLowBlack.set(64, 0, 0, 0);
			mTimerLimitLow = 10;
			_14            = 30;
			_18            = 10;
		}

		f32 _00;                         // _00
		f32 _04;                         // _04
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
			mMenu00 = nullptr;
			_04     = 0.0f;
			_08     = 0.0f;
			_0C     = 1.0f;
			_10     = 1.0f;
			_14     = 0.0f;
			_18     = 0.0f;
			_1C     = 1.0f;
			_20     = 1.0f;

			mMenu01 = nullptr;
			_28     = 0.0f;
			_2C     = 0.0f;
			_30     = 1.0f;
			_34     = 1.0f;
			_38     = 0.0f;
			_3C     = 0.0f;
			_40     = 1.0f;
			_44     = 1.0f;

			mMenu02 = nullptr;
			_4C     = 0.0f;
			_50     = 0.0f;
			_54     = 1.0f;
			_58     = 1.0f;
			_5C     = 0.0f;
			_60     = 0.0f;
			_64     = 1.0f;
			_68     = 1.0f;
		}

		J2DPane* mMenu00; // _00
		f32 _04;          // _04
		f32 _08;          // _08
		f32 _0C;          // _0C
		f32 _10;          // _10
		f32 _14;          // _14
		f32 _18;          // _18
		f32 _1C;          // _1C
		f32 _20;          // _20
		J2DPane* mMenu01; // _24
		f32 _28;          // _28
		f32 _2C;          // _2C
		f32 _30;          // _30
		f32 _34;          // _34
		f32 _38;          // _38
		f32 _3C;          // _3C
		f32 _40;          // _40
		f32 _44;          // _44
		J2DPane* mMenu02; // _48
		f32 _4C;          // _4C
		f32 _50;          // _50
		f32 _54;          // _54
		f32 _58;          // _58
		f32 _5C;          // _5C
		f32 _60;          // _60
		f32 _64;          // _64
		f32 _68;          // _68
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

	inline f32 getStatic1() { return msVal._08; }

	inline JGeometry::TBox2f getBox1()
	{
		JGeometry::TBox2f box;
		box.i = JGeometry::TVec2f(msVal._08, msVal._0C);
		box.f = box.i;
		box.f.x += msVal._10;
		box.f.y += msVal._14;
		return box;
	}

	inline JGeometry::TBox2f getBox2()
	{
		JGeometry::TBox2f box;
		box.i = JGeometry::TVec2f(msVal._18, msVal._0C);
		box.f = box.i;
		box.f.x += msVal._1C;
		box.f.y += msVal._14;
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
			mMenu00 = nullptr;
			_24     = 0.0f;
			_28     = 0.0f;
			_2C     = 1.0f;
			_30     = 1.0f;
			_34     = 0.0f;
			_38     = 0.0f;
			_3C     = 1.0f;
			_40     = 1.0f;

			mMenu01 = nullptr;
			_48     = 0.0f;
			_4C     = 0.0f;
			_50     = 1.0f;
			_54     = 1.0f;
			_58     = 0.0f;
			_5C     = 0.0f;
			_60     = 1.0f;
			_64     = 1.0f;

			mMenu02 = nullptr;
			_6C     = 0.0f;
			_70     = 0.0f;
			_74     = 1.0f;
			_78     = 1.0f;
			_7C     = 0.0f;
			_80     = 0.0f;
			_84     = 1.0f;
			_88     = 1.0f;

			_00   = 0.6f;
			_04   = 0.2f;
			_08   = 0;
			_0C   = 223;
			_10   = 640;
			_14   = 3;
			_18   = 640;
			_1C   = 0;
			_20.r = 0;
			_20.g = 0;
			_20.b = 0;
			_20.a = 200;
		}

		f32 _00;
		f32 _04;
		int _08;
		int _0C;
		int _10;
		int _14;
		int _18;
		int _1C;
		JUtility::TColor _20;

		J2DPane* mMenu00; // _00
		f32 _24;          // _04
		f32 _28;          // _08
		f32 _2C;          // _0C
		f32 _30;          // _10
		f32 _34;          // _14
		f32 _38;          // _18
		f32 _3C;          // _1C
		f32 _40;          // _20
		J2DPane* mMenu01; // _24
		f32 _48;          // _2C
		f32 _4C;          // _30
		f32 _50;          // _34
		f32 _54;          // _38
		f32 _58;          // _58
		f32 _5C;          // _5C
		f32 _60;          // _60
		f32 _64;          // _64
		J2DPane* mMenu02; // _48
		f32 _6C;          // _4C
		f32 _70;          // _50
		f32 _74;          // _54
		f32 _78;          // _58
		f32 _7C;          // _5C
		f32 _80;          // _60
		f32 _84;          // _64
		f32 _88;          // _68
	} msVal;
};

struct SArgChallengeBase : public ::Screen::StartSceneArg {
	SArgChallengeBase(f32 data) { _04 = data; }

	// _00     = VTBL
	f32 _04; // _04
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
