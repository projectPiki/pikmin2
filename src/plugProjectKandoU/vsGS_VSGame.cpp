#include "types.h"
#include "Game/GameSystem.h"
#include "PSSystem/PSGame.h"
#include "Game/VsGame.h"
#include "nans.h"

static void _Print(char*, ...)
{
	OSReport("\0\0\0\0\0\0\0\0\0\0\0");
	OSReport("vsGS_Game");
}

namespace Game {
namespace VsGame {

/*
 * --INFO--
 * Address:	8022EA94
 * Size:	000044
 */
VSState::VSState() { mId = 3; }

/*
 * --INFO--
 * Address:	8022EAD8
 * Size:	0000CC
 */
void VSState::do_init(VsGameSection* gameSection)
{
	gameSystem->mMode = GSM_VERSUS_MODE;

	gameSection->setPlayerMode(2);
	gameSection->setCamController();

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	mgr->checkScene();

	mgr->mScenes->mChild->startMainSeq();

	gameSection->createFallPikmins(gameSection->mContainer1, 0);
}
} // namespace VsGame
} // namespace Game
