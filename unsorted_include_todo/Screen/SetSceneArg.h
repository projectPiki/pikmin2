#ifndef _SCREEN_SETSCENEARG_H
#define _SCREEN_SETSCENEARG_H

/*
    __vt__Q26Screen11SetSceneArg:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q26Screen11SetSceneArgCFv
    .4byte getClassSize__Q26Screen11SetSceneArgFv
*/

namespace Screen {
struct SetSceneArg {
	virtual void getSceneType() const; // _00
	virtual void getClassSize();       // _04

	// _00 VTBL
};
} // namespace Screen

#endif
