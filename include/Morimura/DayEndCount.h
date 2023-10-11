#ifndef _MORIMURA_DAYENDCOUNT_H
#define _MORIMURA_DAYENDCOUNT_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUtility/TColor.h"
#include "Morimura/Bases.h"
#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "Screen/screenObj.h"
#include "types.h"

struct Graphics;
struct JKRArchive;
struct J2DPane;

namespace P2DScreen {
struct Mgr_tuning;
}

namespace Morimura {
struct TChallengeEndCount2p;

/**
 * @size{0xD4}
 */
struct TDayEndCount : public TTestBase {
	TDayEndCount();

// 0 through 10
#define COUNTDOWN_NUMBERS 11

	virtual ~TDayEndCount() { } // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg* arg)
	{
		TTestBase::doStart(arg);
		reset();
		return true;
	}                                   // _44 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual void doDraw(Graphics& gfx); // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase()
	{
		if (mIsSection) {
			return mDispMember;
		} else {
			return getDispMember();
		}
	} // _78 (weak)

	void reset();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;                           // _78
	og::Screen::DispMemberDayEndCount* mDispMember; // _7C
	P2DScreen::Mgr_tuning* mScreenObj;              // _80
	J2DPicture* mCurrNumberPane;                    // _84
	J2DPane** mNumberPaneList;                      // _88
	J2DPicture* mTextPane;                          // _8C
	int mCurrNumberValue;                           // _90
	bool mMode;                                     // _94 (seems to only ever be false)
	JGeometry::TVec2<s16> mTexCoords1[4];           // _96
	JGeometry::TVec2<s16> mTexCoords2[4];           // _A6
	JGeometry::TVec2f mNumberPanePos;               // _B8
	JGeometry::TVec2f mTextPanePos;                 // _C0
	bool mDoPlaySE;                                 // _C8
	bool mSoundEnabled;                             // _C9
	bool mIsChallenge;                              // _CA
	f32 mScale;                                     // _CC
	f32 mOffsetY;                                   // _D0

	static u8 mCountDownType;
	static GXColor mColor;
	static GXColor mNumberColor;
	static bool mTestChangeColor;
	static bool mColorTest;
	static f32 m2pScale;
	static f32 m2pOffsetY;
	static u8 mAlphaMax;
	static f32 mWaitScale;
	static u8 mWaitAlpha;
	static f32 mWaitTime;
	static f32 mStopScale;
	static f32 mScaleMax;
};

struct TChallengeEndCount : public TDayEndCount {
	TChallengeEndCount();

	virtual ~TChallengeEndCount() { }   // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TDayEndCount
};

struct TChallengeEndCount1p : public TChallengeEndCount {
	TChallengeEndCount1p();

	virtual ~TChallengeEndCount1p() { } // _08 (weak)
	virtual bool doUpdate();            // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TChallengeEndCount2p : public TChallengeEndCount {
	TChallengeEndCount2p();

	virtual ~TChallengeEndCount2p() { } // _08 (weak)
	virtual bool doUpdate();            // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TCountDownScene : public THIOScene {
	TCountDownScene() { mChallengeEndCount2p = nullptr; }

	virtual SceneType getSceneType() { return SCENE_COUNT_DOWN; }         // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }             // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_DAY_END_COUNT; } // _10 (weak)
	virtual const char* getResName() const { return "res_ground.szs"; }   // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                                // _20 (weak)
	virtual bool doStart(Screen::StartSceneArg*);                         // _3C

	// _00      = VTBL
	// _00-_220 = Morimura::THIOScene
	TChallengeEndCount2p* mChallengeEndCount2p; // _224
};

} // namespace Morimura

#endif
