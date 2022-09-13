#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H

#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JAS/JASTrack.h"
#include "SoundID.h"
#include "PSSystem/Seq.h"
#include "PSSystem/WaveScene.h"

namespace PSSystem {

/**
 * @size = 0x24
 */
struct Scene {
	Scene(u8);

	virtual void init();                 // _08 (weak)
	virtual ~Scene();                    // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void scene1stLoadSync();     // _14
	virtual void exec();                 // _18
	virtual void startMainSeq();         // _1C
	virtual void stopMainSeq(u32);       // _20
	virtual void stopAllSound(u32);      // _24

	void adaptChildScene(Scene*);
	void adaptTo(Scene**);
	void detach();
	void appendSeq(SeqBase*);
	void getSeqMgr();
	void getChildScene();

	Scene* m_child;           // _04
	WaveLoader* m_waveLoader; // _08
	Scene** _0C;              // _0C
	SeqMgr _10;               // _10
};

/**
 * @size{0x4}
 */
struct SceneMgr {
	virtual void exec(); // _08 (weak)

	void refreshCurEndScene();
	void findSeq(JASTrack*);
	void getPlayingSeq(JASTrack*);
	void deleteScene(Scene*);
	void deleteCurrentScene();

	// inline/unused
	void deleteGlobalScene();

	inline void checkScene() { P2ASSERTLINE(199, m_scenes != nullptr); }

	inline Scene* getChildScene()
	{
		P2ASSERTLINE(207, m_scenes != nullptr);
		Scene* child = m_scenes->m_child;
		JUT_ASSERTLINE(209, child != nullptr, "get sound scene at\ninvalid timming\n");
		return child;
	}

	// _00	= VTBL
	Scene* m_scenes; // _04
	Scene* m_endScene;
};

extern SceneMgr* spSceneMgr;
} // namespace PSSystem

#endif
