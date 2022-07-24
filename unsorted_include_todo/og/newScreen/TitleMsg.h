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
	virtual void init();   // _08 (inline)
	virtual void update(); // _0C (inline)
	virtual void start();  // _10 (inline)
	virtual void end();    // _14 (inline)

	TitleMsg();
	void setFontPane(J2DPictureEx*, int);
	void setCentering(og::newScreen::TitleMsg::EnumCentering);
	void setColor(JUtility::TColor&, JUtility::TColor&);
};
} // namespace newScreen
} // namespace og

#endif
