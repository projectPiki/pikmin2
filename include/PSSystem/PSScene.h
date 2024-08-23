#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "SoundID.h"
#include "P2Macros.h"
#include "PSSystem/Seq.h"
#include "PSSystem/WaveScene.h"

namespace PSM {
struct SceneBase;
}

namespace PSSystem {

/**
 * @size = 0x24
 */
struct Scene {
	Scene(u8 id);

	virtual void init() { }              // _08 (weak)
	virtual ~Scene();                    // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void scene1stLoadSync();     // _14
	virtual void exec();                 // _18
	virtual void startMainSeq();         // _1C
	virtual void stopMainSeq(u32);       // _20
	virtual void stopAllSound(u32);      // _24

	void adaptChildScene(Scene* scene);
	void adaptTo(Scene** scene);
	void detach();
	void appendSeq(SeqBase* seq);
	SeqMgr* getSeqMgr() { return &mSeqMgr; }
	Scene* getChildScene() { return mChild; }

	inline void setSecondaryWaveScene(u8 id)
	{
		P2ASSERTLINE(74, mWaveLoader);
		mWaveLoader->mWaveSceneID[1] = id;
	}

	inline PSM::SceneBase* toSceneBase() { return reinterpret_cast<PSM::SceneBase*>(this); }

	// _00 = VTBL
	Scene* mChild;           // _04
	WaveLoader* mWaveLoader; // _08
	Scene** mAdaptScene;     // _0C
	SeqMgr mSeqMgr;          // _10
};

/**
 * @size{0x4}
 */
struct SceneMgr {
	SceneMgr()
	{
		mScenes     = nullptr;
		mEndScene   = nullptr;
		mAccessMode = JADUtility::MODE_0;
	}

	virtual void exec()
	{
		if (mScenes) {
			mScenes->exec();
		}
	} // _08 (weak)

	void refreshCurEndScene();
	SeqBase* findSeq(JASTrack* track);
	SeqBase* getPlayingSeq(JASTrack* track);
	void deleteScene(Scene* scene);
	void deleteCurrentScene();

	// inline/unused
	void deleteGlobalScene();

	inline Scene* getEndScene()
	{
		P2ASSERTLINE(161, mEndScene != nullptr);
		return mEndScene;
	}

	inline void checkScene() { P2ASSERTLINE(199, mScenes != nullptr); }

	inline Scene* getChildScene()
	{
		P2ASSERTLINE(207, mScenes != nullptr);
		Scene* child = mScenes->mChild;
		JUT_ASSERTLINE(209, child != nullptr, "get sound scene at\ninvalid timming\n");
		return child;
	}

	inline void doFirstLoad()
	{
		checkScene();
		mScenes->mChild->scene1stLoadSync();
	}

	inline void doStartMainSeq()
	{
		checkScene();
		mScenes->mChild->startMainSeq();
	}

	inline void doStopMainSeq(u32 time)
	{
		checkScene();
		mScenes->mChild->stopMainSeq(time);
	}

	inline Scene* getChild()
	{
		checkScene();
		return mScenes->mChild;
	}

	// _00	= VTBL
	Scene* mScenes;   // _04
	Scene* mEndScene; // _08
	u8 mAccessMode;   // _0C,  JADUtility::AccessMode
};

inline Scene* checkChildScene(Scene* scene)
{
	P2ASSERTLINE(90, scene->mChild);
	return scene->mChild;
}

// stupid
inline Scene* checkChildScene2(Scene* scene)
{
	P2ASSERTLINE(91, scene->mChild);
	return scene->mChild;
}

inline void stopChildSeq(Scene* scene, int flag)
{
	P2ASSERTLINE(91, scene->mChild);
	scene->mChild->stopAllSound(flag);
}

extern SceneMgr* spSceneMgr;
} // namespace PSSystem

#endif
