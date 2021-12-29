#ifndef _MORIMURA_TTESTANIMSCREEN_H
#define _MORIMURA_TTESTANIMSCREEN_H

/*
    __vt__Q28Morimura15TTestAnimScreen:
    .4byte 0
    .4byte 0
    .4byte start__Q32og6Screen10AnimScreenFv
    .4byte moveAnim__Q32og6Screen10AnimScreenFv
*/

namespace og {
namespace Screen {
	struct AnimScreen {
		virtual void Animstart();    // _00
		virtual void AnimmoveAnim(); // _04

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

namespace Morimura {
struct TTestAnimScreen : public AnimScreen {
	virtual void Animstart();    // _00
	virtual void AnimmoveAnim(); // _04

	// _00 VTBL
};
} // namespace Morimura

#endif
