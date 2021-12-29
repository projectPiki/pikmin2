#ifndef _SCREEN_STARTSCENEARG_H
#define _SCREEN_STARTSCENEARG_H

/*
    __vt__Q26Screen13StartSceneArg:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q26Screen12SceneArgBaseCFv
    .4byte 0
*/

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _00

	// _00 VTBL
};
} // namespace Screen

namespace Screen {
struct StartSceneArg : public SceneArgBase {
	virtual void getSceneType() const; // _00
	virtual void _04() = 0;            // _04

	// _00 VTBL
};
} // namespace Screen

#endif
