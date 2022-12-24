#ifndef _OG_SCREEN_DISPMEMBER_H
#define _OG_SCREEN_DISPMEMBER_H

#include "Screen/Enums.h"
#include "og/Screen/Data.h"
#include "IDelegate.h"
#include "id32.h"
#include "Rect.h"

struct Controller;

namespace Game {
struct BaseGameSection;
} // namespace Game

namespace og {
namespace Screen {

// size 0x8
struct DispMemberBase {
	inline DispMemberBase()
	    : m_subMember(nullptr)
	{
	}

	virtual u32 getSize()     = 0;    // _08
	virtual u32 getOwnerID()  = 0;    // _0C
	virtual u64 getMemberID() = 0;    // _10
	virtual void doSetSubMemberAll(); // _14 (weak)

	bool isID(u32, u64);
	void getMemberName(char*);
	bool setSubMember(DispMemberBase*);
	DispMemberBase* getSubMember(u32, u64);
	void setSubMemberAll();

	// inline void getOwnerName(char* outName) {
	// 	TagToName(getOwnerID(), outName);
	// }
	// inline void dump() {
	// 	char owner[12];
	// 	char member[12];
	// 	getOwnerName(owner);
	// 	getMemberName(member);
	// }

	// _00 = VTBL
	DispMemberBase* m_subMember; // _04
};

// size 0x24
struct DispMemberAnaDemo : public DispMemberBase {
	inline DispMemberAnaDemo()
	{
		_20              = 0;
		m_caveOtakaraNum = 24;
		m_caveOtakaraMax = 69;
		_1F              = 1;
		m_pikis          = 1;
		m_pikisField     = 1;
		m_caveID         = 't_01';
		_1C              = 0;
		m_payedDebt      = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberAnaDemo); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_ANA_DEMO; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_caveOtakaraNum; // _08
	u32 m_caveOtakaraMax; // _0C
	u32 m_pikis;          // _10
	u32 m_pikisField;     // _14
	u32 m_caveID;         // _18
	u8 _1C;               // _1C
	u8 m_payedDebt;       // _1D
	u8 m_selected;        // _1E
	u8 _1F;               // _1F
	u32 _20;              // _20
};

// size 0x10
struct DispMemberDayEndCount : public DispMemberBase {
	inline DispMemberDayEndCount()
	{
		m_duration     = 0.9f;
		m_currSunRatio = 0.9f;
	}

	virtual u32 getSize() { return sizeof(DispMemberDayEndCount); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_DAY_END_COUNT; }      // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	f32 m_currSunRatio; // _08
	f32 m_duration;     // _0C
};

// size 0x10
struct DispMemberHurryUp : public DispMemberBase {

	inline DispMemberHurryUp()
	{
		m_duration     = 0.8f;
		m_currSunRatio = 0.8f;
	}

	virtual u32 getSize() { return sizeof(DispMemberHurryUp); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_HURRY_UP; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	f32 m_currSunRatio; // _08
	f32 m_duration;     // _0C
};

// size 0x64
struct DispMemberCave : public DispMemberBase {
	inline DispMemberCave()
	{
		m_dataGame._14      = true;
		m_payDebt           = false;
		m_isFinalFloor      = false;
		m_treasureDist      = 900.0f;
		m_drawSensor        = false;
		m_radarState        = 1;
		_5F                 = false;
		m_isBitterUnlocked  = false;
		m_isSpicyUnlocked   = false;
		m_radarEnabled      = false;
		m_allTreasureGotten = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberCave); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }           // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CAVE; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame m_dataGame;      // _08
	DataNavi m_olimarData;    // _24
	DataNavi m_louieData;     // _24
	f32 m_treasureDist;       // _54
	int m_radarState;         // _58
	u8 m_drawSensor;          // _5C
	u8 m_payDebt;             // _5D
	u8 m_isFinalFloor;        // _5E
	u8 _5F;                   // _5F
	bool m_radarEnabled;      // _60
	bool m_allTreasureGotten; // _61
	bool m_isBitterUnlocked;  // _62, have made first bitter spray from berries
	bool m_isSpicyUnlocked;   // _63, have made first spicy spray from berries
};

// size 0x28
struct DispMemberCaveMore : public DispMemberAnaDemo {
	inline DispMemberCaveMore()
	{
		m_pikiInDanger   = 0;
		m_cantProceed    = 0;
		_20              = 0;
		m_caveOtakaraNum = 4;
		m_caveOtakaraMax = 4;
		m_pikis          = 10;
		m_caveID         = '2p_c';
	}

	virtual u32 getSize() { return sizeof(DispMemberCaveMore); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CAVE_MORE; }       // _10 (weak)

	// _00     = VTBL
	// _00-_24 = DispMemberAnaDemo
	u8 m_pikiInDanger; // _24
	u8 m_cantProceed;  // _25
};

// size 0x78
struct DispMemberChallenge1P : public DispMemberBase {

	inline DispMemberChallenge1P()
	{
		m_pokos    = 2540;
		_58        = false;
		_5C        = 2469.0f;
		m_deadPiki = 4242;
		_60        = 0.0f;
	}

	virtual u32 getSize() { return sizeof(DispMemberChallenge1P); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_1P; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame m_dataGame;                 // _08
	DataNavi m_olimarData;               // _24
	DataNavi m_louieData;                // _3C
	u32 m_pokos;                         // _54
	u8 _58;                              // _58
	f32 _5C;                             // _5C
	f32 _60;                             // _60
	u32 m_deadPiki;                      // _64
	DispMemberDayEndCount m_dayEndCount; // _68
};

// size 0x78
struct DispMemberChallenge2P : public DispMemberBase {

	inline DispMemberChallenge2P()
	{
		m_pokos     = 2540;
		_58         = false;
		m_timeLimit = 2469.0f;
		m_deadPiki  = 4242;
		_60         = 0.0f;
	}

	virtual u32 getSize() { return sizeof(DispMemberChallenge2P); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_2P; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame m_dataGame;                 // _08
	DataNavi m_olimarData;               // _24
	DataNavi m_louieData;                // _3C
	u32 m_pokos;                         // _54
	u8 _58;                              // _58
	f32 m_timeLimit;                     // _5C
	f32 _60;                             // _60
	u32 m_deadPiki;                      // _64
	DispMemberDayEndCount m_dayEndCount; // _68
};

// size 0x38
struct DispMemberContena : public DispMemberBase {
	inline DispMemberContena()
	{
		m_inOnion          = 100;
		m_currInMap        = 1000;
		m_newInPartyNum    = 0;
		m_maxPikiField     = 20;
		m_inParty2         = 50;
		m_onMapMinusWild   = 60;
		m_maxPikiMinusWild = 200;
		m_onyonID          = -1;
		m_inTransfer       = 0;
		_2C                = 0;
		m_state            = 0;
		m_result           = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberContena); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CONTENA; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_onyonID;          // _08
	u32 m_inOnion;          // _0C
	int m_currInMap;        // _10
	u32 m_newInPartyNum;    // _14
	int m_maxPikiField;     // _18
	int m_inParty2;         // _1C
	u32 m_onMapMinusWild;   // _20
	int m_maxPikiMinusWild; // _24
	u32 m_inTransfer;       // _28
	bool _2C;               // _2C
	int m_state;            // _30
	s16 m_result;           // _34
};

// size 0x10
struct DispMemberCourseName : public DispMemberBase {
	inline DispMemberCourseName()
	    : m_courseIndex(0)
	{
		_0C = 0;
		_0D = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberCourseName); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                 // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_COURSE_NAME; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_courseIndex; // _08
	u8 _0C;            // _0C
	u8 _0D;            // _0D
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

	inline DispMemberFinalMessage() { m_finalState = 0; }

	virtual u32 getSize() { return sizeof(DispMemberFinalMessage); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                   // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FINAL_MSG; }           // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_finalState; // _08
};

// size 0x14
struct DispMemberFloor : public DispMemberBase {
	inline DispMemberFloor()
	{
		m_sublevel     = 55;
		m_doEnd        = false;
		m_doForceEnd   = false;
		m_caveID       = 't_01';
		m_enableButton = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberFloor); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }            // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FLOOR; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_sublevel;      // _08
	int m_caveID;        // _0C
	bool m_doEnd;        // _10
	bool m_doForceEnd;   // _11
	bool m_enableButton; // _12
};

// size 0x88
struct DispMemberGround : public DispMemberBase {

	inline DispMemberGround()
	{
		m_payDebt            = false;
		m_treasureDist       = 900.0f;
		m_hasRadar           = false;
		m_isNotDay1          = true;
		m_radarState         = 1;
		m_unlockedSpicy      = false;
		m_unlockedBitter     = false;
		m_hasBitter          = false;
		m_hasSpicy           = false;
		m_radarEnabled       = false;
		m_allTreasuresGotten = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberGround); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_GROUND; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataGame m_dataGame;  // _08
	DataNavi m_dataNavi1; // _24
	DataNavi m_dataNavi2;
	f32 m_treasureDist;                  // _54
	int m_radarState;                    // _58
	bool m_hasRadar;                     // _5C
	bool m_isNotDay1;                    // _5D
	bool m_payDebt;                      // _5E
	bool m_unlockedSpicy;                // _5F
	bool m_unlockedBitter;               // _60
	bool m_hasBitter;                    // _61
	bool m_hasSpicy;                     // _62
	bool m_radarEnabled;                 // _63
	bool m_allTreasuresGotten;           // _64
	DispMemberDayEndCount m_dayEndCount; // _68
	DispMemberHurryUp m_hurryUp;         // _78
};

// size 0x28
struct DispMemberKanketuMenu : public DispMemberAnaDemo {
	inline DispMemberKanketuMenu()
	{
		m_pikiInDanger   = 0;
		m_cantProceed    = 0;
		m_isChallenge    = 0;
		_20              = 0;
		m_caveOtakaraNum = 4;
		m_caveOtakaraMax = 4;
		m_pikis          = 10;
	}

	virtual u32 getSize() { return sizeof(DispMemberKanketuMenu); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_KANKETU_MENU; }       // _10 (weak)

	// _00     = VTBL
	// _00-_24 = DispMemberAnaDemo
	u8 m_pikiInDanger; // _24
	u8 m_cantProceed;  // _25
	u8 m_isChallenge;  // _26
};

// size 0x40
struct DispMemberKantei : public DispMemberBase {

	inline DispMemberKantei()
	{
		m_pelletValue         = 123;
		m_totalPokos          = 5000;
		m_kanteiType          = 0;
		m_delegate            = nullptr;
		m_pelletOffset        = 0;
		m_totalPokosCave      = 5555;
		_28                   = 0;
		m_secondaryController = nullptr;
		_29                   = false;
		m_isDone              = false;
		m_inCave              = false;
		m_doPlayBGM           = true;
	}

	virtual u32 getSize() { return sizeof(DispMemberKantei); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_KANTEI; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_pelletValue;                                    // _08
	u32 m_totalPokos;                                     // _0C
	Delegate1<Game::BaseGameSection, Rectf&>* m_delegate; // _10
	u8 _14[0x4];                                          // _14, unknown
	u64 m_pelletMessageID;                                // _18
	u32 m_pelletOffset;                                   // _20
	int m_totalPokosCave;                                 // _24
	u8 _28;                                               // _28
	u8 _29;                                               // _29
	Controller* m_secondaryController;                    // _2C
	u8 m_isDone;                                          // _30
	u32 m_kanteiType;                                     // _34, pre or post-debt
	u8 m_inCave;                                          // _38
	u8 m_doPlayBGM;                                       // _39
	u8 _3A[0x2];                                          // _3A, unknown, possibly padding
	u8 _3C[0x4];                                          // _3C, unknown
};

// size 0xC
struct DispMemberSave : public DispMemberBase {

	virtual u32 getSize() { return sizeof(DispMemberSave); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }           // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_SAVE; }        // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u8 m_doSound; // _08
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

	virtual u32 getSize() { return sizeof(DispMemberSMenuItem); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_ITEM; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_spicySprayCount;              // _08
	u32 m_spicyBerryCount;              // _0C
	u32 m_bitterSprayCount;             // _10
	u32 m_bitterBerryCount;             // _14
	bool m_explorationKitInventory[12]; // _18
	bool m_isBitterUnlocked;            // _24, have made first bitter spray from berries
	bool m_isSpicyUnlocked;             // _25, have made first spicy spray from berries
};

// size 0x4C
struct DispMemberSMenuMap : public DispMemberBase {

	virtual u32 getSize() { return sizeof(DispMemberSMenuMap); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_MAP; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DataMap m_dataMap;      // _08
	int m_courseIndex;      // _3C
	u32 m_currentCave;      // _40
	bool m_unlockedReds;    // _44
	bool m_unlockedYellows; // _45
	bool m_unlockedBlues;   // _46
	bool m_unlockedWhites;  // _47
	bool m_unlockedPurples; // _48
	u8 m_inCave;            // _49
	bool m_activeNavi;      // _4A
};

// size 0x14
struct DispMemberSMenuPause : public DispMemberBase {

	virtual u32 getSize() { return sizeof(DispMemberSMenuPause); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                 // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_PAUSE; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_debtRemaining; // _08
	u32 m_pokoCount;     // _0C
	int m_exitStatus;    // _10
};

// size 0x18
struct DispMemberSMenuPauseDoukutu : public DispMemberBase {

	inline DispMemberSMenuPauseDoukutu()
	{
		m_exitStatus    = 1;
		m_cavePokos     = 86;
		m_preCavePokos  = 2469;
		m_payDebt       = true;
		m_pikisInDanger = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberSMenuPauseDoukutu); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                        // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_PAUSE_DOUKUTU; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_cavePokos;    // _08
	u32 m_preCavePokos; // _0C
	u8 m_payDebt;       // _10
	u8 m_pikisInDanger; // _11
	int m_exitStatus;   // _14
};

// size 0xC
struct DispMemberSMenuPauseVS : public DispMemberBase {

	inline DispMemberSMenuPauseVS() { m_state = 1; }

	virtual u32 getSize() { return sizeof(DispMemberSMenuPauseVS); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                   // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_PAUSE_VS; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_state; // _08
};

// size 0xC4
struct DispMemberSMenuAll : public DispMemberBase {
	DispMemberSMenuAll();

	virtual u32 getSize() { return sizeof(DispMemberSMenuAll); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_START_MENU_ALL; }  // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DispMemberSMenuPause m_sMenuPause;               // _08
	DispMemberSMenuPauseDoukutu m_sMenuPauseDoukutu; // _1C
	DispMemberSMenuItem m_sMenuItem;                 // _34
	DispMemberSMenuMap m_sMenuMap;                   // _5C
	DispMemberSMenuPauseVS m_sMenuVS;                // _A8
	DispMemberSMenuCont m_sMenuCont;                 // _B4
	int m_pauseVSType;                               // _BC
	bool m_isDay1;                                   // _C0
};

// size 0x10
struct DispMemberSpecialItem : public DispMemberBase {

	DispMemberSpecialItem()
	{
		m_delegate  = nullptr;
		m_doPlayBGM = true;
	}

	virtual u32 getSize() { return sizeof(DispMemberSpecialItem); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_SPECIAL_ITEM; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	Delegate1<Game::BaseGameSection, Rectf&>* m_delegate; // _08
	u8 m_doPlayBGM;                                       // _0C
};

// size 0x10
struct DispMemberUfoMenu : public DispMemberBase {
	inline DispMemberUfoMenu()
	{
		m_contenaType = 1;
		_0C           = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberUfoMenu); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }              // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_UFO_MENU; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_contenaType; // _08
	u8 _0C;            // _0C
};

// size 0x8C
struct DispMemberUfoGroup : public DispMemberBase {
	inline DispMemberUfoGroup()
	{
		m_hasPurple          = false;
		m_hasWhite           = false;
		m_contena1.m_onyonID = 4;
		m_contena2.m_onyonID = 3;
		m_hasPaidDebt        = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberUfoGroup); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_UFO_GROUP; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	DispMemberUfoMenu m_ufoMenu;  // _08
	DispMemberContena m_contena1; // _18
	DispMemberContena m_contena2; // _50
	bool m_hasPurple;             // _88
	bool m_hasWhite;              // _89
	bool m_hasPaidDebt;           // _8A
};

// size 0x74
struct DispMemberVs : public DispMemberBase {

	inline DispMemberVs()
	{
		m_redPikminCount  = 111;
		m_bluePikminCount = 222;
		m_P1Bedamas       = 0;
		m_P2Bedamas       = 0;
		m_doneState       = 0;
		m_flags[0]        = 0;
		m_flags[1]        = 0;
		m_flags[2]        = 0;
		m_flags[3]        = 0;
		m_obakeTimerP1    = 99999.0f;
		m_obakeTimerP2    = 99999.0f;
	}

	virtual u32 getSize() { return sizeof(DispMemberVs); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }         // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_VS; }        // _10 (weak)

	inline void setMarbleConditions(bool red, bool blue)
	{
		_68[0] = red;
		_68[1] = blue;
	}

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u32 m_doneState;      // _08, unknown
	DataGame m_dataGame;  // _0C
	DataNavi m_dataNavi1; // _28
	DataNavi m_dataNavi2;
	u32 m_redPikminCount;  // _58
	u32 m_bluePikminCount; // _5C
	int m_P1Bedamas;       // _60
	int m_P2Bedamas;       // _64, unknown
	u8 m_flags[4];         // _68
	f32 m_obakeTimerP1;    // _6C
	f32 m_obakeTimerP2;    // _70
};

// size 0x28
struct DispMemberWorldMapInfoWin0 : public DispMemberBase {
	inline DispMemberWorldMapInfoWin0()
	{
		m_result         = 0;
		m_msgIDYes       = '4710_00'; // "Continue"
		m_msgIDNo        = '4711_00'; // "Return to Title Screen"
		_20              = 180;
		m_startSelection = 0;
	}

	virtual u32 getSize() { return sizeof(DispMemberWorldMapInfoWin0); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                       // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WORLD_MAP_INFO_WINDOW_0; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_result;        // _08
	u8 _0C[0x4];         // _0C, unknown
	u64 m_msgIDYes;      // _10
	u64 m_msgIDNo;       // _18
	u8 _20;              // _20
	u8 m_startSelection; // _21
	u8 _22[0x2];         // _22, possibly padding
	u8 _24[0x4];         // _24, unknown
};

// size 0x10
struct DispMemberWorldMapInfoWin1 : public DispMemberBase {
	inline DispMemberWorldMapInfoWin1()
	{
		m_result = 0;
		_0C      = 180;
	}

	virtual u32 getSize() { return sizeof(DispMemberWorldMapInfoWin1); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_OGA; }                       // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WORLD_MAP_INFO_WINDOW_1; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_result; // _08, state or result
	u8 _0C;       // _0C
};

} // namespace Screen
} // namespace og

#endif
