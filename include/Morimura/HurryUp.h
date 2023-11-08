#ifndef _MORIMURA_HURRYUP_H
#define _MORIMURA_HURRYUP_H

#include "Morimura/Bases.h"

namespace Morimura {
struct THuWhitePaneSet;

/**
 * @size{0x118}
 */
struct THurryUp2D : public TTestBase {
	/**
	 * @size{0xC}
	 */
	struct TStateParam {
		TStateParam()
		{
			mAlpha1    = 0;
			mAlpha2    = 255;
			mScale     = 0.0f;
			mGoalScale = 1.0f;
		}

		u8 mAlpha1;     // _00
		u8 mAlpha2;     // _01
		f32 mScale;     // _04
		f32 mGoalScale; // _08
	};

	enum HurryUpState { StateInit, StatePlaySE, StateScaleUp1, StateColorUp, StateScaleUp2 };

	THurryUp2D();

	virtual ~THurryUp2D() { }                                                                                // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*);                                                    // _44
	virtual void doCreate(JKRArchive*);                                                                      // _4C
	virtual bool doUpdate();                                                                                 // _58
	virtual void doDraw(Graphics& gfx);                                                                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mIsSection ? mDisp : getDispMember(); } // _78 (weak)

	void init();
	void move();
	void scaleUp1();
	void scaleUp2();
	void colorUp();
	void changeState(int, f32);
	void calcCount();

	inline f32 calcTimer(int numA, int numB, int numC, int numD)
	{
		f32 test = 0.000004f;
		if (mIsSection) {
			test = 0.0001f;
		}
		int check = (mDisp->mCurrSunRatio - mDisp->mDuration) / test;
		mState    = StatePlaySE;
		int time  = check;
		if (check >= numA) {
			time   = check - numA;
			mState = StateScaleUp1;
			if (time >= numB) {
				time   = check - numB;
				mState = StateColorUp;
				if (time >= numC) {
					time   = check - numC;
					mState = StateScaleUp2;
					if (time >= numD) {
						time = check - numD;
					}
				}
			}
		}
		return time;
	}

	JKRArchive* mArchive;                 // _78
	P2DScreen::Mgr_tuning* mScreen;       // _7C
	J2DPane* mPaneHurry;                  // _80
	J2DPane* mPaneSundown;                // _84
	J2DPane* mPaneSunW;                   // _88
	THuWhitePaneSet* mWhitePane;          // _8C
	J2DPane* mPaneSunL;                   // _90
	J2DPane* mPaneHurry2;                 // _94
	J2DPane* mPaneSundown2;               // _98
	JGeometry::TVec2f mPane1Pos;          // _9C
	JGeometry::TVec2f mPane2Pos;          // _A4
	og::Screen::DispMemberHurryUp* mDisp; // _AC
	int mState;                           // _B0
	f32 mTimer;                           // _B4
	f32 mAlphaMod1;                       // _B8
	f32 mAlphaMod2;                       // _BC
	u16 _C0;                              // _C0
	u16 _C2;                              // _C2
	bool mDoDraw;                         // _C4
	f32 _C8;                              // _C8
	f32 mTimeMax;                         // _CC
	TStateParam mParams[6];               // _D0

	static f32 mInitPosX;  // = 900.0f;
	static f32 mMoveSp;    // = 12.0f;
	static f32 mScaleRate; // = 1.02f;
	static f32 mScaleSp1;  // 0.01f;
	static f32 mColorUpSp; // 1.0f;
	static f32 mScaleSp2;  // 0.1f;
};

/**
 * @size{0x224}
 */
struct THurryUpScene : public THIOScene {
	THurryUpScene() { }

	// ~THurryUpScene(); // unused/inlined

	virtual const char* getResName() const { return "res_ground.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		THurryUp2D* obj = new THurryUp2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                // _20 (weak)
	virtual SceneType getSceneType() { return SCENE_HURRY_UP; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }        // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_HURRY_UP; } // _10 (weak)

	// _00      = VTBL
	// _00-_220 = Morimura::THIOScene
};

} // namespace Morimura

#endif
