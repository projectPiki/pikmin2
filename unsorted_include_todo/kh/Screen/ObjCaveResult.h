#ifndef _KH_SCREEN_OBJCAVERESULT_H
#define _KH_SCREEN_OBJCAVERESULT_H

/*
    __vt__Q32kh6Screen13ObjCaveResult:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32kh6Screen13ObjCaveResultFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte "@24@__dt__Q32kh6Screen13ObjCaveResultFv"
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
    .4byte doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
    .4byte doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
    .4byte doCreate__Q32kh6Screen13ObjCaveResultFP10JKRArchive
    .4byte doUpdateFadein__Q32kh6Screen13ObjCaveResultFv
    .4byte doUpdateFadeinFinish__Q32kh6Screen13ObjCaveResultFv
    .4byte doUpdate__Q32kh6Screen13ObjCaveResultFv
    .4byte doUpdateFinish__Q26Screen7ObjBaseFv
    .4byte doUpdateFadeout__Q32kh6Screen13ObjCaveResultFv
    .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
    .4byte doDraw__Q32kh6Screen13ObjCaveResultFR8Graphics
    .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
    .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
    .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
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
	virtual void doStart(const StartSceneArg*);       // _44 (weak)
	virtual void doEnd(const EndSceneArg*);           // _48 (weak)
	virtual void doCreate(JKRArchive*);               // _4C
	virtual void doUpdateFadein();                    // _50
	virtual void doUpdateFadeinFinish();              // _54
	virtual void doUpdate();                          // _58
	virtual void doUpdateFinish();                    // _5C (weak)
	virtual void doUpdateFadeout();                   // _60
	virtual void doUpdateFadeoutFinish();             // _64 (weak)
	virtual void doDraw(Graphics& gfx);               // _68
	virtual void doConfirmSetScene(SetSceneArg&);     // _6C (weak)
	virtual void doConfirmStartScene(StartSceneArg*); // _70 (weak)
	virtual void doConfirmEndScene(EndSceneArg*&);    // _74 (weak)
};
} // namespace Screen

namespace kh {
namespace Screen {
struct ObjCaveResult : public CNode, public ObjBase {
	virtual ~ObjCaveResult();            // _08 (weak)
	virtual void _10() = 0;              // _10
	virtual void _14() = 0;              // _14
	virtual void doCreate(JKRArchive*);  // _4C
	virtual void doUpdateFadein();       // _50
	virtual void doUpdateFadeinFinish(); // _54
	virtual void doUpdate();             // _58
	virtual void doUpdateFadeout();      // _60
	virtual void doDraw(Graphics& gfx);  // _68

	ObjCaveResult();
	void statusNormal();
	void statusScrollUp();
	void statusScrollDown();
	void statusForceScroll();
	void statusDrumRoll();
	void statusAllMoney();
	void statusDecP();
	void statusLost();
	void statusEffect();
	void updateAnimation();
	void setAlpha(int, unsigned char);
	void pikminSE();
};
} // namespace Screen
} // namespace kh

#endif
