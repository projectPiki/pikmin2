#ifndef _KH_SCREEN_OBJDAYENDRESULTMAIL_H
#define _KH_SCREEN_OBJDAYENDRESULTMAIL_H

/*
        __vt__Q32kh6Screen19ObjDayEndResultMail:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen19ObjDayEndResultMailFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32kh6Screen19ObjDayEndResultMailFv"
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
   doStart__Q32kh6Screen19ObjDayEndResultMailFPCQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg .4byte
   doCreate__Q32kh6Screen19ObjDayEndResultMailFP10JKRArchive .4byte
   doUpdateFadein__Q32kh6Screen19ObjDayEndResultMailFv .4byte
   doUpdateFadeinFinish__Q32kh6Screen19ObjDayEndResultBaseFv .4byte
   doUpdate__Q32kh6Screen19ObjDayEndResultMailFv .4byte
   doUpdateFinish__Q32kh6Screen19ObjDayEndResultBaseFv .4byte
   doUpdateFadeout__Q32kh6Screen19ObjDayEndResultMailFv .4byte
   doUpdateFadeoutFinish__Q26Screen7ObjBaseFv .4byte
   doDraw__Q32kh6Screen19ObjDayEndResultMailFR8Graphics .4byte
   doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg .4byte
   updateCommon__Q32kh6Screen19ObjDayEndResultMailFv .4byte
   getFadeinUpMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeinUpMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeoutUpMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeoutUpMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeinDownMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeinDownMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeoutDownMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getFadeoutDownMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getStarWTagNum__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getPStarWMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv .4byte
   getPStarWMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv
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
    virtual void doEnd(const EndSceneArg*);           // _40
    virtual void _44() = 0;                           // _44
    virtual void _48() = 0;                           // _48
    virtual void _4C() = 0;                           // _4C
    virtual void _50() = 0;                           // _50
    virtual void _54() = 0;                           // _54
    virtual void _58() = 0;                           // _58
    virtual void doUpdateFadeoutFinish();             // _5C
    virtual void _60() = 0;                           // _60
    virtual void doConfirmSetScene(SetSceneArg&);     // _64
    virtual void doConfirmStartScene(StartSceneArg*); // _68
    virtual void doConfirmEndScene(EndSceneArg*&);    // _6C

    // _00 VTBL
};
} // namespace Screen

namespace kh {
namespace Screen {
    struct ObjDayEndResultBase {
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
        virtual void _48() = 0;              // _48
        virtual void doUpdateFadeinFinish(); // _4C
        virtual void _50() = 0;              // _50
        virtual void doUpdateFinish();       // _54

        // _00 VTBL
    };
} // namespace Screen
} // namespace kh

namespace kh {
namespace Screen {
    struct ObjDayEndResultMail : public CNode,
                                 public ObjBase,
                                 public ObjDayEndResultBase {
        virtual ~ObjDayEndResultMail();                   // _00
        virtual void getChildCount();                     // _04
        virtual void _08() = 0;                           // _08
        virtual void _0C() = 0;                           // _0C
        virtual void @24 @__dt();                         // _10
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
        virtual void doStart(const StartSceneArg*);       // _3C
        virtual void doEnd(const EndSceneArg*);           // _40
        virtual void doCreate(JKRArchive*);               // _44
        virtual void doUpdateFadein();                    // _48
        virtual void doUpdateFadeinFinish();              // _4C
        virtual void doUpdate();                          // _50
        virtual void doUpdateFinish();                    // _54
        virtual void doUpdateFadeout();                   // _58
        virtual void doUpdateFadeoutFinish();             // _5C
        virtual void doDraw(Graphics&);                   // _60
        virtual void doConfirmSetScene(SetSceneArg&);     // _64
        virtual void doConfirmStartScene(StartSceneArg*); // _68
        virtual void doConfirmEndScene(EndSceneArg*&);    // _6C
        virtual void updateCommon();                      // _70
        virtual void getFadeinUpMinFrm() const;           // _74
        virtual void getFadeinUpMaxFrm() const;           // _78
        virtual void getFadeoutUpMinFrm() const;          // _7C
        virtual void getFadeoutUpMaxFrm() const;          // _80
        virtual void getFadeinDownMinFrm() const;         // _84
        virtual void getFadeinDownMaxFrm() const;         // _88
        virtual void getFadeoutDownMinFrm() const;        // _8C
        virtual void getFadeoutDownMaxFrm() const;        // _90
        virtual void getStarWTagNum() const;              // _94
        virtual void getPStarWMinFrm() const;             // _98
        virtual void getPStarWMaxFrm() const;             // _9C

        // _00 VTBL
    };
} // namespace Screen
} // namespace kh

#endif
