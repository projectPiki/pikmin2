#ifndef _PSGAME_PIKSCENEMGR_H
#define _PSGAME_PIKSCENEMGR_H

namespace PSSystem {
struct SceneMgr {
	virtual void exec(); // _00

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct PikSceneMgr : public SceneMgr {
	virtual void exec();                            // _00
	virtual void newAndSetCurrentScene(SceneInfo&); // _04
	virtual void newAndSetGlobalScene();            // _08
	virtual void _0C() = 0;                         // _0C
	virtual void _10() = 0;                         // _10
	virtual void _14() = 0;                         // _14
	virtual void curSceneIsBigBossFloor();          // _18
	virtual void _1C() = 0;                         // _1C

	// _00 VTBL
};
} // namespace PSGame

#endif
