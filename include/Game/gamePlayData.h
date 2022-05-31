#ifndef _GAME_GAMEPLAYDATA_H
#define _GAME_GAMEPLAYDATA_H

#include "BitFlags.h"
#include "CNode.h"
#include "Game/PikiContainer.h"
#include "Game/TekiStat.h"
#include "id32.h"
#include "kh/MailSaveData.h"

namespace Game {
struct CourseInfo;
struct Pellet;
struct BasePelletMgr;

struct CaveSaveData {
	CaveSaveData();

	void clear()
	{
		_14.clear();
		m_time          = 0.0f;
		m_isInCave      = false;
		m_currentCourse = -1;
		m_currentCaveID.setID('none');
		m_isWaterwraithAlive = 1;
		m_waterwraithTimer   = 0.0f;
	}

	void write(Stream&);
	void read(Stream&, u32);

	bool m_isInCave;          // _00
	int m_currentCourse;      // _04 // TODO: Should this be currentCourseIndex?
	ID32 m_currentCaveID;     // _08
	PikiContainer _14;        // _14
	float m_time;             // _1C
	u8 m_isWaterwraithAlive;  // _20
	float m_waterwraithTimer; // _24
	int m_currentFloor;       // _28
	u8 m_activeNaviID;        // _2C
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
	u8* operator()(int);
	bool completeAll();
	int getEarnKinds();

	void write(Stream&);
	void read(Stream&);

	// Unused/inlined:
	void copyFrom(KindCounter&);
	void addTo(KindCounter&);

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

	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	void addTo(PelletCropMemory*);
	int calcEarnKinds();
	void clear();
	bool completeAll();
	PelletCropMemory* createClone();

	// Unused/inlined:
	void obtainPellet(Pellet*);
	int calcNumKinds();

	KindCounter _04; // _04
	KindCounter _0C; // _0C
	KindCounter _14; // _14
};

struct PelletFirstMemory : public PelletCropMemory {
	PelletFirstMemory(int, int, int); // inlined

	bool firstCarryPellet(Pellet*);
	void obtainPellet(BasePelletMgr*, int);
	void losePellet(BasePelletMgr*, int);
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

	virtual ~PlayData(); // _00

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
	void addDopeFruit(int);
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
	float getRepayLevelPercent(int);
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

	bool _18;                                // _18
	u8 _19;                                  // _19
	u32 _1C;                                 // _1C
	u8 _20;                                  // _20
	float m_naviLifeMax[2];                  // _24
	u8 m_hasContainerFlags;                  // _2C
	u8 m_hasBootContainerFlags;              // _2D
	u8 m_meetPikminFlags;                    // _2E
	u8 _2F;                                  // _2F
	BitFlags m_demoFlags;                    // _30
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

	int _EC; // _EC

	u8 _F0[2]; // _F0

	// ptr to array of previous day's collected overworld treasure counts, per
	// course.
	u8* m_groundOtakaraCollectedOld; // _F4

	CaveOtakara* _F8; // _F8

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
