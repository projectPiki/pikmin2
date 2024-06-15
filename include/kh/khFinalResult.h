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
struct OneResultData {
	OneResultData(int, int, int, int, int, const char*, JKRArchive*);

	// unknown
	P2DScreen::Mgr* mScreen; // _00
	int mScore[4];           // _04
	int mScore5;             // _14
	u8 mDoDraw;              // _18
};

struct TotalResultData {
	TotalResultData() { } // remove this when the below works

	TotalResultData(const int*, const int*, Game::Highscore**);

	// unused/inlined:
	void init();
	void draw(Graphics&, u32, u32);

	OneResultData** mResults; // _00, array of 16 results
};

struct DispFinalResult : public og::Screen::DispMemberBase {
	enum ResultType { PostDebt, Complete };

	DispFinalResult(TotalResultData*, ResultType, JKRHeap*);

	virtual u32 getSize() { return sizeof(DispFinalResult); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FINAL_RESULT; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	TotalResultData* mTotalResultData; // _08
	ResultType mResultType;            // _0C
	int mExitStatus;                   // _10
	JKRHeap* mHeap;                    // _14
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
	ebi::Save::TMgr* mSaveMgr;                         // _38
	P2DScreen::Mgr_tuning* mScreen;                    // _3C
	J2DAnmTransform* mAnmTrans1;                       // _40
	J2DAnmTransform* mAnmTrans2;                       // _44
	J2DAnmTransform* mAnmTrans3;                       // _48
	J2DAnmTransform* mAnmTrans4;                       // _4C
	J2DAnmTransform* mAnmTrans5;                       // _50
	J2DAnmTransform* mAnmTrans6;                       // _54
	J2DAnmBase* mAnmCol1;                              // _58
	J2DAnmBase* mAnmCol2;                              // _5C
	J2DAnmBase* mAnmCol3;                              // _60
	J2DAnmTextureSRTKey* mAnmSRT;                      // _64
	J2DAnmTevRegKey* mAnmTev;                          // _68
	f32 mAnimTimers[8];                                // _6C
	og::Screen::StickAnimMgr* mStickAnimMgr;           // _8C
	khUtilFadePane* mFadePane3DStick;                  // _90
	khUtilFadePane* mFadePaneYameU;                    // _94
	khUtilFadePane* mFadePaneYameL;                    // _98
	khUtilFadePane* mFadePaneAButton;                  // _9C
	og::Screen::CallBack_CounterRV* mCounters1[4];     // _A0
	og::Screen::CallBack_CounterRV* mCounters2[4];     // _B0
	og::Screen::CallBack_CounterRV* mCounterScore1[4]; // _C0
	og::Screen::CallBack_CounterRV* mCounterScore2[4]; // _D0
	u32 mCounterData1[4];                              // _E0
	u32 mCounterData2[4];                              // _F0
	u32 mCounterDataScore1[4];                         // _100
	u32 mCounterDataScore2[4];                         // _110
	f32 mTimer;                                        // _120
	JUtility::TColor mColor;                           // _124
	f32 mScrollYPos;                                   // _128
	f32 mScrollMove;                                   // _12C
	int mCurrentPage;                                  // _130
	int mScrollTargetPos;                              // _134
	int mScrollMoveProgress;                           // _138
	int mAutoScrollDelay;                              // _13C
	u32 mScissorYPos;                                  // _140
	u32 mScissorBoundsHeight;                          // _144
	int mState;                                        // _148
	u8 mRandAnimCounter1;                              // _14C
	u8 mRandAnimCounter2;                              // _14D
	u8 mFlags;                                         // _14E
	u8 mFadeAlpha;                                     // _14F

	static struct StaticValues {
		inline StaticValues()
		{
			mAnimSpeed     = 1.0f;
			_04            = 16;
			_08            = 90;
			_1C            = 30;
			_1D            = 100;
			mFadeAlphaRate = 10;
			_1F            = 160;
			_20            = 32;
			_21            = 80;
			_0C            = 0.05f;
			mColors[0].set(255, 0, 64, 0);
			mColors[1].set(255, 255, 0, 0);
			mColors[2].set(255, 48, 80, 0);
		}

		f32 mAnimSpeed;              // _00
		int _04;                     // _04
		int _08;                     // _08
		f32 _0C;                     // _0C
		JUtility::TColor mColors[3]; // _10
		u8 _1C;                      // _1C
		u8 _1D;                      // _1D
		u8 mFadeAlphaRate;           // _1E
		u8 _1F;                      // _1F
		u8 _20;                      // _20
		u8 _21;                      // _21
	} msVal;
};

struct SceneFinalResult : public ::Screen::SceneBase {
	virtual const char* getResName() const { return ""; }                // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_FINAL_RESULT; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }              // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_FINAL_RESULT; } // _10 (weak)
	virtual void doCreateObj(JKRArchive*) { }                            // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*);              // _24

	static TotalResultData* createDispMember(const int*, const int*, Game::Highscore**);

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif
