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
	struct DropCardArg {
		f32 _00; // _00
		f32 _04; // _04
	};

	VsGameSection(JKRHeap*, bool);

	virtual ~VsGameSection();                                           // _08
	virtual bool doUpdate();                                            // _3C
	virtual void doDraw(Graphics& gfx);                                 // _40
	virtual void sendMessage(GameMessage&);                             // _50
	virtual void pre2dDraw(Graphics&);                                  // _54
	virtual int getCurrFloor();                                         // _58
	virtual void addChallengeScore(int);                                // _60
	virtual void startMainBgm();                                        // _64
	virtual void section_fadeout();                                     // _68
	virtual void goNextFloor(ItemHole::Item*);                          // _6C
	virtual bool challengeDisablePelplant(); /*{ return false; }*/      // _80 (weak)
	virtual bool player2enabled(); /*{ return true; }*/                 // _134 (weak)
	virtual char* getCaveFilename(); /*{ return m_caveInfoFilename; }*/ // _84 (weak)
	virtual char* getEditorFilename(); /*{ return m_editFilename; }*/   // _88 (weak)
	virtual int getVsEditNumber(); /*{ return m_editNumber; }*/         // _8C (weak)
	virtual void onMovieStart(MovieConfig*, u32, u32);                  // _B0
	virtual void onMovieDone(MovieConfig*, u32, u32);                   // _B4
	virtual void gmOrimaDown(int);                                      // _D0
	virtual void gmPikminZero();                                        // _D4
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);        // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);  // _E0
	virtual void onInit();                                              // _F0
	virtual void onSetupFloatMemory();                                  // _120
	virtual void postSetupFloatMemory();                                // _124
	virtual void onSetSoundScene();                                     // _128
	virtual void onClearHeap();                                         // _130

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

	Pellet* createCardPellet();

	static int mRedWinCount;
	static int mBlueWinCount;
	static int mDrawCount;

	bool m_isVersusMode;                            // _174
	VSFifo* m_vsFifo;                               // _178
	StateMachine<Game::VsGameSection>* m_FSM;       // _17C
	VsGame::State* m_state;                         // _180
	DvdThreadCommand m_dvdThreadCommand;            // _184
	f32 _1F0;                                       // _1F0
	f32 _1F4;                                       // _1F4
	u8 m_menuFlags;                                 // _1F8
	struct ItemHole::Item* m_hole;                  // _1FC
	struct ItemBigFountain::Item* m_fountain;       // _200
	bool m_menuRunning;                             // _204
	bool _205;                                      // _205
	int _208;                                       // _208 - pikmin spawn queue
	ChallengeGame::StageList* m_challengeStageList; // _20C
	VsGame::StageList* m_VsStageList;               // _210
	PikiContainer m_container1;                     // _214
	PikiContainer m_container2;                     // _21C
	char m_caveInfoFilename[128];                   // _248
	char m_editFilename[128];                       // _2A4
	int m_currentFloor;                             // _324
	int m_editNumber;                               // _328
	VsGame::TekiMgr* m_tekiMgr;                     // _32C
	VsGame::CardMgr* m_cardMgr;                     // _330
	ChallengeGame::StageData* m_challengeStageData; // _334
	int m_challengeStageNum;                        // _338
	VsGame::StageData* m_VsStageData;               // _33C
	int m_VsStageNum;                               // _340
	int m_olimarHandicap;                           // _344
	int m_louieHandicap;                            // _348
	int m_vsWinner;                                 // _34C
	f32 m_pikminRatio;                              // _350
	f32 m_pikminCountTimer;                         // _354
	f32 m_redBlueYellowScore[2];                    // _358
	f32 m_cherryScore[2];                           // _360
	f32 m_maxCherryScore[2];                        // _368
	f32 m_yellowScore[2];                           // _370
	f32 m_redBlueScore[2];                          // _378
	Pellet* m_marbleRedBlue[2];                     // _380
	Pellet* m_marbleYellow[7];                      // _388
	int m_dopeCounts[2][2];                         // _3A4
	int m_player2Cherries;                          // _3B4
	int m_player1Cherries;                          // _3B8
	int m_pokoCount;                                // _3BC
	f32 m_timeLimit;                                // _3C0
	int m_cardCount;                                // _3C4
	f32 m_spawnTimer;                               // _3C8
	int m_maxCherries;                              // _3CC
	Pellet** m_cherryArray;                         // _3D0
	int _3D4;                                       // _3D4
	int _3D8;                                       // _3D8
	int m_yellowMarbleCounts[2];                    // _3DC
};
} // namespace Game

#endif
