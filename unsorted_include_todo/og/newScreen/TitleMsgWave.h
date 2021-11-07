#ifndef _OG_NEWSCREEN_TITLEMSGWAVE_H
#define _OG_NEWSCREEN_TITLEMSGWAVE_H

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
