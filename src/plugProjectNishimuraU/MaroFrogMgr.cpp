#include "Game/Entities/MaroFrog.h"

namespace Game {
namespace MaroFrog {

/**
 * @note Address: 0x8026152C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "マロガエルマネージャ"; // maro frog manager
}

/**
 * @note Address: 0x8026157C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Frog::Parms); }

/**
 * @note Address: 0x802615C4
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x80261710
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace MaroFrog
} // namespace Game
