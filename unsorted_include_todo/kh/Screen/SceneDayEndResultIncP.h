#ifndef _KH_SCREEN_SCENEDAYENDRESULTINCP_H
#define _KH_SCREEN_SCENEDAYENDRESULTINCP_H

/*
    __vt__Q32kh6Screen21SceneDayEndResultIncP:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32kh6Screen21SceneDayEndResultIncPFv
    .4byte getOwnerID__Q32kh6Screen21SceneDayEndResultIncPFv
    .4byte getMemberID__Q32kh6Screen21SceneDayEndResultIncPFv
    .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q32kh6Screen21SceneDayEndResultIncPCFv
    .4byte doCreateObj__Q32kh6Screen21SceneDayEndResultIncPFP10JKRArchive
    .4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
    .4byte setPort__Q26Screen9SceneBaseFR8Graphics
    .4byte doUpdateActive__Q26Screen9SceneBaseFv
    .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
    .4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
    .4byte setDefaultDispMember__Q26Screen9SceneBaseFv
    .4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
    .4byte doGetFinishState__Q26Screen9SceneBaseFv
*/

namespace Screen {
struct SceneBase {
	virtual void getSceneType();                            // _08 (weak)
	virtual void getOwnerID();                              // _0C (weak)
	virtual void getMemberID();                             // _10 (weak)
	virtual void isUseBackupSceneInfo();                    // _14 (weak)
	virtual void isDrawInDemo() const;                      // _18 (weak)
	virtual void getResName() const;                        // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24 (weak)
	virtual void setPort(Graphics&);                        // _28 (weak)
	virtual void doUpdateActive();                          // _2C
	virtual void doConfirmSetScene(SetSceneArg&);           // _30 (weak)
	virtual void doConfirmStartScene(StartSceneArg*);       // _34 (weak)
	virtual void doConfirmEndScene(EndSceneArg*&);          // _38 (weak)
	virtual void doStart(StartSceneArg*);                   // _3C
	virtual void doEnd(EndSceneArg*);                       // _40
	virtual void setDefaultDispMember();                    // _44 (weak)
	virtual void doSetBackupScene(SetSceneArg&);            // _48 (weak)
	virtual void doGetFinishState();                        // _4C (weak)
};
} // namespace Screen

namespace kh {
namespace Screen {
struct SceneDayEndResultIncP : public SceneBase {
	virtual void getSceneType();           // _08 (weak)
	virtual void getOwnerID();             // _0C (weak)
	virtual void getMemberID();            // _10 (weak)
	virtual void getResName() const;       // _1C (weak)
	virtual void doCreateObj(JKRArchive*); // _20 (weak)
};
} // namespace Screen
} // namespace kh

#endif
