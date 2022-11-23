#ifndef _PSM_SCENE_H
#define _PSM_SCENE_H

#include "types.h"
#include "PSGame/PikScene.h"
#include "PSGame/CameraMgr.h"
#include "PSM/ObjBase.h"
#include "PSM/ObjMgr.h"
#include "PSM/EnemyBoss.h"
#include "PSM/BossBgmFader.h"
#include "PSM/PikiHumming.h"
#include "PSM/Se.h"
#include "PSM/WorldMapRocket.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
struct Scene_Game;

/**
 * @size{0x28}
 */
struct SceneBase : public PSGame::PikScene {
	SceneBase(u8, PSGame::SceneInfo*);

	virtual ~SceneBase();                       // _0C (weak)
	virtual void getCamDistVol(u8) = 0;         // _28
	virtual void getEnvSe();                    // _2C (weak)
	virtual void getSceneFx();                  // _30
	virtual bool isDemoScene();                 // _34 (weak)
	virtual void getSeSceneGate(ObjBase*, u32); // _38 (weak)
	virtual void becomeSceneCamera();           // _3C
	virtual bool isGameScene();                 // _40 (weak)
	virtual void pauseOn_2D(u8, u8);            // _44
	virtual void pauseOff_2D();                 // _48
	virtual void pauseOn_Demo();                // _4C
	virtual void pauseOff_Demo();               // _50

	void getSceneInfoA();

	PSGame::SceneInfo* m_sceneInfoA; // _24
};

/**
 * @size{0x11}
 */
struct SceneMgr : public PSGame::PikSceneMgr {
	SceneMgr();

	virtual void newMainBgm(const char*, JAInter::SoundInfo&);     // _14
	virtual void newDirectedBgm(const char*, JAInter::SoundInfo&); // _18
	virtual void newAutoBgm(const char*, const char*, JAInter::SoundInfo&, JADUtility::AccessMode, PSGame::SceneInfo&,
	                        PSSystem::DirectorMgrBase*); // _1C
	virtual void curSceneIsBigBossFloor();               // _20
	virtual void newGameScene(u8, PSGame::SceneInfo*);   // _24

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
	virtual void getCamDistVol(u8);             // _28
	virtual void getSeSceneGate(ObjBase*, u32); // _38 (weak)

	void getGlobalStream();
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

	virtual ~Scene_Objects();                             // _0C
	virtual void exec();                                  // _18
	virtual void startMainSeq();                          // _1C
	virtual void getCamDistVol(unsigned char);            // _28
	virtual void getSeSceneGate(ObjBase*, unsigned long); // _38
	virtual void onStartMainSeq();                        // _54

	void adaptObjMgr();
	void detachObjMgr();

	// _00      = VTBL
	// _00-_28  = SceneBase
	PSGame::CameraMgr* m_cameraMgr; // _28
	ObjMgr* m_objMgr;               // _2C
	u8 _30;                         // _30
	int _34;                        // _34
};

/**
 * @size{0x38}
 */
struct Scene_Zukan : public Scene_Objects {
	virtual ~Scene_Zukan();                     // _0C (weak)
	virtual void getCamDistVol(u8);             // _28
	virtual void getSeSceneGate(ObjBase*, u32); // _38

	// _00      = VTBL
	// _00-_38  = Scene_Objects
};

/**
 * @size{0x5C}
 */
struct Scene_Game : public Scene_Objects {
	virtual void init();                      // _08
	virtual ~Scene_Game();                    // _0C
	virtual void exec();                      // _18
	virtual void startMainSeq();              // _1C
	virtual void stopMainSeq(u32);            // _20
	virtual void stopAllSound(u32);           // _24
	virtual void getEnvSe();                  // _2C
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
	virtual void akubiOK();                   // _68
	virtual bool isPollutUp();                // _6C (weak)
	virtual void getPollutUpTimer() const;    // _70 (weak)

	void attachBossFaderMgr();
	void adaptEnvSe(PSSystem::EnvSeMgr*);

	// _00      = VTBL
	// _00-_38  = Scene_Objects
	JSUList<EnemyBoss> m_enemyBossList; // _38
	PSSystem::EnvSeMgr* m_envSeMgr;     // _48
	u32 _4C;                            // _4C, unknown
	int _50;                            // _50
	BossBgmFader::Mgr* m_bossFaderMgr;  // _54
	PikiHummingMgr* m_hummingMgr;       // _58
	PersEnvManager* m_persEnvMgr;       // _5C
};

/**
 * @size{0x60}
 */
struct Scene_Ground : public Scene_Game {
	struct Time {
		u32 _00; // _00, unknown
	};

	Scene_Ground(u8, PSGame::SceneInfo*);

	virtual ~Scene_Ground();               // _0C (weak)
	virtual void exec();                   // _18
	virtual bool isPollutUp();             // _6C (weak)
	virtual void getPollutUpTimer() const; // _70 (weak)

	void setPollutUp();
	void fadeMainBgm(float, u32, Time);
	void jumpMainBgm(u8);
	void changeEnvSE_Noon();

	// _00      = VTBL
	// _00-_5C  = Scene_Game
	int m_pollutUpTimer; // _5C
};

/**
 * @size{0x68}
 */
struct Scene_Cave : public Scene_Game {
	Scene_Cave(u8, PSGame::SceneInfo*);

	virtual void init();                      // _08
	virtual ~Scene_Cave();                    // _0C (weak)
	virtual void exec();                      // _18
	virtual void startMainSeq();              // _1C
	virtual void getSceneFx();                // _30
	virtual bool isCave();                    // _58 (weak)
	virtual void bossAppear(EnemyBoss*, u16); // _5C
	virtual void bossKilled(EnemyBoss*);      // _60
	virtual bool isBossFloor();               // _64
	virtual void akubiOK();                   // _68
	virtual bool isPollutUp();                // _6C (weak)
	virtual void getPollutUpTimer() const;    // _70 (weak)

	void stopPollutionSe();
	void startPollutUpSe();

	// _00      = VTBL
	// _00-_5C  = Scene_Game
	u8 _5C[0x4];         // _5C, unknown
	float m_sceneFx;     // _60
	int m_pollutUpTimer; // _64
};

/**
 * @size{0x68}
 */
struct Scene_Challenge : public Scene_Cave {
	Scene_Challenge(u8, PSGame::SceneInfo*);

	virtual void init();         // _08
	virtual ~Scene_Challenge();  // _0C (weak)
	virtual void startMainSeq(); // _1C
	virtual void akubiOK();      // _68

	// _00      = VTBL
	// _00-_68  = Scene_Cave
};

//////////// SCENES WITHOUT OBJECTS

/**
 * @size{0x28}
 */
struct Scene_NoObjects : public SceneBase {
	virtual ~Scene_NoObjects();     // _0C (weak)
	virtual void getCamDistVol(u8); // _28

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
	WorldMapRocket* m_rocket; // _28
};

//////////// DEMO SCENE

/**
 * @size{0x2C}
 */
struct Scene_Demo : public SceneBase {
	Scene_Demo(u8, PSGame::SceneInfo*);

	virtual ~Scene_Demo();                      // _0C (weak)
	virtual void getCamDistVol(u8);             // _28
	virtual bool isDemoScene();                 // _34 (weak)
	virtual void getSeSceneGate(ObjBase*, u32); // _38

	// _00      = VTBL
	// _00-_28  = SceneBase
	u8 _28;      // _28, unknown
	u8 _29[0x3]; // _29, unknown - possibly padding?
};

} // namespace PSM

#endif
