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
		virtual void init();                               // _00
		virtual void update();                             // _04
		virtual void start();                              // _08
		virtual void end();                                // _0C
		virtual void setParam(float, float, float, float); // _10

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
