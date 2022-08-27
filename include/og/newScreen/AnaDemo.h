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

	SceneType m_sceneType; // _220
};

struct ObjAnaDemo : public ::Screen::ObjBase {
	ObjAnaDemo(const char*);

	og::Screen::DispMemberAnaDemo* _38;
	u32 _3C;
	u32 _40;
	u32 _44;
	u32 _48;
	P2DScreen::Mgr_tuning* m_mgrTuning;
	og::Screen::MenuMgr* m_menuMgr;
	u32 _54;
	og::Screen::AnimText_Screen* _58;
	og::Screen::AnimText_Screen* _5C;
	og::Screen::AnimText_Screen* _60;
	og::Screen::AnimGroup* m_animGroup;
	float _68;
	u32 _6C;
	J2DPane* m_pane;
	float _74;
	float _78;
	u8 _7C[4];
	float _80;
	float _84;
	u32 _88;
	float _8C;
	float _90;
};
} // namespace newScreen
} // namespace og

#endif
