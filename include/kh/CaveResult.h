#ifndef _KH_CAVERESULT_H
#define _KH_CAVERESULT_H

#include "kh/khUtil.h"
#include "Game/Result.h"
#include "ebi/Save.h"
#include "efx2d/T2DCavecomp.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/Bases.h"
#include "P2DScreen.h"

namespace og {
namespace Screen {
struct StickAnimMgr;
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {
struct DispCaveResult : public og::Screen::DispMemberBase {
	DispCaveResult(Game::Result::TNode*, u32, u32, u32, u32, bool, JKRHeap*, bool);

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	void init(Game::Result::TNode*, u32, bool);

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	JKRHeap* m_heap;                   // _08
	Game::Result::TNode* m_resultNode; // _0C
	u32 _10;                           // _10, unknown
	u32 _14;                           // _14, unknown
	u32 _18;                           // _18, unknown
	u32 _1C;                           // _1C
	u32 _20;                           // _20
	u32 _24;                           // _24, unknown
	u32 _28;                           // _28
	u32 _2C;                           // _2C
	bool _30;                          // _30
	bool _31;                          // _31
	u32 _34;                           // _34, unknown
};

struct ObjCaveResult : public ::Screen::ObjBase {
	ObjCaveResult();

	virtual ~ObjCaveResult();            // _08 (weak)
	virtual void doCreate(JKRArchive*);  // _4C
	virtual bool doUpdateFadein();       // _50
	virtual void doUpdateFadeinFinish(); // _54
	virtual bool doUpdate();             // _58
	virtual bool doUpdateFadeout();      // _60
	virtual void doDraw(Graphics& gfx);  // _68

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
	void setAlpha(int, u8);
	void pikminSE();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	ebi::Save::TMgr* m_saveMgr;                           // _38
	Game::Result::TNode* m_resultNode;                    // _3C
	P2DScreen::Mgr_tuning* m_resultDoukutuScreen;         // _40
	P2DScreen::Mgr_tuning* m_resultDoukutuDropItemScreen; // _44
	P2DScreen::Mgr_tuning* m_doukutuCompleteScreen;       // _48
	J2DAnmTransform* m_resultDoukutuAnmTransform;         // _4C
	J2DAnmTransform* m_doukutuCompleteAnmTransform;       // _50
	J2DAnmColor* m_resultDoukutuAnmColor;                 // _54
	J2DAnmColor* m_doukutuCompleteAnmColor;               // _58
	J2DAnmTextureSRTKey* m_resultSRTKey;                  // _5C
	J2DAnmTevRegKey* m_resultTevRegKey;                   // _60
	f32 _64;                                              // _64
	f32 _68;                                              // _68
	f32 _6C;                                              // _6C
	f32 _70;                                              // _70
	f32 _74;                                              // _74
	f32 _78;                                              // _78
	efx2d::T2DCavecompLoop* m_efxCavecompLoop;            // _7C
	og::Screen::StickAnimMgr* m_stickAnimMgr;             // _80
	og::Screen::ScaleMgr* m_scaleMgr;                     // _84
	khUtilFadePane* _88;                                  // _88
	khUtilFadePane* _8C;                                  // _8C
	khUtilFadePane* _90;                                  // _90
	khUtilFadePane* _94;                                  // _94
	og::Screen::CallBack_CounterRV* _98;                  // _98
	og::Screen::CallBack_CounterRV* _9C;                  // _9C
	og::Screen::CallBack_CounterRV* _A0;                  // _A0
	og::Screen::CallBack_CounterRV* _A4;                  // _A4
	og::Screen::CallBack_CounterRV* _A8;                  // _A8
	og::Screen::CallBack_CounterRV* _AC;                  // _AC
	og::Screen::CallBack_CounterRV* _B0;                  // _B0
	u32 _B4;                                              // _B4, unknown
	u32 _B8;                                              // _B8
	u8 _BC[0x8];                                          // _BC, unknown
	u32 _C4;                                              // _C4, unknown
	u8 _C8[0x4];                                          // _C8, unknown
	u32 _CC;                                              // _CC
	f32 _D0;                                              // _D0
	f32 _D4;                                              // _D4
	uint _D8;                                             // _D8
	u32 _DC;                                              // _DC
	uint _E0;                                             // _E0
	uint _E4;                                             // _E4
	u32 _E8;                                              // _E8, unknown
	u32 _EC;                                              // _EC, unknown
	int _F0;                                              // _F0, state or status?
	int _F4;                                              // _F4
	u8 _F8[0x4];                                          // _F8, unknown
	f32 _FC;                                              // _FC
	f32 _100;                                             // _100
	u8 _104;                                              // _104
	u8 _105;                                              // _105
	u8 _106;                                              // _106
	u8 _107;                                              // _107
};

struct SceneCaveResult : public ::Screen::SceneBase {
	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif