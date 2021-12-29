#ifndef _SCREEN_SCENEARGBASE_H
#define _SCREEN_SCENEARGBASE_H

/*
    __vt__Q26Screen12SceneArgBase:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q26Screen12SceneArgBaseCFv
    .4byte 0
*/

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _00
	virtual void _04() = 0;            // _04

	// _00 VTBL
};
} // namespace Screen

#endif
