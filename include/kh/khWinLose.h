#ifndef _KH_WINLOSE_H
#define _KH_WINLOSE_H

#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"

struct JAISound;

enum WinLoseCondition { WinPlayer1 = 1, WinPlayer2 = 2, Draw = 3, Timeup1P = 4, Timeup2P = 5 };

namespace kh {
namespace Screen {
struct DispWinLose : public og::Screen::DispMemberBase {
	DispWinLose(int type, int state)
	{
		mOutcome = type;
		mStatus  = state;
	}

	virtual u32 getSize() { return sizeof(DispWinLose); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }         // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WIN_LOSE; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mOutcome; // _08
	int mStatus;  // _0C
};

struct DispWinLoseReason : public og::Screen::DispMemberBase {

	virtual u32 getSize() { return sizeof(DispWinLoseReason); }  // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WIN_LOSE_REASON; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mOutcomeP1; // _08
	int mOutcomeP2; // _0C
};

struct ObjWinLose : public ::Screen::ObjBase {
	ObjWinLose();

	virtual ~ObjWinLose() { }           // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual void doDraw(Graphics& gfx); // _68

	bool updateAnimation();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* mScreenA[2]; // _38
	P2DScreen::Mgr_tuning* mScreenB[2]; // _40
	J2DAnmTransform* mAnim1[2];         // _48
	J2DAnmTransform* mAnim2[2];         // _50
	J2DAnmColor* mAnim3[2];             // _58
	J2DAnmColor* mAnim4[2];             // _60
	f32 mAnimTime1[2];                  // _68
	f32 mAnimTime2[2];                  // _70
	f32 mAnimTime3[2];                  // _78
	f32 mAnimTime4[2];                  // _80
	f32 mYOffset[2];                    // _88
	bool mDoUpdateAnim;                 // _90
	int mFrameTimer;                    // _94
	int mScreenNum;                     // _98
	u8 mAlpha;                          // _9C

	static struct StaticValues {
		inline StaticValues()
		{
			mAnimSpeed   = 1.0f;
			mYOffsetP1   = -120.0f;
			mYOffsetP2   = 120.0f;
			mDuration    = 60.0f;
			mFinishFrame = 60;
			mEndBGMFrame = 180;
			mAlphaInc    = 16;
		}

		f32 mAnimSpeed;   // _00
		f32 mYOffsetP1;   // _04
		f32 mYOffsetP2;   // _08
		f32 mDuration;    // _0C
		int mFinishFrame; // _10
		int mEndBGMFrame; // _14
		u8 mAlphaInc;     // _18
	} msVal;
};

struct ObjWinLoseReason : public ::Screen::ObjBase {
	ObjWinLoseReason(int type)
	{
		mScreen  = nullptr;
		mAnim1   = nullptr;
		mAnim2   = nullptr;
		mUnused2 = 0.0f;
		mUnused1 = 0.0f;
		mType    = type;
	}

	virtual ~ObjWinLoseReason() { }     // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual void doDraw(Graphics& gfx); // _68

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* mScreen; // _38
	J2DAnmBase* mAnim1;             // _3C
	J2DAnmBase* mAnim2;             // _40
	f32 mUnused1;                   // _44
	f32 mUnused2;                   // _48
	u32 mType;                      // _4C

	static struct StaticValues {
		inline StaticValues()
		{
			mAnimSpeed     = 1.0f;
			mYOffsetP1     = -120.0f;
			mYOffsetP2     = 120.0f;
			mProgressFrame = 100;
			mFinishFrame   = 125;
			_14            = 100;
			mTimeSpeed     = 2;
		}

		f32 mAnimSpeed; // _00
		f32 mYOffsetP1; // _04
		f32 mYOffsetP2; // _08
		int mProgressFrame;
		int mFinishFrame;
		int _14;
		u8 mTimeSpeed;
	} msVal;
};

struct SceneWinLose : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "win_lose.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_WIN_LOSE; }       // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }           // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_WIN_LOSE; }  // _10 (weak)
	virtual void doCreateObj(JKRArchive* archive)                     // _20 (weak)
	{
		registObj(new ObjWinLose, archive);
	}

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct SceneWinLoseReason : public ::Screen::SceneBase {
	SceneWinLoseReason();

	virtual const char* getResName() const { return "win_lose_reason.szs"; }; // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_WIN_LOSE_REASON; }        // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                   // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_WIN_LOSE_REASON; }   // _10 (weak)
	virtual void doCreateObj(JKRArchive*);                                    // _20
	virtual void doUpdateActive();                                            // _2C
	virtual bool doEnd(::Screen::EndSceneArg*);                               // _40

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	::Screen::ObjBase* mScreenObj[2]; // _220
	int mOutcome[2];                  // _228
	bool mDone[2];
	int mCounter; // _234
};
} // namespace Screen
} // namespace kh

#endif
