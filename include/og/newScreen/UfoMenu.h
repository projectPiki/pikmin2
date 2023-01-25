#ifndef _OG_NEWSCREEN_UFOMENU_H
#define _OG_NEWSCREEN_UfOMENU_H

#include "Screen/screenObj.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
struct Mgr;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct MenuMgr;
struct AnimGroup;
} // namespace Screen

namespace newScreen {
struct UfoMenu : public ::Screen::SceneBase {
	UfoMenu();

	virtual const char* getResName() const { return "res_ufo.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_UFO_MENU; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }         // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_UFO_MENU; } // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }             // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                           // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);          // _24
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);          // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);           // _48

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjUfoMenu : public ::Screen::ObjBase {
	ObjUfoMenu(const char*);

	virtual ~ObjUfoMenu();                                // _08 (weak)
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

	void setSelectPikmin(int);
	void setBackupScene();

	// unused / inline
	inline void commonUpdate();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	Screen::DispMemberUfoGroup* mDisp; // _38
	P2DScreen::Mgr_tuning* mUfoScreen; // _3C
	P2DScreen::Mgr* mPikiScreen;       // _40
	u8 _44[0x4];                       // _44, unknown
	int mSelectIndex;                  // _48
	Screen::MenuMgr* mMenu;            // _4C
	u8 mDoEnd;                         // _50
	f32 mScreenMovePos;                // _54
	Screen::AnimGroup* mLightAnims;    // _58
	u8 _5C[0x4];                       // _5C, unknown
	Screen::AnimGroup* mPikiAnims;     // _60
	J2DPane* mPaneWhiteWalk;           // _64
	J2DPane* mPaneWhiteStand;          // _68
	J2DPane* mPanePurpleWalk;          // _6C
	J2DPane* mPanePurpleStand;         // _70
	J2DPane* mPaneAllWhite;            // _74
	J2DPane* mPaneAllPurple;           // _78
	J2DPane* mPaneN00;                 // _7C
	J2DPane* mPaneN01;                 // _80
	f32 mFadeTimer;                    // _84
	u8 mDoDraw;                        // _88
	u8 _89[0x3];                       // _89, probably padding
	u32 _8C;                           // _8C, unknown

	static struct StaticValues {
		inline StaticValues()
		{
			_00 = 0.5f;
			_04 = 1.5f;
			_08 = 0.35f;
			_0C = 0.0f;
			_10 = 0.0f;
			_14 = 0.7f;
			_18 = 0.0f;
			_1C = 0.0f;
			_20 = 0.7f;
			_24 = 1.4f;
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
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
