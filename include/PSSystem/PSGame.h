#ifndef _PSSYSTEM_PSGAME_H
#define _PSSYSTEM_PSGAME_H

#include "P2Macros.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/Seq.h"
#include "PSGame/SeMgr.h"
#include "PSGame/SoundTable.h"

// idk what else goes in this file (if anything? maybe this is in the PSGame folder??)
// but these use the file name in the exception check so :shrug:
namespace PSSystem {
inline SceneMgr* getSceneMgr()
{

	P2ASSERTLINE(467, spSceneMgr);

	return spSceneMgr;
}

inline void checkSceneMgr(SceneMgr* mgr) { P2ASSERTLINE(476, mgr); }

inline SeqBase* getSeqData(SceneMgr* mgr, int id)
{
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

inline SeqBase* getSeqFromScene(Scene* scene, u32 id)
{
	SeqBase* seq = scene->mSeqMgr.getSeq(id);
	P2ASSERTLINE(487, seq);
	return seq;
}

inline PSGame::SoundTable::SePerspInfo* getSoundCategoryInfo(PSGame::SoundTable::CategoryMgr* mgr, int id)
{
	P2ASSERTLINE(93, mgr->mPerspInfo[id]);
	return mgr->mPerspInfo[id];
}

}; // namespace PSSystem

#endif
