#ifndef _SCREEN_ENDSCENEARG_H
#define _SCREEN_ENDSCENEARG_H

namespace Screen {
struct SceneArgBase {
	virtual void getSceneType() const; // _00

	// _00 VTBL
};
} // namespace Screen

namespace Screen {
struct EndSceneArg : public SceneArgBase {
	virtual void getSceneType() const; // _00
	virtual void getClassSize();       // _04

	// _00 VTBL
};
} // namespace Screen

#endif
