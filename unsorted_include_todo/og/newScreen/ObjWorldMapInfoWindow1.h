#ifndef _OG_NEWSCREEN_OBJWORLDMAPINFOWINDOW1_H
#define _OG_NEWSCREEN_OBJWORLDMAPINFOWINDOW1_H

/*
        __vt__Q32og9newScreen22ObjWorldMapInfoWindow1:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen22ObjWorldMapInfoWindow1Fv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte
   doStart__Q32og9newScreen22ObjWorldMapInfoWindow1FPCQ26Screen13StartSceneArg
        .4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow1FP10JKRArchive
        .4byte doUpdateFadein__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateFadeoutFinish__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte loop__Q32og9newScreen12ObjSMenuBaseFv
        .4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
        .4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
        .4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
        .4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
        .4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow1Fv
*/

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

namespace Screen {
struct ObjBase {
    virtual void _00() = 0;                           // _00
    virtual void _04() = 0;                           // _04
    virtual void _08() = 0;                           // _08
    virtual void _0C() = 0;                           // _0C
    virtual void _10() = 0;                           // _10
    virtual void update();                            // _14
    virtual void draw(Graphics&);                     // _18
    virtual void start(const StartSceneArg*);         // _1C
    virtual void end(const EndSceneArg*);             // _20
    virtual void setOwner(SceneBase*);                // _24
    virtual void getOwner() const;                    // _28
    virtual void create(JKRArchive*);                 // _2C
    virtual void confirmSetScene(SetSceneArg&);       // _30
    virtual void confirmStartScene(StartSceneArg*);   // _34
    virtual void confirmEndScene(EndSceneArg*);       // _38
    virtual void _3C() = 0;                           // _3C
    virtual void _40() = 0;                           // _40
    virtual void _44() = 0;                           // _44
    virtual void _48() = 0;                           // _48
    virtual void _4C() = 0;                           // _4C
    virtual void _50() = 0;                           // _50
    virtual void _54() = 0;                           // _54
    virtual void _58() = 0;                           // _58
    virtual void _5C() = 0;                           // _5C
    virtual void _60() = 0;                           // _60
    virtual void doConfirmSetScene(SetSceneArg&);     // _64
    virtual void doConfirmStartScene(StartSceneArg*); // _68
    virtual void doConfirmEndScene(EndSceneArg*&);    // _6C

    // _00 VTBL
};
} // namespace Screen

namespace og {
namespace newScreen {
    struct ObjSMenuPauseVS {
        virtual void _00() = 0;                         // _00
        virtual void _04() = 0;                         // _04
        virtual void _08() = 0;                         // _08
        virtual void _0C() = 0;                         // _0C
        virtual void _10() = 0;                         // _10
        virtual void _14() = 0;                         // _14
        virtual void _18() = 0;                         // _18
        virtual void _1C() = 0;                         // _1C
        virtual void _20() = 0;                         // _20
        virtual void _24() = 0;                         // _24
        virtual void _28() = 0;                         // _28
        virtual void _2C() = 0;                         // _2C
        virtual void _30() = 0;                         // _30
        virtual void _34() = 0;                         // _34
        virtual void _38() = 0;                         // _38
        virtual void _3C() = 0;                         // _3C
        virtual void doEnd(const Screen::EndSceneArg*); // _40
        virtual void _44() = 0;                         // _44
        virtual void doUpdateFadein();                  // _48
        virtual void doUpdateFadeinFinish();            // _4C
        virtual void doUpdate();                        // _50
        virtual void doUpdateFinish();                  // _54
        virtual void doUpdateFadeout();                 // _58
        virtual void _5C() = 0;                         // _5C
        virtual void doDraw(Graphics&);                 // _60
        virtual void _64() = 0;                         // _64
        virtual void _68() = 0;                         // _68
        virtual void _6C() = 0;                         // _6C
        virtual void in_L();                            // _70
        virtual void in_R();                            // _74
        virtual void wait();                            // _78
        virtual void _7C() = 0;                         // _7C
        virtual void out_R();                           // _80
        virtual void _84() = 0;                         // _84
        virtual void doUpdateCancelAction();            // _88
        virtual void doUpdateRAction();                 // _8C
        virtual void doUpdateLAction();                 // _90

        // _00 VTBL
    };
} // namespace newScreen
} // namespace og

namespace og {
namespace newScreen {
    struct ObjSMenuBase {
        virtual void _00() = 0;       // _00
        virtual void _04() = 0;       // _04
        virtual void _08() = 0;       // _08
        virtual void _0C() = 0;       // _0C
        virtual void _10() = 0;       // _10
        virtual void _14() = 0;       // _14
        virtual void _18() = 0;       // _18
        virtual void _1C() = 0;       // _1C
        virtual void _20() = 0;       // _20
        virtual void _24() = 0;       // _24
        virtual void _28() = 0;       // _28
        virtual void _2C() = 0;       // _2C
        virtual void _30() = 0;       // _30
        virtual void _34() = 0;       // _34
        virtual void _38() = 0;       // _38
        virtual void _3C() = 0;       // _3C
        virtual void _40() = 0;       // _40
        virtual void _44() = 0;       // _44
        virtual void _48() = 0;       // _48
        virtual void _4C() = 0;       // _4C
        virtual void _50() = 0;       // _50
        virtual void _54() = 0;       // _54
        virtual void _58() = 0;       // _58
        virtual void _5C() = 0;       // _5C
        virtual void _60() = 0;       // _60
        virtual void _64() = 0;       // _64
        virtual void _68() = 0;       // _68
        virtual void _6C() = 0;       // _6C
        virtual void _70() = 0;       // _70
        virtual void _74() = 0;       // _74
        virtual void _78() = 0;       // _78
        virtual void _7C() = 0;       // _7C
        virtual void _80() = 0;       // _80
        virtual void loop();          // _84
        virtual void _88() = 0;       // _88
        virtual void _8C() = 0;       // _8C
        virtual void _90() = 0;       // _90
        virtual void updateFadeIn();  // _94
        virtual void updateFadeOut(); // _98

        // _00 VTBL
    };
} // namespace newScreen
} // namespace og

namespace og {
namespace newScreen {
    struct ObjWorldMapInfoWindow1 : public CNode,
                                    public ObjBase,
                                    public ObjSMenuPauseVS,
                                    public ObjSMenuBase {
        virtual ~ObjWorldMapInfoWindow1();                  // _00
        virtual void getChildCount();                       // _04
        virtual void _08() = 0;                             // _08
        virtual void _0C() = 0;                             // _0C
        virtual void @24 @__dt();                           // _10
        virtual void update();                              // _14
        virtual void draw(Graphics&);                       // _18
        virtual void start(const StartSceneArg*);           // _1C
        virtual void end(const EndSceneArg*);               // _20
        virtual void setOwner(SceneBase*);                  // _24
        virtual void getOwner() const;                      // _28
        virtual void create(JKRArchive*);                   // _2C
        virtual void confirmSetScene(SetSceneArg&);         // _30
        virtual void confirmStartScene(StartSceneArg*);     // _34
        virtual void confirmEndScene(EndSceneArg*);         // _38
        virtual void doStart(const Screen::StartSceneArg*); // _3C
        virtual void doEnd(const Screen::EndSceneArg*);     // _40
        virtual void doCreate(JKRArchive*);                 // _44
        virtual void doUpdateFadein();                      // _48
        virtual void doUpdateFadeinFinish();                // _4C
        virtual void doUpdate();                            // _50
        virtual void doUpdateFinish();                      // _54
        virtual void doUpdateFadeout();                     // _58
        virtual void doUpdateFadeoutFinish();               // _5C
        virtual void doDraw(Graphics&);                     // _60
        virtual void doConfirmSetScene(SetSceneArg&);       // _64
        virtual void doConfirmStartScene(StartSceneArg*);   // _68
        virtual void doConfirmEndScene(EndSceneArg*&);      // _6C
        virtual void in_L();                                // _70
        virtual void in_R();                                // _74
        virtual void wait();                                // _78
        virtual void out_L();                               // _7C
        virtual void out_R();                               // _80
        virtual void loop();                                // _84
        virtual void doUpdateCancelAction();                // _88
        virtual void doUpdateRAction();                     // _8C
        virtual void doUpdateLAction();                     // _90
        virtual void updateFadeIn();                        // _94
        virtual void updateFadeOut();                       // _98
        virtual void commonUpdate();                        // _9C
        virtual void out_cancel();                          // _A0
        virtual void out_menu_0();                          // _A4
        virtual void out_menu_1();                          // _A8
        virtual void getResult();                           // _AC

        // _00 VTBL
    };
} // namespace newScreen
} // namespace og

#endif
