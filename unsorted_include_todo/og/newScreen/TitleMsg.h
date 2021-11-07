#ifndef _OG_NEWSCREEN_TITLEMSG_H
#define _OG_NEWSCREEN_TITLEMSG_H

namespace og {
namespace newScreen {
	struct TitleMsg {
		virtual void init();   // _00
		virtual void update(); // _04
		virtual void start();  // _08
		virtual void end();    // _0C

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
