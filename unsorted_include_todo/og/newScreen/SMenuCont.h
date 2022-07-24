#ifndef _OG_NEWSCREEN_SMENUCONT_H
#define _OG_NEWSCREEN_SMENUCONT_H

/*
    __vt__Q32og9newScreen9SMenuCont:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32og9newScreen9SMenuContFv
    .4byte getOwnerID__Q32og9newScreen9SMenuContFv
    .4byte getMemberID__Q32og9newScreen9SMenuContFv
    .4byte isUseBackupSceneInfo__Q32og9newScreen9SMenuContFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q32og9newScreen9SMenuContCFv
    .4byte doCreateObj__Q32og9newScreen9SMenuContFP10JKRArchive
    .4byte doUserCallBackFunc__Q32og9newScreen9SMenuContFPQ28Resource10MgrCommand
    .4byte setPort__Q26Screen9SceneBaseFR8Graphics
    .4byte doUpdateActive__Q32og9newScreen9SMenuContFv
    .4byte doConfirmSetScene__Q32og9newScreen9SMenuContFRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
    .4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
    .4byte setDefaultDispMember__Q26Screen9SceneBaseFv
    .4byte doSetBackupScene__Q32og9newScreen9SMenuContFRQ26Screen11SetSceneArg
    .4byte doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv
*/

namespace Screen {
struct SceneBase {
	virtual void _08() = 0;                           // _08
	virtual void _0C() = 0;                           // _0C
	virtual void _10() = 0;                           // _10
	virtual void _14() = 0;                           // _14
	virtual void isDrawInDemo() const;                // _18
	virtual void _1C() = 0;                           // _1C
	virtual void _20() = 0;                           // _20
	virtual void _24() = 0;                           // _24
	virtual void setPort(Graphics&);                  // _28
	virtual void _2C() = 0;                           // _2C
	virtual void _30() = 0;                           // _30
	virtual void doConfirmStartScene(StartSceneArg*); // _34
	virtual void doConfirmEndScene(EndSceneArg*&);    // _38
	virtual void doStart(StartSceneArg*);             // _3C
	virtual void doEnd(EndSceneArg*);                 // _40
	virtual void setDefaultDispMember();              // _44

	// _00 VTBL
};
} // namespace Screen

namespace og {
namespace newScreen {
struct SceneSMenuBase {
	virtual void _08() = 0;          // _08
	virtual void _0C() = 0;          // _0C
	virtual void _10() = 0;          // _10
	virtual void _14() = 0;          // _14
	virtual void _18() = 0;          // _18
	virtual void _1C() = 0;          // _1C
	virtual void _20() = 0;          // _20
	virtual void _24() = 0;          // _24
	virtual void _28() = 0;          // _28
	virtual void _2C() = 0;          // _2C
	virtual void _30() = 0;          // _30
	virtual void _34() = 0;          // _34
	virtual void _38() = 0;          // _38
	virtual void _3C() = 0;          // _3C
	virtual void _40() = 0;          // _40
	virtual void _44() = 0;          // _44
	virtual void _48() = 0;          // _48
	virtual void doGetFinishState(); // _4C

	// _00 VTBL
};
} // namespace newScreen
} // namespace og

namespace og {
namespace newScreen {
struct SMenuCont : public SceneBase, public SceneSMenuBase {
	virtual void getSceneType();                            // _08
	virtual void getOwnerID();                              // _0C
	virtual void getMemberID();                             // _10
	virtual void isUseBackupSceneInfo();                    // _14
	virtual void getResName() const;                        // _1C
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual void doConfirmSetScene(Screen::SetSceneArg&);   // _30
	virtual void doSetBackupScene(Screen::SetSceneArg&);    // _48

	// _00 VTBL
};
} // namespace newScreen
} // namespace og

#endif
