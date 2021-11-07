#ifndef _OG_SCREEN_ANIMPANE_H
#define _OG_SCREEN_ANIMPANE_H

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
