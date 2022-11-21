#ifndef _PSGAME_PIKSCENE_H
#define _PSGAME_PIKSCENE_H

#include "types.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/Director.h"
#include "PSSystem/PSBgm.h"
#include "PSGame/SceneInfo.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAD/JADUtility.h"

namespace PSGame {

/**
 * @size{0x24}
 */
struct PikScene : public PSSystem::Scene {
	PikScene(u8);

	virtual ~PikScene(); // _0C

	void getMiddleBossBgm();

	// _00      = VTBL
	// _04-_24  = Scene
};

/**
 * @size{0xD}
 */
struct PikSceneMgr : public PSSystem::SceneMgr {
	virtual void newAndSetCurrentScene(SceneInfo*);                    // _0C
	virtual void newAndSetGlobalScene();                               // _10
	virtual void newMainBgm(const char*, JAInter::SoundInfo&)     = 0; // _14
	virtual void newDirectedBgm(const char*, JAInter::SoundInfo&) = 0; // _18
	virtual void newAutoBgm(const char*, const char*, JAInter::SoundInfo&, JADUtility::AccessMode, SceneInfo&,
	                        PSSystem::DirectorMgrBase*)
	    = 0;                                       // _1C
	virtual void curSceneIsBigBossFloor();         // _20 (weak)
	virtual void newGameScene(u8, SceneInfo*) = 0; // _24

	PSSystem::BgmSeq* newBgmSeq(const char*, JAInter::SoundInfo&);
	PSSystem::BgmSeq* newStreamBgm(u32, JAInter::SoundInfo&);
	void initBossBgm(SceneInfo&, u8*);
	void initAdditionalBgm(SceneInfo&, PSSystem::Scene*);
	void initMainBgm(SceneInfo&, u8*);

	// _00      = VTBL
	// _00-_08  = SceneMgr
	u8 _0C; // _0C, unknown
};
} // namespace PSGame

#endif
