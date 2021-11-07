#ifndef _SCREEN_SCENEARGBASE_H
#define _SCREEN_SCENEARGBASE_H

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _00
	virtual void _04() = 0;            // _04

	// _00 VTBL
};
} // namespace Screen

#endif
