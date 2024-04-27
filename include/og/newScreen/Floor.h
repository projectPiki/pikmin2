#ifndef _OG_NEWSCREEN_FLOOR_H
#define _OG_NEWSCREEN_FLOOR_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"
#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/DispMember.h"

struct Graphics;
struct JKRArchive;
struct J2DPane;

namespace P2DScreen {
struct Mgr_tuning;
}

namespace og {
namespace Screen {
struct AnimGroup;
struct AlphaMgr;
struct CallBack_CounterRV;
} // namespace Screen

namespace newScreen {
struct TitleMsg;

// Size: 0x220
struct Floor : public ::Screen::SceneBase {
	Floor();

	virtual const char* getResName() const { return ""; }         // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_FLOOR; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }      // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_FLOOR; } // _10 (weak)
	virtual void doCreateObj(JKRArchive*);                        // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);       // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

// Size: 0xBC
struct ObjFloor : public ::Screen::ObjBase {

	enum FloorType { FLOOR_Story, FLOOR_Challenge, FLOOR_Versus };

	ObjFloor(char const*);

	virtual ~ObjFloor();                                  // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68

	inline bool isFLOOR();
	inline bool isCHALLENGE();
	inline bool isVS();
	void setCaveMsgID(u32, char*);
	bool commonUpdate();
	void drawBG(Graphics&);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberFloor* mDisp;            // _38
	char mTextTag[8];                              // _3C
	u8 _44[4];                                     // _44
	P2DScreen::Mgr_tuning* mScreenName;            // _48
	P2DScreen::Mgr_tuning* mScreenFont;            // _4C
	P2DScreen::Mgr_tuning* mScreenRules;           // _50
	og::Screen::CallBack_CounterRV* mCounterFloor; // _54
	f32 mFadeLevel;                                // _58
	f32 mAlpha;                                    // _5C
	f32 mTimer;                                    // _60
	u8 mDoFadeout;                                 // _64
	u8 _65[0x3];                                   // _65, padding/unknown
	JUtility::TColor mColor;                       // _68
	u8 mDoEnd;                                     // _6C
	f32 mBackgroundAlpha;                          // _70
	TitleMsg* mTitle;                              // _74
	TitleMsg* mSublevelMsg;                        // _78
	J2DPane* mSublevelPane;                        // _7C
	f32 mSublevelXoffs;                            // _80
	f32 mSublevelYoffs;                            // _84
	og::Screen::AnimGroup* mAnims;                 // _88
	J2DPane* mRuleMesgPane;                        // _8C
	J2DPane* mRulesPaneList[6];                    // _90
	bool mIsButtonShown;                           // _A8
	J2DPane* mButtonPane;                          // _AC
	J2DPane* mLoadingPane;                         // _B0
	og::Screen::AlphaMgr* mButtonAlpha;            // _B4
	f32 mButtonAlphaTimer;                         // _B8

	static struct StaticValues {
		inline StaticValues()
		    : mColors1()
		    , mColors2()
		{
			mMaxAlpha              = 0.3f;
			mFadeinTime            = 1.0f;
			mFadeoutTime           = 0.2f;
			mFinishWaitTime        = 3.0f;
			mStandardNameXOffset   = 0.0f;
			mStandardNameYOffset   = -15.0f;
			mStandardNameScale     = 1.0f;
			mUnused1               = 30.0f;
			mVsNameXOffset         = 0.0f;
			mVsNameYOffset         = -50.0f;
			mVsNameScale           = 1.0f;
			mSublevelXOffset       = -15.0f;
			mSublevelYOffset       = 0.0f;
			mSublevelScale         = 1.5f;
			mUnused2               = 0.0f;
			mSublevel2DigitXOffset = 15.0f;
			mScaleParm1            = 0.12f;
			mScaleParm2            = 7.0f;
			mScaleParm3            = 1.5f;
			mScaleParm4            = 0.06f;
			mColors1[0].set(255, 255, 200, 255);
			mColors2[0].set(0, 0, 50, 0);

			mColors1[1].set(255, 255, 255, 255);
			mColors2[1].set(100, 100, 0, 0);

			mColors1[2].set(255, 255, 156, 255);
			mColors2[2].set(255, 255, 0, 0);
			mUnused3               = false;
			mChallengeTitleYOffset = 10.0f;
			mStoryTitleYOffset     = 0.0f;
			mVsTitleYOffset        = 3.0f;
			mRuleMsgIndex          = 0;
			mDoUseSetRuleMsgIndex  = false;
		};

		f32 mMaxAlpha;                // _00
		f32 mFadeinTime;              // _04
		f32 mFadeoutTime;             // _08
		f32 mFinishWaitTime;          // _0C
		f32 mStandardNameXOffset;     // _10
		f32 mStandardNameYOffset;     // _14
		f32 mStandardNameScale;       // _18
		f32 mUnused1;                 // _1C
		f32 mVsNameXOffset;           // _20
		f32 mVsNameYOffset;           // _24
		f32 mVsNameScale;             // _28
		f32 mSublevelXOffset;         // _2C
		f32 mSublevelYOffset;         // _30
		f32 mSublevelScale;           // _34
		f32 mUnused2;                 // _38
		f32 mSublevel2DigitXOffset;   // _3C
		f32 mScaleParm1;              // _40
		f32 mScaleParm2;              // _44
		f32 mScaleParm3;              // _48
		f32 mScaleParm4;              // _4C
		f32 mChallengeTitleYOffset;   // _50
		f32 mStoryTitleYOffset;       // _54
		f32 mVsTitleYOffset;          // _58
		JUtility::TColor mColors1[3]; // _5C
		JUtility::TColor mColors2[3]; // _68
		int mRuleMsgIndex;            // _74
		u8 mUnused3;                  // _78
		bool mDoUseSetRuleMsgIndex;   // _79
	} msVal;
};

extern u64 vsRuleMsgId[6];
} // namespace newScreen
} // namespace og

#endif
