#ifndef _MORIMURA_THISCORE_H
#define _MORIMURA_THISCORE_H

/*
    __vt__Q28Morimura8THiScore:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura8THiScoreFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte "@24@__dt__Q28Morimura8THiScoreFv"
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
    .4byte doCreate__Q28Morimura8THiScoreFP10JKRArchive
    .4byte doUpdateFadein__Q28Morimura9TTestBaseFv
    .4byte doUpdateFadeinFinish__Q28Morimura8THiScoreFv
    .4byte doUpdate__Q28Morimura8THiScoreFv
    .4byte doUpdateFinish__Q28Morimura9TTestBaseFv
    .4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
    .4byte doUpdateFadeoutFinish__Q28Morimura8THiScoreFv
    .4byte doDraw__Q28Morimura8THiScoreFR8Graphics
    .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
    .4byte getDispMemberBase__Q28Morimura8THiScoreFv
    .4byte isListShow__Q28Morimura11TScrollListFi
    .4byte paneInit__Q28Morimura8THiScoreFv
    .4byte changePaneInfo__Q28Morimura8THiScoreFv
    .4byte getIdMax__Q28Morimura8THiScoreFv
    .4byte getNameID__Q28Morimura8THiScoreFi
    .4byte getUpdateIndex__Q28Morimura11TScrollListFRib
    .4byte setShortenIndex__Q28Morimura11TScrollListFiib
    .4byte doUpdateIn__Q28Morimura11TScrollListFv
    .4byte doUpdateOut__Q28Morimura11TScrollListFv
    .4byte changeTextTevBlock__Q28Morimura8THiScoreFi
    .4byte updateIndex__Q28Morimura11TScrollListFb
    .4byte setPaneCharacter__Q28Morimura8THiScoreFi
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Screen {
struct ObjBase {
	virtual ~ObjBase();                               // _08 (weak)
	virtual void _0C() = 0;                           // _0C
	virtual void _10() = 0;                           // _10
	virtual void _14() = 0;                           // _14
	virtual void _18() = 0;                           // _18
	virtual void update();                            // _1C
	virtual void draw(Graphics&);                     // _20
	virtual void start(const StartSceneArg*);         // _24
	virtual void end(const EndSceneArg*);             // _28
	virtual void setOwner(SceneBase*);                // _2C (weak)
	virtual void getOwner() const;                    // _30 (weak)
	virtual void create(JKRArchive*);                 // _34
	virtual void confirmSetScene(SetSceneArg&);       // _38
	virtual void confirmStartScene(StartSceneArg*);   // _3C
	virtual void confirmEndScene(EndSceneArg*);       // _40
	virtual void _44() = 0;                           // _44
	virtual void _48() = 0;                           // _48
	virtual void doCreate(JKRArchive*);               // _4C
	virtual void _50() = 0;                           // _50
	virtual void doUpdateFadeinFinish();              // _54
	virtual void doUpdate();                          // _58
	virtual void _5C() = 0;                           // _5C
	virtual void _60() = 0;                           // _60
	virtual void doUpdateFadeoutFinish();             // _64
	virtual void doDraw(Graphics& gfx);               // _68
	virtual void doConfirmSetScene(SetSceneArg&);     // _6C (weak)
	virtual void doConfirmStartScene(StartSceneArg*); // _70 (weak)
	virtual void doConfirmEndScene(EndSceneArg*&);    // _74 (weak)
};
} // namespace Screen

namespace Morimura {
struct TTestBase {
	virtual ~TTestBase();                               // _08 (weak)
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
	virtual void doCreate(JKRArchive*);                 // _4C
	virtual void doUpdateFadein();                      // _50
	virtual void doUpdateFadeinFinish();                // _54
	virtual void doUpdate();                            // _58
	virtual void doUpdateFinish();                      // _5C
	virtual void doUpdateFadeout();                     // _60
};
} // namespace Morimura

namespace Morimura {
struct TScrollList {
	virtual ~TScrollList();                       // _08 (weak)
	virtual void _0C() = 0;                       // _0C
	virtual void _10() = 0;                       // _10
	virtual void _14() = 0;                       // _14
	virtual void _18() = 0;                       // _18
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
	virtual void doUpdateFadeinFinish();          // _54
	virtual void doUpdate();                      // _58
	virtual void _5C() = 0;                       // _5C
	virtual void _60() = 0;                       // _60
	virtual void doUpdateFadeoutFinish();         // _64
	virtual void doDraw(Graphics& gfx);           // _68
	virtual void _6C() = 0;                       // _6C
	virtual void _70() = 0;                       // _70
	virtual void _74() = 0;                       // _74
	virtual void getDispMemberBase();             // _78 (weak)
	virtual void isListShow(int);                 // _7C (weak)
	virtual void paneInit();                      // _80
	virtual void changePaneInfo();                // _84
	virtual void getIdMax();                      // _88 (weak)
	virtual void getNameID(int);                  // _8C (weak)
	virtual void getUpdateIndex(int&, bool);      // _90
	virtual void setShortenIndex(int, int, bool); // _94 (weak)
	virtual void doUpdateIn();                    // _98 (weak)
	virtual void doUpdateOut();                   // _9C (weak)
	virtual void changeTextTevBlock(int);         // _A0
	virtual void updateIndex(bool);               // _A4
};
} // namespace Morimura

namespace Morimura {
struct THiScore : public CNode, public ObjBase, public TTestBase, public TScrollList {
	virtual ~THiScore();                  // _08 (weak)
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void doCreate(JKRArchive*);   // _4C
	virtual void doUpdateFadeinFinish();  // _54
	virtual void doUpdate();              // _58
	virtual void doUpdateFadeoutFinish(); // _64
	virtual void doDraw(Graphics& gfx);   // _68
	virtual void getDispMemberBase();     // _78 (weak)
	virtual void paneInit();              // _80
	virtual void changePaneInfo();        // _84
	virtual void getIdMax();              // _88 (weak)
	virtual void getNameID(int);          // _8C (weak)
	virtual void changeTextTevBlock(int); // _A0
	virtual void setPaneCharacter(int);   // _A8

	THiScore();
	void getRecord(int, int);
	void copyTevBlock(J2DTevBlock*, J2DTevBlock*);
	void changeTevBlock(J2DTevBlock*, J2DTevBlock*);
	void copyColorBlock(J2DColorBlock*, J2DColorBlock*);
	void changeColorBlock(J2DColorBlock*, J2DColorBlock*);
	void updateLayout();
};
} // namespace Morimura

#endif
