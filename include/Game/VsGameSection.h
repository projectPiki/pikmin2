#ifndef _GAME_VSGAMESECTION_H
#define _GAME_VSGAMESECTION_H

#include "types.h"
#include "Game/BaseGameSection.h"
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

	virtual ~VsGameSection();

	void addChallengeScore(int);
	void calcVsScores();
	bool challengeDisablePelplant();
	void clearCaveMenus();
	void clearGetCherryCount();
	void clearGetDopeCount();
	void createFallPikmins(PikiContainer&, int);
	void createRedBlueBedamas(Vector3f&);
	void createVsPikmins();
	void createYellowBedamas(int);
	void doDraw(Graphics&);
	virtual bool doUpdate();
	void dropCard(DropCardArg&);
	char* getCaveFilename();
	void getCurrFloor();
	void getEditorFilename();
	u32 getGetCherryCount(int);
	void getGetDopeCount(int, int);
	void getVsEditNumber();
	void gmOrimaDown(int);
	void gmPikminZero();
	void goNextFloor(ItemHole::Item*);
	void initCardGeneration();
	void initCardPellets();
	void initPlayData();
	void loadChallengeStageList();
	void loadVsStageList();
	void onClearHeap();
	void onInit();
	void onMovieDone(MovieConfig*, u32, u32);
	void onMovieStart(MovieConfig*, u32, u32);
	void onSetSoundScene();
	void onSetupFloatMemory();
	void openCaveMoreMenu(ItemHole::Item*, Controller*);
	void openKanketuMenu(ItemBigFountain::Item*, Controller*);
	bool player2enabled();
	void postSetupFloatMemory();
	void pre2dDraw(Graphics&);
	void section_fadeout();
	void sendMessage(GameMessage&);
	void startMainBgm();
	void updateCardGeneration();
	void updateCaveMenus();
	void useCard();
};
} // namespace Game

#endif
