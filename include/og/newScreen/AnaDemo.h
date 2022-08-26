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

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	SceneType m_sceneType; // _220
};

struct ObjAnaDemo : public ::Screen::ObjBase {
	ObjAnaDemo(const char*);

	og::Screen::DispMemberAnaDemo* _38;
	unknown _3C;
	unknown _40;
	unknown _44;
	unknown _48;
	P2DScreen::Mgr_tuning* m_mgrTuning;
	og::Screen::MenuMgr* m_menuMgr;
	unknown _54;
	og::Screen::AnimText_Screen* _58;
	og::Screen::AnimText_Screen* _5C;
	og::Screen::AnimText_Screen* _60;
	og::Screen::AnimGroup* m_animGroup;
	float _68;
	unknown _6C;
	J2DPane* m_pane;
	float _74;
	float _78;
	u8 _7C[4];
	float _80;
	float _84;
	unknown _88;
	float _8C;
	float _90;
};
} // namespace newScreen
} // namespace og

#endif
