#ifndef _GAME_GAMEPLAYDATA_H
#define _GAME_GAMEPLAYDATA_H

#include "BitFlags.h"
#include "CNode.h"
#include "Game/PikiContainer.h"
#include "Game/TekiStat.h"
#include "Game/gameStages.h"
#include "Game/gameGeneratorCache.h"
#include "id32.h"
#include "kh/khDayEndResult.h"

// HOW MUCH IS THE DEBT
#define DEBT_AMOUNT (10000)

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
	DEMO_RADAR_ENABLED           = 54, // these arent even for cutscenes, they're specifically for hud stuff
	DEMO_SPICY_ENABLED           = 55,
	DEMO_BITTER_ENABLED          = 56,
};

// What to load into after file select, i.e. where did we last save?
enum SaveFlags {
	STORYSAVE_NewFile   = 0, // no save data
	STORYSAVE_WorldMap  = 1, // save at end of day
	STORYSAVE_Overworld = 2, // save after exiting cave
	STORYSAVE_Cave      = 3, // save during cave
	STORYSAVE_DebtPaid  = 4, // save after debt paid sequence
};

struct CaveSaveData {
	CaveSaveData();

	void clear();

	void write(Stream&);
	void read(Stream&, u32);

	bool mIsInCave;           // _00
	int mCourseIdx;           // _04
	ID32 mCurrentCaveID;      // _08
	PikiContainer mCavePikis; // _14, guessed name
	f32 mTime;                // _1C
	u8 mIsWaterwraithAlive;   // _20
	f32 mWaterwraithTimer;    // _24
	int mCurrentFloor;        // _28
	u8 mActiveNaviID;         // _2C
	PikiContainer _30;        // _30
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
	u8& operator()(int);
	bool completeAll();
	int getEarnKinds();

	void write(Stream&);
	void read(Stream&);

	// Unused/inlined:
	void copyFrom(KindCounter&);
	inline void addTo(KindCounter&);

	inline int getNumKinds() const { return mNumKinds; }

	u16 mNumKinds; // _00
	u8* mKinds;    // _04
};

/**
 * @size{0x2}
 */
struct OlimarData {
	enum ItemIndex {
		ODII_FIRST_EXPLORATION_KIT_ITEM = 0,
		ODII_BruteKnuckles              = ODII_FIRST_EXPLORATION_KIT_ITEM,        // 0
		ODII_DreamMaterial,                                                       // 1
		ODII_AmplifiedAmplifier,                                                  // 2
		ODII_ProfessionalNoisemaker,                                              // 3
		ODII_StellarOrb,                                                          // 4
		ODII_JusticeAlloy,                                                        // 5
		ODII_ForgedCourage,                                                       // 6
		ODII_RepugnantAppendage,                                                  // 7
		ODII_PrototypeDetector,                                                   // 8
		ODII_FiveManNapsack,                                                      // 9
		ODII_SphericalAtlas,                                                      // 10
		ODII_GeographicProjection,                                                // 11
		ODII_LAST_EXPLORATION_KIT_ITEM = ODII_GeographicProjection,               // 11
		ODII_FIRST_NON_EXPLORATION_KIT_ITEM,                                      // 12
		ODII_TheKey                        = ODII_FIRST_NON_EXPLORATION_KIT_ITEM, // 12
		ODII_LAST_NON_EXPLORATION_KIT_ITEM = ODII_TheKey,                         // 12
		ODII_COUNT                                                                // 13
	};

	OlimarData();

	void clear();
	bool hasItem(int);
	void getItem(int);

	void write(Stream&);
	void read(Stream&);

	/**
	 * Returns the map type based on the given collection flags.
	 *
	 * @param hasPrototypeDetector A boolean indicating whether the Prototype Detector item has been collected.
	 * @param hasNapsack A boolean indicating whether the Five-Man Napsack item has been collected.
	 * @return An integer representing the map type:
	 * 		0 = None
	 * 		1 = Prototype Detector
	 * 		2 = Napsack
	 * 		3 = Both
	 */
	static inline int getDetectorFlags(bool hasPrototypeDetector, bool hasNapsack)
	{
		int mapType;
		bool flag = false;
		if (hasPrototypeDetector && hasNapsack) {
			flag = true;
		}

		if (flag) {
			mapType = 3;
		} else if (hasPrototypeDetector) {
			mapType = 1;
		} else {
			mapType = 0;
			if (hasNapsack) {
				mapType = 2;
			}
		}

		return mapType;
	}

	u8 mFlags[2]; // _00
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

	KindCounter& getOtakara() { return mOtakara; }
	KindCounter& getItem() { return mItem; }
	KindCounter& getCarcass() { return mCarcass; }

	// _00	= VTBL
	KindCounter mOtakara; // _04
	KindCounter mItem;    // _0C
	KindCounter mCarcass; // _14
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
		PDCF_JustOpen = 0x2,
		PDCF_Visited  = 0x4,
	};
	/**
	 * @size{0xC}
	 */
	struct CaveOtakara {
		CaveOtakara()
		    : mCaveCount(0)
		    , mOtakaraCountsOld(nullptr)
		    , _08(nullptr)
		{
		}

		void write(Stream&);
		void read(Stream&);

		inline void updateCounts(int i, CourseInfo* info)
		{
			int caves = info->getCaveNum();
			if (caves > 0) {
				mCaveCount        = caves;
				mOtakaraCountsOld = new u8[caves];
				_08               = new int[caves];
				if (mCaveCount > 0) {
					for (int j = 0; j < mCaveCount; j++) {
						mOtakaraCountsOld[j] = 0;
						_08[j]               = 0;
					}
				}
			}
		}

		inline void clear()
		{
			if (mCaveCount > 0) {
				for (int j = 0; j < mCaveCount; j++) {
					mOtakaraCountsOld[j] = 0;
					_08[j]               = 0;
				}
			}
		}

		u8 mCaveCount; // _00

		// Pointer to array indexed by cave index.
		// This is also returned by getOtakaraNum_Course_CaveID,
		// so I guess it's both for some reason.
		u8* mOtakaraCountsOld; // _04

		// Pointer to array indexed by cave index.
		int* _08; // _08
	};

	struct LimitGen {
		LimitGen() { }

		void write(Stream&);
		void read(Stream&);

		inline void init()
		{
			mNonLoops.reset();
			mLoops.reset();
		}

		BitFlags mNonLoops; // _00
		BitFlags mLoops;    // _08
	};

	PlayData();

	virtual ~PlayData(); // _08

	bool isCompletePelletTrigger();
	static void construct();
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

	inline bool isStoryFlag(StoryFlags flag) { return mStoryFlags & flag; }

	inline bool hasGotWhites() { return !isDemoFlag(DEMO_White_Candypop); }
	inline bool hasGotPurples() { return !isDemoFlag(DEMO_Purple_Candypop); }

	inline PelletFirstMemory* getZukanStat() { return mZukanStat; }

	inline void writeSprayCounts(Stream& output, char* textBuffer)
	{
		for (int i = 0; i < 2; i++) {
			output.textWriteTab(output.mTabCount);
			output.writeInt(mSprayCount[i]);
			sprintf(textBuffer, "\t# dope[%d]\r\n", i);
			output.textWriteText(textBuffer);
		}
	}

	inline void writeBerryCounts(Stream& output, char* textBuffer)
	{
		for (int i = 0; i < 2; i++) {
			output.textWriteTab(output.mTabCount);
			output.writeInt(mBerryCount[i]);
			sprintf(textBuffer, "\t# dope-実[%d]\r\n", i); // 'dope-berry'
			output.textWriteText(textBuffer);
		}
	}

	inline void readSprayCounts(Stream& input)
	{
		for (int i = 0; i < 2; i++) {
			mSprayCount[i] = input.readInt();
		}
	}

	inline void readBerryCounts(Stream& input)
	{
		for (int i = 0; i < 2; i++) {
			mBerryCount[i] = input.readInt();
		}
	}

	inline int getDataSize(Stream& stream, int streamStartPos)
	{
		return stream.getStreamDistance(streamStartPos) + generatorCache->getHeapUsedSize();
	}

	inline void setSaveFlag(int a, void* delegate)
	{
		mLoadType           = a;
		mBeforeSaveDelegate = delegate;
	}

	inline int getPokoCount() const { return mPokoCount; }
	inline int getCavePokoCount() const { return mCavePokoCount; }

	inline void addPokos(int pokos) { mPokoCount += pokos; }

	inline u8& getDebtProgressFlags(int flagID) { return ((u8*)(&mDebtProgressFlags))[flagID]; }

	inline PelletCropMemory* getCaveCropMemory() const { return mCaveCropMemory; }

	// _00     = VTBL
	// _00-_18 = CNode
	bool mDoAllowDebugPikiSpawn;            // _18
	u8 mLoadType;                           // _19, see SaveFlags enum
	void* mBeforeSaveDelegate;              // _1C
	u8 mDeadNaviID;                         // _20
	u8 mDeadNaviID2;                        // _21
	f32 mNaviLifeMax[2];                    // _24
	u8 mHasContainerFlags;                  // _2C
	u8 mHasBootContainerFlags;              // _2D
	u8 mMeetPikminFlags;                    // _2E
	u8 mStoryFlags;                         // _2F, see StoryFlags enum
	BitFlags mDemoFlags;                    // _30, see DemoFlags enum
	BitFlags mFindItemFlags;                // _38
	TekiStat::Mgr mTekiStatMgr;             // _40
	OlimarData mOlimarData[2];              // _48 // TODO: This really packs into 4 bytes?
	CaveSaveData mCaveSaveData;             // _4C
	kh::Screen::MailSaveData mMailSaveData; // _84
	PikiContainer mPikiContainer;           // _A8
	PelletFirstMemory* mZukanStat;          // _B0
	PelletCropMemory* mMainCropMemory;      // _B4
	PelletCropMemory* mCaveCropMemory;      // _B8
	int mTreasureCount;                     // _BC
	int mSprayCount[2];                     // _C0
	int mBerryCount[2];                     // _C8
	u64 mOsTime;                            // _D0
	u8* mBitfieldPerCourse;                 // _D8

	// Current collected overworld treasure counts, per course.
	u8* mGroundOtakaraCollected; // _DC
	CaveOtakara* mCaveOtakara;   // _E0

	// Might be pointer to pointer to BitFlags?
	LimitGen* mLimitGen; // _E4

	// Current Poko count.
	int mPokoCount; // _E8

	int mCavePokoCount; // _EC

	BitFlag<u8> mDebtProgressFlags;       // _F0, represent which %of debt messages have been seen
	BitFlag<u8> mBackupDebtProgressFlags; // _F1

	// ptr to array of previous day's collected overworld treasure counts, per
	// course.
	u8* mGroundOtakaraCollectedOld; // _F4

	CaveOtakara* mCaveOtakaraOld; // _F8

	// Previous day's Poko count.
	int mPokoCountOld; // _FC

	int mPikminYesterday[StoredPikiCount + 1]; // _100
	int mPikminToday[StoredPikiCount + 1];     // _118

	static u32 mVersion;
	static int sCurrPlayDataSize;
	static int sMaxPlayDataSize;
};

extern PlayData* playData;
} // namespace Game

#endif
