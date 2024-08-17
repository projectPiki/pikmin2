#include "Game/Entities/Ujia.h"

namespace Game {
namespace Ujia {

/**
 * @note Address: 0x80265D14
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ウジンコ♀マネージャ"; // ujinko ♀ manager
}

/**
 * @note Address: 0x80265D64
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x80265E44
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x80265F60
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

} // namespace Ujia
} // namespace Game
