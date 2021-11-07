#ifndef _PSM_SCENEMGR_H
#define _PSM_SCENEMGR_H

namespace PSGame {
struct PikSceneMgr {
	virtual void _00() = 0;                         // _00
	virtual void newAndSetCurrentScene(SceneInfo&); // _04
	virtual void newAndSetGlobalScene();            // _08

	// _00 VTBL
};
} // namespace PSGame

namespace PSM {
struct SceneMgr : public PikSceneMgr {
	virtual void exec();                                           // _00
	virtual void newAndSetCurrentScene(SceneInfo&);                // _04
	virtual void newAndSetGlobalScene();                           // _08
	virtual void newMainBgm(const char*, JAInter::SoundInfo&);     // _0C
	virtual void newDirectedBgm(const char*, JAInter::SoundInfo&); // _10
	virtual void newAutoBgm(const char*, const char*, JAInter::SoundInfo&,
	                        JADUtility::AccessMode, PSGame::SceneInfo&,
	                        PSSystem::DirectorMgrBase*);          // _14
	virtual void curSceneIsBigBossFloor();                        // _18
	virtual void newGameScene(unsigned char, PSGame::SceneInfo*); // _1C

	// _00 VTBL
};
} // namespace PSM

#endif
