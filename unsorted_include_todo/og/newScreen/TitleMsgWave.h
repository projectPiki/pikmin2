#ifndef _OG_NEWSCREEN_TITLEMSGWAVE_H
#define _OG_NEWSCREEN_TITLEMSGWAVE_H

/*
    __vt__Q32og9newScreen12TitleMsgWave:
    .4byte 0
    .4byte 0
    .4byte init__Q32og9newScreen12TitleMsgWaveFv
    .4byte update__Q32og9newScreen12TitleMsgWaveFv
    .4byte start__Q32og9newScreen12TitleMsgWaveFv
    .4byte end__Q32og9newScreen12TitleMsgWaveFv
    .4byte setParam__Q32og9newScreen12TitleMsgWaveFffff
*/

namespace og {
namespace newScreen {
struct TitleMsgWave {
	virtual void init();                               // _08
	virtual void update();                             // _0C
	virtual void start();                              // _10
	virtual void end();                                // _14
	virtual void setParam(float, float, float, float); // _18

	TitleMsgWave();
};
} // namespace newScreen
} // namespace og

#endif
