#ifndef _GAME_VSGAMESECTION_H
#define _GAME_VSGAMESECTION_H

#include "types.h"

namespace Game {
struct VsGameSection {
	VsGameSection(JKRHeap*, bool);
	~VsGameSection();

	void addChallengeScore(int);
	void calcVsScores();
	void challengeDisablePelplant();
	void clearCaveMenus();
	void clearGetCherryCount();
	void clearGetDopeCount();
	void createFallPikmins(Game::PikiContainer&, int);
	void createRedBlueBedamas(Vector3<float>&);
	void createVsPikmins();
	void createYellowBedamas(int);
	void doDraw(Graphics&);
	void doUpdate();
	void dropCard(void DropCardArg&);
	void getCaveFilename();
	void getCurrFloor();
	void getEditorFilename();
	void getGetDopeCount(int, int);
	void getVsEditNumber();
	void gmOrimaDown(int);
	void gmPikminZero();
	void goNextFloor(Game::ItemHole::Item*);
	void initCardGeneration();
	void initCardPellets();
	void initPlayData();
	void loadChallengeStageList();
	void loadVsStageList();
	void onClearHeap();
	void onInit();
	void onMovieDone(Game::MovieConfig*, unsigned long, unsigned long);
	void onMovieStart(Game::MovieConfig*, unsigned long, unsigned long);
	void onSetSoundScene();
	void onSetupFloatMemory();
	void openCaveMoreMenu(Game::ItemHole::Item*, Controller*);
	void openKanketuMenu(Game::ItemBigFountain::Item*, Controller*);
	void player2enabled();
	void postSetupFloatMemory();
	void pre2dDraw(Graphics&);
	void section_fadeout();
	void sendMessage(Game::GameMessage&);
	void startMainBgm();
	void updateCardGeneration();
	void updateCaveMenus();
	void useCard();
};
} // namespace Game

#endif