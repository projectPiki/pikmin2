#ifndef _GAME_GAMEPLAYDATA_H
#define _GAME_GAMEPLAYDATA_H

#include "BitFlags.h"
#include "CNode.h"
#include "Game/PikiContainer.h"
#include "Game/TekiStat.h"
#include "Game/gameStages.h"
#include "id32.h"
#include "kh/DayEndResult.h"

namespace Game {
struct CourseInfo;
struct Pellet;
struct BasePelletMgr;

enum StoryFlags {
	STORY_DebtPaid              = 0x1, // debt has been repaid
	STORY_AllTreasuresCollected = 0x2, // all 201 treasures have been collected
	STORY_LouieRescued          = 0x4, // louie collected? seems to get set by PelletGoalState::checkMovie and not used
};

enum DemoFlags {
	DEMO_Pluck_First_Pikmin      = 0,  // 20s after first seed from red onion
	DEMO_Discover_Treasure       = 1,  // within 200u (+ radius) of standard treasure
	DEMO_NULL_2                  = 2,  // unused
	DEMO_Find_Cave_Deeper_Hole   = 3,  // captain within 40u of hole inside cave
	DEMO_Find_Cave_Geyser        = 4,  // within 40u of geyser inside cave
	DEMO_First_Cave_Enter        = 5,  // land on first sublevel of first cave
	DEMO_First_Cave_Return       = 6,  // exit first cave for first time
	DEMO_Max_Pikmin_On_Field     = 7,  // same for both 100 and 95 pikmin cutscenes
	DEMO_First_Gate_Down         = 8,  // break gate for first time
	DEMO_Find_Spiderwort_Mold    = 9,  // within 40u of spiderwort mold
	DEMO_First_Spicy_Use         = 10, // pikmin hit with spicy spray
	DEMO_First_Bitter_Use        = 11, // enemy hit with bitter spray
	DEMO_Eat_White_Pikmin        = 12, // enemy gets poisoned by eating white pikmin
	DEMO_Purples_In_Ship         = 13, // purple in ship after another cutscene plays
	DEMO_Whites_In_Ship          = 14, // white in ship after another cutscene plays (superceded by purple)
	DEMO_Reds_In_Onion           = 15, // red in onion after another cutscene plays (superceded by white or purple)
	DEMO_Find_Spicy_Drop         = 16, // captain within 40u of spicy drop
	DEMO_Find_Bitter_Drop        = 17, // captain within 40u of bitter drop
	DEMO_First_Globe_Day_End     = 18, // find first globe + return from cave
	DEMO_UNUSED_Camera_Demo      = 19, // unused camera tutorial
	DEMO_First_Nectar_Use        = 20, // pikmin flowered from nectar for first time
	DEMO_First_Sunset_Warning    = 21, // first time sunset warning gets to finishing state
	DEMO_President_Start         = 22, // Shacho.
	DEMO_Find_Titan_Dweevil      = 23, // trigger TD rising anim
	DEMO_Find_Loozy_Treasure     = 24, // within 200u (+ radius) of pickable louie pellet
	DEMO_White_Candypop          = 25, // within 350u of white pom
	DEMO_Purple_Candypop         = 26, // within 350u of purple pom
	DEMO_First_Spicy_Berry       = 27, // spicy berry reaches ship
	DEMO_First_Bitter_Berry      = 28, // bitter berry reaches ship
	DEMO_First_Spicy_Spray_Made  = 29, // unlock spicy sprays (10 spicy berries)
	DEMO_First_Bitter_Spray_Made = 30, // unlock bitter sprays (10 bitter berries)
	DEMO_Day_One_Start           = 31, // whole crash landing cutscene
	DEMO_Enter_Awakening_Wood    = 32, // first time landing in Awakening Wood
	DEMO_Enter_Perplexing_Pool   = 33, // first time landing in Perplexing Pool
	DEMO_Enter_Wistful_Wild      = 34, // first time landing in Wistful Wild
	DEMO_Meet_Red_Pikmin         = 35, // whistle red pikmin for first time
	DEMO_Louie_Finds_Red_Onion   = 36, // louie within 125u of red onion
	DEMO_Unlock_Captain_Switch   = 37, // 5s after killing first kochappy (dwarf red/orange/snow or dumple)
	DEMO_First_Use_Louie         = 38, // complete camera transition between captains (w/ above flag set)
	DEMO_Reunite_Captains        = 39, // crush a non-seesaw scale block (i.e. bag)
	DEMO_First_Corpse_In_Cave    = 40, // collect a (NEW) bug body
	DEMO_UNUSED_Detector         = 41, // unused treasure detector tutorial? not fully functional
	DEMO_Find_Yellow_Onion       = 42, // captain within 1600u of yellow onion
	DEMO_Find_Blue_Onion         = 43, // captain within 750u of blue onion
	DEMO_Discover_Bulbmin        = 44, // whistle bulbmin for first time
	DEMO_Whites_Digging          = 45, // first time FULLY buried treasure takes damage
	DEMO_Reds_Purples_Tutorial   = 46, // reds and purples cutscene, 20s after both close in party
	DEMO_Pikmin_In_Danger_Fire   = 47, //
	DEMO_You_Appear_Lost         = 48, // 3min after 15+ red pikmin on field if captains not reunited (needs 15w scale block or crashes)
	DEMO_First_Number_Pellet     = 49, // collect number pellet for first time
	DEMO_Waterwraith_Appears     = 50, // waterwraith spawning on Submerged Castle 1-4
	DEMO_Pikmin_In_Danger_Water  = 51,
	DEMO_Pikmin_In_Danger_Poison = 52,
	DEMO_UNK_53                  = 53,
	DEMO_UNK_54                  = 54, // cave screen?
	DEMO_UNK_55                  = 55, // cave screen?
	DEMO_UNK_56                  = 56, // cave screen?
};

struct CaveSaveData {
	CaveSaveData();

	void clear()
	{
		m_cavePikis.clear();
		m_time      = 0.0f;
		m_isInCave  = false;
		m_courseIdx = -1;
		m_currentCaveID.setID('none');
		m_isWaterwraithAlive = 1;
		m_waterwraithTimer   = 0.0f;
	}

	void write(Stream&);
	void read(Stream&, u32);

	bool m_isInCave;           // _00
	int m_courseIdx;           // _04
	ID32 m_currentCaveID;      // _08
	PikiContainer m_cavePikis; // _14, guessed name
	f32 m_time;                // _1C
	u8 m_isWaterwraithAlive;   // _20
	f32 m_waterwraithTimer;    // _24
	int m_currentFloor;        // _28
	u8 m_activeNaviID;         // _2C
	PikiContainer _30;         // _30
};

struct KindCounter {
	enum Flags {
		KCF_Unset    = 0,
		KCF_Unknown1 = 1,
		KCF_Earned   = 2,
	};
	KindCounter();

	void alloc(int);
	void clear();
	u8* operator()(int);
	bool completeAll();
	int getEarnKinds();

	void write(Stream&);
	void read(Stream&);

	// Unused/inlined:
	void copyFrom(KindCounter&);
	inline void addTo(KindCounter&);

	u16 m_numKinds; // _00
	u8* m_kinds;    // _04
};

/**
 * @size{0x2}
 */
struct OlimarData {
	enum ItemIndex {
		ODII_FIRST_EXPLORATION_KIT_ITEM = 0,
		ODII_BruteKnuckles              = ODII_FIRST_EXPLORATION_KIT_ITEM,
		ODII_DreamMaterial,
		ODII_AmplifiedAmplifier,
		ODII_ProfessionalNoisemaker,
		ODII_StellarOrb,
		ODII_JusticeAlloy,
		ODII_ForgedCourage,
		ODII_RepugnantAppendage,
		ODII_PrototypeDetector,
		ODII_FiveManNapsack,
		ODII_SphericalAtlas,
		ODII_GeographicProjection,
		ODII_LAST_EXPLORATION_KIT_ITEM = ODII_GeographicProjection,
		ODII_FIRST_NON_EXPLORATION_KIT_ITEM,
		ODII_TheKey                        = ODII_FIRST_NON_EXPLORATION_KIT_ITEM,
		ODII_LAST_NON_EXPLORATION_KIT_ITEM = ODII_TheKey,
		ODII_COUNT
	};

	OlimarData();

	void clear();
	bool hasItem(int);
	void getItem(int);

	void write(Stream&);
	void read(Stream&);

	u8 m_flags[2]; // _00
};

struct PelletCropMemory {
	PelletCropMemory(int, int, int); // inlined
	inline PelletCropMemory(PelletCropMemory&);

	virtual void read(Stream&);  // _08
	virtual void write(Stream&); // _0C

	void addTo(PelletCropMemory*);
	int calcEarnKinds();
	void clear();
	bool completeAll();
	PelletCropMemory* createClone();

	// Unused/inlined:
	void obtainPellet(Pellet*);
	int calcNumKinds();

	// _00	= VTBL
	KindCounter m_otakara; // _04
	KindCounter m_item;    // _0C
	KindCounter m_carcass; // _14
};

struct PelletFirstMemory : public PelletCropMemory {
	PelletFirstMemory(int, int, int); // inlined

	virtual bool firstCarryPellet(Pellet*);         // _10
	virtual void obtainPellet(BasePelletMgr*, int); // _14
	virtual void losePellet(BasePelletMgr*, int);   // _18

	// _00 		= VTBL
	// _00-_1C  = PelletCropMemory
};

/**
 * @size{0x130}
 */
struct PlayData : public CNode {
	enum CourseFlags {
		PDCF_Unset    = 0x0,
		PDCF_Open     = 0x1,
		PDCF_Unknown2 = 0x2,
		PDCF_Visited  = 0x4,
	};
	/**
	 * @size{0xC}
	 */
	struct CaveOtakara {
		CaveOtakara();

		void write(Stream&);
		void read(Stream&);

		inline void updateCounts(int i, CourseInfo* info)
		{
			int caves = info->getCaveNum();
			if (caves > 0) {
				m_caveCount        = caves;
				m_otakaraCountsOld = new char[caves];
				_08                = new int[caves];
				if (m_caveCount > 0) {
					for (int j = 0; j < m_caveCount; j++) {
						m_otakaraCountsOld[j] = 0;
						_08[j]                = 0;
					}
				}
			}
		}

		u8 m_caveCount; // _00

		// Pointer to array indexed by cave index.
		// This is also returned by getOtakaraNum_Course_CaveID,
		// so I guess it's both for some reason.
		char* m_otakaraCountsOld; // _04

		// Pointer to array indexed by cave index.
		int* _08; // _08
	};

	struct LimitGen {
		LimitGen();

		void write(Stream&);
		void read(Stream&);

		BitFlags m_nonLoops; // _00
		BitFlags m_loops;    // _08
	};

	PlayData();

	virtual ~PlayData(); // _08

	bool isCompletePelletTrigger();
	void construct();
	void reset();
	void setDevelopSetting(bool, bool);
	int calcPlayMinutes();
	void resetContainerFlag();
	bool hasContainer(int);
	bool hasMetPikmin(int);
	bool hasBootContainer(int);
	void setContainer(int);
	void setMeetPikmin(int);
	void setBootContainer(int);
	void debugSetContainerFlagOn();
	void setDemoFlag(int);
	bool isDemoFlag(int);
	void setFindItemDemoFlag(int);
	bool isFindItemDemoFlag(int);
	void setCurrentCourse(int);
	void clearCurrentCave();
	void setCurrentCave(ID32&, int);
	void setCurrentCaveFloor(int);
	int getCurrentCourseIndex();
	CourseInfo* getCurrentCourse();
	void getCurrentCave(ID32&, int&);
	bool firstCarryPellet(Pellet*);
	void obtainPellet(BasePelletMgr*, int);
	void losePellet(BasePelletMgr*, int);
	void obtainPellet_Main(Pellet*);
	void obtainPellet_Cave(Pellet*);
	bool isPelletEverGot(u8, u8);
	bool isPelletZukanVisible(int);
	bool isPelletZukanWhatsNew(int);
	bool hasPelletZukanWhatsNew();
	void setPelletZukanOutOfDateAll();
	int getGroundOtakaraNum(int);
	int getGroundOtakaraMax(int);
	void incGroundOtakara(int);
	int getDopeCount(int);
	void setDopeCount(int, int);
	void incDopeCount(int);
	bool hasDope(int);
	int getDopeFruitCount(int);
	bool addDopeFruit(int);
	void useDope(int);
	bool isCaveFirstTime(int, ID32&);
	void setCaveVisit(int, ID32&);
	void incCaveOtakara(int, ID32&);
	int getOtakaraNum_Course_CaveID(int, ID32&);
	int getOtakaraMax_Course_CaveID(int, ID32&);
	void initCaveOtakaras();
	void read_CaveOtakara(Stream&);
	void write_CaveOtakara(Stream&);
	int getRepayLevel();
	f32 getRepayLevelPercent(int);
	bool checkRepayLevelFirstClear();
	void experienceRepayLevelFirstClear();
	void initLimitGens();
	void initCourses(bool);
	void openCourse(int);
	void visitCourse(int);
	bool courseOpen(int);
	bool courseJustOpen(int);
	bool courseFirstTime(int);
	bool courseVisited(int);
	bool doneWorldMapEffect();
	int getGroundOtakaraNum_Old(int);
	int getOtakaraNum_Course_CaveID_Old(int, ID32&);
	int getMoney_Old();
	bool isCaveFirstTime_Old(int, ID32&);
	void read_CaveOtakara_Old(Stream&);
	void write_CaveOtakara_Old(Stream&);
	int getPikminCount_Today(int);
	int getPikminCount_Yesterday(int);
	void setPikminCounts_Today();
	void setPikminCounts_Yesterday();
	void prepareSave();
	void write(Stream&);
	void read(Stream&);

	// unused/inlined:
	void confirmCaveCropMemory();
	bool isPelletEverGot(Pellet*);
	int getTekiCarcassMoney(int);
	bool isCaveFirstReturn(int, ID32&);
	bool closeCourse(int);

	inline bool isStoryFlag(StoryFlags flag) { return m_storyFlags & flag; }

	bool _18;                                // _18
	u8 _19;                                  // _19
	u32 _1C;                                 // _1C
	u8 _20;                                  // _20
	f32 m_naviLifeMax[2];                    // _24
	u8 m_hasContainerFlags;                  // _2C
	u8 m_hasBootContainerFlags;              // _2D
	u8 m_meetPikminFlags;                    // _2E
	u8 m_storyFlags;                         // _2F, see StoryFlags enum
	BitFlags m_demoFlags;                    // _30, see DemoFlags enum
	BitFlags m_findItemFlags;                // _38
	TekiStat::Mgr m_tekiStatMgr;             // _40
	OlimarData m_olimarData[2];              // _48 // TODO: This really packs into 4 bytes?
	CaveSaveData m_caveSaveData;             // _4C
	kh::Screen::MailSaveData m_mailSaveData; // _84
	PikiContainer m_pikiContainer;           // _A8
	PelletFirstMemory* _B0;                  // _B0
	PelletCropMemory* m_mainCropMemory;      // _B4
	PelletCropMemory* m_caveCropMemory;      // _B8
	int _BC;                                 // _BC
	int _C0[2];                              // _C0
	int m_berryCount[2];                     // _C8
	int m_osTimeHi;                          // _D0
	int m_osTimeLo;                          // _D4
	u8* m_bitfieldPerCourse;                 // _D8

	// Current collected overworld treasure counts, per course.
	u8* m_groundOtakaraCollected; // _DC
	CaveOtakara* m_caveOtakara;   // _E0

	// Might be pointer to pointer to BitFlags?
	LimitGen* m_limitGen; // _E4

	// Current Poko count.
	u32 m_pokoCount; // _E8

	int m_cavePokoCount; // _EC

	u8 m_debtProgressFlags[2]; // _F0, represent which %of debt messages have been seen

	// ptr to array of previous day's collected overworld treasure counts, per
	// course.
	u8* m_groundOtakaraCollectedOld; // _F4

	CaveOtakara* m_caveOtakaraOld; // _F8

	// Previous day's Poko count.
	int m_pokoCountOld; // _FC

	int m_pikminYesterday[6]; // _100
	int m_pikminToday[6];     // _118

	static u32 mVersion;
	static int sCurrPlayDataSize;
	static int sMaxPlayDataSize;
};

extern PlayData* playData;
} // namespace Game

#endif
