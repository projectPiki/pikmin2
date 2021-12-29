#ifndef _OG_NEWSCREEN_TITLEMSGCLASH_H
#define _OG_NEWSCREEN_TITLEMSGCLASH_H

/*
    __vt__Q32og9newScreen13TitleMsgClash:
    .4byte 0
    .4byte 0
    .4byte init__Q32og9newScreen13TitleMsgClashFv
    .4byte update__Q32og9newScreen13TitleMsgClashFv
    .4byte start__Q32og9newScreen8TitleMsgFv
    .4byte end__Q32og9newScreen13TitleMsgClashFv
*/

namespace og {
namespace newScreen {
	struct TitleMsg {
		virtual void init();   // _00
		virtual void update(); // _04
		virtual void start();  // _08

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
