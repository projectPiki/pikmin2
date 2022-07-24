#ifndef _EBI_SCREEN_TSCREENBASEINTERFACE_H
#define _EBI_SCREEN_TSCREENBASEINTERFACE_H

/*
    __vt__Q33ebi6Screen20TScreenBaseInterface:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace ebi {
namespace Screen {
struct TScreenBaseInterface {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
	virtual void _20() = 0; // _20

	// _00 VTBL
};
} // namespace Screen
} // namespace ebi

#endif
