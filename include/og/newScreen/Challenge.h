#ifndef _OG_NEWSCREEN_CHALLENGEBASE_H
#define _OG_NEWSCREEN_CHALLENGEBASE_H

#include "Screen/Bases.h"
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
	static struct staticValues {
		u32 _00;
		u32 _04;
		u32 _08;
		u32 _0C;
		u32 _10;
	} msBaseVal;

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
	f32 m_timer;              // _38
	f32 _3C;                  // _3C
	u32 _40;                  // _40
	f32 _44;                  // _44
	u8 _48;                   // _48
	u8 _49;                   // _49
	J2DPictureEx* _4C;        // _4C
	f32 _50;                  // _50
	JUtility::TColor m_white; // _54
	JUtility::TColor m_black; // _58
	u32 m_subLevel;           // _5C
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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_60 = ObjChallengeBase
	og::Screen::DispMemberChallenge1P* m_challenge1P;      // _60
	og::Screen::BloGroup* m_bloGroup;                      // _64
	og::Screen::DopingScreen* m_dopingScreen;              // _68
	og::Screen::NaviLifeGauge* _6C;                        // _6C
	og::Screen::NaviLifeGauge* _70;                        // _70
	og::Screen::PikminCounterChallenge1P* m_pikminCounter; // _74
	P2DScreen::Mgr_tuning* _78;                            // _78
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
