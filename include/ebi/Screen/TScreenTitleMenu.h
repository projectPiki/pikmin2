#ifndef _EBI_SCREEN_TSCREENTITLEMENU_H
#define _EBI_SCREEN_TSCREENTITLEMENU_H

#include "types.h"
#include "ebi/Utility.h"
#include "ebi/E2DCallBack.h"

struct Controller;

namespace ebi {
namespace Screen {

// exclusive to JP - name inferred from TTitleMenu_Object_Icon, given it does the same thing
// size: 0xC.
struct TScreenTitleMenu_Object_Icon {
	TScreenTitleMenu_Object_Icon() { }

	inline void start()
	{
		mStatus = 1;
		mAnimA->play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mAnimB->stop();
	}

	inline void update()
	{
		switch (mStatus) {
		case 0:
			break;
		case 1:
			if (mAnimA->isFinish()) {
				mStatus = 2;
				mAnimA->stop();
				mAnimB->play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);
			}
			break;
		case 3:
			if (mAnimA->isFinish()) {
				mStatus = 0;
			}
			break;
		}
	}

	inline void stop()
	{
		mStatus = 3;
		mAnimA->playBack(sys->mDeltaTime * 60.0f, true);
		mAnimB->stop();
	}

	E2DCallBack_AnmBase* mAnimA; // _00
	E2DCallBack_AnmBase* mAnimB; // _04
	int mStatus;                 // _08
};

// exclusive to JP - name inferred from leftover strings in ebiScreenE3TitleMenu.cpp
// size: 0x65C
struct TScreenTitleMenu {
	enum State {
		STATE_Inactive = 0,
		STATE_Opening  = 1,
		STATE_Active   = 2,
		STATE_Closing  = 3,
	};

	TScreenTitleMenu()
	    : mDecided(false)
	    , mCloseCounter(0)
	    , mCloseCounterMax(0)
	    , mState(0)
	{
	}

	void loadResource();
	void setController(Controller* controller);
	void openScreen(bool unused); // might be another arg type, unsure
	void killScreen();
	u8 isFinishScreen();
	bool isDecide();
	bool isCancel();
	void setState(s32 state);
	void update();
	void draw();
	void showPika_(s32 menuIdx);
	void hidePika_(s32 menuIdx);

	Controller* mController;                     // _000
	EUTPadInterface_countNum mPad;               // _004
	bool mDecided;                               // _030
	bool mCancelled;                             // _031
	u32 mCloseCounter;                           // _034
	u32 mCloseCounterMax;                        // _038
	s32 mSelectedMenu;                           // _03C
	TScreenTitleMenu_Object_Icon mLeftIcons[2];  // _040
	TScreenTitleMenu_Object_Icon mRightIcons[2]; // _058
	s32 mState;                                  // _070
	P2DScreen::Mgr_tuning* mScreen;              // _074
	J2DPane* mCategoryPanes[2];                  // _078
	s32 mPikminCounts[2];                        // _080
	J2DPane* mPikminPanes[2][100];               // _088
	E2DCallBack_AnmBase mCategoryAnims[2];       // _3A8
	E2DCallBack_AnmBase mLeftIntroAnim[2];       // _420
	E2DCallBack_AnmBase mRightIntroAnim[2];      // _498
	E2DCallBack_AnmBase mLeftLoopAnim[2];        // _510
	E2DCallBack_AnmBase mRightLoopAnim[2];       // _588
	E2DCallBack_AnmBase mOpeningAnim;            // _600
	E2DCallBack_CalcAnimation mCalcAnimation;    // _63C
};

} // namespace Screen
} // namespace ebi

#endif
