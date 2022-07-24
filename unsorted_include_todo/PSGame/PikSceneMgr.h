#ifndef _PSGAME_PIKSCENEMGR_H
#define _PSGAME_PIKSCENEMGR_H

/*
    __vt__Q26PSGame11PikSceneMgr:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem8SceneMgrFv
    .4byte newAndSetCurrentScene__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfo
    .4byte newAndSetGlobalScene__Q26PSGame11PikSceneMgrFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte curSceneIsBigBossFloor__Q26PSGame11PikSceneMgrFv
    .4byte 0
*/

namespace PSSystem {
struct SceneMgr {
	virtual void exec(); // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct PikSceneMgr : public SceneMgr {
	virtual void newAndSetCurrentScene(SceneInfo&); // _0C
	virtual void newAndSetGlobalScene();            // _10
	virtual void _14() = 0;                         // _14
	virtual void _18() = 0;                         // _18
	virtual void _1C() = 0;                         // _1C
	virtual void curSceneIsBigBossFloor();          // _20
	virtual void _24() = 0;                         // _24

	// _00 VTBL
};
} // namespace PSGame

#endif
