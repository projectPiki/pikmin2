#ifndef _PSM_SCENE_H
#define _PSM_SCENE_H

#include "PSGame/SceneInfo.h"
#include "PSSystem/PSStream.h"
#include "types.h"
#include "PSGame/PikScene.h"
#include "PSGame/CameraMgr.h"
#include "PSM/ObjBase.h"
#include "PSM/EnemyBoss.h"
#include "PSM/BossBgmFader.h"
#include "PSM/PikiHumming.h"
#include "PSM/Se.h"
#include "PSM/WorldMapRocket.h"
#include "JSystem/JSupport/JSUList.h"
#include "PSSystem/PSGame.h"

namespace PSM {
struct Scene_Game;
struct ObjMgr;

/**
 * @size{0x28}
 */
struct SceneBase : public PSGame::PikScene {
	SceneBase(u8, PSGame::SceneInfo*);

	virtual ~SceneBase() { }                                   // _0C (weak)
	virtual f32 getCamDistVol(u8) = 0;                         // _28
	virtual PSSystem::EnvSeMgr* getEnvSe() { return nullptr; } // _2C (weak)
	virtual f32 getSceneFx();                                  // _30
	virtual bool isDemoScene();                                // _34 (weak)
	virtual bool getSeSceneGate(ObjBase*, u32);                // _38 (weak)
	virtual void becomeSceneCamera();                          // _3C
	virtual bool isGameScene() { return false; }               // _40 (weak)
	virtual void pauseOn_2D(u8, u8);                           // _44
	virtual void pauseOff_2D();                                // _48
	virtual void pauseOn_Demo();                               // _4C
	virtual void pauseOff_Demo();                              // _50

	PSGame::SceneInfo* getSceneInfoA();

	PSGame::SceneInfo* mSceneInfoA; // _24
};

/**
 * @size{0x11}
 */
struct SceneMgr : public PSGame::PikSceneMgr {
	SceneMgr();

	virtual PSSystem::BgmSeq* newMainBgm(const char*, JAInter::SoundInfo&);     // _14
	virtual PSSystem::BgmSeq* newDirectedBgm(const char*, JAInter::SoundInfo&); // _18
	virtual PSSystem::BgmSeq* newAutoBgm(const char*, const char*, JAInter::SoundInfo&, JADUtility::AccessMode, PSGame::SceneInfo&,
	                                     PSSystem::DirectorMgrBase*); // _1C
	virtual bool curSceneIsBigBossFloor();                            // _20
	virtual PSSystem::Scene* newGameScene(u8, PSGame::SceneInfo*);    // _24

	void initEnvironmentSe(Scene_Game*);

	// _00      = VTBL
	// _00-_0D  = PikSceneMgr
	u8 _10; // _10, unknown
};

//////////// GLOBAL SCENE

/**
 * @size{0x28}
 */
struct Scene_Global : public SceneBase {
	Scene_Global(u8, PSGame::SceneInfo*);

	virtual ~Scene_Global();                    // _0C
	virtual f32 getCamDistVol(u8);              // _28
	virtual bool getSeSceneGate(ObjBase*, u32); // _38 (weak)

	PSSystem::StreamBgm* getGlobalStream();
	void startGlobalStream(u32);

	// _00      = VTBL
	// _00-_28  = SceneBase
};

//////////// SCENES WITH OBJECTS

/**
 * @size{0x38}
 */
struct Scene_Objects : public SceneBase {
	Scene_Objects(u8, PSGame::SceneInfo*);

	virtual ~Scene_Objects();                   // _0C
	virtual void exec();                        // _18
	virtual void startMainSeq();                // _1C
	virtual f32 getCamDistVol(u8);              // _28
	virtual bool getSeSceneGate(ObjBase*, u32); // _38
	virtual void onStartMainSeq();              // _54

	void adaptObjMgr();
	void detachObjMgr();

	// _00      = VTBL
	// _00-_28  = SceneBase
	PSGame::CameraMgr* mCameraMgr; // _28
	ObjMgr* mObjMgr;               // _2C
	u8 _30;                        // _30
	int _34;                       // _34
};

/**
 * @size{0x38}
 */
struct Scene_Zukan : public Scene_Objects {
	Scene_Zukan(u8 wscene, PSGame::SceneInfo* info)
	    : Scene_Objects(wscene, info)
	{
	}
	virtual ~Scene_Zukan();                     // _0C (weak)
	virtual f32 getCamDistVol(u8);              // _28
	virtual bool getSeSceneGate(ObjBase*, u32); // _38

	// _00      = VTBL
	// _00-_38  = Scene_Objects
};

/**
 * @size{0x5C}
 */
struct Scene_Game : public Scene_Objects {
	Scene_Game(u8, PSGame::SceneInfo*);

	virtual void init();                      // _08
	virtual ~Scene_Game();                    // _0C
	virtual void exec();                      // _18
	virtual void startMainSeq();              // _1C
	virtual void stopMainSeq(u32);            // _20
	virtual void stopAllSound(u32);           // _24
	virtual PSSystem::EnvSeMgr* getEnvSe();   // _2C
	virtual bool isDemoScene();               // _34 (weak)
	virtual bool isGameScene();               // _40 (weak)
	virtual void pauseOn_2D(u8, u8);          // _44
	virtual void pauseOff_2D();               // _48
	virtual void pauseOn_Demo();              // _4C
	virtual void pauseOff_Demo();             // _50
	virtual bool isCave() { return false; }   // _58 (weak)
	virtual void bossAppear(EnemyBoss*, u16); // _5C
	virtual void bossKilled(EnemyBoss*);      // _60
	virtual bool isBossFloor();               // _64 (weak)
	virtual bool akubiOK();                   // _68
	virtual bool isPollutUp();                // _6C (weak)
	virtual s32 getPollutUpTimer() const;     // _70 (weak)

	void attachBossFaderMgr();
	void adaptEnvSe(PSSystem::EnvSeMgr*);

	// _00      = VTBL
	// _00-_38  = Scene_Objects
	JSUList<EnemyBoss> mEnemyBossList; // _38
	PSSystem::EnvSeMgr* mEnvSeMgr;     // _48
	u32 _4C;                           // _4C, unknown
	int _50;                           // _50
	BossBgmFader::Mgr* mBossFaderMgr;  // _54
	PikiHummingMgr* mHummingMgr;       // _58
	PersEnvManager* mPersEnvMgr;       // _5C
};

/**
 * @size{0x60}
 */
struct Scene_Ground : public Scene_Game {

	static int cEvenning_fadeOuTime;
	static int cEvenning_fadeInTime;

	enum Time { GroundTime_On, GroundTime_Off };

	Scene_Ground(u8, PSGame::SceneInfo*);

	virtual ~Scene_Ground();              // _0C (weak)
	virtual void exec();                  // _18
	virtual bool isPollutUp();            // _6C (weak)
	virtual s32 getPollutUpTimer() const; // _70 (weak)

	void setPollutUp();
	void fadeMainBgm(f32, u32, Time);
	void jumpMainBgm(u8);
	void changeEnvSE_Noon();

	// _00      = VTBL
	// _00-_5C  = Scene_Game
	int mPollutUpTimer; // _5C
};

/**
 * @size{0x68}
 */
struct Scene_Cave : public Scene_Game {
	Scene_Cave(u8, PSGame::SceneInfo*);

	virtual void init();                                         // _08
	virtual ~Scene_Cave();                                       // _0C (weak)
	virtual void exec();                                         // _18
	virtual void startMainSeq();                                 // _1C
	virtual f32 getSceneFx();                                    // _30
	virtual bool isCave();                                       // _58 (weak)
	virtual void bossAppear(EnemyBoss*, u16);                    // _5C
	virtual void bossKilled(EnemyBoss*);                         // _60
	virtual bool isBossFloor();                                  // _64
	virtual bool akubiOK();                                      // _68
	virtual bool isPollutUp() { return (mPollutUpTimer != -1); } // _6C (weak)
	virtual s32 getPollutUpTimer() const;                        // _70 (weak)

	void stopPollutionSe();
	void startPollutUpSe();

	// _00      = VTBL
	// _00-_5C  = Scene_Game
	f32 mSceneFx;       // _60
	int mPollutUpTimer; // _64
};

/**
 * @size{0x68}
 */
struct Scene_Challenge : public Scene_Cave {
	Scene_Challenge(u8, PSGame::SceneInfo*);

	virtual void init();         // _08
	virtual ~Scene_Challenge();  // _0C (weak)
	virtual void startMainSeq(); // _1C
	virtual bool akubiOK();      // _68

	// _00      = VTBL
	// _00-_68  = Scene_Cave
};

//////////// SCENES WITHOUT OBJECTS

/**
 * @size{0x28}
 */
struct Scene_NoObjects : public SceneBase {
	inline Scene_NoObjects(u8 wscene, PSGame::SceneInfo* info)
	    : SceneBase(wscene, info)
	{
	}

	virtual ~Scene_NoObjects();    // _0C (weak)
	virtual f32 getCamDistVol(u8); // _28

	// _00      = VTBL
	// _00-_28  = SceneBase
};

/**
 * @size{0x2C}
 */
struct Scene_WorldMap : public Scene_NoObjects {
	Scene_WorldMap(u8, PSGame::SceneInfo*);

	virtual ~Scene_WorldMap(); // _0C (weak)

	// _00      = VTBL
	// _00-_28  = SceneBase
	WorldMapRocket* mRocket; // _28
};

//////////// DEMO SCENE

/**
 * @size{0x2C}
 */
struct Scene_Demo : public SceneBase {
	Scene_Demo(u8, PSGame::SceneInfo*);

	virtual ~Scene_Demo();                      // _0C (weak)
	virtual f32 getCamDistVol(u8);              // _28
	virtual bool isDemoScene();                 // _34 (weak)
	virtual bool getSeSceneGate(ObjBase*, u32); // _38

	// _00      = VTBL
	// _00-_28  = SceneBase
	u8 mGate; // _28
};

} // namespace PSM

inline PSSystem::SceneMgr* PSMGetSceneMgr()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	mgr->checkScene();
	return mgr;
}

inline PSSystem::SceneMgr* PSMGetSceneMgrCheck()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	return mgr;
}

inline PSSystem::Scene* PSMGetChildScene()
{
	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	return mgr->getChildScene();
}

inline PSM::Scene_Game* PSMGetGameScene()
{
	PSM::SceneBase* scene = static_cast<PSM::SceneBase*>(PSMGetChildScene());
	if (scene->isGameScene()) {
		return static_cast<PSM::Scene_Game*>(scene);
	}

	return nullptr;
}

inline PSM::MiddleBossSeq* PSMGetMiddleBossSeq()
{
	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	mgr->checkScene();
	PSM::Scene_Objects* scene = static_cast<PSM::Scene_Objects*>(mgr->mScenes->mChild);
	return !scene ? nullptr : scene->getMiddleBossBgm();
}

inline void PSMSetSceneInfo(PSGame::SceneInfo& info)
{
	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetCurrentScene(info);
}

inline PSSystem::SeqBase* PSSystemGetSeq(int id)
{
	PSSystem::SceneMgr* mgr = PSMGetSceneMgr();
	return PSSystem::getSeqData(mgr, id);
}

#endif
