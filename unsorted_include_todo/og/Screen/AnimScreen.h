#ifndef _OG_SCREEN_ANIMSCREEN_H
#define _OG_SCREEN_ANIMSCREEN_H

/*
    __vt__Q32og6Screen10AnimScreen:
    .4byte 0
    .4byte 0
    .4byte start__Q32og6Screen10AnimScreenFv
    .4byte moveAnim__Q32og6Screen10AnimScreenFv
*/

namespace og {
namespace Screen {
struct AnimScreen {
	virtual void Animstart();    // _08
	virtual void AnimmoveAnim(); // _0C

	// _00 VTBL
};
} // namespace Screen
} // namespace og

#endif
