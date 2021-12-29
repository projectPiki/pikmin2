#ifndef _OG_NEWSCREEN_STARTSCENEARGSMENU_H
#define _OG_NEWSCREEN_STARTSCENEARGSMENU_H

/*
    __vt__Q32og9newScreen18StartSceneArgSMenu:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32og9newScreen18StartSceneArgSMenuCFv
    .4byte
   "getClassSize__Q26Screen58StartSceneArgTemplate<Q32og9newScreen18StartSceneArgSMenu>Fv"
*/

namespace Screen {
namespace StartSceneArgTemplate < og
{
	namespace newScreen {
		struct StartSceneArgSMenu >
		{
			virtual void getSceneType() const; // _00
			virtual void newgetClassSize();    // _04

			// _00 VTBL
		};
	} // namespace newScreen
} // namespace og
} // namespace Screen

namespace og {
namespace newScreen {
	struct StartSceneArgSMenu : public StartSceneArgSMenu > {
		virtual void getSceneType() const; // _00
		virtual void newgetClassSize();    // _04

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
