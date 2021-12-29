#ifndef _SYS_MATTEXANIMATION_H
#define _SYS_MATTEXANIMATION_H

/*
    __vt__Q23Sys15MatTexAnimation:
    .4byte 0
    .4byte 0
    .4byte onAttachResource__Q23Sys15MatTexAnimationFPv
    .4byte getAnmBase__Q23Sys15MatTexAnimationFv
    .4byte set__Q23Sys15MatTexAnimationFv
    .4byte remove__Q23Sys15MatTexAnimationFv
*/

namespace Sys {
struct MatTexAnimation {
	virtual void onAttachResource(void*); // _00
	virtual void getAnmBase();            // _04
	virtual void set();                   // _08
	virtual void remove();                // _0C

	// _00 VTBL
};
} // namespace Sys

#endif
