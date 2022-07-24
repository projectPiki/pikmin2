#ifndef _SCREEN_ENDSCENEARG_H
#define _SCREEN_ENDSCENEARG_H

/*
    __vt__Q26Screen11EndSceneArg:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q26Screen12SceneArgBaseCFv
    .4byte getClassSize__Q26Screen11EndSceneArgFv
*/

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _08

	// _00 VTBL
};
} // namespace Screen

namespace Screen {
struct EndSceneArg : public SceneArgBase {
	virtual void getClassSize(); // _0C

	// _00 VTBL
};
} // namespace Screen

#endif
