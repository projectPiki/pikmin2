#ifndef _PSM_SCENE_NOOBJECTS_H
#define _PSM_SCENE_NOOBJECTS_H

/*
    __vt__Q23PSM15Scene_NoObjects:
    .4byte 0
    .4byte 0
    .4byte init__Q28PSSystem5SceneFv
    .4byte __dt__Q23PSM15Scene_NoObjectsFv
    .4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
    .4byte scene1stLoadSync__Q28PSSystem5SceneFv
    .4byte exec__Q28PSSystem5SceneFv
    .4byte startMainSeq__Q28PSSystem5SceneFv
    .4byte stopMainSeq__Q28PSSystem5SceneFUl
    .4byte stopAllSound__Q28PSSystem5SceneFUl
    .4byte getCamDistVol__Q23PSM15Scene_NoObjectsFUc
    .4byte getEnvSe__Q23PSM9SceneBaseFv
    .4byte getSceneFx__Q23PSM9SceneBaseFv
    .4byte isDemoScene__Q23PSM9SceneBaseFv
    .4byte getSeSceneGate__Q23PSM9SceneBaseFPQ23PSM7ObjBaseUl
    .4byte becomeSceneCamera__Q23PSM9SceneBaseFv
    .4byte isGameScene__Q23PSM9SceneBaseFv
    .4byte pauseOn_2D__Q23PSM9SceneBaseFUcUc
    .4byte pauseOff_2D__Q23PSM9SceneBaseFv
    .4byte pauseOn_Demo__Q23PSM9SceneBaseFv
    .4byte pauseOff_Demo__Q23PSM9SceneBaseFv
*/

namespace PSSystem {
struct Scene {
	virtual void init();                      // _00
	virtual void _04() = 0;                   // _04
	virtual void scene1st(TaskChecker*);      // _08
	virtual void scene1stLoadSync();          // _0C
	virtual void exec();                      // _10
	virtual void startMainSeq();              // _14
	virtual void stopMainSeq(unsigned long);  // _18
	virtual void stopAllSound(unsigned long); // _1C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct SceneBase {
	virtual void _00() = 0;                                // _00
	virtual void _04() = 0;                                // _04
	virtual void _08() = 0;                                // _08
	virtual void _0C() = 0;                                // _0C
	virtual void _10() = 0;                                // _10
	virtual void _14() = 0;                                // _14
	virtual void _18() = 0;                                // _18
	virtual void _1C() = 0;                                // _1C
	virtual void _20() = 0;                                // _20
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

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct Scene_NoObjects : public Scene, public SceneBase {
	virtual void init();                                   // _00
	virtual ~Scene_NoObjects();                            // _04
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

	// _00 VTBL
};
} // namespace PSM

#endif
