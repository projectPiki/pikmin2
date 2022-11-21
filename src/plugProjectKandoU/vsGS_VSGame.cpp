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
VSState::VSState() { m_id = 3; }

/*
 * --INFO--
 * Address:	8022EAD8
 * Size:	0000CC
 */
void VSState::do_init(VsGameSection* gameSection)
{
	gameSystem->m_mode = GSM_VERSUS_MODE;

	gameSection->setPlayerMode(2);
	gameSection->setCamController();

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	mgr->checkScene();

	mgr->m_scenes->m_child->startMainSeq();

	gameSection->createFallPikmins(gameSection->m_container1, 0);
}
} // namespace VsGame
} // namespace Game
