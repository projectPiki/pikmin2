#ifndef _GAME_VSGAMESECTION_H
#define _GAME_VSGAMESECTION_H

#include "types.h"
#include "Game/BaseGameSection.h"
#include "Game/ChallengeGame.h"
#include "Vector3.h"
#include "VSFifo.h"
#include "Game/VsGameSection.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/ItemHole.h"

struct Controller;

namespace Game {
struct PikiContainer;
struct MovieConfig;

namespace ItemHole {
struct Item;
} // namespace ItemHole

namespace ItemBigFountain {
struct Item;
} // namespace ItemBigFountain

namespace VsGame {
struct TekiMgr;
struct CardMgr;
struct StageData;
struct StageList;
struct State;
} // namespace VsGame

struct VsGameSection : public BaseGameSection {
	typedef VsGame::State StateType;
	struct DropCardArg {
		f32 mDropMinDistance;     // _00
		f32 mDropMaximumDistance; // _04
	};

	VsGameSection(JKRHeap*, bool);

	virtual ~VsGameSection();                                              // _08
	virtual bool doUpdate();                                               // _3C
	virtual void doDraw(Graphics& gfx);                                    // _40
	virtual bool sendMessage(GameMessage&);                                // _50
	virtual void pre2dDraw(Graphics&);                                     // _54
	virtual int getCurrFloor();                                            // _58
	virtual void addChallengeScore(int);                                   // _60
	virtual void startMainBgm();                                           // _64
	virtual void section_fadeout();                                        // _68
	virtual void goNextFloor(ItemHole::Item*);                             // _6C
	virtual bool challengeDisablePelplant() { return false; }              // _80 (weak)
	virtual bool player2enabled() { return true; }                         // _134 (weak)
	virtual char* getCaveFilename() { return mCaveInfoFilename; }          // _84 (weak)
	virtual char* getEditorFilename() { return mEditFilename; }            // _88 (weak)
	virtual int getVsEditNumber() { return mEditNumber; }                  // _8C (weak)
	virtual void onMovieStart(MovieConfig* movie, u32 unused, u32 naviID); // _B0
	virtual void onMovieDone(MovieConfig*, u32, u32);                      // _B4
	virtual void gmOrimaDown(int);                                         // _D0
	virtual void gmPikminZero();                                           // _D4
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);           // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);     // _E0
	virtual void onInit();                                                 // _F0
	virtual void onSetupFloatMemory();                                     // _120
	virtual void postSetupFloatMemory();                                   // _124
	virtual void onSetSoundScene();                                        // _128
	virtual void onClearHeap();                                            // _130

	void calcVsScores();
	void clearCaveMenus();
	void clearGetCherryCount();
	void clearGetDopeCount();
	void createFallPikmins(PikiContainer&, int);
	void createRedBlueBedamas(Vector3f&);
	void createVsPikmins();
	void createYellowBedamas(int);
	void dropCard(DropCardArg&);
	int& getGetCherryCount(int);
	int& getGetDopeCount(int, int);
	void initCardGeneration();
	void initCardPellets();
	void initPlayData();
	void loadChallengeStageList();
	void loadVsStageList();
	void updateCardGeneration();
	bool updateCaveMenus();
	void useCard();

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	Pellet* createCardPellet();

	static int mRedWinCount;
	static int mBlueWinCount;
	static int mDrawCount;

	bool mIsVersusMode;                            // _174
	VSFifo* mVsFifo;                               // _178
	StateMachine<Game::VsGameSection>* mFsm;       // _17C
	VsGame::State* mCurrentState;                  // _180
	DvdThreadCommand mDvdThreadCommand;            // _184
	f32 mGhostIconTimers[2];                       // _1F0
	u8 mMenuFlags;                                 // _1F8
	struct ItemHole::Item* mHole;                  // _1FC
	struct ItemBigFountain::Item* mFountain;       // _200
	bool mIsMenuRunning;                           // _204
	bool mIsChallengePerfect;                      // _205
	int mDeadPikiCount;                            // _208 - pikmin spawn queue
	ChallengeGame::StageList* mChallengeStageList; // _20C
	VsGame::StageList* mVsStageList;               // _210
	PikiContainer mContainer1;                     // _214
	PikiContainer mContainer2;                     // _21C
	char mCaveInfoFilename[128];                   // _248
	char mEditFilename[128];                       // _2A4
	int mCurrentFloor;                             // _324
	int mEditNumber;                               // _328
	VsGame::TekiMgr* mTekiMgr;                     // _32C
	VsGame::CardMgr* mCardMgr;                     // _330
	ChallengeGame::StageData* mChallengeStageData; // _334
	int mChallengeStageNum;                        // _338
	VsGame::StageData* mVsStageData;               // _33C
	int mVsStageNum;                               // _340
	int mOlimarHandicap;                           // _344
	int mLouieHandicap;                            // _348
	int mVsWinner;                                 // _34C
	f32 mPikminRatio;                              // _350
	f32 mPikminCountTimer;                         // _354
	f32 mRedBlueYellowScore[2];                    // _358
	f32 mCherryScore[2];                           // _360
	f32 mMaxCherryScore[2];                        // _368
	f32 mYellowScore[2];                           // _370
	f32 mRedBlueScore[2];                          // _378
	Pellet* mMarbleRedBlue[2];                     // _380
	Pellet* mMarbleYellow[7];                      // _388
	int mDopeCounts[2][2];                         // _3A4
	int mPlayer2Cherries;                          // _3B4
	int mPlayer1Cherries;                          // _3B8
	int mPokoCount;                                // _3BC
	f32 mTimeLimit;                                // _3C0
	int mCardCount;                                // _3C4
	f32 mSpawnTimer;                               // _3C8
	int mMaxCherries;                              // _3CC
	Pellet** mCherryArray;                         // _3D0
	int mMarbleCountP1;                            // _3D4
	int mMarbleCountP2;                            // _3D8
	int mYellowMarbleCounts[2];                    // _3DC
};
} // namespace Game

#endif
