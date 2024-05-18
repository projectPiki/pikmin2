#ifndef _KH_DAYENDRESULT_H
#define _KH_DAYENDRESULT_H

#include "kh/khUtil.h"
#include "Game/Result.h"
#include "ebi/Save.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"
#include "Controller.h"

namespace og {
namespace Screen {
struct StickAnimMgr;
} // namespace Screen
} // namespace og

namespace kh {
namespace Screen {

////////////////////////////////////////////
// DATA STRUCTS

enum MailCategory {
	// Acutal checking for these conditions are done in singlleGS_MainResult
	PokoUnder3000  = 0x31,
	PokoUnder5000  = 0x32,
	PokoUnder8000  = 0x33,
	PokoUnder10000 = 0x34,
	PayDebt        = 0x35,
	SavedLouie     = 0x36,
	AllTreasures   = 0x37,
};

union MailSaveFlags {
	inline u8 getReverseByte(int i) { return byteView[15 - i]; }

	u32 typeView[4];
	u8 byteView[16];
};

union MailHistoryFlags {
	int typeView[4];
	s8 byteView[20];
};

struct MailSaveData {
	MailSaveData()
	{
		for (int i = 0; i < 16; i++) {
			mPastLogs.byteView[i] = 0;
		}
	}

	void clear();
	void read(Stream&);
	void write(Stream&);
	void set_history(s8);

	MailSaveFlags mPastLogs;   // _00
	MailHistoryFlags mHistory; // _10
};

struct IncP {
	IncP();

	// probably use enum for piki count?
	int mYesterdayPikiCounts[6]; // _00, 0 = red; 1 = yellow; 2 = blue; 3 = white; 4 = purple
	int mTodayPikiCounts[6];     // _18, 0 = red; 1 = yellow; 2 = blue; 3 = white; 4 = purple
	int mTodayPikiDeaths[8];     // _30
	int mTotalPikiDeaths[8];     // _50
	u8 mPikminUnlockedFlag;      // _70
};

////////////////////////////////////////////
// DISP MEMBERS

// Pikmin totals screen
struct DispDayEndResultIncP : public og::Screen::DispMemberBase {
	DispDayEndResultIncP(const IncP*);

	virtual u32 getSize() { return sizeof(DispDayEndResultIncP); }    // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                     // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT_INC_P; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	IncP* mPikminInfo; // _08
	u8 _0C;            // _0C
	u8 _0D;            // _0D
};

// Treasure collected screen
struct DispDayEndResultItem : public og::Screen::DispMemberBase {
	DispDayEndResultItem(Game::Result::TNode*, int, int, bool);

	virtual u32 getSize() { return sizeof(DispDayEndResultItem); }   // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                    // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT_ITEM; } // _10 (weak)
	// _00     = VTBL
	// _00-_08 = DispMemberBase
	Game::Result::TNode* mResultNode; // _08
	u32 mNodeCount;                   // _0C
	u32 mTodaysTreasureAmount;        // _10
	int mTodaysPokoAmount;            // _14
	int mTotalTreasureNum;            // _18
	int mTotalPokos;                  // _1C
	bool mPayedDebt;                  // _20
	bool mHasNothing;                 // _21
};

// Mail screen
struct DispDayEndResultMail : public og::Screen::DispMemberBase {
	DispDayEndResultMail(JKRHeap*, MailCategory);

	virtual u32 getSize() { return sizeof(DispDayEndResultMail); }   // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                    // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT_MAIL; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	JKRHeap* mHeap;             // _08
	JKRHeap* mBackupHeap;       // _0C
	MailCategory mMailCategory; // _10
	u32 mExitStatus;            // _14
	bool mHasOpened;            // _18
	int mTodayMailID;           // _1C
	uint mDayCount;             // _20
};

// 'End of Day Results' screen
struct DispDayEndResultTitl : public og::Screen::DispMemberBase {

	virtual u32 getSize() { return sizeof(DispDayEndResultTitl); }    // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                     // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT_TITLE; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
};

struct DispDayEndResult : public og::Screen::DispMemberBase {
	DispDayEndResult(Game::Result::TNode* node, int treasures, int pokos, bool paydebt, IncP* incp, JKRHeap* mailheap,
	                 MailCategory mailtype)
	    : mItem(node, treasures, pokos, paydebt)
	    , mIncP(incp)
	    , mMail(mailheap, mailtype)
	{
	}

	virtual u32 getSize() { return sizeof(DispDayEndResult); }  // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT; } // _10 (weak)
	virtual void doSetSubMemberAll()
	{
		setSubMember(&mTitle);
		setSubMember(&mItem);
		setSubMember(&mIncP);
		setSubMember(&mMail);
	} // _14 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DispDayEndResultTitl mTitle; // _08
	DispDayEndResultItem mItem;  // _10
	DispDayEndResultIncP mIncP;  // _34
	DispDayEndResultMail mMail;  // _44
};

////////////////////////////////////////////
// SCENE ARGS

struct SArgDayEndResultBase : public ::Screen::StartSceneArg {
	inline SArgDayEndResultBase(int i) { _04 = i; }

	virtual int getClassSize() { return sizeof(SArgDayEndResultBase); } // _0C (weak)

	// _00 = VTBL
	// _00-_04 = Screen::StartSceneArg
	u8 _04; // _04
};

struct SArgDayEndResultIncP : public SArgDayEndResultBase {
	SArgDayEndResultIncP(int i)
	    : SArgDayEndResultBase(i)
	{
	}

	virtual int getClassSize() { return sizeof(SArgDayEndResultIncP); }           // _0C (weak)
	virtual SceneType getSceneType() const { return SCENE_DAY_END_RESULT_INC_P; } // _08 (weak)

	// _00     = VTBL
	// _00-_04 = SArgDayEndResultBase
};

struct SArgDayEndResultItem : public SArgDayEndResultBase {
	SArgDayEndResultItem(int i)
	    : SArgDayEndResultBase(i)
	{
	}

	virtual int getClassSize() { return sizeof(SArgDayEndResultItem); }          // _0C (weak)
	virtual SceneType getSceneType() const { return SCENE_DAY_END_RESULT_ITEM; } // _08 (weak)

	// _00     = VTBL
	// _00-_04 = SArgDayEndResultBase
};

struct SArgDayEndResultMail : public SArgDayEndResultBase {
	SArgDayEndResultMail(int i)
	    : SArgDayEndResultBase(i)
	{
	}

	virtual int getClassSize() { return sizeof(SArgDayEndResultMail); }          // _0C (weak)
	virtual SceneType getSceneType() const { return SCENE_DAY_END_RESULT_MAIL; } // _08 (weak)

	// _00     = VTBL
	// _00-_04 = SArgDayEndResultBase
};

////////////////////////////////////////////
// OBJECTS

struct ObjDayEndResultBase : public ::Screen::ObjBase {
	ObjDayEndResultBase();

	struct StartSceneArg : public ::Screen::StartSceneArg {
		u8 _00;
	};

	virtual ~ObjDayEndResultBase() { }                    // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void updateCommon();                          // _78
	virtual f32 getFadeinUpMinFrm() const    = 0;         // _7C
	virtual f32 getFadeinUpMaxFrm() const    = 0;         // _80
	virtual f32 getFadeoutUpMinFrm() const   = 0;         // _84
	virtual f32 getFadeoutUpMaxFrm() const   = 0;         // _88
	virtual f32 getFadeinDownMinFrm() const  = 0;         // _8C
	virtual f32 getFadeinDownMaxFrm() const  = 0;         // _90
	virtual f32 getFadeoutDownMinFrm() const = 0;         // _94
	virtual f32 getFadeoutDownMaxFrm() const = 0;         // _98
	virtual u32 getStarWTagNum() const       = 0;         // _9C
	virtual f32 getPStarWMinFrm() const      = 0;         // _A0
	virtual f32 getPStarWMaxFrm() const      = 0;         // _A4

	void setFadeinFrm();
	void setFadeoutFrm();

	inline bool isFlag(u32 flag) const { return mFlags & flag; }

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* mScreenTitle; // _38
	J2DAnmTransform* mTitleAnmTransform; // _3C
	J2DAnmColor* mTitleAnmColor;         // _40
	f32 mTitleAnimTransformTimer;        // _44
	f32 mTitleAnimColorTimer;            // _48
	P2DScreen::Mgr_tuning* mScreenMain;  // _4C
	J2DAnmTransform* mMainAnimTrans1;    // _50
	J2DAnmTransform* mMainAnimTrans2;    // _54
	J2DAnmTextureSRTKey* mMainAnimSRT;   // _58
	J2DAnmTevRegKey* mMainAnimTev;       // _5C
	f32 mMainAnimTimer1;                 // _60
	f32 mMainAnimTimer2;                 // _64
	f32 mMainAnimTimer3;                 // _68
	f32 mMainAnimTimer4;                 // _6C
	P2DScreen::Mgr_tuning* mScreenStars; // _70
	J2DAnmColor* mStarsAnimColor;        // _74
	f32 mStarsAnimTimer1;                // _78
	f32 mFadeinMinFrame;                 // _7C
	f32 mFadeinMaxFrame;                 // _80
	f32 mFadeoutMinFrame;                // _84
	f32 mFadeoutMaxFrame;                // _88
	khUtilFadePane* mNextBtnFadePane;    // _8C
	u32 mFlags;                          // _90
	u8 _94;                              // _94
	u8 _95;                              // _95

	struct StaticValues {
		inline StaticValues()
		{
			_00              = 100.0f;
			_04              = 0.25f;
			mAnimRate        = 1.0f;
			_0C              = 1.0f;
			_10              = 0.1f;
			_24              = 8;
			_28              = 3;
			_4C              = 30;
			_4D              = 90;
			_4E              = 160;
			_4F              = 32;
			_50              = 20;
			mStarsScreenPosX = -8.0f;
			mMainScreenPosX  = 0.0f;
			mTitleScreenPosX = 0.0f;
			_20              = 23.0f;
			_2C              = 0.899f;
			_30              = 0.889f;
			_34              = 0.336f;
			_38              = 0.433f;
			_40              = 0.4f;
			_48              = 0.68;
			_3C              = 0.1f;
			_44              = 0.1f;
		}

		f32 _00;              // _00
		f32 _04;              // _04
		f32 mAnimRate;        // _08
		f32 _0C;              // _0C
		f32 _10;              // _10
		f32 mStarsScreenPosX; // _14
		f32 mMainScreenPosX;  // _18
		f32 mTitleScreenPosX; // _1C
		f32 _20;              // _20
		u32 _24;              // _24
		u32 _28;              // _28
		f32 _2C;              // _2C
		f32 _30;              // _30
		f32 _34;              // _34
		f32 _38;              // _38
		f32 _3C;              // _3C
		f32 _40;              // _40
		f32 _44;              // _44
		f32 _48;              // _48
		u8 _4C;               // _4C
		u8 _4D;               // _4D
		u8 _4E;               // _4E
		u8 _4F;               // _4F
		u8 _50;               // _50
	};

	static StaticValues msVal;
};

struct ObjDayEndResultIncP : public ObjDayEndResultBase {
	enum Status {
		INCPSTATUS_Normal   = 0,
		INCPSTATUS_Fadeout  = 1, // probably this order?
		INCPSTATUS_DecP     = 2,
		INCPSTATUS_Fadein   = 3,
		INCPSTATUS_Slot     = 4,
		INCPSTATUS_DecPSlot = 5,
	};

	ObjDayEndResultIncP();

	virtual ~ObjDayEndResultIncP() { }                          // _08 (weak)
	virtual void doCreate(JKRArchive*);                         // _4C
	virtual bool doUpdateFadein();                              // _50
	virtual bool doUpdate();                                    // _58
	virtual bool doUpdateFadeout();                             // _60
	virtual void doDraw(Graphics& gfx);                         // _68
	virtual void updateCommon();                                // _78
	virtual f32 getFadeinUpMinFrm() const { return 0.0f; }      // _7C (weak)
	virtual f32 getFadeinUpMaxFrm() const { return 30.0f; }     // _80 (weak)
	virtual f32 getFadeoutUpMinFrm() const { return 116.0f; }   // _84 (weak)
	virtual f32 getFadeoutUpMaxFrm() const { return 145.0f; }   // _88 (weak)
	virtual f32 getFadeinDownMinFrm() const { return 170.0f; }  // _8C (weak)
	virtual f32 getFadeinDownMaxFrm() const { return 205.0f; }  // _90 (weak)
	virtual f32 getFadeoutDownMinFrm() const { return 270.0f; } // _94 (weak)
	virtual f32 getFadeoutDownMaxFrm() const { return 299.0f; } // _98 (weak)
	virtual u32 getStarWTagNum() const { return 19; }           // _9C (weak)
	virtual f32 getPStarWMinFrm() const { return 0.0f; }        // _A0 (weak)
	virtual f32 getPStarWMaxFrm() const { return 59.0f; }       // _A4 (weak)

	void statusNormal();
	void statusFadeout();
	void statusDecP();
	void statusFadein();
	void statusSlot();
	void statusDecPSlot();
	void callIncPSE(int);
	void callDecPSE(int);
	void effectCommon();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_98 = ObjDayEndResultBase
	int mStatus;                                           // _98
	J2DAnmTransform* mMainAnimTrans3;                      // _9C
	J2DAnmTransform* mMainAnimTrans4;                      // _A0
	f32 mMainAnimTimer5;                                   // _A4
	f32 mMainAnimTimer6;                                   // _A8
	og::Screen::CallBack_CounterSlot** mPikiCountersList;  // _AC
	og::Screen::CallBack_CounterRV* mPikiCounterYesterday; // _B0
	og::Screen::CallBack_CounterRV* mPikiCounterToday;     // _B4
	int mCounterNum;                                       // _B8
	og::Screen::CallBack_CounterSlot** mDeathCountersList; // _BC
	og::Screen::CallBack_CounterRV* mDeathCounterToday;    // _C0
	og::Screen::CallBack_CounterRV* mDeathCounterTotal;    // _C4
	og::Screen::ScaleMgr* mScaleMgr;                       // _C8
	u32 mYesterdayPikis[6];                                // _CC
	u32 mTodayPikis[6];                                    // _E4
	u32 mTodayDeaths[8];                                   // _FC
	u32 mTotalDeaths[8];                                   // _11C
	f32 mArrowAngles[6];                                   // _13C
	int mSlotChangeDelay;                                  // _154
};

struct ObjDayEndResultMail : public ObjDayEndResultBase {
	enum Status {
		MAILSTATUS_Normal          = 0,
		MAILSTATUS_FadeoutToLeft   = 1, // probably this order?
		MAILSTATUS_FadeinFromLeft  = 2,
		MAILSTATUS_FadeoutToRight  = 3,
		MAILSTATUS_FadeinFromRight = 4,
		MAILSTATUS_WaitOpen        = 5,
		MAILSTATUS_OpenW           = 6,
		MAILSTATUS_OpenH           = 7,
	};

	struct MailIconAnm {
		MailIconAnm()
		{
			mTIMG      = nullptr;
			mIconCount = 0;
		}

		ResTIMG** mTIMG; // _00
		int mIconCount;  // _04
	};

	ObjDayEndResultMail()
	{
		mStatus              = MAILSTATUS_WaitOpen;
		mScreenCharacter     = nullptr;
		mCharacterAnimTrans  = nullptr;
		mSaveMgr             = nullptr;
		mScreenMain          = nullptr;
		mMainAnimTrans4      = nullptr;
		mMainAnimTrans3      = nullptr;
		mSideMoveTimer       = 0.0f;
		mDayCounter          = nullptr;
		mCurrentDay          = 1;
		mMaxDay              = 1;
		mIconArchive         = nullptr;
		mMailIconAnms        = nullptr;
		mCharacterIconTimer  = 0;
		mFadePaneArrowR      = nullptr;
		mFadePaneArrowL      = nullptr;
		mMessage             = nullptr;
		mCharacterIconScaleY = 0.0f;
		mCharacterIconScaleX = 0.0f;
		mOpenWTimer          = msVal._40;
		mOpenHTimer          = 0.0f;
		mAlpha               = 0;
	}

	virtual ~ObjDayEndResultMail() { }                          // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*);       // _44
	virtual void doCreate(JKRArchive*);                         // _4C
	virtual bool doUpdateFadein();                              // _50
	virtual bool doUpdate();                                    // _58
	virtual bool doUpdateFadeout();                             // _60
	virtual void doDraw(Graphics& gfx);                         // _68
	virtual void updateCommon();                                // _78
	virtual f32 getFadeinUpMinFrm() const { return 0.0f; }      // _7C (weak)
	virtual f32 getFadeinUpMaxFrm() const { return 32.0f; }     // _80 (weak)
	virtual f32 getFadeoutUpMinFrm() const { return 109.0f; }   // _84 (weak)
	virtual f32 getFadeoutUpMaxFrm() const { return 149.0f; }   // _88 (weak)
	virtual f32 getFadeinDownMinFrm() const { return 169.0f; }  // _8C (weak)
	virtual f32 getFadeinDownMaxFrm() const { return 205.0f; }  // _90 (weak)
	virtual f32 getFadeoutDownMinFrm() const { return 264.0f; } // _94 (weak)
	virtual f32 getFadeoutDownMaxFrm() const { return 299.0f; } // _98 (weak)
	virtual u32 getStarWTagNum() const { return 18; }           // _9C (weak)
	virtual f32 getPStarWMinFrm() const { return 0.0f; }        // _A0 (weak)
	virtual f32 getPStarWMaxFrm() const { return 59.0f; }       // _A4 (weak)

	void statusNormal();
	void statusFadeoutToLeft();
	void statusFadeinFromLeft();
	void statusFadeoutToRight();
	void statusFadeinFromRight();
	void statusWaitOpen();
	void statusOpenW();
	void statusOpenH();
	void changeMail();
	void changeAlpha();
	void setCallBackMessage(P2DScreen::Mgr*, J2DPane*);
	void setCallBackMessage(P2DScreen::Mgr*);
	bool skipped() const;

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_98 = ObjDayEndResultBase
	Status mStatus;                               // _98
	P2DScreen::Mgr_tuning* mScreenCharacter;      // _9C
	J2DAnmTransform* mCharacterAnimTrans;         // _A0
	ebi::Save::TMgr* mSaveMgr;                    // _A4
	J2DAnmTransform* mMainAnimTrans3;             // _A8
	J2DAnmTransform* mMainAnimTrans4;             // _AC
	f32 mSideMoveTimer;                           // _B0
	og::Screen::CallBack_CounterDay* mDayCounter; // _B4
	u32 mMaxDay;                                  // _B8
	u32 mCurrentDay;                              // _BC
	JKRMemArchive* mIconArchive;                  // _C0
	MailIconAnm* mMailIconAnms;                   // _C4, array of 20 icon anms
	u32 mCharacterIconTimer;                      // _C8
	khUtilFadePane* mFadePaneArrowL;              // _CC
	khUtilFadePane* mFadePaneArrowR;              // _D0
	og::Screen::CallBack_Message* mMessage;       // _D4
	f32 mCharacterIconScaleX;                     // _D8
	f32 mCharacterIconScaleY;                     // _DC
	f32 mOpenWTimer;                              // _E0
	f32 mOpenHTimer;                              // _E4
	int mAlpha;                                   // _E8
};

struct ObjDayEndResultItem : public ObjDayEndResultBase {
	enum Status {
		ITEMSTATUS_Normal      = 0,
		ITEMSTATUS_ScrollUp    = 1,
		ITEMSTATUS_ScrollDown  = 2,
		ITEMSTATUS_ForceScroll = 3,
		ITEMSTATUS_DrumRoll    = 4,
		ITEMSTATUS_TotalValue  = 5,
	};

	ObjDayEndResultItem();

	virtual ~ObjDayEndResultItem() { }                          // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*);       // _44
	virtual void doCreate(JKRArchive*);                         // _4C
	virtual bool doUpdateFadein();                              // _50
	virtual bool doUpdate();                                    // _58
	virtual bool doUpdateFadeout();                             // _60
	virtual void doDraw(Graphics& gfx);                         // _68
	virtual void updateCommon();                                // _78
	virtual f32 getFadeinUpMinFrm() const { return 0.0f; }      // _7C (weak)
	virtual f32 getFadeinUpMaxFrm() const { return 29.0f; }     // _80 (weak)
	virtual f32 getFadeoutUpMinFrm() const { return 116.0f; }   // _84 (weak)
	virtual f32 getFadeoutUpMaxFrm() const { return 145.0f; }   // _88 (weak)
	virtual f32 getFadeinDownMinFrm() const { return 170.0f; }  // _8C (weak)
	virtual f32 getFadeinDownMaxFrm() const { return 202.0f; }  // _90 (weak)
	virtual f32 getFadeoutDownMinFrm() const { return 270.0f; } // _94 (weak)
	virtual f32 getFadeoutDownMaxFrm() const { return 299.0f; } // _98 (weak)
	virtual u32 getStarWTagNum() const { return 15; }           // _9C (weak)
	virtual f32 getPStarWMinFrm() const { return -1.0f; }       // _A0 (weak)
	virtual f32 getPStarWMaxFrm() const { return 59.0f; }       // _A4 (weak)

	void statusNormal();
	void statusScrollUp();
	void statusScrollDown();
	void statusForceScroll();
	void statusDrumRoll();
	void statusTotalValue();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_98 = ObjDayEndResultBase
	Status mStatus;                                          // _98
	J2DAnmTransform* mMainAnimTrans3;                        // _9C
	f32 mMainAnimTimer5;                                     // _A0
	og::Screen::CallBack_CounterRV* mTodayPokoCounter;       // _A4
	og::Screen::CallBack_CounterRV* mTotalPokoCounter;       // _A8
	og::Screen::CallBack_CounterRV* mTreasurePokoCounter[2]; // _AC
	og::Screen::StickAnimMgr* mStickAnimMgr;                 // _B4
	khUtilFadePane* mFadePane3DStick;                        // _B8
	khUtilFadePane* mFadePaneUpArrow;                        // _BC
	khUtilFadePane* mFadePaneDownArrow;                      // _C0
	u32 mTotalPokoCount;                                     // _C4
	u32 mTodaysPokoCount;                                    // _C8
	u32 mTreasurePokoCount[2];                               // _CC
	f32 mCurrentScrollYPos;                                  // _D4
	int mMaxScrollId;                                        // _D8
	f32 mItemRowHeight;                                      // _DC
	int mCurrentSelectId;                                    // _E0
	int mScollMoveTargetTime;                                // _E4
	int mScrollMoveCounter;                                  // _E8
	u32 mGXScissorTopY;                                      // _EC
	u32 mGXScissorBottomY;                                   // _F0
	int mTotalValueDelay;                                    // _F4
	u8 mScrollUpDelay;                                       // _F8
	u8 mScrollDownDelay;                                     // _F9
};

struct ObjDayEndResultTitl : public ::Screen::ObjBase {
	ObjDayEndResultTitl();

	virtual ~ObjDayEndResultTitl() { }    // _08 (weak)
	virtual void doCreate(JKRArchive*);   // _4C
	virtual bool doUpdateFadein();        // _50
	virtual bool doUpdate();              // _58
	virtual bool doUpdateFadeout();       // _60
	virtual void doUpdateFadeoutFinish(); // _64
	virtual void doDraw(Graphics& gfx);   // _68

	void updateCommon();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* mScreenMain; // _38
	J2DAnmTransform* mMainAnimTrans;    // _3C
	J2DAnmTextureSRTKey* mMainAnimSRT;  // _40
	f32 mAnimTimer1;                    // _44
	f32 mAnimTimer2;                    // _48
	u32 mTimer;                         // _4C
	u8 mAlpha;                          // _50

	static struct StaticValues {
		inline StaticValues()
		{
			mActiveMaxFrames = 90;
			mAlphaChangeRate = 16;
		}

		u32 mActiveMaxFrames; // _00
		u8 mAlphaChangeRate;  // _04
	} msVal;
};

////////////////////////////////////////////
// SCENES

struct SceneDayEndResultIncP : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "result_fuetaheta.szs"; }    // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_DAY_END_RESULT_INC_P; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                      // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_DAY_END_RESULT_INC_P; } // _10 (weak)
	virtual void doCreateObj(JKRArchive* archive)                                // _20 (weak)
	{
		registObj(new ObjDayEndResultIncP, archive);
	}

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	// TODO: work out if this has extra members
};

struct SceneDayEndResultItem : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "result_item.szs"; }        // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_DAY_END_RESULT_ITEM; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                     // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_DAY_END_RESULT_ITEM; } // _10 (weak)
	virtual void doCreateObj(JKRArchive* archive)                               // _20 (weak)
	{
		registObj(new ObjDayEndResultItem, archive);
	}

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	// TODO: work out if this has extra members
};

struct MailTableDataEntry {
	u64 mMessageID;          // _00
	u8 mFlag[4];             // _08
	const char mFileName[0]; // _0C
};

struct MailTableData {
	MailTableData(MailTableDataEntry* data, MailSaveFlags& flags, int i)
	{
		u8 bit     = flags.getReverseByte(i >> 3);
		int shift  = (i - (int(i >> 3) << 3));
		mMessageID = data->mMessageID;
		mFlag[0]   = data->mFlag[0];
		mFlag[1]   = data->mFlag[1];
		mFlag[2]   = data->mFlag[2];
		mFileName  = (const char*)&data->mFileName;
		mSaveFlag  = ((1 << shift) & bit) != 0;
	}

	inline u32 calcSaveFlag(MailSaveFlags& flags, int i)
	{
		u32 cleared = (i >> 3);
		return (1 << (i - (cleared << 3))) & flags.byteView[15 - (i >> 3)];
	}

	inline const char* getFileName() { return mFileName; }

	u64 mMessageID;        // _00
	u8 mFlag[3];           // _08
	const char* mFileName; // _0C
	u8 mSaveFlag;          // _10
};

struct MailTableFile {
	int mEntries;               // _00
	MailTableDataEntry** mData; // _04
};

struct SceneDayEndResultMail : public ::Screen::SceneBase {
	SceneDayEndResultMail();

	virtual const char* getResName() const { return ""; }                       // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_DAY_END_RESULT_MAIL; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                     // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_DAY_END_RESULT_MAIL; } // _10 (weak)
	virtual void doCreateObj(JKRArchive*) { }                                   // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                     // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	MailTableData** mTableData;  // _220, unknown
	JKRMemArchive* mIconArchive; // _224
	MailHistoryFlags mMailFlags; // _228, unknown
};

struct SceneDayEndResultTitl : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "result_title_new.szs"; }    // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_DAY_END_RESULT_TITL; }       // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                      // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_DAY_END_RESULT_TITLE; } // _10 (weak)
	virtual void doCreateObj(JKRArchive* archive)                                // _20 (weak)
	{
		registObj(new ObjDayEndResultTitl, archive);
	}

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	// TODO: work out if this has extra members
};

} // namespace Screen
} // namespace kh

#endif
