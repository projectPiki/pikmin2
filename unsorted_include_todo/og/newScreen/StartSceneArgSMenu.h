#ifndef _OG_NEWSCREEN_STARTSCENEARGSMENU_H
#define _OG_NEWSCREEN_STARTSCENEARGSMENU_H

/*
    __vt__Q32og9newScreen18StartSceneArgSMenu:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32og9newScreen18StartSceneArgSMenuCFv
    .4byte "getClassSize__Q26Screen58StartSceneArgTemplate<Q32og9newScreen18StartSceneArgSMenu>Fv"
*/

namespace Screen {
struct StartSceneArgTemplate<og::newScreen::StartSceneArgSMenu> {
	virtual void getSceneType() const;                                             // _08 (weak)
	virtual void StartSceneArgTemplate<og::newStartSceneArgSMenu>::getClassSize(); // _0C (weak)
};
} // namespace Screen

namespace og {
namespace newScreen {
struct StartSceneArgSMenu : public StartSceneArgTemplate<og::newScreen::StartSceneArgSMenu> {
	virtual void getSceneType() const; // _08 (weak)
};
} // namespace newScreen
} // namespace og

#endif
