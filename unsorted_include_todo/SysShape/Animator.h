#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

namespace SysShape {
struct Animator {
	virtual void getCalc();      // _00
	virtual void animate(float); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
