#ifndef _KH_SCREEN_SCENEREADYGO_H
#define _KH_SCREEN_SCENEREADYGO_H

/*
    __vt__Q32kh6Screen12SceneReadyGo:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32kh6Screen12SceneReadyGoFv
    .4byte getOwnerID__Q32kh6Screen12SceneReadyGoFv
    .4byte getMemberID__Q32kh6Screen12SceneReadyGoFv
    .4byte isUseBackupSceneInfo__Q32kh6Screen12SceneReadyGoFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q32kh6Screen12SceneReadyGoCFv
    .4byte doCreateObj__Q32kh6Screen12SceneReadyGoFP10JKRArchive
    .4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
    .4byte setPort__Q26Screen9SceneBaseFR8Graphics
    .4byte doUpdateActive__Q26Screen9SceneBaseFv
    .4byte doConfirmSetScene__Q32kh6Screen12SceneReadyGoFRQ26Screen11SetSceneArg
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
	virtual void getSceneType();                            // _08 (inline)
	virtual void getOwnerID();                              // _0C (inline)
	virtual void getMemberID();                             // _10 (inline)
	virtual void isUseBackupSceneInfo();                    // _14 (inline)
	virtual void isDrawInDemo() const;                      // _18 (inline)
	virtual void getResName() const;                        // _1C (inline)
	virtual void doCreateObj(JKRArchive*);                  // _20 (inline)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24 (inline)
	virtual void setPort(Graphics&);                        // _28 (inline)
	virtual void doUpdateActive();                          // _2C
	virtual void doConfirmSetScene(SetSceneArg&);           // _30
	virtual void doConfirmStartScene(StartSceneArg*);       // _34 (inline)
	virtual void doConfirmEndScene(EndSceneArg*&);          // _38 (inline)
	virtual void doStart(StartSceneArg*);                   // _3C
	virtual void doEnd(EndSceneArg*);                       // _40
	virtual void setDefaultDispMember();                    // _44 (inline)
	virtual void doSetBackupScene(SetSceneArg&);            // _48 (inline)
	virtual void doGetFinishState();                        // _4C (inline)
};
} // namespace Screen

namespace kh {
namespace Screen {
struct SceneReadyGo : public SceneBase {
	virtual void getSceneType();                  // _08 (inline)
	virtual void getOwnerID();                    // _0C (inline)
	virtual void getMemberID();                   // _10 (inline)
	virtual void isUseBackupSceneInfo();          // _14 (inline)
	virtual void getResName() const;              // _1C (inline)
	virtual void doCreateObj(JKRArchive*);        // _20 (inline)
	virtual void doConfirmSetScene(SetSceneArg&); // _30
};
} // namespace Screen
} // namespace kh

#endif
