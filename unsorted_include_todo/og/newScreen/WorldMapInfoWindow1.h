#ifndef _OG_NEWSCREEN_WORLDMAPINFOWINDOW1_H
#define _OG_NEWSCREEN_WORLDMAPINFOWINDOW1_H

/*
    __vt__Q32og9newScreen19WorldMapInfoWindow1:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32og9newScreen19WorldMapInfoWindow1Fv
    .4byte getOwnerID__Q32og9newScreen12SMenuPauseVSFv
    .4byte getMemberID__Q32og9newScreen19WorldMapInfoWindow1Fv
    .4byte isUseBackupSceneInfo__Q32og9newScreen19WorldMapInfoWindow1Fv
    .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
    .4byte getResName__Q32og9newScreen19WorldMapInfoWindow1CFv
    .4byte doCreateObj__Q32og9newScreen19WorldMapInfoWindow1FP10JKRArchive
    .4byte
   doUserCallBackFunc__Q32og9newScreen12SMenuPauseVSFPQ28Resource10MgrCommand
    .4byte setPort__Q26Screen9SceneBaseFR8Graphics
    .4byte doUpdateActive__Q32og9newScreen12SMenuPauseVSFv
    .4byte
   doConfirmSetScene__Q32og9newScreen19WorldMapInfoWindow1FRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
    .4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
    .4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
    .4byte setDefaultDispMember__Q26Screen9SceneBaseFv
    .4byte
   doSetBackupScene__Q32og9newScreen12SMenuPauseVSFRQ26Screen11SetSceneArg
    .4byte doGetFinishState__Q32og9newScreen19WorldMapInfoWindow1Fv
    .4byte 0
*/

namespace og {
namespace newScreen {
	struct SMenuPauseVS {
		virtual void _00() = 0;                                 // _00
		virtual void getOwnerID();                              // _04
		virtual void _08() = 0;                                 // _08
		virtual void _0C() = 0;                                 // _0C
		virtual void _10() = 0;                                 // _10
		virtual void _14() = 0;                                 // _14
		virtual void _18() = 0;                                 // _18
		virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
		virtual void _20() = 0;                                 // _20
		virtual void doUpdateActive();                          // _24
		virtual void _28() = 0;                                 // _28
		virtual void _2C() = 0;                                 // _2C
		virtual void _30() = 0;                                 // _30
		virtual void _34() = 0;                                 // _34
		virtual void _38() = 0;                                 // _38
		virtual void _3C() = 0;                                 // _3C
		virtual void doSetBackupScene(Screen::SetSceneArg&);    // _40

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

namespace Screen {
struct SceneBase {
	virtual void _00() = 0;                           // _00
	virtual void _04() = 0;                           // _04
	virtual void _08() = 0;                           // _08
	virtual void _0C() = 0;                           // _0C
	virtual void isDrawInDemo() const;                // _10
	virtual void _14() = 0;                           // _14
	virtual void _18() = 0;                           // _18
	virtual void _1C() = 0;                           // _1C
	virtual void setPort(Graphics&);                  // _20
	virtual void _24() = 0;                           // _24
	virtual void _28() = 0;                           // _28
	virtual void doConfirmStartScene(StartSceneArg*); // _2C
	virtual void doConfirmEndScene(EndSceneArg*&);    // _30
	virtual void doStart(StartSceneArg*);             // _34
	virtual void doEnd(EndSceneArg*);                 // _38
	virtual void setDefaultDispMember();              // _3C

	// _00 VTBL
};
} // namespace Screen

namespace og {
namespace newScreen {
	struct WorldMapInfoWindow1 : public SMenuPauseVS, public SceneBase {
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
