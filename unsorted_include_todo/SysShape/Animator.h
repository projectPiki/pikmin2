#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

/*
    __vt__Q28SysShape8Animator:
    .4byte 0
    .4byte 0
    .4byte getCalc__Q28SysShape8AnimatorFv
    .4byte animate__Q28SysShape8AnimatorFf
*/

namespace SysShape {
struct Animator {
	virtual void getCalc();      // _00
	virtual void animate(float); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
