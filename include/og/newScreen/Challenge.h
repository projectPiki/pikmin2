#ifndef _OG_NEWSCREEN_CHALLENGEBASE_H
#define _OG_NEWSCREEN_CHALLENGEBASE_H

#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/BloGroup.h"

namespace og {
namespace Screen {
struct DopingScreen;
struct NaviLifeGauge;
struct PikminCounterChallenge1P;
struct CallBack_LifeGauge;
struct DopingCheck;
struct ScaleMgr;
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
	f32 m_fadeLevel;          // _38
	f32 m_scale;              // _3C
	u32 m_timeLeftInt;        // _40
	f32 m_timeLeft;           // _44
	u8 _48;                   // _48
	u8 _49;                   // _49
	J2DPictureEx* _4C;        // _4C
	f32 _50;                  // _50
	JUtility::TColor m_white; // _54
	JUtility::TColor m_black; // _58
	u32 m_subLevel;           // _5C

	static struct StaticValues {
		f32 _00;
		f32 _04;
		f32 _08;
		f32 _0C;
		u32 _10;
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
	og::Screen::DispMemberChallenge1P* m_disp;           // _60
	og::Screen::BloGroup* m_bloGroup;                    // _64
	og::Screen::DopingScreen* m_doping;                  // _68
	og::Screen::NaviLifeGauge* m_lifeGauge1;             // _6C
	og::Screen::NaviLifeGauge* m_lifeGauge2;             // _70
	og::Screen::PikminCounterChallenge1P* m_pikiCounter; // _74
	P2DScreen::Mgr_tuning* m_pokoScreen;                 // _78

	static struct StaticValues {
		inline StaticValues()
		{
			m_menu00 = nullptr;
			_04      = 0.0f;
			_08      = 0.0f;
			_0C      = 1.0f;
			_10      = 1.0f;
			_14      = 0.0f;
			_18      = 0.0f;
			_1C      = 1.0f;
			_20      = 1.0f;

			m_menu01 = nullptr;
			_28      = 0.0f;
			_2C      = 0.0f;
			_30      = 1.0f;
			_34      = 1.0f;
			_38      = 0.0f;
			_3C      = 0.0f;
			_40      = 1.0f;
			_44      = 1.0f;

			m_menu02 = nullptr;
			_4C      = 0.0f;
			_50      = 0.0f;
			_54      = 1.0f;
			_58      = 1.0f;
			_5C      = 0.0f;
			_60      = 0.0f;
			_64      = 1.0f;
			_68      = 1.0f;
		}

		J2DPane* m_menu00; // _00
		f32 _04;           // _04
		f32 _08;           // _08
		f32 _0C;           // _0C
		f32 _10;           // _10
		f32 _14;           // _14
		f32 _18;           // _18
		f32 _1C;           // _1C
		f32 _20;           // _20
		J2DPane* m_menu01; // _24
		f32 _28;           // _28
		f32 _2C;           // _2C
		f32 _30;           // _30
		f32 _34;           // _34
		f32 _38;           // _38
		f32 _3C;           // _3C
		f32 _40;           // _40
		f32 _44;           // _44
		J2DPane* m_menu02; // _48
		f32 _4C;           // _4C
		f32 _50;           // _50
		f32 _54;           // _54
		f32 _58;           // _58
		f32 _5C;           // _5C
		f32 _60;           // _60
		f32 _64;           // _64
		f32 _68;           // _68
	} msVal;
};

struct ObjChallenge2P : public ObjChallengeBase {
	struct ScreenSet {
		P2DScreen::Mgr_tuning* _00;          // _00
		og::Screen::CallBack_LifeGauge* _04; // _04
		og::Screen::DopingCheck* _08;        // _08
		og::Screen::ScaleMgr* _0C;           // _0C
		og::Screen::ScaleMgr* _10;           // _10
		J2DPane* _14;                        // _14
		J2DPane* _18;                        // _18
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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_60 = ObjChallengeBase
	og::Screen::DispMemberChallenge2P* m_challenge2P; // _60
	og::Screen::BloGroup* m_bloGroup;                 // _64
	ScreenSet* _68;                                   // _68
	ScreenSet* _6C;                                   // _6C
	P2DScreen::Mgr_tuning* _70;                       // _70
};

struct SArgChallengeBase : public ::Screen::StartSceneArg {
	// _00     = VTBL
	// _00-_04 = Screen::StartSceneArg
};

struct SArgChallenge1P : public SArgChallengeBase {
	virtual SceneType getSceneType() const; // _08 (weak)
	virtual int getClassSize();             // _0C (weak)

	// _00     = VTBL
	// _00-_04 = Screen::StartSceneArg
};

struct SArgChallenge2P : public SArgChallengeBase {
	virtual SceneType getSceneType() const; // _08 (weak)
	virtual int getClassSize();             // _0C (weak)

	// _00     = VTBL
	// _00-_04 = Screen::StartSceneArg
};
} // namespace newScreen
} // namespace og

#endif
