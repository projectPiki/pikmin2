#ifndef _GAME_SINGLEGAMESECTION_H
#define _GAME_SINGLEGAMESECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseGameSection.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "efx/TChasePos.h"
#include "Radar.h"
#include "id32.h"

namespace og {
namespace Screen {
struct DispMemberSMenuAll;
}
} // namespace og

namespace Game {
namespace SingleGame {
struct FSM;
struct GameState;
struct State;
} // namespace SingleGame

/**
 * @Size{0x278}
 */
struct SingleGameSection : public BaseGameSection {
	typedef Game::SingleGame::State StateType;

	SingleGameSection(JKRHeap*);

	virtual ~SingleGameSection();                                             // _08
	virtual bool doUpdate();                                                  // _3C
	virtual void doDraw(Graphics& gfx);                                       // _40
	virtual int getCurrFloor() { return mCurrentFloor; }                      // _58 (weak)
	virtual bool isDevelopSection() { return false; }                         // _5C (weak)
	virtual void startMainBgm();                                              // _64
	virtual void section_fadeout();                                           // _68
	virtual void goNextFloor(ItemHole::Item* hole);                           // _6C
	virtual void goCave(ItemCave::Item* cave);                                // _70
	virtual void goMainMap(ItemBigFountain::Item* geyser);                    // _74
	virtual u32 getCaveID() { return mCaveID.getID(); }                       // _78 (weak)
	virtual CourseInfo* getCurrentCourseInfo() { return mCurrentCourseInfo; } // _7C (weak)
	virtual void playMovie_firstexperience(int, Creature*);                   // _98
	virtual void playMovie_bootup(Onyon* onyon);                              // _9C
	virtual void playMovie_helloPikmin(Piki* piki);                           // _A0
	virtual void enableTimer(f32 value, u32 type);                            // _A4
	virtual void disableTimer(u32 type);                                      // _A8
	virtual void onMovieStart(MovieConfig* movie, u32 unused, u32 naviID);    // _B0
	virtual void onMovieDone(MovieConfig*, u32, u32);                         // _B4
	virtual void onMovieCommand(int);                                         // _B8
	virtual void gmOrimaDown(int);                                            // _D0
	virtual void gmPikminZero();                                              // _D4
	virtual void openCaveInMenu(ItemCave::Item*, int);                        // _D8
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);              // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);        // _E0
	virtual void on_setCamController(int);                                    // _E4
	virtual void onInit();                                                    // _F0
	virtual void onSetupFloatMemory();                                        // _120
	virtual void onSetSoundScene();                                           // _128
	virtual void onStartHeap();                                               // _12C
	virtual void onClearHeap();                                               // _130
	virtual u32 getTimerType() { return mTimerType; }                         // _AC (weak)
	virtual char* getCaveFilename() { return mCaveFilename; }                 // _84 (weak)

	void clearCaveMenus();
	void clearCaveOtakaraEarningsAndDrops();
	void createFallPikmins();
	void flow_goto_title();
	void loadMainMapSituation();
	void newCaveOtakaraEarningsAndDrops();
	void saveCaveMore();
	void saveMainMapSituation(bool isSubmergedCastle);
	void setDispMemberSMenu(og::Screen::DispMemberSMenuAll&);
	void setupCaveGames();
	void setupMainMapGames();
	bool updateCaveMenus();
	void updateCaveScreen();
	void updateMainMapScreen();
	void drawCaveScreen();
	void drawMainMapScreen();
	void setDispMemberNavi(og::Screen::DataNavi& data, int naviID);
	Radar::Mgr::RadarSearchResult calcOtakaraLevel(f32&);

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	f32 mTimer;                                           // _174
	bool mTimerEnabled;                                   // _178
	u32 mTimerType;                                       // _17C
	u8 mOpenMenuFlags;                                    // _180
	struct Game::ItemCave::Item* mCurrentCave;            // _184
	struct Game::ItemHole::Item* mHole;                   // _188
	struct Game::ItemBigFountain::Item* mFountain;        // _18C
	u32 mCaveIndex;                                       // _190
	bool mIsExitingMap;                                   // _194
	char mCaveFilename[0x20];                             // _195
	bool mDoEnd;                                          // _1B5
	DvdThreadCommand mDvdThread;                          // _1B8
	Delegate<Game::SingleGameSection>* mLoadGameCallback; // _224
	u8 mIsGameStarted;                                    // _228, used to tell if new entry effects should play on opening the world map
	Game::CourseInfo* mCurrentCourseInfo;                 // _22C
	ID32 mCaveID;                                         // _230
	bool mInCave;                                         // _23C
	bool mTreasureRadarActive;                            // _23D
	bool mNeedTreasureCalc;                               // _23E
	Delegate<Game::SingleGameSection>* mCaveSaveCallback; // _240
	efx::TChasePos* mWeatherEfx;                          // _244
	int mCurrentFloor;                                    // _248
	Game::SingleGame::FSM* mFsm;                          // _24C
	Game::SingleGame::State* mCurrentState;               // _250
	KindCounter mCaveTreasureCounter;                     // _254
	KindCounter mCaveUpgradeCounter;                      // _25C
	KindCounter mOtakaraCounter;                          // _264
	KindCounter mItemCounter;                             // _26C
	u8 mDoTrackCarcass;                                   // _274
#if BUILDTARGET == USADEMO1
	u8 _DemoPadding2[0x4];
#endif
};
} // namespace Game

#endif
