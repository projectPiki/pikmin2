#ifndef _OG_NEWSCREEN_TITLEMSG_H
#define _OG_NEWSCREEN_TITLEMSG_H

/*
    __vt__Q32og9newScreen8TitleMsg:
    .4byte 0
    .4byte 0
    .4byte init__Q32og9newScreen8TitleMsgFv
    .4byte update__Q32og9newScreen8TitleMsgFv
    .4byte start__Q32og9newScreen8TitleMsgFv
    .4byte end__Q32og9newScreen8TitleMsgFv
*/

namespace og {
namespace newScreen {
struct TitleMsg {
	virtual void init();   // _08
	virtual void update(); // _0C
	virtual void start();  // _10
	virtual void end();    // _14

	// _00 VTBL
};
} // namespace newScreen
} // namespace og

#endif
