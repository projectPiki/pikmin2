#ifndef _KH_FINALRESULT_H
#define _KH_FINALRESULT_H

#include "kh/khUtil.h"
#include "Game/Result.h"
#include "Game/Highscore.h"
#include "ebi/Save.h"
#include "efx2d/T2DCavecomp.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/StickAnimMgr.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"

namespace kh {
namespace Screen {
struct TotalResultData {
	P2DScreen::Mgr** m_mgr; // _00
	int _04;                // _04
	u8 _08[0xC];            // _08, unknown
	int _14;                // _14
	u8 _18;                 // _18
};

struct DispFinalResult : public og::Screen::DispMemberBase {
	enum ResultType { PostDebt, Complete };

	DispFinalResult(TotalResultData*, ResultType, JKRHeap*);

	virtual u32 getSize() { return sizeof(DispFinalResult); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FINAL_RESULT; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	TotalResultData* m_totalResultData; // _08
	ResultType m_resultType;            // _0C
	int m_exitStatus;                   // _10
	JKRHeap* m_heap;                    // _14
};

struct ObjFinalResult : public ::Screen::ObjBase {
	ObjFinalResult();

	enum ObjState { StatusNormal, StatusScrollUp, StatusScrollDown, StatusForceScroll };

	enum ObjFlag { SaveOpen = 4 };

	virtual ~ObjFinalResult() { }       // _08 (weak)
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
	JUtility::TColor getClr(const JUtility::TColor&, const JUtility::TColor&, f32);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	ebi::Save::TMgr* m_saveMgr;                         // _38
	P2DScreen::Mgr_tuning* m_screen;                    // _3C
	J2DAnmTransform* m_anmTrans1;                       // _40
	J2DAnmTransform* m_anmTrans2;                       // _44
	J2DAnmTransform* m_anmTrans3;                       // _48
	J2DAnmTransform* m_anmTrans4;                       // _4C
	J2DAnmTransform* m_anmTrans5;                       // _50
	J2DAnmTransform* m_anmTrans6;                       // _54
	J2DAnmBase* m_anmCol1;                              // _58
	J2DAnmBase* m_anmCol2;                              // _5C
	J2DAnmBase* m_anmCol3;                              // _60
	J2DAnmTextureSRTKey* m_anmSRT;                      // _64
	J2DAnmTevRegKey* m_anmTev;                          // _68
	f32 _6C;                                            // _6C
	f32 _70;                                            // _70
	f32 _74;                                            // _74
	f32 _78;                                            // _78
	f32 _7C;                                            // _7C
	f32 _80;                                            // _80
	f32 _84;                                            // _84
	f32 _88;                                            // _88
	og::Screen::StickAnimMgr* m_stickAnimMgr;           // _8C
	khUtilFadePane* m_fadePane3DStick;                  // _90
	khUtilFadePane* m_fadePaneYameU;                    // _94
	khUtilFadePane* m_fadePaneYameL;                    // _98
	khUtilFadePane* m_fadePaneAButton;                  // _9C
	og::Screen::CallBack_CounterRV* m_counters1[4];     // _A0
	og::Screen::CallBack_CounterRV* m_counters2[4];     // _B0
	og::Screen::CallBack_CounterRV* m_counterScore1[4]; // _C0
	og::Screen::CallBack_CounterRV* m_counterScore2[4]; // _D0
	u32 m_counterData1[4];                              // _E0
	u32 m_counterData2[4];                              // _F0
	u32 m_counterDataScore1[4];                         // _100
	u32 m_counterDataScore2[4];                         // _110
	f32 m_timer;                                        // _120
	JUtility::TColor m_color;                           // _124
	f32 m_scrollYPos;                                   // _128
	f32 m_scrollMove;                                   // _12C
	int m_currentPage;                                  // _130
	int m_scrollTargetPos;                              // _134
	int m_scrollMoveProgress;                           // _138
	int m_autoScrollDelay;
	int _140;
	int _144;
	int m_state;    // _148
	u8 _14C;        // _14C
	u8 _14D;        // _14D
	u8 m_flags;     // _14E
	u8 m_fadeAlpha; // _14F

	static struct StaticValues {
		inline StaticValues()
		{
			m_animSpeed     = 1.0f;
			_04             = 16;
			_08             = 90;
			_1C             = 30;
			_1D             = 100;
			m_fadeAlphaRate = 10;
			_1F             = 160;
			_20             = 32;
			_21             = 80;
			_0C             = 0.05f;
			m_colors[0].set(255, 0, 64, 0);
			m_colors[1].set(255, 255, 0, 0);
			m_colors[2].set(255, 48, 80, 0);
		}

		f32 m_animSpeed; // _00
		int _04;
		int _08;
		f32 _0C;
		JUtility::TColor m_colors[3];
		u8 _1C;
		u8 _1D;
		u8 m_fadeAlphaRate;
		u8 _1F;
		u8 _20;
		u8 _21;
	} msVal;
};

struct SceneFinalResult : public ::Screen::SceneBase {
	virtual SceneType getSceneType() { return SCENE_FINAL_RESULT; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }              // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_FINAL_RESULT; } // _10 (weak)
	virtual const char* getResName() const { return ""; }                // _1C (weak)
	virtual void doCreateObj(JKRArchive*) { }                            // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*);              // _24

	void createDispMember(const int*, const int*, Game::Highscore**);

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif