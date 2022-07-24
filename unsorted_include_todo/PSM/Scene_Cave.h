#ifndef _PSM_SCENE_CAVE_H
#define _PSM_SCENE_CAVE_H

/*
    __vt__Q23PSM10Scene_Cave:
    .4byte 0
    .4byte 0
    .4byte init__Q23PSM10Scene_CaveFv
    .4byte __dt__Q23PSM10Scene_CaveFv
    .4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
    .4byte scene1stLoadSync__Q28PSSystem5SceneFv
    .4byte exec__Q23PSM10Scene_CaveFv
    .4byte startMainSeq__Q23PSM10Scene_CaveFv
    .4byte stopMainSeq__Q23PSM10Scene_GameFUl
    .4byte stopAllSound__Q23PSM10Scene_GameFUl
    .4byte getCamDistVol__Q23PSM13Scene_ObjectsFUc
    .4byte getEnvSe__Q23PSM10Scene_GameFv
    .4byte getSceneFx__Q23PSM10Scene_CaveFv
    .4byte isDemoScene__Q23PSM10Scene_GameFv
    .4byte getSeSceneGate__Q23PSM13Scene_ObjectsFPQ23PSM7ObjBaseUl
    .4byte becomeSceneCamera__Q23PSM9SceneBaseFv
    .4byte isGameScene__Q23PSM10Scene_GameFv
    .4byte pauseOn_2D__Q23PSM10Scene_GameFUcUc
    .4byte pauseOff_2D__Q23PSM10Scene_GameFv
    .4byte pauseOn_Demo__Q23PSM10Scene_GameFv
    .4byte pauseOff_Demo__Q23PSM10Scene_GameFv
    .4byte onStartMainSeq__Q23PSM13Scene_ObjectsFv
    .4byte isCave__Q23PSM10Scene_CaveFv
    .4byte bossAppear__Q23PSM10Scene_CaveFPQ23PSM9EnemyBossUs
    .4byte bossKilled__Q23PSM10Scene_CaveFPQ23PSM9EnemyBoss
    .4byte isBossFloor__Q23PSM10Scene_CaveFv
    .4byte akubiOK__Q23PSM10Scene_CaveFv
    .4byte isPollutUp__Q23PSM10Scene_CaveFv
    .4byte getPollutUpTimer__Q23PSM10Scene_CaveCFv
*/

namespace PSSystem {
struct Scene {
	virtual void init();                 // _08
	virtual ~Scene();                    // _0C (inline)
	virtual void scene1st(TaskChecker*); // _10
	virtual void scene1stLoadSync();     // _14
};
} // namespace PSSystem

namespace PSM {
struct Scene_Game {
	virtual void init();                                   // _08
	virtual ~Scene_Game();                                 // _0C (inline)
	virtual void _10() = 0;                                // _10
	virtual void _14() = 0;                                // _14
	virtual void exec();                                   // _18
	virtual void startMainSeq();                           // _1C
	virtual void stopMainSeq(unsigned long);               // _20
	virtual void stopAllSound(unsigned long);              // _24
	virtual void _28() = 0;                                // _28
	virtual void getEnvSe();                               // _2C
	virtual void getSceneFx();                             // _30
	virtual void isDemoScene();                            // _34 (inline)
	virtual void _38() = 0;                                // _38
	virtual void _3C() = 0;                                // _3C
	virtual void isGameScene();                            // _40 (inline)
	virtual void pauseOn_2D(unsigned char, unsigned char); // _44
	virtual void pauseOff_2D();                            // _48
	virtual void pauseOn_Demo();                           // _4C
	virtual void pauseOff_Demo();                          // _50
};
} // namespace PSM

namespace PSM {
struct Scene_Objects {
	virtual void init();                                  // _08
	virtual ~Scene_Objects();                             // _0C (inline)
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void exec();                                  // _18
	virtual void startMainSeq();                          // _1C
	virtual void _20() = 0;                               // _20
	virtual void _24() = 0;                               // _24
	virtual void getCamDistVol(unsigned char);            // _28
	virtual void _2C() = 0;                               // _2C
	virtual void getSceneFx();                            // _30
	virtual void _34() = 0;                               // _34
	virtual void getSeSceneGate(ObjBase*, unsigned long); // _38
	virtual void _3C() = 0;                               // _3C
	virtual void _40() = 0;                               // _40
	virtual void _44() = 0;                               // _44
	virtual void _48() = 0;                               // _48
	virtual void _4C() = 0;                               // _4C
	virtual void _50() = 0;                               // _50
	virtual void onStartMainSeq();                        // _54
};
} // namespace PSM

namespace PSM {
struct SceneBase {
	virtual void init();              // _08
	virtual ~SceneBase();             // _0C (inline)
	virtual void _10() = 0;           // _10
	virtual void _14() = 0;           // _14
	virtual void exec();              // _18
	virtual void startMainSeq();      // _1C
	virtual void _20() = 0;           // _20
	virtual void _24() = 0;           // _24
	virtual void _28() = 0;           // _28
	virtual void _2C() = 0;           // _2C
	virtual void getSceneFx();        // _30
	virtual void _34() = 0;           // _34
	virtual void _38() = 0;           // _38
	virtual void becomeSceneCamera(); // _3C
};
} // namespace PSM

namespace PSM {
struct Scene_Cave : public Scene, public Scene_Game, public Scene_Objects, public SceneBase {
	virtual void init();                                 // _08
	virtual ~Scene_Cave();                               // _0C (inline)
	virtual void exec();                                 // _18
	virtual void startMainSeq();                         // _1C
	virtual void getSceneFx();                           // _30
	virtual void isCave();                               // _58 (inline)
	virtual void bossAppear(EnemyBoss*, unsigned short); // _5C
	virtual void bossKilled(EnemyBoss*);                 // _60
	virtual void isBossFloor();                          // _64
	virtual void akubiOK();                              // _68
	virtual void isPollutUp();                           // _6C (inline)
	virtual void getPollutUpTimer() const;               // _70 (inline)

	Scene_Cave();
	void stopPollutionSe();
	void startPollutUpSe();
};
} // namespace PSM

#endif
