#include "Game/Entities/Tadpole.h"

namespace Game {
namespace Tadpole {

/**
 * @note Address: 0x80278264
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "オタママネージャ"; // otama manager
}

/**
 * @note Address: 0x802782B4
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x80278394
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802784B0
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Tadpole
} // namespace Game
