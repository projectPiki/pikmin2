#ifndef _SCREEN_SETSCENEARG_H
#define _SCREEN_SETSCENEARG_H

namespace Screen {
struct SetSceneArg {
	virtual void getSceneType() const; // _00
	virtual void getClassSize();       // _04

	// _00 VTBL
};
} // namespace Screen

#endif
