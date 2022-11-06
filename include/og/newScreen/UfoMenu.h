#ifndef _OG_NEWSCREEN_SAVE_H
#define _OG_NEWSCREEN_SAVE_H

#include "Screen/Bases.h"
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

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);  // _48

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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	Screen::DispMemberUfoGroup* m_disp; // _38
	P2DScreen::Mgr_tuning* _3C;         // _3C
	P2DScreen::Mgr* _40;                // _40
	u8 _44[0x4];                        // _44, unknown
	int _48;                            // _48
	Screen::MenuMgr* _4C;               // _4C
	u8 _50;                             // _50
	f32 _54;                            // _54
	Screen::AnimGroup* _58;             // _58
	u8 _5C[0x4];                        // _5C, unknown
	Screen::AnimGroup* _60;             // _60
	J2DPane* _64;                       // _64
	J2DPane* _68;                       // _68
	J2DPane* _6C;                       // _6C
	J2DPane* _70;                       // _70
	J2DPane* _74;                       // _74
	J2DPane* _78;                       // _78
	J2DPane* _7C;                       // _7C
	J2DPane* _80;                       // _80
	f32 _84;                            // _84
	u8 _88;                             // _88
	u8 _89[0x3];                        // _89, probably padding
	u8 _8C[0x4];                        // _8C, unknown
};
} // namespace newScreen
} // namespace og

#endif
