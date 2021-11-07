#ifndef _OG_NEWSCREEN_TITLEMSGCLASH_H
#define _OG_NEWSCREEN_TITLEMSGCLASH_H

namespace og {
namespace newScreen {
	struct TitleMsg {
		virtual void _00() = 0; // _00
		virtual void _04() = 0; // _04
		virtual void start();   // _08

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

namespace og {
namespace newScreen {
	struct TitleMsgClash : public TitleMsg {
		virtual void init();   // _00
		virtual void update(); // _04
		virtual void start();  // _08
		virtual void end();    // _0C

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
