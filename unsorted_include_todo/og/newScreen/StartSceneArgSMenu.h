#ifndef _OG_NEWSCREEN_STARTSCENEARGSMENU_H
#define _OG_NEWSCREEN_STARTSCENEARGSMENU_H

namespace Screen {
namespace StartSceneArgTemplate < og
{
	namespace newScreen {
		struct StartSceneArgSMenu >
		{
			virtual void _00() = 0;         // _00
			virtual void newgetClassSize(); // _04

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
