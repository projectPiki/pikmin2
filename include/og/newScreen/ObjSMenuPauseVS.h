#ifndef _OG_NEWSCREEN_OBJSMENUPAUSEVS_H
#define _OG_NEWSCREEN_OBJSMENUPAUSEVS_H

#include "og/newScreen/ObjSMenuBase.h"

namespace og {
namespace Screen {
struct AnimText_Screen;
struct DispMemberSMenuPauseVS;
struct MenuMgr;
} // namespace Screen

namespace newScreen {
/**
 * @size{0xCC}
 */
struct ObjSMenuPauseVS : public ObjSMenuBase {
	ObjSMenuPauseVS(char const* text);

	virtual ~ObjSMenuPauseVS();                           // _00
	virtual bool doStart(const ::Screen::StartSceneArg*); // _3C
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _40
	virtual void doCreate(JKRArchive*);                   // _44
	virtual bool doUpdateFadein();                        // _48
	virtual void doUpdateFadeinFinish();                  // _4C
	virtual bool doUpdate();                              // _50
	virtual void doUpdateFinish();                        // _54
	virtual bool doUpdateFadeout();                       // _58
	virtual void doUpdateFadeoutFinish();                 // _5C
	virtual void doDraw(Graphics&);                       // _60
	virtual void in_L();                                  // _70
	virtual void in_R();                                  // _74
	virtual void wait();                                  // _78
	virtual void out_L();                                 // _7C
	virtual void out_R();                                 // _80
	virtual void doUpdateCancelAction();                  // _88
	virtual void doUpdateRAction();                       // _8C
	virtual void doUpdateLAction();                       // _90
	virtual void commonUpdate();                          // _9C
	virtual void out_cancel();                            // _A0
	virtual void out_menu_0();                            // _A4
	virtual void out_menu_1();                            // _A8
	virtual int getResult();                              // _AC

	void blink_Menu(int);

	Screen::DispMemberSMenuPauseVS* m_disp; // _A8
	int _AC;                                // _AC
	P2DScreen::Mgr* _B0;                    // _B0
	Screen::MenuMgr* m_menuMgr;             // _B4
	Screen::AnimText_Screen* _B8;           // _B8
	Screen::AnimText_Screen* _BC;           // _BC
	u8 _C0;                                 // _C0
	float _C4;                              // _C4
	u8 _C8;                                 // _C8
};
} // namespace newScreen
} // namespace og

#endif
