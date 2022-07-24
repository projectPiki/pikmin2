#ifndef _MORIMURA_TLUJIDOWNSCENE_H
#define _MORIMURA_TLUJIDOWNSCENE_H

/*
    __vt__Q28Morimura14TLujiDownScene:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q28Morimura14TLujiDownSceneFv
    .4byte getOwnerID__Q28Morimura14TLujiDownSceneFv
    .4byte getMemberID__Q28Morimura14TLujiDownSceneFv
    .4byte isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q28Morimura14TLujiDownSceneCFv
    .4byte doCreateObj__Q28Morimura14TLujiDownSceneFP10JKRArchive
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

namespace Morimura {
struct TGameOverSceneBase {
	virtual void getSceneType();         // _08 (inline)
	virtual void getOwnerID();           // _0C (inline)
	virtual void getMemberID();          // _10 (inline)
	virtual void isUseBackupSceneInfo(); // _14 (inline)
};
} // namespace Morimura

namespace Screen {
struct SceneBase {
	virtual void getSceneType();                            // _08 (inline)
	virtual void getOwnerID();                              // _0C (inline)
	virtual void getMemberID();                             // _10 (inline)
	virtual void _14() = 0;                                 // _14
	virtual void isDrawInDemo() const;                      // _18 (inline)
	virtual void getResName() const;                        // _1C (inline)
	virtual void doCreateObj(JKRArchive*);                  // _20 (inline)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24 (inline)
	virtual void setPort(Graphics&);                        // _28 (inline)
	virtual void doUpdateActive();                          // _2C
	virtual void doConfirmSetScene(SetSceneArg&);           // _30 (inline)
	virtual void doConfirmStartScene(StartSceneArg*);       // _34 (inline)
	virtual void doConfirmEndScene(EndSceneArg*&);          // _38 (inline)
	virtual void doStart(StartSceneArg*);                   // _3C
	virtual void doEnd(EndSceneArg*);                       // _40
	virtual void setDefaultDispMember();                    // _44 (inline)
	virtual void doSetBackupScene(SetSceneArg&);            // _48 (inline)
	virtual void doGetFinishState();                        // _4C (inline)
};
} // namespace Screen

namespace Morimura {
struct TLujiDownScene : public TGameOverSceneBase, public SceneBase {
	virtual void getSceneType();           // _08 (inline)
	virtual void getOwnerID();             // _0C (inline)
	virtual void getMemberID();            // _10 (inline)
	virtual void getResName() const;       // _1C (inline)
	virtual void doCreateObj(JKRArchive*); // _20 (inline)
};
} // namespace Morimura

#endif
