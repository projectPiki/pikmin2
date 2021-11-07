#ifndef _PSM_SCENE_CAVE_H
#define _PSM_SCENE_CAVE_H

namespace PSSystem {
struct Scene {
	virtual void _00() = 0;              // _00
	virtual void _04() = 0;              // _04
	virtual void scene1st(TaskChecker*); // _08
	virtual void scene1stLoadSync();     // _0C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct Scene_Game {
	virtual void _00() = 0;                                // _00
	virtual void _04() = 0;                                // _04
	virtual void _08() = 0;                                // _08
	virtual void _0C() = 0;                                // _0C
	virtual void _10() = 0;                                // _10
	virtual void _14() = 0;                                // _14
	virtual void stopMainSeq(unsigned long);               // _18
	virtual void stopAllSound(unsigned long);              // _1C
	virtual void _20() = 0;                                // _20
	virtual void getEnvSe();                               // _24
	virtual void _28() = 0;                                // _28
	virtual void isDemoScene();                            // _2C
	virtual void _30() = 0;                                // _30
	virtual void _34() = 0;                                // _34
	virtual void isGameScene();                            // _38
	virtual void pauseOn_2D(unsigned char, unsigned char); // _3C
	virtual void pauseOff_2D();                            // _40
	virtual void pauseOn_Demo();                           // _44
	virtual void pauseOff_Demo();                          // _48

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct Scene_Objects {
	virtual void _00() = 0;                               // _00
	virtual void _04() = 0;                               // _04
	virtual void _08() = 0;                               // _08
	virtual void _0C() = 0;                               // _0C
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void _18() = 0;                               // _18
	virtual void _1C() = 0;                               // _1C
	virtual void getCamDistVol(unsigned char);            // _20
	virtual void _24() = 0;                               // _24
	virtual void _28() = 0;                               // _28
	virtual void _2C() = 0;                               // _2C
	virtual void getSeSceneGate(ObjBase*, unsigned long); // _30
	virtual void _34() = 0;                               // _34
	virtual void _38() = 0;                               // _38
	virtual void _3C() = 0;                               // _3C
	virtual void _40() = 0;                               // _40
	virtual void _44() = 0;                               // _44
	virtual void _48() = 0;                               // _48
	virtual void onStartMainSeq();                        // _4C

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct SceneBase {
	virtual void _00() = 0;           // _00
	virtual void _04() = 0;           // _04
	virtual void _08() = 0;           // _08
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void _14() = 0;           // _14
	virtual void _18() = 0;           // _18
	virtual void _1C() = 0;           // _1C
	virtual void _20() = 0;           // _20
	virtual void _24() = 0;           // _24
	virtual void _28() = 0;           // _28
	virtual void _2C() = 0;           // _2C
	virtual void _30() = 0;           // _30
	virtual void becomeSceneCamera(); // _34

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct Scene_Cave : public Scene,
                    public Scene_Game,
                    public Scene_Objects,
                    public SceneBase {
	virtual void init();                                   // _00
	virtual ~Scene_Cave();                                 // _04
	virtual void scene1st(TaskChecker*);                   // _08
	virtual void scene1stLoadSync();                       // _0C
	virtual void exec();                                   // _10
	virtual void startMainSeq();                           // _14
	virtual void stopMainSeq(unsigned long);               // _18
	virtual void stopAllSound(unsigned long);              // _1C
	virtual void getCamDistVol(unsigned char);             // _20
	virtual void getEnvSe();                               // _24
	virtual void getSceneFx();                             // _28
	virtual void isDemoScene();                            // _2C
	virtual void getSeSceneGate(ObjBase*, unsigned long);  // _30
	virtual void becomeSceneCamera();                      // _34
	virtual void isGameScene();                            // _38
	virtual void pauseOn_2D(unsigned char, unsigned char); // _3C
	virtual void pauseOff_2D();                            // _40
	virtual void pauseOn_Demo();                           // _44
	virtual void pauseOff_Demo();                          // _48
	virtual void onStartMainSeq();                         // _4C
	virtual void isCave();                                 // _50
	virtual void bossAppear(EnemyBoss*, unsigned short);   // _54
	virtual void bossKilled(EnemyBoss*);                   // _58
	virtual void isBossFloor();                            // _5C
	virtual void akubiOK();                                // _60
	virtual void isPollutUp();                             // _64
	virtual void getPollutUpTimer() const;                 // _68

	// _00 VTBL
};
} // namespace PSM

#endif
