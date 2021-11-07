#ifndef _OG_NEWSCREEN_OBJSMENUPAUSEDOUKUTU_H
#define _OG_NEWSCREEN_OBJSMENUPAUSEDOUKUTU_H

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
    struct ObjSMenuBase {
        virtual void _00() = 0;              // _00
        virtual void _04() = 0;              // _04
        virtual void _08() = 0;              // _08
        virtual void _0C() = 0;              // _0C
        virtual void _10() = 0;              // _10
        virtual void _14() = 0;              // _14
        virtual void _18() = 0;              // _18
        virtual void _1C() = 0;              // _1C
        virtual void _20() = 0;              // _20
        virtual void _24() = 0;              // _24
        virtual void _28() = 0;              // _28
        virtual void _2C() = 0;              // _2C
        virtual void _30() = 0;              // _30
        virtual void _34() = 0;              // _34
        virtual void _38() = 0;              // _38
        virtual void _3C() = 0;              // _3C
        virtual void _40() = 0;              // _40
        virtual void _44() = 0;              // _44
        virtual void doUpdateFadein();       // _48
        virtual void doUpdateFadeinFinish(); // _4C
        virtual void _50() = 0;              // _50
        virtual void _54() = 0;              // _54
        virtual void _58() = 0;              // _58
        virtual void _5C() = 0;              // _5C
        virtual void _60() = 0;              // _60
        virtual void _64() = 0;              // _64
        virtual void _68() = 0;              // _68
        virtual void _6C() = 0;              // _6C
        virtual void _70() = 0;              // _70
        virtual void _74() = 0;              // _74
        virtual void _78() = 0;              // _78
        virtual void _7C() = 0;              // _7C
        virtual void _80() = 0;              // _80
        virtual void loop();                 // _84
        virtual void _88() = 0;              // _88
        virtual void _8C() = 0;              // _8C
        virtual void _90() = 0;              // _90
        virtual void updateFadeIn();         // _94
        virtual void updateFadeOut();        // _98

        // _00 VTBL
    };
} // namespace newScreen
} // namespace og

namespace og {
namespace newScreen {
    struct ObjSMenuPauseDoukutu : public CNode,
                                  public ObjBase,
                                  public ObjSMenuBase {
        virtual ~ObjSMenuPauseDoukutu();                    // _00
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

        // _00 VTBL
    };
} // namespace newScreen
} // namespace og

#endif
