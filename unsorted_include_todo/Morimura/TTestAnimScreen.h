#ifndef _MORIMURA_TTESTANIMSCREEN_H
#define _MORIMURA_TTESTANIMSCREEN_H

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
