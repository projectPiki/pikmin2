#ifndef _EBI_SCREEN_TTITLEMENU_H
#define _EBI_SCREEN_TTITLEMENU_H

#include "ebi/Screen/TScreenBase.h"
#include "ebi/Utility.h"
#include "ebi/E2DCallBack.h"

struct Controller;

namespace ebi {
namespace Screen {

struct TTitleMenu_Object_Icon {
	TTitleMenu_Object_Icon() { }

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

	E2DCallBack_AnmBase* mAnimA;
	E2DCallBack_AnmBase* mAnimB;
	int mStatus;
};

struct TTitleMenu : public TScreenBase {
	TTitleMenu()
	    : mDecidedMenuOption(false)
	    , mMenuCloseCounter(0)
	    , mMenuCloseCounterMax(0)
	    , mState(0)
	{
	}

	virtual void doSetArchive(JKRArchive*);          // _24
	virtual void doOpenScreen(ArgOpen*);             // _28
	virtual void doCloseScreen(ArgClose*);           // _2C
	virtual void doInitWaitState();                  // _34
	virtual bool doUpdateStateOpen();                // _38
	virtual bool doUpdateStateWait();                // _3C
	virtual bool doUpdateStateClose();               // _40
	virtual void doDraw();                           // _44
	virtual char* getName() { return "TTitleMenu"; } // _48 (weak)

	void setController(Controller*);
	bool openMenuSet(ArgOpen*);
	bool isDecide();
	bool isCancel();
	void showPika_(s32);
	void hidePika_(s32);

	// _00     = VTBL
	// _00-_08 = TScreenBase
	Controller* mController;             // _0C
	EUTPadInterface_countNum mPad;       // _10
	s32 mSelectID;                       // _3C
	bool mDecidedMenuOption;             // _40
	bool mDoCloseMenu;                   // _41
	u32 mMenuCloseCounter;               // _44
	u32 mMenuCloseCounterMax;            // _48
	TTitleMenu_Object_Icon mObjIcon[6];  // _4C
	TTitleMenu_Object_Icon mObjIcon2[6]; // _94
	int mState;                          // _DC (0 means no challenge mode, 1 means challenge mode)
	P2DScreen::Mgr_tuning* mMainScreen;  // _E0
	J2DPane* mCategoryPanes[6];          // _E4
	int mPikiCounts[6];                  // _FC
	J2DPane* mPikaPanes[6][100];         // _114
	E2DCallBack_AnmBase mAnims1[2][6];   // _A74
	E2DCallBack_AnmBase mAnims2[6];      // _D44
	E2DCallBack_AnmBase mAnims3[6];      // _EAC
	E2DCallBack_AnmBase mAnims4[6];      // _1014
	E2DCallBack_AnmBase mAnims5[6];      // _117C
	E2DCallBack_AnmBase mAnim6;          // _117C
	E2DCallBack_AnmBase mAnim7;          // _117C
	E2DCallBack_CalcAnimation mAnim8;    // _117C
};

} // namespace Screen
} // namespace ebi

#endif
