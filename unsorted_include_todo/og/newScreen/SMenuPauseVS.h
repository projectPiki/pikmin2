#ifndef _OG_NEWSCREEN_SMENUPAUSEVS_H
#define _OG_NEWSCREEN_SMENUPAUSEVS_H

/*
    __vt__Q32og9newScreen12SMenuPauseVS:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32og9newScreen12SMenuPauseVSFv
    .4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
    .4byte getMemberID__Q32og9newScreen12SMenuPauseVSFv
    .4byte isUseBackupSceneInfo__Q32og9newScreen12SMenuPauseVSFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q32og9newScreen12SMenuPauseVSCFv
    .4byte doCreateObj__Q32og9newScreen12SMenuPauseVSFP10JKRArchive
    .4byte
   doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
    .4byte setPort__Q26Screen9SceneBaseFR8Graphics
    .4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
    .4byte
   doConfirmSetScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
    .4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
    .4byte setDefaultDispMember__Q26Screen9SceneBaseFv
    .4byte
   doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
    .4byte doGetFinishState__Q32og9newScreen12SMenuPauseVSFv
    .4byte 0
*/

namespace Screen {
struct SceneBase {
	virtual void getSceneType();                            // _00
	virtual void getOwnerID();                              // _04
	virtual void getMemberID();                             // _08
	virtual void isUseBackupSceneInfo();                    // _0C
	virtual void isDrawInDemo() const;                      // _10
	virtual void getResName() const;                        // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	virtual void setPort(Graphics&);                        // _20
	virtual void doUpdateActive();                          // _24
	virtual void doConfirmSetScene(Screen::SetSceneArg&);   // _28
	virtual void doConfirmStartScene(StartSceneArg*);       // _2C
	virtual void doConfirmEndScene(EndSceneArg*&);          // _30
	virtual void doStart(StartSceneArg*);                   // _34
	virtual void doEnd(EndSceneArg*);                       // _38
	virtual void setDefaultDispMember();                    // _3C

	// _00 VTBL
};
} // namespace Screen

namespace og {
namespace newScreen {
	struct SMenuPauseVS : public SceneBase {
		virtual void getSceneType();                            // _00
		virtual void getOwnerID();                              // _04
		virtual void getMemberID();                             // _08
		virtual void isUseBackupSceneInfo();                    // _0C
		virtual void isDrawInDemo() const;                      // _10
		virtual void getResName() const;                        // _14
		virtual void doCreateObj(JKRArchive*);                  // _18
		virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
		virtual void setPort(Graphics&);                        // _20
		virtual void doUpdateActive();                          // _24
		virtual void doConfirmSetScene(Screen::SetSceneArg&);   // _28
		virtual void doConfirmStartScene(StartSceneArg*);       // _2C
		virtual void doConfirmEndScene(EndSceneArg*&);          // _30
		virtual void doStart(StartSceneArg*);                   // _34
		virtual void doEnd(EndSceneArg*);                       // _38
		virtual void setDefaultDispMember();                    // _3C
		virtual void doSetBackupScene(Screen::SetSceneArg&);    // _40
		virtual void doGetFinishState();                        // _44
		virtual void _48() = 0;                                 // _48

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
