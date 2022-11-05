#ifndef _SYSSHAPE_MOTIONLISTENER_H
#define _SYSSHAPE_MOTIONLISTENER_H

#include "types.h"

namespace SysShape {
struct KeyEvent;

// @size{0x4}
struct MotionListener {
	virtual void onKeyEvent(const KeyEvent& event) = 0; // _08
};

} // namespace SysShape

#endif
