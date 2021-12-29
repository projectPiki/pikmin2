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
   newAutoBgm__Q23PSM8SceneMgrFPCcPCcRQ27JAInter9SoundInfoQ210JADUtility10AccessModeRQ26PSGame9SceneInfoPQ28PSSystem15DirectorMgrBase
    .4byte curSceneIsBigBossFloor__Q23PSM8SceneMgrFv
    .4byte newGameScene__Q23PSM8SceneMgrFUcPQ26PSGame9SceneInfo
*/

namespace PSGame {
struct PikSceneMgr {
	virtual void exec();                            // _00
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
