#ifndef _PSM_SCENEMGR_H
#define _PSM_SCENEMGR_H

/*
    __vt__Q23PSM8SceneMgr:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem8SceneMgrFv
    .4byte newAndSetCurrentScene__Q26PSGame11PikSceneMgrFRQ26PSGame9SceneInfo
    .4byte newAndSetGlobalScene__Q26PSGame11PikSceneMgrFv
    .4byte newMainBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo
    .4byte newDirectedBgm__Q23PSM8SceneMgrFPCcRQ27JAInter9SoundInfo
    .4byte
   newAutoBgm__Q23PSM8SceneMgrFPCcPCcRQ27JAInter9SoundInfoQ210JADUtility10AccessModeRQ26PSGame9SceneInfoPQ28PSSystem15DirectorMgrBase .4byte
   curSceneIsBigBossFloor__Q23PSM8SceneMgrFv .4byte newGameScene__Q23PSM8SceneMgrFUcPQ26PSGame9SceneInfo
*/

namespace PSSystem {
struct SceneMgr {
	virtual void exec(); // _08 (weak)
};
} // namespace PSSystem

namespace PSGame {
struct PikSceneMgr {
	virtual void _08() = 0;                         // _08
	virtual void newAndSetCurrentScene(SceneInfo&); // _0C
	virtual void newAndSetGlobalScene();            // _10
};
} // namespace PSGame

namespace PSM {
struct SceneMgr : public SceneMgr, public PikSceneMgr {
	virtual void newMainBgm(const char*, JAInter::SoundInfo&);     // _14
	virtual void newDirectedBgm(const char*, JAInter::SoundInfo&); // _18
	virtual void newAutoBgm(const char*, const char*, JAInter::SoundInfo&, JADUtility::AccessMode, PSGame::SceneInfo&,
	                        PSSystem::DirectorMgrBase*);          // _1C
	virtual void curSceneIsBigBossFloor();                        // _20
	virtual void newGameScene(unsigned char, PSGame::SceneInfo*); // _24

	SceneMgr();
	void initEnvironmentSe(PSM::Scene_Game*);
};
} // namespace PSM

#endif
