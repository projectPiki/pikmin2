#ifndef _MORIMURA_TPRESIDENTDOWNSCENE_H
#define _MORIMURA_TPRESIDENTDOWNSCENE_H

/*
    __vt__Q28Morimura19TPresidentDownScene:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q28Morimura19TPresidentDownSceneFv
    .4byte getOwnerID__Q28Morimura19TPresidentDownSceneFv
    .4byte getMemberID__Q28Morimura19TPresidentDownSceneFv
    .4byte isUseBackupSceneInfo__Q28Morimura18TGameOverSceneBaseFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q28Morimura19TPresidentDownSceneCFv
    .4byte doCreateObj__Q28Morimura19TPresidentDownSceneFP10JKRArchive
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
	virtual void _08() = 0;              // _08
	virtual void _0C() = 0;              // _0C
	virtual void _10() = 0;              // _10
	virtual void isUseBackupSceneInfo(); // _14

	// _00 VTBL
};
} // namespace Morimura

namespace Screen {
struct SceneBase {
	virtual void _08() = 0;                                 // _08
	virtual void _0C() = 0;                                 // _0C
	virtual void _10() = 0;                                 // _10
	virtual void _14() = 0;                                 // _14
	virtual void isDrawInDemo() const;                      // _18
	virtual void _1C() = 0;                                 // _1C
	virtual void _20() = 0;                                 // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void setPort(Graphics&);                        // _28
	virtual void doUpdateActive();                          // _2C
	virtual void doConfirmSetScene(SetSceneArg&);           // _30
	virtual void doConfirmStartScene(StartSceneArg*);       // _34
	virtual void doConfirmEndScene(EndSceneArg*&);          // _38
	virtual void doStart(StartSceneArg*);                   // _3C
	virtual void doEnd(EndSceneArg*);                       // _40
	virtual void setDefaultDispMember();                    // _44
	virtual void doSetBackupScene(SetSceneArg&);            // _48
	virtual void doGetFinishState();                        // _4C

	// _00 VTBL
};
} // namespace Screen

namespace Morimura {
struct TPresidentDownScene : public TGameOverSceneBase, public SceneBase {
	virtual void getSceneType();           // _08
	virtual void getOwnerID();             // _0C
	virtual void getMemberID();            // _10
	virtual void getResName() const;       // _1C
	virtual void doCreateObj(JKRArchive*); // _20

	// _00 VTBL
};
} // namespace Morimura

#endif
