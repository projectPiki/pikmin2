#ifndef _OG_SCREEN_DISPMEMBER_H
#define _OG_SCREEN_DISPMEMBER_H

#include "Screen/Enums.h"
#include "og/Screen/Data.h"
#include "IDelegate.h"
#include "id32.h"
#include "Rect.h"
#include "Game/Piki.h" // solely for the piki id enum

struct Controller;

namespace Game {
struct BaseGameSection;
} // namespace Game

namespace og {
namespace Screen {

enum MenuFinishState {
	MENUFINISH_CaveExit         = 0,
	MENUFINISH_GetFromSubMember = 1,
	MENUFINISH_ContinueGround   = 2,
	MENUFINISH_GoToSunset       = 3,
	MENUFINISH_ReturnToLastSave = 4,
	MENUFINISH_ContinueCave     = 5,
	MENUFINISH_GiveUpEscape     = 6,
};

// size 0x8
struct DispMemberBase {
	inline DispMemberBase()
	    : mSubMember(nullptr)
	{
	}

	virtual u32 getSize()     = 0;       // _08
	virtual u32 getOwnerID()  = 0;       // _0C
	virtual u64 getMemberID() = 0;       // _10
	virtual void doSetSubMemberAll() { } // _14 (weak)

	bool isID(u32, u64);
	void getMemberName(char*);
	bool setSubMember(DispMemberBase*);
	DispMemberBase* getSubMember(u32, u64);
	void setSubMemberAll();

	// _00 = VTBL
	DispMemberBase* mSubMember; // _04
};

// size 0x24
struct DispMemberAnaDemo : public DispMemberBase {
	inline DispMemberAnaDemo()
	{
		mUnusedValue    = 0;
		mCaveOtakaraNum = 24;
		mCaveOtakaraMax = 69;
		mExitStatus     = MENUFINISH_GetFromSubMember;
		mPikis          = 1;
		mPikisField     = 1;
		mCaveID         = 't_01';
		mNoOpenMenu     = 0;
		mPayedDebt      = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberAnaDemo); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_ANA_DEMO; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mCaveOtakaraNum; // _08
	u32 mCaveOtakaraMax; // _0C
	u32 mPikis;          // _10
	u32 mPikisField;     // _14
	u32 mCaveID;         // _18
	u8 mNoOpenMenu;      // _1C
	u8 mPayedDebt;       // _1D
	u8 mSelected;        // _1E
	u8 mExitStatus;      // _1F
	u32 mUnusedValue;    // _20
};

// size 0x10
struct DispMemberDayEndCount : public DispMemberBase {
	inline DispMemberDayEndCount()
	{
		mDuration     = 0.9f;
		mCurrSunRatio = 0.9f;
	}

	virtual u32 getSize() { return sizeof(DispMemberDayEndCount); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }                 // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_COUNT; }      // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	f32 mCurrSunRatio; // _08
	f32 mDuration;     // _0C
};

// size 0x10
struct DispMemberHurryUp : public DispMemberBase {

	inline DispMemberHurryUp()
	{
		mDuration     = 0.8f;
		mCurrSunRatio = 0.8f;
	}

	virtual u32 getSize() { return sizeof(DispMemberHurryUp); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_HURRY_UP; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	f32 mCurrSunRatio; // _08
	f32 mDuration;     // _0C
};

// size 0x64
struct DispMemberCave : public DispMemberBase {
	inline DispMemberCave()
	{
		mDataGame._14      = true;
		mPayDebt           = false;
		mIsFinalFloor      = false;
		mTreasureDist      = 900.0f;
		mDrawSensor        = false;
		mRadarState        = 1;
		mAppearRadar       = false;
		mIsBitterUnlocked  = false;
		mIsSpicyUnlocked   = false;
		mRadarEnabled      = false;
		mAllTreasureGotten = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberCave); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }           // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CAVE; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame mDataGame;      // _08
	DataNavi mOlimarData;    // _24
	DataNavi mLouieData;     // _24
	f32 mTreasureDist;       // _54
	int mRadarState;         // _58
	u8 mDrawSensor;          // _5C
	u8 mPayDebt;             // _5D
	bool mIsFinalFloor;      // _5E
	u8 mAppearRadar;         // _5F
	bool mRadarEnabled;      // _60
	bool mAllTreasureGotten; // _61
	bool mIsBitterUnlocked;  // _62, have made first bitter spray from berries
	bool mIsSpicyUnlocked;   // _63, have made first spicy spray from berries
};

// size 0x28
struct DispMemberCaveMore : public DispMemberAnaDemo {
	inline DispMemberCaveMore()
	{
		mPikiInDanger   = 0;
		mCantProceed    = 0;
		mUnusedValue    = 0;
		mCaveOtakaraNum = 4;
		mCaveOtakaraMax = 4;
		mPikis          = 10;
	}

	virtual u32 getSize() { return sizeof(DispMemberCaveMore); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CAVE_MORE; }       // _10 (weak)

	// _00     = VTBL
	// _00-_24 = DispMemberAnaDemo
	u8 mPikiInDanger; // _24
	u8 mCantProceed;  // _25
};

// size 0x78
struct DispMemberChallenge1P : public DispMemberBase {

	inline DispMemberChallenge1P()
	{
		mPokoCount        = 2540;
		_58               = false;
		mTimeLimit        = 2469.0f;
		mDeadPikiCount    = 4242;
		mFloorExtendTimer = 0.0f;
	}

	virtual u32 getSize() { return sizeof(DispMemberChallenge1P); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_1P; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame mDataGame;                 // _08
	DataNavi mOlimarData;               // _24
	DataNavi mLouieData;                // _3C
	u32 mPokoCount;                     // _54
	u8 _58;                             // _58
	f32 mTimeLimit;                     // _5C
	f32 mFloorExtendTimer;              // _60
	u32 mDeadPikiCount;                 // _64
	DispMemberDayEndCount mDayEndCount; // _68
};

// size 0x78
struct DispMemberChallenge2P : public DispMemberBase {

	inline DispMemberChallenge2P()
	{
		mPokos            = 2540;
		_58               = false;
		mTimeLimit        = 2469.0f;
		mDeadPiki         = 4242;
		mFloorExtendTimer = 0.0f;
	}

	virtual u32 getSize() { return sizeof(DispMemberChallenge2P); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_2P; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame mDataGame;                 // _08
	DataNavi mOlimarData;               // _24
	DataNavi mLouieData;                // _3C
	u32 mPokos;                         // _54
	u8 _58;                             // _58
	f32 mTimeLimit;                     // _5C
	f32 mFloorExtendTimer;              // _60
	u32 mDeadPiki;                      // _64
	DispMemberDayEndCount mDayEndCount; // _68
};

// size 0x38
struct DispMemberContena : public DispMemberBase {
	inline DispMemberContena() { }

	virtual u32 getSize() { return sizeof(DispMemberContena); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CONTENA; }        // _10 (weak)

	inline DataContena* getDataContena() { return &mDataContena; }

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataContena mDataContena; // _08
};

// size 0x10
struct DispMemberCourseName : public DispMemberBase {
	inline DispMemberCourseName()
	    : mCourseIndex(0)
	{
		mIsCounting = 0;
		mIsExiting  = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberCourseName); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                 // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_COURSE_NAME; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mCourseIndex; // _08
	u8 mIsCounting;   // _0C
	u8 mIsExiting;    // _0D
};

// size 0x8
struct DispMemberDummy : public DispMemberBase {

	virtual u32 getSize() { return sizeof(DispMemberDummy); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }            // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DUMMY; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
};

// size 0xC
struct DispMemberFinalMessage : public DispMemberBase {

	inline DispMemberFinalMessage() { mFinalState = 0; } // ::Screen::Game2DMgr::CHECK2D_FinalMessage_NotOpen

	virtual u32 getSize() { return sizeof(DispMemberFinalMessage); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                   // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FINAL_MSG; }           // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mFinalState; // _08
};

// size 0x14
struct DispMemberFloor : public DispMemberBase {
	inline DispMemberFloor()
	{
		mSublevel     = 55;
		mDoEnd        = false;
		mDoForceEnd   = false;
		mCaveID       = 't_01';
		mEnableButton = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberFloor); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }            // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FLOOR; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mSublevel;      // _08
	int mCaveID;        // _0C
	bool mDoEnd;        // _10
	bool mDoForceEnd;   // _11
	bool mEnableButton; // _12
};

// size 0x88
struct DispMemberGround : public DispMemberBase {

	inline DispMemberGround()
	{
		mPayDebt            = false;
		mTreasureDist       = 900.0f;
		mHasRadar           = false;
		mIsNotDay1          = true;
		mRadarState         = 1;
		mUnlockedSpicy      = false;
		mUnlockedBitter     = false;
		mHasBitter          = false;
		mHasSpicy           = false;
		mRadarEnabled       = false;
		mAllTreasuresGotten = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberGround); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_GROUND; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame mDataGame;                 // _08
	DataNavi mOlimarData;               // _24
	DataNavi mLouieData;                // _3C
	f32 mTreasureDist;                  // _54
	int mRadarState;                    // _58
	bool mHasRadar;                     // _5C
	bool mIsNotDay1;                    // _5D
	bool mPayDebt;                      // _5E
	bool mUnlockedSpicy;                // _5F
	bool mUnlockedBitter;               // _60
	bool mHasBitter;                    // _61
	bool mHasSpicy;                     // _62
	bool mRadarEnabled;                 // _63
	bool mAllTreasuresGotten;           // _64
	DispMemberDayEndCount mDayEndCount; // _68
	DispMemberHurryUp mHurryUp;         // _78
};

// size 0x28
struct DispMemberKanketuMenu : public DispMemberAnaDemo {
	inline DispMemberKanketuMenu()
	{
		mPikiInDanger   = 0;
		mCantProceed    = 0;
		mIsChallenge    = 0;
		mUnusedValue    = 0;
		mCaveOtakaraNum = 4;
		mCaveOtakaraMax = 4;
		mPikis          = 10;
	}

	virtual u32 getSize() { return sizeof(DispMemberKanketuMenu); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_KANKETU_MENU; }       // _10 (weak)

	// _00     = VTBL
	// _00-_24 = DispMemberAnaDemo
	u8 mPikiInDanger; // _24
	u8 mCantProceed;  // _25
	u8 mIsChallenge;  // _26
};

// size 0x40
struct DispMemberKantei : public DispMemberBase {

	inline DispMemberKantei()
	{
		mPelletValue         = 123;
		mTotalPokos          = 5000;
		mKanteiType          = 0;
		mDelegate            = nullptr;
		mPelletMessageID     = 0;
		mPelletOffset        = 0;
		mTotalPokosCave      = 5555;
		mIsPayDebt           = false;
		mSecondaryController = nullptr;
		_29                  = false;
		mIsDone              = false;
		mInCave              = false;
		mDoPlayBGM           = true;
	}

	virtual u32 getSize() { return sizeof(DispMemberKantei); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_KANTEI; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mPelletValue;                                    // _08
	u32 mTotalPokos;                                     // _0C
	Delegate1<Game::BaseGameSection, Rectf&>* mDelegate; // _10
	u8 _14[0x4];                                         // _14, unknown
	u64 mPelletMessageID;                                // _18
	u32 mPelletOffset;                                   // _20
	int mTotalPokosCave;                                 // _24
	u8 mIsPayDebt;                                       // _28
	u8 _29;                                              // _29
	Controller* mSecondaryController;                    // _2C
	u8 mIsDone;                                          // _30
	u32 mKanteiType;                                     // _34, pre or post-debt
	u8 mInCave;                                          // _38
	u8 mDoPlayBGM;                                       // _39
	u8 _3A[0x2];                                         // _3A, unknown, possibly padding
	u8 _3C[0x4];                                         // _3C, unknown
};

// size 0xC
struct DispMemberSave : public DispMemberBase {

	inline DispMemberSave() { mDoSound = false; }

	virtual u32 getSize() { return sizeof(DispMemberSave); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }           // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_SAVE; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u8 mDoSound; // _08
};

// size 0x8
struct DispMemberSMenuCont : public DispMemberBase {

	virtual u32 getSize() { return sizeof(DispMemberSMenuCont); }    // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                   // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_CONTROLS; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
};

// size 0x28
struct DispMemberSMenuItem : public DispMemberBase {
	DispMemberSMenuItem()
	{
		mBitterSprayCount = 111;
		mBitterBerryCount = 22;
		mSpicySprayCount  = 333;
		mSpicyBerryCount  = 44;
		for (int i = 0; i < 12; i++) {
			mExplorationKitInventory[i] = 0;
		}
		mIsBitterUnlocked = false;
		mIsSpicyUnlocked  = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberSMenuItem); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_ITEM; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mBitterSprayCount;             // _08
	u32 mBitterBerryCount;             // _0C
	u32 mSpicySprayCount;              // _10
	u32 mSpicyBerryCount;              // _14
	bool mExplorationKitInventory[12]; // _18
	bool mIsBitterUnlocked;            // _24, have made first bitter spray from berries
	bool mIsSpicyUnlocked;             // _25, have made first spicy spray from berries
};

// size 0x4C
struct DispMemberSMenuMap : public DispMemberBase {
	enum CourseIndex {
		COURSE_Tutorial  = 0,
		COURSE_Forest    = 1,
		COURSE_Yakushima = 2,
		COURSE_Last      = 3,
		COURSE_Test      = 4,
	};

	DispMemberSMenuMap()
	{
		mInCave          = false;
		mActiveNavi      = false;
		mCourseIndex     = 0;
		mCurrentCave     = 't_01';
		mUnlockedReds    = true;
		mUnlockedYellows = true;
		mUnlockedBlues   = true;
		mUnlockedWhites  = true;
		mUnlockedPurples = true;
	}

	virtual u32 getSize() { return sizeof(DispMemberSMenuMap); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_MAP; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataMap mDataMap;      // _08
	int mCourseIndex;      // _3C
	u32 mCurrentCave;      // _40
	bool mUnlockedReds;    // _44
	bool mUnlockedYellows; // _45
	bool mUnlockedBlues;   // _46
	bool mUnlockedWhites;  // _47
	bool mUnlockedPurples; // _48
	u8 mInCave;            // _49
	bool mActiveNavi;      // _4A
};

// size 0x14
struct DispMemberSMenuPause : public DispMemberBase {
	DispMemberSMenuPause()
	{
		mDebtRemaining = 1234;
		mPokoCount     = 2469;
		mExitStatus    = MENUFINISH_GetFromSubMember;
	}

	virtual u32 getSize() { return sizeof(DispMemberSMenuPause); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                 // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_PAUSE; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mDebtRemaining; // _08
	u32 mPokoCount;     // _0C
	int mExitStatus;    // _10
};

// size 0x18
struct DispMemberSMenuPauseDoukutu : public DispMemberBase {

	inline DispMemberSMenuPauseDoukutu()
	{
		mExitStatus    = MENUFINISH_GetFromSubMember;
		mCavePokos     = 86;
		mPreCavePokos  = 2469;
		mPayDebt       = true;
		mPikisInDanger = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberSMenuPauseDoukutu); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                        // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_PAUSE_DOUKUTU; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mCavePokos;    // _08
	u32 mPreCavePokos; // _0C
	u8 mPayDebt;       // _10
	u8 mPikisInDanger; // _11
	int mExitStatus;   // _14
};

// size 0xC
struct DispMemberSMenuPauseVS : public DispMemberBase {

	inline DispMemberSMenuPauseVS() { mState = 1; }

	virtual u32 getSize() { return sizeof(DispMemberSMenuPauseVS); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                   // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_PAUSE_VS; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mState; // _08
};

// size 0xC4
struct DispMemberSMenuAll : public DispMemberBase {
	DispMemberSMenuAll()
	{
		mOpenMode = 0;
		mIsDay1   = false;
	}

	enum OpenType {
		Open_StoryMode, // start on map
		Open_ChallengeMode,
		Open_Versus
	};

	virtual u32 getSize() { return sizeof(DispMemberSMenuAll); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_ALL; }  // _10 (weak)
	virtual void doSetSubMemberAll()
	{
		setSubMember(&mSMenuPause);
		setSubMember(&mSMenuPauseDoukutu);
		setSubMember(&mSMenuItem);
		setSubMember(&mSMenuMap);
		setSubMember(&mSMenuVS);
		setSubMember(&mSMenuCont);
	} // _14 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DispMemberSMenuPause mSMenuPause;               // _08
	DispMemberSMenuPauseDoukutu mSMenuPauseDoukutu; // _1C
	DispMemberSMenuItem mSMenuItem;                 // _34
	DispMemberSMenuMap mSMenuMap;                   // _5C
	DispMemberSMenuPauseVS mSMenuVS;                // _A8
	DispMemberSMenuCont mSMenuCont;                 // _B4
	int mOpenMode;                                  // _BC
	bool mIsDay1;                                   // _C0
};

// size 0x10
struct DispMemberSpecialItem : public DispMemberBase {

	DispMemberSpecialItem()
	{
		mDelegate  = nullptr;
		mDoPlayBGM = true;
	}

	virtual u32 getSize() { return sizeof(DispMemberSpecialItem); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_SPECIAL_ITEM; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	Delegate1<Game::BaseGameSection, Rectf&>* mDelegate; // _08
	u8 mDoPlayBGM;                                       // _0C
};

// size 0x10
struct DispMemberUfoMenu : public DispMemberBase {
	inline DispMemberUfoMenu()
	{
		mContenaType = 1;
		_0C          = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberUfoMenu); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_UFO_MENU; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mContenaType; // _08
	u8 _0C;           // _0C
};

// size 0x8C
struct DispMemberUfoGroup : public DispMemberBase {
	inline DispMemberUfoGroup()
	{
		mHasWhite                       = false;
		mHasPurple                      = false;
		mContena1.mDataContena.mOnyonID = Game::White;
		mContena2.mDataContena.mOnyonID = Game::Purple;
		mHasPaidDebt                    = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberUfoGroup); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_UFO_GROUP; }       // _10 (weak)
	virtual void doSetSubMemberAll()                             // _14 (weak)
	{
		setSubMember(&mUfoMenu);
		setSubMember(&mContena1);
		setSubMember(&mContena2);
	}

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DispMemberUfoMenu mUfoMenu;  // _08
	DispMemberContena mContena1; // _18
	DispMemberContena mContena2; // _50
	bool mHasWhite;              // _88
	bool mHasPurple;             // _89
	bool mHasPaidDebt;           // _8A
};

// size 0x74
struct DispMemberVs : public DispMemberBase {

	inline DispMemberVs()
	{
		mRedPikminCount   = 111;
		mBluePikminCount  = 222;
		mMarbleCountP1    = 0;
		mMarbleCountP2    = 0;
		mDoneState        = 0;
		mFlags[0]         = 0;
		mFlags[1]         = 0;
		mFlags[2]         = 0;
		mFlags[3]         = 0;
		mGhostIconTimerP1 = 99999.0f;
		mGhostIconTimerP2 = 99999.0f;
	}

	virtual u32 getSize() { return sizeof(DispMemberVs); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }         // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_VS; }        // _10 (weak)

	inline void setMarbleConditions(bool red, bool blue)
	{
		mFlags[0] = red;
		mFlags[1] = blue;
	}

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 mDoneState;        // _08
	DataGame mDataGame;    // _0C
	DataNavi mOlimarData;  // _28
	DataNavi mLouieData;   // _40
	u32 mRedPikminCount;   // _58
	u32 mBluePikminCount;  // _5C
	int mMarbleCountP1;    // _60
	int mMarbleCountP2;    // _64
	u8 mFlags[4];          // _68
	f32 mGhostIconTimerP1; // _6C
	f32 mGhostIconTimerP2; // _70
};

// size 0x28, "Return to Title?" popup in world map
struct DispMemberWorldMapInfoWin0 : public DispMemberBase {
	inline DispMemberWorldMapInfoWin0()
	    : mResult(0)
	    , mMsgIDYes('4710_00') // "Continue"
	    , mMsgIDNo('4711_00')  // "Return to Title Screen"
	    , mBgAlpha(180)
	    , mStartSelection(0)
	{
	}

	virtual u32 getSize() { return sizeof(DispMemberWorldMapInfoWin0); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                       // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WORLD_MAP_INFO_WINDOW_0; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mResult;        // _08
	u8 _0C[0x4];        // _0C, unknown
	u64 mMsgIDYes;      // _10
	u64 mMsgIDNo;       // _18
	u8 mBgAlpha;        // _20
	u8 mStartSelection; // _21
	u8 _22[0x2];        // _22, possibly padding
	u8 _24[0x4];        // _24, unknown
};

// size 0x10, "Land in this area?" popup in world map
struct DispMemberWorldMapInfoWin1 : public DispMemberBase {
	inline DispMemberWorldMapInfoWin1()
	{
		mResult  = 0;
		mBgAlpha = 180;
	}

	virtual u32 getSize() { return sizeof(DispMemberWorldMapInfoWin1); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                       // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WORLD_MAP_INFO_WINDOW_1; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mResult; // _08, state or result
	u8 mBgAlpha; // _0C
};

} // namespace Screen
} // namespace og

#endif
