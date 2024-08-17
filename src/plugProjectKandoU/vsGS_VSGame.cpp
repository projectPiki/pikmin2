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

/**
 * @note Address: 0x8022EA94
 * @note Size: 0x44
 */
VSState::VSState() { mId = VGS_VS; }

/**
 * @note Address: 0x8022EAD8
 * @note Size: 0xCC
 */
void VSState::do_init(VsGameSection* gameSection)
{
	gameSystem->mMode = GSM_VERSUS_MODE;

	gameSection->setPlayerMode(NAVIID_Multiplayer);
	gameSection->setCamController();

	PSSystem::getSceneMgr()->doStartMainSeq();

	gameSection->createFallPikmins(gameSection->mContainer1, 0);
}
} // namespace VsGame
} // namespace Game
