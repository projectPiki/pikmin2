#ifndef _KH_FINALRESULT_H
#define _KH_FINALRESULT_H

#include "kh/khUtil.h"
#include "Game/Result.h"
#include "Game/Highscore.h"
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
struct TotalResultData {
	P2DScreen::Mgr* m_mgr; // _00
	int _04;               // _04
	u8 _08[0xC];           // _08, unknown
	int _14;               // _14
	u8 _18;                // _18
};

struct DispFinalResult : public og::Screen::DispMemberBase {
	enum ResultType {

	};

	DispFinalResult(TotalResultData*, ResultType, JKRHeap*);

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	TotalResultData* m_totalResultData; // _08
	ResultType m_resultType;            // _0C
	int _10;                            // _10
	JKRHeap* m_heap;                    // _14
};

struct ObjFinalResult : public ::Screen::ObjBase {
	ObjFinalResult();

	virtual ~ObjFinalResult();          // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdateFadein();      // _50
	virtual bool doUpdate();            // _58
	virtual bool doUpdateFadeout();     // _60
	virtual void doDraw(Graphics& gfx); // _68

	void updateCommon();
	void statusNormal();
	void statusScrollUp();
	void statusScrollDown();
	void statusForceScroll();
	void drawReplace(Graphics&, int);
	void getClr(const JUtility::TColor&, const JUtility::TColor&, f32);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	ebi::Save::TMgr* m_saveMgr;               // _38
	P2DScreen::Mgr_tuning* _3C;               // _3C
	J2DAnmTransform* _40;                     // _40
	J2DAnmTransform* _44;                     // _44
	J2DAnmTransform* _48;                     // _48
	J2DAnmTransform* _4C;                     // _4C
	J2DAnmTransform* _50;                     // _50
	J2DAnmTransform* _54;                     // _54
	J2DAnmBase* _58;                          // _58
	u8 _5C[0x8];                              // _5C, unknown
	J2DAnmTextureSRTKey* _64;                 // _64
	J2DAnmTevRegKey* _68;                     // _68
	f32 _6C;                                  // _6C
	f32 _70;                                  // _70
	f32 _74;                                  // _74
	f32 _78;                                  // _78
	f32 _7C;                                  // _7C
	f32 _80;                                  // _80
	f32 _84;                                  // _84
	f32 _88;                                  // _88
	og::Screen::StickAnimMgr* m_stickAnimMgr; // _8C
	khUtilFadePane* _90;                      // _90
	khUtilFadePane* _94;                      // _94
	khUtilFadePane* _98;                      // _98
	khUtilFadePane* _9C;                      // _9C
	og::Screen::CallBack_CounterRV* _A0[4];   // _A0
	og::Screen::CallBack_CounterRV* _B0[4];   // _B0
	og::Screen::CallBack_CounterRV* _C0;      // _C0
	og::Screen::CallBack_CounterRV* _C4;      // _C4
	og::Screen::CallBack_CounterRV* _C8;      // _C8
	og::Screen::CallBack_CounterRV* _CC;      // _CC
	og::Screen::CallBack_CounterRV* _D0;      // _D0
	og::Screen::CallBack_CounterRV* _D4;      // _D4
	og::Screen::CallBack_CounterRV* _D8;      // _D8
	og::Screen::CallBack_CounterRV* _DC;      // _DC
	u32 _E0[4];                               // _E0
	u32 _F0[4];                               // _F0
	u32 _100;                                 // _100
	u32 _104;                                 // _104
	u32 _108;                                 // _108
	u32 _10C;                                 // _10C
	u32 _110;                                 // _110
	u32 _114;                                 // _114
	u32 _118;                                 // _118
	u32 _11C;                                 // _11C
	f32 _120;                                 // _120
	JUtility::TColor _124;                    // _124
	u8 _128[0x8];                             // _128, unknown
	int _130;                                 // _130
	u8 _134[0x14];                            // _134, unknown
	int _148;                                 // _148
	u8 _14C;                                  // _14C
	u8 _14D;                                  // _14D
	u8 _14E;                                  // _14E
	u8 _14F;                                  // _14F
};

struct SceneFinalResult : public ::Screen::SceneBase {
	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	void createDispMember(const int*, const int*, Game::Highscore**);

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif