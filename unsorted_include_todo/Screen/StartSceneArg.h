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
	virtual void getSceneType() const; // _08 (inline)
};
} // namespace Screen

namespace Screen {
struct StartSceneArg : public SceneArgBase {
	virtual void _0C() = 0; // _0C
};
} // namespace Screen

#endif
