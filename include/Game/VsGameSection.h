#ifndef _GAME_VSGAMESECTION_H
#define _GAME_VSGAMESECTION_H

#include "VsGame/VsGame.h"
#include "types.h"
#include "Game/BaseGameSection.h"
#include "Game/ChallengeGame.h"
#include "Vector3.h"

namespace Game {
struct PikiContainer;
struct MovieConfig;

namespace ItemHole {
struct Item;
} // namespace ItemHole

namespace ItemBigFountain {
struct Item;
} // namespace ItemBigFountain

struct VsGameSection : public BaseGameSection {
	struct DropCardArg {
	};

	VsGameSection(JKRHeap*, bool);

	virtual ~VsGameSection();                                          // _08
	virtual bool doUpdate();                                           // _3C
	virtual void doDraw(Graphics& gfx);                                // _40
	virtual void sendMessage(GameMessage&);                            // _50
	virtual void pre2dDraw(Graphics&);                                 // _54
	virtual int getCurrFloor();                                        // _58
	virtual void addChallengeScore(int);                               // _60
	virtual void startMainBgm();                                       // _64
	virtual void section_fadeout();                                    // _68
	virtual void goNextFloor(ItemHole::Item*);                         // _6C
	virtual void challengeDisablePelplant();                           // _80 (weak)
	virtual char* getCaveFilename();                                   // _84 (weak)
	virtual void getEditorFilename();                                  // _88 (weak)
	virtual void getVsEditNumber();                                    // _8C (weak)
	virtual void onMovieStart(MovieConfig*, u32, u32);                 // _B0
	virtual void onMovieDone(MovieConfig*, u32, u32);                  // _B4
	virtual void gmOrimaDown(int);                                     // _D0
	virtual void gmPikminZero();                                       // _D4
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);       // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*); // _E0
	virtual void onInit();                                             // _F0
	virtual void onSetupFloatMemory();                                 // _120
	virtual void postSetupFloatMemory();                               // _124
	virtual void onSetSoundScene();                                    // _128
	virtual void onClearHeap();                                        // _130
	virtual void player2enabled();                                     // _134 (weak)

	void calcVsScores();
	void clearCaveMenus();
	void clearGetCherryCount();
	void clearGetDopeCount();
	void createFallPikmins(PikiContainer&, int);
	void createRedBlueBedamas(Vector3f&);
	void createVsPikmins();
	void createYellowBedamas(int);
	void dropCard(DropCardArg&);
	u32 getGetCherryCount(int);
	void getGetDopeCount(int, int);
	void initCardGeneration();
	void initCardPellets();
	void initPlayData();
	void loadChallengeStageList();
	void loadVsStageList();
	void updateCardGeneration();
	void updateCaveMenus();
	void useCard();

	u8 _174[0xA0]; // _174
	// probably red and blue 2pbattle onyons
	PikiContainer m_container1; // _214
	PikiContainer m_container2; // _21C
    char m_caveInfoFilename[128]; // _248
    char m_editFilename[128]; // _2A4
    u32 m_currentFloor; // _324
    u32 m_editNUmber; // _328
    VsGame::TekiMgr* m_tekiMgr; // _32C
    VsGame::CardMgr* m_cardMgr; // _330
    ChallengeGame::StageData* m_stageData; // _334
    u32 m_stageNum; // _338
    VsGame::StageData* m_VsStageData; // _33C
    u32 m_VsStageNum; // _340
    u32 m_player1Pikis; // _344
    u32 m_player2Pikis; // _348
    u32 m_vsWinner; // _34C
    f32 _350; // _350
    f32 m_pikminCountTimer; // _354
    f32 _358; // _358
    f32 _35C; // _35C
    f32 _360; // _360
    f32 _364; // _364
    f32 _368; // _368
    f32 _36C; // _36C
    f32 _370; // _370
    f32 _374; // _374
    f32 _378; // _378
    f32 _37C; // _37C
    Pellet* m_marbleRed; // _380
    Pellet* m_marbleBlue; // _384
    Pellet* m_marbleYellow[7]; // _388
    u32 m_dopeCounts[2][2]; // _3A4
    u32 m_player2Cherries; // _3A8
    u32 m_player1Cherries; // _3AC
    u32 m_pokoCount; // _3B0
    f32 m_timeLimit; // _3B4
    u32 m_cardCount; // _3C4
    u32 m_maxCherries; // _3B8
    Pellet** m_cherryArray; // _3BC
    u32 _3C0; // _3C0
    u32 _3C4; // _3C4
    u32 m_yellowMarbleCounts[2]; // _3C8
};
} // namespace Game

#endif
