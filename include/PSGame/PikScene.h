#ifndef _PSGAME_PIKSCENE_H
#define _PSGAME_PIKSCENE_H

#include "types.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSDirector.h"
#include "PSSystem/PSSeq.h"
#include "PSGame/SceneInfo.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAD/JADUtility.h"

namespace PSM {
struct MiddleBossSeq;
}

namespace PSGame {

/**
 * @size{0x24}
 */
struct PikScene : public PSSystem::Scene {
	PikScene(u8);

	virtual ~PikScene(); // _0C

	PSM::MiddleBossSeq* getMiddleBossBgm();

	// unused/inlined:
	void getJumpMainBgm();

	// _00      = VTBL
	// _04-_24  = Scene
};

/**
 * @size{0xD}
 */
struct PikSceneMgr : public PSSystem::SceneMgr {
	PikSceneMgr()
	    : mAccessMode(JADUtility::MODE_0)
	{
	}

	virtual PSSystem::Scene* newAndSetCurrentScene(SceneInfo&);                     // _0C
	virtual PSSystem::Scene* newAndSetGlobalScene();                                // _10
	virtual PSSystem::BgmSeq* newMainBgm(const char*, JAInter::SoundInfo&)     = 0; // _14
	virtual PSSystem::BgmSeq* newDirectedBgm(const char*, JAInter::SoundInfo&) = 0; // _18
	virtual PSSystem::BgmSeq* newAutoBgm(const char*, const char*, JAInter::SoundInfo&, JADUtility::AccessMode, SceneInfo&,
	                                     PSSystem::DirectorMgrBase*)
	    = 0;                                                   // _1C
	virtual bool curSceneIsBigBossFloor() { return false; }    // _20 (weak)
	virtual PSSystem::Scene* newGameScene(u8, SceneInfo*) = 0; // _24

	PSSystem::BgmSeq* newBgmSeq(const char*, JAInter::SoundInfo&);
	PSSystem::BgmSeq* newStreamBgm(u32, JAInter::SoundInfo&);
	PSSystem::BgmSeq* initBossBgm(SceneInfo&, u8*);
	void initAdditionalBgm(SceneInfo&, PSSystem::Scene*);
	PSSystem::BgmSeq* initMainBgm(SceneInfo&, u8*);

	// _00      = VTBL
	// _00-_08  = SceneMgr
	u8 mAccessMode; // _0C,  JADUtility::AccessMode
};
} // namespace PSGame

#endif
