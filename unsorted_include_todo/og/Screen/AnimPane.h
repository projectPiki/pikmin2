#ifndef _OG_SCREEN_ANIMPANE_H
#define _OG_SCREEN_ANIMPANE_H

/*
    __vt__Q32og6Screen8AnimPane:
    .4byte 0
    .4byte 0
    .4byte start__Q32og6Screen8AnimPaneFv
    .4byte moveAnim__Q32og6Screen8AnimPaneFv
*/

namespace og {
namespace Screen {
	struct AnimPane {
		virtual void start();    // _00
		virtual void moveAnim(); // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
