#ifndef _SYS_MATTEVREGANIMATION_H
#define _SYS_MATTEVREGANIMATION_H

/*
    __vt__Q23Sys18MatTevRegAnimation:
    .4byte 0
    .4byte 0
    .4byte onAttachResource__Q23Sys18MatTevRegAnimationFPv
    .4byte getAnmBase__Q23Sys18MatTevRegAnimationFv
    .4byte set__Q23Sys18MatTevRegAnimationFv
    .4byte remove__Q23Sys18MatTevRegAnimationFv
*/

namespace Sys {
struct MatTevRegAnimation {
	virtual void onAttachResource(void*); // _00
	virtual void getAnmBase();            // _04
	virtual void set();                   // _08
	virtual void remove();                // _0C

	// _00 VTBL
};
} // namespace Sys

#endif
