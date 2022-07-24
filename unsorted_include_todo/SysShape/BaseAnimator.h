#ifndef _SYSSHAPE_BASEANIMATOR_H
#define _SYSSHAPE_BASEANIMATOR_H

/*
    __vt__Q28SysShape12BaseAnimator:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace SysShape {
struct BaseAnimator {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
};
} // namespace SysShape

#endif
