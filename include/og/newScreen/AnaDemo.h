#ifndef _OG_NEWSCREEN_ANADEMO_H
#define _OG_NEWSCREEN_ANADEMO_H

#include "Screen/screenObj.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/MenuMgr.h"
#include "trig.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberAnaDemo;
} // namespace Screen

namespace newScreen {
struct AnaDemo : public ::Screen::SceneBase {
	AnaDemo(s32);

	virtual const char* getResName() const { return "res_ana_demo.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return mSceneType; }               // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual ScreenMemberID getMemberID()
	{
		ScreenMemberID id = _MEMBER_EMPTY_STRING;
		switch (mSceneType) {
		case SCENE_CAVE_IN_MENU:
			id = MEMBER_ANA_DEMO;
			break;
		case SCENE_KANKETU_MENU:
			id = MEMBER_KANKETU_MENU;
			break;
		case SCENE_CAVE_MORE_MENU:
			id = MEMBER_CAVE_MORE;
			break;
		}
		return id;
	}                                                       // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }    // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	SceneType mSceneType; // _220
};

struct ObjAnaDemo : public ::Screen::ObjBase {
	ObjAnaDemo(const char*);

	enum AnaDemoType {
		ANADEMO_CaveEntry,       // Above Ground Cave entry
		ANADEMO_Kanteku,         // Geyser
		ANADEMO_CaveMore,        // Delve Deeper
		ANADEMO_KantekuChallenge // Geyser CH mode
	};

	enum AnaDemoTypeSub { ANADEMOSUB_Normal, ANADEMOSUB_PikiInDanger, ANADEMOSUB_CantProceed };

	enum AnaDemoState {
		ANADEMOSTATE_Disabled,
		ANADEMOSTATE_Init,
		ANADEMOSTATE_Enter,
		ANADEMOSTATE_IdleWait,
		ANADEMOSTATE_Exit,
		ANADEMOSTATE_ErrorTimed,
		ANADEMOSTATE_ErrorWait
	};

	virtual ~ObjAnaDemo();                                // _08 (weak)
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

	void setBlinkMenu();
	void commonUpdate();

	// unused/inined
	inline void setWindowMsg(u64, u64, u64);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberAnaDemo* mDisp;       // _38
	int mAnaType;                               // _3C
	int mState;                                 // _40
	int mAnaTypeSub;                            // _44
	int mCurrMenuSel;                           // _48
	P2DScreen::Mgr_tuning* mScreen;             // _4C
	og::Screen::MenuMgr* mMenuMgr;              // _50
	u32 mUnusedObj;                             // _54
	og::Screen::AnimText_Screen* mMenuSelTitle; // _58
	og::Screen::AnimText_Screen* mMenuSelYes;   // _5C
	og::Screen::AnimText_Screen* mMenuSelNo;    // _60
	og::Screen::AnimGroup* mAnimGroup;          // _64
	f32 mUnused0;                               // _68
	u32 mUnused1;                               // _6C
	J2DPane* mPaneError;                        // _70
	f32 mTimer3;                                // _74
	f32 mTimer4;                                // _78
	u8 mAlpha;                                  // _7C
	f32 mTimer1;                                // _80
	f32 mTimer2;                                // _84
	u32 mUnused2;                               // _88
	f32 mSwingMovePosition;                     // _8C
	f32 mCloseTimer;                            // _90

	static struct StaticValues {
		inline StaticValues()
		{
			mMoveFinishRatio = 0.3f;
			_04              = 47.0f;
			_08              = 1.0f;
			_0C              = 0.3f;
		}

		f32 mMoveFinishRatio; // _00
		f32 _04;              // _04
		f32 _08;              // _08
		f32 _0C;              // _0C
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
