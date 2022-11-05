#ifndef _OG_NEWSCREEN_ANADEMO_H
#define _OG_NEWSCREEN_ANADEMO_H

#include "Screen/Bases.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/MenuMgr.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberAnaDemo;
} // namespace Screen

namespace newScreen {
struct AnaDemo : public ::Screen::SceneBase {
	AnaDemo(long);

	virtual const char* getResName() const { return "res_ana_demo.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return m_sceneType; }              // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual ScreenMemberID getMemberID()
	{
		ScreenMemberID id = _MEMBER_EMPTY_STRING;
		switch (m_sceneType) {
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
	SceneType m_sceneType; // _220
};

struct ObjAnaDemo : public ::Screen::ObjBase {
	ObjAnaDemo(const char*);

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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberAnaDemo* _38; // _38
	u32 _3C;                            // _3C
	u32 _40;                            // _40
	u32 _44;                            // _44
	u32 _48;                            // _48
	P2DScreen::Mgr_tuning* m_mgrTuning; // _4C
	og::Screen::MenuMgr* m_menuMgr;     // _50
	u32 _54;                            // _54
	og::Screen::AnimText_Screen* _58;   // _58
	og::Screen::AnimText_Screen* _5C;   // _5C
	og::Screen::AnimText_Screen* _60;   // _60
	og::Screen::AnimGroup* m_animGroup; // _64
	f32 _68;                            // _68
	u32 _6C;                            // _6C
	J2DPane* m_pane;                    // _70
	f32 _74;                            // _74
	f32 _78;                            // _78
	u8 _7C[4];                          // _7C
	f32 _80;                            // _80
	f32 _84;                            // _84
	u32 _88;                            // _88
	f32 _8C;                            // _8C
	f32 _90;                            // _90
};
} // namespace newScreen
} // namespace og

#endif
