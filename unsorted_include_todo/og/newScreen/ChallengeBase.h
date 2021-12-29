#ifndef _OG_NEWSCREEN_CHALLENGEBASE_H
#define _OG_NEWSCREEN_CHALLENGEBASE_H

/*
    __vt__Q32og9newScreen13ChallengeBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte 0
    .4byte 0
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
    .4byte 0
    .4byte 0
*/

namespace Screen {
struct SceneBase {
	virtual void _00() = 0;                                 // _00
	virtual void _04() = 0;                                 // _04
	virtual void _08() = 0;                                 // _08
	virtual void isUseBackupSceneInfo();                    // _0C
	virtual void isDrawInDemo() const;                      // _10
	virtual void _14() = 0;                                 // _14
	virtual void _18() = 0;                                 // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	virtual void setPort(Graphics&);                        // _20
	virtual void doUpdateActive();                          // _24
	virtual void doConfirmSetScene(SetSceneArg&);           // _28
	virtual void doConfirmStartScene(StartSceneArg*);       // _2C
	virtual void doConfirmEndScene(EndSceneArg*&);          // _30
	virtual void doStart(StartSceneArg*);                   // _34
	virtual void doEnd(EndSceneArg*);                       // _38
	virtual void setDefaultDispMember();                    // _3C
	virtual void doSetBackupScene(SetSceneArg&);            // _40
	virtual void doGetFinishState();                        // _44

	// _00 VTBL
};
} // namespace Screen

namespace og {
namespace newScreen {
	struct ChallengeBase : public SceneBase {
		virtual void _00() = 0;                                 // _00
		virtual void _04() = 0;                                 // _04
		virtual void _08() = 0;                                 // _08
		virtual void isUseBackupSceneInfo();                    // _0C
		virtual void isDrawInDemo() const;                      // _10
		virtual void _14() = 0;                                 // _14
		virtual void _18() = 0;                                 // _18
		virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
		virtual void setPort(Graphics&);                        // _20
		virtual void doUpdateActive();                          // _24
		virtual void doConfirmSetScene(SetSceneArg&);           // _28
		virtual void doConfirmStartScene(StartSceneArg*);       // _2C
		virtual void doConfirmEndScene(EndSceneArg*&);          // _30
		virtual void doStart(StartSceneArg*);                   // _34
		virtual void doEnd(EndSceneArg*);                       // _38
		virtual void setDefaultDispMember();                    // _3C
		virtual void doSetBackupScene(SetSceneArg&);            // _40
		virtual void doGetFinishState();                        // _44
		virtual void _48() = 0;                                 // _48
		virtual void _4C() = 0;                                 // _4C

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
