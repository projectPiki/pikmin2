#ifndef _OG_SCREEN_ANIMSCREEN_H
#define _OG_SCREEN_ANIMSCREEN_H

namespace og {
namespace Screen {
	struct AnimScreen {
		virtual void Animstart();    // _00
		virtual void AnimmoveAnim(); // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
