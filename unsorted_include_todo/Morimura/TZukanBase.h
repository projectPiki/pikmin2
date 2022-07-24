#ifndef _MORIMURA_TZUKANBASE_H
#define _MORIMURA_TZUKANBASE_H

/*
        __vt__Q28Morimura10TZukanBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura10TZukanBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura10TZukanBaseFv"
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
        .4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q28Morimura10TZukanBaseFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv
        .4byte doUpdate__Q28Morimura10TZukanBaseFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura10TZukanBaseFv
        .4byte doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv
        .4byte doDraw__Q28Morimura10TZukanBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0
        .4byte isListShow__Q28Morimura11TScrollListFi
        .4byte paneInit__Q28Morimura10TZukanBaseFv
        .4byte changePaneInfo__Q28Morimura10TZukanBaseFv
        .4byte 0
        .4byte 0
        .4byte getUpdateIndex__Q28Morimura11TScrollListFRib
        .4byte setShortenIndex__Q28Morimura10TZukanBaseFiib
        .4byte doUpdateIn__Q28Morimura10TZukanBaseFv
        .4byte doUpdateOut__Q28Morimura10TZukanBaseFv
        .4byte changeTextTevBlock__Q28Morimura11TScrollListFi
        .4byte updateIndex__Q28Morimura11TScrollListFb
        .4byte setPaneCharacter__Q28Morimura11TScrollListFi
        .4byte doDemoDraw__Q28Morimura10TZukanBaseFR8Graphics
        .4byte getCategoryColorId__Q28Morimura10TZukanBaseFi
        .4byte 0
        .4byte indexPaneInit__Q28Morimura10TZukanBaseFP9J2DScreen
        .4byte isComplete__Q28Morimura10TZukanBaseFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte updateButtonAlpha__Q28Morimura10TZukanBaseFUc
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte isPanelExist__Q28Morimura10TZukanBaseFv
*/

struct CNode {
    virtual ~CNode();             // _08 (inline)
    virtual void getChildCount(); // _0C
};

namespace Screen {
struct ObjBase {
    virtual ~ObjBase();                               // _08 (inline)
    virtual void _0C() = 0;                           // _0C
    virtual void _10() = 0;                           // _10
    virtual void _14() = 0;                           // _14
    virtual void @24 @__dt();                         // _18 (inline)
    virtual void update();                            // _1C
    virtual void draw(Graphics&);                     // _20
    virtual void start(const StartSceneArg*);         // _24
    virtual void end(const EndSceneArg*);             // _28
    virtual void setOwner(SceneBase*);                // _2C (inline)
    virtual void getOwner() const;                    // _30 (inline)
    virtual void create(JKRArchive*);                 // _34
    virtual void confirmSetScene(SetSceneArg&);       // _38
    virtual void confirmStartScene(StartSceneArg*);   // _3C
    virtual void confirmEndScene(EndSceneArg*);       // _40
    virtual void _44() = 0;                           // _44
    virtual void _48() = 0;                           // _48
    virtual void doCreate(JKRArchive*);               // _4C
    virtual void _50() = 0;                           // _50
    virtual void doUpdateFadeinFinish();              // _54 (inline)
    virtual void doUpdate();                          // _58
    virtual void _5C() = 0;                           // _5C
    virtual void doUpdateFadeout();                   // _60 (inline)
    virtual void doUpdateFadeoutFinish();             // _64
    virtual void doDraw(Graphics&);                   // _68
    virtual void doConfirmSetScene(SetSceneArg&);     // _6C (inline)
    virtual void doConfirmStartScene(StartSceneArg*); // _70 (inline)
    virtual void doConfirmEndScene(EndSceneArg*&);    // _74 (inline)
};
} // namespace Screen

namespace Morimura {
struct TTestBase {
    virtual ~TTestBase();                               // _08 (inline)
    virtual void _0C() = 0;                             // _0C
    virtual void _10() = 0;                             // _10
    virtual void _14() = 0;                             // _14
    virtual void @24 @__dt();                           // _18 (inline)
    virtual void _1C() = 0;                             // _1C
    virtual void _20() = 0;                             // _20
    virtual void _24() = 0;                             // _24
    virtual void _28() = 0;                             // _28
    virtual void _2C() = 0;                             // _2C
    virtual void _30() = 0;                             // _30
    virtual void _34() = 0;                             // _34
    virtual void _38() = 0;                             // _38
    virtual void _3C() = 0;                             // _3C
    virtual void _40() = 0;                             // _40
    virtual void doStart(const Screen::StartSceneArg*); // _44
    virtual void doEnd(const Screen::EndSceneArg*);     // _48
    virtual void doCreate(JKRArchive*);                 // _4C
    virtual void doUpdateFadein();                      // _50
    virtual void doUpdateFadeinFinish();                // _54 (inline)
    virtual void doUpdate();                            // _58
    virtual void doUpdateFinish();                      // _5C
};
} // namespace Morimura

namespace Morimura {
struct TScrollList {
    virtual ~TScrollList();                       // _08 (inline)
    virtual void _0C() = 0;                       // _0C
    virtual void _10() = 0;                       // _10
    virtual void _14() = 0;                       // _14
    virtual void @24 @__dt();                     // _18 (inline)
    virtual void _1C() = 0;                       // _1C
    virtual void _20() = 0;                       // _20
    virtual void _24() = 0;                       // _24
    virtual void _28() = 0;                       // _28
    virtual void _2C() = 0;                       // _2C
    virtual void _30() = 0;                       // _30
    virtual void _34() = 0;                       // _34
    virtual void _38() = 0;                       // _38
    virtual void _3C() = 0;                       // _3C
    virtual void _40() = 0;                       // _40
    virtual void _44() = 0;                       // _44
    virtual void _48() = 0;                       // _48
    virtual void doCreate(JKRArchive*);           // _4C
    virtual void _50() = 0;                       // _50
    virtual void doUpdateFadeinFinish();          // _54 (inline)
    virtual void doUpdate();                      // _58
    virtual void _5C() = 0;                       // _5C
    virtual void doUpdateFadeout();               // _60 (inline)
    virtual void doUpdateFadeoutFinish();         // _64
    virtual void doDraw(Graphics&);               // _68
    virtual void _6C() = 0;                       // _6C
    virtual void _70() = 0;                       // _70
    virtual void _74() = 0;                       // _74
    virtual void _78() = 0;                       // _78
    virtual void isListShow(int);                 // _7C (inline)
    virtual void paneInit();                      // _80
    virtual void changePaneInfo();                // _84
    virtual void _88() = 0;                       // _88
    virtual void _8C() = 0;                       // _8C
    virtual void getUpdateIndex(int&, bool);      // _90
    virtual void setShortenIndex(int, int, bool); // _94
    virtual void doUpdateIn();                    // _98
    virtual void doUpdateOut();                   // _9C
    virtual void changeTextTevBlock(int);         // _A0 (inline)
    virtual void updateIndex(bool);               // _A4
    virtual void setPaneCharacter(int);           // _A8 (inline)
};
} // namespace Morimura

namespace Morimura {
struct TZukanBase : public CNode,
                    public ObjBase,
                    public TTestBase,
                    public TScrollList {
    virtual ~TZukanBase();                         // _08 (inline)
    virtual void _10() = 0;                        // _10
    virtual void _14() = 0;                        // _14
    virtual void @24 @__dt();                      // _18 (inline)
    virtual void doCreate(JKRArchive*);            // _4C
    virtual void doUpdateFadeinFinish();           // _54 (inline)
    virtual void doUpdate();                       // _58
    virtual void doUpdateFadeout();                // _60 (inline)
    virtual void doUpdateFadeoutFinish();          // _64
    virtual void doDraw(Graphics&);                // _68
    virtual void _78() = 0;                        // _78
    virtual void paneInit();                       // _80
    virtual void changePaneInfo();                 // _84
    virtual void _88() = 0;                        // _88
    virtual void _8C() = 0;                        // _8C
    virtual void setShortenIndex(int, int, bool);  // _94
    virtual void doUpdateIn();                     // _98
    virtual void doUpdateOut();                    // _9C
    virtual void doDemoDraw(Graphics&);            // _AC (inline)
    virtual void getCategoryColorId(int);          // _B0 (inline)
    virtual void _B4() = 0;                        // _B4
    virtual void indexPaneInit(J2DScreen*);        // _B8
    virtual void isComplete();                     // _BC (inline)
    virtual void _C0() = 0;                        // _C0
    virtual void _C4() = 0;                        // _C4
    virtual void _C8() = 0;                        // _C8
    virtual void _CC() = 0;                        // _CC
    virtual void _D0() = 0;                        // _D0
    virtual void _D4() = 0;                        // _D4
    virtual void updateButtonAlpha(unsigned char); // _D8
    virtual void _DC() = 0;                        // _DC
    virtual void _E0() = 0;                        // _E0
    virtual void _E4() = 0;                        // _E4
    virtual void isPanelExist();                   // _E8

    TZukanBase();
    void changeName();
    void doPushXButton();
    void doPushYButton();
    void doPushBButton();
    void windowOpenClose(unsigned long long);
    void requireRequest();
    void requireEffectOff();
    void isEnlargedWindow();
    void isMemoWindow();
    void checkRequest(int&);
    void getCurrSelectId();
    void getTexInfo(int);
};
} // namespace Morimura

#endif
