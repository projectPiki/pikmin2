#ifndef _MORIMURA_TITEMZUKAN_H
#define _MORIMURA_TITEMZUKAN_H

/*
        __vt__Q28Morimura10TItemZukan:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura10TItemZukanFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Morimura10TItemZukanFv"
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
        .4byte doCreate__Q28Morimura10TItemZukanFP10JKRArchive
        .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeinFinish__Q28Morimura10TZukanBaseFv
        .4byte doUpdate__Q28Morimura10TItemZukanFv
        .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
        .4byte doUpdateFadeout__Q28Morimura10TZukanBaseFv
        .4byte doUpdateFadeoutFinish__Q28Morimura10TZukanBaseFv
        .4byte doDraw__Q28Morimura10TZukanBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte getDispMemberBase__Q28Morimura10TItemZukanFv
        .4byte isListShow__Q28Morimura10TItemZukanFi
        .4byte paneInit__Q28Morimura10TZukanBaseFv
        .4byte changePaneInfo__Q28Morimura10TZukanBaseFv
        .4byte getIdMax__Q28Morimura10TItemZukanFv
        .4byte getNameID__Q28Morimura10TItemZukanFi
        .4byte getUpdateIndex__Q28Morimura10TItemZukanFRib
        .4byte setShortenIndex__Q28Morimura10TItemZukanFiib
        .4byte doUpdateIn__Q28Morimura10TZukanBaseFv
        .4byte doUpdateOut__Q28Morimura10TItemZukanFv
        .4byte changeTextTevBlock__Q28Morimura11TScrollListFi
        .4byte updateIndex__Q28Morimura11TScrollListFb
        .4byte setPaneCharacter__Q28Morimura11TScrollListFi
        .4byte doDemoDraw__Q28Morimura10TItemZukanFR8Graphics
        .4byte getCategoryColorId__Q28Morimura10TItemZukanFi
        .4byte getDispDataZukan__Q28Morimura10TItemZukanFv
        .4byte indexPaneInit__Q28Morimura10TZukanBaseFP9J2DScreen
        .4byte isComplete__Q28Morimura10TItemZukanFv
        .4byte setXWindow__Q28Morimura10TItemZukanFv
        .4byte setYWindow__Q28Morimura10TItemZukanFv
        .4byte getXMsgID__Q28Morimura10TItemZukanFi
        .4byte getYMsgID__Q28Morimura10TItemZukanFi
        .4byte setDetail__Q28Morimura10TItemZukanFv
        .4byte getModelIndex__Q28Morimura10TItemZukanFi
        .4byte updateButtonAlpha__Q28Morimura10TZukanBaseFUc
        .4byte isOpenConfirmWindow__Q28Morimura10TItemZukanFv
        .4byte openConfirmWindow__Q28Morimura10TItemZukanFv
        .4byte isNewSupply__Q28Morimura10TItemZukanFib
        .4byte isPanelExist__Q28Morimura10TItemZukanFv
*/

struct CNode {
    virtual void _08() = 0;       // _08
    virtual void getChildCount(); // _0C

    // _00 VTBL
};

namespace Screen {
struct ObjBase {
    virtual void _08() = 0;                           // _08
    virtual void _0C() = 0;                           // _0C
    virtual void _10() = 0;                           // _10
    virtual void _14() = 0;                           // _14
    virtual void _18() = 0;                           // _18
    virtual void update();                            // _1C
    virtual void draw(Graphics&);                     // _20
    virtual void start(const StartSceneArg*);         // _24
    virtual void end(const EndSceneArg*);             // _28
    virtual void setOwner(SceneBase*);                // _2C
    virtual void getOwner() const;                    // _30
    virtual void create(JKRArchive*);                 // _34
    virtual void confirmSetScene(SetSceneArg&);       // _38
    virtual void confirmStartScene(StartSceneArg*);   // _3C
    virtual void confirmEndScene(EndSceneArg*);       // _40
    virtual void _44() = 0;                           // _44
    virtual void _48() = 0;                           // _48
    virtual void _4C() = 0;                           // _4C
    virtual void _50() = 0;                           // _50
    virtual void _54() = 0;                           // _54
    virtual void _58() = 0;                           // _58
    virtual void _5C() = 0;                           // _5C
    virtual void _60() = 0;                           // _60
    virtual void _64() = 0;                           // _64
    virtual void _68() = 0;                           // _68
    virtual void doConfirmSetScene(SetSceneArg&);     // _6C
    virtual void doConfirmStartScene(StartSceneArg*); // _70
    virtual void doConfirmEndScene(EndSceneArg*&);    // _74

    // _00 VTBL
};
} // namespace Screen

namespace Morimura {
struct TTestBase {
    virtual void _08() = 0;                             // _08
    virtual void _0C() = 0;                             // _0C
    virtual void _10() = 0;                             // _10
    virtual void _14() = 0;                             // _14
    virtual void _18() = 0;                             // _18
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
    virtual void _4C() = 0;                             // _4C
    virtual void doUpdateFadein();                      // _50
    virtual void _54() = 0;                             // _54
    virtual void _58() = 0;                             // _58
    virtual void doUpdateFinish();                      // _5C

    // _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TZukanBase {
    virtual void _08() = 0;                        // _08
    virtual void _0C() = 0;                        // _0C
    virtual void _10() = 0;                        // _10
    virtual void _14() = 0;                        // _14
    virtual void _18() = 0;                        // _18
    virtual void _1C() = 0;                        // _1C
    virtual void _20() = 0;                        // _20
    virtual void _24() = 0;                        // _24
    virtual void _28() = 0;                        // _28
    virtual void _2C() = 0;                        // _2C
    virtual void _30() = 0;                        // _30
    virtual void _34() = 0;                        // _34
    virtual void _38() = 0;                        // _38
    virtual void _3C() = 0;                        // _3C
    virtual void _40() = 0;                        // _40
    virtual void _44() = 0;                        // _44
    virtual void _48() = 0;                        // _48
    virtual void _4C() = 0;                        // _4C
    virtual void _50() = 0;                        // _50
    virtual void doUpdateFadeinFinish();           // _54
    virtual void _58() = 0;                        // _58
    virtual void _5C() = 0;                        // _5C
    virtual void doUpdateFadeout();                // _60
    virtual void doUpdateFadeoutFinish();          // _64
    virtual void doDraw(Graphics&);                // _68
    virtual void _6C() = 0;                        // _6C
    virtual void _70() = 0;                        // _70
    virtual void _74() = 0;                        // _74
    virtual void _78() = 0;                        // _78
    virtual void _7C() = 0;                        // _7C
    virtual void paneInit();                       // _80
    virtual void changePaneInfo();                 // _84
    virtual void _88() = 0;                        // _88
    virtual void _8C() = 0;                        // _8C
    virtual void _90() = 0;                        // _90
    virtual void _94() = 0;                        // _94
    virtual void doUpdateIn();                     // _98
    virtual void _9C() = 0;                        // _9C
    virtual void _A0() = 0;                        // _A0
    virtual void _A4() = 0;                        // _A4
    virtual void _A8() = 0;                        // _A8
    virtual void _AC() = 0;                        // _AC
    virtual void _B0() = 0;                        // _B0
    virtual void _B4() = 0;                        // _B4
    virtual void indexPaneInit(J2DScreen*);        // _B8
    virtual void _BC() = 0;                        // _BC
    virtual void _C0() = 0;                        // _C0
    virtual void _C4() = 0;                        // _C4
    virtual void _C8() = 0;                        // _C8
    virtual void _CC() = 0;                        // _CC
    virtual void _D0() = 0;                        // _D0
    virtual void _D4() = 0;                        // _D4
    virtual void updateButtonAlpha(unsigned char); // _D8

    // _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TScrollList {
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void _14() = 0;               // _14
    virtual void _18() = 0;               // _18
    virtual void _1C() = 0;               // _1C
    virtual void _20() = 0;               // _20
    virtual void _24() = 0;               // _24
    virtual void _28() = 0;               // _28
    virtual void _2C() = 0;               // _2C
    virtual void _30() = 0;               // _30
    virtual void _34() = 0;               // _34
    virtual void _38() = 0;               // _38
    virtual void _3C() = 0;               // _3C
    virtual void _40() = 0;               // _40
    virtual void _44() = 0;               // _44
    virtual void _48() = 0;               // _48
    virtual void _4C() = 0;               // _4C
    virtual void _50() = 0;               // _50
    virtual void _54() = 0;               // _54
    virtual void _58() = 0;               // _58
    virtual void _5C() = 0;               // _5C
    virtual void _60() = 0;               // _60
    virtual void _64() = 0;               // _64
    virtual void _68() = 0;               // _68
    virtual void _6C() = 0;               // _6C
    virtual void _70() = 0;               // _70
    virtual void _74() = 0;               // _74
    virtual void _78() = 0;               // _78
    virtual void _7C() = 0;               // _7C
    virtual void _80() = 0;               // _80
    virtual void _84() = 0;               // _84
    virtual void _88() = 0;               // _88
    virtual void _8C() = 0;               // _8C
    virtual void _90() = 0;               // _90
    virtual void _94() = 0;               // _94
    virtual void _98() = 0;               // _98
    virtual void _9C() = 0;               // _9C
    virtual void changeTextTevBlock(int); // _A0
    virtual void updateIndex(bool);       // _A4
    virtual void setPaneCharacter(int);   // _A8

    // _00 VTBL
};
} // namespace Morimura

namespace Morimura {
struct TItemZukan : public CNode,
                    public ObjBase,
                    public TTestBase,
                    public TZukanBase,
                    public TScrollList {
    virtual ~TItemZukan();                        // _08
    virtual void _10() = 0;                       // _10
    virtual void _14() = 0;                       // _14
    virtual void @24 @__dt();                     // _18
    virtual void doCreate(JKRArchive*);           // _4C
    virtual void doUpdate();                      // _58
    virtual void getDispMemberBase();             // _78
    virtual void isListShow(int);                 // _7C
    virtual void getIdMax();                      // _88
    virtual void getNameID(int);                  // _8C
    virtual void getUpdateIndex(int&, bool);      // _90
    virtual void setShortenIndex(int, int, bool); // _94
    virtual void doUpdateOut();                   // _9C
    virtual void doDemoDraw(Graphics&);           // _AC
    virtual void getCategoryColorId(int);         // _B0
    virtual void getDispDataZukan();              // _B4
    virtual void isComplete();                    // _BC
    virtual void setXWindow();                    // _C0
    virtual void setYWindow();                    // _C4
    virtual void getXMsgID(int);                  // _C8
    virtual void getYMsgID(int);                  // _CC
    virtual void setDetail();                     // _D0
    virtual void getModelIndex(int);              // _D4
    virtual void isOpenConfirmWindow();           // _DC
    virtual void openConfirmWindow();             // _E0
    virtual void isNewSupply(int, bool);          // _E4
    virtual void isPanelExist();                  // _E8

    // _00 VTBL
};
} // namespace Morimura

#endif
