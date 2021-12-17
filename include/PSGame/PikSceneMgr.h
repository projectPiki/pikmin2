#ifndef _PSGAME_PIKSCENEMGR_H
#define _PSGAME_PIKSCENEMGR_H

#include "types.h"

namespace PSGame {
struct PikSceneMgr {
	struct {
		void* __RTTI__;
		void* __unka__;
		void (*exec)(struct SceneMgr*);
		struct SeqBase* (*newAndSetCurrentScene)(struct PikSceneMgr*,
		                                         struct SceneInfo* info);
		struct Scene_Global* (*newAndSetGlobalScene)(struct PikSceneMgr*);
		void* __unkb__;
		void* __unkc__;
		void* __unkd__;
		bool (*curSceneIsBigBossFloor)(void);
		void* __unke__;
	} * vt;
	// unsigned int*;
	char dummy[9];
	BgmSeq* newBgmSeq(const char*, JAInter::SoundInfo&);
	BgmSeq* newStreamBgm(unsigned long, JAInter::SoundInfo&);
};
}; // namespace PSGame

#endif
