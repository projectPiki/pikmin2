#ifndef _SYS_MATBASEANIMATION_H
#define _SYS_MATBASEANIMATION_H

/*
    __vt__Q23Sys16MatBaseAnimation:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace Sys {
struct MatBaseAnimation {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
	virtual void _18() = 0; // _18

	// _00 VTBL
};
} // namespace Sys

#endif
