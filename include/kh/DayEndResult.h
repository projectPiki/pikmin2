#ifndef _KH_DAYENDRESULT_H
#define _KH_DAYENDRESULT_H

#include "kh/khUtil.h"
#include "Game/Result.h"
#include "ebi/Save.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/Bases.h"
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

};

struct MailSaveData {
	MailSaveData()
	{
		for (int i = 0; i < 16; i++) {
			_00[i] = 0;
		}
	}

	void clear();
	void read(Stream&);
	void write(Stream&);
	void set_history(s8);

	u8 _00[0x10]; // _00
	s8 _10[0x14]; // _10
};

struct IncP {
	IncP();

	int m_yesterdayRed;         // _00
	int m_yesterdayYellow;      // _04
	int m_yesterdayBlue;        // _08
	int m_yesterdayWhite;       // _0C
	int m_yesterdayPurple;      // _10
	int m_yesterdayTotal;       // _14
	int m_todayRed;             // _18
	int m_todayYellow;          // _1C
	int m_todayBlue;            // _20
	int m_todayWhite;           // _24
	int m_todayPurple;          // _28
	int m_todayTotal;           // _2C
	int _30;                    // _30, deaths from ?
	int _34;                    // _34, deaths from ?
	int _38;                    // _38, deaths from ?
	int m_deathsFromWaterToday; // _3C
	int _40;                    // _40, deaths from ?
	int _44;                    // _44, deaths from ?
	int _48;                    // _48, deaths from ?
	int m_totalDeathsToday;     // _4C
	int _50;                    // _50, deaths from ? total?
	int _54;                    // _54, deaths from ? total?
	int _58;                    // _58, deaths from ? total?
	int m_deathsFromWaterTotal; // _5C
	int _60;                    // _60, deaths from ? total?
	int _64;                    // _64, deaths from ? total?
	int _68;                    // _68, deaths from ? total?
	int m_totalDeaths;          // _6C
	u8 m_pikminUnlockedFlag;    // _70
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
	IncP* m_pikminInfo; // _08
	u8 _0C;             // _0C
	u8 _0D;             // _0D
};

// Treasure collected screen
struct DispDayEndResultItem : public og::Screen::DispMemberBase {
	DispDayEndResultItem(Game::Result::TNode*, int, int, bool);

	virtual u32 getSize() { return sizeof(DispDayEndResultItem); }   // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                    // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT_ITEM; } // _10 (weak)
	// _00     = VTBL
	// _00-_08 = DispMemberBase
	Game::Result::TNode* m_resultNode; // _08
	u32 _0C;                           // _0C, unknown
	u32 _10;                           // _10, unknown
	int _14;                           // _14
	int _18;                           // _18
	int _1C;                           // _1C
	bool _20;                          // _20
	bool _21;                          // _21
};

// Mail screen
struct DispDayEndResultMail : public og::Screen::DispMemberBase {
	DispDayEndResultMail(JKRHeap*, MailCategory);

	virtual u32 getSize() { return sizeof(DispDayEndResultMail); }   // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                    // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_RESULT_MAIL; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	JKRHeap* m_heap;             // _08
	u32 _0C;                     // _0C, unknown
	MailCategory m_mailCategory; // _10
	u32 _14;                     // _14, unknown
	u8 _18;                      // _18
	int _1C;                     // _1C
	uint m_dayCount;             // _20
};

// 'End of Day Results' screen
struct DispDayEndResultTitl : public og::Screen::DispMemberBase {

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
};

struct DispDayEndResult : public og::Screen::DispMemberBase {

	virtual u32 getSize();            // _08 (weak)
	virtual u32 getOwnerID();         // _0C (weak)
	virtual u64 getMemberID();        // _10 (weak)
	virtual void doSetSubMemberAll(); // _14 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DispDayEndResultTitl m_title; // _08
	DispDayEndResultItem m_item;  // _10
	DispDayEndResultIncP m_incP;  // _34
	DispDayEndResultMail m_mail;  // _44
};

////////////////////////////////////////////
// SCENE ARGS

struct SArgDayEndResultBase : public ::Screen::StartSceneArg {
	inline SArgDayEndResultBase() { _04 = 1; }

	virtual int getClassSize() { return sizeof(SArgDayEndResultBase); } // _0C (weak)

	// _00 = VTBL
	// _00-_08 = Screen::StartSceneArg
};

struct SArgDayEndResultIncP : public SArgDayEndResultBase {
	virtual int getClassSize() { return sizeof(SArgDayEndResultIncP); }           // _0C (weak)
	virtual SceneType getSceneType() const { return SCENE_DAY_END_RESULT_INC_P; } // _08 (weak)

	// _00     = VTBL
	// _00-_04 = SArgDayEndResultBase
};

struct SArgDayEndResultItem : public SArgDayEndResultBase {
	virtual int getClassSize() { return sizeof(SArgDayEndResultItem); }          // _0C (weak)
	virtual SceneType getSceneType() const { return SCENE_DAY_END_RESULT_ITEM; } // _08 (weak)

	// _00     = VTBL
	// _00-_04 = SArgDayEndResultBase
};

struct SArgDayEndResultMail : public SArgDayEndResultBase {
	virtual int getClassSize() { return sizeof(SArgDayEndResultMail); }          // _0C (weak)
	virtual SceneType getSceneType() const { return SCENE_DAY_END_RESULT_MAIL; } // _08 (weak)

	// _00     = VTBL
	// _00-_04 = SArgDayEndResultBase
};

////////////////////////////////////////////
// OBJECTS

struct ObjDayEndResultBase : public ::Screen::ObjBase {
	ObjDayEndResultBase();

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

	inline bool isFlag(u32 flag) const { return m_flags & flag; }

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* m_resultTitleMgr;    // _38
	J2DAnmTransform* m_resultTitleAnmTransform; // _3C
	J2DAnmColor* m_resultTitleAnmColor;         // _40
	f32 _44;                                    // _44
	f32 _48;                                    // _48
	P2DScreen::Mgr_tuning* _4C;                 // _4C
	J2DAnmTransform* _50;                       // _50
	J2DAnmTransform* _54;                       // _54
	J2DAnmTextureSRTKey* _58;                   // _58
	J2DAnmTevRegKey* _5C;                       // _5C
	f32 _60;                                    // _60
	f32 _64;                                    // _64
	f32 _68;                                    // _68
	f32 _6C;                                    // _6C
	P2DScreen::Mgr_tuning* _70;                 // _70
	J2DAnmColor* _74;                           // _74
	f32 _78;                                    // _78
	f32 _7C;                                    // _7C
	f32 _80;                                    // _80
	f32 _84;                                    // _84
	f32 _88;                                    // _88
	khUtilFadePane* m_nextBtnFadePane;          // _8C
	u32 m_flags;                                // _90
	u8 _94;                                     // _94
	u8 _95;                                     // _95

	struct StaticValues {
		inline StaticValues()
		{
			_00 = 100.0f;
			_04 = 0.25f;
			_08 = 1.0f;
			_0C = 1.0f;
			_10 = 0.1f;
			_24 = 8;
			_28 = 3;
			_4C = 30;
			_4D = 90;
			_4E = 160;
			_4F = 32;
			_50 = 20;
			_14 = -8.0f;
			_18 = 0.0f;
			_1C = 0.0f;
			_20 = 23.0f;
			_2C = 0.899;
			_30 = 0.889;
			_34 = 0.336;
			_38 = 0.433;
			_40 = 0.4f;
			_48 = 0.68;
			_3C = 0.1f;
			_44 = 0.1f;
		}

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
		f32 _10; // _10
		f32 _14; // _14
		f32 _18; // _18
		f32 _1C; // _1C
		f32 _20; // _20
		u32 _24; // _24
		u32 _28; // _28
		f32 _2C; // _2C
		f32 _30; // _30
		f32 _34; // _34
		f32 _38; // _38
		f32 _3C; // _3C
		f32 _40; // _40
		f32 _44; // _44
		f32 _48; // _48
		u8 _4C;  // _4C
		u8 _4D;  // _4D
		u8 _4E;  // _4E
		u8 _4F;  // _4F
		u8 _50;  // _50
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
	int m_status;                           // _98
	J2DAnmTransform* _9C;                   // _9C
	J2DAnmTransform* _A0;                   // _A0
	f32 _A4;                                // _A4
	f32 _A8;                                // _A8
	og::Screen::CallBack_CounterSlot** _AC; // _AC
	og::Screen::CallBack_CounterRV* _B0;    // _B0
	og::Screen::CallBack_CounterRV* _B4;    // _B4
	int _B8;                                // _B8
	og::Screen::CallBack_CounterSlot** _BC; // _BC, array of 14 ptrs?
	og::Screen::CallBack_CounterRV* _C0;    // _C0
	og::Screen::CallBack_CounterRV* _C4;    // _C4
	og::Screen::ScaleMgr* m_scaleMgr;       // _C8
	u32 _CC;                                // _CC
	u32 _D0;                                // _D0
	u32 _D4;                                // _D4
	u32 _D8;                                // _D8
	u32 _DC;                                // _DC
	u32 _E0;                                // _E0
	u32 _E4;                                // _E4
	u32 _E8;                                // _E8
	u32 _EC;                                // _EC
	u32 _F0;                                // _F0
	u32 _F4;                                // _F4
	u32 _F8;                                // _F8
	u32 _FC;                                // _FC
	u32 _100;                               // _100
	u32 _104;                               // _104
	u32 _108;                               // _108
	u32 _10C;                               // _10C
	u32 _110;                               // _110
	u32 _114;                               // _114
	u32 _118;                               // _118
	u32 _11C;                               // _11C
	u32 _120;                               // _120
	u32 _124;                               // _124
	u32 _128;                               // _128
	u32 _12C;                               // _12C
	u32 _130;                               // _130
	u32 _134;                               // _134
	u32 _138;                               // _138
	f32 _13C[6];                            // _13C
	int _154;                               // _154
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
			_00 = 0;
			_04 = 0;
		}

		u32 _00; // _00, unknown
		u32 _04; // _04, unknown
	};

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
	void skipped() const;

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_98 = ObjDayEndResultBase
	Status m_status;                      // _98
	P2DScreen::Mgr_tuning* _9C;           // _9C
	J2DAnmTransform* _A0;                 // _A0
	ebi::Save::TMgr* m_saveMgr;           // _A4
	J2DAnmTransform* _A8;                 // _A8
	J2DAnmTransform* _AC;                 // _AC
	f32 _B0;                              // _B0
	og::Screen::CallBack_CounterDay* _B4; // _B4
	int _B8;                              // _B8
	u32 _BC;                              // _BC
	JKRMemArchive* m_memArchive;          // _C0
	MailIconAnm* m_mailIconAnms;          // _C4, array of 20 icon anms
	u32 _C8;                              // _C8, unknown
	khUtilFadePane* _CC;                  // _CC
	khUtilFadePane* _D0;                  // _D0
	og::Screen::CallBack_Message* _D4;    // _D4
	f32 _D8;                              // _D8
	f32 _DC;                              // _DC
	f32 _E0;                              // _E0
	f32 _E4;                              // _E4
	int _E8;                              // _E8
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
	Status m_status;                          // _98
	J2DAnmTransform* _9C;                     // _9C
	f32 _A0;                                  // _A0
	og::Screen::CallBack_CounterRV* _A4;      // _A4
	og::Screen::CallBack_CounterRV* _A8;      // _A8
	og::Screen::CallBack_CounterRV* _AC;      // _AC
	og::Screen::CallBack_CounterRV* _B0;      // _B0
	og::Screen::StickAnimMgr* m_stickAnimMgr; // _B4
	khUtilFadePane* _B8;                      // _B8
	khUtilFadePane* _BC;                      // _BC
	khUtilFadePane* _C0;                      // _C0
	u32 _C4;                                  // _C4
	u32 _C8;                                  // _C8
	u32 _CC;                                  // _CC
	u32 _D0;                                  // _D0
	f32 _D4;                                  // _D4
	int _D8;                                  // _D8
	f32 _DC;                                  // _DC
	int _E0;                                  // _E0
	int _E4;                                  // _E4
	int _E8;                                  // _E8
	u32 _EC;                                  // _EC
	u32 _F0;                                  // _F0
	int _F4;                                  // _F4
	u8 _F8;                                   // _F8
	u8 _F9;                                   // _F9
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
	P2DScreen::Mgr_tuning* _38; // _38
	J2DAnmTransform* _3C;       // _3C
	J2DAnmTextureSRTKey* _40;   // _40
	f32 _44;                    // _44
	f32 _48;                    // _48
	u32 _4C;                    // _4C
	u8 _50;                     // _50

	static struct StaticValues {
		inline StaticValues()
		{
			_00 = 90;
			_04 = 16;
		}

		u32 _00; // _00
		u32 _04; // _04
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
	u32 _220;                    // _220, unknown
	JKRMemArchive* m_memArchive; // _224
	u8 _228[0x14];               // _228, unknown
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