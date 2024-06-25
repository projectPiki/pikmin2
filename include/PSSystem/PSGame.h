#ifndef _PSSYSTEM_PSGAME_H
#define _PSSYSTEM_PSGAME_H

#include "P2Macros.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/Seq.h"
#include "PSGame/SeMgr.h"
#include "PSGame/SoundTable.h"
#include "PSGame/PikScene.h"

namespace PSSystem {
inline PSSystem::SceneMgr* getSceneMgr()
{
	P2ASSERTLINE(467, spSceneMgr);

	return spSceneMgr;
}

inline void validateSceneMgr(SceneMgr* mgr) { P2ASSERTLINE(476, mgr); }

inline Scene* getChildScene(SceneMgr* mgr)
{
	Scene* scene = mgr->mScenes->mChild;
	P2ASSERTLINE(485, scene);
	return scene;
}

inline SeqBase* getSeqFromScene(Scene* scene, u32 id)
{
	SeqBase* seq = scene->mSeqMgr.getSeq(id);
	P2ASSERTLINE(487, seq);
	return seq;
}

inline SeqBase* getSeqData(SceneMgr* mgr, int id) { return getSeqFromScene(getChildScene(mgr), id); }

inline SeqBase* getSeqDataCheck(SceneMgr* mgr, int id)
{
	mgr->checkScene();
	Scene* scene = mgr->mScenes->mChild;
	P2ASSERTLINE(485, scene);
	SeqBase* seq = scene->mSeqMgr.getSeq(id);
	P2ASSERTLINE(487, seq);
	return seq;
}

inline PSGame::SeMgr* getSeMgrInstance()
{
	P2ASSERTLINE(567, SingletonBase<PSGame::SeMgr>::sInstance);
	return static_cast<PSGame::SeMgr*>(SingletonBase<PSGame::SeMgr>::sInstance);
}

inline PSGame::SoundTable::SePerspInfo* getSoundCategoryInfo(PSGame::SoundTable::CategoryMgr* mgr, u8 soundCat)
{
	P2ASSERTLINE(93, mgr->mPerspInfo[soundCat]);
	return mgr->mPerspInfo[soundCat];
}

}; // namespace PSSystem

namespace PSGame {
u16 seqCpuSync(JASTrack* track, u16 command);
};

#endif
