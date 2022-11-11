#ifndef _MORIMURA_ZUKAN_H
#define _MORIMURA_ZUKAN_H

#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "P2JME/IllustratedBook.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Bases.h"
#include "Morimura/Window.h"

struct JKRExpHeap;

namespace Game {
namespace ResultTexMgr {
struct Mgr;
} // namespace ResultTexMgr
namespace IllustratedBook {
struct EnemyTexMgr;
} // namespace IllustratedBook
} // namespace Game

namespace Morimura {
struct TCallbackScrollMsg : public og::Screen::CallBack_Message {
	TCallbackScrollMsg();

	virtual ~TCallbackScrollMsg();                 // _08 (weak)
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
	virtual void doInit();                         // _18

	void reset();
	void scroll(f32);
	void getPosRate();

	// _00     = VTBL
	// _00-_48 = og::Screen::CallBack_Message
	f32 _48;                                     // _48
	u8 _4C[0x4];                                 // _4C, unknown
	P2JME::IllustratedBook::TControl* m_control; // _50
	u8 _54[0x4];                                 // _54, unknown
};

struct DispMemberZukanBase : public og::Screen::DispMemberBase {
	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	// TODO: work out what members of DispMemberZukanEnemy/Item are here
};

struct DispMemberZukanEnemy : public DispMemberZukanBase {
	virtual u32 getSize() { return sizeof(DispMemberZukanEnemy); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }                // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_ZUKAN_ENEMY; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	JKRExpHeap* m_debugExpHeap;                                     // _08
	JUTTexture* m_texture;                                          // _0C
	Game::ResultTexMgr::Mgr* m_resultTexMgr;                        // _10
	Game::IllustratedBook::EnemyTexMgr* m_enemyTexMgr;              // _14
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _18
	int _1C;                                                        // _1C
};

struct DispMemberZukanItem : public DispMemberZukanBase {
	virtual u32 getSize() { return sizeof(DispMemberZukanItem); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_ZUKAN_ENEMY; }      // _10 (weak)

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	JKRExpHeap* m_debugExpHeap;                                     // _08
	JUTTexture* m_texture;                                          // _0C
	Game::ResultTexMgr::Mgr* m_resultTexMgr;                        // _10
	Game::IllustratedBook::EnemyTexMgr* m_enemyTexMgr;              // _14, ??
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _18
	int _1C;                                                        // _1C
};

struct TDEnemyScene : public THIOScene {
	TDEnemyScene();

	virtual SceneType getSceneType();             // _08 (weak)
	virtual ScreenOwnerID getOwnerID();           // _0C (weak)
	virtual ScreenMemberID getMemberID();         // _10 (weak)
	virtual const char* getResName() const;       // _1C (weak)
	virtual void doCreateObj(JKRArchive*);        // _20
	virtual bool doStart(Screen::StartSceneArg*); // _3C

	void isAppearConfirmWindow();

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TEnemyZukan*
	TConfirmEndWindow* m_confirmEndWindow; // _224
};

struct TDItemScene : public THIOScene {
	TDItemScene();

	virtual SceneType getSceneType();             // _08 (weak)
	virtual ScreenOwnerID getOwnerID();           // _0C (weak)
	virtual ScreenMemberID getMemberID();         // _10 (weak)
	virtual const char* getResName() const;       // _1C (weak)
	virtual void doCreateObj(JKRArchive*);        // _20
	virtual bool doStart(Screen::StartSceneArg*); // _3C

	void isAppearConfirmWindow();

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TItemZukan*
	TConfirmEndWindow* m_confirmEndWindow; // _224
};

struct TZukanBase : public TScrollList {
	TZukanBase(char*);

	virtual ~TZukanBase();                        // _08 (weak)
	virtual void doCreate(JKRArchive*);           // _4C
	virtual void doUpdateFadeinFinish();          // _54 (weak)
	virtual bool doUpdate();                      // _58
	virtual bool doUpdateFadeout();               // _60 (weak)
	virtual void doUpdateFadeoutFinish();         // _64
	virtual void doDraw(Graphics& gfx);           // _68
	virtual void paneInit();                      // _80
	virtual void changePaneInfo();                // _84
	virtual void setShortenIndex(int, int, bool); // _94
	virtual void doUpdateIn();                    // _98
	virtual void doUpdateOut();                   // _9C
	virtual void doDemoDraw(Graphics&);           // _AC (weak)
	virtual void getCategoryColorId(int);         // _B0 (weak)
	virtual void getDispDataZukan() = 0;          // _B4
	virtual void indexPaneInit(J2DScreen*);       // _B8
	virtual bool isComplete();                    // _BC (weak)
	virtual void setXWindow()       = 0;          // _C0
	virtual void setYWindow()       = 0;          // _C4
	virtual void getXMsgID(int)     = 0;          // _C8
	virtual void getYMsgID(int)     = 0;          // _CC
	virtual void setDetail()        = 0;          // _D0
	virtual void getModelIndex(int) = 0;          // _D4
	virtual void updateButtonAlpha(u8);           // _D8
	virtual bool isOpenConfirmWindow()  = 0;      // _DC
	virtual void openConfirmWindow()    = 0;      // _E0
	virtual bool isNewSupply(int, bool) = 0;      // _E4
	virtual bool isPanelExist();                  // _E8

	void changeName();
	void doPushXButton();
	void doPushYButton();
	void doPushBButton();
	void windowOpenClose(u64);
	void requireRequest();
	void requireEffectOff();
	bool isEnlargedWindow();
	bool isMemoWindow();
	void checkRequest(int&);
	void getCurrSelectId();
	void getTexInfo(int);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	u8 _B4[0x194]; // _B4, TODO: fill this in from ghidra
};

struct TEnemyZukan : public TZukanBase {
	virtual ~TEnemyZukan();                                  // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)
	virtual bool isListShow(int);                            // _7C
	virtual void getIdMax();                                 // _88 (weak)
	virtual void getNameID(int);                             // _8C
	virtual void getUpdateIndex(int&, bool);                 // _90
	virtual void setShortenIndex(int, int, bool);            // _94
	virtual void getDispDataZukan();                         // _B4 (weak)
	virtual void indexPaneInit(J2DScreen*);                  // _B8
	virtual void setXWindow();                               // _C0
	virtual void setYWindow();                               // _C4
	virtual void getXMsgID(int);                             // _C8
	virtual void getYMsgID(int);                             // _CC
	virtual void setDetail();                                // _D0
	virtual void getModelIndex(int);                         // _D4
	virtual bool isOpenConfirmWindow();                      // _DC
	virtual void openConfirmWindow();                        // _E0
	virtual bool isNewSupply(int, bool);                     // _E4
	virtual bool isPanelExist();                             // _E8

	void getPrice(int);
	void getDefeatNum(int);
	void getKilledNum(int);

	// _00      = VTBL1
	// _18      = VTBL2
	// _00-_248 = TZukanBase
	DispMemberZukanEnemy* m_dispEnemy; // _248
	TScaleUpCounter* _24C;             // _24C
	TScaleUpCounter* _250;             // _250
	TScaleUpCounter* _254;             // _254
};

struct TItemZukan : public TZukanBase {
	virtual ~TItemZukan();                                   // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual bool doUpdate();                                 // _58
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)
	virtual bool isListShow(int);                            // _7C
	virtual void getIdMax();                                 // _88
	virtual void getNameID(int);                             // _8C
	virtual void getUpdateIndex(int&, bool);                 // _90
	virtual void setShortenIndex(int, int, bool);            // _94
	virtual void doUpdateOut();                              // _9C
	virtual void doDemoDraw(Graphics&);                      // _AC
	virtual void getCategoryColorId(int);                    // _B0 (weak)
	virtual void getDispDataZukan();                         // _B4 (weak)
	virtual bool isComplete();                               // _BC
	virtual void setXWindow();                               // _C0
	virtual void setYWindow();                               // _C4
	virtual void getXMsgID(int);                             // _C8
	virtual void getYMsgID(int);                             // _CC
	virtual void setDetail();                                // _D0
	virtual void getModelIndex(int);                         // _D4
	virtual bool isOpenConfirmWindow();                      // _DC
	virtual void openConfirmWindow();                        // _E0
	virtual bool isNewSupply(int, bool);                     // _E4
	virtual bool isPanelExist();                             // _E8

	void demoSet();
	void getPrice(int);
	void getWeight(int);

	// _00      = VTBL1
	// _18      = VTBL2
	// _00-_248 = TZukanBase
	u8 _248[0x174]; // _248, TODO: fill in from ghidra
};

struct TZukanWindow : public TScreenBase {
	TZukanWindow(JKRArchive*, int);

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	void windowOpen();
	void windowClose();
	void msgScroll(f32);
	void getPosRate();
	void setWindowColor(J2DGXColorS10&);
	void setIconColor(J2DGXColorS10&, J2DGXColorS10&);
	void onIcon(int);
	void moveIcon(f32);
	void changeIconTexture(int, ResTIMG*);

	// _00     = VTBL
	// _00-_18 = TScreenBase
	u8 _18;                           // _18
	f32 _1C;                          // _1C
	int _20;                          // _20
	og::Screen::AnimPane* _24;        // _24
	og::Screen::AnimPane* _28;        // _28
	TCallbackScrollMsg* _2C;          // _2C
	og::Screen::ScaleMgr* m_scaleMgr; // _30
	TCallbackScissor* _34;            // _34
	u32 _38;                          // _38
	J2DPane* _3C;                     // _3C
	J2DPane* _40;                     // _40
	J2DPicture* _44;                  // _44
	J2DPicture* _48[2];               // _48
	f32 _50;                          // _50
	f32 _54;                          // _54
};

} // namespace Morimura

#endif
